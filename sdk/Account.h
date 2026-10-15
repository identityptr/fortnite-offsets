/**
 * decamp dumper generated SDK
 * Package: /Script/Account
 */
#pragma once
#include "Basic.h"

// /Script/Account.ExchangeAccessParams
// Kind: ScriptStruct; super: none
struct FExchangeAccessParams
{
public:
    FString EntitlementId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ReceiptId; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString VendorReceipt; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString AppStore; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FExchangeAccessParams, EntitlementId) == 0, "Offset mismatch for FExchangeAccessParams::EntitlementId");
static_assert(offsetof(FExchangeAccessParams, ReceiptId) == 16, "Offset mismatch for FExchangeAccessParams::ReceiptId");
static_assert(offsetof(FExchangeAccessParams, VendorReceipt) == 32, "Offset mismatch for FExchangeAccessParams::VendorReceipt");
static_assert(offsetof(FExchangeAccessParams, AppStore) == 48, "Offset mismatch for FExchangeAccessParams::AppStore");

// /Script/Account.ExternalAccountServiceConfig
// Kind: ScriptStruct; super: none
struct FExternalAccountServiceConfig
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    FName ExternalServiceName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FExternalAccountServiceConfig, Type) == 0, "Offset mismatch for FExternalAccountServiceConfig::Type");
static_assert(offsetof(FExternalAccountServiceConfig, ExternalServiceName) == 4, "Offset mismatch for FExternalAccountServiceConfig::ExternalServiceName");

// /Script/Account.GiftMessage
// Kind: ScriptStruct; super: none
struct FGiftMessage
{
public:
    FString GiftCode; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString SenderName; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FGiftMessage, GiftCode) == 0, "Offset mismatch for FGiftMessage::GiftCode");
static_assert(offsetof(FGiftMessage, SenderName) == 16, "Offset mismatch for FGiftMessage::SenderName");

// /Script/Account.OnlineAccountOperationStepConfig
// Kind: ScriptStruct; super: none
struct FOnlineAccountOperationStepConfig
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Dependencies; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOnlineAccountOperationStepConfig, Name) == 0, "Offset mismatch for FOnlineAccountOperationStepConfig::Name");
static_assert(offsetof(FOnlineAccountOperationStepConfig, Dependencies) == 8, "Offset mismatch for FOnlineAccountOperationStepConfig::Dependencies");

// /Script/Account.OnlineAccountTexts
// Kind: ScriptStruct; super: none
struct FOnlineAccountTexts
{
public:
    std::uint8_t AllGiftCodesUsed[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssociateConsoleAuth[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t AutoLoginFailed[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t AutoLoginFailedMobile[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t BannedFromGame[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t CheckEntitledToPlay[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t CheckingRejoin[0x10]; // 0x0060 (Size: 0x10, Type: TextProperty)
    std::uint8_t CheckServiceAvailability[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t ConsolePrivileges[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t CreateAccountCompleted[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t CreateAccountFailure[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t CreateAccountStepTimeout[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t CreateHeadless[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DoQosPingTests[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DowntimeMinutesWarningText[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DowntimeSecondsWarningText[0x10]; // 0x00F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DuplicateAuthAssociaton[0x10]; // 0x0100 (Size: 0x10, Type: TextProperty)
    std::uint8_t EulaCheck[0x10]; // 0x0110 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExchangeConsoleGiftsForAccess[0x10]; // 0x0120 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedAccountCreate[0x10]; // 0x0130 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedEulaCheck_EulaAcceptanceFailed[0x10]; // 0x0140 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedEulaCheck_MustAcceptEula[0x10]; // 0x0150 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginCredentialsMsg[0x10]; // 0x0160 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginAgeVerificationIncomplete[0x10]; // 0x0170 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginParentalLock[0x10]; // 0x0180 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginNoRealId[0x10]; // 0x0190 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginLockoutMsg[0x10]; // 0x01A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginRequiresMFA[0x10]; // 0x01B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginRequiresAuthAppMFA[0x10]; // 0x01C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedInvalidMFA[0x10]; // 0x01D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginRequiresCorrectiveAction[0x10]; // 0x01E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginMsg[0x10]; // 0x01F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginMsg_InvalidRefreshToken[0x10]; // 0x0200 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedStartLogin[0x10]; // 0x0210 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedStartLogin_InvalidRefreshToken[0x10]; // 0x0220 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedStartLogin_NoConnection[0x10]; // 0x0230 (Size: 0x10, Type: TextProperty)
    std::uint8_t GameDisplayName[0x10]; // 0x0240 (Size: 0x10, Type: TextProperty)
    std::uint8_t GeneralLoginFailure[0x10]; // 0x0250 (Size: 0x10, Type: TextProperty)
    std::uint8_t HeadlessAccountFailed[0x10]; // 0x0260 (Size: 0x10, Type: TextProperty)
    std::uint8_t InMatchShutdownTimeWarningText[0x10]; // 0x0270 (Size: 0x10, Type: TextProperty)
    std::uint8_t InvalidUser[0x10]; // 0x0280 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoggedOutofMCP[0x10]; // 0x0290 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisconnectedFromMCP[0x10]; // 0x02A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoggedOutReturnedToTitle[0x10]; // 0x02B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoggedOutSwitchedProfile[0x10]; // 0x02C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoggingIn[0x10]; // 0x02D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoggingInConsoleAuth[0x10]; // 0x02E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoggingOut[0x10]; // 0x02F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoginConsole[0x10]; // 0x0300 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoginFailure[0x10]; // 0x0310 (Size: 0x10, Type: TextProperty)
    std::uint8_t Logout_Unlink[0x10]; // 0x0320 (Size: 0x10, Type: TextProperty)
    std::uint8_t LogoutCompleted[0x10]; // 0x0330 (Size: 0x10, Type: TextProperty)
    std::uint8_t LostConnection[0x10]; // 0x0340 (Size: 0x10, Type: TextProperty)
    std::uint8_t LoginStepTimeout[0x10]; // 0x0350 (Size: 0x10, Type: TextProperty)
    std::uint8_t MCPTimeout[0x10]; // 0x0360 (Size: 0x10, Type: TextProperty)
    std::uint8_t LightswitchCheckNetworkFailureMsg[0x10]; // 0x0370 (Size: 0x10, Type: TextProperty)
    std::uint8_t NetworkConnectionUnavailable[0x10]; // 0x0380 (Size: 0x10, Type: TextProperty)
    std::uint8_t NoPlayEntitlement[0x10]; // 0x0390 (Size: 0x10, Type: TextProperty)
    std::uint8_t NoServerAccess[0x10]; // 0x03A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PlayAccessRevoked[0x10]; // 0x03B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PremiumAccountName_Default[0x10]; // 0x03C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PremiumAccountName_Sony[0x10]; // 0x03D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PremiumAccountName_Nintendo[0x10]; // 0x03E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t PremiumAccountName_XboxOne[0x10]; // 0x03F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t CheckLocalUserIsStoreUser[0x10]; // 0x0400 (Size: 0x10, Type: TextProperty)
    std::uint8_t RedeemOfflinePurchases[0x10]; // 0x0410 (Size: 0x10, Type: TextProperty)
    std::uint8_t ServiceDowntime[0x10]; // 0x0420 (Size: 0x10, Type: TextProperty)
    std::uint8_t SignInCompleting[0x10]; // 0x0430 (Size: 0x10, Type: TextProperty)
    std::uint8_t SignIntoConsoleServices[0x10]; // 0x0440 (Size: 0x10, Type: TextProperty)
    std::uint8_t TokenExpired[0x10]; // 0x0450 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnableToConnect[0x10]; // 0x0460 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnableToJoinWaitingRoomLoginQueue[0x10]; // 0x0470 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnexpectedConsoleAuthFailure[0x10]; // 0x0480 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnlinkConsoleFailed[0x10]; // 0x0490 (Size: 0x10, Type: TextProperty)
    std::uint8_t UserLoginFailed[0x10]; // 0x04A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t WaitingRoom[0x10]; // 0x04B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t WaitingRoomError[0x10]; // 0x04C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t WaitingRoomFailure[0x10]; // 0x04D0 (Size: 0x10, Type: TextProperty)
    std::uint8_t WaitingRoomWaiting[0x10]; // 0x04E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedLoginConsole[0xF0]; // 0x04F0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t LoggingInExternalAuth[0x10]; // 0x05E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t CreateDeviceAuth[0x10]; // 0x05F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExtAuthCanceled[0x10]; // 0x0600 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExtAuthFailure[0x10]; // 0x0610 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExtAuthAssociationFailure[0x10]; // 0x0620 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExtAuthTimeout[0x10]; // 0x0630 (Size: 0x10, Type: TextProperty)
    std::uint8_t ExtAuthMissingAuthAssociation[0x10]; // 0x0640 (Size: 0x10, Type: TextProperty)
    FText UnableToQueryReceipts; // 0x0650 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FOnlineAccountTexts, AllGiftCodesUsed) == 0, "Offset mismatch for FOnlineAccountTexts::AllGiftCodesUsed");
static_assert(offsetof(FOnlineAccountTexts, AssociateConsoleAuth) == 16, "Offset mismatch for FOnlineAccountTexts::AssociateConsoleAuth");
static_assert(offsetof(FOnlineAccountTexts, AutoLoginFailed) == 32, "Offset mismatch for FOnlineAccountTexts::AutoLoginFailed");
static_assert(offsetof(FOnlineAccountTexts, AutoLoginFailedMobile) == 48, "Offset mismatch for FOnlineAccountTexts::AutoLoginFailedMobile");
static_assert(offsetof(FOnlineAccountTexts, BannedFromGame) == 64, "Offset mismatch for FOnlineAccountTexts::BannedFromGame");
static_assert(offsetof(FOnlineAccountTexts, CheckEntitledToPlay) == 80, "Offset mismatch for FOnlineAccountTexts::CheckEntitledToPlay");
static_assert(offsetof(FOnlineAccountTexts, CheckingRejoin) == 96, "Offset mismatch for FOnlineAccountTexts::CheckingRejoin");
static_assert(offsetof(FOnlineAccountTexts, CheckServiceAvailability) == 112, "Offset mismatch for FOnlineAccountTexts::CheckServiceAvailability");
static_assert(offsetof(FOnlineAccountTexts, ConsolePrivileges) == 128, "Offset mismatch for FOnlineAccountTexts::ConsolePrivileges");
static_assert(offsetof(FOnlineAccountTexts, CreateAccountCompleted) == 144, "Offset mismatch for FOnlineAccountTexts::CreateAccountCompleted");
static_assert(offsetof(FOnlineAccountTexts, CreateAccountFailure) == 160, "Offset mismatch for FOnlineAccountTexts::CreateAccountFailure");
static_assert(offsetof(FOnlineAccountTexts, CreateAccountStepTimeout) == 176, "Offset mismatch for FOnlineAccountTexts::CreateAccountStepTimeout");
static_assert(offsetof(FOnlineAccountTexts, CreateHeadless) == 192, "Offset mismatch for FOnlineAccountTexts::CreateHeadless");
static_assert(offsetof(FOnlineAccountTexts, DoQosPingTests) == 208, "Offset mismatch for FOnlineAccountTexts::DoQosPingTests");
static_assert(offsetof(FOnlineAccountTexts, DowntimeMinutesWarningText) == 224, "Offset mismatch for FOnlineAccountTexts::DowntimeMinutesWarningText");
static_assert(offsetof(FOnlineAccountTexts, DowntimeSecondsWarningText) == 240, "Offset mismatch for FOnlineAccountTexts::DowntimeSecondsWarningText");
static_assert(offsetof(FOnlineAccountTexts, DuplicateAuthAssociaton) == 256, "Offset mismatch for FOnlineAccountTexts::DuplicateAuthAssociaton");
static_assert(offsetof(FOnlineAccountTexts, EulaCheck) == 272, "Offset mismatch for FOnlineAccountTexts::EulaCheck");
static_assert(offsetof(FOnlineAccountTexts, ExchangeConsoleGiftsForAccess) == 288, "Offset mismatch for FOnlineAccountTexts::ExchangeConsoleGiftsForAccess");
static_assert(offsetof(FOnlineAccountTexts, FailedAccountCreate) == 304, "Offset mismatch for FOnlineAccountTexts::FailedAccountCreate");
static_assert(offsetof(FOnlineAccountTexts, FailedEulaCheck_EulaAcceptanceFailed) == 320, "Offset mismatch for FOnlineAccountTexts::FailedEulaCheck_EulaAcceptanceFailed");
static_assert(offsetof(FOnlineAccountTexts, FailedEulaCheck_MustAcceptEula) == 336, "Offset mismatch for FOnlineAccountTexts::FailedEulaCheck_MustAcceptEula");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginCredentialsMsg) == 352, "Offset mismatch for FOnlineAccountTexts::FailedLoginCredentialsMsg");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginAgeVerificationIncomplete) == 368, "Offset mismatch for FOnlineAccountTexts::FailedLoginAgeVerificationIncomplete");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginParentalLock) == 384, "Offset mismatch for FOnlineAccountTexts::FailedLoginParentalLock");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginNoRealId) == 400, "Offset mismatch for FOnlineAccountTexts::FailedLoginNoRealId");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginLockoutMsg) == 416, "Offset mismatch for FOnlineAccountTexts::FailedLoginLockoutMsg");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginRequiresMFA) == 432, "Offset mismatch for FOnlineAccountTexts::FailedLoginRequiresMFA");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginRequiresAuthAppMFA) == 448, "Offset mismatch for FOnlineAccountTexts::FailedLoginRequiresAuthAppMFA");
static_assert(offsetof(FOnlineAccountTexts, FailedInvalidMFA) == 464, "Offset mismatch for FOnlineAccountTexts::FailedInvalidMFA");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginRequiresCorrectiveAction) == 480, "Offset mismatch for FOnlineAccountTexts::FailedLoginRequiresCorrectiveAction");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginMsg) == 496, "Offset mismatch for FOnlineAccountTexts::FailedLoginMsg");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginMsg_InvalidRefreshToken) == 512, "Offset mismatch for FOnlineAccountTexts::FailedLoginMsg_InvalidRefreshToken");
static_assert(offsetof(FOnlineAccountTexts, FailedStartLogin) == 528, "Offset mismatch for FOnlineAccountTexts::FailedStartLogin");
static_assert(offsetof(FOnlineAccountTexts, FailedStartLogin_InvalidRefreshToken) == 544, "Offset mismatch for FOnlineAccountTexts::FailedStartLogin_InvalidRefreshToken");
static_assert(offsetof(FOnlineAccountTexts, FailedStartLogin_NoConnection) == 560, "Offset mismatch for FOnlineAccountTexts::FailedStartLogin_NoConnection");
static_assert(offsetof(FOnlineAccountTexts, GameDisplayName) == 576, "Offset mismatch for FOnlineAccountTexts::GameDisplayName");
static_assert(offsetof(FOnlineAccountTexts, GeneralLoginFailure) == 592, "Offset mismatch for FOnlineAccountTexts::GeneralLoginFailure");
static_assert(offsetof(FOnlineAccountTexts, HeadlessAccountFailed) == 608, "Offset mismatch for FOnlineAccountTexts::HeadlessAccountFailed");
static_assert(offsetof(FOnlineAccountTexts, InMatchShutdownTimeWarningText) == 624, "Offset mismatch for FOnlineAccountTexts::InMatchShutdownTimeWarningText");
static_assert(offsetof(FOnlineAccountTexts, InvalidUser) == 640, "Offset mismatch for FOnlineAccountTexts::InvalidUser");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutofMCP) == 656, "Offset mismatch for FOnlineAccountTexts::LoggedOutofMCP");
static_assert(offsetof(FOnlineAccountTexts, DisconnectedFromMCP) == 672, "Offset mismatch for FOnlineAccountTexts::DisconnectedFromMCP");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutReturnedToTitle) == 688, "Offset mismatch for FOnlineAccountTexts::LoggedOutReturnedToTitle");
static_assert(offsetof(FOnlineAccountTexts, LoggedOutSwitchedProfile) == 704, "Offset mismatch for FOnlineAccountTexts::LoggedOutSwitchedProfile");
static_assert(offsetof(FOnlineAccountTexts, LoggingIn) == 720, "Offset mismatch for FOnlineAccountTexts::LoggingIn");
static_assert(offsetof(FOnlineAccountTexts, LoggingInConsoleAuth) == 736, "Offset mismatch for FOnlineAccountTexts::LoggingInConsoleAuth");
static_assert(offsetof(FOnlineAccountTexts, LoggingOut) == 752, "Offset mismatch for FOnlineAccountTexts::LoggingOut");
static_assert(offsetof(FOnlineAccountTexts, LoginConsole) == 768, "Offset mismatch for FOnlineAccountTexts::LoginConsole");
static_assert(offsetof(FOnlineAccountTexts, LoginFailure) == 784, "Offset mismatch for FOnlineAccountTexts::LoginFailure");
static_assert(offsetof(FOnlineAccountTexts, Logout_Unlink) == 800, "Offset mismatch for FOnlineAccountTexts::Logout_Unlink");
static_assert(offsetof(FOnlineAccountTexts, LogoutCompleted) == 816, "Offset mismatch for FOnlineAccountTexts::LogoutCompleted");
static_assert(offsetof(FOnlineAccountTexts, LostConnection) == 832, "Offset mismatch for FOnlineAccountTexts::LostConnection");
static_assert(offsetof(FOnlineAccountTexts, LoginStepTimeout) == 848, "Offset mismatch for FOnlineAccountTexts::LoginStepTimeout");
static_assert(offsetof(FOnlineAccountTexts, MCPTimeout) == 864, "Offset mismatch for FOnlineAccountTexts::MCPTimeout");
static_assert(offsetof(FOnlineAccountTexts, LightswitchCheckNetworkFailureMsg) == 880, "Offset mismatch for FOnlineAccountTexts::LightswitchCheckNetworkFailureMsg");
static_assert(offsetof(FOnlineAccountTexts, NetworkConnectionUnavailable) == 896, "Offset mismatch for FOnlineAccountTexts::NetworkConnectionUnavailable");
static_assert(offsetof(FOnlineAccountTexts, NoPlayEntitlement) == 912, "Offset mismatch for FOnlineAccountTexts::NoPlayEntitlement");
static_assert(offsetof(FOnlineAccountTexts, NoServerAccess) == 928, "Offset mismatch for FOnlineAccountTexts::NoServerAccess");
static_assert(offsetof(FOnlineAccountTexts, PlayAccessRevoked) == 944, "Offset mismatch for FOnlineAccountTexts::PlayAccessRevoked");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_Default) == 960, "Offset mismatch for FOnlineAccountTexts::PremiumAccountName_Default");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_Sony) == 976, "Offset mismatch for FOnlineAccountTexts::PremiumAccountName_Sony");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_Nintendo) == 992, "Offset mismatch for FOnlineAccountTexts::PremiumAccountName_Nintendo");
static_assert(offsetof(FOnlineAccountTexts, PremiumAccountName_XboxOne) == 1008, "Offset mismatch for FOnlineAccountTexts::PremiumAccountName_XboxOne");
static_assert(offsetof(FOnlineAccountTexts, CheckLocalUserIsStoreUser) == 1024, "Offset mismatch for FOnlineAccountTexts::CheckLocalUserIsStoreUser");
static_assert(offsetof(FOnlineAccountTexts, RedeemOfflinePurchases) == 1040, "Offset mismatch for FOnlineAccountTexts::RedeemOfflinePurchases");
static_assert(offsetof(FOnlineAccountTexts, ServiceDowntime) == 1056, "Offset mismatch for FOnlineAccountTexts::ServiceDowntime");
static_assert(offsetof(FOnlineAccountTexts, SignInCompleting) == 1072, "Offset mismatch for FOnlineAccountTexts::SignInCompleting");
static_assert(offsetof(FOnlineAccountTexts, SignIntoConsoleServices) == 1088, "Offset mismatch for FOnlineAccountTexts::SignIntoConsoleServices");
static_assert(offsetof(FOnlineAccountTexts, TokenExpired) == 1104, "Offset mismatch for FOnlineAccountTexts::TokenExpired");
static_assert(offsetof(FOnlineAccountTexts, UnableToConnect) == 1120, "Offset mismatch for FOnlineAccountTexts::UnableToConnect");
static_assert(offsetof(FOnlineAccountTexts, UnableToJoinWaitingRoomLoginQueue) == 1136, "Offset mismatch for FOnlineAccountTexts::UnableToJoinWaitingRoomLoginQueue");
static_assert(offsetof(FOnlineAccountTexts, UnexpectedConsoleAuthFailure) == 1152, "Offset mismatch for FOnlineAccountTexts::UnexpectedConsoleAuthFailure");
static_assert(offsetof(FOnlineAccountTexts, UnlinkConsoleFailed) == 1168, "Offset mismatch for FOnlineAccountTexts::UnlinkConsoleFailed");
static_assert(offsetof(FOnlineAccountTexts, UserLoginFailed) == 1184, "Offset mismatch for FOnlineAccountTexts::UserLoginFailed");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoom) == 1200, "Offset mismatch for FOnlineAccountTexts::WaitingRoom");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomError) == 1216, "Offset mismatch for FOnlineAccountTexts::WaitingRoomError");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomFailure) == 1232, "Offset mismatch for FOnlineAccountTexts::WaitingRoomFailure");
static_assert(offsetof(FOnlineAccountTexts, WaitingRoomWaiting) == 1248, "Offset mismatch for FOnlineAccountTexts::WaitingRoomWaiting");
static_assert(offsetof(FOnlineAccountTexts, FailedLoginConsole) == 1264, "Offset mismatch for FOnlineAccountTexts::FailedLoginConsole");
static_assert(offsetof(FOnlineAccountTexts, LoggingInExternalAuth) == 1504, "Offset mismatch for FOnlineAccountTexts::LoggingInExternalAuth");
static_assert(offsetof(FOnlineAccountTexts, CreateDeviceAuth) == 1520, "Offset mismatch for FOnlineAccountTexts::CreateDeviceAuth");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthCanceled) == 1536, "Offset mismatch for FOnlineAccountTexts::ExtAuthCanceled");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthFailure) == 1552, "Offset mismatch for FOnlineAccountTexts::ExtAuthFailure");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthAssociationFailure) == 1568, "Offset mismatch for FOnlineAccountTexts::ExtAuthAssociationFailure");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthTimeout) == 1584, "Offset mismatch for FOnlineAccountTexts::ExtAuthTimeout");
static_assert(offsetof(FOnlineAccountTexts, ExtAuthMissingAuthAssociation) == 1600, "Offset mismatch for FOnlineAccountTexts::ExtAuthMissingAuthAssociation");
static_assert(offsetof(FOnlineAccountTexts, UnableToQueryReceipts) == 1616, "Offset mismatch for FOnlineAccountTexts::UnableToQueryReceipts");

// /Script/Account.OnlineAccountTexts_FailedLoginConsole
// Kind: ScriptStruct; super: none
struct FOnlineAccountTexts_FailedLoginConsole
{
public:
    std::uint8_t AgeRestriction[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Generic[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t MissingAuthAssociation[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t NeedPremiumAccount[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t OnlinePlayRestriction[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t PatchAvailable[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t PatchAvailableInstruction_Default[0x10]; // 0x0060 (Size: 0x10, Type: TextProperty)
    std::uint8_t PatchAvailableInstruction_Xbox[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    std::uint8_t PleaseSignIn[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t SystemUpdateAvailable[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t UI[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnableToComplete[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnableToSignIn[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t UnableToStartPrivCheck[0x10]; // 0x00D0 (Size: 0x10, Type: TextProperty)
    FText UnexpectedError; // 0x00E0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, AgeRestriction) == 0, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::AgeRestriction");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, Generic) == 16, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::Generic");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, MissingAuthAssociation) == 32, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::MissingAuthAssociation");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, NeedPremiumAccount) == 48, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::NeedPremiumAccount");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, OnlinePlayRestriction) == 64, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::OnlinePlayRestriction");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PatchAvailable) == 80, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::PatchAvailable");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PatchAvailableInstruction_Default) == 96, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::PatchAvailableInstruction_Default");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PatchAvailableInstruction_Xbox) == 112, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::PatchAvailableInstruction_Xbox");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, PleaseSignIn) == 128, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::PleaseSignIn");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, SystemUpdateAvailable) == 144, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::SystemUpdateAvailable");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UI) == 160, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::UI");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToComplete) == 176, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::UnableToComplete");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToSignIn) == 192, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::UnableToSignIn");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnableToStartPrivCheck) == 208, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::UnableToStartPrivCheck");
static_assert(offsetof(FOnlineAccountTexts_FailedLoginConsole, UnexpectedError) == 224, "Offset mismatch for FOnlineAccountTexts_FailedLoginConsole::UnexpectedError");

// /Script/Account.ServiceLoginConfig
// Kind: ScriptStruct; super: none
struct FServiceLoginConfig
{
public:
    std::uint8_t LoginType[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName ExternalAuthMethod; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FServiceLoginConfig, LoginType) == 0, "Offset mismatch for FServiceLoginConfig::LoginType");
static_assert(offsetof(FServiceLoginConfig, ExternalAuthMethod) == 4, "Offset mismatch for FServiceLoginConfig::ExternalAuthMethod");

// /Script/Account.WebEnvUrl
// Kind: ScriptStruct; super: none
struct FWebEnvUrl
{
public:
    FString Url; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString RedirectUrl; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Environment; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FWebEnvUrl, Url) == 0, "Offset mismatch for FWebEnvUrl::Url");
static_assert(offsetof(FWebEnvUrl, RedirectUrl) == 16, "Offset mismatch for FWebEnvUrl::RedirectUrl");
static_assert(offsetof(FWebEnvUrl, Environment) == 32, "Offset mismatch for FWebEnvUrl::Environment");

// /Script/Account.ExternalAccountProvider
// Kind: Class; super: Object
class UExternalAccountProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Services; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UExternalAccountProvider, Services) == 40, "Offset mismatch for UExternalAccountProvider::Services");

// /Script/Account.OnlineAccountCommon
// Kind: Class; super: Object
class UOnlineAccountCommon
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString AvailabilityServiceGameName; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t bRequireLightswitchAtStartup; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPartialLoginEnabled; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckStoreAccountEnabled; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRedeemOfflinePurchasesEnabled; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckingRejoinEnabled; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    FString EulaKey; // 0x0050 (Size: 0x10, Type: StrProperty)
    TArray<void*> EulaKeys; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> EulaKeyMapping; // 0x0070 (Size: 0x10, Type: MapProperty)
    std::int32_t EulaCacheVersion; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableWaitingRoom; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0085
    TArray<void*> WebCreateEpicAccountUrl; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowLocalLogout; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0099
    float OSSv2EpicGameServicesLoginRecoveryRetryInterval; // 0x009C (Size: 0x4, Type: FloatProperty)
    float OSSv2WaitForEASTokenRetryInterval; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float OSSv2WaitForEASTokenTimeout; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x38]; // 0x00A8
    float DefaultLoginStepTimeout; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x00E4
    TMap<void*, void*> CustomLoginStepTimeouts; // 0x00E8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bEnableDevLoginStepTimeouts; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x00F9
    float DefaultLogoutStepTimeout; // 0x00FC (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> CustomLogoutStepTimeouts; // 0x0100 (Size: 0x10, Type: MapProperty)
    std::uint8_t bEnableDevLogoutStepTimeouts; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x27]; // 0x0111
    std::int32_t LogoutFrameDelay; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0008[0x4]; // 0x013C
    TArray<void*> ServiceLoginConfig; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    FString RedeemAccessUrl; // 0x0150 (Size: 0x10, Type: StrProperty)
    FString RequestFreeAccessUrl; // 0x0160 (Size: 0x10, Type: StrProperty)
    FString RealGameAccessUrl; // 0x0170 (Size: 0x10, Type: StrProperty)
    float SkipRedeemOfflinePurchasesChance; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFreeAccessInsteadOfGameAccess; // 0x0184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldGrantFreeAccess; // 0x0185 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x1]; // 0x0186
    std::uint8_t bAllowHomeSharingAccess; // 0x0187 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequireUGCPrivilege; // 0x0188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaitForEULAHandlerDelegate; // 0x0189 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlatformSupportsAutologinRetry; // 0x018A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x255]; // 0x018B
    float AccessGrantDelaySeconds; // 0x03E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x4]; // 0x03E4
    void* WaitingRoomState; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x4A0]; // 0x03F0
    TArray<void*> LoginStepConfig; // 0x0890 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LogoutStepConfig; // 0x08A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CreateAccountStepConfig; // 0x08B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOnlineAccountCommon, AvailabilityServiceGameName) == 56, "Offset mismatch for UOnlineAccountCommon::AvailabilityServiceGameName");
static_assert(offsetof(UOnlineAccountCommon, bRequireLightswitchAtStartup) == 72, "Offset mismatch for UOnlineAccountCommon::bRequireLightswitchAtStartup");
static_assert(offsetof(UOnlineAccountCommon, bPartialLoginEnabled) == 73, "Offset mismatch for UOnlineAccountCommon::bPartialLoginEnabled");
static_assert(offsetof(UOnlineAccountCommon, bCheckStoreAccountEnabled) == 74, "Offset mismatch for UOnlineAccountCommon::bCheckStoreAccountEnabled");
static_assert(offsetof(UOnlineAccountCommon, bRedeemOfflinePurchasesEnabled) == 75, "Offset mismatch for UOnlineAccountCommon::bRedeemOfflinePurchasesEnabled");
static_assert(offsetof(UOnlineAccountCommon, bCheckingRejoinEnabled) == 76, "Offset mismatch for UOnlineAccountCommon::bCheckingRejoinEnabled");
static_assert(offsetof(UOnlineAccountCommon, EulaKey) == 80, "Offset mismatch for UOnlineAccountCommon::EulaKey");
static_assert(offsetof(UOnlineAccountCommon, EulaKeys) == 96, "Offset mismatch for UOnlineAccountCommon::EulaKeys");
static_assert(offsetof(UOnlineAccountCommon, EulaKeyMapping) == 112, "Offset mismatch for UOnlineAccountCommon::EulaKeyMapping");
static_assert(offsetof(UOnlineAccountCommon, EulaCacheVersion) == 128, "Offset mismatch for UOnlineAccountCommon::EulaCacheVersion");
static_assert(offsetof(UOnlineAccountCommon, bEnableWaitingRoom) == 132, "Offset mismatch for UOnlineAccountCommon::bEnableWaitingRoom");
static_assert(offsetof(UOnlineAccountCommon, WebCreateEpicAccountUrl) == 136, "Offset mismatch for UOnlineAccountCommon::WebCreateEpicAccountUrl");
static_assert(offsetof(UOnlineAccountCommon, bAllowLocalLogout) == 152, "Offset mismatch for UOnlineAccountCommon::bAllowLocalLogout");
static_assert(offsetof(UOnlineAccountCommon, OSSv2EpicGameServicesLoginRecoveryRetryInterval) == 156, "Offset mismatch for UOnlineAccountCommon::OSSv2EpicGameServicesLoginRecoveryRetryInterval");
static_assert(offsetof(UOnlineAccountCommon, OSSv2WaitForEASTokenRetryInterval) == 160, "Offset mismatch for UOnlineAccountCommon::OSSv2WaitForEASTokenRetryInterval");
static_assert(offsetof(UOnlineAccountCommon, OSSv2WaitForEASTokenTimeout) == 164, "Offset mismatch for UOnlineAccountCommon::OSSv2WaitForEASTokenTimeout");
static_assert(offsetof(UOnlineAccountCommon, DefaultLoginStepTimeout) == 224, "Offset mismatch for UOnlineAccountCommon::DefaultLoginStepTimeout");
static_assert(offsetof(UOnlineAccountCommon, CustomLoginStepTimeouts) == 232, "Offset mismatch for UOnlineAccountCommon::CustomLoginStepTimeouts");
static_assert(offsetof(UOnlineAccountCommon, bEnableDevLoginStepTimeouts) == 248, "Offset mismatch for UOnlineAccountCommon::bEnableDevLoginStepTimeouts");
static_assert(offsetof(UOnlineAccountCommon, DefaultLogoutStepTimeout) == 252, "Offset mismatch for UOnlineAccountCommon::DefaultLogoutStepTimeout");
static_assert(offsetof(UOnlineAccountCommon, CustomLogoutStepTimeouts) == 256, "Offset mismatch for UOnlineAccountCommon::CustomLogoutStepTimeouts");
static_assert(offsetof(UOnlineAccountCommon, bEnableDevLogoutStepTimeouts) == 272, "Offset mismatch for UOnlineAccountCommon::bEnableDevLogoutStepTimeouts");
static_assert(offsetof(UOnlineAccountCommon, LogoutFrameDelay) == 312, "Offset mismatch for UOnlineAccountCommon::LogoutFrameDelay");
static_assert(offsetof(UOnlineAccountCommon, ServiceLoginConfig) == 320, "Offset mismatch for UOnlineAccountCommon::ServiceLoginConfig");
static_assert(offsetof(UOnlineAccountCommon, RedeemAccessUrl) == 336, "Offset mismatch for UOnlineAccountCommon::RedeemAccessUrl");
static_assert(offsetof(UOnlineAccountCommon, RequestFreeAccessUrl) == 352, "Offset mismatch for UOnlineAccountCommon::RequestFreeAccessUrl");
static_assert(offsetof(UOnlineAccountCommon, RealGameAccessUrl) == 368, "Offset mismatch for UOnlineAccountCommon::RealGameAccessUrl");
static_assert(offsetof(UOnlineAccountCommon, SkipRedeemOfflinePurchasesChance) == 384, "Offset mismatch for UOnlineAccountCommon::SkipRedeemOfflinePurchasesChance");
static_assert(offsetof(UOnlineAccountCommon, bUseFreeAccessInsteadOfGameAccess) == 388, "Offset mismatch for UOnlineAccountCommon::bUseFreeAccessInsteadOfGameAccess");
static_assert(offsetof(UOnlineAccountCommon, bShouldGrantFreeAccess) == 389, "Offset mismatch for UOnlineAccountCommon::bShouldGrantFreeAccess");
static_assert(offsetof(UOnlineAccountCommon, bAllowHomeSharingAccess) == 391, "Offset mismatch for UOnlineAccountCommon::bAllowHomeSharingAccess");
static_assert(offsetof(UOnlineAccountCommon, bRequireUGCPrivilege) == 392, "Offset mismatch for UOnlineAccountCommon::bRequireUGCPrivilege");
static_assert(offsetof(UOnlineAccountCommon, bWaitForEULAHandlerDelegate) == 393, "Offset mismatch for UOnlineAccountCommon::bWaitForEULAHandlerDelegate");
static_assert(offsetof(UOnlineAccountCommon, bPlatformSupportsAutologinRetry) == 394, "Offset mismatch for UOnlineAccountCommon::bPlatformSupportsAutologinRetry");
static_assert(offsetof(UOnlineAccountCommon, AccessGrantDelaySeconds) == 992, "Offset mismatch for UOnlineAccountCommon::AccessGrantDelaySeconds");
static_assert(offsetof(UOnlineAccountCommon, WaitingRoomState) == 1000, "Offset mismatch for UOnlineAccountCommon::WaitingRoomState");
static_assert(offsetof(UOnlineAccountCommon, LoginStepConfig) == 2192, "Offset mismatch for UOnlineAccountCommon::LoginStepConfig");
static_assert(offsetof(UOnlineAccountCommon, LogoutStepConfig) == 2208, "Offset mismatch for UOnlineAccountCommon::LogoutStepConfig");
static_assert(offsetof(UOnlineAccountCommon, CreateAccountStepConfig) == 2224, "Offset mismatch for UOnlineAccountCommon::CreateAccountStepConfig");

// /Script/Account.WaitingRoomState
// Kind: Class; super: Object
class UWaitingRoomState
{
public:
    std::uint8_t Pad_0000[0x5C]; // 0x0000
    std::int32_t GracePeriodMins; // 0x005C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWaitingRoomState, GracePeriodMins) == 92, "Offset mismatch for UWaitingRoomState::GracePeriodMins");
