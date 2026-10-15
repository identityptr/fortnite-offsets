/**
 * decamp dumper generated SDK
 * Package: /Script/JunoNeptuneGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoNeptuneGameplayRuntime.DungeonResetData
// Kind: ScriptStruct; super: TableRowBase
struct FDungeonResetData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DungeonEventTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t TimeInMinutes; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDungeonResetData, DungeonEventTag) == 8, "Offset mismatch for FDungeonResetData::DungeonEventTag");
static_assert(offsetof(FDungeonResetData, TimeInMinutes) == 12, "Offset mismatch for FDungeonResetData::TimeInMinutes");

// /Script/JunoNeptuneGameplayRuntime.FortEventReaction_DungeonCompleted
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_DungeonCompleted
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DungeonTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCaveExpired; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerCaveReset; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEventReaction_DungeonCompleted, DungeonTag) == 8, "Offset mismatch for FFortEventReaction_DungeonCompleted::DungeonTag");
static_assert(offsetof(FFortEventReaction_DungeonCompleted, bCaveExpired) == 12, "Offset mismatch for FFortEventReaction_DungeonCompleted::bCaveExpired");
static_assert(offsetof(FFortEventReaction_DungeonCompleted, bTriggerCaveReset) == 13, "Offset mismatch for FFortEventReaction_DungeonCompleted::bTriggerCaveReset");

// /Script/JunoNeptuneGameplayRuntime.JunoRegisterStormKingChangesEvent
// Kind: ScriptStruct; super: none
struct FJunoRegisterStormKingChangesEvent
{
public:
    std::uint8_t ListenSKChanges; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoRegisterStormKingChangesEvent, ListenSKChanges) == 0, "Offset mismatch for FJunoRegisterStormKingChangesEvent::ListenSKChanges");

// /Script/JunoNeptuneGameplayRuntime.JunoRiftUpgradeRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRiftUpgradeRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SourceItemQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    void* TargetItem; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FJunoRiftUpgradeRow, SourceItemQuery) == 8, "Offset mismatch for FJunoRiftUpgradeRow::SourceItemQuery");
static_assert(offsetof(FJunoRiftUpgradeRow, TargetItem) == 80, "Offset mismatch for FJunoRiftUpgradeRow::TargetItem");

// /Script/JunoNeptuneGameplayRuntime.JunoStormKingAppearsCompleteEvent
// Kind: ScriptStruct; super: none
struct FJunoStormKingAppearsCompleteEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoStormKingAppearsEvent
// Kind: ScriptStruct; super: none
struct FJunoStormKingAppearsEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoStormKingDefeatedCompleteEvent
// Kind: ScriptStruct; super: none
struct FJunoStormKingDefeatedCompleteEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoStormKingDefeatedEvent
// Kind: ScriptStruct; super: none
struct FJunoStormKingDefeatedEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoStormKingHealthInfoChangeEvent
// Kind: ScriptStruct; super: none
struct FJunoStormKingHealthInfoChangeEvent
{
public:
    std::uint8_t HealthType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Percent; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoStormKingHealthInfoChangeEvent, HealthType) == 0, "Offset mismatch for FJunoStormKingHealthInfoChangeEvent::HealthType");
static_assert(offsetof(FJunoStormKingHealthInfoChangeEvent, Percent) == 4, "Offset mismatch for FJunoStormKingHealthInfoChangeEvent::Percent");

// /Script/JunoNeptuneGameplayRuntime.JunoStormKingHideAllUIEvent
// Kind: ScriptStruct; super: none
struct FJunoStormKingHideAllUIEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoStormSessionTelemetryData
// Kind: ScriptStruct; super: none
struct FJunoStormSessionTelemetryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoGameStateComponent_CraftingStats
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_CraftingStats
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoGameStateComponent_CraftingStats, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_CraftingStats::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_CraftingStats::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_CraftingStats::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_CraftingStats::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_CraftingStats::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_CraftingStats::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_CraftingStats::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_CraftingStats::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_CraftingStats::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_CraftingStats, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_CraftingStats::OnComponentDeactivated");

// /Script/JunoNeptuneGameplayRuntime.JunoNeptuneAnalytics
// Kind: Class; super: Object
class UJunoNeptuneAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoNeptuneCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoNeptuneCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoNeptuneFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoNeptuneFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoNeptuneGameplayRuntime.JunoNeptuneGameplayComponent
// Kind: Class; super: PlayspaceComponent
class UJunoNeptuneGameplayComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* ResetTimerTable; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DungeonActiveVerbTag[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    void* TilePersistenceFeatureData; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoNeptuneGameplayComponent, ResetTimerTable) == 200, "Offset mismatch for UJunoNeptuneGameplayComponent::ResetTimerTable");
static_assert(offsetof(UJunoNeptuneGameplayComponent, DungeonActiveVerbTag) == 208, "Offset mismatch for UJunoNeptuneGameplayComponent::DungeonActiveVerbTag");
static_assert(offsetof(UJunoNeptuneGameplayComponent, TilePersistenceFeatureData) == 216, "Offset mismatch for UJunoNeptuneGameplayComponent::TilePersistenceFeatureData");

// /Script/JunoNeptuneGameplayRuntime.JunoNeptuneStormKingAnalyticsComponent
// Kind: Class; super: FortPawnComponent
class UJunoNeptuneStormKingAnalyticsComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, ComponentTags) == 104, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::ComponentTags");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, AssetUserData) == 120, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::AssetUserData");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, bNetAddressable) == 152, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::bNetAddressable");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, bAutoActivate) == 154, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::bAutoActivate");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::bIsEditorOnly");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, CreationMethod) == 185, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::CreationMethod");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::OnComponentActivated");
static_assert(offsetof(UJunoNeptuneStormKingAnalyticsComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoNeptuneStormKingAnalyticsComponent::OnComponentDeactivated");

// /Script/JunoNeptuneGameplayRuntime.JunoPlayerControllerComponent_NeptuneAnalytics
// Kind: Class; super: ControllerComponent
class UJunoPlayerControllerComponent_NeptuneAnalytics
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t PawnEliminatedEventHandle[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayerControllerComponent_NeptuneAnalytics, PawnEliminatedEventHandle) == 232, "Offset mismatch for UJunoPlayerControllerComponent_NeptuneAnalytics::PawnEliminatedEventHandle");

// /Script/JunoNeptuneGameplayRuntime.JunoStormAttributeSet
// Kind: Class; super: FortAttributeSet
class UJunoStormAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t StormTime[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxStormTime[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoStormAttributeSet, StormTime) == 72, "Offset mismatch for UJunoStormAttributeSet::StormTime");
static_assert(offsetof(UJunoStormAttributeSet, MaxStormTime) == 112, "Offset mismatch for UJunoStormAttributeSet::MaxStormTime");
