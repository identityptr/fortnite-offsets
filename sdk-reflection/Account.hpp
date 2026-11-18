#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Account
{
    struct ExchangeAccessParams
    {
        static constexpr std::string_view Name = "ExchangeAccessParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EntitlementId = 0x0;
            static constexpr std::uintptr_t ReceiptId = 0x10;
            static constexpr std::uintptr_t VendorReceipt = 0x20;
            static constexpr std::uintptr_t AppStore = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EntitlementId", 0x0, "StrProperty"},
            {"ReceiptId", 0x10, "StrProperty"},
            {"VendorReceipt", 0x20, "StrProperty"},
            {"AppStore", 0x30, "StrProperty"},
        }};
    };

    struct ExternalAccountProvider
    {
        static constexpr std::string_view Name = "ExternalAccountProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Services", 0x28, "ArrayProperty"},
        }};
    };

    struct ExternalAccountServiceConfig
    {
        static constexpr std::string_view Name = "ExternalAccountServiceConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t ExternalServiceName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"ExternalServiceName", 0x4, "NameProperty"},
        }};
    };

    struct GiftMessage
    {
        static constexpr std::string_view Name = "GiftMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftCode = 0x0;
            static constexpr std::uintptr_t SenderName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GiftCode", 0x0, "StrProperty"},
            {"SenderName", 0x10, "StrProperty"},
        }};
    };

    struct OnlineAccountCommon
    {
        static constexpr std::string_view Name = "OnlineAccountCommon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AvailabilityServiceGameName = 0x38;
            static constexpr std::uintptr_t bRequireLightswitchAtStartup = 0x48;
            static constexpr std::uintptr_t bPartialLoginEnabled = 0x49;
            static constexpr std::uintptr_t bCheckStoreAccountEnabled = 0x4A;
            static constexpr std::uintptr_t bRedeemOfflinePurchasesEnabled = 0x4B;
            static constexpr std::uintptr_t bCheckingRejoinEnabled = 0x4C;
            static constexpr std::uintptr_t EulaKey = 0x50;
            static constexpr std::uintptr_t EulaKeys = 0x60;
            static constexpr std::uintptr_t EulaKeyMapping = 0x70;
            static constexpr std::uintptr_t EulaCacheVersion = 0x80;
            static constexpr std::uintptr_t bEnableWaitingRoom = 0x84;
            static constexpr std::uintptr_t WebCreateEpicAccountUrl = 0x88;
            static constexpr std::uintptr_t bAllowLocalLogout = 0x98;
            static constexpr std::uintptr_t OSSv2EpicGameServicesLoginRecoveryRetryInterval = 0x9C;
            static constexpr std::uintptr_t OSSv2WaitForEASTokenRetryInterval = 0xA0;
            static constexpr std::uintptr_t OSSv2WaitForEASTokenTimeout = 0xA4;
            static constexpr std::uintptr_t DefaultLoginStepTimeout = 0xE0;
            static constexpr std::uintptr_t CustomLoginStepTimeouts = 0xE8;
            static constexpr std::uintptr_t bEnableDevLoginStepTimeouts = 0xF8;
            static constexpr std::uintptr_t DefaultLogoutStepTimeout = 0xFC;
            static constexpr std::uintptr_t CustomLogoutStepTimeouts = 0x100;
            static constexpr std::uintptr_t bEnableDevLogoutStepTimeouts = 0x110;
            static constexpr std::uintptr_t LogoutFrameDelay = 0x138;
            static constexpr std::uintptr_t ServiceLoginConfig = 0x140;
            static constexpr std::uintptr_t RedeemAccessUrl = 0x150;
            static constexpr std::uintptr_t RequestFreeAccessUrl = 0x160;
            static constexpr std::uintptr_t RealGameAccessUrl = 0x170;
            static constexpr std::uintptr_t SkipRedeemOfflinePurchasesChance = 0x180;
            static constexpr std::uintptr_t bUseFreeAccessInsteadOfGameAccess = 0x184;
            static constexpr std::uintptr_t bShouldGrantFreeAccess = 0x185;
            static constexpr std::uintptr_t bAllowHomeSharingAccess = 0x187;
            static constexpr std::uintptr_t bRequireUGCPrivilege = 0x188;
            static constexpr std::uintptr_t bWaitForEULAHandlerDelegate = 0x189;
            static constexpr std::uintptr_t bPlatformSupportsAutologinRetry = 0x18A;
            static constexpr std::uintptr_t AccessGrantDelaySeconds = 0x3E8;
            static constexpr std::uintptr_t WaitingRoomState = 0x3F0;
            static constexpr std::uintptr_t LoginStepConfig = 0x9D0;
            static constexpr std::uintptr_t LogoutStepConfig = 0x9E0;
            static constexpr std::uintptr_t CreateAccountStepConfig = 0x9F0;
        };

        inline static constexpr std::array<PropertyInfo, 39> Properties{{
            {"AvailabilityServiceGameName", 0x38, "StrProperty"},
            {"bRequireLightswitchAtStartup", 0x48, "BoolProperty"},
            {"bPartialLoginEnabled", 0x49, "BoolProperty"},
            {"bCheckStoreAccountEnabled", 0x4A, "BoolProperty"},
            {"bRedeemOfflinePurchasesEnabled", 0x4B, "BoolProperty"},
            {"bCheckingRejoinEnabled", 0x4C, "BoolProperty"},
            {"EulaKey", 0x50, "StrProperty"},
            {"EulaKeys", 0x60, "ArrayProperty"},
            {"EulaKeyMapping", 0x70, "MapProperty"},
            {"EulaCacheVersion", 0x80, "IntProperty"},
            {"bEnableWaitingRoom", 0x84, "BoolProperty"},
            {"WebCreateEpicAccountUrl", 0x88, "ArrayProperty"},
            {"bAllowLocalLogout", 0x98, "BoolProperty"},
            {"OSSv2EpicGameServicesLoginRecoveryRetryInterval", 0x9C, "FloatProperty"},
            {"OSSv2WaitForEASTokenRetryInterval", 0xA0, "FloatProperty"},
            {"OSSv2WaitForEASTokenTimeout", 0xA4, "FloatProperty"},
            {"DefaultLoginStepTimeout", 0xE0, "FloatProperty"},
            {"CustomLoginStepTimeouts", 0xE8, "MapProperty"},
            {"bEnableDevLoginStepTimeouts", 0xF8, "BoolProperty"},
            {"DefaultLogoutStepTimeout", 0xFC, "FloatProperty"},
            {"CustomLogoutStepTimeouts", 0x100, "MapProperty"},
            {"bEnableDevLogoutStepTimeouts", 0x110, "BoolProperty"},
            {"LogoutFrameDelay", 0x138, "IntProperty"},
            {"ServiceLoginConfig", 0x140, "ArrayProperty"},
            {"RedeemAccessUrl", 0x150, "StrProperty"},
            {"RequestFreeAccessUrl", 0x160, "StrProperty"},
            {"RealGameAccessUrl", 0x170, "StrProperty"},
            {"SkipRedeemOfflinePurchasesChance", 0x180, "FloatProperty"},
            {"bUseFreeAccessInsteadOfGameAccess", 0x184, "BoolProperty"},
            {"bShouldGrantFreeAccess", 0x185, "BoolProperty"},
            {"bAllowHomeSharingAccess", 0x187, "BoolProperty"},
            {"bRequireUGCPrivilege", 0x188, "BoolProperty"},
            {"bWaitForEULAHandlerDelegate", 0x189, "BoolProperty"},
            {"bPlatformSupportsAutologinRetry", 0x18A, "BoolProperty"},
            {"AccessGrantDelaySeconds", 0x3E8, "FloatProperty"},
            {"WaitingRoomState", 0x3F0, "ObjectProperty"},
            {"LoginStepConfig", 0x9D0, "ArrayProperty"},
            {"LogoutStepConfig", 0x9E0, "ArrayProperty"},
            {"CreateAccountStepConfig", 0x9F0, "ArrayProperty"},
        }};
    };

    struct OnlineAccountOperationStepConfig
    {
        static constexpr std::string_view Name = "OnlineAccountOperationStepConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Dependencies = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Dependencies", 0x8, "ArrayProperty"},
        }};
    };

    struct OnlineAccountTexts
    {
        static constexpr std::string_view Name = "OnlineAccountTexts";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AllGiftCodesUsed = 0x0;
            static constexpr std::uintptr_t AssociateConsoleAuth = 0x10;
            static constexpr std::uintptr_t AutoLoginFailed = 0x20;
            static constexpr std::uintptr_t AutoLoginFailedMobile = 0x30;
            static constexpr std::uintptr_t BannedFromGame = 0x40;
            static constexpr std::uintptr_t CheckEntitledToPlay = 0x50;
            static constexpr std::uintptr_t CheckingRejoin = 0x60;
            static constexpr std::uintptr_t CheckServiceAvailability = 0x70;
            static constexpr std::uintptr_t ConsolePrivileges = 0x80;
            static constexpr std::uintptr_t CreateAccountCompleted = 0x90;
            static constexpr std::uintptr_t CreateAccountFailure = 0xA0;
            static constexpr std::uintptr_t CreateAccountStepTimeout = 0xB0;
            static constexpr std::uintptr_t CreateHeadless = 0xC0;
            static constexpr std::uintptr_t DoQosPingTests = 0xD0;
            static constexpr std::uintptr_t DowntimeMinutesWarningText = 0xE0;
            static constexpr std::uintptr_t DowntimeSecondsWarningText = 0xF0;
            static constexpr std::uintptr_t DuplicateAuthAssociaton = 0x100;
            static constexpr std::uintptr_t EulaCheck = 0x110;
            static constexpr std::uintptr_t ExchangeConsoleGiftsForAccess = 0x120;
            static constexpr std::uintptr_t FailedAccountCreate = 0x130;
            static constexpr std::uintptr_t FailedEulaCheck_EulaAcceptanceFailed = 0x140;
            static constexpr std::uintptr_t FailedEulaCheck_MustAcceptEula = 0x150;
            static constexpr std::uintptr_t FailedLoginCredentialsMsg = 0x160;
            static constexpr std::uintptr_t FailedLoginAgeVerificationIncomplete = 0x170;
            static constexpr std::uintptr_t FailedLoginParentalLock = 0x180;
            static constexpr std::uintptr_t FailedLoginNoRealId = 0x190;
            static constexpr std::uintptr_t FailedLoginLockoutMsg = 0x1A0;
            static constexpr std::uintptr_t FailedLoginRequiresMFA = 0x1B0;
            static constexpr std::uintptr_t FailedLoginRequiresAuthAppMFA = 0x1C0;
            static constexpr std::uintptr_t FailedInvalidMFA = 0x1D0;
            static constexpr std::uintptr_t FailedLoginRequiresCorrectiveAction = 0x1E0;
            static constexpr std::uintptr_t FailedLoginMsg = 0x1F0;
            static constexpr std::uintptr_t FailedLoginMsg_InvalidRefreshToken = 0x200;
            static constexpr std::uintptr_t FailedStartLogin = 0x210;
            static constexpr std::uintptr_t FailedStartLogin_InvalidRefreshToken = 0x220;
            static constexpr std::uintptr_t FailedStartLogin_NoConnection = 0x230;
            static constexpr std::uintptr_t GameDisplayName = 0x240;
            static constexpr std::uintptr_t GeneralLoginFailure = 0x250;
            static constexpr std::uintptr_t HeadlessAccountFailed = 0x260;
            static constexpr std::uintptr_t InMatchShutdownTimeWarningText = 0x270;
            static constexpr std::uintptr_t InvalidUser = 0x280;
            static constexpr std::uintptr_t LoggedOutofMCP = 0x290;
            static constexpr std::uintptr_t DisconnectedFromMCP = 0x2A0;
            static constexpr std::uintptr_t LoggedOutReturnedToTitle = 0x2B0;
            static constexpr std::uintptr_t LoggedOutSwitchedProfile = 0x2C0;
            static constexpr std::uintptr_t LoggingIn = 0x2D0;
            static constexpr std::uintptr_t LoggingInConsoleAuth = 0x2E0;
            static constexpr std::uintptr_t LoggingOut = 0x2F0;
            static constexpr std::uintptr_t LoginConsole = 0x300;
            static constexpr std::uintptr_t LoginFailure = 0x310;
            static constexpr std::uintptr_t Logout_Unlink = 0x320;
            static constexpr std::uintptr_t LogoutCompleted = 0x330;
            static constexpr std::uintptr_t LostConnection = 0x340;
            static constexpr std::uintptr_t LoginStepTimeout = 0x350;
            static constexpr std::uintptr_t MCPTimeout = 0x360;
            static constexpr std::uintptr_t LightswitchCheckNetworkFailureMsg = 0x370;
            static constexpr std::uintptr_t NetworkConnectionUnavailable = 0x380;
            static constexpr std::uintptr_t NoPlayEntitlement = 0x390;
            static constexpr std::uintptr_t NoServerAccess = 0x3A0;
            static constexpr std::uintptr_t PlayAccessRevoked = 0x3B0;
            static constexpr std::uintptr_t PremiumAccountName_Default = 0x3C0;
            static constexpr std::uintptr_t PremiumAccountName_Sony = 0x3D0;
            static constexpr std::uintptr_t PremiumAccountName_Nintendo = 0x3E0;
            static constexpr std::uintptr_t PremiumAccountName_XboxOne = 0x3F0;
            static constexpr std::uintptr_t CheckLocalUserIsStoreUser = 0x400;
            static constexpr std::uintptr_t RedeemOfflinePurchases = 0x410;
            static constexpr std::uintptr_t ServiceDowntime = 0x420;
            static constexpr std::uintptr_t SignInCompleting = 0x430;
            static constexpr std::uintptr_t SignIntoConsoleServices = 0x440;
            static constexpr std::uintptr_t TokenExpired = 0x450;
            static constexpr std::uintptr_t UnableToConnect = 0x460;
            static constexpr std::uintptr_t UnableToJoinWaitingRoomLoginQueue = 0x470;
            static constexpr std::uintptr_t UnexpectedConsoleAuthFailure = 0x480;
            static constexpr std::uintptr_t UnlinkConsoleFailed = 0x490;
            static constexpr std::uintptr_t UserLoginFailed = 0x4A0;
            static constexpr std::uintptr_t WaitingRoom = 0x4B0;
            static constexpr std::uintptr_t WaitingRoomError = 0x4C0;
            static constexpr std::uintptr_t WaitingRoomFailure = 0x4D0;
            static constexpr std::uintptr_t WaitingRoomWaiting = 0x4E0;
            static constexpr std::uintptr_t FailedLoginConsole = 0x4F0;
            static constexpr std::uintptr_t LoggingInExternalAuth = 0x5E0;
            static constexpr std::uintptr_t CreateDeviceAuth = 0x5F0;
            static constexpr std::uintptr_t ExtAuthCanceled = 0x600;
            static constexpr std::uintptr_t ExtAuthFailure = 0x610;
            static constexpr std::uintptr_t ExtAuthAssociationFailure = 0x620;
            static constexpr std::uintptr_t ExtAuthTimeout = 0x630;
            static constexpr std::uintptr_t ExtAuthMissingAuthAssociation = 0x640;
            static constexpr std::uintptr_t UnableToQueryReceipts = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 88> Properties{{
            {"AllGiftCodesUsed", 0x0, "TextProperty"},
            {"AssociateConsoleAuth", 0x10, "TextProperty"},
            {"AutoLoginFailed", 0x20, "TextProperty"},
            {"AutoLoginFailedMobile", 0x30, "TextProperty"},
            {"BannedFromGame", 0x40, "TextProperty"},
            {"CheckEntitledToPlay", 0x50, "TextProperty"},
            {"CheckingRejoin", 0x60, "TextProperty"},
            {"CheckServiceAvailability", 0x70, "TextProperty"},
            {"ConsolePrivileges", 0x80, "TextProperty"},
            {"CreateAccountCompleted", 0x90, "TextProperty"},
            {"CreateAccountFailure", 0xA0, "TextProperty"},
            {"CreateAccountStepTimeout", 0xB0, "TextProperty"},
            {"CreateHeadless", 0xC0, "TextProperty"},
            {"DoQosPingTests", 0xD0, "TextProperty"},
            {"DowntimeMinutesWarningText", 0xE0, "TextProperty"},
            {"DowntimeSecondsWarningText", 0xF0, "TextProperty"},
            {"DuplicateAuthAssociaton", 0x100, "TextProperty"},
            {"EulaCheck", 0x110, "TextProperty"},
            {"ExchangeConsoleGiftsForAccess", 0x120, "TextProperty"},
            {"FailedAccountCreate", 0x130, "TextProperty"},
            {"FailedEulaCheck_EulaAcceptanceFailed", 0x140, "TextProperty"},
            {"FailedEulaCheck_MustAcceptEula", 0x150, "TextProperty"},
            {"FailedLoginCredentialsMsg", 0x160, "TextProperty"},
            {"FailedLoginAgeVerificationIncomplete", 0x170, "TextProperty"},
            {"FailedLoginParentalLock", 0x180, "TextProperty"},
            {"FailedLoginNoRealId", 0x190, "TextProperty"},
            {"FailedLoginLockoutMsg", 0x1A0, "TextProperty"},
            {"FailedLoginRequiresMFA", 0x1B0, "TextProperty"},
            {"FailedLoginRequiresAuthAppMFA", 0x1C0, "TextProperty"},
            {"FailedInvalidMFA", 0x1D0, "TextProperty"},
            {"FailedLoginRequiresCorrectiveAction", 0x1E0, "TextProperty"},
            {"FailedLoginMsg", 0x1F0, "TextProperty"},
            {"FailedLoginMsg_InvalidRefreshToken", 0x200, "TextProperty"},
            {"FailedStartLogin", 0x210, "TextProperty"},
            {"FailedStartLogin_InvalidRefreshToken", 0x220, "TextProperty"},
            {"FailedStartLogin_NoConnection", 0x230, "TextProperty"},
            {"GameDisplayName", 0x240, "TextProperty"},
            {"GeneralLoginFailure", 0x250, "TextProperty"},
            {"HeadlessAccountFailed", 0x260, "TextProperty"},
            {"InMatchShutdownTimeWarningText", 0x270, "TextProperty"},
            {"InvalidUser", 0x280, "TextProperty"},
            {"LoggedOutofMCP", 0x290, "TextProperty"},
            {"DisconnectedFromMCP", 0x2A0, "TextProperty"},
            {"LoggedOutReturnedToTitle", 0x2B0, "TextProperty"},
            {"LoggedOutSwitchedProfile", 0x2C0, "TextProperty"},
            {"LoggingIn", 0x2D0, "TextProperty"},
            {"LoggingInConsoleAuth", 0x2E0, "TextProperty"},
            {"LoggingOut", 0x2F0, "TextProperty"},
            {"LoginConsole", 0x300, "TextProperty"},
            {"LoginFailure", 0x310, "TextProperty"},
            {"Logout_Unlink", 0x320, "TextProperty"},
            {"LogoutCompleted", 0x330, "TextProperty"},
            {"LostConnection", 0x340, "TextProperty"},
            {"LoginStepTimeout", 0x350, "TextProperty"},
            {"MCPTimeout", 0x360, "TextProperty"},
            {"LightswitchCheckNetworkFailureMsg", 0x370, "TextProperty"},
            {"NetworkConnectionUnavailable", 0x380, "TextProperty"},
            {"NoPlayEntitlement", 0x390, "TextProperty"},
            {"NoServerAccess", 0x3A0, "TextProperty"},
            {"PlayAccessRevoked", 0x3B0, "TextProperty"},
            {"PremiumAccountName_Default", 0x3C0, "TextProperty"},
            {"PremiumAccountName_Sony", 0x3D0, "TextProperty"},
            {"PremiumAccountName_Nintendo", 0x3E0, "TextProperty"},
            {"PremiumAccountName_XboxOne", 0x3F0, "TextProperty"},
            {"CheckLocalUserIsStoreUser", 0x400, "TextProperty"},
            {"RedeemOfflinePurchases", 0x410, "TextProperty"},
            {"ServiceDowntime", 0x420, "TextProperty"},
            {"SignInCompleting", 0x430, "TextProperty"},
            {"SignIntoConsoleServices", 0x440, "TextProperty"},
            {"TokenExpired", 0x450, "TextProperty"},
            {"UnableToConnect", 0x460, "TextProperty"},
            {"UnableToJoinWaitingRoomLoginQueue", 0x470, "TextProperty"},
            {"UnexpectedConsoleAuthFailure", 0x480, "TextProperty"},
            {"UnlinkConsoleFailed", 0x490, "TextProperty"},
            {"UserLoginFailed", 0x4A0, "TextProperty"},
            {"WaitingRoom", 0x4B0, "TextProperty"},
            {"WaitingRoomError", 0x4C0, "TextProperty"},
            {"WaitingRoomFailure", 0x4D0, "TextProperty"},
            {"WaitingRoomWaiting", 0x4E0, "TextProperty"},
            {"FailedLoginConsole", 0x4F0, "StructProperty"},
            {"LoggingInExternalAuth", 0x5E0, "TextProperty"},
            {"CreateDeviceAuth", 0x5F0, "TextProperty"},
            {"ExtAuthCanceled", 0x600, "TextProperty"},
            {"ExtAuthFailure", 0x610, "TextProperty"},
            {"ExtAuthAssociationFailure", 0x620, "TextProperty"},
            {"ExtAuthTimeout", 0x630, "TextProperty"},
            {"ExtAuthMissingAuthAssociation", 0x640, "TextProperty"},
            {"UnableToQueryReceipts", 0x650, "TextProperty"},
        }};
    };

    struct OnlineAccountTexts_FailedLoginConsole
    {
        static constexpr std::string_view Name = "OnlineAccountTexts_FailedLoginConsole";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AgeRestriction = 0x0;
            static constexpr std::uintptr_t Generic = 0x10;
            static constexpr std::uintptr_t MissingAuthAssociation = 0x20;
            static constexpr std::uintptr_t NeedPremiumAccount = 0x30;
            static constexpr std::uintptr_t OnlinePlayRestriction = 0x40;
            static constexpr std::uintptr_t PatchAvailable = 0x50;
            static constexpr std::uintptr_t PatchAvailableInstruction_Default = 0x60;
            static constexpr std::uintptr_t PatchAvailableInstruction_Xbox = 0x70;
            static constexpr std::uintptr_t PleaseSignIn = 0x80;
            static constexpr std::uintptr_t SystemUpdateAvailable = 0x90;
            static constexpr std::uintptr_t UI = 0xA0;
            static constexpr std::uintptr_t UnableToComplete = 0xB0;
            static constexpr std::uintptr_t UnableToSignIn = 0xC0;
            static constexpr std::uintptr_t UnableToStartPrivCheck = 0xD0;
            static constexpr std::uintptr_t UnexpectedError = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"AgeRestriction", 0x0, "TextProperty"},
            {"Generic", 0x10, "TextProperty"},
            {"MissingAuthAssociation", 0x20, "TextProperty"},
            {"NeedPremiumAccount", 0x30, "TextProperty"},
            {"OnlinePlayRestriction", 0x40, "TextProperty"},
            {"PatchAvailable", 0x50, "TextProperty"},
            {"PatchAvailableInstruction_Default", 0x60, "TextProperty"},
            {"PatchAvailableInstruction_Xbox", 0x70, "TextProperty"},
            {"PleaseSignIn", 0x80, "TextProperty"},
            {"SystemUpdateAvailable", 0x90, "TextProperty"},
            {"UI", 0xA0, "TextProperty"},
            {"UnableToComplete", 0xB0, "TextProperty"},
            {"UnableToSignIn", 0xC0, "TextProperty"},
            {"UnableToStartPrivCheck", 0xD0, "TextProperty"},
            {"UnexpectedError", 0xE0, "TextProperty"},
        }};
    };

    struct ServiceLoginConfig
    {
        static constexpr std::string_view Name = "ServiceLoginConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LoginType = 0x0;
            static constexpr std::uintptr_t ExternalAuthMethod = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LoginType", 0x0, "NameProperty"},
            {"ExternalAuthMethod", 0x4, "NameProperty"},
        }};
    };

    struct WaitingRoomState
    {
        static constexpr std::string_view Name = "WaitingRoomState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GracePeriodMins = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GracePeriodMins", 0x5C, "IntProperty"},
        }};
    };

    struct WebEnvUrl
    {
        static constexpr std::string_view Name = "WebEnvUrl";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Url = 0x0;
            static constexpr std::uintptr_t RedirectUrl = 0x10;
            static constexpr std::uintptr_t Environment = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Url", 0x0, "StrProperty"},
            {"RedirectUrl", 0x10, "StrProperty"},
            {"Environment", 0x20, "StrProperty"},
        }};
    };

}
