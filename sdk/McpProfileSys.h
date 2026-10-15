/**
 * decamp dumper generated SDK
 * Package: /Script/McpProfileSys
 */
#pragma once
#include "Basic.h"

// /Script/McpProfileSys.AccountIdAndProfileResponse
// Kind: ScriptStruct; super: none
struct FAccountIdAndProfileResponse
{
public:
    FString AccountID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Response[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAccountIdAndProfileResponse, AccountID) == 0, "Offset mismatch for FAccountIdAndProfileResponse::AccountID");
static_assert(offsetof(FAccountIdAndProfileResponse, Response) == 16, "Offset mismatch for FAccountIdAndProfileResponse::Response");

// /Script/McpProfileSys.BaseUrlContext
// Kind: ScriptStruct; super: none
struct FBaseUrlContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/McpProfileSys.ClientUrlContext
// Kind: ScriptStruct; super: BaseUrlContext
struct FClientUrlContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/McpProfileSys.DedicatedServerUrlContext
// Kind: ScriptStruct; super: BaseUrlContext
struct FDedicatedServerUrlContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/McpProfileSys.GiftBoxInfo
// Kind: ScriptStruct; super: none
struct FGiftBoxInfo
{
public:
    std::uint8_t GiftedOn[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FString FromAccountId; // 0x0008 (Size: 0x10, Type: StrProperty)
    TArray<void*> LootList; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Params[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t grant_on_date[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGiftBoxInfo, GiftedOn) == 0, "Offset mismatch for FGiftBoxInfo::GiftedOn");
static_assert(offsetof(FGiftBoxInfo, FromAccountId) == 8, "Offset mismatch for FGiftBoxInfo::FromAccountId");
static_assert(offsetof(FGiftBoxInfo, LootList) == 24, "Offset mismatch for FGiftBoxInfo::LootList");
static_assert(offsetof(FGiftBoxInfo, Params) == 40, "Offset mismatch for FGiftBoxInfo::Params");
static_assert(offsetof(FGiftBoxInfo, grant_on_date) == 72, "Offset mismatch for FGiftBoxInfo::grant_on_date");

// /Script/McpProfileSys.McpAddItemRequest
// Kind: ScriptStruct; super: none
struct FMcpAddItemRequest
{
public:
    FString ItemID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString TemplateId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Quantity; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t Attributes[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMcpAddItemRequest, ItemID) == 0, "Offset mismatch for FMcpAddItemRequest::ItemID");
static_assert(offsetof(FMcpAddItemRequest, TemplateId) == 16, "Offset mismatch for FMcpAddItemRequest::TemplateId");
static_assert(offsetof(FMcpAddItemRequest, Quantity) == 32, "Offset mismatch for FMcpAddItemRequest::Quantity");
static_assert(offsetof(FMcpAddItemRequest, Attributes) == 40, "Offset mismatch for FMcpAddItemRequest::Attributes");

// /Script/McpProfileSys.McpChangeAttributesRequest
// Kind: ScriptStruct; super: none
struct FMcpChangeAttributesRequest
{
public:
    FString ItemID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Attributes[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMcpChangeAttributesRequest, ItemID) == 0, "Offset mismatch for FMcpChangeAttributesRequest::ItemID");
static_assert(offsetof(FMcpChangeAttributesRequest, Attributes) == 16, "Offset mismatch for FMcpChangeAttributesRequest::Attributes");

// /Script/McpProfileSys.McpChangeQuantityRequest
// Kind: ScriptStruct; super: none
struct FMcpChangeQuantityRequest
{
public:
    FString ItemID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t DeltaQuantity; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMcpChangeQuantityRequest, ItemID) == 0, "Offset mismatch for FMcpChangeQuantityRequest::ItemID");
static_assert(offsetof(FMcpChangeQuantityRequest, DeltaQuantity) == 16, "Offset mismatch for FMcpChangeQuantityRequest::DeltaQuantity");

// /Script/McpProfileSys.McpItemIdAndQuantity
// Kind: ScriptStruct; super: McpLootEntry
struct FMcpItemIdAndQuantity
{
public:
    FString ItemType; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ItemGuid; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Quantity; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t Attributes[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    FString ItemProfile; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMcpItemIdAndQuantity, ItemType) == 0, "Offset mismatch for FMcpItemIdAndQuantity::ItemType");
static_assert(offsetof(FMcpItemIdAndQuantity, ItemGuid) == 16, "Offset mismatch for FMcpItemIdAndQuantity::ItemGuid");
static_assert(offsetof(FMcpItemIdAndQuantity, Quantity) == 32, "Offset mismatch for FMcpItemIdAndQuantity::Quantity");
static_assert(offsetof(FMcpItemIdAndQuantity, Attributes) == 40, "Offset mismatch for FMcpItemIdAndQuantity::Attributes");
static_assert(offsetof(FMcpItemIdAndQuantity, ItemProfile) == 72, "Offset mismatch for FMcpItemIdAndQuantity::ItemProfile");

// /Script/McpProfileSys.McpLootEntry
// Kind: ScriptStruct; super: none
struct FMcpLootEntry
{
public:
    FString ItemType; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ItemGuid; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Quantity; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t Attributes[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    FString ItemProfile; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMcpLootEntry, ItemType) == 0, "Offset mismatch for FMcpLootEntry::ItemType");
static_assert(offsetof(FMcpLootEntry, ItemGuid) == 16, "Offset mismatch for FMcpLootEntry::ItemGuid");
static_assert(offsetof(FMcpLootEntry, Quantity) == 32, "Offset mismatch for FMcpLootEntry::Quantity");
static_assert(offsetof(FMcpLootEntry, Attributes) == 40, "Offset mismatch for FMcpLootEntry::Attributes");
static_assert(offsetof(FMcpLootEntry, ItemProfile) == 72, "Offset mismatch for FMcpLootEntry::ItemProfile");

// /Script/McpProfileSys.McpLootResult
// Kind: ScriptStruct; super: none
struct FMcpLootResult
{
public:
    FString TierGroupName; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Items; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMcpLootResult, TierGroupName) == 0, "Offset mismatch for FMcpLootResult::TierGroupName");
static_assert(offsetof(FMcpLootResult, Items) == 16, "Offset mismatch for FMcpLootResult::Items");

// /Script/McpProfileSys.McpProfileChangeRequest
// Kind: ScriptStruct; super: none
struct FMcpProfileChangeRequest
{
public:
    std::int32_t BaseCommandRevision; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> AddRequests; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RemoveRequests; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChangeQuantityRequests; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChangeAttributesRequests; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChangeStatRequests; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMcpProfileChangeRequest, BaseCommandRevision) == 0, "Offset mismatch for FMcpProfileChangeRequest::BaseCommandRevision");
static_assert(offsetof(FMcpProfileChangeRequest, AddRequests) == 8, "Offset mismatch for FMcpProfileChangeRequest::AddRequests");
static_assert(offsetof(FMcpProfileChangeRequest, RemoveRequests) == 24, "Offset mismatch for FMcpProfileChangeRequest::RemoveRequests");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeQuantityRequests) == 40, "Offset mismatch for FMcpProfileChangeRequest::ChangeQuantityRequests");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeAttributesRequests) == 56, "Offset mismatch for FMcpProfileChangeRequest::ChangeAttributesRequests");
static_assert(offsetof(FMcpProfileChangeRequest, ChangeStatRequests) == 72, "Offset mismatch for FMcpProfileChangeRequest::ChangeStatRequests");

// /Script/McpProfileSys.McpRemoveItemRequest
// Kind: ScriptStruct; super: none
struct FMcpRemoveItemRequest
{
public:
    FString ItemID; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMcpRemoveItemRequest, ItemID) == 0, "Offset mismatch for FMcpRemoveItemRequest::ItemID");

// /Script/McpProfileSys.MultiProfileUpdate
// Kind: ScriptStruct; super: none
struct FMultiProfileUpdate
{
public:
    TWeakObjectPtr<void> ProfileWeakPtr; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bSkipPreload; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMultiProfileUpdate, ProfileWeakPtr) == 0, "Offset mismatch for FMultiProfileUpdate::ProfileWeakPtr");
static_assert(offsetof(FMultiProfileUpdate, bSkipPreload) == 8, "Offset mismatch for FMultiProfileUpdate::bSkipPreload");

// /Script/McpProfileSys.ProfileDataOmissionGroupsDefinition
// Kind: ScriptStruct; super: none
struct FProfileDataOmissionGroupsDefinition
{
public:
    FString ProfileId; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> OmissionGroups; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FProfileDataOmissionGroupsDefinition, ProfileId) == 0, "Offset mismatch for FProfileDataOmissionGroupsDefinition::ProfileId");
static_assert(offsetof(FProfileDataOmissionGroupsDefinition, OmissionGroups) == 16, "Offset mismatch for FProfileDataOmissionGroupsDefinition::OmissionGroups");

// /Script/McpProfileSys.ProfileEntry
// Kind: ScriptStruct; super: none
struct FProfileEntry
{
public:
    FString ProfileId; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* ProfileObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bWaitingForRefreshAllProfilesResponse; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForwardUpdatesToClient; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FProfileEntry, ProfileId) == 0, "Offset mismatch for FProfileEntry::ProfileId");
static_assert(offsetof(FProfileEntry, ProfileObject) == 16, "Offset mismatch for FProfileEntry::ProfileObject");
static_assert(offsetof(FProfileEntry, bWaitingForRefreshAllProfilesResponse) == 24, "Offset mismatch for FProfileEntry::bWaitingForRefreshAllProfilesResponse");
static_assert(offsetof(FProfileEntry, bForwardUpdatesToClient) == 25, "Offset mismatch for FProfileEntry::bForwardUpdatesToClient");

// /Script/McpProfileSys.ProfileGroupEntry
// Kind: ScriptStruct; super: none
struct FProfileGroupEntry
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* ProfileGroup; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FProfileGroupEntry, ProfileGroup) == 32, "Offset mismatch for FProfileGroupEntry::ProfileGroup");

// /Script/McpProfileSys.ProfileUpdate
// Kind: ScriptStruct; super: ProfileUpdateSingle
struct FProfileUpdate
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::int32_t ResponseVersion; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    std::uint8_t ServerTime[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    TArray<void*> MultiUpdate; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FProfileUpdate, ResponseVersion) == 88, "Offset mismatch for FProfileUpdate::ResponseVersion");
static_assert(offsetof(FProfileUpdate, ServerTime) == 96, "Offset mismatch for FProfileUpdate::ServerTime");
static_assert(offsetof(FProfileUpdate, MultiUpdate) == 104, "Offset mismatch for FProfileUpdate::MultiUpdate");

// /Script/McpProfileSys.ProfileUpdateNotification
// Kind: ScriptStruct; super: none
struct FProfileUpdateNotification
{
public:
    TArray<void*> Changes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LockExpiration[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::int32_t CommandRevision; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::int64_t Revision; // 0x0020 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FProfileUpdateNotification, Changes) == 0, "Offset mismatch for FProfileUpdateNotification::Changes");
static_assert(offsetof(FProfileUpdateNotification, LockExpiration) == 16, "Offset mismatch for FProfileUpdateNotification::LockExpiration");
static_assert(offsetof(FProfileUpdateNotification, CommandRevision) == 24, "Offset mismatch for FProfileUpdateNotification::CommandRevision");
static_assert(offsetof(FProfileUpdateNotification, Revision) == 32, "Offset mismatch for FProfileUpdateNotification::Revision");

// /Script/McpProfileSys.ProfileUpdateSingle
// Kind: ScriptStruct; super: none
struct FProfileUpdateSingle
{
public:
    std::int64_t ProfileRevision; // 0x0000 (Size: 0x8, Type: Int64Property)
    FString ProfileId; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int64_t ProfileChangesBaseRevision; // 0x0018 (Size: 0x8, Type: Int64Property)
    TArray<void*> ProfileChanges; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LockExpiration[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    TArray<void*> Notifications; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ProfileCommandRevision; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x004C
    std::uint8_t CreationTime[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FProfileUpdateSingle, ProfileRevision) == 0, "Offset mismatch for FProfileUpdateSingle::ProfileRevision");
static_assert(offsetof(FProfileUpdateSingle, ProfileId) == 8, "Offset mismatch for FProfileUpdateSingle::ProfileId");
static_assert(offsetof(FProfileUpdateSingle, ProfileChangesBaseRevision) == 24, "Offset mismatch for FProfileUpdateSingle::ProfileChangesBaseRevision");
static_assert(offsetof(FProfileUpdateSingle, ProfileChanges) == 32, "Offset mismatch for FProfileUpdateSingle::ProfileChanges");
static_assert(offsetof(FProfileUpdateSingle, LockExpiration) == 48, "Offset mismatch for FProfileUpdateSingle::LockExpiration");
static_assert(offsetof(FProfileUpdateSingle, Notifications) == 56, "Offset mismatch for FProfileUpdateSingle::Notifications");
static_assert(offsetof(FProfileUpdateSingle, ProfileCommandRevision) == 72, "Offset mismatch for FProfileUpdateSingle::ProfileCommandRevision");
static_assert(offsetof(FProfileUpdateSingle, CreationTime) == 80, "Offset mismatch for FProfileUpdateSingle::CreationTime");

// /Script/McpProfileSys.PublicUrlContext
// Kind: ScriptStruct; super: BaseUrlContext
struct FPublicUrlContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/McpProfileSys.McpItemAware
// Kind: Class; super: Interface
class UMcpItemAware
{
public:
    std::uint8_t Opaque[1];
};


// /Script/McpProfileSys.McpItemDefinitionBase
// Kind: Class; super: PrimaryDataAsset
class UMcpItemDefinitionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/McpProfileSys.McpProfile
// Kind: Class; super: Object
class UMcpProfile
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AllowSubscriptionToNotificationsService; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3F]; // 0x0029
    FString DebugName; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::uint8_t bProfileLockOperationPending; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProfileUnlockOperationPending; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableMocks; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x35]; // 0x007B
    void* ProfileGroup; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    FString ProfileId; // 0x00B8 (Size: 0x10, Type: StrProperty)
    std::int64_t ProfileRevision; // 0x00C8 (Size: 0x8, Type: Int64Property)
    std::int32_t FullProfileQueryQueued; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bProfileWriteLocked; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00D5
    std::uint8_t ProfileWriteLockExpireTime[0x8]; // 0x00D8 (Size: 0x8, Type: StructProperty)
    std::uint8_t QueuedProfileUpdatingEnabled; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x00E1
    std::uint8_t CreationTime[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMcpProfile, AllowSubscriptionToNotificationsService) == 40, "Offset mismatch for UMcpProfile::AllowSubscriptionToNotificationsService");
static_assert(offsetof(UMcpProfile, DebugName) == 104, "Offset mismatch for UMcpProfile::DebugName");
static_assert(offsetof(UMcpProfile, bProfileLockOperationPending) == 120, "Offset mismatch for UMcpProfile::bProfileLockOperationPending");
static_assert(offsetof(UMcpProfile, bProfileUnlockOperationPending) == 121, "Offset mismatch for UMcpProfile::bProfileUnlockOperationPending");
static_assert(offsetof(UMcpProfile, bEnableMocks) == 122, "Offset mismatch for UMcpProfile::bEnableMocks");
static_assert(offsetof(UMcpProfile, ProfileGroup) == 176, "Offset mismatch for UMcpProfile::ProfileGroup");
static_assert(offsetof(UMcpProfile, ProfileId) == 184, "Offset mismatch for UMcpProfile::ProfileId");
static_assert(offsetof(UMcpProfile, ProfileRevision) == 200, "Offset mismatch for UMcpProfile::ProfileRevision");
static_assert(offsetof(UMcpProfile, FullProfileQueryQueued) == 208, "Offset mismatch for UMcpProfile::FullProfileQueryQueued");
static_assert(offsetof(UMcpProfile, bProfileWriteLocked) == 212, "Offset mismatch for UMcpProfile::bProfileWriteLocked");
static_assert(offsetof(UMcpProfile, ProfileWriteLockExpireTime) == 216, "Offset mismatch for UMcpProfile::ProfileWriteLockExpireTime");
static_assert(offsetof(UMcpProfile, QueuedProfileUpdatingEnabled) == 224, "Offset mismatch for UMcpProfile::QueuedProfileUpdatingEnabled");
static_assert(offsetof(UMcpProfile, CreationTime) == 232, "Offset mismatch for UMcpProfile::CreationTime");

// /Script/McpProfileSys.McpProfileGroup
// Kind: Class; super: Object
class UMcpProfileGroup
{
public:
    std::uint8_t Pad_0000[0xBC]; // 0x0000
    std::int32_t DelayMcpResults; // 0x00BC (Size: 0x4, Type: IntProperty)
    std::int32_t WeeklyIntervalStartDay; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    TArray<void*> ProfileList; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00D8
    FString PlayerName; // 0x00E0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsServer; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x47]; // 0x00F1
    FString LastMcpVersion; // 0x0138 (Size: 0x10, Type: StrProperty)
    FString LastContentVersion; // 0x0148 (Size: 0x10, Type: StrProperty)
    FString LastMinBuild; // 0x0158 (Size: 0x10, Type: StrProperty)
    std::uint8_t LocalTimeOffset[0x10]; // 0x0168 (Size: 0x10, Type: StructProperty)
    FString LockCode; // 0x0178 (Size: 0x10, Type: StrProperty)
    TArray<void*> LockedProfiles; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    FString LockedProfilesString; // 0x0198 (Size: 0x10, Type: StrProperty)
    std::int32_t ProfileWriteLockTimeoutSecs; // 0x01A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x01AC
    FString ApplyStashEndPoint; // 0x01B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAsyncParseProfileUpdates; // 0x01C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x4F]; // 0x01C1
    std::int32_t MaxChangesToForwardInUpdate; // 0x0210 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxChangeSizeInBytes; // 0x0214 (Size: 0x4, Type: IntProperty)
    TArray<void*> ForwardToClientExclusions; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingMultiProfileUpdates; // 0x0228 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMcpProfileGroup, DelayMcpResults) == 188, "Offset mismatch for UMcpProfileGroup::DelayMcpResults");
static_assert(offsetof(UMcpProfileGroup, WeeklyIntervalStartDay) == 192, "Offset mismatch for UMcpProfileGroup::WeeklyIntervalStartDay");
static_assert(offsetof(UMcpProfileGroup, ProfileList) == 200, "Offset mismatch for UMcpProfileGroup::ProfileList");
static_assert(offsetof(UMcpProfileGroup, PlayerName) == 224, "Offset mismatch for UMcpProfileGroup::PlayerName");
static_assert(offsetof(UMcpProfileGroup, bIsServer) == 240, "Offset mismatch for UMcpProfileGroup::bIsServer");
static_assert(offsetof(UMcpProfileGroup, LastMcpVersion) == 312, "Offset mismatch for UMcpProfileGroup::LastMcpVersion");
static_assert(offsetof(UMcpProfileGroup, LastContentVersion) == 328, "Offset mismatch for UMcpProfileGroup::LastContentVersion");
static_assert(offsetof(UMcpProfileGroup, LastMinBuild) == 344, "Offset mismatch for UMcpProfileGroup::LastMinBuild");
static_assert(offsetof(UMcpProfileGroup, LocalTimeOffset) == 360, "Offset mismatch for UMcpProfileGroup::LocalTimeOffset");
static_assert(offsetof(UMcpProfileGroup, LockCode) == 376, "Offset mismatch for UMcpProfileGroup::LockCode");
static_assert(offsetof(UMcpProfileGroup, LockedProfiles) == 392, "Offset mismatch for UMcpProfileGroup::LockedProfiles");
static_assert(offsetof(UMcpProfileGroup, LockedProfilesString) == 408, "Offset mismatch for UMcpProfileGroup::LockedProfilesString");
static_assert(offsetof(UMcpProfileGroup, ProfileWriteLockTimeoutSecs) == 424, "Offset mismatch for UMcpProfileGroup::ProfileWriteLockTimeoutSecs");
static_assert(offsetof(UMcpProfileGroup, ApplyStashEndPoint) == 432, "Offset mismatch for UMcpProfileGroup::ApplyStashEndPoint");
static_assert(offsetof(UMcpProfileGroup, bAsyncParseProfileUpdates) == 448, "Offset mismatch for UMcpProfileGroup::bAsyncParseProfileUpdates");
static_assert(offsetof(UMcpProfileGroup, MaxChangesToForwardInUpdate) == 528, "Offset mismatch for UMcpProfileGroup::MaxChangesToForwardInUpdate");
static_assert(offsetof(UMcpProfileGroup, MaxChangeSizeInBytes) == 532, "Offset mismatch for UMcpProfileGroup::MaxChangeSizeInBytes");
static_assert(offsetof(UMcpProfileGroup, ForwardToClientExclusions) == 536, "Offset mismatch for UMcpProfileGroup::ForwardToClientExclusions");
static_assert(offsetof(UMcpProfileGroup, PendingMultiProfileUpdates) == 552, "Offset mismatch for UMcpProfileGroup::PendingMultiProfileUpdates");

// /Script/McpProfileSys.McpProfileManager
// Kind: Class; super: Object
class UMcpProfileManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> ServerProfileGroups; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClientProfileGroups; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0058
    std::int32_t MaxItemsProcessedInInitialUpdatesPerTick; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0064
    TArray<void*> ConfigProfileDataOmissionGroups; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMcpProfileManager, ServerProfileGroups) == 56, "Offset mismatch for UMcpProfileManager::ServerProfileGroups");
static_assert(offsetof(UMcpProfileManager, ClientProfileGroups) == 72, "Offset mismatch for UMcpProfileManager::ClientProfileGroups");
static_assert(offsetof(UMcpProfileManager, MaxItemsProcessedInInitialUpdatesPerTick) == 96, "Offset mismatch for UMcpProfileManager::MaxItemsProcessedInInitialUpdatesPerTick");
static_assert(offsetof(UMcpProfileManager, ConfigProfileDataOmissionGroups) == 104, "Offset mismatch for UMcpProfileManager::ConfigProfileDataOmissionGroups");
