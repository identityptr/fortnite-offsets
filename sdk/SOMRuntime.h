/**
 * decamp dumper generated SDK
 * Package: /Script/SOMRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SOMRuntime.FortScriptedObjectMovementPhaseData
// Kind: ScriptStruct; super: none
struct FFortScriptedObjectMovementPhaseData
{
public:
    TArray<void*> Structures; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortScriptedObjectMovementPhaseData, Structures) == 0, "Offset mismatch for FFortScriptedObjectMovementPhaseData::Structures");

// /Script/SOMRuntime.ScriptedObjectMovementCalendarEventData
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovementCalendarEventData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovement_AStarGraphWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SOMRuntime.ScriptedObjectMovement_DynamicPathContext
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovement_DynamicPathContext
{
public:
    void* SourceSlot; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* DestinationSlot; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> GridProvider; // 0x0010 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, SourceSlot) == 0, "Offset mismatch for FScriptedObjectMovement_DynamicPathContext::SourceSlot");
static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, DestinationSlot) == 8, "Offset mismatch for FScriptedObjectMovement_DynamicPathContext::DestinationSlot");
static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, GridProvider) == 16, "Offset mismatch for FScriptedObjectMovement_DynamicPathContext::GridProvider");

// /Script/SOMRuntime.ScriptedObjectMovement_Grid
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovement_Grid
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t CellSize[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScriptedObjectMovement_Grid, CellSize) == 16, "Offset mismatch for FScriptedObjectMovement_Grid::CellSize");

// /Script/SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
{
public:
    FString EventName; // 0x0000 (Size: 0x10, Type: StrProperty)
    float DurationTimeSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float DelayStartTimeSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, EventName) == 0, "Offset mismatch for FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::EventName");
static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, DurationTimeSeconds) == 16, "Offset mismatch for FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::DurationTimeSeconds");
static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, DelayStartTimeSeconds) == 20, "Offset mismatch for FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::DelayStartTimeSeconds");

// /Script/SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovement_StaticPathSplineInputKeyData
{
public:
    std::uint8_t bLockGeneratedData; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString CalendarEvent; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString PauseCalendarEvent; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, bLockGeneratedData) == 0, "Offset mismatch for FScriptedObjectMovement_StaticPathSplineInputKeyData::bLockGeneratedData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, CalendarEvent) == 8, "Offset mismatch for FScriptedObjectMovement_StaticPathSplineInputKeyData::CalendarEvent");
static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, PauseCalendarEvent) == 24, "Offset mismatch for FScriptedObjectMovement_StaticPathSplineInputKeyData::PauseCalendarEvent");

// /Script/SOMRuntime.ScriptedObjectMovement_StaticPathStepData
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovement_StaticPathStepData
{
public:
    std::uint8_t StartWorldTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t EndWorldTransform[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    std::int32_t MasterPathStartSplinePoint; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::int32_t SubSplineStartPoint; // 0x00C4 (Size: 0x4, Type: IntProperty)
    float MoveAtServerTimeSecs; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x00CC
    void* PathTraveler; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D8
    std::uint8_t MoveStyleTag[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bTeleport; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSkipStep; // 0x00E5 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, StartWorldTransform) == 0, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::StartWorldTransform");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, EndWorldTransform) == 96, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::EndWorldTransform");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MasterPathStartSplinePoint) == 192, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::MasterPathStartSplinePoint");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, SubSplineStartPoint) == 196, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::SubSplineStartPoint");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MoveAtServerTimeSecs) == 200, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::MoveAtServerTimeSecs");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, PathTraveler) == 208, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::PathTraveler");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MoveStyleTag) == 224, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::MoveStyleTag");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, bTeleport) == 228, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::bTeleport");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, bIsSkipStep) == 229, "Offset mismatch for FScriptedObjectMovement_StaticPathStepData::bIsSkipStep");

// /Script/SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovement_StaticPathTravelerData
{
public:
    TArray<void*> GeneratedSplinesArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StepMetaData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* EnterSpline; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* ExitSpline; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PathTraveler; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::int32_t TravelOrder; // 0x0038 (Size: 0x4, Type: IntProperty)
    float LateralOffset; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLocked; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLockEnterSpline; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLockExitSpline; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0043
    std::uint8_t TravelerBounds[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, GeneratedSplinesArray) == 0, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::GeneratedSplinesArray");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, StepMetaData) == 16, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::StepMetaData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, EnterSpline) == 32, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::EnterSpline");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, ExitSpline) == 40, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::ExitSpline");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, PathTraveler) == 48, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::PathTraveler");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, TravelOrder) == 56, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::TravelOrder");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, LateralOffset) == 60, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::LateralOffset");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLocked) == 64, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::bLocked");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLockEnterSpline) == 65, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::bLockEnterSpline");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLockExitSpline) == 66, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::bLockExitSpline");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, TravelerBounds) == 72, "Offset mismatch for FScriptedObjectMovement_StaticPathTravelerData::TravelerBounds");

// /Script/SOMRuntime.ScriptedObjectMovement_StepMetaData
// Kind: ScriptStruct; super: none
struct FScriptedObjectMovement_StepMetaData
{
public:
    std::uint8_t bSkipStep; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FScriptedObjectMovement_StepMetaData, bSkipStep) == 0, "Offset mismatch for FScriptedObjectMovement_StepMetaData::bSkipStep");

// /Script/SOMRuntime.StaticPathCalendarSplinePointGroup
// Kind: ScriptStruct; super: none
struct FStaticPathCalendarSplinePointGroup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_ScriptedObjectMovementManager
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> WorldPhaseSites; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x58]; // 0x00D8
    TArray<void*> RegisteredStaticPaths; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    void* CurrentlyMovingStaticPath; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x28]; // 0x0148
    std::uint8_t StaticPathCooldownBetweenMoves[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameStateComponent_ScriptedObjectMovementManager, WorldPhaseSites) == 200, "Offset mismatch for UFortGameStateComponent_ScriptedObjectMovementManager::WorldPhaseSites");
static_assert(offsetof(UFortGameStateComponent_ScriptedObjectMovementManager, RegisteredStaticPaths) == 304, "Offset mismatch for UFortGameStateComponent_ScriptedObjectMovementManager::RegisteredStaticPaths");
static_assert(offsetof(UFortGameStateComponent_ScriptedObjectMovementManager, CurrentlyMovingStaticPath) == 320, "Offset mismatch for UFortGameStateComponent_ScriptedObjectMovementManager::CurrentlyMovingStaticPath");
static_assert(offsetof(UFortGameStateComponent_ScriptedObjectMovementManager, StaticPathCooldownBetweenMoves) == 368, "Offset mismatch for UFortGameStateComponent_ScriptedObjectMovementManager::StaticPathCooldownBetweenMoves");

// /Script/SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
// Kind: Class; super: Interface
class UFortScriptedObjectMovement_GridProviderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
// Kind: Class; super: BuildingGameplayActor
class UFortScriptedObjectMovement_MovableObjectBase
{
public:
    std::uint8_t Pad_0000[0x990]; // 0x0000
    std::int32_t Editor_SkipMasterPathIndex; // 0x0990 (Size: 0x4, Type: IntProperty)
    std::int32_t Editor_SkipSubPathIndex; // 0x0994 (Size: 0x4, Type: IntProperty)
    std::int32_t Editor_NumStepsPerClick; // 0x0998 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x24]; // 0x099C
    void* AssignedSlotDefinition; // 0x09C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MovementPath[0x40]; // 0x09C8 (Size: 0x40, Type: StructProperty)
    void* ScriptedObjectMesh; // 0x0A08 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0A10
    std::uint8_t bDebugStaticMovement; // 0x0A28 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaitingForBeginPlaySkip; // 0x0A29 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0A2A
    void* StaticFollowPath; // 0x0A30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0A38
    std::uint8_t CurrentStepData[0x1]; // 0x0A40 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, Editor_SkipMasterPathIndex) == 2448, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::Editor_SkipMasterPathIndex");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, Editor_SkipSubPathIndex) == 2452, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::Editor_SkipSubPathIndex");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, Editor_NumStepsPerClick) == 2456, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::Editor_NumStepsPerClick");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, AssignedSlotDefinition) == 2496, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::AssignedSlotDefinition");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, MovementPath) == 2504, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::MovementPath");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, ScriptedObjectMesh) == 2568, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::ScriptedObjectMesh");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, bDebugStaticMovement) == 2600, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::bDebugStaticMovement");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, bWaitingForBeginPlaySkip) == 2601, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::bWaitingForBeginPlaySkip");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, StaticFollowPath) == 2608, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::StaticFollowPath");
static_assert(offsetof(UFortScriptedObjectMovement_MovableObjectBase, CurrentStepData) == 2624, "Offset mismatch for UFortScriptedObjectMovement_MovableObjectBase::CurrentStepData");

// /Script/SOMRuntime.FortScriptedObjectMovement_Slot
// Kind: Class; super: StaticMeshComponent
class UFortScriptedObjectMovement_Slot
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    void* SlotDefinition; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ObjectRemoveOrder; // 0x06B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x06BC
    void* SlottedObject; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortScriptedObjectMovement_Slot, SlotDefinition) == 1712, "Offset mismatch for UFortScriptedObjectMovement_Slot::SlotDefinition");
static_assert(offsetof(UFortScriptedObjectMovement_Slot, ObjectRemoveOrder) == 1720, "Offset mismatch for UFortScriptedObjectMovement_Slot::ObjectRemoveOrder");
static_assert(offsetof(UFortScriptedObjectMovement_Slot, SlottedObject) == 1728, "Offset mismatch for UFortScriptedObjectMovement_Slot::SlottedObject");

// /Script/SOMRuntime.FortScriptedObjectMovement_SlotDefinition
// Kind: Class; super: PrimaryDataAsset
class UFortScriptedObjectMovement_SlotDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ScriptedObjectClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    float ObjectScale; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortScriptedObjectMovement_SlotDefinition, ScriptedObjectClass) == 40, "Offset mismatch for UFortScriptedObjectMovement_SlotDefinition::ScriptedObjectClass");
static_assert(offsetof(UFortScriptedObjectMovement_SlotDefinition, ObjectScale) == 48, "Offset mismatch for UFortScriptedObjectMovement_SlotDefinition::ObjectScale");

// /Script/SOMRuntime.FortScriptedObjectMovement_Structure
// Kind: Class; super: Actor
class UFortScriptedObjectMovement_Structure
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> CachedObjectSlots; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedSlotDefinitions; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortScriptedObjectMovement_Structure, CachedObjectSlots) == 624, "Offset mismatch for UFortScriptedObjectMovement_Structure::CachedObjectSlots");
static_assert(offsetof(UFortScriptedObjectMovement_Structure, CachedSlotDefinitions) == 640, "Offset mismatch for UFortScriptedObjectMovement_Structure::CachedSlotDefinitions");

// /Script/SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
// Kind: Class; super: Actor
class UFortScriptedObjectMovement_WorldPhaseSite
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    TArray<void*> Phases; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NumSimulatenousMovingObjects[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t PhaseIntervalSeconds[0x48]; // 0x02B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t BaseGrid[0x88]; // 0x02F8 (Size: 0x88, Type: StructProperty)
    std::uint8_t InProgressPath[0x38]; // 0x0380 (Size: 0x38, Type: StructProperty)
    TArray<void*> LeavingSlotStack; // 0x03B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DestinationSlotStack; // 0x03C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverflowSlotStack; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentlyMovingObjects; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, Phases) == 632, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::Phases");
static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, NumSimulatenousMovingObjects) == 648, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::NumSimulatenousMovingObjects");
static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, PhaseIntervalSeconds) == 688, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::PhaseIntervalSeconds");
static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, BaseGrid) == 760, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::BaseGrid");
static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, InProgressPath) == 896, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::InProgressPath");
static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, LeavingSlotStack) == 952, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::LeavingSlotStack");
static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, DestinationSlotStack) == 968, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::DestinationSlotStack");
static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, OverflowSlotStack) == 984, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::OverflowSlotStack");
static_assert(offsetof(UFortScriptedObjectMovement_WorldPhaseSite, CurrentlyMovingObjects) == 1000, "Offset mismatch for UFortScriptedObjectMovement_WorldPhaseSite::CurrentlyMovingObjects");

// /Script/SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
// Kind: Class; super: PrimaryDataAsset
class UScriptedObjectMovement_CalendarCheatDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CheatCalendarEvents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UScriptedObjectMovement_CalendarCheatDefinition, CheatCalendarEvents) == 40, "Offset mismatch for UScriptedObjectMovement_CalendarCheatDefinition::CheatCalendarEvents");

// /Script/SOMRuntime.ScriptedObjectMovement_StaticPath
// Kind: Class; super: Actor
class UScriptedObjectMovement_StaticPath
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    void* MasterSplinePath; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PathTravelers; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SplineData; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
    float StepSpacingDistance; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02B4
    std::uint8_t CheatCalendarEventDefinition[0x20]; // 0x02B8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MovementStyleTag[0x80]; // 0x02D8 (Size: 0x80, Type: StructProperty)
    FString EnterSplineCalendarEvent; // 0x0358 (Size: 0x10, Type: StrProperty)
    FString ExitSplineCalendarEvent; // 0x0368 (Size: 0x10, Type: StrProperty)
    TArray<void*> OrderedCalendarEventPointGroups; // 0x0378 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x68]; // 0x0388
    void* CalendarWatcherAction; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UScriptedObjectMovement_StaticPath, MasterSplinePath) == 648, "Offset mismatch for UScriptedObjectMovement_StaticPath::MasterSplinePath");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, PathTravelers) == 656, "Offset mismatch for UScriptedObjectMovement_StaticPath::PathTravelers");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, SplineData) == 672, "Offset mismatch for UScriptedObjectMovement_StaticPath::SplineData");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, StepSpacingDistance) == 688, "Offset mismatch for UScriptedObjectMovement_StaticPath::StepSpacingDistance");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, CheatCalendarEventDefinition) == 696, "Offset mismatch for UScriptedObjectMovement_StaticPath::CheatCalendarEventDefinition");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, MovementStyleTag) == 728, "Offset mismatch for UScriptedObjectMovement_StaticPath::MovementStyleTag");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, EnterSplineCalendarEvent) == 856, "Offset mismatch for UScriptedObjectMovement_StaticPath::EnterSplineCalendarEvent");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, ExitSplineCalendarEvent) == 872, "Offset mismatch for UScriptedObjectMovement_StaticPath::ExitSplineCalendarEvent");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, OrderedCalendarEventPointGroups) == 888, "Offset mismatch for UScriptedObjectMovement_StaticPath::OrderedCalendarEventPointGroups");
static_assert(offsetof(UScriptedObjectMovement_StaticPath, CalendarWatcherAction) == 1008, "Offset mismatch for UScriptedObjectMovement_StaticPath::CalendarWatcherAction");
