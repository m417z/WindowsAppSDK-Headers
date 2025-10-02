from pathlib import Path

PACKAGES_TO_INDEX = [{
    'name': 'Microsoft.UI.Xaml',
}, {
    'name': 'Microsoft.WindowsAppSDK',
}]

# Set to None to index all versions.
NUM_OF_PACKAGES_TO_INDEX_PREVIEW = 1
NUM_OF_PACKAGES_TO_INDEX_STABLE = 1

REMOVE_OLD_PACKAGES = True

# Running cppwinrt on all versions makes the repository much larger (from 200MB
# to 8.5GB). It can be run locally if needed.
CPPWINRT_RUN = True

# WINMDIDL_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\winmdidl.exe'
WINMDIDL_PATH = 'winmdidl.exe'

# CPPWINRT_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\cppwinrt.exe'
CPPWINRT_PATH = 'cppwinrt.exe'

WINMETADATA_PATH = str(Path(__file__).parent / 'WinMetadata/10.0.26100.2605')
