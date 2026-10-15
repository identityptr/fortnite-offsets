/**
 * decamp dumper generated SDK
 * Package: /Script/VKEditGameplay
 */
#pragma once
#include "Basic.h"

// /Script/VKEditGameplay.FortVKEditGameFeatureAction_RegisterContentErrorHandler
// Kind: Class; super: GameFeatureAction
class UFortVKEditGameFeatureAction_RegisterContentErrorHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VKEditGameplay.FortVKEditGameFeatureAction_SetWaterRestriction
// Kind: Class; super: GameFeatureAction
class UFortVKEditGameFeatureAction_SetWaterRestriction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_EditConnectionManager
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    std::int32_t EditConnections; // 0x0220 (Size: 0x4, Type: IntProperty)
    std::uint8_t VkEditStatus; // 0x0224 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPerformanceWarning; // 0x0225 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0226
    std::uint8_t UITagsToHide[0x1]; // 0x0228 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayspaceComponent_EditConnectionManager, EditConnections) == 544, "Offset mismatch for UPlayspaceComponent_EditConnectionManager::EditConnections");
static_assert(offsetof(UPlayspaceComponent_EditConnectionManager, VkEditStatus) == 548, "Offset mismatch for UPlayspaceComponent_EditConnectionManager::VkEditStatus");
static_assert(offsetof(UPlayspaceComponent_EditConnectionManager, bPerformanceWarning) == 549, "Offset mismatch for UPlayspaceComponent_EditConnectionManager::bPerformanceWarning");
static_assert(offsetof(UPlayspaceComponent_EditConnectionManager, UITagsToHide) == 552, "Offset mismatch for UPlayspaceComponent_EditConnectionManager::UITagsToHide");

// /Script/VKEditGameplay.PlayspaceComponent_PlaysetRootSpawner
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_PlaysetRootSpawner
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPlayspaceComponent_PlaysetRootSpawner, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UPlayspaceComponent_PlaysetRootSpawner::OnMeshNetworkReady_BP");
static_assert(offsetof(UPlayspaceComponent_PlaysetRootSpawner, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UPlayspaceComponent_PlaysetRootSpawner::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UPlayspaceComponent_PlaysetRootSpawner, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UPlayspaceComponent_PlaysetRootSpawner::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UPlayspaceComponent_PlaysetRootSpawner, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UPlayspaceComponent_PlaysetRootSpawner::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UPlayspaceComponent_PlaysetRootSpawner, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UPlayspaceComponent_PlaysetRootSpawner::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UPlayspaceComponent_PlaysetRootSpawner, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UPlayspaceComponent_PlaysetRootSpawner::bSubscribeToMeshNetwork");

// /Script/VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission
// Kind: Class; super: PlayspaceComponent_CreativeToolsPermission
class UPlayspaceComponent_VKEditCreativeToolsPermission
{
public:
    std::uint8_t Pad_0000[0x160]; // 0x0000
    std::uint8_t AccountIdOfOwner[0x30]; // 0x0160 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlotPermissions[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t bPermissionsSaveInProgress; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowUnrestrictedPhoneControls; // 0x01A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipPermissionsRequirement; // 0x01AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldRestrictMoveToolToInteractionCollection; // 0x01AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01AC
    void* MoveToolInteractionCollection; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OldPermissions[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayspaceComponent_VKEditCreativeToolsPermission, AccountIdOfOwner) == 352, "Offset mismatch for UPlayspaceComponent_VKEditCreativeToolsPermission::AccountIdOfOwner");
static_assert(offsetof(UPlayspaceComponent_VKEditCreativeToolsPermission, PlotPermissions) == 400, "Offset mismatch for UPlayspaceComponent_VKEditCreativeToolsPermission::PlotPermissions");
static_assert(offsetof(UPlayspaceComponent_VKEditCreativeToolsPermission, bPermissionsSaveInProgress) == 424, "Offset mismatch for UPlayspaceComponent_VKEditCreativeToolsPermission::bPermissionsSaveInProgress");
static_assert(offsetof(UPlayspaceComponent_VKEditCreativeToolsPermission, bAllowUnrestrictedPhoneControls) == 425, "Offset mismatch for UPlayspaceComponent_VKEditCreativeToolsPermission::bAllowUnrestrictedPhoneControls");
static_assert(offsetof(UPlayspaceComponent_VKEditCreativeToolsPermission, bSkipPermissionsRequirement) == 426, "Offset mismatch for UPlayspaceComponent_VKEditCreativeToolsPermission::bSkipPermissionsRequirement");
static_assert(offsetof(UPlayspaceComponent_VKEditCreativeToolsPermission, bShouldRestrictMoveToolToInteractionCollection) == 427, "Offset mismatch for UPlayspaceComponent_VKEditCreativeToolsPermission::bShouldRestrictMoveToolToInteractionCollection");
static_assert(offsetof(UPlayspaceComponent_VKEditCreativeToolsPermission, MoveToolInteractionCollection) == 432, "Offset mismatch for UPlayspaceComponent_VKEditCreativeToolsPermission::MoveToolInteractionCollection");
static_assert(offsetof(UPlayspaceComponent_VKEditCreativeToolsPermission, OldPermissions) == 440, "Offset mismatch for UPlayspaceComponent_VKEditCreativeToolsPermission::OldPermissions");

// /Script/VKEditGameplay.VKEditGameplayAssetsToCook
// Kind: Class; super: PrimaryDataAsset
class UVKEditGameplayAssetsToCook
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Assets; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVKEditGameplayAssetsToCook, Assets) == 40, "Offset mismatch for UVKEditGameplayAssetsToCook::Assets");

// /Script/VKEditGameplay.VKEditPlayspace
// Kind: Class; super: FortPlayspace
class UVKEditPlayspace
{
public:
    std::uint8_t Pad_0000[0x6A8]; // 0x0000
    std::uint8_t EditorOnlyMinigameSettingsMachineClassToSpawn[0x20]; // 0x06A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t EditorOnlyWorldManagerClassToSpawn[0x20]; // 0x06C8 (Size: 0x20, Type: SoftClassProperty)
    void* LevelStreamComponent; // 0x06E8 (Size: 0x8, Type: ObjectProperty)
    void* ProjectEditComponent; // 0x06F0 (Size: 0x8, Type: ObjectProperty)
    void* PlayStopPauseManager; // 0x06F8 (Size: 0x8, Type: ObjectProperty)
    void* EditConnectionManager; // 0x0700 (Size: 0x8, Type: ObjectProperty)
    void* LiveEditComponent; // 0x0708 (Size: 0x8, Type: ObjectProperty)
    void* CreativeToolsPermission; // 0x0710 (Size: 0x8, Type: ObjectProperty)
    void* CreativeLoadingStateProxy; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* SpatialGameplayComponent; // 0x0720 (Size: 0x8, Type: ObjectProperty)
    void* ObjectTrackingComponent; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* DeviceTrackerComponent; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    void* CreativeInventoryComponent; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    void* ActorMemoryTrackerComponent; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    void* GlobalMemoryTrackerComponent; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    void* FortCreativeDynamicXp; // 0x0750 (Size: 0x8, Type: ObjectProperty)
    void* CreativeModifyEmotesComponent; // 0x0758 (Size: 0x8, Type: ObjectProperty)
    void* WorldTimeOfDayOverrideComponent; // 0x0760 (Size: 0x8, Type: ObjectProperty)
    void* NaniteSettingsOverrideComponent; // 0x0768 (Size: 0x8, Type: ObjectProperty)
    void* TeamManagementComponent; // 0x0770 (Size: 0x8, Type: ObjectProperty)
    void* PlaysetRootSpawnerComponent; // 0x0778 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPawnOverridesComponent; // 0x0780 (Size: 0x8, Type: ObjectProperty)
    void* LiveTraceComponent; // 0x0788 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVKEditPlayspace, EditorOnlyMinigameSettingsMachineClassToSpawn) == 1704, "Offset mismatch for UVKEditPlayspace::EditorOnlyMinigameSettingsMachineClassToSpawn");
static_assert(offsetof(UVKEditPlayspace, EditorOnlyWorldManagerClassToSpawn) == 1736, "Offset mismatch for UVKEditPlayspace::EditorOnlyWorldManagerClassToSpawn");
static_assert(offsetof(UVKEditPlayspace, LevelStreamComponent) == 1768, "Offset mismatch for UVKEditPlayspace::LevelStreamComponent");
static_assert(offsetof(UVKEditPlayspace, ProjectEditComponent) == 1776, "Offset mismatch for UVKEditPlayspace::ProjectEditComponent");
static_assert(offsetof(UVKEditPlayspace, PlayStopPauseManager) == 1784, "Offset mismatch for UVKEditPlayspace::PlayStopPauseManager");
static_assert(offsetof(UVKEditPlayspace, EditConnectionManager) == 1792, "Offset mismatch for UVKEditPlayspace::EditConnectionManager");
static_assert(offsetof(UVKEditPlayspace, LiveEditComponent) == 1800, "Offset mismatch for UVKEditPlayspace::LiveEditComponent");
static_assert(offsetof(UVKEditPlayspace, CreativeToolsPermission) == 1808, "Offset mismatch for UVKEditPlayspace::CreativeToolsPermission");
static_assert(offsetof(UVKEditPlayspace, CreativeLoadingStateProxy) == 1816, "Offset mismatch for UVKEditPlayspace::CreativeLoadingStateProxy");
static_assert(offsetof(UVKEditPlayspace, SpatialGameplayComponent) == 1824, "Offset mismatch for UVKEditPlayspace::SpatialGameplayComponent");
static_assert(offsetof(UVKEditPlayspace, ObjectTrackingComponent) == 1832, "Offset mismatch for UVKEditPlayspace::ObjectTrackingComponent");
static_assert(offsetof(UVKEditPlayspace, DeviceTrackerComponent) == 1840, "Offset mismatch for UVKEditPlayspace::DeviceTrackerComponent");
static_assert(offsetof(UVKEditPlayspace, CreativeInventoryComponent) == 1848, "Offset mismatch for UVKEditPlayspace::CreativeInventoryComponent");
static_assert(offsetof(UVKEditPlayspace, ActorMemoryTrackerComponent) == 1856, "Offset mismatch for UVKEditPlayspace::ActorMemoryTrackerComponent");
static_assert(offsetof(UVKEditPlayspace, GlobalMemoryTrackerComponent) == 1864, "Offset mismatch for UVKEditPlayspace::GlobalMemoryTrackerComponent");
static_assert(offsetof(UVKEditPlayspace, FortCreativeDynamicXp) == 1872, "Offset mismatch for UVKEditPlayspace::FortCreativeDynamicXp");
static_assert(offsetof(UVKEditPlayspace, CreativeModifyEmotesComponent) == 1880, "Offset mismatch for UVKEditPlayspace::CreativeModifyEmotesComponent");
static_assert(offsetof(UVKEditPlayspace, WorldTimeOfDayOverrideComponent) == 1888, "Offset mismatch for UVKEditPlayspace::WorldTimeOfDayOverrideComponent");
static_assert(offsetof(UVKEditPlayspace, NaniteSettingsOverrideComponent) == 1896, "Offset mismatch for UVKEditPlayspace::NaniteSettingsOverrideComponent");
static_assert(offsetof(UVKEditPlayspace, TeamManagementComponent) == 1904, "Offset mismatch for UVKEditPlayspace::TeamManagementComponent");
static_assert(offsetof(UVKEditPlayspace, PlaysetRootSpawnerComponent) == 1912, "Offset mismatch for UVKEditPlayspace::PlaysetRootSpawnerComponent");
static_assert(offsetof(UVKEditPlayspace, PlayerPawnOverridesComponent) == 1920, "Offset mismatch for UVKEditPlayspace::PlayerPawnOverridesComponent");
static_assert(offsetof(UVKEditPlayspace, LiveTraceComponent) == 1928, "Offset mismatch for UVKEditPlayspace::LiveTraceComponent");
