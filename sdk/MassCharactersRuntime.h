/**
 * decamp dumper generated SDK
 * Package: /Script/MassCharactersRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MassCharactersRuntime.MassCharacterAnimSyncDesc
// Kind: ScriptStruct; super: none
struct FMassCharacterAnimSyncDesc
{
public:
    void* AnimSequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float Position; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassCharacterAnimSyncDesc, AnimSequence) == 0, "Offset mismatch for FMassCharacterAnimSyncDesc::AnimSequence");
static_assert(offsetof(FMassCharacterAnimSyncDesc, Position) == 8, "Offset mismatch for FMassCharacterAnimSyncDesc::Position");

// /Script/MassCharactersRuntime.MassCharacterAnimSyncParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassCharacterAnimSyncParameters
{
public:
    TMap<void*, void*> AnimSequenceToIndexOverrides; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMassCharacterAnimSyncParameters, AnimSequenceToIndexOverrides) == 0, "Offset mismatch for FMassCharacterAnimSyncParameters::AnimSequenceToIndexOverrides");

// /Script/MassCharactersRuntime.MassCharacterAnimationCondition
// Kind: ScriptStruct; super: none
struct FMassCharacterAnimationCondition
{
public:
    std::uint8_t Conditions[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnimationIndex; // 0x0028 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMassCharacterAnimationCondition, Conditions) == 0, "Offset mismatch for FMassCharacterAnimationCondition::Conditions");
static_assert(offsetof(FMassCharacterAnimationCondition, AnimationIndex) == 40, "Offset mismatch for FMassCharacterAnimationCondition::AnimationIndex");

// /Script/MassCharactersRuntime.MassCharacterBlendSpaceSyncDesc
// Kind: ScriptStruct; super: none
struct FMassCharacterBlendSpaceSyncDesc
{
public:
    std::uint8_t LayerIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* BlendSpace; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendPosition[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    float Position; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassCharacterBlendSpaceSyncDesc, LayerIndex) == 0, "Offset mismatch for FMassCharacterBlendSpaceSyncDesc::LayerIndex");
static_assert(offsetof(FMassCharacterBlendSpaceSyncDesc, BlendSpace) == 8, "Offset mismatch for FMassCharacterBlendSpaceSyncDesc::BlendSpace");
static_assert(offsetof(FMassCharacterBlendSpaceSyncDesc, BlendPosition) == 16, "Offset mismatch for FMassCharacterBlendSpaceSyncDesc::BlendPosition");
static_assert(offsetof(FMassCharacterBlendSpaceSyncDesc, Position) == 24, "Offset mismatch for FMassCharacterBlendSpaceSyncDesc::Position");

// /Script/MassCharactersRuntime.MassCharacterClientBubbleSerializer
// Kind: ScriptStruct; super: MassClientBubbleSerializerBase
struct FMassCharacterClientBubbleSerializer
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> CharacterItems; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassCharacterClientBubbleSerializer, CharacterItems) == 168, "Offset mismatch for FMassCharacterClientBubbleSerializer::CharacterItems");

// /Script/MassCharactersRuntime.MassCharacterClientConfig
// Kind: ScriptStruct; super: none
struct FMassCharacterClientConfig
{
public:
    std::int32_t MinPawnsPerClient; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPawnsPerClient; // 0x0004 (Size: 0x4, Type: IntProperty)
    float MinReplicatedTimeSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t ProximityReplicateCount; // 0x000C (Size: 0x4, Type: IntProperty)
    float ProximityReplicateDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOptedIn; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SetFieldsMask; // 0x0015 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMassCharacterClientConfig, MinPawnsPerClient) == 0, "Offset mismatch for FMassCharacterClientConfig::MinPawnsPerClient");
static_assert(offsetof(FMassCharacterClientConfig, MaxPawnsPerClient) == 4, "Offset mismatch for FMassCharacterClientConfig::MaxPawnsPerClient");
static_assert(offsetof(FMassCharacterClientConfig, MinReplicatedTimeSeconds) == 8, "Offset mismatch for FMassCharacterClientConfig::MinReplicatedTimeSeconds");
static_assert(offsetof(FMassCharacterClientConfig, ProximityReplicateCount) == 12, "Offset mismatch for FMassCharacterClientConfig::ProximityReplicateCount");
static_assert(offsetof(FMassCharacterClientConfig, ProximityReplicateDistance) == 16, "Offset mismatch for FMassCharacterClientConfig::ProximityReplicateDistance");
static_assert(offsetof(FMassCharacterClientConfig, bOptedIn) == 20, "Offset mismatch for FMassCharacterClientConfig::bOptedIn");
static_assert(offsetof(FMassCharacterClientConfig, SetFieldsMask) == 21, "Offset mismatch for FMassCharacterClientConfig::SetFieldsMask");

// /Script/MassCharactersRuntime.MassCharacterClientConfigBindings
// Kind: ScriptStruct; super: none
struct FMassCharacterClientConfigBindings
{
public:
    std::uint8_t CVarPrefix[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bHasCVarPrefix; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t MinPawnsPerClientRange[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaxPawnsPerClientRange[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t MinReplicatedTimeSecondsRange[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t ProximityReplicateCountRange[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t ProximityReplicateDistanceRange[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassCharacterClientConfigBindings, CVarPrefix) == 0, "Offset mismatch for FMassCharacterClientConfigBindings::CVarPrefix");
static_assert(offsetof(FMassCharacterClientConfigBindings, bHasCVarPrefix) == 4, "Offset mismatch for FMassCharacterClientConfigBindings::bHasCVarPrefix");
static_assert(offsetof(FMassCharacterClientConfigBindings, MinPawnsPerClientRange) == 8, "Offset mismatch for FMassCharacterClientConfigBindings::MinPawnsPerClientRange");
static_assert(offsetof(FMassCharacterClientConfigBindings, MaxPawnsPerClientRange) == 16, "Offset mismatch for FMassCharacterClientConfigBindings::MaxPawnsPerClientRange");
static_assert(offsetof(FMassCharacterClientConfigBindings, MinReplicatedTimeSecondsRange) == 24, "Offset mismatch for FMassCharacterClientConfigBindings::MinReplicatedTimeSecondsRange");
static_assert(offsetof(FMassCharacterClientConfigBindings, ProximityReplicateCountRange) == 32, "Offset mismatch for FMassCharacterClientConfigBindings::ProximityReplicateCountRange");
static_assert(offsetof(FMassCharacterClientConfigBindings, ProximityReplicateDistanceRange) == 40, "Offset mismatch for FMassCharacterClientConfigBindings::ProximityReplicateDistanceRange");

// /Script/MassCharactersRuntime.MassCharacterDebugVisualizationParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassCharacterDebugVisualizationParameters
{
public:
    std::uint8_t BoxSize[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassCharacterDebugVisualizationParameters, BoxSize) == 0, "Offset mismatch for FMassCharacterDebugVisualizationParameters::BoxSize");

// /Script/MassCharactersRuntime.MassCharacterFastArrayItem
// Kind: ScriptStruct; super: MassFastArrayItemBase
struct FMassCharacterFastArrayItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Agent[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassCharacterFastArrayItem, Agent) == 16, "Offset mismatch for FMassCharacterFastArrayItem::Agent");

// /Script/MassCharactersRuntime.MassCharacterInstancedAnimationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassCharacterInstancedAnimationFragment
{
public:
    std::uint8_t AnimationIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> BlendSpaceLayers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ManualLayers; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassCharacterInstancedAnimationFragment, AnimationIndex) == 0, "Offset mismatch for FMassCharacterInstancedAnimationFragment::AnimationIndex");
static_assert(offsetof(FMassCharacterInstancedAnimationFragment, BlendSpaceLayers) == 8, "Offset mismatch for FMassCharacterInstancedAnimationFragment::BlendSpaceLayers");
static_assert(offsetof(FMassCharacterInstancedAnimationFragment, ManualLayers) == 24, "Offset mismatch for FMassCharacterInstancedAnimationFragment::ManualLayers");

// /Script/MassCharactersRuntime.MassCharacterInstancedAnimationParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassCharacterInstancedAnimationParameters
{
public:
    TWeakObjectPtr<void> AnimationSelectorObject; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMassCharacterInstancedAnimationParameters, AnimationSelectorObject) == 0, "Offset mismatch for FMassCharacterInstancedAnimationParameters::AnimationSelectorObject");

// /Script/MassCharactersRuntime.MassCharacterInstancedVisualizationParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassCharacterInstancedVisualizationParameters
{
public:
    TWeakObjectPtr<void> VisualizationLookupObject; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float TimeToInterpolateTowardPawnSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t LocalVisualizationTransform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassCharacterInstancedVisualizationParameters, VisualizationLookupObject) == 0, "Offset mismatch for FMassCharacterInstancedVisualizationParameters::VisualizationLookupObject");
static_assert(offsetof(FMassCharacterInstancedVisualizationParameters, TimeToInterpolateTowardPawnSeconds) == 8, "Offset mismatch for FMassCharacterInstancedVisualizationParameters::TimeToInterpolateTowardPawnSeconds");
static_assert(offsetof(FMassCharacterInstancedVisualizationParameters, LocalVisualizationTransform) == 16, "Offset mismatch for FMassCharacterInstancedVisualizationParameters::LocalVisualizationTransform");

// /Script/MassCharactersRuntime.MassCharacterInterpolationParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassCharacterInterpolationParameters
{
public:
    float ExtrapolatedPositionLerpSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ChaseSpeedMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RotationLerpSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOrientTowardMovement; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassCharacterInterpolationParameters, ExtrapolatedPositionLerpSpeed) == 0, "Offset mismatch for FMassCharacterInterpolationParameters::ExtrapolatedPositionLerpSpeed");
static_assert(offsetof(FMassCharacterInterpolationParameters, ChaseSpeedMultiplier) == 4, "Offset mismatch for FMassCharacterInterpolationParameters::ChaseSpeedMultiplier");
static_assert(offsetof(FMassCharacterInterpolationParameters, RotationLerpSpeed) == 8, "Offset mismatch for FMassCharacterInterpolationParameters::RotationLerpSpeed");
static_assert(offsetof(FMassCharacterInterpolationParameters, bOrientTowardMovement) == 12, "Offset mismatch for FMassCharacterInterpolationParameters::bOrientTowardMovement");

// /Script/MassCharactersRuntime.MassCharacterManualSyncDesc
// Kind: ScriptStruct; super: none
struct FMassCharacterManualSyncDesc
{
public:
    std::uint8_t LayerIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* AnimSequence; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float Position; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassCharacterManualSyncDesc, LayerIndex) == 0, "Offset mismatch for FMassCharacterManualSyncDesc::LayerIndex");
static_assert(offsetof(FMassCharacterManualSyncDesc, AnimSequence) == 8, "Offset mismatch for FMassCharacterManualSyncDesc::AnimSequence");
static_assert(offsetof(FMassCharacterManualSyncDesc, Position) == 16, "Offset mismatch for FMassCharacterManualSyncDesc::Position");

// /Script/MassCharactersRuntime.MassCharacterPawnReplicationFilterFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassCharacterPawnReplicationFilterFragment
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float EntitySignificance; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassCharacterPawnReplicationFilterFragment, EntitySignificance) == 40, "Offset mismatch for FMassCharacterPawnReplicationFilterFragment::EntitySignificance");

// /Script/MassCharactersRuntime.MassCharacterPawnReplicationFilterSharedFragment
// Kind: ScriptStruct; super: MassSharedFragment
struct FMassCharacterPawnReplicationFilterSharedFragment
{
public:
    std::uint32_t MinPawnsPerClient; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t MaxPawnsPerClient; // 0x0004 (Size: 0x4, Type: UInt32Property)
    float MinReplicatedTimeSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint32_t ProximityReplicateCount; // 0x000C (Size: 0x4, Type: UInt32Property)
    float ProximityReplicateDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> SignificanceCalculator; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMassCharacterPawnReplicationFilterSharedFragment, MinPawnsPerClient) == 0, "Offset mismatch for FMassCharacterPawnReplicationFilterSharedFragment::MinPawnsPerClient");
static_assert(offsetof(FMassCharacterPawnReplicationFilterSharedFragment, MaxPawnsPerClient) == 4, "Offset mismatch for FMassCharacterPawnReplicationFilterSharedFragment::MaxPawnsPerClient");
static_assert(offsetof(FMassCharacterPawnReplicationFilterSharedFragment, MinReplicatedTimeSeconds) == 8, "Offset mismatch for FMassCharacterPawnReplicationFilterSharedFragment::MinReplicatedTimeSeconds");
static_assert(offsetof(FMassCharacterPawnReplicationFilterSharedFragment, ProximityReplicateCount) == 12, "Offset mismatch for FMassCharacterPawnReplicationFilterSharedFragment::ProximityReplicateCount");
static_assert(offsetof(FMassCharacterPawnReplicationFilterSharedFragment, ProximityReplicateDistance) == 16, "Offset mismatch for FMassCharacterPawnReplicationFilterSharedFragment::ProximityReplicateDistance");
static_assert(offsetof(FMassCharacterPawnReplicationFilterSharedFragment, SignificanceCalculator) == 20, "Offset mismatch for FMassCharacterPawnReplicationFilterSharedFragment::SignificanceCalculator");

// /Script/MassCharactersRuntime.MassCharacterReplicatedTransformFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassCharacterReplicatedTransformFragment
{
public:
    std::uint8_t ReplicatedLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExtrapolatedLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetInterpolatedLocation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float LastMoveSpeed; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x004C
    std::uint8_t CurrentInterpolatedTransform[0x60]; // 0x0050 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalVelocity[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    float ReplicatedYaw; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassCharacterReplicatedTransformFragment, ReplicatedLocation) == 0, "Offset mismatch for FMassCharacterReplicatedTransformFragment::ReplicatedLocation");
static_assert(offsetof(FMassCharacterReplicatedTransformFragment, ExtrapolatedLocation) == 24, "Offset mismatch for FMassCharacterReplicatedTransformFragment::ExtrapolatedLocation");
static_assert(offsetof(FMassCharacterReplicatedTransformFragment, TargetInterpolatedLocation) == 48, "Offset mismatch for FMassCharacterReplicatedTransformFragment::TargetInterpolatedLocation");
static_assert(offsetof(FMassCharacterReplicatedTransformFragment, LastMoveSpeed) == 72, "Offset mismatch for FMassCharacterReplicatedTransformFragment::LastMoveSpeed");
static_assert(offsetof(FMassCharacterReplicatedTransformFragment, CurrentInterpolatedTransform) == 80, "Offset mismatch for FMassCharacterReplicatedTransformFragment::CurrentInterpolatedTransform");
static_assert(offsetof(FMassCharacterReplicatedTransformFragment, LocalVelocity) == 176, "Offset mismatch for FMassCharacterReplicatedTransformFragment::LocalVelocity");
static_assert(offsetof(FMassCharacterReplicatedTransformFragment, ReplicatedYaw) == 200, "Offset mismatch for FMassCharacterReplicatedTransformFragment::ReplicatedYaw");

// /Script/MassCharactersRuntime.MassCharacterVisualizationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassCharacterVisualizationFragment
{
public:
    std::uint8_t VisualizationData[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t VisualizationHandle[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassCharacterVisualizationFragment, VisualizationData) == 0, "Offset mismatch for FMassCharacterVisualizationFragment::VisualizationData");
static_assert(offsetof(FMassCharacterVisualizationFragment, VisualizationHandle) == 8, "Offset mismatch for FMassCharacterVisualizationFragment::VisualizationHandle");

// /Script/MassCharactersRuntime.MassCharacterVisualizationKey
// Kind: ScriptStruct; super: none
struct FMassCharacterVisualizationKey
{
public:
    void* KeyData; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassCharacterVisualizationKey, KeyData) == 0, "Offset mismatch for FMassCharacterVisualizationKey::KeyData");

// /Script/MassCharactersRuntime.MassWorldConditionIsMoving
// Kind: ScriptStruct; super: WorldConditionMassPawnBase
struct FMassWorldConditionIsMoving
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    float SpeedThreshold; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassWorldConditionIsMoving, SpeedThreshold) == 24, "Offset mismatch for FMassWorldConditionIsMoving::SpeedThreshold");

// /Script/MassCharactersRuntime.ReplicatedCharacterAgent
// Kind: ScriptStruct; super: ReplicatedAgentBase
struct FReplicatedCharacterAgent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CompressedCharacter[0x38]; // 0x0028 (Size: 0x38, Type: StructProperty)
    std::uint8_t InstancedAnimation[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    std::uint8_t Visualization[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedCharacterAgent, CompressedCharacter) == 40, "Offset mismatch for FReplicatedCharacterAgent::CompressedCharacter");
static_assert(offsetof(FReplicatedCharacterAgent, InstancedAnimation) == 96, "Offset mismatch for FReplicatedCharacterAgent::InstancedAnimation");
static_assert(offsetof(FReplicatedCharacterAgent, Visualization) == 136, "Offset mismatch for FReplicatedCharacterAgent::Visualization");

// /Script/MassCharactersRuntime.ReplicatedCompressedCharacterData
// Kind: ScriptStruct; super: none
struct FReplicatedCompressedCharacterData
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation; // 0x0018 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t VelocityTimes100[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedCompressedCharacterData, Location) == 0, "Offset mismatch for FReplicatedCompressedCharacterData::Location");
static_assert(offsetof(FReplicatedCompressedCharacterData, Rotation) == 24, "Offset mismatch for FReplicatedCompressedCharacterData::Rotation");
static_assert(offsetof(FReplicatedCompressedCharacterData, VelocityTimes100) == 32, "Offset mismatch for FReplicatedCompressedCharacterData::VelocityTimes100");

// /Script/MassCharactersRuntime.ReplicatedInstancedAnimationData
// Kind: ScriptStruct; super: none
struct FReplicatedInstancedAnimationData
{
public:
    std::uint8_t AnimationIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> ReplicatedBlendSpaceData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReplicatedManualData; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FReplicatedInstancedAnimationData, AnimationIndex) == 0, "Offset mismatch for FReplicatedInstancedAnimationData::AnimationIndex");
static_assert(offsetof(FReplicatedInstancedAnimationData, ReplicatedBlendSpaceData) == 8, "Offset mismatch for FReplicatedInstancedAnimationData::ReplicatedBlendSpaceData");
static_assert(offsetof(FReplicatedInstancedAnimationData, ReplicatedManualData) == 24, "Offset mismatch for FReplicatedInstancedAnimationData::ReplicatedManualData");

// /Script/MassCharactersRuntime.ReplicatedVisualizationData
// Kind: ScriptStruct; super: none
struct FReplicatedVisualizationData
{
public:
    std::uint8_t VisualizationData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedVisualizationData, VisualizationData) == 0, "Offset mismatch for FReplicatedVisualizationData::VisualizationData");

// /Script/MassCharactersRuntime.WorldConditionMassPawnBase
// Kind: ScriptStruct; super: WorldConditionBase
struct FWorldConditionMassPawnBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PawnRef[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWorldConditionMassPawnBase, PawnRef) == 16, "Offset mismatch for FWorldConditionMassPawnBase::PawnRef");

// /Script/MassCharactersRuntime.GameFeatureAction_MassCharactersSetup
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_MassCharactersSetup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PawnClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t EntityConfigAsset[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PlayerControllerClass[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PawnComponentClass[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> ClientConfigComponentClass; // 0x00A8 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UGameFeatureAction_MassCharactersSetup, PawnClass) == 40, "Offset mismatch for UGameFeatureAction_MassCharactersSetup::PawnClass");
static_assert(offsetof(UGameFeatureAction_MassCharactersSetup, EntityConfigAsset) == 72, "Offset mismatch for UGameFeatureAction_MassCharactersSetup::EntityConfigAsset");
static_assert(offsetof(UGameFeatureAction_MassCharactersSetup, PlayerControllerClass) == 104, "Offset mismatch for UGameFeatureAction_MassCharactersSetup::PlayerControllerClass");
static_assert(offsetof(UGameFeatureAction_MassCharactersSetup, PawnComponentClass) == 136, "Offset mismatch for UGameFeatureAction_MassCharactersSetup::PawnComponentClass");
static_assert(offsetof(UGameFeatureAction_MassCharactersSetup, ClientConfigComponentClass) == 168, "Offset mismatch for UGameFeatureAction_MassCharactersSetup::ClientConfigComponentClass");

// /Script/MassCharactersRuntime.MassCharacterActorAnimSyncProcessor
// Kind: Class; super: MassProcessor
class UMassCharacterActorAnimSyncProcessor
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

static_assert(offsetof(UMassCharacterActorAnimSyncProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterActorAnimSyncProcessor::ExecutionOrder");
static_assert(offsetof(UMassCharacterActorAnimSyncProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterActorAnimSyncProcessor::ProcessingPhase");
static_assert(offsetof(UMassCharacterActorAnimSyncProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterActorAnimSyncProcessor::ExecutionFlags");
static_assert(offsetof(UMassCharacterActorAnimSyncProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterActorAnimSyncProcessor::bAggregateRequirements");
static_assert(offsetof(UMassCharacterActorAnimSyncProcessor, ActivationState) == 83, "Offset mismatch for UMassCharacterActorAnimSyncProcessor::ActivationState");
static_assert(offsetof(UMassCharacterActorAnimSyncProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterActorAnimSyncProcessor::ExecutionPriority");

// /Script/MassCharactersRuntime.MassCharacterAnimSyncInterface
// Kind: Class; super: Interface
class UMassCharacterAnimSyncInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharactersRuntime.MassCharacterAnimSyncTrait
// Kind: Class; super: MassEntityTraitBase
class UMassCharacterAnimSyncTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> AnimSequenceToIndexOverrides; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMassCharacterAnimSyncTrait, AnimSequenceToIndexOverrides) == 48, "Offset mismatch for UMassCharacterAnimSyncTrait::AnimSequenceToIndexOverrides");

// /Script/MassCharactersRuntime.MassCharacterAnimationHandler
// Kind: Class; super: Object
class UMassCharacterAnimationHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharactersRuntime.MassCharacterAnimationWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UMassCharacterAnimationWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassCharacterAnimationWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UMassCharacterAnimationWorldConditionSchema::ContextDataDescs");

// /Script/MassCharactersRuntime.MassCharacterClientBubbleInfo
// Kind: Class; super: MassClientBubbleInfoBase
class UMassCharacterClientBubbleInfo
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    std::uint8_t CharacterSerializer[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassCharacterClientBubbleInfo, CharacterSerializer) == 648, "Offset mismatch for UMassCharacterClientBubbleInfo::CharacterSerializer");

// /Script/MassCharactersRuntime.MassCharacterClientConfigComponent
// Kind: Class; super: ActorComponent
class UMassCharacterClientConfigComponent
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

static_assert(offsetof(UMassCharacterClientConfigComponent, PrimaryComponentTick) == 56, "Offset mismatch for UMassCharacterClientConfigComponent::PrimaryComponentTick");
static_assert(offsetof(UMassCharacterClientConfigComponent, ComponentTags) == 104, "Offset mismatch for UMassCharacterClientConfigComponent::ComponentTags");
static_assert(offsetof(UMassCharacterClientConfigComponent, AssetUserData) == 120, "Offset mismatch for UMassCharacterClientConfigComponent::AssetUserData");
static_assert(offsetof(UMassCharacterClientConfigComponent, UCSSerializationIndex) == 144, "Offset mismatch for UMassCharacterClientConfigComponent::UCSSerializationIndex");
static_assert(offsetof(UMassCharacterClientConfigComponent, bNetAddressable) == 152, "Offset mismatch for UMassCharacterClientConfigComponent::bNetAddressable");
static_assert(offsetof(UMassCharacterClientConfigComponent, bAutoActivate) == 154, "Offset mismatch for UMassCharacterClientConfigComponent::bAutoActivate");
static_assert(offsetof(UMassCharacterClientConfigComponent, bIsEditorOnly) == 155, "Offset mismatch for UMassCharacterClientConfigComponent::bIsEditorOnly");
static_assert(offsetof(UMassCharacterClientConfigComponent, CreationMethod) == 185, "Offset mismatch for UMassCharacterClientConfigComponent::CreationMethod");
static_assert(offsetof(UMassCharacterClientConfigComponent, OnComponentActivated) == 186, "Offset mismatch for UMassCharacterClientConfigComponent::OnComponentActivated");
static_assert(offsetof(UMassCharacterClientConfigComponent, OnComponentDeactivated) == 187, "Offset mismatch for UMassCharacterClientConfigComponent::OnComponentDeactivated");

// /Script/MassCharactersRuntime.MassCharacterComponent
// Kind: Class; super: ActorComponent
class UMassCharacterComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* EntityConfigAsset; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x38]; // 0x00C8
    std::uint8_t NetID[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassCharacterComponent, EntityConfigAsset) == 192, "Offset mismatch for UMassCharacterComponent::EntityConfigAsset");
static_assert(offsetof(UMassCharacterComponent, NetID) == 256, "Offset mismatch for UMassCharacterComponent::NetID");

// /Script/MassCharactersRuntime.MassCharacterDebugVisualizationProcessor
// Kind: Class; super: MassProcessor
class UMassCharacterDebugVisualizationProcessor
{
public:
    std::uint8_t Pad_0000[0x710]; // 0x0000
    void* DebugLineBatcher; // 0x0710 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassCharacterDebugVisualizationProcessor, DebugLineBatcher) == 1808, "Offset mismatch for UMassCharacterDebugVisualizationProcessor::DebugLineBatcher");

// /Script/MassCharactersRuntime.MassCharacterDebugVisualizationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassCharacterDebugVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t BoxSize[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassCharacterDebugVisualizationTrait, BoxSize) == 48, "Offset mismatch for UMassCharacterDebugVisualizationTrait::BoxSize");

// /Script/MassCharactersRuntime.MassCharacterGridFilter
// Kind: Class; super: NetObjectGridWorldLocFilter
class UMassCharacterGridFilter
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    void* ReplicationSystem; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* CharacterSubsystem; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassCharacterGridFilter, ReplicationSystem) == 376, "Offset mismatch for UMassCharacterGridFilter::ReplicationSystem");
static_assert(offsetof(UMassCharacterGridFilter, CharacterSubsystem) == 384, "Offset mismatch for UMassCharacterGridFilter::CharacterSubsystem");

// /Script/MassCharactersRuntime.MassCharacterISKMDataAsset
// Kind: Class; super: PrimaryDataAsset
class UMassCharacterISKMDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TransformProvider; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* SkinnedAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t LocalVisualizationTransform[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassCharacterISKMDataAsset, TransformProvider) == 40, "Offset mismatch for UMassCharacterISKMDataAsset::TransformProvider");
static_assert(offsetof(UMassCharacterISKMDataAsset, SkinnedAsset) == 48, "Offset mismatch for UMassCharacterISKMDataAsset::SkinnedAsset");
static_assert(offsetof(UMassCharacterISKMDataAsset, LocalVisualizationTransform) == 64, "Offset mismatch for UMassCharacterISKMDataAsset::LocalVisualizationTransform");

// /Script/MassCharactersRuntime.MassCharacterInstanceProcessor
// Kind: Class; super: MassProcessor
class UMassCharacterInstanceProcessor
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

static_assert(offsetof(UMassCharacterInstanceProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterInstanceProcessor::ExecutionOrder");
static_assert(offsetof(UMassCharacterInstanceProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterInstanceProcessor::ProcessingPhase");
static_assert(offsetof(UMassCharacterInstanceProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterInstanceProcessor::ExecutionFlags");
static_assert(offsetof(UMassCharacterInstanceProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterInstanceProcessor::bAggregateRequirements");
static_assert(offsetof(UMassCharacterInstanceProcessor, ActivationState) == 83, "Offset mismatch for UMassCharacterInstanceProcessor::ActivationState");
static_assert(offsetof(UMassCharacterInstanceProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterInstanceProcessor::ExecutionPriority");

// /Script/MassCharactersRuntime.MassCharacterInstancedAnimationCalculatorProcessor
// Kind: Class; super: MassProcessor
class UMassCharacterInstancedAnimationCalculatorProcessor
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

static_assert(offsetof(UMassCharacterInstancedAnimationCalculatorProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterInstancedAnimationCalculatorProcessor::ExecutionOrder");
static_assert(offsetof(UMassCharacterInstancedAnimationCalculatorProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterInstancedAnimationCalculatorProcessor::ProcessingPhase");
static_assert(offsetof(UMassCharacterInstancedAnimationCalculatorProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterInstancedAnimationCalculatorProcessor::ExecutionFlags");
static_assert(offsetof(UMassCharacterInstancedAnimationCalculatorProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterInstancedAnimationCalculatorProcessor::bAggregateRequirements");
static_assert(offsetof(UMassCharacterInstancedAnimationCalculatorProcessor, ActivationState) == 83, "Offset mismatch for UMassCharacterInstancedAnimationCalculatorProcessor::ActivationState");
static_assert(offsetof(UMassCharacterInstancedAnimationCalculatorProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterInstancedAnimationCalculatorProcessor::ExecutionPriority");

// /Script/MassCharactersRuntime.MassCharacterInstancedAnimationProcessor
// Kind: Class; super: MassProcessor
class UMassCharacterInstancedAnimationProcessor
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

static_assert(offsetof(UMassCharacterInstancedAnimationProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterInstancedAnimationProcessor::ExecutionOrder");
static_assert(offsetof(UMassCharacterInstancedAnimationProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterInstancedAnimationProcessor::ProcessingPhase");
static_assert(offsetof(UMassCharacterInstancedAnimationProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterInstancedAnimationProcessor::ExecutionFlags");
static_assert(offsetof(UMassCharacterInstancedAnimationProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterInstancedAnimationProcessor::bAggregateRequirements");
static_assert(offsetof(UMassCharacterInstancedAnimationProcessor, ActivationState) == 83, "Offset mismatch for UMassCharacterInstancedAnimationProcessor::ActivationState");
static_assert(offsetof(UMassCharacterInstancedAnimationProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterInstancedAnimationProcessor::ExecutionPriority");

// /Script/MassCharactersRuntime.MassCharacterInstancedAnimationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassCharacterInstancedAnimationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* AnimationSelectorClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMassCharacterInstancedAnimationTrait, AnimationSelectorClass) == 48, "Offset mismatch for UMassCharacterInstancedAnimationTrait::AnimationSelectorClass");

// /Script/MassCharactersRuntime.MassCharacterInterpolationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassCharacterInterpolationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float ExtrapolatedPositionLerpSpeed; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float ChaseSpeedMultiplier; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float RotationLerpSpeed; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOrientTowardMovement; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassCharacterInterpolationTrait, ExtrapolatedPositionLerpSpeed) == 48, "Offset mismatch for UMassCharacterInterpolationTrait::ExtrapolatedPositionLerpSpeed");
static_assert(offsetof(UMassCharacterInterpolationTrait, ChaseSpeedMultiplier) == 52, "Offset mismatch for UMassCharacterInterpolationTrait::ChaseSpeedMultiplier");
static_assert(offsetof(UMassCharacterInterpolationTrait, RotationLerpSpeed) == 56, "Offset mismatch for UMassCharacterInterpolationTrait::RotationLerpSpeed");
static_assert(offsetof(UMassCharacterInterpolationTrait, bOrientTowardMovement) == 60, "Offset mismatch for UMassCharacterInterpolationTrait::bOrientTowardMovement");

// /Script/MassCharactersRuntime.MassCharacterPawnReplicationFilterProcessor
// Kind: Class; super: MassProcessor
class UMassCharacterPawnReplicationFilterProcessor
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

static_assert(offsetof(UMassCharacterPawnReplicationFilterProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterPawnReplicationFilterProcessor::ExecutionOrder");
static_assert(offsetof(UMassCharacterPawnReplicationFilterProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterPawnReplicationFilterProcessor::ProcessingPhase");
static_assert(offsetof(UMassCharacterPawnReplicationFilterProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterPawnReplicationFilterProcessor::ExecutionFlags");
static_assert(offsetof(UMassCharacterPawnReplicationFilterProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterPawnReplicationFilterProcessor::bAggregateRequirements");
static_assert(offsetof(UMassCharacterPawnReplicationFilterProcessor, ActivationState) == 83, "Offset mismatch for UMassCharacterPawnReplicationFilterProcessor::ActivationState");
static_assert(offsetof(UMassCharacterPawnReplicationFilterProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterPawnReplicationFilterProcessor::ExecutionPriority");

// /Script/MassCharactersRuntime.MassCharacterReplicationDestructionObserver
// Kind: Class; super: MassObserverProcessor
class UMassCharacterReplicationDestructionObserver
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassCharacterReplicationDestructionObserver, ObservedType) == 256, "Offset mismatch for UMassCharacterReplicationDestructionObserver::ObservedType");
static_assert(offsetof(UMassCharacterReplicationDestructionObserver, ObservedTypes) == 264, "Offset mismatch for UMassCharacterReplicationDestructionObserver::ObservedTypes");
static_assert(offsetof(UMassCharacterReplicationDestructionObserver, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassCharacterReplicationDestructionObserver::bAutoRegisterWithObserverRegistry");

// /Script/MassCharactersRuntime.MassCharacterReplicator
// Kind: Class; super: MassReplicatorBase
class UMassCharacterReplicator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharactersRuntime.MassCharacterSelectivePawnReplicationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassCharacterSelectivePawnReplicationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint32_t MinPawnsPerClient; // 0x0030 (Size: 0x4, Type: UInt32Property)
    std::uint32_t MaxPawnsPerClient; // 0x0034 (Size: 0x4, Type: UInt32Property)
    float MinReplicatedTimeSeconds; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint32_t ProximityReplicateCount; // 0x003C (Size: 0x4, Type: UInt32Property)
    float ProximityReplicateDistance; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    void* SignificanceCalculator; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRequiresClientOptIn; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0051
    std::uint8_t ConfigBindings[0x1]; // 0x0054 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassCharacterSelectivePawnReplicationTrait, MinPawnsPerClient) == 48, "Offset mismatch for UMassCharacterSelectivePawnReplicationTrait::MinPawnsPerClient");
static_assert(offsetof(UMassCharacterSelectivePawnReplicationTrait, MaxPawnsPerClient) == 52, "Offset mismatch for UMassCharacterSelectivePawnReplicationTrait::MaxPawnsPerClient");
static_assert(offsetof(UMassCharacterSelectivePawnReplicationTrait, MinReplicatedTimeSeconds) == 56, "Offset mismatch for UMassCharacterSelectivePawnReplicationTrait::MinReplicatedTimeSeconds");
static_assert(offsetof(UMassCharacterSelectivePawnReplicationTrait, ProximityReplicateCount) == 60, "Offset mismatch for UMassCharacterSelectivePawnReplicationTrait::ProximityReplicateCount");
static_assert(offsetof(UMassCharacterSelectivePawnReplicationTrait, ProximityReplicateDistance) == 64, "Offset mismatch for UMassCharacterSelectivePawnReplicationTrait::ProximityReplicateDistance");
static_assert(offsetof(UMassCharacterSelectivePawnReplicationTrait, SignificanceCalculator) == 72, "Offset mismatch for UMassCharacterSelectivePawnReplicationTrait::SignificanceCalculator");
static_assert(offsetof(UMassCharacterSelectivePawnReplicationTrait, bRequiresClientOptIn) == 80, "Offset mismatch for UMassCharacterSelectivePawnReplicationTrait::bRequiresClientOptIn");
static_assert(offsetof(UMassCharacterSelectivePawnReplicationTrait, ConfigBindings) == 84, "Offset mismatch for UMassCharacterSelectivePawnReplicationTrait::ConfigBindings");

// /Script/MassCharactersRuntime.MassCharacterSettings
// Kind: Class; super: MassModuleSettings
class UMassCharacterSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CharacterEntityConfigsToRegister; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassCharacterSettings, CharacterEntityConfigsToRegister) == 40, "Offset mismatch for UMassCharacterSettings::CharacterEntityConfigsToRegister");

// /Script/MassCharactersRuntime.MassCharacterSignificanceDistanceAndLookDirectionHandler
// Kind: Class; super: MassCharacterSignificanceHandler
class UMassCharacterSignificanceDistanceAndLookDirectionHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bConsiderDistance; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float InnerRelevancyDistance; // 0x002C (Size: 0x4, Type: FloatProperty)
    float OuterRelevancyDistance; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bConsiderLookDirection; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    float InnerRelevancyAngle; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float OuterRelevancyAngle; // 0x003C (Size: 0x4, Type: FloatProperty)
    float AngularExtentScale; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float BaseAngleWeight; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMassCharacterSignificanceDistanceAndLookDirectionHandler, bConsiderDistance) == 40, "Offset mismatch for UMassCharacterSignificanceDistanceAndLookDirectionHandler::bConsiderDistance");
static_assert(offsetof(UMassCharacterSignificanceDistanceAndLookDirectionHandler, InnerRelevancyDistance) == 44, "Offset mismatch for UMassCharacterSignificanceDistanceAndLookDirectionHandler::InnerRelevancyDistance");
static_assert(offsetof(UMassCharacterSignificanceDistanceAndLookDirectionHandler, OuterRelevancyDistance) == 48, "Offset mismatch for UMassCharacterSignificanceDistanceAndLookDirectionHandler::OuterRelevancyDistance");
static_assert(offsetof(UMassCharacterSignificanceDistanceAndLookDirectionHandler, bConsiderLookDirection) == 52, "Offset mismatch for UMassCharacterSignificanceDistanceAndLookDirectionHandler::bConsiderLookDirection");
static_assert(offsetof(UMassCharacterSignificanceDistanceAndLookDirectionHandler, InnerRelevancyAngle) == 56, "Offset mismatch for UMassCharacterSignificanceDistanceAndLookDirectionHandler::InnerRelevancyAngle");
static_assert(offsetof(UMassCharacterSignificanceDistanceAndLookDirectionHandler, OuterRelevancyAngle) == 60, "Offset mismatch for UMassCharacterSignificanceDistanceAndLookDirectionHandler::OuterRelevancyAngle");
static_assert(offsetof(UMassCharacterSignificanceDistanceAndLookDirectionHandler, AngularExtentScale) == 64, "Offset mismatch for UMassCharacterSignificanceDistanceAndLookDirectionHandler::AngularExtentScale");
static_assert(offsetof(UMassCharacterSignificanceDistanceAndLookDirectionHandler, BaseAngleWeight) == 68, "Offset mismatch for UMassCharacterSignificanceDistanceAndLookDirectionHandler::BaseAngleWeight");

// /Script/MassCharactersRuntime.MassCharacterSignificanceHandler
// Kind: Class; super: Object
class UMassCharacterSignificanceHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharactersRuntime.MassCharacterSmoothReplicationTransformProcessor
// Kind: Class; super: MassProcessor
class UMassCharacterSmoothReplicationTransformProcessor
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

static_assert(offsetof(UMassCharacterSmoothReplicationTransformProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterSmoothReplicationTransformProcessor::ExecutionOrder");
static_assert(offsetof(UMassCharacterSmoothReplicationTransformProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterSmoothReplicationTransformProcessor::ProcessingPhase");
static_assert(offsetof(UMassCharacterSmoothReplicationTransformProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterSmoothReplicationTransformProcessor::ExecutionFlags");
static_assert(offsetof(UMassCharacterSmoothReplicationTransformProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterSmoothReplicationTransformProcessor::bAggregateRequirements");
static_assert(offsetof(UMassCharacterSmoothReplicationTransformProcessor, ActivationState) == 83, "Offset mismatch for UMassCharacterSmoothReplicationTransformProcessor::ActivationState");
static_assert(offsetof(UMassCharacterSmoothReplicationTransformProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterSmoothReplicationTransformProcessor::ExecutionPriority");

// /Script/MassCharactersRuntime.MassCharacterSubsystem
// Kind: Class; super: MassRepresentationSubsystem
class UMassCharacterSubsystem
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* SpawnerSystem; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* SimulationSystem; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassCharacterSubsystem, SpawnerSystem) == 224, "Offset mismatch for UMassCharacterSubsystem::SpawnerSystem");
static_assert(offsetof(UMassCharacterSubsystem, SimulationSystem) == 232, "Offset mismatch for UMassCharacterSubsystem::SimulationSystem");

// /Script/MassCharactersRuntime.MassCharacterVisualizationHandler
// Kind: Class; super: Object
class UMassCharacterVisualizationHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharactersRuntime.MassCharacterVisualizationHandler_BP
// Kind: Class; super: MassCharacterVisualizationHandler
class UMassCharacterVisualizationHandler_BP
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharactersRuntime.MassCharacterVisualizationHandler_ISKM
// Kind: Class; super: MassCharacterVisualizationHandler
class UMassCharacterVisualizationHandler_ISKM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharactersRuntime.MassCharacterVisualizationHandler_VAT
// Kind: Class; super: MassCharacterVisualizationHandler
class UMassCharacterVisualizationHandler_VAT
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharactersRuntime.MassCharacterVisualizationInstanceRemover
// Kind: Class; super: MassObserverProcessor
class UMassCharacterVisualizationInstanceRemover
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassCharacterVisualizationInstanceRemover, ObservedType) == 256, "Offset mismatch for UMassCharacterVisualizationInstanceRemover::ObservedType");
static_assert(offsetof(UMassCharacterVisualizationInstanceRemover, ObservedTypes) == 264, "Offset mismatch for UMassCharacterVisualizationInstanceRemover::ObservedTypes");
static_assert(offsetof(UMassCharacterVisualizationInstanceRemover, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassCharacterVisualizationInstanceRemover::bAutoRegisterWithObserverRegistry");

// /Script/MassCharactersRuntime.MassCharacterVisualizationTrait
// Kind: Class; super: MassVisualizationTrait
class UMassCharacterVisualizationTrait
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    void* VisualizationLookupClass; // 0x01F0 (Size: 0x8, Type: ClassProperty)
    float TimeToInterpolateTowardPawnSeconds; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01FC
    std::uint8_t LocalVisualizationTransform[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassCharacterVisualizationTrait, VisualizationLookupClass) == 496, "Offset mismatch for UMassCharacterVisualizationTrait::VisualizationLookupClass");
static_assert(offsetof(UMassCharacterVisualizationTrait, TimeToInterpolateTowardPawnSeconds) == 504, "Offset mismatch for UMassCharacterVisualizationTrait::TimeToInterpolateTowardPawnSeconds");
static_assert(offsetof(UMassCharacterVisualizationTrait, LocalVisualizationTransform) == 512, "Offset mismatch for UMassCharacterVisualizationTrait::LocalVisualizationTransform");

// /Script/MassCharactersRuntime.MassCharacterWorldConditionAnimationHandler
// Kind: Class; super: MassCharacterAnimationHandler
class UMassCharacterWorldConditionAnimationHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AnimationConditions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassCharacterWorldConditionAnimationHandler, AnimationConditions) == 40, "Offset mismatch for UMassCharacterWorldConditionAnimationHandler::AnimationConditions");

// /Script/MassCharactersRuntime.MassCharactersRepresentationActorManagement
// Kind: Class; super: MassRepresentationActorManagement
class UMassCharactersRepresentationActorManagement
{
public:
    std::uint8_t Opaque[1];
};
