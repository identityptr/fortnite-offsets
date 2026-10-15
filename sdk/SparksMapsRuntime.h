/**
 * decamp dumper generated SDK
 * Package: /Script/SparksMapsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksMapsRuntime.CrowdMemberToSpawn
// Kind: ScriptStruct; super: none
struct FCrowdMemberToSpawn
{
public:
    std::uint8_t Location[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Rotator[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x002C
    void* Mesh; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ID; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCrowdMemberToSpawn, Location) == 0, "Offset mismatch for FCrowdMemberToSpawn::Location");
static_assert(offsetof(FCrowdMemberToSpawn, Rotator) == 16, "Offset mismatch for FCrowdMemberToSpawn::Rotator");
static_assert(offsetof(FCrowdMemberToSpawn, Scale) == 40, "Offset mismatch for FCrowdMemberToSpawn::Scale");
static_assert(offsetof(FCrowdMemberToSpawn, Mesh) == 48, "Offset mismatch for FCrowdMemberToSpawn::Mesh");
static_assert(offsetof(FCrowdMemberToSpawn, ID) == 56, "Offset mismatch for FCrowdMemberToSpawn::ID");

// /Script/SparksMapsRuntime.SparksCommonCameraDirectorFinishedEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonCameraDirectorFinishedEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksMapsRuntime.SparksCommonCameraFinishedEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonCameraFinishedEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksMapsRuntime.SparksCommonEnableCameraDirectorEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonEnableCameraDirectorEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksMapsRuntime.SparksCommonStartCameraEvent
// Kind: ScriptStruct; super: none
struct FSparksCommonStartCameraEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksMapsRuntime.SparksCommonUtilities
// Kind: Class; super: ActorComponent
class USparksCommonUtilities
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bSparksToolIsVisible; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    void* CaptureToolWidgetClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USparksCommonUtilities, bSparksToolIsVisible) == 192, "Offset mismatch for USparksCommonUtilities::bSparksToolIsVisible");
static_assert(offsetof(USparksCommonUtilities, CaptureToolWidgetClass) == 200, "Offset mismatch for USparksCommonUtilities::CaptureToolWidgetClass");

// /Script/SparksMapsRuntime.SparksControllerComponent_DisablePCStreamingSource
// Kind: Class; super: FortControllerComponent
class USparksControllerComponent_DisablePCStreamingSource
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

static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, PrimaryComponentTick) == 56, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::PrimaryComponentTick");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, ComponentTags) == 104, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::ComponentTags");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, AssetUserData) == 120, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::AssetUserData");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, UCSSerializationIndex) == 144, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::UCSSerializationIndex");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, bNetAddressable) == 152, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::bNetAddressable");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, bAutoActivate) == 154, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::bAutoActivate");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, bIsEditorOnly) == 155, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::bIsEditorOnly");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, CreationMethod) == 185, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::CreationMethod");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, OnComponentActivated) == 186, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::OnComponentActivated");
static_assert(offsetof(USparksControllerComponent_DisablePCStreamingSource, OnComponentDeactivated) == 187, "Offset mismatch for USparksControllerComponent_DisablePCStreamingSource::OnComponentDeactivated");

// /Script/SparksMapsRuntime.SparksCrowdSpawner
// Kind: Class; super: SceneComponent
class USparksCrowdSpawner
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    TMap<void*, void*> MeshWeights; // 0x0240 (Size: 0x10, Type: MapProperty)
    std::int32_t TotalMeshWeight; // 0x0250 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0254
    std::uint8_t Area[0x18]; // 0x0258 (Size: 0x18, Type: StructProperty)
    std::uint8_t CrowdSize[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    std::uint8_t PositionRandomness[0x10]; // 0x0278 (Size: 0x10, Type: StructProperty)
    std::uint8_t LookAt[0x18]; // 0x0288 (Size: 0x18, Type: StructProperty)
    float LookAtRandomness; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x02A4
    std::uint8_t AdditionalRotation[0x18]; // 0x02A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScaleVariance[0x10]; // 0x02C0 (Size: 0x10, Type: StructProperty)
    std::int32_t BatchSize; // 0x02D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x02D4
    TArray<void*> CrowdMembersToSpawn; // 0x02D8 (Size: 0x10, Type: ArrayProperty)
    void* ParamTransitionCurve; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TransitionTickTimerHandle[0x8]; // 0x02F0 (Size: 0x8, Type: StructProperty)
    std::int32_t CurrentTransitionParamIndex; // 0x02F8 (Size: 0x4, Type: IntProperty)
    float ParamValueAtStartOfTransition; // 0x02FC (Size: 0x4, Type: FloatProperty)
    float CurrentParamValue; // 0x0300 (Size: 0x4, Type: FloatProperty)
    float CurrentTransitionTarget; // 0x0304 (Size: 0x4, Type: FloatProperty)
    float CurrentTransitionDuration; // 0x0308 (Size: 0x4, Type: FloatProperty)
    float TimeElapsedInCurrentTransition; // 0x030C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USparksCrowdSpawner, MeshWeights) == 576, "Offset mismatch for USparksCrowdSpawner::MeshWeights");
static_assert(offsetof(USparksCrowdSpawner, TotalMeshWeight) == 592, "Offset mismatch for USparksCrowdSpawner::TotalMeshWeight");
static_assert(offsetof(USparksCrowdSpawner, Area) == 600, "Offset mismatch for USparksCrowdSpawner::Area");
static_assert(offsetof(USparksCrowdSpawner, CrowdSize) == 624, "Offset mismatch for USparksCrowdSpawner::CrowdSize");
static_assert(offsetof(USparksCrowdSpawner, PositionRandomness) == 632, "Offset mismatch for USparksCrowdSpawner::PositionRandomness");
static_assert(offsetof(USparksCrowdSpawner, LookAt) == 648, "Offset mismatch for USparksCrowdSpawner::LookAt");
static_assert(offsetof(USparksCrowdSpawner, LookAtRandomness) == 672, "Offset mismatch for USparksCrowdSpawner::LookAtRandomness");
static_assert(offsetof(USparksCrowdSpawner, AdditionalRotation) == 680, "Offset mismatch for USparksCrowdSpawner::AdditionalRotation");
static_assert(offsetof(USparksCrowdSpawner, ScaleVariance) == 704, "Offset mismatch for USparksCrowdSpawner::ScaleVariance");
static_assert(offsetof(USparksCrowdSpawner, BatchSize) == 720, "Offset mismatch for USparksCrowdSpawner::BatchSize");
static_assert(offsetof(USparksCrowdSpawner, CrowdMembersToSpawn) == 728, "Offset mismatch for USparksCrowdSpawner::CrowdMembersToSpawn");
static_assert(offsetof(USparksCrowdSpawner, ParamTransitionCurve) == 744, "Offset mismatch for USparksCrowdSpawner::ParamTransitionCurve");
static_assert(offsetof(USparksCrowdSpawner, TransitionTickTimerHandle) == 752, "Offset mismatch for USparksCrowdSpawner::TransitionTickTimerHandle");
static_assert(offsetof(USparksCrowdSpawner, CurrentTransitionParamIndex) == 760, "Offset mismatch for USparksCrowdSpawner::CurrentTransitionParamIndex");
static_assert(offsetof(USparksCrowdSpawner, ParamValueAtStartOfTransition) == 764, "Offset mismatch for USparksCrowdSpawner::ParamValueAtStartOfTransition");
static_assert(offsetof(USparksCrowdSpawner, CurrentParamValue) == 768, "Offset mismatch for USparksCrowdSpawner::CurrentParamValue");
static_assert(offsetof(USparksCrowdSpawner, CurrentTransitionTarget) == 772, "Offset mismatch for USparksCrowdSpawner::CurrentTransitionTarget");
static_assert(offsetof(USparksCrowdSpawner, CurrentTransitionDuration) == 776, "Offset mismatch for USparksCrowdSpawner::CurrentTransitionDuration");
static_assert(offsetof(USparksCrowdSpawner, TimeElapsedInCurrentTransition) == 780, "Offset mismatch for USparksCrowdSpawner::TimeElapsedInCurrentTransition");

// /Script/SparksMapsRuntime.SparksMapDataLayerController
// Kind: Class; super: Actor
class USparksMapDataLayerController
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksMapDataLayerController, PrimaryActorTick) == 40, "Offset mismatch for USparksMapDataLayerController::PrimaryActorTick");
static_assert(offsetof(USparksMapDataLayerController, bAlwaysRelevant) == 88, "Offset mismatch for USparksMapDataLayerController::bAlwaysRelevant");
static_assert(offsetof(USparksMapDataLayerController, bExchangedRoles) == 89, "Offset mismatch for USparksMapDataLayerController::bExchangedRoles");
static_assert(offsetof(USparksMapDataLayerController, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for USparksMapDataLayerController::bAllowTickBeforeBeginPlay");
static_assert(offsetof(USparksMapDataLayerController, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for USparksMapDataLayerController::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(USparksMapDataLayerController, bActorEnableCollision) == 93, "Offset mismatch for USparksMapDataLayerController::bActorEnableCollision");
static_assert(offsetof(USparksMapDataLayerController, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for USparksMapDataLayerController::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USparksMapDataLayerController, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for USparksMapDataLayerController::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(USparksMapDataLayerController, RemoteRole) == 96, "Offset mismatch for USparksMapDataLayerController::RemoteRole");
static_assert(offsetof(USparksMapDataLayerController, InitialLifeSpan) == 100, "Offset mismatch for USparksMapDataLayerController::InitialLifeSpan");
static_assert(offsetof(USparksMapDataLayerController, CustomTimeDilation) == 104, "Offset mismatch for USparksMapDataLayerController::CustomTimeDilation");
static_assert(offsetof(USparksMapDataLayerController, RayTracingGroupId) == 108, "Offset mismatch for USparksMapDataLayerController::RayTracingGroupId");
static_assert(offsetof(USparksMapDataLayerController, AttachmentReplication) == 112, "Offset mismatch for USparksMapDataLayerController::AttachmentReplication");
static_assert(offsetof(USparksMapDataLayerController, ReplicatedMovement) == 208, "Offset mismatch for USparksMapDataLayerController::ReplicatedMovement");
static_assert(offsetof(USparksMapDataLayerController, Owner) == 344, "Offset mismatch for USparksMapDataLayerController::Owner");
static_assert(offsetof(USparksMapDataLayerController, NetDriverName) == 352, "Offset mismatch for USparksMapDataLayerController::NetDriverName");
static_assert(offsetof(USparksMapDataLayerController, Role) == 356, "Offset mismatch for USparksMapDataLayerController::Role");
static_assert(offsetof(USparksMapDataLayerController, NetDormancy) == 357, "Offset mismatch for USparksMapDataLayerController::NetDormancy");
static_assert(offsetof(USparksMapDataLayerController, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for USparksMapDataLayerController::SpawnCollisionHandlingMethod");
static_assert(offsetof(USparksMapDataLayerController, AutoReceiveInput) == 359, "Offset mismatch for USparksMapDataLayerController::AutoReceiveInput");
static_assert(offsetof(USparksMapDataLayerController, InputPriority) == 360, "Offset mismatch for USparksMapDataLayerController::InputPriority");
static_assert(offsetof(USparksMapDataLayerController, InputComponent) == 368, "Offset mismatch for USparksMapDataLayerController::InputComponent");
static_assert(offsetof(USparksMapDataLayerController, NetTag) == 376, "Offset mismatch for USparksMapDataLayerController::NetTag");
static_assert(offsetof(USparksMapDataLayerController, NetCullDistanceSquared) == 380, "Offset mismatch for USparksMapDataLayerController::NetCullDistanceSquared");
static_assert(offsetof(USparksMapDataLayerController, NetUpdateFrequency) == 384, "Offset mismatch for USparksMapDataLayerController::NetUpdateFrequency");
static_assert(offsetof(USparksMapDataLayerController, MinNetUpdateFrequency) == 388, "Offset mismatch for USparksMapDataLayerController::MinNetUpdateFrequency");
static_assert(offsetof(USparksMapDataLayerController, NetPriority) == 392, "Offset mismatch for USparksMapDataLayerController::NetPriority");
static_assert(offsetof(USparksMapDataLayerController, PhysicsReplicationMode) == 396, "Offset mismatch for USparksMapDataLayerController::PhysicsReplicationMode");
static_assert(offsetof(USparksMapDataLayerController, Instigator) == 408, "Offset mismatch for USparksMapDataLayerController::Instigator");
static_assert(offsetof(USparksMapDataLayerController, Children) == 416, "Offset mismatch for USparksMapDataLayerController::Children");
static_assert(offsetof(USparksMapDataLayerController, RootComponent) == 432, "Offset mismatch for USparksMapDataLayerController::RootComponent");
static_assert(offsetof(USparksMapDataLayerController, HLODLayer) == 448, "Offset mismatch for USparksMapDataLayerController::HLODLayer");
static_assert(offsetof(USparksMapDataLayerController, Layers) == 456, "Offset mismatch for USparksMapDataLayerController::Layers");
static_assert(offsetof(USparksMapDataLayerController, ParentComponent) == 472, "Offset mismatch for USparksMapDataLayerController::ParentComponent");
static_assert(offsetof(USparksMapDataLayerController, Tags) == 496, "Offset mismatch for USparksMapDataLayerController::Tags");
static_assert(offsetof(USparksMapDataLayerController, OnTakeAnyDamage) == 512, "Offset mismatch for USparksMapDataLayerController::OnTakeAnyDamage");
static_assert(offsetof(USparksMapDataLayerController, OnTakePointDamage) == 513, "Offset mismatch for USparksMapDataLayerController::OnTakePointDamage");
static_assert(offsetof(USparksMapDataLayerController, OnTakeRadialDamage) == 514, "Offset mismatch for USparksMapDataLayerController::OnTakeRadialDamage");
static_assert(offsetof(USparksMapDataLayerController, OnActorBeginOverlap) == 515, "Offset mismatch for USparksMapDataLayerController::OnActorBeginOverlap");
static_assert(offsetof(USparksMapDataLayerController, OnActorEndOverlap) == 516, "Offset mismatch for USparksMapDataLayerController::OnActorEndOverlap");
static_assert(offsetof(USparksMapDataLayerController, OnBeginCursorOver) == 517, "Offset mismatch for USparksMapDataLayerController::OnBeginCursorOver");
static_assert(offsetof(USparksMapDataLayerController, OnEndCursorOver) == 518, "Offset mismatch for USparksMapDataLayerController::OnEndCursorOver");
static_assert(offsetof(USparksMapDataLayerController, OnClicked) == 519, "Offset mismatch for USparksMapDataLayerController::OnClicked");
static_assert(offsetof(USparksMapDataLayerController, OnReleased) == 520, "Offset mismatch for USparksMapDataLayerController::OnReleased");
static_assert(offsetof(USparksMapDataLayerController, OnInputTouchBegin) == 521, "Offset mismatch for USparksMapDataLayerController::OnInputTouchBegin");
static_assert(offsetof(USparksMapDataLayerController, OnInputTouchEnd) == 522, "Offset mismatch for USparksMapDataLayerController::OnInputTouchEnd");
static_assert(offsetof(USparksMapDataLayerController, OnInputTouchEnter) == 523, "Offset mismatch for USparksMapDataLayerController::OnInputTouchEnter");
static_assert(offsetof(USparksMapDataLayerController, OnInputTouchLeave) == 524, "Offset mismatch for USparksMapDataLayerController::OnInputTouchLeave");
static_assert(offsetof(USparksMapDataLayerController, OnActorHit) == 525, "Offset mismatch for USparksMapDataLayerController::OnActorHit");
static_assert(offsetof(USparksMapDataLayerController, OnDestroyed) == 526, "Offset mismatch for USparksMapDataLayerController::OnDestroyed");
static_assert(offsetof(USparksMapDataLayerController, OnEndPlay) == 527, "Offset mismatch for USparksMapDataLayerController::OnEndPlay");
static_assert(offsetof(USparksMapDataLayerController, InstanceComponents) == 592, "Offset mismatch for USparksMapDataLayerController::InstanceComponents");
static_assert(offsetof(USparksMapDataLayerController, BlueprintCreatedComponents) == 608, "Offset mismatch for USparksMapDataLayerController::BlueprintCreatedComponents");
