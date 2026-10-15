/**
 * decamp dumper generated SDK
 * Package: /Script/FN1NativeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FN1NativeRuntime.VFortStormVolume
// Kind: ScriptStruct; super: none
struct FVFortStormVolume
{
public:
    void* VolumeActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float RejectionChance; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVFortStormVolume, VolumeActor) == 0, "Offset mismatch for FVFortStormVolume::VolumeActor");
static_assert(offsetof(FVFortStormVolume, RejectionChance) == 8, "Offset mismatch for FVFortStormVolume::RejectionChance");

// /Script/FN1NativeRuntime.VerseFortVolumeActorWrapper
// Kind: ScriptStruct; super: none
struct FVerseFortVolumeActorWrapper
{
public:
    void* VolumeActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseFortVolumeActorWrapper, VolumeActor) == 0, "Offset mismatch for FVerseFortVolumeActorWrapper::VolumeActor");

// /Script/FN1NativeRuntime.FortVerseBusMutator
// Kind: Class; super: FortAthenaMutator
class UFortVerseBusMutator
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVerseBusMutator, bMutatesGameMode) == 688, "Offset mismatch for UFortVerseBusMutator::bMutatesGameMode");
static_assert(offsetof(UFortVerseBusMutator, CachedGameMode) == 696, "Offset mismatch for UFortVerseBusMutator::CachedGameMode");
static_assert(offsetof(UFortVerseBusMutator, CachedGameState) == 704, "Offset mismatch for UFortVerseBusMutator::CachedGameState");
static_assert(offsetof(UFortVerseBusMutator, InitializedPlayerControllers) == 712, "Offset mismatch for UFortVerseBusMutator::InitializedPlayerControllers");
static_assert(offsetof(UFortVerseBusMutator, OverridePriority) == 732, "Offset mismatch for UFortVerseBusMutator::OverridePriority");
static_assert(offsetof(UFortVerseBusMutator, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortVerseBusMutator::bOnlyRunOnGameThread");

// /Script/FN1NativeRuntime.VerseFortniteBattlebus
// Kind: Class; super: Object
class UVerseFortniteBattlebus
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FN1NativeRuntime.VerseFortniteBusVolumeComponent
// Kind: Class; super: ActorComponent
class UVerseFortniteBusVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* DropZone; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseFortniteBusVolumeComponent, DropZone) == 192, "Offset mismatch for UVerseFortniteBusVolumeComponent::DropZone");

// /Script/FN1NativeRuntime.VerseFortniteStorm
// Kind: Class; super: Object
class UVerseFortniteStorm
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FN1NativeRuntime.VerseFortniteStormVolumeComponent
// Kind: Class; super: ActorComponent
class UVerseFortniteStormVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> SafeZoneVolumes; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseFortniteStormVolumeComponent, SafeZoneVolumes) == 192, "Offset mismatch for UVerseFortniteStormVolumeComponent::SafeZoneVolumes");
