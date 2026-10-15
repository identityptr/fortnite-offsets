/**
 * decamp dumper generated SDK
 * Package: /Script/MusicBlocks
 */
#pragma once
#include "Basic.h"

// /Script/MusicBlocks.MusicSequencerHitArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FMusicSequencerHitArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningComponent; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMusicSequencerHitArray, Items) == 72, "Offset mismatch for FMusicSequencerHitArray::Items");
static_assert(offsetof(FMusicSequencerHitArray, OwningComponent) == 88, "Offset mismatch for FMusicSequencerHitArray::OwningComponent");

// /Script/MusicBlocks.MusicSequencerHitEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FMusicSequencerHitEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Handle[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    float ServerWorldTimeStart; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    void* ActorClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> Actor; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> InstigatorPlayerState; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SoundLocation[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::int32_t SoundIndex; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0054
    std::uint8_t TimerHandle[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMusicSequencerHitEntry, Handle) == 16, "Offset mismatch for FMusicSequencerHitEntry::Handle");
static_assert(offsetof(FMusicSequencerHitEntry, ServerWorldTimeStart) == 24, "Offset mismatch for FMusicSequencerHitEntry::ServerWorldTimeStart");
static_assert(offsetof(FMusicSequencerHitEntry, ActorClass) == 32, "Offset mismatch for FMusicSequencerHitEntry::ActorClass");
static_assert(offsetof(FMusicSequencerHitEntry, Actor) == 40, "Offset mismatch for FMusicSequencerHitEntry::Actor");
static_assert(offsetof(FMusicSequencerHitEntry, InstigatorPlayerState) == 48, "Offset mismatch for FMusicSequencerHitEntry::InstigatorPlayerState");
static_assert(offsetof(FMusicSequencerHitEntry, SoundLocation) == 56, "Offset mismatch for FMusicSequencerHitEntry::SoundLocation");
static_assert(offsetof(FMusicSequencerHitEntry, SoundIndex) == 80, "Offset mismatch for FMusicSequencerHitEntry::SoundIndex");
static_assert(offsetof(FMusicSequencerHitEntry, TimerHandle) == 88, "Offset mismatch for FMusicSequencerHitEntry::TimerHandle");

// /Script/MusicBlocks.MusicSequencerHitHandle
// Kind: ScriptStruct; super: none
struct FMusicSequencerHitHandle
{
public:
    std::uint64_t Handle; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FMusicSequencerHitHandle, Handle) == 0, "Offset mismatch for FMusicSequencerHitHandle::Handle");

// /Script/MusicBlocks.MusicSequencerHitActor
// Kind: Class; super: Actor
class UMusicSequencerHitActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* MusicSequencerHitComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMusicSequencerHitActor, MusicSequencerHitComponent) == 624, "Offset mismatch for UMusicSequencerHitActor::MusicSequencerHitComponent");

// /Script/MusicBlocks.MusicSequencerHitAdderComponent
// Kind: Class; super: PlayspaceComponent
class UMusicSequencerHitAdderComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* MusicSequencerHitActorClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> MusicSequencerHitActor; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMusicSequencerHitAdderComponent, MusicSequencerHitActorClass) == 192, "Offset mismatch for UMusicSequencerHitAdderComponent::MusicSequencerHitActorClass");
static_assert(offsetof(UMusicSequencerHitAdderComponent, MusicSequencerHitActor) == 200, "Offset mismatch for UMusicSequencerHitAdderComponent::MusicSequencerHitActor");

// /Script/MusicBlocks.MusicSequencerHitComponent
// Kind: Class; super: ActorComponent
class UMusicSequencerHitComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t MusicSequencerEventList[0x60]; // 0x00C0 (Size: 0x60, Type: StructProperty)
    TArray<void*> LoadedSoundsList; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoundPreloadClassList; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMusicSequencerHitComponent, MusicSequencerEventList) == 192, "Offset mismatch for UMusicSequencerHitComponent::MusicSequencerEventList");
static_assert(offsetof(UMusicSequencerHitComponent, LoadedSoundsList) == 288, "Offset mismatch for UMusicSequencerHitComponent::LoadedSoundsList");
static_assert(offsetof(UMusicSequencerHitComponent, SoundPreloadClassList) == 304, "Offset mismatch for UMusicSequencerHitComponent::SoundPreloadClassList");
