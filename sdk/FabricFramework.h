/**
 * decamp dumper generated SDK
 * Package: /Script/FabricFramework
 */
#pragma once
#include "Basic.h"

// /Script/FabricFramework.FabricDeviceComponentBase
// Kind: Class; super: ActorComponent
class UFabricDeviceComponentBase
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnFabricGlobalSystemChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFabricZoneSystemChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ServerFabricGlobalSystem; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LocalFabricGlobalSystem; // 0x00E8 (Size: 0x8, Type: WeakObjectProperty)
    void* ServerFabricZoneSystem; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LocalFabricZoneSystem; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFabricDeviceComponentBase, OnFabricGlobalSystemChanged) == 192, "Offset mismatch for UFabricDeviceComponentBase::OnFabricGlobalSystemChanged");
static_assert(offsetof(UFabricDeviceComponentBase, OnFabricZoneSystemChanged) == 208, "Offset mismatch for UFabricDeviceComponentBase::OnFabricZoneSystemChanged");
static_assert(offsetof(UFabricDeviceComponentBase, ServerFabricGlobalSystem) == 224, "Offset mismatch for UFabricDeviceComponentBase::ServerFabricGlobalSystem");
static_assert(offsetof(UFabricDeviceComponentBase, LocalFabricGlobalSystem) == 232, "Offset mismatch for UFabricDeviceComponentBase::LocalFabricGlobalSystem");
static_assert(offsetof(UFabricDeviceComponentBase, ServerFabricZoneSystem) == 240, "Offset mismatch for UFabricDeviceComponentBase::ServerFabricZoneSystem");
static_assert(offsetof(UFabricDeviceComponentBase, LocalFabricZoneSystem) == 248, "Offset mismatch for UFabricDeviceComponentBase::LocalFabricZoneSystem");

// /Script/FabricFramework.FabricGlobalSystem
// Kind: Class; super: Actor
class UFabricGlobalSystem
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

static_assert(offsetof(UFabricGlobalSystem, PrimaryActorTick) == 40, "Offset mismatch for UFabricGlobalSystem::PrimaryActorTick");
static_assert(offsetof(UFabricGlobalSystem, bAlwaysRelevant) == 88, "Offset mismatch for UFabricGlobalSystem::bAlwaysRelevant");
static_assert(offsetof(UFabricGlobalSystem, bExchangedRoles) == 89, "Offset mismatch for UFabricGlobalSystem::bExchangedRoles");
static_assert(offsetof(UFabricGlobalSystem, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFabricGlobalSystem::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFabricGlobalSystem, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFabricGlobalSystem::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFabricGlobalSystem, bActorEnableCollision) == 93, "Offset mismatch for UFabricGlobalSystem::bActorEnableCollision");
static_assert(offsetof(UFabricGlobalSystem, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFabricGlobalSystem::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFabricGlobalSystem, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFabricGlobalSystem::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFabricGlobalSystem, RemoteRole) == 96, "Offset mismatch for UFabricGlobalSystem::RemoteRole");
static_assert(offsetof(UFabricGlobalSystem, InitialLifeSpan) == 100, "Offset mismatch for UFabricGlobalSystem::InitialLifeSpan");
static_assert(offsetof(UFabricGlobalSystem, CustomTimeDilation) == 104, "Offset mismatch for UFabricGlobalSystem::CustomTimeDilation");
static_assert(offsetof(UFabricGlobalSystem, RayTracingGroupId) == 108, "Offset mismatch for UFabricGlobalSystem::RayTracingGroupId");
static_assert(offsetof(UFabricGlobalSystem, AttachmentReplication) == 112, "Offset mismatch for UFabricGlobalSystem::AttachmentReplication");
static_assert(offsetof(UFabricGlobalSystem, ReplicatedMovement) == 208, "Offset mismatch for UFabricGlobalSystem::ReplicatedMovement");
static_assert(offsetof(UFabricGlobalSystem, Owner) == 344, "Offset mismatch for UFabricGlobalSystem::Owner");
static_assert(offsetof(UFabricGlobalSystem, NetDriverName) == 352, "Offset mismatch for UFabricGlobalSystem::NetDriverName");
static_assert(offsetof(UFabricGlobalSystem, Role) == 356, "Offset mismatch for UFabricGlobalSystem::Role");
static_assert(offsetof(UFabricGlobalSystem, NetDormancy) == 357, "Offset mismatch for UFabricGlobalSystem::NetDormancy");
static_assert(offsetof(UFabricGlobalSystem, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFabricGlobalSystem::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFabricGlobalSystem, AutoReceiveInput) == 359, "Offset mismatch for UFabricGlobalSystem::AutoReceiveInput");
static_assert(offsetof(UFabricGlobalSystem, InputPriority) == 360, "Offset mismatch for UFabricGlobalSystem::InputPriority");
static_assert(offsetof(UFabricGlobalSystem, InputComponent) == 368, "Offset mismatch for UFabricGlobalSystem::InputComponent");
static_assert(offsetof(UFabricGlobalSystem, NetTag) == 376, "Offset mismatch for UFabricGlobalSystem::NetTag");
static_assert(offsetof(UFabricGlobalSystem, NetCullDistanceSquared) == 380, "Offset mismatch for UFabricGlobalSystem::NetCullDistanceSquared");
static_assert(offsetof(UFabricGlobalSystem, NetUpdateFrequency) == 384, "Offset mismatch for UFabricGlobalSystem::NetUpdateFrequency");
static_assert(offsetof(UFabricGlobalSystem, MinNetUpdateFrequency) == 388, "Offset mismatch for UFabricGlobalSystem::MinNetUpdateFrequency");
static_assert(offsetof(UFabricGlobalSystem, NetPriority) == 392, "Offset mismatch for UFabricGlobalSystem::NetPriority");
static_assert(offsetof(UFabricGlobalSystem, PhysicsReplicationMode) == 396, "Offset mismatch for UFabricGlobalSystem::PhysicsReplicationMode");
static_assert(offsetof(UFabricGlobalSystem, Instigator) == 408, "Offset mismatch for UFabricGlobalSystem::Instigator");
static_assert(offsetof(UFabricGlobalSystem, Children) == 416, "Offset mismatch for UFabricGlobalSystem::Children");
static_assert(offsetof(UFabricGlobalSystem, RootComponent) == 432, "Offset mismatch for UFabricGlobalSystem::RootComponent");
static_assert(offsetof(UFabricGlobalSystem, HLODLayer) == 448, "Offset mismatch for UFabricGlobalSystem::HLODLayer");
static_assert(offsetof(UFabricGlobalSystem, Layers) == 456, "Offset mismatch for UFabricGlobalSystem::Layers");
static_assert(offsetof(UFabricGlobalSystem, ParentComponent) == 472, "Offset mismatch for UFabricGlobalSystem::ParentComponent");
static_assert(offsetof(UFabricGlobalSystem, Tags) == 496, "Offset mismatch for UFabricGlobalSystem::Tags");
static_assert(offsetof(UFabricGlobalSystem, OnTakeAnyDamage) == 512, "Offset mismatch for UFabricGlobalSystem::OnTakeAnyDamage");
static_assert(offsetof(UFabricGlobalSystem, OnTakePointDamage) == 513, "Offset mismatch for UFabricGlobalSystem::OnTakePointDamage");
static_assert(offsetof(UFabricGlobalSystem, OnTakeRadialDamage) == 514, "Offset mismatch for UFabricGlobalSystem::OnTakeRadialDamage");
static_assert(offsetof(UFabricGlobalSystem, OnActorBeginOverlap) == 515, "Offset mismatch for UFabricGlobalSystem::OnActorBeginOverlap");
static_assert(offsetof(UFabricGlobalSystem, OnActorEndOverlap) == 516, "Offset mismatch for UFabricGlobalSystem::OnActorEndOverlap");
static_assert(offsetof(UFabricGlobalSystem, OnBeginCursorOver) == 517, "Offset mismatch for UFabricGlobalSystem::OnBeginCursorOver");
static_assert(offsetof(UFabricGlobalSystem, OnEndCursorOver) == 518, "Offset mismatch for UFabricGlobalSystem::OnEndCursorOver");
static_assert(offsetof(UFabricGlobalSystem, OnClicked) == 519, "Offset mismatch for UFabricGlobalSystem::OnClicked");
static_assert(offsetof(UFabricGlobalSystem, OnReleased) == 520, "Offset mismatch for UFabricGlobalSystem::OnReleased");
static_assert(offsetof(UFabricGlobalSystem, OnInputTouchBegin) == 521, "Offset mismatch for UFabricGlobalSystem::OnInputTouchBegin");
static_assert(offsetof(UFabricGlobalSystem, OnInputTouchEnd) == 522, "Offset mismatch for UFabricGlobalSystem::OnInputTouchEnd");
static_assert(offsetof(UFabricGlobalSystem, OnInputTouchEnter) == 523, "Offset mismatch for UFabricGlobalSystem::OnInputTouchEnter");
static_assert(offsetof(UFabricGlobalSystem, OnInputTouchLeave) == 524, "Offset mismatch for UFabricGlobalSystem::OnInputTouchLeave");
static_assert(offsetof(UFabricGlobalSystem, OnActorHit) == 525, "Offset mismatch for UFabricGlobalSystem::OnActorHit");
static_assert(offsetof(UFabricGlobalSystem, OnDestroyed) == 526, "Offset mismatch for UFabricGlobalSystem::OnDestroyed");
static_assert(offsetof(UFabricGlobalSystem, OnEndPlay) == 527, "Offset mismatch for UFabricGlobalSystem::OnEndPlay");
static_assert(offsetof(UFabricGlobalSystem, InstanceComponents) == 592, "Offset mismatch for UFabricGlobalSystem::InstanceComponents");
static_assert(offsetof(UFabricGlobalSystem, BlueprintCreatedComponents) == 608, "Offset mismatch for UFabricGlobalSystem::BlueprintCreatedComponents");

// /Script/FabricFramework.FabricGlobalVariablesSubsystem
// Kind: Class; super: WorldSubsystem
class UFabricGlobalVariablesSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t FabricPlayspaceGameplayTag[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    void* FabricPlayspaceComponentClass; // 0x0040 (Size: 0x8, Type: ClassProperty)
    void* FabricGlobalSystemClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
    void* FabricZoneSystemClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    void* FabricMusicRandomizerClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricGlobalVariablesSubsystem, FabricPlayspaceGameplayTag) == 56, "Offset mismatch for UFabricGlobalVariablesSubsystem::FabricPlayspaceGameplayTag");
static_assert(offsetof(UFabricGlobalVariablesSubsystem, FabricPlayspaceComponentClass) == 64, "Offset mismatch for UFabricGlobalVariablesSubsystem::FabricPlayspaceComponentClass");
static_assert(offsetof(UFabricGlobalVariablesSubsystem, FabricGlobalSystemClass) == 72, "Offset mismatch for UFabricGlobalVariablesSubsystem::FabricGlobalSystemClass");
static_assert(offsetof(UFabricGlobalVariablesSubsystem, FabricZoneSystemClass) == 80, "Offset mismatch for UFabricGlobalVariablesSubsystem::FabricZoneSystemClass");
static_assert(offsetof(UFabricGlobalVariablesSubsystem, FabricMusicRandomizerClass) == 88, "Offset mismatch for UFabricGlobalVariablesSubsystem::FabricMusicRandomizerClass");

// /Script/FabricFramework.FabricMusicRandomizer
// Kind: Class; super: BuildingActor
class UFabricMusicRandomizer
{
public:
    std::uint8_t Pad_0000[0x6A8]; // 0x0000
    std::int32_t RandomSeed; // 0x06A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x06AC
    void* OwnerZoneSystem; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricMusicRandomizer, RandomSeed) == 1704, "Offset mismatch for UFabricMusicRandomizer::RandomSeed");
static_assert(offsetof(UFabricMusicRandomizer, OwnerZoneSystem) == 1712, "Offset mismatch for UFabricMusicRandomizer::OwnerZoneSystem");

// /Script/FabricFramework.FabricZoneComponent
// Kind: Class; super: PlayspaceComponent
class UFabricZoneComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TWeakObjectPtr<void> ZoneSystem; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FabricPlayspaceComponent; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> DevicesInZone; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFabricZoneComponent, ZoneSystem) == 200, "Offset mismatch for UFabricZoneComponent::ZoneSystem");
static_assert(offsetof(UFabricZoneComponent, FabricPlayspaceComponent) == 208, "Offset mismatch for UFabricZoneComponent::FabricPlayspaceComponent");
static_assert(offsetof(UFabricZoneComponent, DevicesInZone) == 216, "Offset mismatch for UFabricZoneComponent::DevicesInZone");

// /Script/FabricFramework.FabricZoneSystem
// Kind: Class; super: Actor
class UFabricZoneSystem
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bAllowRandomization; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0271
    void* OwnerZoneComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* MusicRandomizer; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricZoneSystem, bAllowRandomization) == 624, "Offset mismatch for UFabricZoneSystem::bAllowRandomization");
static_assert(offsetof(UFabricZoneSystem, OwnerZoneComponent) == 632, "Offset mismatch for UFabricZoneSystem::OwnerZoneComponent");
static_assert(offsetof(UFabricZoneSystem, MusicRandomizer) == 640, "Offset mismatch for UFabricZoneSystem::MusicRandomizer");

// /Script/FabricFramework.PlayspaceComponent_Fabric
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_Fabric
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TWeakObjectPtr<void> GlobalSystem; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> GlobalZoneSystem; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> RegisteredDevices; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GlobalDevices; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RegisteredZoneSystems; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayspaceComponent_Fabric, GlobalSystem) == 192, "Offset mismatch for UPlayspaceComponent_Fabric::GlobalSystem");
static_assert(offsetof(UPlayspaceComponent_Fabric, GlobalZoneSystem) == 200, "Offset mismatch for UPlayspaceComponent_Fabric::GlobalZoneSystem");
static_assert(offsetof(UPlayspaceComponent_Fabric, RegisteredDevices) == 208, "Offset mismatch for UPlayspaceComponent_Fabric::RegisteredDevices");
static_assert(offsetof(UPlayspaceComponent_Fabric, GlobalDevices) == 224, "Offset mismatch for UPlayspaceComponent_Fabric::GlobalDevices");
static_assert(offsetof(UPlayspaceComponent_Fabric, RegisteredZoneSystems) == 240, "Offset mismatch for UPlayspaceComponent_Fabric::RegisteredZoneSystems");
