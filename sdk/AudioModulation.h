/**
 * decamp dumper generated SDK
 * Package: /Script/AudioModulation
 */
#pragma once
#include "Basic.h"

// /Script/AudioModulation.AudioControlBusSectionData
// Kind: ScriptStruct; super: none
struct FAudioControlBusSectionData
{
public:
    void* ControlBusMix; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAudioControlBusSectionData, ControlBusMix) == 0, "Offset mismatch for FAudioControlBusSectionData::ControlBusMix");

// /Script/AudioModulation.EnvelopeFollowerGeneratorParams
// Kind: ScriptStruct; super: none
struct FEnvelopeFollowerGeneratorParams
{
public:
    std::uint8_t bBypass; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvert; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    void* AudioBus; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float Gain; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float AttackTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float ReleaseTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEnvelopeFollowerGeneratorParams, bBypass) == 0, "Offset mismatch for FEnvelopeFollowerGeneratorParams::bBypass");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, bInvert) == 1, "Offset mismatch for FEnvelopeFollowerGeneratorParams::bInvert");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, AudioBus) == 8, "Offset mismatch for FEnvelopeFollowerGeneratorParams::AudioBus");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, Gain) == 16, "Offset mismatch for FEnvelopeFollowerGeneratorParams::Gain");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, AttackTime) == 20, "Offset mismatch for FEnvelopeFollowerGeneratorParams::AttackTime");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, ReleaseTime) == 24, "Offset mismatch for FEnvelopeFollowerGeneratorParams::ReleaseTime");

// /Script/AudioModulation.MovieSceneAudioControlBusComponentData
// Kind: ScriptStruct; super: none
struct FMovieSceneAudioControlBusComponentData
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneAudioControlBusComponentData, Section) == 0, "Offset mismatch for FMovieSceneAudioControlBusComponentData::Section");

// /Script/AudioModulation.MovieSceneAudioControlBusMixComponentData
// Kind: ScriptStruct; super: none
struct FMovieSceneAudioControlBusMixComponentData
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneAudioControlBusMixComponentData, Section) == 0, "Offset mismatch for FMovieSceneAudioControlBusMixComponentData::Section");

// /Script/AudioModulation.SoundControlBusMixStage
// Kind: ScriptStruct; super: none
struct FSoundControlBusMixStage
{
public:
    void* Bus; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSoundControlBusMixStage, Bus) == 0, "Offset mismatch for FSoundControlBusMixStage::Bus");
static_assert(offsetof(FSoundControlBusMixStage, Value) == 8, "Offset mismatch for FSoundControlBusMixStage::Value");

// /Script/AudioModulation.SoundControlModulationInput
// Kind: ScriptStruct; super: none
struct FSoundControlModulationInput
{
public:
    std::uint8_t bSampleAndHold; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Transform[0x80]; // 0x0008 (Size: 0x80, Type: StructProperty)
    void* Bus; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSoundControlModulationInput, bSampleAndHold) == 0, "Offset mismatch for FSoundControlModulationInput::bSampleAndHold");
static_assert(offsetof(FSoundControlModulationInput, Transform) == 8, "Offset mismatch for FSoundControlModulationInput::Transform");
static_assert(offsetof(FSoundControlModulationInput, Bus) == 136, "Offset mismatch for FSoundControlModulationInput::Bus");

// /Script/AudioModulation.SoundControlModulationPatch
// Kind: ScriptStruct; super: none
struct FSoundControlModulationPatch
{
public:
    std::uint8_t bBypass; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* OutputParameter; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Inputs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSoundControlModulationPatch, bBypass) == 0, "Offset mismatch for FSoundControlModulationPatch::bBypass");
static_assert(offsetof(FSoundControlModulationPatch, OutputParameter) == 8, "Offset mismatch for FSoundControlModulationPatch::OutputParameter");
static_assert(offsetof(FSoundControlModulationPatch, Inputs) == 16, "Offset mismatch for FSoundControlModulationPatch::Inputs");

// /Script/AudioModulation.SoundModulationADEnvelopeParams
// Kind: ScriptStruct; super: none
struct FSoundModulationADEnvelopeParams
{
public:
    float AttackTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DecayTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float AttackCurve; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DecayCurve; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLooping; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBypass; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundModulationADEnvelopeParams, AttackTime) == 0, "Offset mismatch for FSoundModulationADEnvelopeParams::AttackTime");
static_assert(offsetof(FSoundModulationADEnvelopeParams, DecayTime) == 4, "Offset mismatch for FSoundModulationADEnvelopeParams::DecayTime");
static_assert(offsetof(FSoundModulationADEnvelopeParams, AttackCurve) == 8, "Offset mismatch for FSoundModulationADEnvelopeParams::AttackCurve");
static_assert(offsetof(FSoundModulationADEnvelopeParams, DecayCurve) == 12, "Offset mismatch for FSoundModulationADEnvelopeParams::DecayCurve");
static_assert(offsetof(FSoundModulationADEnvelopeParams, bLooping) == 16, "Offset mismatch for FSoundModulationADEnvelopeParams::bLooping");
static_assert(offsetof(FSoundModulationADEnvelopeParams, bBypass) == 17, "Offset mismatch for FSoundModulationADEnvelopeParams::bBypass");

// /Script/AudioModulation.SoundModulationLFOParams
// Kind: ScriptStruct; super: none
struct FSoundModulationLFOParams
{
public:
    std::uint8_t Shape; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ExponentialFactor; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Width; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Amplitude; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Frequency; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float Offset; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float Phase; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLooping; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBypass; // 0x001D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundModulationLFOParams, Shape) == 0, "Offset mismatch for FSoundModulationLFOParams::Shape");
static_assert(offsetof(FSoundModulationLFOParams, ExponentialFactor) == 4, "Offset mismatch for FSoundModulationLFOParams::ExponentialFactor");
static_assert(offsetof(FSoundModulationLFOParams, Width) == 8, "Offset mismatch for FSoundModulationLFOParams::Width");
static_assert(offsetof(FSoundModulationLFOParams, Amplitude) == 12, "Offset mismatch for FSoundModulationLFOParams::Amplitude");
static_assert(offsetof(FSoundModulationLFOParams, Frequency) == 16, "Offset mismatch for FSoundModulationLFOParams::Frequency");
static_assert(offsetof(FSoundModulationLFOParams, Offset) == 20, "Offset mismatch for FSoundModulationLFOParams::Offset");
static_assert(offsetof(FSoundModulationLFOParams, Phase) == 24, "Offset mismatch for FSoundModulationLFOParams::Phase");
static_assert(offsetof(FSoundModulationLFOParams, bLooping) == 28, "Offset mismatch for FSoundModulationLFOParams::bLooping");
static_assert(offsetof(FSoundModulationLFOParams, bBypass) == 29, "Offset mismatch for FSoundModulationLFOParams::bBypass");

// /Script/AudioModulation.SoundModulationMixValue
// Kind: ScriptStruct; super: none
struct FSoundModulationMixValue
{
public:
    float TargetValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AttackTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ReleaseTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSoundModulationMixValue, TargetValue) == 0, "Offset mismatch for FSoundModulationMixValue::TargetValue");
static_assert(offsetof(FSoundModulationMixValue, AttackTime) == 4, "Offset mismatch for FSoundModulationMixValue::AttackTime");
static_assert(offsetof(FSoundModulationMixValue, ReleaseTime) == 8, "Offset mismatch for FSoundModulationMixValue::ReleaseTime");

// /Script/AudioModulation.SoundModulationParameterSettings
// Kind: ScriptStruct; super: none
struct FSoundModulationParameterSettings
{
public:
    float ValueNormalized; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampToNormalizedRange; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSoundModulationParameterSettings, ValueNormalized) == 0, "Offset mismatch for FSoundModulationParameterSettings::ValueNormalized");
static_assert(offsetof(FSoundModulationParameterSettings, bClampToNormalizedRange) == 4, "Offset mismatch for FSoundModulationParameterSettings::bClampToNormalizedRange");

// /Script/AudioModulation.SoundModulationTransform
// Kind: ScriptStruct; super: WaveTableTransform
struct FSoundModulationTransform
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Curve; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float Scalar; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveCustom[0x40]; // 0x0010 (Size: 0x40, Type: StructProperty)
    void* CurveShared; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TableData[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    float duration; // 0x0078 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSoundModulationTransform, Curve) == 8, "Offset mismatch for FSoundModulationTransform::Curve");
static_assert(offsetof(FSoundModulationTransform, Scalar) == 12, "Offset mismatch for FSoundModulationTransform::Scalar");
static_assert(offsetof(FSoundModulationTransform, CurveCustom) == 16, "Offset mismatch for FSoundModulationTransform::CurveCustom");
static_assert(offsetof(FSoundModulationTransform, CurveShared) == 80, "Offset mismatch for FSoundModulationTransform::CurveShared");
static_assert(offsetof(FSoundModulationTransform, TableData) == 88, "Offset mismatch for FSoundModulationTransform::TableData");
static_assert(offsetof(FSoundModulationTransform, duration) == 120, "Offset mismatch for FSoundModulationTransform::duration");

// /Script/AudioModulation.AudioModulationDestination
// Kind: Class; super: Object
class UAudioModulationDestination
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Modulator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAudioModulationDestination, Modulator) == 40, "Offset mismatch for UAudioModulationDestination::Modulator");

// /Script/AudioModulation.AudioModulationSettings
// Kind: Class; super: DeveloperSettings
class UAudioModulationSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Parameters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioModulationSettings, Parameters) == 48, "Offset mismatch for UAudioModulationSettings::Parameters");

// /Script/AudioModulation.AudioModulationStatics
// Kind: Class; super: BlueprintFunctionLibrary
class UAudioModulationStatics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioModulation.AudioModulationStyle
// Kind: Class; super: BlueprintFunctionLibrary
class UAudioModulationStyle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioModulation.AudioModulationSubsystem
// Kind: Class; super: AudioEngineSubsystem
class UAudioModulationSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioModulation.MovieSceneAudioControlBusMixSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneAudioControlBusMixSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t BusValue[0xC8]; // 0x0148 (Size: 0xC8, Type: StructProperty)
    void* MixBus; // 0x0210 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneAudioControlBusMixSection, BusValue) == 328, "Offset mismatch for UMovieSceneAudioControlBusMixSection::BusValue");
static_assert(offsetof(UMovieSceneAudioControlBusMixSection, MixBus) == 528, "Offset mismatch for UMovieSceneAudioControlBusMixSection::MixBus");

// /Script/AudioModulation.MovieSceneAudioControlBusMixSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneAudioControlBusMixSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneAudioControlBusMixSystem, Linker) == 40, "Offset mismatch for UMovieSceneAudioControlBusMixSystem::Linker");

// /Script/AudioModulation.MovieSceneAudioControlBusMixTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneAudioControlBusMixTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> MixSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneAudioControlBusMixTrack, MixSections) == 248, "Offset mismatch for UMovieSceneAudioControlBusMixTrack::MixSections");

// /Script/AudioModulation.MovieSceneAudioControlBusSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneAudioControlBusSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t BusValue[0xD0]; // 0x0148 (Size: 0xD0, Type: StructProperty)
    void* ControlBus; // 0x0218 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneAudioControlBusSection, BusValue) == 328, "Offset mismatch for UMovieSceneAudioControlBusSection::BusValue");
static_assert(offsetof(UMovieSceneAudioControlBusSection, ControlBus) == 536, "Offset mismatch for UMovieSceneAudioControlBusSection::ControlBus");

// /Script/AudioModulation.MovieSceneAudioControlBusSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneAudioControlBusSystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TMap<void*, void*> ModulatorsByObjectKey; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMovieSceneAudioControlBusSystem, ModulatorsByObjectKey) == 64, "Offset mismatch for UMovieSceneAudioControlBusSystem::ModulatorsByObjectKey");

// /Script/AudioModulation.MovieSceneAudioControlBusTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneAudioControlBusTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> AudioSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneAudioControlBusTrack, AudioSections) == 248, "Offset mismatch for UMovieSceneAudioControlBusTrack::AudioSections");

// /Script/AudioModulation.SoundControlBus
// Kind: Class; super: SoundModulatorBase
class USoundControlBus
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bBypass; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    FString Address; // 0x0038 (Size: 0x10, Type: StrProperty)
    TArray<void*> Generators; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Parameter; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USoundControlBus, bBypass) == 48, "Offset mismatch for USoundControlBus::bBypass");
static_assert(offsetof(USoundControlBus, Address) == 56, "Offset mismatch for USoundControlBus::Address");
static_assert(offsetof(USoundControlBus, Generators) == 72, "Offset mismatch for USoundControlBus::Generators");
static_assert(offsetof(USoundControlBus, Parameter) == 88, "Offset mismatch for USoundControlBus::Parameter");

// /Script/AudioModulation.SoundControlBusMix
// Kind: Class; super: Object
class USoundControlBusMix
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t ProfileIndex; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    double duration; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bRetriggerOnActivation; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    TArray<void*> MixStages; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USoundControlBusMix, ProfileIndex) == 40, "Offset mismatch for USoundControlBusMix::ProfileIndex");
static_assert(offsetof(USoundControlBusMix, duration) == 48, "Offset mismatch for USoundControlBusMix::duration");
static_assert(offsetof(USoundControlBusMix, bRetriggerOnActivation) == 56, "Offset mismatch for USoundControlBusMix::bRetriggerOnActivation");
static_assert(offsetof(USoundControlBusMix, MixStages) == 64, "Offset mismatch for USoundControlBusMix::MixStages");

// /Script/AudioModulation.SoundModulationGenerator
// Kind: Class; super: SoundModulatorBase
class USoundModulationGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioModulation.SoundModulationGeneratorADEnvelope
// Kind: Class; super: SoundModulationGenerator
class USoundModulationGeneratorADEnvelope
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationGeneratorADEnvelope, Params) == 48, "Offset mismatch for USoundModulationGeneratorADEnvelope::Params");

// /Script/AudioModulation.SoundModulationGeneratorEnvelopeFollower
// Kind: Class; super: SoundModulationGenerator
class USoundModulationGeneratorEnvelopeFollower
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationGeneratorEnvelopeFollower, Params) == 48, "Offset mismatch for USoundModulationGeneratorEnvelopeFollower::Params");

// /Script/AudioModulation.SoundModulationGeneratorLFO
// Kind: Class; super: SoundModulationGenerator
class USoundModulationGeneratorLFO
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationGeneratorLFO, Params) == 48, "Offset mismatch for USoundModulationGeneratorLFO::Params");

// /Script/AudioModulation.SoundModulationParameter
// Kind: Class; super: Object
class USoundModulationParameter
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationParameter, Settings) == 48, "Offset mismatch for USoundModulationParameter::Settings");

// /Script/AudioModulation.SoundModulationParameterAdditive
// Kind: Class; super: SoundModulationParameter
class USoundModulationParameterAdditive
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float UnitMin; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float UnitMax; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USoundModulationParameterAdditive, UnitMin) == 56, "Offset mismatch for USoundModulationParameterAdditive::UnitMin");
static_assert(offsetof(USoundModulationParameterAdditive, UnitMax) == 60, "Offset mismatch for USoundModulationParameterAdditive::UnitMax");

// /Script/AudioModulation.SoundModulationParameterBipolar
// Kind: Class; super: SoundModulationParameter
class USoundModulationParameterBipolar
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float UnitRange; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USoundModulationParameterBipolar, UnitRange) == 56, "Offset mismatch for USoundModulationParameterBipolar::UnitRange");

// /Script/AudioModulation.SoundModulationParameterFilterFrequency
// Kind: Class; super: SoundModulationParameterFrequencyBase
class USoundModulationParameterFilterFrequency
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationParameterFilterFrequency, Settings) == 48, "Offset mismatch for USoundModulationParameterFilterFrequency::Settings");

// /Script/AudioModulation.SoundModulationParameterFrequency
// Kind: Class; super: SoundModulationParameterFrequencyBase
class USoundModulationParameterFrequency
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float UnitMin; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float UnitMax; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USoundModulationParameterFrequency, UnitMin) == 56, "Offset mismatch for USoundModulationParameterFrequency::UnitMin");
static_assert(offsetof(USoundModulationParameterFrequency, UnitMax) == 60, "Offset mismatch for USoundModulationParameterFrequency::UnitMax");

// /Script/AudioModulation.SoundModulationParameterFrequencyBase
// Kind: Class; super: SoundModulationParameter
class USoundModulationParameterFrequencyBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationParameterFrequencyBase, Settings) == 48, "Offset mismatch for USoundModulationParameterFrequencyBase::Settings");

// /Script/AudioModulation.SoundModulationParameterHPFFrequency
// Kind: Class; super: SoundModulationParameterFilterFrequency
class USoundModulationParameterHPFFrequency
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationParameterHPFFrequency, Settings) == 48, "Offset mismatch for USoundModulationParameterHPFFrequency::Settings");

// /Script/AudioModulation.SoundModulationParameterLPFFrequency
// Kind: Class; super: SoundModulationParameterFilterFrequency
class USoundModulationParameterLPFFrequency
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationParameterLPFFrequency, Settings) == 48, "Offset mismatch for USoundModulationParameterLPFFrequency::Settings");

// /Script/AudioModulation.SoundModulationParameterScaled
// Kind: Class; super: SoundModulationParameter
class USoundModulationParameterScaled
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float UnitMin; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float UnitMax; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USoundModulationParameterScaled, UnitMin) == 56, "Offset mismatch for USoundModulationParameterScaled::UnitMin");
static_assert(offsetof(USoundModulationParameterScaled, UnitMax) == 60, "Offset mismatch for USoundModulationParameterScaled::UnitMax");

// /Script/AudioModulation.SoundModulationParameterVolume
// Kind: Class; super: SoundModulationParameter
class USoundModulationParameterVolume
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float MinVolume; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float VolumeLimit; // 0x003C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USoundModulationParameterVolume, MinVolume) == 56, "Offset mismatch for USoundModulationParameterVolume::MinVolume");
static_assert(offsetof(USoundModulationParameterVolume, VolumeLimit) == 60, "Offset mismatch for USoundModulationParameterVolume::VolumeLimit");

// /Script/AudioModulation.SoundModulationPatch
// Kind: Class; super: SoundModulatorBase
class USoundModulationPatch
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PatchSettings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundModulationPatch, PatchSettings) == 48, "Offset mismatch for USoundModulationPatch::PatchSettings");
