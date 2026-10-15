/**
 * decamp dumper generated SDK
 * Package: /Script/VerseFortnite
 */
#pragma once
#include "Basic.h"

// /Script/VerseFortnite.BuildingDamageComponentBridgeHelper
// Kind: Class; super: Object
class UBuildingDamageComponentBridgeHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.FortActorEntitySubsystem
// Kind: Class; super: ActorEntitySubsystem
class UFortActorEntitySubsystem
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> ActorEntityRules; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorEntityRules_VK; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorEntityRules_BR; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortActorEntitySubsystem, ActorEntityRules) == 128, "Offset mismatch for UFortActorEntitySubsystem::ActorEntityRules");
static_assert(offsetof(UFortActorEntitySubsystem, ActorEntityRules_VK) == 144, "Offset mismatch for UFortActorEntitySubsystem::ActorEntityRules_VK");
static_assert(offsetof(UFortActorEntitySubsystem, ActorEntityRules_BR) == 160, "Offset mismatch for UFortActorEntitySubsystem::ActorEntityRules_BR");

// /Script/VerseFortnite.FortCharacterComponentBridgeHelper
// Kind: Class; super: Object
class UFortCharacterComponentBridgeHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.FortPawnAbilityComponentBridgeHelper
// Kind: Class; super: Object
class UFortPawnAbilityComponentBridgeHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.FortPlayspaceComponent_SimulationManager
// Kind: Class; super: FortPlayspaceComponent
class UFortPlayspaceComponent_SimulationManager
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    void* GameLifetimeSimulationEntity; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    void* RoundLifetimeSimulationEntity; // 0x0190 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayspaceComponent_SimulationManager, GameLifetimeSimulationEntity) == 392, "Offset mismatch for UFortPlayspaceComponent_SimulationManager::GameLifetimeSimulationEntity");
static_assert(offsetof(UFortPlayspaceComponent_SimulationManager, RoundLifetimeSimulationEntity) == 400, "Offset mismatch for UFortPlayspaceComponent_SimulationManager::RoundLifetimeSimulationEntity");

// /Script/VerseFortnite.FortSimulationLifetimeComponent
// Kind: Class; super: SimulationLifetimeComponent
class UFortSimulationLifetimeComponent
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

static_assert(offsetof(UFortSimulationLifetimeComponent, PrimaryComponentTick) == 56, "Offset mismatch for UFortSimulationLifetimeComponent::PrimaryComponentTick");
static_assert(offsetof(UFortSimulationLifetimeComponent, ComponentTags) == 104, "Offset mismatch for UFortSimulationLifetimeComponent::ComponentTags");
static_assert(offsetof(UFortSimulationLifetimeComponent, AssetUserData) == 120, "Offset mismatch for UFortSimulationLifetimeComponent::AssetUserData");
static_assert(offsetof(UFortSimulationLifetimeComponent, UCSSerializationIndex) == 144, "Offset mismatch for UFortSimulationLifetimeComponent::UCSSerializationIndex");
static_assert(offsetof(UFortSimulationLifetimeComponent, bNetAddressable) == 152, "Offset mismatch for UFortSimulationLifetimeComponent::bNetAddressable");
static_assert(offsetof(UFortSimulationLifetimeComponent, bAutoActivate) == 154, "Offset mismatch for UFortSimulationLifetimeComponent::bAutoActivate");
static_assert(offsetof(UFortSimulationLifetimeComponent, bIsEditorOnly) == 155, "Offset mismatch for UFortSimulationLifetimeComponent::bIsEditorOnly");
static_assert(offsetof(UFortSimulationLifetimeComponent, CreationMethod) == 185, "Offset mismatch for UFortSimulationLifetimeComponent::CreationMethod");
static_assert(offsetof(UFortSimulationLifetimeComponent, OnComponentActivated) == 186, "Offset mismatch for UFortSimulationLifetimeComponent::OnComponentActivated");
static_assert(offsetof(UFortSimulationLifetimeComponent, OnComponentDeactivated) == 187, "Offset mismatch for UFortSimulationLifetimeComponent::OnComponentDeactivated");

// /Script/VerseFortnite.TaggedObjectQueryWorldSubsystem
// Kind: Class; super: TaggedObjectQueryWorldSubsystemBase
class UTaggedObjectQueryWorldSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.TeamProxyActor
// Kind: Class; super: Actor
class UTeamProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* ActorRootComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnTeamIndexChanged; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UTeamProxyActor, ActorRootComponent) == 632, "Offset mismatch for UTeamProxyActor::ActorRootComponent");
static_assert(offsetof(UTeamProxyActor, OnTeamIndexChanged) == 640, "Offset mismatch for UTeamProxyActor::OnTeamIndexChanged");

// /Script/VerseFortnite.VerseActorPayloadWrapper
// Kind: Class; super: Actor
class UVerseActorPayloadWrapper
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

static_assert(offsetof(UVerseActorPayloadWrapper, PrimaryActorTick) == 40, "Offset mismatch for UVerseActorPayloadWrapper::PrimaryActorTick");
static_assert(offsetof(UVerseActorPayloadWrapper, bAlwaysRelevant) == 88, "Offset mismatch for UVerseActorPayloadWrapper::bAlwaysRelevant");
static_assert(offsetof(UVerseActorPayloadWrapper, bExchangedRoles) == 89, "Offset mismatch for UVerseActorPayloadWrapper::bExchangedRoles");
static_assert(offsetof(UVerseActorPayloadWrapper, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UVerseActorPayloadWrapper::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UVerseActorPayloadWrapper, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UVerseActorPayloadWrapper::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UVerseActorPayloadWrapper, bActorEnableCollision) == 93, "Offset mismatch for UVerseActorPayloadWrapper::bActorEnableCollision");
static_assert(offsetof(UVerseActorPayloadWrapper, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UVerseActorPayloadWrapper::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVerseActorPayloadWrapper, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UVerseActorPayloadWrapper::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UVerseActorPayloadWrapper, RemoteRole) == 96, "Offset mismatch for UVerseActorPayloadWrapper::RemoteRole");
static_assert(offsetof(UVerseActorPayloadWrapper, InitialLifeSpan) == 100, "Offset mismatch for UVerseActorPayloadWrapper::InitialLifeSpan");
static_assert(offsetof(UVerseActorPayloadWrapper, CustomTimeDilation) == 104, "Offset mismatch for UVerseActorPayloadWrapper::CustomTimeDilation");
static_assert(offsetof(UVerseActorPayloadWrapper, RayTracingGroupId) == 108, "Offset mismatch for UVerseActorPayloadWrapper::RayTracingGroupId");
static_assert(offsetof(UVerseActorPayloadWrapper, AttachmentReplication) == 112, "Offset mismatch for UVerseActorPayloadWrapper::AttachmentReplication");
static_assert(offsetof(UVerseActorPayloadWrapper, ReplicatedMovement) == 208, "Offset mismatch for UVerseActorPayloadWrapper::ReplicatedMovement");
static_assert(offsetof(UVerseActorPayloadWrapper, Owner) == 344, "Offset mismatch for UVerseActorPayloadWrapper::Owner");
static_assert(offsetof(UVerseActorPayloadWrapper, NetDriverName) == 352, "Offset mismatch for UVerseActorPayloadWrapper::NetDriverName");
static_assert(offsetof(UVerseActorPayloadWrapper, Role) == 356, "Offset mismatch for UVerseActorPayloadWrapper::Role");
static_assert(offsetof(UVerseActorPayloadWrapper, NetDormancy) == 357, "Offset mismatch for UVerseActorPayloadWrapper::NetDormancy");
static_assert(offsetof(UVerseActorPayloadWrapper, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UVerseActorPayloadWrapper::SpawnCollisionHandlingMethod");
static_assert(offsetof(UVerseActorPayloadWrapper, AutoReceiveInput) == 359, "Offset mismatch for UVerseActorPayloadWrapper::AutoReceiveInput");
static_assert(offsetof(UVerseActorPayloadWrapper, InputPriority) == 360, "Offset mismatch for UVerseActorPayloadWrapper::InputPriority");
static_assert(offsetof(UVerseActorPayloadWrapper, InputComponent) == 368, "Offset mismatch for UVerseActorPayloadWrapper::InputComponent");
static_assert(offsetof(UVerseActorPayloadWrapper, NetTag) == 376, "Offset mismatch for UVerseActorPayloadWrapper::NetTag");
static_assert(offsetof(UVerseActorPayloadWrapper, NetCullDistanceSquared) == 380, "Offset mismatch for UVerseActorPayloadWrapper::NetCullDistanceSquared");
static_assert(offsetof(UVerseActorPayloadWrapper, NetUpdateFrequency) == 384, "Offset mismatch for UVerseActorPayloadWrapper::NetUpdateFrequency");
static_assert(offsetof(UVerseActorPayloadWrapper, MinNetUpdateFrequency) == 388, "Offset mismatch for UVerseActorPayloadWrapper::MinNetUpdateFrequency");
static_assert(offsetof(UVerseActorPayloadWrapper, NetPriority) == 392, "Offset mismatch for UVerseActorPayloadWrapper::NetPriority");
static_assert(offsetof(UVerseActorPayloadWrapper, PhysicsReplicationMode) == 396, "Offset mismatch for UVerseActorPayloadWrapper::PhysicsReplicationMode");
static_assert(offsetof(UVerseActorPayloadWrapper, Instigator) == 408, "Offset mismatch for UVerseActorPayloadWrapper::Instigator");
static_assert(offsetof(UVerseActorPayloadWrapper, Children) == 416, "Offset mismatch for UVerseActorPayloadWrapper::Children");
static_assert(offsetof(UVerseActorPayloadWrapper, RootComponent) == 432, "Offset mismatch for UVerseActorPayloadWrapper::RootComponent");
static_assert(offsetof(UVerseActorPayloadWrapper, HLODLayer) == 448, "Offset mismatch for UVerseActorPayloadWrapper::HLODLayer");
static_assert(offsetof(UVerseActorPayloadWrapper, Layers) == 456, "Offset mismatch for UVerseActorPayloadWrapper::Layers");
static_assert(offsetof(UVerseActorPayloadWrapper, ParentComponent) == 472, "Offset mismatch for UVerseActorPayloadWrapper::ParentComponent");
static_assert(offsetof(UVerseActorPayloadWrapper, Tags) == 496, "Offset mismatch for UVerseActorPayloadWrapper::Tags");
static_assert(offsetof(UVerseActorPayloadWrapper, OnTakeAnyDamage) == 512, "Offset mismatch for UVerseActorPayloadWrapper::OnTakeAnyDamage");
static_assert(offsetof(UVerseActorPayloadWrapper, OnTakePointDamage) == 513, "Offset mismatch for UVerseActorPayloadWrapper::OnTakePointDamage");
static_assert(offsetof(UVerseActorPayloadWrapper, OnTakeRadialDamage) == 514, "Offset mismatch for UVerseActorPayloadWrapper::OnTakeRadialDamage");
static_assert(offsetof(UVerseActorPayloadWrapper, OnActorBeginOverlap) == 515, "Offset mismatch for UVerseActorPayloadWrapper::OnActorBeginOverlap");
static_assert(offsetof(UVerseActorPayloadWrapper, OnActorEndOverlap) == 516, "Offset mismatch for UVerseActorPayloadWrapper::OnActorEndOverlap");
static_assert(offsetof(UVerseActorPayloadWrapper, OnBeginCursorOver) == 517, "Offset mismatch for UVerseActorPayloadWrapper::OnBeginCursorOver");
static_assert(offsetof(UVerseActorPayloadWrapper, OnEndCursorOver) == 518, "Offset mismatch for UVerseActorPayloadWrapper::OnEndCursorOver");
static_assert(offsetof(UVerseActorPayloadWrapper, OnClicked) == 519, "Offset mismatch for UVerseActorPayloadWrapper::OnClicked");
static_assert(offsetof(UVerseActorPayloadWrapper, OnReleased) == 520, "Offset mismatch for UVerseActorPayloadWrapper::OnReleased");
static_assert(offsetof(UVerseActorPayloadWrapper, OnInputTouchBegin) == 521, "Offset mismatch for UVerseActorPayloadWrapper::OnInputTouchBegin");
static_assert(offsetof(UVerseActorPayloadWrapper, OnInputTouchEnd) == 522, "Offset mismatch for UVerseActorPayloadWrapper::OnInputTouchEnd");
static_assert(offsetof(UVerseActorPayloadWrapper, OnInputTouchEnter) == 523, "Offset mismatch for UVerseActorPayloadWrapper::OnInputTouchEnter");
static_assert(offsetof(UVerseActorPayloadWrapper, OnInputTouchLeave) == 524, "Offset mismatch for UVerseActorPayloadWrapper::OnInputTouchLeave");
static_assert(offsetof(UVerseActorPayloadWrapper, OnActorHit) == 525, "Offset mismatch for UVerseActorPayloadWrapper::OnActorHit");
static_assert(offsetof(UVerseActorPayloadWrapper, OnDestroyed) == 526, "Offset mismatch for UVerseActorPayloadWrapper::OnDestroyed");
static_assert(offsetof(UVerseActorPayloadWrapper, OnEndPlay) == 527, "Offset mismatch for UVerseActorPayloadWrapper::OnEndPlay");
static_assert(offsetof(UVerseActorPayloadWrapper, InstanceComponents) == 592, "Offset mismatch for UVerseActorPayloadWrapper::InstanceComponents");
static_assert(offsetof(UVerseActorPayloadWrapper, BlueprintCreatedComponents) == 608, "Offset mismatch for UVerseActorPayloadWrapper::BlueprintCreatedComponents");

// /Script/VerseFortnite.VerseFortniteActorWrapper
// Kind: Class; super: Object
class UVerseFortniteActorWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.VerseFortniteBRTeamCollection
// Kind: Class; super: Object
class UVerseFortniteBRTeamCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.VerseFortniteCharacter
// Kind: Class; super: VerseFortniteActorWrapper
class UVerseFortniteCharacter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.VerseFortniteMinigameTeamCollection
// Kind: Class; super: Object
class UVerseFortniteMinigameTeamCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.VerseFortnitePlayspace
// Kind: Class; super: VerseFortniteActorWrapper
class UVerseFortnitePlayspace
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Extensions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseFortnitePlayspace, Extensions) == 120, "Offset mismatch for UVerseFortnitePlayspace::Extensions");

// /Script/VerseFortnite.VerseFortnitePlayspaceExtensionBase
// Kind: Class; super: Object
class UVerseFortnitePlayspaceExtensionBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.VerseFortniteSafeZoneWrapper
// Kind: Class; super: Object
class UVerseFortniteSafeZoneWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseFortnite.VerseFortniteSubsystem
// Kind: Class; super: WorldSubsystem
class UVerseFortniteSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> ActorToWrapperMap; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerseFortniteSubsystem, ActorToWrapperMap) == 56, "Offset mismatch for UVerseFortniteSubsystem::ActorToWrapperMap");

// /Script/VerseFortnite.VerseFortniteUtilitiesComponent
// Kind: Class; super: ControllerComponent
class UVerseFortniteUtilitiesComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PreferredRenderingMode; // 0x00C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UVerseFortniteUtilitiesComponent, PreferredRenderingMode) == 192, "Offset mismatch for UVerseFortniteUtilitiesComponent::PreferredRenderingMode");
