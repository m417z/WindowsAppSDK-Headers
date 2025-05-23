// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_Windows_AI_ContentSafety_H
#define WINRT_Microsoft_Windows_AI_ContentSafety_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.240405.15"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.240405.15"
#include "winrt/Microsoft.Windows.AI.h"
#include "winrt/impl/Microsoft.Windows.AI.ContentSafety.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IContentFilterOptions<D>::PromptMaxAllowedSeverityLevel() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions)->get_PromptMaxAllowedSeverityLevel(&value));
        return winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IContentFilterOptions<D>::PromptMaxAllowedSeverityLevel(winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions)->put_PromptMaxAllowedSeverityLevel(*(void**)(&value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IContentFilterOptions<D>::ResponseMaxAllowedSeverityLevel() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions)->get_ResponseMaxAllowedSeverityLevel(&value));
        return winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IContentFilterOptions<D>::ResponseMaxAllowedSeverityLevel(winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions)->put_ResponseMaxAllowedSeverityLevel(*(void**)(&value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IContentFilterOptions<D>::ImageMaxAllowedSeverityLevel() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions)->get_ImageMaxAllowedSeverityLevel(&value));
        return winrt::Microsoft::Windows::AI::ContentSafety::ImageContentFilterSeverity{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IContentFilterOptions<D>::ImageMaxAllowedSeverityLevel(winrt::Microsoft::Windows::AI::ContentSafety::ImageContentFilterSeverity const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions)->put_ImageMaxAllowedSeverityLevel(*(void**)(&value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverity<D>::AdultContentLevel() const
    {
        winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity)->get_AdultContentLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverity<D>::AdultContentLevel(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity)->put_AdultContentLevel(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverity<D>::RacyContentLevel() const
    {
        winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity)->get_RacyContentLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverity<D>::RacyContentLevel(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity)->put_RacyContentLevel(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverity<D>::GoryContentLevel() const
    {
        winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity)->get_GoryContentLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverity<D>::GoryContentLevel(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity)->put_GoryContentLevel(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverity<D>::ViolentContentLevel() const
    {
        winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity)->get_ViolentContentLevel(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverity<D>::ViolentContentLevel(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity)->put_ViolentContentLevel(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_IImageContentFilterSeverityFactory<D>::CreateInstance(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& severityForALlCategories) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverityFactory)->CreateInstance(static_cast<int32_t>(severityForALlCategories), &value));
        return winrt::Microsoft::Windows::AI::ContentSafety::ImageContentFilterSeverity{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverity<D>::Hate() const
    {
        winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity)->get_Hate(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverity<D>::Hate(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity)->put_Hate(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverity<D>::Sexual() const
    {
        winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity)->get_Sexual(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverity<D>::Sexual(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity)->put_Sexual(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverity<D>::Violent() const
    {
        winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity)->get_Violent(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverity<D>::Violent(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity)->put_Violent(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverity<D>::SelfHarm() const
    {
        winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity)->get_SelfHarm(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverity<D>::SelfHarm(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity)->put_SelfHarm(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Microsoft_Windows_AI_ContentSafety_ITextContentFilterSeverityFactory<D>::CreateInstance(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& severityForAllCategories) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverityFactory)->CreateInstance(static_cast<int32_t>(severityForAllCategories), &value));
        return winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions> : produce_base<D, winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions>
    {
        int32_t __stdcall get_PromptMaxAllowedSeverityLevel(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity>(this->shim().PromptMaxAllowedSeverityLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PromptMaxAllowedSeverityLevel(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PromptMaxAllowedSeverityLevel(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ResponseMaxAllowedSeverityLevel(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity>(this->shim().ResponseMaxAllowedSeverityLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ResponseMaxAllowedSeverityLevel(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResponseMaxAllowedSeverityLevel(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ImageMaxAllowedSeverityLevel(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::ImageContentFilterSeverity>(this->shim().ImageMaxAllowedSeverityLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ImageMaxAllowedSeverityLevel(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageMaxAllowedSeverityLevel(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::ImageContentFilterSeverity const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity> : produce_base<D, winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity>
    {
        int32_t __stdcall get_AdultContentLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel>(this->shim().AdultContentLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AdultContentLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdultContentLevel(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RacyContentLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel>(this->shim().RacyContentLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RacyContentLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RacyContentLevel(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_GoryContentLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel>(this->shim().GoryContentLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_GoryContentLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GoryContentLevel(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ViolentContentLevel(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel>(this->shim().ViolentContentLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ViolentContentLevel(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViolentContentLevel(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverityFactory> : produce_base<D, winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverityFactory>
    {
        int32_t __stdcall CreateInstance(int32_t severityForALlCategories, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::ImageContentFilterSeverity>(this->shim().CreateInstance(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&severityForALlCategories)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity> : produce_base<D, winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity>
    {
        int32_t __stdcall get_Hate(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel>(this->shim().Hate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Hate(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hate(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Sexual(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel>(this->shim().Sexual());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Sexual(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sexual(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Violent(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel>(this->shim().Violent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Violent(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Violent(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelfHarm(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel>(this->shim().SelfHarm());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SelfHarm(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelfHarm(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverityFactory> : produce_base<D, winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverityFactory>
    {
        int32_t __stdcall CreateInstance(int32_t severityForAllCategories, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity>(this->shim().CreateInstance(*reinterpret_cast<winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const*>(&severityForAllCategories)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Microsoft::Windows::AI::ContentSafety
{
    inline ContentFilterOptions::ContentFilterOptions() :
        ContentFilterOptions(impl::call_factory_cast<ContentFilterOptions(*)(winrt::Windows::Foundation::IActivationFactory const&), ContentFilterOptions>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ContentFilterOptions>(); }))
    {
    }
    inline ImageContentFilterSeverity::ImageContentFilterSeverity() :
        ImageContentFilterSeverity(impl::call_factory_cast<ImageContentFilterSeverity(*)(winrt::Windows::Foundation::IActivationFactory const&), ImageContentFilterSeverity>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<ImageContentFilterSeverity>(); }))
    {
    }
    inline ImageContentFilterSeverity::ImageContentFilterSeverity(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& severityForALlCategories) :
        ImageContentFilterSeverity(impl::call_factory<ImageContentFilterSeverity, IImageContentFilterSeverityFactory>([&](IImageContentFilterSeverityFactory const& f) { return f.CreateInstance(severityForALlCategories); }))
    {
    }
    inline TextContentFilterSeverity::TextContentFilterSeverity() :
        TextContentFilterSeverity(impl::call_factory_cast<TextContentFilterSeverity(*)(winrt::Windows::Foundation::IActivationFactory const&), TextContentFilterSeverity>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<TextContentFilterSeverity>(); }))
    {
    }
    inline TextContentFilterSeverity::TextContentFilterSeverity(winrt::Microsoft::Windows::AI::ContentSafety::SeverityLevel const& severityForAllCategories) :
        TextContentFilterSeverity(impl::call_factory<TextContentFilterSeverity, ITextContentFilterSeverityFactory>([&](ITextContentFilterSeverityFactory const& f) { return f.CreateInstance(severityForAllCategories); }))
    {
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::Windows::AI::ContentSafety::IContentFilterOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverity> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AI::ContentSafety::IImageContentFilterSeverityFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverity> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AI::ContentSafety::ITextContentFilterSeverityFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AI::ContentSafety::ContentFilterOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AI::ContentSafety::ImageContentFilterSeverity> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AI::ContentSafety::TextContentFilterSeverity> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
