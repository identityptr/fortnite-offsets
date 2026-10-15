/**
 * decamp dumper generated SDK
 * Package: /Script/PlayspaceSystem
 */
#pragma once
#include "Basic.h"

// /Script/PlayspaceSystem.ActorOverlapEvent
// Kind: ScriptStruct; super: none
struct FActorOverlapEvent
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Volume; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FActorOverlapEvent, PlayerState) == 0, "Offset mismatch for FActorOverlapEvent::PlayerState");
static_assert(offsetof(FActorOverlapEvent, Volume) == 8, "Offset mismatch for FActorOverlapEvent::Volume");

// /Script/PlayspaceSystem.PlayspaceComponentConfiguration
// Kind: ScriptStruct; super: none
struct FPlayspaceComponentConfiguration
{
public:
    std::uint8_t PlayspaceComponentClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CreationType; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    std::uint8_t TagQuery[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    std::uint8_t Location[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlayspaceComponentConfiguration, PlayspaceComponentClass) == 0, "Offset mismatch for FPlayspaceComponentConfiguration::PlayspaceComponentClass");
static_assert(offsetof(FPlayspaceComponentConfiguration, CreationType) == 32, "Offset mismatch for FPlayspaceComponentConfiguration::CreationType");
static_assert(offsetof(FPlayspaceComponentConfiguration, TagQuery) == 40, "Offset mismatch for FPlayspaceComponentConfiguration::TagQuery");
static_assert(offsetof(FPlayspaceComponentConfiguration, Location) == 112, "Offset mismatch for FPlayspaceComponentConfiguration::Location");

// /Script/PlayspaceSystem.PlayspaceConfiguration
// Kind: ScriptStruct; super: none
struct FPlayspaceConfiguration
{
public:
    std::uint8_t PlayspaceClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CreationType; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bForceSyncLoad; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayspaceConfiguration, PlayspaceClass) == 0, "Offset mismatch for FPlayspaceConfiguration::PlayspaceClass");
static_assert(offsetof(FPlayspaceConfiguration, CreationType) == 32, "Offset mismatch for FPlayspaceConfiguration::CreationType");
static_assert(offsetof(FPlayspaceConfiguration, bForceSyncLoad) == 33, "Offset mismatch for FPlayspaceConfiguration::bForceSyncLoad");

// /Script/PlayspaceSystem.PlayspaceExternallyReachableListenRequest
// Kind: ScriptStruct; super: none
struct FPlayspaceExternallyReachableListenRequest
{
public:
    std::uint8_t Filter[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlayspaceExternallyReachableListenRequest, Filter) == 0, "Offset mismatch for FPlayspaceExternallyReachableListenRequest::Filter");

// /Script/PlayspaceSystem.PlayspaceJurisdictionFilter
// Kind: ScriptStruct; super: none
struct FPlayspaceJurisdictionFilter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ContextObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* RequesterObject; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetPlayspaceClass[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t State; // 0x0058 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPlayspaceJurisdictionFilter, ContextObject) == 40, "Offset mismatch for FPlayspaceJurisdictionFilter::ContextObject");
static_assert(offsetof(FPlayspaceJurisdictionFilter, RequesterObject) == 48, "Offset mismatch for FPlayspaceJurisdictionFilter::RequesterObject");
static_assert(offsetof(FPlayspaceJurisdictionFilter, TargetPlayspaceClass) == 56, "Offset mismatch for FPlayspaceJurisdictionFilter::TargetPlayspaceClass");
static_assert(offsetof(FPlayspaceJurisdictionFilter, State) == 88, "Offset mismatch for FPlayspaceJurisdictionFilter::State");

// /Script/PlayspaceSystem.PlayspaceSpawningInfo
// Kind: ScriptStruct; super: none
struct FPlayspaceSpawningInfo
{
public:
    std::uint8_t UserId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> RequestingPlayspace; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    void* SpawnLocationActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpawnLocation[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnRotation[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    float SpawnTimeServer; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0074
    std::uint8_t LastLocation[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    float MinTimeForCameraFadeTransition; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsRespawnFromDeath; // 0x0094 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayspaceSpawningInfo, UserId) == 0, "Offset mismatch for FPlayspaceSpawningInfo::UserId");
static_assert(offsetof(FPlayspaceSpawningInfo, RequestingPlayspace) == 48, "Offset mismatch for FPlayspaceSpawningInfo::RequestingPlayspace");
static_assert(offsetof(FPlayspaceSpawningInfo, SpawnLocationActor) == 56, "Offset mismatch for FPlayspaceSpawningInfo::SpawnLocationActor");
static_assert(offsetof(FPlayspaceSpawningInfo, SpawnLocation) == 64, "Offset mismatch for FPlayspaceSpawningInfo::SpawnLocation");
static_assert(offsetof(FPlayspaceSpawningInfo, SpawnRotation) == 88, "Offset mismatch for FPlayspaceSpawningInfo::SpawnRotation");
static_assert(offsetof(FPlayspaceSpawningInfo, SpawnTimeServer) == 112, "Offset mismatch for FPlayspaceSpawningInfo::SpawnTimeServer");
static_assert(offsetof(FPlayspaceSpawningInfo, LastLocation) == 120, "Offset mismatch for FPlayspaceSpawningInfo::LastLocation");
static_assert(offsetof(FPlayspaceSpawningInfo, MinTimeForCameraFadeTransition) == 144, "Offset mismatch for FPlayspaceSpawningInfo::MinTimeForCameraFadeTransition");
static_assert(offsetof(FPlayspaceSpawningInfo, bIsRespawnFromDeath) == 148, "Offset mismatch for FPlayspaceSpawningInfo::bIsRespawnFromDeath");

// /Script/PlayspaceSystem.PlayspaceUser
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FPlayspaceUser
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t UserId[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> LeafPlayspace; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerStateCached; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ControllerCached; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FPlayspaceUser, UserId) == 16, "Offset mismatch for FPlayspaceUser::UserId");
static_assert(offsetof(FPlayspaceUser, LeafPlayspace) == 64, "Offset mismatch for FPlayspaceUser::LeafPlayspace");
static_assert(offsetof(FPlayspaceUser, PlayerStateCached) == 72, "Offset mismatch for FPlayspaceUser::PlayerStateCached");
static_assert(offsetof(FPlayspaceUser, ControllerCached) == 80, "Offset mismatch for FPlayspaceUser::ControllerCached");

// /Script/PlayspaceSystem.PlayspaceUserList
// Kind: ScriptStruct; super: FastArraySerializer
struct FPlayspaceUserList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> PlayspaceUsers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x24]; // 0x0058
    std::uint8_t bIsInitialized; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x007D
    void* Playspace; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPlayspaceUserList, PlayspaceUsers) == 72, "Offset mismatch for FPlayspaceUserList::PlayspaceUsers");
static_assert(offsetof(FPlayspaceUserList, bIsInitialized) == 124, "Offset mismatch for FPlayspaceUserList::bIsInitialized");
static_assert(offsetof(FPlayspaceUserList, Playspace) == 128, "Offset mismatch for FPlayspaceUserList::Playspace");

// /Script/PlayspaceSystem.Playspace_ActorComponentInfo
// Kind: ScriptStruct; super: Playspace_ComponentInfo_Base
struct FPlayspace_ActorComponentInfo
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* ComponentClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FPlayspace_ActorComponentInfo, ComponentClass) == 16, "Offset mismatch for FPlayspace_ActorComponentInfo::ComponentClass");

// /Script/PlayspaceSystem.Playspace_ComponentInfo_Base
// Kind: ScriptStruct; super: none
struct FPlayspace_ComponentInfo_Base
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bCreateOnClient; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCreateOnServer; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayspace_ComponentInfo_Base, bCreateOnClient) == 8, "Offset mismatch for FPlayspace_ComponentInfo_Base::bCreateOnClient");
static_assert(offsetof(FPlayspace_ComponentInfo_Base, bCreateOnServer) == 9, "Offset mismatch for FPlayspace_ComponentInfo_Base::bCreateOnServer");

// /Script/PlayspaceSystem.Playspace_ControllerComponentInfo
// Kind: ScriptStruct; super: Playspace_ComponentInfo_Base
struct FPlayspace_ControllerComponentInfo
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* ComponentClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FPlayspace_ControllerComponentInfo, ComponentClass) == 16, "Offset mismatch for FPlayspace_ControllerComponentInfo::ComponentClass");

// /Script/PlayspaceSystem.Playspace_PlayerStateComponentInfo
// Kind: ScriptStruct; super: Playspace_ComponentInfo_Base
struct FPlayspace_PlayerStateComponentInfo
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* ComponentClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FPlayspace_PlayerStateComponentInfo, ComponentClass) == 16, "Offset mismatch for FPlayspace_PlayerStateComponentInfo::ComponentClass");

// /Script/PlayspaceSystem.ReplicatedSpawnInfo
// Kind: ScriptStruct; super: none
struct FReplicatedSpawnInfo
{
public:
    std::uint8_t SpawnLocation[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnRotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float ServerSpawnTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0034
    std::uint8_t LastLocation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float MinTimeForCameraFadeTransition; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPlayerRespawning; // 0x0054 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FReplicatedSpawnInfo, SpawnLocation) == 0, "Offset mismatch for FReplicatedSpawnInfo::SpawnLocation");
static_assert(offsetof(FReplicatedSpawnInfo, SpawnRotation) == 24, "Offset mismatch for FReplicatedSpawnInfo::SpawnRotation");
static_assert(offsetof(FReplicatedSpawnInfo, ServerSpawnTime) == 48, "Offset mismatch for FReplicatedSpawnInfo::ServerSpawnTime");
static_assert(offsetof(FReplicatedSpawnInfo, LastLocation) == 56, "Offset mismatch for FReplicatedSpawnInfo::LastLocation");
static_assert(offsetof(FReplicatedSpawnInfo, MinTimeForCameraFadeTransition) == 80, "Offset mismatch for FReplicatedSpawnInfo::MinTimeForCameraFadeTransition");
static_assert(offsetof(FReplicatedSpawnInfo, bIsPlayerRespawning) == 84, "Offset mismatch for FReplicatedSpawnInfo::bIsPlayerRespawning");

// /Script/PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddPlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PlayspaceComponentDataList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_AddPlayspaceComponent, PlayspaceComponentDataList) == 40, "Offset mismatch for UGameFeatureAction_AddPlayspaceComponent::PlayspaceComponentDataList");

// /Script/PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_CreatePlayspacesFromConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PlayspaceDataList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_CreatePlayspacesFromConfig, PlayspaceDataList) == 40, "Offset mismatch for UGameFeatureAction_CreatePlayspacesFromConfig::PlayspaceDataList");

// /Script/PlayspaceSystem.GameStateComponent_ListenForExternallyReachablePlayspaces
// Kind: Class; super: GameStateComponent
class UGameStateComponent_ListenForExternallyReachablePlayspaces
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Requests; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingRequests; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameStateComponent_ListenForExternallyReachablePlayspaces, Requests) == 248, "Offset mismatch for UGameStateComponent_ListenForExternallyReachablePlayspaces::Requests");
static_assert(offsetof(UGameStateComponent_ListenForExternallyReachablePlayspaces, PendingRequests) == 264, "Offset mismatch for UGameStateComponent_ListenForExternallyReachablePlayspaces::PendingRequests");

// /Script/PlayspaceSystem.GameplayVolume
// Kind: Class; super: Actor
class UGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate PlayspaceSetEvent; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0280
    std::uint8_t PlayspaceClassTemplate[0x20]; // 0x0298 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PlayspaceCreationType; // 0x02B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x02B9
    void* PlayspaceClass; // 0x02C0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDestroyPlayspaceOnEndPlay; // 0x02C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnPlayspaceAtGameplayVolumeLocation; // 0x02C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x02CA
    void* Playspace; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VolumeTags[0x20]; // 0x02D8 (Size: 0x20, Type: StructProperty)
    void* BoundsComponent; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayVolume, PlayspaceSetEvent) == 624, "Offset mismatch for UGameplayVolume::PlayspaceSetEvent");
static_assert(offsetof(UGameplayVolume, PlayspaceClassTemplate) == 664, "Offset mismatch for UGameplayVolume::PlayspaceClassTemplate");
static_assert(offsetof(UGameplayVolume, PlayspaceCreationType) == 696, "Offset mismatch for UGameplayVolume::PlayspaceCreationType");
static_assert(offsetof(UGameplayVolume, PlayspaceClass) == 704, "Offset mismatch for UGameplayVolume::PlayspaceClass");
static_assert(offsetof(UGameplayVolume, bDestroyPlayspaceOnEndPlay) == 712, "Offset mismatch for UGameplayVolume::bDestroyPlayspaceOnEndPlay");
static_assert(offsetof(UGameplayVolume, bSpawnPlayspaceAtGameplayVolumeLocation) == 713, "Offset mismatch for UGameplayVolume::bSpawnPlayspaceAtGameplayVolumeLocation");
static_assert(offsetof(UGameplayVolume, Playspace) == 720, "Offset mismatch for UGameplayVolume::Playspace");
static_assert(offsetof(UGameplayVolume, VolumeTags) == 728, "Offset mismatch for UGameplayVolume::VolumeTags");
static_assert(offsetof(UGameplayVolume, BoundsComponent) == 760, "Offset mismatch for UGameplayVolume::BoundsComponent");

// /Script/PlayspaceSystem.OverlapComponent
// Kind: Class; super: StaticMeshComponent
class UOverlapComponent
{
public:
    std::uint8_t Pad_0000[0x5D8]; // 0x0000
    std::int32_t ForcedLodModel; // 0x05D8 (Size: 0x4, Type: IntProperty)
    std::int32_t MinLOD; // 0x05DC (Size: 0x4, Type: IntProperty)
    std::int32_t SubDivisionStepSize; // 0x05E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t WireframeColorOverride[0x4]; // 0x05E4 (Size: 0x4, Type: StructProperty)
    void* StaticMesh; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    std::int32_t WorldPositionOffsetDisableDistance; // 0x05F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDisallowNanite; // 0x05F4 (Size: 0x1, Type: BoolProperty)
    // 0x05F4 BoolProperty bEvaluateWorldPositionOffset (shared storage)
    // 0x05F4 BoolProperty bEvaluateWorldPositionOffsetInRayTracing (shared storage)
    // 0x05F4 BoolProperty bForceDisableNanite (shared storage)
    // 0x05F4 BoolProperty bForceNaniteForMasked (shared storage)
    // 0x05F4 BoolProperty bWorldPositionOffsetWritesVelocity (shared storage)
    std::uint8_t bForceNavigationObstacle; // 0x05F5 (Size: 0x1, Type: BoolProperty)
    // 0x05F5 BoolProperty bOverrideMinLOD (shared storage)
    // 0x05F5 BoolProperty bOverrideNavAreaClass (shared storage)
    // 0x05F5 BoolProperty bOverrideNavigationExport (shared storage)
    // 0x05F5 BoolProperty bOverrideWireframeColor (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x05F6
    void* NavAreaClass; // 0x05F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bCastDistanceFieldIndirectShadow; // 0x0600 (Size: 0x1, Type: BoolProperty)
    // 0x0600 BoolProperty bDisallowMeshPaintPerInstance (shared storage)
    // 0x0600 BoolProperty bIgnoreInstanceForTextureStreaming (shared storage)
    // 0x0600 BoolProperty bOverrideDistanceFieldSelfShadowBias (shared storage)
    // 0x0600 BoolProperty bOverrideLightMapRes (shared storage)
    // 0x0600 BoolProperty bSortTriangles (shared storage)
    // 0x0600 BoolProperty bUseDefaultCollision (shared storage)
    // 0x0600 BoolProperty bUseSubDivisions (shared storage)
    std::uint8_t bEnableTextureColorMeshPainting; // 0x0601 (Size: 0x1, Type: BoolProperty)
    // 0x0601 BoolProperty bEnableVertexColorMeshPainting (shared storage)
    // 0x0601 BoolProperty bOverrideMeshPaintTextureCoordinateIndex (shared storage)
    // 0x0601 BoolProperty bOverrideMeshPaintTextureResolution (shared storage)
    // 0x0601 BoolProperty bReverseCulling (shared storage)
    // 0x0601 BoolProperty bWritesToMaterialCache (shared storage)
    std::uint8_t Pad_0002[0x2]; // 0x0602
    std::int32_t OverriddenMeshPaintTextureCoordinateIndex; // 0x0604 (Size: 0x4, Type: IntProperty)
    std::int32_t OverriddenMeshPaintTextureResolution; // 0x0608 (Size: 0x4, Type: IntProperty)
    std::int32_t OverriddenLightMapRes; // 0x060C (Size: 0x4, Type: IntProperty)
    void* MeshPaintTextureCooked; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* MeshPaintTextureOverride; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialCacheTileCount[0x8]; // 0x0620 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaterialCacheUVRegion[0x14]; // 0x0628 (Size: 0x14, Type: StructProperty)
    std::int32_t MaterialCacheUVCoordinateIndex; // 0x063C (Size: 0x4, Type: IntProperty)
    TArray<void*> MaterialCacheTextures; // 0x0640 (Size: 0x10, Type: ArrayProperty)
    float DistanceFieldIndirectShadowMinVisibility; // 0x0650 (Size: 0x4, Type: FloatProperty)
    float DistanceFieldSelfShadowBias; // 0x0654 (Size: 0x4, Type: FloatProperty)
    float StreamingDistanceMultiplier; // 0x0658 (Size: 0x4, Type: FloatProperty)
    float NanitePixelProgrammableDistance; // 0x065C (Size: 0x4, Type: FloatProperty)
    TArray<void*> LODData; // 0x0660 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StreamingTextureData; // 0x0670 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LightmassSettings[0x1]; // 0x0680 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOverlapComponent, ForcedLodModel) == 1496, "Offset mismatch for UOverlapComponent::ForcedLodModel");
static_assert(offsetof(UOverlapComponent, MinLOD) == 1500, "Offset mismatch for UOverlapComponent::MinLOD");
static_assert(offsetof(UOverlapComponent, SubDivisionStepSize) == 1504, "Offset mismatch for UOverlapComponent::SubDivisionStepSize");
static_assert(offsetof(UOverlapComponent, WireframeColorOverride) == 1508, "Offset mismatch for UOverlapComponent::WireframeColorOverride");
static_assert(offsetof(UOverlapComponent, StaticMesh) == 1512, "Offset mismatch for UOverlapComponent::StaticMesh");
static_assert(offsetof(UOverlapComponent, WorldPositionOffsetDisableDistance) == 1520, "Offset mismatch for UOverlapComponent::WorldPositionOffsetDisableDistance");
static_assert(offsetof(UOverlapComponent, bDisallowNanite) == 1524, "Offset mismatch for UOverlapComponent::bDisallowNanite");
static_assert(offsetof(UOverlapComponent, bForceNavigationObstacle) == 1525, "Offset mismatch for UOverlapComponent::bForceNavigationObstacle");
static_assert(offsetof(UOverlapComponent, NavAreaClass) == 1528, "Offset mismatch for UOverlapComponent::NavAreaClass");
static_assert(offsetof(UOverlapComponent, bCastDistanceFieldIndirectShadow) == 1536, "Offset mismatch for UOverlapComponent::bCastDistanceFieldIndirectShadow");
static_assert(offsetof(UOverlapComponent, bEnableTextureColorMeshPainting) == 1537, "Offset mismatch for UOverlapComponent::bEnableTextureColorMeshPainting");
static_assert(offsetof(UOverlapComponent, OverriddenMeshPaintTextureCoordinateIndex) == 1540, "Offset mismatch for UOverlapComponent::OverriddenMeshPaintTextureCoordinateIndex");
static_assert(offsetof(UOverlapComponent, OverriddenMeshPaintTextureResolution) == 1544, "Offset mismatch for UOverlapComponent::OverriddenMeshPaintTextureResolution");
static_assert(offsetof(UOverlapComponent, OverriddenLightMapRes) == 1548, "Offset mismatch for UOverlapComponent::OverriddenLightMapRes");
static_assert(offsetof(UOverlapComponent, MeshPaintTextureCooked) == 1552, "Offset mismatch for UOverlapComponent::MeshPaintTextureCooked");
static_assert(offsetof(UOverlapComponent, MeshPaintTextureOverride) == 1560, "Offset mismatch for UOverlapComponent::MeshPaintTextureOverride");
static_assert(offsetof(UOverlapComponent, MaterialCacheTileCount) == 1568, "Offset mismatch for UOverlapComponent::MaterialCacheTileCount");
static_assert(offsetof(UOverlapComponent, MaterialCacheUVRegion) == 1576, "Offset mismatch for UOverlapComponent::MaterialCacheUVRegion");
static_assert(offsetof(UOverlapComponent, MaterialCacheUVCoordinateIndex) == 1596, "Offset mismatch for UOverlapComponent::MaterialCacheUVCoordinateIndex");
static_assert(offsetof(UOverlapComponent, MaterialCacheTextures) == 1600, "Offset mismatch for UOverlapComponent::MaterialCacheTextures");
static_assert(offsetof(UOverlapComponent, DistanceFieldIndirectShadowMinVisibility) == 1616, "Offset mismatch for UOverlapComponent::DistanceFieldIndirectShadowMinVisibility");
static_assert(offsetof(UOverlapComponent, DistanceFieldSelfShadowBias) == 1620, "Offset mismatch for UOverlapComponent::DistanceFieldSelfShadowBias");
static_assert(offsetof(UOverlapComponent, StreamingDistanceMultiplier) == 1624, "Offset mismatch for UOverlapComponent::StreamingDistanceMultiplier");
static_assert(offsetof(UOverlapComponent, NanitePixelProgrammableDistance) == 1628, "Offset mismatch for UOverlapComponent::NanitePixelProgrammableDistance");
static_assert(offsetof(UOverlapComponent, LODData) == 1632, "Offset mismatch for UOverlapComponent::LODData");
static_assert(offsetof(UOverlapComponent, StreamingTextureData) == 1648, "Offset mismatch for UOverlapComponent::StreamingTextureData");
static_assert(offsetof(UOverlapComponent, LightmassSettings) == 1664, "Offset mismatch for UOverlapComponent::LightmassSettings");

// /Script/PlayspaceSystem.Playspace
// Kind: Class; super: Info
class UPlayspace
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate NotifyPlayspaceUserAdded; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0280
    FMulticastInlineDelegate NotifyPlayspaceUserRemoved; // 0x0298 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x02A8
    FMulticastInlineDelegate NotifyPlayspaceInitialized; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x02D0
    FMulticastInlineDelegate NotifyPlayspaceCreatedAndReady; // 0x02E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0004[0x18]; // 0x02F8
    FMulticastInlineDelegate NotifyBoundGameplayVolumeSet; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0005[0x30]; // 0x0320
    FMulticastInlineDelegate NotifyStartMatch; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0006[0x18]; // 0x0360
    FMulticastInlineDelegate NotifyEndMatch; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x18]; // 0x0388
    std::uint8_t GameplayTags[0x20]; // 0x03A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequestedPlayspaceParentTag[0x8]; // 0x03C0 (Size: 0x8, Type: StructProperty)
    TArray<void*> ChildPlayspaceClasses; // 0x03C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlayspaceUsers[0x88]; // 0x03D8 (Size: 0x88, Type: StructProperty)
    TArray<void*> ChildPlayspaces; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingUsers; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoStartMatchOnServerStart; // 0x0480 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPlayersToRespawnInParentPlayspace; // 0x0481 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoundsEvaluationType; // 0x0482 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x5]; // 0x0483
    void* PlayspaceManagerCached; // 0x0488 (Size: 0x8, Type: ObjectProperty)
    void* BoundGameplayVolume; // 0x0490 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsInitialized; // 0x0498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x1]; // 0x0499
    std::uint8_t bMatchHasEnded; // 0x049A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x1]; // 0x049B
    float MatchStartTime; // 0x049C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPlayspace, NotifyPlayspaceUserAdded) == 624, "Offset mismatch for UPlayspace::NotifyPlayspaceUserAdded");
static_assert(offsetof(UPlayspace, NotifyPlayspaceUserRemoved) == 664, "Offset mismatch for UPlayspace::NotifyPlayspaceUserRemoved");
static_assert(offsetof(UPlayspace, NotifyPlayspaceInitialized) == 704, "Offset mismatch for UPlayspace::NotifyPlayspaceInitialized");
static_assert(offsetof(UPlayspace, NotifyPlayspaceCreatedAndReady) == 744, "Offset mismatch for UPlayspace::NotifyPlayspaceCreatedAndReady");
static_assert(offsetof(UPlayspace, NotifyBoundGameplayVolumeSet) == 784, "Offset mismatch for UPlayspace::NotifyBoundGameplayVolumeSet");
static_assert(offsetof(UPlayspace, NotifyStartMatch) == 848, "Offset mismatch for UPlayspace::NotifyStartMatch");
static_assert(offsetof(UPlayspace, NotifyEndMatch) == 888, "Offset mismatch for UPlayspace::NotifyEndMatch");
static_assert(offsetof(UPlayspace, GameplayTags) == 928, "Offset mismatch for UPlayspace::GameplayTags");
static_assert(offsetof(UPlayspace, RequestedPlayspaceParentTag) == 960, "Offset mismatch for UPlayspace::RequestedPlayspaceParentTag");
static_assert(offsetof(UPlayspace, ChildPlayspaceClasses) == 968, "Offset mismatch for UPlayspace::ChildPlayspaceClasses");
static_assert(offsetof(UPlayspace, PlayspaceUsers) == 984, "Offset mismatch for UPlayspace::PlayspaceUsers");
static_assert(offsetof(UPlayspace, ChildPlayspaces) == 1120, "Offset mismatch for UPlayspace::ChildPlayspaces");
static_assert(offsetof(UPlayspace, PendingUsers) == 1136, "Offset mismatch for UPlayspace::PendingUsers");
static_assert(offsetof(UPlayspace, bAutoStartMatchOnServerStart) == 1152, "Offset mismatch for UPlayspace::bAutoStartMatchOnServerStart");
static_assert(offsetof(UPlayspace, bAllowPlayersToRespawnInParentPlayspace) == 1153, "Offset mismatch for UPlayspace::bAllowPlayersToRespawnInParentPlayspace");
static_assert(offsetof(UPlayspace, BoundsEvaluationType) == 1154, "Offset mismatch for UPlayspace::BoundsEvaluationType");
static_assert(offsetof(UPlayspace, PlayspaceManagerCached) == 1160, "Offset mismatch for UPlayspace::PlayspaceManagerCached");
static_assert(offsetof(UPlayspace, BoundGameplayVolume) == 1168, "Offset mismatch for UPlayspace::BoundGameplayVolume");
static_assert(offsetof(UPlayspace, bIsInitialized) == 1176, "Offset mismatch for UPlayspace::bIsInitialized");
static_assert(offsetof(UPlayspace, bMatchHasEnded) == 1178, "Offset mismatch for UPlayspace::bMatchHasEnded");
static_assert(offsetof(UPlayspace, MatchStartTime) == 1180, "Offset mismatch for UPlayspace::MatchStartTime");

// /Script/PlayspaceSystem.PlayspaceComponent
// Kind: Class; super: GameFrameworkComponent
class UPlayspaceComponent
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

static_assert(offsetof(UPlayspaceComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPlayspaceComponent::PrimaryComponentTick");
static_assert(offsetof(UPlayspaceComponent, ComponentTags) == 104, "Offset mismatch for UPlayspaceComponent::ComponentTags");
static_assert(offsetof(UPlayspaceComponent, AssetUserData) == 120, "Offset mismatch for UPlayspaceComponent::AssetUserData");
static_assert(offsetof(UPlayspaceComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPlayspaceComponent::UCSSerializationIndex");
static_assert(offsetof(UPlayspaceComponent, bNetAddressable) == 152, "Offset mismatch for UPlayspaceComponent::bNetAddressable");
static_assert(offsetof(UPlayspaceComponent, bAutoActivate) == 154, "Offset mismatch for UPlayspaceComponent::bAutoActivate");
static_assert(offsetof(UPlayspaceComponent, bIsEditorOnly) == 155, "Offset mismatch for UPlayspaceComponent::bIsEditorOnly");
static_assert(offsetof(UPlayspaceComponent, CreationMethod) == 185, "Offset mismatch for UPlayspaceComponent::CreationMethod");
static_assert(offsetof(UPlayspaceComponent, OnComponentActivated) == 186, "Offset mismatch for UPlayspaceComponent::OnComponentActivated");
static_assert(offsetof(UPlayspaceComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPlayspaceComponent::OnComponentDeactivated");

// /Script/PlayspaceSystem.PlayspaceComponent_DispatchExternallyReachable
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_DispatchExternallyReachable
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

static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, PrimaryComponentTick) == 56, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::PrimaryComponentTick");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, ComponentTags) == 104, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::ComponentTags");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, AssetUserData) == 120, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::AssetUserData");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, UCSSerializationIndex) == 144, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::UCSSerializationIndex");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, bNetAddressable) == 152, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::bNetAddressable");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, bAutoActivate) == 154, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::bAutoActivate");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, bIsEditorOnly) == 155, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::bIsEditorOnly");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, CreationMethod) == 185, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::CreationMethod");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, OnComponentActivated) == 186, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::OnComponentActivated");
static_assert(offsetof(UPlayspaceComponent_DispatchExternallyReachable, OnComponentDeactivated) == 187, "Offset mismatch for UPlayspaceComponent_DispatchExternallyReachable::OnComponentDeactivated");

// /Script/PlayspaceSystem.PlayspaceComponent_Logic
// Kind: Class; super: GameFrameworkComponent
class UPlayspaceComponent_Logic
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

static_assert(offsetof(UPlayspaceComponent_Logic, PrimaryComponentTick) == 56, "Offset mismatch for UPlayspaceComponent_Logic::PrimaryComponentTick");
static_assert(offsetof(UPlayspaceComponent_Logic, ComponentTags) == 104, "Offset mismatch for UPlayspaceComponent_Logic::ComponentTags");
static_assert(offsetof(UPlayspaceComponent_Logic, AssetUserData) == 120, "Offset mismatch for UPlayspaceComponent_Logic::AssetUserData");
static_assert(offsetof(UPlayspaceComponent_Logic, UCSSerializationIndex) == 144, "Offset mismatch for UPlayspaceComponent_Logic::UCSSerializationIndex");
static_assert(offsetof(UPlayspaceComponent_Logic, bNetAddressable) == 152, "Offset mismatch for UPlayspaceComponent_Logic::bNetAddressable");
static_assert(offsetof(UPlayspaceComponent_Logic, bAutoActivate) == 154, "Offset mismatch for UPlayspaceComponent_Logic::bAutoActivate");
static_assert(offsetof(UPlayspaceComponent_Logic, bIsEditorOnly) == 155, "Offset mismatch for UPlayspaceComponent_Logic::bIsEditorOnly");
static_assert(offsetof(UPlayspaceComponent_Logic, CreationMethod) == 185, "Offset mismatch for UPlayspaceComponent_Logic::CreationMethod");
static_assert(offsetof(UPlayspaceComponent_Logic, OnComponentActivated) == 186, "Offset mismatch for UPlayspaceComponent_Logic::OnComponentActivated");
static_assert(offsetof(UPlayspaceComponent_Logic, OnComponentDeactivated) == 187, "Offset mismatch for UPlayspaceComponent_Logic::OnComponentDeactivated");

// /Script/PlayspaceSystem.PlayspaceComponent_PlayerManager
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_PlayerManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> ControllerComponents; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlayerStateComponents; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorComponents; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayspaceComponent_PlayerManager, ControllerComponents) == 192, "Offset mismatch for UPlayspaceComponent_PlayerManager::ControllerComponents");
static_assert(offsetof(UPlayspaceComponent_PlayerManager, PlayerStateComponents) == 208, "Offset mismatch for UPlayspaceComponent_PlayerManager::PlayerStateComponents");
static_assert(offsetof(UPlayspaceComponent_PlayerManager, ActorComponents) == 224, "Offset mismatch for UPlayspaceComponent_PlayerManager::ActorComponents");

// /Script/PlayspaceSystem.PlayspaceComponent_PlayerSpawning
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_PlayerSpawning
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bQueueUserForSpawnWhenAdded; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    float SpawnDelayMin; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float SpawnDelayMax; // 0x00C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPlayspaceComponent_PlayerSpawning, bQueueUserForSpawnWhenAdded) == 192, "Offset mismatch for UPlayspaceComponent_PlayerSpawning::bQueueUserForSpawnWhenAdded");
static_assert(offsetof(UPlayspaceComponent_PlayerSpawning, SpawnDelayMin) == 196, "Offset mismatch for UPlayspaceComponent_PlayerSpawning::SpawnDelayMin");
static_assert(offsetof(UPlayspaceComponent_PlayerSpawning, SpawnDelayMax) == 200, "Offset mismatch for UPlayspaceComponent_PlayerSpawning::SpawnDelayMax");

// /Script/PlayspaceSystem.PlayspaceComponent_VoiceManager
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_VoiceManager
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

static_assert(offsetof(UPlayspaceComponent_VoiceManager, PrimaryComponentTick) == 56, "Offset mismatch for UPlayspaceComponent_VoiceManager::PrimaryComponentTick");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, ComponentTags) == 104, "Offset mismatch for UPlayspaceComponent_VoiceManager::ComponentTags");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, AssetUserData) == 120, "Offset mismatch for UPlayspaceComponent_VoiceManager::AssetUserData");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, UCSSerializationIndex) == 144, "Offset mismatch for UPlayspaceComponent_VoiceManager::UCSSerializationIndex");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, bNetAddressable) == 152, "Offset mismatch for UPlayspaceComponent_VoiceManager::bNetAddressable");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, bAutoActivate) == 154, "Offset mismatch for UPlayspaceComponent_VoiceManager::bAutoActivate");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, bIsEditorOnly) == 155, "Offset mismatch for UPlayspaceComponent_VoiceManager::bIsEditorOnly");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, CreationMethod) == 185, "Offset mismatch for UPlayspaceComponent_VoiceManager::CreationMethod");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, OnComponentActivated) == 186, "Offset mismatch for UPlayspaceComponent_VoiceManager::OnComponentActivated");
static_assert(offsetof(UPlayspaceComponent_VoiceManager, OnComponentDeactivated) == 187, "Offset mismatch for UPlayspaceComponent_VoiceManager::OnComponentDeactivated");

// /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
// Kind: Class; super: ControllerComponent
class UPlayspaceControllerComponent_PlayerSpawning
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerQueuedToSpawn; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SpawnCameraActor; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00D8
    std::uint8_t bClientReadyForSpawning; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00DA
    std::uint8_t ReplicatedSpawnInfo[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayspaceControllerComponent_PlayerSpawning, OnPlayerQueuedToSpawn) == 192, "Offset mismatch for UPlayspaceControllerComponent_PlayerSpawning::OnPlayerQueuedToSpawn");
static_assert(offsetof(UPlayspaceControllerComponent_PlayerSpawning, SpawnCameraActor) == 208, "Offset mismatch for UPlayspaceControllerComponent_PlayerSpawning::SpawnCameraActor");
static_assert(offsetof(UPlayspaceControllerComponent_PlayerSpawning, bClientReadyForSpawning) == 217, "Offset mismatch for UPlayspaceControllerComponent_PlayerSpawning::bClientReadyForSpawning");
static_assert(offsetof(UPlayspaceControllerComponent_PlayerSpawning, ReplicatedSpawnInfo) == 224, "Offset mismatch for UPlayspaceControllerComponent_PlayerSpawning::ReplicatedSpawnInfo");

// /Script/PlayspaceSystem.PlayspaceGameStateComponent
// Kind: Class; super: GameStateComponent
class UPlayspaceGameStateComponent
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

static_assert(offsetof(UPlayspaceGameStateComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPlayspaceGameStateComponent::PrimaryComponentTick");
static_assert(offsetof(UPlayspaceGameStateComponent, ComponentTags) == 104, "Offset mismatch for UPlayspaceGameStateComponent::ComponentTags");
static_assert(offsetof(UPlayspaceGameStateComponent, AssetUserData) == 120, "Offset mismatch for UPlayspaceGameStateComponent::AssetUserData");
static_assert(offsetof(UPlayspaceGameStateComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPlayspaceGameStateComponent::UCSSerializationIndex");
static_assert(offsetof(UPlayspaceGameStateComponent, bNetAddressable) == 152, "Offset mismatch for UPlayspaceGameStateComponent::bNetAddressable");
static_assert(offsetof(UPlayspaceGameStateComponent, bAutoActivate) == 154, "Offset mismatch for UPlayspaceGameStateComponent::bAutoActivate");
static_assert(offsetof(UPlayspaceGameStateComponent, bIsEditorOnly) == 155, "Offset mismatch for UPlayspaceGameStateComponent::bIsEditorOnly");
static_assert(offsetof(UPlayspaceGameStateComponent, CreationMethod) == 185, "Offset mismatch for UPlayspaceGameStateComponent::CreationMethod");
static_assert(offsetof(UPlayspaceGameStateComponent, OnComponentActivated) == 186, "Offset mismatch for UPlayspaceGameStateComponent::OnComponentActivated");
static_assert(offsetof(UPlayspaceGameStateComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPlayspaceGameStateComponent::OnComponentDeactivated");

// /Script/PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
// Kind: Class; super: PlayspaceGameStateComponent
class UPlayspaceGameStateComponent_PlayerSpawningManager
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TArray<void*> SpawningUsersArray; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayspaceGameStateComponent_PlayerSpawningManager, SpawningUsersArray) == 264, "Offset mismatch for UPlayspaceGameStateComponent_PlayerSpawningManager::SpawningUsersArray");

// /Script/PlayspaceSystem.PlayspaceJurisdictionFilterUtilities
// Kind: Class; super: BlueprintFunctionLibrary
class UPlayspaceJurisdictionFilterUtilities
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayspaceSystem.PlayspaceLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPlayspaceLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayspaceSystem.PlayspaceLogic
// Kind: Class; super: Actor
class UPlayspaceLogic
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* Playspace; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoStartMatchOnServerStart; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0279
    std::uint8_t bMatchHasEnded; // 0x027A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x027B
    float MatchStartTime; // 0x027C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPlayspaceLogic, Playspace) == 624, "Offset mismatch for UPlayspaceLogic::Playspace");
static_assert(offsetof(UPlayspaceLogic, bAutoStartMatchOnServerStart) == 632, "Offset mismatch for UPlayspaceLogic::bAutoStartMatchOnServerStart");
static_assert(offsetof(UPlayspaceLogic, bMatchHasEnded) == 634, "Offset mismatch for UPlayspaceLogic::bMatchHasEnded");
static_assert(offsetof(UPlayspaceLogic, MatchStartTime) == 636, "Offset mismatch for UPlayspaceLogic::MatchStartTime");

// /Script/PlayspaceSystem.PlayspaceManagerComponent
// Kind: Class; super: GameStateComponent
class UPlayspaceManagerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* RootPlayspace; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayspaceRootType; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0xDF]; // 0x00E1
    TArray<void*> UnhandledEnterEvents; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnhandledExitEvents; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TSet<void*> UnassignedPlayers; // 0x01E0 (Size: 0x50, Type: SetProperty)
    std::uint8_t bAssumeChildPlayspacesAreNested; // 0x0230 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPlayspaceManagerComponent, RootPlayspace) == 216, "Offset mismatch for UPlayspaceManagerComponent::RootPlayspace");
static_assert(offsetof(UPlayspaceManagerComponent, PlayspaceRootType) == 224, "Offset mismatch for UPlayspaceManagerComponent::PlayspaceRootType");
static_assert(offsetof(UPlayspaceManagerComponent, UnhandledEnterEvents) == 448, "Offset mismatch for UPlayspaceManagerComponent::UnhandledEnterEvents");
static_assert(offsetof(UPlayspaceManagerComponent, UnhandledExitEvents) == 464, "Offset mismatch for UPlayspaceManagerComponent::UnhandledExitEvents");
static_assert(offsetof(UPlayspaceManagerComponent, UnassignedPlayers) == 480, "Offset mismatch for UPlayspaceManagerComponent::UnassignedPlayers");
static_assert(offsetof(UPlayspaceManagerComponent, bAssumeChildPlayspacesAreNested) == 560, "Offset mismatch for UPlayspaceManagerComponent::bAssumeChildPlayspacesAreNested");

// /Script/PlayspaceSystem.PlayspaceSpawnActor
// Kind: Class; super: Actor
class UPlayspaceSpawnActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SceneComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPlayspaceSpawnActor, SceneComponent) == 624, "Offset mismatch for UPlayspaceSpawnActor::SceneComponent");

// /Script/PlayspaceSystem.WaitForDiscoverablePlayspaceWithFilterAction
// Kind: Class; super: BlueprintAsyncActionBase
class UWaitForDiscoverablePlayspaceWithFilterAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnFoundPlayspace; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Filter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWaitForDiscoverablePlayspaceWithFilterAction, OnFoundPlayspace) == 48, "Offset mismatch for UWaitForDiscoverablePlayspaceWithFilterAction::OnFoundPlayspace");
static_assert(offsetof(UWaitForDiscoverablePlayspaceWithFilterAction, Filter) == 64, "Offset mismatch for UWaitForDiscoverablePlayspaceWithFilterAction::Filter");
