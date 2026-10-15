/**
 * decamp dumper generated SDK
 * Package: /Script/OnlineSubsystemUtils
 */
#pragma once
#include "Basic.h"

// /Script/OnlineSubsystemUtils.BlueprintSessionResult
// Kind: ScriptStruct; super: none
struct FBlueprintSessionResult
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
// Kind: ScriptStruct; super: none
struct FInAppPurchaseProductInfo2
{
public:
    FString Identifier; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString TransactionIdentifier; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString DisplayName; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString DisplayDescription; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString DisplayPrice; // 0x0040 (Size: 0x10, Type: StrProperty)
    float RawPrice; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0054
    FString CurrencyCode; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString CurrencySymbol; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString DecimalSeparator; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString GroupingSeparator; // 0x0088 (Size: 0x10, Type: StrProperty)
    FString ReceiptData; // 0x0098 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> DynamicFields; // 0x00A8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FInAppPurchaseProductInfo2, Identifier) == 0, "Offset mismatch for FInAppPurchaseProductInfo2::Identifier");
static_assert(offsetof(FInAppPurchaseProductInfo2, TransactionIdentifier) == 16, "Offset mismatch for FInAppPurchaseProductInfo2::TransactionIdentifier");
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayName) == 32, "Offset mismatch for FInAppPurchaseProductInfo2::DisplayName");
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayDescription) == 48, "Offset mismatch for FInAppPurchaseProductInfo2::DisplayDescription");
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayPrice) == 64, "Offset mismatch for FInAppPurchaseProductInfo2::DisplayPrice");
static_assert(offsetof(FInAppPurchaseProductInfo2, RawPrice) == 80, "Offset mismatch for FInAppPurchaseProductInfo2::RawPrice");
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencyCode) == 88, "Offset mismatch for FInAppPurchaseProductInfo2::CurrencyCode");
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencySymbol) == 104, "Offset mismatch for FInAppPurchaseProductInfo2::CurrencySymbol");
static_assert(offsetof(FInAppPurchaseProductInfo2, DecimalSeparator) == 120, "Offset mismatch for FInAppPurchaseProductInfo2::DecimalSeparator");
static_assert(offsetof(FInAppPurchaseProductInfo2, GroupingSeparator) == 136, "Offset mismatch for FInAppPurchaseProductInfo2::GroupingSeparator");
static_assert(offsetof(FInAppPurchaseProductInfo2, ReceiptData) == 152, "Offset mismatch for FInAppPurchaseProductInfo2::ReceiptData");
static_assert(offsetof(FInAppPurchaseProductInfo2, DynamicFields) == 168, "Offset mismatch for FInAppPurchaseProductInfo2::DynamicFields");

// /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
// Kind: ScriptStruct; super: none
struct FInAppPurchaseProductRequest2
{
public:
    FString ProductIdentifier; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsConsumable; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FInAppPurchaseProductRequest2, ProductIdentifier) == 0, "Offset mismatch for FInAppPurchaseProductRequest2::ProductIdentifier");
static_assert(offsetof(FInAppPurchaseProductRequest2, bIsConsumable) == 16, "Offset mismatch for FInAppPurchaseProductRequest2::bIsConsumable");

// /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// Kind: ScriptStruct; super: none
struct FInAppPurchaseReceiptInfo2
{
public:
    FString ItemName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ItemID; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ValidationInfo; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString TransactionIdentifier; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemName) == 0, "Offset mismatch for FInAppPurchaseReceiptInfo2::ItemName");
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemID) == 16, "Offset mismatch for FInAppPurchaseReceiptInfo2::ItemID");
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ValidationInfo) == 32, "Offset mismatch for FInAppPurchaseReceiptInfo2::ValidationInfo");
static_assert(offsetof(FInAppPurchaseReceiptInfo2, TransactionIdentifier) == 48, "Offset mismatch for FInAppPurchaseReceiptInfo2::TransactionIdentifier");

// /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// Kind: ScriptStruct; super: none
struct FInAppPurchaseRestoreInfo2
{
public:
    FString ItemName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ItemID; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString ValidationInfo; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemName) == 0, "Offset mismatch for FInAppPurchaseRestoreInfo2::ItemName");
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemID) == 16, "Offset mismatch for FInAppPurchaseRestoreInfo2::ItemID");
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ValidationInfo) == 32, "Offset mismatch for FInAppPurchaseRestoreInfo2::ValidationInfo");

// /Script/OnlineSubsystemUtils.OnlineAccountStoredCredentials
// Kind: ScriptStruct; super: none
struct FOnlineAccountStoredCredentials
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Token; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Type; // 0x0020 (Size: 0x10, Type: StrProperty)
    TArray<void*> TokenBytes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOnlineAccountStoredCredentials, ID) == 0, "Offset mismatch for FOnlineAccountStoredCredentials::ID");
static_assert(offsetof(FOnlineAccountStoredCredentials, Token) == 16, "Offset mismatch for FOnlineAccountStoredCredentials::Token");
static_assert(offsetof(FOnlineAccountStoredCredentials, Type) == 32, "Offset mismatch for FOnlineAccountStoredCredentials::Type");
static_assert(offsetof(FOnlineAccountStoredCredentials, TokenBytes) == 48, "Offset mismatch for FOnlineAccountStoredCredentials::TokenBytes");

// /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
// Kind: ScriptStruct; super: none
struct FOnlineProxyStoreOffer
{
public:
    FString OfferId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Title[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t LongDescription[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t RegularPriceText[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::int32_t RegularPrice; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0054
    std::uint8_t PriceText[0x10]; // 0x0058 (Size: 0x10, Type: TextProperty)
    std::int32_t NumericPrice; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x006C
    FString CurrencyCode; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t ReleaseDate[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExpirationDate[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t DiscountType; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0091
    TMap<void*, void*> DynamicFields; // 0x0098 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FOnlineProxyStoreOffer, OfferId) == 0, "Offset mismatch for FOnlineProxyStoreOffer::OfferId");
static_assert(offsetof(FOnlineProxyStoreOffer, Title) == 16, "Offset mismatch for FOnlineProxyStoreOffer::Title");
static_assert(offsetof(FOnlineProxyStoreOffer, Description) == 32, "Offset mismatch for FOnlineProxyStoreOffer::Description");
static_assert(offsetof(FOnlineProxyStoreOffer, LongDescription) == 48, "Offset mismatch for FOnlineProxyStoreOffer::LongDescription");
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPriceText) == 64, "Offset mismatch for FOnlineProxyStoreOffer::RegularPriceText");
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPrice) == 80, "Offset mismatch for FOnlineProxyStoreOffer::RegularPrice");
static_assert(offsetof(FOnlineProxyStoreOffer, PriceText) == 88, "Offset mismatch for FOnlineProxyStoreOffer::PriceText");
static_assert(offsetof(FOnlineProxyStoreOffer, NumericPrice) == 104, "Offset mismatch for FOnlineProxyStoreOffer::NumericPrice");
static_assert(offsetof(FOnlineProxyStoreOffer, CurrencyCode) == 112, "Offset mismatch for FOnlineProxyStoreOffer::CurrencyCode");
static_assert(offsetof(FOnlineProxyStoreOffer, ReleaseDate) == 128, "Offset mismatch for FOnlineProxyStoreOffer::ReleaseDate");
static_assert(offsetof(FOnlineProxyStoreOffer, ExpirationDate) == 136, "Offset mismatch for FOnlineProxyStoreOffer::ExpirationDate");
static_assert(offsetof(FOnlineProxyStoreOffer, DiscountType) == 144, "Offset mismatch for FOnlineProxyStoreOffer::DiscountType");
static_assert(offsetof(FOnlineProxyStoreOffer, DynamicFields) == 152, "Offset mismatch for FOnlineProxyStoreOffer::DynamicFields");

// /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
// Kind: ScriptStruct; super: none
struct FPartyBeaconCrossplayPlatformMapping
{
public:
    FString PlatformName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PlatformType; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FPartyBeaconCrossplayPlatformMapping, PlatformName) == 0, "Offset mismatch for FPartyBeaconCrossplayPlatformMapping::PlatformName");
static_assert(offsetof(FPartyBeaconCrossplayPlatformMapping, PlatformType) == 16, "Offset mismatch for FPartyBeaconCrossplayPlatformMapping::PlatformType");

// /Script/OnlineSubsystemUtils.PartyReservation
// Kind: ScriptStruct; super: none
struct FPartyReservation
{
public:
    std::int32_t TeamNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t PartyLeader[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    TArray<void*> PartyMembers; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RemovedPartyMembers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPartyReservation, TeamNum) == 0, "Offset mismatch for FPartyReservation::TeamNum");
static_assert(offsetof(FPartyReservation, PartyLeader) == 8, "Offset mismatch for FPartyReservation::PartyLeader");
static_assert(offsetof(FPartyReservation, PartyMembers) == 56, "Offset mismatch for FPartyReservation::PartyMembers");
static_assert(offsetof(FPartyReservation, RemovedPartyMembers) == 72, "Offset mismatch for FPartyReservation::RemovedPartyMembers");

// /Script/OnlineSubsystemUtils.PlayerReservation
// Kind: ScriptStruct; super: none
struct FPlayerReservation
{
public:
    std::uint8_t UniqueID[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    FString ValidationStr; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString Platform; // 0x0040 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAllowCrossplay; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0051
    float ElapsedTime; // 0x0054 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPlayerReservation, UniqueID) == 0, "Offset mismatch for FPlayerReservation::UniqueID");
static_assert(offsetof(FPlayerReservation, ValidationStr) == 48, "Offset mismatch for FPlayerReservation::ValidationStr");
static_assert(offsetof(FPlayerReservation, Platform) == 64, "Offset mismatch for FPlayerReservation::Platform");
static_assert(offsetof(FPlayerReservation, bAllowCrossplay) == 80, "Offset mismatch for FPlayerReservation::bAllowCrossplay");
static_assert(offsetof(FPlayerReservation, ElapsedTime) == 84, "Offset mismatch for FPlayerReservation::ElapsedTime");

// /Script/OnlineSubsystemUtils.SpectatorReservation
// Kind: ScriptStruct; super: none
struct FSpectatorReservation
{
public:
    std::uint8_t SpectatorId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t Spectator[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpectatorReservation, SpectatorId) == 0, "Offset mismatch for FSpectatorReservation::SpectatorId");
static_assert(offsetof(FSpectatorReservation, Spectator) == 48, "Offset mismatch for FSpectatorReservation::Spectator");

// /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAchievementBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UAchievementQueryCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAchievementQueryCallbackProxy, OnSuccess) == 48, "Offset mismatch for UAchievementQueryCallbackProxy::OnSuccess");
static_assert(offsetof(UAchievementQueryCallbackProxy, OnFailure) == 64, "Offset mismatch for UAchievementQueryCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UAchievementWriteCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnWriteSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWriteFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAchievementWriteCallbackProxy, OnWriteSuccess) == 48, "Offset mismatch for UAchievementWriteCallbackProxy::OnWriteSuccess");
static_assert(offsetof(UAchievementWriteCallbackProxy, OnWriteFailure) == 64, "Offset mismatch for UAchievementWriteCallbackProxy::OnWriteFailure");

// /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UConnectionCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UConnectionCallbackProxy, OnSuccess) == 48, "Offset mismatch for UConnectionCallbackProxy::OnSuccess");
static_assert(offsetof(UConnectionCallbackProxy, OnFailure) == 64, "Offset mismatch for UConnectionCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UCreateSessionCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCreateSessionCallbackProxy, OnSuccess) == 48, "Offset mismatch for UCreateSessionCallbackProxy::OnSuccess");
static_assert(offsetof(UCreateSessionCallbackProxy, OnFailure) == 64, "Offset mismatch for UCreateSessionCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UDestroySessionCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDestroySessionCallbackProxy, OnSuccess) == 48, "Offset mismatch for UDestroySessionCallbackProxy::OnSuccess");
static_assert(offsetof(UDestroySessionCallbackProxy, OnFailure) == 64, "Offset mismatch for UDestroySessionCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UEndMatchCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UEndMatchCallbackProxy, OnSuccess) == 48, "Offset mismatch for UEndMatchCallbackProxy::OnSuccess");
static_assert(offsetof(UEndMatchCallbackProxy, OnFailure) == 64, "Offset mismatch for UEndMatchCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UEndTurnCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UEndTurnCallbackProxy, OnSuccess) == 48, "Offset mismatch for UEndTurnCallbackProxy::OnSuccess");
static_assert(offsetof(UEndTurnCallbackProxy, OnFailure) == 64, "Offset mismatch for UEndTurnCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UFindSessionsCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFindSessionsCallbackProxy, OnSuccess) == 48, "Offset mismatch for UFindSessionsCallbackProxy::OnSuccess");
static_assert(offsetof(UFindSessionsCallbackProxy, OnFailure) == 64, "Offset mismatch for UFindSessionsCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UFindTurnBasedMatchCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFindTurnBasedMatchCallbackProxy, OnSuccess) == 48, "Offset mismatch for UFindTurnBasedMatchCallbackProxy::OnSuccess");
static_assert(offsetof(UFindTurnBasedMatchCallbackProxy, OnFailure) == 64, "Offset mismatch for UFindTurnBasedMatchCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Kind: Class; super: Object
class UInAppPurchaseCallbackProxy2
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UInAppPurchaseCallbackProxy2, OnSuccess) == 40, "Offset mismatch for UInAppPurchaseCallbackProxy2::OnSuccess");
static_assert(offsetof(UInAppPurchaseCallbackProxy2, OnFailure) == 56, "Offset mismatch for UInAppPurchaseCallbackProxy2::OnFailure");

// /Script/OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy
// Kind: Class; super: Object
class UInAppPurchaseCheckoutCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UInAppPurchaseCheckoutCallbackProxy, OnSuccess) == 40, "Offset mismatch for UInAppPurchaseCheckoutCallbackProxy::OnSuccess");
static_assert(offsetof(UInAppPurchaseCheckoutCallbackProxy, OnFailure) == 56, "Offset mismatch for UInAppPurchaseCheckoutCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.InAppPurchaseFinalizeProxy
// Kind: Class; super: Object
class UInAppPurchaseFinalizeProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Kind: Class; super: Object
class UInAppPurchaseQueryCallbackProxy2
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UInAppPurchaseQueryCallbackProxy2, OnSuccess) == 40, "Offset mismatch for UInAppPurchaseQueryCallbackProxy2::OnSuccess");
static_assert(offsetof(UInAppPurchaseQueryCallbackProxy2, OnFailure) == 56, "Offset mismatch for UInAppPurchaseQueryCallbackProxy2::OnFailure");

// /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy
// Kind: Class; super: Object
class UInAppPurchaseReceiptsCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UInAppPurchaseReceiptsCallbackProxy, OnSuccess) == 40, "Offset mismatch for UInAppPurchaseReceiptsCallbackProxy::OnSuccess");
static_assert(offsetof(UInAppPurchaseReceiptsCallbackProxy, OnFailure) == 56, "Offset mismatch for UInAppPurchaseReceiptsCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Kind: Class; super: Object
class UInAppPurchaseRestoreCallbackProxy2
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UInAppPurchaseRestoreCallbackProxy2, OnSuccess) == 40, "Offset mismatch for UInAppPurchaseRestoreCallbackProxy2::OnSuccess");
static_assert(offsetof(UInAppPurchaseRestoreCallbackProxy2, OnFailure) == 56, "Offset mismatch for UInAppPurchaseRestoreCallbackProxy2::OnFailure");

// /Script/OnlineSubsystemUtils.IpConnection
// Kind: Class; super: NetConnection
class UIpConnection
{
public:
    std::uint8_t Pad_0000[0x1A3C]; // 0x0000
    float SocketErrorDisconnectDelay; // 0x1A3C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UIpConnection, SocketErrorDisconnectDelay) == 6716, "Offset mismatch for UIpConnection::SocketErrorDisconnectDelay");

// /Script/OnlineSubsystemUtils.IpNetDriver
// Kind: Class; super: NetDriver
class UIpNetDriver
{
public:
    std::uint8_t Pad_0000[0x618]; // 0x0000
    std::uint8_t AllowPlayerPortUnreach; // 0x0618 (Size: 0x1, Type: BoolProperty)
    // 0x0618 BoolProperty LogPortUnreach (shared storage)
    // 0x0618 BoolProperty bExitOnBindFailure (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0619
    std::uint32_t MaxPortCountToTry; // 0x061C (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x4]; // 0x0620
    std::uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x0624 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ServerDesiredSocketSendBufferBytes; // 0x0628 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x062C (Size: 0x4, Type: UInt32Property)
    std::uint32_t ClientDesiredSocketSendBufferBytes; // 0x0630 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0003[0x4]; // 0x0634
    double MaxSecondsInReceive; // 0x0638 (Size: 0x8, Type: DoubleProperty)
    std::int32_t NbPacketsBetweenReceiveTimeTest; // 0x0640 (Size: 0x4, Type: IntProperty)
    float ResolutionConnectionTimeout; // 0x0644 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UIpNetDriver, AllowPlayerPortUnreach) == 1560, "Offset mismatch for UIpNetDriver::AllowPlayerPortUnreach");
static_assert(offsetof(UIpNetDriver, MaxPortCountToTry) == 1564, "Offset mismatch for UIpNetDriver::MaxPortCountToTry");
static_assert(offsetof(UIpNetDriver, ServerDesiredSocketReceiveBufferBytes) == 1572, "Offset mismatch for UIpNetDriver::ServerDesiredSocketReceiveBufferBytes");
static_assert(offsetof(UIpNetDriver, ServerDesiredSocketSendBufferBytes) == 1576, "Offset mismatch for UIpNetDriver::ServerDesiredSocketSendBufferBytes");
static_assert(offsetof(UIpNetDriver, ClientDesiredSocketReceiveBufferBytes) == 1580, "Offset mismatch for UIpNetDriver::ClientDesiredSocketReceiveBufferBytes");
static_assert(offsetof(UIpNetDriver, ClientDesiredSocketSendBufferBytes) == 1584, "Offset mismatch for UIpNetDriver::ClientDesiredSocketSendBufferBytes");
static_assert(offsetof(UIpNetDriver, MaxSecondsInReceive) == 1592, "Offset mismatch for UIpNetDriver::MaxSecondsInReceive");
static_assert(offsetof(UIpNetDriver, NbPacketsBetweenReceiveTimeTest) == 1600, "Offset mismatch for UIpNetDriver::NbPacketsBetweenReceiveTimeTest");
static_assert(offsetof(UIpNetDriver, ResolutionConnectionTimeout) == 1604, "Offset mismatch for UIpNetDriver::ResolutionConnectionTimeout");

// /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UJoinSessionCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UJoinSessionCallbackProxy, OnSuccess) == 48, "Offset mismatch for UJoinSessionCallbackProxy::OnSuccess");
static_assert(offsetof(UJoinSessionCallbackProxy, OnFailure) == 64, "Offset mismatch for UJoinSessionCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULeaderboardBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Kind: Class; super: Object
class ULeaderboardFlushCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULeaderboardFlushCallbackProxy, OnSuccess) == 40, "Offset mismatch for ULeaderboardFlushCallbackProxy::OnSuccess");
static_assert(offsetof(ULeaderboardFlushCallbackProxy, OnFailure) == 56, "Offset mismatch for ULeaderboardFlushCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Kind: Class; super: Object
class ULeaderboardQueryCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULeaderboardQueryCallbackProxy, OnSuccess) == 40, "Offset mismatch for ULeaderboardQueryCallbackProxy::OnSuccess");
static_assert(offsetof(ULeaderboardQueryCallbackProxy, OnFailure) == 56, "Offset mismatch for ULeaderboardQueryCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.LogoutCallbackProxy
// Kind: Class; super: BlueprintAsyncActionBase
class ULogoutCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(ULogoutCallbackProxy, OnSuccess) == 48, "Offset mismatch for ULogoutCallbackProxy::OnSuccess");
static_assert(offsetof(ULogoutCallbackProxy, OnFailure) == 64, "Offset mismatch for ULogoutCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.OnlineBeacon
// Kind: Class; super: Actor
class UOnlineBeacon
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float BeaconConnectionInitialTimeout; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float BeaconConnectionTimeout; // 0x027C (Size: 0x4, Type: FloatProperty)
    void* NetDriver; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOnlineBeacon, BeaconConnectionInitialTimeout) == 632, "Offset mismatch for UOnlineBeacon::BeaconConnectionInitialTimeout");
static_assert(offsetof(UOnlineBeacon, BeaconConnectionTimeout) == 636, "Offset mismatch for UOnlineBeacon::BeaconConnectionTimeout");
static_assert(offsetof(UOnlineBeacon, NetDriver) == 640, "Offset mismatch for UOnlineBeacon::NetDriver");

// /Script/OnlineSubsystemUtils.OnlineBeaconClient
// Kind: Class; super: OnlineBeacon
class UOnlineBeaconClient
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* BeaconOwner; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* BeaconConnection; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConnectionState; // 0x02C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOnlineBeaconClient, BeaconOwner) == 688, "Offset mismatch for UOnlineBeaconClient::BeaconOwner");
static_assert(offsetof(UOnlineBeaconClient, BeaconConnection) == 696, "Offset mismatch for UOnlineBeaconClient::BeaconConnection");
static_assert(offsetof(UOnlineBeaconClient, ConnectionState) == 704, "Offset mismatch for UOnlineBeaconClient::ConnectionState");

// /Script/OnlineSubsystemUtils.OnlineBeaconHost
// Kind: Class; super: OnlineBeacon
class UOnlineBeaconHost
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::int32_t ListenPort; // 0x02B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bReuseAddressAndPort; // 0x02B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAuthRequired; // 0x02B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x02B6
    std::uint32_t MaxAuthTokenSize; // 0x02B8 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x14]; // 0x02BC
    TArray<void*> ClientActors; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOnlineBeaconHost, ListenPort) == 688, "Offset mismatch for UOnlineBeaconHost::ListenPort");
static_assert(offsetof(UOnlineBeaconHost, bReuseAddressAndPort) == 692, "Offset mismatch for UOnlineBeaconHost::bReuseAddressAndPort");
static_assert(offsetof(UOnlineBeaconHost, bAuthRequired) == 693, "Offset mismatch for UOnlineBeaconHost::bAuthRequired");
static_assert(offsetof(UOnlineBeaconHost, MaxAuthTokenSize) == 696, "Offset mismatch for UOnlineBeaconHost::MaxAuthTokenSize");
static_assert(offsetof(UOnlineBeaconHost, ClientActors) == 720, "Offset mismatch for UOnlineBeaconHost::ClientActors");

// /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
// Kind: Class; super: Actor
class UOnlineBeaconHostObject
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString BeaconTypeName; // 0x0270 (Size: 0x10, Type: StrProperty)
    void* ClientBeaconActorClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ClientActors; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    FName ClientBeaconActorChannelName; // 0x0298 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UOnlineBeaconHostObject, BeaconTypeName) == 624, "Offset mismatch for UOnlineBeaconHostObject::BeaconTypeName");
static_assert(offsetof(UOnlineBeaconHostObject, ClientBeaconActorClass) == 640, "Offset mismatch for UOnlineBeaconHostObject::ClientBeaconActorClass");
static_assert(offsetof(UOnlineBeaconHostObject, ClientActors) == 648, "Offset mismatch for UOnlineBeaconHostObject::ClientActors");
static_assert(offsetof(UOnlineBeaconHostObject, ClientBeaconActorChannelName) == 664, "Offset mismatch for UOnlineBeaconHostObject::ClientBeaconActorChannelName");

// /Script/OnlineSubsystemUtils.OnlineBeaconUnitTestClient
// Kind: Class; super: OnlineBeaconClient
class UOnlineBeaconUnitTestClient
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* BeaconOwner; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* BeaconConnection; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConnectionState; // 0x02C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UOnlineBeaconUnitTestClient, BeaconOwner) == 688, "Offset mismatch for UOnlineBeaconUnitTestClient::BeaconOwner");
static_assert(offsetof(UOnlineBeaconUnitTestClient, BeaconConnection) == 696, "Offset mismatch for UOnlineBeaconUnitTestClient::BeaconConnection");
static_assert(offsetof(UOnlineBeaconUnitTestClient, ConnectionState) == 704, "Offset mismatch for UOnlineBeaconUnitTestClient::ConnectionState");

// /Script/OnlineSubsystemUtils.OnlineBeaconUnitTestHost
// Kind: Class; super: OnlineBeaconHost
class UOnlineBeaconUnitTestHost
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::int32_t ListenPort; // 0x02B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bReuseAddressAndPort; // 0x02B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAuthRequired; // 0x02B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x02B6
    std::uint32_t MaxAuthTokenSize; // 0x02B8 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x14]; // 0x02BC
    TArray<void*> ClientActors; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOnlineBeaconUnitTestHost, ListenPort) == 688, "Offset mismatch for UOnlineBeaconUnitTestHost::ListenPort");
static_assert(offsetof(UOnlineBeaconUnitTestHost, bReuseAddressAndPort) == 692, "Offset mismatch for UOnlineBeaconUnitTestHost::bReuseAddressAndPort");
static_assert(offsetof(UOnlineBeaconUnitTestHost, bAuthRequired) == 693, "Offset mismatch for UOnlineBeaconUnitTestHost::bAuthRequired");
static_assert(offsetof(UOnlineBeaconUnitTestHost, MaxAuthTokenSize) == 696, "Offset mismatch for UOnlineBeaconUnitTestHost::MaxAuthTokenSize");
static_assert(offsetof(UOnlineBeaconUnitTestHost, ClientActors) == 720, "Offset mismatch for UOnlineBeaconUnitTestHost::ClientActors");

// /Script/OnlineSubsystemUtils.OnlineBeaconUnitTestHostObject
// Kind: Class; super: OnlineBeaconHostObject
class UOnlineBeaconUnitTestHostObject
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString BeaconTypeName; // 0x0270 (Size: 0x10, Type: StrProperty)
    void* ClientBeaconActorClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ClientActors; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    FName ClientBeaconActorChannelName; // 0x0298 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UOnlineBeaconUnitTestHostObject, BeaconTypeName) == 624, "Offset mismatch for UOnlineBeaconUnitTestHostObject::BeaconTypeName");
static_assert(offsetof(UOnlineBeaconUnitTestHostObject, ClientBeaconActorClass) == 640, "Offset mismatch for UOnlineBeaconUnitTestHostObject::ClientBeaconActorClass");
static_assert(offsetof(UOnlineBeaconUnitTestHostObject, ClientActors) == 648, "Offset mismatch for UOnlineBeaconUnitTestHostObject::ClientActors");
static_assert(offsetof(UOnlineBeaconUnitTestHostObject, ClientBeaconActorChannelName) == 664, "Offset mismatch for UOnlineBeaconUnitTestHostObject::ClientBeaconActorChannelName");

// /Script/OnlineSubsystemUtils.OnlineBeaconUnitTestNetConnection
// Kind: Class; super: IpConnection
class UOnlineBeaconUnitTestNetConnection
{
public:
    std::uint8_t Pad_0000[0x1A3C]; // 0x0000
    float SocketErrorDisconnectDelay; // 0x1A3C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOnlineBeaconUnitTestNetConnection, SocketErrorDisconnectDelay) == 6716, "Offset mismatch for UOnlineBeaconUnitTestNetConnection::SocketErrorDisconnectDelay");

// /Script/OnlineSubsystemUtils.OnlineBeaconUnitTestNetDriver
// Kind: Class; super: IpNetDriver
class UOnlineBeaconUnitTestNetDriver
{
public:
    std::uint8_t Pad_0000[0x618]; // 0x0000
    std::uint8_t AllowPlayerPortUnreach; // 0x0618 (Size: 0x1, Type: BoolProperty)
    // 0x0618 BoolProperty LogPortUnreach (shared storage)
    // 0x0618 BoolProperty bExitOnBindFailure (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0619
    std::uint32_t MaxPortCountToTry; // 0x061C (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0002[0x4]; // 0x0620
    std::uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x0624 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ServerDesiredSocketSendBufferBytes; // 0x0628 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x062C (Size: 0x4, Type: UInt32Property)
    std::uint32_t ClientDesiredSocketSendBufferBytes; // 0x0630 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0003[0x4]; // 0x0634
    double MaxSecondsInReceive; // 0x0638 (Size: 0x8, Type: DoubleProperty)
    std::int32_t NbPacketsBetweenReceiveTimeTest; // 0x0640 (Size: 0x4, Type: IntProperty)
    float ResolutionConnectionTimeout; // 0x0644 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, AllowPlayerPortUnreach) == 1560, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::AllowPlayerPortUnreach");
static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, MaxPortCountToTry) == 1564, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::MaxPortCountToTry");
static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, ServerDesiredSocketReceiveBufferBytes) == 1572, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::ServerDesiredSocketReceiveBufferBytes");
static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, ServerDesiredSocketSendBufferBytes) == 1576, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::ServerDesiredSocketSendBufferBytes");
static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, ClientDesiredSocketReceiveBufferBytes) == 1580, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::ClientDesiredSocketReceiveBufferBytes");
static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, ClientDesiredSocketSendBufferBytes) == 1584, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::ClientDesiredSocketSendBufferBytes");
static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, MaxSecondsInReceive) == 1592, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::MaxSecondsInReceive");
static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, NbPacketsBetweenReceiveTimeTest) == 1600, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::NbPacketsBetweenReceiveTimeTest");
static_assert(offsetof(UOnlineBeaconUnitTestNetDriver, ResolutionConnectionTimeout) == 1604, "Offset mismatch for UOnlineBeaconUnitTestNetDriver::ResolutionConnectionTimeout");

// /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Kind: Class; super: OnlineEngineInterface
class UOnlineEngineInterfaceImpl
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MappedUniqueNetIdTypes; // 0x0028 (Size: 0x10, Type: MapProperty)
    TArray<void*> CompatibleUniqueNetIdTypes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    FName VoiceSubsystemNameOverride; // 0x0048 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0050
    std::uint8_t bOnlineServicesCompatibilityEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    void* OnlineServicesCompatibilityInterface; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOnlineEngineInterfaceImpl, MappedUniqueNetIdTypes) == 40, "Offset mismatch for UOnlineEngineInterfaceImpl::MappedUniqueNetIdTypes");
static_assert(offsetof(UOnlineEngineInterfaceImpl, CompatibleUniqueNetIdTypes) == 56, "Offset mismatch for UOnlineEngineInterfaceImpl::CompatibleUniqueNetIdTypes");
static_assert(offsetof(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride) == 72, "Offset mismatch for UOnlineEngineInterfaceImpl::VoiceSubsystemNameOverride");
static_assert(offsetof(UOnlineEngineInterfaceImpl, bOnlineServicesCompatibilityEnabled) == 136, "Offset mismatch for UOnlineEngineInterfaceImpl::bOnlineServicesCompatibilityEnabled");
static_assert(offsetof(UOnlineEngineInterfaceImpl, OnlineServicesCompatibilityInterface) == 144, "Offset mismatch for UOnlineEngineInterfaceImpl::OnlineServicesCompatibilityInterface");

// /Script/OnlineSubsystemUtils.OnlinePIEConfig
// Kind: Class; super: Object
class UOnlinePIEConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> LoginTypesAllowingDuplicates; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOnlinePIEConfig, LoginTypesAllowingDuplicates) == 40, "Offset mismatch for UOnlinePIEConfig::LoginTypesAllowingDuplicates");

// /Script/OnlineSubsystemUtils.OnlinePIESettings
// Kind: Class; super: DeveloperSettings
class UOnlinePIESettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bOnlinePIEEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> Logins; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOnlinePIESettings, bOnlinePIEEnabled) == 48, "Offset mismatch for UOnlinePIESettings::bOnlinePIEEnabled");
static_assert(offsetof(UOnlinePIESettings, Logins) == 56, "Offset mismatch for UOnlinePIESettings::Logins");

// /Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
// Kind: Class; super: OnlineEngineInterface
class UOnlineServicesEngineInterfaceImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OnlineSubsystemUtils.OnlineSessionClient
// Kind: Class; super: OnlineSession
class UOnlineSessionClient
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    std::uint8_t bIsFromInvite; // 0x0158 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHandlingDisconnect; // 0x0159 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOnlineSessionClient, bIsFromInvite) == 344, "Offset mismatch for UOnlineSessionClient::bIsFromInvite");
static_assert(offsetof(UOnlineSessionClient, bHandlingDisconnect) == 345, "Offset mismatch for UOnlineSessionClient::bHandlingDisconnect");

// /Script/OnlineSubsystemUtils.PartyBeaconClient
// Kind: Class; super: OnlineBeaconClient
class UPartyBeaconClient
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    FString DestSessionId; // 0x0340 (Size: 0x10, Type: StrProperty)
    std::uint8_t PendingReservation[0x58]; // 0x0350 (Size: 0x58, Type: StructProperty)
    std::uint8_t RequestType; // 0x03A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPendingReservationSent; // 0x03A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCancelReservation; // 0x03AA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPartyBeaconClient, DestSessionId) == 832, "Offset mismatch for UPartyBeaconClient::DestSessionId");
static_assert(offsetof(UPartyBeaconClient, PendingReservation) == 848, "Offset mismatch for UPartyBeaconClient::PendingReservation");
static_assert(offsetof(UPartyBeaconClient, RequestType) == 936, "Offset mismatch for UPartyBeaconClient::RequestType");
static_assert(offsetof(UPartyBeaconClient, bPendingReservationSent) == 937, "Offset mismatch for UPartyBeaconClient::bPendingReservationSent");
static_assert(offsetof(UPartyBeaconClient, bCancelReservation) == 938, "Offset mismatch for UPartyBeaconClient::bCancelReservation");

// /Script/OnlineSubsystemUtils.PartyBeaconHost
// Kind: Class; super: OnlineBeaconHostObject
class UPartyBeaconHost
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* State; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x60]; // 0x02A8
    std::uint8_t bLogoutOnSessionTimeout; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsValidationStrRequired; // 0x0309 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x030A
    float SessionTimeoutSecs; // 0x030C (Size: 0x4, Type: FloatProperty)
    float TravelSessionTimeoutSecs; // 0x0310 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPartyBeaconHost, State) == 672, "Offset mismatch for UPartyBeaconHost::State");
static_assert(offsetof(UPartyBeaconHost, bLogoutOnSessionTimeout) == 776, "Offset mismatch for UPartyBeaconHost::bLogoutOnSessionTimeout");
static_assert(offsetof(UPartyBeaconHost, bIsValidationStrRequired) == 777, "Offset mismatch for UPartyBeaconHost::bIsValidationStrRequired");
static_assert(offsetof(UPartyBeaconHost, SessionTimeoutSecs) == 780, "Offset mismatch for UPartyBeaconHost::SessionTimeoutSecs");
static_assert(offsetof(UPartyBeaconHost, TravelSessionTimeoutSecs) == 784, "Offset mismatch for UPartyBeaconHost::TravelSessionTimeoutSecs");

// /Script/OnlineSubsystemUtils.PartyBeaconState
// Kind: Class; super: Object
class UPartyBeaconState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SessionName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::int32_t NumConsumedReservations; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxReservations; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTeams; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t NumPlayersPerTeam; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t TeamAssignmentMethod[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    std::int32_t ReservedHostTeamNum; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t ForceTeamNum; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRestrictCrossConsole; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    TArray<void*> PlatformCrossplayRestrictions; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlatformTypeMapping; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableRemovalRequests; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRespectCompetitiveIntegrity; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0072
    TArray<void*> Reservations; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPartyBeaconState, SessionName) == 40, "Offset mismatch for UPartyBeaconState::SessionName");
static_assert(offsetof(UPartyBeaconState, NumConsumedReservations) == 44, "Offset mismatch for UPartyBeaconState::NumConsumedReservations");
static_assert(offsetof(UPartyBeaconState, MaxReservations) == 48, "Offset mismatch for UPartyBeaconState::MaxReservations");
static_assert(offsetof(UPartyBeaconState, NumTeams) == 52, "Offset mismatch for UPartyBeaconState::NumTeams");
static_assert(offsetof(UPartyBeaconState, NumPlayersPerTeam) == 56, "Offset mismatch for UPartyBeaconState::NumPlayersPerTeam");
static_assert(offsetof(UPartyBeaconState, TeamAssignmentMethod) == 60, "Offset mismatch for UPartyBeaconState::TeamAssignmentMethod");
static_assert(offsetof(UPartyBeaconState, ReservedHostTeamNum) == 64, "Offset mismatch for UPartyBeaconState::ReservedHostTeamNum");
static_assert(offsetof(UPartyBeaconState, ForceTeamNum) == 68, "Offset mismatch for UPartyBeaconState::ForceTeamNum");
static_assert(offsetof(UPartyBeaconState, bRestrictCrossConsole) == 72, "Offset mismatch for UPartyBeaconState::bRestrictCrossConsole");
static_assert(offsetof(UPartyBeaconState, PlatformCrossplayRestrictions) == 80, "Offset mismatch for UPartyBeaconState::PlatformCrossplayRestrictions");
static_assert(offsetof(UPartyBeaconState, PlatformTypeMapping) == 96, "Offset mismatch for UPartyBeaconState::PlatformTypeMapping");
static_assert(offsetof(UPartyBeaconState, bEnableRemovalRequests) == 112, "Offset mismatch for UPartyBeaconState::bEnableRemovalRequests");
static_assert(offsetof(UPartyBeaconState, bRespectCompetitiveIntegrity) == 113, "Offset mismatch for UPartyBeaconState::bRespectCompetitiveIntegrity");
static_assert(offsetof(UPartyBeaconState, Reservations) == 120, "Offset mismatch for UPartyBeaconState::Reservations");

// /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
// Kind: Class; super: OnlineBlueprintCallProxyBase
class UQuitMatchCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UQuitMatchCallbackProxy, OnSuccess) == 48, "Offset mismatch for UQuitMatchCallbackProxy::OnSuccess");
static_assert(offsetof(UQuitMatchCallbackProxy, OnFailure) == 64, "Offset mismatch for UQuitMatchCallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Kind: Class; super: BlueprintAsyncActionBase
class UShowLoginUICallbackProxy
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailure; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UShowLoginUICallbackProxy, OnSuccess) == 48, "Offset mismatch for UShowLoginUICallbackProxy::OnSuccess");
static_assert(offsetof(UShowLoginUICallbackProxy, OnFailure) == 64, "Offset mismatch for UShowLoginUICallbackProxy::OnFailure");

// /Script/OnlineSubsystemUtils.SpectatorBeaconClient
// Kind: Class; super: OnlineBeaconClient
class USpectatorBeaconClient
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    FString DestSessionId; // 0x0340 (Size: 0x10, Type: StrProperty)
    std::uint8_t PendingReservation[0x88]; // 0x0350 (Size: 0x88, Type: StructProperty)
    std::uint8_t RequestType; // 0x03D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPendingReservationSent; // 0x03D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCancelReservation; // 0x03DA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpectatorBeaconClient, DestSessionId) == 832, "Offset mismatch for USpectatorBeaconClient::DestSessionId");
static_assert(offsetof(USpectatorBeaconClient, PendingReservation) == 848, "Offset mismatch for USpectatorBeaconClient::PendingReservation");
static_assert(offsetof(USpectatorBeaconClient, RequestType) == 984, "Offset mismatch for USpectatorBeaconClient::RequestType");
static_assert(offsetof(USpectatorBeaconClient, bPendingReservationSent) == 985, "Offset mismatch for USpectatorBeaconClient::bPendingReservationSent");
static_assert(offsetof(USpectatorBeaconClient, bCancelReservation) == 986, "Offset mismatch for USpectatorBeaconClient::bCancelReservation");

// /Script/OnlineSubsystemUtils.SpectatorBeaconHost
// Kind: Class; super: OnlineBeaconHostObject
class USpectatorBeaconHost
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* State; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x60]; // 0x02A8
    std::uint8_t bLogoutOnSessionTimeout; // 0x0308 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsValidationStrRequired; // 0x0309 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x030A
    float SessionTimeoutSecs; // 0x030C (Size: 0x4, Type: FloatProperty)
    float TravelSessionTimeoutSecs; // 0x0310 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpectatorBeaconHost, State) == 672, "Offset mismatch for USpectatorBeaconHost::State");
static_assert(offsetof(USpectatorBeaconHost, bLogoutOnSessionTimeout) == 776, "Offset mismatch for USpectatorBeaconHost::bLogoutOnSessionTimeout");
static_assert(offsetof(USpectatorBeaconHost, bIsValidationStrRequired) == 777, "Offset mismatch for USpectatorBeaconHost::bIsValidationStrRequired");
static_assert(offsetof(USpectatorBeaconHost, SessionTimeoutSecs) == 780, "Offset mismatch for USpectatorBeaconHost::SessionTimeoutSecs");
static_assert(offsetof(USpectatorBeaconHost, TravelSessionTimeoutSecs) == 784, "Offset mismatch for USpectatorBeaconHost::TravelSessionTimeoutSecs");

// /Script/OnlineSubsystemUtils.SpectatorBeaconState
// Kind: Class; super: Object
class USpectatorBeaconState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SessionName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::int32_t NumConsumedReservations; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxReservations; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRestrictCrossConsole; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    TArray<void*> Reservations; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpectatorBeaconState, SessionName) == 40, "Offset mismatch for USpectatorBeaconState::SessionName");
static_assert(offsetof(USpectatorBeaconState, NumConsumedReservations) == 44, "Offset mismatch for USpectatorBeaconState::NumConsumedReservations");
static_assert(offsetof(USpectatorBeaconState, MaxReservations) == 48, "Offset mismatch for USpectatorBeaconState::MaxReservations");
static_assert(offsetof(USpectatorBeaconState, bRestrictCrossConsole) == 52, "Offset mismatch for USpectatorBeaconState::bRestrictCrossConsole");
static_assert(offsetof(USpectatorBeaconState, Reservations) == 56, "Offset mismatch for USpectatorBeaconState::Reservations");

// /Script/OnlineSubsystemUtils.TestBeaconClient
// Kind: Class; super: OnlineBeaconClient
class UTestBeaconClient
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* BeaconOwner; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* BeaconConnection; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConnectionState; // 0x02C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UTestBeaconClient, BeaconOwner) == 688, "Offset mismatch for UTestBeaconClient::BeaconOwner");
static_assert(offsetof(UTestBeaconClient, BeaconConnection) == 696, "Offset mismatch for UTestBeaconClient::BeaconConnection");
static_assert(offsetof(UTestBeaconClient, ConnectionState) == 704, "Offset mismatch for UTestBeaconClient::ConnectionState");

// /Script/OnlineSubsystemUtils.TestBeaconHost
// Kind: Class; super: OnlineBeaconHostObject
class UTestBeaconHost
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString BeaconTypeName; // 0x0270 (Size: 0x10, Type: StrProperty)
    void* ClientBeaconActorClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ClientActors; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    FName ClientBeaconActorChannelName; // 0x0298 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UTestBeaconHost, BeaconTypeName) == 624, "Offset mismatch for UTestBeaconHost::BeaconTypeName");
static_assert(offsetof(UTestBeaconHost, ClientBeaconActorClass) == 640, "Offset mismatch for UTestBeaconHost::ClientBeaconActorClass");
static_assert(offsetof(UTestBeaconHost, ClientActors) == 648, "Offset mismatch for UTestBeaconHost::ClientActors");
static_assert(offsetof(UTestBeaconHost, ClientBeaconActorChannelName) == 664, "Offset mismatch for UTestBeaconHost::ClientBeaconActorChannelName");

// /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTurnBasedBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
// Kind: Class; super: SynthComponent
class UVoipListenerSynthComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t bAllowSpatialization; // 0x0240 (Size: 0x1, Type: BoolProperty)
    // 0x0240 BoolProperty bAutoDestroy (shared storage)
    // 0x0240 BoolProperty bOverrideAttenuation (shared storage)
    // 0x0240 BoolProperty bStopWhenOwnerDestroyed (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0241
    std::uint8_t bEnableBaseSubmix; // 0x0244 (Size: 0x1, Type: BoolProperty)
    // 0x0244 BoolProperty bEnableBusSends (shared storage)
    // 0x0244 BoolProperty bEnableSubmixSends (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0245
    void* AttenuationSettings; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttenuationOverrides[0x290]; // 0x0250 (Size: 0x290, Type: StructProperty)
    void* ConcurrencySettings; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConcurrencySet[0x10]; // 0x04E8 (Size: 0x10, Type: SetProperty)
    std::uint8_t ModulationRouting[0x68]; // 0x04F8 (Size: 0x68, Type: StructProperty)
    void* SoundClass; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* SourceEffectChain; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* SoundSubmix; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SoundSubmixSends; // 0x0578 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BusSends; // 0x0588 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreEffectBusSends; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsPreviewSound; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    // 0x05A8 BoolProperty bIsUISound (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x05A9
    std::int32_t EnvelopeFollowerAttackTime; // 0x05AC (Size: 0x4, Type: IntProperty)
    std::int32_t EnvelopeFollowerReleaseTime; // 0x05B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x05B4
    FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x05B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0005[0x20]; // 0x05C8
    void* Synth; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* AudioComponent; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVoipListenerSynthComponent, bAllowSpatialization) == 576, "Offset mismatch for UVoipListenerSynthComponent::bAllowSpatialization");
static_assert(offsetof(UVoipListenerSynthComponent, bEnableBaseSubmix) == 580, "Offset mismatch for UVoipListenerSynthComponent::bEnableBaseSubmix");
static_assert(offsetof(UVoipListenerSynthComponent, AttenuationSettings) == 584, "Offset mismatch for UVoipListenerSynthComponent::AttenuationSettings");
static_assert(offsetof(UVoipListenerSynthComponent, AttenuationOverrides) == 592, "Offset mismatch for UVoipListenerSynthComponent::AttenuationOverrides");
static_assert(offsetof(UVoipListenerSynthComponent, ConcurrencySettings) == 1248, "Offset mismatch for UVoipListenerSynthComponent::ConcurrencySettings");
static_assert(offsetof(UVoipListenerSynthComponent, ConcurrencySet) == 1256, "Offset mismatch for UVoipListenerSynthComponent::ConcurrencySet");
static_assert(offsetof(UVoipListenerSynthComponent, ModulationRouting) == 1272, "Offset mismatch for UVoipListenerSynthComponent::ModulationRouting");
static_assert(offsetof(UVoipListenerSynthComponent, SoundClass) == 1376, "Offset mismatch for UVoipListenerSynthComponent::SoundClass");
static_assert(offsetof(UVoipListenerSynthComponent, SourceEffectChain) == 1384, "Offset mismatch for UVoipListenerSynthComponent::SourceEffectChain");
static_assert(offsetof(UVoipListenerSynthComponent, SoundSubmix) == 1392, "Offset mismatch for UVoipListenerSynthComponent::SoundSubmix");
static_assert(offsetof(UVoipListenerSynthComponent, SoundSubmixSends) == 1400, "Offset mismatch for UVoipListenerSynthComponent::SoundSubmixSends");
static_assert(offsetof(UVoipListenerSynthComponent, BusSends) == 1416, "Offset mismatch for UVoipListenerSynthComponent::BusSends");
static_assert(offsetof(UVoipListenerSynthComponent, PreEffectBusSends) == 1432, "Offset mismatch for UVoipListenerSynthComponent::PreEffectBusSends");
static_assert(offsetof(UVoipListenerSynthComponent, bIsPreviewSound) == 1448, "Offset mismatch for UVoipListenerSynthComponent::bIsPreviewSound");
static_assert(offsetof(UVoipListenerSynthComponent, EnvelopeFollowerAttackTime) == 1452, "Offset mismatch for UVoipListenerSynthComponent::EnvelopeFollowerAttackTime");
static_assert(offsetof(UVoipListenerSynthComponent, EnvelopeFollowerReleaseTime) == 1456, "Offset mismatch for UVoipListenerSynthComponent::EnvelopeFollowerReleaseTime");
static_assert(offsetof(UVoipListenerSynthComponent, OnAudioEnvelopeValue) == 1464, "Offset mismatch for UVoipListenerSynthComponent::OnAudioEnvelopeValue");
static_assert(offsetof(UVoipListenerSynthComponent, Synth) == 1512, "Offset mismatch for UVoipListenerSynthComponent::Synth");
static_assert(offsetof(UVoipListenerSynthComponent, AudioComponent) == 1520, "Offset mismatch for UVoipListenerSynthComponent::AudioComponent");
