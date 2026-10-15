/**
 * decamp dumper generated SDK
 * Package: /Script/AudioMixer
 */
#pragma once
#include "Basic.h"

// /Script/AudioMixer.AudioOutputDeviceInfo
// Kind: ScriptStruct; super: none
struct FAudioOutputDeviceInfo
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString DeviceID; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t NumChannels; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t SampleRate; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t Format; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    TArray<void*> OutputChannelArray; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsCurrentDevice; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bIsSystemDefault (shared storage)
};

static_assert(offsetof(FAudioOutputDeviceInfo, Name) == 0, "Offset mismatch for FAudioOutputDeviceInfo::Name");
static_assert(offsetof(FAudioOutputDeviceInfo, DeviceID) == 16, "Offset mismatch for FAudioOutputDeviceInfo::DeviceID");
static_assert(offsetof(FAudioOutputDeviceInfo, NumChannels) == 32, "Offset mismatch for FAudioOutputDeviceInfo::NumChannels");
static_assert(offsetof(FAudioOutputDeviceInfo, SampleRate) == 36, "Offset mismatch for FAudioOutputDeviceInfo::SampleRate");
static_assert(offsetof(FAudioOutputDeviceInfo, Format) == 40, "Offset mismatch for FAudioOutputDeviceInfo::Format");
static_assert(offsetof(FAudioOutputDeviceInfo, OutputChannelArray) == 48, "Offset mismatch for FAudioOutputDeviceInfo::OutputChannelArray");
static_assert(offsetof(FAudioOutputDeviceInfo, bIsCurrentDevice) == 64, "Offset mismatch for FAudioOutputDeviceInfo::bIsCurrentDevice");

// /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectDynamicProcessorFilterSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Cutoff; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float GainDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSubmixEffectDynamicProcessorFilterSettings, bEnabled) == 0, "Offset mismatch for FSubmixEffectDynamicProcessorFilterSettings::bEnabled");
static_assert(offsetof(FSubmixEffectDynamicProcessorFilterSettings, Cutoff) == 4, "Offset mismatch for FSubmixEffectDynamicProcessorFilterSettings::Cutoff");
static_assert(offsetof(FSubmixEffectDynamicProcessorFilterSettings, GainDb) == 8, "Offset mismatch for FSubmixEffectDynamicProcessorFilterSettings::GainDb");

// /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectDynamicsProcessorSettings
{
public:
    std::uint8_t DynamicsProcessorType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PeakMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LinkMode; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float InputGainDb; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ThresholdDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Ratio; // 0x000C (Size: 0x4, Type: FloatProperty)
    float KneeBandwidthDb; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LookAheadMsec; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float AttackTimeMsec; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ReleaseTimeMsec; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t KeySource; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    void* ExternalAudioBus; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* ExternalSubmix; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAnalogMode; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bBypass (shared storage)
    // 0x0038 BoolProperty bChannelLinked (shared storage)
    // 0x0038 BoolProperty bKeyAudition (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0039
    float KeyGainDb; // 0x003C (Size: 0x4, Type: FloatProperty)
    float OutputGainDb; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t KeyHighshelf[0xC]; // 0x0044 (Size: 0xC, Type: StructProperty)
    std::uint8_t KeyLowshelf[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::DynamicsProcessorType");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, PeakMode) == 1, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::PeakMode");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, LinkMode) == 2, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::LinkMode");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, InputGainDb) == 4, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::InputGainDb");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ThresholdDb) == 8, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::ThresholdDb");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, Ratio) == 12, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::Ratio");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb) == 16, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::KneeBandwidthDb");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec) == 20, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::LookAheadMsec");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec) == 24, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::AttackTimeMsec");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec) == 28, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::ReleaseTimeMsec");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeySource) == 32, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::KeySource");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ExternalAudioBus) == 40, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::ExternalAudioBus");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ExternalSubmix) == 48, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::ExternalSubmix");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, bAnalogMode) == 56, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::bAnalogMode");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyGainDb) == 60, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::KeyGainDb");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, OutputGainDb) == 64, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::OutputGainDb");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyHighshelf) == 68, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::KeyHighshelf");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyLowshelf) == 80, "Offset mismatch for FSubmixEffectDynamicsProcessorSettings::KeyLowshelf");

// /Script/AudioMixer.SubmixEffectEQBand
// Kind: ScriptStruct; super: none
struct FSubmixEffectEQBand
{
public:
    float Frequency; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Bandwidth; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float GainDb; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSubmixEffectEQBand, Frequency) == 0, "Offset mismatch for FSubmixEffectEQBand::Frequency");
static_assert(offsetof(FSubmixEffectEQBand, Bandwidth) == 4, "Offset mismatch for FSubmixEffectEQBand::Bandwidth");
static_assert(offsetof(FSubmixEffectEQBand, GainDb) == 8, "Offset mismatch for FSubmixEffectEQBand::GainDb");
static_assert(offsetof(FSubmixEffectEQBand, bEnabled) == 12, "Offset mismatch for FSubmixEffectEQBand::bEnabled");

// /Script/AudioMixer.SubmixEffectReverbSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectReverbSettings
{
public:
    std::uint8_t bBypassEarlyReflections; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ReflectionsDelay; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float GainHF; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ReflectionsGain; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBypassLateReflections; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float LateDelay; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float DecayTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float Density; // 0x001C (Size: 0x4, Type: FloatProperty)
    float Diffusion; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float AirAbsorptionGainHF; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float DecayHFRatio; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float LateGain; // 0x002C (Size: 0x4, Type: FloatProperty)
    float Gain; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float WetLevel; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DryLevel; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBypass; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSubmixEffectReverbSettings, bBypassEarlyReflections) == 0, "Offset mismatch for FSubmixEffectReverbSettings::bBypassEarlyReflections");
static_assert(offsetof(FSubmixEffectReverbSettings, ReflectionsDelay) == 4, "Offset mismatch for FSubmixEffectReverbSettings::ReflectionsDelay");
static_assert(offsetof(FSubmixEffectReverbSettings, GainHF) == 8, "Offset mismatch for FSubmixEffectReverbSettings::GainHF");
static_assert(offsetof(FSubmixEffectReverbSettings, ReflectionsGain) == 12, "Offset mismatch for FSubmixEffectReverbSettings::ReflectionsGain");
static_assert(offsetof(FSubmixEffectReverbSettings, bBypassLateReflections) == 16, "Offset mismatch for FSubmixEffectReverbSettings::bBypassLateReflections");
static_assert(offsetof(FSubmixEffectReverbSettings, LateDelay) == 20, "Offset mismatch for FSubmixEffectReverbSettings::LateDelay");
static_assert(offsetof(FSubmixEffectReverbSettings, DecayTime) == 24, "Offset mismatch for FSubmixEffectReverbSettings::DecayTime");
static_assert(offsetof(FSubmixEffectReverbSettings, Density) == 28, "Offset mismatch for FSubmixEffectReverbSettings::Density");
static_assert(offsetof(FSubmixEffectReverbSettings, Diffusion) == 32, "Offset mismatch for FSubmixEffectReverbSettings::Diffusion");
static_assert(offsetof(FSubmixEffectReverbSettings, AirAbsorptionGainHF) == 36, "Offset mismatch for FSubmixEffectReverbSettings::AirAbsorptionGainHF");
static_assert(offsetof(FSubmixEffectReverbSettings, DecayHFRatio) == 40, "Offset mismatch for FSubmixEffectReverbSettings::DecayHFRatio");
static_assert(offsetof(FSubmixEffectReverbSettings, LateGain) == 44, "Offset mismatch for FSubmixEffectReverbSettings::LateGain");
static_assert(offsetof(FSubmixEffectReverbSettings, Gain) == 48, "Offset mismatch for FSubmixEffectReverbSettings::Gain");
static_assert(offsetof(FSubmixEffectReverbSettings, WetLevel) == 52, "Offset mismatch for FSubmixEffectReverbSettings::WetLevel");
static_assert(offsetof(FSubmixEffectReverbSettings, DryLevel) == 56, "Offset mismatch for FSubmixEffectReverbSettings::DryLevel");
static_assert(offsetof(FSubmixEffectReverbSettings, bBypass) == 60, "Offset mismatch for FSubmixEffectReverbSettings::bBypass");

// /Script/AudioMixer.SubmixEffectSubmixEQSettings
// Kind: ScriptStruct; super: none
struct FSubmixEffectSubmixEQSettings
{
public:
    TArray<void*> EqBands; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSubmixEffectSubmixEQSettings, EqBands) == 0, "Offset mismatch for FSubmixEffectSubmixEQSettings::EqBands");

// /Script/AudioMixer.SwapAudioOutputResult
// Kind: ScriptStruct; super: none
struct FSwapAudioOutputResult
{
public:
    FString CurrentDeviceId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString RequestedDeviceId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Result; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSwapAudioOutputResult, CurrentDeviceId) == 0, "Offset mismatch for FSwapAudioOutputResult::CurrentDeviceId");
static_assert(offsetof(FSwapAudioOutputResult, RequestedDeviceId) == 16, "Offset mismatch for FSwapAudioOutputResult::RequestedDeviceId");
static_assert(offsetof(FSwapAudioOutputResult, Result) == 32, "Offset mismatch for FSwapAudioOutputResult::Result");

// /Script/AudioMixer.AudioBusSubsystem
// Kind: Class; super: AudioEngineSubsystem
class UAudioBusSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMixer.AudioDeviceNotificationSubsystem
// Kind: Class; super: EngineSubsystem
class UAudioDeviceNotificationSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate DefaultCaptureDeviceChanged; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0048
    FMulticastInlineDelegate DefaultRenderDeviceChanged; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0070
    FMulticastInlineDelegate DeviceAdded; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0098
    FMulticastInlineDelegate DeviceRemoved; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0004[0x18]; // 0x00C0
    FMulticastInlineDelegate DeviceStateChanged; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0005[0x18]; // 0x00E8
    FMulticastInlineDelegate DeviceSwitched; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAudioDeviceNotificationSubsystem, DefaultCaptureDeviceChanged) == 56, "Offset mismatch for UAudioDeviceNotificationSubsystem::DefaultCaptureDeviceChanged");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DefaultRenderDeviceChanged) == 96, "Offset mismatch for UAudioDeviceNotificationSubsystem::DefaultRenderDeviceChanged");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DeviceAdded) == 136, "Offset mismatch for UAudioDeviceNotificationSubsystem::DeviceAdded");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DeviceRemoved) == 176, "Offset mismatch for UAudioDeviceNotificationSubsystem::DeviceRemoved");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DeviceStateChanged) == 216, "Offset mismatch for UAudioDeviceNotificationSubsystem::DeviceStateChanged");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DeviceSwitched) == 256, "Offset mismatch for UAudioDeviceNotificationSubsystem::DeviceSwitched");

// /Script/AudioMixer.AudioGenerator
// Kind: Class; super: Object
class UAudioGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMixer.AudioMixerBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAudioMixerBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMixer.QuartzClockHandle
// Kind: Class; super: Object
class UQuartzClockHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMixer.QuartzSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UQuartzSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioMixer.ScrubbedSound
// Kind: Class; super: SoundWave
class UScrubbedSound
{
public:
    std::uint8_t Pad_0000[0x2D0]; // 0x0000
    void* SoundWaveToScrub; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UScrubbedSound, SoundWaveToScrub) == 720, "Offset mismatch for UScrubbedSound::SoundWaveToScrub");

// /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectDynamicsProcessorPreset
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectDynamicsProcessorPreset, Settings) == 240, "Offset mismatch for USubmixEffectDynamicsProcessorPreset::Settings");

// /Script/AudioMixer.SubmixEffectReverbPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectReverbPreset
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectReverbPreset, Settings) == 208, "Offset mismatch for USubmixEffectReverbPreset::Settings");

// /Script/AudioMixer.SubmixEffectSubmixEQPreset
// Kind: Class; super: SoundEffectSubmixPreset
class USubmixEffectSubmixEQPreset
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubmixEffectSubmixEQPreset, Settings) == 160, "Offset mismatch for USubmixEffectSubmixEQPreset::Settings");

// /Script/AudioMixer.SynthComponent
// Kind: Class; super: SceneComponent
class USynthComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t bAllowSpatialization; // 0x0240 (Size: 0x1, Type: BoolProperty)
    // 0x0240 BoolProperty bAutoDestroy (shared storage)
    // 0x0240 BoolProperty bOverrideAttenuation (shared storage)
    // 0x0240 BoolProperty bStopWhenOwnerDestroyed (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0241
    std::uint8_t bEnableBaseSubmix; // 0x0244 (Size: 0x1, Type: BoolProperty)
    // 0x0244 BoolProperty bEnableBusSends (shared storage)
    // 0x0244 BoolProperty bEnableSubmixSends (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0245
    void* AttenuationSettings; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttenuationOverrides[0x290]; // 0x0250 (Size: 0x290, Type: StructProperty)
    void* ConcurrencySettings; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConcurrencySet[0x10]; // 0x04E8 (Size: 0x10, Type: SetProperty)
    std::uint8_t ModulationRouting[0x68]; // 0x04F8 (Size: 0x68, Type: StructProperty)
    void* SoundClass; // 0x0560 (Size: 0x8, Type: ObjectProperty)
    void* SourceEffectChain; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    void* SoundSubmix; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SoundSubmixSends; // 0x0578 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BusSends; // 0x0588 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreEffectBusSends; // 0x0598 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsPreviewSound; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    // 0x05A8 BoolProperty bIsUISound (shared storage)
    std::uint8_t Pad_0003[0x3]; // 0x05A9
    std::int32_t EnvelopeFollowerAttackTime; // 0x05AC (Size: 0x4, Type: IntProperty)
    std::int32_t EnvelopeFollowerReleaseTime; // 0x05B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x05B4
    FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x05B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0005[0x20]; // 0x05C8
    void* Synth; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* AudioComponent; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USynthComponent, bAllowSpatialization) == 576, "Offset mismatch for USynthComponent::bAllowSpatialization");
static_assert(offsetof(USynthComponent, bEnableBaseSubmix) == 580, "Offset mismatch for USynthComponent::bEnableBaseSubmix");
static_assert(offsetof(USynthComponent, AttenuationSettings) == 584, "Offset mismatch for USynthComponent::AttenuationSettings");
static_assert(offsetof(USynthComponent, AttenuationOverrides) == 592, "Offset mismatch for USynthComponent::AttenuationOverrides");
static_assert(offsetof(USynthComponent, ConcurrencySettings) == 1248, "Offset mismatch for USynthComponent::ConcurrencySettings");
static_assert(offsetof(USynthComponent, ConcurrencySet) == 1256, "Offset mismatch for USynthComponent::ConcurrencySet");
static_assert(offsetof(USynthComponent, ModulationRouting) == 1272, "Offset mismatch for USynthComponent::ModulationRouting");
static_assert(offsetof(USynthComponent, SoundClass) == 1376, "Offset mismatch for USynthComponent::SoundClass");
static_assert(offsetof(USynthComponent, SourceEffectChain) == 1384, "Offset mismatch for USynthComponent::SourceEffectChain");
static_assert(offsetof(USynthComponent, SoundSubmix) == 1392, "Offset mismatch for USynthComponent::SoundSubmix");
static_assert(offsetof(USynthComponent, SoundSubmixSends) == 1400, "Offset mismatch for USynthComponent::SoundSubmixSends");
static_assert(offsetof(USynthComponent, BusSends) == 1416, "Offset mismatch for USynthComponent::BusSends");
static_assert(offsetof(USynthComponent, PreEffectBusSends) == 1432, "Offset mismatch for USynthComponent::PreEffectBusSends");
static_assert(offsetof(USynthComponent, bIsPreviewSound) == 1448, "Offset mismatch for USynthComponent::bIsPreviewSound");
static_assert(offsetof(USynthComponent, EnvelopeFollowerAttackTime) == 1452, "Offset mismatch for USynthComponent::EnvelopeFollowerAttackTime");
static_assert(offsetof(USynthComponent, EnvelopeFollowerReleaseTime) == 1456, "Offset mismatch for USynthComponent::EnvelopeFollowerReleaseTime");
static_assert(offsetof(USynthComponent, OnAudioEnvelopeValue) == 1464, "Offset mismatch for USynthComponent::OnAudioEnvelopeValue");
static_assert(offsetof(USynthComponent, Synth) == 1512, "Offset mismatch for USynthComponent::Synth");
static_assert(offsetof(USynthComponent, AudioComponent) == 1520, "Offset mismatch for USynthComponent::AudioComponent");

// /Script/AudioMixer.SynthSound
// Kind: Class; super: SoundWaveProcedural
class USynthSound
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    TWeakObjectPtr<void> OwningSynthComponent; // 0x02F0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USynthSound, OwningSynthComponent) == 752, "Offset mismatch for USynthSound::OwningSynthComponent");
