/**
 * decamp dumper generated SDK
 * Package: /Script/LobbyMusicRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LobbyMusicRuntime.FortMusicPackPreviewActor2
// Kind: Class; super: Actor
class UFortMusicPackPreviewActor2
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

static_assert(offsetof(UFortMusicPackPreviewActor2, PrimaryActorTick) == 40, "Offset mismatch for UFortMusicPackPreviewActor2::PrimaryActorTick");
static_assert(offsetof(UFortMusicPackPreviewActor2, bAlwaysRelevant) == 88, "Offset mismatch for UFortMusicPackPreviewActor2::bAlwaysRelevant");
static_assert(offsetof(UFortMusicPackPreviewActor2, bExchangedRoles) == 89, "Offset mismatch for UFortMusicPackPreviewActor2::bExchangedRoles");
static_assert(offsetof(UFortMusicPackPreviewActor2, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFortMusicPackPreviewActor2::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFortMusicPackPreviewActor2, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFortMusicPackPreviewActor2::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFortMusicPackPreviewActor2, bActorEnableCollision) == 93, "Offset mismatch for UFortMusicPackPreviewActor2::bActorEnableCollision");
static_assert(offsetof(UFortMusicPackPreviewActor2, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFortMusicPackPreviewActor2::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortMusicPackPreviewActor2, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFortMusicPackPreviewActor2::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFortMusicPackPreviewActor2, RemoteRole) == 96, "Offset mismatch for UFortMusicPackPreviewActor2::RemoteRole");
static_assert(offsetof(UFortMusicPackPreviewActor2, InitialLifeSpan) == 100, "Offset mismatch for UFortMusicPackPreviewActor2::InitialLifeSpan");
static_assert(offsetof(UFortMusicPackPreviewActor2, CustomTimeDilation) == 104, "Offset mismatch for UFortMusicPackPreviewActor2::CustomTimeDilation");
static_assert(offsetof(UFortMusicPackPreviewActor2, RayTracingGroupId) == 108, "Offset mismatch for UFortMusicPackPreviewActor2::RayTracingGroupId");
static_assert(offsetof(UFortMusicPackPreviewActor2, AttachmentReplication) == 112, "Offset mismatch for UFortMusicPackPreviewActor2::AttachmentReplication");
static_assert(offsetof(UFortMusicPackPreviewActor2, ReplicatedMovement) == 208, "Offset mismatch for UFortMusicPackPreviewActor2::ReplicatedMovement");
static_assert(offsetof(UFortMusicPackPreviewActor2, Owner) == 344, "Offset mismatch for UFortMusicPackPreviewActor2::Owner");
static_assert(offsetof(UFortMusicPackPreviewActor2, NetDriverName) == 352, "Offset mismatch for UFortMusicPackPreviewActor2::NetDriverName");
static_assert(offsetof(UFortMusicPackPreviewActor2, Role) == 356, "Offset mismatch for UFortMusicPackPreviewActor2::Role");
static_assert(offsetof(UFortMusicPackPreviewActor2, NetDormancy) == 357, "Offset mismatch for UFortMusicPackPreviewActor2::NetDormancy");
static_assert(offsetof(UFortMusicPackPreviewActor2, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFortMusicPackPreviewActor2::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFortMusicPackPreviewActor2, AutoReceiveInput) == 359, "Offset mismatch for UFortMusicPackPreviewActor2::AutoReceiveInput");
static_assert(offsetof(UFortMusicPackPreviewActor2, InputPriority) == 360, "Offset mismatch for UFortMusicPackPreviewActor2::InputPriority");
static_assert(offsetof(UFortMusicPackPreviewActor2, InputComponent) == 368, "Offset mismatch for UFortMusicPackPreviewActor2::InputComponent");
static_assert(offsetof(UFortMusicPackPreviewActor2, NetTag) == 376, "Offset mismatch for UFortMusicPackPreviewActor2::NetTag");
static_assert(offsetof(UFortMusicPackPreviewActor2, NetCullDistanceSquared) == 380, "Offset mismatch for UFortMusicPackPreviewActor2::NetCullDistanceSquared");
static_assert(offsetof(UFortMusicPackPreviewActor2, NetUpdateFrequency) == 384, "Offset mismatch for UFortMusicPackPreviewActor2::NetUpdateFrequency");
static_assert(offsetof(UFortMusicPackPreviewActor2, MinNetUpdateFrequency) == 388, "Offset mismatch for UFortMusicPackPreviewActor2::MinNetUpdateFrequency");
static_assert(offsetof(UFortMusicPackPreviewActor2, NetPriority) == 392, "Offset mismatch for UFortMusicPackPreviewActor2::NetPriority");
static_assert(offsetof(UFortMusicPackPreviewActor2, PhysicsReplicationMode) == 396, "Offset mismatch for UFortMusicPackPreviewActor2::PhysicsReplicationMode");
static_assert(offsetof(UFortMusicPackPreviewActor2, Instigator) == 408, "Offset mismatch for UFortMusicPackPreviewActor2::Instigator");
static_assert(offsetof(UFortMusicPackPreviewActor2, Children) == 416, "Offset mismatch for UFortMusicPackPreviewActor2::Children");
static_assert(offsetof(UFortMusicPackPreviewActor2, RootComponent) == 432, "Offset mismatch for UFortMusicPackPreviewActor2::RootComponent");
static_assert(offsetof(UFortMusicPackPreviewActor2, HLODLayer) == 448, "Offset mismatch for UFortMusicPackPreviewActor2::HLODLayer");
static_assert(offsetof(UFortMusicPackPreviewActor2, Layers) == 456, "Offset mismatch for UFortMusicPackPreviewActor2::Layers");
static_assert(offsetof(UFortMusicPackPreviewActor2, ParentComponent) == 472, "Offset mismatch for UFortMusicPackPreviewActor2::ParentComponent");
static_assert(offsetof(UFortMusicPackPreviewActor2, Tags) == 496, "Offset mismatch for UFortMusicPackPreviewActor2::Tags");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnTakeAnyDamage) == 512, "Offset mismatch for UFortMusicPackPreviewActor2::OnTakeAnyDamage");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnTakePointDamage) == 513, "Offset mismatch for UFortMusicPackPreviewActor2::OnTakePointDamage");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnTakeRadialDamage) == 514, "Offset mismatch for UFortMusicPackPreviewActor2::OnTakeRadialDamage");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnActorBeginOverlap) == 515, "Offset mismatch for UFortMusicPackPreviewActor2::OnActorBeginOverlap");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnActorEndOverlap) == 516, "Offset mismatch for UFortMusicPackPreviewActor2::OnActorEndOverlap");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnBeginCursorOver) == 517, "Offset mismatch for UFortMusicPackPreviewActor2::OnBeginCursorOver");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnEndCursorOver) == 518, "Offset mismatch for UFortMusicPackPreviewActor2::OnEndCursorOver");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnClicked) == 519, "Offset mismatch for UFortMusicPackPreviewActor2::OnClicked");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnReleased) == 520, "Offset mismatch for UFortMusicPackPreviewActor2::OnReleased");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnInputTouchBegin) == 521, "Offset mismatch for UFortMusicPackPreviewActor2::OnInputTouchBegin");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnInputTouchEnd) == 522, "Offset mismatch for UFortMusicPackPreviewActor2::OnInputTouchEnd");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnInputTouchEnter) == 523, "Offset mismatch for UFortMusicPackPreviewActor2::OnInputTouchEnter");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnInputTouchLeave) == 524, "Offset mismatch for UFortMusicPackPreviewActor2::OnInputTouchLeave");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnActorHit) == 525, "Offset mismatch for UFortMusicPackPreviewActor2::OnActorHit");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnDestroyed) == 526, "Offset mismatch for UFortMusicPackPreviewActor2::OnDestroyed");
static_assert(offsetof(UFortMusicPackPreviewActor2, OnEndPlay) == 527, "Offset mismatch for UFortMusicPackPreviewActor2::OnEndPlay");
static_assert(offsetof(UFortMusicPackPreviewActor2, InstanceComponents) == 592, "Offset mismatch for UFortMusicPackPreviewActor2::InstanceComponents");
static_assert(offsetof(UFortMusicPackPreviewActor2, BlueprintCreatedComponents) == 608, "Offset mismatch for UFortMusicPackPreviewActor2::BlueprintCreatedComponents");

// /Script/LobbyMusicRuntime.FortMusicPlayerRegistryLoadingScreenHiddenHack
// Kind: Class; super: GameInstanceSubsystem
class UFortMusicPlayerRegistryLoadingScreenHiddenHack
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LobbyMusicRuntime.LobbyMusicConfig
// Kind: Class; super: FortGameFeatureActionSingletonAsset
class ULobbyMusicConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MusicPackPreviewActorClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t MusicEventsToStop[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULobbyMusicConfig, MusicPackPreviewActorClass) == 40, "Offset mismatch for ULobbyMusicConfig::MusicPackPreviewActorClass");
static_assert(offsetof(ULobbyMusicConfig, MusicEventsToStop) == 72, "Offset mismatch for ULobbyMusicConfig::MusicEventsToStop");

// /Script/LobbyMusicRuntime.LobbyMusicSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class ULobbyMusicSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnPlaybackStarted; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x48]; // 0x0040
    void* MusicPlayer; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0090
    void* PlaylistController; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* LobbyMusicShufflePlaylist; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> LastEquippedMusic; // 0x00B0 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> MusicOverride; // 0x00C0 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_0003[0x8]; // 0x00D0
    TScriptInterface<void> LastLoadoutMusic; // 0x00D8 (Size: 0x10, Type: InterfaceProperty)
    void* PreviewMusicPlayer; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x00F0
    TScriptInterface<void> CurrentPreviewedItem; // 0x0100 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(ULobbyMusicSubsystem, OnPlaybackStarted) == 48, "Offset mismatch for ULobbyMusicSubsystem::OnPlaybackStarted");
static_assert(offsetof(ULobbyMusicSubsystem, MusicPlayer) == 136, "Offset mismatch for ULobbyMusicSubsystem::MusicPlayer");
static_assert(offsetof(ULobbyMusicSubsystem, PlaylistController) == 160, "Offset mismatch for ULobbyMusicSubsystem::PlaylistController");
static_assert(offsetof(ULobbyMusicSubsystem, LobbyMusicShufflePlaylist) == 168, "Offset mismatch for ULobbyMusicSubsystem::LobbyMusicShufflePlaylist");
static_assert(offsetof(ULobbyMusicSubsystem, LastEquippedMusic) == 176, "Offset mismatch for ULobbyMusicSubsystem::LastEquippedMusic");
static_assert(offsetof(ULobbyMusicSubsystem, MusicOverride) == 192, "Offset mismatch for ULobbyMusicSubsystem::MusicOverride");
static_assert(offsetof(ULobbyMusicSubsystem, LastLoadoutMusic) == 216, "Offset mismatch for ULobbyMusicSubsystem::LastLoadoutMusic");
static_assert(offsetof(ULobbyMusicSubsystem, PreviewMusicPlayer) == 232, "Offset mismatch for ULobbyMusicSubsystem::PreviewMusicPlayer");
static_assert(offsetof(ULobbyMusicSubsystem, CurrentPreviewedItem) == 256, "Offset mismatch for ULobbyMusicSubsystem::CurrentPreviewedItem");
