/**
 * decamp dumper generated SDK
 * Package: /Script/SparksCMS
 */
#pragma once
#include "Basic.h"

// /Script/SparksCMS.SparksOwnedSongData
// Kind: ScriptStruct; super: none
struct FSparksOwnedSongData
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bFavorite; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bArchived; // 0x0005 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSparksOwnedSongData, SongShortName) == 0, "Offset mismatch for FSparksOwnedSongData::SongShortName");
static_assert(offsetof(FSparksOwnedSongData, bFavorite) == 4, "Offset mismatch for FSparksOwnedSongData::bFavorite");
static_assert(offsetof(FSparksOwnedSongData, bArchived) == 5, "Offset mismatch for FSparksOwnedSongData::bArchived");

// /Script/SparksCMS.SparksSongCatalogEntry
// Kind: ScriptStruct; super: none
struct FSparksSongCatalogEntry
{
public:
    FString SongUID; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ShortName; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Title; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString Artist; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString Album; // 0x0040 (Size: 0x10, Type: StrProperty)
    TArray<void*> Genre; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AnimGenre[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    std::uint8_t StageMood[0x4]; // 0x0064 (Size: 0x4, Type: StructProperty)
    std::int32_t duration; // 0x0068 (Size: 0x4, Type: IntProperty)
    float CountInDuration; // 0x006C (Size: 0x4, Type: FloatProperty)
    float MusicMomentOffsetSeconds; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::int32_t ReleaseYear; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t NewUntilTime[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t AgeRating; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MusicKey; // 0x0081 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MusicMode; // 0x0082 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0083
    std::int32_t MusicTempo; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::uint8_t StartingInstrumentGuitar; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StartingInstrumentBass; // 0x0089 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StartingInstrumentDrums; // 0x008A (Size: 0x1, Type: EnumProperty)
    std::uint8_t StartingInstrumentVocals; // 0x008B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    FString SanitizedSearchString; // 0x0090 (Size: 0x10, Type: StrProperty)
    FString JamLinkCode; // 0x00A0 (Size: 0x10, Type: StrProperty)
    FString McpTemplateId; // 0x00B0 (Size: 0x10, Type: StrProperty)
    FString AlbumArtUrl; // 0x00C0 (Size: 0x10, Type: StrProperty)
    FString AlbumArtThumbnailUrl; // 0x00D0 (Size: 0x10, Type: StrProperty)
    FString MidiUrl; // 0x00E0 (Size: 0x10, Type: StrProperty)
    FString LipSyncUrl; // 0x00F0 (Size: 0x10, Type: StrProperty)
    std::uint8_t GameplayTagContainer[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t QuicksilverInfo[0x58]; // 0x0120 (Size: 0x58, Type: StructProperty)
    std::uint8_t Intensities[0x20]; // 0x0178 (Size: 0x20, Type: StructProperty)
    std::uint8_t bValid; // 0x0198 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSparksSongCatalogEntry, SongUID) == 0, "Offset mismatch for FSparksSongCatalogEntry::SongUID");
static_assert(offsetof(FSparksSongCatalogEntry, ShortName) == 16, "Offset mismatch for FSparksSongCatalogEntry::ShortName");
static_assert(offsetof(FSparksSongCatalogEntry, Title) == 32, "Offset mismatch for FSparksSongCatalogEntry::Title");
static_assert(offsetof(FSparksSongCatalogEntry, Artist) == 48, "Offset mismatch for FSparksSongCatalogEntry::Artist");
static_assert(offsetof(FSparksSongCatalogEntry, Album) == 64, "Offset mismatch for FSparksSongCatalogEntry::Album");
static_assert(offsetof(FSparksSongCatalogEntry, Genre) == 80, "Offset mismatch for FSparksSongCatalogEntry::Genre");
static_assert(offsetof(FSparksSongCatalogEntry, AnimGenre) == 96, "Offset mismatch for FSparksSongCatalogEntry::AnimGenre");
static_assert(offsetof(FSparksSongCatalogEntry, StageMood) == 100, "Offset mismatch for FSparksSongCatalogEntry::StageMood");
static_assert(offsetof(FSparksSongCatalogEntry, duration) == 104, "Offset mismatch for FSparksSongCatalogEntry::duration");
static_assert(offsetof(FSparksSongCatalogEntry, CountInDuration) == 108, "Offset mismatch for FSparksSongCatalogEntry::CountInDuration");
static_assert(offsetof(FSparksSongCatalogEntry, MusicMomentOffsetSeconds) == 112, "Offset mismatch for FSparksSongCatalogEntry::MusicMomentOffsetSeconds");
static_assert(offsetof(FSparksSongCatalogEntry, ReleaseYear) == 116, "Offset mismatch for FSparksSongCatalogEntry::ReleaseYear");
static_assert(offsetof(FSparksSongCatalogEntry, NewUntilTime) == 120, "Offset mismatch for FSparksSongCatalogEntry::NewUntilTime");
static_assert(offsetof(FSparksSongCatalogEntry, AgeRating) == 128, "Offset mismatch for FSparksSongCatalogEntry::AgeRating");
static_assert(offsetof(FSparksSongCatalogEntry, MusicKey) == 129, "Offset mismatch for FSparksSongCatalogEntry::MusicKey");
static_assert(offsetof(FSparksSongCatalogEntry, MusicMode) == 130, "Offset mismatch for FSparksSongCatalogEntry::MusicMode");
static_assert(offsetof(FSparksSongCatalogEntry, MusicTempo) == 132, "Offset mismatch for FSparksSongCatalogEntry::MusicTempo");
static_assert(offsetof(FSparksSongCatalogEntry, StartingInstrumentGuitar) == 136, "Offset mismatch for FSparksSongCatalogEntry::StartingInstrumentGuitar");
static_assert(offsetof(FSparksSongCatalogEntry, StartingInstrumentBass) == 137, "Offset mismatch for FSparksSongCatalogEntry::StartingInstrumentBass");
static_assert(offsetof(FSparksSongCatalogEntry, StartingInstrumentDrums) == 138, "Offset mismatch for FSparksSongCatalogEntry::StartingInstrumentDrums");
static_assert(offsetof(FSparksSongCatalogEntry, StartingInstrumentVocals) == 139, "Offset mismatch for FSparksSongCatalogEntry::StartingInstrumentVocals");
static_assert(offsetof(FSparksSongCatalogEntry, SanitizedSearchString) == 144, "Offset mismatch for FSparksSongCatalogEntry::SanitizedSearchString");
static_assert(offsetof(FSparksSongCatalogEntry, JamLinkCode) == 160, "Offset mismatch for FSparksSongCatalogEntry::JamLinkCode");
static_assert(offsetof(FSparksSongCatalogEntry, McpTemplateId) == 176, "Offset mismatch for FSparksSongCatalogEntry::McpTemplateId");
static_assert(offsetof(FSparksSongCatalogEntry, AlbumArtUrl) == 192, "Offset mismatch for FSparksSongCatalogEntry::AlbumArtUrl");
static_assert(offsetof(FSparksSongCatalogEntry, AlbumArtThumbnailUrl) == 208, "Offset mismatch for FSparksSongCatalogEntry::AlbumArtThumbnailUrl");
static_assert(offsetof(FSparksSongCatalogEntry, MidiUrl) == 224, "Offset mismatch for FSparksSongCatalogEntry::MidiUrl");
static_assert(offsetof(FSparksSongCatalogEntry, LipSyncUrl) == 240, "Offset mismatch for FSparksSongCatalogEntry::LipSyncUrl");
static_assert(offsetof(FSparksSongCatalogEntry, GameplayTagContainer) == 256, "Offset mismatch for FSparksSongCatalogEntry::GameplayTagContainer");
static_assert(offsetof(FSparksSongCatalogEntry, QuicksilverInfo) == 288, "Offset mismatch for FSparksSongCatalogEntry::QuicksilverInfo");
static_assert(offsetof(FSparksSongCatalogEntry, Intensities) == 376, "Offset mismatch for FSparksSongCatalogEntry::Intensities");
static_assert(offsetof(FSparksSongCatalogEntry, bValid) == 408, "Offset mismatch for FSparksSongCatalogEntry::bValid");

// /Script/SparksCMS.SparksSongIntensityInfo
// Kind: ScriptStruct; super: none
struct FSparksSongIntensityInfo
{
public:
    std::int32_t vocals; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t guitar; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t bass; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Drums; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t plasticguitar; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t plasticbass; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t PlasticDrums; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t provocals; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSparksSongIntensityInfo, vocals) == 0, "Offset mismatch for FSparksSongIntensityInfo::vocals");
static_assert(offsetof(FSparksSongIntensityInfo, guitar) == 4, "Offset mismatch for FSparksSongIntensityInfo::guitar");
static_assert(offsetof(FSparksSongIntensityInfo, bass) == 8, "Offset mismatch for FSparksSongIntensityInfo::bass");
static_assert(offsetof(FSparksSongIntensityInfo, Drums) == 12, "Offset mismatch for FSparksSongIntensityInfo::Drums");
static_assert(offsetof(FSparksSongIntensityInfo, plasticguitar) == 16, "Offset mismatch for FSparksSongIntensityInfo::plasticguitar");
static_assert(offsetof(FSparksSongIntensityInfo, plasticbass) == 20, "Offset mismatch for FSparksSongIntensityInfo::plasticbass");
static_assert(offsetof(FSparksSongIntensityInfo, PlasticDrums) == 24, "Offset mismatch for FSparksSongIntensityInfo::PlasticDrums");
static_assert(offsetof(FSparksSongIntensityInfo, provocals) == 28, "Offset mismatch for FSparksSongIntensityInfo::provocals");

// /Script/SparksCMS.SparksSongQuicksilverInfo
// Kind: ScriptStruct; super: none
struct FSparksSongQuicksilverInfo
{
public:
    FString SongId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PreviewID; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString StereoID; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString InstrumentalID; // 0x0030 (Size: 0x10, Type: StrProperty)
    float PreviewStartTimeSeconds; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0044
    TArray<void*> Tracks; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSparksSongQuicksilverInfo, SongId) == 0, "Offset mismatch for FSparksSongQuicksilverInfo::SongId");
static_assert(offsetof(FSparksSongQuicksilverInfo, PreviewID) == 16, "Offset mismatch for FSparksSongQuicksilverInfo::PreviewID");
static_assert(offsetof(FSparksSongQuicksilverInfo, StereoID) == 32, "Offset mismatch for FSparksSongQuicksilverInfo::StereoID");
static_assert(offsetof(FSparksSongQuicksilverInfo, InstrumentalID) == 48, "Offset mismatch for FSparksSongQuicksilverInfo::InstrumentalID");
static_assert(offsetof(FSparksSongQuicksilverInfo, PreviewStartTimeSeconds) == 64, "Offset mismatch for FSparksSongQuicksilverInfo::PreviewStartTimeSeconds");
static_assert(offsetof(FSparksSongQuicksilverInfo, Tracks) == 72, "Offset mismatch for FSparksSongQuicksilverInfo::Tracks");

// /Script/SparksCMS.SparksSongQuicksilverTrack
// Kind: ScriptStruct; super: none
struct FSparksSongQuicksilverTrack
{
public:
    FString Part; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> Channels; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Vols; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSparksSongQuicksilverTrack, Part) == 0, "Offset mismatch for FSparksSongQuicksilverTrack::Part");
static_assert(offsetof(FSparksSongQuicksilverTrack, Channels) == 16, "Offset mismatch for FSparksSongQuicksilverTrack::Channels");
static_assert(offsetof(FSparksSongQuicksilverTrack, Vols) == 32, "Offset mismatch for FSparksSongQuicksilverTrack::Vols");

// /Script/SparksCMS.CatalogData
// Kind: Class; super: Object
class UCatalogData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bFromHotfix; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t DataEntry[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCatalogData, bFromHotfix) == 40, "Offset mismatch for UCatalogData::bFromHotfix");
static_assert(offsetof(UCatalogData, DataEntry) == 48, "Offset mismatch for UCatalogData::DataEntry");

// /Script/SparksCMS.PlayspaceComponent_SparksSongOwnership
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_SparksSongOwnership
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnAvailableSongsChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00D0
    TArray<void*> AvailableSongs; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayspaceComponent_SparksSongOwnership, OnAvailableSongsChanged) == 192, "Offset mismatch for UPlayspaceComponent_SparksSongOwnership::OnAvailableSongsChanged");
static_assert(offsetof(UPlayspaceComponent_SparksSongOwnership, AvailableSongs) == 224, "Offset mismatch for UPlayspaceComponent_SparksSongOwnership::AvailableSongs");

// /Script/SparksCMS.SparksCMSFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USparksCMSFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCMS.SparksSongCatalog
// Kind: Class; super: GameInstanceSubsystem
class USparksSongCatalog
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TMap<void*, void*> CatalogByUid; // 0x0070 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CatalogByShortName; // 0x0080 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CatalogByTemplateId; // 0x0090 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USparksSongCatalog, CatalogByUid) == 112, "Offset mismatch for USparksSongCatalog::CatalogByUid");
static_assert(offsetof(USparksSongCatalog, CatalogByShortName) == 128, "Offset mismatch for USparksSongCatalog::CatalogByShortName");
static_assert(offsetof(USparksSongCatalog, CatalogByTemplateId) == 144, "Offset mismatch for USparksSongCatalog::CatalogByTemplateId");

// /Script/SparksCMS.SparksSongData
// Kind: Class; super: PrimaryDataAsset
class USparksSongData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ShortName; // 0x0028 (Size: 0x8, Type: NameProperty)
    FString Title; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString Artist; // 0x0040 (Size: 0x10, Type: StrProperty)
    std::uint8_t Key; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Mode; // 0x0051 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    std::uint8_t AdditionalTags[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t AnimGenreTag[0x4]; // 0x0078 (Size: 0x4, Type: StructProperty)
    std::uint8_t SongUID[0x14]; // 0x007C (Size: 0x14, Type: StructProperty)
    std::uint8_t LipSyncAnimAsset[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    void* SparksCatalogData; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSongData, ShortName) == 40, "Offset mismatch for USparksSongData::ShortName");
static_assert(offsetof(USparksSongData, Title) == 48, "Offset mismatch for USparksSongData::Title");
static_assert(offsetof(USparksSongData, Artist) == 64, "Offset mismatch for USparksSongData::Artist");
static_assert(offsetof(USparksSongData, Key) == 80, "Offset mismatch for USparksSongData::Key");
static_assert(offsetof(USparksSongData, Mode) == 81, "Offset mismatch for USparksSongData::Mode");
static_assert(offsetof(USparksSongData, AdditionalTags) == 88, "Offset mismatch for USparksSongData::AdditionalTags");
static_assert(offsetof(USparksSongData, AnimGenreTag) == 120, "Offset mismatch for USparksSongData::AnimGenreTag");
static_assert(offsetof(USparksSongData, SongUID) == 124, "Offset mismatch for USparksSongData::SongUID");
static_assert(offsetof(USparksSongData, LipSyncAnimAsset) == 144, "Offset mismatch for USparksSongData::LipSyncAnimAsset");
static_assert(offsetof(USparksSongData, SparksCatalogData) == 176, "Offset mismatch for USparksSongData::SparksCatalogData");

// /Script/SparksCMS.SparksSongDataDownloadManager
// Kind: Class; super: GameInstanceSubsystem
class USparksSongDataDownloadManager
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> EmptyLipSyncData; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksSongDataDownloadManager, EmptyLipSyncData) == 96, "Offset mismatch for USparksSongDataDownloadManager::EmptyLipSyncData");

// /Script/SparksCMS.SparksSongOwnershipControllerComponent
// Kind: Class; super: ActorComponent
class USparksSongOwnershipControllerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TArray<void*> OwnedSongs; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OwnedSongsTemp; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasUpdatedOwnedSongs; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUpdatingOwnedSongs; // 0x00F9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongOwnershipControllerComponent, OwnedSongs) == 216, "Offset mismatch for USparksSongOwnershipControllerComponent::OwnedSongs");
static_assert(offsetof(USparksSongOwnershipControllerComponent, OwnedSongsTemp) == 232, "Offset mismatch for USparksSongOwnershipControllerComponent::OwnedSongsTemp");
static_assert(offsetof(USparksSongOwnershipControllerComponent, bHasUpdatedOwnedSongs) == 248, "Offset mismatch for USparksSongOwnershipControllerComponent::bHasUpdatedOwnedSongs");
static_assert(offsetof(USparksSongOwnershipControllerComponent, bIsUpdatingOwnedSongs) == 249, "Offset mismatch for USparksSongOwnershipControllerComponent::bIsUpdatingOwnedSongs");

// /Script/SparksCMS.SparksWaitForMidiDataAction
// Kind: Class; super: BlueprintAsyncActionBase
class USparksWaitForMidiDataAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnMidiDataAvailable; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMidiFailedToPrepare; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USparksWaitForMidiDataAction, OnMidiDataAvailable) == 48, "Offset mismatch for USparksWaitForMidiDataAction::OnMidiDataAvailable");
static_assert(offsetof(USparksWaitForMidiDataAction, OnMidiFailedToPrepare) == 64, "Offset mismatch for USparksWaitForMidiDataAction::OnMidiFailedToPrepare");

// /Script/SparksCMS.SparksWaitForSongDataAction
// Kind: Class; super: BlueprintAsyncActionBase
class USparksWaitForSongDataAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSongDataAvailable; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSongFailedToPrepare; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USparksWaitForSongDataAction, OnSongDataAvailable) == 48, "Offset mismatch for USparksWaitForSongDataAction::OnSongDataAvailable");
static_assert(offsetof(USparksWaitForSongDataAction, OnSongFailedToPrepare) == 64, "Offset mismatch for USparksWaitForSongDataAction::OnSongFailedToPrepare");
