/**
 * decamp dumper generated SDK
 * Package: /Script/Hotfix
 */
#pragma once
#include "Basic.h"

// /Script/Hotfix.UpdateContextDefinition
// Kind: ScriptStruct; super: none
struct FUpdateContextDefinition
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckAvailabilityOnly; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPatchCheckEnabled; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0013
    TSet<void*> AdditionalTags; // 0x0018 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FUpdateContextDefinition, Name) == 0, "Offset mismatch for FUpdateContextDefinition::Name");
static_assert(offsetof(FUpdateContextDefinition, bEnabled) == 16, "Offset mismatch for FUpdateContextDefinition::bEnabled");
static_assert(offsetof(FUpdateContextDefinition, bCheckAvailabilityOnly) == 17, "Offset mismatch for FUpdateContextDefinition::bCheckAvailabilityOnly");
static_assert(offsetof(FUpdateContextDefinition, bPatchCheckEnabled) == 18, "Offset mismatch for FUpdateContextDefinition::bPatchCheckEnabled");
static_assert(offsetof(FUpdateContextDefinition, AdditionalTags) == 24, "Offset mismatch for FUpdateContextDefinition::AdditionalTags");

// /Script/Hotfix.OnlineHotfixManager
// Kind: Class; super: Object
class UOnlineHotfixManager
{
public:
    std::uint8_t Pad_0000[0x228]; // 0x0000
    FString OSSName; // 0x0228 (Size: 0x10, Type: StrProperty)
    FString HotfixManagerClassName; // 0x0238 (Size: 0x10, Type: StrProperty)
    FString DebugPrefix; // 0x0248 (Size: 0x10, Type: StrProperty)
    TArray<void*> HotfixableAssetClasses; // 0x0258 (Size: 0x10, Type: ArrayProperty)
    float HotfixDownloadInactivityTimeoutSeconds; // 0x0268 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x026C
    TArray<void*> AssetsHotfixedFromIniFiles; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResolvedHotfixableAssetClasses; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOnlineHotfixManager, OSSName) == 552, "Offset mismatch for UOnlineHotfixManager::OSSName");
static_assert(offsetof(UOnlineHotfixManager, HotfixManagerClassName) == 568, "Offset mismatch for UOnlineHotfixManager::HotfixManagerClassName");
static_assert(offsetof(UOnlineHotfixManager, DebugPrefix) == 584, "Offset mismatch for UOnlineHotfixManager::DebugPrefix");
static_assert(offsetof(UOnlineHotfixManager, HotfixableAssetClasses) == 600, "Offset mismatch for UOnlineHotfixManager::HotfixableAssetClasses");
static_assert(offsetof(UOnlineHotfixManager, HotfixDownloadInactivityTimeoutSeconds) == 616, "Offset mismatch for UOnlineHotfixManager::HotfixDownloadInactivityTimeoutSeconds");
static_assert(offsetof(UOnlineHotfixManager, AssetsHotfixedFromIniFiles) == 624, "Offset mismatch for UOnlineHotfixManager::AssetsHotfixedFromIniFiles");
static_assert(offsetof(UOnlineHotfixManager, ResolvedHotfixableAssetClasses) == 640, "Offset mismatch for UOnlineHotfixManager::ResolvedHotfixableAssetClasses");

// /Script/Hotfix.UpdateManager
// Kind: Class; super: Object
class UUpdateManager
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    float UpdateCheckStartDelay; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float UpdateCheckCachedResponseDelay; // 0x008C (Size: 0x4, Type: FloatProperty)
    float HotfixCheckCompleteDelay; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float UpdateCheckCompleteDelay; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float HotfixAvailabilityCheckCompleteDelay; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float UpdateCheckAvailabilityCompleteDelay; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00A0
    std::int32_t AppSuspendedUpdateCheckTimeSeconds; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00A8
    std::uint8_t bInitialUpdateFinished; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckHotfixAvailabilityOnly; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentUpdateState; // 0x00B2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x00B3
    std::int32_t WorstNumFilesPendingLoadViewed; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00B8
    std::uint8_t LastHotfixResult; // 0x00BC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x23]; // 0x00BD
    std::uint8_t LastUpdateCheck[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastCompletionResult; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x37]; // 0x00F1
    void* UpdateStateEnum; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* UpdateCompletionEnum; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UpdateContextDefinitionUnknown[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    TArray<void*> UpdateContextDefinitions; // 0x0160 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUpdateManager, UpdateCheckStartDelay) == 136, "Offset mismatch for UUpdateManager::UpdateCheckStartDelay");
static_assert(offsetof(UUpdateManager, UpdateCheckCachedResponseDelay) == 140, "Offset mismatch for UUpdateManager::UpdateCheckCachedResponseDelay");
static_assert(offsetof(UUpdateManager, HotfixCheckCompleteDelay) == 144, "Offset mismatch for UUpdateManager::HotfixCheckCompleteDelay");
static_assert(offsetof(UUpdateManager, UpdateCheckCompleteDelay) == 148, "Offset mismatch for UUpdateManager::UpdateCheckCompleteDelay");
static_assert(offsetof(UUpdateManager, HotfixAvailabilityCheckCompleteDelay) == 152, "Offset mismatch for UUpdateManager::HotfixAvailabilityCheckCompleteDelay");
static_assert(offsetof(UUpdateManager, UpdateCheckAvailabilityCompleteDelay) == 156, "Offset mismatch for UUpdateManager::UpdateCheckAvailabilityCompleteDelay");
static_assert(offsetof(UUpdateManager, AppSuspendedUpdateCheckTimeSeconds) == 164, "Offset mismatch for UUpdateManager::AppSuspendedUpdateCheckTimeSeconds");
static_assert(offsetof(UUpdateManager, bInitialUpdateFinished) == 176, "Offset mismatch for UUpdateManager::bInitialUpdateFinished");
static_assert(offsetof(UUpdateManager, bCheckHotfixAvailabilityOnly) == 177, "Offset mismatch for UUpdateManager::bCheckHotfixAvailabilityOnly");
static_assert(offsetof(UUpdateManager, CurrentUpdateState) == 178, "Offset mismatch for UUpdateManager::CurrentUpdateState");
static_assert(offsetof(UUpdateManager, WorstNumFilesPendingLoadViewed) == 180, "Offset mismatch for UUpdateManager::WorstNumFilesPendingLoadViewed");
static_assert(offsetof(UUpdateManager, LastHotfixResult) == 188, "Offset mismatch for UUpdateManager::LastHotfixResult");
static_assert(offsetof(UUpdateManager, LastUpdateCheck) == 224, "Offset mismatch for UUpdateManager::LastUpdateCheck");
static_assert(offsetof(UUpdateManager, LastCompletionResult) == 240, "Offset mismatch for UUpdateManager::LastCompletionResult");
static_assert(offsetof(UUpdateManager, UpdateStateEnum) == 296, "Offset mismatch for UUpdateManager::UpdateStateEnum");
static_assert(offsetof(UUpdateManager, UpdateCompletionEnum) == 304, "Offset mismatch for UUpdateManager::UpdateCompletionEnum");
static_assert(offsetof(UUpdateManager, UpdateContextDefinitionUnknown) == 312, "Offset mismatch for UUpdateManager::UpdateContextDefinitionUnknown");
static_assert(offsetof(UUpdateManager, UpdateContextDefinitions) == 352, "Offset mismatch for UUpdateManager::UpdateContextDefinitions");
