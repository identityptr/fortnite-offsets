/**
 * decamp dumper generated SDK
 * Package: /Script/PawnVATManagerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PawnVATManagerRuntime.PawnVATAnimationCondition
// Kind: ScriptStruct; super: none
struct FPawnVATAnimationCondition
{
public:
    std::uint8_t Conditions[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t Mode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    std::int32_t AnimationIndex; // 0x002C (Size: 0x4, Type: IntProperty)
    void* AnimationTexture; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    float LerpDuration; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TextureParameterName1[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    std::uint8_t TextureParameterName2[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    FName TextureLerpParameterName; // 0x0044 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPawnVATAnimationCondition, Conditions) == 0, "Offset mismatch for FPawnVATAnimationCondition::Conditions");
static_assert(offsetof(FPawnVATAnimationCondition, Mode) == 40, "Offset mismatch for FPawnVATAnimationCondition::Mode");
static_assert(offsetof(FPawnVATAnimationCondition, AnimationIndex) == 44, "Offset mismatch for FPawnVATAnimationCondition::AnimationIndex");
static_assert(offsetof(FPawnVATAnimationCondition, AnimationTexture) == 48, "Offset mismatch for FPawnVATAnimationCondition::AnimationTexture");
static_assert(offsetof(FPawnVATAnimationCondition, LerpDuration) == 56, "Offset mismatch for FPawnVATAnimationCondition::LerpDuration");
static_assert(offsetof(FPawnVATAnimationCondition, TextureParameterName1) == 60, "Offset mismatch for FPawnVATAnimationCondition::TextureParameterName1");
static_assert(offsetof(FPawnVATAnimationCondition, TextureParameterName2) == 64, "Offset mismatch for FPawnVATAnimationCondition::TextureParameterName2");
static_assert(offsetof(FPawnVATAnimationCondition, TextureLerpParameterName) == 68, "Offset mismatch for FPawnVATAnimationCondition::TextureLerpParameterName");

// /Script/PawnVATManagerRuntime.PawnVATManager
// Kind: Class; super: Actor
class UPawnVATManager
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

static_assert(offsetof(UPawnVATManager, PrimaryActorTick) == 40, "Offset mismatch for UPawnVATManager::PrimaryActorTick");
static_assert(offsetof(UPawnVATManager, bAlwaysRelevant) == 88, "Offset mismatch for UPawnVATManager::bAlwaysRelevant");
static_assert(offsetof(UPawnVATManager, bExchangedRoles) == 89, "Offset mismatch for UPawnVATManager::bExchangedRoles");
static_assert(offsetof(UPawnVATManager, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UPawnVATManager::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UPawnVATManager, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UPawnVATManager::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UPawnVATManager, bActorEnableCollision) == 93, "Offset mismatch for UPawnVATManager::bActorEnableCollision");
static_assert(offsetof(UPawnVATManager, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UPawnVATManager::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UPawnVATManager, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UPawnVATManager::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UPawnVATManager, RemoteRole) == 96, "Offset mismatch for UPawnVATManager::RemoteRole");
static_assert(offsetof(UPawnVATManager, InitialLifeSpan) == 100, "Offset mismatch for UPawnVATManager::InitialLifeSpan");
static_assert(offsetof(UPawnVATManager, CustomTimeDilation) == 104, "Offset mismatch for UPawnVATManager::CustomTimeDilation");
static_assert(offsetof(UPawnVATManager, RayTracingGroupId) == 108, "Offset mismatch for UPawnVATManager::RayTracingGroupId");
static_assert(offsetof(UPawnVATManager, AttachmentReplication) == 112, "Offset mismatch for UPawnVATManager::AttachmentReplication");
static_assert(offsetof(UPawnVATManager, ReplicatedMovement) == 208, "Offset mismatch for UPawnVATManager::ReplicatedMovement");
static_assert(offsetof(UPawnVATManager, Owner) == 344, "Offset mismatch for UPawnVATManager::Owner");
static_assert(offsetof(UPawnVATManager, NetDriverName) == 352, "Offset mismatch for UPawnVATManager::NetDriverName");
static_assert(offsetof(UPawnVATManager, Role) == 356, "Offset mismatch for UPawnVATManager::Role");
static_assert(offsetof(UPawnVATManager, NetDormancy) == 357, "Offset mismatch for UPawnVATManager::NetDormancy");
static_assert(offsetof(UPawnVATManager, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UPawnVATManager::SpawnCollisionHandlingMethod");
static_assert(offsetof(UPawnVATManager, AutoReceiveInput) == 359, "Offset mismatch for UPawnVATManager::AutoReceiveInput");
static_assert(offsetof(UPawnVATManager, InputPriority) == 360, "Offset mismatch for UPawnVATManager::InputPriority");
static_assert(offsetof(UPawnVATManager, InputComponent) == 368, "Offset mismatch for UPawnVATManager::InputComponent");
static_assert(offsetof(UPawnVATManager, NetTag) == 376, "Offset mismatch for UPawnVATManager::NetTag");
static_assert(offsetof(UPawnVATManager, NetCullDistanceSquared) == 380, "Offset mismatch for UPawnVATManager::NetCullDistanceSquared");
static_assert(offsetof(UPawnVATManager, NetUpdateFrequency) == 384, "Offset mismatch for UPawnVATManager::NetUpdateFrequency");
static_assert(offsetof(UPawnVATManager, MinNetUpdateFrequency) == 388, "Offset mismatch for UPawnVATManager::MinNetUpdateFrequency");
static_assert(offsetof(UPawnVATManager, NetPriority) == 392, "Offset mismatch for UPawnVATManager::NetPriority");
static_assert(offsetof(UPawnVATManager, PhysicsReplicationMode) == 396, "Offset mismatch for UPawnVATManager::PhysicsReplicationMode");
static_assert(offsetof(UPawnVATManager, Instigator) == 408, "Offset mismatch for UPawnVATManager::Instigator");
static_assert(offsetof(UPawnVATManager, Children) == 416, "Offset mismatch for UPawnVATManager::Children");
static_assert(offsetof(UPawnVATManager, RootComponent) == 432, "Offset mismatch for UPawnVATManager::RootComponent");
static_assert(offsetof(UPawnVATManager, HLODLayer) == 448, "Offset mismatch for UPawnVATManager::HLODLayer");
static_assert(offsetof(UPawnVATManager, Layers) == 456, "Offset mismatch for UPawnVATManager::Layers");
static_assert(offsetof(UPawnVATManager, ParentComponent) == 472, "Offset mismatch for UPawnVATManager::ParentComponent");
static_assert(offsetof(UPawnVATManager, Tags) == 496, "Offset mismatch for UPawnVATManager::Tags");
static_assert(offsetof(UPawnVATManager, OnTakeAnyDamage) == 512, "Offset mismatch for UPawnVATManager::OnTakeAnyDamage");
static_assert(offsetof(UPawnVATManager, OnTakePointDamage) == 513, "Offset mismatch for UPawnVATManager::OnTakePointDamage");
static_assert(offsetof(UPawnVATManager, OnTakeRadialDamage) == 514, "Offset mismatch for UPawnVATManager::OnTakeRadialDamage");
static_assert(offsetof(UPawnVATManager, OnActorBeginOverlap) == 515, "Offset mismatch for UPawnVATManager::OnActorBeginOverlap");
static_assert(offsetof(UPawnVATManager, OnActorEndOverlap) == 516, "Offset mismatch for UPawnVATManager::OnActorEndOverlap");
static_assert(offsetof(UPawnVATManager, OnBeginCursorOver) == 517, "Offset mismatch for UPawnVATManager::OnBeginCursorOver");
static_assert(offsetof(UPawnVATManager, OnEndCursorOver) == 518, "Offset mismatch for UPawnVATManager::OnEndCursorOver");
static_assert(offsetof(UPawnVATManager, OnClicked) == 519, "Offset mismatch for UPawnVATManager::OnClicked");
static_assert(offsetof(UPawnVATManager, OnReleased) == 520, "Offset mismatch for UPawnVATManager::OnReleased");
static_assert(offsetof(UPawnVATManager, OnInputTouchBegin) == 521, "Offset mismatch for UPawnVATManager::OnInputTouchBegin");
static_assert(offsetof(UPawnVATManager, OnInputTouchEnd) == 522, "Offset mismatch for UPawnVATManager::OnInputTouchEnd");
static_assert(offsetof(UPawnVATManager, OnInputTouchEnter) == 523, "Offset mismatch for UPawnVATManager::OnInputTouchEnter");
static_assert(offsetof(UPawnVATManager, OnInputTouchLeave) == 524, "Offset mismatch for UPawnVATManager::OnInputTouchLeave");
static_assert(offsetof(UPawnVATManager, OnActorHit) == 525, "Offset mismatch for UPawnVATManager::OnActorHit");
static_assert(offsetof(UPawnVATManager, OnDestroyed) == 526, "Offset mismatch for UPawnVATManager::OnDestroyed");
static_assert(offsetof(UPawnVATManager, OnEndPlay) == 527, "Offset mismatch for UPawnVATManager::OnEndPlay");
static_assert(offsetof(UPawnVATManager, InstanceComponents) == 592, "Offset mismatch for UPawnVATManager::InstanceComponents");
static_assert(offsetof(UPawnVATManager, BlueprintCreatedComponents) == 608, "Offset mismatch for UPawnVATManager::BlueprintCreatedComponents");

// /Script/PawnVATManagerRuntime.PawnVATManagerBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPawnVATManagerBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PawnVATManagerRuntime.PawnVATManagerComponent
// Kind: Class; super: ActorComponent
class UPawnVATManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* VATLookupChooser; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* AnimToTextureAsset; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedMeshLocalTransform[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    std::int32_t MinSignificanceLOD; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0134
    TArray<void*> AnimSelectionConditions; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActiveAnimationCondition[0x48]; // 0x0148 (Size: 0x48, Type: StructProperty)
    float LerpElapsedTime; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0194
    TArray<void*> MaterialInstances; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    void* LoadedMesh; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* TargetInstancedStaticMeshComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* CID; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayerPawn; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsVATActive; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWantsVATActive; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bManualVATOverride; // 0x01CA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPawnVATManagerComponent, VATLookupChooser) == 192, "Offset mismatch for UPawnVATManagerComponent::VATLookupChooser");
static_assert(offsetof(UPawnVATManagerComponent, AnimToTextureAsset) == 200, "Offset mismatch for UPawnVATManagerComponent::AnimToTextureAsset");
static_assert(offsetof(UPawnVATManagerComponent, InstancedMeshLocalTransform) == 208, "Offset mismatch for UPawnVATManagerComponent::InstancedMeshLocalTransform");
static_assert(offsetof(UPawnVATManagerComponent, MinSignificanceLOD) == 304, "Offset mismatch for UPawnVATManagerComponent::MinSignificanceLOD");
static_assert(offsetof(UPawnVATManagerComponent, AnimSelectionConditions) == 312, "Offset mismatch for UPawnVATManagerComponent::AnimSelectionConditions");
static_assert(offsetof(UPawnVATManagerComponent, ActiveAnimationCondition) == 328, "Offset mismatch for UPawnVATManagerComponent::ActiveAnimationCondition");
static_assert(offsetof(UPawnVATManagerComponent, LerpElapsedTime) == 400, "Offset mismatch for UPawnVATManagerComponent::LerpElapsedTime");
static_assert(offsetof(UPawnVATManagerComponent, MaterialInstances) == 408, "Offset mismatch for UPawnVATManagerComponent::MaterialInstances");
static_assert(offsetof(UPawnVATManagerComponent, LoadedMesh) == 424, "Offset mismatch for UPawnVATManagerComponent::LoadedMesh");
static_assert(offsetof(UPawnVATManagerComponent, TargetInstancedStaticMeshComponent) == 432, "Offset mismatch for UPawnVATManagerComponent::TargetInstancedStaticMeshComponent");
static_assert(offsetof(UPawnVATManagerComponent, CID) == 440, "Offset mismatch for UPawnVATManagerComponent::CID");
static_assert(offsetof(UPawnVATManagerComponent, OwningPlayerPawn) == 448, "Offset mismatch for UPawnVATManagerComponent::OwningPlayerPawn");
static_assert(offsetof(UPawnVATManagerComponent, bIsVATActive) == 456, "Offset mismatch for UPawnVATManagerComponent::bIsVATActive");
static_assert(offsetof(UPawnVATManagerComponent, bWantsVATActive) == 457, "Offset mismatch for UPawnVATManagerComponent::bWantsVATActive");
static_assert(offsetof(UPawnVATManagerComponent, bManualVATOverride) == 458, "Offset mismatch for UPawnVATManagerComponent::bManualVATOverride");

// /Script/PawnVATManagerRuntime.PawnVATPerfWatcher
// Kind: Class; super: Actor
class UPawnVATPerfWatcher
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

static_assert(offsetof(UPawnVATPerfWatcher, PrimaryActorTick) == 40, "Offset mismatch for UPawnVATPerfWatcher::PrimaryActorTick");
static_assert(offsetof(UPawnVATPerfWatcher, bAlwaysRelevant) == 88, "Offset mismatch for UPawnVATPerfWatcher::bAlwaysRelevant");
static_assert(offsetof(UPawnVATPerfWatcher, bExchangedRoles) == 89, "Offset mismatch for UPawnVATPerfWatcher::bExchangedRoles");
static_assert(offsetof(UPawnVATPerfWatcher, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UPawnVATPerfWatcher::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UPawnVATPerfWatcher, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UPawnVATPerfWatcher::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UPawnVATPerfWatcher, bActorEnableCollision) == 93, "Offset mismatch for UPawnVATPerfWatcher::bActorEnableCollision");
static_assert(offsetof(UPawnVATPerfWatcher, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UPawnVATPerfWatcher::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UPawnVATPerfWatcher, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UPawnVATPerfWatcher::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UPawnVATPerfWatcher, RemoteRole) == 96, "Offset mismatch for UPawnVATPerfWatcher::RemoteRole");
static_assert(offsetof(UPawnVATPerfWatcher, InitialLifeSpan) == 100, "Offset mismatch for UPawnVATPerfWatcher::InitialLifeSpan");
static_assert(offsetof(UPawnVATPerfWatcher, CustomTimeDilation) == 104, "Offset mismatch for UPawnVATPerfWatcher::CustomTimeDilation");
static_assert(offsetof(UPawnVATPerfWatcher, RayTracingGroupId) == 108, "Offset mismatch for UPawnVATPerfWatcher::RayTracingGroupId");
static_assert(offsetof(UPawnVATPerfWatcher, AttachmentReplication) == 112, "Offset mismatch for UPawnVATPerfWatcher::AttachmentReplication");
static_assert(offsetof(UPawnVATPerfWatcher, ReplicatedMovement) == 208, "Offset mismatch for UPawnVATPerfWatcher::ReplicatedMovement");
static_assert(offsetof(UPawnVATPerfWatcher, Owner) == 344, "Offset mismatch for UPawnVATPerfWatcher::Owner");
static_assert(offsetof(UPawnVATPerfWatcher, NetDriverName) == 352, "Offset mismatch for UPawnVATPerfWatcher::NetDriverName");
static_assert(offsetof(UPawnVATPerfWatcher, Role) == 356, "Offset mismatch for UPawnVATPerfWatcher::Role");
static_assert(offsetof(UPawnVATPerfWatcher, NetDormancy) == 357, "Offset mismatch for UPawnVATPerfWatcher::NetDormancy");
static_assert(offsetof(UPawnVATPerfWatcher, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UPawnVATPerfWatcher::SpawnCollisionHandlingMethod");
static_assert(offsetof(UPawnVATPerfWatcher, AutoReceiveInput) == 359, "Offset mismatch for UPawnVATPerfWatcher::AutoReceiveInput");
static_assert(offsetof(UPawnVATPerfWatcher, InputPriority) == 360, "Offset mismatch for UPawnVATPerfWatcher::InputPriority");
static_assert(offsetof(UPawnVATPerfWatcher, InputComponent) == 368, "Offset mismatch for UPawnVATPerfWatcher::InputComponent");
static_assert(offsetof(UPawnVATPerfWatcher, NetTag) == 376, "Offset mismatch for UPawnVATPerfWatcher::NetTag");
static_assert(offsetof(UPawnVATPerfWatcher, NetCullDistanceSquared) == 380, "Offset mismatch for UPawnVATPerfWatcher::NetCullDistanceSquared");
static_assert(offsetof(UPawnVATPerfWatcher, NetUpdateFrequency) == 384, "Offset mismatch for UPawnVATPerfWatcher::NetUpdateFrequency");
static_assert(offsetof(UPawnVATPerfWatcher, MinNetUpdateFrequency) == 388, "Offset mismatch for UPawnVATPerfWatcher::MinNetUpdateFrequency");
static_assert(offsetof(UPawnVATPerfWatcher, NetPriority) == 392, "Offset mismatch for UPawnVATPerfWatcher::NetPriority");
static_assert(offsetof(UPawnVATPerfWatcher, PhysicsReplicationMode) == 396, "Offset mismatch for UPawnVATPerfWatcher::PhysicsReplicationMode");
static_assert(offsetof(UPawnVATPerfWatcher, Instigator) == 408, "Offset mismatch for UPawnVATPerfWatcher::Instigator");
static_assert(offsetof(UPawnVATPerfWatcher, Children) == 416, "Offset mismatch for UPawnVATPerfWatcher::Children");
static_assert(offsetof(UPawnVATPerfWatcher, RootComponent) == 432, "Offset mismatch for UPawnVATPerfWatcher::RootComponent");
static_assert(offsetof(UPawnVATPerfWatcher, HLODLayer) == 448, "Offset mismatch for UPawnVATPerfWatcher::HLODLayer");
static_assert(offsetof(UPawnVATPerfWatcher, Layers) == 456, "Offset mismatch for UPawnVATPerfWatcher::Layers");
static_assert(offsetof(UPawnVATPerfWatcher, ParentComponent) == 472, "Offset mismatch for UPawnVATPerfWatcher::ParentComponent");
static_assert(offsetof(UPawnVATPerfWatcher, Tags) == 496, "Offset mismatch for UPawnVATPerfWatcher::Tags");
static_assert(offsetof(UPawnVATPerfWatcher, OnTakeAnyDamage) == 512, "Offset mismatch for UPawnVATPerfWatcher::OnTakeAnyDamage");
static_assert(offsetof(UPawnVATPerfWatcher, OnTakePointDamage) == 513, "Offset mismatch for UPawnVATPerfWatcher::OnTakePointDamage");
static_assert(offsetof(UPawnVATPerfWatcher, OnTakeRadialDamage) == 514, "Offset mismatch for UPawnVATPerfWatcher::OnTakeRadialDamage");
static_assert(offsetof(UPawnVATPerfWatcher, OnActorBeginOverlap) == 515, "Offset mismatch for UPawnVATPerfWatcher::OnActorBeginOverlap");
static_assert(offsetof(UPawnVATPerfWatcher, OnActorEndOverlap) == 516, "Offset mismatch for UPawnVATPerfWatcher::OnActorEndOverlap");
static_assert(offsetof(UPawnVATPerfWatcher, OnBeginCursorOver) == 517, "Offset mismatch for UPawnVATPerfWatcher::OnBeginCursorOver");
static_assert(offsetof(UPawnVATPerfWatcher, OnEndCursorOver) == 518, "Offset mismatch for UPawnVATPerfWatcher::OnEndCursorOver");
static_assert(offsetof(UPawnVATPerfWatcher, OnClicked) == 519, "Offset mismatch for UPawnVATPerfWatcher::OnClicked");
static_assert(offsetof(UPawnVATPerfWatcher, OnReleased) == 520, "Offset mismatch for UPawnVATPerfWatcher::OnReleased");
static_assert(offsetof(UPawnVATPerfWatcher, OnInputTouchBegin) == 521, "Offset mismatch for UPawnVATPerfWatcher::OnInputTouchBegin");
static_assert(offsetof(UPawnVATPerfWatcher, OnInputTouchEnd) == 522, "Offset mismatch for UPawnVATPerfWatcher::OnInputTouchEnd");
static_assert(offsetof(UPawnVATPerfWatcher, OnInputTouchEnter) == 523, "Offset mismatch for UPawnVATPerfWatcher::OnInputTouchEnter");
static_assert(offsetof(UPawnVATPerfWatcher, OnInputTouchLeave) == 524, "Offset mismatch for UPawnVATPerfWatcher::OnInputTouchLeave");
static_assert(offsetof(UPawnVATPerfWatcher, OnActorHit) == 525, "Offset mismatch for UPawnVATPerfWatcher::OnActorHit");
static_assert(offsetof(UPawnVATPerfWatcher, OnDestroyed) == 526, "Offset mismatch for UPawnVATPerfWatcher::OnDestroyed");
static_assert(offsetof(UPawnVATPerfWatcher, OnEndPlay) == 527, "Offset mismatch for UPawnVATPerfWatcher::OnEndPlay");
static_assert(offsetof(UPawnVATPerfWatcher, InstanceComponents) == 592, "Offset mismatch for UPawnVATPerfWatcher::InstanceComponents");
static_assert(offsetof(UPawnVATPerfWatcher, BlueprintCreatedComponents) == 608, "Offset mismatch for UPawnVATPerfWatcher::BlueprintCreatedComponents");

// /Script/PawnVATManagerRuntime.PawnVATWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class UPawnVATWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPawnVATWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for UPawnVATWorldConditionSchema::ContextDataDescs");
