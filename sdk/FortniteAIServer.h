/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteAIServer
 */
#pragma once
#include "Basic.h"

// /Script/FortniteAIServer.AIActionSequenceTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FAIActionSequenceTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float Weight; // 0x000C (Size: 0x4, Type: FloatProperty)
    void* ActionSequence; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAIActionSequenceTableRow, bEnabled) == 8, "Offset mismatch for FAIActionSequenceTableRow::bEnabled");
static_assert(offsetof(FAIActionSequenceTableRow, Weight) == 12, "Offset mismatch for FAIActionSequenceTableRow::Weight");
static_assert(offsetof(FAIActionSequenceTableRow, ActionSequence) == 16, "Offset mismatch for FAIActionSequenceTableRow::ActionSequence");

// /Script/FortniteAIServer.AIActionSequencer_Action
// Kind: ScriptStruct; super: none
struct FAIActionSequencer_Action
{
public:
    float StartTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* ActionData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t ActionHandle; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FAIActionSequencer_Action, StartTime) == 0, "Offset mismatch for FAIActionSequencer_Action::StartTime");
static_assert(offsetof(FAIActionSequencer_Action, ActionData) == 8, "Offset mismatch for FAIActionSequencer_Action::ActionData");
static_assert(offsetof(FAIActionSequencer_Action, ActionHandle) == 16, "Offset mismatch for FAIActionSequencer_Action::ActionHandle");

// /Script/FortniteAIServer.AIActionSequencer_Track
// Kind: ScriptStruct; super: none
struct FAIActionSequencer_Track
{
public:
    TArray<void*> Actions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t TrackHandle; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FAIActionSequencer_Track, Actions) == 0, "Offset mismatch for FAIActionSequencer_Track::Actions");
static_assert(offsetof(FAIActionSequencer_Track, TrackHandle) == 16, "Offset mismatch for FAIActionSequencer_Track::TrackHandle");

// /Script/FortniteAIServer.BotEvaluatorCommandCooldown
// Kind: ScriptStruct; super: none
struct FBotEvaluatorCommandCooldown
{
public:
    std::uint8_t Command[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBotEvaluatorCommandCooldown, Command) == 0, "Offset mismatch for FBotEvaluatorCommandCooldown::Command");

// /Script/FortniteAIServer.BotEvaluatorSmartObjectConvertedData
// Kind: ScriptStruct; super: none
struct FBotEvaluatorSmartObjectConvertedData
{
public:
    void* SmartObjectComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBotEvaluatorSmartObjectConvertedData, SmartObjectComponent) == 0, "Offset mismatch for FBotEvaluatorSmartObjectConvertedData::SmartObjectComponent");

// /Script/FortniteAIServer.EquippedItemTagAssociationData
// Kind: ScriptStruct; super: none
struct FEquippedItemTagAssociationData
{
public:
    std::uint8_t ItemTagQuery[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t TokenSystemTagQuery[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEquippedItemTagAssociationData, ItemTagQuery) == 0, "Offset mismatch for FEquippedItemTagAssociationData::ItemTagQuery");
static_assert(offsetof(FEquippedItemTagAssociationData, TokenSystemTagQuery) == 32, "Offset mismatch for FEquippedItemTagAssociationData::TokenSystemTagQuery");

// /Script/FortniteAIServer.FailedToReachPOI
// Kind: ScriptStruct; super: none
struct FFailedToReachPOI
{
public:
    std::int32_t BotPOIID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t FailCount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFailedToReachPOI, BotPOIID) == 0, "Offset mismatch for FFailedToReachPOI::BotPOIID");
static_assert(offsetof(FFailedToReachPOI, FailCount) == 4, "Offset mismatch for FFailedToReachPOI::FailCount");

// /Script/FortniteAIServer.FlankingLocationInfo
// Kind: ScriptStruct; super: none
struct FFlankingLocationInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortAICombatTokenTesterConsumedPositionsDebugData
// Kind: ScriptStruct; super: none
struct FFortAICombatTokenTesterConsumedPositionsDebugData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortAICombatTokenTesterConsumerData
// Kind: ScriptStruct; super: none
struct FFortAICombatTokenTesterConsumerData
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* InjectedBehaviorClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* Evaluator_TokenPositionClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DebugDetail; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowFailedPositions; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAICombatTokenTesterConsumerData, bActive) == 0, "Offset mismatch for FFortAICombatTokenTesterConsumerData::bActive");
static_assert(offsetof(FFortAICombatTokenTesterConsumerData, InjectedBehaviorClass) == 8, "Offset mismatch for FFortAICombatTokenTesterConsumerData::InjectedBehaviorClass");
static_assert(offsetof(FFortAICombatTokenTesterConsumerData, Evaluator_TokenPositionClass) == 16, "Offset mismatch for FFortAICombatTokenTesterConsumerData::Evaluator_TokenPositionClass");
static_assert(offsetof(FFortAICombatTokenTesterConsumerData, DebugDetail) == 24, "Offset mismatch for FFortAICombatTokenTesterConsumerData::DebugDetail");
static_assert(offsetof(FFortAICombatTokenTesterConsumerData, bShowFailedPositions) == 25, "Offset mismatch for FFortAICombatTokenTesterConsumerData::bShowFailedPositions");

// /Script/FortniteAIServer.FortAICombatTokenTesterDebugData
// Kind: ScriptStruct; super: none
struct FFortAICombatTokenTesterDebugData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortAICombatTokenTesterEQSPosition
// Kind: ScriptStruct; super: none
struct FFortAICombatTokenTesterEQSPosition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortAICombatTokenTesterProvidedPositionsDebugData
// Kind: ScriptStruct; super: none
struct FFortAICombatTokenTesterProvidedPositionsDebugData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortAICombatTokenTesterProviderData
// Kind: ScriptStruct; super: none
struct FFortAICombatTokenTesterProviderData
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* CombatTokenProviderComponentClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DebugDetail; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowFailedPositions; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0012
    std::uint32_t TopPositionsToHighlight; // 0x0014 (Size: 0x4, Type: UInt32Property)
    void* CombatTokenProviderComponent; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAICombatTokenTesterProviderData, bActive) == 0, "Offset mismatch for FFortAICombatTokenTesterProviderData::bActive");
static_assert(offsetof(FFortAICombatTokenTesterProviderData, CombatTokenProviderComponentClass) == 8, "Offset mismatch for FFortAICombatTokenTesterProviderData::CombatTokenProviderComponentClass");
static_assert(offsetof(FFortAICombatTokenTesterProviderData, DebugDetail) == 16, "Offset mismatch for FFortAICombatTokenTesterProviderData::DebugDetail");
static_assert(offsetof(FFortAICombatTokenTesterProviderData, bShowFailedPositions) == 17, "Offset mismatch for FFortAICombatTokenTesterProviderData::bShowFailedPositions");
static_assert(offsetof(FFortAICombatTokenTesterProviderData, TopPositionsToHighlight) == 20, "Offset mismatch for FFortAICombatTokenTesterProviderData::TopPositionsToHighlight");
static_assert(offsetof(FFortAICombatTokenTesterProviderData, CombatTokenProviderComponent) == 24, "Offset mismatch for FFortAICombatTokenTesterProviderData::CombatTokenProviderComponent");

// /Script/FortniteAIServer.FortAthenaAIEvaluatorClearanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaAIEvaluatorClearanceData
{
public:
    TArray<void*> Queries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExecutionMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluatorClearanceData, Queries) == 0, "Offset mismatch for FFortAthenaAIEvaluatorClearanceData::Queries");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceData, ExecutionMode) == 16, "Offset mismatch for FFortAthenaAIEvaluatorClearanceData::ExecutionMode");

// /Script/FortniteAIServer.FortAthenaAIEvaluatorClearanceQuery
// Kind: ScriptStruct; super: none
struct FFortAthenaAIEvaluatorClearanceQuery
{
public:
    void* ResultSlot; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ForwardReferential; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t TargetKeyName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t CheckDistance[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t RotationAroundForwardReferential[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClearanceType; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    std::uint8_t OverridenNavigationAgentName[0x4]; // 0x0054 (Size: 0x4, Type: NameProperty)
    void* OverridenNavigationFilterClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ClearancePhysicType; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    std::uint8_t CollisionProfileName[0x4]; // 0x0064 (Size: 0x4, Type: NameProperty)
    std::uint8_t CollisionChannel; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bOverrideCollisionShape; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x006A
    std::uint8_t OverridenCollisionShape[0x48]; // 0x0070 (Size: 0x48, Type: StructProperty)
    std::uint8_t PhysicOriginOffset[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    float CollisionShapeInflation; // 0x00D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, ResultSlot) == 0, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::ResultSlot");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, ForwardReferential) == 8, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::ForwardReferential");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, TargetKeyName) == 12, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::TargetKeyName");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, CheckDistance) == 16, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::CheckDistance");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, RotationAroundForwardReferential) == 56, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::RotationAroundForwardReferential");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, ClearanceType) == 80, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::ClearanceType");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, OverridenNavigationAgentName) == 84, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::OverridenNavigationAgentName");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, OverridenNavigationFilterClass) == 88, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::OverridenNavigationFilterClass");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, ClearancePhysicType) == 96, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::ClearancePhysicType");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, CollisionProfileName) == 100, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::CollisionProfileName");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, CollisionChannel) == 104, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::CollisionChannel");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, bOverrideCollisionShape) == 105, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::bOverrideCollisionShape");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, OverridenCollisionShape) == 112, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::OverridenCollisionShape");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, PhysicOriginOffset) == 184, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::PhysicOriginOffset");
static_assert(offsetof(FFortAthenaAIEvaluatorClearanceQuery, CollisionShapeInflation) == 208, "Offset mismatch for FFortAthenaAIEvaluatorClearanceQuery::CollisionShapeInflation");

// /Script/FortniteAIServer.FortAthenaAIEvaluatorClearanceResult
// Kind: ScriptStruct; super: none
struct FFortAthenaAIEvaluatorClearanceResult
{
public:
    std::uint8_t ClearanceResolution; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluatorClearanceResult, ClearanceResolution) == 0, "Offset mismatch for FFortAthenaAIEvaluatorClearanceResult::ClearanceResolution");

// /Script/FortniteAIServer.FortAthenaAIEvaluatorClearanceSlot
// Kind: ScriptStruct; super: FortAthenaAIEvaluatorClearanceResult
struct FFortAthenaAIEvaluatorClearanceSlot
{
public:
    std::uint8_t ClearanceResolution; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluatorClearanceSlot, ClearanceResolution) == 0, "Offset mismatch for FFortAthenaAIEvaluatorClearanceSlot::ClearanceResolution");

// /Script/FortniteAIServer.FortAthenaAIEvaluatorClearanceSlotA
// Kind: ScriptStruct; super: FortAthenaAIEvaluatorClearanceSlot
struct FFortAthenaAIEvaluatorClearanceSlotA
{
public:
    std::uint8_t ClearanceResolution; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluatorClearanceSlotA, ClearanceResolution) == 0, "Offset mismatch for FFortAthenaAIEvaluatorClearanceSlotA::ClearanceResolution");

// /Script/FortniteAIServer.FortAthenaAIEvaluatorClearanceSlotB
// Kind: ScriptStruct; super: FortAthenaAIEvaluatorClearanceSlot
struct FFortAthenaAIEvaluatorClearanceSlotB
{
public:
    std::uint8_t ClearanceResolution; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluatorClearanceSlotB, ClearanceResolution) == 0, "Offset mismatch for FFortAthenaAIEvaluatorClearanceSlotB::ClearanceResolution");

// /Script/FortniteAIServer.FortAthenaAIEvaluatorClearanceSlotC
// Kind: ScriptStruct; super: FortAthenaAIEvaluatorClearanceSlot
struct FFortAthenaAIEvaluatorClearanceSlotC
{
public:
    std::uint8_t ClearanceResolution; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluatorClearanceSlotC, ClearanceResolution) == 0, "Offset mismatch for FFortAthenaAIEvaluatorClearanceSlotC::ClearanceResolution");

// /Script/FortniteAIServer.FortAthenaAIEvaluatorClearanceSlotD
// Kind: ScriptStruct; super: FortAthenaAIEvaluatorClearanceSlot
struct FFortAthenaAIEvaluatorClearanceSlotD
{
public:
    std::uint8_t ClearanceResolution; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluatorClearanceSlotD, ClearanceResolution) == 0, "Offset mismatch for FFortAthenaAIEvaluatorClearanceSlotD::ClearanceResolution");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_LookAt_AbstractConfiguration
// Kind: ScriptStruct; super: none
struct FFortAthenaAIEvaluator_LookAt_AbstractConfiguration
{
public:
    std::int32_t DiceRollingPercentage; // 0x0000 (Size: 0x4, Type: IntProperty)
    float DiceRollingFailCooldown; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float UtilityWeightMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float UtilityWeightAddition; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ConfigurationCooldownRange[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ActorCooldownRange[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxDurationRange[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_AbstractConfiguration, DiceRollingPercentage) == 0, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_AbstractConfiguration::DiceRollingPercentage");
static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_AbstractConfiguration, DiceRollingFailCooldown) == 4, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_AbstractConfiguration::DiceRollingFailCooldown");
static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_AbstractConfiguration, UtilityWeightMultiplier) == 8, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_AbstractConfiguration::UtilityWeightMultiplier");
static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_AbstractConfiguration, UtilityWeightAddition) == 12, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_AbstractConfiguration::UtilityWeightAddition");
static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_AbstractConfiguration, ConfigurationCooldownRange) == 16, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_AbstractConfiguration::ConfigurationCooldownRange");
static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_AbstractConfiguration, ActorCooldownRange) == 32, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_AbstractConfiguration::ActorCooldownRange");
static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_AbstractConfiguration, MaxDurationRange) == 48, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_AbstractConfiguration::MaxDurationRange");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_LookAt_PawnConfiguration
// Kind: ScriptStruct; super: FortAthenaAIEvaluator_LookAt_AbstractConfiguration
struct FFortAthenaAIEvaluator_LookAt_PawnConfiguration
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t PerceptionConfiguration[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_PawnConfiguration, PerceptionConfiguration) == 64, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_PawnConfiguration::PerceptionConfiguration");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_LookAt_SOConfiguration
// Kind: ScriptStruct; super: FortAthenaAIEvaluator_LookAt_AbstractConfiguration
struct FFortAthenaAIEvaluator_LookAt_SOConfiguration
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    float Max2DDistance; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float MaxZDistance; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_SOConfiguration, Max2DDistance) == 64, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_SOConfiguration::Max2DDistance");
static_assert(offsetof(FFortAthenaAIEvaluator_LookAt_SOConfiguration, MaxZDistance) == 68, "Offset mismatch for FFortAthenaAIEvaluator_LookAt_SOConfiguration::MaxZDistance");

// /Script/FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaAddGameplayTagsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bReplicateChange; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKeepRunningWithEmptyTags; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t AddExecutionMode; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x002D
    std::uint8_t RemoveExecutionMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTask, bReplicateChange) == 40, "Offset mismatch for FFortAthenaAddGameplayTagsStateTreeTask::bReplicateChange");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTask, bKeepRunningWithEmptyTags) == 41, "Offset mismatch for FFortAthenaAddGameplayTagsStateTreeTask::bKeepRunningWithEmptyTags");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTask, AddExecutionMode) == 44, "Offset mismatch for FFortAthenaAddGameplayTagsStateTreeTask::AddExecutionMode");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTask, RemoveExecutionMode) == 48, "Offset mismatch for FFortAthenaAddGameplayTagsStateTreeTask::RemoveExecutionMode");

// /Script/FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaAddGameplayTagsStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Tags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaAddGameplayTagsStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaAddGameplayTagsStateTreeTaskInstanceData, Tags) == 8, "Offset mismatch for FFortAthenaAddGameplayTagsStateTreeTaskInstanceData::Tags");

// /Script/FortniteAIServer.FortAthenaArithmeticStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaArithmeticStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t OperationTrigger; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Operation; // 0x0029 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaArithmeticStateTreeTask, OperationTrigger) == 40, "Offset mismatch for FFortAthenaArithmeticStateTreeTask::OperationTrigger");
static_assert(offsetof(FFortAthenaArithmeticStateTreeTask, Operation) == 41, "Offset mismatch for FFortAthenaArithmeticStateTreeTask::Operation");

// /Script/FortniteAIServer.FortAthenaFindSlotEntranceLocationStateTreeTask
// Kind: ScriptStruct; super: StateTreeTask_FindSlotEntranceLocation
struct FFortAthenaFindSlotEntranceLocationStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bPreferLocationNearActorMovementInput; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaFindSlotEntranceLocationStateTreeTask, bPreferLocationNearActorMovementInput) == 72, "Offset mismatch for FFortAthenaFindSlotEntranceLocationStateTreeTask::bPreferLocationNearActorMovementInput");

// /Script/FortniteAIServer.FortAthenaFindSmartObjectAnimForActorStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaFindSmartObjectAnimForActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaFindSmartObjectAnimForActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaFindSmartObjectAnimForActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaFindSmartObjectAnimForActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaFindSmartObjectAnimForActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaFindSmartObjectAnimForActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaFindSmartObjectAnimForActorStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData
{
public:
    void* UserActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SmartObjectActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Tags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    void* PickedMontage; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* PickedSceneAsset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData, UserActor) == 0, "Offset mismatch for FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData::UserActor");
static_assert(offsetof(FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData, SmartObjectActor) == 8, "Offset mismatch for FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData::SmartObjectActor");
static_assert(offsetof(FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData, Tags) == 16, "Offset mismatch for FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData::Tags");
static_assert(offsetof(FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData, PickedMontage) == 48, "Offset mismatch for FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData::PickedMontage");
static_assert(offsetof(FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData, PickedSceneAsset) == 56, "Offset mismatch for FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData::PickedSceneAsset");

// /Script/FortniteAIServer.FortAthenaFocusAtStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaFocusAtStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaFocusAtStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaFocusAtStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaFocusAtStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaFocusAtStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaFocusAtStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaFocusAtStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* FocusActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FocusActorOffset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t FocusWorldPoint[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSetBackOnExit; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSetFocus; // 0x0041 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaFocusAtStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, FocusActor) == 8, "Offset mismatch for FFortAthenaFocusAtStateTreeTaskInstanceData::FocusActor");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, FocusActorOffset) == 16, "Offset mismatch for FFortAthenaFocusAtStateTreeTaskInstanceData::FocusActorOffset");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, FocusWorldPoint) == 40, "Offset mismatch for FFortAthenaFocusAtStateTreeTaskInstanceData::FocusWorldPoint");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, bSetBackOnExit) == 64, "Offset mismatch for FFortAthenaFocusAtStateTreeTaskInstanceData::bSetBackOnExit");
static_assert(offsetof(FFortAthenaFocusAtStateTreeTaskInstanceData, bShouldSetFocus) == 65, "Offset mismatch for FFortAthenaFocusAtStateTreeTaskInstanceData::bShouldSetFocus");

// /Script/FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaHandleSoftDisableGuardStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaHandleSoftDisableGuardStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaHandleSoftDisableGuardStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaHandleSoftDisableGuardStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaHandleSoftDisableGuardStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaHandleSoftDisableGuardStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaHandleSoftDisableGuardStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
{
public:
    std::uint8_t SoftDisableStateReference[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> ActorsToTeleportOnFailure; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData, SoftDisableStateReference) == 0, "Offset mismatch for FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData::SoftDisableStateReference");
static_assert(offsetof(FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData, ActorsToTeleportOnFailure) == 16, "Offset mismatch for FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData::ActorsToTeleportOnFailure");

// /Script/FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaHandleSoftDisableStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t StateTreeEventTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t TeleportOnNavmeshQueryBoxExtents[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::int32_t MaxTeleportToTryPerActor; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableNavmeshTeleportForPlayers; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    float MultiplierOnCapsuleHalfHeightForTeleportLocation; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float MultiplierOnCapsuleRadiusForFallbackTeleportSweepCastSize; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float MultiplierOnCapsuleHeightForFallbackTeleportSweepCasts; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTask, StateTreeEventTag) == 40, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTask::StateTreeEventTag");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTask, TeleportOnNavmeshQueryBoxExtents) == 48, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTask::TeleportOnNavmeshQueryBoxExtents");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTask, MaxTeleportToTryPerActor) == 72, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTask::MaxTeleportToTryPerActor");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTask, bEnableNavmeshTeleportForPlayers) == 76, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTask::bEnableNavmeshTeleportForPlayers");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTask, MultiplierOnCapsuleHalfHeightForTeleportLocation) == 80, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTask::MultiplierOnCapsuleHalfHeightForTeleportLocation");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTask, MultiplierOnCapsuleRadiusForFallbackTeleportSweepCastSize) == 84, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTask::MultiplierOnCapsuleRadiusForFallbackTeleportSweepCastSize");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTask, MultiplierOnCapsuleHeightForFallbackTeleportSweepCasts) == 88, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTask::MultiplierOnCapsuleHeightForFallbackTeleportSweepCasts");

// /Script/FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaHandleSoftDisableStateTreeTaskInstanceData
{
public:
    void* SmartObjectActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActorsToCleanup; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasReceivedSoftDisableEvent; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    std::uint8_t ReceivedSoftDisableEvent[0x4]; // 0x001C (Size: 0x4, Type: StructProperty)
    std::uint8_t OutState[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData, SmartObjectActor) == 0, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTaskInstanceData::SmartObjectActor");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData, ActorsToCleanup) == 8, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTaskInstanceData::ActorsToCleanup");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData, bHasReceivedSoftDisableEvent) == 24, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTaskInstanceData::bHasReceivedSoftDisableEvent");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData, ReceivedSoftDisableEvent) == 28, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTaskInstanceData::ReceivedSoftDisableEvent");
static_assert(offsetof(FFortAthenaHandleSoftDisableStateTreeTaskInstanceData, OutState) == 32, "Offset mismatch for FFortAthenaHandleSoftDisableStateTreeTaskInstanceData::OutState");

// /Script/FortniteAIServer.FortAthenaIntArithmeticStateTreeTask
// Kind: ScriptStruct; super: FortAthenaArithmeticStateTreeTask
struct FFortAthenaIntArithmeticStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t OperationTrigger; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Operation; // 0x0029 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaIntArithmeticStateTreeTask, OperationTrigger) == 40, "Offset mismatch for FFortAthenaIntArithmeticStateTreeTask::OperationTrigger");
static_assert(offsetof(FFortAthenaIntArithmeticStateTreeTask, Operation) == 41, "Offset mismatch for FFortAthenaIntArithmeticStateTreeTask::Operation");

// /Script/FortniteAIServer.FortAthenaIntArithmeticStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaIntArithmeticStateTreeTaskInstanceData
{
public:
    std::int32_t FirstOperand; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SecondOperand; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t ReferencedResult[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaIntArithmeticStateTreeTaskInstanceData, FirstOperand) == 0, "Offset mismatch for FFortAthenaIntArithmeticStateTreeTaskInstanceData::FirstOperand");
static_assert(offsetof(FFortAthenaIntArithmeticStateTreeTaskInstanceData, SecondOperand) == 4, "Offset mismatch for FFortAthenaIntArithmeticStateTreeTaskInstanceData::SecondOperand");
static_assert(offsetof(FFortAthenaIntArithmeticStateTreeTaskInstanceData, ReferencedResult) == 8, "Offset mismatch for FFortAthenaIntArithmeticStateTreeTaskInstanceData::ReferencedResult");

// /Script/FortniteAIServer.FortAthenaIntStateTreeParameter
// Kind: ScriptStruct; super: none
struct FFortAthenaIntStateTreeParameter
{
public:
    std::int32_t Int; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortAthenaIntStateTreeParameter, Int) == 0, "Offset mismatch for FFortAthenaIntStateTreeParameter::Int");

// /Script/FortniteAIServer.FortAthenaMakeIntVariableStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaMakeIntVariableStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bResetOnReselect; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaMakeIntVariableStateTreeTask, bResetOnReselect) == 40, "Offset mismatch for FFortAthenaMakeIntVariableStateTreeTask::bResetOnReselect");

// /Script/FortniteAIServer.FortAthenaMakeIntVariableStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaMakeIntVariableStateTreeTaskInstanceData
{
public:
    std::int32_t DefaultIntValue; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t OutInt[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaMakeIntVariableStateTreeTaskInstanceData, DefaultIntValue) == 0, "Offset mismatch for FFortAthenaMakeIntVariableStateTreeTaskInstanceData::DefaultIntValue");
static_assert(offsetof(FFortAthenaMakeIntVariableStateTreeTaskInstanceData, OutInt) == 4, "Offset mismatch for FFortAthenaMakeIntVariableStateTreeTaskInstanceData::OutInt");

// /Script/FortniteAIServer.FortAthenaPickAnimByWorldConditionsConfig
// Kind: ScriptStruct; super: none
struct FFortAthenaPickAnimByWorldConditionsConfig
{
public:
    void* Montage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SceneAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RequiredConditions[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t QueryState[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsConfig, Montage) == 0, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsConfig::Montage");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsConfig, SceneAsset) == 8, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsConfig::SceneAsset");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsConfig, RequiredConditions) == 16, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsConfig::RequiredConditions");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsConfig, QueryState) == 56, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsConfig::QueryState");

// /Script/FortniteAIServer.FortAthenaPickAnimByWorldConditionsStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaPickAnimByWorldConditionsStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData
{
public:
    TArray<void*> PossibleAnims; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* ActorAForWorldConditions; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ActorBForWorldConditions; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* ActorCForWorldConditions; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* PickedMontage; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* PickedSceneAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData, PossibleAnims) == 0, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData::PossibleAnims");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData, ActorAForWorldConditions) == 16, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData::ActorAForWorldConditions");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData, ActorBForWorldConditions) == 24, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData::ActorBForWorldConditions");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData, ActorCForWorldConditions) == 32, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData::ActorCForWorldConditions");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData, PickedMontage) == 40, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData::PickedMontage");
static_assert(offsetof(FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData, PickedSceneAsset) == 48, "Offset mismatch for FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData::PickedSceneAsset");

// /Script/FortniteAIServer.FortAthenaPickRandomMontageConfig
// Kind: ScriptStruct; super: none
struct FFortAthenaPickRandomMontageConfig
{
public:
    void* Montage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t RandomWeight; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortAthenaPickRandomMontageConfig, Montage) == 0, "Offset mismatch for FFortAthenaPickRandomMontageConfig::Montage");
static_assert(offsetof(FFortAthenaPickRandomMontageConfig, RandomWeight) == 8, "Offset mismatch for FFortAthenaPickRandomMontageConfig::RandomWeight");

// /Script/FortniteAIServer.FortAthenaPickRandomMontageStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaPickRandomMontageStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaPickRandomMontageStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaPickRandomMontageStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaPickRandomMontageStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaPickRandomMontageStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaPickRandomMontageStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaPickRandomMontageStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaPickRandomMontageStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaPickRandomMontageStateTreeTaskInstanceData
{
public:
    TArray<void*> PossibleMontages; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* PickedMontage; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaPickRandomMontageStateTreeTaskInstanceData, PossibleMontages) == 0, "Offset mismatch for FFortAthenaPickRandomMontageStateTreeTaskInstanceData::PossibleMontages");
static_assert(offsetof(FFortAthenaPickRandomMontageStateTreeTaskInstanceData, PickedMontage) == 16, "Offset mismatch for FFortAthenaPickRandomMontageStateTreeTaskInstanceData::PickedMontage");

// /Script/FortniteAIServer.FortAthenaPlayContextualAnimStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaPlayContextualAnimStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaPlayContextualAnimStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaPlayContextualAnimStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaPlayContextualAnimStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaPlayContextualAnimStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaPlayContextualAnimStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaPlayContextualAnimStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTaskActorInfo
// Kind: ScriptStruct; super: none
struct FFortAthenaPlayInteractionStateTreeTaskActorInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortAthenaReceivePayloadSmartObjectUIStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaReceivePayloadSmartObjectUIStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ReceivedUIPayloadEventTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t bSilentFailWithInvalidPayloadType; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConnectToClientToServerPayload; // 0x002D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaReceivePayloadSmartObjectUIStateTreeTask, ReceivedUIPayloadEventTag) == 40, "Offset mismatch for FFortAthenaReceivePayloadSmartObjectUIStateTreeTask::ReceivedUIPayloadEventTag");
static_assert(offsetof(FFortAthenaReceivePayloadSmartObjectUIStateTreeTask, bSilentFailWithInvalidPayloadType) == 44, "Offset mismatch for FFortAthenaReceivePayloadSmartObjectUIStateTreeTask::bSilentFailWithInvalidPayloadType");
static_assert(offsetof(FFortAthenaReceivePayloadSmartObjectUIStateTreeTask, bConnectToClientToServerPayload) == 45, "Offset mismatch for FFortAthenaReceivePayloadSmartObjectUIStateTreeTask::bConnectToClientToServerPayload");

// /Script/FortniteAIServer.FortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UIId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t PayLoadType[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t PayloadTypeQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    TArray<void*> ReceivedPayloads; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData, UIId) == 8, "Offset mismatch for FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData::UIId");
static_assert(offsetof(FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData, PayLoadType) == 12, "Offset mismatch for FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData::PayLoadType");
static_assert(offsetof(FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData, PayloadTypeQuery) == 16, "Offset mismatch for FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData::PayloadTypeQuery");
static_assert(offsetof(FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData, ReceivedPayloads) == 88, "Offset mismatch for FFortAthenaReceivePayloadSmartObjectUIStateTreeTaskInstanceData::ReceivedPayloads");

// /Script/FortniteAIServer.FortAthenaRunSmartObjectUIStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaRunSmartObjectUIStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t UIClosedEventTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTask, UIClosedEventTag) == 40, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTask::UIClosedEventTag");

// /Script/FortniteAIServer.FortAthenaRunSmartObjectUIStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData
{
public:
    void* SmartObjectActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Actor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UITag[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t UIOptions[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t UIId[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsClosed; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCloseResult; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTaskRequestedClose; // 0x0036 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData, SmartObjectActor) == 0, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData::SmartObjectActor");
static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData, Actor) == 8, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData, UITag) == 16, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData::UITag");
static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData, UIOptions) == 24, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData::UIOptions");
static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData, UIId) == 48, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData::UIId");
static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData, bIsClosed) == 52, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData::bIsClosed");
static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData, bCloseResult) == 53, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData::bCloseResult");
static_assert(offsetof(FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData, bTaskRequestedClose) == 54, "Offset mismatch for FFortAthenaRunSmartObjectUIStateTreeTaskInstanceData::bTaskRequestedClose");

// /Script/FortniteAIServer.FortAthenaSendPayloadSmartObjectUIStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaSendPayloadSmartObjectUIStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Trigger; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaSendPayloadSmartObjectUIStateTreeTask, Trigger) == 40, "Offset mismatch for FFortAthenaSendPayloadSmartObjectUIStateTreeTask::Trigger");

// /Script/FortniteAIServer.FortAthenaSendPayloadSmartObjectUIStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaSendPayloadSmartObjectUIStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UIId[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Payloads; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaSendPayloadSmartObjectUIStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaSendPayloadSmartObjectUIStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaSendPayloadSmartObjectUIStateTreeTaskInstanceData, UIId) == 8, "Offset mismatch for FFortAthenaSendPayloadSmartObjectUIStateTreeTaskInstanceData::UIId");
static_assert(offsetof(FFortAthenaSendPayloadSmartObjectUIStateTreeTaskInstanceData, Payloads) == 16, "Offset mismatch for FFortAthenaSendPayloadSmartObjectUIStateTreeTaskInstanceData::Payloads");

// /Script/FortniteAIServer.FortAthenaSoftDisableStateTreeParameter
// Kind: ScriptStruct; super: none
struct FFortAthenaSoftDisableStateTreeParameter
{
public:
    TArray<void*> ActorsToTeleportOnExit; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaSoftDisableStateTreeParameter, ActorsToTeleportOnExit) == 0, "Offset mismatch for FFortAthenaSoftDisableStateTreeParameter::ActorsToTeleportOnExit");

// /Script/FortniteAIServer.FortAthenaStateTreeCrouchTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaStateTreeCrouchTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaStateTreeCrouchTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaStateTreeCrouchTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaStateTreeCrouchTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaStateTreeCrouchTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaStateTreeCrouchTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaStateTreeCrouchTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaStateTreeCrouchTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaStateTreeCrouchTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaStateTreeCrouchTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaStateTreeCrouchTaskInstanceData::Actor");

// /Script/FortniteAIServer.FortAthenaStateTreeInteractTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaStateTreeInteractTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaStateTreeInteractTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaStateTreeInteractTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaStateTreeInteractTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaStateTreeInteractTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaStateTreeInteractTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaStateTreeInteractTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaStateTreeInteractTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaStateTreeInteractTaskInstanceData
{
public:
    std::uint8_t InteractType; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Actor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* InteractTargetActor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float InteractDuration; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Timer; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, InteractType) == 0, "Offset mismatch for FFortAthenaStateTreeInteractTaskInstanceData::InteractType");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, Actor) == 8, "Offset mismatch for FFortAthenaStateTreeInteractTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, InteractTargetActor) == 16, "Offset mismatch for FFortAthenaStateTreeInteractTaskInstanceData::InteractTargetActor");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, InteractDuration) == 24, "Offset mismatch for FFortAthenaStateTreeInteractTaskInstanceData::InteractDuration");
static_assert(offsetof(FFortAthenaStateTreeInteractTaskInstanceData, Timer) == 28, "Offset mismatch for FFortAthenaStateTreeInteractTaskInstanceData::Timer");

// /Script/FortniteAIServer.FortAthenaStateTreeLookAroundTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaStateTreeLookAroundTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaStateTreeLookAroundTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaStateTreeLookAroundTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaStateTreeLookAroundTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaStateTreeLookAroundTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaStateTreeLookAroundTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaStateTreeLookAroundTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float LookAtDurationMin; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LookAtDurationMax; // 0x000C (Size: 0x4, Type: FloatProperty)
    float LookAtDuration; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Timer; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaStateTreeLookAroundTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, LookAtDurationMin) == 8, "Offset mismatch for FFortAthenaStateTreeLookAroundTaskInstanceData::LookAtDurationMin");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, LookAtDurationMax) == 12, "Offset mismatch for FFortAthenaStateTreeLookAroundTaskInstanceData::LookAtDurationMax");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, LookAtDuration) == 16, "Offset mismatch for FFortAthenaStateTreeLookAroundTaskInstanceData::LookAtDuration");
static_assert(offsetof(FFortAthenaStateTreeLookAroundTaskInstanceData, Timer) == 20, "Offset mismatch for FFortAthenaStateTreeLookAroundTaskInstanceData::Timer");

// /Script/FortniteAIServer.FortAthenaStateTreeSendGameplayEventTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaStateTreeSendGameplayEventTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaStateTreeSendGameplayEventTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaStateTreeSendGameplayEventTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaStateTreeSendGameplayEventTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaStateTreeSendGameplayEventTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaStateTreeSendGameplayEventTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaStateTreeSendGameplayEventTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaStateTreeSendGameplayEventTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaStateTreeSendGameplayEventTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EventTag[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaStateTreeSendGameplayEventTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaStateTreeSendGameplayEventTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaStateTreeSendGameplayEventTaskInstanceData, Target) == 8, "Offset mismatch for FFortAthenaStateTreeSendGameplayEventTaskInstanceData::Target");
static_assert(offsetof(FFortAthenaStateTreeSendGameplayEventTaskInstanceData, EventTag) == 16, "Offset mismatch for FFortAthenaStateTreeSendGameplayEventTaskInstanceData::EventTag");

// /Script/FortniteAIServer.FortAthenaTeleportToActorStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaTeleportToActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaTeleportToActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaTeleportToActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaTeleportToActorStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaTeleportToActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaTeleportToActorStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TeleportRelativeLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t TeleportRelativeRotation[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaTeleportToActorStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTaskInstanceData, TargetActor) == 8, "Offset mismatch for FFortAthenaTeleportToActorStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTaskInstanceData, TeleportRelativeLocation) == 16, "Offset mismatch for FFortAthenaTeleportToActorStateTreeTaskInstanceData::TeleportRelativeLocation");
static_assert(offsetof(FFortAthenaTeleportToActorStateTreeTaskInstanceData, TeleportRelativeRotation) == 40, "Offset mismatch for FFortAthenaTeleportToActorStateTreeTaskInstanceData::TeleportRelativeRotation");

// /Script/FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaToggleAllowInteractStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortAthenaToggleAllowInteractStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaToggleAllowInteractStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaToggleAllowInteractStateTreeTaskInstanceData, TargetActor) == 8, "Offset mismatch for FFortAthenaToggleAllowInteractStateTreeTaskInstanceData::TargetActor");

// /Script/FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaToggleAllowInteractStateTreeTaskTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AddExecutionMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t RemoveExecutionMode; // 0x002C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaToggleAllowInteractStateTreeTaskTreeTask, AddExecutionMode) == 40, "Offset mismatch for FFortAthenaToggleAllowInteractStateTreeTaskTreeTask::AddExecutionMode");
static_assert(offsetof(FFortAthenaToggleAllowInteractStateTreeTaskTreeTask, RemoveExecutionMode) == 44, "Offset mismatch for FFortAthenaToggleAllowInteractStateTreeTaskTreeTask::RemoveExecutionMode");

// /Script/FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaToggleGameplayEffectStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AddExecutionMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t RemoveExecutionMode; // 0x002C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTask, AddExecutionMode) == 40, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTask::AddExecutionMode");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTask, RemoveExecutionMode) == 44, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTask::RemoveExecutionMode");

// /Script/FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> GameplayEffectClassesToAdd; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutomaticallyRemoveAddedEffectsOnExit; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    TArray<void*> GameplayEffectClassesToRemove; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayEffectsByTagsToRemove[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayEffectsBySourceTagsToRemove[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayEffectsByAppliedTagsToRemove[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayEffectsByGrantedTagsToRemove[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, TargetActor) == 8, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::TargetActor");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectClassesToAdd) == 16, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectClassesToAdd");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, bAutomaticallyRemoveAddedEffectsOnExit) == 32, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::bAutomaticallyRemoveAddedEffectsOnExit");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectClassesToRemove) == 40, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectClassesToRemove");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectsByTagsToRemove) == 56, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectsByTagsToRemove");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectsBySourceTagsToRemove) == 88, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectsBySourceTagsToRemove");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectsByAppliedTagsToRemove) == 120, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectsByAppliedTagsToRemove");
static_assert(offsetof(FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData, GameplayEffectsByGrantedTagsToRemove) == 152, "Offset mismatch for FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData::GameplayEffectsByGrantedTagsToRemove");

// /Script/FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaTrackEventConsumeStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortAthenaTrackEventConsumeStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortAthenaTrackEventConsumeStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortAthenaTrackEventConsumeStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortAthenaTrackEventConsumeStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortAthenaTrackEventConsumeStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortAthenaTrackEventConsumeStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaTrackEventConsumeStateTreeTaskInstanceData
{
public:
    std::uint8_t ReferencedEvent[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaTrackEventConsumeStateTreeTaskInstanceData, ReferencedEvent) == 0, "Offset mismatch for FFortAthenaTrackEventConsumeStateTreeTaskInstanceData::ReferencedEvent");

// /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaTrackEventStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EventTagQuery[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    std::uint8_t StateTreeEventTag[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaTrackEventStateTreeTask, EventTagQuery) == 40, "Offset mismatch for FFortAthenaTrackEventStateTreeTask::EventTagQuery");
static_assert(offsetof(FFortAthenaTrackEventStateTreeTask, StateTreeEventTag) == 112, "Offset mismatch for FFortAthenaTrackEventStateTreeTask::StateTreeEventTag");

// /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaTrackEventStateTreeTaskInstanceData
{
public:
    std::uint8_t OutParameter[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaTrackEventStateTreeTaskInstanceData, OutParameter) == 0, "Offset mismatch for FFortAthenaTrackEventStateTreeTaskInstanceData::OutParameter");

// /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTaskStateTreeParameter
// Kind: ScriptStruct; super: none
struct FFortAthenaTrackEventStateTreeTaskStateTreeParameter
{
public:
    std::uint8_t bHasReceivedTrackedEvent; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t ReceivedEventTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaTrackEventStateTreeTaskStateTreeParameter, bHasReceivedTrackedEvent) == 0, "Offset mismatch for FFortAthenaTrackEventStateTreeTaskStateTreeParameter::bHasReceivedTrackedEvent");
static_assert(offsetof(FFortAthenaTrackEventStateTreeTaskStateTreeParameter, ReceivedEventTag) == 4, "Offset mismatch for FFortAthenaTrackEventStateTreeTaskStateTreeParameter::ReceivedEventTag");

// /Script/FortniteAIServer.FortAthenaWorldConditionInstanceData
// Kind: ScriptStruct; super: none
struct FFortAthenaWorldConditionInstanceData
{
public:
    void* ActorA; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ActorB; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ActorC; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOutResult; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t QueryState[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaWorldConditionInstanceData, ActorA) == 0, "Offset mismatch for FFortAthenaWorldConditionInstanceData::ActorA");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, ActorB) == 8, "Offset mismatch for FFortAthenaWorldConditionInstanceData::ActorB");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, ActorC) == 16, "Offset mismatch for FFortAthenaWorldConditionInstanceData::ActorC");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, bOutResult) == 24, "Offset mismatch for FFortAthenaWorldConditionInstanceData::bOutResult");
static_assert(offsetof(FFortAthenaWorldConditionInstanceData, QueryState) == 32, "Offset mismatch for FFortAthenaWorldConditionInstanceData::QueryState");

// /Script/FortniteAIServer.FortAthenaWorldConditionInstanceDataStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortAthenaWorldConditionInstanceDataStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Conditions[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t StateTreeEventTag[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortAthenaWorldConditionInstanceDataStateTreeTask, Conditions) == 40, "Offset mismatch for FFortAthenaWorldConditionInstanceDataStateTreeTask::Conditions");
static_assert(offsetof(FFortAthenaWorldConditionInstanceDataStateTreeTask, StateTreeEventTag) == 80, "Offset mismatch for FFortAthenaWorldConditionInstanceDataStateTreeTask::StateTreeEventTag");

// /Script/FortniteAIServer.FortBTService_InjectionTagKey
// Kind: ScriptStruct; super: none
struct FFortBTService_InjectionTagKey
{
public:
    std::uint8_t InjectionTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t InjectionKeyName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName ActionInterfaceObjectKeyName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortBTService_InjectionTagKey, InjectionTag) == 0, "Offset mismatch for FFortBTService_InjectionTagKey::InjectionTag");
static_assert(offsetof(FFortBTService_InjectionTagKey, InjectionKeyName) == 4, "Offset mismatch for FFortBTService_InjectionTagKey::InjectionKeyName");
static_assert(offsetof(FFortBTService_InjectionTagKey, ActionInterfaceObjectKeyName) == 8, "Offset mismatch for FFortBTService_InjectionTagKey::ActionInterfaceObjectKeyName");

// /Script/FortniteAIServer.FortCollisionShape
// Kind: ScriptStruct; super: none
struct FFortCollisionShape
{
public:
    std::uint8_t ShapeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t BoxHalfExtent[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float SphereRadius; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float CapsuleRadius; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float CapsuleHalfHeight; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t ShapeRotation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortCollisionShape, ShapeType) == 0, "Offset mismatch for FFortCollisionShape::ShapeType");
static_assert(offsetof(FFortCollisionShape, BoxHalfExtent) == 8, "Offset mismatch for FFortCollisionShape::BoxHalfExtent");
static_assert(offsetof(FFortCollisionShape, SphereRadius) == 32, "Offset mismatch for FFortCollisionShape::SphereRadius");
static_assert(offsetof(FFortCollisionShape, CapsuleRadius) == 36, "Offset mismatch for FFortCollisionShape::CapsuleRadius");
static_assert(offsetof(FFortCollisionShape, CapsuleHalfHeight) == 40, "Offset mismatch for FFortCollisionShape::CapsuleHalfHeight");
static_assert(offsetof(FFortCollisionShape, ShapeRotation) == 48, "Offset mismatch for FFortCollisionShape::ShapeRotation");

// /Script/FortniteAIServer.FortEvaluatorBlueprintBaseBlackboardCondition
// Kind: ScriptStruct; super: none
struct FFortEvaluatorBlueprintBaseBlackboardCondition
{
public:
    std::uint8_t BlackboardKey[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::int32_t IntValue; // 0x0028 (Size: 0x4, Type: IntProperty)
    float FloatValue; // 0x002C (Size: 0x4, Type: FloatProperty)
    FString StringValue; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t OperationType; // 0x0040 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortEvaluatorBlueprintBaseBlackboardCondition, BlackboardKey) == 0, "Offset mismatch for FFortEvaluatorBlueprintBaseBlackboardCondition::BlackboardKey");
static_assert(offsetof(FFortEvaluatorBlueprintBaseBlackboardCondition, IntValue) == 40, "Offset mismatch for FFortEvaluatorBlueprintBaseBlackboardCondition::IntValue");
static_assert(offsetof(FFortEvaluatorBlueprintBaseBlackboardCondition, FloatValue) == 44, "Offset mismatch for FFortEvaluatorBlueprintBaseBlackboardCondition::FloatValue");
static_assert(offsetof(FFortEvaluatorBlueprintBaseBlackboardCondition, StringValue) == 48, "Offset mismatch for FFortEvaluatorBlueprintBaseBlackboardCondition::StringValue");
static_assert(offsetof(FFortEvaluatorBlueprintBaseBlackboardCondition, OperationType) == 64, "Offset mismatch for FFortEvaluatorBlueprintBaseBlackboardCondition::OperationType");

// /Script/FortniteAIServer.FortEvaluatorBlueprintBaseCooldown
// Kind: ScriptStruct; super: none
struct FFortEvaluatorBlueprintBaseCooldown
{
public:
    std::uint8_t CooldownIdentifierTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bSetCooldown; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckCooldown; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CooldownType; // 0x0006 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    std::uint8_t Cooldown[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t CooldownVariation[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseSkillLevel; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvaluatorBlueprintBaseCooldown, CooldownIdentifierTag) == 0, "Offset mismatch for FFortEvaluatorBlueprintBaseCooldown::CooldownIdentifierTag");
static_assert(offsetof(FFortEvaluatorBlueprintBaseCooldown, bSetCooldown) == 4, "Offset mismatch for FFortEvaluatorBlueprintBaseCooldown::bSetCooldown");
static_assert(offsetof(FFortEvaluatorBlueprintBaseCooldown, bCheckCooldown) == 5, "Offset mismatch for FFortEvaluatorBlueprintBaseCooldown::bCheckCooldown");
static_assert(offsetof(FFortEvaluatorBlueprintBaseCooldown, CooldownType) == 6, "Offset mismatch for FFortEvaluatorBlueprintBaseCooldown::CooldownType");
static_assert(offsetof(FFortEvaluatorBlueprintBaseCooldown, Cooldown) == 8, "Offset mismatch for FFortEvaluatorBlueprintBaseCooldown::Cooldown");
static_assert(offsetof(FFortEvaluatorBlueprintBaseCooldown, CooldownVariation) == 48, "Offset mismatch for FFortEvaluatorBlueprintBaseCooldown::CooldownVariation");
static_assert(offsetof(FFortEvaluatorBlueprintBaseCooldown, bUseSkillLevel) == 88, "Offset mismatch for FFortEvaluatorBlueprintBaseCooldown::bUseSkillLevel");

// /Script/FortniteAIServer.FortGameplayAbilityCanActivateAbilityCondition
// Kind: ScriptStruct; super: FortStateTreeGameplayAbilityCondition
struct FFortGameplayAbilityCanActivateAbilityCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortGameplayAbilityCanActivateAbilityCondition, bInvert) == 40, "Offset mismatch for FFortGameplayAbilityCanActivateAbilityCondition::bInvert");

// /Script/FortniteAIServer.FortGameplayAbilityCanActivateAbilityInstanceData
// Kind: ScriptStruct; super: none
struct FFortGameplayAbilityCanActivateAbilityInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AbilityTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGameplayAbilityCanActivateAbilityInstanceData, Pawn) == 0, "Offset mismatch for FFortGameplayAbilityCanActivateAbilityInstanceData::Pawn");
static_assert(offsetof(FFortGameplayAbilityCanActivateAbilityInstanceData, AbilityTag) == 8, "Offset mismatch for FFortGameplayAbilityCanActivateAbilityInstanceData::AbilityTag");

// /Script/FortniteAIServer.FortGameplayAbilityCanHitTargetCondition
// Kind: ScriptStruct; super: FortStateTreeGameplayAbilityCondition
struct FFortGameplayAbilityCanHitTargetCondition
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bUseIdealYawRotationToTargetValue; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortGameplayAbilityCanHitTargetCondition, bUseIdealYawRotationToTargetValue) == 48, "Offset mismatch for FFortGameplayAbilityCanHitTargetCondition::bUseIdealYawRotationToTargetValue");

// /Script/FortniteAIServer.FortGameplayAbilityCanHitTargetInstanceData
// Kind: ScriptStruct; super: none
struct FFortGameplayAbilityCanHitTargetInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AbilityTag[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGameplayAbilityCanHitTargetInstanceData, Pawn) == 0, "Offset mismatch for FFortGameplayAbilityCanHitTargetInstanceData::Pawn");
static_assert(offsetof(FFortGameplayAbilityCanHitTargetInstanceData, TargetActor) == 8, "Offset mismatch for FFortGameplayAbilityCanHitTargetInstanceData::TargetActor");
static_assert(offsetof(FFortGameplayAbilityCanHitTargetInstanceData, AbilityTag) == 16, "Offset mismatch for FFortGameplayAbilityCanHitTargetInstanceData::AbilityTag");

// /Script/FortniteAIServer.FortGameplayAbilityCompareDistanceCondition
// Kind: ScriptStruct; super: FortStateTreeGameplayAbilityCondition
struct FFortGameplayAbilityCompareDistanceCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortGameplayAbilityCompareDistanceCondition, bInvert) == 40, "Offset mismatch for FFortGameplayAbilityCompareDistanceCondition::bInvert");

// /Script/FortniteAIServer.FortGameplayAbilityCompareDistanceInstanceData
// Kind: ScriptStruct; super: none
struct FFortGameplayAbilityCompareDistanceInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AbilityTag[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    TArray<void*> DistanceComparisons; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortGameplayAbilityCompareDistanceInstanceData, Pawn) == 0, "Offset mismatch for FFortGameplayAbilityCompareDistanceInstanceData::Pawn");
static_assert(offsetof(FFortGameplayAbilityCompareDistanceInstanceData, TargetActor) == 8, "Offset mismatch for FFortGameplayAbilityCompareDistanceInstanceData::TargetActor");
static_assert(offsetof(FFortGameplayAbilityCompareDistanceInstanceData, AbilityTag) == 16, "Offset mismatch for FFortGameplayAbilityCompareDistanceInstanceData::AbilityTag");
static_assert(offsetof(FFortGameplayAbilityCompareDistanceInstanceData, DistanceComparisons) == 48, "Offset mismatch for FFortGameplayAbilityCompareDistanceInstanceData::DistanceComparisons");

// /Script/FortniteAIServer.FortGameplayAbilityIsOnCooldownCondition
// Kind: ScriptStruct; super: FortStateTreeGameplayAbilityCondition
struct FFortGameplayAbilityIsOnCooldownCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortGameplayAbilityIsOnCooldownCondition, bInvert) == 40, "Offset mismatch for FFortGameplayAbilityIsOnCooldownCondition::bInvert");

// /Script/FortniteAIServer.FortGameplayAbilityIsOnCooldownInstanceData
// Kind: ScriptStruct; super: none
struct FFortGameplayAbilityIsOnCooldownInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AbilityTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGameplayAbilityIsOnCooldownInstanceData, Pawn) == 0, "Offset mismatch for FFortGameplayAbilityIsOnCooldownInstanceData::Pawn");
static_assert(offsetof(FFortGameplayAbilityIsOnCooldownInstanceData, AbilityTag) == 8, "Offset mismatch for FFortGameplayAbilityIsOnCooldownInstanceData::AbilityTag");

// /Script/FortniteAIServer.FortGameplayTagQueryPerDifficulty
// Kind: ScriptStruct; super: none
struct FFortGameplayTagQueryPerDifficulty
{
public:
    std::uint8_t DifficultyInfo[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t TagQueryToMatch[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    float Difficulty; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortGameplayTagQueryPerDifficulty, DifficultyInfo) == 0, "Offset mismatch for FFortGameplayTagQueryPerDifficulty::DifficultyInfo");
static_assert(offsetof(FFortGameplayTagQueryPerDifficulty, TagQueryToMatch) == 16, "Offset mismatch for FFortGameplayTagQueryPerDifficulty::TagQueryToMatch");
static_assert(offsetof(FFortGameplayTagQueryPerDifficulty, Difficulty) == 88, "Offset mismatch for FFortGameplayTagQueryPerDifficulty::Difficulty");

// /Script/FortniteAIServer.FortGetActorLocationStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortGetActorLocationStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bRunOnce; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortGetActorLocationStateTreeTask, bRunOnce) == 40, "Offset mismatch for FFortGetActorLocationStateTreeTask::bRunOnce");

// /Script/FortniteAIServer.FortGetActorLocationStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortGetActorLocationStateTreeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OutVector[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t OutRefVector[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortGetActorLocationStateTreeTaskInstanceData, Actor) == 0, "Offset mismatch for FFortGetActorLocationStateTreeTaskInstanceData::Actor");
static_assert(offsetof(FFortGetActorLocationStateTreeTaskInstanceData, OutVector) == 8, "Offset mismatch for FFortGetActorLocationStateTreeTaskInstanceData::OutVector");
static_assert(offsetof(FFortGetActorLocationStateTreeTaskInstanceData, OutRefVector) == 32, "Offset mismatch for FFortGetActorLocationStateTreeTaskInstanceData::OutRefVector");

// /Script/FortniteAIServer.FortHoistDBNOActorStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortHoistDBNOActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortHoistDBNOActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortHoistDBNOActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortHoistDBNOActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortHoistDBNOActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortHoistDBNOActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortHoistDBNOActorStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortHoistDBNOActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortHoistDBNOActorStateTreeTaskInstanceData
{
public:
    void* Hoister; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Hoistee; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortHoistDBNOActorStateTreeTaskInstanceData, Hoister) == 0, "Offset mismatch for FFortHoistDBNOActorStateTreeTaskInstanceData::Hoister");
static_assert(offsetof(FFortHoistDBNOActorStateTreeTaskInstanceData, Hoistee) == 8, "Offset mismatch for FFortHoistDBNOActorStateTreeTaskInstanceData::Hoistee");

// /Script/FortniteAIServer.FortKillActorStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortKillActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortKillActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortKillActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortKillActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortKillActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortKillActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortKillActorStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortKillActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortKillActorStateTreeTaskInstanceData
{
public:
    void* Killer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Actor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortKillActorStateTreeTaskInstanceData, Killer) == 0, "Offset mismatch for FFortKillActorStateTreeTaskInstanceData::Killer");
static_assert(offsetof(FFortKillActorStateTreeTaskInstanceData, Actor) == 8, "Offset mismatch for FFortKillActorStateTreeTaskInstanceData::Actor");

// /Script/FortniteAIServer.FortPointOnCurveRange
// Kind: ScriptStruct; super: none
struct FFortPointOnCurveRange
{
public:
    float MinPercentage; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxPercentage; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortPointOnCurveRange, MinPercentage) == 0, "Offset mismatch for FFortPointOnCurveRange::MinPercentage");
static_assert(offsetof(FFortPointOnCurveRange, MaxPercentage) == 4, "Offset mismatch for FFortPointOnCurveRange::MaxPercentage");

// /Script/FortniteAIServer.FortPointsOnCurve
// Kind: ScriptStruct; super: none
struct FFortPointsOnCurve
{
public:
    std::uint8_t Curve[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RangesForPointsOnCurve; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortPointsOnCurve, Curve) == 0, "Offset mismatch for FFortPointsOnCurve::Curve");
static_assert(offsetof(FFortPointsOnCurve, RangesForPointsOnCurve) == 32, "Offset mismatch for FFortPointsOnCurve::RangesForPointsOnCurve");

// /Script/FortniteAIServer.FortQueryGenerator_PerceivedActors_Settings
// Kind: ScriptStruct; super: none
struct FFortQueryGenerator_PerceivedActors_Settings
{
public:
    std::uint8_t bIgnoreDBNOPawns; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreSleepingAIs; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    std::uint8_t MaxTimeSincePerceived[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortQueryGenerator_PerceivedActors_Settings, bIgnoreDBNOPawns) == 0, "Offset mismatch for FFortQueryGenerator_PerceivedActors_Settings::bIgnoreDBNOPawns");
static_assert(offsetof(FFortQueryGenerator_PerceivedActors_Settings, bIgnoreSleepingAIs) == 1, "Offset mismatch for FFortQueryGenerator_PerceivedActors_Settings::bIgnoreSleepingAIs");
static_assert(offsetof(FFortQueryGenerator_PerceivedActors_Settings, MaxTimeSincePerceived) == 8, "Offset mismatch for FFortQueryGenerator_PerceivedActors_Settings::MaxTimeSincePerceived");

// /Script/FortniteAIServer.FortReviveDBNOActorStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortReviveDBNOActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortReviveDBNOActorStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortReviveDBNOActorStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortReviveDBNOActorStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortReviveDBNOActorStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortReviveDBNOActorStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortReviveDBNOActorStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortReviveDBNOActorStateTreeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortReviveDBNOActorStateTreeTaskInstanceData
{
public:
    void* Reviver; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* DownedPlayer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortReviveDBNOActorStateTreeTaskInstanceData, Reviver) == 0, "Offset mismatch for FFortReviveDBNOActorStateTreeTaskInstanceData::Reviver");
static_assert(offsetof(FFortReviveDBNOActorStateTreeTaskInstanceData, DownedPlayer) == 8, "Offset mismatch for FFortReviveDBNOActorStateTreeTaskInstanceData::DownedPlayer");

// /Script/FortniteAIServer.FortStateTreeBotCrouchTask
// Kind: ScriptStruct; super: StateTreeAIActionTaskBase
struct FFortStateTreeBotCrouchTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotCrouchTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotCrouchTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotCrouchTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotCrouchTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotCrouchTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotCrouchTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotCrouchTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotCrouchTaskInstanceData
{
public:
    void* BotController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldCrouch; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeBotCrouchTaskInstanceData, BotController) == 0, "Offset mismatch for FFortStateTreeBotCrouchTaskInstanceData::BotController");
static_assert(offsetof(FFortStateTreeBotCrouchTaskInstanceData, bShouldCrouch) == 8, "Offset mismatch for FFortStateTreeBotCrouchTaskInstanceData::bShouldCrouch");

// /Script/FortniteAIServer.FortStateTreeBotEquipItemTask
// Kind: ScriptStruct; super: StateTreeAIActionTaskBase
struct FFortStateTreeBotEquipItemTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotEquipItemTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotEquipItemTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotEquipItemTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotEquipItemTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotEquipItemTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotEquipItemTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotEquipItemTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotEquipItemTaskInstanceData
{
public:
    void* Controller; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ItemToEquip; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bValidateAbility; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeBotEquipItemTaskInstanceData, Controller) == 0, "Offset mismatch for FFortStateTreeBotEquipItemTaskInstanceData::Controller");
static_assert(offsetof(FFortStateTreeBotEquipItemTaskInstanceData, ItemToEquip) == 8, "Offset mismatch for FFortStateTreeBotEquipItemTaskInstanceData::ItemToEquip");
static_assert(offsetof(FFortStateTreeBotEquipItemTaskInstanceData, bValidateAbility) == 16, "Offset mismatch for FFortStateTreeBotEquipItemTaskInstanceData::bValidateAbility");

// /Script/FortniteAIServer.FortStateTreeBotFireWeaponTask
// Kind: ScriptStruct; super: StateTreeAIActionTaskBase
struct FFortStateTreeBotFireWeaponTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotFireWeaponTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotFireWeaponTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotFireWeaponTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotFireWeaponTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotFireWeaponTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotFireWeaponTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotFireWeaponTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotFireWeaponTaskInstanceData
{
public:
    void* BotController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Behavior; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    TArray<void*> FiringTimes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortStateTreeBotFireWeaponTaskInstanceData, BotController) == 0, "Offset mismatch for FFortStateTreeBotFireWeaponTaskInstanceData::BotController");
static_assert(offsetof(FFortStateTreeBotFireWeaponTaskInstanceData, Behavior) == 8, "Offset mismatch for FFortStateTreeBotFireWeaponTaskInstanceData::Behavior");
static_assert(offsetof(FFortStateTreeBotFireWeaponTaskInstanceData, FiringTimes) == 16, "Offset mismatch for FFortStateTreeBotFireWeaponTaskInstanceData::FiringTimes");

// /Script/FortniteAIServer.FortStateTreeBotGetCurrentWeaponTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeBotGetCurrentWeaponTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotGetCurrentWeaponTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotGetCurrentWeaponTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotGetCurrentWeaponTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotGetCurrentWeaponTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotGetCurrentWeaponTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotGetCurrentWeaponTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotGetCurrentWeaponTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotGetCurrentWeaponTaskInstanceData
{
public:
    void* BotController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CurrentWeapon; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeBotGetCurrentWeaponTaskInstanceData, BotController) == 0, "Offset mismatch for FFortStateTreeBotGetCurrentWeaponTaskInstanceData::BotController");
static_assert(offsetof(FFortStateTreeBotGetCurrentWeaponTaskInstanceData, CurrentWeapon) == 8, "Offset mismatch for FFortStateTreeBotGetCurrentWeaponTaskInstanceData::CurrentWeapon");

// /Script/FortniteAIServer.FortStateTreeBotGetFiringPatternTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeBotGetFiringPatternTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotGetFiringPatternTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotGetFiringPatternTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotGetFiringPatternTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotGetFiringPatternTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotGetFiringPatternTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotGetFiringPatternTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotGetFiringPatternTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotGetFiringPatternTaskInstanceData
{
public:
    void* BotController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CurrentWeapon; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FiringTimes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* CacheRangeAttackDigestedSkillSet; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* LastUsedWeapon; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeBotGetFiringPatternTaskInstanceData, BotController) == 0, "Offset mismatch for FFortStateTreeBotGetFiringPatternTaskInstanceData::BotController");
static_assert(offsetof(FFortStateTreeBotGetFiringPatternTaskInstanceData, CurrentWeapon) == 8, "Offset mismatch for FFortStateTreeBotGetFiringPatternTaskInstanceData::CurrentWeapon");
static_assert(offsetof(FFortStateTreeBotGetFiringPatternTaskInstanceData, FiringTimes) == 16, "Offset mismatch for FFortStateTreeBotGetFiringPatternTaskInstanceData::FiringTimes");
static_assert(offsetof(FFortStateTreeBotGetFiringPatternTaskInstanceData, CacheRangeAttackDigestedSkillSet) == 32, "Offset mismatch for FFortStateTreeBotGetFiringPatternTaskInstanceData::CacheRangeAttackDigestedSkillSet");
static_assert(offsetof(FFortStateTreeBotGetFiringPatternTaskInstanceData, LastUsedWeapon) == 40, "Offset mismatch for FFortStateTreeBotGetFiringPatternTaskInstanceData::LastUsedWeapon");

// /Script/FortniteAIServer.FortStateTreeBotGetMostEffectiveWeaponScoreTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeBotGetMostEffectiveWeaponScoreTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotGetMostEffectiveWeaponScoreTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotGetMostEffectiveWeaponScoreTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotGetMostEffectiveWeaponScoreTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotGetMostEffectiveWeaponScoreTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotGetMostEffectiveWeaponScoreTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotGetMostEffectiveWeaponScoreTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData
{
public:
    void* BotController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float Effectiveness; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData, BotController) == 0, "Offset mismatch for FFortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData::BotController");
static_assert(offsetof(FFortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData, Target) == 8, "Offset mismatch for FFortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData::Target");
static_assert(offsetof(FFortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData, Effectiveness) == 16, "Offset mismatch for FFortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData::Effectiveness");

// /Script/FortniteAIServer.FortStateTreeBotGetWeaponItemEffectivenessTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeBotGetWeaponItemEffectivenessTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotGetWeaponItemEffectivenessTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotGetWeaponItemEffectivenessTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemEffectivenessTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotGetWeaponItemEffectivenessTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemEffectivenessTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotGetWeaponItemEffectivenessTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData
{
public:
    void* BotController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Item; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float Effectiveness; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData, BotController) == 0, "Offset mismatch for FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData::BotController");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData, Target) == 8, "Offset mismatch for FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData::Target");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData, Item) == 16, "Offset mismatch for FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData::Item");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData, Effectiveness) == 24, "Offset mismatch for FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData::Effectiveness");

// /Script/FortniteAIServer.FortStateTreeBotGetWeaponItemTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeBotGetWeaponItemTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotGetWeaponItemTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotGetWeaponItemTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotGetWeaponItemTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotGetWeaponItemTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotGetWeaponItemTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotGetWeaponItemTaskInstanceData
{
public:
    void* BotController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Weapon; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Item; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeBotGetWeaponItemTaskInstanceData, BotController) == 0, "Offset mismatch for FFortStateTreeBotGetWeaponItemTaskInstanceData::BotController");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemTaskInstanceData, Weapon) == 8, "Offset mismatch for FFortStateTreeBotGetWeaponItemTaskInstanceData::Weapon");
static_assert(offsetof(FFortStateTreeBotGetWeaponItemTaskInstanceData, Item) == 16, "Offset mismatch for FFortStateTreeBotGetWeaponItemTaskInstanceData::Item");

// /Script/FortniteAIServer.FortStateTreeBotSetSupportHolsteredWeapon
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeBotSetSupportHolsteredWeapon
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotSetSupportHolsteredWeapon, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotSetSupportHolsteredWeapon::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotSetSupportHolsteredWeapon, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotSetSupportHolsteredWeapon::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotSetSupportHolsteredWeapon, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotSetSupportHolsteredWeapon::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotSetSupportHolsteredWeaponInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotSetSupportHolsteredWeaponInstanceData
{
public:
    void* Controller; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSupportHolstering; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeBotSetSupportHolsteredWeaponInstanceData, Controller) == 0, "Offset mismatch for FFortStateTreeBotSetSupportHolsteredWeaponInstanceData::Controller");
static_assert(offsetof(FFortStateTreeBotSetSupportHolsteredWeaponInstanceData, bSupportHolstering) == 8, "Offset mismatch for FFortStateTreeBotSetSupportHolsteredWeaponInstanceData::bSupportHolstering");

// /Script/FortniteAIServer.FortStateTreeBotSprintTask
// Kind: ScriptStruct; super: StateTreeAIActionTaskBase
struct FFortStateTreeBotSprintTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeBotSprintTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeBotSprintTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeBotSprintTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeBotSprintTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeBotSprintTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeBotSprintTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeBotSprintTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeBotSprintTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldSprint; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeBotSprintTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeBotSprintTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeBotSprintTaskInstanceData, bShouldSprint) == 8, "Offset mismatch for FFortStateTreeBotSprintTaskInstanceData::bShouldSprint");

// /Script/FortniteAIServer.FortStateTreeExecuteAbilityTask
// Kind: ScriptStruct; super: StateTreeAIActionTaskBase
struct FFortStateTreeExecuteAbilityTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeExecuteAbilityTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeExecuteAbilityTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeExecuteAbilityTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeExecuteAbilityTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeExecuteAbilityTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeExecuteAbilityTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeExecuteAbilityTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeExecuteAbilityTaskInstanceData
{
public:
    void* Controller; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AbilityTag[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    void* ExecuteAbilityTask; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> TaskOwner; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FFortStateTreeExecuteAbilityTaskInstanceData, Controller) == 0, "Offset mismatch for FFortStateTreeExecuteAbilityTaskInstanceData::Controller");
static_assert(offsetof(FFortStateTreeExecuteAbilityTaskInstanceData, AbilityTag) == 8, "Offset mismatch for FFortStateTreeExecuteAbilityTaskInstanceData::AbilityTag");
static_assert(offsetof(FFortStateTreeExecuteAbilityTaskInstanceData, ExecuteAbilityTask) == 40, "Offset mismatch for FFortStateTreeExecuteAbilityTaskInstanceData::ExecuteAbilityTask");
static_assert(offsetof(FFortStateTreeExecuteAbilityTaskInstanceData, TaskOwner) == 48, "Offset mismatch for FFortStateTreeExecuteAbilityTaskInstanceData::TaskOwner");

// /Script/FortniteAIServer.FortStateTreeGameplayAbilityCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FFortStateTreeGameplayAbilityCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeGameplayAbilityCondition, bInvert) == 40, "Offset mismatch for FFortStateTreeGameplayAbilityCondition::bInvert");

// /Script/FortniteAIServer.FortStateTreeGetAIControllerTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetAIControllerTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetAIControllerTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetAIControllerTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetAIControllerTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetAIControllerTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetAIControllerTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetAIControllerTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetAIControllerTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetAIControllerTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* AIController; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeGetAIControllerTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeGetAIControllerTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeGetAIControllerTaskInstanceData, AIController) == 8, "Offset mismatch for FFortStateTreeGetAIControllerTaskInstanceData::AIController");

// /Script/FortniteAIServer.FortStateTreeGetBotControllerTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetBotControllerTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetBotControllerTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetBotControllerTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetBotControllerTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetBotControllerTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetBotControllerTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetBotControllerTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetBotControllerTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetBotControllerTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* BotController; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeGetBotControllerTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeGetBotControllerTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeGetBotControllerTaskInstanceData, BotController) == 8, "Offset mismatch for FFortStateTreeGetBotControllerTaskInstanceData::BotController");

// /Script/FortniteAIServer.FortStateTreeGetControllerTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetControllerTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetControllerTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetControllerTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetControllerTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetControllerTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetControllerTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetControllerTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetControllerTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetControllerTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Controller; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeGetControllerTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeGetControllerTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeGetControllerTaskInstanceData, Controller) == 8, "Offset mismatch for FFortStateTreeGetControllerTaskInstanceData::Controller");

// /Script/FortniteAIServer.FortStateTreeGetDistanceParameterInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetDistanceParameterInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AbilityTag[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t DistancePropertyTag[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    float OutDistance; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortStateTreeGetDistanceParameterInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeGetDistanceParameterInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeGetDistanceParameterInstanceData, AbilityTag) == 8, "Offset mismatch for FFortStateTreeGetDistanceParameterInstanceData::AbilityTag");
static_assert(offsetof(FFortStateTreeGetDistanceParameterInstanceData, DistancePropertyTag) == 40, "Offset mismatch for FFortStateTreeGetDistanceParameterInstanceData::DistancePropertyTag");
static_assert(offsetof(FFortStateTreeGetDistanceParameterInstanceData, OutDistance) == 72, "Offset mismatch for FFortStateTreeGetDistanceParameterInstanceData::OutDistance");

// /Script/FortniteAIServer.FortStateTreeGetDistanceParameterStateTreeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortStateTreeGetDistanceParameterStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetDistanceParameterStateTreeTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetDistanceParameterStateTreeTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetDistanceParameterStateTreeTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetDistanceParameterStateTreeTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetDistanceParameterStateTreeTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetDistanceParameterStateTreeTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetHealthTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortStateTreeGetHealthTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetHealthTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetHealthTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetHealthTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetHealthTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetHealthTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetHealthTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetHealthTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetHealthTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float CurrentHealth; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxHealth; // 0x000C (Size: 0x4, Type: FloatProperty)
    float HealthPercentage; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortStateTreeGetHealthTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeGetHealthTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeGetHealthTaskInstanceData, CurrentHealth) == 8, "Offset mismatch for FFortStateTreeGetHealthTaskInstanceData::CurrentHealth");
static_assert(offsetof(FFortStateTreeGetHealthTaskInstanceData, MaxHealth) == 12, "Offset mismatch for FFortStateTreeGetHealthTaskInstanceData::MaxHealth");
static_assert(offsetof(FFortStateTreeGetHealthTaskInstanceData, HealthPercentage) == 16, "Offset mismatch for FFortStateTreeGetHealthTaskInstanceData::HealthPercentage");

// /Script/FortniteAIServer.FortStateTreeGetItemFromInventoryTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetItemFromInventoryTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetItemFromInventoryTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetItemFromInventoryTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetItemFromInventoryTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetItemFromInventoryTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetItemFromInventoryTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetItemFromInventoryTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetItemFromInventoryTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetItemFromInventoryTaskInstanceData
{
public:
    void* Controller; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemVariant[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    void* Item; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeGetItemFromInventoryTaskInstanceData, Controller) == 0, "Offset mismatch for FFortStateTreeGetItemFromInventoryTaskInstanceData::Controller");
static_assert(offsetof(FFortStateTreeGetItemFromInventoryTaskInstanceData, ItemVariant) == 8, "Offset mismatch for FFortStateTreeGetItemFromInventoryTaskInstanceData::ItemVariant");
static_assert(offsetof(FFortStateTreeGetItemFromInventoryTaskInstanceData, Item) == 40, "Offset mismatch for FFortStateTreeGetItemFromInventoryTaskInstanceData::Item");

// /Script/FortniteAIServer.FortStateTreeGetMoveDestinationTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetMoveDestinationTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetMoveDestinationTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetMoveDestinationTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetMoveDestinationTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetMoveDestinationTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetMoveDestinationTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetMoveDestinationTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetMoveDestinationTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetMoveDestinationTaskInstanceData
{
public:
    void* AIController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MoveDestination[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortStateTreeGetMoveDestinationTaskInstanceData, AIController) == 0, "Offset mismatch for FFortStateTreeGetMoveDestinationTaskInstanceData::AIController");
static_assert(offsetof(FFortStateTreeGetMoveDestinationTaskInstanceData, MoveDestination) == 8, "Offset mismatch for FFortStateTreeGetMoveDestinationTaskInstanceData::MoveDestination");

// /Script/FortniteAIServer.FortStateTreeGetMoveStatusTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetMoveStatusTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetMoveStatusTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetMoveStatusTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetMoveStatusTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetMoveStatusTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetMoveStatusTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetMoveStatusTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetMoveStatusTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetMoveStatusTaskInstanceData
{
public:
    void* AIController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MoveStatus; // 0x0008 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FFortStateTreeGetMoveStatusTaskInstanceData, AIController) == 0, "Offset mismatch for FFortStateTreeGetMoveStatusTaskInstanceData::AIController");
static_assert(offsetof(FFortStateTreeGetMoveStatusTaskInstanceData, MoveStatus) == 8, "Offset mismatch for FFortStateTreeGetMoveStatusTaskInstanceData::MoveStatus");

// /Script/FortniteAIServer.FortStateTreeGetReservedTokenPositionTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetReservedTokenPositionTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetReservedTokenPositionTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetReservedTokenPositionTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetReservedTokenPositionTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetReservedTokenPositionTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetReservedTokenPositionTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetReservedTokenPositionTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetReservedTokenPositionTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetReservedTokenPositionTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReservedLocation[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortStateTreeGetReservedTokenPositionTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeGetReservedTokenPositionTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeGetReservedTokenPositionTaskInstanceData, Target) == 8, "Offset mismatch for FFortStateTreeGetReservedTokenPositionTaskInstanceData::Target");
static_assert(offsetof(FFortStateTreeGetReservedTokenPositionTaskInstanceData, ReservedLocation) == 16, "Offset mismatch for FFortStateTreeGetReservedTokenPositionTaskInstanceData::ReservedLocation");

// /Script/FortniteAIServer.FortStateTreeGetShieldTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortStateTreeGetShieldTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetShieldTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetShieldTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetShieldTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetShieldTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetShieldTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetShieldTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetShieldTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetShieldTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float CurrentShield; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxShield; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ShieldPercentage; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortStateTreeGetShieldTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeGetShieldTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeGetShieldTaskInstanceData, CurrentShield) == 8, "Offset mismatch for FFortStateTreeGetShieldTaskInstanceData::CurrentShield");
static_assert(offsetof(FFortStateTreeGetShieldTaskInstanceData, MaxShield) == 12, "Offset mismatch for FFortStateTreeGetShieldTaskInstanceData::MaxShield");
static_assert(offsetof(FFortStateTreeGetShieldTaskInstanceData, ShieldPercentage) == 16, "Offset mismatch for FFortStateTreeGetShieldTaskInstanceData::ShieldPercentage");

// /Script/FortniteAIServer.FortStateTreeGetSquadMembersTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetSquadMembersTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetSquadMembersTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetSquadMembersTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetSquadMembersTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetSquadMembersTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetSquadMembersTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetSquadMembersTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetTargetActorTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeGetTargetActorTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetTargetActorTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetTargetActorTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetTargetActorTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetTargetActorTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetTargetActorTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetTargetActorTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetTargetActorTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetTargetActorTaskInstanceData
{
public:
    void* TargetActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeGetTargetActorTaskInstanceData, TargetActor) == 0, "Offset mismatch for FFortStateTreeGetTargetActorTaskInstanceData::TargetActor");

// /Script/FortniteAIServer.FortStateTreeGetWeaponMagazineAmmoTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortStateTreeGetWeaponMagazineAmmoTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetWeaponMagazineAmmoTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetWeaponMagazineAmmoTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetWeaponMagazineAmmoTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetWeaponMagazineAmmoTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetWeaponMagazineAmmoTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetWeaponMagazineAmmoTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetWeaponMagazineAmmoTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetWeaponMagazineAmmoTaskInstanceData
{
public:
    void* Weapon; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t AmmoInMagazine; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortStateTreeGetWeaponMagazineAmmoTaskInstanceData, Weapon) == 0, "Offset mismatch for FFortStateTreeGetWeaponMagazineAmmoTaskInstanceData::Weapon");
static_assert(offsetof(FFortStateTreeGetWeaponMagazineAmmoTaskInstanceData, AmmoInMagazine) == 8, "Offset mismatch for FFortStateTreeGetWeaponMagazineAmmoTaskInstanceData::AmmoInMagazine");

// /Script/FortniteAIServer.FortStateTreeGetWeaponRemainingAmmoTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortStateTreeGetWeaponRemainingAmmoTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeGetWeaponRemainingAmmoTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeGetWeaponRemainingAmmoTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeGetWeaponRemainingAmmoTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeGetWeaponRemainingAmmoTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeGetWeaponRemainingAmmoTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeGetWeaponRemainingAmmoTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeGetWeaponRemainingAmmoTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeGetWeaponRemainingAmmoTaskInstanceData
{
public:
    void* Weapon; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t RemainingAmmo; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortStateTreeGetWeaponRemainingAmmoTaskInstanceData, Weapon) == 0, "Offset mismatch for FFortStateTreeGetWeaponRemainingAmmoTaskInstanceData::Weapon");
static_assert(offsetof(FFortStateTreeGetWeaponRemainingAmmoTaskInstanceData, RemainingAmmo) == 8, "Offset mismatch for FFortStateTreeGetWeaponRemainingAmmoTaskInstanceData::RemainingAmmo");

// /Script/FortniteAIServer.FortStateTreeHasFreeTokenCondition
// Kind: ScriptStruct; super: StateTreeAIConditionBase
struct FFortStateTreeHasFreeTokenCondition
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Operand; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::int8_t DeltaIndent; // 0x0021 (Size: 0x1, Type: Int8Property)
    std::uint8_t EvaluationMode; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeHasFreeTokenCondition, Operand) == 32, "Offset mismatch for FFortStateTreeHasFreeTokenCondition::Operand");
static_assert(offsetof(FFortStateTreeHasFreeTokenCondition, DeltaIndent) == 33, "Offset mismatch for FFortStateTreeHasFreeTokenCondition::DeltaIndent");
static_assert(offsetof(FFortStateTreeHasFreeTokenCondition, EvaluationMode) == 34, "Offset mismatch for FFortStateTreeHasFreeTokenCondition::EvaluationMode");

// /Script/FortniteAIServer.FortStateTreeHasFreeTokenConditionInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeHasFreeTokenConditionInstanceData
{
public:
    void* ReserverPawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TokenTagQuery[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortStateTreeHasFreeTokenConditionInstanceData, ReserverPawn) == 0, "Offset mismatch for FFortStateTreeHasFreeTokenConditionInstanceData::ReserverPawn");
static_assert(offsetof(FFortStateTreeHasFreeTokenConditionInstanceData, Target) == 8, "Offset mismatch for FFortStateTreeHasFreeTokenConditionInstanceData::Target");
static_assert(offsetof(FFortStateTreeHasFreeTokenConditionInstanceData, TokenTagQuery) == 16, "Offset mismatch for FFortStateTreeHasFreeTokenConditionInstanceData::TokenTagQuery");

// /Script/FortniteAIServer.FortStateTreeIsInsideLeashCondition
// Kind: ScriptStruct; super: StateTreeAIConditionBase
struct FFortStateTreeIsInsideLeashCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeIsInsideLeashCondition, bInvert) == 40, "Offset mismatch for FFortStateTreeIsInsideLeashCondition::bInvert");

// /Script/FortniteAIServer.FortStateTreeIsInsideLeashConditionInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeIsInsideLeashConditionInstanceData
{
public:
    void* AIController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseInnerRadius; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeIsInsideLeashConditionInstanceData, AIController) == 0, "Offset mismatch for FFortStateTreeIsInsideLeashConditionInstanceData::AIController");
static_assert(offsetof(FFortStateTreeIsInsideLeashConditionInstanceData, Location) == 8, "Offset mismatch for FFortStateTreeIsInsideLeashConditionInstanceData::Location");
static_assert(offsetof(FFortStateTreeIsInsideLeashConditionInstanceData, bUseInnerRadius) == 32, "Offset mismatch for FFortStateTreeIsInsideLeashConditionInstanceData::bUseInnerRadius");

// /Script/FortniteAIServer.FortStateTreeReloadWeaponTask
// Kind: ScriptStruct; super: StateTreeAIActionTaskBase
struct FFortStateTreeReloadWeaponTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeReloadWeaponTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeReloadWeaponTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeReloadWeaponTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeReloadWeaponTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeReloadWeaponTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeReloadWeaponTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeReloadWeaponTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeReloadWeaponTaskInstanceData
{
public:
    void* Weapon; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeReloadWeaponTaskInstanceData, Weapon) == 0, "Offset mismatch for FFortStateTreeReloadWeaponTaskInstanceData::Weapon");

// /Script/FortniteAIServer.FortStateTreeRequestProviderPositionGeneration
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeRequestProviderPositionGeneration
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeRequestProviderPositionGeneration, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeRequestProviderPositionGeneration::bTaskEnabled");
static_assert(offsetof(FFortStateTreeRequestProviderPositionGeneration, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeRequestProviderPositionGeneration::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeRequestProviderPositionGeneration, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeRequestProviderPositionGeneration::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeRequestProviderPositionGenerationInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeRequestProviderPositionGenerationInstanceData
{
public:
    void* Target; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TokenPositionTagQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortStateTreeRequestProviderPositionGenerationInstanceData, Target) == 0, "Offset mismatch for FFortStateTreeRequestProviderPositionGenerationInstanceData::Target");
static_assert(offsetof(FFortStateTreeRequestProviderPositionGenerationInstanceData, TokenPositionTagQuery) == 8, "Offset mismatch for FFortStateTreeRequestProviderPositionGenerationInstanceData::TokenPositionTagQuery");

// /Script/FortniteAIServer.FortStateTreeReserveTokenPositionTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeReserveTokenPositionTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeReserveTokenPositionTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeReserveTokenPositionTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeReserveTokenPositionTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeReserveTokenPositionTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeReserveTokenPositionTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeReserveTokenPositionTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeReserveTokenPositionTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeReserveTokenPositionTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Position[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t TokenTagQuery[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    float HoldReservationAtExitDuration; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float AcceptableDistanceForPositionReservation; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowAddingNewPositionToProvider; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeReserveTokenPositionTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeReserveTokenPositionTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeReserveTokenPositionTaskInstanceData, Target) == 8, "Offset mismatch for FFortStateTreeReserveTokenPositionTaskInstanceData::Target");
static_assert(offsetof(FFortStateTreeReserveTokenPositionTaskInstanceData, Position) == 16, "Offset mismatch for FFortStateTreeReserveTokenPositionTaskInstanceData::Position");
static_assert(offsetof(FFortStateTreeReserveTokenPositionTaskInstanceData, TokenTagQuery) == 40, "Offset mismatch for FFortStateTreeReserveTokenPositionTaskInstanceData::TokenTagQuery");
static_assert(offsetof(FFortStateTreeReserveTokenPositionTaskInstanceData, HoldReservationAtExitDuration) == 112, "Offset mismatch for FFortStateTreeReserveTokenPositionTaskInstanceData::HoldReservationAtExitDuration");
static_assert(offsetof(FFortStateTreeReserveTokenPositionTaskInstanceData, AcceptableDistanceForPositionReservation) == 116, "Offset mismatch for FFortStateTreeReserveTokenPositionTaskInstanceData::AcceptableDistanceForPositionReservation");
static_assert(offsetof(FFortStateTreeReserveTokenPositionTaskInstanceData, bAllowAddingNewPositionToProvider) == 120, "Offset mismatch for FFortStateTreeReserveTokenPositionTaskInstanceData::bAllowAddingNewPositionToProvider");

// /Script/FortniteAIServer.FortStateTreeReserveTokenTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeReserveTokenTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeReserveTokenTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeReserveTokenTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeReserveTokenTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeReserveTokenTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeReserveTokenTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeReserveTokenTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeReserveTokenTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeReserveTokenTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TokenTagQuery[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint8_t GrantedToken[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortStateTreeReserveTokenTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeReserveTokenTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeReserveTokenTaskInstanceData, Target) == 8, "Offset mismatch for FFortStateTreeReserveTokenTaskInstanceData::Target");
static_assert(offsetof(FFortStateTreeReserveTokenTaskInstanceData, TokenTagQuery) == 16, "Offset mismatch for FFortStateTreeReserveTokenTaskInstanceData::TokenTagQuery");
static_assert(offsetof(FFortStateTreeReserveTokenTaskInstanceData, GrantedToken) == 88, "Offset mismatch for FFortStateTreeReserveTokenTaskInstanceData::GrantedToken");

// /Script/FortniteAIServer.FortStateTreeSetFrustrationDiscouragementInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeSetFrustrationDiscouragementInstanceData
{
public:
    void* AIController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float DiscouragementDuration; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortStateTreeSetFrustrationDiscouragementInstanceData, AIController) == 0, "Offset mismatch for FFortStateTreeSetFrustrationDiscouragementInstanceData::AIController");
static_assert(offsetof(FFortStateTreeSetFrustrationDiscouragementInstanceData, TargetActor) == 8, "Offset mismatch for FFortStateTreeSetFrustrationDiscouragementInstanceData::TargetActor");
static_assert(offsetof(FFortStateTreeSetFrustrationDiscouragementInstanceData, DiscouragementDuration) == 16, "Offset mismatch for FFortStateTreeSetFrustrationDiscouragementInstanceData::DiscouragementDuration");

// /Script/FortniteAIServer.FortStateTreeSetFrustrationDiscouragementTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeSetFrustrationDiscouragementTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeSetFrustrationDiscouragementTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeSetFrustrationDiscouragementTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeSetFrustrationDiscouragementTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeSetFrustrationDiscouragementTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeSetFrustrationDiscouragementTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeSetFrustrationDiscouragementTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeSetInTacticalActionTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeSetInTacticalActionTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeSetInTacticalActionTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeSetInTacticalActionTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeSetInTacticalActionTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeSetInTacticalActionTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeSetInTacticalActionTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeSetInTacticalActionTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeSetInTacticalActionTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeSetInTacticalActionTaskInstanceData
{
public:
    void* Controller; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldSetInTacticalAction; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t TacticalActionIdentifierTag[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortStateTreeSetInTacticalActionTaskInstanceData, Controller) == 0, "Offset mismatch for FFortStateTreeSetInTacticalActionTaskInstanceData::Controller");
static_assert(offsetof(FFortStateTreeSetInTacticalActionTaskInstanceData, bShouldSetInTacticalAction) == 8, "Offset mismatch for FFortStateTreeSetInTacticalActionTaskInstanceData::bShouldSetInTacticalAction");
static_assert(offsetof(FFortStateTreeSetInTacticalActionTaskInstanceData, TacticalActionIdentifierTag) == 12, "Offset mismatch for FFortStateTreeSetInTacticalActionTaskInstanceData::TacticalActionIdentifierTag");

// /Script/FortniteAIServer.FortStateTreeSetWeaponTargetingTask
// Kind: ScriptStruct; super: StateTreeAIActionTaskBase
struct FFortStateTreeSetWeaponTargetingTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeSetWeaponTargetingTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeSetWeaponTargetingTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeSetWeaponTargetingTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeSetWeaponTargetingTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeSetWeaponTargetingTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeSetWeaponTargetingTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeSetWeaponTargetingTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeSetWeaponTargetingTaskInstanceData
{
public:
    void* Weapon; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldActivateTargeting; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortStateTreeSetWeaponTargetingTaskInstanceData, Weapon) == 0, "Offset mismatch for FFortStateTreeSetWeaponTargetingTaskInstanceData::Weapon");
static_assert(offsetof(FFortStateTreeSetWeaponTargetingTaskInstanceData, bShouldActivateTargeting) == 8, "Offset mismatch for FFortStateTreeSetWeaponTargetingTaskInstanceData::bShouldActivateTargeting");

// /Script/FortniteAIServer.FortStateTreeSquadMembershipTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeSquadMembershipTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIncludeSelf; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    TArray<void*> SquadMemberPlayerStates; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SquadMemberPlayerControllers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    void* PawnPlayerStateAthena; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeSquadMembershipTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeSquadMembershipTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeSquadMembershipTaskInstanceData, bIncludeSelf) == 8, "Offset mismatch for FFortStateTreeSquadMembershipTaskInstanceData::bIncludeSelf");
static_assert(offsetof(FFortStateTreeSquadMembershipTaskInstanceData, SquadMemberPlayerStates) == 16, "Offset mismatch for FFortStateTreeSquadMembershipTaskInstanceData::SquadMemberPlayerStates");
static_assert(offsetof(FFortStateTreeSquadMembershipTaskInstanceData, SquadMemberPlayerControllers) == 32, "Offset mismatch for FFortStateTreeSquadMembershipTaskInstanceData::SquadMemberPlayerControllers");
static_assert(offsetof(FFortStateTreeSquadMembershipTaskInstanceData, PawnPlayerStateAthena) == 48, "Offset mismatch for FFortStateTreeSquadMembershipTaskInstanceData::PawnPlayerStateAthena");

// /Script/FortniteAIServer.FortStateTreeSquadMembershipWatcherTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeSquadMembershipWatcherTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeSquadMembershipWatcherTaskInstanceData
// Kind: ScriptStruct; super: FortStateTreeSquadMembershipTaskInstanceData
struct FFortStateTreeSquadMembershipWatcherTaskInstanceData
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::int8_t FinishWhenSquadSize; // 0x0040 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint8_t OnChangedSquad[0x10]; // 0x0044 (Size: 0x10, Type: StructProperty)
    std::uint8_t OnSquadMemberAdded[0x10]; // 0x0054 (Size: 0x10, Type: StructProperty)
    std::uint8_t OnSquadMemberRemoved[0x10]; // 0x0064 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> LastAddedSquadMemberController; // 0x0074 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LastRemovedSquadMemberController; // 0x007C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTaskInstanceData, FinishWhenSquadSize) == 64, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTaskInstanceData::FinishWhenSquadSize");
static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTaskInstanceData, OnChangedSquad) == 68, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTaskInstanceData::OnChangedSquad");
static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTaskInstanceData, OnSquadMemberAdded) == 84, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTaskInstanceData::OnSquadMemberAdded");
static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTaskInstanceData, OnSquadMemberRemoved) == 100, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTaskInstanceData::OnSquadMemberRemoved");
static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTaskInstanceData, LastAddedSquadMemberController) == 116, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTaskInstanceData::LastAddedSquadMemberController");
static_assert(offsetof(FFortStateTreeSquadMembershipWatcherTaskInstanceData, LastRemovedSquadMemberController) == 124, "Offset mismatch for FFortStateTreeSquadMembershipWatcherTaskInstanceData::LastRemovedSquadMemberController");

// /Script/FortniteAIServer.FortStateTreeTeamMembersWatcherTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeTeamMembersWatcherTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeTeamMembersWatcherTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeTeamMembersWatcherTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeTeamMembersWatcherTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeTeamMembersWatcherTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeTeamMembersWatcherTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeTeamMembersWatcherTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeWaitForTokenPositionTask
// Kind: ScriptStruct; super: StateTreeAITaskBase
struct FFortStateTreeWaitForTokenPositionTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeWaitForTokenPositionTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeWaitForTokenPositionTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeWaitForTokenPositionTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeWaitForTokenPositionTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeWaitForTokenPositionTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeWaitForTokenPositionTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeWaitForTokenPositionTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeWaitForTokenPositionTaskInstanceData
{
public:
    void* Target; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TokenTagQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortStateTreeWaitForTokenPositionTaskInstanceData, Target) == 0, "Offset mismatch for FFortStateTreeWaitForTokenPositionTaskInstanceData::Target");
static_assert(offsetof(FFortStateTreeWaitForTokenPositionTaskInstanceData, TokenTagQuery) == 8, "Offset mismatch for FFortStateTreeWaitForTokenPositionTaskInstanceData::TokenTagQuery");

// /Script/FortniteAIServer.FortStateTreeWaitUntilAbilityFinishedTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortStateTreeWaitUntilAbilityFinishedTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeWaitUntilAbilityFinishedTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeWaitUntilAbilityFinishedTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeWaitUntilAbilityFinishedTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeWaitUntilAbilityFinishedTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeWaitUntilAbilityFinishedTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeWaitUntilAbilityFinishedTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeWaitUntilAbilityFinishedTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeWaitUntilAbilityFinishedTaskInstanceData
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Weapon; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ability; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeWaitUntilAbilityFinishedTaskInstanceData, Pawn) == 0, "Offset mismatch for FFortStateTreeWaitUntilAbilityFinishedTaskInstanceData::Pawn");
static_assert(offsetof(FFortStateTreeWaitUntilAbilityFinishedTaskInstanceData, Weapon) == 8, "Offset mismatch for FFortStateTreeWaitUntilAbilityFinishedTaskInstanceData::Weapon");
static_assert(offsetof(FFortStateTreeWaitUntilAbilityFinishedTaskInstanceData, ability) == 16, "Offset mismatch for FFortStateTreeWaitUntilAbilityFinishedTaskInstanceData::ability");

// /Script/FortniteAIServer.FortStateTreeWaitUntilMantisBranchAvailableTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FFortStateTreeWaitUntilMantisBranchAvailableTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortStateTreeWaitUntilMantisBranchAvailableTask, bTaskEnabled) == 32, "Offset mismatch for FFortStateTreeWaitUntilMantisBranchAvailableTask::bTaskEnabled");
static_assert(offsetof(FFortStateTreeWaitUntilMantisBranchAvailableTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FFortStateTreeWaitUntilMantisBranchAvailableTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FFortStateTreeWaitUntilMantisBranchAvailableTask, TransitionHandlingPriority) == 34, "Offset mismatch for FFortStateTreeWaitUntilMantisBranchAvailableTask::TransitionHandlingPriority");

// /Script/FortniteAIServer.FortStateTreeWaitUntilMantisBranchAvailableTaskInstanceData
// Kind: ScriptStruct; super: none
struct FFortStateTreeWaitUntilMantisBranchAvailableTaskInstanceData
{
public:
    void* Weapon; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortStateTreeWaitUntilMantisBranchAvailableTaskInstanceData, Weapon) == 0, "Offset mismatch for FFortStateTreeWaitUntilMantisBranchAvailableTaskInstanceData::Weapon");

// /Script/FortniteAIServer.GameFeatureFortAIEvaluatorEntry
// Kind: ScriptStruct; super: none
struct FGameFeatureFortAIEvaluatorEntry
{
public:
    std::uint8_t TreeAsset[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InjectionTag[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    TSoftClassPtr<void> AIEvaluatorClass; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FGameFeatureFortAIEvaluatorEntry, TreeAsset) == 0, "Offset mismatch for FGameFeatureFortAIEvaluatorEntry::TreeAsset");
static_assert(offsetof(FGameFeatureFortAIEvaluatorEntry, InjectionTag) == 32, "Offset mismatch for FGameFeatureFortAIEvaluatorEntry::InjectionTag");
static_assert(offsetof(FGameFeatureFortAIEvaluatorEntry, AIEvaluatorClass) == 40, "Offset mismatch for FGameFeatureFortAIEvaluatorEntry::AIEvaluatorClass");

// /Script/FortniteAIServer.GameplayAbilityEvaluatorModule
// Kind: ScriptStruct; super: none
struct FGameplayAbilityEvaluatorModule
{
public:
    std::uint8_t GameplayAbilityTag[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t bCheckAbilityCanActivate; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckAbilityCanHitTarget; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0022
    std::uint8_t CanHitTargetActorKeyName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetActorKeyName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUseIdealRotationToCanHitTarget; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    FName CanHitTargetProjectedSourceLocationKeyName; // 0x0030 (Size: 0x8, Type: NameProperty)
    void* CachedAbilitySystemComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayAbilityEvaluatorModule, GameplayAbilityTag) == 0, "Offset mismatch for FGameplayAbilityEvaluatorModule::GameplayAbilityTag");
static_assert(offsetof(FGameplayAbilityEvaluatorModule, bCheckAbilityCanActivate) == 32, "Offset mismatch for FGameplayAbilityEvaluatorModule::bCheckAbilityCanActivate");
static_assert(offsetof(FGameplayAbilityEvaluatorModule, bCheckAbilityCanHitTarget) == 33, "Offset mismatch for FGameplayAbilityEvaluatorModule::bCheckAbilityCanHitTarget");
static_assert(offsetof(FGameplayAbilityEvaluatorModule, CanHitTargetActorKeyName) == 36, "Offset mismatch for FGameplayAbilityEvaluatorModule::CanHitTargetActorKeyName");
static_assert(offsetof(FGameplayAbilityEvaluatorModule, TargetActorKeyName) == 40, "Offset mismatch for FGameplayAbilityEvaluatorModule::TargetActorKeyName");
static_assert(offsetof(FGameplayAbilityEvaluatorModule, bUseIdealRotationToCanHitTarget) == 44, "Offset mismatch for FGameplayAbilityEvaluatorModule::bUseIdealRotationToCanHitTarget");
static_assert(offsetof(FGameplayAbilityEvaluatorModule, CanHitTargetProjectedSourceLocationKeyName) == 48, "Offset mismatch for FGameplayAbilityEvaluatorModule::CanHitTargetProjectedSourceLocationKeyName");
static_assert(offsetof(FGameplayAbilityEvaluatorModule, CachedAbilitySystemComponent) == 56, "Offset mismatch for FGameplayAbilityEvaluatorModule::CachedAbilitySystemComponent");

// /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayContainerTagCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FGameplayTagActorHasMatchingGameplayContainerTagCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TestType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bInvert; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayTagActorHasMatchingGameplayContainerTagCondition, TestType) == 40, "Offset mismatch for FGameplayTagActorHasMatchingGameplayContainerTagCondition::TestType");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayContainerTagCondition, bInvert) == 41, "Offset mismatch for FGameplayTagActorHasMatchingGameplayContainerTagCondition::bInvert");

// /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagCondition
// Kind: ScriptStruct; super: StateTreeConditionCommonBase
struct FGameplayTagActorHasMatchingGameplayTagCondition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInvert; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagCondition, bInvert) == 40, "Offset mismatch for FGameplayTagActorHasMatchingGameplayTagCondition::bInvert");

// /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagContainerInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayTagActorHasMatchingGameplayTagContainerInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TagContainerToCheck[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagContainerInstanceData, Actor) == 0, "Offset mismatch for FGameplayTagActorHasMatchingGameplayTagContainerInstanceData::Actor");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagContainerInstanceData, TagContainerToCheck) == 8, "Offset mismatch for FGameplayTagActorHasMatchingGameplayTagContainerInstanceData::TagContainerToCheck");

// /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagInstanceData
// Kind: ScriptStruct; super: none
struct FGameplayTagActorHasMatchingGameplayTagInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TagToCheck[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagInstanceData, Actor) == 0, "Offset mismatch for FGameplayTagActorHasMatchingGameplayTagInstanceData::Actor");
static_assert(offsetof(FGameplayTagActorHasMatchingGameplayTagInstanceData, TagToCheck) == 8, "Offset mismatch for FGameplayTagActorHasMatchingGameplayTagInstanceData::TagToCheck");

// /Script/FortniteAIServer.GoalDistanceData
// Kind: ScriptStruct; super: none
struct FGoalDistanceData
{
public:
    std::uint8_t bIgnoreScreeningDistance; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ScreeningTestMaxDistance[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    std::uint8_t TestScoreCurve[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CurveDistanceScale[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGoalDistanceData, bIgnoreScreeningDistance) == 0, "Offset mismatch for FGoalDistanceData::bIgnoreScreeningDistance");
static_assert(offsetof(FGoalDistanceData, ScreeningTestMaxDistance) == 8, "Offset mismatch for FGoalDistanceData::ScreeningTestMaxDistance");
static_assert(offsetof(FGoalDistanceData, TestScoreCurve) == 64, "Offset mismatch for FGoalDistanceData::TestScoreCurve");
static_assert(offsetof(FGoalDistanceData, CurveDistanceScale) == 96, "Offset mismatch for FGoalDistanceData::CurveDistanceScale");

// /Script/FortniteAIServer.MimicConverterAbilityData
// Kind: ScriptStruct; super: none
struct FMimicConverterAbilityData
{
public:
    std::uint8_t RequiredConverterAbilityTags[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t AbilitiesToApply[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    TArray<void*> GEsToApply; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMimicConverterAbilityData, RequiredConverterAbilityTags) == 0, "Offset mismatch for FMimicConverterAbilityData::RequiredConverterAbilityTags");
static_assert(offsetof(FMimicConverterAbilityData, AbilitiesToApply) == 72, "Offset mismatch for FMimicConverterAbilityData::AbilitiesToApply");
static_assert(offsetof(FMimicConverterAbilityData, GEsToApply) == 104, "Offset mismatch for FMimicConverterAbilityData::GEsToApply");

// /Script/FortniteAIServer.PFWNPCReactions_PersistentInfo
// Kind: ScriptStruct; super: none
struct FPFWNPCReactions_PersistentInfo
{
public:
    std::uint8_t TriggeredReactions_PersistentInfoData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPFWNPCReactions_PersistentInfo, TriggeredReactions_PersistentInfoData) == 0, "Offset mismatch for FPFWNPCReactions_PersistentInfo::TriggeredReactions_PersistentInfoData");

// /Script/FortniteAIServer.PFWNPCReactions_TriggeredReactions_PersistentInfoData
// Kind: ScriptStruct; super: none
struct FPFWNPCReactions_TriggeredReactions_PersistentInfoData
{
public:
    TArray<void*> TriggeredReactionRowNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPFWNPCReactions_TriggeredReactions_PersistentInfoData, TriggeredReactionRowNames) == 0, "Offset mismatch for FPFWNPCReactions_TriggeredReactions_PersistentInfoData::TriggeredReactionRowNames");

// /Script/FortniteAIServer.PlayActionSequence_ActionRuntime
// Kind: ScriptStruct; super: none
struct FPlayActionSequence_ActionRuntime
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.PositioningEQS
// Kind: ScriptStruct; super: none
struct FPositioningEQS
{
public:
    std::uint8_t ItemTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    void* QueryTemplate; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueryConfig; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowStayingOnSamePosition; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequestNewPosititonOnProviderRecomputed; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0062
    std::uint8_t AllowStayingOnSamePosition[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t TimerForNewPositionOnProviderRecomputed[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPositioningEQS, ItemTagQuery) == 0, "Offset mismatch for FPositioningEQS::ItemTagQuery");
static_assert(offsetof(FPositioningEQS, QueryTemplate) == 72, "Offset mismatch for FPositioningEQS::QueryTemplate");
static_assert(offsetof(FPositioningEQS, QueryConfig) == 80, "Offset mismatch for FPositioningEQS::QueryConfig");
static_assert(offsetof(FPositioningEQS, bAllowStayingOnSamePosition) == 96, "Offset mismatch for FPositioningEQS::bAllowStayingOnSamePosition");
static_assert(offsetof(FPositioningEQS, bRequestNewPosititonOnProviderRecomputed) == 97, "Offset mismatch for FPositioningEQS::bRequestNewPosititonOnProviderRecomputed");
static_assert(offsetof(FPositioningEQS, AllowStayingOnSamePosition) == 104, "Offset mismatch for FPositioningEQS::AllowStayingOnSamePosition");
static_assert(offsetof(FPositioningEQS, TimerForNewPositionOnProviderRecomputed) == 128, "Offset mismatch for FPositioningEQS::TimerForNewPositionOnProviderRecomputed");

// /Script/FortniteAIServer.STFortAthenaPlayMontageWarpTarget
// Kind: ScriptStruct; super: none
struct FSTFortAthenaPlayMontageWarpTarget
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    void* Actor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    FName BoneOrSocketName; // 0x0048 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSTFortAthenaPlayMontageWarpTarget, Name) == 0, "Offset mismatch for FSTFortAthenaPlayMontageWarpTarget::Name");
static_assert(offsetof(FSTFortAthenaPlayMontageWarpTarget, Location) == 8, "Offset mismatch for FSTFortAthenaPlayMontageWarpTarget::Location");
static_assert(offsetof(FSTFortAthenaPlayMontageWarpTarget, Rotation) == 32, "Offset mismatch for FSTFortAthenaPlayMontageWarpTarget::Rotation");
static_assert(offsetof(FSTFortAthenaPlayMontageWarpTarget, Actor) == 64, "Offset mismatch for FSTFortAthenaPlayMontageWarpTarget::Actor");
static_assert(offsetof(FSTFortAthenaPlayMontageWarpTarget, BoneOrSocketName) == 72, "Offset mismatch for FSTFortAthenaPlayMontageWarpTarget::BoneOrSocketName");

// /Script/FortniteAIServer.TokenEQSParameter
// Kind: ScriptStruct; super: none
struct FTokenEQSParameter
{
public:
    std::uint8_t ParamName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParamType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float DefaultValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    FName BlackboardKeyName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FTokenEQSParameter, ParamName) == 0, "Offset mismatch for FTokenEQSParameter::ParamName");
static_assert(offsetof(FTokenEQSParameter, ParamType) == 4, "Offset mismatch for FTokenEQSParameter::ParamType");
static_assert(offsetof(FTokenEQSParameter, DefaultValue) == 8, "Offset mismatch for FTokenEQSParameter::DefaultValue");
static_assert(offsetof(FTokenEQSParameter, BlackboardKeyName) == 12, "Offset mismatch for FTokenEQSParameter::BlackboardKeyName");

// /Script/FortniteAIServer.ortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData
// Kind: ScriptStruct; super: StateTreeTask_FindSlotEntranceLocation_InstanceData
struct FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData
{
public:
    void* UserActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReferenceSlot[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t EntryTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t EntranceTags[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData, UserActor) == 0, "Offset mismatch for FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData::UserActor");
static_assert(offsetof(FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData, ReferenceSlot) == 8, "Offset mismatch for FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData::ReferenceSlot");
static_assert(offsetof(FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData, EntryTransform) == 32, "Offset mismatch for FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData::EntryTransform");
static_assert(offsetof(FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData, EntranceTags) == 128, "Offset mismatch for FortAthenaFindSlotEntranceLocationStateTreeTask_InstanceData::EntranceTags");

// /Script/FortniteAIServer.AIActionAimDownSight
// Kind: Class; super: AIActionBase
class UAIActionAimDownSight
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionAimDownSight, CachedOwnerController) == 40, "Offset mismatch for UAIActionAimDownSight::CachedOwnerController");
static_assert(offsetof(UAIActionAimDownSight, CachedActionData) == 48, "Offset mismatch for UAIActionAimDownSight::CachedActionData");

// /Script/FortniteAIServer.AIActionAimDownSightData
// Kind: Class; super: AIActionData
class UAIActionAimDownSightData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.AIActionApplyGameplayEffect
// Kind: Class; super: AIActionBase
class UAIActionApplyGameplayEffect
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionApplyGameplayEffect, CachedOwnerController) == 40, "Offset mismatch for UAIActionApplyGameplayEffect::CachedOwnerController");
static_assert(offsetof(UAIActionApplyGameplayEffect, CachedActionData) == 48, "Offset mismatch for UAIActionApplyGameplayEffect::CachedActionData");

// /Script/FortniteAIServer.AIActionApplyGameplayEffectData
// Kind: Class; super: AIActionData
class UAIActionApplyGameplayEffectData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GameplayEffectClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UAIActionApplyGameplayEffectData, GameplayEffectClass) == 40, "Offset mismatch for UAIActionApplyGameplayEffectData::GameplayEffectClass");

// /Script/FortniteAIServer.AIActionAxisAlignedRotation
// Kind: Class; super: AIActionBase
class UAIActionAxisAlignedRotation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionAxisAlignedRotation, CachedOwnerController) == 40, "Offset mismatch for UAIActionAxisAlignedRotation::CachedOwnerController");
static_assert(offsetof(UAIActionAxisAlignedRotation, CachedActionData) == 48, "Offset mismatch for UAIActionAxisAlignedRotation::CachedActionData");

// /Script/FortniteAIServer.AIActionAxisAlignedRotationData
// Kind: Class; super: AIActionData
class UAIActionAxisAlignedRotationData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Direction; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UAIActionAxisAlignedRotationData, Direction) == 40, "Offset mismatch for UAIActionAxisAlignedRotationData::Direction");

// /Script/FortniteAIServer.AIActionBase
// Kind: Class; super: Object
class UAIActionBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionBase, CachedOwnerController) == 40, "Offset mismatch for UAIActionBase::CachedOwnerController");
static_assert(offsetof(UAIActionBase, CachedActionData) == 48, "Offset mismatch for UAIActionBase::CachedActionData");

// /Script/FortniteAIServer.AIActionBuild
// Kind: Class; super: AIActionBase
class UAIActionBuild
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionBuild, CachedOwnerController) == 40, "Offset mismatch for UAIActionBuild::CachedOwnerController");
static_assert(offsetof(UAIActionBuild, CachedActionData) == 48, "Offset mismatch for UAIActionBuild::CachedActionData");

// /Script/FortniteAIServer.AIActionBuildData
// Kind: Class; super: AIActionData
class UAIActionBuildData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BuildingType; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::int8_t GridCellOffsetForward; // 0x002D (Size: 0x1, Type: Int8Property)
    std::int8_t GridCellOffsetHeight; // 0x002E (Size: 0x1, Type: Int8Property)
    std::uint8_t bCheckForMaterials; // 0x002F (Size: 0x1, Type: BoolProperty)
    // 0x002F BoolProperty bConsumesMaterials (shared storage)
};

static_assert(offsetof(UAIActionBuildData, duration) == 40, "Offset mismatch for UAIActionBuildData::duration");
static_assert(offsetof(UAIActionBuildData, BuildingType) == 44, "Offset mismatch for UAIActionBuildData::BuildingType");
static_assert(offsetof(UAIActionBuildData, GridCellOffsetForward) == 45, "Offset mismatch for UAIActionBuildData::GridCellOffsetForward");
static_assert(offsetof(UAIActionBuildData, GridCellOffsetHeight) == 46, "Offset mismatch for UAIActionBuildData::GridCellOffsetHeight");
static_assert(offsetof(UAIActionBuildData, bCheckForMaterials) == 47, "Offset mismatch for UAIActionBuildData::bCheckForMaterials");

// /Script/FortniteAIServer.AIActionCrouch
// Kind: Class; super: AIActionBase
class UAIActionCrouch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionCrouch, CachedOwnerController) == 40, "Offset mismatch for UAIActionCrouch::CachedOwnerController");
static_assert(offsetof(UAIActionCrouch, CachedActionData) == 48, "Offset mismatch for UAIActionCrouch::CachedActionData");

// /Script/FortniteAIServer.AIActionCrouchData
// Kind: Class; super: AIActionData
class UAIActionCrouchData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bUncrouchOnStop; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIActionCrouchData, bUncrouchOnStop) == 40, "Offset mismatch for UAIActionCrouchData::bUncrouchOnStop");

// /Script/FortniteAIServer.AIActionData
// Kind: Class; super: Object
class UAIActionData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.AIActionEditBuilding
// Kind: Class; super: AIActionBase
class UAIActionEditBuilding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionEditBuilding, CachedOwnerController) == 40, "Offset mismatch for UAIActionEditBuilding::CachedOwnerController");
static_assert(offsetof(UAIActionEditBuilding, CachedActionData) == 48, "Offset mismatch for UAIActionEditBuilding::CachedActionData");

// /Script/FortniteAIServer.AIActionEditBuildingData
// Kind: Class; super: AIActionData
class UAIActionEditBuildingData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EditBuildingType; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UAIActionEditBuildingData, EditBuildingType) == 40, "Offset mismatch for UAIActionEditBuildingData::EditBuildingType");

// /Script/FortniteAIServer.AIActionEquipBuildTool
// Kind: Class; super: AIActionBase
class UAIActionEquipBuildTool
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionEquipBuildTool, CachedOwnerController) == 40, "Offset mismatch for UAIActionEquipBuildTool::CachedOwnerController");
static_assert(offsetof(UAIActionEquipBuildTool, CachedActionData) == 48, "Offset mismatch for UAIActionEquipBuildTool::CachedActionData");

// /Script/FortniteAIServer.AIActionEquipBuildToolData
// Kind: Class; super: AIActionData
class UAIActionEquipBuildToolData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.AIActionEquipItem
// Kind: Class; super: AIActionBase
class UAIActionEquipItem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionEquipItem, CachedOwnerController) == 40, "Offset mismatch for UAIActionEquipItem::CachedOwnerController");
static_assert(offsetof(UAIActionEquipItem, CachedActionData) == 48, "Offset mismatch for UAIActionEquipItem::CachedActionData");

// /Script/FortniteAIServer.AIActionEquipItemData
// Kind: Class; super: AIActionData
class UAIActionEquipItemData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ItemTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAIActionEquipItemData, ItemTag) == 40, "Offset mismatch for UAIActionEquipItemData::ItemTag");

// /Script/FortniteAIServer.AIActionFirePrimary
// Kind: Class; super: AIActionBase
class UAIActionFirePrimary
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionFirePrimary, CachedOwnerController) == 40, "Offset mismatch for UAIActionFirePrimary::CachedOwnerController");
static_assert(offsetof(UAIActionFirePrimary, CachedActionData) == 48, "Offset mismatch for UAIActionFirePrimary::CachedActionData");

// /Script/FortniteAIServer.AIActionFirePrimaryData
// Kind: Class; super: AIActionData
class UAIActionFirePrimaryData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAIActionFirePrimaryData, duration) == 40, "Offset mismatch for UAIActionFirePrimaryData::duration");

// /Script/FortniteAIServer.AIActionFocus
// Kind: Class; super: AIActionBase
class UAIActionFocus
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionFocus, CachedOwnerController) == 40, "Offset mismatch for UAIActionFocus::CachedOwnerController");
static_assert(offsetof(UAIActionFocus, CachedActionData) == 48, "Offset mismatch for UAIActionFocus::CachedActionData");

// /Script/FortniteAIServer.AIActionFocusData
// Kind: Class; super: AIActionData
class UAIActionFocusData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FocusLocationKeyName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t bSetControlRotation; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIActionFocusData, duration) == 40, "Offset mismatch for UAIActionFocusData::duration");
static_assert(offsetof(UAIActionFocusData, FocusLocationKeyName) == 44, "Offset mismatch for UAIActionFocusData::FocusLocationKeyName");
static_assert(offsetof(UAIActionFocusData, bSetControlRotation) == 48, "Offset mismatch for UAIActionFocusData::bSetControlRotation");

// /Script/FortniteAIServer.AIActionJump
// Kind: Class; super: AIActionBase
class UAIActionJump
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionJump, CachedOwnerController) == 40, "Offset mismatch for UAIActionJump::CachedOwnerController");
static_assert(offsetof(UAIActionJump, CachedActionData) == 48, "Offset mismatch for UAIActionJump::CachedActionData");

// /Script/FortniteAIServer.AIActionJumpData
// Kind: Class; super: AIActionData
class UAIActionJumpData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bCheckHeightInBuildCell; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float HeightBuildCellPercentageMin; // 0x002C (Size: 0x4, Type: FloatProperty)
    float HeightBuildCellPercentageMax; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAIActionJumpData, bCheckHeightInBuildCell) == 40, "Offset mismatch for UAIActionJumpData::bCheckHeightInBuildCell");
static_assert(offsetof(UAIActionJumpData, HeightBuildCellPercentageMin) == 44, "Offset mismatch for UAIActionJumpData::HeightBuildCellPercentageMin");
static_assert(offsetof(UAIActionJumpData, HeightBuildCellPercentageMax) == 48, "Offset mismatch for UAIActionJumpData::HeightBuildCellPercentageMax");

// /Script/FortniteAIServer.AIActionMove
// Kind: Class; super: AIActionBase
class UAIActionMove
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionMove, CachedOwnerController) == 40, "Offset mismatch for UAIActionMove::CachedOwnerController");
static_assert(offsetof(UAIActionMove, CachedActionData) == 48, "Offset mismatch for UAIActionMove::CachedActionData");

// /Script/FortniteAIServer.AIActionMoveData
// Kind: Class; super: AIActionData
class UAIActionMoveData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t Direction[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAutoSprintEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIActionMoveData, duration) == 40, "Offset mismatch for UAIActionMoveData::duration");
static_assert(offsetof(UAIActionMoveData, Direction) == 48, "Offset mismatch for UAIActionMoveData::Direction");
static_assert(offsetof(UAIActionMoveData, bAutoSprintEnabled) == 72, "Offset mismatch for UAIActionMoveData::bAutoSprintEnabled");

// /Script/FortniteAIServer.AIActionReleaseBuildTool
// Kind: Class; super: AIActionBase
class UAIActionReleaseBuildTool
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionReleaseBuildTool, CachedOwnerController) == 40, "Offset mismatch for UAIActionReleaseBuildTool::CachedOwnerController");
static_assert(offsetof(UAIActionReleaseBuildTool, CachedActionData) == 48, "Offset mismatch for UAIActionReleaseBuildTool::CachedActionData");

// /Script/FortniteAIServer.AIActionReleaseBuildToolData
// Kind: Class; super: AIActionData
class UAIActionReleaseBuildToolData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.AIActionRotation
// Kind: Class; super: AIActionBase
class UAIActionRotation
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t CachedRotationSpeed[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAIActionRotation, CachedRotationSpeed) == 64, "Offset mismatch for UAIActionRotation::CachedRotationSpeed");

// /Script/FortniteAIServer.AIActionRotationData
// Kind: Class; super: AIActionData
class UAIActionRotationData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t Rotation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComputeSpeedBasedOnDuration; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIActionRotationData, duration) == 40, "Offset mismatch for UAIActionRotationData::duration");
static_assert(offsetof(UAIActionRotationData, Rotation) == 48, "Offset mismatch for UAIActionRotationData::Rotation");
static_assert(offsetof(UAIActionRotationData, ComputeSpeedBasedOnDuration) == 72, "Offset mismatch for UAIActionRotationData::ComputeSpeedBasedOnDuration");

// /Script/FortniteAIServer.AIActionSequencer_Sequence
// Kind: Class; super: DataAsset
class UAIActionSequencer_Sequence
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSkillRatingRequired; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float MinSkillRating; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MaxSkillRating; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaterialsCountRequired; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBuildingGridFreeSpaceRequired; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::int8_t AboveFreeCellsNeededCount; // 0x0039 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0002[0x6]; // 0x003A
    TArray<void*> Tracks; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t NextTrackHandle; // 0x0050 (Size: 0x4, Type: UInt32Property)
    std::uint32_t NextActionHandle; // 0x0054 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UAIActionSequencer_Sequence, bSkillRatingRequired) == 40, "Offset mismatch for UAIActionSequencer_Sequence::bSkillRatingRequired");
static_assert(offsetof(UAIActionSequencer_Sequence, MinSkillRating) == 44, "Offset mismatch for UAIActionSequencer_Sequence::MinSkillRating");
static_assert(offsetof(UAIActionSequencer_Sequence, MaxSkillRating) == 48, "Offset mismatch for UAIActionSequencer_Sequence::MaxSkillRating");
static_assert(offsetof(UAIActionSequencer_Sequence, MaterialsCountRequired) == 52, "Offset mismatch for UAIActionSequencer_Sequence::MaterialsCountRequired");
static_assert(offsetof(UAIActionSequencer_Sequence, bBuildingGridFreeSpaceRequired) == 56, "Offset mismatch for UAIActionSequencer_Sequence::bBuildingGridFreeSpaceRequired");
static_assert(offsetof(UAIActionSequencer_Sequence, AboveFreeCellsNeededCount) == 57, "Offset mismatch for UAIActionSequencer_Sequence::AboveFreeCellsNeededCount");
static_assert(offsetof(UAIActionSequencer_Sequence, Tracks) == 64, "Offset mismatch for UAIActionSequencer_Sequence::Tracks");
static_assert(offsetof(UAIActionSequencer_Sequence, NextTrackHandle) == 80, "Offset mismatch for UAIActionSequencer_Sequence::NextTrackHandle");
static_assert(offsetof(UAIActionSequencer_Sequence, NextActionHandle) == 84, "Offset mismatch for UAIActionSequencer_Sequence::NextActionHandle");

// /Script/FortniteAIServer.AIActionSlide
// Kind: Class; super: AIActionBase
class UAIActionSlide
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionSlide, CachedOwnerController) == 40, "Offset mismatch for UAIActionSlide::CachedOwnerController");
static_assert(offsetof(UAIActionSlide, CachedActionData) == 48, "Offset mismatch for UAIActionSlide::CachedActionData");

// /Script/FortniteAIServer.AIActionSlideData
// Kind: Class; super: AIActionData
class UAIActionSlideData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.AIActionTacticalSprint
// Kind: Class; super: AIActionBase
class UAIActionTacticalSprint
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionTacticalSprint, CachedOwnerController) == 40, "Offset mismatch for UAIActionTacticalSprint::CachedOwnerController");
static_assert(offsetof(UAIActionTacticalSprint, CachedActionData) == 48, "Offset mismatch for UAIActionTacticalSprint::CachedActionData");

// /Script/FortniteAIServer.AIActionTacticalSprintData
// Kind: Class; super: AIActionData
class UAIActionTacticalSprintData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.AIActionUncrouch
// Kind: Class; super: AIActionBase
class UAIActionUncrouch
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> CachedOwnerController; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedActionData; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAIActionUncrouch, CachedOwnerController) == 40, "Offset mismatch for UAIActionUncrouch::CachedOwnerController");
static_assert(offsetof(UAIActionUncrouch, CachedActionData) == 48, "Offset mismatch for UAIActionUncrouch::CachedActionData");

// /Script/FortniteAIServer.AIActionUncrouchData
// Kind: Class; super: AIActionData
class UAIActionUncrouchData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortAICombatTokenTester
// Kind: Class; super: Character
class UFortAICombatTokenTester
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t TokenProviderData[0x38]; // 0x0630 (Size: 0x38, Type: StructProperty)
    std::uint8_t TokenConsumerData[0xC0]; // 0x0668 (Size: 0xC0, Type: StructProperty)
    void* CombatTokenTesterDebugDrawComponent; // 0x0728 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAICombatTokenTester, TokenProviderData) == 1584, "Offset mismatch for UFortAICombatTokenTester::TokenProviderData");
static_assert(offsetof(UFortAICombatTokenTester, TokenConsumerData) == 1640, "Offset mismatch for UFortAICombatTokenTester::TokenConsumerData");
static_assert(offsetof(UFortAICombatTokenTester, CombatTokenTesterDebugDrawComponent) == 1832, "Offset mismatch for UFortAICombatTokenTester::CombatTokenTesterDebugDrawComponent");

// /Script/FortniteAIServer.FortAICombatTokenTesterDebugDrawComponent
// Kind: Class; super: DebugDrawComponent
class UFortAICombatTokenTesterDebugDrawComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, MinDrawDistance) == 632, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::MinDrawDistance");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::LDMaxDrawDistance");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::CachedMaxDrawDistance");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, DepthPriorityGroup) == 644, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::DepthPriorityGroup");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, LightmapType) == 647, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::LightmapType");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::HLODBatchingPolicy");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, bHoldout) == 652, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::bHoldout");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, CastShadow) == 653, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::CastShadow");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, bCastCinematicShadow) == 655, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::bCastCinematicShadow");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::AlwaysLoadOnClient");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::bHiddenInSceneCapture");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::bHasNoStreamableTextures");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::CanCharacterStepUpOn");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, LightingChannels) == 663, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::LightingChannels");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, RayTracingGroupId) == 668, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::RayTracingGroupId");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, VisibilityId) == 672, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::VisibilityId");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::CustomDepthStencilValue");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, CustomPrimitiveData) == 680, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::CustomPrimitiveData");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, TranslucencySortPriority) == 776, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::TranslucencySortPriority");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::RuntimeVirtualTextures");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::VirtualTextureLodBias");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::VirtualTextureCullMips");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, BoundsScale) == 840, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::BoundsScale");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, MoveIgnoreActors) == 848, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::MoveIgnoreActors");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::MoveIgnoreComponents");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, BodyInstance) == 896, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::BodyInstance");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnComponentHit) == 1320, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnComponentHit");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnComponentBeginOverlap");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnComponentEndOverlap");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnComponentWake) == 1323, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnComponentWake");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnComponentSleep) == 1324, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnComponentSleep");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnBeginCursorOver");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnEndCursorOver) == 1328, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnEndCursorOver");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnClicked) == 1329, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnClicked");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnReleased) == 1330, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnReleased");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnInputTouchBegin");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnInputTouchEnd");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnInputTouchEnter");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnInputTouchLeave");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnTouchBegan) == 1335, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnTouchBegan");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnTouchEnded) == 1336, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnTouchEnded");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnTouchEntered) == 1337, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnTouchEntered");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, OnTouchExited) == 1338, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::OnTouchExited");
static_assert(offsetof(UFortAICombatTokenTesterDebugDrawComponent, LODParentPrimitive) == 1368, "Offset mismatch for UFortAICombatTokenTesterDebugDrawComponent::LODParentPrimitive");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_AimDownSight
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_AimDownSight
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t WeaponKeyName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t ThrowableAttacksName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetActorName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t UrgentMovementName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSkipTargetChecks; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    void* CacheAimingDigestedSkillSet; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, WeaponKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_AimDownSight::WeaponKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, ThrowableAttacksName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_AimDownSight::ThrowableAttacksName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, TargetActorName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_AimDownSight::TargetActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, UrgentMovementName) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_AimDownSight::UrgentMovementName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, bSkipTargetChecks) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_AimDownSight::bSkipTargetChecks");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, CacheAimingDigestedSkillSet) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_AimDownSight::CacheAimingDigestedSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ambush
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Ambush
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t LastKnownPositionName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t DestinationKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MoveToDestinationKeyName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    FName AggressivenessName; // 0x01AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Ambush, LastKnownPositionName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Ambush::LastKnownPositionName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ambush, DestinationKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_Ambush::DestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ambush, MoveToDestinationKeyName) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Ambush::MoveToDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ambush, AggressivenessName) == 428, "Offset mismatch for UFortAthenaAIBotEvaluator_Ambush::AggressivenessName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ApproachNearbyPawns
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_ApproachNearbyPawns
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t MaxApproaches[0x30]; // 0x01C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t PerceptionConfiguration[0xC0]; // 0x01F0 (Size: 0xC0, Type: StructProperty)
    FName EnableKeyName; // 0x02B0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_ApproachNearbyPawns, MaxApproaches) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_ApproachNearbyPawns::MaxApproaches");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ApproachNearbyPawns, PerceptionConfiguration) == 496, "Offset mismatch for UFortAthenaAIBotEvaluator_ApproachNearbyPawns::PerceptionConfiguration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ApproachNearbyPawns, EnableKeyName) == 688, "Offset mismatch for UFortAthenaAIBotEvaluator_ApproachNearbyPawns::EnableKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Attack
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Attack
{
public:
    std::uint8_t Pad_0000[0x1A4]; // 0x0000
    std::uint8_t WeaponKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MoveToDestinationKeyName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    FName TargetActorName; // 0x01AC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Attack, WeaponKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_Attack::WeaponKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Attack, MoveToDestinationKeyName) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Attack::MoveToDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Attack, TargetActorName) == 428, "Offset mismatch for UFortAthenaAIBotEvaluator_Attack::TargetActorName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_AvoidThreat
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_AvoidThreat
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t AvoidThreatKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AvoidThreatMovementStateKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    FName AvoidThreatDestinationKeyName; // 0x01A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01B0
    void* CurrentThreatActorAvoiding; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* CacheEMDigestedSkillSet; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, AvoidThreatKeyName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_AvoidThreat::AvoidThreatKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, AvoidThreatMovementStateKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_AvoidThreat::AvoidThreatMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, AvoidThreatDestinationKeyName) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_AvoidThreat::AvoidThreatDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, CurrentThreatActorAvoiding) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_AvoidThreat::CurrentThreatActorAvoiding");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, CacheEMDigestedSkillSet) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_AvoidThreat::CacheEMDigestedSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Bunker
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Bunker
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t BuildExecutionStatusKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t HealingStatusKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t DangerTags[0x1]; // 0x01A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Bunker, BuildExecutionStatusKeyName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Bunker::BuildExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Bunker, HealingStatusKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_Bunker::HealingStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Bunker, DangerTags) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Bunker::DangerTags");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CanMove
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_CanMove
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName CanMoveKeyName; // 0x00A8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_CanMove, CanMoveKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_CanMove::CanMoveKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_CharacterLaunched
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bSteerInSameDirectionAsLaunchVelocity; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t CharacterLaunchedExecutionStatusKeyName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    FName SteerDirectionKeyName; // 0x00B0 (Size: 0x8, Type: NameProperty)
    std::uint8_t LastLaunchVelocity[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    void* CachedMovementSkillSet; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* CachedBehaviorControlsRuntimeParameters; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    float LastZiplineTimestamp; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, bSteerInSameDirectionAsLaunchVelocity) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_CharacterLaunched::bSteerInSameDirectionAsLaunchVelocity");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, CharacterLaunchedExecutionStatusKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_CharacterLaunched::CharacterLaunchedExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, SteerDirectionKeyName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_CharacterLaunched::SteerDirectionKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, LastLaunchVelocity) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_CharacterLaunched::LastLaunchVelocity");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, CachedMovementSkillSet) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_CharacterLaunched::CachedMovementSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, CachedBehaviorControlsRuntimeParameters) == 216, "Offset mismatch for UFortAthenaAIBotEvaluator_CharacterLaunched::CachedBehaviorControlsRuntimeParameters");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, LastZiplineTimestamp) == 224, "Offset mismatch for UFortAthenaAIBotEvaluator_CharacterLaunched::LastZiplineTimestamp");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Conversation
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Conversation
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName IsInConversationStateName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    TArray<void*> ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00C0
    TArray<void*> ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x00E0
    TArray<void*> MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0100
    std::uint8_t bForceStopIfNoPlayerNearby; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetControllerFocusOnParticipantFocus; // 0x0111 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x0112
    std::uint8_t HolsterWeaponOnConversationEnter[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t RequiredTagQueryToStopNearActor[0x48]; // 0x0140 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredSelfTagQueryToStopNearActor[0x48]; // 0x0188 (Size: 0x48, Type: StructProperty)
    std::uint8_t ConversationTimeout[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConversationTimeoutWithOtherPlayerNearby[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BanTimeAfterTimeout[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    void* ConversationRuntimeParameters; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    void* ActorToFocus; // 0x0250 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, IsInConversationStateName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::IsInConversationStateName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames) == 240, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, bForceStopIfNoPlayerNearby) == 272, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::bForceStopIfNoPlayerNearby");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, bSetControllerFocusOnParticipantFocus) == 273, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::bSetControllerFocusOnParticipantFocus");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, HolsterWeaponOnConversationEnter) == 280, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::HolsterWeaponOnConversationEnter");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, RequiredTagQueryToStopNearActor) == 320, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::RequiredTagQueryToStopNearActor");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, RequiredSelfTagQueryToStopNearActor) == 392, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::RequiredSelfTagQueryToStopNearActor");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ConversationTimeout) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::ConversationTimeout");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ConversationTimeoutWithOtherPlayerNearby) == 504, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::ConversationTimeoutWithOtherPlayerNearby");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, BanTimeAfterTimeout) == 544, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::BanTimeAfterTimeout");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ConversationRuntimeParameters) == 584, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::ConversationRuntimeParameters");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ActorToFocus) == 592, "Offset mismatch for UFortAthenaAIBotEvaluator_Conversation::ActorToFocus");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Converted
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ShouldMoveTowardsConverterName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t ShouldTeleportTowardsConverterName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t ConvertedAllowPatrolAroundName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t ConvertedAllowScanAroundWhenWaitingName[0x4]; // 0x01AC (Size: 0x4, Type: NameProperty)
    std::uint8_t ConvertedDestinationName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t CrouchExecutionStatusName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TeleportLocationProjectionExtent[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MovingFromLosLocationProjectionExtent[0x18]; // 0x01D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t AmountOfTimesNonHostilePawnNeedsToBeDamagedForTargeting[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeToTrackDamagedActors[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t NearbyPlayerDistanceForTeleportTowardsConverter[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerFOVForNearbyPlayersVisibility[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    void* TeleportToConverterQueryTemplate; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TeleportToConverterRunMode; // 0x0290 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0291
    TArray<void*> AbilitiesToMimic; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RequiredTagQueryToTargetConverterDamagedPawn[0x48]; // 0x02A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t UpdateConvertedDestinationWhileUsingNavLinks[0x18]; // 0x02F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t UseExecutionStatusForMoveTowardConverter[0x40]; // 0x0308 (Size: 0x40, Type: StructProperty)
    void* ConverterPawn; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* CachedAIBotConvertParameters; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ShouldMoveTowardsConverterName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::ShouldMoveTowardsConverterName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ShouldTeleportTowardsConverterName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::ShouldTeleportTowardsConverterName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ConvertedAllowPatrolAroundName) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::ConvertedAllowPatrolAroundName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ConvertedAllowScanAroundWhenWaitingName) == 428, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::ConvertedAllowScanAroundWhenWaitingName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ConvertedDestinationName) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::ConvertedDestinationName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, CrouchExecutionStatusName) == 436, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::CrouchExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, TeleportLocationProjectionExtent) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::TeleportLocationProjectionExtent");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, MovingFromLosLocationProjectionExtent) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::MovingFromLosLocationProjectionExtent");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, AmountOfTimesNonHostilePawnNeedsToBeDamagedForTargeting) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::AmountOfTimesNonHostilePawnNeedsToBeDamagedForTargeting");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, TimeToTrackDamagedActors) == 528, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::TimeToTrackDamagedActors");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, NearbyPlayerDistanceForTeleportTowardsConverter) == 568, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::NearbyPlayerDistanceForTeleportTowardsConverter");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, PlayerFOVForNearbyPlayersVisibility) == 608, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::PlayerFOVForNearbyPlayersVisibility");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, TeleportToConverterQueryTemplate) == 648, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::TeleportToConverterQueryTemplate");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, TeleportToConverterRunMode) == 656, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::TeleportToConverterRunMode");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, AbilitiesToMimic) == 664, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::AbilitiesToMimic");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, RequiredTagQueryToTargetConverterDamagedPawn) == 680, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::RequiredTagQueryToTargetConverterDamagedPawn");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, UpdateConvertedDestinationWhileUsingNavLinks) == 752, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::UpdateConvertedDestinationWhileUsingNavLinks");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, UseExecutionStatusForMoveTowardConverter) == 776, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::UseExecutionStatusForMoveTowardConverter");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ConverterPawn) == 840, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::ConverterPawn");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, CachedAIBotConvertParameters) == 848, "Offset mismatch for UFortAthenaAIBotEvaluator_Converted::CachedAIBotConvertParameters");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DBNO
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_DBNO
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t DBNODestinationKeyName[0x6]; // 0x01A0 (Size: 0x6, Type: NameProperty)
    std::uint8_t bAllowReachSameFactionNPCs; // 0x01A6 (Size: 0x1, Type: BoolProperty)
    // 0x01A6 BoolProperty bAllowReachSquadmates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x01A7
    std::uint8_t SupportsGiveUp[0x30]; // 0x01A8 (Size: 0x30, Type: StructProperty)
    TArray<void*> AllyPawns; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedCurrentDestination[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    void* DBNOSkillSet; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    void* CachedCoverComponent; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    void* DBNOBehaviorRuntimeParameters; // 0x0210 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, DBNODestinationKeyName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_DBNO::DBNODestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, bAllowReachSameFactionNPCs) == 422, "Offset mismatch for UFortAthenaAIBotEvaluator_DBNO::bAllowReachSameFactionNPCs");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, SupportsGiveUp) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_DBNO::SupportsGiveUp");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, AllyPawns) == 472, "Offset mismatch for UFortAthenaAIBotEvaluator_DBNO::AllyPawns");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, CachedCurrentDestination) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_DBNO::CachedCurrentDestination");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, DBNOSkillSet) == 512, "Offset mismatch for UFortAthenaAIBotEvaluator_DBNO::DBNOSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, CachedCoverComponent) == 520, "Offset mismatch for UFortAthenaAIBotEvaluator_DBNO::CachedCoverComponent");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, DBNOBehaviorRuntimeParameters) == 528, "Offset mismatch for UFortAthenaAIBotEvaluator_DBNO::DBNOBehaviorRuntimeParameters");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DanceOnKill
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_DanceOnKill
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t LastKillPositionKeyName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t LastKillTimeKeyName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t LastKillWasABotKeyName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    FName PlayEmoteExecutionStatusKeyName; // 0x00B4 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0xC]; // 0x00BC
    void* CacheEmoteDigestedSkillSet; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, LastKillPositionKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_DanceOnKill::LastKillPositionKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, LastKillTimeKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_DanceOnKill::LastKillTimeKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, LastKillWasABotKeyName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_DanceOnKill::LastKillWasABotKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, PlayEmoteExecutionStatusKeyName) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_DanceOnKill::PlayEmoteExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, CacheEmoteDigestedSkillSet) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_DanceOnKill::CacheEmoteDigestedSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DangerDetection
// Kind: Class; super: FortAthenaAIBotEvaluator_TagQuery
class UFortAthenaAIBotEvaluator_DangerDetection
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    void* DangerNavAreaClass; // 0x0108 (Size: 0x8, Type: ClassProperty)
    float TimeToCheckForDangerAfterValidQuery; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float MaxRadiusToSearchForSafePlace; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DangerZoneDetectedExecutionStatusName[0x4]; // 0x0118 (Size: 0x4, Type: NameProperty)
    FName DangerZoneDetectedSafeLocationKeyName; // 0x011C (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0124
    void* CachedMovementSkillSet; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* CacheZoneManager; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, DangerNavAreaClass) == 264, "Offset mismatch for UFortAthenaAIBotEvaluator_DangerDetection::DangerNavAreaClass");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, TimeToCheckForDangerAfterValidQuery) == 272, "Offset mismatch for UFortAthenaAIBotEvaluator_DangerDetection::TimeToCheckForDangerAfterValidQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, MaxRadiusToSearchForSafePlace) == 276, "Offset mismatch for UFortAthenaAIBotEvaluator_DangerDetection::MaxRadiusToSearchForSafePlace");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, DangerZoneDetectedExecutionStatusName) == 280, "Offset mismatch for UFortAthenaAIBotEvaluator_DangerDetection::DangerZoneDetectedExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, DangerZoneDetectedSafeLocationKeyName) == 284, "Offset mismatch for UFortAthenaAIBotEvaluator_DangerDetection::DangerZoneDetectedSafeLocationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, CachedMovementSkillSet) == 296, "Offset mismatch for UFortAthenaAIBotEvaluator_DangerDetection::CachedMovementSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, CacheZoneManager) == 304, "Offset mismatch for UFortAthenaAIBotEvaluator_DangerDetection::CacheZoneManager");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DefensiveBuilding
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_DefensiveBuilding
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* CachedBuildingDigestedSkillSet; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* CachedBuildingComponent; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_DefensiveBuilding, CachedBuildingDigestedSkillSet) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_DefensiveBuilding::CachedBuildingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DefensiveBuilding, CachedBuildingComponent) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_DefensiveBuilding::CachedBuildingComponent");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Disengagement
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Disengagement
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TargetActorKeyName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t DisengagementReasonKeyName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetInterestEnabled[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetInterestInitialDuration[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetInterestOnDamageDuration[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetInterestStartingMinDistance[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetInterestOngoingMinDistance[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetInterestCanBeTriggeredInsideLeash[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    float TargetInterestStartingMinDistanceSqr; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float TargetInterestOngoingMinDistanceSqr; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01A8
    std::uint8_t TargetReachabilityEnabled[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    FName TargetIsReachableKeyName; // 0x01D8 (Size: 0x8, Type: NameProperty)
    std::uint8_t TargetReachabilityMaxDistance[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    float TargetReachabilityMaxDistanceSqr; // 0x0208 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x14]; // 0x020C
    void* CachedLeashComponent; // 0x0220 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetActorKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetActorKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, DisengagementReasonKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::DisengagementReasonKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetInterestEnabled) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetInterestEnabled");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetInterestInitialDuration) == 216, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetInterestInitialDuration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetInterestOnDamageDuration) == 256, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetInterestOnDamageDuration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetInterestStartingMinDistance) == 296, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetInterestStartingMinDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetInterestOngoingMinDistance) == 336, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetInterestOngoingMinDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetInterestCanBeTriggeredInsideLeash) == 376, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetInterestCanBeTriggeredInsideLeash");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetInterestStartingMinDistanceSqr) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetInterestStartingMinDistanceSqr");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetInterestOngoingMinDistanceSqr) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetInterestOngoingMinDistanceSqr");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetReachabilityEnabled) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetReachabilityEnabled");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetIsReachableKeyName) == 472, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetIsReachableKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetReachabilityMaxDistance) == 480, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetReachabilityMaxDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, TargetReachabilityMaxDistanceSqr) == 520, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::TargetReachabilityMaxDistanceSqr");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Disengagement, CachedLeashComponent) == 544, "Offset mismatch for UFortAthenaAIBotEvaluator_Disengagement::CachedLeashComponent");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Escalate
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Escalate
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* CachedBotController; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Escalate, CachedBotController) == 160, "Offset mismatch for UFortAthenaAIBotEvaluator_Escalate::CachedBotController");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Escape
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Escape
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t EscapeTags[0x20]; // 0x01A0 (Size: 0x20, Type: StructProperty)
    float CooldownBetweenAggressivenessChanges; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    FName AggressivenessName; // 0x01C4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Escape, EscapeTags) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Escape::EscapeTags");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Escape, CooldownBetweenAggressivenessChanges) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_Escape::CooldownBetweenAggressivenessChanges");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Escape, AggressivenessName) == 452, "Offset mismatch for UFortAthenaAIBotEvaluator_Escape::AggressivenessName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_EvasiveManeuvers
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    std::uint8_t CrouchExecutionStatusName[0x4]; // 0x0110 (Size: 0x4, Type: NameProperty)
    std::uint8_t JumpExecutionStatusName[0x4]; // 0x0114 (Size: 0x4, Type: NameProperty)
    std::uint8_t JetpackStrafeExecutionStatusName[0x4]; // 0x0118 (Size: 0x4, Type: NameProperty)
    std::uint8_t DodgeName[0x4]; // 0x011C (Size: 0x4, Type: NameProperty)
    std::uint8_t DestinationKeyName[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    FName UrgentMoveKeyName; // 0x0124 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x012C
    std::uint8_t bDoCrouching; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoDodging; // 0x0135 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoJumping; // 0x0136 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoJumpingDistanceCheck; // 0x0137 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoJetpackStrafing; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoJetpackStrafingDistanceCheck; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x013A
    float JetpackStrafingRequiredFuelPercent; // 0x013C (Size: 0x4, Type: FloatProperty)
    float JetpackStrafeNavPadding; // 0x0140 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0144
    std::uint8_t RequiredTagQuery[0x48]; // 0x0148 (Size: 0x48, Type: StructProperty)
    std::uint8_t JetpackRequiredTagQuery[0x48]; // 0x0190 (Size: 0x48, Type: StructProperty)
    std::uint8_t JumpRequiredTagQuery[0x48]; // 0x01D8 (Size: 0x48, Type: StructProperty)
    void* ForcedPerkClass; // 0x0220 (Size: 0x8, Type: ClassProperty)
    void* CacheEMDigestedSkillSet; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    void* CachedPerksComponent; // 0x0230 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, CrouchExecutionStatusName) == 272, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::CrouchExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JumpExecutionStatusName) == 276, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::JumpExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JetpackStrafeExecutionStatusName) == 280, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::JetpackStrafeExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, DodgeName) == 284, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::DodgeName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, DestinationKeyName) == 288, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::DestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, UrgentMoveKeyName) == 292, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::UrgentMoveKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoCrouching) == 308, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoCrouching");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoDodging) == 309, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoDodging");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoJumping) == 310, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoJumping");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoJumpingDistanceCheck) == 311, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoJumpingDistanceCheck");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoJetpackStrafing) == 312, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoJetpackStrafing");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoJetpackStrafingDistanceCheck) == 313, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoJetpackStrafingDistanceCheck");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JetpackStrafingRequiredFuelPercent) == 316, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::JetpackStrafingRequiredFuelPercent");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JetpackStrafeNavPadding) == 320, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::JetpackStrafeNavPadding");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, RequiredTagQuery) == 328, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::RequiredTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JetpackRequiredTagQuery) == 400, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::JetpackRequiredTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JumpRequiredTagQuery) == 472, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::JumpRequiredTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, ForcedPerkClass) == 544, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::ForcedPerkClass");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, CacheEMDigestedSkillSet) == 552, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::CacheEMDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, CachedPerksComponent) == 560, "Offset mismatch for UFortAthenaAIBotEvaluator_EvasiveManeuvers::CachedPerksComponent");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flanking
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Flanking
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* CachedAIDirector; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* CachedRangeAttackDigestedSkillSet; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FlankingExecutionStatusKeyName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t FlankingMovementStateKeyName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    FName FlankingDestinationKeyName; // 0x01B8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01C0
    TArray<void*> LocationsToEvaluate; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BestLocations; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorsInArea; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Flanking, CachedAIDirector) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Flanking::CachedAIDirector");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flanking, CachedRangeAttackDigestedSkillSet) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Flanking::CachedRangeAttackDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flanking, FlankingExecutionStatusKeyName) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_Flanking::FlankingExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flanking, FlankingMovementStateKeyName) == 436, "Offset mismatch for UFortAthenaAIBotEvaluator_Flanking::FlankingMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flanking, FlankingDestinationKeyName) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_Flanking::FlankingDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flanking, LocationsToEvaluate) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_Flanking::LocationsToEvaluate");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flanking, BestLocations) == 472, "Offset mismatch for UFortAthenaAIBotEvaluator_Flanking::BestLocations");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flanking, ActorsInArea) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_Flanking::ActorsInArea");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flee
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Flee
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    float MinDistanceFromTarget; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float MinValidDistanceForFleeLocation; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    float FleeDistance; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceFromTargetWhenFleeing; // 0x01AC (Size: 0x4, Type: FloatProperty)
    float MinDistanceHysteresisWhenChangingTarget; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FleeKeyName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t FleeMovementStateKeyName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t FleeDestinationKeyName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    FName FleeActorKeyName; // 0x01C0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01C8
    void* CurrentActorFleeingFrom; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, MinDistanceFromTarget) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::MinDistanceFromTarget");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, MinValidDistanceForFleeLocation) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::MinValidDistanceForFleeLocation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeDistance) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::FleeDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, MaxDistanceFromTargetWhenFleeing) == 428, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::MaxDistanceFromTargetWhenFleeing");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, MinDistanceHysteresisWhenChangingTarget) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::MinDistanceHysteresisWhenChangingTarget");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeKeyName) == 436, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::FleeKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeMovementStateKeyName) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::FleeMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeDestinationKeyName) == 444, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::FleeDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeActorKeyName) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::FleeActorKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, CurrentActorFleeingFrom) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_Flee::CurrentActorFleeingFrom");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_FreeFalling
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_FreeFalling
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t DiveExecutionStatusKeyName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t DiveDestinationKeyName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t GlideExecutionStatusKeyName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t GlideDestinationKeyName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t JumpOffBusDestinationName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    FName AlertLevelName; // 0x00BC (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C4
    std::uint8_t bRandomlySelectFreeFallingMode; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00CD
    std::uint8_t IdleWeight[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomWeight[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TowardNearestAllyWeight[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t FreeFallingMode; // 0x0148 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsAlerted; // 0x0149 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x014A
    float MaxOffsetRangeFromNearestAlly; // 0x014C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bGlideAllowed; // 0x0150 (Size: 0x1, Type: BoolProperty)
    // 0x0150 BoolProperty bShouldRecomputeDestinationWhenTowardNearestAlly (shared storage)
    // 0x0150 BoolProperty bShouldSearchAllyInSquad (shared storage)
    // 0x0150 BoolProperty bShouldSearchAllyInTeam (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x0151
    float SkyTubeDivingStuckTimeThreshold; // 0x0154 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x20]; // 0x0158
    void* NearestAlly; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CachedLatestDestination[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    void* CacheMovementDigestedSkillSet; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01A0
    void* CachedSkyTube; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, DiveExecutionStatusKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::DiveExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, DiveDestinationKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::DiveDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, GlideExecutionStatusKeyName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::GlideExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, GlideDestinationKeyName) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::GlideDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, JumpOffBusDestinationName) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::JumpOffBusDestinationName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, AlertLevelName) == 188, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::AlertLevelName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, bRandomlySelectFreeFallingMode) == 204, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::bRandomlySelectFreeFallingMode");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, IdleWeight) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::IdleWeight");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, RandomWeight) == 248, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::RandomWeight");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, TowardNearestAllyWeight) == 288, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::TowardNearestAllyWeight");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, FreeFallingMode) == 328, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::FreeFallingMode");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, bIsAlerted) == 329, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::bIsAlerted");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, MaxOffsetRangeFromNearestAlly) == 332, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::MaxOffsetRangeFromNearestAlly");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, bGlideAllowed) == 336, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::bGlideAllowed");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, SkyTubeDivingStuckTimeThreshold) == 340, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::SkyTubeDivingStuckTimeThreshold");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, NearestAlly) == 376, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::NearestAlly");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, CachedLatestDestination) == 384, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::CachedLatestDestination");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, CacheMovementDigestedSkillSet) == 408, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::CacheMovementDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, CachedSkyTube) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_FreeFalling::CachedSkyTube");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ground
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Ground
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SurfaceTypeRaycastDir[0x88]; // 0x00A8 (Size: 0x88, Type: StructProperty)
    void* CachedBehaviorRuntimeParameters; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Ground, SurfaceTypeRaycastDir) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_Ground::SurfaceTypeRaycastDir");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ground, CachedBehaviorRuntimeParameters) == 304, "Offset mismatch for UFortAthenaAIBotEvaluator_Ground::CachedBehaviorRuntimeParameters");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HandleFocusing
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_HandleFocusing
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TargetActorName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractActorName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t InterlocutorName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetLocationName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t FocusActorName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t FocalPointName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponFireName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t RangeAttackIsReadyToFireName[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTriggerMeleeName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t LastKnownPositionName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    FName TacticalSprintExecutionStatusName; // 0x00D0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D8
    std::uint8_t FocusingBehavior[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t NoRangedWeaponFocusBehavior[0x30]; // 0x0120 (Size: 0x30, Type: StructProperty)
    std::uint8_t bPrioritizeThreatOverCurrentTarget[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseTargetActorKeyAsFocusTarget[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t bFocusOnTargetLocation[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t AmbushMaxLKPLookAtAngleDegree[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    std::uint8_t bStopFocusingWhenMoving[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ResumeFocusingWhenMovingDist[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t StopFocusingWhenMovingDist[0x18]; // 0x01E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bResumeFocusWhileSliding[0x18]; // 0x01F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ClearFocusOnTacticalSprint[0x18]; // 0x0210 (Size: 0x18, Type: StructProperty)
    void* CacheAimingDigestedSkillSet; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    void* CacheMovementDigestedSkillSet; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    void* LastTargetedThreat; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0240
    void* FocusActor; // 0x0248 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, TargetActorName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::TargetActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, InteractActorName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::InteractActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, InterlocutorName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::InterlocutorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, TargetLocationName) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::TargetLocationName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, FocusActorName) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::FocusActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, FocalPointName) == 188, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::FocalPointName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, WeaponFireName) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::WeaponFireName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, RangeAttackIsReadyToFireName) == 196, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::RangeAttackIsReadyToFireName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, WeaponTriggerMeleeName) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::WeaponTriggerMeleeName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, LastKnownPositionName) == 204, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::LastKnownPositionName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, TacticalSprintExecutionStatusName) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::TacticalSprintExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, FocusingBehavior) == 240, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::FocusingBehavior");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, NoRangedWeaponFocusBehavior) == 288, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::NoRangedWeaponFocusBehavior");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bPrioritizeThreatOverCurrentTarget) == 336, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::bPrioritizeThreatOverCurrentTarget");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bUseTargetActorKeyAsFocusTarget) == 360, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::bUseTargetActorKeyAsFocusTarget");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bFocusOnTargetLocation) == 384, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::bFocusOnTargetLocation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, AmbushMaxLKPLookAtAngleDegree) == 408, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::AmbushMaxLKPLookAtAngleDegree");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bStopFocusingWhenMoving) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::bStopFocusingWhenMoving");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, ResumeFocusingWhenMovingDist) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::ResumeFocusingWhenMovingDist");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, StopFocusingWhenMovingDist) == 480, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::StopFocusingWhenMovingDist");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bResumeFocusWhileSliding) == 504, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::bResumeFocusWhileSliding");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, ClearFocusOnTacticalSprint) == 528, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::ClearFocusOnTacticalSprint");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, CacheAimingDigestedSkillSet) == 552, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::CacheAimingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, CacheMovementDigestedSkillSet) == 560, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::CacheMovementDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, LastTargetedThreat) == 568, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::LastTargetedThreat");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, FocusActor) == 584, "Offset mismatch for UFortAthenaAIBotEvaluator_HandleFocusing::FocusActor");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Harvest
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    void* ProjectionNavigationQueryFilterClass; // 0x01F0 (Size: 0x8, Type: ClassProperty)
    void* ValidNavigationQueryFilterClassOverride; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MaximumTimeToHelpFromLastPlayerDamage[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    std::uint8_t KeepTargetTimeOnWeaponTrigger[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t AmountOfTimesPlayerBuiltStructuresNeedToBeDamaged[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeToTrackDamagedActors[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDistanceFromActorForFallbackNoHarvestBehaviour[0x28]; // 0x02A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExtraExtentForPlayerHitChecks[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    TArray<void*> GEsToApplyOnFallbackBehaviorTrigger; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GEsToApplyOnCannotDamageBehaviorTrigger; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    FName HarvestTargetKeyName; // 0x0310 (Size: 0x8, Type: NameProperty)
    FName HarvestTargetHitPointKeyName; // 0x0318 (Size: 0x8, Type: NameProperty)
    FName HarvestDestinationKeyName; // 0x0320 (Size: 0x8, Type: NameProperty)
    FName FallbackBehaviorKeyName; // 0x0328 (Size: 0x8, Type: NameProperty)
    FName CannotDamageKeyName; // 0x0330 (Size: 0x8, Type: NameProperty)
    FName WeaponTriggerMeleeKeyName; // 0x0338 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, ProjectionNavigationQueryFilterClass) == 496, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::ProjectionNavigationQueryFilterClass");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, ValidNavigationQueryFilterClassOverride) == 504, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::ValidNavigationQueryFilterClassOverride");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, MaximumTimeToHelpFromLastPlayerDamage) == 512, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::MaximumTimeToHelpFromLastPlayerDamage");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, KeepTargetTimeOnWeaponTrigger) == 552, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::KeepTargetTimeOnWeaponTrigger");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, AmountOfTimesPlayerBuiltStructuresNeedToBeDamaged) == 592, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::AmountOfTimesPlayerBuiltStructuresNeedToBeDamaged");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, TimeToTrackDamagedActors) == 632, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::TimeToTrackDamagedActors");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, MaxDistanceFromActorForFallbackNoHarvestBehaviour) == 672, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::MaxDistanceFromActorForFallbackNoHarvestBehaviour");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, ExtraExtentForPlayerHitChecks) == 712, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::ExtraExtentForPlayerHitChecks");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, GEsToApplyOnFallbackBehaviorTrigger) == 752, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::GEsToApplyOnFallbackBehaviorTrigger");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, GEsToApplyOnCannotDamageBehaviorTrigger) == 768, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::GEsToApplyOnCannotDamageBehaviorTrigger");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, HarvestTargetKeyName) == 784, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::HarvestTargetKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, HarvestTargetHitPointKeyName) == 792, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::HarvestTargetHitPointKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, HarvestDestinationKeyName) == 800, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::HarvestDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, FallbackBehaviorKeyName) == 808, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::FallbackBehaviorKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, CannotDamageKeyName) == 816, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::CannotDamageKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Harvest, WeaponTriggerMeleeKeyName) == 824, "Offset mismatch for UFortAthenaAIBotEvaluator_Harvest::WeaponTriggerMeleeKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Heal
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Heal
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName HealingObjectKeyName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    FName CanHealWhileMovingKeyName; // 0x00B0 (Size: 0x8, Type: NameProperty)
    FName UnstuckExecutionStatusKeyName; // 0x00B8 (Size: 0x8, Type: NameProperty)
    FName MovementItemExecutionStatusKeyName; // 0x00C0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C8
    std::uint8_t RequiredTagQuery[0x48]; // 0x00D0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bAllowEvaluationRetry; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0119
    void* HealingSkillSet; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, HealingObjectKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_Heal::HealingObjectKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, CanHealWhileMovingKeyName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_Heal::CanHealWhileMovingKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, UnstuckExecutionStatusKeyName) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_Heal::UnstuckExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, MovementItemExecutionStatusKeyName) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_Heal::MovementItemExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, RequiredTagQuery) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_Heal::RequiredTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, bAllowEvaluationRetry) == 280, "Offset mismatch for UFortAthenaAIBotEvaluator_Heal::bAllowEvaluationRetry");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, HealingSkillSet) == 288, "Offset mismatch for UFortAthenaAIBotEvaluator_Heal::HealingSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HitAndRun
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_HitAndRun
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t AttackDurationBeforeEvade[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MeleeAttackMaxDistToEvade[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ClampEvadeDistanceEnable[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDistanceToEvade[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDistanceToEvade[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    std::uint8_t EvadeKeyName[0x4]; // 0x0268 (Size: 0x4, Type: NameProperty)
    std::uint8_t EvadeMovementStateKeyName[0x4]; // 0x026C (Size: 0x4, Type: NameProperty)
    std::uint8_t EvadeDestinationKeyName[0x4]; // 0x0270 (Size: 0x4, Type: NameProperty)
    FName WeaponTriggerMeleeName; // 0x0274 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0xC]; // 0x027C
    float MeleeAttackMaxDistToEvadeSqr; // 0x0288 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceToEvadeSqr; // 0x028C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, AttackDurationBeforeEvade) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::AttackDurationBeforeEvade");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MeleeAttackMaxDistToEvade) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::MeleeAttackMaxDistToEvade");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, ClampEvadeDistanceEnable) == 496, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::ClampEvadeDistanceEnable");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MinDistanceToEvade) == 536, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::MinDistanceToEvade");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MaxDistanceToEvade) == 576, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::MaxDistanceToEvade");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, EvadeKeyName) == 616, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::EvadeKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, EvadeMovementStateKeyName) == 620, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::EvadeMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, EvadeDestinationKeyName) == 624, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::EvadeDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, WeaponTriggerMeleeName) == 628, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::WeaponTriggerMeleeName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MeleeAttackMaxDistToEvadeSqr) == 648, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::MeleeAttackMaxDistToEvadeSqr");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MaxDistanceToEvadeSqr) == 652, "Offset mismatch for UFortAthenaAIBotEvaluator_HitAndRun::MaxDistanceToEvadeSqr");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HolsterWeapon
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_HolsterWeapon
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> ExecutionStatusesToCheckedNames; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00B8
    FName BlockWeaponActionsKeyName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    std::uint8_t HolsterEvenWithTarget[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    void* CachedNPCBehaviorParameters; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* CachedConvertParameters; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_HolsterWeapon, ExecutionStatusesToCheckedNames) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_HolsterWeapon::ExecutionStatusesToCheckedNames");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HolsterWeapon, BlockWeaponActionsKeyName) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_HolsterWeapon::BlockWeaponActionsKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HolsterWeapon, HolsterEvenWithTarget) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_HolsterWeapon::HolsterEvenWithTarget");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HolsterWeapon, CachedNPCBehaviorParameters) == 232, "Offset mismatch for UFortAthenaAIBotEvaluator_HolsterWeapon::CachedNPCBehaviorParameters");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HolsterWeapon, CachedConvertParameters) == 240, "Offset mismatch for UFortAthenaAIBotEvaluator_HolsterWeapon::CachedConvertParameters");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Investigate
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Investigate
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t LastKnownPositionName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t DestinationKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MoveToDestinationKeyName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AggressivenessName[0x4]; // 0x01AC (Size: 0x4, Type: NameProperty)
    std::uint8_t CautiousKeyName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlertLevelName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    void* SearchQueryFilterClass; // 0x01B8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x10]; // 0x01C0
    void* CacheAimingDigestedSkillSet; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    void* CacheAttackingDigestedSkillSet; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    void* CachedUnstuckSkillSet; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x48]; // 0x01E8
    TWeakObjectPtr<void> InvestigatingSupportingActor; // 0x0230 (Size: 0x8, Type: WeakObjectProperty)
    void* UnderminingBuildingActor; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    void* ExcludeReachingTarget; // 0x0240 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, LastKnownPositionName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::LastKnownPositionName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, DestinationKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::DestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, MoveToDestinationKeyName) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::MoveToDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, AggressivenessName) == 428, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::AggressivenessName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, CautiousKeyName) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::CautiousKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, AlertLevelName) == 436, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::AlertLevelName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, SearchQueryFilterClass) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::SearchQueryFilterClass");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, CacheAimingDigestedSkillSet) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::CacheAimingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, CacheAttackingDigestedSkillSet) == 472, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::CacheAttackingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, CachedUnstuckSkillSet) == 480, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::CachedUnstuckSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, InvestigatingSupportingActor) == 560, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::InvestigatingSupportingActor");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, UnderminingBuildingActor) == 568, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::UnderminingBuildingActor");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, ExcludeReachingTarget) == 576, "Offset mismatch for UFortAthenaAIBotEvaluator_Investigate::ExcludeReachingTarget");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_JumpOffBus
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_JumpOffBus
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName JumpOffBusDestinationName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00B0
    void* CacheMovementDigestedSkillSet; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_JumpOffBus, JumpOffBusDestinationName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_JumpOffBus::JumpOffBusDestinationName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_JumpOffBus, CacheMovementDigestedSkillSet) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_JumpOffBus::CacheMovementDigestedSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_MeleeAttack
// Kind: Class; super: FortAthenaAIBotEvaluator_Attack
class UFortAthenaAIBotEvaluator_MeleeAttack
{
public:
    std::uint8_t Pad_0000[0x1BC]; // 0x0000
    std::uint8_t WeaponTriggerMeleeName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    std::uint8_t ThrowableAttacksAllowedName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TraversalBlockMeleeAttackName[0x4]; // 0x01C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetContextReachableKeyName[0x4]; // 0x01C8 (Size: 0x4, Type: NameProperty)
    FName TargetContextInsideLeashKeyName; // 0x01CC (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x14]; // 0x01D4
    void* AttackingSkillSet; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ShouldValidateWeaponType[0x18]; // 0x01F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CheckMeleeHeightAligned[0x18]; // 0x0208 (Size: 0x18, Type: StructProperty)
    std::uint8_t AddExtentsToMeleeAttackDistance[0x18]; // 0x0220 (Size: 0x18, Type: StructProperty)
    std::uint8_t Use3DDistanceCheckForMeleeAttack[0x18]; // 0x0238 (Size: 0x18, Type: StructProperty)
    std::uint8_t CheckCooldownOnEnter[0x1]; // 0x0250 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, WeaponTriggerMeleeName) == 444, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::WeaponTriggerMeleeName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, ThrowableAttacksAllowedName) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::ThrowableAttacksAllowedName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, TraversalBlockMeleeAttackName) == 452, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::TraversalBlockMeleeAttackName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, TargetContextReachableKeyName) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::TargetContextReachableKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, TargetContextInsideLeashKeyName) == 460, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::TargetContextInsideLeashKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, AttackingSkillSet) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::AttackingSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, ShouldValidateWeaponType) == 496, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::ShouldValidateWeaponType");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, CheckMeleeHeightAligned) == 520, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::CheckMeleeHeightAligned");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, AddExtentsToMeleeAttackDistance) == 544, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::AddExtentsToMeleeAttackDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, Use3DDistanceCheckForMeleeAttack) == 568, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::Use3DDistanceCheckForMeleeAttack");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, CheckCooldownOnEnter) == 592, "Offset mismatch for UFortAthenaAIBotEvaluator_MeleeAttack::CheckCooldownOnEnter");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_MoveAway
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_MoveAway
{
public:
    std::uint8_t Pad_0000[0x210]; // 0x0000
    std::uint8_t MaxSecondsToReactToBump[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSecondsToReactToBox[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSecondsBetweenInstantReactions[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    void* FindAwayLocationFromPawnQueryTemplate; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FindAwayLocationFromPawnRunMode; // 0x0290 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0291
    void* FindAwayLocationFromBoxQueryTemplate; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FindAwayLocationFromBoxRunMode; // 0x02A0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_MoveAway, MaxSecondsToReactToBump) == 528, "Offset mismatch for UFortAthenaAIBotEvaluator_MoveAway::MaxSecondsToReactToBump");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MoveAway, MaxSecondsToReactToBox) == 568, "Offset mismatch for UFortAthenaAIBotEvaluator_MoveAway::MaxSecondsToReactToBox");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MoveAway, MinSecondsBetweenInstantReactions) == 608, "Offset mismatch for UFortAthenaAIBotEvaluator_MoveAway::MinSecondsBetweenInstantReactions");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MoveAway, FindAwayLocationFromPawnQueryTemplate) == 648, "Offset mismatch for UFortAthenaAIBotEvaluator_MoveAway::FindAwayLocationFromPawnQueryTemplate");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MoveAway, FindAwayLocationFromPawnRunMode) == 656, "Offset mismatch for UFortAthenaAIBotEvaluator_MoveAway::FindAwayLocationFromPawnRunMode");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MoveAway, FindAwayLocationFromBoxQueryTemplate) == 664, "Offset mismatch for UFortAthenaAIBotEvaluator_MoveAway::FindAwayLocationFromBoxQueryTemplate");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MoveAway, FindAwayLocationFromBoxRunMode) == 672, "Offset mismatch for UFortAthenaAIBotEvaluator_MoveAway::FindAwayLocationFromBoxRunMode");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Observe
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Observe
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AggressivenessName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    FName ObserveDestinationKeyName; // 0x00AC (Size: 0x8, Type: NameProperty)
    std::uint8_t bContinueMovementOnStart; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B5
    float MaxMovementDuration; // 0x00B8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Observe, AggressivenessName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_Observe::AggressivenessName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Observe, ObserveDestinationKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_Observe::ObserveDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Observe, bContinueMovementOnStart) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_Observe::bContinueMovementOnStart");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Observe, MaxMovementDuration) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_Observe::MaxMovementDuration");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PathExists
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_PathExists
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName PathExistsKeyName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t GoalKeyName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    float AcceptableRadius; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float PartialPathMaxDistance; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00BC
    void* FilterClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PathQueryType; // 0x00C8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C9
    std::uint8_t bProjectGoalLocation; // 0x00CC (Size: 0x1, Type: BoolProperty)
    // 0x00CC BoolProperty bReachTestIncludesAgentRadius (shared storage)
    // 0x00CC BoolProperty bReachTestIncludesGoalRadius (shared storage)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, PathExistsKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_PathExists::PathExistsKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, GoalKeyName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_PathExists::GoalKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, AcceptableRadius) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_PathExists::AcceptableRadius");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, PartialPathMaxDistance) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_PathExists::PartialPathMaxDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, FilterClass) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_PathExists::FilterClass");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, PathQueryType) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_PathExists::PathQueryType");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, bProjectGoalLocation) == 204, "Offset mismatch for UFortAthenaAIBotEvaluator_PathExists::bProjectGoalLocation");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PatrolAround
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_PatrolAround
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t EQSRequest[0x48]; // 0x01A0 (Size: 0x48, Type: StructProperty)
    void* NavigationQueryFilterClass; // 0x01E8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bFallbackToPointWithNoCustomNavigationQueryFilter; // 0x01F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01F1
    std::uint8_t PatrolDestinationName[0x4]; // 0x01F4 (Size: 0x4, Type: NameProperty)
    std::uint8_t PatrolExecutionStatusName[0x4]; // 0x01F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t PatrolMovementStateName[0x4]; // 0x01FC (Size: 0x4, Type: NameProperty)
    std::uint8_t BestTargetActorName[0x4]; // 0x0200 (Size: 0x4, Type: NameProperty)
    FName EnableKeyName; // 0x0204 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x4]; // 0x020C
    void* CacheAthenaGameMode; // 0x0210 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, EQSRequest) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::EQSRequest");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, NavigationQueryFilterClass) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::NavigationQueryFilterClass");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, bFallbackToPointWithNoCustomNavigationQueryFilter) == 496, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::bFallbackToPointWithNoCustomNavigationQueryFilter");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, PatrolDestinationName) == 500, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::PatrolDestinationName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, PatrolExecutionStatusName) == 504, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::PatrolExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, PatrolMovementStateName) == 508, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::PatrolMovementStateName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, BestTargetActorName) == 512, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::BestTargetActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, EnableKeyName) == 516, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::EnableKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, CacheAthenaGameMode) == 528, "Offset mismatch for UFortAthenaAIBotEvaluator_PatrolAround::CacheAthenaGameMode");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PlayEmote
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_PlayEmote
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t PlayEmoteExecutionStatusKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    FName PlayEmoteDestinationKeyName; // 0x01A4 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01AC
    void* ExcludeReachingTarget; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_PlayEmote, PlayEmoteExecutionStatusKeyName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_PlayEmote::PlayEmoteExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PlayEmote, PlayEmoteDestinationKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_PlayEmote::PlayEmoteDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PlayEmote, ExcludeReachingTarget) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_PlayEmote::ExcludeReachingTarget");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PropagateAwareness
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_PropagateAwareness
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ShouldPropagateToAwareAllies[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t AwarenessTagQuery[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    void* AwarenessGameplayEffectClass; // 0x0108 (Size: 0x8, Type: ClassProperty)
    TArray<void*> AwareAllyPawns; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AlreadyTestedPawns; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    void* PropagateAwarenessSkillSet; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* BehaviorControlsRuntimeParameters; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* AffiliationRuntimeParameters; // 0x0140 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, ShouldPropagateToAwareAllies) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_PropagateAwareness::ShouldPropagateToAwareAllies");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AwarenessTagQuery) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_PropagateAwareness::AwarenessTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AwarenessGameplayEffectClass) == 264, "Offset mismatch for UFortAthenaAIBotEvaluator_PropagateAwareness::AwarenessGameplayEffectClass");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AwareAllyPawns) == 272, "Offset mismatch for UFortAthenaAIBotEvaluator_PropagateAwareness::AwareAllyPawns");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AlreadyTestedPawns) == 288, "Offset mismatch for UFortAthenaAIBotEvaluator_PropagateAwareness::AlreadyTestedPawns");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, PropagateAwarenessSkillSet) == 304, "Offset mismatch for UFortAthenaAIBotEvaluator_PropagateAwareness::PropagateAwarenessSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, BehaviorControlsRuntimeParameters) == 312, "Offset mismatch for UFortAthenaAIBotEvaluator_PropagateAwareness::BehaviorControlsRuntimeParameters");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AffiliationRuntimeParameters) == 320, "Offset mismatch for UFortAthenaAIBotEvaluator_PropagateAwareness::AffiliationRuntimeParameters");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack
// Kind: Class; super: FortAthenaAIBotEvaluator_Attack
class UFortAthenaAIBotEvaluator_RangeAttack
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t WeaponReloadName[0x4]; // 0x01F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponFireName[0x4]; // 0x01FC (Size: 0x4, Type: NameProperty)
    std::uint8_t RangeAttackIsReadyToFireName[0x4]; // 0x0200 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTargetingName[0x4]; // 0x0204 (Size: 0x4, Type: NameProperty)
    std::uint8_t AggressivenessName[0x4]; // 0x0208 (Size: 0x4, Type: NameProperty)
    std::uint8_t HasLoSOnThreatName[0x4]; // 0x020C (Size: 0x4, Type: NameProperty)
    std::uint8_t UrgentMovementKeyName[0x4]; // 0x0210 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsManningTurretKeyName[0x4]; // 0x0214 (Size: 0x4, Type: NameProperty)
    std::uint8_t BlockWeaponActionsKeyName[0x4]; // 0x0218 (Size: 0x4, Type: NameProperty)
    FName CancelWeaponAutoReloadKeyName; // 0x021C (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x14]; // 0x0224
    std::uint8_t ShouldEvaluatePositioning[0x18]; // 0x0238 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAlwaysAllowTargetingEvaluation; // 0x0250 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipADSEvaluation; // 0x0251 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0252
    std::uint8_t SkipADSEvaluation[0x18]; // 0x0258 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequireLineOfSight[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    std::uint8_t bConsiderLoF; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0289
    std::uint8_t RequireLineOfFire[0x18]; // 0x0290 (Size: 0x18, Type: StructProperty)
    std::uint8_t bShouldValidateRangedWeapon; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x02A9
    float RangeReachHysteresisRatio; // 0x02AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x8]; // 0x02B0
    std::uint8_t ResetCanFireNextTimeOnEnter[0x18]; // 0x02B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CancelWeaponAutoReloadOnExit[0x40]; // 0x02D0 (Size: 0x40, Type: StructProperty)
    void* CacheRangeAttackDigestedSkillSet; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* CacheAimingDigestedSkillSet; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* CachePerceptionDigestedSkillSet; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* CacheAttackingDigestedSkillSet; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CacheZoneManager; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CachedAIServiceCover; // 0x0338 (Size: 0x8, Type: WeakObjectProperty)
    void* CachedSafeZoneComponent; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, WeaponReloadName) == 504, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::WeaponReloadName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, WeaponFireName) == 508, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::WeaponFireName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, RangeAttackIsReadyToFireName) == 512, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::RangeAttackIsReadyToFireName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, WeaponTargetingName) == 516, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::WeaponTargetingName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, AggressivenessName) == 520, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::AggressivenessName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, HasLoSOnThreatName) == 524, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::HasLoSOnThreatName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, UrgentMovementKeyName) == 528, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::UrgentMovementKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, IsManningTurretKeyName) == 532, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::IsManningTurretKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, BlockWeaponActionsKeyName) == 536, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::BlockWeaponActionsKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CancelWeaponAutoReloadKeyName) == 540, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CancelWeaponAutoReloadKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, ShouldEvaluatePositioning) == 568, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::ShouldEvaluatePositioning");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, bAlwaysAllowTargetingEvaluation) == 592, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::bAlwaysAllowTargetingEvaluation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, bSkipADSEvaluation) == 593, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::bSkipADSEvaluation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, SkipADSEvaluation) == 600, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::SkipADSEvaluation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, RequireLineOfSight) == 624, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::RequireLineOfSight");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, bConsiderLoF) == 648, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::bConsiderLoF");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, RequireLineOfFire) == 656, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::RequireLineOfFire");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, bShouldValidateRangedWeapon) == 680, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::bShouldValidateRangedWeapon");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, RangeReachHysteresisRatio) == 684, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::RangeReachHysteresisRatio");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, ResetCanFireNextTimeOnEnter) == 696, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::ResetCanFireNextTimeOnEnter");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CancelWeaponAutoReloadOnExit) == 720, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CancelWeaponAutoReloadOnExit");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CacheRangeAttackDigestedSkillSet) == 784, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CacheRangeAttackDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CacheAimingDigestedSkillSet) == 792, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CacheAimingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CachePerceptionDigestedSkillSet) == 800, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CachePerceptionDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CacheAttackingDigestedSkillSet) == 808, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CacheAttackingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CacheZoneManager) == 816, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CacheZoneManager");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CachedAIServiceCover) == 824, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CachedAIServiceCover");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CachedSafeZoneComponent) == 832, "Offset mismatch for UFortAthenaAIBotEvaluator_RangeAttack::CachedSafeZoneComponent");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReachBeacon
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_ReachBeacon
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ReachBeaconStatusKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t ReachBeaconMovementStateKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    FName ReachBeaconTargetKeyName; // 0x01A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01B0
    TWeakObjectPtr<void> CurrentBeacon; // 0x01B4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_ReachBeacon, ReachBeaconStatusKeyName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_ReachBeacon::ReachBeaconStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReachBeacon, ReachBeaconMovementStateKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_ReachBeacon::ReachBeaconMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReachBeacon, ReachBeaconTargetKeyName) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_ReachBeacon::ReachBeaconTargetKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReachBeacon, CurrentBeacon) == 436, "Offset mismatch for UFortAthenaAIBotEvaluator_ReachBeacon::CurrentBeacon");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReactToVerb
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_ReactToVerb
{
public:
    std::uint8_t Pad_0000[0x218]; // 0x0000
    void* CacheReactToVerbDigestedSkillSet; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x58]; // 0x0220
    std::uint8_t CanRunPreconditions[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t VerbReactionsMap[0x30]; // 0x02A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinDistanceFromPlayerToReact[0x28]; // 0x02D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDistanceFromPlayerToReactForGroupEmotes[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxReactionEmoteDuration[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxReactionEmoteDurationForGroupEmotes[0x28]; // 0x0348 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxReactionWaitTime[0x28]; // 0x0370 (Size: 0x28, Type: StructProperty)
    std::uint8_t DelayBeforeRunningQueuedReaction[0x28]; // 0x0398 (Size: 0x28, Type: StructProperty)
    std::uint8_t PerceptionConfiguration[0xC0]; // 0x03C0 (Size: 0xC0, Type: StructProperty)
    std::uint8_t bIsHighPriorityEvaluator; // 0x0480 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableNPCReactionsPersistence; // 0x0481 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0482
    std::uint8_t ReactToEmotes[0x28]; // 0x0488 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxNPCsReactingToEmotes[0x28]; // 0x04B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LimitReactToGroupEmote[0x28]; // 0x04D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReactToGroupEmoteIfClosestNPCWithinDistance[0x28]; // 0x0500 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReactToGroupEmoteDelaySecondsWhenPlayersNearby[0x28]; // 0x0528 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDistanceOfPlayersFromPlayerToConsiderNearbyPlayer[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReactToGroupEmoteDelayRandomDeviation[0x28]; // 0x0578 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReactToGroupEmoteDelayForNumPlayersNearby[0x28]; // 0x05A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReactToEmoteGameplayTag[0x8]; // 0x05C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ReactToEmoteRequiredTagQueryOnAI[0x48]; // 0x05D0 (Size: 0x48, Type: StructProperty)
    FName ReactToVerbTargetActorKeyName; // 0x0618 (Size: 0x8, Type: NameProperty)
    FName ReactToVerbShouldMoveKeyName; // 0x0620 (Size: 0x8, Type: NameProperty)
    FName ReactToVerbShouldMoveReachDistanceKeyName; // 0x0628 (Size: 0x8, Type: NameProperty)
    FName ExtraStructDataKeyName; // 0x0630 (Size: 0x8, Type: NameProperty)
    FName ReactToVerbShouldJoinGroupEmoteKeyName; // 0x0638 (Size: 0x8, Type: NameProperty)
    FName ShouldFollowTargetKeyName; // 0x0640 (Size: 0x8, Type: NameProperty)
    std::uint8_t TagQueryRequiredOnPlayerToMoveForReactToEmote[0x48]; // 0x0648 (Size: 0x48, Type: StructProperty)
    std::uint8_t TagQueryRequiredOnPlayerToLookAtCameraForReactToEmote[0x50]; // 0x0690 (Size: 0x50, Type: StructProperty)
    std::uint8_t CanRunPreconditionsQueryState[0x58]; // 0x06E0 (Size: 0x58, Type: StructProperty)
    std::uint8_t SaveControl[0x1]; // 0x0738 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, CacheReactToVerbDigestedSkillSet) == 536, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::CacheReactToVerbDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, CanRunPreconditions) == 632, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::CanRunPreconditions");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, VerbReactionsMap) == 672, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::VerbReactionsMap");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, MinDistanceFromPlayerToReact) == 720, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::MinDistanceFromPlayerToReact");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, MinDistanceFromPlayerToReactForGroupEmotes) == 760, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::MinDistanceFromPlayerToReactForGroupEmotes");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, MaxReactionEmoteDuration) == 800, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::MaxReactionEmoteDuration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, MaxReactionEmoteDurationForGroupEmotes) == 840, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::MaxReactionEmoteDurationForGroupEmotes");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, MaxReactionWaitTime) == 880, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::MaxReactionWaitTime");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, DelayBeforeRunningQueuedReaction) == 920, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::DelayBeforeRunningQueuedReaction");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, PerceptionConfiguration) == 960, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::PerceptionConfiguration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, bIsHighPriorityEvaluator) == 1152, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::bIsHighPriorityEvaluator");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, bEnableNPCReactionsPersistence) == 1153, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::bEnableNPCReactionsPersistence");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToEmotes) == 1160, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToEmotes");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, MaxNPCsReactingToEmotes) == 1200, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::MaxNPCsReactingToEmotes");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, LimitReactToGroupEmote) == 1240, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::LimitReactToGroupEmote");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToGroupEmoteIfClosestNPCWithinDistance) == 1280, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToGroupEmoteIfClosestNPCWithinDistance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToGroupEmoteDelaySecondsWhenPlayersNearby) == 1320, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToGroupEmoteDelaySecondsWhenPlayersNearby");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, MinDistanceOfPlayersFromPlayerToConsiderNearbyPlayer) == 1360, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::MinDistanceOfPlayersFromPlayerToConsiderNearbyPlayer");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToGroupEmoteDelayRandomDeviation) == 1400, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToGroupEmoteDelayRandomDeviation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToGroupEmoteDelayForNumPlayersNearby) == 1440, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToGroupEmoteDelayForNumPlayersNearby");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToEmoteGameplayTag) == 1480, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToEmoteGameplayTag");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToEmoteRequiredTagQueryOnAI) == 1488, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToEmoteRequiredTagQueryOnAI");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToVerbTargetActorKeyName) == 1560, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToVerbTargetActorKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToVerbShouldMoveKeyName) == 1568, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToVerbShouldMoveKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToVerbShouldMoveReachDistanceKeyName) == 1576, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToVerbShouldMoveReachDistanceKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ExtraStructDataKeyName) == 1584, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ExtraStructDataKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ReactToVerbShouldJoinGroupEmoteKeyName) == 1592, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ReactToVerbShouldJoinGroupEmoteKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, ShouldFollowTargetKeyName) == 1600, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::ShouldFollowTargetKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, TagQueryRequiredOnPlayerToMoveForReactToEmote) == 1608, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::TagQueryRequiredOnPlayerToMoveForReactToEmote");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, TagQueryRequiredOnPlayerToLookAtCameraForReactToEmote) == 1680, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::TagQueryRequiredOnPlayerToLookAtCameraForReactToEmote");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, CanRunPreconditionsQueryState) == 1760, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::CanRunPreconditionsQueryState");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReactToVerb, SaveControl) == 1848, "Offset mismatch for UFortAthenaAIBotEvaluator_ReactToVerb::SaveControl");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RecoverLineOfSight
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_RecoverLineOfSight
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t RecoveringLineOfSightMaxDuration[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    TArray<void*> ExecutionStatusToListenKeyNames; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RecoverLineOfSightExecutionStatusKeyName[0x4]; // 0x01D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t RecoverLineOfSightMovementStateKeyName[0x4]; // 0x01DC (Size: 0x4, Type: NameProperty)
    FName RecoverLineOfSightDestinationKeyName; // 0x01E0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_RecoverLineOfSight, RecoveringLineOfSightMaxDuration) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_RecoverLineOfSight::RecoveringLineOfSightMaxDuration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RecoverLineOfSight, ExecutionStatusToListenKeyNames) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_RecoverLineOfSight::ExecutionStatusToListenKeyNames");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RecoverLineOfSight, RecoverLineOfSightExecutionStatusKeyName) == 472, "Offset mismatch for UFortAthenaAIBotEvaluator_RecoverLineOfSight::RecoverLineOfSightExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RecoverLineOfSight, RecoverLineOfSightMovementStateKeyName) == 476, "Offset mismatch for UFortAthenaAIBotEvaluator_RecoverLineOfSight::RecoverLineOfSightMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RecoverLineOfSight, RecoverLineOfSightDestinationKeyName) == 480, "Offset mismatch for UFortAthenaAIBotEvaluator_RecoverLineOfSight::RecoverLineOfSightDestinationKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReloadWeapon
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_ReloadWeapon
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t WeaponKeyName[0x6]; // 0x00A8 (Size: 0x6, Type: NameProperty)
    std::uint8_t bCanReloadWeaponsInInventory; // 0x00AE (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_ReloadWeapon, WeaponKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_ReloadWeapon::WeaponKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReloadWeapon, bCanReloadWeaponsInInventory) == 174, "Offset mismatch for UFortAthenaAIBotEvaluator_ReloadWeapon::bCanReloadWeaponsInInventory");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Retreat
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Retreat
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    FName RetreatDestinationName; // 0x01A0 (Size: 0x8, Type: NameProperty)
    void* CacheAttackingDigestedSkillSet; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* CachedCoverComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Retreat, RetreatDestinationName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Retreat::RetreatDestinationName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Retreat, CacheAttackingDigestedSkillSet) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Retreat::CacheAttackingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Retreat, CachedCoverComponent) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_Retreat::CachedCoverComponent");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Revive
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Revive
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t LastReviveTargetExpiration[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReviveTargetKeyName[0x4]; // 0x01C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t ReviveLastTargetKeyName[0x4]; // 0x01CC (Size: 0x4, Type: NameProperty)
    void* ReviveBehaviorRuntimeParameters; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x01D8
    void* ReviveSkillSet; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, LastReviveTargetExpiration) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Revive::LastReviveTargetExpiration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, ReviveTargetKeyName) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_Revive::ReviveTargetKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, ReviveLastTargetKeyName) == 460, "Offset mismatch for UFortAthenaAIBotEvaluator_Revive::ReviveLastTargetKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, ReviveBehaviorRuntimeParameters) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_Revive::ReviveBehaviorRuntimeParameters");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, ReviveSkillSet) == 496, "Offset mismatch for UFortAthenaAIBotEvaluator_Revive::ReviveSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel
// Kind: Class; super: FortAthenaAIBotEvaluator_TagQuery
class UFortAthenaAIBotEvaluator_SandTunnel
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    std::uint8_t JumpExecutionStatusName[0x4]; // 0x00F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t LootInteractionExecutionStatusName[0x4]; // 0x00FC (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTriggerMeleeName[0x4]; // 0x0100 (Size: 0x4, Type: NameProperty)
    FName WeaponFireName; // 0x0104 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x010C
    std::uint8_t BuriedTagQuery[0x48]; // 0x0110 (Size: 0x48, Type: StructProperty)
    void* CacheMovementDigestedSkillSet; // 0x0158 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, JumpExecutionStatusName) == 248, "Offset mismatch for UFortAthenaAIBotEvaluator_SandTunnel::JumpExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, LootInteractionExecutionStatusName) == 252, "Offset mismatch for UFortAthenaAIBotEvaluator_SandTunnel::LootInteractionExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, WeaponTriggerMeleeName) == 256, "Offset mismatch for UFortAthenaAIBotEvaluator_SandTunnel::WeaponTriggerMeleeName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, WeaponFireName) == 260, "Offset mismatch for UFortAthenaAIBotEvaluator_SandTunnel::WeaponFireName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, BuriedTagQuery) == 272, "Offset mismatch for UFortAthenaAIBotEvaluator_SandTunnel::BuriedTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, CacheMovementDigestedSkillSet) == 344, "Offset mismatch for UFortAthenaAIBotEvaluator_SandTunnel::CacheMovementDigestedSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t DynamicPOIExecutionStatusKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    FName DynamicPOILocationKeyName; // 0x01A4 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01AC
    void* CachedBRLogic; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x38]; // 0x01B8
    std::uint8_t NextSearchTimerHandle[0x8]; // 0x01F0 (Size: 0x8, Type: StructProperty)
    TArray<void*> FailedBotPOIList; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CachedSelectedBotPOIID; // 0x0208 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, DynamicPOIExecutionStatusKeyName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::DynamicPOIExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, DynamicPOILocationKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::DynamicPOILocationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, CachedBRLogic) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::CachedBRLogic");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, NextSearchTimerHandle) == 496, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::NextSearchTimerHandle");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, FailedBotPOIList) == 504, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::FailedBotPOIList");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, CachedSelectedBotPOIID) == 520, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::CachedSelectedBotPOIID");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectVehicle
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_SelectVehicle
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t VehicleDestinationKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t SelectVehicleMovementStateKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t SelectVehicleStatusKeyName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    FName SelectedVehicleKeyName; // 0x01AC (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01B4
    std::uint8_t Enabled[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t VehicleSearchRadius[0x18]; // 0x01E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterOnlyWithHisConverter[0x18]; // 0x01F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterOnlyWithGroupLeader[0x18]; // 0x0210 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterAsDriver[0x18]; // 0x0228 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterVehiclesInWater[0x18]; // 0x0240 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterOutOfFuelVehicles[0x18]; // 0x0258 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterWithPlayerDriver[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterWithPlayerOnAnySeat[0x18]; // 0x0288 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterOnlyMatchingPatrols[0x18]; // 0x02A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t VehiclesFilterTagQuery[0x48]; // 0x02B8 (Size: 0x48, Type: StructProperty)
    std::uint8_t SeatsFilterTagQuery[0x48]; // 0x0300 (Size: 0x48, Type: StructProperty)
    std::uint8_t OwnerFilterTagQuery[0x48]; // 0x0348 (Size: 0x48, Type: StructProperty)
    std::uint8_t PatrolPathTagQuery[0x1]; // 0x0390 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, VehicleDestinationKeyName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::VehicleDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, SelectVehicleMovementStateKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::SelectVehicleMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, SelectVehicleStatusKeyName) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::SelectVehicleStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, SelectedVehicleKeyName) == 428, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::SelectedVehicleKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, Enabled) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::Enabled");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, VehicleSearchRadius) == 480, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::VehicleSearchRadius");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterOnlyWithHisConverter) == 504, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterOnlyWithHisConverter");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterOnlyWithGroupLeader) == 528, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterOnlyWithGroupLeader");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterAsDriver) == 552, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterAsDriver");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterVehiclesInWater) == 576, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterVehiclesInWater");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterOutOfFuelVehicles) == 600, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterOutOfFuelVehicles");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterWithPlayerDriver) == 624, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterWithPlayerDriver");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterWithPlayerOnAnySeat) == 648, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterWithPlayerOnAnySeat");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterOnlyMatchingPatrols) == 672, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterOnlyMatchingPatrols");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, VehiclesFilterTagQuery) == 696, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::VehiclesFilterTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, SeatsFilterTagQuery) == 768, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::SeatsFilterTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, OwnerFilterTagQuery) == 840, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::OwnerFilterTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, PatrolPathTagQuery) == 912, "Offset mismatch for UFortAthenaAIBotEvaluator_SelectVehicle::PatrolPathTagQuery");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectCommand
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_SmartObjectCommand
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* SmartObjectRuntimeParameters; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* SmartObjectSubsystem; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01B0
    std::uint8_t RunningCommandData[0x10]; // 0x01B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CommandOnCooldown[0x14]; // 0x01C8 (Size: 0x14, Type: StructProperty)
    std::uint8_t EvaluationTag[0x4]; // 0x01DC (Size: 0x4, Type: StructProperty)
    std::uint8_t bEvaluateSOValidityAfterChosen; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableEntryLocationsSupport; // 0x01E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x01E2
    std::uint8_t SingleCommandCooldown[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    void* OverridenFilterClassForEntryPoints; // 0x0210 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SmartObjectExecutionStatusKeyName[0x4]; // 0x0218 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectMovementStateKeyName[0x4]; // 0x021C (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationKeyName[0x4]; // 0x0220 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationRotationKeyName[0x4]; // 0x0224 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectShouldMoveKeyName[0x4]; // 0x0228 (Size: 0x4, Type: NameProperty)
    FName SmartObjectUrgencyKeyName; // 0x022C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SmartObjectRuntimeParameters) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SmartObjectRuntimeParameters");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SmartObjectSubsystem) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SmartObjectSubsystem");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, RunningCommandData) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::RunningCommandData");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, CommandOnCooldown) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::CommandOnCooldown");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, EvaluationTag) == 476, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::EvaluationTag");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, bEvaluateSOValidityAfterChosen) == 480, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::bEvaluateSOValidityAfterChosen");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, bEnableEntryLocationsSupport) == 481, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::bEnableEntryLocationsSupport");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SingleCommandCooldown) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SingleCommandCooldown");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, OverridenFilterClassForEntryPoints) == 528, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::OverridenFilterClassForEntryPoints");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SmartObjectExecutionStatusKeyName) == 536, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SmartObjectExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SmartObjectMovementStateKeyName) == 540, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SmartObjectMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SmartObjectDestinationKeyName) == 544, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SmartObjectDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SmartObjectDestinationRotationKeyName) == 548, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SmartObjectDestinationRotationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SmartObjectShouldMoveKeyName) == 552, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SmartObjectShouldMoveKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectCommand, SmartObjectUrgencyKeyName) == 556, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectCommand::SmartObjectUrgencyKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjectConverted
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_SmartObjectConverted
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* SmartObjectRuntimeParameters; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* SmartObjectSubsystem; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01B0
    std::uint8_t RunningData[0x8]; // 0x01B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t EvaluationTag[0x4]; // 0x01C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEvaluateSOValidityAfterChosen; // 0x01C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableEntryLocationsSupport; // 0x01C5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreCooldowns; // 0x01C6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x01C7
    void* OverridenFilterClassForEntryPoints; // 0x01C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SmartObjectExecutionStatusKeyName[0x4]; // 0x01D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectMovementStateKeyName[0x4]; // 0x01D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationKeyName[0x4]; // 0x01D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationRotationKeyName[0x4]; // 0x01DC (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectShouldMoveKeyName[0x4]; // 0x01E0 (Size: 0x4, Type: NameProperty)
    FName SmartObjectUrgencyKeyName; // 0x01E4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, SmartObjectRuntimeParameters) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::SmartObjectRuntimeParameters");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, SmartObjectSubsystem) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::SmartObjectSubsystem");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, RunningData) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::RunningData");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, EvaluationTag) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::EvaluationTag");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, bEvaluateSOValidityAfterChosen) == 452, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::bEvaluateSOValidityAfterChosen");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, bEnableEntryLocationsSupport) == 453, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::bEnableEntryLocationsSupport");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, bIgnoreCooldowns) == 454, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::bIgnoreCooldowns");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, OverridenFilterClassForEntryPoints) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::OverridenFilterClassForEntryPoints");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, SmartObjectExecutionStatusKeyName) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::SmartObjectExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, SmartObjectMovementStateKeyName) == 468, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::SmartObjectMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, SmartObjectDestinationKeyName) == 472, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::SmartObjectDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, SmartObjectDestinationRotationKeyName) == 476, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::SmartObjectDestinationRotationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, SmartObjectShouldMoveKeyName) == 480, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::SmartObjectShouldMoveKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjectConverted, SmartObjectUrgencyKeyName) == 484, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjectConverted::SmartObjectUrgencyKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjects
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_SmartObjects
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t EvaluationTag[0x4]; // 0x01A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEvaluateSOValidityAfterChosen; // 0x01A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableEntryLocationsSupport; // 0x01A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01A6
    std::uint8_t CanRunPrecondition[0x28]; // 0x01A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaximumEntryLocationsChecksPerEvaluation[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EntryLocationFailuresBlacklistedTime[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    void* DistanceToWeightCurveForSlotPicking; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    void* OverridenFilterClassForEntryPoints; // 0x0228 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SmartObjectExecutionStatusKeyName[0x4]; // 0x0240 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectMovementStateKeyName[0x4]; // 0x0244 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationKeyName[0x4]; // 0x0248 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationRotationKeyName[0x4]; // 0x024C (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectShouldMoveKeyName[0x4]; // 0x0250 (Size: 0x4, Type: NameProperty)
    FName SmartObjectUrgencyKeyName; // 0x0254 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x1C]; // 0x025C
    void* SmartObjectRuntimeParameters; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* SmartObjectSubsystem; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CanRunPreconditionQueryState[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, EvaluationTag) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::EvaluationTag");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, bEvaluateSOValidityAfterChosen) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::bEvaluateSOValidityAfterChosen");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, bEnableEntryLocationsSupport) == 421, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::bEnableEntryLocationsSupport");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, CanRunPrecondition) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::CanRunPrecondition");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, MaximumEntryLocationsChecksPerEvaluation) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::MaximumEntryLocationsChecksPerEvaluation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, EntryLocationFailuresBlacklistedTime) == 504, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::EntryLocationFailuresBlacklistedTime");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, DistanceToWeightCurveForSlotPicking) == 544, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::DistanceToWeightCurveForSlotPicking");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, OverridenFilterClassForEntryPoints) == 552, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::OverridenFilterClassForEntryPoints");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames) == 560, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectExecutionStatusKeyName) == 576, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectMovementStateKeyName) == 580, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectDestinationKeyName) == 584, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectDestinationRotationKeyName) == 588, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectDestinationRotationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectShouldMoveKeyName) == 592, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectShouldMoveKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectUrgencyKeyName) == 596, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectUrgencyKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectRuntimeParameters) == 632, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectRuntimeParameters");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectSubsystem) == 640, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectSubsystem");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, CanRunPreconditionQueryState) == 648, "Offset mismatch for UFortAthenaAIBotEvaluator_SmartObjects::CanRunPreconditionQueryState");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Sprinting
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Sprinting
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AllowSprintKeyName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AllowSlideKeyName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t JumpExecutionStatusName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TacticalSprintExecutionStatusName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t SlideExecutionStatusName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t UrgentMovementKeyName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t RangeAttackExecutionStatusName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t MeleeAttackExecutionStatusName[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t ThrowableAttackExecutionStatusName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t HealingExecutionStatusName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t CanTacticalSprintJump[0x2C]; // 0x00D0 (Size: 0x2C, Type: StructProperty)
    std::uint8_t bSprintOnlyInWater; // 0x00FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSprintOnlyInUrgentMode; // 0x00FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00FE
    void* MovementSkillSet; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* AimingSkillSet; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    float TacticalSprintTriggerChance; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float TacticalSprintTriggerChanceInUrgentMovement; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float TacticalSprintJumpTriggerChance; // 0x0118 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, AllowSprintKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::AllowSprintKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, AllowSlideKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::AllowSlideKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, JumpExecutionStatusName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::JumpExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, TacticalSprintExecutionStatusName) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::TacticalSprintExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, SlideExecutionStatusName) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::SlideExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, UrgentMovementKeyName) == 188, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::UrgentMovementKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, RangeAttackExecutionStatusName) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::RangeAttackExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, MeleeAttackExecutionStatusName) == 196, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::MeleeAttackExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, ThrowableAttackExecutionStatusName) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::ThrowableAttackExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, HealingExecutionStatusName) == 204, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::HealingExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, CanTacticalSprintJump) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::CanTacticalSprintJump");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, bSprintOnlyInWater) == 252, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::bSprintOnlyInWater");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, bSprintOnlyInUrgentMode) == 253, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::bSprintOnlyInUrgentMode");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, MovementSkillSet) == 256, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::MovementSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, AimingSkillSet) == 264, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::AimingSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, TacticalSprintTriggerChance) == 272, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::TacticalSprintTriggerChance");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, TacticalSprintTriggerChanceInUrgentMovement) == 276, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::TacticalSprintTriggerChanceInUrgentMovement");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, TacticalSprintJumpTriggerChance) == 280, "Offset mismatch for UFortAthenaAIBotEvaluator_Sprinting::TacticalSprintJumpTriggerChance");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_StealWall
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_StealWall
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t StealWallBuildTypeName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t StealWallBuildGridCoordName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    FName TargetActorName; // 0x00B0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00B8
    void* CacheBuildingDigestedSkillSet; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CurrentBuildingTarget; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, StealWallBuildTypeName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_StealWall::StealWallBuildTypeName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, StealWallBuildGridCoordName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_StealWall::StealWallBuildGridCoordName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, TargetActorName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_StealWall::TargetActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, CacheBuildingDigestedSkillSet) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_StealWall::CacheBuildingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, CurrentBuildingTarget) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_StealWall::CurrentBuildingTarget");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_StepBack
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_StepBack
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* CachedRangeAttackDigestedSkillSet; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedAIServiceCover; // 0x01A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01B0
    std::uint8_t StepBackExecutionStatusKeyName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t StepBackMovementStateKeyName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    FName StepBackDestinationKeyName; // 0x01C0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_StepBack, CachedRangeAttackDigestedSkillSet) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_StepBack::CachedRangeAttackDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StepBack, CachedAIServiceCover) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_StepBack::CachedAIServiceCover");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StepBack, StepBackExecutionStatusKeyName) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_StepBack::StepBackExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StepBack, StepBackMovementStateKeyName) == 444, "Offset mismatch for UFortAthenaAIBotEvaluator_StepBack::StepBackMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StepBack, StepBackDestinationKeyName) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_StepBack::StepBackDestinationKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Storm
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Storm
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    FName StormDestinationName; // 0x01A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01A8
    void* CacheAthenaGameMode; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* CachedBTComp; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Storm, StormDestinationName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Storm::StormDestinationName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Storm, CacheAthenaGameMode) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_Storm::CacheAthenaGameMode");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Storm, CachedBTComp) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_Storm::CachedBTComp");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQuery
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_TagQuery
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TagQuery[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    void* CachedAbilitySystemComponent; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_TagQuery, TagQuery) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_TagQuery::TagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TagQuery, CachedAbilitySystemComponent) == 240, "Offset mismatch for UFortAthenaAIBotEvaluator_TagQuery::CachedAbilitySystemComponent");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQueryToBBKey
// Kind: Class; super: FortAthenaAIBotEvaluator_TagQuery
class UFortAthenaAIBotEvaluator_TagQueryToBBKey
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    FName LinkedBBKeyName; // 0x00F8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_TagQueryToBBKey, LinkedBBKeyName) == 248, "Offset mismatch for UFortAthenaAIBotEvaluator_TagQueryToBBKey::LinkedBBKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TakeCover
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_TakeCover
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* CacheRangeAttackDigestedSkillSet; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* CacheAimingDigestedSkillSet; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedAIServiceCover; // 0x01B0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t DestinationKeyName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MoveToDestinationKeyName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    std::uint8_t HealingStatusKeyName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponFireName[0x4]; // 0x01C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetActorName[0x4]; // 0x01C8 (Size: 0x4, Type: NameProperty)
    FName BunkerStatusKeyName; // 0x01CC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, CacheRangeAttackDigestedSkillSet) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::CacheRangeAttackDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, CacheAimingDigestedSkillSet) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::CacheAimingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, CachedAIServiceCover) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::CachedAIServiceCover");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, DestinationKeyName) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::DestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, MoveToDestinationKeyName) == 444, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::MoveToDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, HealingStatusKeyName) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::HealingStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, WeaponFireName) == 452, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::WeaponFireName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, TargetActorName) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::TargetActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, BunkerStatusKeyName) == 460, "Offset mismatch for UFortAthenaAIBotEvaluator_TakeCover::BunkerStatusKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TargetContext
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_TargetContext
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TokenPositionTagQuery[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t TargetContextReachableKeyName[0x4]; // 0x00F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetContextReachableInStraightLineKeyName[0x4]; // 0x00F4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetContextInsideLeashKeyName[0x4]; // 0x00F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetContextLeashExitTimeKeyName[0x4]; // 0x00FC (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetActorName[0x4]; // 0x0100 (Size: 0x4, Type: NameProperty)
    std::uint8_t LastRangedWeaponFireAbilityAgainstTimeKeyName[0x4]; // 0x0104 (Size: 0x4, Type: NameProperty)
    void* CachedLeashComponent; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    float HorizontalProjectionForReachability; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float VerticalProjectionForReachability; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TimeToConsiderUnreachable[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseTargetNavAgentLocation; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTargetInterpenetrationTestEnabled; // 0x0131 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0132
    std::uint8_t TargetContextInterpenetratedKeyName[0x4]; // 0x0134 (Size: 0x4, Type: NameProperty)
    FName TargetContextInAirForAimingKeyName; // 0x0138 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TokenPositionTagQuery) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TokenPositionTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TargetContextReachableKeyName) == 240, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TargetContextReachableKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TargetContextReachableInStraightLineKeyName) == 244, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TargetContextReachableInStraightLineKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TargetContextInsideLeashKeyName) == 248, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TargetContextInsideLeashKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TargetContextLeashExitTimeKeyName) == 252, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TargetContextLeashExitTimeKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TargetActorName) == 256, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TargetActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, LastRangedWeaponFireAbilityAgainstTimeKeyName) == 260, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::LastRangedWeaponFireAbilityAgainstTimeKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, CachedLeashComponent) == 264, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::CachedLeashComponent");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, HorizontalProjectionForReachability) == 272, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::HorizontalProjectionForReachability");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, VerticalProjectionForReachability) == 276, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::VerticalProjectionForReachability");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TimeToConsiderUnreachable) == 280, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TimeToConsiderUnreachable");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, bUseTargetNavAgentLocation) == 304, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::bUseTargetNavAgentLocation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, bTargetInterpenetrationTestEnabled) == 305, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::bTargetInterpenetrationTestEnabled");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TargetContextInterpenetratedKeyName) == 308, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TargetContextInterpenetratedKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TargetContext, TargetContextInAirForAimingKeyName) == 312, "Offset mismatch for UFortAthenaAIBotEvaluator_TargetContext::TargetContextInAirForAimingKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ThrowableAttack
// Kind: Class; super: FortAthenaAIBotEvaluator_Attack
class UFortAthenaAIBotEvaluator_ThrowableAttack
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t WeaponTriggerThrowableName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    FName ThrowableAttackIsReadyToThrowName; // 0x01BC (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01C4
    void* AttackingSkillSet; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    void* RangeAttackSkillSet; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    void* AimingSkillSet; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    void* ChosenWeapon; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, WeaponTriggerThrowableName) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_ThrowableAttack::WeaponTriggerThrowableName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, ThrowableAttackIsReadyToThrowName) == 444, "Offset mismatch for UFortAthenaAIBotEvaluator_ThrowableAttack::ThrowableAttackIsReadyToThrowName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, AttackingSkillSet) == 456, "Offset mismatch for UFortAthenaAIBotEvaluator_ThrowableAttack::AttackingSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, RangeAttackSkillSet) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_ThrowableAttack::RangeAttackSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, AimingSkillSet) == 472, "Offset mismatch for UFortAthenaAIBotEvaluator_ThrowableAttack::AimingSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, ChosenWeapon) == 480, "Offset mismatch for UFortAthenaAIBotEvaluator_ThrowableAttack::ChosenWeapon");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TokenPosition
// Kind: Class; super: FortAthenaAIEvaluator_Movement
class UFortAthenaAIBotEvaluator_TokenPosition
{
public:
    std::uint8_t Pad_0000[0x198]; // 0x0000
    FName QueryResultKeyName; // 0x0198 (Size: 0x8, Type: NameProperty)
    TArray<void*> EQSs; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    float TokenPositionCooldown; // 0x01B0 (Size: 0x4, Type: FloatProperty)
    float TokenPositionCooldownVariation; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NewTokenPositionCooldown[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t NewTokenPositionCooldownVariation[0x18]; // 0x01D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DistanceToleranceForReturningToPosition[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CanAcquirePositionInEnter[0x18]; // 0x0200 (Size: 0x18, Type: StructProperty)
    std::uint8_t DistanceForDestinationAsTarget[0x18]; // 0x0218 (Size: 0x18, Type: StructProperty)
    std::uint8_t DestinationAsTargetOnceOnly[0x18]; // 0x0230 (Size: 0x18, Type: StructProperty)
    std::uint8_t CanAddNewPositionToProvider[0x18]; // 0x0248 (Size: 0x18, Type: StructProperty)
    std::uint8_t ShouldCheckIfPositionIsReachable[0x18]; // 0x0260 (Size: 0x18, Type: StructProperty)
    std::uint8_t MarkPositionAsDeniedIfNoVisibilityOnTarget[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t AcceptableDistanceForReservation[0x18]; // 0x0290 (Size: 0x18, Type: StructProperty)
    std::uint8_t GeneratedTokenPositionTagQuery[0x80]; // 0x02A8 (Size: 0x80, Type: StructProperty)
    void* CachedTokenConsumerComponent; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedTokenProviderComponent; // 0x0330 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t RunningEQSRequestID; // 0x0338 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPositionRequested; // 0x033C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPositionAcquiredInEnter; // 0x033D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMoveToTargetFinished; // 0x033E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x033F
    float PositionAcquiredFromQueryTimestamp; // 0x0340 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0344
    std::uint8_t WeaponKeyName[0x4]; // 0x034C (Size: 0x4, Type: NameProperty)
    FName TargetActorName; // 0x0350 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, QueryResultKeyName) == 408, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::QueryResultKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, EQSs) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::EQSs");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, TokenPositionCooldown) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::TokenPositionCooldown");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, TokenPositionCooldownVariation) == 436, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::TokenPositionCooldownVariation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, NewTokenPositionCooldown) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::NewTokenPositionCooldown");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, NewTokenPositionCooldownVariation) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::NewTokenPositionCooldownVariation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, DistanceToleranceForReturningToPosition) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::DistanceToleranceForReturningToPosition");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, CanAcquirePositionInEnter) == 512, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::CanAcquirePositionInEnter");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, DistanceForDestinationAsTarget) == 536, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::DistanceForDestinationAsTarget");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, DestinationAsTargetOnceOnly) == 560, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::DestinationAsTargetOnceOnly");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, CanAddNewPositionToProvider) == 584, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::CanAddNewPositionToProvider");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, ShouldCheckIfPositionIsReachable) == 608, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::ShouldCheckIfPositionIsReachable");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, MarkPositionAsDeniedIfNoVisibilityOnTarget) == 632, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::MarkPositionAsDeniedIfNoVisibilityOnTarget");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, AcceptableDistanceForReservation) == 656, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::AcceptableDistanceForReservation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, GeneratedTokenPositionTagQuery) == 680, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::GeneratedTokenPositionTagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, CachedTokenConsumerComponent) == 808, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::CachedTokenConsumerComponent");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, CachedTokenProviderComponent) == 816, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::CachedTokenProviderComponent");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, RunningEQSRequestID) == 824, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::RunningEQSRequestID");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, bPositionRequested) == 828, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::bPositionRequested");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, bPositionAcquiredInEnter) == 829, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::bPositionAcquiredInEnter");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, bMoveToTargetFinished) == 830, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::bMoveToTargetFinished");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, PositionAcquiredFromQueryTimestamp) == 832, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::PositionAcquiredFromQueryTimestamp");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, WeaponKeyName) == 844, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::WeaponKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TokenPosition, TargetActorName) == 848, "Offset mismatch for UFortAthenaAIBotEvaluator_TokenPosition::TargetActorName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TrapOnPathDetected
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_TrapOnPathDetected
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* CacheAimingDigestedSkillSet; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TrapOnPathKeyName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TrapActorOnPathKeyName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetActorName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t AlertLevelName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    FName RangeAttackExecutionStatusName; // 0x00C0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C8
    void* CurrentTrapTarget; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, CacheAimingDigestedSkillSet) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_TrapOnPathDetected::CacheAimingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, TrapOnPathKeyName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_TrapOnPathDetected::TrapOnPathKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, TrapActorOnPathKeyName) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_TrapOnPathDetected::TrapActorOnPathKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, TargetActorName) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_TrapOnPathDetected::TargetActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, AlertLevelName) == 188, "Offset mismatch for UFortAthenaAIBotEvaluator_TrapOnPathDetected::AlertLevelName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, RangeAttackExecutionStatusName) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_TrapOnPathDetected::RangeAttackExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, CurrentTrapTarget) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_TrapOnPathDetected::CurrentTrapTarget");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_UseAugmentMovementItem
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_UseAugmentMovementItem
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName MovementItemObjectKeyName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    FName UseSecondaryFireKeyName; // 0x00B0 (Size: 0x8, Type: NameProperty)
    FName CanUseInputToDeactivateKeyName; // 0x00B8 (Size: 0x8, Type: NameProperty)
    FName CanUseWhilePathFollowingKeyName; // 0x00C0 (Size: 0x8, Type: NameProperty)
    FName HealingExecutionStatusKeyName; // 0x00C8 (Size: 0x8, Type: NameProperty)
    void* CachedAIServicePlayerBots; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* CachedPathFollowingComponent; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedMovementItemData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_UseAugmentMovementItem, MovementItemObjectKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_UseAugmentMovementItem::MovementItemObjectKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_UseAugmentMovementItem, UseSecondaryFireKeyName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_UseAugmentMovementItem::UseSecondaryFireKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_UseAugmentMovementItem, CanUseInputToDeactivateKeyName) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_UseAugmentMovementItem::CanUseInputToDeactivateKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_UseAugmentMovementItem, CanUseWhilePathFollowingKeyName) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_UseAugmentMovementItem::CanUseWhilePathFollowingKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_UseAugmentMovementItem, HealingExecutionStatusKeyName) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_UseAugmentMovementItem::HealingExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_UseAugmentMovementItem, CachedAIServicePlayerBots) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_UseAugmentMovementItem::CachedAIServicePlayerBots");
static_assert(offsetof(UFortAthenaAIBotEvaluator_UseAugmentMovementItem, CachedPathFollowingComponent) == 216, "Offset mismatch for UFortAthenaAIBotEvaluator_UseAugmentMovementItem::CachedPathFollowingComponent");
static_assert(offsetof(UFortAthenaAIBotEvaluator_UseAugmentMovementItem, CachedMovementItemData) == 224, "Offset mismatch for UFortAthenaAIBotEvaluator_UseAugmentMovementItem::CachedMovementItemData");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleCombatNavigation
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_VehicleCombatNavigation
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ExecutionDuration[0x18]; // 0x01A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExecutionDurationDeviation[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CooldownDuration[0x18]; // 0x01D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CooldownDurationDeviation[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t OddsToStart[0x18]; // 0x0200 (Size: 0x18, Type: StructProperty)
    std::uint8_t OddsToStartWhenTargetMatchesOptionalTags[0x18]; // 0x0218 (Size: 0x18, Type: StructProperty)
    std::uint8_t OddsToGoOnCooldown[0x18]; // 0x0230 (Size: 0x18, Type: StructProperty)
    std::uint8_t OddsToGoOnCooldownWhenTargetMatchesOptionalTags[0x18]; // 0x0248 (Size: 0x18, Type: StructProperty)
    std::uint8_t OptionalTargetTagsToMatch[0x1]; // 0x0260 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, ExecutionDuration) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::ExecutionDuration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, ExecutionDurationDeviation) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::ExecutionDurationDeviation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, CooldownDuration) == 464, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::CooldownDuration");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, CooldownDurationDeviation) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::CooldownDurationDeviation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, OddsToStart) == 512, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::OddsToStart");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, OddsToStartWhenTargetMatchesOptionalTags) == 536, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::OddsToStartWhenTargetMatchesOptionalTags");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, OddsToGoOnCooldown) == 560, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::OddsToGoOnCooldown");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, OddsToGoOnCooldownWhenTargetMatchesOptionalTags) == 584, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::OddsToGoOnCooldownWhenTargetMatchesOptionalTags");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleCombatNavigation, OptionalTargetTagsToMatch) == 608, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleCombatNavigation::OptionalTargetTagsToMatch");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleEscalate
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_VehicleEscalate
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* CachedBotController; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleEscalate, CachedBotController) == 160, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleEscalate::CachedBotController");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleLeaveSeat
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_VehicleLeaveSeat
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t LeaveSeatStatusKeyName[0x6]; // 0x00A8 (Size: 0x6, Type: NameProperty)
    std::uint8_t bLeaveSeatWhenPlayerInVehicle; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLeaveSeatWhenConverterLeave; // 0x00AF (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleLeaveSeat, LeaveSeatStatusKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleLeaveSeat::LeaveSeatStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleLeaveSeat, bLeaveSeatWhenPlayerInVehicle) == 174, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleLeaveSeat::bLeaveSeatWhenPlayerInVehicle");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleLeaveSeat, bLeaveSeatWhenConverterLeave) == 175, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleLeaveSeat::bLeaveSeatWhenConverterLeave");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleSwitchSeat
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_VehicleSwitchSeat
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName SwitchSeatStatusKeyName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t bSwitchToDriverSeatIfEmpty[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSwitchToEmptyDriverSeat; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleSwitchSeat, SwitchSeatStatusKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleSwitchSeat::SwitchSeatStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleSwitchSeat, bSwitchToDriverSeatIfEmpty) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleSwitchSeat::bSwitchToDriverSeatIfEmpty");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleSwitchSeat, bSwitchToEmptyDriverSeat) == 200, "Offset mismatch for UFortAthenaAIBotEvaluator_VehicleSwitchSeat::bSwitchToEmptyDriverSeat");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_WaitForPassengers
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_WaitForPassengers
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName WaitForPassengersStatusKeyName; // 0x00A8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_WaitForPassengers, WaitForPassengersStatusKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_WaitForPassengers::WaitForPassengersStatusKeyName");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Warmup
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_Warmup
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t WarmupPlayEmoteExecutionStatusKeyName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t WarmupLootAndShootExecutionStatusKeyName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    FName WarmupIdleExecutionStatusKeyName; // 0x00B0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00B8
    void* CacheWarmupDigestedSkillSet; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Warmup, WarmupPlayEmoteExecutionStatusKeyName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_Warmup::WarmupPlayEmoteExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Warmup, WarmupLootAndShootExecutionStatusKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_Warmup::WarmupLootAndShootExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Warmup, WarmupIdleExecutionStatusKeyName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_Warmup::WarmupIdleExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Warmup, CacheWarmupDigestedSkillSet) == 192, "Offset mismatch for UFortAthenaAIBotEvaluator_Warmup::CacheWarmupDigestedSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_WeaponSelection
// Kind: Class; super: FortAthenaAIBotEvaluator
class UFortAthenaAIBotEvaluator_WeaponSelection
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ThrowableAttackIsReadyToThrowName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponKeyName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t TargetActorName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsManningTurretKeyName[0x4]; // 0x00B4 (Size: 0x4, Type: NameProperty)
    FName UseItemSelectNewWeaponKeyName; // 0x00B8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00C0
    void* CacheRangeAttackDigestedSkillSet; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* CacheAttackingDigestedSkillSet; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* CacheAimingDigestedSkillSet; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, ThrowableAttackIsReadyToThrowName) == 168, "Offset mismatch for UFortAthenaAIBotEvaluator_WeaponSelection::ThrowableAttackIsReadyToThrowName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, WeaponKeyName) == 172, "Offset mismatch for UFortAthenaAIBotEvaluator_WeaponSelection::WeaponKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, TargetActorName) == 176, "Offset mismatch for UFortAthenaAIBotEvaluator_WeaponSelection::TargetActorName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, IsManningTurretKeyName) == 180, "Offset mismatch for UFortAthenaAIBotEvaluator_WeaponSelection::IsManningTurretKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, UseItemSelectNewWeaponKeyName) == 184, "Offset mismatch for UFortAthenaAIBotEvaluator_WeaponSelection::UseItemSelectNewWeaponKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, CacheRangeAttackDigestedSkillSet) == 208, "Offset mismatch for UFortAthenaAIBotEvaluator_WeaponSelection::CacheRangeAttackDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, CacheAttackingDigestedSkillSet) == 216, "Offset mismatch for UFortAthenaAIBotEvaluator_WeaponSelection::CacheAttackingDigestedSkillSet");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, CacheAimingDigestedSkillSet) == 224, "Offset mismatch for UFortAthenaAIBotEvaluator_WeaponSelection::CacheAimingDigestedSkillSet");

// /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Zipline
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIBotEvaluator_Zipline
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t CurrentDestinationKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZiplineTargetKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t LastZiplineUsedName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZiplineMoveExecutionStatusKeyName[0x4]; // 0x01AC (Size: 0x4, Type: NameProperty)
    std::uint8_t ZiplineEntryLocationKeyName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZiplineExitLocationKeyName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZiplineLastUsageTimeName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZiplineUsageExecutionStatusName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    std::uint8_t WaitTimeBetweenZiplineRandomChoices[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProbabilityToUseZipline[0x38]; // 0x01E8 (Size: 0x38, Type: StructProperty)
    void* CachedSafeZoneComponent; // 0x0220 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, CurrentDestinationKeyName) == 416, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::CurrentDestinationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineTargetKeyName) == 420, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::ZiplineTargetKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, LastZiplineUsedName) == 424, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::LastZiplineUsedName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineMoveExecutionStatusKeyName) == 428, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::ZiplineMoveExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineEntryLocationKeyName) == 432, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::ZiplineEntryLocationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineExitLocationKeyName) == 436, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::ZiplineExitLocationKeyName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineLastUsageTimeName) == 440, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::ZiplineLastUsageTimeName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineUsageExecutionStatusName) == 444, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::ZiplineUsageExecutionStatusName");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, WaitTimeBetweenZiplineRandomChoices) == 448, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::WaitTimeBetweenZiplineRandomChoices");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ProbabilityToUseZipline) == 488, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::ProbabilityToUseZipline");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, CachedSafeZoneComponent) == 544, "Offset mismatch for UFortAthenaAIBotEvaluator_Zipline::CachedSafeZoneComponent");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_AbovePhysicsObject
// Kind: Class; super: FortAthenaAIEvaluator
class UFortAthenaAIEvaluator_AbovePhysicsObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CachedOwnerComp; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* CachedAIController; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* OverrideNavigationFilterClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0040
    FName ExecutionStatusName; // 0x0058 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0060
    TScriptInterface<void> CachedLODSettingsInterface; // 0x0068 (Size: 0x10, Type: InterfaceProperty)
    void* KeyAccessValidator; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_AbovePhysicsObject, CachedOwnerComp) == 40, "Offset mismatch for UFortAthenaAIEvaluator_AbovePhysicsObject::CachedOwnerComp");
static_assert(offsetof(UFortAthenaAIEvaluator_AbovePhysicsObject, CachedAIController) == 48, "Offset mismatch for UFortAthenaAIEvaluator_AbovePhysicsObject::CachedAIController");
static_assert(offsetof(UFortAthenaAIEvaluator_AbovePhysicsObject, OverrideNavigationFilterClass) == 56, "Offset mismatch for UFortAthenaAIEvaluator_AbovePhysicsObject::OverrideNavigationFilterClass");
static_assert(offsetof(UFortAthenaAIEvaluator_AbovePhysicsObject, ExecutionStatusName) == 88, "Offset mismatch for UFortAthenaAIEvaluator_AbovePhysicsObject::ExecutionStatusName");
static_assert(offsetof(UFortAthenaAIEvaluator_AbovePhysicsObject, CachedLODSettingsInterface) == 104, "Offset mismatch for UFortAthenaAIEvaluator_AbovePhysicsObject::CachedLODSettingsInterface");
static_assert(offsetof(UFortAthenaAIEvaluator_AbovePhysicsObject, KeyAccessValidator) == 120, "Offset mismatch for UFortAthenaAIEvaluator_AbovePhysicsObject::KeyAccessValidator");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase
// Kind: Class; super: Object
class UFortAthenaAIEvaluator_BlueprintBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bBlockWeaponActions; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ItemActivationType; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bGameplayAbilityEvaluator; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    std::uint8_t GameplayAbilityEvaluatorModule[0x50]; // 0x0038 (Size: 0x50, Type: StructProperty)
    std::uint8_t bCooldownEvaluator; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    TArray<void*> Cooldowns; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CooldownIdentifierTag[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Cooldown[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CooldownVariation[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t CooldownType; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDurationEvaluator; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x00FA
    std::uint8_t duration[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t DurationVariation[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseSkillLevelForDuration; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTokenEvaluator; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckGroupLeaderForTokens; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x5]; // 0x0153
    std::uint8_t TokenQuery[0x48]; // 0x0158 (Size: 0x48, Type: StructProperty)
    std::uint8_t TokenTargetKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bPositioningEvaluator; // 0x01A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x01A5
    std::uint8_t EQSRequest[0x48]; // 0x01A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t bDeferPositioningEQS; // 0x01F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPausePositioningWhileExecuting; // 0x01F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowStayingOnSamePosition; // 0x01F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTestPositioningReachability; // 0x01F3 (Size: 0x1, Type: BoolProperty)
    float PositioningReachabilityRetryDelay; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    void* PositioningReachabilityNavFilter; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PositioningDestinationKeyName[0x4]; // 0x0200 (Size: 0x4, Type: NameProperty)
    std::uint8_t PositioningDefendSpotKeyName[0x4]; // 0x0204 (Size: 0x4, Type: NameProperty)
    std::uint8_t PositioningActorKeyName[0x4]; // 0x0208 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsTokenPositioning; // 0x020C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x020D
    std::uint8_t GeneratedTokenPositioningQuery[0x48]; // 0x0210 (Size: 0x48, Type: StructProperty)
    std::uint8_t TokenPositioningTargetKeyName[0x4]; // 0x0258 (Size: 0x4, Type: NameProperty)
    std::uint8_t bWorldConditionEvaluator; // 0x025C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x025D
    std::uint8_t StartingWorldConditions[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t OngoingWorldConditions[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t StartingWorldConditionTargetKeyName[0x4]; // 0x02B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t OngoingWorldConditionTargetKeyName[0x4]; // 0x02B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t StartingWorldConditionVectorKeyName[0x4]; // 0x02B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t OngoingWorldConditionVectorKeyName[0x4]; // 0x02BC (Size: 0x4, Type: NameProperty)
    std::uint8_t StartingWorldConditionGroupLeaderVectorKeyName[0x4]; // 0x02C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t OngoingWorldConditionGroupLeaderVectorKeyName[0x4]; // 0x02C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bBlackboardConditionEvaluator; // 0x02C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEvaluateOnBlackboardKeyChange; // 0x02C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t StartingBlackboardConditionsPassMode; // 0x02CA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x5]; // 0x02CB
    TArray<void*> StartingBlackboardConditions; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OngoingBlackboardConditionsPassMode; // 0x02E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0009[0x7]; // 0x02E1
    TArray<void*> OngoingBlackboardConditions; // 0x02E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bClearanceEvaluator; // 0x02F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x7]; // 0x02F9
    std::uint8_t ClearanceData[0x18]; // 0x0300 (Size: 0x18, Type: StructProperty)
    std::uint8_t Interval[0x28]; // 0x0318 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomVariation[0x28]; // 0x0340 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCanTickWhenLowerPriority; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x7]; // 0x0369
    std::uint8_t ListeningTagsToEvaluate[0x20]; // 0x0370 (Size: 0x20, Type: StructProperty)
    std::uint8_t Context[0x18]; // 0x0390 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartingQueryState[0x30]; // 0x03A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OngoingQueryState[0x30]; // 0x03D8 (Size: 0x30, Type: StructProperty)
    void* CachedTokenConsumerComponent; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CachedGroupLeaderTokenConsumerComponent; // 0x0410 (Size: 0x8, Type: WeakObjectProperty)
    void* CachedOwnerComponent; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    void* CachedController; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    void* CachedLeashComponent; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_000C[0x28]; // 0x0430
    TArray<void*> ListeningBlackboardKeyNames; // 0x0458 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000D[0x178]; // 0x0468
    TWeakObjectPtr<void> CachedTokenProviderComponent; // 0x05E0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bBlockWeaponActions) == 48, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bBlockWeaponActions");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, ItemActivationType) == 49, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::ItemActivationType");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bGameplayAbilityEvaluator) == 50, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bGameplayAbilityEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, GameplayAbilityEvaluatorModule) == 56, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::GameplayAbilityEvaluatorModule");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bCooldownEvaluator) == 136, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bCooldownEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, Cooldowns) == 144, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::Cooldowns");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CooldownIdentifierTag) == 160, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CooldownIdentifierTag");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, Cooldown) == 168, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::Cooldown");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CooldownVariation) == 208, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CooldownVariation");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CooldownType) == 248, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CooldownType");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bDurationEvaluator) == 249, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bDurationEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, duration) == 256, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::duration");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, DurationVariation) == 296, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::DurationVariation");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bUseSkillLevelForDuration) == 336, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bUseSkillLevelForDuration");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bTokenEvaluator) == 337, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bTokenEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bCheckGroupLeaderForTokens) == 338, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bCheckGroupLeaderForTokens");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, TokenQuery) == 344, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::TokenQuery");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, TokenTargetKeyName) == 416, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::TokenTargetKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bPositioningEvaluator) == 420, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bPositioningEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, EQSRequest) == 424, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::EQSRequest");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bDeferPositioningEQS) == 496, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bDeferPositioningEQS");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bPausePositioningWhileExecuting) == 497, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bPausePositioningWhileExecuting");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bAllowStayingOnSamePosition) == 498, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bAllowStayingOnSamePosition");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bTestPositioningReachability) == 499, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bTestPositioningReachability");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, PositioningReachabilityRetryDelay) == 500, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::PositioningReachabilityRetryDelay");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, PositioningReachabilityNavFilter) == 504, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::PositioningReachabilityNavFilter");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, PositioningDestinationKeyName) == 512, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::PositioningDestinationKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, PositioningDefendSpotKeyName) == 516, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::PositioningDefendSpotKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, PositioningActorKeyName) == 520, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::PositioningActorKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bIsTokenPositioning) == 524, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bIsTokenPositioning");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, GeneratedTokenPositioningQuery) == 528, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::GeneratedTokenPositioningQuery");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, TokenPositioningTargetKeyName) == 600, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::TokenPositioningTargetKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bWorldConditionEvaluator) == 604, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bWorldConditionEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, StartingWorldConditions) == 608, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::StartingWorldConditions");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, OngoingWorldConditions) == 648, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::OngoingWorldConditions");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, StartingWorldConditionTargetKeyName) == 688, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::StartingWorldConditionTargetKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, OngoingWorldConditionTargetKeyName) == 692, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::OngoingWorldConditionTargetKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, StartingWorldConditionVectorKeyName) == 696, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::StartingWorldConditionVectorKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, OngoingWorldConditionVectorKeyName) == 700, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::OngoingWorldConditionVectorKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, StartingWorldConditionGroupLeaderVectorKeyName) == 704, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::StartingWorldConditionGroupLeaderVectorKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, OngoingWorldConditionGroupLeaderVectorKeyName) == 708, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::OngoingWorldConditionGroupLeaderVectorKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bBlackboardConditionEvaluator) == 712, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bBlackboardConditionEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bEvaluateOnBlackboardKeyChange) == 713, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bEvaluateOnBlackboardKeyChange");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, StartingBlackboardConditionsPassMode) == 714, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::StartingBlackboardConditionsPassMode");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, StartingBlackboardConditions) == 720, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::StartingBlackboardConditions");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, OngoingBlackboardConditionsPassMode) == 736, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::OngoingBlackboardConditionsPassMode");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, OngoingBlackboardConditions) == 744, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::OngoingBlackboardConditions");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bClearanceEvaluator) == 760, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bClearanceEvaluator");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, ClearanceData) == 768, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::ClearanceData");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, Interval) == 792, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::Interval");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, RandomVariation) == 832, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::RandomVariation");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bCanTickWhenLowerPriority) == 872, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::bCanTickWhenLowerPriority");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, ListeningTagsToEvaluate) == 880, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::ListeningTagsToEvaluate");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, Context) == 912, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::Context");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, StartingQueryState) == 936, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::StartingQueryState");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, OngoingQueryState) == 984, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::OngoingQueryState");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CachedTokenConsumerComponent) == 1032, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CachedTokenConsumerComponent");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CachedGroupLeaderTokenConsumerComponent) == 1040, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CachedGroupLeaderTokenConsumerComponent");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CachedOwnerComponent) == 1048, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CachedOwnerComponent");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CachedController) == 1056, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CachedController");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CachedLeashComponent) == 1064, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CachedLeashComponent");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, ListeningBlackboardKeyNames) == 1112, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::ListeningBlackboardKeyNames");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, CachedTokenProviderComponent) == 1504, "Offset mismatch for UFortAthenaAIEvaluator_BlueprintBase::CachedTokenProviderComponent");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase
// Kind: Class; super: FortAthenaAIEvaluator
class UFortAthenaAIEvaluator_DormantUntilPhase
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t bIsEnabled[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bDisabledInCreative; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequiredGamePhaseStep; // 0x00C9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00CA
    std::uint8_t DelayAfterPhase[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RandomDeviationAfterPhase[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, bIsEnabled) == 160, "Offset mismatch for UFortAthenaAIEvaluator_DormantUntilPhase::bIsEnabled");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, bDisabledInCreative) == 200, "Offset mismatch for UFortAthenaAIEvaluator_DormantUntilPhase::bDisabledInCreative");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, RequiredGamePhaseStep) == 201, "Offset mismatch for UFortAthenaAIEvaluator_DormantUntilPhase::RequiredGamePhaseStep");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, DelayAfterPhase) == 208, "Offset mismatch for UFortAthenaAIEvaluator_DormantUntilPhase::DelayAfterPhase");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, RandomDeviationAfterPhase) == 248, "Offset mismatch for UFortAthenaAIEvaluator_DormantUntilPhase::RandomDeviationAfterPhase");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_FleeEnvDanger
// Kind: Class; super: FortAthenaAIEvaluator
class UFortAthenaAIEvaluator_FleeEnvDanger
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    float MaximumCheckDistance; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float AdditionalFleeDistance; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EnvironmentalDangerExecutionStatusName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t EnvironmentalDangerFleeDirectionFromKeyName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    std::uint8_t EnvironmentalDangerFleeDirectionToKeyName[0x4]; // 0x00B0 (Size: 0x4, Type: NameProperty)
    FName EnvironmentalDangerFleeDistanceKeyName; // 0x00B4 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00BC
    void* CachedController; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, MaximumCheckDistance) == 160, "Offset mismatch for UFortAthenaAIEvaluator_FleeEnvDanger::MaximumCheckDistance");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, AdditionalFleeDistance) == 164, "Offset mismatch for UFortAthenaAIEvaluator_FleeEnvDanger::AdditionalFleeDistance");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, EnvironmentalDangerExecutionStatusName) == 168, "Offset mismatch for UFortAthenaAIEvaluator_FleeEnvDanger::EnvironmentalDangerExecutionStatusName");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, EnvironmentalDangerFleeDirectionFromKeyName) == 172, "Offset mismatch for UFortAthenaAIEvaluator_FleeEnvDanger::EnvironmentalDangerFleeDirectionFromKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, EnvironmentalDangerFleeDirectionToKeyName) == 176, "Offset mismatch for UFortAthenaAIEvaluator_FleeEnvDanger::EnvironmentalDangerFleeDirectionToKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, EnvironmentalDangerFleeDistanceKeyName) == 180, "Offset mismatch for UFortAthenaAIEvaluator_FleeEnvDanger::EnvironmentalDangerFleeDistanceKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, CachedController) == 192, "Offset mismatch for UFortAthenaAIEvaluator_FleeEnvDanger::CachedController");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_FollowConvoy
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIEvaluator_FollowConvoy
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t SkipSafeToReachLocationCheck[0x18]; // 0x01A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FollowConvoyStatusKeyName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t FollowConvoyMovementStateKeyName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    std::uint8_t FollowConvoyDestinationKeyName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    FName HasLeaderToFollowKeyName; // 0x01C4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_FollowConvoy, SkipSafeToReachLocationCheck) == 416, "Offset mismatch for UFortAthenaAIEvaluator_FollowConvoy::SkipSafeToReachLocationCheck");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowConvoy, FollowConvoyStatusKeyName) == 440, "Offset mismatch for UFortAthenaAIEvaluator_FollowConvoy::FollowConvoyStatusKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowConvoy, FollowConvoyMovementStateKeyName) == 444, "Offset mismatch for UFortAthenaAIEvaluator_FollowConvoy::FollowConvoyMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowConvoy, FollowConvoyDestinationKeyName) == 448, "Offset mismatch for UFortAthenaAIEvaluator_FollowConvoy::FollowConvoyDestinationKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowConvoy, HasLeaderToFollowKeyName) == 452, "Offset mismatch for UFortAthenaAIEvaluator_FollowConvoy::HasLeaderToFollowKeyName");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_FollowGroupLeader
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaAIEvaluator_FollowGroupLeader
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t bBotsSkipSafeToReachLocationCheck[0x18]; // 0x01A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t FollowGroupLeaderStatusKeyName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t FollowGroupLeaderMovementStateKeyName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    std::uint8_t FollowGroupLeaderDestinationKeyName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TooFarFromLeaderKeyName[0x4]; // 0x01C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t HasLeaderToFollowKeyName[0x4]; // 0x01C8 (Size: 0x4, Type: NameProperty)
    FName ShouldMoveToLeaderKeyName; // 0x01CC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, bBotsSkipSafeToReachLocationCheck) == 416, "Offset mismatch for UFortAthenaAIEvaluator_FollowGroupLeader::bBotsSkipSafeToReachLocationCheck");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, FollowGroupLeaderStatusKeyName) == 440, "Offset mismatch for UFortAthenaAIEvaluator_FollowGroupLeader::FollowGroupLeaderStatusKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, FollowGroupLeaderMovementStateKeyName) == 444, "Offset mismatch for UFortAthenaAIEvaluator_FollowGroupLeader::FollowGroupLeaderMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, FollowGroupLeaderDestinationKeyName) == 448, "Offset mismatch for UFortAthenaAIEvaluator_FollowGroupLeader::FollowGroupLeaderDestinationKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, TooFarFromLeaderKeyName) == 452, "Offset mismatch for UFortAthenaAIEvaluator_FollowGroupLeader::TooFarFromLeaderKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, HasLeaderToFollowKeyName) == 456, "Offset mismatch for UFortAthenaAIEvaluator_FollowGroupLeader::HasLeaderToFollowKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, ShouldMoveToLeaderKeyName) == 460, "Offset mismatch for UFortAthenaAIEvaluator_FollowGroupLeader::ShouldMoveToLeaderKeyName");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_Leash
// Kind: Class; super: FortAthenaAIEvaluator
class UFortAthenaAIEvaluator_Leash
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t GoalIsInsideLeashKeyName[0x4]; // 0x00A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AIIsInsideLeashKeyName[0x4]; // 0x00A4 (Size: 0x4, Type: NameProperty)
    FName LeashCenterLocationKeyName; // 0x00A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00B0
    void* CachedLeashComponent; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedAIGoalComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_Leash, GoalIsInsideLeashKeyName) == 160, "Offset mismatch for UFortAthenaAIEvaluator_Leash::GoalIsInsideLeashKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_Leash, AIIsInsideLeashKeyName) == 164, "Offset mismatch for UFortAthenaAIEvaluator_Leash::AIIsInsideLeashKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_Leash, LeashCenterLocationKeyName) == 168, "Offset mismatch for UFortAthenaAIEvaluator_Leash::LeashCenterLocationKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_Leash, CachedLeashComponent) == 184, "Offset mismatch for UFortAthenaAIEvaluator_Leash::CachedLeashComponent");
static_assert(offsetof(UFortAthenaAIEvaluator_Leash, CachedAIGoalComponent) == 192, "Offset mismatch for UFortAthenaAIEvaluator_Leash::CachedAIGoalComponent");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_LookAt
// Kind: Class; super: FortAthenaAIEvaluator
class UFortAthenaAIEvaluator_LookAt
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> PawnConfigurations; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SOConfigurations; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    void* UtilityWeightBaseDistanceCurve; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* UtilityWeightBaseDotCurve; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ExecutionStatusesToCheckForNonPendingNames; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00E0
    std::uint8_t bForceEvaluationOnNearbyPawnChange; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_LookAt, PawnConfigurations) == 160, "Offset mismatch for UFortAthenaAIEvaluator_LookAt::PawnConfigurations");
static_assert(offsetof(UFortAthenaAIEvaluator_LookAt, SOConfigurations) == 176, "Offset mismatch for UFortAthenaAIEvaluator_LookAt::SOConfigurations");
static_assert(offsetof(UFortAthenaAIEvaluator_LookAt, UtilityWeightBaseDistanceCurve) == 192, "Offset mismatch for UFortAthenaAIEvaluator_LookAt::UtilityWeightBaseDistanceCurve");
static_assert(offsetof(UFortAthenaAIEvaluator_LookAt, UtilityWeightBaseDotCurve) == 200, "Offset mismatch for UFortAthenaAIEvaluator_LookAt::UtilityWeightBaseDotCurve");
static_assert(offsetof(UFortAthenaAIEvaluator_LookAt, ExecutionStatusesToCheckForNonPendingNames) == 208, "Offset mismatch for UFortAthenaAIEvaluator_LookAt::ExecutionStatusesToCheckForNonPendingNames");
static_assert(offsetof(UFortAthenaAIEvaluator_LookAt, bForceEvaluationOnNearbyPawnChange) == 240, "Offset mismatch for UFortAthenaAIEvaluator_LookAt::bForceEvaluationOnNearbyPawnChange");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_NearbyActorsPerception
// Kind: Class; super: FortAthenaAIEvaluator
class UFortAthenaAIEvaluator_NearbyActorsPerception
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    FName FoundNearbyActorKeyName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t MinimumUpdateInterval[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::int32_t RequiredTypes; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    std::uint8_t MinimumDistanceToActors[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    TArray<void*> RequiredAttitudes; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequireLoS; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0111
    std::uint8_t RequiredTagsQuery[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, FoundNearbyActorKeyName) == 160, "Offset mismatch for UFortAthenaAIEvaluator_NearbyActorsPerception::FoundNearbyActorKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, MinimumUpdateInterval) == 168, "Offset mismatch for UFortAthenaAIEvaluator_NearbyActorsPerception::MinimumUpdateInterval");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, RequiredTypes) == 208, "Offset mismatch for UFortAthenaAIEvaluator_NearbyActorsPerception::RequiredTypes");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, MinimumDistanceToActors) == 216, "Offset mismatch for UFortAthenaAIEvaluator_NearbyActorsPerception::MinimumDistanceToActors");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, RequiredAttitudes) == 256, "Offset mismatch for UFortAthenaAIEvaluator_NearbyActorsPerception::RequiredAttitudes");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, bRequireLoS) == 272, "Offset mismatch for UFortAthenaAIEvaluator_NearbyActorsPerception::bRequireLoS");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, RequiredTagsQuery) == 280, "Offset mismatch for UFortAthenaAIEvaluator_NearbyActorsPerception::RequiredTagsQuery");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_SmartObjects
// Kind: Class; super: FortAthenaAIEvaluator
class UFortAthenaAIEvaluator_SmartObjects
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* SmartObjectRuntimeParameters; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* SmartObjectSubsystem; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00B0
    std::uint8_t EvaluationTag[0x4]; // 0x00B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEvaluateSOValidityAfterChosen; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableEntryLocationsSupport; // 0x00BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00BE
    std::uint8_t MaximumEntryLocationsChecksPerEvaluation[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EntryLocationFailuresBlacklistedTime[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    void* DistanceToWeightCurveForSlotPicking; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* OverridenFilterClassForEntryPoints; // 0x0118 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0130
    std::uint8_t SmartObjectExecutionStatusKeyName[0x4]; // 0x0140 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectMovementStateKeyName[0x4]; // 0x0144 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationKeyName[0x4]; // 0x0148 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationRotationKeyName[0x4]; // 0x014C (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectShouldMoveKeyName[0x4]; // 0x0150 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectUrgencyKeyName[0x4]; // 0x0154 (Size: 0x4, Type: NameProperty)
    std::uint8_t ForceDebugClosestSOTagsToRemoveOnPawn[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t bFirstTimeRunForceDebugClosestSO; // 0x0178 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, SmartObjectRuntimeParameters) == 160, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::SmartObjectRuntimeParameters");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, SmartObjectSubsystem) == 168, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::SmartObjectSubsystem");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, EvaluationTag) == 184, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::EvaluationTag");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, bEvaluateSOValidityAfterChosen) == 188, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::bEvaluateSOValidityAfterChosen");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, bEnableEntryLocationsSupport) == 189, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::bEnableEntryLocationsSupport");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, MaximumEntryLocationsChecksPerEvaluation) == 192, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::MaximumEntryLocationsChecksPerEvaluation");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, EntryLocationFailuresBlacklistedTime) == 232, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::EntryLocationFailuresBlacklistedTime");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, DistanceToWeightCurveForSlotPicking) == 272, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::DistanceToWeightCurveForSlotPicking");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, OverridenFilterClassForEntryPoints) == 280, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::OverridenFilterClassForEntryPoints");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames) == 288, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, SmartObjectExecutionStatusKeyName) == 320, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::SmartObjectExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, SmartObjectMovementStateKeyName) == 324, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::SmartObjectMovementStateKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, SmartObjectDestinationKeyName) == 328, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::SmartObjectDestinationKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, SmartObjectDestinationRotationKeyName) == 332, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::SmartObjectDestinationRotationKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, SmartObjectShouldMoveKeyName) == 336, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::SmartObjectShouldMoveKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, SmartObjectUrgencyKeyName) == 340, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::SmartObjectUrgencyKeyName");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, ForceDebugClosestSOTagsToRemoveOnPawn) == 344, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::ForceDebugClosestSOTagsToRemoveOnPawn");
static_assert(offsetof(UFortAthenaAIEvaluator_SmartObjects, bFirstTimeRunForceDebugClosestSO) == 376, "Offset mismatch for UFortAthenaAIEvaluator_SmartObjects::bFirstTimeRunForceDebugClosestSO");

// /Script/FortniteAIServer.FortAthenaAIEvaluator_SpeechBubble
// Kind: Class; super: FortAthenaAIEvaluator_NearbyActorsPerception
class UFortAthenaAIEvaluator_SpeechBubble
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    void* CachedSpeechBubbleComponent; // 0x0240 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAIEvaluator_SpeechBubble, CachedSpeechBubbleComponent) == 576, "Offset mismatch for UFortAthenaAIEvaluator_SpeechBubble::CachedSpeechBubbleComponent");

// /Script/FortniteAIServer.FortAthenaAIPlayActionComponent
// Kind: Class; super: FortControllerComponent
class UFortAthenaAIPlayActionComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bIsEnabled; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    TArray<void*> Actions; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> CachedOwnerController; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
    TMap<void*, void*> CachedActionsByData; // 0x00E8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortAthenaAIPlayActionComponent, bIsEnabled) == 200, "Offset mismatch for UFortAthenaAIPlayActionComponent::bIsEnabled");
static_assert(offsetof(UFortAthenaAIPlayActionComponent, Actions) == 208, "Offset mismatch for UFortAthenaAIPlayActionComponent::Actions");
static_assert(offsetof(UFortAthenaAIPlayActionComponent, CachedOwnerController) == 224, "Offset mismatch for UFortAthenaAIPlayActionComponent::CachedOwnerController");
static_assert(offsetof(UFortAthenaAIPlayActionComponent, CachedActionsByData) == 232, "Offset mismatch for UFortAthenaAIPlayActionComponent::CachedActionsByData");

// /Script/FortniteAIServer.FortAthenaAttachToActorStateTreeTask
// Kind: Class; super: StateTreeTaskBlueprintBase
class UFortAthenaAttachToActorStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* Actor; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttachExecutionMode; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0081
    std::uint8_t bHandleAthenaMovComponent; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetPhysicsToQueryOnlyWhileAttached; // 0x0085 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryToAttachToSkeletalMeshOnTargetActor; // 0x0086 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bChangeBaseToSkeletalMeshOnTargetActor; // 0x0087 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AttachmentLocationRule; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttachmentRotationRule; // 0x0089 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttachmentScaleRule; // 0x008A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWeldSimulatedBodiesOnAttach; // 0x008B (Size: 0x1, Type: BoolProperty)
    std::uint8_t AttachmentSocketName[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    std::uint8_t DetachExecutionMode; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0091
    std::uint8_t bForceChangeBaseOnDetach; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DetachmentLocationRule; // 0x0095 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DetachmentRotationRule; // 0x0096 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DetachmentScaleRule; // 0x0097 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCallModifyOnDetach; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHandleLaunchCharacter; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasHandledLaunchCharacter; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x5]; // 0x009B
    void* FortPawnActor; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, Actor) == 112, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::Actor");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, TargetActor) == 120, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::TargetActor");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachExecutionMode) == 128, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::AttachExecutionMode");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bHandleAthenaMovComponent) == 132, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bHandleAthenaMovComponent");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bSetPhysicsToQueryOnlyWhileAttached) == 133, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bSetPhysicsToQueryOnlyWhileAttached");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bTryToAttachToSkeletalMeshOnTargetActor) == 134, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bTryToAttachToSkeletalMeshOnTargetActor");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bChangeBaseToSkeletalMeshOnTargetActor) == 135, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bChangeBaseToSkeletalMeshOnTargetActor");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachmentLocationRule) == 136, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::AttachmentLocationRule");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachmentRotationRule) == 137, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::AttachmentRotationRule");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachmentScaleRule) == 138, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::AttachmentScaleRule");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bWeldSimulatedBodiesOnAttach) == 139, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bWeldSimulatedBodiesOnAttach");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachmentSocketName) == 140, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::AttachmentSocketName");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, DetachExecutionMode) == 144, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::DetachExecutionMode");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bForceChangeBaseOnDetach) == 148, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bForceChangeBaseOnDetach");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, DetachmentLocationRule) == 149, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::DetachmentLocationRule");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, DetachmentRotationRule) == 150, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::DetachmentRotationRule");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, DetachmentScaleRule) == 151, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::DetachmentScaleRule");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bCallModifyOnDetach) == 152, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bCallModifyOnDetach");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bHandleLaunchCharacter) == 153, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bHandleLaunchCharacter");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bHasHandledLaunchCharacter) == 154, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::bHasHandledLaunchCharacter");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, FortPawnActor) == 160, "Offset mismatch for UFortAthenaAttachToActorStateTreeTask::FortPawnActor");

// /Script/FortniteAIServer.FortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask
// Kind: Class; super: StateTreeTaskBlueprintBase
class UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* SmartObjectActor; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* Actor; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UIOptionsDataTable[0x30]; // 0x0080 (Size: 0x30, Type: StructProperty)
    std::uint8_t UIOptions[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t UIOptionsResult[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask, SmartObjectActor) == 112, "Offset mismatch for UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask::SmartObjectActor");
static_assert(offsetof(UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask, Actor) == 120, "Offset mismatch for UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask::Actor");
static_assert(offsetof(UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask, UIOptionsDataTable) == 128, "Offset mismatch for UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask::UIOptionsDataTable");
static_assert(offsetof(UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask, UIOptions) == 176, "Offset mismatch for UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask::UIOptions");
static_assert(offsetof(UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask, UIOptionsResult) == 200, "Offset mismatch for UFortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask::UIOptionsResult");

// /Script/FortniteAIServer.FortAthenaBTContext_SuppressAutomaticAttackCheck
// Kind: Class; super: FortBTService_ContextOverride
class UFortAthenaBTContext_SuppressAutomaticAttackCheck
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Enabled[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTContext_SuppressAutomaticAttackCheck, Enabled) == 112, "Offset mismatch for UFortAthenaBTContext_SuppressAutomaticAttackCheck::Enabled");

// /Script/FortniteAIServer.FortAthenaBTDecorator_BehaviorControls
// Kind: Class; super: BTDecorator
class UFortAthenaBTDecorator_BehaviorControls
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t BehaviorTreeBranch; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortAthenaBTDecorator_BehaviorControls, BehaviorTreeBranch) == 104, "Offset mismatch for UFortAthenaBTDecorator_BehaviorControls::BehaviorTreeBranch");

// /Script/FortniteAIServer.FortAthenaBTService_AIEvaluator
// Kind: Class; super: BTService
class UFortAthenaBTService_AIEvaluator
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t InjectionTag[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t AIEvaluatorClass[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_AIEvaluator, InjectionTag) == 112, "Offset mismatch for UFortAthenaBTService_AIEvaluator::InjectionTag");
static_assert(offsetof(UFortAthenaBTService_AIEvaluator, AIEvaluatorClass) == 120, "Offset mismatch for UFortAthenaBTService_AIEvaluator::AIEvaluatorClass");

// /Script/FortniteAIServer.FortAthenaBTService_AgentOffNavigationData
// Kind: Class; super: BTService
class UFortAthenaBTService_AgentOffNavigationData
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t AgentIsOffNavigationDataKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t AgentIsOffNavigationDataTimeKeyName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEvaluateOnTick; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t TickInterval[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEvaluateOnMoveRequestFinished; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTService_AgentOffNavigationData, AgentIsOffNavigationDataKeyName) == 112, "Offset mismatch for UFortAthenaBTService_AgentOffNavigationData::AgentIsOffNavigationDataKeyName");
static_assert(offsetof(UFortAthenaBTService_AgentOffNavigationData, AgentIsOffNavigationDataTimeKeyName) == 116, "Offset mismatch for UFortAthenaBTService_AgentOffNavigationData::AgentIsOffNavigationDataTimeKeyName");
static_assert(offsetof(UFortAthenaBTService_AgentOffNavigationData, bEvaluateOnTick) == 120, "Offset mismatch for UFortAthenaBTService_AgentOffNavigationData::bEvaluateOnTick");
static_assert(offsetof(UFortAthenaBTService_AgentOffNavigationData, TickInterval) == 128, "Offset mismatch for UFortAthenaBTService_AgentOffNavigationData::TickInterval");
static_assert(offsetof(UFortAthenaBTService_AgentOffNavigationData, bEvaluateOnMoveRequestFinished) == 168, "Offset mismatch for UFortAthenaBTService_AgentOffNavigationData::bEvaluateOnMoveRequestFinished");

// /Script/FortniteAIServer.FortAthenaBTService_AlertLevel
// Kind: Class; super: BTService
class UFortAthenaBTService_AlertLevel
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t AlertLevelKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t LastKnownPositionKeyName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t LastKnownPositionTypeKeyName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    FName LastKnownPositionTimeKeyName; // 0x007C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_AlertLevel, AlertLevelKeyName) == 112, "Offset mismatch for UFortAthenaBTService_AlertLevel::AlertLevelKeyName");
static_assert(offsetof(UFortAthenaBTService_AlertLevel, LastKnownPositionKeyName) == 116, "Offset mismatch for UFortAthenaBTService_AlertLevel::LastKnownPositionKeyName");
static_assert(offsetof(UFortAthenaBTService_AlertLevel, LastKnownPositionTypeKeyName) == 120, "Offset mismatch for UFortAthenaBTService_AlertLevel::LastKnownPositionTypeKeyName");
static_assert(offsetof(UFortAthenaBTService_AlertLevel, LastKnownPositionTimeKeyName) == 124, "Offset mismatch for UFortAthenaBTService_AlertLevel::LastKnownPositionTimeKeyName");

// /Script/FortniteAIServer.FortAthenaBTService_ApplyGameplayEffect
// Kind: Class; super: BTService
class UFortAthenaBTService_ApplyGameplayEffect
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t GameplayEffectClass[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayEffectLevel[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_ApplyGameplayEffect, GameplayEffectClass) == 112, "Offset mismatch for UFortAthenaBTService_ApplyGameplayEffect::GameplayEffectClass");
static_assert(offsetof(UFortAthenaBTService_ApplyGameplayEffect, GameplayEffectLevel) == 144, "Offset mismatch for UFortAthenaBTService_ApplyGameplayEffect::GameplayEffectLevel");

// /Script/FortniteAIServer.FortAthenaBTService_ApplyGameplayTags
// Kind: Class; super: BTService
class UFortAthenaBTService_ApplyGameplayTags
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t GameplayTagsToApply[0x30]; // 0x0070 (Size: 0x30, Type: StructProperty)
    std::uint8_t bReplicateTags[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RemoveTagsOnCeaseRelevant[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_ApplyGameplayTags, GameplayTagsToApply) == 112, "Offset mismatch for UFortAthenaBTService_ApplyGameplayTags::GameplayTagsToApply");
static_assert(offsetof(UFortAthenaBTService_ApplyGameplayTags, bReplicateTags) == 160, "Offset mismatch for UFortAthenaBTService_ApplyGameplayTags::bReplicateTags");
static_assert(offsetof(UFortAthenaBTService_ApplyGameplayTags, RemoveTagsOnCeaseRelevant) == 184, "Offset mismatch for UFortAthenaBTService_ApplyGameplayTags::RemoveTagsOnCeaseRelevant");

// /Script/FortniteAIServer.FortAthenaBTService_ApplyPatrolTags
// Kind: Class; super: BTService
class UFortAthenaBTService_ApplyPatrolTags
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float Interval; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float RandomDeviation; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCallTickOnSearchStart; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bRestartTimerOnEachActivation (shared storage)
};

static_assert(offsetof(UFortAthenaBTService_ApplyPatrolTags, Interval) == 96, "Offset mismatch for UFortAthenaBTService_ApplyPatrolTags::Interval");
static_assert(offsetof(UFortAthenaBTService_ApplyPatrolTags, RandomDeviation) == 100, "Offset mismatch for UFortAthenaBTService_ApplyPatrolTags::RandomDeviation");
static_assert(offsetof(UFortAthenaBTService_ApplyPatrolTags, bCallTickOnSearchStart) == 104, "Offset mismatch for UFortAthenaBTService_ApplyPatrolTags::bCallTickOnSearchStart");

// /Script/FortniteAIServer.FortAthenaBTService_ApplySkillSet
// Kind: Class; super: BTService
class UFortAthenaBTService_ApplySkillSet
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SkillSetClass[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_ApplySkillSet, SkillSetClass) == 112, "Offset mismatch for UFortAthenaBTService_ApplySkillSet::SkillSetClass");

// /Script/FortniteAIServer.FortAthenaBTService_BuildConstruction
// Kind: Class; super: BTService
class UFortAthenaBTService_BuildConstruction
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t StealWallBuildName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t StealWallBuildTypeName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    FName StealWallBuildGridCoordName; // 0x0078 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_BuildConstruction, StealWallBuildName) == 112, "Offset mismatch for UFortAthenaBTService_BuildConstruction::StealWallBuildName");
static_assert(offsetof(UFortAthenaBTService_BuildConstruction, StealWallBuildTypeName) == 116, "Offset mismatch for UFortAthenaBTService_BuildConstruction::StealWallBuildTypeName");
static_assert(offsetof(UFortAthenaBTService_BuildConstruction, StealWallBuildGridCoordName) == 120, "Offset mismatch for UFortAthenaBTService_BuildConstruction::StealWallBuildGridCoordName");

// /Script/FortniteAIServer.FortAthenaBTService_Clamber
// Kind: Class; super: BTService
class UFortAthenaBTService_Clamber
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ClamberExecutionStatusName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClamberOriginLocationName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClamberDestinationLocationName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t ClamberAbilityStatusName[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    std::uint8_t JumpExecutionStatusName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    FName CrouchExecutionStatusName; // 0x0084 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x8]; // 0x008C
    std::uint32_t FirstJumpRetryMaxCount; // 0x0094 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ClamberAttemptRetryMaxCount; // 0x0098 (Size: 0x4, Type: UInt32Property)
    float FirstJumpRetryDelay; // 0x009C (Size: 0x4, Type: FloatProperty)
    float FirstJumpClamberMaxStartDelay; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float ClamberRetryDelay; // 0x00A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberExecutionStatusName) == 112, "Offset mismatch for UFortAthenaBTService_Clamber::ClamberExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberOriginLocationName) == 116, "Offset mismatch for UFortAthenaBTService_Clamber::ClamberOriginLocationName");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberDestinationLocationName) == 120, "Offset mismatch for UFortAthenaBTService_Clamber::ClamberDestinationLocationName");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberAbilityStatusName) == 124, "Offset mismatch for UFortAthenaBTService_Clamber::ClamberAbilityStatusName");
static_assert(offsetof(UFortAthenaBTService_Clamber, JumpExecutionStatusName) == 128, "Offset mismatch for UFortAthenaBTService_Clamber::JumpExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Clamber, CrouchExecutionStatusName) == 132, "Offset mismatch for UFortAthenaBTService_Clamber::CrouchExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Clamber, FirstJumpRetryMaxCount) == 148, "Offset mismatch for UFortAthenaBTService_Clamber::FirstJumpRetryMaxCount");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberAttemptRetryMaxCount) == 152, "Offset mismatch for UFortAthenaBTService_Clamber::ClamberAttemptRetryMaxCount");
static_assert(offsetof(UFortAthenaBTService_Clamber, FirstJumpRetryDelay) == 156, "Offset mismatch for UFortAthenaBTService_Clamber::FirstJumpRetryDelay");
static_assert(offsetof(UFortAthenaBTService_Clamber, FirstJumpClamberMaxStartDelay) == 160, "Offset mismatch for UFortAthenaBTService_Clamber::FirstJumpClamberMaxStartDelay");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberRetryDelay) == 164, "Offset mismatch for UFortAthenaBTService_Clamber::ClamberRetryDelay");

// /Script/FortniteAIServer.FortAthenaBTService_CopyActorLocation
// Kind: Class; super: BTService
class UFortAthenaBTService_CopyActorLocation
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SourceBlackboardKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t DestinationBlackboardKey[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCopyOnBecomeRelevant[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCopyOnCeaseRelevant[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCopyWhenSourceValueChange[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_CopyActorLocation, SourceBlackboardKey) == 112, "Offset mismatch for UFortAthenaBTService_CopyActorLocation::SourceBlackboardKey");
static_assert(offsetof(UFortAthenaBTService_CopyActorLocation, DestinationBlackboardKey) == 152, "Offset mismatch for UFortAthenaBTService_CopyActorLocation::DestinationBlackboardKey");
static_assert(offsetof(UFortAthenaBTService_CopyActorLocation, bCopyOnBecomeRelevant) == 192, "Offset mismatch for UFortAthenaBTService_CopyActorLocation::bCopyOnBecomeRelevant");
static_assert(offsetof(UFortAthenaBTService_CopyActorLocation, bCopyOnCeaseRelevant) == 216, "Offset mismatch for UFortAthenaBTService_CopyActorLocation::bCopyOnCeaseRelevant");
static_assert(offsetof(UFortAthenaBTService_CopyActorLocation, bCopyWhenSourceValueChange) == 240, "Offset mismatch for UFortAthenaBTService_CopyActorLocation::bCopyWhenSourceValueChange");

// /Script/FortniteAIServer.FortAthenaBTService_CopyBlackboardVariable
// Kind: Class; super: BTService
class UFortAthenaBTService_CopyBlackboardVariable
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SourceBlackboardKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t DestinationBlackboardKey[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCopyOnBecomeRelevant; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    // 0x00C0 BoolProperty bCopyOnCeaseRelevant (shared storage)
    // 0x00C0 BoolProperty bCopyWhenSourceValueChange (shared storage)
};

static_assert(offsetof(UFortAthenaBTService_CopyBlackboardVariable, SourceBlackboardKey) == 112, "Offset mismatch for UFortAthenaBTService_CopyBlackboardVariable::SourceBlackboardKey");
static_assert(offsetof(UFortAthenaBTService_CopyBlackboardVariable, DestinationBlackboardKey) == 152, "Offset mismatch for UFortAthenaBTService_CopyBlackboardVariable::DestinationBlackboardKey");
static_assert(offsetof(UFortAthenaBTService_CopyBlackboardVariable, bCopyOnBecomeRelevant) == 192, "Offset mismatch for UFortAthenaBTService_CopyBlackboardVariable::bCopyOnBecomeRelevant");

// /Script/FortniteAIServer.FortAthenaBTService_Crouch
// Kind: Class; super: BTService
class UFortAthenaBTService_Crouch
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName CrouchExecutionStatusName; // 0x0070 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_Crouch, CrouchExecutionStatusName) == 112, "Offset mismatch for UFortAthenaBTService_Crouch::CrouchExecutionStatusName");

// /Script/FortniteAIServer.FortAthenaBTService_Escape
// Kind: Class; super: BTService
class UFortAthenaBTService_Escape
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName EscapeKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
    FName EscapeFromStormKeyName; // 0x0078 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_Escape, EscapeKeyName) == 112, "Offset mismatch for UFortAthenaBTService_Escape::EscapeKeyName");
static_assert(offsetof(UFortAthenaBTService_Escape, EscapeFromStormKeyName) == 120, "Offset mismatch for UFortAthenaBTService_Escape::EscapeFromStormKeyName");

// /Script/FortniteAIServer.FortAthenaBTService_HeightMap
// Kind: Class; super: BTService
class UFortAthenaBTService_HeightMap
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName HeightMapAverageFloorHeightKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
    std::uint8_t AverageFloorHeightRadius[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t AverageFloorHeightHeight[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AverageFloorHeightUseLowResolution[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_HeightMap, HeightMapAverageFloorHeightKeyName) == 112, "Offset mismatch for UFortAthenaBTService_HeightMap::HeightMapAverageFloorHeightKeyName");
static_assert(offsetof(UFortAthenaBTService_HeightMap, AverageFloorHeightRadius) == 120, "Offset mismatch for UFortAthenaBTService_HeightMap::AverageFloorHeightRadius");
static_assert(offsetof(UFortAthenaBTService_HeightMap, AverageFloorHeightHeight) == 160, "Offset mismatch for UFortAthenaBTService_HeightMap::AverageFloorHeightHeight");
static_assert(offsetof(UFortAthenaBTService_HeightMap, AverageFloorHeightUseLowResolution) == 200, "Offset mismatch for UFortAthenaBTService_HeightMap::AverageFloorHeightUseLowResolution");

// /Script/FortniteAIServer.FortAthenaBTService_Interact
// Kind: Class; super: BTService
class UFortAthenaBTService_Interact
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t InteractExecutionStatusKeySelector[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t InteractContextInfoKeySelector[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t InteractObjectKeySelector[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExecutionStatusKeySelector[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MovementStateKeySelector[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t InteractionBeingAttempted; // 0x0138 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRequireDistanceCheck; // 0x0139 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequireBlockedCheck; // 0x013A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTService_Interact, InteractExecutionStatusKeySelector) == 112, "Offset mismatch for UFortAthenaBTService_Interact::InteractExecutionStatusKeySelector");
static_assert(offsetof(UFortAthenaBTService_Interact, InteractContextInfoKeySelector) == 152, "Offset mismatch for UFortAthenaBTService_Interact::InteractContextInfoKeySelector");
static_assert(offsetof(UFortAthenaBTService_Interact, InteractObjectKeySelector) == 192, "Offset mismatch for UFortAthenaBTService_Interact::InteractObjectKeySelector");
static_assert(offsetof(UFortAthenaBTService_Interact, ExecutionStatusKeySelector) == 232, "Offset mismatch for UFortAthenaBTService_Interact::ExecutionStatusKeySelector");
static_assert(offsetof(UFortAthenaBTService_Interact, MovementStateKeySelector) == 272, "Offset mismatch for UFortAthenaBTService_Interact::MovementStateKeySelector");
static_assert(offsetof(UFortAthenaBTService_Interact, InteractionBeingAttempted) == 312, "Offset mismatch for UFortAthenaBTService_Interact::InteractionBeingAttempted");
static_assert(offsetof(UFortAthenaBTService_Interact, bRequireDistanceCheck) == 313, "Offset mismatch for UFortAthenaBTService_Interact::bRequireDistanceCheck");
static_assert(offsetof(UFortAthenaBTService_Interact, bRequireBlockedCheck) == 314, "Offset mismatch for UFortAthenaBTService_Interact::bRequireBlockedCheck");

// /Script/FortniteAIServer.FortAthenaBTService_JetpackStrafe
// Kind: Class; super: FortAthenaBTService_Jump
class UFortAthenaBTService_JetpackStrafe
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    FName JetpackStrafeExecutionStatusName; // 0x0088 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_JetpackStrafe, JetpackStrafeExecutionStatusName) == 136, "Offset mismatch for UFortAthenaBTService_JetpackStrafe::JetpackStrafeExecutionStatusName");

// /Script/FortniteAIServer.FortAthenaBTService_Jump
// Kind: Class; super: BTService
class UFortAthenaBTService_Jump
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName JumpExecutionStatusName; // 0x0070 (Size: 0x8, Type: NameProperty)
    FName CrouchExecutionStatusName; // 0x0078 (Size: 0x8, Type: NameProperty)
    float JumpInputReleaseDelay; // 0x0080 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaBTService_Jump, JumpExecutionStatusName) == 112, "Offset mismatch for UFortAthenaBTService_Jump::JumpExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Jump, CrouchExecutionStatusName) == 120, "Offset mismatch for UFortAthenaBTService_Jump::CrouchExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Jump, JumpInputReleaseDelay) == 128, "Offset mismatch for UFortAthenaBTService_Jump::JumpInputReleaseDelay");

// /Script/FortniteAIServer.FortAthenaBTService_JumpOffBus
// Kind: Class; super: BTService
class UFortAthenaBTService_JumpOffBus
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName JumpOffBusExecutionStatusName; // 0x0070 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_JumpOffBus, JumpOffBusExecutionStatusName) == 112, "Offset mismatch for UFortAthenaBTService_JumpOffBus::JumpOffBusExecutionStatusName");

// /Script/FortniteAIServer.FortAthenaBTService_LocationSynchronizerReservation
// Kind: Class; super: BTService
class UFortAthenaBTService_LocationSynchronizerReservation
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t LocationToReserveKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t LocationHardReservationBoundsRatio[0x20]; // 0x0098 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocationSoftReservationBoundsRatio[0x20]; // 0x00B8 (Size: 0x20, Type: StructProperty)
    std::uint8_t HasLocationReservedKey[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_LocationSynchronizerReservation, LocationToReserveKey) == 112, "Offset mismatch for UFortAthenaBTService_LocationSynchronizerReservation::LocationToReserveKey");
static_assert(offsetof(UFortAthenaBTService_LocationSynchronizerReservation, LocationHardReservationBoundsRatio) == 152, "Offset mismatch for UFortAthenaBTService_LocationSynchronizerReservation::LocationHardReservationBoundsRatio");
static_assert(offsetof(UFortAthenaBTService_LocationSynchronizerReservation, LocationSoftReservationBoundsRatio) == 184, "Offset mismatch for UFortAthenaBTService_LocationSynchronizerReservation::LocationSoftReservationBoundsRatio");
static_assert(offsetof(UFortAthenaBTService_LocationSynchronizerReservation, HasLocationReservedKey) == 216, "Offset mismatch for UFortAthenaBTService_LocationSynchronizerReservation::HasLocationReservedKey");

// /Script/FortniteAIServer.FortAthenaBTService_ManageVehicleWeapon
// Kind: Class; super: FortAthenaBTService_ManageWeapon
class UFortAthenaBTService_ManageVehicleWeapon
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t WeaponFireName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTriggerMeleeName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTriggerThrowableName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponReloadName[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTargetingName[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::uint8_t TacticalSprintExecutionStatusName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t HealingStatusKeyName[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    std::uint8_t BlockWeaponActionsKeyName[0x4]; // 0x0090 (Size: 0x4, Type: NameProperty)
    FName RangedWeaponCancelAutoReloadKeyName; // 0x0094 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x14]; // 0x009C
    std::uint8_t AllowAttackingWhileSprinting[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEndChargeOnFireStop; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, WeaponFireName) == 112, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::WeaponFireName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, WeaponTriggerMeleeName) == 116, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::WeaponTriggerMeleeName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, WeaponTriggerThrowableName) == 120, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::WeaponTriggerThrowableName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, WeaponReloadName) == 124, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::WeaponReloadName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, WeaponName) == 128, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::WeaponName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, WeaponTargetingName) == 132, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::WeaponTargetingName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, TacticalSprintExecutionStatusName) == 136, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::TacticalSprintExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, HealingStatusKeyName) == 140, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::HealingStatusKeyName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, BlockWeaponActionsKeyName) == 144, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::BlockWeaponActionsKeyName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, RangedWeaponCancelAutoReloadKeyName) == 148, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::RangedWeaponCancelAutoReloadKeyName");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, AllowAttackingWhileSprinting) == 176, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::AllowAttackingWhileSprinting");
static_assert(offsetof(UFortAthenaBTService_ManageVehicleWeapon, bEndChargeOnFireStop) == 200, "Offset mismatch for UFortAthenaBTService_ManageVehicleWeapon::bEndChargeOnFireStop");

// /Script/FortniteAIServer.FortAthenaBTService_ManageWeapon
// Kind: Class; super: BTService
class UFortAthenaBTService_ManageWeapon
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t WeaponFireName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTriggerMeleeName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTriggerThrowableName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponReloadName[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t WeaponTargetingName[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::uint8_t TacticalSprintExecutionStatusName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t HealingStatusKeyName[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    std::uint8_t BlockWeaponActionsKeyName[0x4]; // 0x0090 (Size: 0x4, Type: NameProperty)
    FName RangedWeaponCancelAutoReloadKeyName; // 0x0094 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x14]; // 0x009C
    std::uint8_t AllowAttackingWhileSprinting[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEndChargeOnFireStop; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponFireName) == 112, "Offset mismatch for UFortAthenaBTService_ManageWeapon::WeaponFireName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponTriggerMeleeName) == 116, "Offset mismatch for UFortAthenaBTService_ManageWeapon::WeaponTriggerMeleeName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponTriggerThrowableName) == 120, "Offset mismatch for UFortAthenaBTService_ManageWeapon::WeaponTriggerThrowableName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponReloadName) == 124, "Offset mismatch for UFortAthenaBTService_ManageWeapon::WeaponReloadName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponName) == 128, "Offset mismatch for UFortAthenaBTService_ManageWeapon::WeaponName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponTargetingName) == 132, "Offset mismatch for UFortAthenaBTService_ManageWeapon::WeaponTargetingName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, TacticalSprintExecutionStatusName) == 136, "Offset mismatch for UFortAthenaBTService_ManageWeapon::TacticalSprintExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, HealingStatusKeyName) == 140, "Offset mismatch for UFortAthenaBTService_ManageWeapon::HealingStatusKeyName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, BlockWeaponActionsKeyName) == 144, "Offset mismatch for UFortAthenaBTService_ManageWeapon::BlockWeaponActionsKeyName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, RangedWeaponCancelAutoReloadKeyName) == 148, "Offset mismatch for UFortAthenaBTService_ManageWeapon::RangedWeaponCancelAutoReloadKeyName");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, AllowAttackingWhileSprinting) == 176, "Offset mismatch for UFortAthenaBTService_ManageWeapon::AllowAttackingWhileSprinting");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, bEndChargeOnFireStop) == 200, "Offset mismatch for UFortAthenaBTService_ManageWeapon::bEndChargeOnFireStop");

// /Script/FortniteAIServer.FortAthenaBTService_ModifyTokenNumber
// Kind: Class; super: BTService
class UFortAthenaBTService_ModifyTokenNumber
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t TokenTagQuery[0x48]; // 0x0070 (Size: 0x48, Type: StructProperty)
    std::uint8_t NewTokenAmount[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_ModifyTokenNumber, TokenTagQuery) == 112, "Offset mismatch for UFortAthenaBTService_ModifyTokenNumber::TokenTagQuery");
static_assert(offsetof(UFortAthenaBTService_ModifyTokenNumber, NewTokenAmount) == 184, "Offset mismatch for UFortAthenaBTService_ModifyTokenNumber::NewTokenAmount");

// /Script/FortniteAIServer.FortAthenaBTService_ModulateMovementStyleToDestination
// Kind: Class; super: BTService
class UFortAthenaBTService_ModulateMovementStyleToDestination
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t DestinationBlackboardKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanSprint[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t SprintingDistance[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SprintingHysteresisDistance[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CanRun[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RunningDistance[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RunningHysteresisDistance[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_ModulateMovementStyleToDestination, DestinationBlackboardKey) == 112, "Offset mismatch for UFortAthenaBTService_ModulateMovementStyleToDestination::DestinationBlackboardKey");
static_assert(offsetof(UFortAthenaBTService_ModulateMovementStyleToDestination, CanSprint) == 152, "Offset mismatch for UFortAthenaBTService_ModulateMovementStyleToDestination::CanSprint");
static_assert(offsetof(UFortAthenaBTService_ModulateMovementStyleToDestination, SprintingDistance) == 176, "Offset mismatch for UFortAthenaBTService_ModulateMovementStyleToDestination::SprintingDistance");
static_assert(offsetof(UFortAthenaBTService_ModulateMovementStyleToDestination, SprintingHysteresisDistance) == 200, "Offset mismatch for UFortAthenaBTService_ModulateMovementStyleToDestination::SprintingHysteresisDistance");
static_assert(offsetof(UFortAthenaBTService_ModulateMovementStyleToDestination, CanRun) == 224, "Offset mismatch for UFortAthenaBTService_ModulateMovementStyleToDestination::CanRun");
static_assert(offsetof(UFortAthenaBTService_ModulateMovementStyleToDestination, RunningDistance) == 248, "Offset mismatch for UFortAthenaBTService_ModulateMovementStyleToDestination::RunningDistance");
static_assert(offsetof(UFortAthenaBTService_ModulateMovementStyleToDestination, RunningHysteresisDistance) == 272, "Offset mismatch for UFortAthenaBTService_ModulateMovementStyleToDestination::RunningHysteresisDistance");

// /Script/FortniteAIServer.FortAthenaBTService_ModulateSpeedOnDistance
// Kind: Class; super: BTService
class UFortAthenaBTService_ModulateSpeedOnDistance
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t TooFarFromLeaderKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    FName FollowGroupLeaderDestinationKeyName; // 0x0074 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x007C
    std::uint8_t TargetSpeed[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxSpeed[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_ModulateSpeedOnDistance, TooFarFromLeaderKeyName) == 112, "Offset mismatch for UFortAthenaBTService_ModulateSpeedOnDistance::TooFarFromLeaderKeyName");
static_assert(offsetof(UFortAthenaBTService_ModulateSpeedOnDistance, FollowGroupLeaderDestinationKeyName) == 116, "Offset mismatch for UFortAthenaBTService_ModulateSpeedOnDistance::FollowGroupLeaderDestinationKeyName");
static_assert(offsetof(UFortAthenaBTService_ModulateSpeedOnDistance, TargetSpeed) == 128, "Offset mismatch for UFortAthenaBTService_ModulateSpeedOnDistance::TargetSpeed");
static_assert(offsetof(UFortAthenaBTService_ModulateSpeedOnDistance, MaxSpeed) == 152, "Offset mismatch for UFortAthenaBTService_ModulateSpeedOnDistance::MaxSpeed");

// /Script/FortniteAIServer.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
// Kind: Class; super: BTService
class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t BlackboardKeyA[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlackboardKeyB[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    float MinDistance; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MaxDistance; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float MinDistanceSpeed; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceSpeed; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCalculateAs2D; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, BlackboardKeyA) == 112, "Offset mismatch for UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::BlackboardKeyA");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, BlackboardKeyB) == 152, "Offset mismatch for UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::BlackboardKeyB");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, MinDistance) == 192, "Offset mismatch for UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::MinDistance");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, MaxDistance) == 196, "Offset mismatch for UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::MaxDistance");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, MinDistanceSpeed) == 200, "Offset mismatch for UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::MinDistanceSpeed");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, MaxDistanceSpeed) == 204, "Offset mismatch for UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::MaxDistanceSpeed");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, bCalculateAs2D) == 208, "Offset mismatch for UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::bCalculateAs2D");

// /Script/FortniteAIServer.FortAthenaBTService_MovementListener
// Kind: Class; super: BTService
class UFortAthenaBTService_MovementListener
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t MovementStateKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t IsStuckKeyName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSuccessPartialAsFail; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t MaxFailCount[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDurationToFail[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_MovementListener, MovementStateKeyName) == 112, "Offset mismatch for UFortAthenaBTService_MovementListener::MovementStateKeyName");
static_assert(offsetof(UFortAthenaBTService_MovementListener, IsStuckKeyName) == 116, "Offset mismatch for UFortAthenaBTService_MovementListener::IsStuckKeyName");
static_assert(offsetof(UFortAthenaBTService_MovementListener, bSuccessPartialAsFail) == 120, "Offset mismatch for UFortAthenaBTService_MovementListener::bSuccessPartialAsFail");
static_assert(offsetof(UFortAthenaBTService_MovementListener, MaxFailCount) == 128, "Offset mismatch for UFortAthenaBTService_MovementListener::MaxFailCount");
static_assert(offsetof(UFortAthenaBTService_MovementListener, MaxDurationToFail) == 168, "Offset mismatch for UFortAthenaBTService_MovementListener::MaxDurationToFail");

// /Script/FortniteAIServer.FortAthenaBTService_MovementStyle
// Kind: Class; super: BTService
class UFortAthenaBTService_MovementStyle
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t MovementStyle; // 0x0070 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    std::uint8_t NewMovementStyle[0x30]; // 0x0078 (Size: 0x30, Type: StructProperty)
    std::uint8_t TagCondition[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t BlackboardCondition[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t InvertBlackboardCondition[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_MovementStyle, MovementStyle) == 112, "Offset mismatch for UFortAthenaBTService_MovementStyle::MovementStyle");
static_assert(offsetof(UFortAthenaBTService_MovementStyle, NewMovementStyle) == 120, "Offset mismatch for UFortAthenaBTService_MovementStyle::NewMovementStyle");
static_assert(offsetof(UFortAthenaBTService_MovementStyle, TagCondition) == 168, "Offset mismatch for UFortAthenaBTService_MovementStyle::TagCondition");
static_assert(offsetof(UFortAthenaBTService_MovementStyle, BlackboardCondition) == 240, "Offset mismatch for UFortAthenaBTService_MovementStyle::BlackboardCondition");
static_assert(offsetof(UFortAthenaBTService_MovementStyle, InvertBlackboardCondition) == 280, "Offset mismatch for UFortAthenaBTService_MovementStyle::InvertBlackboardCondition");

// /Script/FortniteAIServer.FortAthenaBTService_Patrolling
// Kind: Class; super: BTService
class UFortAthenaBTService_Patrolling
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName PatrollingAppendDestinationKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
    float AcceptableRadius; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x007C
    void* FilterClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowPartialPath; // 0x0088 (Size: 0x1, Type: BoolProperty)
    // 0x0088 BoolProperty bProjectGoalLocation (shared storage)
};

static_assert(offsetof(UFortAthenaBTService_Patrolling, PatrollingAppendDestinationKeyName) == 112, "Offset mismatch for UFortAthenaBTService_Patrolling::PatrollingAppendDestinationKeyName");
static_assert(offsetof(UFortAthenaBTService_Patrolling, AcceptableRadius) == 120, "Offset mismatch for UFortAthenaBTService_Patrolling::AcceptableRadius");
static_assert(offsetof(UFortAthenaBTService_Patrolling, FilterClass) == 128, "Offset mismatch for UFortAthenaBTService_Patrolling::FilterClass");
static_assert(offsetof(UFortAthenaBTService_Patrolling, bAllowPartialPath) == 136, "Offset mismatch for UFortAthenaBTService_Patrolling::bAllowPartialPath");

// /Script/FortniteAIServer.FortAthenaBTService_PauseVehicle
// Kind: Class; super: BTService
class UFortAthenaBTService_PauseVehicle
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float Interval; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float RandomDeviation; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCallTickOnSearchStart; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bRestartTimerOnEachActivation (shared storage)
};

static_assert(offsetof(UFortAthenaBTService_PauseVehicle, Interval) == 96, "Offset mismatch for UFortAthenaBTService_PauseVehicle::Interval");
static_assert(offsetof(UFortAthenaBTService_PauseVehicle, RandomDeviation) == 100, "Offset mismatch for UFortAthenaBTService_PauseVehicle::RandomDeviation");
static_assert(offsetof(UFortAthenaBTService_PauseVehicle, bCallTickOnSearchStart) == 104, "Offset mismatch for UFortAthenaBTService_PauseVehicle::bCallTickOnSearchStart");

// /Script/FortniteAIServer.FortAthenaBTService_PerceptionCheck
// Kind: Class; super: BTService
class UFortAthenaBTService_PerceptionCheck
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t PerceptionTargetActorKey[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    FName PerceptionTargetActorIsBeingSeenKeyName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_PerceptionCheck, PerceptionTargetActorKey) == 112, "Offset mismatch for UFortAthenaBTService_PerceptionCheck::PerceptionTargetActorKey");
static_assert(offsetof(UFortAthenaBTService_PerceptionCheck, PerceptionTargetActorIsBeingSeenKeyName) == 144, "Offset mismatch for UFortAthenaBTService_PerceptionCheck::PerceptionTargetActorIsBeingSeenKeyName");

// /Script/FortniteAIServer.FortAthenaBTService_PickUpLoot
// Kind: Class; super: BTService
class UFortAthenaBTService_PickUpLoot
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t LootObjectKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t ExecutionStatusName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionExecutionStatusName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionContextInfoName[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    FName MovementStateKeyName; // 0x0080 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_PickUpLoot, LootObjectKeyName) == 112, "Offset mismatch for UFortAthenaBTService_PickUpLoot::LootObjectKeyName");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, ExecutionStatusName) == 116, "Offset mismatch for UFortAthenaBTService_PickUpLoot::ExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, InteractionExecutionStatusName) == 120, "Offset mismatch for UFortAthenaBTService_PickUpLoot::InteractionExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, InteractionContextInfoName) == 124, "Offset mismatch for UFortAthenaBTService_PickUpLoot::InteractionContextInfoName");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, MovementStateKeyName) == 128, "Offset mismatch for UFortAthenaBTService_PickUpLoot::MovementStateKeyName");

// /Script/FortniteAIServer.FortAthenaBTService_PropagatePatrolProgressToPassengers
// Kind: Class; super: BTService
class UFortAthenaBTService_PropagatePatrolProgressToPassengers
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName PatrollingAppendDestinationKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_PropagatePatrolProgressToPassengers, PatrollingAppendDestinationKeyName) == 112, "Offset mismatch for UFortAthenaBTService_PropagatePatrolProgressToPassengers::PatrollingAppendDestinationKeyName");

// /Script/FortniteAIServer.FortAthenaBTService_Revive
// Kind: Class; super: BTService
class UFortAthenaBTService_Revive
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ReviveTargetKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t ExecutionStatusName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t MoveToPathMovementStateName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionExecutionStatusName[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionContextInfoName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t bDisableLeash; // 0x0084 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTService_Revive, ReviveTargetKeyName) == 112, "Offset mismatch for UFortAthenaBTService_Revive::ReviveTargetKeyName");
static_assert(offsetof(UFortAthenaBTService_Revive, ExecutionStatusName) == 116, "Offset mismatch for UFortAthenaBTService_Revive::ExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Revive, MoveToPathMovementStateName) == 120, "Offset mismatch for UFortAthenaBTService_Revive::MoveToPathMovementStateName");
static_assert(offsetof(UFortAthenaBTService_Revive, InteractionExecutionStatusName) == 124, "Offset mismatch for UFortAthenaBTService_Revive::InteractionExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Revive, InteractionContextInfoName) == 128, "Offset mismatch for UFortAthenaBTService_Revive::InteractionContextInfoName");
static_assert(offsetof(UFortAthenaBTService_Revive, bDisableLeash) == 132, "Offset mismatch for UFortAthenaBTService_Revive::bDisableLeash");

// /Script/FortniteAIServer.FortAthenaBTService_SetAIFocus
// Kind: Class; super: BTService_DefaultFocus
class UFortAthenaBTService_SetAIFocus
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t FocusPriorityToSet; // 0x00A0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortAthenaBTService_SetAIFocus, FocusPriorityToSet) == 160, "Offset mismatch for UFortAthenaBTService_SetAIFocus::FocusPriorityToSet");

// /Script/FortniteAIServer.FortAthenaBTService_SetBlackboardBool
// Kind: Class; super: BTService
class UFortAthenaBTService_SetBlackboardBool
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t BlackboardKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t bBlackboardValue; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ExitAction; // 0x0099 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortAthenaBTService_SetBlackboardBool, BlackboardKey) == 112, "Offset mismatch for UFortAthenaBTService_SetBlackboardBool::BlackboardKey");
static_assert(offsetof(UFortAthenaBTService_SetBlackboardBool, bBlackboardValue) == 152, "Offset mismatch for UFortAthenaBTService_SetBlackboardBool::bBlackboardValue");
static_assert(offsetof(UFortAthenaBTService_SetBlackboardBool, ExitAction) == 153, "Offset mismatch for UFortAthenaBTService_SetBlackboardBool::ExitAction");

// /Script/FortniteAIServer.FortAthenaBTService_SetExecutionStatus
// Kind: Class; super: BTService_BlackboardBase
class UFortAthenaBTService_SetExecutionStatus
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t bSetExecutionStatusOnBecomeRelevant; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ExecutionStatus; // 0x0099 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortAthenaBTService_SetExecutionStatus, bSetExecutionStatusOnBecomeRelevant) == 152, "Offset mismatch for UFortAthenaBTService_SetExecutionStatus::bSetExecutionStatusOnBecomeRelevant");
static_assert(offsetof(UFortAthenaBTService_SetExecutionStatus, ExecutionStatus) == 153, "Offset mismatch for UFortAthenaBTService_SetExecutionStatus::ExecutionStatus");

// /Script/FortniteAIServer.FortAthenaBTService_SetInTacticalAction
// Kind: Class; super: BTService
class UFortAthenaBTService_SetInTacticalAction
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ShouldSetInTacticalAction[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t TacticalActionIdentifierTag[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_SetInTacticalAction, ShouldSetInTacticalAction) == 112, "Offset mismatch for UFortAthenaBTService_SetInTacticalAction::ShouldSetInTacticalAction");
static_assert(offsetof(UFortAthenaBTService_SetInTacticalAction, TacticalActionIdentifierTag) == 136, "Offset mismatch for UFortAthenaBTService_SetInTacticalAction::TacticalActionIdentifierTag");

// /Script/FortniteAIServer.FortAthenaBTService_Slide
// Kind: Class; super: BTService
class UFortAthenaBTService_Slide
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName SlideExecutionStatusName; // 0x0070 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_Slide, SlideExecutionStatusName) == 112, "Offset mismatch for UFortAthenaBTService_Slide::SlideExecutionStatusName");

// /Script/FortniteAIServer.FortAthenaBTService_SmartObject
// Kind: Class; super: BTService
class UFortAthenaBTService_SmartObject
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SmartObjectStatusKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t SmartObjectDestinationKeyName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t EvaluationTag[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_SmartObject, SmartObjectStatusKeyName) == 112, "Offset mismatch for UFortAthenaBTService_SmartObject::SmartObjectStatusKeyName");
static_assert(offsetof(UFortAthenaBTService_SmartObject, SmartObjectDestinationKeyName) == 116, "Offset mismatch for UFortAthenaBTService_SmartObject::SmartObjectDestinationKeyName");
static_assert(offsetof(UFortAthenaBTService_SmartObject, EvaluationTag) == 120, "Offset mismatch for UFortAthenaBTService_SmartObject::EvaluationTag");

// /Script/FortniteAIServer.FortAthenaBTService_Sprinting
// Kind: Class; super: BTService
class UFortAthenaBTService_Sprinting
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t SprintExecutionStatusName[0x4]; // 0x0090 (Size: 0x4, Type: NameProperty)
    std::uint8_t TacticalSprintExecutionStatusName[0x4]; // 0x0094 (Size: 0x4, Type: NameProperty)
    FName TacticalSprintOverridenName; // 0x0098 (Size: 0x8, Type: NameProperty)
    std::uint8_t EnableSprinting[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_Sprinting, SprintExecutionStatusName) == 144, "Offset mismatch for UFortAthenaBTService_Sprinting::SprintExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Sprinting, TacticalSprintExecutionStatusName) == 148, "Offset mismatch for UFortAthenaBTService_Sprinting::TacticalSprintExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Sprinting, TacticalSprintOverridenName) == 152, "Offset mismatch for UFortAthenaBTService_Sprinting::TacticalSprintOverridenName");
static_assert(offsetof(UFortAthenaBTService_Sprinting, EnableSprinting) == 160, "Offset mismatch for UFortAthenaBTService_Sprinting::EnableSprinting");

// /Script/FortniteAIServer.FortAthenaBTService_TokenQuery
// Kind: Class; super: BTService
class UFortAthenaBTService_TokenQuery
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> EquippedItemTagAssociationDatas; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActivationTagQuery[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t DefaultTokenSystemTagQuery[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BecomeRelevantTokenAction[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t CeaseRelevantTokenAction[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t WeaponChangeTokenAction[0x30]; // 0x0120 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetChangeTokenAction[0x30]; // 0x0150 (Size: 0x30, Type: StructProperty)
    std::uint8_t TokenReleaseDelay[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t WeaponKeyName[0x4]; // 0x0198 (Size: 0x4, Type: NameProperty)
    FName TargetActorName; // 0x019C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_TokenQuery, EquippedItemTagAssociationDatas) == 112, "Offset mismatch for UFortAthenaBTService_TokenQuery::EquippedItemTagAssociationDatas");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, ActivationTagQuery) == 128, "Offset mismatch for UFortAthenaBTService_TokenQuery::ActivationTagQuery");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, DefaultTokenSystemTagQuery) == 160, "Offset mismatch for UFortAthenaBTService_TokenQuery::DefaultTokenSystemTagQuery");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, BecomeRelevantTokenAction) == 192, "Offset mismatch for UFortAthenaBTService_TokenQuery::BecomeRelevantTokenAction");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, CeaseRelevantTokenAction) == 240, "Offset mismatch for UFortAthenaBTService_TokenQuery::CeaseRelevantTokenAction");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, WeaponChangeTokenAction) == 288, "Offset mismatch for UFortAthenaBTService_TokenQuery::WeaponChangeTokenAction");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, TargetChangeTokenAction) == 336, "Offset mismatch for UFortAthenaBTService_TokenQuery::TargetChangeTokenAction");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, TokenReleaseDelay) == 384, "Offset mismatch for UFortAthenaBTService_TokenQuery::TokenReleaseDelay");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, WeaponKeyName) == 408, "Offset mismatch for UFortAthenaBTService_TokenQuery::WeaponKeyName");
static_assert(offsetof(UFortAthenaBTService_TokenQuery, TargetActorName) == 412, "Offset mismatch for UFortAthenaBTService_TokenQuery::TargetActorName");

// /Script/FortniteAIServer.FortAthenaBTService_UpdateTarget
// Kind: Class; super: BTService
class UFortAthenaBTService_UpdateTarget
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float Interval; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float RandomDeviation; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCallTickOnSearchStart; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bRestartTimerOnEachActivation (shared storage)
};

static_assert(offsetof(UFortAthenaBTService_UpdateTarget, Interval) == 96, "Offset mismatch for UFortAthenaBTService_UpdateTarget::Interval");
static_assert(offsetof(UFortAthenaBTService_UpdateTarget, RandomDeviation) == 100, "Offset mismatch for UFortAthenaBTService_UpdateTarget::RandomDeviation");
static_assert(offsetof(UFortAthenaBTService_UpdateTarget, bCallTickOnSearchStart) == 104, "Offset mismatch for UFortAthenaBTService_UpdateTarget::bCallTickOnSearchStart");

// /Script/FortniteAIServer.FortAthenaBTService_UseItem
// Kind: Class; super: BTService
class UFortAthenaBTService_UseItem
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ActionObjectKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t ExecutionStatusKeyName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    FName CanMoveWhileUsingItemKeyName; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t bUseAlternateMode[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanUseInputToDeactivateKeyName[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::int32_t MaxEquipAttempts; // 0x00B0 (Size: 0x4, Type: IntProperty)
    float EquipRetryInterval; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float EquipTimeout; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float UseItemDelay; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float MinWaitTimeBetweenUses; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MaxWaitTimeBetweenUses; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float ItemUsageTimeout; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanOnlyUseMobileItems; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockWeaponActions; // 0x00CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidateAbility; // 0x00CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetActionObjectKey; // 0x00CF (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTService_UseItem, ActionObjectKeyName) == 112, "Offset mismatch for UFortAthenaBTService_UseItem::ActionObjectKeyName");
static_assert(offsetof(UFortAthenaBTService_UseItem, ExecutionStatusKeyName) == 116, "Offset mismatch for UFortAthenaBTService_UseItem::ExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTService_UseItem, CanMoveWhileUsingItemKeyName) == 120, "Offset mismatch for UFortAthenaBTService_UseItem::CanMoveWhileUsingItemKeyName");
static_assert(offsetof(UFortAthenaBTService_UseItem, bUseAlternateMode) == 128, "Offset mismatch for UFortAthenaBTService_UseItem::bUseAlternateMode");
static_assert(offsetof(UFortAthenaBTService_UseItem, bCanUseInputToDeactivateKeyName) == 152, "Offset mismatch for UFortAthenaBTService_UseItem::bCanUseInputToDeactivateKeyName");
static_assert(offsetof(UFortAthenaBTService_UseItem, MaxEquipAttempts) == 176, "Offset mismatch for UFortAthenaBTService_UseItem::MaxEquipAttempts");
static_assert(offsetof(UFortAthenaBTService_UseItem, EquipRetryInterval) == 180, "Offset mismatch for UFortAthenaBTService_UseItem::EquipRetryInterval");
static_assert(offsetof(UFortAthenaBTService_UseItem, EquipTimeout) == 184, "Offset mismatch for UFortAthenaBTService_UseItem::EquipTimeout");
static_assert(offsetof(UFortAthenaBTService_UseItem, UseItemDelay) == 188, "Offset mismatch for UFortAthenaBTService_UseItem::UseItemDelay");
static_assert(offsetof(UFortAthenaBTService_UseItem, MinWaitTimeBetweenUses) == 192, "Offset mismatch for UFortAthenaBTService_UseItem::MinWaitTimeBetweenUses");
static_assert(offsetof(UFortAthenaBTService_UseItem, MaxWaitTimeBetweenUses) == 196, "Offset mismatch for UFortAthenaBTService_UseItem::MaxWaitTimeBetweenUses");
static_assert(offsetof(UFortAthenaBTService_UseItem, ItemUsageTimeout) == 200, "Offset mismatch for UFortAthenaBTService_UseItem::ItemUsageTimeout");
static_assert(offsetof(UFortAthenaBTService_UseItem, bCanOnlyUseMobileItems) == 204, "Offset mismatch for UFortAthenaBTService_UseItem::bCanOnlyUseMobileItems");
static_assert(offsetof(UFortAthenaBTService_UseItem, bBlockWeaponActions) == 205, "Offset mismatch for UFortAthenaBTService_UseItem::bBlockWeaponActions");
static_assert(offsetof(UFortAthenaBTService_UseItem, bValidateAbility) == 206, "Offset mismatch for UFortAthenaBTService_UseItem::bValidateAbility");
static_assert(offsetof(UFortAthenaBTService_UseItem, bResetActionObjectKey) == 207, "Offset mismatch for UFortAthenaBTService_UseItem::bResetActionObjectKey");

// /Script/FortniteAIServer.FortAthenaBTService_WaitForPassengers
// Kind: Class; super: BTService
class UFortAthenaBTService_WaitForPassengers
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName WaitForPassengersStatusKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_WaitForPassengers, WaitForPassengersStatusKeyName) == 112, "Offset mismatch for UFortAthenaBTService_WaitForPassengers::WaitForPassengersStatusKeyName");

// /Script/FortniteAIServer.FortAthenaBTService_WeaponPrimaryInputTacticalAction
// Kind: Class; super: BTService
class UFortAthenaBTService_WeaponPrimaryInputTacticalAction
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Enabled[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_WeaponPrimaryInputTacticalAction, Enabled) == 112, "Offset mismatch for UFortAthenaBTService_WeaponPrimaryInputTacticalAction::Enabled");

// /Script/FortniteAIServer.FortAthenaBTService_WorldCondition
// Kind: Class; super: BTService
class UFortAthenaBTService_WorldCondition
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Conditions[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    FName ConditionsResultName; // 0x0098 (Size: 0x8, Type: NameProperty)
    std::uint8_t QueryState[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_WorldCondition, Conditions) == 112, "Offset mismatch for UFortAthenaBTService_WorldCondition::Conditions");
static_assert(offsetof(UFortAthenaBTService_WorldCondition, ConditionsResultName) == 152, "Offset mismatch for UFortAthenaBTService_WorldCondition::ConditionsResultName");
static_assert(offsetof(UFortAthenaBTService_WorldCondition, QueryState) == 160, "Offset mismatch for UFortAthenaBTService_WorldCondition::QueryState");

// /Script/FortniteAIServer.FortAthenaBTService_Zipline
// Kind: Class; super: BTService
class UFortAthenaBTService_Zipline
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ZiplineTargetName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionExecutionStatusName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractionContextInfoName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t UsageExecutionStatusName[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    std::uint8_t ZiplineEntryLocationName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZiplineExitLocationKeyName[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::uint8_t MoveToPathMovementStateName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t MoveExecutionStatusName[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    FName FocalPointName; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTService_Zipline, ZiplineTargetName) == 112, "Offset mismatch for UFortAthenaBTService_Zipline::ZiplineTargetName");
static_assert(offsetof(UFortAthenaBTService_Zipline, InteractionExecutionStatusName) == 116, "Offset mismatch for UFortAthenaBTService_Zipline::InteractionExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Zipline, InteractionContextInfoName) == 120, "Offset mismatch for UFortAthenaBTService_Zipline::InteractionContextInfoName");
static_assert(offsetof(UFortAthenaBTService_Zipline, UsageExecutionStatusName) == 124, "Offset mismatch for UFortAthenaBTService_Zipline::UsageExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Zipline, ZiplineEntryLocationName) == 128, "Offset mismatch for UFortAthenaBTService_Zipline::ZiplineEntryLocationName");
static_assert(offsetof(UFortAthenaBTService_Zipline, ZiplineExitLocationKeyName) == 132, "Offset mismatch for UFortAthenaBTService_Zipline::ZiplineExitLocationKeyName");
static_assert(offsetof(UFortAthenaBTService_Zipline, MoveToPathMovementStateName) == 136, "Offset mismatch for UFortAthenaBTService_Zipline::MoveToPathMovementStateName");
static_assert(offsetof(UFortAthenaBTService_Zipline, MoveExecutionStatusName) == 140, "Offset mismatch for UFortAthenaBTService_Zipline::MoveExecutionStatusName");
static_assert(offsetof(UFortAthenaBTService_Zipline, FocalPointName) == 144, "Offset mismatch for UFortAthenaBTService_Zipline::FocalPointName");

// /Script/FortniteAIServer.FortAthenaBTTask_ActivateVehicleBoost
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_ActivateVehicleBoost
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bActivateBoost; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    float BoostLength; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIgnoreMinimumDistanceLeft; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_ActivateVehicleBoost, bActivateBoost) == 112, "Offset mismatch for UFortAthenaBTTask_ActivateVehicleBoost::bActivateBoost");
static_assert(offsetof(UFortAthenaBTTask_ActivateVehicleBoost, BoostLength) == 116, "Offset mismatch for UFortAthenaBTTask_ActivateVehicleBoost::BoostLength");
static_assert(offsetof(UFortAthenaBTTask_ActivateVehicleBoost, bIgnoreMinimumDistanceLeft) == 120, "Offset mismatch for UFortAthenaBTTask_ActivateVehicleBoost::bIgnoreMinimumDistanceLeft");

// /Script/FortniteAIServer.FortAthenaBTTask_BotAmbushPlayer
// Kind: Class; super: BTTask_Wait
class UFortAthenaBTTask_BotAmbushPlayer
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    float FacingPrecision; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float WeaponCooldown; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClearBlackboardOnFinished; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t TargetedPlayerKeySelector[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxLocationErrorKeySelector[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLocationErrorKeySelector[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, FacingPrecision) == 160, "Offset mismatch for UFortAthenaBTTask_BotAmbushPlayer::FacingPrecision");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, WeaponCooldown) == 164, "Offset mismatch for UFortAthenaBTTask_BotAmbushPlayer::WeaponCooldown");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, bClearBlackboardOnFinished) == 168, "Offset mismatch for UFortAthenaBTTask_BotAmbushPlayer::bClearBlackboardOnFinished");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, TargetedPlayerKeySelector) == 176, "Offset mismatch for UFortAthenaBTTask_BotAmbushPlayer::TargetedPlayerKeySelector");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, MaxLocationErrorKeySelector) == 216, "Offset mismatch for UFortAthenaBTTask_BotAmbushPlayer::MaxLocationErrorKeySelector");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, MinLocationErrorKeySelector) == 256, "Offset mismatch for UFortAthenaBTTask_BotAmbushPlayer::MinLocationErrorKeySelector");

// /Script/FortniteAIServer.FortAthenaBTTask_BotMoveTo
// Kind: Class; super: FortAthenaBTTask_MoveTo
class UFortAthenaBTTask_BotMoveTo
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t NoSmashMoveGoalActorKeyName[0x6]; // 0x01C0 (Size: 0x6, Type: NameProperty)
    std::uint8_t bAllowRandomWobble; // 0x01C6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x01C7
    std::uint8_t AllowRandomWobble[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsUrgentMovement; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01E1
    std::uint8_t IsUrgentMovement[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t IgnoreObstaclesOnPath[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTTask_BotMoveTo, NoSmashMoveGoalActorKeyName) == 448, "Offset mismatch for UFortAthenaBTTask_BotMoveTo::NoSmashMoveGoalActorKeyName");
static_assert(offsetof(UFortAthenaBTTask_BotMoveTo, bAllowRandomWobble) == 454, "Offset mismatch for UFortAthenaBTTask_BotMoveTo::bAllowRandomWobble");
static_assert(offsetof(UFortAthenaBTTask_BotMoveTo, AllowRandomWobble) == 456, "Offset mismatch for UFortAthenaBTTask_BotMoveTo::AllowRandomWobble");
static_assert(offsetof(UFortAthenaBTTask_BotMoveTo, bIsUrgentMovement) == 480, "Offset mismatch for UFortAthenaBTTask_BotMoveTo::bIsUrgentMovement");
static_assert(offsetof(UFortAthenaBTTask_BotMoveTo, IsUrgentMovement) == 488, "Offset mismatch for UFortAthenaBTTask_BotMoveTo::IsUrgentMovement");
static_assert(offsetof(UFortAthenaBTTask_BotMoveTo, IgnoreObstaclesOnPath) == 512, "Offset mismatch for UFortAthenaBTTask_BotMoveTo::IgnoreObstaclesOnPath");

// /Script/FortniteAIServer.FortAthenaBTTask_BotUnstuckTeleport
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_BotUnstuckTeleport
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t EQSRequest[0x48]; // 0x0070 (Size: 0x48, Type: StructProperty)
    std::uint8_t CanReachDestinationKeyName[0x4]; // 0x00B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t TeleportExecutionStatusKeyName[0x4]; // 0x00BC (Size: 0x4, Type: NameProperty)
    std::uint8_t LastPartialPathTimeKeyName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    FName LastPartialPathCountKeyName; // 0x00C4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, EQSRequest) == 112, "Offset mismatch for UFortAthenaBTTask_BotUnstuckTeleport::EQSRequest");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, CanReachDestinationKeyName) == 184, "Offset mismatch for UFortAthenaBTTask_BotUnstuckTeleport::CanReachDestinationKeyName");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, TeleportExecutionStatusKeyName) == 188, "Offset mismatch for UFortAthenaBTTask_BotUnstuckTeleport::TeleportExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, LastPartialPathTimeKeyName) == 192, "Offset mismatch for UFortAthenaBTTask_BotUnstuckTeleport::LastPartialPathTimeKeyName");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, LastPartialPathCountKeyName) == 196, "Offset mismatch for UFortAthenaBTTask_BotUnstuckTeleport::LastPartialPathCountKeyName");

// /Script/FortniteAIServer.FortAthenaBTTask_BotWait
// Kind: Class; super: BTTask_Wait
class UFortAthenaBTTask_BotWait
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t WaitCompleteKeySelector[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTTask_BotWait, WaitCompleteKeySelector) == 160, "Offset mismatch for UFortAthenaBTTask_BotWait::WaitCompleteKeySelector");

// /Script/FortniteAIServer.FortAthenaBTTask_Build
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Build
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ExecutionStatusKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    FName FocalPointName; // 0x0074 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Build, ExecutionStatusKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_Build::ExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_Build, FocalPointName) == 116, "Offset mismatch for UFortAthenaBTTask_Build::FocalPointName");

// /Script/FortniteAIServer.FortAthenaBTTask_Conversation
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Conversation
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ConversationStatusKeyName[0x6]; // 0x0070 (Size: 0x6, Type: NameProperty)
    std::uint8_t bResetEvaluatorStatusKeyOnFinish; // 0x0076 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Conversation, ConversationStatusKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_Conversation::ConversationStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_Conversation, bResetEvaluatorStatusKeyOnFinish) == 118, "Offset mismatch for UFortAthenaBTTask_Conversation::bResetEvaluatorStatusKeyOnFinish");

// /Script/FortniteAIServer.FortAthenaBTTask_Dive
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Dive
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ExecutionStatusKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    FName DiveDestinationKeyName; // 0x0074 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Dive, ExecutionStatusKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_Dive::ExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_Dive, DiveDestinationKeyName) == 116, "Offset mismatch for UFortAthenaBTTask_Dive::DiveDestinationKeyName");

// /Script/FortniteAIServer.FortAthenaBTTask_EnterVehicle
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_EnterVehicle
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName SelectedVehicleKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_EnterVehicle, SelectedVehicleKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_EnterVehicle::SelectedVehicleKeyName");

// /Script/FortniteAIServer.FortAthenaBTTask_EquipItem
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_EquipItem
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t WeaponKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t EquipItemKeyName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t DisableEquipAnimation[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t WaitForEquipToFinish[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t ItemTagToEquip[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTTask_EquipItem, WeaponKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_EquipItem::WeaponKeyName");
static_assert(offsetof(UFortAthenaBTTask_EquipItem, EquipItemKeyName) == 116, "Offset mismatch for UFortAthenaBTTask_EquipItem::EquipItemKeyName");
static_assert(offsetof(UFortAthenaBTTask_EquipItem, DisableEquipAnimation) == 120, "Offset mismatch for UFortAthenaBTTask_EquipItem::DisableEquipAnimation");
static_assert(offsetof(UFortAthenaBTTask_EquipItem, WaitForEquipToFinish) == 144, "Offset mismatch for UFortAthenaBTTask_EquipItem::WaitForEquipToFinish");
static_assert(offsetof(UFortAthenaBTTask_EquipItem, ItemTagToEquip) == 168, "Offset mismatch for UFortAthenaBTTask_EquipItem::ItemTagToEquip");

// /Script/FortniteAIServer.FortAthenaBTTask_Escalate
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Escalate
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Escalate, Services) == 88, "Offset mismatch for UFortAthenaBTTask_Escalate::Services");
static_assert(offsetof(UFortAthenaBTTask_Escalate, bIgnoreRestartSelf) == 104, "Offset mismatch for UFortAthenaBTTask_Escalate::bIgnoreRestartSelf");

// /Script/FortniteAIServer.FortAthenaBTTask_GetDefendSpotShootSpot
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_GetDefendSpotShootSpot
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t DefendSpotBlackboardKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShootSpotPositionBlackboardKey[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowCrouchBlackboardKey[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTTask_GetDefendSpotShootSpot, DefendSpotBlackboardKey) == 112, "Offset mismatch for UFortAthenaBTTask_GetDefendSpotShootSpot::DefendSpotBlackboardKey");
static_assert(offsetof(UFortAthenaBTTask_GetDefendSpotShootSpot, ShootSpotPositionBlackboardKey) == 152, "Offset mismatch for UFortAthenaBTTask_GetDefendSpotShootSpot::ShootSpotPositionBlackboardKey");
static_assert(offsetof(UFortAthenaBTTask_GetDefendSpotShootSpot, AllowCrouchBlackboardKey) == 192, "Offset mismatch for UFortAthenaBTTask_GetDefendSpotShootSpot::AllowCrouchBlackboardKey");

// /Script/FortniteAIServer.FortAthenaBTTask_GetDefendSpotShouldCrouch
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_GetDefendSpotShouldCrouch
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t DefendSpotBlackboardKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowCrouchBlackboardKey[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTTask_GetDefendSpotShouldCrouch, DefendSpotBlackboardKey) == 112, "Offset mismatch for UFortAthenaBTTask_GetDefendSpotShouldCrouch::DefendSpotBlackboardKey");
static_assert(offsetof(UFortAthenaBTTask_GetDefendSpotShouldCrouch, AllowCrouchBlackboardKey) == 152, "Offset mismatch for UFortAthenaBTTask_GetDefendSpotShouldCrouch::AllowCrouchBlackboardKey");

// /Script/FortniteAIServer.FortAthenaBTTask_Glide
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Glide
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ExecutionStatusKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    FName GlideDestinationKeyName; // 0x0074 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Glide, ExecutionStatusKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_Glide::ExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_Glide, GlideDestinationKeyName) == 116, "Offset mismatch for UFortAthenaBTTask_Glide::GlideDestinationKeyName");

// /Script/FortniteAIServer.FortAthenaBTTask_Harvest
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Harvest
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName HarvestExecutionStatusKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
    FName HarvestTargetKeyName; // 0x0078 (Size: 0x8, Type: NameProperty)
    FName HarvestTargetHitPointKeyName; // 0x0080 (Size: 0x8, Type: NameProperty)
    FName HarvestDestinationKeyName; // 0x0088 (Size: 0x8, Type: NameProperty)
    FName WeaponTriggerMeleeKeyName; // 0x0090 (Size: 0x8, Type: NameProperty)
    std::uint8_t MeleeSwingDelay[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t HarvestAbilityTag[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Harvest, HarvestExecutionStatusKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_Harvest::HarvestExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_Harvest, HarvestTargetKeyName) == 120, "Offset mismatch for UFortAthenaBTTask_Harvest::HarvestTargetKeyName");
static_assert(offsetof(UFortAthenaBTTask_Harvest, HarvestTargetHitPointKeyName) == 128, "Offset mismatch for UFortAthenaBTTask_Harvest::HarvestTargetHitPointKeyName");
static_assert(offsetof(UFortAthenaBTTask_Harvest, HarvestDestinationKeyName) == 136, "Offset mismatch for UFortAthenaBTTask_Harvest::HarvestDestinationKeyName");
static_assert(offsetof(UFortAthenaBTTask_Harvest, WeaponTriggerMeleeKeyName) == 144, "Offset mismatch for UFortAthenaBTTask_Harvest::WeaponTriggerMeleeKeyName");
static_assert(offsetof(UFortAthenaBTTask_Harvest, MeleeSwingDelay) == 152, "Offset mismatch for UFortAthenaBTTask_Harvest::MeleeSwingDelay");
static_assert(offsetof(UFortAthenaBTTask_Harvest, HarvestAbilityTag) == 192, "Offset mismatch for UFortAthenaBTTask_Harvest::HarvestAbilityTag");

// /Script/FortniteAIServer.FortAthenaBTTask_Interact
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Interact
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float AttemptInterval; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxInteractAttempts; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShouldFocusOnInteraction; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t InteractExecutionStatusKeySelector[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t InteractContextInfoKeySelector[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FocalPointName[0x4]; // 0x00D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t InteractActorName[0x4]; // 0x00D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t JumpExecutionStatusName[0x4]; // 0x00D8 (Size: 0x4, Type: NameProperty)
    FName WeaponTriggerMeleeName; // 0x00DC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Interact, AttemptInterval) == 112, "Offset mismatch for UFortAthenaBTTask_Interact::AttemptInterval");
static_assert(offsetof(UFortAthenaBTTask_Interact, MaxInteractAttempts) == 116, "Offset mismatch for UFortAthenaBTTask_Interact::MaxInteractAttempts");
static_assert(offsetof(UFortAthenaBTTask_Interact, bShouldFocusOnInteraction) == 120, "Offset mismatch for UFortAthenaBTTask_Interact::bShouldFocusOnInteraction");
static_assert(offsetof(UFortAthenaBTTask_Interact, InteractExecutionStatusKeySelector) == 128, "Offset mismatch for UFortAthenaBTTask_Interact::InteractExecutionStatusKeySelector");
static_assert(offsetof(UFortAthenaBTTask_Interact, InteractContextInfoKeySelector) == 168, "Offset mismatch for UFortAthenaBTTask_Interact::InteractContextInfoKeySelector");
static_assert(offsetof(UFortAthenaBTTask_Interact, FocalPointName) == 208, "Offset mismatch for UFortAthenaBTTask_Interact::FocalPointName");
static_assert(offsetof(UFortAthenaBTTask_Interact, InteractActorName) == 212, "Offset mismatch for UFortAthenaBTTask_Interact::InteractActorName");
static_assert(offsetof(UFortAthenaBTTask_Interact, JumpExecutionStatusName) == 216, "Offset mismatch for UFortAthenaBTTask_Interact::JumpExecutionStatusName");
static_assert(offsetof(UFortAthenaBTTask_Interact, WeaponTriggerMeleeName) == 220, "Offset mismatch for UFortAthenaBTTask_Interact::WeaponTriggerMeleeName");

// /Script/FortniteAIServer.FortAthenaBTTask_LeaveVehicle
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_LeaveVehicle
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bWaitVehicleStop; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_LeaveVehicle, bWaitVehicleStop) == 112, "Offset mismatch for UFortAthenaBTTask_LeaveVehicle::bWaitVehicleStop");

// /Script/FortniteAIServer.FortAthenaBTTask_ModulateVehicleSpeed
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_ModulateVehicleSpeed
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t DrivingSpeed[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    float NewDrivingSpeed; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResetControlPIDs; // 0x008C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_ModulateVehicleSpeed, DrivingSpeed) == 112, "Offset mismatch for UFortAthenaBTTask_ModulateVehicleSpeed::DrivingSpeed");
static_assert(offsetof(UFortAthenaBTTask_ModulateVehicleSpeed, NewDrivingSpeed) == 136, "Offset mismatch for UFortAthenaBTTask_ModulateVehicleSpeed::NewDrivingSpeed");
static_assert(offsetof(UFortAthenaBTTask_ModulateVehicleSpeed, bResetControlPIDs) == 140, "Offset mismatch for UFortAthenaBTTask_ModulateVehicleSpeed::bResetControlPIDs");

// /Script/FortniteAIServer.FortAthenaBTTask_MoveTo
// Kind: Class; super: BTTask_MoveTo
class UFortAthenaBTTask_MoveTo
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t MovementResultKeyName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    FName ExecutionStatusKeyName; // 0x01B4 (Size: 0x8, Type: NameProperty)
    std::uint8_t bAllowPartialPathToUncompleteNavigationArea; // 0x01BC (Size: 0x1, Type: BoolProperty)
    // 0x01BC BoolProperty bAllowRestartOnPartialSuccess (shared storage)
};

static_assert(offsetof(UFortAthenaBTTask_MoveTo, MovementResultKeyName) == 432, "Offset mismatch for UFortAthenaBTTask_MoveTo::MovementResultKeyName");
static_assert(offsetof(UFortAthenaBTTask_MoveTo, ExecutionStatusKeyName) == 436, "Offset mismatch for UFortAthenaBTTask_MoveTo::ExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_MoveTo, bAllowPartialPathToUncompleteNavigationArea) == 444, "Offset mismatch for UFortAthenaBTTask_MoveTo::bAllowPartialPathToUncompleteNavigationArea");

// /Script/FortniteAIServer.FortAthenaBTTask_PauseVehicle
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_PauseVehicle
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_PauseVehicle, Services) == 88, "Offset mismatch for UFortAthenaBTTask_PauseVehicle::Services");
static_assert(offsetof(UFortAthenaBTTask_PauseVehicle, bIgnoreRestartSelf) == 104, "Offset mismatch for UFortAthenaBTTask_PauseVehicle::bIgnoreRestartSelf");

// /Script/FortniteAIServer.FortAthenaBTTask_PlayActionSequence
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_PlayActionSequence
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ActionSequence[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActionSequences[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    FName DynamicActionSequenceKeyName; // 0x00B0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_PlayActionSequence, ActionSequence) == 112, "Offset mismatch for UFortAthenaBTTask_PlayActionSequence::ActionSequence");
static_assert(offsetof(UFortAthenaBTTask_PlayActionSequence, ActionSequences) == 144, "Offset mismatch for UFortAthenaBTTask_PlayActionSequence::ActionSequences");
static_assert(offsetof(UFortAthenaBTTask_PlayActionSequence, DynamicActionSequenceKeyName) == 176, "Offset mismatch for UFortAthenaBTTask_PlayActionSequence::DynamicActionSequenceKeyName");

// /Script/FortniteAIServer.FortAthenaBTTask_PlayEmote
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_PlayEmote
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName PlayEmoteExecutionStatusKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
    TArray<void*> BespokeEmotes; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaBTTask_PlayEmote, PlayEmoteExecutionStatusKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_PlayEmote::PlayEmoteExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_PlayEmote, BespokeEmotes) == 120, "Offset mismatch for UFortAthenaBTTask_PlayEmote::BespokeEmotes");

// /Script/FortniteAIServer.FortAthenaBTTask_ReactToVerb
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_ReactToVerb
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName ReactToVerbTargetActorKeyName; // 0x0070 (Size: 0x8, Type: NameProperty)
    FName ReactToVerbExecutionStatusKeyName; // 0x0078 (Size: 0x8, Type: NameProperty)
    FName ExtraStructDataKeyName; // 0x0080 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_ReactToVerb, ReactToVerbTargetActorKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_ReactToVerb::ReactToVerbTargetActorKeyName");
static_assert(offsetof(UFortAthenaBTTask_ReactToVerb, ReactToVerbExecutionStatusKeyName) == 120, "Offset mismatch for UFortAthenaBTTask_ReactToVerb::ReactToVerbExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_ReactToVerb, ExtraStructDataKeyName) == 128, "Offset mismatch for UFortAthenaBTTask_ReactToVerb::ExtraStructDataKeyName");

// /Script/FortniteAIServer.FortAthenaBTTask_ReverseVehicle
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_ReverseVehicle
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bReverseVehicle; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_ReverseVehicle, bReverseVehicle) == 112, "Offset mismatch for UFortAthenaBTTask_ReverseVehicle::bReverseVehicle");

// /Script/FortniteAIServer.FortAthenaBTTask_RunDynamicSubtree
// Kind: Class; super: BTTask_RunBehaviorDynamic
class UFortAthenaBTTask_RunDynamicSubtree
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bCallParentOnInstanceCreated; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_RunDynamicSubtree, bCallParentOnInstanceCreated) == 136, "Offset mismatch for UFortAthenaBTTask_RunDynamicSubtree::bCallParentOnInstanceCreated");

// /Script/FortniteAIServer.FortAthenaBTTask_SetAggressiveDriving
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_SetAggressiveDriving
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bAggressiveDriving; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_SetAggressiveDriving, bAggressiveDriving) == 112, "Offset mismatch for UFortAthenaBTTask_SetAggressiveDriving::bAggressiveDriving");

// /Script/FortniteAIServer.FortAthenaBTTask_ShootTrap
// Kind: Class; super: BTTask_Wait
class UFortAthenaBTTask_ShootTrap
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t TargetActorKey[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    FName TrapOnPathKeyName; // 0x00C8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_ShootTrap, TargetActorKey) == 160, "Offset mismatch for UFortAthenaBTTask_ShootTrap::TargetActorKey");
static_assert(offsetof(UFortAthenaBTTask_ShootTrap, TrapOnPathKeyName) == 200, "Offset mismatch for UFortAthenaBTTask_ShootTrap::TrapOnPathKeyName");

// /Script/FortniteAIServer.FortAthenaBTTask_SteerMovement
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_SteerMovement
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SteerDirectionKeySelector[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSetControlRotation; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_SteerMovement, SteerDirectionKeySelector) == 112, "Offset mismatch for UFortAthenaBTTask_SteerMovement::SteerDirectionKeySelector");
static_assert(offsetof(UFortAthenaBTTask_SteerMovement, bSetControlRotation) == 152, "Offset mismatch for UFortAthenaBTTask_SteerMovement::bSetControlRotation");

// /Script/FortniteAIServer.FortAthenaBTTask_Undermine
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Undermine
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t UndermineTargetKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t UndermineLocationImpactName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    FName UndermineExecutionStatusKeyName; // 0x0078 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Undermine, UndermineTargetKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_Undermine::UndermineTargetKeyName");
static_assert(offsetof(UFortAthenaBTTask_Undermine, UndermineLocationImpactName) == 116, "Offset mismatch for UFortAthenaBTTask_Undermine::UndermineLocationImpactName");
static_assert(offsetof(UFortAthenaBTTask_Undermine, UndermineExecutionStatusKeyName) == 120, "Offset mismatch for UFortAthenaBTTask_Undermine::UndermineExecutionStatusKeyName");

// /Script/FortniteAIServer.FortAthenaBTTask_UseItem
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_UseItem
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ActionObjectKeyName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t ExecutionStatusKeyName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    FName UseItemSelectNewWeaponName; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t MinimumWaitTimeBetweenUses[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaximumWaitTimeBetweenUses[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t ValidateAbility[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ValidateAbilityBeforeEquipping[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ResetActionObjectKey[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t UseAlternateMode[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinishAfterItemUse[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t UnequipAndRemoveAfterItemUse[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t InputHoldDuration[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    float MinWaitTimeBetweenUses; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float MaxWaitTimeBetweenUses; // 0x0164 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bValidateAbility; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetActionObjectKey; // 0x0169 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAlternateMode; // 0x016A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_UseItem, ActionObjectKeyName) == 112, "Offset mismatch for UFortAthenaBTTask_UseItem::ActionObjectKeyName");
static_assert(offsetof(UFortAthenaBTTask_UseItem, ExecutionStatusKeyName) == 116, "Offset mismatch for UFortAthenaBTTask_UseItem::ExecutionStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_UseItem, UseItemSelectNewWeaponName) == 120, "Offset mismatch for UFortAthenaBTTask_UseItem::UseItemSelectNewWeaponName");
static_assert(offsetof(UFortAthenaBTTask_UseItem, MinimumWaitTimeBetweenUses) == 128, "Offset mismatch for UFortAthenaBTTask_UseItem::MinimumWaitTimeBetweenUses");
static_assert(offsetof(UFortAthenaBTTask_UseItem, MaximumWaitTimeBetweenUses) == 152, "Offset mismatch for UFortAthenaBTTask_UseItem::MaximumWaitTimeBetweenUses");
static_assert(offsetof(UFortAthenaBTTask_UseItem, ValidateAbility) == 176, "Offset mismatch for UFortAthenaBTTask_UseItem::ValidateAbility");
static_assert(offsetof(UFortAthenaBTTask_UseItem, ValidateAbilityBeforeEquipping) == 200, "Offset mismatch for UFortAthenaBTTask_UseItem::ValidateAbilityBeforeEquipping");
static_assert(offsetof(UFortAthenaBTTask_UseItem, ResetActionObjectKey) == 224, "Offset mismatch for UFortAthenaBTTask_UseItem::ResetActionObjectKey");
static_assert(offsetof(UFortAthenaBTTask_UseItem, UseAlternateMode) == 248, "Offset mismatch for UFortAthenaBTTask_UseItem::UseAlternateMode");
static_assert(offsetof(UFortAthenaBTTask_UseItem, FinishAfterItemUse) == 272, "Offset mismatch for UFortAthenaBTTask_UseItem::FinishAfterItemUse");
static_assert(offsetof(UFortAthenaBTTask_UseItem, UnequipAndRemoveAfterItemUse) == 296, "Offset mismatch for UFortAthenaBTTask_UseItem::UnequipAndRemoveAfterItemUse");
static_assert(offsetof(UFortAthenaBTTask_UseItem, InputHoldDuration) == 320, "Offset mismatch for UFortAthenaBTTask_UseItem::InputHoldDuration");
static_assert(offsetof(UFortAthenaBTTask_UseItem, MinWaitTimeBetweenUses) == 352, "Offset mismatch for UFortAthenaBTTask_UseItem::MinWaitTimeBetweenUses");
static_assert(offsetof(UFortAthenaBTTask_UseItem, MaxWaitTimeBetweenUses) == 356, "Offset mismatch for UFortAthenaBTTask_UseItem::MaxWaitTimeBetweenUses");
static_assert(offsetof(UFortAthenaBTTask_UseItem, bValidateAbility) == 360, "Offset mismatch for UFortAthenaBTTask_UseItem::bValidateAbility");
static_assert(offsetof(UFortAthenaBTTask_UseItem, bResetActionObjectKey) == 361, "Offset mismatch for UFortAthenaBTTask_UseItem::bResetActionObjectKey");
static_assert(offsetof(UFortAthenaBTTask_UseItem, bUseAlternateMode) == 362, "Offset mismatch for UFortAthenaBTTask_UseItem::bUseAlternateMode");

// /Script/FortniteAIServer.FortAthenaBTTask_UseSmartObject
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_UseSmartObject
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t EvaluationTag[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t AddFocusAndWait[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    FName SmartObjectsStatusKeyName; // 0x0090 (Size: 0x8, Type: NameProperty)
    std::uint8_t SmartObjectDestinationRotationKeyName[0x6]; // 0x0098 (Size: 0x6, Type: NameProperty)
    std::uint8_t bHandleAbortWithSoftDisable; // 0x009E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, EvaluationTag) == 112, "Offset mismatch for UFortAthenaBTTask_UseSmartObject::EvaluationTag");
static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, AddFocusAndWait) == 120, "Offset mismatch for UFortAthenaBTTask_UseSmartObject::AddFocusAndWait");
static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, SmartObjectsStatusKeyName) == 144, "Offset mismatch for UFortAthenaBTTask_UseSmartObject::SmartObjectsStatusKeyName");
static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, SmartObjectDestinationRotationKeyName) == 152, "Offset mismatch for UFortAthenaBTTask_UseSmartObject::SmartObjectDestinationRotationKeyName");
static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, bHandleAbortWithSoftDisable) == 158, "Offset mismatch for UFortAthenaBTTask_UseSmartObject::bHandleAbortWithSoftDisable");

// /Script/FortniteAIServer.FortAthenaBTTask_VehicleHonk
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_VehicleHonk
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float MaxHonkTime; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MinHonkTime; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float MaxFlickerTime; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MinFlickerTime; // 0x007C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaBTTask_VehicleHonk, MaxHonkTime) == 112, "Offset mismatch for UFortAthenaBTTask_VehicleHonk::MaxHonkTime");
static_assert(offsetof(UFortAthenaBTTask_VehicleHonk, MinHonkTime) == 116, "Offset mismatch for UFortAthenaBTTask_VehicleHonk::MinHonkTime");
static_assert(offsetof(UFortAthenaBTTask_VehicleHonk, MaxFlickerTime) == 120, "Offset mismatch for UFortAthenaBTTask_VehicleHonk::MaxFlickerTime");
static_assert(offsetof(UFortAthenaBTTask_VehicleHonk, MinFlickerTime) == 124, "Offset mismatch for UFortAthenaBTTask_VehicleHonk::MinFlickerTime");

// /Script/FortniteAIServer.FortAthenaBTTask_VehicleSwitchSeat
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_VehicleSwitchSeat
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SwitchSeatType; // 0x0070 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortAthenaBTTask_VehicleSwitchSeat, SwitchSeatType) == 112, "Offset mismatch for UFortAthenaBTTask_VehicleSwitchSeat::SwitchSeatType");

// /Script/FortniteAIServer.FortAthenaBTTask_VehicleTurnTo
// Kind: Class; super: BTTask_BlackboardBase
class UFortAthenaBTTask_VehicleTurnTo
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    float Precision; // 0x0098 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaBTTask_VehicleTurnTo, Precision) == 152, "Offset mismatch for UFortAthenaBTTask_VehicleTurnTo::Precision");

// /Script/FortniteAIServer.FortAthenaBTTask_WaitToPlayActions
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_WaitToPlayActions
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaBTTask_WaitToPlayActions, Services) == 88, "Offset mismatch for UFortAthenaBTTask_WaitToPlayActions::Services");
static_assert(offsetof(UFortAthenaBTTask_WaitToPlayActions, bIgnoreRestartSelf) == 104, "Offset mismatch for UFortAthenaBTTask_WaitToPlayActions::bIgnoreRestartSelf");

// /Script/FortniteAIServer.FortAthenaBTTask_Zipline
// Kind: Class; super: BTTaskNode
class UFortAthenaBTTask_Zipline
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FName UsageExecutionStatusName; // 0x0070 (Size: 0x8, Type: NameProperty)
    FName ZiplineTargetName; // 0x0078 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaBTTask_Zipline, UsageExecutionStatusName) == 112, "Offset mismatch for UFortAthenaBTTask_Zipline::UsageExecutionStatusName");
static_assert(offsetof(UFortAthenaBTTask_Zipline, ZiplineTargetName) == 120, "Offset mismatch for UFortAthenaBTTask_Zipline::ZiplineTargetName");

// /Script/FortniteAIServer.FortAthenaNpcEvaluator_Encampment
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaNpcEvaluator_Encampment
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t EncampmentEnable[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EncampmentTentativeDelayMin[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t EncampmentTentativeDelayMax[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EncampmentDurationMin[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t EncampmentDurationMax[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuilderPercentage[0x28]; // 0x0268 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuilderMinDistance[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuilderMaxDistance[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GuardMinDistance[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GuardMaxDistance[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowInSwimming[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    std::uint8_t AllowInFalling[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSquadMembersCountToBuild[0x28]; // 0x0380 (Size: 0x28, Type: StructProperty)
    FName EncampmentStatusKeyName; // 0x03A8 (Size: 0x8, Type: NameProperty)
    FName EncampmentMovementStateKeyName; // 0x03B0 (Size: 0x8, Type: NameProperty)
    FName EncampmentCenterLocationKeyName; // 0x03B8 (Size: 0x8, Type: NameProperty)
    FName EncampmentDestinationKeyName; // 0x03C0 (Size: 0x8, Type: NameProperty)
    FName EncampmentAroundCampFireLocationKeyName; // 0x03C8 (Size: 0x8, Type: NameProperty)
    FName EncampmentRoleKeyName; // 0x03D0 (Size: 0x8, Type: NameProperty)
    FName DefensiveBuildName; // 0x03D8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentEnable) == 416, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentEnable");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentTentativeDelayMin) == 456, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentTentativeDelayMin");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentTentativeDelayMax) == 496, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentTentativeDelayMax");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentDurationMin) == 536, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentDurationMin");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentDurationMax) == 576, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentDurationMax");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, BuilderPercentage) == 616, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::BuilderPercentage");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, BuilderMinDistance) == 656, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::BuilderMinDistance");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, BuilderMaxDistance) == 696, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::BuilderMaxDistance");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, GuardMinDistance) == 736, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::GuardMinDistance");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, GuardMaxDistance) == 776, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::GuardMaxDistance");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, AllowInSwimming) == 816, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::AllowInSwimming");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, AllowInFalling) == 856, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::AllowInFalling");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, MinSquadMembersCountToBuild) == 896, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::MinSquadMembersCountToBuild");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentStatusKeyName) == 936, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentStatusKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentMovementStateKeyName) == 944, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentMovementStateKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentCenterLocationKeyName) == 952, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentCenterLocationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentDestinationKeyName) == 960, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentDestinationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentAroundCampFireLocationKeyName) == 968, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentAroundCampFireLocationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentRoleKeyName) == 976, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::EncampmentRoleKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, DefensiveBuildName) == 984, "Offset mismatch for UFortAthenaNpcEvaluator_Encampment::DefensiveBuildName");

// /Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowPatrolPath
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaNpcEvaluator_FollowPatrolPath
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t FollowPatrolPathKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t FollowPatrolPathMovementStateKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    FName FollowPatrolPathDestinationKeyName; // 0x01A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01B0
    float ChanceToTakeABreak; // 0x01B4 (Size: 0x4, Type: FloatProperty)
    float BreakDurationMin; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    float BreakDurationMax; // 0x01BC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, FollowPatrolPathKeyName) == 416, "Offset mismatch for UFortAthenaNpcEvaluator_FollowPatrolPath::FollowPatrolPathKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, FollowPatrolPathMovementStateKeyName) == 420, "Offset mismatch for UFortAthenaNpcEvaluator_FollowPatrolPath::FollowPatrolPathMovementStateKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, FollowPatrolPathDestinationKeyName) == 424, "Offset mismatch for UFortAthenaNpcEvaluator_FollowPatrolPath::FollowPatrolPathDestinationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, ChanceToTakeABreak) == 436, "Offset mismatch for UFortAthenaNpcEvaluator_FollowPatrolPath::ChanceToTakeABreak");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, BreakDurationMin) == 440, "Offset mismatch for UFortAthenaNpcEvaluator_FollowPatrolPath::BreakDurationMin");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, BreakDurationMax) == 444, "Offset mismatch for UFortAthenaNpcEvaluator_FollowPatrolPath::BreakDurationMax");

// /Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowSquadLeader
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaNpcEvaluator_FollowSquadLeader
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t FormationOffsetRadiusMin[0x28]; // 0x01A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t FormationOffsetRadiusMax[0x28]; // 0x01C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TooFarFromSquadLeaderDistance[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxNoiseRadius[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDurationNoiseEvaluate[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDurationNoiseEvaluate[0x28]; // 0x0268 (Size: 0x28, Type: StructProperty)
    FName FollowSquadLeaderStatusKeyName; // 0x0290 (Size: 0x8, Type: NameProperty)
    FName FollowSquadLeaderMovementStateKeyName; // 0x0298 (Size: 0x8, Type: NameProperty)
    FName FollowSquadLeaderDestinationKeyName; // 0x02A0 (Size: 0x8, Type: NameProperty)
    FName TooFarFromLeaderKeyName; // 0x02A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t CachedSquadFormationOffset[0x18]; // 0x02B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CachedNoiseOffset[0x18]; // 0x02C8 (Size: 0x18, Type: StructProperty)
    float CachedTooFarFromSquadLeaderDistanceSqr; // 0x02E0 (Size: 0x4, Type: FloatProperty)
    float LastNoiseOffsetUpdateTime; // 0x02E4 (Size: 0x4, Type: FloatProperty)
    float DurationNoiseEvaluate; // 0x02E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FormationOffsetRadiusMin) == 416, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::FormationOffsetRadiusMin");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FormationOffsetRadiusMax) == 456, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::FormationOffsetRadiusMax");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, TooFarFromSquadLeaderDistance) == 496, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::TooFarFromSquadLeaderDistance");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, MaxNoiseRadius) == 536, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::MaxNoiseRadius");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, MinDurationNoiseEvaluate) == 576, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::MinDurationNoiseEvaluate");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, MaxDurationNoiseEvaluate) == 616, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::MaxDurationNoiseEvaluate");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FollowSquadLeaderStatusKeyName) == 656, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::FollowSquadLeaderStatusKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FollowSquadLeaderMovementStateKeyName) == 664, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::FollowSquadLeaderMovementStateKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FollowSquadLeaderDestinationKeyName) == 672, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::FollowSquadLeaderDestinationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, TooFarFromLeaderKeyName) == 680, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::TooFarFromLeaderKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, CachedSquadFormationOffset) == 688, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::CachedSquadFormationOffset");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, CachedNoiseOffset) == 712, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::CachedNoiseOffset");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, CachedTooFarFromSquadLeaderDistanceSqr) == 736, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::CachedTooFarFromSquadLeaderDistanceSqr");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, LastNoiseOffsetUpdateTime) == 740, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::LastNoiseOffsetUpdateTime");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, DurationNoiseEvaluate) == 744, "Offset mismatch for UFortAthenaNpcEvaluator_FollowSquadLeader::DurationNoiseEvaluate");

// /Script/FortniteAIServer.FortAthenaNpcEvaluator_Leash
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaNpcEvaluator_Leash
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t LeashKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeashMovementStateKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeashDestinationKeyName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t LeashLocationKeyName[0x4]; // 0x01AC (Size: 0x4, Type: NameProperty)
    std::uint8_t LeashOuterRadiusKeyName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t ShouldTeleportInLeashKeyName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TriggerLeashBehaviorKeyName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAlwaysForceMoveToLeashCenter; // 0x01BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForcePositionOnLeash; // 0x01BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01BE
    void* AvoidObstaclesFilterClass; // 0x01C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x10]; // 0x01C8
    void* LeashRuntimeParameters; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashKeyName) == 416, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::LeashKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashMovementStateKeyName) == 420, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::LeashMovementStateKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashDestinationKeyName) == 424, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::LeashDestinationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashLocationKeyName) == 428, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::LeashLocationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashOuterRadiusKeyName) == 432, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::LeashOuterRadiusKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, ShouldTeleportInLeashKeyName) == 436, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::ShouldTeleportInLeashKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, TriggerLeashBehaviorKeyName) == 440, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::TriggerLeashBehaviorKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, bAlwaysForceMoveToLeashCenter) == 444, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::bAlwaysForceMoveToLeashCenter");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, bForcePositionOnLeash) == 445, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::bForcePositionOnLeash");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, AvoidObstaclesFilterClass) == 448, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::AvoidObstaclesFilterClass");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashRuntimeParameters) == 472, "Offset mismatch for UFortAthenaNpcEvaluator_Leash::LeashRuntimeParameters");

// /Script/FortniteAIServer.FortAthenaNpcEvaluator_Patrolling
// Kind: Class; super: FortAthenaAIBotEvaluator_Movement
class UFortAthenaNpcEvaluator_Patrolling
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t PatrollingKeyName[0x4]; // 0x01A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t PatrollingMovementStateKeyName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t PatrollingDestinationKeyName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t DynamicBlueprintStatusKeyName[0x4]; // 0x01AC (Size: 0x4, Type: NameProperty)
    std::uint8_t DynamicBlueprintActorKeyName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t PatrollingShouldMoveKeyName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t PatrollingAppendDestinationKeyName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    FName OptionalPatrollingPrioritizeKeyName; // 0x01BC (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0xC]; // 0x01C4
    float DistanceToTestPoint; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanDisablePatrolling; // 0x01D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanReenablePatrolling; // 0x01D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x01D6
    float ReenableTimer; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanSelectNearestPatrolPointAtStart; // 0x01DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanRetryOnPartialPathSuccess; // 0x01DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x01DE
    std::uint8_t RequiredTagQueryOnAIForPrioritizing[0x48]; // 0x01E0 (Size: 0x48, Type: StructProperty)
    std::uint8_t SecondsToPrioritizeNonCompletedPatrol[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t AppendPathLookAheadDistance[0x18]; // 0x0250 (Size: 0x18, Type: StructProperty)
    void* CachedNpcPatrollingComponent; // 0x0268 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingKeyName) == 416, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::PatrollingKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingMovementStateKeyName) == 420, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::PatrollingMovementStateKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingDestinationKeyName) == 424, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::PatrollingDestinationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, DynamicBlueprintStatusKeyName) == 428, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::DynamicBlueprintStatusKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, DynamicBlueprintActorKeyName) == 432, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::DynamicBlueprintActorKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingShouldMoveKeyName) == 436, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::PatrollingShouldMoveKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingAppendDestinationKeyName) == 440, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::PatrollingAppendDestinationKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, OptionalPatrollingPrioritizeKeyName) == 444, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::OptionalPatrollingPrioritizeKeyName");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, DistanceToTestPoint) == 464, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::DistanceToTestPoint");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, bCanDisablePatrolling) == 468, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::bCanDisablePatrolling");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, bCanReenablePatrolling) == 469, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::bCanReenablePatrolling");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, ReenableTimer) == 472, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::ReenableTimer");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, bCanSelectNearestPatrolPointAtStart) == 476, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::bCanSelectNearestPatrolPointAtStart");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, bCanRetryOnPartialPathSuccess) == 477, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::bCanRetryOnPartialPathSuccess");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, RequiredTagQueryOnAIForPrioritizing) == 480, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::RequiredTagQueryOnAIForPrioritizing");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, SecondsToPrioritizeNonCompletedPatrol) == 552, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::SecondsToPrioritizeNonCompletedPatrol");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, AppendPathLookAheadDistance) == 592, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::AppendPathLookAheadDistance");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, CachedNpcPatrollingComponent) == 616, "Offset mismatch for UFortAthenaNpcEvaluator_Patrolling::CachedNpcPatrollingComponent");

// /Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData
// Kind: Class; super: Object
class UFortAthenaPlayContextualAnimTaskInstanceData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PrimaryActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryActor; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FName SecondaryRole; // 0x0038 (Size: 0x8, Type: NameProperty)
    void* TertiaryActor; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    FName TertiaryRole; // 0x0048 (Size: 0x8, Type: NameProperty)
    TScriptInterface<void> OverrideProviderInterface; // 0x0050 (Size: 0x10, Type: InterfaceProperty)
    void* SceneAsset; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    FName SectionName; // 0x0068 (Size: 0x8, Type: NameProperty)
    std::uint8_t PrimaryActorExternalTags[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t SecondaryActorExternalTags[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t TertiaryActorExternalTags[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExecutionMethod; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bWaitForNotifyEventToEnd; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00D2
    std::uint8_t NotifyEventNameToEnd[0x4]; // 0x00D4 (Size: 0x4, Type: NameProperty)
    std::int32_t LoopsToRun; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLoopForever; // 0x00DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00DD
    float DelayBetweenLoops; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float RandomDeviationBetweenLoops; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    TArray<void*> WarpTargets; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bFindAnimSetBasedOnWarpTargets; // 0x00F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, PrimaryActor) == 40, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::PrimaryActor");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SecondaryActor) == 48, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::SecondaryActor");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SecondaryRole) == 56, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::SecondaryRole");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, TertiaryActor) == 64, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::TertiaryActor");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, TertiaryRole) == 72, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::TertiaryRole");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, OverrideProviderInterface) == 80, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::OverrideProviderInterface");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SceneAsset) == 96, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::SceneAsset");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SectionName) == 104, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::SectionName");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, PrimaryActorExternalTags) == 112, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::PrimaryActorExternalTags");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SecondaryActorExternalTags) == 144, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::SecondaryActorExternalTags");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, TertiaryActorExternalTags) == 176, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::TertiaryActorExternalTags");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, ExecutionMethod) == 208, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::ExecutionMethod");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, bWaitForNotifyEventToEnd) == 209, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::bWaitForNotifyEventToEnd");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, NotifyEventNameToEnd) == 212, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::NotifyEventNameToEnd");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, LoopsToRun) == 216, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::LoopsToRun");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, bLoopForever) == 220, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::bLoopForever");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, DelayBetweenLoops) == 224, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::DelayBetweenLoops");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, RandomDeviationBetweenLoops) == 228, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::RandomDeviationBetweenLoops");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, WarpTargets) == 232, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::WarpTargets");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, bFindAnimSetBasedOnWarpTargets) == 248, "Offset mismatch for UFortAthenaPlayContextualAnimTaskInstanceData::bFindAnimSetBasedOnWarpTargets");

// /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask
// Kind: Class; super: StateTreeTaskBlueprintBase
class UFortAthenaPlayInteractionStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* InteractorActor; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* InteractableActor; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* InteractorMontage; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* InteractableMontage; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bWaitForNotifyEventToEnd; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    std::uint8_t NotifyEventNameToEnd[0x4]; // 0x0094 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAddMotionWarpingTargets; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableCollisionBetweenActors; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetMovementModeToFlying; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x009B
    std::int32_t LoopsToRun; // 0x009C (Size: 0x4, Type: IntProperty)
    std::uint8_t bLoopForever; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00A1
    float DelayBetweenLoops; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float RandomDeviationBetweenLoops; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStopInteractorAnimMontageOnExit; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopInteractableAnimMontageOnExit; // 0x00AD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, InteractorActor) == 112, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::InteractorActor");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, InteractableActor) == 120, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::InteractableActor");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, InteractorMontage) == 128, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::InteractorMontage");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, InteractableMontage) == 136, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::InteractableMontage");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bWaitForNotifyEventToEnd) == 144, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::bWaitForNotifyEventToEnd");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, NotifyEventNameToEnd) == 148, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::NotifyEventNameToEnd");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bAddMotionWarpingTargets) == 152, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::bAddMotionWarpingTargets");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bDisableCollisionBetweenActors) == 153, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::bDisableCollisionBetweenActors");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bSetMovementModeToFlying) == 154, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::bSetMovementModeToFlying");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, LoopsToRun) == 156, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::LoopsToRun");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bLoopForever) == 160, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::bLoopForever");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, DelayBetweenLoops) == 164, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::DelayBetweenLoops");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, RandomDeviationBetweenLoops) == 168, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::RandomDeviationBetweenLoops");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bStopInteractorAnimMontageOnExit) == 172, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::bStopInteractorAnimMontageOnExit");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bStopInteractableAnimMontageOnExit) == 173, "Offset mismatch for UFortAthenaPlayInteractionStateTreeTask::bStopInteractableAnimMontageOnExit");

// /Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask
// Kind: Class; super: StateTreeTaskBlueprintBase
class UFortAthenaPlayMontageStateTreeTask
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* Actor; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* Montage; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ExecMode; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0081
    std::uint8_t SectionName[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::uint8_t LoopMode; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    TArray<void*> WarpTargets; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bWaitForNotifyEventToEnd; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00A1
    std::uint8_t NotifyEventNameToEnd[0x4]; // 0x00A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSetMovementModeToFlying; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00A9
    std::int32_t LoopsToRun; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::uint8_t bLoopForever; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x00B1
    float DelayBetweenLoops; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float RandomDeviationBetweenLoops; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStopAnimMontageOnExit; // 0x00BC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, Actor) == 112, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::Actor");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, Montage) == 120, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::Montage");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, ExecMode) == 128, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::ExecMode");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, SectionName) == 132, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::SectionName");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, LoopMode) == 136, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::LoopMode");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, WarpTargets) == 144, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::WarpTargets");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, bWaitForNotifyEventToEnd) == 160, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::bWaitForNotifyEventToEnd");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, NotifyEventNameToEnd) == 164, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::NotifyEventNameToEnd");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, bSetMovementModeToFlying) == 168, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::bSetMovementModeToFlying");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, LoopsToRun) == 172, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::LoopsToRun");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, bLoopForever) == 176, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::bLoopForever");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, DelayBetweenLoops) == 180, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::DelayBetweenLoops");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, RandomDeviationBetweenLoops) == 184, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::RandomDeviationBetweenLoops");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, bStopAnimMontageOnExit) == 188, "Offset mismatch for UFortAthenaPlayMontageStateTreeTask::bStopAnimMontageOnExit");

// /Script/FortniteAIServer.FortBTComposite_RandomSelector
// Kind: Class; super: BTCompositeNode
class UFortBTComposite_RandomSelector
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> Weights; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortBTComposite_RandomSelector, Weights) == 128, "Offset mismatch for UFortBTComposite_RandomSelector::Weights");

// /Script/FortniteAIServer.FortBTContext_MoveUrgency
// Kind: Class; super: FortBTService_ContextOverride
class UFortBTContext_MoveUrgency
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t MoveUrgencyValue[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    std::uint8_t MoveUrgency; // 0x00B8 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortBTContext_MoveUrgency, MoveUrgencyValue) == 136, "Offset mismatch for UFortBTContext_MoveUrgency::MoveUrgencyValue");
static_assert(offsetof(UFortBTContext_MoveUrgency, MoveUrgency) == 184, "Offset mismatch for UFortBTContext_MoveUrgency::MoveUrgency");

// /Script/FortniteAIServer.FortBTContext_SkipNotPerceivedGoals
// Kind: Class; super: FortBTService_ContextOverride
class UFortBTContext_SkipNotPerceivedGoals
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Enabled[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTContext_SkipNotPerceivedGoals, Enabled) == 112, "Offset mismatch for UFortBTContext_SkipNotPerceivedGoals::Enabled");

// /Script/FortniteAIServer.FortBTContext_SuppressGoalUpdate
// Kind: Class; super: FortBTService_ContextOverride
class UFortBTContext_SuppressGoalUpdate
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t bUnregisterFromGoalManager; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTContext_SuppressGoalUpdate, bUnregisterFromGoalManager) == 136, "Offset mismatch for UFortBTContext_SuppressGoalUpdate::bUnregisterFromGoalManager");

// /Script/FortniteAIServer.FortBTDecorator_AIBotVehicleSeatStatus
// Kind: Class; super: BTDecorator
class UFortBTDecorator_AIBotVehicleSeatStatus
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SeatType; // 0x0068 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortBTDecorator_AIBotVehicleSeatStatus, SeatType) == 104, "Offset mismatch for UFortBTDecorator_AIBotVehicleSeatStatus::SeatType");

// /Script/FortniteAIServer.FortBTDecorator_Affiliation
// Kind: Class; super: BTDecorator
class UFortBTDecorator_Affiliation
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t FirstActorKey[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t SecondActorKey[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint32_t AcceptedAffiliations; // 0x00B8 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UFortBTDecorator_Affiliation, FirstActorKey) == 104, "Offset mismatch for UFortBTDecorator_Affiliation::FirstActorKey");
static_assert(offsetof(UFortBTDecorator_Affiliation, SecondActorKey) == 144, "Offset mismatch for UFortBTDecorator_Affiliation::SecondActorKey");
static_assert(offsetof(UFortBTDecorator_Affiliation, AcceptedAffiliations) == 184, "Offset mismatch for UFortBTDecorator_Affiliation::AcceptedAffiliations");

// /Script/FortniteAIServer.FortBTDecorator_CanBeConsideredAirborne
// Kind: Class; super: BTDecorator_BlackboardBase
class UFortBTDecorator_CanBeConsideredAirborne
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t BlackboardKey[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_CanBeConsideredAirborne, BlackboardKey) == 104, "Offset mismatch for UFortBTDecorator_CanBeConsideredAirborne::BlackboardKey");

// /Script/FortniteAIServer.FortBTDecorator_CanDoInjectedBehavior
// Kind: Class; super: BTDecorator_Blackboard
class UFortBTDecorator_CanDoInjectedBehavior
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::int32_t IntValue; // 0x0090 (Size: 0x4, Type: IntProperty)
    float FloatValue; // 0x0094 (Size: 0x4, Type: FloatProperty)
    FString StringValue; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString CachedDescription; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t OperationType; // 0x00B8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NotifyObserver; // 0x00B9 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortBTDecorator_CanDoInjectedBehavior, IntValue) == 144, "Offset mismatch for UFortBTDecorator_CanDoInjectedBehavior::IntValue");
static_assert(offsetof(UFortBTDecorator_CanDoInjectedBehavior, FloatValue) == 148, "Offset mismatch for UFortBTDecorator_CanDoInjectedBehavior::FloatValue");
static_assert(offsetof(UFortBTDecorator_CanDoInjectedBehavior, StringValue) == 152, "Offset mismatch for UFortBTDecorator_CanDoInjectedBehavior::StringValue");
static_assert(offsetof(UFortBTDecorator_CanDoInjectedBehavior, CachedDescription) == 168, "Offset mismatch for UFortBTDecorator_CanDoInjectedBehavior::CachedDescription");
static_assert(offsetof(UFortBTDecorator_CanDoInjectedBehavior, OperationType) == 184, "Offset mismatch for UFortBTDecorator_CanDoInjectedBehavior::OperationType");
static_assert(offsetof(UFortBTDecorator_CanDoInjectedBehavior, NotifyObserver) == 185, "Offset mismatch for UFortBTDecorator_CanDoInjectedBehavior::NotifyObserver");

// /Script/FortniteAIServer.FortBTDecorator_DistanceBetween
// Kind: Class; super: BTDecorator
class UFortBTDecorator_DistanceBetween
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Operator; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t BlackboardKeyA[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlackboardKeyB[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpecifiedDistance[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseSelf; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D9
    std::uint8_t bCalculateAs2D[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DistanceCalculationUpdateRate[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_DistanceBetween, Operator) == 104, "Offset mismatch for UFortBTDecorator_DistanceBetween::Operator");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, BlackboardKeyA) == 112, "Offset mismatch for UFortBTDecorator_DistanceBetween::BlackboardKeyA");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, BlackboardKeyB) == 152, "Offset mismatch for UFortBTDecorator_DistanceBetween::BlackboardKeyB");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, SpecifiedDistance) == 192, "Offset mismatch for UFortBTDecorator_DistanceBetween::SpecifiedDistance");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, bUseSelf) == 216, "Offset mismatch for UFortBTDecorator_DistanceBetween::bUseSelf");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, bCalculateAs2D) == 224, "Offset mismatch for UFortBTDecorator_DistanceBetween::bCalculateAs2D");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, DistanceCalculationUpdateRate) == 248, "Offset mismatch for UFortBTDecorator_DistanceBetween::DistanceCalculationUpdateRate");

// /Script/FortniteAIServer.FortBTDecorator_ExecutionStatus
// Kind: Class; super: BTDecorator_Blackboard
class UFortBTDecorator_ExecutionStatus
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ShouldUpdateExecutionStatus[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_ExecutionStatus, ShouldUpdateExecutionStatus) == 192, "Offset mismatch for UFortBTDecorator_ExecutionStatus::ShouldUpdateExecutionStatus");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanActivate
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_CanActivate
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t GameplayAbilityTagContainer[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetValue[0x20]; // 0x0098 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTestingValue[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseTarget; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t GameplayAbilityTag[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagBlackboardKey[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Target[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTesting[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanActivate, GameplayAbilityTagContainer) == 104, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanActivate::GameplayAbilityTagContainer");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanActivate, TargetValue) == 152, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanActivate::TargetValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanActivate, ActiveAbilityTagsToSkipTestingValue) == 184, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanActivate::ActiveAbilityTagsToSkipTestingValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanActivate, bUseTarget) == 232, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanActivate::bUseTarget");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanActivate, GameplayAbilityTag) == 240, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanActivate::GameplayAbilityTag");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanActivate, GameplayAbilityTagBlackboardKey) == 272, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanActivate::GameplayAbilityTagBlackboardKey");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanActivate, Target) == 312, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanActivate::Target");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanActivate, ActiveAbilityTagsToSkipTesting) == 352, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanActivate::ActiveAbilityTagsToSkipTesting");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanHitTarget
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_CanHitTarget
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t UseIdealYawRotationToTargetValue[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t UseIdealYawRotationToTarget; // 0x0198 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanHitTarget, UseIdealYawRotationToTargetValue) == 384, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanHitTarget::UseIdealYawRotationToTargetValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CanHitTarget, UseIdealYawRotationToTarget) == 408, "Offset mismatch for UFortBTDecorator_GameplayAbility_CanHitTarget::UseIdealYawRotationToTarget");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CompareDistance
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_CompareDistance
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    TArray<void*> DistanceComparisons; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_CompareDistance, DistanceComparisons) == 384, "Offset mismatch for UFortBTDecorator_GameplayAbility_CompareDistance::DistanceComparisons");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t GameplayAbilityTagContainer[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetValue[0x20]; // 0x0098 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTestingValue[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseTarget; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t GameplayAbilityTag[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagBlackboardKey[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Target[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTesting[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags, GameplayAbilityTagContainer) == 104, "Offset mismatch for UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::GameplayAbilityTagContainer");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags, TargetValue) == 152, "Offset mismatch for UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::TargetValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags, ActiveAbilityTagsToSkipTestingValue) == 184, "Offset mismatch for UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::ActiveAbilityTagsToSkipTestingValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags, bUseTarget) == 232, "Offset mismatch for UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::bUseTarget");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags, GameplayAbilityTag) == 240, "Offset mismatch for UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::GameplayAbilityTag");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags, GameplayAbilityTagBlackboardKey) == 272, "Offset mismatch for UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::GameplayAbilityTagBlackboardKey");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags, Target) == 312, "Offset mismatch for UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::Target");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags, ActiveAbilityTagsToSkipTesting) == 352, "Offset mismatch for UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::ActiveAbilityTagsToSkipTesting");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasGameplayAbility
// Kind: Class; super: BTDecorator
class UFortBTDecorator_GameplayAbility_HasGameplayAbility
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t AbilityOwningActor[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagContainer[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    std::uint8_t OnlyTestActiveAbility[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t AbilityOwningActorKey[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GameplayAbilityTag[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagBlackboardKey[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t bOnlyTestActiveAbility; // 0x0140 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, AbilityOwningActor) == 104, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasGameplayAbility::AbilityOwningActor");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, GameplayAbilityTagContainer) == 136, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasGameplayAbility::GameplayAbilityTagContainer");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, OnlyTestActiveAbility) == 184, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasGameplayAbility::OnlyTestActiveAbility");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, AbilityOwningActorKey) == 208, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasGameplayAbility::AbilityOwningActorKey");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, GameplayAbilityTag) == 248, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasGameplayAbility::GameplayAbilityTag");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, GameplayAbilityTagBlackboardKey) == 280, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasGameplayAbility::GameplayAbilityTagBlackboardKey");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, bOnlyTestActiveAbility) == 320, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasGameplayAbility::bOnlyTestActiveAbility");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasNearbyPawns
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_HasNearbyPawns
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t NearbyPawnDistanceValue[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t FilterAIPawns[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    std::uint8_t FilterPlayerPawns[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    float NearbyPawnDistance; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFilterAIPawns; // 0x01CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilterPlayerPawns; // 0x01CD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, NearbyPawnDistanceValue) == 384, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasNearbyPawns::NearbyPawnDistanceValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, FilterAIPawns) == 408, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasNearbyPawns::FilterAIPawns");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, FilterPlayerPawns) == 432, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasNearbyPawns::FilterPlayerPawns");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, NearbyPawnDistance) == 456, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasNearbyPawns::NearbyPawnDistance");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, bFilterAIPawns) == 460, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasNearbyPawns::bFilterAIPawns");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, bFilterPlayerPawns) == 461, "Offset mismatch for UFortBTDecorator_GameplayAbility_HasNearbyPawns::bFilterPlayerPawns");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsClosestPawnInRange
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t NearbyPawnDistanceValue[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t FilterAIPawns[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    std::uint8_t FilterPlayerPawns[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    float NearbyPawnDistance; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFilterAIPawns; // 0x01CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilterPlayerPawns; // 0x01CD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, NearbyPawnDistanceValue) == 384, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::NearbyPawnDistanceValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, FilterAIPawns) == 408, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::FilterAIPawns");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, FilterPlayerPawns) == 432, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::FilterPlayerPawns");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, NearbyPawnDistance) == 456, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::NearbyPawnDistance");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, bFilterAIPawns) == 460, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::bFilterAIPawns");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, bFilterPlayerPawns) == 461, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::bFilterPlayerPawns");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsOnCooldown
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_IsOnCooldown
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t GameplayAbilityTagContainer[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetValue[0x20]; // 0x0098 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTestingValue[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseTarget; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t GameplayAbilityTag[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagBlackboardKey[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Target[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTesting[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsOnCooldown, GameplayAbilityTagContainer) == 104, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsOnCooldown::GameplayAbilityTagContainer");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsOnCooldown, TargetValue) == 152, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsOnCooldown::TargetValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsOnCooldown, ActiveAbilityTagsToSkipTestingValue) == 184, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsOnCooldown::ActiveAbilityTagsToSkipTestingValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsOnCooldown, bUseTarget) == 232, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsOnCooldown::bUseTarget");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsOnCooldown, GameplayAbilityTag) == 240, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsOnCooldown::GameplayAbilityTag");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsOnCooldown, GameplayAbilityTagBlackboardKey) == 272, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsOnCooldown::GameplayAbilityTagBlackboardKey");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsOnCooldown, Target) == 312, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsOnCooldown::Target");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsOnCooldown, ActiveAbilityTagsToSkipTesting) == 352, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsOnCooldown::ActiveAbilityTagsToSkipTesting");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t GameplayAbilityTagContainer[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetValue[0x20]; // 0x0098 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTestingValue[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseTarget; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t GameplayAbilityTag[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagBlackboardKey[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Target[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTesting[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget, GameplayAbilityTagContainer) == 104, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::GameplayAbilityTagContainer");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget, TargetValue) == 152, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::TargetValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget, ActiveAbilityTagsToSkipTestingValue) == 184, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::ActiveAbilityTagsToSkipTestingValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget, bUseTarget) == 232, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::bUseTarget");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget, GameplayAbilityTag) == 240, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::GameplayAbilityTag");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget, GameplayAbilityTagBlackboardKey) == 272, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::GameplayAbilityTagBlackboardKey");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget, Target) == 312, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::Target");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget, ActiveAbilityTagsToSkipTesting) == 352, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::ActiveAbilityTagsToSkipTesting");

// /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t GameplayAbilityTagContainer[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetValue[0x20]; // 0x0098 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTestingValue[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bUseTarget; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t GameplayAbilityTag[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagBlackboardKey[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t Target[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveAbilityTagsToSkipTesting[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange, GameplayAbilityTagContainer) == 104, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::GameplayAbilityTagContainer");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange, TargetValue) == 152, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::TargetValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange, ActiveAbilityTagsToSkipTestingValue) == 184, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::ActiveAbilityTagsToSkipTestingValue");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange, bUseTarget) == 232, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::bUseTarget");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange, GameplayAbilityTag) == 240, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::GameplayAbilityTag");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange, GameplayAbilityTagBlackboardKey) == 272, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::GameplayAbilityTagBlackboardKey");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange, Target) == 312, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::Target");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange, ActiveAbilityTagsToSkipTesting) == 352, "Offset mismatch for UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::ActiveAbilityTagsToSkipTesting");

// /Script/FortniteAIServer.FortBTDecorator_HasToken
// Kind: Class; super: BTDecorator_BlackboardBase
class UFortBTDecorator_HasToken
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t TokenQuery[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationTagQuery[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_HasToken, TokenQuery) == 144, "Offset mismatch for UFortBTDecorator_HasToken::TokenQuery");
static_assert(offsetof(UFortBTDecorator_HasToken, ActivationTagQuery) == 176, "Offset mismatch for UFortBTDecorator_HasToken::ActivationTagQuery");

// /Script/FortniteAIServer.FortBTDecorator_IsGoalPawn
// Kind: Class; super: BTDecorator_BlackboardBase
class UFortBTDecorator_IsGoalPawn
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t BlackboardKey[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_IsGoalPawn, BlackboardKey) == 104, "Offset mismatch for UFortBTDecorator_IsGoalPawn::BlackboardKey");

// /Script/FortniteAIServer.FortBTDecorator_IsInBotEndGame
// Kind: Class; super: BTDecorator
class UFortBTDecorator_IsInBotEndGame
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::uint8_t FlowAbortMode; // 0x0064 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortBTDecorator_IsInBotEndGame, bInverseCondition) == 96, "Offset mismatch for UFortBTDecorator_IsInBotEndGame::bInverseCondition");
static_assert(offsetof(UFortBTDecorator_IsInBotEndGame, FlowAbortMode) == 100, "Offset mismatch for UFortBTDecorator_IsInBotEndGame::FlowAbortMode");

// /Script/FortniteAIServer.FortBTDecorator_IsMoving
// Kind: Class; super: FortBTDecorator_QueryGameplayAbility
class UFortBTDecorator_IsMoving
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t UpdateIntervalValue[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinTimeValue[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseMinDist; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01B1
    std::uint8_t UseMinDistToTargetTime[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinDistanceComparison[0x38]; // 0x01D0 (Size: 0x38, Type: StructProperty)
    float UpdateInterval; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float MinTime; // 0x020C (Size: 0x4, Type: FloatProperty)
    float MinDistMinTime; // 0x0210 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortBTDecorator_IsMoving, UpdateIntervalValue) == 384, "Offset mismatch for UFortBTDecorator_IsMoving::UpdateIntervalValue");
static_assert(offsetof(UFortBTDecorator_IsMoving, MinTimeValue) == 408, "Offset mismatch for UFortBTDecorator_IsMoving::MinTimeValue");
static_assert(offsetof(UFortBTDecorator_IsMoving, bUseMinDist) == 432, "Offset mismatch for UFortBTDecorator_IsMoving::bUseMinDist");
static_assert(offsetof(UFortBTDecorator_IsMoving, UseMinDistToTargetTime) == 440, "Offset mismatch for UFortBTDecorator_IsMoving::UseMinDistToTargetTime");
static_assert(offsetof(UFortBTDecorator_IsMoving, MinDistanceComparison) == 464, "Offset mismatch for UFortBTDecorator_IsMoving::MinDistanceComparison");
static_assert(offsetof(UFortBTDecorator_IsMoving, UpdateInterval) == 520, "Offset mismatch for UFortBTDecorator_IsMoving::UpdateInterval");
static_assert(offsetof(UFortBTDecorator_IsMoving, MinTime) == 524, "Offset mismatch for UFortBTDecorator_IsMoving::MinTime");
static_assert(offsetof(UFortBTDecorator_IsMoving, MinDistMinTime) == 528, "Offset mismatch for UFortBTDecorator_IsMoving::MinDistMinTime");

// /Script/FortniteAIServer.FortBTDecorator_IsTakerAirborne
// Kind: Class; super: BTDecorator
class UFortBTDecorator_IsTakerAirborne
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::uint8_t FlowAbortMode; // 0x0064 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortBTDecorator_IsTakerAirborne, bInverseCondition) == 96, "Offset mismatch for UFortBTDecorator_IsTakerAirborne::bInverseCondition");
static_assert(offsetof(UFortBTDecorator_IsTakerAirborne, FlowAbortMode) == 100, "Offset mismatch for UFortBTDecorator_IsTakerAirborne::FlowAbortMode");

// /Script/FortniteAIServer.FortBTDecorator_RandomCooldown
// Kind: Class; super: BTDecorator
class UFortBTDecorator_RandomCooldown
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t MinCoolDownTime[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxCoolDownTime[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_RandomCooldown, MinCoolDownTime) == 104, "Offset mismatch for UFortBTDecorator_RandomCooldown::MinCoolDownTime");
static_assert(offsetof(UFortBTDecorator_RandomCooldown, MaxCoolDownTime) == 128, "Offset mismatch for UFortBTDecorator_RandomCooldown::MaxCoolDownTime");

// /Script/FortniteAIServer.FortBTDecorator_TokenCount
// Kind: Class; super: BTDecorator_BlackboardBase
class UFortBTDecorator_TokenCount
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t TokenQuery[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    std::uint8_t bOwnedTokens; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x00D9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00DA
    std::uint8_t TokenCountCompareValue[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTDecorator_TokenCount, TokenQuery) == 144, "Offset mismatch for UFortBTDecorator_TokenCount::TokenQuery");
static_assert(offsetof(UFortBTDecorator_TokenCount, bOwnedTokens) == 216, "Offset mismatch for UFortBTDecorator_TokenCount::bOwnedTokens");
static_assert(offsetof(UFortBTDecorator_TokenCount, Operator) == 217, "Offset mismatch for UFortBTDecorator_TokenCount::Operator");
static_assert(offsetof(UFortBTDecorator_TokenCount, TokenCountCompareValue) == 224, "Offset mismatch for UFortBTDecorator_TokenCount::TokenCountCompareValue");

// /Script/FortniteAIServer.FortBTDecorator_WeaponStatus
// Kind: Class; super: BTDecorator
class UFortBTDecorator_WeaponStatus
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float WeaponStatusUpdateRate; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCurrentWeaponShouldBeValid; // 0x006C (Size: 0x1, Type: BoolProperty)
    // 0x006C BoolProperty bTestAllowedCurrentWeaponTags (shared storage)
    // 0x006C BoolProperty bTestIfCurrentWeaponIsValid (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    std::uint8_t AllowedCurrentWeaponTags[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAllInterestedTestsMustPass; // 0x0090 (Size: 0x1, Type: BoolProperty)
    // 0x0090 BoolProperty bCurrentWeaponShouldBeReloading (shared storage)
    // 0x0090 BoolProperty bCurrentWeaponShouldHaveAmmoInMagazine (shared storage)
    // 0x0090 BoolProperty bCurrentWeaponShouldHaveExtraAmmo (shared storage)
    // 0x0090 BoolProperty bTestIfCurrentWeaponHasAmmoInMagazine (shared storage)
    // 0x0090 BoolProperty bTestIfCurrentWeaponHasExtraAmmo (shared storage)
    // 0x0090 BoolProperty bTestIfCurrentWeaponIsReloading (shared storage)
};

static_assert(offsetof(UFortBTDecorator_WeaponStatus, WeaponStatusUpdateRate) == 104, "Offset mismatch for UFortBTDecorator_WeaponStatus::WeaponStatusUpdateRate");
static_assert(offsetof(UFortBTDecorator_WeaponStatus, bCurrentWeaponShouldBeValid) == 108, "Offset mismatch for UFortBTDecorator_WeaponStatus::bCurrentWeaponShouldBeValid");
static_assert(offsetof(UFortBTDecorator_WeaponStatus, AllowedCurrentWeaponTags) == 112, "Offset mismatch for UFortBTDecorator_WeaponStatus::AllowedCurrentWeaponTags");
static_assert(offsetof(UFortBTDecorator_WeaponStatus, bAllInterestedTestsMustPass) == 144, "Offset mismatch for UFortBTDecorator_WeaponStatus::bAllInterestedTestsMustPass");

// /Script/FortniteAIServer.FortBTService_AIEvaluatorsInjector
// Kind: Class; super: BTService
class UFortBTService_AIEvaluatorsInjector
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> InjectionTagsKeys; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortBTService_AIEvaluatorsInjector, InjectionTagsKeys) == 112, "Offset mismatch for UFortBTService_AIEvaluatorsInjector::InjectionTagsKeys");

// /Script/FortniteAIServer.FortBTService_ActivateAbility
// Kind: Class; super: BTService_BlueprintBase
class UFortBTService_ActivateAbility
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t AbilityTags[0x30]; // 0x0098 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetActorKey[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bRequireCanHitTargetWithAbility; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPawnTargetsOnly; // 0x00F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00F2
    std::uint8_t ProhibitedTargetTags[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bCanActivateWhenMoving[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t ActivateOnBecomeRelevant[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t DeactivateOnCeaseRelevant[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    TArray<void*> DistanceChecks; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InitialDelayTime[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    std::uint8_t InitialDelayRandomDeviation[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t WantsReceiveActivatedAbilityEnded[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTService_ActivateAbility, AbilityTags) == 152, "Offset mismatch for UFortBTService_ActivateAbility::AbilityTags");
static_assert(offsetof(UFortBTService_ActivateAbility, TargetActorKey) == 200, "Offset mismatch for UFortBTService_ActivateAbility::TargetActorKey");
static_assert(offsetof(UFortBTService_ActivateAbility, bRequireCanHitTargetWithAbility) == 240, "Offset mismatch for UFortBTService_ActivateAbility::bRequireCanHitTargetWithAbility");
static_assert(offsetof(UFortBTService_ActivateAbility, bPawnTargetsOnly) == 241, "Offset mismatch for UFortBTService_ActivateAbility::bPawnTargetsOnly");
static_assert(offsetof(UFortBTService_ActivateAbility, ProhibitedTargetTags) == 248, "Offset mismatch for UFortBTService_ActivateAbility::ProhibitedTargetTags");
static_assert(offsetof(UFortBTService_ActivateAbility, bCanActivateWhenMoving) == 280, "Offset mismatch for UFortBTService_ActivateAbility::bCanActivateWhenMoving");
static_assert(offsetof(UFortBTService_ActivateAbility, ActivateOnBecomeRelevant) == 304, "Offset mismatch for UFortBTService_ActivateAbility::ActivateOnBecomeRelevant");
static_assert(offsetof(UFortBTService_ActivateAbility, DeactivateOnCeaseRelevant) == 328, "Offset mismatch for UFortBTService_ActivateAbility::DeactivateOnCeaseRelevant");
static_assert(offsetof(UFortBTService_ActivateAbility, DistanceChecks) == 352, "Offset mismatch for UFortBTService_ActivateAbility::DistanceChecks");
static_assert(offsetof(UFortBTService_ActivateAbility, InitialDelayTime) == 368, "Offset mismatch for UFortBTService_ActivateAbility::InitialDelayTime");
static_assert(offsetof(UFortBTService_ActivateAbility, InitialDelayRandomDeviation) == 392, "Offset mismatch for UFortBTService_ActivateAbility::InitialDelayRandomDeviation");
static_assert(offsetof(UFortBTService_ActivateAbility, WantsReceiveActivatedAbilityEnded) == 416, "Offset mismatch for UFortBTService_ActivateAbility::WantsReceiveActivatedAbilityEnded");

// /Script/FortniteAIServer.FortBTService_ApplyGameplayEffect
// Kind: Class; super: BTService
class UFortBTService_ApplyGameplayEffect
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t GameplayEffectBehaviorValue[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayEffectLevel[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTService_ApplyGameplayEffect, GameplayEffectBehaviorValue) == 112, "Offset mismatch for UFortBTService_ApplyGameplayEffect::GameplayEffectBehaviorValue");
static_assert(offsetof(UFortBTService_ApplyGameplayEffect, GameplayEffectLevel) == 144, "Offset mismatch for UFortBTService_ApplyGameplayEffect::GameplayEffectLevel");

// /Script/FortniteAIServer.FortBTService_ClearGoalAndAssignment
// Kind: Class; super: BTService
class UFortBTService_ClearGoalAndAssignment
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float Interval; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float RandomDeviation; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCallTickOnSearchStart; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bRestartTimerOnEachActivation (shared storage)
};

static_assert(offsetof(UFortBTService_ClearGoalAndAssignment, Interval) == 96, "Offset mismatch for UFortBTService_ClearGoalAndAssignment::Interval");
static_assert(offsetof(UFortBTService_ClearGoalAndAssignment, RandomDeviation) == 100, "Offset mismatch for UFortBTService_ClearGoalAndAssignment::RandomDeviation");
static_assert(offsetof(UFortBTService_ClearGoalAndAssignment, bCallTickOnSearchStart) == 104, "Offset mismatch for UFortBTService_ClearGoalAndAssignment::bCallTickOnSearchStart");

// /Script/FortniteAIServer.FortBTService_ContextOverride
// Kind: Class; super: BTService
class UFortBTService_ContextOverride
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Enabled[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTService_ContextOverride, Enabled) == 112, "Offset mismatch for UFortBTService_ContextOverride::Enabled");

// /Script/FortniteAIServer.FortBTService_Crouch
// Kind: Class; super: BTService
class UFortBTService_Crouch
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t EnterShouldCrouch[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExitShouldCrouch[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTService_Crouch, EnterShouldCrouch) == 112, "Offset mismatch for UFortBTService_Crouch::EnterShouldCrouch");
static_assert(offsetof(UFortBTService_Crouch, ExitShouldCrouch) == 136, "Offset mismatch for UFortBTService_Crouch::ExitShouldCrouch");

// /Script/FortniteAIServer.FortBTService_UpdateBotMissionBuilding
// Kind: Class; super: BTService
class UFortBTService_UpdateBotMissionBuilding
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t InterestLocationKey[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuildOrderKey[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTService_UpdateBotMissionBuilding, InterestLocationKey) == 112, "Offset mismatch for UFortBTService_UpdateBotMissionBuilding::InterestLocationKey");
static_assert(offsetof(UFortBTService_UpdateBotMissionBuilding, BuildOrderKey) == 152, "Offset mismatch for UFortBTService_UpdateBotMissionBuilding::BuildOrderKey");

// /Script/FortniteAIServer.FortBTService_UpdateBotMissionGoal
// Kind: Class; super: BTService_BlackboardBase
class UFortBTService_UpdateBotMissionGoal
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t bPickClosest; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bRequireEncounter (shared storage)
    // 0x0098 BoolProperty bRequireInteraction (shared storage)
    // 0x0098 BoolProperty bRequireInteractionOrLocator (shared storage)
};

static_assert(offsetof(UFortBTService_UpdateBotMissionGoal, bPickClosest) == 152, "Offset mismatch for UFortBTService_UpdateBotMissionGoal::bPickClosest");

// /Script/FortniteAIServer.FortBTTask_AlwaysFail
// Kind: Class; super: BTTaskNode
class UFortBTTask_AlwaysFail
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTTask_AlwaysFail, Services) == 88, "Offset mismatch for UFortBTTask_AlwaysFail::Services");
static_assert(offsetof(UFortBTTask_AlwaysFail, bIgnoreRestartSelf) == 104, "Offset mismatch for UFortBTTask_AlwaysFail::bIgnoreRestartSelf");

// /Script/FortniteAIServer.FortBTTask_AlwaysSucceed
// Kind: Class; super: BTTaskNode
class UFortBTTask_AlwaysSucceed
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTTask_AlwaysSucceed, Services) == 88, "Offset mismatch for UFortBTTask_AlwaysSucceed::Services");
static_assert(offsetof(UFortBTTask_AlwaysSucceed, bIgnoreRestartSelf) == 104, "Offset mismatch for UFortBTTask_AlwaysSucceed::bIgnoreRestartSelf");

// /Script/FortniteAIServer.FortBTTask_Bark
// Kind: Class; super: BTTaskNode
class UFortBTTask_Bark
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t BarkTag[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_Bark, BarkTag) == 112, "Offset mismatch for UFortBTTask_Bark::BarkTag");

// /Script/FortniteAIServer.FortBTTask_BotMissionBuild
// Kind: Class; super: BTTask_BlackboardBase
class UFortBTTask_BotMissionBuild
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t BlackboardKey[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_BotMissionBuild, BlackboardKey) == 112, "Offset mismatch for UFortBTTask_BotMissionBuild::BlackboardKey");

// /Script/FortniteAIServer.FortBTTask_BotMissionInteract
// Kind: Class; super: BTTask_BlackboardBase
class UFortBTTask_BotMissionInteract
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t BlackboardKey[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_BotMissionInteract, BlackboardKey) == 112, "Offset mismatch for UFortBTTask_BotMissionInteract::BlackboardKey");

// /Script/FortniteAIServer.FortBTTask_Crouch
// Kind: Class; super: BTTaskNode
class UFortBTTask_Crouch
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ShouldCrouch[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_Crouch, ShouldCrouch) == 112, "Offset mismatch for UFortBTTask_Crouch::ShouldCrouch");

// /Script/FortniteAIServer.FortBTTask_ExecuteGameplayAbility
// Kind: Class; super: BTTask_GameplayTaskBase
class UFortBTTask_ExecuteGameplayAbility
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t GameplayAbilityTagContainer[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    std::uint8_t ForbidAbilityRetryOnActivation[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t GameplayAbilityTag[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t GameplayAbilityTagBlackboardKey[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_ExecuteGameplayAbility, GameplayAbilityTagContainer) == 136, "Offset mismatch for UFortBTTask_ExecuteGameplayAbility::GameplayAbilityTagContainer");
static_assert(offsetof(UFortBTTask_ExecuteGameplayAbility, ForbidAbilityRetryOnActivation) == 184, "Offset mismatch for UFortBTTask_ExecuteGameplayAbility::ForbidAbilityRetryOnActivation");
static_assert(offsetof(UFortBTTask_ExecuteGameplayAbility, GameplayAbilityTag) == 208, "Offset mismatch for UFortBTTask_ExecuteGameplayAbility::GameplayAbilityTag");
static_assert(offsetof(UFortBTTask_ExecuteGameplayAbility, GameplayAbilityTagBlackboardKey) == 240, "Offset mismatch for UFortBTTask_ExecuteGameplayAbility::GameplayAbilityTagBlackboardKey");

// /Script/FortniteAIServer.FortBTTask_GameMoveDirectlyToward
// Kind: Class; super: FortBTTask_GameMoveTo
class UFortBTTask_GameMoveDirectlyToward
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t FocalPointWhileMoving[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PathObstacleAction; // 0x01D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01D9
    void* PushBumpedPawnClass; // 0x01E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NavFilterTag[0x4]; // 0x01E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDetectUnexpectedPathBlockingObstacles; // 0x01EC (Size: 0x1, Type: BoolProperty)
    // 0x01EC BoolProperty bEnableSlowdownAtGoal (shared storage)
    // 0x01EC BoolProperty bFinishMoveOnOverlap (shared storage)
    // 0x01EC BoolProperty bStopAtGoal (shared storage)
    // 0x01EC BoolProperty bUpdateMoveOnBlackboardKeyChanges (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x01ED
    std::uint8_t AcceptableRadiusKey[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bDeimosFlavor; // 0x0218 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTTask_GameMoveDirectlyToward, FocalPointWhileMoving) == 432, "Offset mismatch for UFortBTTask_GameMoveDirectlyToward::FocalPointWhileMoving");
static_assert(offsetof(UFortBTTask_GameMoveDirectlyToward, PathObstacleAction) == 472, "Offset mismatch for UFortBTTask_GameMoveDirectlyToward::PathObstacleAction");
static_assert(offsetof(UFortBTTask_GameMoveDirectlyToward, PushBumpedPawnClass) == 480, "Offset mismatch for UFortBTTask_GameMoveDirectlyToward::PushBumpedPawnClass");
static_assert(offsetof(UFortBTTask_GameMoveDirectlyToward, NavFilterTag) == 488, "Offset mismatch for UFortBTTask_GameMoveDirectlyToward::NavFilterTag");
static_assert(offsetof(UFortBTTask_GameMoveDirectlyToward, bDetectUnexpectedPathBlockingObstacles) == 492, "Offset mismatch for UFortBTTask_GameMoveDirectlyToward::bDetectUnexpectedPathBlockingObstacles");
static_assert(offsetof(UFortBTTask_GameMoveDirectlyToward, AcceptableRadiusKey) == 496, "Offset mismatch for UFortBTTask_GameMoveDirectlyToward::AcceptableRadiusKey");
static_assert(offsetof(UFortBTTask_GameMoveDirectlyToward, bDeimosFlavor) == 536, "Offset mismatch for UFortBTTask_GameMoveDirectlyToward::bDeimosFlavor");

// /Script/FortniteAIServer.FortBTTask_GameMoveTo
// Kind: Class; super: BTTask_MoveTo
class UFortBTTask_GameMoveTo
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t FocalPointWhileMoving[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PathObstacleAction; // 0x01D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01D9
    void* PushBumpedPawnClass; // 0x01E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NavFilterTag[0x4]; // 0x01E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDetectUnexpectedPathBlockingObstacles; // 0x01EC (Size: 0x1, Type: BoolProperty)
    // 0x01EC BoolProperty bEnableSlowdownAtGoal (shared storage)
    // 0x01EC BoolProperty bFinishMoveOnOverlap (shared storage)
    // 0x01EC BoolProperty bStopAtGoal (shared storage)
    // 0x01EC BoolProperty bUpdateMoveOnBlackboardKeyChanges (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x01ED
    std::uint8_t AcceptableRadiusKey[0x28]; // 0x01F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bDeimosFlavor; // 0x0218 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTTask_GameMoveTo, FocalPointWhileMoving) == 432, "Offset mismatch for UFortBTTask_GameMoveTo::FocalPointWhileMoving");
static_assert(offsetof(UFortBTTask_GameMoveTo, PathObstacleAction) == 472, "Offset mismatch for UFortBTTask_GameMoveTo::PathObstacleAction");
static_assert(offsetof(UFortBTTask_GameMoveTo, PushBumpedPawnClass) == 480, "Offset mismatch for UFortBTTask_GameMoveTo::PushBumpedPawnClass");
static_assert(offsetof(UFortBTTask_GameMoveTo, NavFilterTag) == 488, "Offset mismatch for UFortBTTask_GameMoveTo::NavFilterTag");
static_assert(offsetof(UFortBTTask_GameMoveTo, bDetectUnexpectedPathBlockingObstacles) == 492, "Offset mismatch for UFortBTTask_GameMoveTo::bDetectUnexpectedPathBlockingObstacles");
static_assert(offsetof(UFortBTTask_GameMoveTo, AcceptableRadiusKey) == 496, "Offset mismatch for UFortBTTask_GameMoveTo::AcceptableRadiusKey");
static_assert(offsetof(UFortBTTask_GameMoveTo, bDeimosFlavor) == 536, "Offset mismatch for UFortBTTask_GameMoveTo::bDeimosFlavor");

// /Script/FortniteAIServer.FortBTTask_InProgress
// Kind: Class; super: BTTaskNode
class UFortBTTask_InProgress
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTTask_InProgress, Services) == 88, "Offset mismatch for UFortBTTask_InProgress::Services");
static_assert(offsetof(UFortBTTask_InProgress, bIgnoreRestartSelf) == 104, "Offset mismatch for UFortBTTask_InProgress::bIgnoreRestartSelf");

// /Script/FortniteAIServer.FortBTTask_InjectionPoint
// Kind: Class; super: BTTaskNode
class UFortBTTask_InjectionPoint
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t InjectionTag[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t InjectedAction[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_InjectionPoint, InjectionTag) == 112, "Offset mismatch for UFortBTTask_InjectionPoint::InjectionTag");
static_assert(offsetof(UFortBTTask_InjectionPoint, InjectedAction) == 120, "Offset mismatch for UFortBTTask_InjectionPoint::InjectedAction");

// /Script/FortniteAIServer.FortBTTask_RandomFloat
// Kind: Class; super: BTTask_BlackboardBase
class UFortBTTask_RandomFloat
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t MinimumValue[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaximumValue[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_RandomFloat, MinimumValue) == 152, "Offset mismatch for UFortBTTask_RandomFloat::MinimumValue");
static_assert(offsetof(UFortBTTask_RandomFloat, MaximumValue) == 176, "Offset mismatch for UFortBTTask_RandomFloat::MaximumValue");

// /Script/FortniteAIServer.FortBTTask_RandomInt
// Kind: Class; super: BTTask_BlackboardBase
class UFortBTTask_RandomInt
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t MinimumValue[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaximumValue[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_RandomInt, MinimumValue) == 152, "Offset mismatch for UFortBTTask_RandomInt::MinimumValue");
static_assert(offsetof(UFortBTTask_RandomInt, MaximumValue) == 176, "Offset mismatch for UFortBTTask_RandomInt::MaximumValue");

// /Script/FortniteAIServer.FortBTTask_RequestUndermining
// Kind: Class; super: BTTaskNode
class UFortBTTask_RequestUndermining
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTTask_RequestUndermining, Services) == 88, "Offset mismatch for UFortBTTask_RequestUndermining::Services");
static_assert(offsetof(UFortBTTask_RequestUndermining, bIgnoreRestartSelf) == 104, "Offset mismatch for UFortBTTask_RequestUndermining::bIgnoreRestartSelf");

// /Script/FortniteAIServer.FortBTTask_RotateToFaceBBEntryWithTags
// Kind: Class; super: BTTask_RotateToFaceBBEntry
class UFortBTTask_RotateToFaceBBEntryWithTags
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t TagsToApply[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_RotateToFaceBBEntryWithTags, TagsToApply) == 176, "Offset mismatch for UFortBTTask_RotateToFaceBBEntryWithTags::TagsToApply");

// /Script/FortniteAIServer.FortBTTask_RunDynamicStateTree
// Kind: Class; super: BTTask_RunDynamicStateTree
class UFortBTTask_RunDynamicStateTree
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t StateTreeRef[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t InstanceData[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t InjectionTag[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortBTTask_RunDynamicStateTree, StateTreeRef) == 112, "Offset mismatch for UFortBTTask_RunDynamicStateTree::StateTreeRef");
static_assert(offsetof(UFortBTTask_RunDynamicStateTree, InstanceData) == 152, "Offset mismatch for UFortBTTask_RunDynamicStateTree::InstanceData");
static_assert(offsetof(UFortBTTask_RunDynamicStateTree, InjectionTag) == 168, "Offset mismatch for UFortBTTask_RunDynamicStateTree::InjectionTag");

// /Script/FortniteAIServer.FortBTTask_SetFrustrationDiscouragement
// Kind: Class; super: BTTaskNode
class UFortBTTask_SetFrustrationDiscouragement
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float DiscouragementDuration; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortBTTask_SetFrustrationDiscouragement, DiscouragementDuration) == 112, "Offset mismatch for UFortBTTask_SetFrustrationDiscouragement::DiscouragementDuration");

// /Script/FortniteAIServer.FortBTTask_Sleep
// Kind: Class; super: BTTaskNode
class UFortBTTask_Sleep
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTTask_Sleep, Services) == 88, "Offset mismatch for UFortBTTask_Sleep::Services");
static_assert(offsetof(UFortBTTask_Sleep, bIgnoreRestartSelf) == 104, "Offset mismatch for UFortBTTask_Sleep::bIgnoreRestartSelf");

// /Script/FortniteAIServer.FortBTTask_TakerMoveToNavmesh
// Kind: Class; super: BTTask_MoveTo
class UFortBTTask_TakerMoveToNavmesh
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t AcceptableRadius[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t FilterClass[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ObservedBlackboardValueTolerance[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowStrafe[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowPartialPath[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t bTrackMovingGoal[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRequireNavigableEndLocation[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t bProjectGoalLocation[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t bReachTestIncludesAgentRadius[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t bReachTestIncludesGoalRadius[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t bStartFromPreviousPath[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t bObserveBlackboardValue; // 0x01A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, AcceptableRadius) == 152, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::AcceptableRadius");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, FilterClass) == 176, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::FilterClass");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, ObservedBlackboardValueTolerance) == 208, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::ObservedBlackboardValueTolerance");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bAllowStrafe) == 232, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bAllowStrafe");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bAllowPartialPath) == 256, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bAllowPartialPath");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bTrackMovingGoal) == 280, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bTrackMovingGoal");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bRequireNavigableEndLocation) == 304, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bRequireNavigableEndLocation");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bProjectGoalLocation) == 328, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bProjectGoalLocation");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bReachTestIncludesAgentRadius) == 352, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bReachTestIncludesAgentRadius");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bReachTestIncludesGoalRadius) == 376, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bReachTestIncludesGoalRadius");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bStartFromPreviousPath) == 400, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bStartFromPreviousPath");
static_assert(offsetof(UFortBTTask_TakerMoveToNavmesh, bObserveBlackboardValue) == 424, "Offset mismatch for UFortBTTask_TakerMoveToNavmesh::bObserveBlackboardValue");

// /Script/FortniteAIServer.FortBTWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UFortBTWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortBTWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UFortBTWorldConditionSchema::ContextDataDescs");

// /Script/FortniteAIServer.FortEQSPrevisActor
// Kind: Class; super: Actor
class UFortEQSPrevisActor
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* SceneRoot; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GameplayTags[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortEQSPrevisActor, SceneRoot) == 640, "Offset mismatch for UFortEQSPrevisActor::SceneRoot");
static_assert(offsetof(UFortEQSPrevisActor, GameplayTags) == 648, "Offset mismatch for UFortEQSPrevisActor::GameplayTags");

// /Script/FortniteAIServer.FortEQSTestingController
// Kind: Class; super: AIController
class UFortEQSTestingController
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t bAllowStrafe; // 0x0340 (Size: 0x1, Type: BoolProperty)
    // 0x0340 BoolProperty bLOSflag (shared storage)
    // 0x0340 BoolProperty bSetControlRotationFromPawnOrientation (shared storage)
    // 0x0340 BoolProperty bSkipExtraLOSChecks (shared storage)
    // 0x0340 BoolProperty bSkipRootComponentUpdate (shared storage)
    // 0x0340 BoolProperty bStartAILogicOnPossess (shared storage)
    // 0x0340 BoolProperty bStopAILogicOnUnposses (shared storage)
    // 0x0340 BoolProperty bWantsPlayerState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0341
    void* PathFollowingComponent; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* BrainComponent; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* PerceptionComponent; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Blackboard; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameplayTasksComponent; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* DefaultNavigationFilterClass; // 0x0370 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate ReceiveMoveCompleted; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortEQSTestingController, bAllowStrafe) == 832, "Offset mismatch for UFortEQSTestingController::bAllowStrafe");
static_assert(offsetof(UFortEQSTestingController, PathFollowingComponent) == 840, "Offset mismatch for UFortEQSTestingController::PathFollowingComponent");
static_assert(offsetof(UFortEQSTestingController, BrainComponent) == 848, "Offset mismatch for UFortEQSTestingController::BrainComponent");
static_assert(offsetof(UFortEQSTestingController, PerceptionComponent) == 856, "Offset mismatch for UFortEQSTestingController::PerceptionComponent");
static_assert(offsetof(UFortEQSTestingController, Blackboard) == 864, "Offset mismatch for UFortEQSTestingController::Blackboard");
static_assert(offsetof(UFortEQSTestingController, CachedGameplayTasksComponent) == 872, "Offset mismatch for UFortEQSTestingController::CachedGameplayTasksComponent");
static_assert(offsetof(UFortEQSTestingController, DefaultNavigationFilterClass) == 880, "Offset mismatch for UFortEQSTestingController::DefaultNavigationFilterClass");
static_assert(offsetof(UFortEQSTestingController, ReceiveMoveCompleted) == 888, "Offset mismatch for UFortEQSTestingController::ReceiveMoveCompleted");

// /Script/FortniteAIServer.FortEQSTestingPawn
// Kind: Class; super: EQSTestingPawn
class UFortEQSTestingPawn
{
public:
    std::uint8_t Pad_0000[0x6D0]; // 0x0000
    std::uint8_t bUseDoorNavLinks; // 0x06D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseClamberNavLinks; // 0x06D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseHurdleNavLinks; // 0x06D2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortEQSTestingPawn, bUseDoorNavLinks) == 1744, "Offset mismatch for UFortEQSTestingPawn::bUseDoorNavLinks");
static_assert(offsetof(UFortEQSTestingPawn, bUseClamberNavLinks) == 1745, "Offset mismatch for UFortEQSTestingPawn::bUseClamberNavLinks");
static_assert(offsetof(UFortEQSTestingPawn, bUseHurdleNavLinks) == 1746, "Offset mismatch for UFortEQSTestingPawn::bUseHurdleNavLinks");

// /Script/FortniteAIServer.FortEnvQueryGenerator_ActorsOfClass
// Kind: Class; super: EnvQueryGenerator_ActorsOfClass
class UFortEnvQueryGenerator_ActorsOfClass
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t bRandomizeResults[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortEnvQueryGenerator_ActorsOfClass, bRandomizeResults) == 208, "Offset mismatch for UFortEnvQueryGenerator_ActorsOfClass::bRandomizeResults");

// /Script/FortniteAIServer.FortEnvQueryGenerator_ProjectedPoints
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortEnvQueryGenerator_ProjectedPoints
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    FName OverridenAgentNameForNavmesh; // 0x0090 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortEnvQueryGenerator_ProjectedPoints, OverridenAgentNameForNavmesh) == 144, "Offset mismatch for UFortEnvQueryGenerator_ProjectedPoints::OverridenAgentNameForNavmesh");

// /Script/FortniteAIServer.FortEnvQueryGenerator_SimpleGrid
// Kind: Class; super: FortEnvQueryGenerator_ProjectedPoints
class UFortEnvQueryGenerator_SimpleGrid
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t GridSize[0x38]; // 0x0098 (Size: 0x38, Type: StructProperty)
    std::uint8_t SpaceBetween[0x38]; // 0x00D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t RandomDisplacementRatio[0x38]; // 0x0108 (Size: 0x38, Type: StructProperty)
    void* GenerateAround; // 0x0140 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortEnvQueryGenerator_SimpleGrid, GridSize) == 152, "Offset mismatch for UFortEnvQueryGenerator_SimpleGrid::GridSize");
static_assert(offsetof(UFortEnvQueryGenerator_SimpleGrid, SpaceBetween) == 208, "Offset mismatch for UFortEnvQueryGenerator_SimpleGrid::SpaceBetween");
static_assert(offsetof(UFortEnvQueryGenerator_SimpleGrid, RandomDisplacementRatio) == 264, "Offset mismatch for UFortEnvQueryGenerator_SimpleGrid::RandomDisplacementRatio");
static_assert(offsetof(UFortEnvQueryGenerator_SimpleGrid, GenerateAround) == 320, "Offset mismatch for UFortEnvQueryGenerator_SimpleGrid::GenerateAround");

// /Script/FortniteAIServer.FortEvaluatorBlueprintBaseWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UFortEvaluatorBlueprintBaseWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortEvaluatorBlueprintBaseWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UFortEvaluatorBlueprintBaseWorldConditionSchema::ContextDataDescs");

// /Script/FortniteAIServer.FortGameFeatureAction_AddInjectionSupportingBehavior
// Kind: Class; super: FortGameInstanceGameFeatureAction
class UFortGameFeatureAction_AddInjectionSupportingBehavior
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> InjectionSupportingBehaviors; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddInjectionSupportingBehavior, InjectionSupportingBehaviors) == 56, "Offset mismatch for UFortGameFeatureAction_AddInjectionSupportingBehavior::InjectionSupportingBehaviors");

// /Script/FortniteAIServer.FortGameFeatureAction_InjectAIBehavior
// Kind: Class; super: FortGameInstanceGameFeatureAction
class UFortGameFeatureAction_InjectAIBehavior
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> InjectedBehaviors; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameFeatureAction_InjectAIBehavior, InjectedBehaviors) == 56, "Offset mismatch for UFortGameFeatureAction_InjectAIBehavior::InjectedBehaviors");

// /Script/FortniteAIServer.FortGameFeatureAction_InjectAIEvaluators
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_InjectAIEvaluators
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AIEvaluatorList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameFeatureAction_InjectAIEvaluators, AIEvaluatorList) == 40, "Offset mismatch for UFortGameFeatureAction_InjectAIEvaluators::AIEvaluatorList");

// /Script/FortniteAIServer.FortGameFeatureAction_ProvideAICombatTokens
// Kind: Class; super: FortGameInstanceGameFeatureAction
class UFortGameFeatureAction_ProvideAICombatTokens
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ProvidingPawn[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> PositionTokensToProvide; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TSoftClassPtr<void> FallbackCombatTokenProviderComponent; // 0x0068 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortGameFeatureAction_ProvideAICombatTokens, ProvidingPawn) == 56, "Offset mismatch for UFortGameFeatureAction_ProvideAICombatTokens::ProvidingPawn");
static_assert(offsetof(UFortGameFeatureAction_ProvideAICombatTokens, PositionTokensToProvide) == 88, "Offset mismatch for UFortGameFeatureAction_ProvideAICombatTokens::PositionTokensToProvide");
static_assert(offsetof(UFortGameFeatureAction_ProvideAICombatTokens, FallbackCombatTokenProviderComponent) == 104, "Offset mismatch for UFortGameFeatureAction_ProvideAICombatTokens::FallbackCombatTokenProviderComponent");

// /Script/FortniteAIServer.FortInjectedBehaviorsComponent
// Kind: Class; super: FortGameStateComponent
class UFortInjectedBehaviorsComponent
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

static_assert(offsetof(UFortInjectedBehaviorsComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortInjectedBehaviorsComponent::PrimaryComponentTick");
static_assert(offsetof(UFortInjectedBehaviorsComponent, ComponentTags) == 104, "Offset mismatch for UFortInjectedBehaviorsComponent::ComponentTags");
static_assert(offsetof(UFortInjectedBehaviorsComponent, AssetUserData) == 120, "Offset mismatch for UFortInjectedBehaviorsComponent::AssetUserData");
static_assert(offsetof(UFortInjectedBehaviorsComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortInjectedBehaviorsComponent::UCSSerializationIndex");
static_assert(offsetof(UFortInjectedBehaviorsComponent, bNetAddressable) == 152, "Offset mismatch for UFortInjectedBehaviorsComponent::bNetAddressable");
static_assert(offsetof(UFortInjectedBehaviorsComponent, bAutoActivate) == 154, "Offset mismatch for UFortInjectedBehaviorsComponent::bAutoActivate");
static_assert(offsetof(UFortInjectedBehaviorsComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortInjectedBehaviorsComponent::bIsEditorOnly");
static_assert(offsetof(UFortInjectedBehaviorsComponent, CreationMethod) == 185, "Offset mismatch for UFortInjectedBehaviorsComponent::CreationMethod");
static_assert(offsetof(UFortInjectedBehaviorsComponent, OnComponentActivated) == 186, "Offset mismatch for UFortInjectedBehaviorsComponent::OnComponentActivated");
static_assert(offsetof(UFortInjectedBehaviorsComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortInjectedBehaviorsComponent::OnComponentDeactivated");

// /Script/FortniteAIServer.FortQueryContext_AIAbilityTarget
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AIAbilityTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AIBotExtraData_Actor
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AIBotExtraData_Actor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AIBotExtraData_Box_Center
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AIBotExtraData_Box_Center
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AIBotExtraData_Box_Extents
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AIBotExtraData_Box_Extents
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AIPawnSpawnLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AIPawnSpawnLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AbilityActivatingPawn
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AbilityActivatingPawn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AllBots
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AllBots
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIncludeOnlyAthenaGameParticipantBots; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t BotTagQuery[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryContext_AllBots, bIncludeOnlyAthenaGameParticipantBots) == 40, "Offset mismatch for UFortQueryContext_AllBots::bIncludeOnlyAthenaGameParticipantBots");
static_assert(offsetof(UFortQueryContext_AllBots, BotTagQuery) == 48, "Offset mismatch for UFortQueryContext_AllBots::BotTagQuery");

// /Script/FortniteAIServer.FortQueryContext_AllEnemies
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AllEnemies
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AllGoals
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AllGoals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AllPOIVolumes
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AllPOIVolumes
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t VolumeLocationTagQuery[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryContext_AllPOIVolumes, VolumeLocationTagQuery) == 40, "Offset mismatch for UFortQueryContext_AllPOIVolumes::VolumeLocationTagQuery");

// /Script/FortniteAIServer.FortQueryContext_AllPlayers
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AllPlayers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneCenter
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AthenaCurrentSafeZoneCenter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AthenaSafeZoneCenterIndex
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AthenaSafeZoneCenterIndex
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_AthenaSafeZonePredictedLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_AthenaSafeZonePredictedLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_BlackboardKeyLeader
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_BlackboardKeyLeader
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_BoxAroundQuerier
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_BoxAroundQuerier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BoxExtent[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryContext_BoxAroundQuerier, BoxExtent) == 40, "Offset mismatch for UFortQueryContext_BoxAroundQuerier::BoxExtent");

// /Script/FortniteAIServer.FortQueryContext_BuildingRifts
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_BuildingRifts
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_ClosestLandscapeLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_ClosestLandscapeLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_ClosestLocationInsideLeash
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_ClosestLocationInsideLeash
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* NavFilterClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseInnerRadius; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForcePositionOnLeash; // 0x0031 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryContext_ClosestLocationInsideLeash, NavFilterClass) == 40, "Offset mismatch for UFortQueryContext_ClosestLocationInsideLeash::NavFilterClass");
static_assert(offsetof(UFortQueryContext_ClosestLocationInsideLeash, bUseInnerRadius) == 48, "Offset mismatch for UFortQueryContext_ClosestLocationInsideLeash::bUseInnerRadius");
static_assert(offsetof(UFortQueryContext_ClosestLocationInsideLeash, bForcePositionOnLeash) == 49, "Offset mismatch for UFortQueryContext_ClosestLocationInsideLeash::bForcePositionOnLeash");

// /Script/FortniteAIServer.FortQueryContext_ConverterController
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_ConverterController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_ConverterPawn
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_ConverterPawn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_ConverterViewLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_ConverterViewLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_ConverterViewRotation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_ConverterViewRotation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_EncounterFallbackTarget
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_EncounterFallbackTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_EncounterGoalsCenterLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_EncounterGoalsCenterLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_EncounterGoalsOnGround
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_EncounterGoalsOnGround
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_EncounterPrimaryAssignmentGoals
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_EncounterPrimaryAssignmentGoals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_EncounterProvidedQueryLocations
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_EncounterProvidedQueryLocations
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_EncounterQueryActor
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_EncounterQueryActor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_EncounterRandomDirection
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_EncounterRandomDirection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_EncounterTargetObjective
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_EncounterTargetObjective
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_Goal
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_Goal
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_GoalProviderRootAssignmentGoals
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_GoalProviderRootAssignmentGoals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_Goal_SpawnLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_Goal_SpawnLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_LeashCenter
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_LeashCenter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_LeashGameplayVolume
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_LeashGameplayVolume
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_LocationSynchronizerOwnerExtents
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_LocationSynchronizerOwnerExtents
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_NavigationHeightMapAverageFloorHeight
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_NavigationHeightMapAverageFloorHeight
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t QueryRadius[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t QueryHeight[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t LowResolutionQuery[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t ResultVerticalOffset[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryContext_NavigationHeightMapAverageFloorHeight, QueryRadius) == 40, "Offset mismatch for UFortQueryContext_NavigationHeightMapAverageFloorHeight::QueryRadius");
static_assert(offsetof(UFortQueryContext_NavigationHeightMapAverageFloorHeight, QueryHeight) == 80, "Offset mismatch for UFortQueryContext_NavigationHeightMapAverageFloorHeight::QueryHeight");
static_assert(offsetof(UFortQueryContext_NavigationHeightMapAverageFloorHeight, LowResolutionQuery) == 120, "Offset mismatch for UFortQueryContext_NavigationHeightMapAverageFloorHeight::LowResolutionQuery");
static_assert(offsetof(UFortQueryContext_NavigationHeightMapAverageFloorHeight, ResultVerticalOffset) == 160, "Offset mismatch for UFortQueryContext_NavigationHeightMapAverageFloorHeight::ResultVerticalOffset");

// /Script/FortniteAIServer.FortQueryContext_NearbyAIPawns
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_NearbyAIPawns
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_NearbyAIPawnsMoveDestinations
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_NearbyAIPawnsMoveDestinations
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_NearbyFactionMembers
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_NearbyFactionMembers
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NearbyFactionMemberDistance[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryContext_NearbyFactionMembers, NearbyFactionMemberDistance) == 40, "Offset mismatch for UFortQueryContext_NearbyFactionMembers::NearbyFactionMemberDistance");

// /Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawns
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_NearbyFriendlyAIPawns
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_NearbyFriends
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_NearbyFriends
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_PlayerSpawnPad
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_PlayerSpawnPad
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_PlayspaceVolume
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_PlayspaceVolume
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* QueryActorContext; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryContext_PlayspaceVolume, QueryActorContext) == 40, "Offset mismatch for UFortQueryContext_PlayspaceVolume::QueryActorContext");

// /Script/FortniteAIServer.FortQueryContext_QuerierAIGroupMembers
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_QuerierAIGroupMembers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_QuerierController
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_QuerierController
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_RandomDirectionXY
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_RandomDirectionXY
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_StWStormShield
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_StWStormShield
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_TokenPositioningBoxesExtents
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_TokenPositioningBoxesExtents
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DefaultBoxExtent[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryContext_TokenPositioningBoxesExtents, DefaultBoxExtent) == 40, "Offset mismatch for UFortQueryContext_TokenPositioningBoxesExtents::DefaultBoxExtent");

// /Script/FortniteAIServer.FortQueryContext_TokenPositioningVolumeActors
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_TokenPositioningVolumeActors
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_TokenReservedPosition
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_TokenReservedPosition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TokenProviderContext; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryContext_TokenReservedPosition, TokenProviderContext) == 40, "Offset mismatch for UFortQueryContext_TokenReservedPosition::TokenProviderContext");

// /Script/FortniteAIServer.FortQueryContext_TwoPointSolverPointA
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_TwoPointSolverPointA
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryContext_TwoPointSolverRotationA
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_TwoPointSolverRotationA
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryData_CurvesAroundLine
// Kind: Class; super: DataAsset
class UFortQueryData_CurvesAroundLine
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PointsOnSideA[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t PointsOnSideB[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryData_CurvesAroundLine, PointsOnSideA) == 40, "Offset mismatch for UFortQueryData_CurvesAroundLine::PointsOnSideA");
static_assert(offsetof(UFortQueryData_CurvesAroundLine, PointsOnSideB) == 88, "Offset mismatch for UFortQueryData_CurvesAroundLine::PointsOnSideB");

// /Script/FortniteAIServer.FortQueryGenerator_ActorsAround
// Kind: Class; super: EnvQueryGenerator_ActorsOfClass
class UFortQueryGenerator_ActorsAround
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SearchedActorClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GenerateOnlyActorsInRadius[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    std::uint8_t SearchRadius[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    void* SearchCenter; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_ActorsAround, SearchedActorClass) == 80, "Offset mismatch for UFortQueryGenerator_ActorsAround::SearchedActorClass");
static_assert(offsetof(UFortQueryGenerator_ActorsAround, GenerateOnlyActorsInRadius) == 88, "Offset mismatch for UFortQueryGenerator_ActorsAround::GenerateOnlyActorsInRadius");
static_assert(offsetof(UFortQueryGenerator_ActorsAround, SearchRadius) == 144, "Offset mismatch for UFortQueryGenerator_ActorsAround::SearchRadius");
static_assert(offsetof(UFortQueryGenerator_ActorsAround, SearchCenter) == 200, "Offset mismatch for UFortQueryGenerator_ActorsAround::SearchCenter");

// /Script/FortniteAIServer.FortQueryGenerator_Allies
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_Allies
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_Allies, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_Allies::OptionName");
static_assert(offsetof(UFortQueryGenerator_Allies, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_Allies::ItemType");
static_assert(offsetof(UFortQueryGenerator_Allies, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_Allies::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_Allies, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_Allies::EnvQueryResultNormalizationOption");

// /Script/FortniteAIServer.FortQueryGenerator_AssignmentGoal
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_AssignmentGoal
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_AssignmentGoal, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_AssignmentGoal::OptionName");
static_assert(offsetof(UFortQueryGenerator_AssignmentGoal, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_AssignmentGoal::ItemType");
static_assert(offsetof(UFortQueryGenerator_AssignmentGoal, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_AssignmentGoal::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_AssignmentGoal, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_AssignmentGoal::EnvQueryResultNormalizationOption");

// /Script/FortniteAIServer.FortQueryGenerator_BuildingRifts
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_BuildingRifts
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_BuildingRifts, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_BuildingRifts::OptionName");
static_assert(offsetof(UFortQueryGenerator_BuildingRifts, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_BuildingRifts::ItemType");
static_assert(offsetof(UFortQueryGenerator_BuildingRifts, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_BuildingRifts::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_BuildingRifts, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_BuildingRifts::EnvQueryResultNormalizationOption");

// /Script/FortniteAIServer.FortQueryGenerator_Buildings
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_Buildings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t AssignmentIdentifier[0x30]; // 0x0050 (Size: 0x30, Type: StructProperty)
    void* AssignmentSettings; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* BuildingGridVolumeCenter; // 0x0088 (Size: 0x8, Type: ClassProperty)
    std::uint8_t HorizontalBuildingCellRadius[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t BuildingCellsAbove[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t BuildingCellsBelow[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t bIncludeWalls[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t bIncludeFloors[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    TArray<void*> FloorPatternsToIgnore; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIncludeCenterCell[0x38]; // 0x01B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxBuildingActorsPerVolumeCenterToCollect[0x1]; // 0x01F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_Buildings, AssignmentIdentifier) == 80, "Offset mismatch for UFortQueryGenerator_Buildings::AssignmentIdentifier");
static_assert(offsetof(UFortQueryGenerator_Buildings, AssignmentSettings) == 128, "Offset mismatch for UFortQueryGenerator_Buildings::AssignmentSettings");
static_assert(offsetof(UFortQueryGenerator_Buildings, BuildingGridVolumeCenter) == 136, "Offset mismatch for UFortQueryGenerator_Buildings::BuildingGridVolumeCenter");
static_assert(offsetof(UFortQueryGenerator_Buildings, HorizontalBuildingCellRadius) == 144, "Offset mismatch for UFortQueryGenerator_Buildings::HorizontalBuildingCellRadius");
static_assert(offsetof(UFortQueryGenerator_Buildings, BuildingCellsAbove) == 200, "Offset mismatch for UFortQueryGenerator_Buildings::BuildingCellsAbove");
static_assert(offsetof(UFortQueryGenerator_Buildings, BuildingCellsBelow) == 256, "Offset mismatch for UFortQueryGenerator_Buildings::BuildingCellsBelow");
static_assert(offsetof(UFortQueryGenerator_Buildings, bIncludeWalls) == 312, "Offset mismatch for UFortQueryGenerator_Buildings::bIncludeWalls");
static_assert(offsetof(UFortQueryGenerator_Buildings, bIncludeFloors) == 368, "Offset mismatch for UFortQueryGenerator_Buildings::bIncludeFloors");
static_assert(offsetof(UFortQueryGenerator_Buildings, FloorPatternsToIgnore) == 424, "Offset mismatch for UFortQueryGenerator_Buildings::FloorPatternsToIgnore");
static_assert(offsetof(UFortQueryGenerator_Buildings, bIncludeCenterCell) == 440, "Offset mismatch for UFortQueryGenerator_Buildings::bIncludeCenterCell");
static_assert(offsetof(UFortQueryGenerator_Buildings, MaxBuildingActorsPerVolumeCenterToCollect) == 496, "Offset mismatch for UFortQueryGenerator_Buildings::MaxBuildingActorsPerVolumeCenterToCollect");

// /Script/FortniteAIServer.FortQueryGenerator_BuildingsOnCachedPath
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_BuildingsOnCachedPath
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* CachedPathSource; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIncludeWalls[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    std::uint8_t bIncludeFloors[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t bIncludeCenterCell[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_BuildingsOnCachedPath, CachedPathSource) == 80, "Offset mismatch for UFortQueryGenerator_BuildingsOnCachedPath::CachedPathSource");
static_assert(offsetof(UFortQueryGenerator_BuildingsOnCachedPath, bIncludeWalls) == 88, "Offset mismatch for UFortQueryGenerator_BuildingsOnCachedPath::bIncludeWalls");
static_assert(offsetof(UFortQueryGenerator_BuildingsOnCachedPath, bIncludeFloors) == 144, "Offset mismatch for UFortQueryGenerator_BuildingsOnCachedPath::bIncludeFloors");
static_assert(offsetof(UFortQueryGenerator_BuildingsOnCachedPath, bIncludeCenterCell) == 200, "Offset mismatch for UFortQueryGenerator_BuildingsOnCachedPath::bIncludeCenterCell");

// /Script/FortniteAIServer.FortQueryGenerator_CoverPositionProvider
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_CoverPositionProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* CoverPositionProviderContext; // 0x0050 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_CoverPositionProvider, CoverPositionProviderContext) == 80, "Offset mismatch for UFortQueryGenerator_CoverPositionProvider::CoverPositionProviderContext");

// /Script/FortniteAIServer.FortQueryGenerator_DefendSpots
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_DefendSpots
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* QueryBoxCenterAndExtentsContext; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseQueryBoxCenterAndExtentsContextAsFallback; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    void* VolumeActorsContext; // 0x0060 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_DefendSpots, QueryBoxCenterAndExtentsContext) == 80, "Offset mismatch for UFortQueryGenerator_DefendSpots::QueryBoxCenterAndExtentsContext");
static_assert(offsetof(UFortQueryGenerator_DefendSpots, bUseQueryBoxCenterAndExtentsContextAsFallback) == 88, "Offset mismatch for UFortQueryGenerator_DefendSpots::bUseQueryBoxCenterAndExtentsContextAsFallback");
static_assert(offsetof(UFortQueryGenerator_DefendSpots, VolumeActorsContext) == 96, "Offset mismatch for UFortQueryGenerator_DefendSpots::VolumeActorsContext");

// /Script/FortniteAIServer.FortQueryGenerator_EncounterTargets
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_EncounterTargets
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_EncounterTargets, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_EncounterTargets::OptionName");
static_assert(offsetof(UFortQueryGenerator_EncounterTargets, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_EncounterTargets::ItemType");
static_assert(offsetof(UFortQueryGenerator_EncounterTargets, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_EncounterTargets::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_EncounterTargets, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_EncounterTargets::EnvQueryResultNormalizationOption");

// /Script/FortniteAIServer.FortQueryGenerator_Enemies
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_Enemies
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bPerceivedEnemiesOnly; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludePropagatedEnemies; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSleepCapableAIUsePerceivedEnemiesOnly; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreDBNOPawns; // 0x0053 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreSleepingAIs; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeMarkedSleepingAIs; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddEnemiesFromAbilityRange; // 0x0056 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0057
    std::uint8_t AbilityTags[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t DistanceTags[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    std::uint8_t MaxTimeSincePerceived[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_Enemies, bPerceivedEnemiesOnly) == 80, "Offset mismatch for UFortQueryGenerator_Enemies::bPerceivedEnemiesOnly");
static_assert(offsetof(UFortQueryGenerator_Enemies, bIncludePropagatedEnemies) == 81, "Offset mismatch for UFortQueryGenerator_Enemies::bIncludePropagatedEnemies");
static_assert(offsetof(UFortQueryGenerator_Enemies, bSleepCapableAIUsePerceivedEnemiesOnly) == 82, "Offset mismatch for UFortQueryGenerator_Enemies::bSleepCapableAIUsePerceivedEnemiesOnly");
static_assert(offsetof(UFortQueryGenerator_Enemies, bIgnoreDBNOPawns) == 83, "Offset mismatch for UFortQueryGenerator_Enemies::bIgnoreDBNOPawns");
static_assert(offsetof(UFortQueryGenerator_Enemies, bIgnoreSleepingAIs) == 84, "Offset mismatch for UFortQueryGenerator_Enemies::bIgnoreSleepingAIs");
static_assert(offsetof(UFortQueryGenerator_Enemies, bIncludeMarkedSleepingAIs) == 85, "Offset mismatch for UFortQueryGenerator_Enemies::bIncludeMarkedSleepingAIs");
static_assert(offsetof(UFortQueryGenerator_Enemies, bAddEnemiesFromAbilityRange) == 86, "Offset mismatch for UFortQueryGenerator_Enemies::bAddEnemiesFromAbilityRange");
static_assert(offsetof(UFortQueryGenerator_Enemies, AbilityTags) == 88, "Offset mismatch for UFortQueryGenerator_Enemies::AbilityTags");
static_assert(offsetof(UFortQueryGenerator_Enemies, DistanceTags) == 120, "Offset mismatch for UFortQueryGenerator_Enemies::DistanceTags");
static_assert(offsetof(UFortQueryGenerator_Enemies, MaxTimeSincePerceived) == 152, "Offset mismatch for UFortQueryGenerator_Enemies::MaxTimeSincePerceived");

// /Script/FortniteAIServer.FortQueryGenerator_FloodFillAroundActors
// Kind: Class; super: FortQueryGenerator_FloodFillBase
class UFortQueryGenerator_FloodFillAroundActors
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    void* CenterContext; // 0x01D0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_FloodFillAroundActors, CenterContext) == 464, "Offset mismatch for UFortQueryGenerator_FloodFillAroundActors::CenterContext");

// /Script/FortniteAIServer.FortQueryGenerator_FloodFillAroundActors_Oriented
// Kind: Class; super: FortQueryGenerator_FloodFillAroundActors
class UFortQueryGenerator_FloodFillAroundActors_Oriented
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    void* CenterContext; // 0x01D0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_FloodFillAroundActors_Oriented, CenterContext) == 464, "Offset mismatch for UFortQueryGenerator_FloodFillAroundActors_Oriented::CenterContext");

// /Script/FortniteAIServer.FortQueryGenerator_FloodFillAroundLocations
// Kind: Class; super: FortQueryGenerator_FloodFillBase
class UFortQueryGenerator_FloodFillAroundLocations
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    void* CenterContext; // 0x01D0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_FloodFillAroundLocations, CenterContext) == 464, "Offset mismatch for UFortQueryGenerator_FloodFillAroundLocations::CenterContext");

// /Script/FortniteAIServer.FortQueryGenerator_FloodFillAroundLocations_Oriented
// Kind: Class; super: FortQueryGenerator_FloodFillAroundLocations
class UFortQueryGenerator_FloodFillAroundLocations_Oriented
{
public:
    std::uint8_t Pad_0000[0x1D0]; // 0x0000
    void* CenterContext; // 0x01D0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_FloodFillAroundLocations_Oriented, CenterContext) == 464, "Offset mismatch for UFortQueryGenerator_FloodFillAroundLocations_Oriented::CenterContext");

// /Script/FortniteAIServer.FortQueryGenerator_FloodFillBase
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_FloodFillBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t MaximumNodeSearchProvider[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaximumSearchRadiusProvider[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinimumPathDistanceProvider[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t UsePathDistanceAsSearchRadiusProvider[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t PointDensityProvider[0x38]; // 0x0130 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaximumNumberOfPointProvider[0x38]; // 0x0168 (Size: 0x38, Type: StructProperty)
    void* FilterOverride; // 0x01A0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ProjectExtent[0x18]; // 0x01A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExtraExcludeFlags[0x4]; // 0x01C0 (Size: 0x4, Type: StructProperty)
    std::uint8_t Behavior; // 0x01C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01C5
    void* NavDataOverrideContext; // 0x01C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_FloodFillBase, MaximumNodeSearchProvider) == 80, "Offset mismatch for UFortQueryGenerator_FloodFillBase::MaximumNodeSearchProvider");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, MaximumSearchRadiusProvider) == 136, "Offset mismatch for UFortQueryGenerator_FloodFillBase::MaximumSearchRadiusProvider");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, MinimumPathDistanceProvider) == 192, "Offset mismatch for UFortQueryGenerator_FloodFillBase::MinimumPathDistanceProvider");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, UsePathDistanceAsSearchRadiusProvider) == 248, "Offset mismatch for UFortQueryGenerator_FloodFillBase::UsePathDistanceAsSearchRadiusProvider");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, PointDensityProvider) == 304, "Offset mismatch for UFortQueryGenerator_FloodFillBase::PointDensityProvider");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, MaximumNumberOfPointProvider) == 360, "Offset mismatch for UFortQueryGenerator_FloodFillBase::MaximumNumberOfPointProvider");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, FilterOverride) == 416, "Offset mismatch for UFortQueryGenerator_FloodFillBase::FilterOverride");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, ProjectExtent) == 424, "Offset mismatch for UFortQueryGenerator_FloodFillBase::ProjectExtent");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, ExtraExcludeFlags) == 448, "Offset mismatch for UFortQueryGenerator_FloodFillBase::ExtraExcludeFlags");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, Behavior) == 452, "Offset mismatch for UFortQueryGenerator_FloodFillBase::Behavior");
static_assert(offsetof(UFortQueryGenerator_FloodFillBase, NavDataOverrideContext) == 456, "Offset mismatch for UFortQueryGenerator_FloodFillBase::NavDataOverrideContext");

// /Script/FortniteAIServer.FortQueryGenerator_GoalActorsOfClass
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_GoalActorsOfClass
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SearchedActorClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SearchRadius[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    void* SearchCenter; // 0x0090 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_GoalActorsOfClass, SearchedActorClass) == 80, "Offset mismatch for UFortQueryGenerator_GoalActorsOfClass::SearchedActorClass");
static_assert(offsetof(UFortQueryGenerator_GoalActorsOfClass, SearchRadius) == 88, "Offset mismatch for UFortQueryGenerator_GoalActorsOfClass::SearchRadius");
static_assert(offsetof(UFortQueryGenerator_GoalActorsOfClass, SearchCenter) == 144, "Offset mismatch for UFortQueryGenerator_GoalActorsOfClass::SearchCenter");

// /Script/FortniteAIServer.FortQueryGenerator_GoalFromContext
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_GoalFromContext
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* Context; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bActorAlwaysPerceived; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryGenerator_GoalFromContext, Context) == 80, "Offset mismatch for UFortQueryGenerator_GoalFromContext::Context");
static_assert(offsetof(UFortQueryGenerator_GoalFromContext, bActorAlwaysPerceived) == 88, "Offset mismatch for UFortQueryGenerator_GoalFromContext::bActorAlwaysPerceived");

// /Script/FortniteAIServer.FortQueryGenerator_GoalOnCircle
// Kind: Class; super: EnvQueryGenerator_OnCircle
class UFortQueryGenerator_GoalOnCircle
{
public:
    std::uint8_t Pad_0000[0x258]; // 0x0000
    std::uint8_t bIncludeCenterActorInGeneratedGoals; // 0x0258 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0259
    void* OptionalAssignmentSettings; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OptionalAssignmentIdentifier[0x1]; // 0x0268 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_GoalOnCircle, bIncludeCenterActorInGeneratedGoals) == 600, "Offset mismatch for UFortQueryGenerator_GoalOnCircle::bIncludeCenterActorInGeneratedGoals");
static_assert(offsetof(UFortQueryGenerator_GoalOnCircle, OptionalAssignmentSettings) == 608, "Offset mismatch for UFortQueryGenerator_GoalOnCircle::OptionalAssignmentSettings");
static_assert(offsetof(UFortQueryGenerator_GoalOnCircle, OptionalAssignmentIdentifier) == 616, "Offset mismatch for UFortQueryGenerator_GoalOnCircle::OptionalAssignmentIdentifier");

// /Script/FortniteAIServer.FortQueryGenerator_GoalPlayerPawns
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_GoalPlayerPawns
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bOnlyAthenaGameParticipants; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryGenerator_GoalPlayerPawns, bOnlyAthenaGameParticipants) == 80, "Offset mismatch for UFortQueryGenerator_GoalPlayerPawns::bOnlyAthenaGameParticipants");

// /Script/FortniteAIServer.FortQueryGenerator_GoalTrackableAIObjects
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_GoalTrackableAIObjects
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t AssignmentIdentifier[0x30]; // 0x0050 (Size: 0x30, Type: StructProperty)
    void* SearchedActorClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RequiredTag[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t SearchRadius[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    void* SearchCenter; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, AssignmentIdentifier) == 80, "Offset mismatch for UFortQueryGenerator_GoalTrackableAIObjects::AssignmentIdentifier");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, SearchedActorClass) == 128, "Offset mismatch for UFortQueryGenerator_GoalTrackableAIObjects::SearchedActorClass");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, RequiredTag) == 136, "Offset mismatch for UFortQueryGenerator_GoalTrackableAIObjects::RequiredTag");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, SearchRadius) == 144, "Offset mismatch for UFortQueryGenerator_GoalTrackableAIObjects::SearchRadius");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, SearchCenter) == 200, "Offset mismatch for UFortQueryGenerator_GoalTrackableAIObjects::SearchCenter");

// /Script/FortniteAIServer.FortQueryGenerator_GridInBox
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_GridInBox
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t BoxWidth[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t BoxLength[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t SpaceBetween[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinimumPointsOnWidth[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinimumPointsOnLength[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    void* GenerateAround; // 0x01A8 (Size: 0x8, Type: ClassProperty)
    void* BoxExtentsContext; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    void* BoxesContext; // 0x01B8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_GridInBox, BoxWidth) == 144, "Offset mismatch for UFortQueryGenerator_GridInBox::BoxWidth");
static_assert(offsetof(UFortQueryGenerator_GridInBox, BoxLength) == 200, "Offset mismatch for UFortQueryGenerator_GridInBox::BoxLength");
static_assert(offsetof(UFortQueryGenerator_GridInBox, SpaceBetween) == 256, "Offset mismatch for UFortQueryGenerator_GridInBox::SpaceBetween");
static_assert(offsetof(UFortQueryGenerator_GridInBox, MinimumPointsOnWidth) == 312, "Offset mismatch for UFortQueryGenerator_GridInBox::MinimumPointsOnWidth");
static_assert(offsetof(UFortQueryGenerator_GridInBox, MinimumPointsOnLength) == 368, "Offset mismatch for UFortQueryGenerator_GridInBox::MinimumPointsOnLength");
static_assert(offsetof(UFortQueryGenerator_GridInBox, GenerateAround) == 424, "Offset mismatch for UFortQueryGenerator_GridInBox::GenerateAround");
static_assert(offsetof(UFortQueryGenerator_GridInBox, BoxExtentsContext) == 432, "Offset mismatch for UFortQueryGenerator_GridInBox::BoxExtentsContext");
static_assert(offsetof(UFortQueryGenerator_GridInBox, BoxesContext) == 440, "Offset mismatch for UFortQueryGenerator_GridInBox::BoxesContext");

// /Script/FortniteAIServer.FortQueryGenerator_GridInVolume
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_GridInVolume
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t SpaceBetween[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    void* GenerateInVolume; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_GridInVolume, SpaceBetween) == 144, "Offset mismatch for UFortQueryGenerator_GridInVolume::SpaceBetween");
static_assert(offsetof(UFortQueryGenerator_GridInVolume, GenerateInVolume) == 200, "Offset mismatch for UFortQueryGenerator_GridInVolume::GenerateInVolume");

// /Script/FortniteAIServer.FortQueryGenerator_HotspotSlots
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_HotspotSlots
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* GenerateAround; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Radius[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    std::uint8_t bUseTetherZone; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    void* HotspotClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_HotspotSlots, GenerateAround) == 80, "Offset mismatch for UFortQueryGenerator_HotspotSlots::GenerateAround");
static_assert(offsetof(UFortQueryGenerator_HotspotSlots, Radius) == 88, "Offset mismatch for UFortQueryGenerator_HotspotSlots::Radius");
static_assert(offsetof(UFortQueryGenerator_HotspotSlots, bUseTetherZone) == 144, "Offset mismatch for UFortQueryGenerator_HotspotSlots::bUseTetherZone");
static_assert(offsetof(UFortQueryGenerator_HotspotSlots, HotspotClass) == 152, "Offset mismatch for UFortQueryGenerator_HotspotSlots::HotspotClass");

// /Script/FortniteAIServer.FortQueryGenerator_InfluenceMapPoints
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_InfluenceMapPoints
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t Density[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t bOnlyFlatSurface; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    void* GenerateAround; // 0x00D0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_InfluenceMapPoints, Density) == 144, "Offset mismatch for UFortQueryGenerator_InfluenceMapPoints::Density");
static_assert(offsetof(UFortQueryGenerator_InfluenceMapPoints, bOnlyFlatSurface) == 200, "Offset mismatch for UFortQueryGenerator_InfluenceMapPoints::bOnlyFlatSurface");
static_assert(offsetof(UFortQueryGenerator_InfluenceMapPoints, GenerateAround) == 208, "Offset mismatch for UFortQueryGenerator_InfluenceMapPoints::GenerateAround");

// /Script/FortniteAIServer.FortQueryGenerator_LootGoalsAthena
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_LootGoalsAthena
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t AssignmentIdentifier[0x30]; // 0x0050 (Size: 0x30, Type: StructProperty)
    void* AssignmentSettings; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HorizontalHalfExtents[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t VerticalHalfExtents[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    void* SearchCenter; // 0x00F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAvailableLootOnly; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    std::uint8_t ExcludedAILootGameplayTags[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, AssignmentIdentifier) == 80, "Offset mismatch for UFortQueryGenerator_LootGoalsAthena::AssignmentIdentifier");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, AssignmentSettings) == 128, "Offset mismatch for UFortQueryGenerator_LootGoalsAthena::AssignmentSettings");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, HorizontalHalfExtents) == 136, "Offset mismatch for UFortQueryGenerator_LootGoalsAthena::HorizontalHalfExtents");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, VerticalHalfExtents) == 192, "Offset mismatch for UFortQueryGenerator_LootGoalsAthena::VerticalHalfExtents");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, SearchCenter) == 248, "Offset mismatch for UFortQueryGenerator_LootGoalsAthena::SearchCenter");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, bAvailableLootOnly) == 256, "Offset mismatch for UFortQueryGenerator_LootGoalsAthena::bAvailableLootOnly");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, ExcludedAILootGameplayTags) == 264, "Offset mismatch for UFortQueryGenerator_LootGoalsAthena::ExcludedAILootGameplayTags");

// /Script/FortniteAIServer.FortQueryGenerator_MissionPlacementActors
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_MissionPlacementActors
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t MissionPlacementActorTagQuery[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_MissionPlacementActors, MissionPlacementActorTagQuery) == 80, "Offset mismatch for UFortQueryGenerator_MissionPlacementActors::MissionPlacementActorTagQuery");

// /Script/FortniteAIServer.FortQueryGenerator_MutatorActorQueryResults
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_MutatorActorQueryResults
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_MutatorActorQueryResults, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_MutatorActorQueryResults::OptionName");
static_assert(offsetof(UFortQueryGenerator_MutatorActorQueryResults, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_MutatorActorQueryResults::ItemType");
static_assert(offsetof(UFortQueryGenerator_MutatorActorQueryResults, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_MutatorActorQueryResults::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_MutatorActorQueryResults, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_MutatorActorQueryResults::EnvQueryResultNormalizationOption");

// /Script/FortniteAIServer.FortQueryGenerator_MutatorBaseQueryResults
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_MutatorBaseQueryResults
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryGenerator_MutatorBaseQueryResults, OptionName) == 48, "Offset mismatch for UFortQueryGenerator_MutatorBaseQueryResults::OptionName");
static_assert(offsetof(UFortQueryGenerator_MutatorBaseQueryResults, ItemType) == 64, "Offset mismatch for UFortQueryGenerator_MutatorBaseQueryResults::ItemType");
static_assert(offsetof(UFortQueryGenerator_MutatorBaseQueryResults, bAutoSortTests) == 72, "Offset mismatch for UFortQueryGenerator_MutatorBaseQueryResults::bAutoSortTests");
static_assert(offsetof(UFortQueryGenerator_MutatorBaseQueryResults, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UFortQueryGenerator_MutatorBaseQueryResults::EnvQueryResultNormalizationOption");

// /Script/FortniteAIServer.FortQueryGenerator_OnRectangle
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_OnRectangle
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t RectangleWidth[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t RectangleLength[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t SpacingMethod; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    std::uint8_t NumberOfPointsOnWidth[0x38]; // 0x0108 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumberOfPointsOnLength[0x38]; // 0x0140 (Size: 0x38, Type: StructProperty)
    std::uint8_t SpaceBetween[0x38]; // 0x0178 (Size: 0x38, Type: StructProperty)
    void* LocationContext; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    void* RotationContext; // 0x01B8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_OnRectangle, RectangleWidth) == 144, "Offset mismatch for UFortQueryGenerator_OnRectangle::RectangleWidth");
static_assert(offsetof(UFortQueryGenerator_OnRectangle, RectangleLength) == 200, "Offset mismatch for UFortQueryGenerator_OnRectangle::RectangleLength");
static_assert(offsetof(UFortQueryGenerator_OnRectangle, SpacingMethod) == 256, "Offset mismatch for UFortQueryGenerator_OnRectangle::SpacingMethod");
static_assert(offsetof(UFortQueryGenerator_OnRectangle, NumberOfPointsOnWidth) == 264, "Offset mismatch for UFortQueryGenerator_OnRectangle::NumberOfPointsOnWidth");
static_assert(offsetof(UFortQueryGenerator_OnRectangle, NumberOfPointsOnLength) == 320, "Offset mismatch for UFortQueryGenerator_OnRectangle::NumberOfPointsOnLength");
static_assert(offsetof(UFortQueryGenerator_OnRectangle, SpaceBetween) == 376, "Offset mismatch for UFortQueryGenerator_OnRectangle::SpaceBetween");
static_assert(offsetof(UFortQueryGenerator_OnRectangle, LocationContext) == 432, "Offset mismatch for UFortQueryGenerator_OnRectangle::LocationContext");
static_assert(offsetof(UFortQueryGenerator_OnRectangle, RotationContext) == 440, "Offset mismatch for UFortQueryGenerator_OnRectangle::RotationContext");

// /Script/FortniteAIServer.FortQueryGenerator_OnSphere
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_OnSphere
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t Radius[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t SliceCount[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t StackCount[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScaleX[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScaleY[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScaleZ[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    void* LocationContext; // 0x01E0 (Size: 0x8, Type: ClassProperty)
    void* RotationContext; // 0x01E8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_OnSphere, Radius) == 144, "Offset mismatch for UFortQueryGenerator_OnSphere::Radius");
static_assert(offsetof(UFortQueryGenerator_OnSphere, SliceCount) == 200, "Offset mismatch for UFortQueryGenerator_OnSphere::SliceCount");
static_assert(offsetof(UFortQueryGenerator_OnSphere, StackCount) == 256, "Offset mismatch for UFortQueryGenerator_OnSphere::StackCount");
static_assert(offsetof(UFortQueryGenerator_OnSphere, ScaleX) == 312, "Offset mismatch for UFortQueryGenerator_OnSphere::ScaleX");
static_assert(offsetof(UFortQueryGenerator_OnSphere, ScaleY) == 368, "Offset mismatch for UFortQueryGenerator_OnSphere::ScaleY");
static_assert(offsetof(UFortQueryGenerator_OnSphere, ScaleZ) == 424, "Offset mismatch for UFortQueryGenerator_OnSphere::ScaleZ");
static_assert(offsetof(UFortQueryGenerator_OnSphere, LocationContext) == 480, "Offset mismatch for UFortQueryGenerator_OnSphere::LocationContext");
static_assert(offsetof(UFortQueryGenerator_OnSphere, RotationContext) == 488, "Offset mismatch for UFortQueryGenerator_OnSphere::RotationContext");

// /Script/FortniteAIServer.FortQueryGenerator_PerceivedActors
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_PerceivedActors
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bGenerateHostileActorGoal; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    std::uint8_t HostileActorSettings[0x40]; // 0x0058 (Size: 0x40, Type: StructProperty)
    std::uint8_t bGenerateNeutralActorGoal; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0099
    std::uint8_t NeutralActorSettings[0x40]; // 0x00A0 (Size: 0x40, Type: StructProperty)
    std::uint8_t bGenerateFriendlyActorGoal; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00E1
    std::uint8_t FriendlyActorSettings[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_PerceivedActors, bGenerateHostileActorGoal) == 80, "Offset mismatch for UFortQueryGenerator_PerceivedActors::bGenerateHostileActorGoal");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, HostileActorSettings) == 88, "Offset mismatch for UFortQueryGenerator_PerceivedActors::HostileActorSettings");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, bGenerateNeutralActorGoal) == 152, "Offset mismatch for UFortQueryGenerator_PerceivedActors::bGenerateNeutralActorGoal");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, NeutralActorSettings) == 160, "Offset mismatch for UFortQueryGenerator_PerceivedActors::NeutralActorSettings");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, bGenerateFriendlyActorGoal) == 224, "Offset mismatch for UFortQueryGenerator_PerceivedActors::bGenerateFriendlyActorGoal");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, FriendlyActorSettings) == 232, "Offset mismatch for UFortQueryGenerator_PerceivedActors::FriendlyActorSettings");

// /Script/FortniteAIServer.FortQueryGenerator_PointsAroundLine
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_PointsAroundLine
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* GenerateAround; // 0x0090 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MaxPointsPerClusterLocation[0x38]; // 0x0098 (Size: 0x38, Type: StructProperty)
    std::uint8_t ClusterRadius[0x38]; // 0x00D0 (Size: 0x38, Type: StructProperty)
    TSoftObjectPtr<void> CurvesAroundLineAsset; // 0x0108 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsAroundLine, GenerateAround) == 144, "Offset mismatch for UFortQueryGenerator_PointsAroundLine::GenerateAround");
static_assert(offsetof(UFortQueryGenerator_PointsAroundLine, MaxPointsPerClusterLocation) == 152, "Offset mismatch for UFortQueryGenerator_PointsAroundLine::MaxPointsPerClusterLocation");
static_assert(offsetof(UFortQueryGenerator_PointsAroundLine, ClusterRadius) == 208, "Offset mismatch for UFortQueryGenerator_PointsAroundLine::ClusterRadius");
static_assert(offsetof(UFortQueryGenerator_PointsAroundLine, CurvesAroundLineAsset) == 264, "Offset mismatch for UFortQueryGenerator_PointsAroundLine::CurvesAroundLineAsset");

// /Script/FortniteAIServer.FortQueryGenerator_PointsFromNavGraph
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_PointsFromNavGraph
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t MinPathDistance[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxPathDistance[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t Density[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExploreDirectionYaw[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExploreDirection[0x20]; // 0x0170 (Size: 0x20, Type: StructProperty)
    float ExploreAngleDot; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0194
    std::uint8_t ExploreInnerRadius[0x38]; // 0x0198 (Size: 0x38, Type: StructProperty)
    std::uint8_t bFilterAllowBuildings; // 0x01D0 (Size: 0x1, Type: BoolProperty)
    // 0x01D0 BoolProperty bFilterAllowClimbup (shared storage)
    // 0x01D0 BoolProperty bFilterAllowDropdown (shared storage)
    // 0x01D0 BoolProperty bFilterAllowTerrain (shared storage)
    // 0x01D0 BoolProperty bLimitExplorationDirection (shared storage)
    // 0x01D0 BoolProperty bOnlyFlatSurface (shared storage)
    // 0x01D0 BoolProperty bUseHeightCheck (shared storage)
    // 0x01D0 BoolProperty bUseParameterizedDirection (shared storage)
    std::uint8_t bFilterAllowSmash; // 0x01D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x01D2
    std::uint8_t PathDistanceFilterOperator; // 0x01D4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01D5
    void* GenerateAround; // 0x01D8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, MinPathDistance) == 144, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::MinPathDistance");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, MaxPathDistance) == 200, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::MaxPathDistance");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, Density) == 256, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::Density");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, ExploreDirectionYaw) == 312, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::ExploreDirectionYaw");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, ExploreDirection) == 368, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::ExploreDirection");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, ExploreAngleDot) == 400, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::ExploreAngleDot");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, ExploreInnerRadius) == 408, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::ExploreInnerRadius");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, bFilterAllowBuildings) == 464, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::bFilterAllowBuildings");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, bFilterAllowSmash) == 465, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::bFilterAllowSmash");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, PathDistanceFilterOperator) == 468, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::PathDistanceFilterOperator");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, GenerateAround) == 472, "Offset mismatch for UFortQueryGenerator_PointsFromNavGraph::GenerateAround");

// /Script/FortniteAIServer.FortQueryGenerator_PointsInCylinder
// Kind: Class; super: EnvQueryGenerator_Donut
class UFortQueryGenerator_PointsInCylinder
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    std::uint8_t CylinderHeightMin[0x38]; // 0x0220 (Size: 0x38, Type: StructProperty)
    std::uint8_t CylinderHeightMax[0x38]; // 0x0258 (Size: 0x38, Type: StructProperty)
    std::uint8_t SpaceBetweenSlices[0x1]; // 0x0290 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsInCylinder, CylinderHeightMin) == 544, "Offset mismatch for UFortQueryGenerator_PointsInCylinder::CylinderHeightMin");
static_assert(offsetof(UFortQueryGenerator_PointsInCylinder, CylinderHeightMax) == 600, "Offset mismatch for UFortQueryGenerator_PointsInCylinder::CylinderHeightMax");
static_assert(offsetof(UFortQueryGenerator_PointsInCylinder, SpaceBetweenSlices) == 656, "Offset mismatch for UFortQueryGenerator_PointsInCylinder::SpaceBetweenSlices");

// /Script/FortniteAIServer.FortQueryGenerator_PointsInVolume
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_PointsInVolume
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t NumberOfPoints[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t NavMeshToUse; // 0x0088 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0089
    void* GenerateIn; // 0x0090 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsInVolume, NumberOfPoints) == 80, "Offset mismatch for UFortQueryGenerator_PointsInVolume::NumberOfPoints");
static_assert(offsetof(UFortQueryGenerator_PointsInVolume, NavMeshToUse) == 136, "Offset mismatch for UFortQueryGenerator_PointsInVolume::NavMeshToUse");
static_assert(offsetof(UFortQueryGenerator_PointsInVolume, GenerateIn) == 144, "Offset mismatch for UFortQueryGenerator_PointsInVolume::GenerateIn");

// /Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingActors
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_PointsOnBuildingActors
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t BoundingBoxExtentXY[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t BoundingBoxExtentZ[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t PointDensity[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxGeneratedPoints[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ActorLookupFilter[0xA8]; // 0x0170 (Size: 0xA8, Type: StructProperty)
    std::uint8_t RandomChanceToSkip[0x38]; // 0x0218 (Size: 0x38, Type: StructProperty)
    void* GenerateAround; // 0x0250 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, BoundingBoxExtentXY) == 144, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingActors::BoundingBoxExtentXY");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, BoundingBoxExtentZ) == 200, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingActors::BoundingBoxExtentZ");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, PointDensity) == 256, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingActors::PointDensity");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, MaxGeneratedPoints) == 312, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingActors::MaxGeneratedPoints");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, ActorLookupFilter) == 368, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingActors::ActorLookupFilter");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, RandomChanceToSkip) == 536, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingActors::RandomChanceToSkip");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, GenerateAround) == 592, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingActors::GenerateAround");

// /Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingGrid
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_PointsOnBuildingGrid
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t HorizontalGridSize[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t VerticalGridSize[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bStartGridFromBottom; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePointInVerticalCenterOfCell; // 0x0101 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0102
    void* GenerateAround; // 0x0108 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, HorizontalGridSize) == 144, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingGrid::HorizontalGridSize");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, VerticalGridSize) == 200, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingGrid::VerticalGridSize");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, bStartGridFromBottom) == 256, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingGrid::bStartGridFromBottom");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, bUsePointInVerticalCenterOfCell) == 257, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingGrid::bUsePointInVerticalCenterOfCell");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, GenerateAround) == 264, "Offset mismatch for UFortQueryGenerator_PointsOnBuildingGrid::GenerateAround");

// /Script/FortniteAIServer.FortQueryGenerator_PointsOnLine
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_PointsOnLine
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* GenerateFrom; // 0x0090 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DistanceToFirstPoint[0x38]; // 0x0098 (Size: 0x38, Type: StructProperty)
    std::uint8_t DistanceBetweenPoints[0x38]; // 0x00D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxDistance[0x38]; // 0x0108 (Size: 0x38, Type: StructProperty)
    std::uint8_t TraceData[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsOnLine, GenerateFrom) == 144, "Offset mismatch for UFortQueryGenerator_PointsOnLine::GenerateFrom");
static_assert(offsetof(UFortQueryGenerator_PointsOnLine, DistanceToFirstPoint) == 152, "Offset mismatch for UFortQueryGenerator_PointsOnLine::DistanceToFirstPoint");
static_assert(offsetof(UFortQueryGenerator_PointsOnLine, DistanceBetweenPoints) == 208, "Offset mismatch for UFortQueryGenerator_PointsOnLine::DistanceBetweenPoints");
static_assert(offsetof(UFortQueryGenerator_PointsOnLine, MaxDistance) == 264, "Offset mismatch for UFortQueryGenerator_PointsOnLine::MaxDistance");
static_assert(offsetof(UFortQueryGenerator_PointsOnLine, TraceData) == 320, "Offset mismatch for UFortQueryGenerator_PointsOnLine::TraceData");

// /Script/FortniteAIServer.FortQueryGenerator_PointsOnPathToCenter
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_PointsOnPathToCenter
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* CenterContext; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MaximumNodeSearchProvider[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaximumSearchRadiusProvider[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinimumSearchDistanceProvider[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t Behavior; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    std::uint8_t PathCountProvider[0x38]; // 0x0108 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinimumPathStartDistanceProvider[0x38]; // 0x0140 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinimumDistanceBetweenPathsProvider[0x38]; // 0x0178 (Size: 0x38, Type: StructProperty)
    std::uint8_t DistanceBetweenPointsOnPathProvider[0x38]; // 0x01B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t ProjectExtent[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    void* NavDataOverrideContext; // 0x0200 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, CenterContext) == 80, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::CenterContext");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, MaximumNodeSearchProvider) == 88, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::MaximumNodeSearchProvider");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, MaximumSearchRadiusProvider) == 144, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::MaximumSearchRadiusProvider");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, MinimumSearchDistanceProvider) == 200, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::MinimumSearchDistanceProvider");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, Behavior) == 256, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::Behavior");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, PathCountProvider) == 264, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::PathCountProvider");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, MinimumPathStartDistanceProvider) == 320, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::MinimumPathStartDistanceProvider");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, MinimumDistanceBetweenPathsProvider) == 376, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::MinimumDistanceBetweenPathsProvider");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, DistanceBetweenPointsOnPathProvider) == 432, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::DistanceBetweenPointsOnPathProvider");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, ProjectExtent) == 488, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::ProjectExtent");
static_assert(offsetof(UFortQueryGenerator_PointsOnPathToCenter, NavDataOverrideContext) == 512, "Offset mismatch for UFortQueryGenerator_PointsOnPathToCenter::NavDataOverrideContext");

// /Script/FortniteAIServer.FortQueryGenerator_PointsOnWaterShoreLine
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_PointsOnWaterShoreLine
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* GenerateAround; // 0x0090 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CurvesAroundLineAsset[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SegmentMaximumVerticalDegreeAngle[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsOnWaterShoreLine, GenerateAround) == 144, "Offset mismatch for UFortQueryGenerator_PointsOnWaterShoreLine::GenerateAround");
static_assert(offsetof(UFortQueryGenerator_PointsOnWaterShoreLine, CurvesAroundLineAsset) == 152, "Offset mismatch for UFortQueryGenerator_PointsOnWaterShoreLine::CurvesAroundLineAsset");
static_assert(offsetof(UFortQueryGenerator_PointsOnWaterShoreLine, SegmentMaximumVerticalDegreeAngle) == 184, "Offset mismatch for UFortQueryGenerator_PointsOnWaterShoreLine::SegmentMaximumVerticalDegreeAngle");

// /Script/FortniteAIServer.FortQueryGenerator_PointsOutsideBox
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_PointsOutsideBox
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t SpaceBetween[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumberOfRingsAroundVolume[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtraXExtent[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtraYExtent[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtraZExtent[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    void* GenerateInBoxCenter; // 0x01A8 (Size: 0x8, Type: ClassProperty)
    void* GenerateInBoxExtent; // 0x01B0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_PointsOutsideBox, SpaceBetween) == 144, "Offset mismatch for UFortQueryGenerator_PointsOutsideBox::SpaceBetween");
static_assert(offsetof(UFortQueryGenerator_PointsOutsideBox, NumberOfRingsAroundVolume) == 200, "Offset mismatch for UFortQueryGenerator_PointsOutsideBox::NumberOfRingsAroundVolume");
static_assert(offsetof(UFortQueryGenerator_PointsOutsideBox, ExtraXExtent) == 256, "Offset mismatch for UFortQueryGenerator_PointsOutsideBox::ExtraXExtent");
static_assert(offsetof(UFortQueryGenerator_PointsOutsideBox, ExtraYExtent) == 312, "Offset mismatch for UFortQueryGenerator_PointsOutsideBox::ExtraYExtent");
static_assert(offsetof(UFortQueryGenerator_PointsOutsideBox, ExtraZExtent) == 368, "Offset mismatch for UFortQueryGenerator_PointsOutsideBox::ExtraZExtent");
static_assert(offsetof(UFortQueryGenerator_PointsOutsideBox, GenerateInBoxCenter) == 424, "Offset mismatch for UFortQueryGenerator_PointsOutsideBox::GenerateInBoxCenter");
static_assert(offsetof(UFortQueryGenerator_PointsOutsideBox, GenerateInBoxExtent) == 432, "Offset mismatch for UFortQueryGenerator_PointsOutsideBox::GenerateInBoxExtent");

// /Script/FortniteAIServer.FortQueryGenerator_PropagatedEnemies
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_PropagatedEnemies
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t bIgnoreDBNOPawns; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreSleepingAIs; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeMarkedSleepingAIs; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0053
    std::uint8_t MaxTimeSincePropagated[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_PropagatedEnemies, bIgnoreDBNOPawns) == 80, "Offset mismatch for UFortQueryGenerator_PropagatedEnemies::bIgnoreDBNOPawns");
static_assert(offsetof(UFortQueryGenerator_PropagatedEnemies, bIgnoreSleepingAIs) == 81, "Offset mismatch for UFortQueryGenerator_PropagatedEnemies::bIgnoreSleepingAIs");
static_assert(offsetof(UFortQueryGenerator_PropagatedEnemies, bIncludeMarkedSleepingAIs) == 82, "Offset mismatch for UFortQueryGenerator_PropagatedEnemies::bIncludeMarkedSleepingAIs");
static_assert(offsetof(UFortQueryGenerator_PropagatedEnemies, MaxTimeSincePropagated) == 88, "Offset mismatch for UFortQueryGenerator_PropagatedEnemies::MaxTimeSincePropagated");

// /Script/FortniteAIServer.FortQueryGenerator_RandomPointsInBoundingVolume
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UFortQueryGenerator_RandomPointsInBoundingVolume
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* GenerateIn; // 0x0090 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RandomPointsCount[0x38]; // 0x0098 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtendBoundingVolumeBounds[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAddRandomZValueFromBoundingVolume; // 0x00E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryGenerator_RandomPointsInBoundingVolume, GenerateIn) == 144, "Offset mismatch for UFortQueryGenerator_RandomPointsInBoundingVolume::GenerateIn");
static_assert(offsetof(UFortQueryGenerator_RandomPointsInBoundingVolume, RandomPointsCount) == 152, "Offset mismatch for UFortQueryGenerator_RandomPointsInBoundingVolume::RandomPointsCount");
static_assert(offsetof(UFortQueryGenerator_RandomPointsInBoundingVolume, ExtendBoundingVolumeBounds) == 208, "Offset mismatch for UFortQueryGenerator_RandomPointsInBoundingVolume::ExtendBoundingVolumeBounds");
static_assert(offsetof(UFortQueryGenerator_RandomPointsInBoundingVolume, bAddRandomZValueFromBoundingVolume) == 232, "Offset mismatch for UFortQueryGenerator_RandomPointsInBoundingVolume::bAddRandomZValueFromBoundingVolume");

// /Script/FortniteAIServer.FortQueryGenerator_SpecificAssignmentGoals
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_SpecificAssignmentGoals
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t AssignmentIdentifier[0x30]; // 0x0050 (Size: 0x30, Type: StructProperty)
    void* AssignmentSettings; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* GoalProvider; // 0x0088 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryGenerator_SpecificAssignmentGoals, AssignmentIdentifier) == 80, "Offset mismatch for UFortQueryGenerator_SpecificAssignmentGoals::AssignmentIdentifier");
static_assert(offsetof(UFortQueryGenerator_SpecificAssignmentGoals, AssignmentSettings) == 128, "Offset mismatch for UFortQueryGenerator_SpecificAssignmentGoals::AssignmentSettings");
static_assert(offsetof(UFortQueryGenerator_SpecificAssignmentGoals, GoalProvider) == 136, "Offset mismatch for UFortQueryGenerator_SpecificAssignmentGoals::GoalProvider");

// /Script/FortniteAIServer.FortQueryGenerator_SquadMembers
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_SquadMembers
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t LookingForHumanPlayers[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t LookingForPlayerBots[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t LookingForNpcs[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t LookingForAiPawns[0x38]; // 0x00F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t IncludeSelf[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_SquadMembers, LookingForHumanPlayers) == 80, "Offset mismatch for UFortQueryGenerator_SquadMembers::LookingForHumanPlayers");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, LookingForPlayerBots) == 136, "Offset mismatch for UFortQueryGenerator_SquadMembers::LookingForPlayerBots");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, LookingForNpcs) == 192, "Offset mismatch for UFortQueryGenerator_SquadMembers::LookingForNpcs");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, LookingForAiPawns) == 248, "Offset mismatch for UFortQueryGenerator_SquadMembers::LookingForAiPawns");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, IncludeSelf) == 304, "Offset mismatch for UFortQueryGenerator_SquadMembers::IncludeSelf");

// /Script/FortniteAIServer.FortQueryGenerator_TerrainDonut
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_TerrainDonut
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* Center; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Radius[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    std::uint8_t RadiusWidth[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t SpacingArc[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumRings[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t bFilterAllowBuildings; // 0x0138 (Size: 0x1, Type: BoolProperty)
    // 0x0138 BoolProperty bFilterAllowTerrain (shared storage)
};

static_assert(offsetof(UFortQueryGenerator_TerrainDonut, Center) == 80, "Offset mismatch for UFortQueryGenerator_TerrainDonut::Center");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, Radius) == 88, "Offset mismatch for UFortQueryGenerator_TerrainDonut::Radius");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, RadiusWidth) == 144, "Offset mismatch for UFortQueryGenerator_TerrainDonut::RadiusWidth");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, SpacingArc) == 200, "Offset mismatch for UFortQueryGenerator_TerrainDonut::SpacingArc");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, NumRings) == 256, "Offset mismatch for UFortQueryGenerator_TerrainDonut::NumRings");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, bFilterAllowBuildings) == 312, "Offset mismatch for UFortQueryGenerator_TerrainDonut::bFilterAllowBuildings");

// /Script/FortniteAIServer.FortQueryGenerator_TokenDefendSpots
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_TokenDefendSpots
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* TokenProviderContext; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GameplayTagQuery[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    std::uint8_t QuerierTagQuery[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_TokenDefendSpots, TokenProviderContext) == 80, "Offset mismatch for UFortQueryGenerator_TokenDefendSpots::TokenProviderContext");
static_assert(offsetof(UFortQueryGenerator_TokenDefendSpots, GameplayTagQuery) == 88, "Offset mismatch for UFortQueryGenerator_TokenDefendSpots::GameplayTagQuery");
static_assert(offsetof(UFortQueryGenerator_TokenDefendSpots, QuerierTagQuery) == 160, "Offset mismatch for UFortQueryGenerator_TokenDefendSpots::QuerierTagQuery");

// /Script/FortniteAIServer.FortQueryGenerator_TokenProviderPositions
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_TokenProviderPositions
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* TokenProviderContext; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GameplayTagQuery[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_TokenProviderPositions, TokenProviderContext) == 80, "Offset mismatch for UFortQueryGenerator_TokenProviderPositions::TokenProviderContext");
static_assert(offsetof(UFortQueryGenerator_TokenProviderPositions, GameplayTagQuery) == 88, "Offset mismatch for UFortQueryGenerator_TokenProviderPositions::GameplayTagQuery");

// /Script/FortniteAIServer.FortQueryGenerator_TokenReservedPositions
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_TokenReservedPositions
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ActorContext; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GameplayTagQuery[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    std::uint8_t MaximumDistanceFromQueryActorProvider[0x38]; // 0x00A0 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaximumDistanceFromQueryActor[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_TokenReservedPositions, ActorContext) == 80, "Offset mismatch for UFortQueryGenerator_TokenReservedPositions::ActorContext");
static_assert(offsetof(UFortQueryGenerator_TokenReservedPositions, GameplayTagQuery) == 88, "Offset mismatch for UFortQueryGenerator_TokenReservedPositions::GameplayTagQuery");
static_assert(offsetof(UFortQueryGenerator_TokenReservedPositions, MaximumDistanceFromQueryActorProvider) == 160, "Offset mismatch for UFortQueryGenerator_TokenReservedPositions::MaximumDistanceFromQueryActorProvider");
static_assert(offsetof(UFortQueryGenerator_TokenReservedPositions, MaximumDistanceFromQueryActor) == 216, "Offset mismatch for UFortQueryGenerator_TokenReservedPositions::MaximumDistanceFromQueryActor");

// /Script/FortniteAIServer.FortQueryGenerator_UnfilteredTokenProviderPositions
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_UnfilteredTokenProviderPositions
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* TokenProviderContext; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GameplayTagQuery[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    std::uint8_t QuerierTagQuery[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_UnfilteredTokenProviderPositions, TokenProviderContext) == 80, "Offset mismatch for UFortQueryGenerator_UnfilteredTokenProviderPositions::TokenProviderContext");
static_assert(offsetof(UFortQueryGenerator_UnfilteredTokenProviderPositions, GameplayTagQuery) == 88, "Offset mismatch for UFortQueryGenerator_UnfilteredTokenProviderPositions::GameplayTagQuery");
static_assert(offsetof(UFortQueryGenerator_UnfilteredTokenProviderPositions, QuerierTagQuery) == 160, "Offset mismatch for UFortQueryGenerator_UnfilteredTokenProviderPositions::QuerierTagQuery");

// /Script/FortniteAIServer.FortQueryGenerator_ValidSpawnRiftActors
// Kind: Class; super: EnvQueryGenerator
class UFortQueryGenerator_ValidSpawnRiftActors
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t NumAIForGroup[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryGenerator_ValidSpawnRiftActors, NumAIForGroup) == 80, "Offset mismatch for UFortQueryGenerator_ValidSpawnRiftActors::NumAIForGroup");

// /Script/FortniteAIServer.FortQueryItemType_BoxCenterAndExtent
// Kind: Class; super: EnvQueryItemType_VectorBase
class UFortQueryItemType_BoxCenterAndExtent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryItemType_PointOrSlot
// Kind: Class; super: EnvQueryItemType_Point
class UFortQueryItemType_PointOrSlot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.FortQueryTest_ActorWithinMeleeRange
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_ActorWithinMeleeRange
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* TargetContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RequireAllTargets[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t TargetBoundsHeightBias[0x1]; // 0x0238 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_ActorWithinMeleeRange, TargetContext) == 504, "Offset mismatch for UFortQueryTest_ActorWithinMeleeRange::TargetContext");
static_assert(offsetof(UFortQueryTest_ActorWithinMeleeRange, RequireAllTargets) == 512, "Offset mismatch for UFortQueryTest_ActorWithinMeleeRange::RequireAllTargets");
static_assert(offsetof(UFortQueryTest_ActorWithinMeleeRange, TargetBoundsHeightBias) == 568, "Offset mismatch for UFortQueryTest_ActorWithinMeleeRange::TargetBoundsHeightBias");

// /Script/FortniteAIServer.FortQueryTest_AssignmentTypeInterest
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_AssignmentTypeInterest
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t InvalidTypeStartInterest[0x38]; // 0x0268 (Size: 0x38, Type: StructProperty)
    std::uint8_t InvalidTypeEndInterest[0x38]; // 0x02A0 (Size: 0x38, Type: StructProperty)
    std::uint8_t InvalidTypeTimeBeforeLerp[0x38]; // 0x02D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t InvalidTypeLerpDuration[0x38]; // 0x0310 (Size: 0x38, Type: StructProperty)
    std::uint8_t ValidTypeStartInterest[0x38]; // 0x0348 (Size: 0x38, Type: StructProperty)
    std::uint8_t ValidTypeEndInterest[0x38]; // 0x0380 (Size: 0x38, Type: StructProperty)
    std::uint8_t ValidTypeTimeBeforeLerp[0x38]; // 0x03B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ValidTypeLerpDuration[0x1]; // 0x03F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, InvalidTypeStartInterest) == 616, "Offset mismatch for UFortQueryTest_AssignmentTypeInterest::InvalidTypeStartInterest");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, InvalidTypeEndInterest) == 672, "Offset mismatch for UFortQueryTest_AssignmentTypeInterest::InvalidTypeEndInterest");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, InvalidTypeTimeBeforeLerp) == 728, "Offset mismatch for UFortQueryTest_AssignmentTypeInterest::InvalidTypeTimeBeforeLerp");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, InvalidTypeLerpDuration) == 784, "Offset mismatch for UFortQueryTest_AssignmentTypeInterest::InvalidTypeLerpDuration");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, ValidTypeStartInterest) == 840, "Offset mismatch for UFortQueryTest_AssignmentTypeInterest::ValidTypeStartInterest");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, ValidTypeEndInterest) == 896, "Offset mismatch for UFortQueryTest_AssignmentTypeInterest::ValidTypeEndInterest");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, ValidTypeTimeBeforeLerp) == 952, "Offset mismatch for UFortQueryTest_AssignmentTypeInterest::ValidTypeTimeBeforeLerp");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, ValidTypeLerpDuration) == 1008, "Offset mismatch for UFortQueryTest_AssignmentTypeInterest::ValidTypeLerpDuration");

// /Script/FortniteAIServer.FortQueryTest_BuildingCriteria
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_BuildingCriteria
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t ScoreForGroundSupportedFloor[0x38]; // 0x0268 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreForBeingGroundSupported[0x38]; // 0x02A0 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreForTraps[0x38]; // 0x02D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreForWalls[0x38]; // 0x0310 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreForNavigableOpening[0x38]; // 0x0348 (Size: 0x38, Type: StructProperty)
    std::uint8_t RootAssignmentID[0x30]; // 0x0380 (Size: 0x30, Type: StructProperty)
    std::uint8_t bPreferCloserToRootAssignment[0x38]; // 0x03B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreForDistanceFromClosestRootAssignmentGoal[0x38]; // 0x03E8 (Size: 0x38, Type: StructProperty)
    std::uint8_t MinDistanceForDistanceScoring[0x38]; // 0x0420 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxDistanceForDistanceScoring[0x38]; // 0x0458 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxHealthScore[0x38]; // 0x0490 (Size: 0x38, Type: StructProperty)
    std::uint8_t bPreferHigherHealth[0x38]; // 0x04C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ClampMaxHealthValue[0x38]; // 0x0500 (Size: 0x38, Type: StructProperty)
    std::uint8_t ClampMinHealthValue[0x38]; // 0x0538 (Size: 0x38, Type: StructProperty)
    std::uint8_t bPreferHigherHealthPercentage[0x38]; // 0x0570 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxHealthPercentageScore[0x38]; // 0x05A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bWantsBuildingRepairableByOwner[0x38]; // 0x05E0 (Size: 0x38, Type: StructProperty)
    std::uint8_t RepairableBuildingScore[0x38]; // 0x0618 (Size: 0x38, Type: StructProperty)
    std::uint8_t NotRepairableBuildingScore[0x38]; // 0x0650 (Size: 0x38, Type: StructProperty)
    std::uint8_t NeedsRepairBuildingScore[0x38]; // 0x0688 (Size: 0x38, Type: StructProperty)
    std::uint8_t DoesntNeedsRepairBuildingScore[0x38]; // 0x06C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bWantsDamagedByFriendly[0x38]; // 0x06F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t DamagedByFriendlyMaxLifespan[0x38]; // 0x0730 (Size: 0x38, Type: StructProperty)
    std::uint8_t DamagedByFriendlyMinDamage[0x38]; // 0x0768 (Size: 0x38, Type: StructProperty)
    std::uint8_t DamagedByFriendlyScore[0x38]; // 0x07A0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bWantsDamagedByEnemy[0x38]; // 0x07D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t DamagedByEnemyMaxLifespan[0x38]; // 0x0810 (Size: 0x38, Type: StructProperty)
    std::uint8_t DamagedByEnemyMinDamage[0x38]; // 0x0848 (Size: 0x38, Type: StructProperty)
    std::uint8_t DamagedByEnemyScore[0x1]; // 0x0880 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForGroundSupportedFloor) == 616, "Offset mismatch for UFortQueryTest_BuildingCriteria::ScoreForGroundSupportedFloor");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForBeingGroundSupported) == 672, "Offset mismatch for UFortQueryTest_BuildingCriteria::ScoreForBeingGroundSupported");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForTraps) == 728, "Offset mismatch for UFortQueryTest_BuildingCriteria::ScoreForTraps");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForWalls) == 784, "Offset mismatch for UFortQueryTest_BuildingCriteria::ScoreForWalls");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForNavigableOpening) == 840, "Offset mismatch for UFortQueryTest_BuildingCriteria::ScoreForNavigableOpening");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, RootAssignmentID) == 896, "Offset mismatch for UFortQueryTest_BuildingCriteria::RootAssignmentID");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bPreferCloserToRootAssignment) == 944, "Offset mismatch for UFortQueryTest_BuildingCriteria::bPreferCloserToRootAssignment");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForDistanceFromClosestRootAssignmentGoal) == 1000, "Offset mismatch for UFortQueryTest_BuildingCriteria::ScoreForDistanceFromClosestRootAssignmentGoal");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, MinDistanceForDistanceScoring) == 1056, "Offset mismatch for UFortQueryTest_BuildingCriteria::MinDistanceForDistanceScoring");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, MaxDistanceForDistanceScoring) == 1112, "Offset mismatch for UFortQueryTest_BuildingCriteria::MaxDistanceForDistanceScoring");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, MaxHealthScore) == 1168, "Offset mismatch for UFortQueryTest_BuildingCriteria::MaxHealthScore");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bPreferHigherHealth) == 1224, "Offset mismatch for UFortQueryTest_BuildingCriteria::bPreferHigherHealth");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ClampMaxHealthValue) == 1280, "Offset mismatch for UFortQueryTest_BuildingCriteria::ClampMaxHealthValue");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ClampMinHealthValue) == 1336, "Offset mismatch for UFortQueryTest_BuildingCriteria::ClampMinHealthValue");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bPreferHigherHealthPercentage) == 1392, "Offset mismatch for UFortQueryTest_BuildingCriteria::bPreferHigherHealthPercentage");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, MaxHealthPercentageScore) == 1448, "Offset mismatch for UFortQueryTest_BuildingCriteria::MaxHealthPercentageScore");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bWantsBuildingRepairableByOwner) == 1504, "Offset mismatch for UFortQueryTest_BuildingCriteria::bWantsBuildingRepairableByOwner");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, RepairableBuildingScore) == 1560, "Offset mismatch for UFortQueryTest_BuildingCriteria::RepairableBuildingScore");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, NotRepairableBuildingScore) == 1616, "Offset mismatch for UFortQueryTest_BuildingCriteria::NotRepairableBuildingScore");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, NeedsRepairBuildingScore) == 1672, "Offset mismatch for UFortQueryTest_BuildingCriteria::NeedsRepairBuildingScore");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DoesntNeedsRepairBuildingScore) == 1728, "Offset mismatch for UFortQueryTest_BuildingCriteria::DoesntNeedsRepairBuildingScore");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bWantsDamagedByFriendly) == 1784, "Offset mismatch for UFortQueryTest_BuildingCriteria::bWantsDamagedByFriendly");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByFriendlyMaxLifespan) == 1840, "Offset mismatch for UFortQueryTest_BuildingCriteria::DamagedByFriendlyMaxLifespan");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByFriendlyMinDamage) == 1896, "Offset mismatch for UFortQueryTest_BuildingCriteria::DamagedByFriendlyMinDamage");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByFriendlyScore) == 1952, "Offset mismatch for UFortQueryTest_BuildingCriteria::DamagedByFriendlyScore");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bWantsDamagedByEnemy) == 2008, "Offset mismatch for UFortQueryTest_BuildingCriteria::bWantsDamagedByEnemy");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByEnemyMaxLifespan) == 2064, "Offset mismatch for UFortQueryTest_BuildingCriteria::DamagedByEnemyMaxLifespan");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByEnemyMinDamage) == 2120, "Offset mismatch for UFortQueryTest_BuildingCriteria::DamagedByEnemyMinDamage");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByEnemyScore) == 2176, "Offset mismatch for UFortQueryTest_BuildingCriteria::DamagedByEnemyScore");

// /Script/FortniteAIServer.FortQueryTest_CanAttackTarget
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_CanAttackTarget
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_CanAttackTarget, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_CanAttackTarget::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_CanAttackTarget, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_CanAttackTarget::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_CanAttackTarget, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_CanAttackTarget::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_CanAttackTarget, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_CanAttackTarget::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_CanBeDamaged
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_CanBeDamaged
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_CanBeDamaged, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_CanBeDamaged::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_CanBeDamaged, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_CanBeDamaged::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_CanBeDamaged, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_CanBeDamaged::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_CanBeDamaged, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_CanBeDamaged::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_CanHitWithGameplayAbility
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_CanHitWithGameplayAbility
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* AIsUsingAbility; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    void* AbilityTargets; // 0x0200 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GameplayAbilityTag[0x1]; // 0x0208 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_CanHitWithGameplayAbility, AIsUsingAbility) == 504, "Offset mismatch for UFortQueryTest_CanHitWithGameplayAbility::AIsUsingAbility");
static_assert(offsetof(UFortQueryTest_CanHitWithGameplayAbility, AbilityTargets) == 512, "Offset mismatch for UFortQueryTest_CanHitWithGameplayAbility::AbilityTargets");
static_assert(offsetof(UFortQueryTest_CanHitWithGameplayAbility, GameplayAbilityTag) == 520, "Offset mismatch for UFortQueryTest_CanHitWithGameplayAbility::GameplayAbilityTag");

// /Script/FortniteAIServer.FortQueryTest_CoverPosition
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_CoverPosition
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* CoverPositionProviderContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    void* TargetContext; // 0x0200 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_CoverPosition, CoverPositionProviderContext) == 504, "Offset mismatch for UFortQueryTest_CoverPosition::CoverPositionProviderContext");
static_assert(offsetof(UFortQueryTest_CoverPosition, TargetContext) == 512, "Offset mismatch for UFortQueryTest_CoverPosition::TargetContext");

// /Script/FortniteAIServer.FortQueryTest_CurieState
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_CurieState
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t CurieStateQuery[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_CurieState, CurieStateQuery) == 504, "Offset mismatch for UFortQueryTest_CurieState::CurieStateQuery");

// /Script/FortniteAIServer.FortQueryTest_DecoyDistance
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_DecoyDistance
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* DistanceTo; // 0x01F8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_DecoyDistance, DistanceTo) == 504, "Offset mismatch for UFortQueryTest_DecoyDistance::DistanceTo");

// /Script/FortniteAIServer.FortQueryTest_DefendSpotCanShoot
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_DefendSpotCanShoot
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* TargetActorContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TraceCloseEnoughDistance[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t StandHeight[0x38]; // 0x0238 (Size: 0x38, Type: StructProperty)
    std::uint8_t CrouchHeight[0x38]; // 0x0270 (Size: 0x38, Type: StructProperty)
    std::uint8_t TraceType; // 0x02A8 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortQueryTest_DefendSpotCanShoot, TargetActorContext) == 504, "Offset mismatch for UFortQueryTest_DefendSpotCanShoot::TargetActorContext");
static_assert(offsetof(UFortQueryTest_DefendSpotCanShoot, TraceCloseEnoughDistance) == 512, "Offset mismatch for UFortQueryTest_DefendSpotCanShoot::TraceCloseEnoughDistance");
static_assert(offsetof(UFortQueryTest_DefendSpotCanShoot, StandHeight) == 568, "Offset mismatch for UFortQueryTest_DefendSpotCanShoot::StandHeight");
static_assert(offsetof(UFortQueryTest_DefendSpotCanShoot, CrouchHeight) == 624, "Offset mismatch for UFortQueryTest_DefendSpotCanShoot::CrouchHeight");
static_assert(offsetof(UFortQueryTest_DefendSpotCanShoot, TraceType) == 680, "Offset mismatch for UFortQueryTest_DefendSpotCanShoot::TraceType");

// /Script/FortniteAIServer.FortQueryTest_DefendSpotProtectionDot
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_DefendSpotProtectionDot
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* TargetActorContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_DefendSpotProtectionDot, TargetActorContext) == 504, "Offset mismatch for UFortQueryTest_DefendSpotProtectionDot::TargetActorContext");

// /Script/FortniteAIServer.FortQueryTest_DeltaDistance
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_DeltaDistance
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* LocationProviderContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseDistance2D; // 0x0200 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_DeltaDistance, LocationProviderContext) == 504, "Offset mismatch for UFortQueryTest_DeltaDistance::LocationProviderContext");
static_assert(offsetof(UFortQueryTest_DeltaDistance, bUseDistance2D) == 512, "Offset mismatch for UFortQueryTest_DeltaDistance::bUseDistance2D");

// /Script/FortniteAIServer.FortQueryTest_DistanceBounded
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_DistanceBounded
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t MeasurementType; // 0x01F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableUpperBound; // 0x01F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x01FA
    std::uint8_t UpperBound[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t bEnableLowerBound; // 0x0238 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0239
    std::uint8_t LowerBound[0x38]; // 0x0240 (Size: 0x38, Type: StructProperty)
    void* ContextLocation; // 0x0278 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_DistanceBounded, MeasurementType) == 504, "Offset mismatch for UFortQueryTest_DistanceBounded::MeasurementType");
static_assert(offsetof(UFortQueryTest_DistanceBounded, bEnableUpperBound) == 505, "Offset mismatch for UFortQueryTest_DistanceBounded::bEnableUpperBound");
static_assert(offsetof(UFortQueryTest_DistanceBounded, UpperBound) == 512, "Offset mismatch for UFortQueryTest_DistanceBounded::UpperBound");
static_assert(offsetof(UFortQueryTest_DistanceBounded, bEnableLowerBound) == 568, "Offset mismatch for UFortQueryTest_DistanceBounded::bEnableLowerBound");
static_assert(offsetof(UFortQueryTest_DistanceBounded, LowerBound) == 576, "Offset mismatch for UFortQueryTest_DistanceBounded::LowerBound");
static_assert(offsetof(UFortQueryTest_DistanceBounded, ContextLocation) == 632, "Offset mismatch for UFortQueryTest_DistanceBounded::ContextLocation");

// /Script/FortniteAIServer.FortQueryTest_DistanceToActorBound
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_DistanceToActorBound
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* DistanceTo; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUse2DDistance; // 0x0200 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_DistanceToActorBound, DistanceTo) == 504, "Offset mismatch for UFortQueryTest_DistanceToActorBound::DistanceTo");
static_assert(offsetof(UFortQueryTest_DistanceToActorBound, bUse2DDistance) == 512, "Offset mismatch for UFortQueryTest_DistanceToActorBound::bUse2DDistance");

// /Script/FortniteAIServer.FortQueryTest_DistanceToIndestructibleBuilding
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_DistanceToIndestructibleBuilding
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, TestOrder) == 48, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::TestOrder");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, TestPurpose) == 52, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::TestPurpose");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, TestComment) == 56, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::TestComment");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, MultipleContextFilterOp) == 72, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::MultipleContextFilterOp");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, MultipleContextScoreOp) == 73, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::MultipleContextScoreOp");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, FilterType) == 74, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::FilterType");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, BoolValue) == 80, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::BoolValue");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, FloatValueMin) == 136, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::FloatValueMin");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, FloatValueMax) == 192, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::FloatValueMax");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, ScoringEquation) == 249, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::ScoringEquation");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, ClampMinType) == 250, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::ClampMinType");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, ClampMaxType) == 251, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::ClampMaxType");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, NormalizationType) == 252, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::NormalizationType");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, ScoreClampMin) == 256, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::ScoreClampMin");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, ScoreClampMax) == 312, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::ScoreClampMax");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, ScoringFactor) == 368, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::ScoringFactor");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, ReferenceValue) == 424, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::ReferenceValue");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, bDefineReferenceValue) == 480, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::bDefineReferenceValue");
static_assert(offsetof(UFortQueryTest_DistanceToIndestructibleBuilding, bWorkOnFloatValues) == 496, "Offset mismatch for UFortQueryTest_DistanceToIndestructibleBuilding::bWorkOnFloatValues");

// /Script/FortniteAIServer.FortQueryTest_EnvironmentalDanger
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_EnvironmentalDanger
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bUse3DBoundsCheck; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01F9
    std::uint8_t DangerSourceActorRegistryTag[0x1]; // 0x01FC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_EnvironmentalDanger, bUse3DBoundsCheck) == 504, "Offset mismatch for UFortQueryTest_EnvironmentalDanger::bUse3DBoundsCheck");
static_assert(offsetof(UFortQueryTest_EnvironmentalDanger, DangerSourceActorRegistryTag) == 508, "Offset mismatch for UFortQueryTest_EnvironmentalDanger::DangerSourceActorRegistryTag");

// /Script/FortniteAIServer.FortQueryTest_GameplayTagsPerDifficulty
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_GameplayTagsPerDifficulty
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    TArray<void*> TagQueriesPerDifficulty; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQueryTest_GameplayTagsPerDifficulty, TagQueriesPerDifficulty) == 504, "Offset mismatch for UFortQueryTest_GameplayTagsPerDifficulty::TagQueriesPerDifficulty");

// /Script/FortniteAIServer.FortQueryTest_GoalActorDot
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalActorDot
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    void* LineATo; // 0x0268 (Size: 0x8, Type: ClassProperty)
    void* LineBTo; // 0x0270 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TestMode; // 0x0278 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAbsoluteValue; // 0x0279 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_GoalActorDot, LineATo) == 616, "Offset mismatch for UFortQueryTest_GoalActorDot::LineATo");
static_assert(offsetof(UFortQueryTest_GoalActorDot, LineBTo) == 624, "Offset mismatch for UFortQueryTest_GoalActorDot::LineBTo");
static_assert(offsetof(UFortQueryTest_GoalActorDot, TestMode) == 632, "Offset mismatch for UFortQueryTest_GoalActorDot::TestMode");
static_assert(offsetof(UFortQueryTest_GoalActorDot, bAbsoluteValue) == 633, "Offset mismatch for UFortQueryTest_GoalActorDot::bAbsoluteValue");

// /Script/FortniteAIServer.FortQueryTest_GoalActorTimeSinceSpawn
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalActorTimeSinceSpawn
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalActorTimeSinceSpawn, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_GoalActorTimeSinceSpawn::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_GoalActorTimeSinceSpawn, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_GoalActorTimeSinceSpawn::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalActorTimeSinceSpawn, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_GoalActorTimeSinceSpawn::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalActorTimeSinceSpawn, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_GoalActorTimeSinceSpawn::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_GoalBase
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_GoalBase
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalBase, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_GoalBase::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_GoalBase, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_GoalBase::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalBase, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_GoalBase::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalBase, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_GoalBase::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_GoalDiscouragement
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalDiscouragement
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t DisableDiscouragementWhenUndermining[0x1]; // 0x0268 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalDiscouragement, DisableDiscouragementWhenUndermining) == 616, "Offset mismatch for UFortQueryTest_GoalDiscouragement::DisableDiscouragementWhenUndermining");

// /Script/FortniteAIServer.FortQueryTest_GoalDistance
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalDistance
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t DistanceMode; // 0x0268 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0269
    void* DistanceTo; // 0x0270 (Size: 0x8, Type: ClassProperty)
    std::uint8_t TestMode; // 0x0278 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortQueryTest_GoalDistance, DistanceMode) == 616, "Offset mismatch for UFortQueryTest_GoalDistance::DistanceMode");
static_assert(offsetof(UFortQueryTest_GoalDistance, DistanceTo) == 624, "Offset mismatch for UFortQueryTest_GoalDistance::DistanceTo");
static_assert(offsetof(UFortQueryTest_GoalDistance, TestMode) == 632, "Offset mismatch for UFortQueryTest_GoalDistance::TestMode");

// /Script/FortniteAIServer.FortQueryTest_GoalDistanceRanges
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalDistanceRanges
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t DistanceMode; // 0x0268 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0269
    void* DistanceTo; // 0x0270 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ScreeningTestMode; // 0x0278 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TestMode; // 0x0279 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x6]; // 0x027A
    TArray<void*> GoalDistanceDataRanges; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, DistanceMode) == 616, "Offset mismatch for UFortQueryTest_GoalDistanceRanges::DistanceMode");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, DistanceTo) == 624, "Offset mismatch for UFortQueryTest_GoalDistanceRanges::DistanceTo");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, ScreeningTestMode) == 632, "Offset mismatch for UFortQueryTest_GoalDistanceRanges::ScreeningTestMode");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, TestMode) == 633, "Offset mismatch for UFortQueryTest_GoalDistanceRanges::TestMode");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, GoalDistanceDataRanges) == 640, "Offset mismatch for UFortQueryTest_GoalDistanceRanges::GoalDistanceDataRanges");

// /Script/FortniteAIServer.FortQueryTest_GoalFrustrationDiscouragement
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalFrustrationDiscouragement
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalFrustrationDiscouragement, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_GoalFrustrationDiscouragement::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_GoalFrustrationDiscouragement, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_GoalFrustrationDiscouragement::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalFrustrationDiscouragement, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_GoalFrustrationDiscouragement::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalFrustrationDiscouragement, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_GoalFrustrationDiscouragement::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_GoalGameplayTags
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalGameplayTags
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t bShouldLookupQueryByTag; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0269
    std::uint8_t TagQueryToMatch[0x48]; // 0x0270 (Size: 0x48, Type: StructProperty)
    std::uint8_t QueryLookupTag[0x4]; // 0x02B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bShouldPassWhenQueryNotFound; // 0x02BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02BD
    std::uint8_t PawnOwnerTagQuery[0x48]; // 0x02C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bRequireAllProvidedTagQueriesPass; // 0x0308 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_GoalGameplayTags, bShouldLookupQueryByTag) == 616, "Offset mismatch for UFortQueryTest_GoalGameplayTags::bShouldLookupQueryByTag");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, TagQueryToMatch) == 624, "Offset mismatch for UFortQueryTest_GoalGameplayTags::TagQueryToMatch");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, QueryLookupTag) == 696, "Offset mismatch for UFortQueryTest_GoalGameplayTags::QueryLookupTag");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, bShouldPassWhenQueryNotFound) == 700, "Offset mismatch for UFortQueryTest_GoalGameplayTags::bShouldPassWhenQueryNotFound");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, PawnOwnerTagQuery) == 704, "Offset mismatch for UFortQueryTest_GoalGameplayTags::PawnOwnerTagQuery");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, bRequireAllProvidedTagQueriesPass) == 776, "Offset mismatch for UFortQueryTest_GoalGameplayTags::bRequireAllProvidedTagQueriesPass");

// /Script/FortniteAIServer.FortQueryTest_GoalMarkedByPlayer
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalMarkedByPlayer
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t OwnerTagQuery[0x48]; // 0x0268 (Size: 0x48, Type: StructProperty)
    std::uint8_t OnlyConverterMarkedTargets[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalMarkedByPlayer, OwnerTagQuery) == 616, "Offset mismatch for UFortQueryTest_GoalMarkedByPlayer::OwnerTagQuery");
static_assert(offsetof(UFortQueryTest_GoalMarkedByPlayer, OnlyConverterMarkedTargets) == 688, "Offset mismatch for UFortQueryTest_GoalMarkedByPlayer::OnlyConverterMarkedTargets");

// /Script/FortniteAIServer.FortQueryTest_GoalNumberOfAIAssigned
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalNumberOfAIAssigned
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t TypeOfMatchToCount; // 0x0268 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryTest_GoalNumberOfAIAssigned, TypeOfMatchToCount) == 616, "Offset mismatch for UFortQueryTest_GoalNumberOfAIAssigned::TypeOfMatchToCount");

// /Script/FortniteAIServer.FortQueryTest_GoalOverallDamageCaused
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalOverallDamageCaused
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalOverallDamageCaused, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_GoalOverallDamageCaused::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_GoalOverallDamageCaused, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_GoalOverallDamageCaused::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalOverallDamageCaused, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_GoalOverallDamageCaused::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalOverallDamageCaused, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_GoalOverallDamageCaused::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_GoalPickupFilter
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalPickupFilter
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    float MaxLifetime; // 0x0268 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RequiredPickupSpawnSource; // 0x026C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryTest_GoalPickupFilter, MaxLifetime) == 616, "Offset mismatch for UFortQueryTest_GoalPickupFilter::MaxLifetime");
static_assert(offsetof(UFortQueryTest_GoalPickupFilter, RequiredPickupSpawnSource) == 620, "Offset mismatch for UFortQueryTest_GoalPickupFilter::RequiredPickupSpawnSource");

// /Script/FortniteAIServer.FortQueryTest_GoalProject
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalProject
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t ProjectionData[0x1]; // 0x0268 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalProject, ProjectionData) == 616, "Offset mismatch for UFortQueryTest_GoalProject::ProjectionData");

// /Script/FortniteAIServer.FortQueryTest_GoalStickiness
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalStickiness
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t StartValueForGoal[0x38]; // 0x0268 (Size: 0x38, Type: StructProperty)
    std::uint8_t EndValueForGoal[0x38]; // 0x02A0 (Size: 0x38, Type: StructProperty)
    std::uint8_t TimeBeforeValueLerp[0x38]; // 0x02D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ValueLerpDuration[0x38]; // 0x0310 (Size: 0x38, Type: StructProperty)
    std::uint8_t ApplyStickinessToAllGoalsWithSameActor[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalStickiness, StartValueForGoal) == 616, "Offset mismatch for UFortQueryTest_GoalStickiness::StartValueForGoal");
static_assert(offsetof(UFortQueryTest_GoalStickiness, EndValueForGoal) == 672, "Offset mismatch for UFortQueryTest_GoalStickiness::EndValueForGoal");
static_assert(offsetof(UFortQueryTest_GoalStickiness, TimeBeforeValueLerp) == 728, "Offset mismatch for UFortQueryTest_GoalStickiness::TimeBeforeValueLerp");
static_assert(offsetof(UFortQueryTest_GoalStickiness, ValueLerpDuration) == 784, "Offset mismatch for UFortQueryTest_GoalStickiness::ValueLerpDuration");
static_assert(offsetof(UFortQueryTest_GoalStickiness, ApplyStickinessToAllGoalsWithSameActor) == 840, "Offset mismatch for UFortQueryTest_GoalStickiness::ApplyStickinessToAllGoalsWithSameActor");

// /Script/FortniteAIServer.FortQueryTest_GoalType
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalType
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalType, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_GoalType::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_GoalType, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_GoalType::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalType, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_GoalType::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalType, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_GoalType::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_GoalWithinTetheredBounds
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_GoalWithinTetheredBounds
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_GoalWithinTetheredBounds, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_GoalWithinTetheredBounds::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_GoalWithinTetheredBounds, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_GoalWithinTetheredBounds::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalWithinTetheredBounds, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_GoalWithinTetheredBounds::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_GoalWithinTetheredBounds, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_GoalWithinTetheredBounds::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_HasNearbyBuildings
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_HasNearbyBuildings
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bIncludeCenter; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bIncludeFloors (shared storage)
    // 0x01F8 BoolProperty bIncludeFloorsAbove (shared storage)
    // 0x01F8 BoolProperty bIncludeWalls (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x01F9
    std::int32_t ExtentXY; // 0x01FC (Size: 0x4, Type: IntProperty)
    std::int32_t ExtentZ; // 0x0200 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortQueryTest_HasNearbyBuildings, bIncludeCenter) == 504, "Offset mismatch for UFortQueryTest_HasNearbyBuildings::bIncludeCenter");
static_assert(offsetof(UFortQueryTest_HasNearbyBuildings, ExtentXY) == 508, "Offset mismatch for UFortQueryTest_HasNearbyBuildings::ExtentXY");
static_assert(offsetof(UFortQueryTest_HasNearbyBuildings, ExtentZ) == 512, "Offset mismatch for UFortQueryTest_HasNearbyBuildings::ExtentZ");

// /Script/FortniteAIServer.FortQueryTest_HasNearbyEncounterGoals
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_HasNearbyEncounterGoals
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bOnlyActiveEncounters; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    std::uint8_t TestDistance[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_HasNearbyEncounterGoals, bOnlyActiveEncounters) == 504, "Offset mismatch for UFortQueryTest_HasNearbyEncounterGoals::bOnlyActiveEncounters");
static_assert(offsetof(UFortQueryTest_HasNearbyEncounterGoals, TestDistance) == 512, "Offset mismatch for UFortQueryTest_HasNearbyEncounterGoals::TestDistance");

// /Script/FortniteAIServer.FortQueryTest_Health
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_Health
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bUsePercentHealth; // 0x01F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_Health, bUsePercentHealth) == 504, "Offset mismatch for UFortQueryTest_Health::bUsePercentHealth");

// /Script/FortniteAIServer.FortQueryTest_HealthAndShield
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_HealthAndShield
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bConsiderHealth; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    std::uint8_t HealthMin[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t HealthMax[0x38]; // 0x0238 (Size: 0x38, Type: StructProperty)
    std::uint8_t bHealthAsPercent; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsiderShield; // 0x0271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0272
    std::uint8_t ShieldMin[0x38]; // 0x0278 (Size: 0x38, Type: StructProperty)
    std::uint8_t ShieldMax[0x38]; // 0x02B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bShieldAsPercent; // 0x02E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_HealthAndShield, bConsiderHealth) == 504, "Offset mismatch for UFortQueryTest_HealthAndShield::bConsiderHealth");
static_assert(offsetof(UFortQueryTest_HealthAndShield, HealthMin) == 512, "Offset mismatch for UFortQueryTest_HealthAndShield::HealthMin");
static_assert(offsetof(UFortQueryTest_HealthAndShield, HealthMax) == 568, "Offset mismatch for UFortQueryTest_HealthAndShield::HealthMax");
static_assert(offsetof(UFortQueryTest_HealthAndShield, bHealthAsPercent) == 624, "Offset mismatch for UFortQueryTest_HealthAndShield::bHealthAsPercent");
static_assert(offsetof(UFortQueryTest_HealthAndShield, bConsiderShield) == 625, "Offset mismatch for UFortQueryTest_HealthAndShield::bConsiderShield");
static_assert(offsetof(UFortQueryTest_HealthAndShield, ShieldMin) == 632, "Offset mismatch for UFortQueryTest_HealthAndShield::ShieldMin");
static_assert(offsetof(UFortQueryTest_HealthAndShield, ShieldMax) == 688, "Offset mismatch for UFortQueryTest_HealthAndShield::ShieldMax");
static_assert(offsetof(UFortQueryTest_HealthAndShield, bShieldAsPercent) == 744, "Offset mismatch for UFortQueryTest_HealthAndShield::bShieldAsPercent");

// /Script/FortniteAIServer.FortQueryTest_HotspotSlotOrientation
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_HotspotSlotOrientation
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* FaceToward; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DotThreshold[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_HotspotSlotOrientation, FaceToward) == 504, "Offset mismatch for UFortQueryTest_HotspotSlotOrientation::FaceToward");
static_assert(offsetof(UFortQueryTest_HotspotSlotOrientation, DotThreshold) == 512, "Offset mismatch for UFortQueryTest_HotspotSlotOrientation::DotThreshold");

// /Script/FortniteAIServer.FortQueryTest_HotspotSlotState
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_HotspotSlotState
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t SlotState; // 0x01F8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryTest_HotspotSlotState, SlotState) == 504, "Offset mismatch for UFortQueryTest_HotspotSlotState::SlotState");

// /Script/FortniteAIServer.FortQueryTest_InfluenceScore
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_InfluenceScore
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_InfluenceScore, TestOrder) == 48, "Offset mismatch for UFortQueryTest_InfluenceScore::TestOrder");
static_assert(offsetof(UFortQueryTest_InfluenceScore, TestPurpose) == 52, "Offset mismatch for UFortQueryTest_InfluenceScore::TestPurpose");
static_assert(offsetof(UFortQueryTest_InfluenceScore, TestComment) == 56, "Offset mismatch for UFortQueryTest_InfluenceScore::TestComment");
static_assert(offsetof(UFortQueryTest_InfluenceScore, MultipleContextFilterOp) == 72, "Offset mismatch for UFortQueryTest_InfluenceScore::MultipleContextFilterOp");
static_assert(offsetof(UFortQueryTest_InfluenceScore, MultipleContextScoreOp) == 73, "Offset mismatch for UFortQueryTest_InfluenceScore::MultipleContextScoreOp");
static_assert(offsetof(UFortQueryTest_InfluenceScore, FilterType) == 74, "Offset mismatch for UFortQueryTest_InfluenceScore::FilterType");
static_assert(offsetof(UFortQueryTest_InfluenceScore, BoolValue) == 80, "Offset mismatch for UFortQueryTest_InfluenceScore::BoolValue");
static_assert(offsetof(UFortQueryTest_InfluenceScore, FloatValueMin) == 136, "Offset mismatch for UFortQueryTest_InfluenceScore::FloatValueMin");
static_assert(offsetof(UFortQueryTest_InfluenceScore, FloatValueMax) == 192, "Offset mismatch for UFortQueryTest_InfluenceScore::FloatValueMax");
static_assert(offsetof(UFortQueryTest_InfluenceScore, ScoringEquation) == 249, "Offset mismatch for UFortQueryTest_InfluenceScore::ScoringEquation");
static_assert(offsetof(UFortQueryTest_InfluenceScore, ClampMinType) == 250, "Offset mismatch for UFortQueryTest_InfluenceScore::ClampMinType");
static_assert(offsetof(UFortQueryTest_InfluenceScore, ClampMaxType) == 251, "Offset mismatch for UFortQueryTest_InfluenceScore::ClampMaxType");
static_assert(offsetof(UFortQueryTest_InfluenceScore, NormalizationType) == 252, "Offset mismatch for UFortQueryTest_InfluenceScore::NormalizationType");
static_assert(offsetof(UFortQueryTest_InfluenceScore, ScoreClampMin) == 256, "Offset mismatch for UFortQueryTest_InfluenceScore::ScoreClampMin");
static_assert(offsetof(UFortQueryTest_InfluenceScore, ScoreClampMax) == 312, "Offset mismatch for UFortQueryTest_InfluenceScore::ScoreClampMax");
static_assert(offsetof(UFortQueryTest_InfluenceScore, ScoringFactor) == 368, "Offset mismatch for UFortQueryTest_InfluenceScore::ScoringFactor");
static_assert(offsetof(UFortQueryTest_InfluenceScore, ReferenceValue) == 424, "Offset mismatch for UFortQueryTest_InfluenceScore::ReferenceValue");
static_assert(offsetof(UFortQueryTest_InfluenceScore, bDefineReferenceValue) == 480, "Offset mismatch for UFortQueryTest_InfluenceScore::bDefineReferenceValue");
static_assert(offsetof(UFortQueryTest_InfluenceScore, bWorkOnFloatValues) == 496, "Offset mismatch for UFortQueryTest_InfluenceScore::bWorkOnFloatValues");

// /Script/FortniteAIServer.FortQueryTest_InsideAIBotLeash
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_InsideAIBotLeash
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, TestOrder) == 48, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::TestOrder");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, TestPurpose) == 52, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::TestPurpose");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, TestComment) == 56, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::TestComment");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, MultipleContextFilterOp) == 72, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::MultipleContextFilterOp");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, MultipleContextScoreOp) == 73, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::MultipleContextScoreOp");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, FilterType) == 74, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::FilterType");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, BoolValue) == 80, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::BoolValue");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, FloatValueMin) == 136, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::FloatValueMin");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, FloatValueMax) == 192, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::FloatValueMax");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, ScoringEquation) == 249, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::ScoringEquation");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, ClampMinType) == 250, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::ClampMinType");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, ClampMaxType) == 251, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::ClampMaxType");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, NormalizationType) == 252, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::NormalizationType");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, ScoreClampMin) == 256, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::ScoreClampMin");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, ScoreClampMax) == 312, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::ScoreClampMax");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, ScoringFactor) == 368, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::ScoringFactor");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, ReferenceValue) == 424, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::ReferenceValue");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, bDefineReferenceValue) == 480, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::bDefineReferenceValue");
static_assert(offsetof(UFortQueryTest_InsideAIBotLeash, bWorkOnFloatValues) == 496, "Offset mismatch for UFortQueryTest_InsideAIBotLeash::bWorkOnFloatValues");

// /Script/FortniteAIServer.FortQueryTest_InsideAthenaLeash
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_InsideAthenaLeash
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t LeashTolerance[0x38]; // 0x01F8 (Size: 0x38, Type: StructProperty)
    void* ContextOwner; // 0x0230 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_InsideAthenaLeash, LeashTolerance) == 504, "Offset mismatch for UFortQueryTest_InsideAthenaLeash::LeashTolerance");
static_assert(offsetof(UFortQueryTest_InsideAthenaLeash, ContextOwner) == 560, "Offset mismatch for UFortQueryTest_InsideAthenaLeash::ContextOwner");

// /Script/FortniteAIServer.FortQueryTest_InsideAthenaSafeZone
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_InsideAthenaSafeZone
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bUseCurrentSafeZoneIndicatorRadius; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseCurrentSafeZoneIndex; // 0x01F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x01FA
    std::uint8_t SafeZoneIndex[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t bNextSafeZone; // 0x0238 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFastApproximateSafeZoneCheck; // 0x0239 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_InsideAthenaSafeZone, bUseCurrentSafeZoneIndicatorRadius) == 504, "Offset mismatch for UFortQueryTest_InsideAthenaSafeZone::bUseCurrentSafeZoneIndicatorRadius");
static_assert(offsetof(UFortQueryTest_InsideAthenaSafeZone, bUseCurrentSafeZoneIndex) == 505, "Offset mismatch for UFortQueryTest_InsideAthenaSafeZone::bUseCurrentSafeZoneIndex");
static_assert(offsetof(UFortQueryTest_InsideAthenaSafeZone, SafeZoneIndex) == 512, "Offset mismatch for UFortQueryTest_InsideAthenaSafeZone::SafeZoneIndex");
static_assert(offsetof(UFortQueryTest_InsideAthenaSafeZone, bNextSafeZone) == 568, "Offset mismatch for UFortQueryTest_InsideAthenaSafeZone::bNextSafeZone");
static_assert(offsetof(UFortQueryTest_InsideAthenaSafeZone, bFastApproximateSafeZoneCheck) == 569, "Offset mismatch for UFortQueryTest_InsideAthenaSafeZone::bFastApproximateSafeZoneCheck");

// /Script/FortniteAIServer.FortQueryTest_InsideBuilding
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_InsideBuilding
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_InsideBuilding, TestOrder) == 48, "Offset mismatch for UFortQueryTest_InsideBuilding::TestOrder");
static_assert(offsetof(UFortQueryTest_InsideBuilding, TestPurpose) == 52, "Offset mismatch for UFortQueryTest_InsideBuilding::TestPurpose");
static_assert(offsetof(UFortQueryTest_InsideBuilding, TestComment) == 56, "Offset mismatch for UFortQueryTest_InsideBuilding::TestComment");
static_assert(offsetof(UFortQueryTest_InsideBuilding, MultipleContextFilterOp) == 72, "Offset mismatch for UFortQueryTest_InsideBuilding::MultipleContextFilterOp");
static_assert(offsetof(UFortQueryTest_InsideBuilding, MultipleContextScoreOp) == 73, "Offset mismatch for UFortQueryTest_InsideBuilding::MultipleContextScoreOp");
static_assert(offsetof(UFortQueryTest_InsideBuilding, FilterType) == 74, "Offset mismatch for UFortQueryTest_InsideBuilding::FilterType");
static_assert(offsetof(UFortQueryTest_InsideBuilding, BoolValue) == 80, "Offset mismatch for UFortQueryTest_InsideBuilding::BoolValue");
static_assert(offsetof(UFortQueryTest_InsideBuilding, FloatValueMin) == 136, "Offset mismatch for UFortQueryTest_InsideBuilding::FloatValueMin");
static_assert(offsetof(UFortQueryTest_InsideBuilding, FloatValueMax) == 192, "Offset mismatch for UFortQueryTest_InsideBuilding::FloatValueMax");
static_assert(offsetof(UFortQueryTest_InsideBuilding, ScoringEquation) == 249, "Offset mismatch for UFortQueryTest_InsideBuilding::ScoringEquation");
static_assert(offsetof(UFortQueryTest_InsideBuilding, ClampMinType) == 250, "Offset mismatch for UFortQueryTest_InsideBuilding::ClampMinType");
static_assert(offsetof(UFortQueryTest_InsideBuilding, ClampMaxType) == 251, "Offset mismatch for UFortQueryTest_InsideBuilding::ClampMaxType");
static_assert(offsetof(UFortQueryTest_InsideBuilding, NormalizationType) == 252, "Offset mismatch for UFortQueryTest_InsideBuilding::NormalizationType");
static_assert(offsetof(UFortQueryTest_InsideBuilding, ScoreClampMin) == 256, "Offset mismatch for UFortQueryTest_InsideBuilding::ScoreClampMin");
static_assert(offsetof(UFortQueryTest_InsideBuilding, ScoreClampMax) == 312, "Offset mismatch for UFortQueryTest_InsideBuilding::ScoreClampMax");
static_assert(offsetof(UFortQueryTest_InsideBuilding, ScoringFactor) == 368, "Offset mismatch for UFortQueryTest_InsideBuilding::ScoringFactor");
static_assert(offsetof(UFortQueryTest_InsideBuilding, ReferenceValue) == 424, "Offset mismatch for UFortQueryTest_InsideBuilding::ReferenceValue");
static_assert(offsetof(UFortQueryTest_InsideBuilding, bDefineReferenceValue) == 480, "Offset mismatch for UFortQueryTest_InsideBuilding::bDefineReferenceValue");
static_assert(offsetof(UFortQueryTest_InsideBuilding, bWorkOnFloatValues) == 496, "Offset mismatch for UFortQueryTest_InsideBuilding::bWorkOnFloatValues");

// /Script/FortniteAIServer.FortQueryTest_InsideWater
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_InsideWater
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    float TestRadius; // 0x01F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortQueryTest_InsideWater, TestRadius) == 504, "Offset mismatch for UFortQueryTest_InsideWater::TestRadius");

// /Script/FortniteAIServer.FortQueryTest_IsCloseToHotspotSlot
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_IsCloseToHotspotSlot
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* HotspotClass; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Radius[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t bIgnoreItemsWithSlotData; // 0x0238 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_IsCloseToHotspotSlot, HotspotClass) == 504, "Offset mismatch for UFortQueryTest_IsCloseToHotspotSlot::HotspotClass");
static_assert(offsetof(UFortQueryTest_IsCloseToHotspotSlot, Radius) == 512, "Offset mismatch for UFortQueryTest_IsCloseToHotspotSlot::Radius");
static_assert(offsetof(UFortQueryTest_IsCloseToHotspotSlot, bIgnoreItemsWithSlotData) == 568, "Offset mismatch for UFortQueryTest_IsCloseToHotspotSlot::bIgnoreItemsWithSlotData");

// /Script/FortniteAIServer.FortQueryTest_IsCloseToPatrolWard
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_IsCloseToPatrolWard
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t WardEffectTypeFilter; // 0x01F8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryTest_IsCloseToPatrolWard, WardEffectTypeFilter) == 504, "Offset mismatch for UFortQueryTest_IsCloseToPatrolWard::WardEffectTypeFilter");

// /Script/FortniteAIServer.FortQueryTest_IsGoalForAssignment
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_IsGoalForAssignment
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bRetrieveRootAssignmentFromOwner; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    std::uint8_t RootAssignmentID[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_IsGoalForAssignment, bRetrieveRootAssignmentFromOwner) == 504, "Offset mismatch for UFortQueryTest_IsGoalForAssignment::bRetrieveRootAssignmentFromOwner");
static_assert(offsetof(UFortQueryTest_IsGoalForAssignment, RootAssignmentID) == 512, "Offset mismatch for UFortQueryTest_IsGoalForAssignment::RootAssignmentID");

// /Script/FortniteAIServer.FortQueryTest_IsGoalHostile
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_IsGoalHostile
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t OwnerTagQuery[0x48]; // 0x0268 (Size: 0x48, Type: StructProperty)
    std::uint8_t EnemyPawnTagsToConsider[0x48]; // 0x02B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t BuildingTagsToConsider[0x20]; // 0x02F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bConsiderDefenders; // 0x0318 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_IsGoalHostile, OwnerTagQuery) == 616, "Offset mismatch for UFortQueryTest_IsGoalHostile::OwnerTagQuery");
static_assert(offsetof(UFortQueryTest_IsGoalHostile, EnemyPawnTagsToConsider) == 688, "Offset mismatch for UFortQueryTest_IsGoalHostile::EnemyPawnTagsToConsider");
static_assert(offsetof(UFortQueryTest_IsGoalHostile, BuildingTagsToConsider) == 760, "Offset mismatch for UFortQueryTest_IsGoalHostile::BuildingTagsToConsider");
static_assert(offsetof(UFortQueryTest_IsGoalHostile, bConsiderDefenders) == 792, "Offset mismatch for UFortQueryTest_IsGoalHostile::bConsiderDefenders");

// /Script/FortniteAIServer.FortQueryTest_IsInAnyPlayerVisionCone
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_IsInAnyPlayerVisionCone
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t MaxDistance[0x38]; // 0x01F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t FieldOfView[0x38]; // 0x0230 (Size: 0x38, Type: StructProperty)
    std::uint8_t UseLineOfSight[0x1]; // 0x0268 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_IsInAnyPlayerVisionCone, MaxDistance) == 504, "Offset mismatch for UFortQueryTest_IsInAnyPlayerVisionCone::MaxDistance");
static_assert(offsetof(UFortQueryTest_IsInAnyPlayerVisionCone, FieldOfView) == 560, "Offset mismatch for UFortQueryTest_IsInAnyPlayerVisionCone::FieldOfView");
static_assert(offsetof(UFortQueryTest_IsInAnyPlayerVisionCone, UseLineOfSight) == 616, "Offset mismatch for UFortQueryTest_IsInAnyPlayerVisionCone::UseLineOfSight");

// /Script/FortniteAIServer.FortQueryTest_IsInLeaderLOS
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_IsInLeaderLOS
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t OwnerTagQuery[0x48]; // 0x01F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t bRequireLOSRayCast; // 0x0240 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0241
    float RayCastLeaderVerticalOffset; // 0x0244 (Size: 0x4, Type: FloatProperty)
    float RayCastItemVerticalOffset; // 0x0248 (Size: 0x4, Type: FloatProperty)
    float MinDotProduct; // 0x024C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, OwnerTagQuery) == 504, "Offset mismatch for UFortQueryTest_IsInLeaderLOS::OwnerTagQuery");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, bRequireLOSRayCast) == 576, "Offset mismatch for UFortQueryTest_IsInLeaderLOS::bRequireLOSRayCast");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, RayCastLeaderVerticalOffset) == 580, "Offset mismatch for UFortQueryTest_IsInLeaderLOS::RayCastLeaderVerticalOffset");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, RayCastItemVerticalOffset) == 584, "Offset mismatch for UFortQueryTest_IsInLeaderLOS::RayCastItemVerticalOffset");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, MinDotProduct) == 588, "Offset mismatch for UFortQueryTest_IsInLeaderLOS::MinDotProduct");

// /Script/FortniteAIServer.FortQueryTest_IsNearEnemies
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_IsNearEnemies
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* QueryLocationContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    float ItemVerticalOffset; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float EnemyVerticalOffset; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float Weight_Distance; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float MinDist; // 0x020C (Size: 0x4, Type: FloatProperty)
    float MaxDist; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float Weight_LOS; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float MaxDistToConsiderLOS; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisallowDirectLOS; // 0x021C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x021D
    float DirectLOSFOV; // 0x0220 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreferTeamLocation; // 0x0224 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0225
    float Weight_TeamLocation; // 0x0228 (Size: 0x4, Type: FloatProperty)
    float MinSpawnDistFromTeammate; // 0x022C (Size: 0x4, Type: FloatProperty)
    float MaxDistForTeammateInfluenceSquared; // 0x0230 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreferQuerierLocation; // 0x0234 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0235
    float Weight_QuerierLocation; // 0x0238 (Size: 0x4, Type: FloatProperty)
    float MaxInfluenceDistFromQuerier; // 0x023C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortQueryTest_IsNearEnemies, QueryLocationContext) == 504, "Offset mismatch for UFortQueryTest_IsNearEnemies::QueryLocationContext");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, ItemVerticalOffset) == 512, "Offset mismatch for UFortQueryTest_IsNearEnemies::ItemVerticalOffset");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, EnemyVerticalOffset) == 516, "Offset mismatch for UFortQueryTest_IsNearEnemies::EnemyVerticalOffset");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, Weight_Distance) == 520, "Offset mismatch for UFortQueryTest_IsNearEnemies::Weight_Distance");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, MinDist) == 524, "Offset mismatch for UFortQueryTest_IsNearEnemies::MinDist");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, MaxDist) == 528, "Offset mismatch for UFortQueryTest_IsNearEnemies::MaxDist");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, Weight_LOS) == 532, "Offset mismatch for UFortQueryTest_IsNearEnemies::Weight_LOS");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, MaxDistToConsiderLOS) == 536, "Offset mismatch for UFortQueryTest_IsNearEnemies::MaxDistToConsiderLOS");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, bDisallowDirectLOS) == 540, "Offset mismatch for UFortQueryTest_IsNearEnemies::bDisallowDirectLOS");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, DirectLOSFOV) == 544, "Offset mismatch for UFortQueryTest_IsNearEnemies::DirectLOSFOV");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, bPreferTeamLocation) == 548, "Offset mismatch for UFortQueryTest_IsNearEnemies::bPreferTeamLocation");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, Weight_TeamLocation) == 552, "Offset mismatch for UFortQueryTest_IsNearEnemies::Weight_TeamLocation");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, MinSpawnDistFromTeammate) == 556, "Offset mismatch for UFortQueryTest_IsNearEnemies::MinSpawnDistFromTeammate");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, MaxDistForTeammateInfluenceSquared) == 560, "Offset mismatch for UFortQueryTest_IsNearEnemies::MaxDistForTeammateInfluenceSquared");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, bPreferQuerierLocation) == 564, "Offset mismatch for UFortQueryTest_IsNearEnemies::bPreferQuerierLocation");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, Weight_QuerierLocation) == 568, "Offset mismatch for UFortQueryTest_IsNearEnemies::Weight_QuerierLocation");
static_assert(offsetof(UFortQueryTest_IsNearEnemies, MaxInfluenceDistFromQuerier) == 572, "Offset mismatch for UFortQueryTest_IsNearEnemies::MaxInfluenceDistFromQuerier");

// /Script/FortniteAIServer.FortQueryTest_IsObstructed
// Kind: Class; super: EnvQueryTest_Trace
class UFortQueryTest_IsObstructed
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t OverrideContextLocationXWithItemLocationX[0x38]; // 0x02E0 (Size: 0x38, Type: StructProperty)
    std::uint8_t OverrideContextLocationYWithItemLocationY[0x38]; // 0x0318 (Size: 0x38, Type: StructProperty)
    std::uint8_t OverrideContextLocationZWithItemLocationZ[0x38]; // 0x0350 (Size: 0x38, Type: StructProperty)
    std::uint8_t OverrideItemLocationZWithContextLocationZ[0x1]; // 0x0388 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_IsObstructed, OverrideContextLocationXWithItemLocationX) == 736, "Offset mismatch for UFortQueryTest_IsObstructed::OverrideContextLocationXWithItemLocationX");
static_assert(offsetof(UFortQueryTest_IsObstructed, OverrideContextLocationYWithItemLocationY) == 792, "Offset mismatch for UFortQueryTest_IsObstructed::OverrideContextLocationYWithItemLocationY");
static_assert(offsetof(UFortQueryTest_IsObstructed, OverrideContextLocationZWithItemLocationZ) == 848, "Offset mismatch for UFortQueryTest_IsObstructed::OverrideContextLocationZWithItemLocationZ");
static_assert(offsetof(UFortQueryTest_IsObstructed, OverrideItemLocationZWithContextLocationZ) == 904, "Offset mismatch for UFortQueryTest_IsObstructed::OverrideItemLocationZWithContextLocationZ");

// /Script/FortniteAIServer.FortQueryTest_IsObstructedOverlap
// Kind: Class; super: EnvQueryTest_Trace
class UFortQueryTest_IsObstructedOverlap
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t OverrideContextLocationXWithItemLocationX[0x38]; // 0x02E0 (Size: 0x38, Type: StructProperty)
    std::uint8_t OverrideContextLocationYWithItemLocationY[0x38]; // 0x0318 (Size: 0x38, Type: StructProperty)
    std::uint8_t OverrideContextLocationZWithItemLocationZ[0x1]; // 0x0350 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_IsObstructedOverlap, OverrideContextLocationXWithItemLocationX) == 736, "Offset mismatch for UFortQueryTest_IsObstructedOverlap::OverrideContextLocationXWithItemLocationX");
static_assert(offsetof(UFortQueryTest_IsObstructedOverlap, OverrideContextLocationYWithItemLocationY) == 792, "Offset mismatch for UFortQueryTest_IsObstructedOverlap::OverrideContextLocationYWithItemLocationY");
static_assert(offsetof(UFortQueryTest_IsObstructedOverlap, OverrideContextLocationZWithItemLocationZ) == 848, "Offset mismatch for UFortQueryTest_IsObstructedOverlap::OverrideContextLocationZWithItemLocationZ");

// /Script/FortniteAIServer.FortQueryTest_LocationSynchronizer_IsLocationReserved
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_LocationSynchronizer_IsLocationReserved
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* ExtentsContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ShouldUseOwnersExtents[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t IsHardReservationCheck[0x38]; // 0x0238 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtentsScalingRatio[0x38]; // 0x0270 (Size: 0x38, Type: StructProperty)
    void* ReservationOwnersToIgnoreContext; // 0x02A8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IsLocationReserved, ExtentsContext) == 504, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IsLocationReserved::ExtentsContext");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IsLocationReserved, ShouldUseOwnersExtents) == 512, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IsLocationReserved::ShouldUseOwnersExtents");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IsLocationReserved, IsHardReservationCheck) == 568, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IsLocationReserved::IsHardReservationCheck");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IsLocationReserved, ExtentsScalingRatio) == 624, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IsLocationReserved::ExtentsScalingRatio");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IsLocationReserved, ReservationOwnersToIgnoreContext) == 680, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IsLocationReserved::ReservationOwnersToIgnoreContext");

// /Script/FortniteAIServer.FortQueryTest_LocationSynchronizer_IslocationPenalized
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_LocationSynchronizer_IslocationPenalized
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* ExtentsContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ShouldUseOwnersExtents[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtentsScalingRatio[0x38]; // 0x0238 (Size: 0x38, Type: StructProperty)
    void* ReservationOwnersRequiredContext; // 0x0270 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IslocationPenalized, ExtentsContext) == 504, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IslocationPenalized::ExtentsContext");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IslocationPenalized, ShouldUseOwnersExtents) == 512, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IslocationPenalized::ShouldUseOwnersExtents");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IslocationPenalized, ExtentsScalingRatio) == 568, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IslocationPenalized::ExtentsScalingRatio");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_IslocationPenalized, ReservationOwnersRequiredContext) == 624, "Offset mismatch for UFortQueryTest_LocationSynchronizer_IslocationPenalized::ReservationOwnersRequiredContext");

// /Script/FortniteAIServer.FortQueryTest_LocationSynchronizer_TimeLocationReserved
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_LocationSynchronizer_TimeLocationReserved
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* ExtentsContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ShouldUseOwnersExtents[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtentsScalingRatio[0x38]; // 0x0238 (Size: 0x38, Type: StructProperty)
    void* ReservationOwnersRequiredContext; // 0x0270 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NoReservationResult; // 0x0278 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationReserved, ExtentsContext) == 504, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationReserved::ExtentsContext");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationReserved, ShouldUseOwnersExtents) == 512, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationReserved::ShouldUseOwnersExtents");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationReserved, ExtentsScalingRatio) == 568, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationReserved::ExtentsScalingRatio");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationReserved, ReservationOwnersRequiredContext) == 624, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationReserved::ReservationOwnersRequiredContext");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationReserved, NoReservationResult) == 632, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationReserved::NoReservationResult");

// /Script/FortniteAIServer.FortQueryTest_LocationSynchronizer_TimeLocationUnreserved
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* ExtentsContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ShouldUseOwnersExtents[0x38]; // 0x0200 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtentsScalingRatio[0x38]; // 0x0238 (Size: 0x38, Type: StructProperty)
    void* ReservationOwnersRequiredContext; // 0x0270 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NoReservationResult; // 0x0278 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved, ExtentsContext) == 504, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved::ExtentsContext");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved, ShouldUseOwnersExtents) == 512, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved::ShouldUseOwnersExtents");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved, ExtentsScalingRatio) == 568, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved::ExtentsScalingRatio");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved, ReservationOwnersRequiredContext) == 624, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved::ReservationOwnersRequiredContext");
static_assert(offsetof(UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved, NoReservationResult) == 632, "Offset mismatch for UFortQueryTest_LocationSynchronizer_TimeLocationUnreserved::NoReservationResult");

// /Script/FortniteAIServer.FortQueryTest_MissionGameplayTagMatch
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_MissionGameplayTagMatch
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t MissionPlacementActorTagQuery[0x48]; // 0x01F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t GameplayTagsToMatch[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_MissionGameplayTagMatch, MissionPlacementActorTagQuery) == 504, "Offset mismatch for UFortQueryTest_MissionGameplayTagMatch::MissionPlacementActorTagQuery");
static_assert(offsetof(UFortQueryTest_MissionGameplayTagMatch, GameplayTagsToMatch) == 576, "Offset mismatch for UFortQueryTest_MissionGameplayTagMatch::GameplayTagsToMatch");

// /Script/FortniteAIServer.FortQueryTest_MissionSameMap
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_MissionSameMap
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t MissionPlacementActorTagQuery[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_MissionSameMap, MissionPlacementActorTagQuery) == 504, "Offset mismatch for UFortQueryTest_MissionSameMap::MissionPlacementActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_NavGraphDistance
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_NavGraphDistance
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* DistanceTo; // 0x01F8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_NavGraphDistance, DistanceTo) == 504, "Offset mismatch for UFortQueryTest_NavGraphDistance::DistanceTo");

// /Script/FortniteAIServer.FortQueryTest_NavmeshRaycast
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_NavmeshRaycast
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t ShouldRaycastToContext[0x38]; // 0x01F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t FilterOutDifferentFloors[0x38]; // 0x0230 (Size: 0x38, Type: StructProperty)
    void* RaycastContext; // 0x0268 (Size: 0x8, Type: ClassProperty)
    void* NavigationFilterOverride; // 0x0270 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_NavmeshRaycast, ShouldRaycastToContext) == 504, "Offset mismatch for UFortQueryTest_NavmeshRaycast::ShouldRaycastToContext");
static_assert(offsetof(UFortQueryTest_NavmeshRaycast, FilterOutDifferentFloors) == 560, "Offset mismatch for UFortQueryTest_NavmeshRaycast::FilterOutDifferentFloors");
static_assert(offsetof(UFortQueryTest_NavmeshRaycast, RaycastContext) == 616, "Offset mismatch for UFortQueryTest_NavmeshRaycast::RaycastContext");
static_assert(offsetof(UFortQueryTest_NavmeshRaycast, NavigationFilterOverride) == 624, "Offset mismatch for UFortQueryTest_NavmeshRaycast::NavigationFilterOverride");

// /Script/FortniteAIServer.FortQueryTest_OnFlatSurface
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_OnFlatSurface
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    float Radius; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float ToleranceZ; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float TraceOffsetUp; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float TraceOffsetDown; // 0x0204 (Size: 0x4, Type: FloatProperty)
    std::uint32_t NumberOfIteration; // 0x0208 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UFortQueryTest_OnFlatSurface, Radius) == 504, "Offset mismatch for UFortQueryTest_OnFlatSurface::Radius");
static_assert(offsetof(UFortQueryTest_OnFlatSurface, ToleranceZ) == 508, "Offset mismatch for UFortQueryTest_OnFlatSurface::ToleranceZ");
static_assert(offsetof(UFortQueryTest_OnFlatSurface, TraceOffsetUp) == 512, "Offset mismatch for UFortQueryTest_OnFlatSurface::TraceOffsetUp");
static_assert(offsetof(UFortQueryTest_OnFlatSurface, TraceOffsetDown) == 516, "Offset mismatch for UFortQueryTest_OnFlatSurface::TraceOffsetDown");
static_assert(offsetof(UFortQueryTest_OnFlatSurface, NumberOfIteration) == 520, "Offset mismatch for UFortQueryTest_OnFlatSurface::NumberOfIteration");

// /Script/FortniteAIServer.FortQueryTest_OnFlatSurfaceNoNavMesh
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_OnFlatSurfaceNoNavMesh
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    float Radius; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float ZTolerance; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float NormalTolerance; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float TraceOffset; // 0x0204 (Size: 0x4, Type: FloatProperty)
    TArray<void*> ActorClassesToIgnoreInTrace; // 0x0208 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, Radius) == 504, "Offset mismatch for UFortQueryTest_OnFlatSurfaceNoNavMesh::Radius");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, ZTolerance) == 508, "Offset mismatch for UFortQueryTest_OnFlatSurfaceNoNavMesh::ZTolerance");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, NormalTolerance) == 512, "Offset mismatch for UFortQueryTest_OnFlatSurfaceNoNavMesh::NormalTolerance");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, TraceOffset) == 516, "Offset mismatch for UFortQueryTest_OnFlatSurfaceNoNavMesh::TraceOffset");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, ActorClassesToIgnoreInTrace) == 520, "Offset mismatch for UFortQueryTest_OnFlatSurfaceNoNavMesh::ActorClassesToIgnoreInTrace");

// /Script/FortniteAIServer.FortQueryTest_PathfindingBatch
// Kind: Class; super: EnvQueryTest_PathfindingBatch
class UFortQueryTest_PathfindingBatch
{
public:
    std::uint8_t Pad_0000[0x2C0]; // 0x0000
    std::uint8_t NavFilterTag[0x1]; // 0x02C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_PathfindingBatch, NavFilterTag) == 704, "Offset mismatch for UFortQueryTest_PathfindingBatch::NavFilterTag");

// /Script/FortniteAIServer.FortQueryTest_PawnHealth
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_PawnHealth
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t bUsePercentHealth; // 0x0268 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_PawnHealth, bUsePercentHealth) == 616, "Offset mismatch for UFortQueryTest_PawnHealth::bUsePercentHealth");

// /Script/FortniteAIServer.FortQueryTest_PawnIsDBNO
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_PawnIsDBNO
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bScoreEncounterGoals; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bScoreEnemies (shared storage)
    // 0x01F8 BoolProperty bScoreSpecificAssignments (shared storage)
    // 0x01F8 BoolProperty bScoreWorldGoals (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    TArray<void*> AssignmentIDs; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProhibitedAssignmentIDs; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GoalActorTagQuery[0x1]; // 0x0220 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_PawnIsDBNO, bScoreEncounterGoals) == 504, "Offset mismatch for UFortQueryTest_PawnIsDBNO::bScoreEncounterGoals");
static_assert(offsetof(UFortQueryTest_PawnIsDBNO, AssignmentIDs) == 512, "Offset mismatch for UFortQueryTest_PawnIsDBNO::AssignmentIDs");
static_assert(offsetof(UFortQueryTest_PawnIsDBNO, ProhibitedAssignmentIDs) == 528, "Offset mismatch for UFortQueryTest_PawnIsDBNO::ProhibitedAssignmentIDs");
static_assert(offsetof(UFortQueryTest_PawnIsDBNO, GoalActorTagQuery) == 544, "Offset mismatch for UFortQueryTest_PawnIsDBNO::GoalActorTagQuery");

// /Script/FortniteAIServer.FortQueryTest_PerceptionAge
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_PerceptionAge
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t Sense; // 0x01F8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    void* SenseClass; // 0x0200 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_PerceptionAge, Sense) == 504, "Offset mismatch for UFortQueryTest_PerceptionAge::Sense");
static_assert(offsetof(UFortQueryTest_PerceptionAge, SenseClass) == 512, "Offset mismatch for UFortQueryTest_PerceptionAge::SenseClass");

// /Script/FortniteAIServer.FortQueryTest_PerceptionAll
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_PerceptionAll
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t SenseScores[0x150]; // 0x0268 (Size: 0x150, Type: StructProperty)
    TMap<void*, void*> AdditionalSenseScores; // 0x03B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t MinSenseAge[0x38]; // 0x03C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxSenseAge[0x1]; // 0x0400 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_PerceptionAll, SenseScores) == 616, "Offset mismatch for UFortQueryTest_PerceptionAll::SenseScores");
static_assert(offsetof(UFortQueryTest_PerceptionAll, AdditionalSenseScores) == 952, "Offset mismatch for UFortQueryTest_PerceptionAll::AdditionalSenseScores");
static_assert(offsetof(UFortQueryTest_PerceptionAll, MinSenseAge) == 968, "Offset mismatch for UFortQueryTest_PerceptionAll::MinSenseAge");
static_assert(offsetof(UFortQueryTest_PerceptionAll, MaxSenseAge) == 1024, "Offset mismatch for UFortQueryTest_PerceptionAll::MaxSenseAge");

// /Script/FortniteAIServer.FortQueryTest_PerceptionExists
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_PerceptionExists
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t Sense; // 0x01F8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    void* SenseClass; // 0x0200 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_PerceptionExists, Sense) == 504, "Offset mismatch for UFortQueryTest_PerceptionExists::Sense");
static_assert(offsetof(UFortQueryTest_PerceptionExists, SenseClass) == 512, "Offset mismatch for UFortQueryTest_PerceptionExists::SenseClass");

// /Script/FortniteAIServer.FortQueryTest_PickupDropper
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_PickupDropper
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t ValueConverterDroppedPickup[0x38]; // 0x0268 (Size: 0x38, Type: StructProperty)
    std::uint8_t ValueOtherDroppedPickupInitial[0x38]; // 0x02A0 (Size: 0x38, Type: StructProperty)
    std::uint8_t ValueOtherDroppedPickupFinal[0x38]; // 0x02D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t TimeOtherDroppedPickupFinal[0x38]; // 0x0310 (Size: 0x38, Type: StructProperty)
    std::uint8_t LerpFromInitialToFinal[0x1]; // 0x0348 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_PickupDropper, ValueConverterDroppedPickup) == 616, "Offset mismatch for UFortQueryTest_PickupDropper::ValueConverterDroppedPickup");
static_assert(offsetof(UFortQueryTest_PickupDropper, ValueOtherDroppedPickupInitial) == 672, "Offset mismatch for UFortQueryTest_PickupDropper::ValueOtherDroppedPickupInitial");
static_assert(offsetof(UFortQueryTest_PickupDropper, ValueOtherDroppedPickupFinal) == 728, "Offset mismatch for UFortQueryTest_PickupDropper::ValueOtherDroppedPickupFinal");
static_assert(offsetof(UFortQueryTest_PickupDropper, TimeOtherDroppedPickupFinal) == 784, "Offset mismatch for UFortQueryTest_PickupDropper::TimeOtherDroppedPickupFinal");
static_assert(offsetof(UFortQueryTest_PickupDropper, LerpFromInitialToFinal) == 840, "Offset mismatch for UFortQueryTest_PickupDropper::LerpFromInitialToFinal");

// /Script/FortniteAIServer.FortQueryTest_PointInBuildingFoundation
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_PointInBuildingFoundation
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* BuildingFoundationContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    void* BuildingFoundationClass; // 0x0200 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BoundingBoxScale[0x1]; // 0x0208 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_PointInBuildingFoundation, BuildingFoundationContext) == 504, "Offset mismatch for UFortQueryTest_PointInBuildingFoundation::BuildingFoundationContext");
static_assert(offsetof(UFortQueryTest_PointInBuildingFoundation, BuildingFoundationClass) == 512, "Offset mismatch for UFortQueryTest_PointInBuildingFoundation::BuildingFoundationClass");
static_assert(offsetof(UFortQueryTest_PointInBuildingFoundation, BoundingBoxScale) == 520, "Offset mismatch for UFortQueryTest_PointInBuildingFoundation::BoundingBoxScale");

// /Script/FortniteAIServer.FortQueryTest_PrimaryAssignment
// Kind: Class; super: FortQueryTest_GoalBase
class UFortQueryTest_PrimaryAssignment
{
public:
    std::uint8_t Pad_0000[0x268]; // 0x0000
    std::uint8_t bUseItemActorLocation; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0269
    std::uint8_t DistanceClose[0x38]; // 0x0270 (Size: 0x38, Type: StructProperty)
    std::uint8_t DistanceFar[0x38]; // 0x02A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t PercentValueClose[0x38]; // 0x02E0 (Size: 0x38, Type: StructProperty)
    std::uint8_t PercentValueRegular[0x38]; // 0x0318 (Size: 0x38, Type: StructProperty)
    std::uint8_t PercentValueFar[0x1]; // 0x0350 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortQueryTest_PrimaryAssignment, bUseItemActorLocation) == 616, "Offset mismatch for UFortQueryTest_PrimaryAssignment::bUseItemActorLocation");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, DistanceClose) == 624, "Offset mismatch for UFortQueryTest_PrimaryAssignment::DistanceClose");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, DistanceFar) == 680, "Offset mismatch for UFortQueryTest_PrimaryAssignment::DistanceFar");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, PercentValueClose) == 736, "Offset mismatch for UFortQueryTest_PrimaryAssignment::PercentValueClose");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, PercentValueRegular) == 792, "Offset mismatch for UFortQueryTest_PrimaryAssignment::PercentValueRegular");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, PercentValueFar) == 848, "Offset mismatch for UFortQueryTest_PrimaryAssignment::PercentValueFar");

// /Script/FortniteAIServer.FortQueryTest_ProjectOnNavMesh
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_ProjectOnNavMesh
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, TestOrder) == 48, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::TestOrder");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, TestPurpose) == 52, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::TestPurpose");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, TestComment) == 56, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::TestComment");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, MultipleContextFilterOp) == 72, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::MultipleContextFilterOp");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, MultipleContextScoreOp) == 73, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::MultipleContextScoreOp");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, FilterType) == 74, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::FilterType");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, BoolValue) == 80, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::BoolValue");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, FloatValueMin) == 136, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::FloatValueMin");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, FloatValueMax) == 192, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::FloatValueMax");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, ScoringEquation) == 249, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::ScoringEquation");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, ClampMinType) == 250, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::ClampMinType");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, ClampMaxType) == 251, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::ClampMaxType");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, NormalizationType) == 252, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::NormalizationType");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, ScoreClampMin) == 256, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::ScoreClampMin");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, ScoreClampMax) == 312, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::ScoreClampMax");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, ScoringFactor) == 368, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::ScoringFactor");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, ReferenceValue) == 424, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::ReferenceValue");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, bDefineReferenceValue) == 480, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::bDefineReferenceValue");
static_assert(offsetof(UFortQueryTest_ProjectOnNavMesh, bWorkOnFloatValues) == 496, "Offset mismatch for UFortQueryTest_ProjectOnNavMesh::bWorkOnFloatValues");

// /Script/FortniteAIServer.FortQueryTest_Random
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_Random
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bUseRandomSeedForAI; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    // 0x01F8 BoolProperty bUseRandomSeedForOthers (shared storage)
};

static_assert(offsetof(UFortQueryTest_Random, bUseRandomSeedForAI) == 504, "Offset mismatch for UFortQueryTest_Random::bUseRandomSeedForAI");

// /Script/FortniteAIServer.FortQueryTest_TowardNextAthenaSafeZone
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_TowardNextAthenaSafeZone
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t SafeZoneIndex[0x38]; // 0x01F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bCheckAcceptanceAngleTowardNextCenter; // 0x0230 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0231
    float AcceptanceAngleTowardNextCenter; // 0x0234 (Size: 0x4, Type: FloatProperty)
    TArray<void*> ExclusionSafeZoneIndex; // 0x0238 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQueryTest_TowardNextAthenaSafeZone, SafeZoneIndex) == 504, "Offset mismatch for UFortQueryTest_TowardNextAthenaSafeZone::SafeZoneIndex");
static_assert(offsetof(UFortQueryTest_TowardNextAthenaSafeZone, bCheckAcceptanceAngleTowardNextCenter) == 560, "Offset mismatch for UFortQueryTest_TowardNextAthenaSafeZone::bCheckAcceptanceAngleTowardNextCenter");
static_assert(offsetof(UFortQueryTest_TowardNextAthenaSafeZone, AcceptanceAngleTowardNextCenter) == 564, "Offset mismatch for UFortQueryTest_TowardNextAthenaSafeZone::AcceptanceAngleTowardNextCenter");
static_assert(offsetof(UFortQueryTest_TowardNextAthenaSafeZone, ExclusionSafeZoneIndex) == 568, "Offset mismatch for UFortQueryTest_TowardNextAthenaSafeZone::ExclusionSafeZoneIndex");

// /Script/FortniteAIServer.FortQueryTest_ValidSurface
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_ValidSurface
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t Radius[0x38]; // 0x01F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t TraceOffsetUp[0x38]; // 0x0230 (Size: 0x38, Type: StructProperty)
    std::uint8_t TraceOffsetDown[0x38]; // 0x0268 (Size: 0x38, Type: StructProperty)
    std::uint8_t TraceCollisionChannel; // 0x02A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02A1
    std::uint8_t FlatSurfaceToleranceZ[0x38]; // 0x02A8 (Size: 0x38, Type: StructProperty)
    TArray<void*> SurfaceMaterials; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAreSurfaceMaterialsValid; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02F1
    TArray<void*> ValidHitActorClasses; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InvalidHitActorClasses; // 0x0308 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQueryTest_ValidSurface, Radius) == 504, "Offset mismatch for UFortQueryTest_ValidSurface::Radius");
static_assert(offsetof(UFortQueryTest_ValidSurface, TraceOffsetUp) == 560, "Offset mismatch for UFortQueryTest_ValidSurface::TraceOffsetUp");
static_assert(offsetof(UFortQueryTest_ValidSurface, TraceOffsetDown) == 616, "Offset mismatch for UFortQueryTest_ValidSurface::TraceOffsetDown");
static_assert(offsetof(UFortQueryTest_ValidSurface, TraceCollisionChannel) == 672, "Offset mismatch for UFortQueryTest_ValidSurface::TraceCollisionChannel");
static_assert(offsetof(UFortQueryTest_ValidSurface, FlatSurfaceToleranceZ) == 680, "Offset mismatch for UFortQueryTest_ValidSurface::FlatSurfaceToleranceZ");
static_assert(offsetof(UFortQueryTest_ValidSurface, SurfaceMaterials) == 736, "Offset mismatch for UFortQueryTest_ValidSurface::SurfaceMaterials");
static_assert(offsetof(UFortQueryTest_ValidSurface, bAreSurfaceMaterialsValid) == 752, "Offset mismatch for UFortQueryTest_ValidSurface::bAreSurfaceMaterialsValid");
static_assert(offsetof(UFortQueryTest_ValidSurface, ValidHitActorClasses) == 760, "Offset mismatch for UFortQueryTest_ValidSurface::ValidHitActorClasses");
static_assert(offsetof(UFortQueryTest_ValidSurface, InvalidHitActorClasses) == 776, "Offset mismatch for UFortQueryTest_ValidSurface::InvalidHitActorClasses");

// /Script/FortniteAIServer.FortQueryTest_VerticalAngle
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_VerticalAngle
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* AngleTo; // 0x01F8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortQueryTest_VerticalAngle, AngleTo) == 504, "Offset mismatch for UFortQueryTest_VerticalAngle::AngleTo");

// /Script/FortniteAIServer.FortQueryTest_WithinHotfixVolumeBounds
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_WithinHotfixVolumeBounds
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* BoundsTable; // 0x01F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BoundsExtentBuffer[0x18]; // 0x0200 (Size: 0x18, Type: StructProperty)
    std::uint8_t bXYOnly; // 0x0218 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_WithinHotfixVolumeBounds, BoundsTable) == 504, "Offset mismatch for UFortQueryTest_WithinHotfixVolumeBounds::BoundsTable");
static_assert(offsetof(UFortQueryTest_WithinHotfixVolumeBounds, BoundsExtentBuffer) == 512, "Offset mismatch for UFortQueryTest_WithinHotfixVolumeBounds::BoundsExtentBuffer");
static_assert(offsetof(UFortQueryTest_WithinHotfixVolumeBounds, bXYOnly) == 536, "Offset mismatch for UFortQueryTest_WithinHotfixVolumeBounds::bXYOnly");

// /Script/FortniteAIServer.FortQueryTest_WithinTaggedArea
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_WithinTaggedArea
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t TagQuery[0x48]; // 0x01F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t AreaExtentBuffer[0x18]; // 0x0240 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAssumeInfiniteHeightForArea; // 0x0258 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_WithinTaggedArea, TagQuery) == 504, "Offset mismatch for UFortQueryTest_WithinTaggedArea::TagQuery");
static_assert(offsetof(UFortQueryTest_WithinTaggedArea, AreaExtentBuffer) == 576, "Offset mismatch for UFortQueryTest_WithinTaggedArea::AreaExtentBuffer");
static_assert(offsetof(UFortQueryTest_WithinTaggedArea, bAssumeInfiniteHeightForArea) == 600, "Offset mismatch for UFortQueryTest_WithinTaggedArea::bAssumeInfiniteHeightForArea");

// /Script/FortniteAIServer.FortStateTreeConditionSchema
// Kind: Class; super: WorldConditionSchema
class UFortStateTreeConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortStateTreeConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UFortStateTreeConditionSchema::ContextDataDescs");

// /Script/FortniteAIServer.FortStateTreeTeamMembersWatcherTaskInstanceData
// Kind: Class; super: Object
class UFortStateTreeTeamMembersWatcherTaskInstanceData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Pawn; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIncludeSelf; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t OnTeamModified[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    std::uint8_t OnTeamIndexChanged[0x10]; // 0x0044 (Size: 0x10, Type: StructProperty)
    std::uint8_t OnTeamMemberAdded[0x10]; // 0x0054 (Size: 0x10, Type: StructProperty)
    std::uint8_t OnTeamMemberRemoved[0x14]; // 0x0064 (Size: 0x14, Type: StructProperty)
    TArray<void*> TeamMemberPlayerStates; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TeamMemberPlayerControllers; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    void* PlayerState; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, Pawn) == 40, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::Pawn");
static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, bIncludeSelf) == 48, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::bIncludeSelf");
static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, OnTeamModified) == 52, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::OnTeamModified");
static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, OnTeamIndexChanged) == 68, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::OnTeamIndexChanged");
static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, OnTeamMemberAdded) == 84, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::OnTeamMemberAdded");
static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, OnTeamMemberRemoved) == 100, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::OnTeamMemberRemoved");
static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, TeamMemberPlayerStates) == 120, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::TeamMemberPlayerStates");
static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, TeamMemberPlayerControllers) == 136, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::TeamMemberPlayerControllers");
static_assert(offsetof(UFortStateTreeTeamMembersWatcherTaskInstanceData, PlayerState) == 152, "Offset mismatch for UFortStateTreeTeamMembersWatcherTaskInstanceData::PlayerState");

// /Script/FortniteAIServer.FortTokenGenerator_TokenHintPositions
// Kind: Class; super: EnvQueryGenerator
class UFortTokenGenerator_TokenHintPositions
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* Center; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MaximumDistanceProvider[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    std::uint8_t HintPositionVerticalOffsetProvider[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t RequiredTagQuery[0x48]; // 0x00C8 (Size: 0x48, Type: StructProperty)
    std::uint8_t MaximumDistance[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t HintPositionVerticalOffset[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTokenGenerator_TokenHintPositions, Center) == 80, "Offset mismatch for UFortTokenGenerator_TokenHintPositions::Center");
static_assert(offsetof(UFortTokenGenerator_TokenHintPositions, MaximumDistanceProvider) == 88, "Offset mismatch for UFortTokenGenerator_TokenHintPositions::MaximumDistanceProvider");
static_assert(offsetof(UFortTokenGenerator_TokenHintPositions, HintPositionVerticalOffsetProvider) == 144, "Offset mismatch for UFortTokenGenerator_TokenHintPositions::HintPositionVerticalOffsetProvider");
static_assert(offsetof(UFortTokenGenerator_TokenHintPositions, RequiredTagQuery) == 200, "Offset mismatch for UFortTokenGenerator_TokenHintPositions::RequiredTagQuery");
static_assert(offsetof(UFortTokenGenerator_TokenHintPositions, MaximumDistance) == 272, "Offset mismatch for UFortTokenGenerator_TokenHintPositions::MaximumDistance");
static_assert(offsetof(UFortTokenGenerator_TokenHintPositions, HintPositionVerticalOffset) == 312, "Offset mismatch for UFortTokenGenerator_TokenHintPositions::HintPositionVerticalOffset");

// /Script/FortniteAIServer.PFWNPCReactions_Container
// Kind: Class; super: PersistenceFrameworkContainer
class UPFWNPCReactions_Container
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreVersionInfo[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t SupportedVersionsTable[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint64_t RestoreAttemptCount; // 0x0078 (Size: 0x8, Type: UInt64Property)
    std::uint64_t SaveAttemptCount; // 0x0080 (Size: 0x8, Type: UInt64Property)
    std::uint64_t DeleteAttemptCount; // 0x0088 (Size: 0x8, Type: UInt64Property)
    void* ServiceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BackendRequestsQueue; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    FName PersistentClassName; // 0x00A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PersistentName[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    FString Description; // 0x00D8 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* DeinitProcess; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPFWNPCReactions_Container, GameplayTagContainer) == 40, "Offset mismatch for UPFWNPCReactions_Container::GameplayTagContainer");
static_assert(offsetof(UPFWNPCReactions_Container, RestoreVersionInfo) == 72, "Offset mismatch for UPFWNPCReactions_Container::RestoreVersionInfo");
static_assert(offsetof(UPFWNPCReactions_Container, SupportedVersionsTable) == 88, "Offset mismatch for UPFWNPCReactions_Container::SupportedVersionsTable");
static_assert(offsetof(UPFWNPCReactions_Container, RestoreAttemptCount) == 120, "Offset mismatch for UPFWNPCReactions_Container::RestoreAttemptCount");
static_assert(offsetof(UPFWNPCReactions_Container, SaveAttemptCount) == 128, "Offset mismatch for UPFWNPCReactions_Container::SaveAttemptCount");
static_assert(offsetof(UPFWNPCReactions_Container, DeleteAttemptCount) == 136, "Offset mismatch for UPFWNPCReactions_Container::DeleteAttemptCount");
static_assert(offsetof(UPFWNPCReactions_Container, ServiceData) == 144, "Offset mismatch for UPFWNPCReactions_Container::ServiceData");
static_assert(offsetof(UPFWNPCReactions_Container, BackendRequestsQueue) == 152, "Offset mismatch for UPFWNPCReactions_Container::BackendRequestsQueue");
static_assert(offsetof(UPFWNPCReactions_Container, PersistentClassName) == 160, "Offset mismatch for UPFWNPCReactions_Container::PersistentClassName");
static_assert(offsetof(UPFWNPCReactions_Container, PersistentName) == 168, "Offset mismatch for UPFWNPCReactions_Container::PersistentName");
static_assert(offsetof(UPFWNPCReactions_Container, Description) == 216, "Offset mismatch for UPFWNPCReactions_Container::Description");
static_assert(offsetof(UPFWNPCReactions_Container, MakeReadyForPersistenceProcess) == 232, "Offset mismatch for UPFWNPCReactions_Container::MakeReadyForPersistenceProcess");
static_assert(offsetof(UPFWNPCReactions_Container, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 240, "Offset mismatch for UPFWNPCReactions_Container::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UPFWNPCReactions_Container, DeinitProcess) == 248, "Offset mismatch for UPFWNPCReactions_Container::DeinitProcess");

// /Script/FortniteAIServer.PFWNPCReactions_FilteredListContainer
// Kind: Class; super: PersistenceFrameworkFilteredListContainer
class UPFWNPCReactions_FilteredListContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteAIServer.PFWNPCReactions_Module
// Kind: Class; super: PersistenceFrameworkModule
class UPFWNPCReactions_Module
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPFWNPCReactions_Module, GameplayTagContainer) == 40, "Offset mismatch for UPFWNPCReactions_Module::GameplayTagContainer");
static_assert(offsetof(UPFWNPCReactions_Module, Containers) == 72, "Offset mismatch for UPFWNPCReactions_Module::Containers");
static_assert(offsetof(UPFWNPCReactions_Module, ServiceData) == 88, "Offset mismatch for UPFWNPCReactions_Module::ServiceData");
static_assert(offsetof(UPFWNPCReactions_Module, PersistentName) == 96, "Offset mismatch for UPFWNPCReactions_Module::PersistentName");
static_assert(offsetof(UPFWNPCReactions_Module, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UPFWNPCReactions_Module::MakeReadyForPersistenceProcess");
static_assert(offsetof(UPFWNPCReactions_Module, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UPFWNPCReactions_Module::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UPFWNPCReactions_Module, DeinitProcess) == 128, "Offset mismatch for UPFWNPCReactions_Module::DeinitProcess");
static_assert(offsetof(UPFWNPCReactions_Module, Description) == 136, "Offset mismatch for UPFWNPCReactions_Module::Description");

// /Script/FortniteAIServer.PFWNPCReactions_Trigger
// Kind: Class; super: PersistenceFrameworkSaveTrigger_Manual
class UPFWNPCReactions_Trigger
{
public:
    std::uint8_t Opaque[1];
};
