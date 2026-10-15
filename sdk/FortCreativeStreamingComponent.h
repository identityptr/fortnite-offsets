/**
 * decamp dumper generated SDK
 * Package: /Script/FortCreativeStreamingComponent
 */
#pragma once
#include "Basic.h"

// /Script/FortCreativeStreamingComponent.MediaMusicClockSettings
// Kind: ScriptStruct; super: MusicClockSettingsBase
struct FMediaMusicClockSettings
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* TempoMap; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* MediaSoundComponent; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMediaMusicClockSettings, TempoMap) == 24, "Offset mismatch for FMediaMusicClockSettings::TempoMap");
static_assert(offsetof(FMediaMusicClockSettings, MediaSoundComponent) == 32, "Offset mismatch for FMediaMusicClockSettings::MediaSoundComponent");

// /Script/FortCreativeStreamingComponent.MediaMusicSourceSettings
// Kind: ScriptStruct; super: MusicSourceSettings
struct FMediaMusicSourceSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* TempoMap; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* MediaSoundComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMediaMusicSourceSettings, TempoMap) == 8, "Offset mismatch for FMediaMusicSourceSettings::TempoMap");
static_assert(offsetof(FMediaMusicSourceSettings, MediaSoundComponent) == 16, "Offset mismatch for FMediaMusicSourceSettings::MediaSoundComponent");

// /Script/FortCreativeStreamingComponent.VideoPlayerDeviceAudioAnalysisSettings
// Kind: ScriptStruct; super: none
struct FVideoPlayerDeviceAudioAnalysisSettings
{
public:
    TArray<void*> AudioAnalysisBandSettings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AudioAnalysisBandNames; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PercussionParameterName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t AverageAmplitudeParameterName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    float UpdateRate; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float DecibelNoiseFloor; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDoNormalize; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoAutoRange; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0032
    float AutoRangeAttackTime; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float AutoRangeReleaseTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, AudioAnalysisBandSettings) == 0, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::AudioAnalysisBandSettings");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, AudioAnalysisBandNames) == 16, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::AudioAnalysisBandNames");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, PercussionParameterName) == 32, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::PercussionParameterName");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, AverageAmplitudeParameterName) == 36, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::AverageAmplitudeParameterName");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, UpdateRate) == 40, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::UpdateRate");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, DecibelNoiseFloor) == 44, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::DecibelNoiseFloor");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, bDoNormalize) == 48, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::bDoNormalize");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, bDoAutoRange) == 49, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::bDoAutoRange");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, AutoRangeAttackTime) == 52, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::AutoRangeAttackTime");
static_assert(offsetof(FVideoPlayerDeviceAudioAnalysisSettings, AutoRangeReleaseTime) == 56, "Offset mismatch for FVideoPlayerDeviceAudioAnalysisSettings::AutoRangeReleaseTime");

// /Script/FortCreativeStreamingComponent.VideoPlayerDeviceCMSEventData
// Kind: ScriptStruct; super: none
struct FVideoPlayerDeviceCMSEventData
{
public:
    FString EventName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString EventPage; // 0x0010 (Size: 0x10, Type: StrProperty)
    FString VUID; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVideoPlayerDeviceCMSEventData, EventName) == 0, "Offset mismatch for FVideoPlayerDeviceCMSEventData::EventName");
static_assert(offsetof(FVideoPlayerDeviceCMSEventData, EventPage) == 16, "Offset mismatch for FVideoPlayerDeviceCMSEventData::EventPage");
static_assert(offsetof(FVideoPlayerDeviceCMSEventData, VUID) == 32, "Offset mismatch for FVideoPlayerDeviceCMSEventData::VUID");
static_assert(offsetof(FVideoPlayerDeviceCMSEventData, bEnabled) == 48, "Offset mismatch for FVideoPlayerDeviceCMSEventData::bEnabled");

// /Script/FortCreativeStreamingComponent.VideoPlayerDeviceComponents
// Kind: ScriptStruct; super: none
struct FVideoPlayerDeviceComponents
{
public:
    void* ScreenMesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ScreenMaterialDynamic; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* SoundComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* VideoTexture; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* SourceBus; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVideoPlayerDeviceComponents, ScreenMesh) == 0, "Offset mismatch for FVideoPlayerDeviceComponents::ScreenMesh");
static_assert(offsetof(FVideoPlayerDeviceComponents, ScreenMaterialDynamic) == 8, "Offset mismatch for FVideoPlayerDeviceComponents::ScreenMaterialDynamic");
static_assert(offsetof(FVideoPlayerDeviceComponents, SoundComponent) == 16, "Offset mismatch for FVideoPlayerDeviceComponents::SoundComponent");
static_assert(offsetof(FVideoPlayerDeviceComponents, VideoTexture) == 24, "Offset mismatch for FVideoPlayerDeviceComponents::VideoTexture");
static_assert(offsetof(FVideoPlayerDeviceComponents, SourceBus) == 32, "Offset mismatch for FVideoPlayerDeviceComponents::SourceBus");

// /Script/FortCreativeStreamingComponent.VideoPlayerDeviceFullscreenData
// Kind: ScriptStruct; super: none
struct FVideoPlayerDeviceFullscreenData
{
public:
    std::uint8_t bEnable; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t InstanceID; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVideoPlayerDeviceFullscreenData, bEnable) == 0, "Offset mismatch for FVideoPlayerDeviceFullscreenData::bEnable");
static_assert(offsetof(FVideoPlayerDeviceFullscreenData, InstanceID) == 4, "Offset mismatch for FVideoPlayerDeviceFullscreenData::InstanceID");

// /Script/FortCreativeStreamingComponent.VideoPlayerDevicePIPFullscreenSettings
// Kind: ScriptStruct; super: none
struct FVideoPlayerDevicePIPFullscreenSettings
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableFullscreen; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t InstanceID; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVideoPlayerDevicePIPFullscreenSettings, Instigator) == 0, "Offset mismatch for FVideoPlayerDevicePIPFullscreenSettings::Instigator");
static_assert(offsetof(FVideoPlayerDevicePIPFullscreenSettings, bEnableFullscreen) == 8, "Offset mismatch for FVideoPlayerDevicePIPFullscreenSettings::bEnableFullscreen");
static_assert(offsetof(FVideoPlayerDevicePIPFullscreenSettings, InstanceID) == 12, "Offset mismatch for FVideoPlayerDevicePIPFullscreenSettings::InstanceID");

// /Script/FortCreativeStreamingComponent.VideoPlayerDevicePIPSettings
// Kind: ScriptStruct; super: none
struct FVideoPlayerDevicePIPSettings
{
public:
    float TriggerRange; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysAllow; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::int32_t InstanceID; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVideoPlayerDevicePIPSettings, TriggerRange) == 0, "Offset mismatch for FVideoPlayerDevicePIPSettings::TriggerRange");
static_assert(offsetof(FVideoPlayerDevicePIPSettings, bEnabled) == 4, "Offset mismatch for FVideoPlayerDevicePIPSettings::bEnabled");
static_assert(offsetof(FVideoPlayerDevicePIPSettings, bAlwaysAllow) == 5, "Offset mismatch for FVideoPlayerDevicePIPSettings::bAlwaysAllow");
static_assert(offsetof(FVideoPlayerDevicePIPSettings, InstanceID) == 8, "Offset mismatch for FVideoPlayerDevicePIPSettings::InstanceID");

// /Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent
// Kind: Class; super: ActorComponent
class UFortCreativeStreamingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* DefaultSubmix; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* LicensedSubmix; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* AudioAnalysisSubmix; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* JukeboxMPC; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AudioAnalysisSettings[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    void* SoundConcurrency; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* MirrorSoundConcurrency; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* AudioSoundClass; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* VideoMaterial; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaterialSlot; // 0x0140 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0144
    void* LocalizedOverlays; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    void* SubtitlesPlayer; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x60]; // 0x0158
    FMulticastInlineDelegate OnPlayCompleted; // 0x01B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate CMSMetadataEvent; // 0x01C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x8]; // 0x01D8
    void* BaseStreamingVideoPlayer; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DeviceComponents[0x30]; // 0x01E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t CurrentlyPlayingData[0x48]; // 0x0218 (Size: 0x48, Type: StructProperty)
    std::uint8_t MirroredDevice[0x20]; // 0x0260 (Size: 0x20, Type: SoftObjectProperty)
    void* MirrorAudioComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* MirrorSoundAttenuation; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0290
    std::uint8_t StreamingMode; // 0x0291 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x26]; // 0x0292
    FScriptDelegate OnSubmixSpectralAnalysisDelegate; // 0x02B8 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0006[0x10]; // 0x02C8
    std::uint8_t CMSEventData[0x1]; // 0x02D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCreativeStreamingComponent, DefaultSubmix) == 192, "Offset mismatch for UFortCreativeStreamingComponent::DefaultSubmix");
static_assert(offsetof(UFortCreativeStreamingComponent, LicensedSubmix) == 200, "Offset mismatch for UFortCreativeStreamingComponent::LicensedSubmix");
static_assert(offsetof(UFortCreativeStreamingComponent, AudioAnalysisSubmix) == 208, "Offset mismatch for UFortCreativeStreamingComponent::AudioAnalysisSubmix");
static_assert(offsetof(UFortCreativeStreamingComponent, JukeboxMPC) == 216, "Offset mismatch for UFortCreativeStreamingComponent::JukeboxMPC");
static_assert(offsetof(UFortCreativeStreamingComponent, AudioAnalysisSettings) == 224, "Offset mismatch for UFortCreativeStreamingComponent::AudioAnalysisSettings");
static_assert(offsetof(UFortCreativeStreamingComponent, SoundConcurrency) == 288, "Offset mismatch for UFortCreativeStreamingComponent::SoundConcurrency");
static_assert(offsetof(UFortCreativeStreamingComponent, MirrorSoundConcurrency) == 296, "Offset mismatch for UFortCreativeStreamingComponent::MirrorSoundConcurrency");
static_assert(offsetof(UFortCreativeStreamingComponent, AudioSoundClass) == 304, "Offset mismatch for UFortCreativeStreamingComponent::AudioSoundClass");
static_assert(offsetof(UFortCreativeStreamingComponent, VideoMaterial) == 312, "Offset mismatch for UFortCreativeStreamingComponent::VideoMaterial");
static_assert(offsetof(UFortCreativeStreamingComponent, MaterialSlot) == 320, "Offset mismatch for UFortCreativeStreamingComponent::MaterialSlot");
static_assert(offsetof(UFortCreativeStreamingComponent, LocalizedOverlays) == 328, "Offset mismatch for UFortCreativeStreamingComponent::LocalizedOverlays");
static_assert(offsetof(UFortCreativeStreamingComponent, SubtitlesPlayer) == 336, "Offset mismatch for UFortCreativeStreamingComponent::SubtitlesPlayer");
static_assert(offsetof(UFortCreativeStreamingComponent, OnPlayCompleted) == 440, "Offset mismatch for UFortCreativeStreamingComponent::OnPlayCompleted");
static_assert(offsetof(UFortCreativeStreamingComponent, CMSMetadataEvent) == 456, "Offset mismatch for UFortCreativeStreamingComponent::CMSMetadataEvent");
static_assert(offsetof(UFortCreativeStreamingComponent, BaseStreamingVideoPlayer) == 480, "Offset mismatch for UFortCreativeStreamingComponent::BaseStreamingVideoPlayer");
static_assert(offsetof(UFortCreativeStreamingComponent, DeviceComponents) == 488, "Offset mismatch for UFortCreativeStreamingComponent::DeviceComponents");
static_assert(offsetof(UFortCreativeStreamingComponent, CurrentlyPlayingData) == 536, "Offset mismatch for UFortCreativeStreamingComponent::CurrentlyPlayingData");
static_assert(offsetof(UFortCreativeStreamingComponent, MirroredDevice) == 608, "Offset mismatch for UFortCreativeStreamingComponent::MirroredDevice");
static_assert(offsetof(UFortCreativeStreamingComponent, MirrorAudioComponent) == 640, "Offset mismatch for UFortCreativeStreamingComponent::MirrorAudioComponent");
static_assert(offsetof(UFortCreativeStreamingComponent, MirrorSoundAttenuation) == 648, "Offset mismatch for UFortCreativeStreamingComponent::MirrorSoundAttenuation");
static_assert(offsetof(UFortCreativeStreamingComponent, StreamingMode) == 657, "Offset mismatch for UFortCreativeStreamingComponent::StreamingMode");
static_assert(offsetof(UFortCreativeStreamingComponent, OnSubmixSpectralAnalysisDelegate) == 696, "Offset mismatch for UFortCreativeStreamingComponent::OnSubmixSpectralAnalysisDelegate");
static_assert(offsetof(UFortCreativeStreamingComponent, CMSEventData) == 728, "Offset mismatch for UFortCreativeStreamingComponent::CMSEventData");

// /Script/FortCreativeStreamingComponent.FortCreativeStreamingMusicalReactivityComponent
// Kind: Class; super: ActorComponent
class UFortCreativeStreamingMusicalReactivityComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t MusicClockComponentRef[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> VUIDToTempoMapMidiFile; // 0x00E8 (Size: 0x10, Type: MapProperty)
    std::uint8_t MusicEventSubsystemEventTag[0x8]; // 0x00F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t MusicEventSubsystemBehaviorTags[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> MediaSoundComponent; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicClockComponent; // 0x0128 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> StreamingComponent; // 0x0130 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortCreativeStreamingMusicalReactivityComponent, MusicClockComponentRef) == 192, "Offset mismatch for UFortCreativeStreamingMusicalReactivityComponent::MusicClockComponentRef");
static_assert(offsetof(UFortCreativeStreamingMusicalReactivityComponent, VUIDToTempoMapMidiFile) == 232, "Offset mismatch for UFortCreativeStreamingMusicalReactivityComponent::VUIDToTempoMapMidiFile");
static_assert(offsetof(UFortCreativeStreamingMusicalReactivityComponent, MusicEventSubsystemEventTag) == 248, "Offset mismatch for UFortCreativeStreamingMusicalReactivityComponent::MusicEventSubsystemEventTag");
static_assert(offsetof(UFortCreativeStreamingMusicalReactivityComponent, MusicEventSubsystemBehaviorTags) == 256, "Offset mismatch for UFortCreativeStreamingMusicalReactivityComponent::MusicEventSubsystemBehaviorTags");
static_assert(offsetof(UFortCreativeStreamingMusicalReactivityComponent, MediaSoundComponent) == 288, "Offset mismatch for UFortCreativeStreamingMusicalReactivityComponent::MediaSoundComponent");
static_assert(offsetof(UFortCreativeStreamingMusicalReactivityComponent, MusicClockComponent) == 296, "Offset mismatch for UFortCreativeStreamingMusicalReactivityComponent::MusicClockComponent");
static_assert(offsetof(UFortCreativeStreamingMusicalReactivityComponent, StreamingComponent) == 304, "Offset mismatch for UFortCreativeStreamingMusicalReactivityComponent::StreamingComponent");
