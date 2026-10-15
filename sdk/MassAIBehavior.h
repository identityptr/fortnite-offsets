/**
 * decamp dumper generated SDK
 * Package: /Script/MassAIBehavior
 */
#pragma once
#include "Basic.h"

// /Script/MassAIBehavior.MassClaimSmartObjectTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassClaimSmartObjectTask
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    float InteractionCooldown; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassClaimSmartObjectTask, InteractionCooldown) == 64, "Offset mismatch for FMassClaimSmartObjectTask::InteractionCooldown");

// /Script/MassAIBehavior.MassClaimSmartObjectTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassClaimSmartObjectTaskInstanceData
{
public:
    std::uint8_t CandidateSlots[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ClaimedSlot[0x2C]; // 0x0004 (Size: 0x2C, Type: StructProperty)
    std::uint8_t ClaimedSlotTransform[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassClaimSmartObjectTaskInstanceData, CandidateSlots) == 0, "Offset mismatch for FMassClaimSmartObjectTaskInstanceData::CandidateSlots");
static_assert(offsetof(FMassClaimSmartObjectTaskInstanceData, ClaimedSlot) == 4, "Offset mismatch for FMassClaimSmartObjectTaskInstanceData::ClaimedSlot");
static_assert(offsetof(FMassClaimSmartObjectTaskInstanceData, ClaimedSlotTransform) == 48, "Offset mismatch for FMassClaimSmartObjectTaskInstanceData::ClaimedSlotTransform");

// /Script/MassAIBehavior.MassComponentHitEvaluator
// Kind: ScriptStruct; super: MassStateTreeEvaluatorBase
struct FMassComponentHitEvaluator
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassComponentHitEvaluator, Name) == 8, "Offset mismatch for FMassComponentHitEvaluator::Name");
static_assert(offsetof(FMassComponentHitEvaluator, BindingsBatch) == 12, "Offset mismatch for FMassComponentHitEvaluator::BindingsBatch");
static_assert(offsetof(FMassComponentHitEvaluator, OutputBindingsBatch) == 14, "Offset mismatch for FMassComponentHitEvaluator::OutputBindingsBatch");
static_assert(offsetof(FMassComponentHitEvaluator, InstanceTemplateIndex) == 16, "Offset mismatch for FMassComponentHitEvaluator::InstanceTemplateIndex");
static_assert(offsetof(FMassComponentHitEvaluator, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FMassComponentHitEvaluator::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FMassComponentHitEvaluator, InstanceDataHandle) == 20, "Offset mismatch for FMassComponentHitEvaluator::InstanceDataHandle");

// /Script/MassAIBehavior.MassComponentHitEvaluatorInstanceData
// Kind: ScriptStruct; super: none
struct FMassComponentHitEvaluatorInstanceData
{
public:
    std::uint8_t bGotHit; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t LastHitEntity[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassComponentHitEvaluatorInstanceData, bGotHit) == 0, "Offset mismatch for FMassComponentHitEvaluatorInstanceData::bGotHit");
static_assert(offsetof(FMassComponentHitEvaluatorInstanceData, LastHitEntity) == 8, "Offset mismatch for FMassComponentHitEvaluatorInstanceData::LastHitEntity");

// /Script/MassAIBehavior.MassExecutionExtension
// Kind: ScriptStruct; super: StateTreeExecutionExtension
struct FMassExecutionExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassFindSmartObjectTargetInstanceData
// Kind: ScriptStruct; super: none
struct FMassFindSmartObjectTargetInstanceData
{
public:
    std::uint8_t bUseEntityLocationAsSearchLocation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t EntranceRequest[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t ClaimedSlot[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t SmartObjectLocation[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassFindSmartObjectTargetInstanceData, bUseEntityLocationAsSearchLocation) == 0, "Offset mismatch for FMassFindSmartObjectTargetInstanceData::bUseEntityLocationAsSearchLocation");
static_assert(offsetof(FMassFindSmartObjectTargetInstanceData, EntranceRequest) == 8, "Offset mismatch for FMassFindSmartObjectTargetInstanceData::EntranceRequest");
static_assert(offsetof(FMassFindSmartObjectTargetInstanceData, ClaimedSlot) == 88, "Offset mismatch for FMassFindSmartObjectTargetInstanceData::ClaimedSlot");
static_assert(offsetof(FMassFindSmartObjectTargetInstanceData, SmartObjectLocation) == 128, "Offset mismatch for FMassFindSmartObjectTargetInstanceData::SmartObjectLocation");

// /Script/MassAIBehavior.MassFindSmartObjectTargetTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassFindSmartObjectTargetTask
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bUseEntranceLocationRequest; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassFindSmartObjectTargetTask, bUseEntranceLocationRequest) == 64, "Offset mismatch for FMassFindSmartObjectTargetTask::bUseEntranceLocationRequest");

// /Script/MassAIBehavior.MassFindSmartObjectTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassFindSmartObjectTask
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t ActivityRequirements[0x48]; // 0x0050 (Size: 0x48, Type: StructProperty)
    float SearchInterval; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFindFromLaneLocation; // 0x009C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassFindSmartObjectTask, ActivityRequirements) == 80, "Offset mismatch for FMassFindSmartObjectTask::ActivityRequirements");
static_assert(offsetof(FMassFindSmartObjectTask, SearchInterval) == 152, "Offset mismatch for FMassFindSmartObjectTask::SearchInterval");
static_assert(offsetof(FMassFindSmartObjectTask, bFindFromLaneLocation) == 156, "Offset mismatch for FMassFindSmartObjectTask::bFindFromLaneLocation");

// /Script/MassAIBehavior.MassFindSmartObjectTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassFindSmartObjectTaskInstanceData
{
public:
    std::uint8_t FoundCandidateSlots[0xA4]; // 0x0000 (Size: 0xA4, Type: StructProperty)
    std::uint8_t bHasCandidateSlots; // 0x00A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00A5
    std::uint8_t SearchRequestID[0x8]; // 0x00A8 (Size: 0x8, Type: StructProperty)
    double NextUpdate; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t LastLane[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassFindSmartObjectTaskInstanceData, FoundCandidateSlots) == 0, "Offset mismatch for FMassFindSmartObjectTaskInstanceData::FoundCandidateSlots");
static_assert(offsetof(FMassFindSmartObjectTaskInstanceData, bHasCandidateSlots) == 164, "Offset mismatch for FMassFindSmartObjectTaskInstanceData::bHasCandidateSlots");
static_assert(offsetof(FMassFindSmartObjectTaskInstanceData, SearchRequestID) == 168, "Offset mismatch for FMassFindSmartObjectTaskInstanceData::SearchRequestID");
static_assert(offsetof(FMassFindSmartObjectTaskInstanceData, NextUpdate) == 176, "Offset mismatch for FMassFindSmartObjectTaskInstanceData::NextUpdate");
static_assert(offsetof(FMassFindSmartObjectTaskInstanceData, LastLane) == 184, "Offset mismatch for FMassFindSmartObjectTaskInstanceData::LastLane");

// /Script/MassAIBehavior.MassHitResult
// Kind: ScriptStruct; super: none
struct FMassHitResult
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassInLookAtTargetGridTag
// Kind: ScriptStruct; super: MassTag
struct FMassInLookAtTargetGridTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassLookAtFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassLookAtFragment
{
public:
    std::uint8_t MainTargetLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t GazeTargetLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t GazeDirection[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t TrackedEntity[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::uint8_t GazeTrackedEntity[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    double GazeStartTime; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    float GazeDuration; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint16_t LastSeenActionID; // 0x007C (Size: 0x2, Type: UInt16Property)
    std::uint8_t LookAtMode; // 0x007E (Size: 0x1, Type: EnumProperty)
    std::uint8_t InterpolationSpeed; // 0x007F (Size: 0x1, Type: EnumProperty)
    float CustomInterpolationSpeed; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RandomGazeMode; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RandomGazeYawVariation; // 0x0085 (Size: 0x1, Type: ByteProperty)
    std::uint8_t RandomGazePitchVariation; // 0x0086 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRandomGazeEntities; // 0x0087 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassLookAtFragment, MainTargetLocation) == 0, "Offset mismatch for FMassLookAtFragment::MainTargetLocation");
static_assert(offsetof(FMassLookAtFragment, GazeTargetLocation) == 24, "Offset mismatch for FMassLookAtFragment::GazeTargetLocation");
static_assert(offsetof(FMassLookAtFragment, Direction) == 48, "Offset mismatch for FMassLookAtFragment::Direction");
static_assert(offsetof(FMassLookAtFragment, GazeDirection) == 72, "Offset mismatch for FMassLookAtFragment::GazeDirection");
static_assert(offsetof(FMassLookAtFragment, TrackedEntity) == 96, "Offset mismatch for FMassLookAtFragment::TrackedEntity");
static_assert(offsetof(FMassLookAtFragment, GazeTrackedEntity) == 104, "Offset mismatch for FMassLookAtFragment::GazeTrackedEntity");
static_assert(offsetof(FMassLookAtFragment, GazeStartTime) == 112, "Offset mismatch for FMassLookAtFragment::GazeStartTime");
static_assert(offsetof(FMassLookAtFragment, GazeDuration) == 120, "Offset mismatch for FMassLookAtFragment::GazeDuration");
static_assert(offsetof(FMassLookAtFragment, LastSeenActionID) == 124, "Offset mismatch for FMassLookAtFragment::LastSeenActionID");
static_assert(offsetof(FMassLookAtFragment, LookAtMode) == 126, "Offset mismatch for FMassLookAtFragment::LookAtMode");
static_assert(offsetof(FMassLookAtFragment, InterpolationSpeed) == 127, "Offset mismatch for FMassLookAtFragment::InterpolationSpeed");
static_assert(offsetof(FMassLookAtFragment, CustomInterpolationSpeed) == 128, "Offset mismatch for FMassLookAtFragment::CustomInterpolationSpeed");
static_assert(offsetof(FMassLookAtFragment, RandomGazeMode) == 132, "Offset mismatch for FMassLookAtFragment::RandomGazeMode");
static_assert(offsetof(FMassLookAtFragment, RandomGazeYawVariation) == 133, "Offset mismatch for FMassLookAtFragment::RandomGazeYawVariation");
static_assert(offsetof(FMassLookAtFragment, RandomGazePitchVariation) == 134, "Offset mismatch for FMassLookAtFragment::RandomGazePitchVariation");
static_assert(offsetof(FMassLookAtFragment, bRandomGazeEntities) == 135, "Offset mismatch for FMassLookAtFragment::bRandomGazeEntities");

// /Script/MassAIBehavior.MassLookAtPriority
// Kind: ScriptStruct; super: none
struct FMassLookAtPriority
{
public:
    std::uint8_t Value; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMassLookAtPriority, Value) == 0, "Offset mismatch for FMassLookAtPriority::Value");

// /Script/MassAIBehavior.MassLookAtPriorityInfo
// Kind: ScriptStruct; super: none
struct FMassLookAtPriorityInfo
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Priority[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassLookAtPriorityInfo, Name) == 0, "Offset mismatch for FMassLookAtPriorityInfo::Name");
static_assert(offsetof(FMassLookAtPriorityInfo, Priority) == 4, "Offset mismatch for FMassLookAtPriorityInfo::Priority");

// /Script/MassAIBehavior.MassLookAtRequestFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassLookAtRequestFragment
{
public:
    std::uint8_t ViewerEntity[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t TargetEntity[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Priority[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
    std::uint8_t LookAtMode; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t InterpolationSpeed; // 0x0012 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0013
    float CustomInterpolationSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassLookAtRequestFragment, ViewerEntity) == 0, "Offset mismatch for FMassLookAtRequestFragment::ViewerEntity");
static_assert(offsetof(FMassLookAtRequestFragment, TargetEntity) == 8, "Offset mismatch for FMassLookAtRequestFragment::TargetEntity");
static_assert(offsetof(FMassLookAtRequestFragment, Priority) == 16, "Offset mismatch for FMassLookAtRequestFragment::Priority");
static_assert(offsetof(FMassLookAtRequestFragment, LookAtMode) == 17, "Offset mismatch for FMassLookAtRequestFragment::LookAtMode");
static_assert(offsetof(FMassLookAtRequestFragment, InterpolationSpeed) == 18, "Offset mismatch for FMassLookAtRequestFragment::InterpolationSpeed");
static_assert(offsetof(FMassLookAtRequestFragment, CustomInterpolationSpeed) == 20, "Offset mismatch for FMassLookAtRequestFragment::CustomInterpolationSpeed");

// /Script/MassAIBehavior.MassLookAtRequestHandle
// Kind: ScriptStruct; super: none
struct FMassLookAtRequestHandle
{
public:
    std::uint8_t Request[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Target[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bTargetEntityOwnedByRequest; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassLookAtRequestHandle, Request) == 0, "Offset mismatch for FMassLookAtRequestHandle::Request");
static_assert(offsetof(FMassLookAtRequestHandle, Target) == 8, "Offset mismatch for FMassLookAtRequestHandle::Target");
static_assert(offsetof(FMassLookAtRequestHandle, bTargetEntityOwnedByRequest) == 16, "Offset mismatch for FMassLookAtRequestHandle::bTargetEntityOwnedByRequest");

// /Script/MassAIBehavior.MassLookAtTargetFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassLookAtTargetFragment
{
public:
    std::uint8_t Offset[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Priority[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassLookAtTargetFragment, Offset) == 0, "Offset mismatch for FMassLookAtTargetFragment::Offset");
static_assert(offsetof(FMassLookAtTargetFragment, Priority) == 24, "Offset mismatch for FMassLookAtTargetFragment::Priority");

// /Script/MassAIBehavior.MassLookAtTargetTag
// Kind: ScriptStruct; super: MassTag
struct FMassLookAtTargetTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassLookAtTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassLookAtTask
{
public:
    std::uint8_t Pad_0000[0x34]; // 0x0000
    std::uint8_t Priority[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
    std::uint8_t LookAtMode; // 0x0035 (Size: 0x1, Type: EnumProperty)
    std::uint8_t InterpolationSpeed; // 0x0036 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0037
    float CustomInterpolationSpeed; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RandomGazeMode; // 0x003C (Size: 0x1, Type: EnumProperty)
    std::uint8_t RandomGazeYawVariation; // 0x003D (Size: 0x1, Type: ByteProperty)
    std::uint8_t RandomGazePitchVariation; // 0x003E (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRandomGazeEntities; // 0x003F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassLookAtTask, Priority) == 52, "Offset mismatch for FMassLookAtTask::Priority");
static_assert(offsetof(FMassLookAtTask, LookAtMode) == 53, "Offset mismatch for FMassLookAtTask::LookAtMode");
static_assert(offsetof(FMassLookAtTask, InterpolationSpeed) == 54, "Offset mismatch for FMassLookAtTask::InterpolationSpeed");
static_assert(offsetof(FMassLookAtTask, CustomInterpolationSpeed) == 56, "Offset mismatch for FMassLookAtTask::CustomInterpolationSpeed");
static_assert(offsetof(FMassLookAtTask, RandomGazeMode) == 60, "Offset mismatch for FMassLookAtTask::RandomGazeMode");
static_assert(offsetof(FMassLookAtTask, RandomGazeYawVariation) == 61, "Offset mismatch for FMassLookAtTask::RandomGazeYawVariation");
static_assert(offsetof(FMassLookAtTask, RandomGazePitchVariation) == 62, "Offset mismatch for FMassLookAtTask::RandomGazePitchVariation");
static_assert(offsetof(FMassLookAtTask, bRandomGazeEntities) == 63, "Offset mismatch for FMassLookAtTask::bRandomGazeEntities");

// /Script/MassAIBehavior.MassLookAtTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassLookAtTaskInstanceData
{
public:
    std::uint8_t TargetEntity[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float duration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float time; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassLookAtTaskInstanceData, TargetEntity) == 0, "Offset mismatch for FMassLookAtTaskInstanceData::TargetEntity");
static_assert(offsetof(FMassLookAtTaskInstanceData, duration) == 8, "Offset mismatch for FMassLookAtTaskInstanceData::duration");
static_assert(offsetof(FMassLookAtTaskInstanceData, time) == 12, "Offset mismatch for FMassLookAtTaskInstanceData::time");

// /Script/MassAIBehavior.MassLookAtTrajectoryFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassLookAtTrajectoryFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassLookAtTrajectoryPoint
// Kind: ScriptStruct; super: none
struct FMassLookAtTrajectoryPoint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassNavMeshAnimateTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassNavMeshAnimateTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassNavMeshAnimateTask, bTaskEnabled) == 32, "Offset mismatch for FMassNavMeshAnimateTask::bTaskEnabled");
static_assert(offsetof(FMassNavMeshAnimateTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassNavMeshAnimateTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassNavMeshAnimateTask, TransitionHandlingPriority) == 34, "Offset mismatch for FMassNavMeshAnimateTask::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassNavMeshAnimateTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassNavMeshAnimateTaskInstanceData
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float time; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassNavMeshAnimateTaskInstanceData, duration) == 0, "Offset mismatch for FMassNavMeshAnimateTaskInstanceData::duration");
static_assert(offsetof(FMassNavMeshAnimateTaskInstanceData, time) == 4, "Offset mismatch for FMassNavMeshAnimateTaskInstanceData::time");

// /Script/MassAIBehavior.MassNavMeshFindReachablePointTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassNavMeshFindReachablePointTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassNavMeshFindReachablePointTask, bTaskEnabled) == 32, "Offset mismatch for FMassNavMeshFindReachablePointTask::bTaskEnabled");
static_assert(offsetof(FMassNavMeshFindReachablePointTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassNavMeshFindReachablePointTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassNavMeshFindReachablePointTask, TransitionHandlingPriority) == 34, "Offset mismatch for FMassNavMeshFindReachablePointTask::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassNavMeshFindReachablePointTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassNavMeshFindReachablePointTaskInstanceData
{
public:
    float SearchRadius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0004
    std::uint8_t TargetLocation[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassNavMeshFindReachablePointTaskInstanceData, SearchRadius) == 0, "Offset mismatch for FMassNavMeshFindReachablePointTaskInstanceData::SearchRadius");
static_assert(offsetof(FMassNavMeshFindReachablePointTaskInstanceData, TargetLocation) == 16, "Offset mismatch for FMassNavMeshFindReachablePointTaskInstanceData::TargetLocation");

// /Script/MassAIBehavior.MassNavMeshPathFollowTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassNavMeshPathFollowTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassNavMeshPathFollowTask, bTaskEnabled) == 32, "Offset mismatch for FMassNavMeshPathFollowTask::bTaskEnabled");
static_assert(offsetof(FMassNavMeshPathFollowTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassNavMeshPathFollowTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassNavMeshPathFollowTask, TransitionHandlingPriority) == 34, "Offset mismatch for FMassNavMeshPathFollowTask::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassNavMeshPathFollowTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassNavMeshPathFollowTaskInstanceData
{
public:
    std::uint8_t TargetLocation[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t MovementStyle[0x14]; // 0x0060 (Size: 0x14, Type: StructProperty)
    float SpeedScale; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float CorridorWidth; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float OffsetFromBoundaries; // 0x007C (Size: 0x4, Type: FloatProperty)
    float OffsetCornersFromBoundaries; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float EndDistanceThreshold; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassNavMeshPathFollowTaskInstanceData, TargetLocation) == 0, "Offset mismatch for FMassNavMeshPathFollowTaskInstanceData::TargetLocation");
static_assert(offsetof(FMassNavMeshPathFollowTaskInstanceData, MovementStyle) == 96, "Offset mismatch for FMassNavMeshPathFollowTaskInstanceData::MovementStyle");
static_assert(offsetof(FMassNavMeshPathFollowTaskInstanceData, SpeedScale) == 116, "Offset mismatch for FMassNavMeshPathFollowTaskInstanceData::SpeedScale");
static_assert(offsetof(FMassNavMeshPathFollowTaskInstanceData, CorridorWidth) == 120, "Offset mismatch for FMassNavMeshPathFollowTaskInstanceData::CorridorWidth");
static_assert(offsetof(FMassNavMeshPathFollowTaskInstanceData, OffsetFromBoundaries) == 124, "Offset mismatch for FMassNavMeshPathFollowTaskInstanceData::OffsetFromBoundaries");
static_assert(offsetof(FMassNavMeshPathFollowTaskInstanceData, OffsetCornersFromBoundaries) == 128, "Offset mismatch for FMassNavMeshPathFollowTaskInstanceData::OffsetCornersFromBoundaries");
static_assert(offsetof(FMassNavMeshPathFollowTaskInstanceData, EndDistanceThreshold) == 132, "Offset mismatch for FMassNavMeshPathFollowTaskInstanceData::EndDistanceThreshold");

// /Script/MassAIBehavior.MassNavMeshStandTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassNavMeshStandTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassNavMeshStandTask, bTaskEnabled) == 32, "Offset mismatch for FMassNavMeshStandTask::bTaskEnabled");
static_assert(offsetof(FMassNavMeshStandTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassNavMeshStandTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassNavMeshStandTask, TransitionHandlingPriority) == 34, "Offset mismatch for FMassNavMeshStandTask::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassNavMeshStandTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassNavMeshStandTaskInstanceData
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float time; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassNavMeshStandTaskInstanceData, duration) == 0, "Offset mismatch for FMassNavMeshStandTaskInstanceData::duration");
static_assert(offsetof(FMassNavMeshStandTaskInstanceData, time) == 4, "Offset mismatch for FMassNavMeshStandTaskInstanceData::time");

// /Script/MassAIBehavior.MassStateTreeActivatedTag
// Kind: ScriptStruct; super: MassTag
struct FMassStateTreeActivatedTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassStateTreeConditionBase
// Kind: ScriptStruct; super: StateTreeConditionBase
struct FMassStateTreeConditionBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
    std::uint8_t EvaluationMode; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassStateTreeConditionBase, Operand) == 32, "Offset mismatch for FMassStateTreeConditionBase::Operand");
static_assert(offsetof(FMassStateTreeConditionBase, DeltaIndent) == 33, "Offset mismatch for FMassStateTreeConditionBase::DeltaIndent");
static_assert(offsetof(FMassStateTreeConditionBase, EvaluationMode) == 34, "Offset mismatch for FMassStateTreeConditionBase::EvaluationMode");

// /Script/MassAIBehavior.MassStateTreeDependency
// Kind: ScriptStruct; super: none
struct FMassStateTreeDependency
{
public:
    void* Type; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Access; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassStateTreeDependency, Type) == 0, "Offset mismatch for FMassStateTreeDependency::Type");
static_assert(offsetof(FMassStateTreeDependency, Access) == 8, "Offset mismatch for FMassStateTreeDependency::Access");

// /Script/MassAIBehavior.MassStateTreeEvaluatorBase
// Kind: ScriptStruct; super: StateTreeEvaluatorBase
struct FMassStateTreeEvaluatorBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassStateTreeEvaluatorBase, Name) == 8, "Offset mismatch for FMassStateTreeEvaluatorBase::Name");
static_assert(offsetof(FMassStateTreeEvaluatorBase, BindingsBatch) == 12, "Offset mismatch for FMassStateTreeEvaluatorBase::BindingsBatch");
static_assert(offsetof(FMassStateTreeEvaluatorBase, OutputBindingsBatch) == 14, "Offset mismatch for FMassStateTreeEvaluatorBase::OutputBindingsBatch");
static_assert(offsetof(FMassStateTreeEvaluatorBase, InstanceTemplateIndex) == 16, "Offset mismatch for FMassStateTreeEvaluatorBase::InstanceTemplateIndex");
static_assert(offsetof(FMassStateTreeEvaluatorBase, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FMassStateTreeEvaluatorBase::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FMassStateTreeEvaluatorBase, InstanceDataHandle) == 20, "Offset mismatch for FMassStateTreeEvaluatorBase::InstanceDataHandle");

// /Script/MassAIBehavior.MassStateTreeInstanceDataItem
// Kind: ScriptStruct; super: none
struct FMassStateTreeInstanceDataItem
{
public:
    std::uint8_t InstanceData[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t Generation; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMassStateTreeInstanceDataItem, InstanceData) == 0, "Offset mismatch for FMassStateTreeInstanceDataItem::InstanceData");
static_assert(offsetof(FMassStateTreeInstanceDataItem, Generation) == 16, "Offset mismatch for FMassStateTreeInstanceDataItem::Generation");

// /Script/MassAIBehavior.MassStateTreeInstanceFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassStateTreeInstanceFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassStateTreePropertyFunctionBase
// Kind: ScriptStruct; super: StateTreePropertyFunctionBase
struct FMassStateTreePropertyFunctionBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassStateTreePropertyFunctionBase, Name) == 8, "Offset mismatch for FMassStateTreePropertyFunctionBase::Name");
static_assert(offsetof(FMassStateTreePropertyFunctionBase, BindingsBatch) == 12, "Offset mismatch for FMassStateTreePropertyFunctionBase::BindingsBatch");
static_assert(offsetof(FMassStateTreePropertyFunctionBase, OutputBindingsBatch) == 14, "Offset mismatch for FMassStateTreePropertyFunctionBase::OutputBindingsBatch");
static_assert(offsetof(FMassStateTreePropertyFunctionBase, InstanceTemplateIndex) == 16, "Offset mismatch for FMassStateTreePropertyFunctionBase::InstanceTemplateIndex");
static_assert(offsetof(FMassStateTreePropertyFunctionBase, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FMassStateTreePropertyFunctionBase::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FMassStateTreePropertyFunctionBase, InstanceDataHandle) == 20, "Offset mismatch for FMassStateTreePropertyFunctionBase::InstanceDataHandle");

// /Script/MassAIBehavior.MassStateTreeSharedFragment
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassStateTreeSharedFragment
{
public:
    void* StateTree; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassStateTreeSharedFragment, StateTree) == 0, "Offset mismatch for FMassStateTreeSharedFragment::StateTree");

// /Script/MassAIBehavior.MassStateTreeTaskBase
// Kind: ScriptStruct; super: StateTreeTaskBase
struct FMassStateTreeTaskBase
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassStateTreeTaskBase, bTaskEnabled) == 32, "Offset mismatch for FMassStateTreeTaskBase::bTaskEnabled");
static_assert(offsetof(FMassStateTreeTaskBase, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassStateTreeTaskBase::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassStateTreeTaskBase, TransitionHandlingPriority) == 34, "Offset mismatch for FMassStateTreeTaskBase::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassUseSmartObjectTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassUseSmartObjectTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassUseSmartObjectTask, bTaskEnabled) == 32, "Offset mismatch for FMassUseSmartObjectTask::bTaskEnabled");
static_assert(offsetof(FMassUseSmartObjectTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassUseSmartObjectTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassUseSmartObjectTask, TransitionHandlingPriority) == 34, "Offset mismatch for FMassUseSmartObjectTask::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassUseSmartObjectTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassUseSmartObjectTaskInstanceData
{
public:
    std::uint8_t ClaimedSlot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassUseSmartObjectTaskInstanceData, ClaimedSlot) == 0, "Offset mismatch for FMassUseSmartObjectTaskInstanceData::ClaimedSlot");

// /Script/MassAIBehavior.MassZoneGraphAnnotationEvaluator
// Kind: ScriptStruct; super: MassStateTreeEvaluatorBase
struct FMassZoneGraphAnnotationEvaluator
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingsBatch[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t OutputBindingsBatch[0x2]; // 0x000E (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceTemplateIndex[0x2]; // 0x0010 (Size: 0x2, Type: StructProperty)
    std::uint8_t ExecutionRuntimeTemplateIndex[0x2]; // 0x0012 (Size: 0x2, Type: StructProperty)
    std::uint8_t InstanceDataHandle[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassZoneGraphAnnotationEvaluator, Name) == 8, "Offset mismatch for FMassZoneGraphAnnotationEvaluator::Name");
static_assert(offsetof(FMassZoneGraphAnnotationEvaluator, BindingsBatch) == 12, "Offset mismatch for FMassZoneGraphAnnotationEvaluator::BindingsBatch");
static_assert(offsetof(FMassZoneGraphAnnotationEvaluator, OutputBindingsBatch) == 14, "Offset mismatch for FMassZoneGraphAnnotationEvaluator::OutputBindingsBatch");
static_assert(offsetof(FMassZoneGraphAnnotationEvaluator, InstanceTemplateIndex) == 16, "Offset mismatch for FMassZoneGraphAnnotationEvaluator::InstanceTemplateIndex");
static_assert(offsetof(FMassZoneGraphAnnotationEvaluator, ExecutionRuntimeTemplateIndex) == 18, "Offset mismatch for FMassZoneGraphAnnotationEvaluator::ExecutionRuntimeTemplateIndex");
static_assert(offsetof(FMassZoneGraphAnnotationEvaluator, InstanceDataHandle) == 20, "Offset mismatch for FMassZoneGraphAnnotationEvaluator::InstanceDataHandle");

// /Script/MassAIBehavior.MassZoneGraphAnnotationEvaluatorInstanceData
// Kind: ScriptStruct; super: none
struct FMassZoneGraphAnnotationEvaluatorInstanceData
{
public:
    std::uint8_t AnnotationTags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassZoneGraphAnnotationEvaluatorInstanceData, AnnotationTags) == 0, "Offset mismatch for FMassZoneGraphAnnotationEvaluatorInstanceData::AnnotationTags");

// /Script/MassAIBehavior.MassZoneGraphAnnotationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassZoneGraphAnnotationFragment
{
public:
    std::uint8_t Tags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassZoneGraphAnnotationFragment, Tags) == 0, "Offset mismatch for FMassZoneGraphAnnotationFragment::Tags");

// /Script/MassAIBehavior.MassZoneGraphAnnotationVariableTickChunkFragment
// Kind: ScriptStruct; super: MassChunkFragment
struct FMassZoneGraphAnnotationVariableTickChunkFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassZoneGraphFindEscapeTarget
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassZoneGraphFindEscapeTarget
{
public:
    std::uint8_t Pad_0000[0x3A]; // 0x0000
    std::uint8_t DisturbanceAnnotationTag[0x1]; // 0x003A (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassZoneGraphFindEscapeTarget, DisturbanceAnnotationTag) == 58, "Offset mismatch for FMassZoneGraphFindEscapeTarget::DisturbanceAnnotationTag");

// /Script/MassAIBehavior.MassZoneGraphFindEscapeTargetInstanceData
// Kind: ScriptStruct; super: none
struct FMassZoneGraphFindEscapeTargetInstanceData
{
public:
    std::uint8_t EscapeTargetLocation[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassZoneGraphFindEscapeTargetInstanceData, EscapeTargetLocation) == 0, "Offset mismatch for FMassZoneGraphFindEscapeTargetInstanceData::EscapeTargetLocation");

// /Script/MassAIBehavior.MassZoneGraphFindSmartObjectTarget
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassZoneGraphFindSmartObjectTarget
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassZoneGraphFindSmartObjectTarget, bTaskEnabled) == 32, "Offset mismatch for FMassZoneGraphFindSmartObjectTarget::bTaskEnabled");
static_assert(offsetof(FMassZoneGraphFindSmartObjectTarget, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassZoneGraphFindSmartObjectTarget::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassZoneGraphFindSmartObjectTarget, TransitionHandlingPriority) == 34, "Offset mismatch for FMassZoneGraphFindSmartObjectTarget::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassZoneGraphFindSmartObjectTargetInstanceData
// Kind: ScriptStruct; super: none
struct FMassZoneGraphFindSmartObjectTargetInstanceData
{
public:
    std::uint8_t ClaimedSlot[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t SmartObjectLocation[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassZoneGraphFindSmartObjectTargetInstanceData, ClaimedSlot) == 0, "Offset mismatch for FMassZoneGraphFindSmartObjectTargetInstanceData::ClaimedSlot");
static_assert(offsetof(FMassZoneGraphFindSmartObjectTargetInstanceData, SmartObjectLocation) == 40, "Offset mismatch for FMassZoneGraphFindSmartObjectTargetInstanceData::SmartObjectLocation");

// /Script/MassAIBehavior.MassZoneGraphPathFollowTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassZoneGraphPathFollowTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassZoneGraphPathFollowTask, bTaskEnabled) == 32, "Offset mismatch for FMassZoneGraphPathFollowTask::bTaskEnabled");
static_assert(offsetof(FMassZoneGraphPathFollowTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassZoneGraphPathFollowTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassZoneGraphPathFollowTask, TransitionHandlingPriority) == 34, "Offset mismatch for FMassZoneGraphPathFollowTask::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassZoneGraphPathFollowTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassZoneGraphPathFollowTaskInstanceData
{
public:
    std::uint8_t TargetLocation[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t MovementStyle[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    float SpeedScale; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassZoneGraphPathFollowTaskInstanceData, TargetLocation) == 0, "Offset mismatch for FMassZoneGraphPathFollowTaskInstanceData::TargetLocation");
static_assert(offsetof(FMassZoneGraphPathFollowTaskInstanceData, MovementStyle) == 4, "Offset mismatch for FMassZoneGraphPathFollowTaskInstanceData::MovementStyle");
static_assert(offsetof(FMassZoneGraphPathFollowTaskInstanceData, SpeedScale) == 24, "Offset mismatch for FMassZoneGraphPathFollowTaskInstanceData::SpeedScale");

// /Script/MassAIBehavior.MassZoneGraphStandTask
// Kind: ScriptStruct; super: MassStateTreeTaskBase
struct FMassZoneGraphStandTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassZoneGraphStandTask, bTaskEnabled) == 32, "Offset mismatch for FMassZoneGraphStandTask::bTaskEnabled");
static_assert(offsetof(FMassZoneGraphStandTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FMassZoneGraphStandTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FMassZoneGraphStandTask, TransitionHandlingPriority) == 34, "Offset mismatch for FMassZoneGraphStandTask::TransitionHandlingPriority");

// /Script/MassAIBehavior.MassZoneGraphStandTaskInstanceData
// Kind: ScriptStruct; super: none
struct FMassZoneGraphStandTaskInstanceData
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float time; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassZoneGraphStandTaskInstanceData, duration) == 0, "Offset mismatch for FMassZoneGraphStandTaskInstanceData::duration");
static_assert(offsetof(FMassZoneGraphStandTaskInstanceData, time) == 4, "Offset mismatch for FMassZoneGraphStandTaskInstanceData::time");

// /Script/MassAIBehavior.MassZoneGraphTargetLocation
// Kind: ScriptStruct; super: none
struct FMassZoneGraphTargetLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.ZoneGraphTagCondition
// Kind: ScriptStruct; super: MassStateTreeConditionBase
struct FZoneGraphTagCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FZoneGraphTagCondition, bInvert) == 40, "Offset mismatch for FZoneGraphTagCondition::bInvert");

// /Script/MassAIBehavior.ZoneGraphTagConditionInstanceData
// Kind: ScriptStruct; super: none
struct FZoneGraphTagConditionInstanceData
{
public:
    std::uint8_t Left[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
    std::uint8_t Right[0x1]; // 0x0001 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneGraphTagConditionInstanceData, Left) == 0, "Offset mismatch for FZoneGraphTagConditionInstanceData::Left");
static_assert(offsetof(FZoneGraphTagConditionInstanceData, Right) == 1, "Offset mismatch for FZoneGraphTagConditionInstanceData::Right");

// /Script/MassAIBehavior.ZoneGraphTagFilterCondition
// Kind: ScriptStruct; super: MassStateTreeConditionBase
struct FZoneGraphTagFilterCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Filter[0xC]; // 0x0028 (Size: 0xC, Type: StructProperty)
    std::uint8_t bInvert; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FZoneGraphTagFilterCondition, Filter) == 40, "Offset mismatch for FZoneGraphTagFilterCondition::Filter");
static_assert(offsetof(FZoneGraphTagFilterCondition, bInvert) == 52, "Offset mismatch for FZoneGraphTagFilterCondition::bInvert");

// /Script/MassAIBehavior.ZoneGraphTagFilterConditionInstanceData
// Kind: ScriptStruct; super: none
struct FZoneGraphTagFilterConditionInstanceData
{
public:
    std::uint8_t Tags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneGraphTagFilterConditionInstanceData, Tags) == 0, "Offset mismatch for FZoneGraphTagFilterConditionInstanceData::Tags");

// /Script/MassAIBehavior.ZoneGraphTagMaskCondition
// Kind: ScriptStruct; super: MassStateTreeConditionBase
struct FZoneGraphTagMaskCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Operator; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvert; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FZoneGraphTagMaskCondition, Operator) == 40, "Offset mismatch for FZoneGraphTagMaskCondition::Operator");
static_assert(offsetof(FZoneGraphTagMaskCondition, bInvert) == 41, "Offset mismatch for FZoneGraphTagMaskCondition::bInvert");

// /Script/MassAIBehavior.ZoneGraphTagMaskConditionInstanceData
// Kind: ScriptStruct; super: none
struct FZoneGraphTagMaskConditionInstanceData
{
public:
    std::uint8_t Left[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Right[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FZoneGraphTagMaskConditionInstanceData, Left) == 0, "Offset mismatch for FZoneGraphTagMaskConditionInstanceData::Left");
static_assert(offsetof(FZoneGraphTagMaskConditionInstanceData, Right) == 4, "Offset mismatch for FZoneGraphTagMaskConditionInstanceData::Right");

// /Script/MassAIBehavior.MassBehaviorSettings
// Kind: Class; super: MassModuleSettings
class UMassBehaviorSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MaxActivationsPerLOD; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0xC]; // 0x002C
    TSoftClassPtr<void> DynamicStateTreeProcessorClass; // 0x0038 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UMassBehaviorSettings, MaxActivationsPerLOD) == 40, "Offset mismatch for UMassBehaviorSettings::MaxActivationsPerLOD");
static_assert(offsetof(UMassBehaviorSettings, DynamicStateTreeProcessorClass) == 56, "Offset mismatch for UMassBehaviorSettings::DynamicStateTreeProcessorClass");

// /Script/MassAIBehavior.MassComponentHitSubsystem
// Kind: Class; super: MassTickableSubsystemBase
class UMassComponentHitSubsystem
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SignalSubsystem; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* AgentSubsystem; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> HitResults; // 0x0060 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ComponentToEntityMap; // 0x0070 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> EntityToComponentMap; // 0x0080 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMassComponentHitSubsystem, SignalSubsystem) == 80, "Offset mismatch for UMassComponentHitSubsystem::SignalSubsystem");
static_assert(offsetof(UMassComponentHitSubsystem, AgentSubsystem) == 88, "Offset mismatch for UMassComponentHitSubsystem::AgentSubsystem");
static_assert(offsetof(UMassComponentHitSubsystem, HitResults) == 96, "Offset mismatch for UMassComponentHitSubsystem::HitResults");
static_assert(offsetof(UMassComponentHitSubsystem, ComponentToEntityMap) == 112, "Offset mismatch for UMassComponentHitSubsystem::ComponentToEntityMap");
static_assert(offsetof(UMassComponentHitSubsystem, EntityToComponentMap) == 128, "Offset mismatch for UMassComponentHitSubsystem::EntityToComponentMap");

// /Script/MassAIBehavior.MassLookAtProcessor
// Kind: Class; super: MassProcessor
class UMassLookAtProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    float QueryExtent; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x0104 (Size: 0x4, Type: FloatProperty)
    float DurationVariation; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float DebugZOffset; // 0x010C (Size: 0x4, Type: FloatProperty)
    float AngleThresholdInDegrees; // 0x0110 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMassLookAtProcessor, QueryExtent) == 256, "Offset mismatch for UMassLookAtProcessor::QueryExtent");
static_assert(offsetof(UMassLookAtProcessor, duration) == 260, "Offset mismatch for UMassLookAtProcessor::duration");
static_assert(offsetof(UMassLookAtProcessor, DurationVariation) == 264, "Offset mismatch for UMassLookAtProcessor::DurationVariation");
static_assert(offsetof(UMassLookAtProcessor, DebugZOffset) == 268, "Offset mismatch for UMassLookAtProcessor::DebugZOffset");
static_assert(offsetof(UMassLookAtProcessor, AngleThresholdInDegrees) == 272, "Offset mismatch for UMassLookAtProcessor::AngleThresholdInDegrees");

// /Script/MassAIBehavior.MassLookAtRequestDeinitializer
// Kind: Class; super: MassObserverProcessor
class UMassLookAtRequestDeinitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassLookAtRequestDeinitializer, ObservedType) == 256, "Offset mismatch for UMassLookAtRequestDeinitializer::ObservedType");
static_assert(offsetof(UMassLookAtRequestDeinitializer, ObservedTypes) == 264, "Offset mismatch for UMassLookAtRequestDeinitializer::ObservedTypes");
static_assert(offsetof(UMassLookAtRequestDeinitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassLookAtRequestDeinitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassAIBehavior.MassLookAtRequestInitializer
// Kind: Class; super: MassObserverProcessor
class UMassLookAtRequestInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassLookAtRequestInitializer, ObservedType) == 256, "Offset mismatch for UMassLookAtRequestInitializer::ObservedType");
static_assert(offsetof(UMassLookAtRequestInitializer, ObservedTypes) == 264, "Offset mismatch for UMassLookAtRequestInitializer::ObservedTypes");
static_assert(offsetof(UMassLookAtRequestInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassLookAtRequestInitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassAIBehavior.MassLookAtSettings
// Kind: Class; super: DeveloperSettings
class UMassLookAtSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Priorities[0x80]; // 0x0030 (Size: 0x80, Type: StructProperty)
    std::uint8_t DefaultTargetLocationOffset[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    double TargetHeightRatio; // 0x00C8 (Size: 0x8, Type: DoubleProperty)
    double FixedOffsetFromTargetHeight; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UMassLookAtSettings, Priorities) == 48, "Offset mismatch for UMassLookAtSettings::Priorities");
static_assert(offsetof(UMassLookAtSettings, DefaultTargetLocationOffset) == 176, "Offset mismatch for UMassLookAtSettings::DefaultTargetLocationOffset");
static_assert(offsetof(UMassLookAtSettings, TargetHeightRatio) == 200, "Offset mismatch for UMassLookAtSettings::TargetHeightRatio");
static_assert(offsetof(UMassLookAtSettings, FixedOffsetFromTargetHeight) == 208, "Offset mismatch for UMassLookAtSettings::FixedOffsetFromTargetHeight");

// /Script/MassAIBehavior.MassLookAtSubsystem
// Kind: Class; super: MassTickableSubsystemBase
class UMassLookAtSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassAIBehavior.MassLookAtTargetGridProcessor
// Kind: Class; super: MassProcessor
class UMassLookAtTargetGridProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassLookAtTargetGridProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassLookAtTargetGridProcessor::ExecutionOrder");
static_assert(offsetof(UMassLookAtTargetGridProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassLookAtTargetGridProcessor::ProcessingPhase");
static_assert(offsetof(UMassLookAtTargetGridProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassLookAtTargetGridProcessor::ExecutionFlags");
static_assert(offsetof(UMassLookAtTargetGridProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassLookAtTargetGridProcessor::bAggregateRequirements");
static_assert(offsetof(UMassLookAtTargetGridProcessor, ActivationState) == 83, "Offset mismatch for UMassLookAtTargetGridProcessor::ActivationState");
static_assert(offsetof(UMassLookAtTargetGridProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassLookAtTargetGridProcessor::ExecutionPriority");

// /Script/MassAIBehavior.MassLookAtTargetRemoverProcessor
// Kind: Class; super: MassObserverProcessor
class UMassLookAtTargetRemoverProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassLookAtTargetRemoverProcessor, ObservedType) == 256, "Offset mismatch for UMassLookAtTargetRemoverProcessor::ObservedType");
static_assert(offsetof(UMassLookAtTargetRemoverProcessor, ObservedTypes) == 264, "Offset mismatch for UMassLookAtTargetRemoverProcessor::ObservedTypes");
static_assert(offsetof(UMassLookAtTargetRemoverProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassLookAtTargetRemoverProcessor::bAutoRegisterWithObserverRegistry");

// /Script/MassAIBehavior.MassLookAtTargetTrait
// Kind: Class; super: MassEntityTraitBase
class UMassLookAtTargetTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bShouldUseCapsuleComponentToSetTargetOffset; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Priority[0x1]; // 0x0031 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassLookAtTargetTrait, bShouldUseCapsuleComponentToSetTargetOffset) == 48, "Offset mismatch for UMassLookAtTargetTrait::bShouldUseCapsuleComponentToSetTargetOffset");
static_assert(offsetof(UMassLookAtTargetTrait, Priority) == 49, "Offset mismatch for UMassLookAtTargetTrait::Priority");

// /Script/MassAIBehavior.MassLookAtTrait
// Kind: Class; super: MassEntityTraitBase
class UMassLookAtTrait
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValidTargetConfig; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassLookAtTrait, ValidTargetConfig) == 40, "Offset mismatch for UMassLookAtTrait::ValidTargetConfig");

// /Script/MassAIBehavior.MassStateTreeActivationProcessor
// Kind: Class; super: MassProcessor
class UMassStateTreeActivationProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassStateTreeActivationProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassStateTreeActivationProcessor::ExecutionOrder");
static_assert(offsetof(UMassStateTreeActivationProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassStateTreeActivationProcessor::ProcessingPhase");
static_assert(offsetof(UMassStateTreeActivationProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassStateTreeActivationProcessor::ExecutionFlags");
static_assert(offsetof(UMassStateTreeActivationProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassStateTreeActivationProcessor::bAggregateRequirements");
static_assert(offsetof(UMassStateTreeActivationProcessor, ActivationState) == 83, "Offset mismatch for UMassStateTreeActivationProcessor::ActivationState");
static_assert(offsetof(UMassStateTreeActivationProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassStateTreeActivationProcessor::ExecutionPriority");

// /Script/MassAIBehavior.MassStateTreeFragmentDestructor
// Kind: Class; super: MassObserverProcessor
class UMassStateTreeFragmentDestructor
{
public:
    std::uint8_t Pad_0000[0x730]; // 0x0000
    void* SignalSubsystem; // 0x0730 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassStateTreeFragmentDestructor, SignalSubsystem) == 1840, "Offset mismatch for UMassStateTreeFragmentDestructor::SignalSubsystem");

// /Script/MassAIBehavior.MassStateTreeProcessor
// Kind: Class; super: MassSignalProcessorBase
class UMassStateTreeProcessor
{
public:
    std::uint8_t Pad_0000[0xA98]; // 0x0000
    TArray<void*> HandledStateTrees; // 0x0A98 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProcessEntitiesInParallel; // 0x0AA8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassStateTreeProcessor, HandledStateTrees) == 2712, "Offset mismatch for UMassStateTreeProcessor::HandledStateTrees");
static_assert(offsetof(UMassStateTreeProcessor, bProcessEntitiesInParallel) == 2728, "Offset mismatch for UMassStateTreeProcessor::bProcessEntitiesInParallel");

// /Script/MassAIBehavior.MassStateTreeSchema
// Kind: Class; super: StateTreeSchema
class UMassStateTreeSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Dependencies; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassStateTreeSchema, Dependencies) == 40, "Offset mismatch for UMassStateTreeSchema::Dependencies");

// /Script/MassAIBehavior.MassStateTreeSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassStateTreeSubsystem
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> InstanceDataArray; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0060
    TMap<void*, void*> RequirementsHashToProcessor; // 0x0070 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    void* SimulationSubsystem; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* DynamicProcessorClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMassStateTreeSubsystem, InstanceDataArray) == 80, "Offset mismatch for UMassStateTreeSubsystem::InstanceDataArray");
static_assert(offsetof(UMassStateTreeSubsystem, RequirementsHashToProcessor) == 112, "Offset mismatch for UMassStateTreeSubsystem::RequirementsHashToProcessor");
static_assert(offsetof(UMassStateTreeSubsystem, SimulationSubsystem) == 144, "Offset mismatch for UMassStateTreeSubsystem::SimulationSubsystem");
static_assert(offsetof(UMassStateTreeSubsystem, DynamicProcessorClass) == 152, "Offset mismatch for UMassStateTreeSubsystem::DynamicProcessorClass");

// /Script/MassAIBehavior.MassStateTreeTrait
// Kind: Class; super: MassEntityTraitBase
class UMassStateTreeTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* StateTree; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassStateTreeTrait, StateTree) == 48, "Offset mismatch for UMassStateTreeTrait::StateTree");

// /Script/MassAIBehavior.MassZoneGraphAnnotationTagUpdateProcessor
// Kind: Class; super: MassSignalProcessorBase
class UMassZoneGraphAnnotationTagUpdateProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassZoneGraphAnnotationTagUpdateProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassZoneGraphAnnotationTagUpdateProcessor::ExecutionOrder");
static_assert(offsetof(UMassZoneGraphAnnotationTagUpdateProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassZoneGraphAnnotationTagUpdateProcessor::ProcessingPhase");
static_assert(offsetof(UMassZoneGraphAnnotationTagUpdateProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassZoneGraphAnnotationTagUpdateProcessor::ExecutionFlags");
static_assert(offsetof(UMassZoneGraphAnnotationTagUpdateProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassZoneGraphAnnotationTagUpdateProcessor::bAggregateRequirements");
static_assert(offsetof(UMassZoneGraphAnnotationTagUpdateProcessor, ActivationState) == 83, "Offset mismatch for UMassZoneGraphAnnotationTagUpdateProcessor::ActivationState");
static_assert(offsetof(UMassZoneGraphAnnotationTagUpdateProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassZoneGraphAnnotationTagUpdateProcessor::ExecutionPriority");

// /Script/MassAIBehavior.MassZoneGraphAnnotationTagsInitializer
// Kind: Class; super: MassObserverProcessor
class UMassZoneGraphAnnotationTagsInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassZoneGraphAnnotationTagsInitializer, ObservedType) == 256, "Offset mismatch for UMassZoneGraphAnnotationTagsInitializer::ObservedType");
static_assert(offsetof(UMassZoneGraphAnnotationTagsInitializer, ObservedTypes) == 264, "Offset mismatch for UMassZoneGraphAnnotationTagsInitializer::ObservedTypes");
static_assert(offsetof(UMassZoneGraphAnnotationTagsInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassZoneGraphAnnotationTagsInitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassAIBehavior.MassZoneGraphAnnotationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassZoneGraphAnnotationTrait
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValidTargetConfig; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassZoneGraphAnnotationTrait, ValidTargetConfig) == 40, "Offset mismatch for UMassZoneGraphAnnotationTrait::ValidTargetConfig");
