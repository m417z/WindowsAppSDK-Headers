// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_Microsoft_Windows_Globalization_0_H
#define WINRT_Microsoft_Windows_Globalization_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Microsoft::Windows::Globalization
{
    struct IApplicationLanguagesStatics;
    struct ApplicationLanguages;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::Windows::Globalization::IApplicationLanguagesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::Globalization::ApplicationLanguages>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Globalization::ApplicationLanguages> = L"Microsoft.Windows.Globalization.ApplicationLanguages";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::Globalization::IApplicationLanguagesStatics> = L"Microsoft.Windows.Globalization.IApplicationLanguagesStatics";
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::Globalization::IApplicationLanguagesStatics>{ 0x58DFCEF9,0x08EC,0x5086,{ 0x8A,0xF1,0xD5,0xBE,0xAB,0x79,0x25,0x0A } }; // 58DFCEF9-08EC-5086-8AF1-D5BEAB79250A
    template <> struct abi<winrt::Microsoft::Windows::Globalization::IApplicationLanguagesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Languages(void**) noexcept = 0;
            virtual int32_t __stdcall get_ManifestLanguages(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrimaryLanguageOverride(void**) noexcept = 0;
            virtual int32_t __stdcall put_PrimaryLanguageOverride(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_Windows_Globalization_IApplicationLanguagesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) Languages() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) ManifestLanguages() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PrimaryLanguageOverride() const;
        WINRT_IMPL_AUTO(void) PrimaryLanguageOverride(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::Globalization::IApplicationLanguagesStatics>
    {
        template <typename D> using type = consume_Microsoft_Windows_Globalization_IApplicationLanguagesStatics<D>;
    };
}
#endif