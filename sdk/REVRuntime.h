/**
 * decamp dumper generated SDK
 * Package: /Script/REVRuntime
 */
#pragma once
#include "Basic.h"

// /Script/REVRuntime.REVComponent
// Kind: Class; super: SynthComponent
class UREVComponent
{
public:
    std::uint8_t Pad_0000[0x628]; // 0x0000
    void* Model; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* SimSettings; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    float PitchMultiplier; // 0x0638 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UREVComponent, Model) == 1576, "Offset mismatch for UREVComponent::Model");
static_assert(offsetof(UREVComponent, SimSettings) == 1584, "Offset mismatch for UREVComponent::SimSettings");
static_assert(offsetof(UREVComponent, PitchMultiplier) == 1592, "Offset mismatch for UREVComponent::PitchMultiplier");

// /Script/REVRuntime.REVModel
// Kind: Class; super: Object
class UREVModel
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::int32_t NumChannels; // 0x0058 (Size: 0x4, Type: IntProperty)
    float SampleRate; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UREVModel, NumChannels) == 88, "Offset mismatch for UREVModel::NumChannels");
static_assert(offsetof(UREVModel, SampleRate) == 92, "Offset mismatch for UREVModel::SampleRate");

// /Script/REVRuntime.RevSettings
// Kind: Class; super: Object
class URevSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float UpShiftDuration; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float UpShiftAttackDuration; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float UpShiftAttackVolumeSpike; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float UpShiftAttackRPM; // 0x003C (Size: 0x4, Type: FloatProperty)
    float UpShiftAttackThrottleTime; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UpShiftWobbleEnabled; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    float UpShiftWobbleDuration; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float UpShiftWobblePitchFreq; // 0x004C (Size: 0x4, Type: FloatProperty)
    float UpShiftWobblePitchAmp; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float UpShiftWobbleVolFreq; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float UpShiftWobbleVolAmp; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float DownShiftDuration; // 0x005C (Size: 0x4, Type: FloatProperty)
    float PopDuration; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float ClutchRPMSpike; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float ClutchRPMSpikeDuration; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float ClutchRPMMergeTime; // 0x006C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URevSettings, UpShiftDuration) == 48, "Offset mismatch for URevSettings::UpShiftDuration");
static_assert(offsetof(URevSettings, UpShiftAttackDuration) == 52, "Offset mismatch for URevSettings::UpShiftAttackDuration");
static_assert(offsetof(URevSettings, UpShiftAttackVolumeSpike) == 56, "Offset mismatch for URevSettings::UpShiftAttackVolumeSpike");
static_assert(offsetof(URevSettings, UpShiftAttackRPM) == 60, "Offset mismatch for URevSettings::UpShiftAttackRPM");
static_assert(offsetof(URevSettings, UpShiftAttackThrottleTime) == 64, "Offset mismatch for URevSettings::UpShiftAttackThrottleTime");
static_assert(offsetof(URevSettings, UpShiftWobbleEnabled) == 68, "Offset mismatch for URevSettings::UpShiftWobbleEnabled");
static_assert(offsetof(URevSettings, UpShiftWobbleDuration) == 72, "Offset mismatch for URevSettings::UpShiftWobbleDuration");
static_assert(offsetof(URevSettings, UpShiftWobblePitchFreq) == 76, "Offset mismatch for URevSettings::UpShiftWobblePitchFreq");
static_assert(offsetof(URevSettings, UpShiftWobblePitchAmp) == 80, "Offset mismatch for URevSettings::UpShiftWobblePitchAmp");
static_assert(offsetof(URevSettings, UpShiftWobbleVolFreq) == 84, "Offset mismatch for URevSettings::UpShiftWobbleVolFreq");
static_assert(offsetof(URevSettings, UpShiftWobbleVolAmp) == 88, "Offset mismatch for URevSettings::UpShiftWobbleVolAmp");
static_assert(offsetof(URevSettings, DownShiftDuration) == 92, "Offset mismatch for URevSettings::DownShiftDuration");
static_assert(offsetof(URevSettings, PopDuration) == 96, "Offset mismatch for URevSettings::PopDuration");
static_assert(offsetof(URevSettings, ClutchRPMSpike) == 100, "Offset mismatch for URevSettings::ClutchRPMSpike");
static_assert(offsetof(URevSettings, ClutchRPMSpikeDuration) == 104, "Offset mismatch for URevSettings::ClutchRPMSpikeDuration");
static_assert(offsetof(URevSettings, ClutchRPMMergeTime) == 108, "Offset mismatch for URevSettings::ClutchRPMMergeTime");
