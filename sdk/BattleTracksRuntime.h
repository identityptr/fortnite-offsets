/**
 * decamp dumper generated SDK
 * Package: /Script/BattleTracksRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BattleTracksRuntime.FortBattleTracksPlaySongEvent
// Kind: ScriptStruct; super: none
struct FFortBattleTracksPlaySongEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TScriptInterface<void> Song; // 0x0008 (Size: 0x10, Type: InterfaceProperty)
    std::int32_t JamTrackIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t MomentTag[0x4]; // 0x001C (Size: 0x4, Type: StructProperty)
    std::uint8_t MusicEventTag[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t MusicEventBehaviorTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortBattleTracksPlaySongEvent, Song) == 8, "Offset mismatch for FFortBattleTracksPlaySongEvent::Song");
static_assert(offsetof(FFortBattleTracksPlaySongEvent, JamTrackIndex) == 24, "Offset mismatch for FFortBattleTracksPlaySongEvent::JamTrackIndex");
static_assert(offsetof(FFortBattleTracksPlaySongEvent, MomentTag) == 28, "Offset mismatch for FFortBattleTracksPlaySongEvent::MomentTag");
static_assert(offsetof(FFortBattleTracksPlaySongEvent, MusicEventTag) == 32, "Offset mismatch for FFortBattleTracksPlaySongEvent::MusicEventTag");
static_assert(offsetof(FFortBattleTracksPlaySongEvent, MusicEventBehaviorTags) == 40, "Offset mismatch for FFortBattleTracksPlaySongEvent::MusicEventBehaviorTags");

// /Script/BattleTracksRuntime.FortBattleTracksPrepareSongEvent
// Kind: ScriptStruct; super: FortBattleTracksPlaySongEvent
struct FFortBattleTracksPrepareSongEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TScriptInterface<void> Song; // 0x0008 (Size: 0x10, Type: InterfaceProperty)
    std::int32_t JamTrackIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t MomentTag[0x4]; // 0x001C (Size: 0x4, Type: StructProperty)
    std::uint8_t MusicEventTag[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t MusicEventBehaviorTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortBattleTracksPrepareSongEvent, Song) == 8, "Offset mismatch for FFortBattleTracksPrepareSongEvent::Song");
static_assert(offsetof(FFortBattleTracksPrepareSongEvent, JamTrackIndex) == 24, "Offset mismatch for FFortBattleTracksPrepareSongEvent::JamTrackIndex");
static_assert(offsetof(FFortBattleTracksPrepareSongEvent, MomentTag) == 28, "Offset mismatch for FFortBattleTracksPrepareSongEvent::MomentTag");
static_assert(offsetof(FFortBattleTracksPrepareSongEvent, MusicEventTag) == 32, "Offset mismatch for FFortBattleTracksPrepareSongEvent::MusicEventTag");
static_assert(offsetof(FFortBattleTracksPrepareSongEvent, MusicEventBehaviorTags) == 40, "Offset mismatch for FFortBattleTracksPrepareSongEvent::MusicEventBehaviorTags");

// /Script/BattleTracksRuntime.FortBattleTracksStopSongEvent
// Kind: ScriptStruct; super: none
struct FFortBattleTracksStopSongEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BattleTracksRuntime.BattleTracksPlayerComponent
// Kind: Class; super: FortControllerComponent
class UBattleTracksPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* PlayerController; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* PlayerPawn; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* SparksCosmeticComponent; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MusicPlayer; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00E8
    TMap<void*, void*> MomentMixes; // 0x00F8 (Size: 0x10, Type: MapProperty)
    void* ActiveMomentMix; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentMomentMixTag[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBattleTracksPlayerComponent, PlayerController) == 200, "Offset mismatch for UBattleTracksPlayerComponent::PlayerController");
static_assert(offsetof(UBattleTracksPlayerComponent, PlayerPawn) == 208, "Offset mismatch for UBattleTracksPlayerComponent::PlayerPawn");
static_assert(offsetof(UBattleTracksPlayerComponent, SparksCosmeticComponent) == 216, "Offset mismatch for UBattleTracksPlayerComponent::SparksCosmeticComponent");
static_assert(offsetof(UBattleTracksPlayerComponent, MusicPlayer) == 224, "Offset mismatch for UBattleTracksPlayerComponent::MusicPlayer");
static_assert(offsetof(UBattleTracksPlayerComponent, MomentMixes) == 248, "Offset mismatch for UBattleTracksPlayerComponent::MomentMixes");
static_assert(offsetof(UBattleTracksPlayerComponent, ActiveMomentMix) == 264, "Offset mismatch for UBattleTracksPlayerComponent::ActiveMomentMix");
static_assert(offsetof(UBattleTracksPlayerComponent, CurrentMomentMixTag) == 272, "Offset mismatch for UBattleTracksPlayerComponent::CurrentMomentMixTag");
