/**
 * decamp dumper generated SDK
 * Package: /Script/SrirachaRanchValet
 */
#pragma once
#include "Basic.h"

// /Script/SrirachaRanchValet.StreamingRadioPlayerComponent_Valet
// Kind: Class; super: StreamingRadioPlayerComponent
class UStreamingRadioPlayerComponent_Valet
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

static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, InputMappingData) == 216, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::InputMappingData");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, RadialMenuInputMappingData) == 232, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::RadialMenuInputMappingData");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, OnSourceLoading) == 248, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::OnSourceLoading");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, OnSourcePlayed) == 264, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::OnSourcePlayed");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, OnSourceStopped) == 280, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::OnSourceStopped");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, OnSourceFailed) == 296, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::OnSourceFailed");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, OnMetadataChanged) == 312, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::OnMetadataChanged");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, OnRadioExplicitStop) == 328, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::OnRadioExplicitStop");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, PercentAutostartRadio) == 344, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::PercentAutostartRadio");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, DisabledVehicleList) == 352, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::DisabledVehicleList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, ExteriorVolumeMultiplierMap) == 368, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::ExteriorVolumeMultiplierMap");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, InteriorVolumeMultiplierMap) == 384, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::InteriorVolumeMultiplierMap");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, bMinimalStateOnPlatform) == 400, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::bMinimalStateOnPlatform");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, DisabledStationList) == 408, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::DisabledStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, bAutostartOnEntry) == 424, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::bAutostartOnEntry");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, bDisabledForCurrentPlayerState) == 425, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::bDisabledForCurrentPlayerState");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, ReplicatedRadioSourceData) == 432, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::ReplicatedRadioSourceData");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, OnReplicatedStateChangedDelegate) == 536, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::OnReplicatedStateChangedDelegate");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, SoundComponent) == 552, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::SoundComponent");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, AudioShape) == 560, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::AudioShape");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, SoundCompTemplateSource) == 568, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::SoundCompTemplateSource");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, LastSource) == 576, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::LastSource");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, LastMetadata) == 664, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::LastMetadata");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, Sources) == 808, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::Sources");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, FallbackSource) == 824, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::FallbackSource");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, SpecialSeatList) == 912, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::SpecialSeatList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, BasePlayerInstance) == 928, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::BasePlayerInstance");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, DefaultSoundSubmix) == 936, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::DefaultSoundSubmix");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, LicensedSoundSubmix) == 944, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::LicensedSoundSubmix");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, CurrentMode) == 952, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::CurrentMode");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, MaximumRetries) == 956, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::MaximumRetries");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, FadeoutWhenUnpoweredInMS) == 960, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::FadeoutWhenUnpoweredInMS");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, FadeoutWhenOwnerBeingDestroyedInMS) == 964, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::FadeoutWhenOwnerBeingDestroyedInMS");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, MaxFadeoutTimeMS) == 968, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::MaxFadeoutTimeMS");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, DefaultPlayingIndex) == 972, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::DefaultPlayingIndex");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, bForceAutoStartOnInit) == 976, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::bForceAutoStartOnInit");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, bTryStopRadioOnSeatChanges) == 977, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::bTryStopRadioOnSeatChanges");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, bStopRadioOnNetConnectionLost) == 978, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::bStopRadioOnNetConnectionLost");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, SoundMixInside) == 984, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::SoundMixInside");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, SoundMixOutside) == 992, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::SoundMixOutside");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, ActivationRadius) == 1004, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::ActivationRadius");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, ComponentToAttachTo) == 1008, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::ComponentToAttachTo");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, ComponentSocketAttachTo) == 1012, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::ComponentSocketAttachTo");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, MediaSource) == 1016, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::MediaSource");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, CMSSuffix) == 1024, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::CMSSuffix");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, RadioStationList) == 1040, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::RadioStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, MockedRadioStationList) == 1056, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::MockedRadioStationList");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, DelegateContextObject) == 1072, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::DelegateContextObject");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, MediaStartTimeFromInit) == 1084, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::MediaStartTimeFromInit");
static_assert(offsetof(UStreamingRadioPlayerComponent_Valet, CachedDriverLocalPlayer) == 1120, "Offset mismatch for UStreamingRadioPlayerComponent_Valet::CachedDriverLocalPlayer");
