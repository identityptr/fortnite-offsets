/**
 * decamp dumper generated SDK
 * Package: /Script/BreadcrumbDebugger
 */
#pragma once
#include "Basic.h"

// /Script/BreadcrumbDebugger.BreadcrumbCallsite
// Kind: ScriptStruct; super: none
struct FBreadcrumbCallsite
{
public:
    std::uint32_t ID; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString DisplayName; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString FilePath; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString Filename; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString Method; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::int32_t Line; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t Col; // 0x004C (Size: 0x4, Type: IntProperty)
    std::uint8_t bBreakOnHit; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    FString SourceSnippet; // 0x0058 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FBreadcrumbCallsite, ID) == 0, "Offset mismatch for FBreadcrumbCallsite::ID");
static_assert(offsetof(FBreadcrumbCallsite, DisplayName) == 8, "Offset mismatch for FBreadcrumbCallsite::DisplayName");
static_assert(offsetof(FBreadcrumbCallsite, FilePath) == 24, "Offset mismatch for FBreadcrumbCallsite::FilePath");
static_assert(offsetof(FBreadcrumbCallsite, Filename) == 40, "Offset mismatch for FBreadcrumbCallsite::Filename");
static_assert(offsetof(FBreadcrumbCallsite, Method) == 56, "Offset mismatch for FBreadcrumbCallsite::Method");
static_assert(offsetof(FBreadcrumbCallsite, Line) == 72, "Offset mismatch for FBreadcrumbCallsite::Line");
static_assert(offsetof(FBreadcrumbCallsite, Col) == 76, "Offset mismatch for FBreadcrumbCallsite::Col");
static_assert(offsetof(FBreadcrumbCallsite, bBreakOnHit) == 80, "Offset mismatch for FBreadcrumbCallsite::bBreakOnHit");
static_assert(offsetof(FBreadcrumbCallsite, SourceSnippet) == 88, "Offset mismatch for FBreadcrumbCallsite::SourceSnippet");

// /Script/BreadcrumbDebugger.BreadcrumbCapturedVariable
// Kind: ScriptStruct; super: none
struct FBreadcrumbCapturedVariable
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FBreadcrumbCapturedVariable, Name) == 0, "Offset mismatch for FBreadcrumbCapturedVariable::Name");
static_assert(offsetof(FBreadcrumbCapturedVariable, Value) == 16, "Offset mismatch for FBreadcrumbCapturedVariable::Value");

// /Script/BreadcrumbDebugger.BreadcrumbInstance
// Kind: ScriptStruct; super: none
struct FBreadcrumbInstance
{
public:
    std::uint32_t CallsiteId; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::int64_t Frame; // 0x0008 (Size: 0x8, Type: Int64Property)
    TArray<void*> CallStack; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Timestamp[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    TArray<void*> CapturedVariables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    FString NetContextString; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsServer; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    TWeakObjectPtr<void> Actor; // 0x004C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0054
    std::uint8_t Location[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    FString AssetPath; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FBreadcrumbInstance, CallsiteId) == 0, "Offset mismatch for FBreadcrumbInstance::CallsiteId");
static_assert(offsetof(FBreadcrumbInstance, Frame) == 8, "Offset mismatch for FBreadcrumbInstance::Frame");
static_assert(offsetof(FBreadcrumbInstance, CallStack) == 16, "Offset mismatch for FBreadcrumbInstance::CallStack");
static_assert(offsetof(FBreadcrumbInstance, Timestamp) == 32, "Offset mismatch for FBreadcrumbInstance::Timestamp");
static_assert(offsetof(FBreadcrumbInstance, CapturedVariables) == 40, "Offset mismatch for FBreadcrumbInstance::CapturedVariables");
static_assert(offsetof(FBreadcrumbInstance, NetContextString) == 56, "Offset mismatch for FBreadcrumbInstance::NetContextString");
static_assert(offsetof(FBreadcrumbInstance, bIsServer) == 72, "Offset mismatch for FBreadcrumbInstance::bIsServer");
static_assert(offsetof(FBreadcrumbInstance, Actor) == 76, "Offset mismatch for FBreadcrumbInstance::Actor");
static_assert(offsetof(FBreadcrumbInstance, Location) == 88, "Offset mismatch for FBreadcrumbInstance::Location");
static_assert(offsetof(FBreadcrumbInstance, AssetPath) == 112, "Offset mismatch for FBreadcrumbInstance::AssetPath");

// /Script/BreadcrumbDebugger.BreadcrumbCheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class UBreadcrumbCheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BreadcrumbDebugger.BreadcrumbCollector
// Kind: Class; super: Actor
class UBreadcrumbCollector
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

static_assert(offsetof(UBreadcrumbCollector, PrimaryActorTick) == 40, "Offset mismatch for UBreadcrumbCollector::PrimaryActorTick");
static_assert(offsetof(UBreadcrumbCollector, bAlwaysRelevant) == 88, "Offset mismatch for UBreadcrumbCollector::bAlwaysRelevant");
static_assert(offsetof(UBreadcrumbCollector, bExchangedRoles) == 89, "Offset mismatch for UBreadcrumbCollector::bExchangedRoles");
static_assert(offsetof(UBreadcrumbCollector, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UBreadcrumbCollector::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UBreadcrumbCollector, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UBreadcrumbCollector::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UBreadcrumbCollector, bActorEnableCollision) == 93, "Offset mismatch for UBreadcrumbCollector::bActorEnableCollision");
static_assert(offsetof(UBreadcrumbCollector, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UBreadcrumbCollector::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UBreadcrumbCollector, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UBreadcrumbCollector::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UBreadcrumbCollector, RemoteRole) == 96, "Offset mismatch for UBreadcrumbCollector::RemoteRole");
static_assert(offsetof(UBreadcrumbCollector, InitialLifeSpan) == 100, "Offset mismatch for UBreadcrumbCollector::InitialLifeSpan");
static_assert(offsetof(UBreadcrumbCollector, CustomTimeDilation) == 104, "Offset mismatch for UBreadcrumbCollector::CustomTimeDilation");
static_assert(offsetof(UBreadcrumbCollector, RayTracingGroupId) == 108, "Offset mismatch for UBreadcrumbCollector::RayTracingGroupId");
static_assert(offsetof(UBreadcrumbCollector, AttachmentReplication) == 112, "Offset mismatch for UBreadcrumbCollector::AttachmentReplication");
static_assert(offsetof(UBreadcrumbCollector, ReplicatedMovement) == 208, "Offset mismatch for UBreadcrumbCollector::ReplicatedMovement");
static_assert(offsetof(UBreadcrumbCollector, Owner) == 344, "Offset mismatch for UBreadcrumbCollector::Owner");
static_assert(offsetof(UBreadcrumbCollector, NetDriverName) == 352, "Offset mismatch for UBreadcrumbCollector::NetDriverName");
static_assert(offsetof(UBreadcrumbCollector, Role) == 356, "Offset mismatch for UBreadcrumbCollector::Role");
static_assert(offsetof(UBreadcrumbCollector, NetDormancy) == 357, "Offset mismatch for UBreadcrumbCollector::NetDormancy");
static_assert(offsetof(UBreadcrumbCollector, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UBreadcrumbCollector::SpawnCollisionHandlingMethod");
static_assert(offsetof(UBreadcrumbCollector, AutoReceiveInput) == 359, "Offset mismatch for UBreadcrumbCollector::AutoReceiveInput");
static_assert(offsetof(UBreadcrumbCollector, InputPriority) == 360, "Offset mismatch for UBreadcrumbCollector::InputPriority");
static_assert(offsetof(UBreadcrumbCollector, InputComponent) == 368, "Offset mismatch for UBreadcrumbCollector::InputComponent");
static_assert(offsetof(UBreadcrumbCollector, NetTag) == 376, "Offset mismatch for UBreadcrumbCollector::NetTag");
static_assert(offsetof(UBreadcrumbCollector, NetCullDistanceSquared) == 380, "Offset mismatch for UBreadcrumbCollector::NetCullDistanceSquared");
static_assert(offsetof(UBreadcrumbCollector, NetUpdateFrequency) == 384, "Offset mismatch for UBreadcrumbCollector::NetUpdateFrequency");
static_assert(offsetof(UBreadcrumbCollector, MinNetUpdateFrequency) == 388, "Offset mismatch for UBreadcrumbCollector::MinNetUpdateFrequency");
static_assert(offsetof(UBreadcrumbCollector, NetPriority) == 392, "Offset mismatch for UBreadcrumbCollector::NetPriority");
static_assert(offsetof(UBreadcrumbCollector, PhysicsReplicationMode) == 396, "Offset mismatch for UBreadcrumbCollector::PhysicsReplicationMode");
static_assert(offsetof(UBreadcrumbCollector, Instigator) == 408, "Offset mismatch for UBreadcrumbCollector::Instigator");
static_assert(offsetof(UBreadcrumbCollector, Children) == 416, "Offset mismatch for UBreadcrumbCollector::Children");
static_assert(offsetof(UBreadcrumbCollector, RootComponent) == 432, "Offset mismatch for UBreadcrumbCollector::RootComponent");
static_assert(offsetof(UBreadcrumbCollector, HLODLayer) == 448, "Offset mismatch for UBreadcrumbCollector::HLODLayer");
static_assert(offsetof(UBreadcrumbCollector, Layers) == 456, "Offset mismatch for UBreadcrumbCollector::Layers");
static_assert(offsetof(UBreadcrumbCollector, ParentComponent) == 472, "Offset mismatch for UBreadcrumbCollector::ParentComponent");
static_assert(offsetof(UBreadcrumbCollector, Tags) == 496, "Offset mismatch for UBreadcrumbCollector::Tags");
static_assert(offsetof(UBreadcrumbCollector, OnTakeAnyDamage) == 512, "Offset mismatch for UBreadcrumbCollector::OnTakeAnyDamage");
static_assert(offsetof(UBreadcrumbCollector, OnTakePointDamage) == 513, "Offset mismatch for UBreadcrumbCollector::OnTakePointDamage");
static_assert(offsetof(UBreadcrumbCollector, OnTakeRadialDamage) == 514, "Offset mismatch for UBreadcrumbCollector::OnTakeRadialDamage");
static_assert(offsetof(UBreadcrumbCollector, OnActorBeginOverlap) == 515, "Offset mismatch for UBreadcrumbCollector::OnActorBeginOverlap");
static_assert(offsetof(UBreadcrumbCollector, OnActorEndOverlap) == 516, "Offset mismatch for UBreadcrumbCollector::OnActorEndOverlap");
static_assert(offsetof(UBreadcrumbCollector, OnBeginCursorOver) == 517, "Offset mismatch for UBreadcrumbCollector::OnBeginCursorOver");
static_assert(offsetof(UBreadcrumbCollector, OnEndCursorOver) == 518, "Offset mismatch for UBreadcrumbCollector::OnEndCursorOver");
static_assert(offsetof(UBreadcrumbCollector, OnClicked) == 519, "Offset mismatch for UBreadcrumbCollector::OnClicked");
static_assert(offsetof(UBreadcrumbCollector, OnReleased) == 520, "Offset mismatch for UBreadcrumbCollector::OnReleased");
static_assert(offsetof(UBreadcrumbCollector, OnInputTouchBegin) == 521, "Offset mismatch for UBreadcrumbCollector::OnInputTouchBegin");
static_assert(offsetof(UBreadcrumbCollector, OnInputTouchEnd) == 522, "Offset mismatch for UBreadcrumbCollector::OnInputTouchEnd");
static_assert(offsetof(UBreadcrumbCollector, OnInputTouchEnter) == 523, "Offset mismatch for UBreadcrumbCollector::OnInputTouchEnter");
static_assert(offsetof(UBreadcrumbCollector, OnInputTouchLeave) == 524, "Offset mismatch for UBreadcrumbCollector::OnInputTouchLeave");
static_assert(offsetof(UBreadcrumbCollector, OnActorHit) == 525, "Offset mismatch for UBreadcrumbCollector::OnActorHit");
static_assert(offsetof(UBreadcrumbCollector, OnDestroyed) == 526, "Offset mismatch for UBreadcrumbCollector::OnDestroyed");
static_assert(offsetof(UBreadcrumbCollector, OnEndPlay) == 527, "Offset mismatch for UBreadcrumbCollector::OnEndPlay");
static_assert(offsetof(UBreadcrumbCollector, InstanceComponents) == 592, "Offset mismatch for UBreadcrumbCollector::InstanceComponents");
static_assert(offsetof(UBreadcrumbCollector, BlueprintCreatedComponents) == 608, "Offset mismatch for UBreadcrumbCollector::BlueprintCreatedComponents");

// /Script/BreadcrumbDebugger.BreadcrumbViewerMenu
// Kind: Class; super: ImGuiDebugMenuBase
class UBreadcrumbViewerMenu
{
public:
    std::uint8_t Pad_0000[0x430]; // 0x0000
    TMap<void*, void*> ActiveCallsiteIds; // 0x0430 (Size: 0x10, Type: MapProperty)
    FString TimelineSearchString; // 0x0440 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UBreadcrumbViewerMenu, ActiveCallsiteIds) == 1072, "Offset mismatch for UBreadcrumbViewerMenu::ActiveCallsiteIds");
static_assert(offsetof(UBreadcrumbViewerMenu, TimelineSearchString) == 1088, "Offset mismatch for UBreadcrumbViewerMenu::TimelineSearchString");
