/**
 * decamp dumper generated SDK
 * Package: /Script/PhysicsControl
 */
#pragma once
#include "Basic.h"

// /Script/PhysicsControl.AnimNode_RigidBodyWithControl
// Kind: ScriptStruct; super: AnimNode_SkeletalControlBase
struct FAnimNode_RigidBodyWithControl
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* OverridePhysicsAsset; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDefaultToSkeletalMeshPhysicsAsset; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x137]; // 0x00D1
    std::uint8_t OverrideWorldGravity[0x18]; // 0x0208 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExternalForce[0x18]; // 0x0220 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentLinearAccScale[0x18]; // 0x0238 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentLinearVelScale[0x18]; // 0x0250 (Size: 0x18, Type: StructProperty)
    std::uint8_t ComponentAppliedLinearAccClamp[0x18]; // 0x0268 (Size: 0x18, Type: StructProperty)
    std::uint8_t SimSpaceSettings[0x68]; // 0x0280 (Size: 0x68, Type: StructProperty)
    float CachedBoundsScale; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUpdateCacheEveryFrame; // 0x02EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02ED
    std::uint8_t BaseBoneRef[0xC]; // 0x02F0 (Size: 0xC, Type: StructProperty)
    std::uint8_t OverlapChannel; // 0x02FC (Size: 0x1, Type: ByteProperty)
    std::uint8_t SimulationSpace; // 0x02FD (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCalculateVelocitiesForWorldGeometry; // 0x02FE (Size: 0x1, Type: BoolProperty)
    // 0x02FE BoolProperty bForceDisableCollisionBetweenConstraintBodies (shared storage)
    // 0x02FE BoolProperty bMakeKinematicConstraints (shared storage)
    // 0x02FE BoolProperty bUseExternalClothCollision (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x02FF
    std::uint8_t bEnableWorldGeometry; // 0x0300 (Size: 0x1, Type: BoolProperty)
    // 0x0300 BoolProperty bFreezeIncomingPoseOnStart (shared storage)
    // 0x0300 BoolProperty bOverrideWorldGravity (shared storage)
    // 0x0300 BoolProperty bTransferBoneVelocities (shared storage)
    // 0x0300 BoolProperty bWorldGeometryCollisionEnabledHasPhysics (shared storage)
    // 0x0300 BoolProperty bWorldGeometryCollisionEnabledHasProbe (shared storage)
    // 0x0300 BoolProperty bWorldGeometryCollisionEnabledHasQuery (shared storage)
    std::uint8_t PhysicsAssetConditioningConstraintPosition; // 0x0301 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PhysicsAssetConditioningConstraintOrientation; // 0x0302 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0303
    float WorldSpaceMinimumScale; // 0x0304 (Size: 0x4, Type: FloatProperty)
    float EvaluationResetTime; // 0x0308 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableControls; // 0x030C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x030D
    void* PhysicsControlAsset; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> BoneToBodyNameMap; // 0x0318 (Size: 0x10, Type: MapProperty)
    std::uint8_t CharacterSetupData[0xC0]; // 0x0328 (Size: 0xC0, Type: StructProperty)
    std::uint8_t bEnableCharacterSetupData; // 0x03E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x03E9
    std::uint8_t AdditionalControlsAndBodyModifiers[0x20]; // 0x03F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t AdditionalSets[0x20]; // 0x0410 (Size: 0x20, Type: StructProperty)
    std::uint8_t InitialControlAndBodyModifierUpdates[0x30]; // 0x0430 (Size: 0x30, Type: StructProperty)
    std::uint8_t ControlAndModifierParameters[0x30]; // 0x0460 (Size: 0x30, Type: StructProperty)
    std::uint8_t ControlAndModifierUpdates[0x30]; // 0x0490 (Size: 0x30, Type: StructProperty)
    std::uint8_t ControlTargets[0x10]; // 0x04C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t KinematicTargets[0x10]; // 0x04D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ForcesAndTorques[0x10]; // 0x04E0 (Size: 0x10, Type: StructProperty)
    void* PhysicsAssetAuthoredSkeletalMesh; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConstraintProfile[0x4]; // 0x04F8 (Size: 0x4, Type: NameProperty)
    std::uint8_t ControlProfile[0x4]; // 0x04FC (Size: 0x4, Type: NameProperty)
    float BoundsVelocityMultiplier; // 0x0500 (Size: 0x4, Type: FloatProperty)
    float MaxVelocityBoundsExpansion; // 0x0504 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowCCD; // 0x0508 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseLocalLODThresholdOnly; // 0x0509 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x050A
    std::uint8_t SimulationTiming; // 0x050B (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FAnimNode_RigidBodyWithControl, OverridePhysicsAsset) == 200, "Offset mismatch for FAnimNode_RigidBodyWithControl::OverridePhysicsAsset");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, bDefaultToSkeletalMeshPhysicsAsset) == 208, "Offset mismatch for FAnimNode_RigidBodyWithControl::bDefaultToSkeletalMeshPhysicsAsset");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, OverrideWorldGravity) == 520, "Offset mismatch for FAnimNode_RigidBodyWithControl::OverrideWorldGravity");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ExternalForce) == 544, "Offset mismatch for FAnimNode_RigidBodyWithControl::ExternalForce");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ComponentLinearAccScale) == 568, "Offset mismatch for FAnimNode_RigidBodyWithControl::ComponentLinearAccScale");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ComponentLinearVelScale) == 592, "Offset mismatch for FAnimNode_RigidBodyWithControl::ComponentLinearVelScale");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ComponentAppliedLinearAccClamp) == 616, "Offset mismatch for FAnimNode_RigidBodyWithControl::ComponentAppliedLinearAccClamp");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, SimSpaceSettings) == 640, "Offset mismatch for FAnimNode_RigidBodyWithControl::SimSpaceSettings");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, CachedBoundsScale) == 744, "Offset mismatch for FAnimNode_RigidBodyWithControl::CachedBoundsScale");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, bUpdateCacheEveryFrame) == 748, "Offset mismatch for FAnimNode_RigidBodyWithControl::bUpdateCacheEveryFrame");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, BaseBoneRef) == 752, "Offset mismatch for FAnimNode_RigidBodyWithControl::BaseBoneRef");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, OverlapChannel) == 764, "Offset mismatch for FAnimNode_RigidBodyWithControl::OverlapChannel");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, SimulationSpace) == 765, "Offset mismatch for FAnimNode_RigidBodyWithControl::SimulationSpace");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, bCalculateVelocitiesForWorldGeometry) == 766, "Offset mismatch for FAnimNode_RigidBodyWithControl::bCalculateVelocitiesForWorldGeometry");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, bEnableWorldGeometry) == 768, "Offset mismatch for FAnimNode_RigidBodyWithControl::bEnableWorldGeometry");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, PhysicsAssetConditioningConstraintPosition) == 769, "Offset mismatch for FAnimNode_RigidBodyWithControl::PhysicsAssetConditioningConstraintPosition");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, PhysicsAssetConditioningConstraintOrientation) == 770, "Offset mismatch for FAnimNode_RigidBodyWithControl::PhysicsAssetConditioningConstraintOrientation");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, WorldSpaceMinimumScale) == 772, "Offset mismatch for FAnimNode_RigidBodyWithControl::WorldSpaceMinimumScale");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, EvaluationResetTime) == 776, "Offset mismatch for FAnimNode_RigidBodyWithControl::EvaluationResetTime");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, bEnableControls) == 780, "Offset mismatch for FAnimNode_RigidBodyWithControl::bEnableControls");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, PhysicsControlAsset) == 784, "Offset mismatch for FAnimNode_RigidBodyWithControl::PhysicsControlAsset");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, BoneToBodyNameMap) == 792, "Offset mismatch for FAnimNode_RigidBodyWithControl::BoneToBodyNameMap");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, CharacterSetupData) == 808, "Offset mismatch for FAnimNode_RigidBodyWithControl::CharacterSetupData");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, bEnableCharacterSetupData) == 1000, "Offset mismatch for FAnimNode_RigidBodyWithControl::bEnableCharacterSetupData");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, AdditionalControlsAndBodyModifiers) == 1008, "Offset mismatch for FAnimNode_RigidBodyWithControl::AdditionalControlsAndBodyModifiers");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, AdditionalSets) == 1040, "Offset mismatch for FAnimNode_RigidBodyWithControl::AdditionalSets");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, InitialControlAndBodyModifierUpdates) == 1072, "Offset mismatch for FAnimNode_RigidBodyWithControl::InitialControlAndBodyModifierUpdates");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ControlAndModifierParameters) == 1120, "Offset mismatch for FAnimNode_RigidBodyWithControl::ControlAndModifierParameters");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ControlAndModifierUpdates) == 1168, "Offset mismatch for FAnimNode_RigidBodyWithControl::ControlAndModifierUpdates");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ControlTargets) == 1216, "Offset mismatch for FAnimNode_RigidBodyWithControl::ControlTargets");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, KinematicTargets) == 1232, "Offset mismatch for FAnimNode_RigidBodyWithControl::KinematicTargets");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ForcesAndTorques) == 1248, "Offset mismatch for FAnimNode_RigidBodyWithControl::ForcesAndTorques");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, PhysicsAssetAuthoredSkeletalMesh) == 1264, "Offset mismatch for FAnimNode_RigidBodyWithControl::PhysicsAssetAuthoredSkeletalMesh");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ConstraintProfile) == 1272, "Offset mismatch for FAnimNode_RigidBodyWithControl::ConstraintProfile");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, ControlProfile) == 1276, "Offset mismatch for FAnimNode_RigidBodyWithControl::ControlProfile");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, BoundsVelocityMultiplier) == 1280, "Offset mismatch for FAnimNode_RigidBodyWithControl::BoundsVelocityMultiplier");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, MaxVelocityBoundsExpansion) == 1284, "Offset mismatch for FAnimNode_RigidBodyWithControl::MaxVelocityBoundsExpansion");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, bAllowCCD) == 1288, "Offset mismatch for FAnimNode_RigidBodyWithControl::bAllowCCD");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, bUseLocalLODThresholdOnly) == 1289, "Offset mismatch for FAnimNode_RigidBodyWithControl::bUseLocalLODThresholdOnly");
static_assert(offsetof(FAnimNode_RigidBodyWithControl, SimulationTiming) == 1291, "Offset mismatch for FAnimNode_RigidBodyWithControl::SimulationTiming");

// /Script/PhysicsControl.InitialBodyModifier
// Kind: ScriptStruct; super: none
struct FInitialBodyModifier
{
public:
    TWeakObjectPtr<void> Actor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MeshComponentName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t BodyModifierData[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t KinematicTargetPosition[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t KinematicTargetOrientation[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInitialBodyModifier, Actor) == 0, "Offset mismatch for FInitialBodyModifier::Actor");
static_assert(offsetof(FInitialBodyModifier, MeshComponentName) == 8, "Offset mismatch for FInitialBodyModifier::MeshComponentName");
static_assert(offsetof(FInitialBodyModifier, BoneName) == 12, "Offset mismatch for FInitialBodyModifier::BoneName");
static_assert(offsetof(FInitialBodyModifier, BodyModifierData) == 16, "Offset mismatch for FInitialBodyModifier::BodyModifierData");
static_assert(offsetof(FInitialBodyModifier, KinematicTargetPosition) == 32, "Offset mismatch for FInitialBodyModifier::KinematicTargetPosition");
static_assert(offsetof(FInitialBodyModifier, KinematicTargetOrientation) == 56, "Offset mismatch for FInitialBodyModifier::KinematicTargetOrientation");

// /Script/PhysicsControl.InitialCharacterControls
// Kind: ScriptStruct; super: none
struct FInitialCharacterControls
{
public:
    TWeakObjectPtr<void> CharacterActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    FName SkeletalMeshComponentName; // 0x0008 (Size: 0x8, Type: NameProperty)
    TArray<void*> LimbSetupData; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WorldSpaceControlData[0x50]; // 0x0020 (Size: 0x50, Type: StructProperty)
    std::uint8_t ParentSpaceControlData[0x50]; // 0x0070 (Size: 0x50, Type: StructProperty)
    std::uint8_t BodyModifierData[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInitialCharacterControls, CharacterActor) == 0, "Offset mismatch for FInitialCharacterControls::CharacterActor");
static_assert(offsetof(FInitialCharacterControls, SkeletalMeshComponentName) == 8, "Offset mismatch for FInitialCharacterControls::SkeletalMeshComponentName");
static_assert(offsetof(FInitialCharacterControls, LimbSetupData) == 16, "Offset mismatch for FInitialCharacterControls::LimbSetupData");
static_assert(offsetof(FInitialCharacterControls, WorldSpaceControlData) == 32, "Offset mismatch for FInitialCharacterControls::WorldSpaceControlData");
static_assert(offsetof(FInitialCharacterControls, ParentSpaceControlData) == 112, "Offset mismatch for FInitialCharacterControls::ParentSpaceControlData");
static_assert(offsetof(FInitialCharacterControls, BodyModifierData) == 192, "Offset mismatch for FInitialCharacterControls::BodyModifierData");

// /Script/PhysicsControl.InitialPhysicsControl
// Kind: ScriptStruct; super: none
struct FInitialPhysicsControl
{
public:
    TWeakObjectPtr<void> ParentActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ParentMeshComponentName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParentBoneName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> ChildActor; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ChildMeshComponentName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t ChildBoneName[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t ControlData[0x50]; // 0x0020 (Size: 0x50, Type: StructProperty)
    std::uint8_t ControlMultiplier[0x70]; // 0x0070 (Size: 0x70, Type: StructProperty)
    std::uint8_t ControlTarget[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInitialPhysicsControl, ParentActor) == 0, "Offset mismatch for FInitialPhysicsControl::ParentActor");
static_assert(offsetof(FInitialPhysicsControl, ParentMeshComponentName) == 8, "Offset mismatch for FInitialPhysicsControl::ParentMeshComponentName");
static_assert(offsetof(FInitialPhysicsControl, ParentBoneName) == 12, "Offset mismatch for FInitialPhysicsControl::ParentBoneName");
static_assert(offsetof(FInitialPhysicsControl, ChildActor) == 16, "Offset mismatch for FInitialPhysicsControl::ChildActor");
static_assert(offsetof(FInitialPhysicsControl, ChildMeshComponentName) == 24, "Offset mismatch for FInitialPhysicsControl::ChildMeshComponentName");
static_assert(offsetof(FInitialPhysicsControl, ChildBoneName) == 28, "Offset mismatch for FInitialPhysicsControl::ChildBoneName");
static_assert(offsetof(FInitialPhysicsControl, ControlData) == 32, "Offset mismatch for FInitialPhysicsControl::ControlData");
static_assert(offsetof(FInitialPhysicsControl, ControlMultiplier) == 112, "Offset mismatch for FInitialPhysicsControl::ControlMultiplier");
static_assert(offsetof(FInitialPhysicsControl, ControlTarget) == 224, "Offset mismatch for FInitialPhysicsControl::ControlTarget");

// /Script/PhysicsControl.PhysicsBodyModifier
// Kind: ScriptStruct; super: none
struct FPhysicsBodyModifier
{
public:
    std::uint8_t BoneName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ModifierData[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsBodyModifier, BoneName) == 0, "Offset mismatch for FPhysicsBodyModifier::BoneName");
static_assert(offsetof(FPhysicsBodyModifier, ModifierData) == 4, "Offset mismatch for FPhysicsBodyModifier::ModifierData");

// /Script/PhysicsControl.PhysicsBodyModifierCreationData
// Kind: ScriptStruct; super: none
struct FPhysicsBodyModifierCreationData
{
public:
    std::uint8_t modifier[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TArray<void*> Sets; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicsBodyModifierCreationData, modifier) == 0, "Offset mismatch for FPhysicsBodyModifierCreationData::modifier");
static_assert(offsetof(FPhysicsBodyModifierCreationData, Sets) == 24, "Offset mismatch for FPhysicsBodyModifierCreationData::Sets");

// /Script/PhysicsControl.PhysicsControl
// Kind: ScriptStruct; super: none
struct FPhysicsControl
{
public:
    std::uint8_t ParentBoneName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ChildBoneName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ControlData[0x50]; // 0x0008 (Size: 0x50, Type: StructProperty)
    std::uint8_t ControlMultiplier[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsControl, ParentBoneName) == 0, "Offset mismatch for FPhysicsControl::ParentBoneName");
static_assert(offsetof(FPhysicsControl, ChildBoneName) == 4, "Offset mismatch for FPhysicsControl::ChildBoneName");
static_assert(offsetof(FPhysicsControl, ControlData) == 8, "Offset mismatch for FPhysicsControl::ControlData");
static_assert(offsetof(FPhysicsControl, ControlMultiplier) == 88, "Offset mismatch for FPhysicsControl::ControlMultiplier");

// /Script/PhysicsControl.PhysicsControlAndBodyModifierCreationDatas
// Kind: ScriptStruct; super: none
struct FPhysicsControlAndBodyModifierCreationDatas
{
public:
    TMap<void*, void*> Controls; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Modifiers; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPhysicsControlAndBodyModifierCreationDatas, Controls) == 0, "Offset mismatch for FPhysicsControlAndBodyModifierCreationDatas::Controls");
static_assert(offsetof(FPhysicsControlAndBodyModifierCreationDatas, Modifiers) == 16, "Offset mismatch for FPhysicsControlAndBodyModifierCreationDatas::Modifiers");

// /Script/PhysicsControl.PhysicsControlCharacterSetupData
// Kind: ScriptStruct; super: none
struct FPhysicsControlCharacterSetupData
{
public:
    TArray<void*> LimbSetupData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultWorldSpaceControlData[0x50]; // 0x0010 (Size: 0x50, Type: StructProperty)
    std::uint8_t DefaultParentSpaceControlData[0x50]; // 0x0060 (Size: 0x50, Type: StructProperty)
    std::uint8_t DefaultBodyModifierData[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsControlCharacterSetupData, LimbSetupData) == 0, "Offset mismatch for FPhysicsControlCharacterSetupData::LimbSetupData");
static_assert(offsetof(FPhysicsControlCharacterSetupData, DefaultWorldSpaceControlData) == 16, "Offset mismatch for FPhysicsControlCharacterSetupData::DefaultWorldSpaceControlData");
static_assert(offsetof(FPhysicsControlCharacterSetupData, DefaultParentSpaceControlData) == 96, "Offset mismatch for FPhysicsControlCharacterSetupData::DefaultParentSpaceControlData");
static_assert(offsetof(FPhysicsControlCharacterSetupData, DefaultBodyModifierData) == 176, "Offset mismatch for FPhysicsControlCharacterSetupData::DefaultBodyModifierData");

// /Script/PhysicsControl.PhysicsControlControlAndModifierParameters
// Kind: ScriptStruct; super: none
struct FPhysicsControlControlAndModifierParameters
{
public:
    TArray<void*> ControlParameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ControlMultiplierParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ModifierParameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicsControlControlAndModifierParameters, ControlParameters) == 0, "Offset mismatch for FPhysicsControlControlAndModifierParameters::ControlParameters");
static_assert(offsetof(FPhysicsControlControlAndModifierParameters, ControlMultiplierParameters) == 16, "Offset mismatch for FPhysicsControlControlAndModifierParameters::ControlMultiplierParameters");
static_assert(offsetof(FPhysicsControlControlAndModifierParameters, ModifierParameters) == 32, "Offset mismatch for FPhysicsControlControlAndModifierParameters::ModifierParameters");

// /Script/PhysicsControl.PhysicsControlControlAndModifierUpdates
// Kind: ScriptStruct; super: none
struct FPhysicsControlControlAndModifierUpdates
{
public:
    TArray<void*> ControlUpdates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ControlMultiplierUpdates; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ModifierUpdates; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicsControlControlAndModifierUpdates, ControlUpdates) == 0, "Offset mismatch for FPhysicsControlControlAndModifierUpdates::ControlUpdates");
static_assert(offsetof(FPhysicsControlControlAndModifierUpdates, ControlMultiplierUpdates) == 16, "Offset mismatch for FPhysicsControlControlAndModifierUpdates::ControlMultiplierUpdates");
static_assert(offsetof(FPhysicsControlControlAndModifierUpdates, ModifierUpdates) == 32, "Offset mismatch for FPhysicsControlControlAndModifierUpdates::ModifierUpdates");

// /Script/PhysicsControl.PhysicsControlCreationData
// Kind: ScriptStruct; super: none
struct FPhysicsControlCreationData
{
public:
    std::uint8_t Control[0xC8]; // 0x0000 (Size: 0xC8, Type: StructProperty)
    TArray<void*> Sets; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicsControlCreationData, Control) == 0, "Offset mismatch for FPhysicsControlCreationData::Control");
static_assert(offsetof(FPhysicsControlCreationData, Sets) == 200, "Offset mismatch for FPhysicsControlCreationData::Sets");

// /Script/PhysicsControl.PhysicsControlData
// Kind: ScriptStruct; super: none
struct FPhysicsControlData
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float LinearStrength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float LinearDampingRatio; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LinearExtraDamping; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxForce; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float AngularStrength; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float AngularDampingRatio; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float AngularExtraDamping; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxTorque; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float LinearTargetVelocityMultiplier; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float AngularTargetVelocityMultiplier; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t CustomControlPoint[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseCustomControlPoint; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSkeletalAnimation; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableCollision; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyControlChildObject; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAccelerationDriveMode; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPhysicsControlData, bEnabled) == 0, "Offset mismatch for FPhysicsControlData::bEnabled");
static_assert(offsetof(FPhysicsControlData, LinearStrength) == 4, "Offset mismatch for FPhysicsControlData::LinearStrength");
static_assert(offsetof(FPhysicsControlData, LinearDampingRatio) == 8, "Offset mismatch for FPhysicsControlData::LinearDampingRatio");
static_assert(offsetof(FPhysicsControlData, LinearExtraDamping) == 12, "Offset mismatch for FPhysicsControlData::LinearExtraDamping");
static_assert(offsetof(FPhysicsControlData, MaxForce) == 16, "Offset mismatch for FPhysicsControlData::MaxForce");
static_assert(offsetof(FPhysicsControlData, AngularStrength) == 20, "Offset mismatch for FPhysicsControlData::AngularStrength");
static_assert(offsetof(FPhysicsControlData, AngularDampingRatio) == 24, "Offset mismatch for FPhysicsControlData::AngularDampingRatio");
static_assert(offsetof(FPhysicsControlData, AngularExtraDamping) == 28, "Offset mismatch for FPhysicsControlData::AngularExtraDamping");
static_assert(offsetof(FPhysicsControlData, MaxTorque) == 32, "Offset mismatch for FPhysicsControlData::MaxTorque");
static_assert(offsetof(FPhysicsControlData, LinearTargetVelocityMultiplier) == 36, "Offset mismatch for FPhysicsControlData::LinearTargetVelocityMultiplier");
static_assert(offsetof(FPhysicsControlData, AngularTargetVelocityMultiplier) == 40, "Offset mismatch for FPhysicsControlData::AngularTargetVelocityMultiplier");
static_assert(offsetof(FPhysicsControlData, CustomControlPoint) == 48, "Offset mismatch for FPhysicsControlData::CustomControlPoint");
static_assert(offsetof(FPhysicsControlData, bUseCustomControlPoint) == 72, "Offset mismatch for FPhysicsControlData::bUseCustomControlPoint");
static_assert(offsetof(FPhysicsControlData, bUseSkeletalAnimation) == 73, "Offset mismatch for FPhysicsControlData::bUseSkeletalAnimation");
static_assert(offsetof(FPhysicsControlData, bDisableCollision) == 74, "Offset mismatch for FPhysicsControlData::bDisableCollision");
static_assert(offsetof(FPhysicsControlData, bOnlyControlChildObject) == 75, "Offset mismatch for FPhysicsControlData::bOnlyControlChildObject");
static_assert(offsetof(FPhysicsControlData, bUseAccelerationDriveMode) == 76, "Offset mismatch for FPhysicsControlData::bUseAccelerationDriveMode");

// /Script/PhysicsControl.PhysicsControlForceAndTorqueData
// Kind: ScriptStruct; super: none
struct FPhysicsControlForceAndTorqueData
{
public:
    std::uint8_t LocationSpace; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ForceAndTorqueSpace; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Type; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t Linear[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Angular[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t Location[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsControlForceAndTorqueData, LocationSpace) == 0, "Offset mismatch for FPhysicsControlForceAndTorqueData::LocationSpace");
static_assert(offsetof(FPhysicsControlForceAndTorqueData, ForceAndTorqueSpace) == 1, "Offset mismatch for FPhysicsControlForceAndTorqueData::ForceAndTorqueSpace");
static_assert(offsetof(FPhysicsControlForceAndTorqueData, Type) == 2, "Offset mismatch for FPhysicsControlForceAndTorqueData::Type");
static_assert(offsetof(FPhysicsControlForceAndTorqueData, Linear) == 8, "Offset mismatch for FPhysicsControlForceAndTorqueData::Linear");
static_assert(offsetof(FPhysicsControlForceAndTorqueData, Angular) == 32, "Offset mismatch for FPhysicsControlForceAndTorqueData::Angular");
static_assert(offsetof(FPhysicsControlForceAndTorqueData, Location) == 56, "Offset mismatch for FPhysicsControlForceAndTorqueData::Location");

// /Script/PhysicsControl.PhysicsControlLimbBones
// Kind: ScriptStruct; super: none
struct FPhysicsControlLimbBones
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PhysicsControl.PhysicsControlLimbSetupData
// Kind: ScriptStruct; super: none
struct FPhysicsControlLimbSetupData
{
public:
    std::uint8_t LimbName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t StartBone[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bCreateBodyModifiers; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bCreateParentSpaceControls (shared storage)
    // 0x0008 BoolProperty bCreateWorldSpaceControls (shared storage)
    // 0x0008 BoolProperty bIncludeParentBone (shared storage)
};

static_assert(offsetof(FPhysicsControlLimbSetupData, LimbName) == 0, "Offset mismatch for FPhysicsControlLimbSetupData::LimbName");
static_assert(offsetof(FPhysicsControlLimbSetupData, StartBone) == 4, "Offset mismatch for FPhysicsControlLimbSetupData::StartBone");
static_assert(offsetof(FPhysicsControlLimbSetupData, bCreateBodyModifiers) == 8, "Offset mismatch for FPhysicsControlLimbSetupData::bCreateBodyModifiers");

// /Script/PhysicsControl.PhysicsControlModifierData
// Kind: ScriptStruct; super: none
struct FPhysicsControlModifierData
{
public:
    std::uint8_t MovementType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CollisionType; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t KinematicTargetSpace; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float GravityMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PhysicsBlendWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUpdateKinematicFromSimulation; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableCCD; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPhysicsControlModifierData, MovementType) == 0, "Offset mismatch for FPhysicsControlModifierData::MovementType");
static_assert(offsetof(FPhysicsControlModifierData, CollisionType) == 1, "Offset mismatch for FPhysicsControlModifierData::CollisionType");
static_assert(offsetof(FPhysicsControlModifierData, KinematicTargetSpace) == 2, "Offset mismatch for FPhysicsControlModifierData::KinematicTargetSpace");
static_assert(offsetof(FPhysicsControlModifierData, GravityMultiplier) == 4, "Offset mismatch for FPhysicsControlModifierData::GravityMultiplier");
static_assert(offsetof(FPhysicsControlModifierData, PhysicsBlendWeight) == 8, "Offset mismatch for FPhysicsControlModifierData::PhysicsBlendWeight");
static_assert(offsetof(FPhysicsControlModifierData, bUpdateKinematicFromSimulation) == 12, "Offset mismatch for FPhysicsControlModifierData::bUpdateKinematicFromSimulation");
static_assert(offsetof(FPhysicsControlModifierData, bEnableCCD) == 13, "Offset mismatch for FPhysicsControlModifierData::bEnableCCD");

// /Script/PhysicsControl.PhysicsControlModifierSparseData
// Kind: ScriptStruct; super: none
struct FPhysicsControlModifierSparseData
{
public:
    std::uint8_t MovementType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CollisionType; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float GravityMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PhysicsBlendWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t KinematicTargetSpace; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableCCD; // 0x000D (Size: 0x1, Type: BoolProperty)
    // 0x000D BoolProperty bEnableCollisionType (shared storage)
    // 0x000D BoolProperty bEnableGravityMultiplier (shared storage)
    // 0x000D BoolProperty bEnableKinematicTargetSpace (shared storage)
    // 0x000D BoolProperty bEnableMovementType (shared storage)
    // 0x000D BoolProperty bEnablePhysicsBlendWeight (shared storage)
    // 0x000D BoolProperty bEnablebUpdateKinematicFromSimulation (shared storage)
    // 0x000D BoolProperty bUpdateKinematicFromSimulation (shared storage)
    std::uint8_t bEnablebEnableCCD; // 0x000E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPhysicsControlModifierSparseData, MovementType) == 0, "Offset mismatch for FPhysicsControlModifierSparseData::MovementType");
static_assert(offsetof(FPhysicsControlModifierSparseData, CollisionType) == 1, "Offset mismatch for FPhysicsControlModifierSparseData::CollisionType");
static_assert(offsetof(FPhysicsControlModifierSparseData, GravityMultiplier) == 4, "Offset mismatch for FPhysicsControlModifierSparseData::GravityMultiplier");
static_assert(offsetof(FPhysicsControlModifierSparseData, PhysicsBlendWeight) == 8, "Offset mismatch for FPhysicsControlModifierSparseData::PhysicsBlendWeight");
static_assert(offsetof(FPhysicsControlModifierSparseData, KinematicTargetSpace) == 12, "Offset mismatch for FPhysicsControlModifierSparseData::KinematicTargetSpace");
static_assert(offsetof(FPhysicsControlModifierSparseData, bEnableCCD) == 13, "Offset mismatch for FPhysicsControlModifierSparseData::bEnableCCD");
static_assert(offsetof(FPhysicsControlModifierSparseData, bEnablebEnableCCD) == 14, "Offset mismatch for FPhysicsControlModifierSparseData::bEnablebEnableCCD");

// /Script/PhysicsControl.PhysicsControlMultiplier
// Kind: ScriptStruct; super: none
struct FPhysicsControlMultiplier
{
public:
    std::uint8_t LinearStrengthMultiplier[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearDampingRatioMultiplier[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearExtraDampingMultiplier[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxForceMultiplier[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float AngularStrengthMultiplier; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float AngularDampingRatioMultiplier; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float AngularExtraDampingMultiplier; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float MaxTorqueMultiplier; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPhysicsControlMultiplier, LinearStrengthMultiplier) == 0, "Offset mismatch for FPhysicsControlMultiplier::LinearStrengthMultiplier");
static_assert(offsetof(FPhysicsControlMultiplier, LinearDampingRatioMultiplier) == 24, "Offset mismatch for FPhysicsControlMultiplier::LinearDampingRatioMultiplier");
static_assert(offsetof(FPhysicsControlMultiplier, LinearExtraDampingMultiplier) == 48, "Offset mismatch for FPhysicsControlMultiplier::LinearExtraDampingMultiplier");
static_assert(offsetof(FPhysicsControlMultiplier, MaxForceMultiplier) == 72, "Offset mismatch for FPhysicsControlMultiplier::MaxForceMultiplier");
static_assert(offsetof(FPhysicsControlMultiplier, AngularStrengthMultiplier) == 96, "Offset mismatch for FPhysicsControlMultiplier::AngularStrengthMultiplier");
static_assert(offsetof(FPhysicsControlMultiplier, AngularDampingRatioMultiplier) == 100, "Offset mismatch for FPhysicsControlMultiplier::AngularDampingRatioMultiplier");
static_assert(offsetof(FPhysicsControlMultiplier, AngularExtraDampingMultiplier) == 104, "Offset mismatch for FPhysicsControlMultiplier::AngularExtraDampingMultiplier");
static_assert(offsetof(FPhysicsControlMultiplier, MaxTorqueMultiplier) == 108, "Offset mismatch for FPhysicsControlMultiplier::MaxTorqueMultiplier");

// /Script/PhysicsControl.PhysicsControlNamedControlMultiplierParameters
// Kind: ScriptStruct; super: none
struct FPhysicsControlNamedControlMultiplierParameters
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Data[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsControlNamedControlMultiplierParameters, Name) == 0, "Offset mismatch for FPhysicsControlNamedControlMultiplierParameters::Name");
static_assert(offsetof(FPhysicsControlNamedControlMultiplierParameters, Data) == 8, "Offset mismatch for FPhysicsControlNamedControlMultiplierParameters::Data");

// /Script/PhysicsControl.PhysicsControlNamedControlParameters
// Kind: ScriptStruct; super: none
struct FPhysicsControlNamedControlParameters
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Data[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsControlNamedControlParameters, Name) == 0, "Offset mismatch for FPhysicsControlNamedControlParameters::Name");
static_assert(offsetof(FPhysicsControlNamedControlParameters, Data) == 8, "Offset mismatch for FPhysicsControlNamedControlParameters::Data");

// /Script/PhysicsControl.PhysicsControlNamedForceAndTorqueData
// Kind: ScriptStruct; super: none
struct FPhysicsControlNamedForceAndTorqueData
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t ForceAndTorqueData[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsControlNamedForceAndTorqueData, Name) == 0, "Offset mismatch for FPhysicsControlNamedForceAndTorqueData::Name");
static_assert(offsetof(FPhysicsControlNamedForceAndTorqueData, ForceAndTorqueData) == 8, "Offset mismatch for FPhysicsControlNamedForceAndTorqueData::ForceAndTorqueData");

// /Script/PhysicsControl.PhysicsControlNamedModifierParameters
// Kind: ScriptStruct; super: none
struct FPhysicsControlNamedModifierParameters
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Data[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicsControlNamedModifierParameters, Name) == 0, "Offset mismatch for FPhysicsControlNamedModifierParameters::Name");
static_assert(offsetof(FPhysicsControlNamedModifierParameters, Data) == 4, "Offset mismatch for FPhysicsControlNamedModifierParameters::Data");

// /Script/PhysicsControl.PhysicsControlNames
// Kind: ScriptStruct; super: none
struct FPhysicsControlNames
{
public:
    TArray<void*> Names; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicsControlNames, Names) == 0, "Offset mismatch for FPhysicsControlNames::Names");

// /Script/PhysicsControl.PhysicsControlSetUpdate
// Kind: ScriptStruct; super: none
struct FPhysicsControlSetUpdate
{
public:
    FName SetName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Names; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicsControlSetUpdate, SetName) == 0, "Offset mismatch for FPhysicsControlSetUpdate::SetName");
static_assert(offsetof(FPhysicsControlSetUpdate, Names) == 8, "Offset mismatch for FPhysicsControlSetUpdate::Names");

// /Script/PhysicsControl.PhysicsControlSetUpdates
// Kind: ScriptStruct; super: none
struct FPhysicsControlSetUpdates
{
public:
    TArray<void*> ControlSetUpdates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ModifierSetUpdates; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhysicsControlSetUpdates, ControlSetUpdates) == 0, "Offset mismatch for FPhysicsControlSetUpdates::ControlSetUpdates");
static_assert(offsetof(FPhysicsControlSetUpdates, ModifierSetUpdates) == 16, "Offset mismatch for FPhysicsControlSetUpdates::ModifierSetUpdates");

// /Script/PhysicsControl.PhysicsControlSparseData
// Kind: ScriptStruct; super: none
struct FPhysicsControlSparseData
{
public:
    float LinearStrength; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LinearDampingRatio; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float LinearExtraDamping; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxForce; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AngularStrength; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float AngularDampingRatio; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float AngularExtraDamping; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxTorque; // 0x001C (Size: 0x4, Type: FloatProperty)
    float LinearTargetVelocityMultiplier; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float AngularTargetVelocityMultiplier; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CustomControlPoint[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDisableCollision; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bEnableLinearDampingRatio (shared storage)
    // 0x0040 BoolProperty bEnableLinearStrength (shared storage)
    // 0x0040 BoolProperty bEnabled (shared storage)
    // 0x0040 BoolProperty bOnlyControlChildObject (shared storage)
    // 0x0040 BoolProperty bUseAccelerationDriveMode (shared storage)
    // 0x0040 BoolProperty bUseCustomControlPoint (shared storage)
    // 0x0040 BoolProperty bUseSkeletalAnimation (shared storage)
    std::uint8_t bEnableAngularDampingRatio; // 0x0041 (Size: 0x1, Type: BoolProperty)
    // 0x0041 BoolProperty bEnableAngularExtraDamping (shared storage)
    // 0x0041 BoolProperty bEnableAngularStrength (shared storage)
    // 0x0041 BoolProperty bEnableAngularTargetVelocityMultiplier (shared storage)
    // 0x0041 BoolProperty bEnableLinearExtraDamping (shared storage)
    // 0x0041 BoolProperty bEnableLinearTargetVelocityMultiplier (shared storage)
    // 0x0041 BoolProperty bEnableMaxForce (shared storage)
    // 0x0041 BoolProperty bEnableMaxTorque (shared storage)
    std::uint8_t bEnableCustomControlPoint; // 0x0042 (Size: 0x1, Type: BoolProperty)
    // 0x0042 BoolProperty bEnablebDisableCollision (shared storage)
    // 0x0042 BoolProperty bEnablebEnabled (shared storage)
    // 0x0042 BoolProperty bEnablebOnlyControlChildObject (shared storage)
    // 0x0042 BoolProperty bEnablebUseAccelerationDriveMode (shared storage)
    // 0x0042 BoolProperty bEnablebUseCustomControlPoint (shared storage)
    // 0x0042 BoolProperty bEnablebUseSkeletalAnimation (shared storage)
};

static_assert(offsetof(FPhysicsControlSparseData, LinearStrength) == 0, "Offset mismatch for FPhysicsControlSparseData::LinearStrength");
static_assert(offsetof(FPhysicsControlSparseData, LinearDampingRatio) == 4, "Offset mismatch for FPhysicsControlSparseData::LinearDampingRatio");
static_assert(offsetof(FPhysicsControlSparseData, LinearExtraDamping) == 8, "Offset mismatch for FPhysicsControlSparseData::LinearExtraDamping");
static_assert(offsetof(FPhysicsControlSparseData, MaxForce) == 12, "Offset mismatch for FPhysicsControlSparseData::MaxForce");
static_assert(offsetof(FPhysicsControlSparseData, AngularStrength) == 16, "Offset mismatch for FPhysicsControlSparseData::AngularStrength");
static_assert(offsetof(FPhysicsControlSparseData, AngularDampingRatio) == 20, "Offset mismatch for FPhysicsControlSparseData::AngularDampingRatio");
static_assert(offsetof(FPhysicsControlSparseData, AngularExtraDamping) == 24, "Offset mismatch for FPhysicsControlSparseData::AngularExtraDamping");
static_assert(offsetof(FPhysicsControlSparseData, MaxTorque) == 28, "Offset mismatch for FPhysicsControlSparseData::MaxTorque");
static_assert(offsetof(FPhysicsControlSparseData, LinearTargetVelocityMultiplier) == 32, "Offset mismatch for FPhysicsControlSparseData::LinearTargetVelocityMultiplier");
static_assert(offsetof(FPhysicsControlSparseData, AngularTargetVelocityMultiplier) == 36, "Offset mismatch for FPhysicsControlSparseData::AngularTargetVelocityMultiplier");
static_assert(offsetof(FPhysicsControlSparseData, CustomControlPoint) == 40, "Offset mismatch for FPhysicsControlSparseData::CustomControlPoint");
static_assert(offsetof(FPhysicsControlSparseData, bDisableCollision) == 64, "Offset mismatch for FPhysicsControlSparseData::bDisableCollision");
static_assert(offsetof(FPhysicsControlSparseData, bEnableAngularDampingRatio) == 65, "Offset mismatch for FPhysicsControlSparseData::bEnableAngularDampingRatio");
static_assert(offsetof(FPhysicsControlSparseData, bEnableCustomControlPoint) == 66, "Offset mismatch for FPhysicsControlSparseData::bEnableCustomControlPoint");

// /Script/PhysicsControl.PhysicsControlSparseMultiplier
// Kind: ScriptStruct; super: none
struct FPhysicsControlSparseMultiplier
{
public:
    std::uint8_t LinearStrengthMultiplier[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearDampingRatioMultiplier[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearExtraDampingMultiplier[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxForceMultiplier[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float AngularStrengthMultiplier; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float AngularDampingRatioMultiplier; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float AngularExtraDampingMultiplier; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float MaxTorqueMultiplier; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableAngularDampingRatioMultiplier; // 0x0070 (Size: 0x1, Type: BoolProperty)
    // 0x0070 BoolProperty bEnableAngularExtraDampingMultiplier (shared storage)
    // 0x0070 BoolProperty bEnableAngularStrengthMultiplier (shared storage)
    // 0x0070 BoolProperty bEnableLinearDampingRatioMultiplier (shared storage)
    // 0x0070 BoolProperty bEnableLinearExtraDampingMultiplier (shared storage)
    // 0x0070 BoolProperty bEnableLinearStrengthMultiplier (shared storage)
    // 0x0070 BoolProperty bEnableMaxForceMultiplier (shared storage)
    // 0x0070 BoolProperty bEnableMaxTorqueMultiplier (shared storage)
};

static_assert(offsetof(FPhysicsControlSparseMultiplier, LinearStrengthMultiplier) == 0, "Offset mismatch for FPhysicsControlSparseMultiplier::LinearStrengthMultiplier");
static_assert(offsetof(FPhysicsControlSparseMultiplier, LinearDampingRatioMultiplier) == 24, "Offset mismatch for FPhysicsControlSparseMultiplier::LinearDampingRatioMultiplier");
static_assert(offsetof(FPhysicsControlSparseMultiplier, LinearExtraDampingMultiplier) == 48, "Offset mismatch for FPhysicsControlSparseMultiplier::LinearExtraDampingMultiplier");
static_assert(offsetof(FPhysicsControlSparseMultiplier, MaxForceMultiplier) == 72, "Offset mismatch for FPhysicsControlSparseMultiplier::MaxForceMultiplier");
static_assert(offsetof(FPhysicsControlSparseMultiplier, AngularStrengthMultiplier) == 96, "Offset mismatch for FPhysicsControlSparseMultiplier::AngularStrengthMultiplier");
static_assert(offsetof(FPhysicsControlSparseMultiplier, AngularDampingRatioMultiplier) == 100, "Offset mismatch for FPhysicsControlSparseMultiplier::AngularDampingRatioMultiplier");
static_assert(offsetof(FPhysicsControlSparseMultiplier, AngularExtraDampingMultiplier) == 104, "Offset mismatch for FPhysicsControlSparseMultiplier::AngularExtraDampingMultiplier");
static_assert(offsetof(FPhysicsControlSparseMultiplier, MaxTorqueMultiplier) == 108, "Offset mismatch for FPhysicsControlSparseMultiplier::MaxTorqueMultiplier");
static_assert(offsetof(FPhysicsControlSparseMultiplier, bEnableAngularDampingRatioMultiplier) == 112, "Offset mismatch for FPhysicsControlSparseMultiplier::bEnableAngularDampingRatioMultiplier");

// /Script/PhysicsControl.PhysicsControlTarget
// Kind: ScriptStruct; super: none
struct FPhysicsControlTarget
{
public:
    std::uint8_t TargetPosition[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetVelocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetOrientation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetAngularVelocity[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t bApplyControlPointToTarget; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPhysicsControlTarget, TargetPosition) == 0, "Offset mismatch for FPhysicsControlTarget::TargetPosition");
static_assert(offsetof(FPhysicsControlTarget, TargetVelocity) == 24, "Offset mismatch for FPhysicsControlTarget::TargetVelocity");
static_assert(offsetof(FPhysicsControlTarget, TargetOrientation) == 48, "Offset mismatch for FPhysicsControlTarget::TargetOrientation");
static_assert(offsetof(FPhysicsControlTarget, TargetAngularVelocity) == 72, "Offset mismatch for FPhysicsControlTarget::TargetAngularVelocity");
static_assert(offsetof(FPhysicsControlTarget, bApplyControlPointToTarget) == 96, "Offset mismatch for FPhysicsControlTarget::bApplyControlPointToTarget");

// /Script/PhysicsControl.RigidBodyControlTarget
// Kind: ScriptStruct; super: none
struct FRigidBodyControlTarget
{
public:
    std::uint8_t TargetPosition[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetOrientation[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigidBodyControlTarget, TargetPosition) == 0, "Offset mismatch for FRigidBodyControlTarget::TargetPosition");
static_assert(offsetof(FRigidBodyControlTarget, TargetOrientation) == 24, "Offset mismatch for FRigidBodyControlTarget::TargetOrientation");

// /Script/PhysicsControl.RigidBodyControlTargets
// Kind: ScriptStruct; super: none
struct FRigidBodyControlTargets
{
public:
    TMap<void*, void*> Targets; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRigidBodyControlTargets, Targets) == 0, "Offset mismatch for FRigidBodyControlTargets::Targets");

// /Script/PhysicsControl.RigidBodyForcesAndTorques
// Kind: ScriptStruct; super: none
struct FRigidBodyForcesAndTorques
{
public:
    TMap<void*, void*> ForcesAndTorques; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRigidBodyForcesAndTorques, ForcesAndTorques) == 0, "Offset mismatch for FRigidBodyForcesAndTorques::ForcesAndTorques");

// /Script/PhysicsControl.RigidBodyKinematicTarget
// Kind: ScriptStruct; super: none
struct FRigidBodyKinematicTarget
{
public:
    std::uint8_t TargetPosition[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetOrientation[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigidBodyKinematicTarget, TargetPosition) == 0, "Offset mismatch for FRigidBodyKinematicTarget::TargetPosition");
static_assert(offsetof(FRigidBodyKinematicTarget, TargetOrientation) == 24, "Offset mismatch for FRigidBodyKinematicTarget::TargetOrientation");

// /Script/PhysicsControl.RigidBodyKinematicTargets
// Kind: ScriptStruct; super: none
struct FRigidBodyKinematicTargets
{
public:
    TMap<void*, void*> Targets; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRigidBodyKinematicTargets, Targets) == 0, "Offset mismatch for FRigidBodyKinematicTargets::Targets");

// /Script/PhysicsControl.RigidBodyWithControlReference
// Kind: ScriptStruct; super: AnimNodeReference
struct FRigidBodyWithControlReference
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PhysicsControl.PhysicsControlActor
// Kind: Class; super: Actor
class UPhysicsControlActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ControlComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* ControlInitializerComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPhysicsControlActor, ControlComponent) == 624, "Offset mismatch for UPhysicsControlActor::ControlComponent");
static_assert(offsetof(UPhysicsControlActor, ControlInitializerComponent) == 632, "Offset mismatch for UPhysicsControlActor::ControlInitializerComponent");

// /Script/PhysicsControl.PhysicsControlAsset
// Kind: Class; super: Object
class UPhysicsControlAsset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CharacterSetupData[0xC0]; // 0x0030 (Size: 0xC0, Type: StructProperty)
    std::uint8_t AdditionalControlsAndModifiers[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t AdditionalSets[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    TArray<void*> InitialControlAndModifierUpdates; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Profiles; // 0x0140 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPhysicsControlAsset, CharacterSetupData) == 48, "Offset mismatch for UPhysicsControlAsset::CharacterSetupData");
static_assert(offsetof(UPhysicsControlAsset, AdditionalControlsAndModifiers) == 240, "Offset mismatch for UPhysicsControlAsset::AdditionalControlsAndModifiers");
static_assert(offsetof(UPhysicsControlAsset, AdditionalSets) == 272, "Offset mismatch for UPhysicsControlAsset::AdditionalSets");
static_assert(offsetof(UPhysicsControlAsset, InitialControlAndModifierUpdates) == 304, "Offset mismatch for UPhysicsControlAsset::InitialControlAndModifierUpdates");
static_assert(offsetof(UPhysicsControlAsset, Profiles) == 320, "Offset mismatch for UPhysicsControlAsset::Profiles");

// /Script/PhysicsControl.PhysicsControlBPLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPhysicsControlBPLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PhysicsControl.PhysicsControlComponent
// Kind: Class; super: SceneComponent
class UPhysicsControlComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t PhysicsControlAsset[0x20]; // 0x0240 (Size: 0x20, Type: SoftObjectProperty)
    float TeleportDistanceThreshold; // 0x0260 (Size: 0x4, Type: FloatProperty)
    float TeleportRotationThreshold; // 0x0264 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowDebugVisualization; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0269
    float VisualizationSizeScale; // 0x026C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowDebugControlList; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0271
    FString DebugControlDetailFilter; // 0x0278 (Size: 0x10, Type: StrProperty)
    std::uint8_t bShowDebugBodyModifierList; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0289
    FString DebugBodyModifierDetailFilter; // 0x0290 (Size: 0x10, Type: StrProperty)
    float VelocityPredictionTime; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWarnAboutInvalidNames; // 0x02A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x02A5
    std::int32_t MaxNumControlsOrModifiersPerName; // 0x02A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAttemptToRecreateDisabledControls; // 0x02AC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPhysicsControlComponent, PhysicsControlAsset) == 576, "Offset mismatch for UPhysicsControlComponent::PhysicsControlAsset");
static_assert(offsetof(UPhysicsControlComponent, TeleportDistanceThreshold) == 608, "Offset mismatch for UPhysicsControlComponent::TeleportDistanceThreshold");
static_assert(offsetof(UPhysicsControlComponent, TeleportRotationThreshold) == 612, "Offset mismatch for UPhysicsControlComponent::TeleportRotationThreshold");
static_assert(offsetof(UPhysicsControlComponent, bShowDebugVisualization) == 616, "Offset mismatch for UPhysicsControlComponent::bShowDebugVisualization");
static_assert(offsetof(UPhysicsControlComponent, VisualizationSizeScale) == 620, "Offset mismatch for UPhysicsControlComponent::VisualizationSizeScale");
static_assert(offsetof(UPhysicsControlComponent, bShowDebugControlList) == 624, "Offset mismatch for UPhysicsControlComponent::bShowDebugControlList");
static_assert(offsetof(UPhysicsControlComponent, DebugControlDetailFilter) == 632, "Offset mismatch for UPhysicsControlComponent::DebugControlDetailFilter");
static_assert(offsetof(UPhysicsControlComponent, bShowDebugBodyModifierList) == 648, "Offset mismatch for UPhysicsControlComponent::bShowDebugBodyModifierList");
static_assert(offsetof(UPhysicsControlComponent, DebugBodyModifierDetailFilter) == 656, "Offset mismatch for UPhysicsControlComponent::DebugBodyModifierDetailFilter");
static_assert(offsetof(UPhysicsControlComponent, VelocityPredictionTime) == 672, "Offset mismatch for UPhysicsControlComponent::VelocityPredictionTime");
static_assert(offsetof(UPhysicsControlComponent, bWarnAboutInvalidNames) == 676, "Offset mismatch for UPhysicsControlComponent::bWarnAboutInvalidNames");
static_assert(offsetof(UPhysicsControlComponent, MaxNumControlsOrModifiersPerName) == 680, "Offset mismatch for UPhysicsControlComponent::MaxNumControlsOrModifiersPerName");
static_assert(offsetof(UPhysicsControlComponent, bAttemptToRecreateDisabledControls) == 684, "Offset mismatch for UPhysicsControlComponent::bAttemptToRecreateDisabledControls");

// /Script/PhysicsControl.PhysicsControlInitializerComponent
// Kind: Class; super: SceneComponent
class UPhysicsControlInitializerComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t InitialCharacterControls[0xD0]; // 0x0240 (Size: 0xD0, Type: StructProperty)
    TMap<void*, void*> InitialControls; // 0x0310 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InitialBodyModifiers; // 0x0320 (Size: 0x10, Type: MapProperty)
    std::uint8_t bCreateControlsAtBeginPlay; // 0x0330 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPhysicsControlInitializerComponent, InitialCharacterControls) == 576, "Offset mismatch for UPhysicsControlInitializerComponent::InitialCharacterControls");
static_assert(offsetof(UPhysicsControlInitializerComponent, InitialControls) == 784, "Offset mismatch for UPhysicsControlInitializerComponent::InitialControls");
static_assert(offsetof(UPhysicsControlInitializerComponent, InitialBodyModifiers) == 800, "Offset mismatch for UPhysicsControlInitializerComponent::InitialBodyModifiers");
static_assert(offsetof(UPhysicsControlInitializerComponent, bCreateControlsAtBeginPlay) == 816, "Offset mismatch for UPhysicsControlInitializerComponent::bCreateControlsAtBeginPlay");
