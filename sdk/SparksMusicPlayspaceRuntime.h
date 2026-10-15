/**
 * decamp dumper generated SDK
 * Package: /Script/SparksMusicPlayspaceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_OnPlayerPawnSet
// Kind: ScriptStruct; super: none
struct FSparksPlayspaceEvent_OnPlayerPawnSet
{
public:
    std::uint8_t PlayerID[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> PlayerPawn; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSparksPlayspaceEvent_OnPlayerPawnSet, PlayerID) == 0, "Offset mismatch for FSparksPlayspaceEvent_OnPlayerPawnSet::PlayerID");
static_assert(offsetof(FSparksPlayspaceEvent_OnPlayerPawnSet, PlayerPawn) == 48, "Offset mismatch for FSparksPlayspaceEvent_OnPlayerPawnSet::PlayerPawn");

// /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceInteractor
// Kind: ScriptStruct; super: none
struct FSparksPlayspaceInteractor
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TWeakObjectPtr<void> AddedForActor; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSparksPlayspaceInteractor, AddedForActor) == 16, "Offset mismatch for FSparksPlayspaceInteractor::AddedForActor");

// /Script/SparksMusicPlayspaceRuntime.SparksServerPerfMemSettings
// Kind: ScriptStruct; super: none
struct FSparksServerPerfMemSettings
{
public:
    FString GamePhaseName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bPeriodicCaptures; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t PeriodicCaptureCount; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t PeriodicCapturePeriodInSeconds; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t PeriodicCaptureMinDelayInSeconds; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSparksServerPerfMemSettings, GamePhaseName) == 0, "Offset mismatch for FSparksServerPerfMemSettings::GamePhaseName");
static_assert(offsetof(FSparksServerPerfMemSettings, bPeriodicCaptures) == 16, "Offset mismatch for FSparksServerPerfMemSettings::bPeriodicCaptures");
static_assert(offsetof(FSparksServerPerfMemSettings, PeriodicCaptureCount) == 20, "Offset mismatch for FSparksServerPerfMemSettings::PeriodicCaptureCount");
static_assert(offsetof(FSparksServerPerfMemSettings, PeriodicCapturePeriodInSeconds) == 24, "Offset mismatch for FSparksServerPerfMemSettings::PeriodicCapturePeriodInSeconds");
static_assert(offsetof(FSparksServerPerfMemSettings, PeriodicCaptureMinDelayInSeconds) == 28, "Offset mismatch for FSparksServerPerfMemSettings::PeriodicCaptureMinDelayInSeconds");

// /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager
// Kind: Class; super: ActorComponent_LipSyncAssetManager
class UPlayspaceComponent_LipSyncAssetManager
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

static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, PrimaryComponentTick) == 56, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::PrimaryComponentTick");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, ComponentTags) == 104, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::ComponentTags");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, AssetUserData) == 120, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::AssetUserData");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, UCSSerializationIndex) == 144, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::UCSSerializationIndex");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, bNetAddressable) == 152, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::bNetAddressable");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, bAutoActivate) == 154, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::bAutoActivate");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, bIsEditorOnly) == 155, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::bIsEditorOnly");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, CreationMethod) == 185, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::CreationMethod");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, OnComponentActivated) == 186, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::OnComponentActivated");
static_assert(offsetof(UPlayspaceComponent_LipSyncAssetManager, OnComponentDeactivated) == 187, "Offset mismatch for UPlayspaceComponent_LipSyncAssetManager::OnComponentDeactivated");

// /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_MidiEventDataManager
// Kind: Class; super: ActorComponent_MidiEventDataManager
class UPlayspaceComponent_MidiEventDataManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMidiEventDriverChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D0
    FMulticastInlineDelegate OnMidiEventDataParsed; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPlayspaceComponent_MidiEventDataManager, OnMidiEventDriverChanged) == 192, "Offset mismatch for UPlayspaceComponent_MidiEventDataManager::OnMidiEventDriverChanged");
static_assert(offsetof(UPlayspaceComponent_MidiEventDataManager, OnMidiEventDataParsed) == 232, "Offset mismatch for UPlayspaceComponent_MidiEventDataManager::OnMidiEventDataParsed");

// /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_SparksPerfMem
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

static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, PrimaryComponentTick) == 56, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::PrimaryComponentTick");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, ComponentTags) == 104, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::ComponentTags");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, AssetUserData) == 120, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::AssetUserData");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, UCSSerializationIndex) == 144, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::UCSSerializationIndex");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, bNetAddressable) == 152, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::bNetAddressable");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, bAutoActivate) == 154, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::bAutoActivate");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, bIsEditorOnly) == 155, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::bIsEditorOnly");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, CreationMethod) == 185, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::CreationMethod");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, OnComponentActivated) == 186, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::OnComponentActivated");
static_assert(offsetof(UPlayspaceComponent_SparksPerfMem, OnComponentDeactivated) == 187, "Offset mismatch for UPlayspaceComponent_SparksPerfMem::OnComponentDeactivated");

// /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPlayerManager
// Kind: Class; super: PlayspaceComponent_PlayerManager
class UPlayspaceComponent_SparksPlayerManager
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    TArray<void*> Interactors; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PlayerPawnCache; // 0x0130 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPlayspaceComponent_SparksPlayerManager, Interactors) == 288, "Offset mismatch for UPlayspaceComponent_SparksPlayerManager::Interactors");
static_assert(offsetof(UPlayspaceComponent_SparksPlayerManager, PlayerPawnCache) == 304, "Offset mismatch for UPlayspaceComponent_SparksPlayerManager::PlayerPawnCache");

// /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace
// Kind: Class; super: FortPlayspace
class USparksMusicPlayspace
{
public:
    std::uint8_t Pad_0000[0x658]; // 0x0000
    FMulticastInlineDelegate OnMusicClockChanged; // 0x0658 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0668
    std::uint8_t bAutoPlayMetasound; // 0x0680 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0681
    void* MetasoundPlayer; // 0x0688 (Size: 0x8, Type: ObjectProperty)
    void* MusicClock; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    void* CameraDirector; // 0x0698 (Size: 0x8, Type: ObjectProperty)
    void* PlayerManagerComp; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
    void* LipSyncManager; // 0x06A8 (Size: 0x8, Type: ObjectProperty)
    void* MidiEventDataManager; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
    void* PerfMemComp; // 0x06B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksMusicPlayspace, OnMusicClockChanged) == 1624, "Offset mismatch for USparksMusicPlayspace::OnMusicClockChanged");
static_assert(offsetof(USparksMusicPlayspace, bAutoPlayMetasound) == 1664, "Offset mismatch for USparksMusicPlayspace::bAutoPlayMetasound");
static_assert(offsetof(USparksMusicPlayspace, MetasoundPlayer) == 1672, "Offset mismatch for USparksMusicPlayspace::MetasoundPlayer");
static_assert(offsetof(USparksMusicPlayspace, MusicClock) == 1680, "Offset mismatch for USparksMusicPlayspace::MusicClock");
static_assert(offsetof(USparksMusicPlayspace, CameraDirector) == 1688, "Offset mismatch for USparksMusicPlayspace::CameraDirector");
static_assert(offsetof(USparksMusicPlayspace, PlayerManagerComp) == 1696, "Offset mismatch for USparksMusicPlayspace::PlayerManagerComp");
static_assert(offsetof(USparksMusicPlayspace, LipSyncManager) == 1704, "Offset mismatch for USparksMusicPlayspace::LipSyncManager");
static_assert(offsetof(USparksMusicPlayspace, MidiEventDataManager) == 1712, "Offset mismatch for USparksMusicPlayspace::MidiEventDataManager");
static_assert(offsetof(USparksMusicPlayspace, PerfMemComp) == 1720, "Offset mismatch for USparksMusicPlayspace::PerfMemComp");

// /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface
// Kind: Class; super: Interface
class USparksMusicPlayspaceInteractorInterface
{
public:
    std::uint8_t Opaque[1];
};
