/**
 * decamp dumper generated SDK
 * Package: /Script/SproutBuilding
 */
#pragma once
#include "Basic.h"

// /Script/SproutBuilding.SproutDecorationSession
// Kind: ScriptStruct; super: none
struct FSproutDecorationSession
{
public:
    std::uint8_t SessionID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SessionStartTime[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventStartTime[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t HouseSaveID[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t HouseOwnerID[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    FString PlotType; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString PlotID; // 0x0070 (Size: 0x10, Type: StrProperty)
    FName HousingShellID; // 0x0080 (Size: 0x8, Type: NameProperty)
    void* HousingItemDefinition; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::int32_t HousingCurrentDecorCount; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t HousingMaxDecorCount; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0098
    TArray<void*> Entries; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDecorationSession, SessionID) == 0, "Offset mismatch for FSproutDecorationSession::SessionID");
static_assert(offsetof(FSproutDecorationSession, SessionStartTime) == 16, "Offset mismatch for FSproutDecorationSession::SessionStartTime");
static_assert(offsetof(FSproutDecorationSession, EventStartTime) == 24, "Offset mismatch for FSproutDecorationSession::EventStartTime");
static_assert(offsetof(FSproutDecorationSession, HouseSaveID) == 32, "Offset mismatch for FSproutDecorationSession::HouseSaveID");
static_assert(offsetof(FSproutDecorationSession, HouseOwnerID) == 48, "Offset mismatch for FSproutDecorationSession::HouseOwnerID");
static_assert(offsetof(FSproutDecorationSession, PlotType) == 96, "Offset mismatch for FSproutDecorationSession::PlotType");
static_assert(offsetof(FSproutDecorationSession, PlotID) == 112, "Offset mismatch for FSproutDecorationSession::PlotID");
static_assert(offsetof(FSproutDecorationSession, HousingShellID) == 128, "Offset mismatch for FSproutDecorationSession::HousingShellID");
static_assert(offsetof(FSproutDecorationSession, HousingItemDefinition) == 136, "Offset mismatch for FSproutDecorationSession::HousingItemDefinition");
static_assert(offsetof(FSproutDecorationSession, HousingCurrentDecorCount) == 144, "Offset mismatch for FSproutDecorationSession::HousingCurrentDecorCount");
static_assert(offsetof(FSproutDecorationSession, HousingMaxDecorCount) == 148, "Offset mismatch for FSproutDecorationSession::HousingMaxDecorCount");
static_assert(offsetof(FSproutDecorationSession, Entries) == 168, "Offset mismatch for FSproutDecorationSession::Entries");

// /Script/SproutBuilding.SproutDecorationSessionEntry
// Kind: ScriptStruct; super: none
struct FSproutDecorationSessionEntry
{
public:
    FString ActorClassName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ItemName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t ItemType[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpawnLocation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnTime[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t ActorSaveID[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutDecorationSessionEntry, ActorClassName) == 0, "Offset mismatch for FSproutDecorationSessionEntry::ActorClassName");
static_assert(offsetof(FSproutDecorationSessionEntry, ItemName) == 16, "Offset mismatch for FSproutDecorationSessionEntry::ItemName");
static_assert(offsetof(FSproutDecorationSessionEntry, ItemType) == 32, "Offset mismatch for FSproutDecorationSessionEntry::ItemType");
static_assert(offsetof(FSproutDecorationSessionEntry, SpawnLocation) == 64, "Offset mismatch for FSproutDecorationSessionEntry::SpawnLocation");
static_assert(offsetof(FSproutDecorationSessionEntry, SpawnTime) == 88, "Offset mismatch for FSproutDecorationSessionEntry::SpawnTime");
static_assert(offsetof(FSproutDecorationSessionEntry, ActorSaveID) == 96, "Offset mismatch for FSproutDecorationSessionEntry::ActorSaveID");

// /Script/SproutBuilding.SproutEvent_BuilderToolEquipped
// Kind: ScriptStruct; super: none
struct FSproutEvent_BuilderToolEquipped
{
public:
    void* BuilderTool; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutEvent_BuilderToolEquipped, BuilderTool) == 0, "Offset mismatch for FSproutEvent_BuilderToolEquipped::BuilderTool");

// /Script/SproutBuilding.SproutEvent_BuilderToolUnEquipped
// Kind: ScriptStruct; super: none
struct FSproutEvent_BuilderToolUnEquipped
{
public:
    void* BuilderTool; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutEvent_BuilderToolUnEquipped, BuilderTool) == 0, "Offset mismatch for FSproutEvent_BuilderToolUnEquipped::BuilderTool");

// /Script/SproutBuilding.SproutEvent_BuildingSelectionSpawned
// Kind: ScriptStruct; super: none
struct FSproutEvent_BuildingSelectionSpawned
{
public:
    void* BuilderTool; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Behavior; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SelectionGUID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> SpawnedActors; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutEvent_BuildingSelectionSpawned, BuilderTool) == 0, "Offset mismatch for FSproutEvent_BuildingSelectionSpawned::BuilderTool");
static_assert(offsetof(FSproutEvent_BuildingSelectionSpawned, Behavior) == 8, "Offset mismatch for FSproutEvent_BuildingSelectionSpawned::Behavior");
static_assert(offsetof(FSproutEvent_BuildingSelectionSpawned, SelectionGUID) == 16, "Offset mismatch for FSproutEvent_BuildingSelectionSpawned::SelectionGUID");
static_assert(offsetof(FSproutEvent_BuildingSelectionSpawned, SpawnedActors) == 32, "Offset mismatch for FSproutEvent_BuildingSelectionSpawned::SpawnedActors");

// /Script/SproutBuilding.SproutEvent_BuildingStarted
// Kind: ScriptStruct; super: none
struct FSproutEvent_BuildingStarted
{
public:
    void* BuilderTool; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Behavior; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutEvent_BuildingStarted, BuilderTool) == 0, "Offset mismatch for FSproutEvent_BuildingStarted::BuilderTool");
static_assert(offsetof(FSproutEvent_BuildingStarted, Behavior) == 8, "Offset mismatch for FSproutEvent_BuildingStarted::Behavior");

// /Script/SproutBuilding.SproutEvent_BuildingStopped
// Kind: ScriptStruct; super: none
struct FSproutEvent_BuildingStopped
{
public:
    void* BuilderTool; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Behavior; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutEvent_BuildingStopped, BuilderTool) == 0, "Offset mismatch for FSproutEvent_BuildingStopped::BuilderTool");
static_assert(offsetof(FSproutEvent_BuildingStopped, Behavior) == 8, "Offset mismatch for FSproutEvent_BuildingStopped::Behavior");

// /Script/SproutBuilding.SproutBuilderTool
// Kind: Class; super: JunoBuilderTool
class USproutBuilderTool
{
public:
    std::uint8_t Pad_0000[0x1A78]; // 0x0000
    void* InputMappingData; // 0x1A78 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutBuilderTool, InputMappingData) == 6776, "Offset mismatch for USproutBuilderTool::InputMappingData");

// /Script/SproutBuilding.SproutBuilderToolPlayerComponent
// Kind: Class; super: BuilderToolPlayerComponent
class USproutBuilderToolPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* BuilderToolWeaponItemDefinition; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutBuilderToolPlayerComponent, BuilderToolWeaponItemDefinition) == 200, "Offset mismatch for USproutBuilderToolPlayerComponent::BuilderToolWeaponItemDefinition");

// /Script/SproutBuilding.SproutBuildingBehavior
// Kind: Class; super: JunoBuildingBehavior
class USproutBuildingBehavior
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* RotateInputAction; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* NudgeInputAction; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* ToggleNudgeInputAction; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* AdjacencyInputAction; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* SnapToggleInputAction; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* ToggleNudgeAxisInputAction; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* ResetNudgeInputAction; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* EditModeInputAction; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    double OffGridRotationStep; // 0x0370 (Size: 0x8, Type: DoubleProperty)
    float MaxSelectionDistance; // 0x0378 (Size: 0x4, Type: FloatProperty)
    float MaxSelectionDistanceZ; // 0x037C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxConnectivityDistance[0x18]; // 0x0380 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultGridOffsetLimit[0x10]; // 0x0398 (Size: 0x10, Type: StructProperty)
    std::uint8_t PenetrationTolerance[0x18]; // 0x03A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SFX[0x40]; // 0x03C0 (Size: 0x40, Type: StructProperty)
    std::uint8_t OverlappableClasses[0x20]; // 0x0400 (Size: 0x20, Type: StructProperty)
    std::uint8_t PlacementSupportingClasses[0x20]; // 0x0420 (Size: 0x20, Type: StructProperty)
    std::uint8_t Overrides[0x350]; // 0x0440 (Size: 0x350, Type: StructProperty)
    std::uint8_t bEnableAdjacency; // 0x0790 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSnapPlacement; // 0x0791 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableVerticalAxisNudge; // 0x0792 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0793
    FMulticastInlineDelegate OnToggleSnapping; // 0x0798 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSmoothingChanged; // 0x07A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlacementTypeChanged; // 0x07B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x20]; // 0x07C8
    std::uint8_t CachedBuildingStateContext[0x40]; // 0x07E8 (Size: 0x40, Type: StructProperty)
    FMulticastInlineDelegate OnBuildingStateContextChanged; // 0x0828 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    double LastTriggerRequestedTimestamp; // 0x0838 (Size: 0x8, Type: DoubleProperty)
    double LastTriggerTimestamp; // 0x0840 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(USproutBuildingBehavior, RotateInputAction) == 816, "Offset mismatch for USproutBuildingBehavior::RotateInputAction");
static_assert(offsetof(USproutBuildingBehavior, NudgeInputAction) == 824, "Offset mismatch for USproutBuildingBehavior::NudgeInputAction");
static_assert(offsetof(USproutBuildingBehavior, ToggleNudgeInputAction) == 832, "Offset mismatch for USproutBuildingBehavior::ToggleNudgeInputAction");
static_assert(offsetof(USproutBuildingBehavior, AdjacencyInputAction) == 840, "Offset mismatch for USproutBuildingBehavior::AdjacencyInputAction");
static_assert(offsetof(USproutBuildingBehavior, SnapToggleInputAction) == 848, "Offset mismatch for USproutBuildingBehavior::SnapToggleInputAction");
static_assert(offsetof(USproutBuildingBehavior, ToggleNudgeAxisInputAction) == 856, "Offset mismatch for USproutBuildingBehavior::ToggleNudgeAxisInputAction");
static_assert(offsetof(USproutBuildingBehavior, ResetNudgeInputAction) == 864, "Offset mismatch for USproutBuildingBehavior::ResetNudgeInputAction");
static_assert(offsetof(USproutBuildingBehavior, EditModeInputAction) == 872, "Offset mismatch for USproutBuildingBehavior::EditModeInputAction");
static_assert(offsetof(USproutBuildingBehavior, OffGridRotationStep) == 880, "Offset mismatch for USproutBuildingBehavior::OffGridRotationStep");
static_assert(offsetof(USproutBuildingBehavior, MaxSelectionDistance) == 888, "Offset mismatch for USproutBuildingBehavior::MaxSelectionDistance");
static_assert(offsetof(USproutBuildingBehavior, MaxSelectionDistanceZ) == 892, "Offset mismatch for USproutBuildingBehavior::MaxSelectionDistanceZ");
static_assert(offsetof(USproutBuildingBehavior, MaxConnectivityDistance) == 896, "Offset mismatch for USproutBuildingBehavior::MaxConnectivityDistance");
static_assert(offsetof(USproutBuildingBehavior, DefaultGridOffsetLimit) == 920, "Offset mismatch for USproutBuildingBehavior::DefaultGridOffsetLimit");
static_assert(offsetof(USproutBuildingBehavior, PenetrationTolerance) == 936, "Offset mismatch for USproutBuildingBehavior::PenetrationTolerance");
static_assert(offsetof(USproutBuildingBehavior, SFX) == 960, "Offset mismatch for USproutBuildingBehavior::SFX");
static_assert(offsetof(USproutBuildingBehavior, OverlappableClasses) == 1024, "Offset mismatch for USproutBuildingBehavior::OverlappableClasses");
static_assert(offsetof(USproutBuildingBehavior, PlacementSupportingClasses) == 1056, "Offset mismatch for USproutBuildingBehavior::PlacementSupportingClasses");
static_assert(offsetof(USproutBuildingBehavior, Overrides) == 1088, "Offset mismatch for USproutBuildingBehavior::Overrides");
static_assert(offsetof(USproutBuildingBehavior, bEnableAdjacency) == 1936, "Offset mismatch for USproutBuildingBehavior::bEnableAdjacency");
static_assert(offsetof(USproutBuildingBehavior, bEnableSnapPlacement) == 1937, "Offset mismatch for USproutBuildingBehavior::bEnableSnapPlacement");
static_assert(offsetof(USproutBuildingBehavior, bEnableVerticalAxisNudge) == 1938, "Offset mismatch for USproutBuildingBehavior::bEnableVerticalAxisNudge");
static_assert(offsetof(USproutBuildingBehavior, OnToggleSnapping) == 1944, "Offset mismatch for USproutBuildingBehavior::OnToggleSnapping");
static_assert(offsetof(USproutBuildingBehavior, OnSmoothingChanged) == 1960, "Offset mismatch for USproutBuildingBehavior::OnSmoothingChanged");
static_assert(offsetof(USproutBuildingBehavior, OnPlacementTypeChanged) == 1976, "Offset mismatch for USproutBuildingBehavior::OnPlacementTypeChanged");
static_assert(offsetof(USproutBuildingBehavior, CachedBuildingStateContext) == 2024, "Offset mismatch for USproutBuildingBehavior::CachedBuildingStateContext");
static_assert(offsetof(USproutBuildingBehavior, OnBuildingStateContextChanged) == 2088, "Offset mismatch for USproutBuildingBehavior::OnBuildingStateContextChanged");
static_assert(offsetof(USproutBuildingBehavior, LastTriggerRequestedTimestamp) == 2104, "Offset mismatch for USproutBuildingBehavior::LastTriggerRequestedTimestamp");
static_assert(offsetof(USproutBuildingBehavior, LastTriggerTimestamp) == 2112, "Offset mismatch for USproutBuildingBehavior::LastTriggerTimestamp");

// /Script/SproutBuilding.SproutBuildingBlueprintPersistenceAssetType
// Kind: Class; super: JunoBlueprintPersistenceAssetType
class USproutBuildingBlueprintPersistenceAssetType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutBuilding.SproutBuildingCheatManager
// Kind: Class; super: ChildCheatManager
class USproutBuildingCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutBuilding.SproutBuildingItemDefinition
// Kind: Class; super: SproutCoreBuildingItemDefinition
class USproutBuildingItemDefinition
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t ItemType; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrimaryAssetIdItemTypeOverride; // 0x0099 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShouldDisplayQuantity; // 0x009A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutBuildingItemDefinition, ItemType) == 152, "Offset mismatch for USproutBuildingItemDefinition::ItemType");
static_assert(offsetof(USproutBuildingItemDefinition, PrimaryAssetIdItemTypeOverride) == 153, "Offset mismatch for USproutBuildingItemDefinition::PrimaryAssetIdItemTypeOverride");
static_assert(offsetof(USproutBuildingItemDefinition, bShouldDisplayQuantity) == 154, "Offset mismatch for USproutBuildingItemDefinition::bShouldDisplayQuantity");

// /Script/SproutBuilding.SproutControllerComponent_BuildingAnalytics
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_BuildingAnalytics
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t DecorationSession[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutControllerComponent_BuildingAnalytics, DecorationSession) == 200, "Offset mismatch for USproutControllerComponent_BuildingAnalytics::DecorationSession");
