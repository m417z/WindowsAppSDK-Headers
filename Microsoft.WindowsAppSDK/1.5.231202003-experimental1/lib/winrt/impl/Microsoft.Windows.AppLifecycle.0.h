// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220110.5

#pragma once
#ifndef WINRT_Microsoft_Windows_AppLifecycle_0_H
#define WINRT_Microsoft_Windows_AppLifecycle_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core
{
    enum class AppRestartFailureReason : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Microsoft::Windows::AppLifecycle
{
    enum class ExtendedActivationKind : int32_t
    {
        Launch = 0,
        Search = 1,
        ShareTarget = 2,
        File = 3,
        Protocol = 4,
        FileOpenPicker = 5,
        FileSavePicker = 6,
        CachedFileUpdater = 7,
        ContactPicker = 8,
        Device = 9,
        PrintTaskSettings = 10,
        CameraSettings = 11,
        RestrictedLaunch = 12,
        AppointmentsProvider = 13,
        Contact = 14,
        LockScreenCall = 15,
        VoiceCommand = 16,
        LockScreen = 17,
        PickerReturned = 1000,
        WalletAction = 1001,
        PickFileContinuation = 1002,
        PickSaveFileContinuation = 1003,
        PickFolderContinuation = 1004,
        WebAuthenticationBrokerContinuation = 1005,
        WebAccountProvider = 1006,
        ComponentUI = 1007,
        ProtocolForResults = 1009,
        ToastNotification = 1010,
        Print3DWorkflow = 1011,
        DialReceiver = 1012,
        DevicePairing = 1013,
        UserDataAccountsProvider = 1014,
        FilePickerExperience = 1015,
        LockScreenComponent = 1016,
        ContactPanel = 1017,
        PrintWorkflowForegroundTask = 1018,
        GameUIProvider = 1019,
        StartupTask = 1020,
        CommandLineLaunch = 1021,
        BarcodeScannerProvider = 1022,
        PrintSupportJobUI = 1023,
        PrintSupportSettingsUI = 1024,
        PhoneCallActivation = 1025,
        VpnForeground = 1026,
        Push = 5000,
        AppNotification = 5001,
    };
    struct IActivationRegistrationManagerStatics;
    struct IAppActivationArguments;
    struct IAppInstance;
    struct IAppInstanceStatics;
    struct IAppInstanceStatics2;
    struct ActivationRegistrationManager;
    struct AppActivationArguments;
    struct AppInstance;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::IAppInstance>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::ActivationRegistrationManager>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::AppInstance>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::AppLifecycle::ExtendedActivationKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::ActivationRegistrationManager> = L"Microsoft.Windows.AppLifecycle.ActivationRegistrationManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments> = L"Microsoft.Windows.AppLifecycle.AppActivationArguments";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::AppInstance> = L"Microsoft.Windows.AppLifecycle.AppInstance";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::ExtendedActivationKind> = L"Microsoft.Windows.AppLifecycle.ExtendedActivationKind";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics> = L"Microsoft.Windows.AppLifecycle.IActivationRegistrationManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments> = L"Microsoft.Windows.AppLifecycle.IAppActivationArguments";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::IAppInstance> = L"Microsoft.Windows.AppLifecycle.IAppInstance";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics> = L"Microsoft.Windows.AppLifecycle.IAppInstanceStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2> = L"Microsoft.Windows.AppLifecycle.IAppInstanceStatics2";
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics>{ 0x5AC4E92E,0x017B,0x5D68,{ 0x81,0x98,0xF6,0x86,0x36,0xAB,0x99,0xD3 } }; // 5AC4E92E-017B-5D68-8198-F68636AB99D3
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments>{ 0x14F99EAF,0x1580,0x5062,{ 0xBD,0xC8,0xD5,0xD1,0xC3,0x11,0x38,0xFB } }; // 14F99EAF-1580-5062-BDC8-D5D1C31138FB
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppLifecycle::IAppInstance>{ 0x75766AE4,0x0239,0x5A26,{ 0xB9,0xDA,0xD5,0xBF,0xC7,0x5A,0x48,0x66 } }; // 75766AE4-0239-5A26-B9DA-D5BFC75A4866
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics>{ 0x4F414B25,0x8330,0x5A9B,{ 0xBB,0xC1,0x82,0x29,0xD4,0x79,0x64,0x9D } }; // 4F414B25-8330-5A9B-BBC1-8229D479649D
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2>{ 0xFE9F1885,0x7160,0x5397,{ 0xBA,0x9B,0x58,0x90,0xB2,0x4F,0xDC,0x04 } }; // FE9F1885-7160-5397-BA9B-5890B24FDC04
    template <> struct default_interface<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments>{ using type = winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments; };
    template <> struct default_interface<winrt::Microsoft::Windows::AppLifecycle::AppInstance>{ using type = winrt::Microsoft::Windows::AppLifecycle::IAppInstance; };
    template <> struct abi<winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall RegisterForFileTypeActivation(uint32_t, void**, void*, void*, uint32_t, void**, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterForProtocolActivation(void*, void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall RegisterForStartupActivation(void*, void*) noexcept = 0;
            virtual int32_t __stdcall UnregisterForFileTypeActivation(uint32_t, void**, void*) noexcept = 0;
            virtual int32_t __stdcall UnregisterForProtocolActivation(void*, void*) noexcept = 0;
            virtual int32_t __stdcall UnregisterForStartupActivation(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Data(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppLifecycle::IAppInstance>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall UnregisterKey() noexcept = 0;
            virtual int32_t __stdcall RedirectActivationToAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetActivatedEventArgs(void**) noexcept = 0;
            virtual int32_t __stdcall add_Activated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Activated(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Key(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsCurrent(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ProcessId(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrent(void**) noexcept = 0;
            virtual int32_t __stdcall GetInstances(void**) noexcept = 0;
            virtual int32_t __stdcall FindOrRegisterForKey(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Restart(void*, int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppLifecycle_IActivationRegistrationManagerStatics
    {
        WINRT_IMPL_AUTO(void) RegisterForFileTypeActivation(array_view<hstring const> supportedFileTypes, param::hstring const& logo, param::hstring const& displayName, array_view<hstring const> supportedVerbs, param::hstring const& exePath) const;
        WINRT_IMPL_AUTO(void) RegisterForProtocolActivation(param::hstring const& scheme, param::hstring const& logo, param::hstring const& displayName, param::hstring const& exePath) const;
        WINRT_IMPL_AUTO(void) RegisterForStartupActivation(param::hstring const& taskId, param::hstring const& exePath) const;
        WINRT_IMPL_AUTO(void) UnregisterForFileTypeActivation(array_view<hstring const> fileTypes, param::hstring const& exePath) const;
        WINRT_IMPL_AUTO(void) UnregisterForProtocolActivation(param::hstring const& scheme, param::hstring const& exePath) const;
        WINRT_IMPL_AUTO(void) UnregisterForStartupActivation(param::hstring const& taskId) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppLifecycle_IActivationRegistrationManagerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppLifecycle_IAppActivationArguments
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Microsoft::Windows::AppLifecycle::ExtendedActivationKind) Kind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::IInspectable) Data() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppLifecycle_IAppActivationArguments<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppLifecycle_IAppInstance
    {
        WINRT_IMPL_AUTO(void) UnregisterKey() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) RedirectActivationToAsync(winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments const& args) const;
        WINRT_IMPL_AUTO(winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments) GetActivatedEventArgs() const;
        WINRT_IMPL_AUTO(winrt::event_token) Activated(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments> const& handler) const;
        using Activated_revoker = impl::event_revoker<winrt::Microsoft::Windows::AppLifecycle::IAppInstance, &impl::abi_t<winrt::Microsoft::Windows::AppLifecycle::IAppInstance>::remove_Activated>;
        [[nodiscard]] Activated_revoker Activated(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments> const& handler) const;
        WINRT_IMPL_AUTO(void) Activated(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Key() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsCurrent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) ProcessId() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppLifecycle::IAppInstance>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppLifecycle_IAppInstanceStatics
    {
        WINRT_IMPL_AUTO(winrt::Microsoft::Windows::AppLifecycle::AppInstance) GetCurrent() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Windows::AppLifecycle::AppInstance>) GetInstances() const;
        WINRT_IMPL_AUTO(winrt::Microsoft::Windows::AppLifecycle::AppInstance) FindOrRegisterForKey(param::hstring const& key) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppLifecycle_IAppInstanceStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_AppLifecycle_IAppInstanceStatics2
    {
        WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::Core::AppRestartFailureReason) Restart(param::hstring const& arguments) const;
    };
    template <> struct consume<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2>
    {
        template <typename D> using type = consume_Microsoft_Windows_AppLifecycle_IAppInstanceStatics2<D>;
    };
}
#endif
