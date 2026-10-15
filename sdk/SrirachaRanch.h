/**
 * decamp dumper generated SDK
 * Package: /Script/SrirachaRanch
 */
#pragma once
#include "Basic.h"

// /Script/SrirachaRanch.AthenaRadioStation
// Kind: ScriptStruct; super: none
struct FAthenaRadioStation
{
public:
    std::uint8_t Title[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FString StationImage; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsPlayerPlaylist; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    FString ResourceID; // 0x0028 (Size: 0x10, Type: StrProperty)
    TArray<void*> GameplayTagDenylist; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GameplayTagAllowlist; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAthenaRadioStation, Title) == 0, "Offset mismatch for FAthenaRadioStation::Title");
static_assert(offsetof(FAthenaRadioStation, StationImage) == 16, "Offset mismatch for FAthenaRadioStation::StationImage");
static_assert(offsetof(FAthenaRadioStation, bIsPlayerPlaylist) == 32, "Offset mismatch for FAthenaRadioStation::bIsPlayerPlaylist");
static_assert(offsetof(FAthenaRadioStation, ResourceID) == 40, "Offset mismatch for FAthenaRadioStation::ResourceID");
static_assert(offsetof(FAthenaRadioStation, GameplayTagDenylist) == 56, "Offset mismatch for FAthenaRadioStation::GameplayTagDenylist");
static_assert(offsetof(FAthenaRadioStation, GameplayTagAllowlist) == 72, "Offset mismatch for FAthenaRadioStation::GameplayTagAllowlist");

// /Script/SrirachaRanch.SrirachaInputMappingData
// Kind: ScriptStruct; super: none
struct FSrirachaInputMappingData
{
public:
    std::uint8_t MainActionName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t GamepadActionName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* EnhancedInputAction; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FText DisplayName; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSrirachaInputMappingData, MainActionName) == 0, "Offset mismatch for FSrirachaInputMappingData::MainActionName");
static_assert(offsetof(FSrirachaInputMappingData, GamepadActionName) == 4, "Offset mismatch for FSrirachaInputMappingData::GamepadActionName");
static_assert(offsetof(FSrirachaInputMappingData, EnhancedInputAction) == 8, "Offset mismatch for FSrirachaInputMappingData::EnhancedInputAction");
static_assert(offsetof(FSrirachaInputMappingData, DisplayName) == 16, "Offset mismatch for FSrirachaInputMappingData::DisplayName");

// /Script/SrirachaRanch.SrirachaPerClassSpecialSeats
// Kind: ScriptStruct; super: none
struct FSrirachaPerClassSpecialSeats
{
public:
    TArray<void*> OutsideSeatIndices; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSrirachaPerClassSpecialSeats, OutsideSeatIndices) == 0, "Offset mismatch for FSrirachaPerClassSpecialSeats::OutsideSeatIndices");

// /Script/SrirachaRanch.StreamingRadioMixData
// Kind: ScriptStruct; super: none
struct FStreamingRadioMixData
{
public:
    float AttackTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ReleaseTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStreamingRadioMixData, AttackTime) == 0, "Offset mismatch for FStreamingRadioMixData::AttackTime");
static_assert(offsetof(FStreamingRadioMixData, ReleaseTime) == 4, "Offset mismatch for FStreamingRadioMixData::ReleaseTime");

// /Script/SrirachaRanch.StreamingRadioSourceData
// Kind: ScriptStruct; super: none
struct FStreamingRadioSourceData
{
public:
    std::uint8_t State; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t PlayingIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    float FadeoutSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t SourceOverride[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStreamingRadioSourceData, State) == 0, "Offset mismatch for FStreamingRadioSourceData::State");
static_assert(offsetof(FStreamingRadioSourceData, PlayingIndex) == 4, "Offset mismatch for FStreamingRadioSourceData::PlayingIndex");
static_assert(offsetof(FStreamingRadioSourceData, FadeoutSeconds) == 8, "Offset mismatch for FStreamingRadioSourceData::FadeoutSeconds");
static_assert(offsetof(FStreamingRadioSourceData, SourceOverride) == 16, "Offset mismatch for FStreamingRadioSourceData::SourceOverride");

// /Script/SrirachaRanch.FakeRadioPlayerComponent
// Kind: Class; super: FortPawnComponent
class UFakeRadioPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnFakeRadioStart; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFakeRadioStop; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bReplicatedRadioIsActive; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    TMap<void*, void*> InputMappingData; // 0x00F8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFakeRadioPlayerComponent, OnFakeRadioStart) == 208, "Offset mismatch for UFakeRadioPlayerComponent::OnFakeRadioStart");
static_assert(offsetof(UFakeRadioPlayerComponent, OnFakeRadioStop) == 224, "Offset mismatch for UFakeRadioPlayerComponent::OnFakeRadioStop");
static_assert(offsetof(UFakeRadioPlayerComponent, bReplicatedRadioIsActive) == 240, "Offset mismatch for UFakeRadioPlayerComponent::bReplicatedRadioIsActive");
static_assert(offsetof(UFakeRadioPlayerComponent, InputMappingData) == 248, "Offset mismatch for UFakeRadioPlayerComponent::InputMappingData");

// /Script/SrirachaRanch.RadioContentSourceItemDefinition
// Kind: Class; super: FortAccountItemDefinition
class URadioContentSourceItemDefinition
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FString ResourceID; // 0x0128 (Size: 0x10, Type: StrProperty)
    void* MediaSource; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URadioContentSourceItemDefinition, ResourceID) == 296, "Offset mismatch for URadioContentSourceItemDefinition::ResourceID");
static_assert(offsetof(URadioContentSourceItemDefinition, MediaSource) == 312, "Offset mismatch for URadioContentSourceItemDefinition::MediaSource");

// /Script/SrirachaRanch.SrirachaRanchComponentTemplateWrapper
// Kind: Class; super: DataAsset
class USrirachaRanchComponentTemplateWrapper
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MediaSoundPlayerTemplate; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USrirachaRanchComponentTemplateWrapper, MediaSoundPlayerTemplate) == 40, "Offset mismatch for USrirachaRanchComponentTemplateWrapper::MediaSoundPlayerTemplate");

// /Script/SrirachaRanch.StreamingRadioAudioShapeComponent
// Kind: Class; super: AudioShapeComponent
class UStreamingRadioAudioShapeComponent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    float Radius; // 0x0120 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> RadioPlayer; // 0x0124 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UStreamingRadioAudioShapeComponent, Radius) == 288, "Offset mismatch for UStreamingRadioAudioShapeComponent::Radius");
static_assert(offsetof(UStreamingRadioAudioShapeComponent, RadioPlayer) == 292, "Offset mismatch for UStreamingRadioAudioShapeComponent::RadioPlayer");

// /Script/SrirachaRanch.StreamingRadioPlayerComponent
// Kind: Class; super: FortPawnComponent
class UStreamingRadioPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TMap<void*, void*> InputMappingData; // 0x00D8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RadialMenuInputMappingData; // 0x00E8 (Size: 0x10, Type: MapProperty)
    FMulticastInlineDelegate OnSourceLoading; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSourcePlayed; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSourceStopped; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSourceFailed; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetadataChanged; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRadioExplicitStop; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float PercentAutostartRadio; // 0x0158 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x015C
    TArray<void*> DisabledVehicleList; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ExteriorVolumeMultiplierMap; // 0x0170 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InteriorVolumeMultiplierMap; // 0x0180 (Size: 0x10, Type: MapProperty)
    std::uint8_t bMinimalStateOnPlatform; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0191
    TArray<void*> DisabledStationList; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutostartOnEntry; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisabledForCurrentPlayerState; // 0x01A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x01AA
    std::uint8_t ReplicatedRadioSourceData[0x68]; // 0x01B0 (Size: 0x68, Type: StructProperty)
    FMulticastInlineDelegate OnReplicatedStateChangedDelegate; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SoundComponent; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    void* AudioShape; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    void* SoundCompTemplateSource; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LastSource[0x58]; // 0x0240 (Size: 0x58, Type: StructProperty)
    std::uint8_t LastMetadata[0x90]; // 0x0298 (Size: 0x90, Type: StructProperty)
    TArray<void*> Sources; // 0x0328 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FallbackSource[0x58]; // 0x0338 (Size: 0x58, Type: StructProperty)
    TMap<void*, void*> SpecialSeatList; // 0x0390 (Size: 0x10, Type: MapProperty)
    void* BasePlayerInstance; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSoundSubmix; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* LicensedSoundSubmix; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentMode; // 0x03B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x03B9
    std::int32_t MaximumRetries; // 0x03BC (Size: 0x4, Type: IntProperty)
    std::int32_t FadeoutWhenUnpoweredInMS; // 0x03C0 (Size: 0x4, Type: IntProperty)
    std::int32_t FadeoutWhenOwnerBeingDestroyedInMS; // 0x03C4 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxFadeoutTimeMS; // 0x03C8 (Size: 0x4, Type: IntProperty)
    std::int32_t DefaultPlayingIndex; // 0x03CC (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceAutoStartOnInit; // 0x03D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryStopRadioOnSeatChanges; // 0x03D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopRadioOnNetConnectionLost; // 0x03D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x5]; // 0x03D3
    void* SoundMixInside; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* SoundMixOutside; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x4]; // 0x03E8
    float ActivationRadius; // 0x03EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ComponentToAttachTo[0x4]; // 0x03F0 (Size: 0x4, Type: NameProperty)
    std::uint8_t ComponentSocketAttachTo[0x4]; // 0x03F4 (Size: 0x4, Type: NameProperty)
    void* MediaSource; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    FString CMSSuffix; // 0x0400 (Size: 0x10, Type: StrProperty)
    TArray<void*> RadioStationList; // 0x0410 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MockedRadioStationList; // 0x0420 (Size: 0x10, Type: ArrayProperty)
    void* DelegateContextObject; // 0x0430 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0438
    float MediaStartTimeFromInit; // 0x043C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x20]; // 0x0440
    void* CachedDriverLocalPlayer; // 0x0460 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStreamingRadioPlayerComponent, InputMappingData) == 216, "Offset mismatch for UStreamingRadioPlayerComponent::InputMappingData");
static_assert(offsetof(UStreamingRadioPlayerComponent, RadialMenuInputMappingData) == 232, "Offset mismatch for UStreamingRadioPlayerComponent::RadialMenuInputMappingData");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnSourceLoading) == 248, "Offset mismatch for UStreamingRadioPlayerComponent::OnSourceLoading");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnSourcePlayed) == 264, "Offset mismatch for UStreamingRadioPlayerComponent::OnSourcePlayed");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnSourceStopped) == 280, "Offset mismatch for UStreamingRadioPlayerComponent::OnSourceStopped");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnSourceFailed) == 296, "Offset mismatch for UStreamingRadioPlayerComponent::OnSourceFailed");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnMetadataChanged) == 312, "Offset mismatch for UStreamingRadioPlayerComponent::OnMetadataChanged");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnRadioExplicitStop) == 328, "Offset mismatch for UStreamingRadioPlayerComponent::OnRadioExplicitStop");
static_assert(offsetof(UStreamingRadioPlayerComponent, PercentAutostartRadio) == 344, "Offset mismatch for UStreamingRadioPlayerComponent::PercentAutostartRadio");
static_assert(offsetof(UStreamingRadioPlayerComponent, DisabledVehicleList) == 352, "Offset mismatch for UStreamingRadioPlayerComponent::DisabledVehicleList");
static_assert(offsetof(UStreamingRadioPlayerComponent, ExteriorVolumeMultiplierMap) == 368, "Offset mismatch for UStreamingRadioPlayerComponent::ExteriorVolumeMultiplierMap");
static_assert(offsetof(UStreamingRadioPlayerComponent, InteriorVolumeMultiplierMap) == 384, "Offset mismatch for UStreamingRadioPlayerComponent::InteriorVolumeMultiplierMap");
static_assert(offsetof(UStreamingRadioPlayerComponent, bMinimalStateOnPlatform) == 400, "Offset mismatch for UStreamingRadioPlayerComponent::bMinimalStateOnPlatform");
static_assert(offsetof(UStreamingRadioPlayerComponent, DisabledStationList) == 408, "Offset mismatch for UStreamingRadioPlayerComponent::DisabledStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent, bAutostartOnEntry) == 424, "Offset mismatch for UStreamingRadioPlayerComponent::bAutostartOnEntry");
static_assert(offsetof(UStreamingRadioPlayerComponent, bDisabledForCurrentPlayerState) == 425, "Offset mismatch for UStreamingRadioPlayerComponent::bDisabledForCurrentPlayerState");
static_assert(offsetof(UStreamingRadioPlayerComponent, ReplicatedRadioSourceData) == 432, "Offset mismatch for UStreamingRadioPlayerComponent::ReplicatedRadioSourceData");
static_assert(offsetof(UStreamingRadioPlayerComponent, OnReplicatedStateChangedDelegate) == 536, "Offset mismatch for UStreamingRadioPlayerComponent::OnReplicatedStateChangedDelegate");
static_assert(offsetof(UStreamingRadioPlayerComponent, SoundComponent) == 552, "Offset mismatch for UStreamingRadioPlayerComponent::SoundComponent");
static_assert(offsetof(UStreamingRadioPlayerComponent, AudioShape) == 560, "Offset mismatch for UStreamingRadioPlayerComponent::AudioShape");
static_assert(offsetof(UStreamingRadioPlayerComponent, SoundCompTemplateSource) == 568, "Offset mismatch for UStreamingRadioPlayerComponent::SoundCompTemplateSource");
static_assert(offsetof(UStreamingRadioPlayerComponent, LastSource) == 576, "Offset mismatch for UStreamingRadioPlayerComponent::LastSource");
static_assert(offsetof(UStreamingRadioPlayerComponent, LastMetadata) == 664, "Offset mismatch for UStreamingRadioPlayerComponent::LastMetadata");
static_assert(offsetof(UStreamingRadioPlayerComponent, Sources) == 808, "Offset mismatch for UStreamingRadioPlayerComponent::Sources");
static_assert(offsetof(UStreamingRadioPlayerComponent, FallbackSource) == 824, "Offset mismatch for UStreamingRadioPlayerComponent::FallbackSource");
static_assert(offsetof(UStreamingRadioPlayerComponent, SpecialSeatList) == 912, "Offset mismatch for UStreamingRadioPlayerComponent::SpecialSeatList");
static_assert(offsetof(UStreamingRadioPlayerComponent, BasePlayerInstance) == 928, "Offset mismatch for UStreamingRadioPlayerComponent::BasePlayerInstance");
static_assert(offsetof(UStreamingRadioPlayerComponent, DefaultSoundSubmix) == 936, "Offset mismatch for UStreamingRadioPlayerComponent::DefaultSoundSubmix");
static_assert(offsetof(UStreamingRadioPlayerComponent, LicensedSoundSubmix) == 944, "Offset mismatch for UStreamingRadioPlayerComponent::LicensedSoundSubmix");
static_assert(offsetof(UStreamingRadioPlayerComponent, CurrentMode) == 952, "Offset mismatch for UStreamingRadioPlayerComponent::CurrentMode");
static_assert(offsetof(UStreamingRadioPlayerComponent, MaximumRetries) == 956, "Offset mismatch for UStreamingRadioPlayerComponent::MaximumRetries");
static_assert(offsetof(UStreamingRadioPlayerComponent, FadeoutWhenUnpoweredInMS) == 960, "Offset mismatch for UStreamingRadioPlayerComponent::FadeoutWhenUnpoweredInMS");
static_assert(offsetof(UStreamingRadioPlayerComponent, FadeoutWhenOwnerBeingDestroyedInMS) == 964, "Offset mismatch for UStreamingRadioPlayerComponent::FadeoutWhenOwnerBeingDestroyedInMS");
static_assert(offsetof(UStreamingRadioPlayerComponent, MaxFadeoutTimeMS) == 968, "Offset mismatch for UStreamingRadioPlayerComponent::MaxFadeoutTimeMS");
static_assert(offsetof(UStreamingRadioPlayerComponent, DefaultPlayingIndex) == 972, "Offset mismatch for UStreamingRadioPlayerComponent::DefaultPlayingIndex");
static_assert(offsetof(UStreamingRadioPlayerComponent, bForceAutoStartOnInit) == 976, "Offset mismatch for UStreamingRadioPlayerComponent::bForceAutoStartOnInit");
static_assert(offsetof(UStreamingRadioPlayerComponent, bTryStopRadioOnSeatChanges) == 977, "Offset mismatch for UStreamingRadioPlayerComponent::bTryStopRadioOnSeatChanges");
static_assert(offsetof(UStreamingRadioPlayerComponent, bStopRadioOnNetConnectionLost) == 978, "Offset mismatch for UStreamingRadioPlayerComponent::bStopRadioOnNetConnectionLost");
static_assert(offsetof(UStreamingRadioPlayerComponent, SoundMixInside) == 984, "Offset mismatch for UStreamingRadioPlayerComponent::SoundMixInside");
static_assert(offsetof(UStreamingRadioPlayerComponent, SoundMixOutside) == 992, "Offset mismatch for UStreamingRadioPlayerComponent::SoundMixOutside");
static_assert(offsetof(UStreamingRadioPlayerComponent, ActivationRadius) == 1004, "Offset mismatch for UStreamingRadioPlayerComponent::ActivationRadius");
static_assert(offsetof(UStreamingRadioPlayerComponent, ComponentToAttachTo) == 1008, "Offset mismatch for UStreamingRadioPlayerComponent::ComponentToAttachTo");
static_assert(offsetof(UStreamingRadioPlayerComponent, ComponentSocketAttachTo) == 1012, "Offset mismatch for UStreamingRadioPlayerComponent::ComponentSocketAttachTo");
static_assert(offsetof(UStreamingRadioPlayerComponent, MediaSource) == 1016, "Offset mismatch for UStreamingRadioPlayerComponent::MediaSource");
static_assert(offsetof(UStreamingRadioPlayerComponent, CMSSuffix) == 1024, "Offset mismatch for UStreamingRadioPlayerComponent::CMSSuffix");
static_assert(offsetof(UStreamingRadioPlayerComponent, RadioStationList) == 1040, "Offset mismatch for UStreamingRadioPlayerComponent::RadioStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent, MockedRadioStationList) == 1056, "Offset mismatch for UStreamingRadioPlayerComponent::MockedRadioStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent, DelegateContextObject) == 1072, "Offset mismatch for UStreamingRadioPlayerComponent::DelegateContextObject");
static_assert(offsetof(UStreamingRadioPlayerComponent, MediaStartTimeFromInit) == 1084, "Offset mismatch for UStreamingRadioPlayerComponent::MediaStartTimeFromInit");
static_assert(offsetof(UStreamingRadioPlayerComponent, CachedDriverLocalPlayer) == 1120, "Offset mismatch for UStreamingRadioPlayerComponent::CachedDriverLocalPlayer");

// /Script/SrirachaRanch.StreamingRadioPlayerInsideState
// Kind: Class; super: Object
class UStreamingRadioPlayerInsideState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsPlayerTargeting; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStreamingRadioPlayerInsideState, bIsPlayerTargeting) == 40, "Offset mismatch for UStreamingRadioPlayerInsideState::bIsPlayerTargeting");

// /Script/SrirachaRanch.StreamingRadioPlayerSettings
// Kind: Class; super: DeveloperSettings
class UStreamingRadioPlayerSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t InsideControlBus[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t OutsideControlBus[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InsideMixData[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t OutsideMixData[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> SpecialSeatList; // 0x0080 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UStreamingRadioPlayerSettings, InsideControlBus) == 48, "Offset mismatch for UStreamingRadioPlayerSettings::InsideControlBus");
static_assert(offsetof(UStreamingRadioPlayerSettings, OutsideControlBus) == 80, "Offset mismatch for UStreamingRadioPlayerSettings::OutsideControlBus");
static_assert(offsetof(UStreamingRadioPlayerSettings, InsideMixData) == 112, "Offset mismatch for UStreamingRadioPlayerSettings::InsideMixData");
static_assert(offsetof(UStreamingRadioPlayerSettings, OutsideMixData) == 120, "Offset mismatch for UStreamingRadioPlayerSettings::OutsideMixData");
static_assert(offsetof(UStreamingRadioPlayerSettings, SpecialSeatList) == 128, "Offset mismatch for UStreamingRadioPlayerSettings::SpecialSeatList");

// /Script/SrirachaRanch.StreamingRadioPlayerSubsystem
// Kind: Class; super: WorldSubsystem
class UStreamingRadioPlayerSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* RadioMix; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PlayingRadioPlayerComponents; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0050
    void* InsideControlBus; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* OutsideControlBus; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PlayerInsideStates; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UStreamingRadioPlayerSubsystem, RadioMix) == 56, "Offset mismatch for UStreamingRadioPlayerSubsystem::RadioMix");
static_assert(offsetof(UStreamingRadioPlayerSubsystem, PlayingRadioPlayerComponents) == 64, "Offset mismatch for UStreamingRadioPlayerSubsystem::PlayingRadioPlayerComponents");
static_assert(offsetof(UStreamingRadioPlayerSubsystem, InsideControlBus) == 88, "Offset mismatch for UStreamingRadioPlayerSubsystem::InsideControlBus");
static_assert(offsetof(UStreamingRadioPlayerSubsystem, OutsideControlBus) == 96, "Offset mismatch for UStreamingRadioPlayerSubsystem::OutsideControlBus");
static_assert(offsetof(UStreamingRadioPlayerSubsystem, PlayerInsideStates) == 104, "Offset mismatch for UStreamingRadioPlayerSubsystem::PlayerInsideStates");
