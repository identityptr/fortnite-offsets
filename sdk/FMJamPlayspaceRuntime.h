/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamPlayspaceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamPlayspaceRuntime.FortGameFeatureAction_AddAbilitiesToPlayspaceUsers_Condition
// Kind: ScriptStruct; super: none
struct FFortGameFeatureAction_AddAbilitiesToPlayspaceUsers_Condition
{
public:
    FString CVarName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t RequiredValue; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortGameFeatureAction_AddAbilitiesToPlayspaceUsers_Condition, CVarName) == 0, "Offset mismatch for FFortGameFeatureAction_AddAbilitiesToPlayspaceUsers_Condition::CVarName");
static_assert(offsetof(FFortGameFeatureAction_AddAbilitiesToPlayspaceUsers_Condition, RequiredValue) == 16, "Offset mismatch for FFortGameFeatureAction_AddAbilitiesToPlayspaceUsers_Condition::RequiredValue");

// /Script/FMJamPlayspaceRuntime.AddAbilitySetToOverlappingActorsComponent
// Kind: Class; super: ActorComponent
class UAddAbilitySetToOverlappingActorsComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> AbilitySetsToAdd; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAddAbilitySetToOverlappingActorsComponent, AbilitySetsToAdd) == 192, "Offset mismatch for UAddAbilitySetToOverlappingActorsComponent::AbilitySetsToAdd");

// /Script/FMJamPlayspaceRuntime.FortGameFeatureAction_AddAbilitiesToPlayspaceUsers
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PlayspaceTagQuery[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    std::uint8_t PlayspaceClass[0x20]; // 0x0070 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> AbilitySetsToAdd; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CVarCondition[0x1]; // 0x00A0 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers, PlayspaceTagQuery) == 40, "Offset mismatch for UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers::PlayspaceTagQuery");
static_assert(offsetof(UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers, PlayspaceClass) == 112, "Offset mismatch for UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers::PlayspaceClass");
static_assert(offsetof(UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers, AbilitySetsToAdd) == 144, "Offset mismatch for UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers::AbilitySetsToAdd");
static_assert(offsetof(UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers, CVarCondition) == 160, "Offset mismatch for UFortGameFeatureAction_AddAbilitiesToPlayspaceUsers::CVarCondition");

// /Script/FMJamPlayspaceRuntime.JamPlayspace
// Kind: Class; super: SparksMusicPlayspace
class UJamPlayspace
{
public:
    std::uint8_t Pad_0000[0x710]; // 0x0000
    void* JamPlayerManager; // 0x0710 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock_Looped; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* AudioState; // 0x0720 (Size: 0x8, Type: ObjectProperty)
    void* MusicManager; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* ReactiveFXComponent; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    void* ExternalReachabilityComponent; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    void* NetSyncComponent; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t JamSessionGuid[0x1]; // 0x0748 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamPlayspace, JamPlayerManager) == 1808, "Offset mismatch for UJamPlayspace::JamPlayerManager");
static_assert(offsetof(UJamPlayspace, MusicClock_Looped) == 1816, "Offset mismatch for UJamPlayspace::MusicClock_Looped");
static_assert(offsetof(UJamPlayspace, AudioState) == 1824, "Offset mismatch for UJamPlayspace::AudioState");
static_assert(offsetof(UJamPlayspace, MusicManager) == 1832, "Offset mismatch for UJamPlayspace::MusicManager");
static_assert(offsetof(UJamPlayspace, ReactiveFXComponent) == 1840, "Offset mismatch for UJamPlayspace::ReactiveFXComponent");
static_assert(offsetof(UJamPlayspace, ExternalReachabilityComponent) == 1848, "Offset mismatch for UJamPlayspace::ExternalReachabilityComponent");
static_assert(offsetof(UJamPlayspace, NetSyncComponent) == 1856, "Offset mismatch for UJamPlayspace::NetSyncComponent");
static_assert(offsetof(UJamPlayspace, JamSessionGuid) == 1864, "Offset mismatch for UJamPlayspace::JamSessionGuid");

// /Script/FMJamPlayspaceRuntime.JamPlayspaceBlockerInterface
// Kind: Class; super: Interface
class UJamPlayspaceBlockerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_JamCompanion
// Kind: Class; super: PlayspaceComponent
class UJamPlayspaceComponent_JamCompanion
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t bOverrideShouldPlaySongAlone; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceShouldPlaySongAlone; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJamPlayspaceComponent_JamCompanion, bOverrideShouldPlaySongAlone) == 216, "Offset mismatch for UJamPlayspaceComponent_JamCompanion::bOverrideShouldPlaySongAlone");
static_assert(offsetof(UJamPlayspaceComponent_JamCompanion, bForceShouldPlaySongAlone) == 217, "Offset mismatch for UJamPlayspaceComponent_JamCompanion::bForceShouldPlaySongAlone");

// /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_PlayerManager
// Kind: Class; super: PlayspaceComponent_SparksPlayerManager
class UJamPlayspaceComponent_PlayerManager
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    TArray<void*> Interactors; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlayerPawnCache; // 0x0130 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJamPlayspaceComponent_PlayerManager, Interactors) == 288, "Offset mismatch for UJamPlayspaceComponent_PlayerManager::Interactors");
static_assert(offsetof(UJamPlayspaceComponent_PlayerManager, PlayerPawnCache) == 304, "Offset mismatch for UJamPlayspaceComponent_PlayerManager::PlayerPawnCache");

// /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume
// Kind: Class; super: GameplayVolume
class UJamPlayspaceVolume
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t AutoJammerProfilePic[0x20]; // 0x0340 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t JamCompanionSong[0x4]; // 0x0360 (Size: 0x4, Type: NameProperty)
    std::uint8_t bShouldJamCompanionStaggerAutoJammers; // 0x0364 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0365
    std::uint8_t TooCloseToJamErrorMessage[0x8]; // 0x0368 (Size: 0x8, Type: StructProperty)
    void* SpecialLocationMarkerManager; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamPlayspaceVolume, AutoJammerProfilePic) == 832, "Offset mismatch for UJamPlayspaceVolume::AutoJammerProfilePic");
static_assert(offsetof(UJamPlayspaceVolume, JamCompanionSong) == 864, "Offset mismatch for UJamPlayspaceVolume::JamCompanionSong");
static_assert(offsetof(UJamPlayspaceVolume, bShouldJamCompanionStaggerAutoJammers) == 868, "Offset mismatch for UJamPlayspaceVolume::bShouldJamCompanionStaggerAutoJammers");
static_assert(offsetof(UJamPlayspaceVolume, TooCloseToJamErrorMessage) == 872, "Offset mismatch for UJamPlayspaceVolume::TooCloseToJamErrorMessage");
static_assert(offsetof(UJamPlayspaceVolume, SpecialLocationMarkerManager) == 880, "Offset mismatch for UJamPlayspaceVolume::SpecialLocationMarkerManager");

// /Script/FMJamPlayspaceRuntime.JamPlayspaceVolumeComponent_ProvideTransforms
// Kind: Class; super: ActorComponent
class UJamPlayspaceVolumeComponent_ProvideTransforms
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t TransformsBaseComponent[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    TArray<void*> SignificantTransforms; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ProviderTags[0x1]; // 0x00F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamPlayspaceVolumeComponent_ProvideTransforms, TransformsBaseComponent) == 192, "Offset mismatch for UJamPlayspaceVolumeComponent_ProvideTransforms::TransformsBaseComponent");
static_assert(offsetof(UJamPlayspaceVolumeComponent_ProvideTransforms, SignificantTransforms) == 232, "Offset mismatch for UJamPlayspaceVolumeComponent_ProvideTransforms::SignificantTransforms");
static_assert(offsetof(UJamPlayspaceVolumeComponent_ProvideTransforms, ProviderTags) == 248, "Offset mismatch for UJamPlayspaceVolumeComponent_ProvideTransforms::ProviderTags");

// /Script/FMJamPlayspaceRuntime.JamQuickplayPlayerSpawningComponent
// Kind: Class; super: PlayspaceComponent_PlayerSpawning
class UJamQuickplayPlayerSpawningComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t PregameSpawnTags[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJamQuickplayPlayerSpawningComponent, PregameSpawnTags) == 208, "Offset mismatch for UJamQuickplayPlayerSpawningComponent::PregameSpawnTags");

// /Script/FMJamPlayspaceRuntime.PlayspaceComponent_AddGameFeatureAbilitiesToUsers
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_AddGameFeatureAbilitiesToUsers
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

static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, PrimaryComponentTick) == 56, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::PrimaryComponentTick");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, ComponentTags) == 104, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::ComponentTags");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, AssetUserData) == 120, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::AssetUserData");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, UCSSerializationIndex) == 144, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::UCSSerializationIndex");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, bNetAddressable) == 152, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::bNetAddressable");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, bAutoActivate) == 154, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::bAutoActivate");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, bIsEditorOnly) == 155, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::bIsEditorOnly");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, CreationMethod) == 185, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::CreationMethod");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, OnComponentActivated) == 186, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::OnComponentActivated");
static_assert(offsetof(UPlayspaceComponent_AddGameFeatureAbilitiesToUsers, OnComponentDeactivated) == 187, "Offset mismatch for UPlayspaceComponent_AddGameFeatureAbilitiesToUsers::OnComponentDeactivated");
