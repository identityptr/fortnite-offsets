/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaUtilities
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaUtilities.EpicMediaAudioMetadataDataExt
// Kind: ScriptStruct; super: none
struct FEpicMediaAudioMetadataDataExt
{
public:
    FString ShortName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t SongId; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    FString Title; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString Artist; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString Album; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString Genre; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::int32_t Year; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    TMap<void*, void*> Difficulty; // 0x0060 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FEpicMediaAudioMetadataDataExt, ShortName) == 0, "Offset mismatch for FEpicMediaAudioMetadataDataExt::ShortName");
static_assert(offsetof(FEpicMediaAudioMetadataDataExt, SongId) == 16, "Offset mismatch for FEpicMediaAudioMetadataDataExt::SongId");
static_assert(offsetof(FEpicMediaAudioMetadataDataExt, Title) == 24, "Offset mismatch for FEpicMediaAudioMetadataDataExt::Title");
static_assert(offsetof(FEpicMediaAudioMetadataDataExt, Artist) == 40, "Offset mismatch for FEpicMediaAudioMetadataDataExt::Artist");
static_assert(offsetof(FEpicMediaAudioMetadataDataExt, Album) == 56, "Offset mismatch for FEpicMediaAudioMetadataDataExt::Album");
static_assert(offsetof(FEpicMediaAudioMetadataDataExt, Genre) == 72, "Offset mismatch for FEpicMediaAudioMetadataDataExt::Genre");
static_assert(offsetof(FEpicMediaAudioMetadataDataExt, Year) == 88, "Offset mismatch for FEpicMediaAudioMetadataDataExt::Year");
static_assert(offsetof(FEpicMediaAudioMetadataDataExt, Difficulty) == 96, "Offset mismatch for FEpicMediaAudioMetadataDataExt::Difficulty");

// /Script/EpicMediaUtilities.EpicMediaAudioMetadataExt
// Kind: ScriptStruct; super: none
struct FEpicMediaAudioMetadataExt
{
public:
    TMap<void*, void*> Tracks; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> Pans; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Volumes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Midi; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MetadataData[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEpicMediaAudioMetadataExt, Tracks) == 0, "Offset mismatch for FEpicMediaAudioMetadataExt::Tracks");
static_assert(offsetof(FEpicMediaAudioMetadataExt, Pans) == 16, "Offset mismatch for FEpicMediaAudioMetadataExt::Pans");
static_assert(offsetof(FEpicMediaAudioMetadataExt, Volumes) == 32, "Offset mismatch for FEpicMediaAudioMetadataExt::Volumes");
static_assert(offsetof(FEpicMediaAudioMetadataExt, Midi) == 48, "Offset mismatch for FEpicMediaAudioMetadataExt::Midi");
static_assert(offsetof(FEpicMediaAudioMetadataExt, MetadataData) == 64, "Offset mismatch for FEpicMediaAudioMetadataExt::MetadataData");

// /Script/EpicMediaUtilities.EpicMediaAudioMetadataTrackExt
// Kind: ScriptStruct; super: none
struct FEpicMediaAudioMetadataTrackExt
{
public:
    TMap<void*, void*> TrackData; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FEpicMediaAudioMetadataTrackExt, TrackData) == 0, "Offset mismatch for FEpicMediaAudioMetadataTrackExt::TrackData");

// /Script/EpicMediaUtilities.EpicMediaAudioMetadataTrackIndicesExt
// Kind: ScriptStruct; super: none
struct FEpicMediaAudioMetadataTrackIndicesExt
{
public:
    TArray<void*> Indices; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEpicMediaAudioMetadataTrackIndicesExt, Indices) == 0, "Offset mismatch for FEpicMediaAudioMetadataTrackIndicesExt::Indices");

// /Script/EpicMediaUtilities.EpicMediaAudioOnlyPeriodDataExt
// Kind: ScriptStruct; super: none
struct FEpicMediaAudioOnlyPeriodDataExt
{
public:
    std::uint8_t Color[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bColorSet; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    double StartFrame; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double EndFrame; // 0x0020 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FEpicMediaAudioOnlyPeriodDataExt, Color) == 0, "Offset mismatch for FEpicMediaAudioOnlyPeriodDataExt::Color");
static_assert(offsetof(FEpicMediaAudioOnlyPeriodDataExt, bColorSet) == 16, "Offset mismatch for FEpicMediaAudioOnlyPeriodDataExt::bColorSet");
static_assert(offsetof(FEpicMediaAudioOnlyPeriodDataExt, StartFrame) == 24, "Offset mismatch for FEpicMediaAudioOnlyPeriodDataExt::StartFrame");
static_assert(offsetof(FEpicMediaAudioOnlyPeriodDataExt, EndFrame) == 32, "Offset mismatch for FEpicMediaAudioOnlyPeriodDataExt::EndFrame");

// /Script/EpicMediaUtilities.EpicMediaExtraMetadataExt
// Kind: ScriptStruct; super: none
struct FEpicMediaExtraMetadataExt
{
public:
    FString AssetID; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> BaseURLs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FString BaseUrl; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::int64_t Version; // 0x0030 (Size: 0x8, Type: Int64Property)
    std::int64_t ExpiresAt; // 0x0038 (Size: 0x8, Type: Int64Property)
    std::uint8_t bSupportsCaching; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShareLock; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0042
    FString UserContentProtection; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString Limits; // 0x0058 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FEpicMediaExtraMetadataExt, AssetID) == 0, "Offset mismatch for FEpicMediaExtraMetadataExt::AssetID");
static_assert(offsetof(FEpicMediaExtraMetadataExt, BaseURLs) == 16, "Offset mismatch for FEpicMediaExtraMetadataExt::BaseURLs");
static_assert(offsetof(FEpicMediaExtraMetadataExt, BaseUrl) == 32, "Offset mismatch for FEpicMediaExtraMetadataExt::BaseUrl");
static_assert(offsetof(FEpicMediaExtraMetadataExt, Version) == 48, "Offset mismatch for FEpicMediaExtraMetadataExt::Version");
static_assert(offsetof(FEpicMediaExtraMetadataExt, ExpiresAt) == 56, "Offset mismatch for FEpicMediaExtraMetadataExt::ExpiresAt");
static_assert(offsetof(FEpicMediaExtraMetadataExt, bSupportsCaching) == 64, "Offset mismatch for FEpicMediaExtraMetadataExt::bSupportsCaching");
static_assert(offsetof(FEpicMediaExtraMetadataExt, bShareLock) == 65, "Offset mismatch for FEpicMediaExtraMetadataExt::bShareLock");
static_assert(offsetof(FEpicMediaExtraMetadataExt, UserContentProtection) == 72, "Offset mismatch for FEpicMediaExtraMetadataExt::UserContentProtection");
static_assert(offsetof(FEpicMediaExtraMetadataExt, Limits) == 88, "Offset mismatch for FEpicMediaExtraMetadataExt::Limits");

// /Script/EpicMediaUtilities.EpicMediaImageDataExt
// Kind: ScriptStruct; super: none
struct FEpicMediaImageDataExt
{
public:
    FString Url; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString FullUrl; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t Width; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t Height; // 0x0024 (Size: 0x4, Type: IntProperty)
    float AspectRatio; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEpicMediaImageDataExt, Url) == 0, "Offset mismatch for FEpicMediaImageDataExt::Url");
static_assert(offsetof(FEpicMediaImageDataExt, FullUrl) == 16, "Offset mismatch for FEpicMediaImageDataExt::FullUrl");
static_assert(offsetof(FEpicMediaImageDataExt, Width) == 32, "Offset mismatch for FEpicMediaImageDataExt::Width");
static_assert(offsetof(FEpicMediaImageDataExt, Height) == 36, "Offset mismatch for FEpicMediaImageDataExt::Height");
static_assert(offsetof(FEpicMediaImageDataExt, AspectRatio) == 40, "Offset mismatch for FEpicMediaImageDataExt::AspectRatio");

// /Script/EpicMediaUtilities.EpicMediaMetadataExt
// Kind: ScriptStruct; super: none
struct FEpicMediaMetadataExt
{
public:
    TArray<void*> Playlists; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StateStreamPlaylists; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SelectedPlaylists; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    FString Type; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString Envelope; // 0x0040 (Size: 0x10, Type: StrProperty)
    FString Limits; // 0x0050 (Size: 0x10, Type: StrProperty)
    FString Subtitles; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString UserContentProtection; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Sharelock; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AudioOnly; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0082
    float AspectRatio; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PartySync; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Live; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x008A
    FString DenyHTTPCode; // 0x0090 (Size: 0x10, Type: StrProperty)
    std::int32_t ResponseHTTPCode; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bTreatCDNSwitchAsFatal; // 0x00A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7B]; // 0x00A5
    std::uint8_t AudioMetadata[0xB0]; // 0x0120 (Size: 0xB0, Type: StructProperty)
    std::uint8_t bQuicksilverEP; // 0x01D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x01D1
    std::uint8_t ExtraMetadata[0x68]; // 0x01D8 (Size: 0x68, Type: StructProperty)
    std::uint8_t RequestType; // 0x0240 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FEpicMediaMetadataExt, Playlists) == 0, "Offset mismatch for FEpicMediaMetadataExt::Playlists");
static_assert(offsetof(FEpicMediaMetadataExt, StateStreamPlaylists) == 16, "Offset mismatch for FEpicMediaMetadataExt::StateStreamPlaylists");
static_assert(offsetof(FEpicMediaMetadataExt, SelectedPlaylists) == 32, "Offset mismatch for FEpicMediaMetadataExt::SelectedPlaylists");
static_assert(offsetof(FEpicMediaMetadataExt, Type) == 48, "Offset mismatch for FEpicMediaMetadataExt::Type");
static_assert(offsetof(FEpicMediaMetadataExt, Envelope) == 64, "Offset mismatch for FEpicMediaMetadataExt::Envelope");
static_assert(offsetof(FEpicMediaMetadataExt, Limits) == 80, "Offset mismatch for FEpicMediaMetadataExt::Limits");
static_assert(offsetof(FEpicMediaMetadataExt, Subtitles) == 96, "Offset mismatch for FEpicMediaMetadataExt::Subtitles");
static_assert(offsetof(FEpicMediaMetadataExt, UserContentProtection) == 112, "Offset mismatch for FEpicMediaMetadataExt::UserContentProtection");
static_assert(offsetof(FEpicMediaMetadataExt, Sharelock) == 128, "Offset mismatch for FEpicMediaMetadataExt::Sharelock");
static_assert(offsetof(FEpicMediaMetadataExt, AudioOnly) == 129, "Offset mismatch for FEpicMediaMetadataExt::AudioOnly");
static_assert(offsetof(FEpicMediaMetadataExt, AspectRatio) == 132, "Offset mismatch for FEpicMediaMetadataExt::AspectRatio");
static_assert(offsetof(FEpicMediaMetadataExt, PartySync) == 136, "Offset mismatch for FEpicMediaMetadataExt::PartySync");
static_assert(offsetof(FEpicMediaMetadataExt, Live) == 137, "Offset mismatch for FEpicMediaMetadataExt::Live");
static_assert(offsetof(FEpicMediaMetadataExt, DenyHTTPCode) == 144, "Offset mismatch for FEpicMediaMetadataExt::DenyHTTPCode");
static_assert(offsetof(FEpicMediaMetadataExt, ResponseHTTPCode) == 160, "Offset mismatch for FEpicMediaMetadataExt::ResponseHTTPCode");
static_assert(offsetof(FEpicMediaMetadataExt, bTreatCDNSwitchAsFatal) == 164, "Offset mismatch for FEpicMediaMetadataExt::bTreatCDNSwitchAsFatal");
static_assert(offsetof(FEpicMediaMetadataExt, AudioMetadata) == 288, "Offset mismatch for FEpicMediaMetadataExt::AudioMetadata");
static_assert(offsetof(FEpicMediaMetadataExt, bQuicksilverEP) == 464, "Offset mismatch for FEpicMediaMetadataExt::bQuicksilverEP");
static_assert(offsetof(FEpicMediaMetadataExt, ExtraMetadata) == 472, "Offset mismatch for FEpicMediaMetadataExt::ExtraMetadata");
static_assert(offsetof(FEpicMediaMetadataExt, RequestType) == 576, "Offset mismatch for FEpicMediaMetadataExt::RequestType");

// /Script/EpicMediaUtilities.EpicMediaPlaylistExt
// Kind: ScriptStruct; super: none
struct FEpicMediaPlaylistExt
{
public:
    FString Language; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString Type; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString Url; // 0x0020 (Size: 0x10, Type: StrProperty)
    FString RelUrl; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString Data; // 0x0040 (Size: 0x10, Type: StrProperty)
    double duration; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double FPS; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> Images; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AudioOnlyPeriods; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VolumeChanges; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    double SkipBoundaryTime; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    double PreEndEventTime; // 0x0098 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FEpicMediaPlaylistExt, Language) == 0, "Offset mismatch for FEpicMediaPlaylistExt::Language");
static_assert(offsetof(FEpicMediaPlaylistExt, Type) == 16, "Offset mismatch for FEpicMediaPlaylistExt::Type");
static_assert(offsetof(FEpicMediaPlaylistExt, Url) == 32, "Offset mismatch for FEpicMediaPlaylistExt::Url");
static_assert(offsetof(FEpicMediaPlaylistExt, RelUrl) == 48, "Offset mismatch for FEpicMediaPlaylistExt::RelUrl");
static_assert(offsetof(FEpicMediaPlaylistExt, Data) == 64, "Offset mismatch for FEpicMediaPlaylistExt::Data");
static_assert(offsetof(FEpicMediaPlaylistExt, duration) == 80, "Offset mismatch for FEpicMediaPlaylistExt::duration");
static_assert(offsetof(FEpicMediaPlaylistExt, FPS) == 88, "Offset mismatch for FEpicMediaPlaylistExt::FPS");
static_assert(offsetof(FEpicMediaPlaylistExt, Images) == 96, "Offset mismatch for FEpicMediaPlaylistExt::Images");
static_assert(offsetof(FEpicMediaPlaylistExt, AudioOnlyPeriods) == 112, "Offset mismatch for FEpicMediaPlaylistExt::AudioOnlyPeriods");
static_assert(offsetof(FEpicMediaPlaylistExt, VolumeChanges) == 128, "Offset mismatch for FEpicMediaPlaylistExt::VolumeChanges");
static_assert(offsetof(FEpicMediaPlaylistExt, SkipBoundaryTime) == 144, "Offset mismatch for FEpicMediaPlaylistExt::SkipBoundaryTime");
static_assert(offsetof(FEpicMediaPlaylistExt, PreEndEventTime) == 152, "Offset mismatch for FEpicMediaPlaylistExt::PreEndEventTime");

// /Script/EpicMediaUtilities.EpicMediaRegionLockExt
// Kind: ScriptStruct; super: none
struct FEpicMediaRegionLockExt
{
public:
    std::uint8_t AllowOnError; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Type; // 0x0008 (Size: 0x10, Type: StrProperty)
    TArray<void*> AllowList; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DenyList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Limits; // 0x0038 (Size: 0x10, Type: MapProperty)
    FString ContentID; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FEpicMediaRegionLockExt, AllowOnError) == 0, "Offset mismatch for FEpicMediaRegionLockExt::AllowOnError");
static_assert(offsetof(FEpicMediaRegionLockExt, Type) == 8, "Offset mismatch for FEpicMediaRegionLockExt::Type");
static_assert(offsetof(FEpicMediaRegionLockExt, AllowList) == 24, "Offset mismatch for FEpicMediaRegionLockExt::AllowList");
static_assert(offsetof(FEpicMediaRegionLockExt, DenyList) == 40, "Offset mismatch for FEpicMediaRegionLockExt::DenyList");
static_assert(offsetof(FEpicMediaRegionLockExt, Limits) == 56, "Offset mismatch for FEpicMediaRegionLockExt::Limits");
static_assert(offsetof(FEpicMediaRegionLockExt, ContentID) == 72, "Offset mismatch for FEpicMediaRegionLockExt::ContentID");

// /Script/EpicMediaUtilities.EpicMediaVolumeChangeDataExt
// Kind: ScriptStruct; super: none
struct FEpicMediaVolumeChangeDataExt
{
public:
    double Frame; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Level; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double Lerp; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FEpicMediaVolumeChangeDataExt, Frame) == 0, "Offset mismatch for FEpicMediaVolumeChangeDataExt::Frame");
static_assert(offsetof(FEpicMediaVolumeChangeDataExt, Level) == 8, "Offset mismatch for FEpicMediaVolumeChangeDataExt::Level");
static_assert(offsetof(FEpicMediaVolumeChangeDataExt, Lerp) == 16, "Offset mismatch for FEpicMediaVolumeChangeDataExt::Lerp");

// /Script/EpicMediaUtilities.EpicMediaServerTime
// Kind: Class; super: Actor
class UEpicMediaServerTime
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

static_assert(offsetof(UEpicMediaServerTime, PrimaryActorTick) == 40, "Offset mismatch for UEpicMediaServerTime::PrimaryActorTick");
static_assert(offsetof(UEpicMediaServerTime, bAlwaysRelevant) == 88, "Offset mismatch for UEpicMediaServerTime::bAlwaysRelevant");
static_assert(offsetof(UEpicMediaServerTime, bExchangedRoles) == 89, "Offset mismatch for UEpicMediaServerTime::bExchangedRoles");
static_assert(offsetof(UEpicMediaServerTime, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UEpicMediaServerTime::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UEpicMediaServerTime, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UEpicMediaServerTime::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UEpicMediaServerTime, bActorEnableCollision) == 93, "Offset mismatch for UEpicMediaServerTime::bActorEnableCollision");
static_assert(offsetof(UEpicMediaServerTime, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UEpicMediaServerTime::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UEpicMediaServerTime, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UEpicMediaServerTime::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UEpicMediaServerTime, RemoteRole) == 96, "Offset mismatch for UEpicMediaServerTime::RemoteRole");
static_assert(offsetof(UEpicMediaServerTime, InitialLifeSpan) == 100, "Offset mismatch for UEpicMediaServerTime::InitialLifeSpan");
static_assert(offsetof(UEpicMediaServerTime, CustomTimeDilation) == 104, "Offset mismatch for UEpicMediaServerTime::CustomTimeDilation");
static_assert(offsetof(UEpicMediaServerTime, RayTracingGroupId) == 108, "Offset mismatch for UEpicMediaServerTime::RayTracingGroupId");
static_assert(offsetof(UEpicMediaServerTime, AttachmentReplication) == 112, "Offset mismatch for UEpicMediaServerTime::AttachmentReplication");
static_assert(offsetof(UEpicMediaServerTime, ReplicatedMovement) == 208, "Offset mismatch for UEpicMediaServerTime::ReplicatedMovement");
static_assert(offsetof(UEpicMediaServerTime, Owner) == 344, "Offset mismatch for UEpicMediaServerTime::Owner");
static_assert(offsetof(UEpicMediaServerTime, NetDriverName) == 352, "Offset mismatch for UEpicMediaServerTime::NetDriverName");
static_assert(offsetof(UEpicMediaServerTime, Role) == 356, "Offset mismatch for UEpicMediaServerTime::Role");
static_assert(offsetof(UEpicMediaServerTime, NetDormancy) == 357, "Offset mismatch for UEpicMediaServerTime::NetDormancy");
static_assert(offsetof(UEpicMediaServerTime, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UEpicMediaServerTime::SpawnCollisionHandlingMethod");
static_assert(offsetof(UEpicMediaServerTime, AutoReceiveInput) == 359, "Offset mismatch for UEpicMediaServerTime::AutoReceiveInput");
static_assert(offsetof(UEpicMediaServerTime, InputPriority) == 360, "Offset mismatch for UEpicMediaServerTime::InputPriority");
static_assert(offsetof(UEpicMediaServerTime, InputComponent) == 368, "Offset mismatch for UEpicMediaServerTime::InputComponent");
static_assert(offsetof(UEpicMediaServerTime, NetTag) == 376, "Offset mismatch for UEpicMediaServerTime::NetTag");
static_assert(offsetof(UEpicMediaServerTime, NetCullDistanceSquared) == 380, "Offset mismatch for UEpicMediaServerTime::NetCullDistanceSquared");
static_assert(offsetof(UEpicMediaServerTime, NetUpdateFrequency) == 384, "Offset mismatch for UEpicMediaServerTime::NetUpdateFrequency");
static_assert(offsetof(UEpicMediaServerTime, MinNetUpdateFrequency) == 388, "Offset mismatch for UEpicMediaServerTime::MinNetUpdateFrequency");
static_assert(offsetof(UEpicMediaServerTime, NetPriority) == 392, "Offset mismatch for UEpicMediaServerTime::NetPriority");
static_assert(offsetof(UEpicMediaServerTime, PhysicsReplicationMode) == 396, "Offset mismatch for UEpicMediaServerTime::PhysicsReplicationMode");
static_assert(offsetof(UEpicMediaServerTime, Instigator) == 408, "Offset mismatch for UEpicMediaServerTime::Instigator");
static_assert(offsetof(UEpicMediaServerTime, Children) == 416, "Offset mismatch for UEpicMediaServerTime::Children");
static_assert(offsetof(UEpicMediaServerTime, RootComponent) == 432, "Offset mismatch for UEpicMediaServerTime::RootComponent");
static_assert(offsetof(UEpicMediaServerTime, HLODLayer) == 448, "Offset mismatch for UEpicMediaServerTime::HLODLayer");
static_assert(offsetof(UEpicMediaServerTime, Layers) == 456, "Offset mismatch for UEpicMediaServerTime::Layers");
static_assert(offsetof(UEpicMediaServerTime, ParentComponent) == 472, "Offset mismatch for UEpicMediaServerTime::ParentComponent");
static_assert(offsetof(UEpicMediaServerTime, Tags) == 496, "Offset mismatch for UEpicMediaServerTime::Tags");
static_assert(offsetof(UEpicMediaServerTime, OnTakeAnyDamage) == 512, "Offset mismatch for UEpicMediaServerTime::OnTakeAnyDamage");
static_assert(offsetof(UEpicMediaServerTime, OnTakePointDamage) == 513, "Offset mismatch for UEpicMediaServerTime::OnTakePointDamage");
static_assert(offsetof(UEpicMediaServerTime, OnTakeRadialDamage) == 514, "Offset mismatch for UEpicMediaServerTime::OnTakeRadialDamage");
static_assert(offsetof(UEpicMediaServerTime, OnActorBeginOverlap) == 515, "Offset mismatch for UEpicMediaServerTime::OnActorBeginOverlap");
static_assert(offsetof(UEpicMediaServerTime, OnActorEndOverlap) == 516, "Offset mismatch for UEpicMediaServerTime::OnActorEndOverlap");
static_assert(offsetof(UEpicMediaServerTime, OnBeginCursorOver) == 517, "Offset mismatch for UEpicMediaServerTime::OnBeginCursorOver");
static_assert(offsetof(UEpicMediaServerTime, OnEndCursorOver) == 518, "Offset mismatch for UEpicMediaServerTime::OnEndCursorOver");
static_assert(offsetof(UEpicMediaServerTime, OnClicked) == 519, "Offset mismatch for UEpicMediaServerTime::OnClicked");
static_assert(offsetof(UEpicMediaServerTime, OnReleased) == 520, "Offset mismatch for UEpicMediaServerTime::OnReleased");
static_assert(offsetof(UEpicMediaServerTime, OnInputTouchBegin) == 521, "Offset mismatch for UEpicMediaServerTime::OnInputTouchBegin");
static_assert(offsetof(UEpicMediaServerTime, OnInputTouchEnd) == 522, "Offset mismatch for UEpicMediaServerTime::OnInputTouchEnd");
static_assert(offsetof(UEpicMediaServerTime, OnInputTouchEnter) == 523, "Offset mismatch for UEpicMediaServerTime::OnInputTouchEnter");
static_assert(offsetof(UEpicMediaServerTime, OnInputTouchLeave) == 524, "Offset mismatch for UEpicMediaServerTime::OnInputTouchLeave");
static_assert(offsetof(UEpicMediaServerTime, OnActorHit) == 525, "Offset mismatch for UEpicMediaServerTime::OnActorHit");
static_assert(offsetof(UEpicMediaServerTime, OnDestroyed) == 526, "Offset mismatch for UEpicMediaServerTime::OnDestroyed");
static_assert(offsetof(UEpicMediaServerTime, OnEndPlay) == 527, "Offset mismatch for UEpicMediaServerTime::OnEndPlay");
static_assert(offsetof(UEpicMediaServerTime, InstanceComponents) == 592, "Offset mismatch for UEpicMediaServerTime::InstanceComponents");
static_assert(offsetof(UEpicMediaServerTime, BlueprintCreatedComponents) == 608, "Offset mismatch for UEpicMediaServerTime::BlueprintCreatedComponents");
