/**
 * decamp dumper generated SDK
 * Package: /Script/FortDelMarAudio
 */
#pragma once
#include "Basic.h"

// /Script/FortDelMarAudio.FortDelMarAudioAudioCookSettings
// Kind: Class; super: Object
class UFortDelMarAudioAudioCookSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t SoundWaveChannelThreshold; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> PathsToScan; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlatformQualitySettingsToExclude; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDelMarAudioAudioCookSettings, SoundWaveChannelThreshold) == 40, "Offset mismatch for UFortDelMarAudioAudioCookSettings::SoundWaveChannelThreshold");
static_assert(offsetof(UFortDelMarAudioAudioCookSettings, PathsToScan) == 48, "Offset mismatch for UFortDelMarAudioAudioCookSettings::PathsToScan");
static_assert(offsetof(UFortDelMarAudioAudioCookSettings, PlatformQualitySettingsToExclude) == 64, "Offset mismatch for UFortDelMarAudioAudioCookSettings::PlatformQualitySettingsToExclude");

// /Script/FortDelMarAudio.FortDelMarAudioPassbyComponent
// Kind: Class; super: FortDelMarAudioProximityComponent
class UFortDelMarAudioPassbyComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* PassbySound; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* PassbyComponent; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnPassbyStart; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPassbyStop; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float MinRelativeSpeed; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float MinSpeedStopThresholdOffset; // 0x014C (Size: 0x4, Type: FloatProperty)
    float PassbyStartRadiusMax; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float PassbyStartRadiusMin; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float MinRelativeDirection; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float PassbyCooldown; // 0x015C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarAudioPassbyComponent, PassbySound) == 280, "Offset mismatch for UFortDelMarAudioPassbyComponent::PassbySound");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, PassbyComponent) == 288, "Offset mismatch for UFortDelMarAudioPassbyComponent::PassbyComponent");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, OnPassbyStart) == 296, "Offset mismatch for UFortDelMarAudioPassbyComponent::OnPassbyStart");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, OnPassbyStop) == 312, "Offset mismatch for UFortDelMarAudioPassbyComponent::OnPassbyStop");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, MinRelativeSpeed) == 328, "Offset mismatch for UFortDelMarAudioPassbyComponent::MinRelativeSpeed");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, MinSpeedStopThresholdOffset) == 332, "Offset mismatch for UFortDelMarAudioPassbyComponent::MinSpeedStopThresholdOffset");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, PassbyStartRadiusMax) == 336, "Offset mismatch for UFortDelMarAudioPassbyComponent::PassbyStartRadiusMax");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, PassbyStartRadiusMin) == 340, "Offset mismatch for UFortDelMarAudioPassbyComponent::PassbyStartRadiusMin");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, MinRelativeDirection) == 344, "Offset mismatch for UFortDelMarAudioPassbyComponent::MinRelativeDirection");
static_assert(offsetof(UFortDelMarAudioPassbyComponent, PassbyCooldown) == 348, "Offset mismatch for UFortDelMarAudioPassbyComponent::PassbyCooldown");

// /Script/FortDelMarAudio.FortDelMarAudioProximityComponent
// Kind: Class; super: FortDelMarAudioProximityComponentBase
class UFortDelMarAudioProximityComponent
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* ProximitySound; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* ProximityComponent; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    float ObjectScaleAttenuationModifier; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float FadeOutDuration; // 0x010C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortDelMarAudioProximityComponent, ProximitySound) == 248, "Offset mismatch for UFortDelMarAudioProximityComponent::ProximitySound");
static_assert(offsetof(UFortDelMarAudioProximityComponent, ProximityComponent) == 256, "Offset mismatch for UFortDelMarAudioProximityComponent::ProximityComponent");
static_assert(offsetof(UFortDelMarAudioProximityComponent, ObjectScaleAttenuationModifier) == 264, "Offset mismatch for UFortDelMarAudioProximityComponent::ObjectScaleAttenuationModifier");
static_assert(offsetof(UFortDelMarAudioProximityComponent, FadeOutDuration) == 268, "Offset mismatch for UFortDelMarAudioProximityComponent::FadeOutDuration");

// /Script/FortDelMarAudio.FortDelMarAudioProximityComponentBase
// Kind: Class; super: ActorComponent
class UFortDelMarAudioProximityComponentBase
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnProximityStart; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnProximityStop; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bProximityActive; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x00E1
    void* Subsystem; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortDelMarAudioProximityComponentBase, OnProximityStart) == 192, "Offset mismatch for UFortDelMarAudioProximityComponentBase::OnProximityStart");
static_assert(offsetof(UFortDelMarAudioProximityComponentBase, OnProximityStop) == 208, "Offset mismatch for UFortDelMarAudioProximityComponentBase::OnProximityStop");
static_assert(offsetof(UFortDelMarAudioProximityComponentBase, bProximityActive) == 224, "Offset mismatch for UFortDelMarAudioProximityComponentBase::bProximityActive");
static_assert(offsetof(UFortDelMarAudioProximityComponentBase, Subsystem) == 240, "Offset mismatch for UFortDelMarAudioProximityComponentBase::Subsystem");

// /Script/FortDelMarAudio.FortDelMarAudioProximitySubsystem
// Kind: Class; super: TickableWorldSubsystem
class UFortDelMarAudioProximitySubsystem
{
public:
    std::uint8_t Opaque[1];
};
