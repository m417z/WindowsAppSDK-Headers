// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_Microsoft_UI_Input_Experimental_1_H
#define WINRT_Microsoft_UI_Input_Experimental_1_H
#include "winrt/impl/Microsoft.UI.Input.Experimental.0.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Input::Experimental
{
    struct __declspec(empty_bases) IExpInputSite :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IExpInputSite>
    {
        IExpInputSite(std::nullptr_t = nullptr) noexcept {}
        IExpInputSite(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IExpPointerPoint :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IExpPointerPoint>
    {
        IExpPointerPoint(std::nullptr_t = nullptr) noexcept {}
        IExpPointerPoint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IExpPointerPointStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IExpPointerPointStatics>
    {
        IExpPointerPointStatics(std::nullptr_t = nullptr) noexcept {}
        IExpPointerPointStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif