import argparse
import shutil
from pathlib import Path


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("winui2_dir", type=Path, help="Path to WinUI2 includes, e.g. Microsoft.UI.Xaml\\2.8.6\\lib\\winrt")
    parser.add_argument("winui3_dir", type=Path, help="Path to WinUI3 includes, e.g. Microsoft.WindowsAppSDK\\1.6.241114003\\lib\\winrt")
    parser.add_argument("output_dir", type=Path)
    args = parser.parse_args()

    winui2_dir: Path = args.winui2_dir
    winui3_dir: Path = args.winui3_dir
    output_dir: Path = args.output_dir

    output_dir.mkdir()

    winui2_files = set(p.relative_to(winui2_dir)
                       for p in winui2_dir.rglob("*") if p.is_file())
    winui3_files = set(p.relative_to(winui3_dir)
                       for p in winui3_dir.rglob("*") if p.is_file())

    for f in winui2_files | winui3_files:
        winui2_path = winui2_dir / f
        winui3_path = winui3_dir / f
        output_path = output_dir / f
        output_path.parent.mkdir(parents=True, exist_ok=True)

        winui2_path_exists = winui2_path.exists()
        winui3_path_exists = winui3_path.exists()

        if not winui2_path_exists and not winui3_path_exists:
            raise RuntimeError(f"Neither {winui2_path} nor {winui3_path} exist")

        if (winui2_path_exists and winui3_path_exists and
                winui2_path.read_bytes() == winui3_path.read_bytes()):
            shutil.copy(winui2_path, output_path)
            continue

        winui2_output_path = output_dir / "winui2" / f
        winui3_output_path = output_dir / "winui3" / f

        merged_header_source = "// Generated by https://github.com/m417z/WindowsAppSDK-Headers/blob/main/merge_winui2_winui3_includes.py\n"
        merged_header_source += "#pragma once\n"
        merged_header_source += "#ifdef WH_WINRT_WINUI2\n"

        if winui2_path_exists:
            winui2_output_path.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy(winui2_path, winui2_output_path)
            merged_header_source += f"#include \"winrt/winui2/{f.as_posix()}\"\n"
        else:
            merged_header_source += f"#error \"Can't use a WinUI 3 header when WH_WINRT_WINUI2 is defined\"\n"

        merged_header_source += "#else\n"

        if winui3_path_exists:
            winui3_output_path.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy(winui3_path, winui3_output_path)
            merged_header_source += f"#include \"winrt/winui3/{f.as_posix()}\"\n"
        else:
            merged_header_source += f"#error \"Can't use a WinUI 2 header when WH_WINRT_WINUI2 is not defined\"\n"

        merged_header_source += "#endif\n"

        output_path.write_text(merged_header_source)

    base_h_path = output_dir / "base.h"
    base_h = base_h_path.read_text()
    base_h = base_h.replace("\n#include <cstring>\n#include <iterator>\n",
                            "\n#include <cstring>\n#include <exception>\n#include <iterator>\n")
    base_h_path.write_text(base_h)


if __name__ == "__main__":
    main()
