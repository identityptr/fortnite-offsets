/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteMusic
 */
#pragma once
#include "Basic.h"

// /Script/FortniteMusic.FortMusicPlaybackState
// Kind: ScriptStruct; super: none
struct FFortMusicPlaybackState
{
public:
    TScriptInterface<void> CurrentItem; // 0x0000 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t PlayParams[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMusicPlaybackState, CurrentItem) == 0, "Offset mismatch for FFortMusicPlaybackState::CurrentItem");
static_assert(offsetof(FFortMusicPlaybackState, PlayParams) == 16, "Offset mismatch for FFortMusicPlaybackState::PlayParams");

// /Script/FortniteMusic.FortMusicPlayerParams
// Kind: ScriptStruct; super: none
struct FFortMusicPlayerParams
{
public:
    std::uint8_t PlaybackType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float StartTimeOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSkipCountIn; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLooping; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoPlay; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPauseWhileInaudible; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPersistAcrossLevelTransition; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x000D
    TWeakObjectPtr<void> AudioComponent; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MetaSoundSource; // 0x001C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicClock; // 0x0024 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MusicEventTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    FName MusicEventGroup; // 0x0030 (Size: 0x8, Type: NameProperty)
    std::uint8_t MusicEventBehaviorTags[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    FName AnalyticsCategory; // 0x0058 (Size: 0x8, Type: NameProperty)
    std::uint8_t InitiatingPlayer[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMusicPlayerParams, PlaybackType) == 0, "Offset mismatch for FFortMusicPlayerParams::PlaybackType");
static_assert(offsetof(FFortMusicPlayerParams, StartTimeOffset) == 4, "Offset mismatch for FFortMusicPlayerParams::StartTimeOffset");
static_assert(offsetof(FFortMusicPlayerParams, bSkipCountIn) == 8, "Offset mismatch for FFortMusicPlayerParams::bSkipCountIn");
static_assert(offsetof(FFortMusicPlayerParams, bLooping) == 9, "Offset mismatch for FFortMusicPlayerParams::bLooping");
static_assert(offsetof(FFortMusicPlayerParams, bAutoPlay) == 10, "Offset mismatch for FFortMusicPlayerParams::bAutoPlay");
static_assert(offsetof(FFortMusicPlayerParams, bPauseWhileInaudible) == 11, "Offset mismatch for FFortMusicPlayerParams::bPauseWhileInaudible");
static_assert(offsetof(FFortMusicPlayerParams, bPersistAcrossLevelTransition) == 12, "Offset mismatch for FFortMusicPlayerParams::bPersistAcrossLevelTransition");
static_assert(offsetof(FFortMusicPlayerParams, AudioComponent) == 20, "Offset mismatch for FFortMusicPlayerParams::AudioComponent");
static_assert(offsetof(FFortMusicPlayerParams, MetaSoundSource) == 28, "Offset mismatch for FFortMusicPlayerParams::MetaSoundSource");
static_assert(offsetof(FFortMusicPlayerParams, MusicClock) == 36, "Offset mismatch for FFortMusicPlayerParams::MusicClock");
static_assert(offsetof(FFortMusicPlayerParams, MusicEventTag) == 44, "Offset mismatch for FFortMusicPlayerParams::MusicEventTag");
static_assert(offsetof(FFortMusicPlayerParams, MusicEventGroup) == 48, "Offset mismatch for FFortMusicPlayerParams::MusicEventGroup");
static_assert(offsetof(FFortMusicPlayerParams, MusicEventBehaviorTags) == 56, "Offset mismatch for FFortMusicPlayerParams::MusicEventBehaviorTags");
static_assert(offsetof(FFortMusicPlayerParams, AnalyticsCategory) == 88, "Offset mismatch for FFortMusicPlayerParams::AnalyticsCategory");
static_assert(offsetof(FFortMusicPlayerParams, InitiatingPlayer) == 96, "Offset mismatch for FFortMusicPlayerParams::InitiatingPlayer");

// /Script/FortniteMusic.FortMusicPlayer_HandlerInstanceInfo
// Kind: ScriptStruct; super: none
struct FFortMusicPlayer_HandlerInstanceInfo
{
public:
    void* ItemTypeClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    TScriptInterface<void> MusicHandler; // 0x0008 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FFortMusicPlayer_HandlerInstanceInfo, ItemTypeClass) == 0, "Offset mismatch for FFortMusicPlayer_HandlerInstanceInfo::ItemTypeClass");
static_assert(offsetof(FFortMusicPlayer_HandlerInstanceInfo, MusicHandler) == 8, "Offset mismatch for FFortMusicPlayer_HandlerInstanceInfo::MusicHandler");

// /Script/FortniteMusic.FortGameFeatureAction_RegisterMusicItemType
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_RegisterMusicItemType
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MusicItemType; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* ItemHandlerClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortGameFeatureAction_RegisterMusicItemType, MusicItemType) == 40, "Offset mismatch for UFortGameFeatureAction_RegisterMusicItemType::MusicItemType");
static_assert(offsetof(UFortGameFeatureAction_RegisterMusicItemType, ItemHandlerClass) == 48, "Offset mismatch for UFortGameFeatureAction_RegisterMusicItemType::ItemHandlerClass");

// /Script/FortniteMusic.FortMusicHandler
// Kind: Class; super: Interface
class UFortMusicHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteMusic.FortMusicItem
// Kind: Class; super: Interface
class UFortMusicItem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteMusic.FortMusicPlayer
// Kind: Class; super: Object
class UFortMusicPlayer
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> MusicHandlers; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00E8
    TScriptInterface<void> CurrentItem; // 0x0118 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t CurrentItemPlayParams[0x98]; // 0x0128 (Size: 0x98, Type: StructProperty)
    void* EmptySound; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    void* CurrentMusicEvent; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    void* CurrentAudioComponent; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x01D8
    void* CurrentMusicClock; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x28]; // 0x01E8
    TArray<void*> AnalyticsOptOutCategories; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bTrackRemotePlayerRequests; // 0x0220 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMusicPlayer, MusicHandlers) == 216, "Offset mismatch for UFortMusicPlayer::MusicHandlers");
static_assert(offsetof(UFortMusicPlayer, CurrentItem) == 280, "Offset mismatch for UFortMusicPlayer::CurrentItem");
static_assert(offsetof(UFortMusicPlayer, CurrentItemPlayParams) == 296, "Offset mismatch for UFortMusicPlayer::CurrentItemPlayParams");
static_assert(offsetof(UFortMusicPlayer, EmptySound) == 448, "Offset mismatch for UFortMusicPlayer::EmptySound");
static_assert(offsetof(UFortMusicPlayer, CurrentMusicEvent) == 456, "Offset mismatch for UFortMusicPlayer::CurrentMusicEvent");
static_assert(offsetof(UFortMusicPlayer, CurrentAudioComponent) == 464, "Offset mismatch for UFortMusicPlayer::CurrentAudioComponent");
static_assert(offsetof(UFortMusicPlayer, CurrentMusicClock) == 480, "Offset mismatch for UFortMusicPlayer::CurrentMusicClock");
static_assert(offsetof(UFortMusicPlayer, AnalyticsOptOutCategories) == 528, "Offset mismatch for UFortMusicPlayer::AnalyticsOptOutCategories");
static_assert(offsetof(UFortMusicPlayer, bTrackRemotePlayerRequests) == 544, "Offset mismatch for UFortMusicPlayer::bTrackRemotePlayerRequests");

// /Script/FortniteMusic.FortMusicPlayerRegistry
// Kind: Class; super: GameInstanceSubsystem
class UFortMusicPlayerRegistry
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* GlobalMusicPlayer; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    TArray<void*> MusicPlayersToPersist; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> MusicPlayersToPersistByTag; // 0x0078 (Size: 0x10, Type: MapProperty)
    TArray<void*> PersistedMusicPlayersFadingOut; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0098
    std::uint8_t EmptySoundPath[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    void* EmptySoundLoaded; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMusicPlayerRegistry, GlobalMusicPlayer) == 80, "Offset mismatch for UFortMusicPlayerRegistry::GlobalMusicPlayer");
static_assert(offsetof(UFortMusicPlayerRegistry, MusicPlayersToPersist) == 104, "Offset mismatch for UFortMusicPlayerRegistry::MusicPlayersToPersist");
static_assert(offsetof(UFortMusicPlayerRegistry, MusicPlayersToPersistByTag) == 120, "Offset mismatch for UFortMusicPlayerRegistry::MusicPlayersToPersistByTag");
static_assert(offsetof(UFortMusicPlayerRegistry, PersistedMusicPlayersFadingOut) == 136, "Offset mismatch for UFortMusicPlayerRegistry::PersistedMusicPlayersFadingOut");
static_assert(offsetof(UFortMusicPlayerRegistry, EmptySoundPath) == 168, "Offset mismatch for UFortMusicPlayerRegistry::EmptySoundPath");
static_assert(offsetof(UFortMusicPlayerRegistry, EmptySoundLoaded) == 200, "Offset mismatch for UFortMusicPlayerRegistry::EmptySoundLoaded");

// /Script/FortniteMusic.FortMusicPlaylist
// Kind: Class; super: Object
class UFortMusicPlaylist
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Items; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMusicPlaylist, Items) == 88, "Offset mismatch for UFortMusicPlaylist::Items");

// /Script/FortniteMusic.FortMusicPlaylistController
// Kind: Class; super: Object
class UFortMusicPlaylistController
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* MusicPlayer; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* CurrentPlaylist; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0050
    std::uint8_t PlaylistParams[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMusicPlaylistController, MusicPlayer) == 64, "Offset mismatch for UFortMusicPlaylistController::MusicPlayer");
static_assert(offsetof(UFortMusicPlaylistController, CurrentPlaylist) == 72, "Offset mismatch for UFortMusicPlaylistController::CurrentPlaylist");
static_assert(offsetof(UFortMusicPlaylistController, PlaylistParams) == 88, "Offset mismatch for UFortMusicPlaylistController::PlaylistParams");

// /Script/FortniteMusic.FortSimpleMusicItem
// Kind: Class; super: PrimaryDataAsset
class UFortSimpleMusicItem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MusicAsset[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CoverArtImage[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Title[0x10]; // 0x0070 (Size: 0x10, Type: TextProperty)
    FText Artist; // 0x0080 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFortSimpleMusicItem, MusicAsset) == 48, "Offset mismatch for UFortSimpleMusicItem::MusicAsset");
static_assert(offsetof(UFortSimpleMusicItem, CoverArtImage) == 80, "Offset mismatch for UFortSimpleMusicItem::CoverArtImage");
static_assert(offsetof(UFortSimpleMusicItem, Title) == 112, "Offset mismatch for UFortSimpleMusicItem::Title");
static_assert(offsetof(UFortSimpleMusicItem, Artist) == 128, "Offset mismatch for UFortSimpleMusicItem::Artist");
