#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioModulation
{
    struct AudioControlBusSectionData
    {
        static constexpr std::string_view Name = "AudioControlBusSectionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlBusMix = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ControlBusMix", 0x0, "ObjectProperty"},
        }};
    };

    struct AudioModulationDestination
    {
        static constexpr std::string_view Name = "AudioModulationDestination";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Modulator = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Modulator", 0x28, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ClearModulator",
            "GetModulator",
            "GetValue",
            "SetModulator",
        }};
    };

    struct AudioModulationSettings
    {
        static constexpr std::string_view Name = "AudioModulationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x30, "ArrayProperty"},
        }};
    };

    struct AudioModulationStatics
    {
        static constexpr std::string_view Name = "AudioModulationStatics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 28> FunctionNames{{
            "ActivateBus",
            "ActivateBusMix",
            "ActivateGenerator",
            "ClearAllGlobalBusMixValues",
            "ClearGlobalBusMixValue",
            "CreateADEnvelopeGenerator",
            "CreateBus",
            "CreateBusMix",
            "CreateBusMixFromValue",
            "CreateBusMixStage",
            "CreateEnvelopeFollowerGenerator",
            "CreateLFOGenerator",
            "CreateModulationDestination",
            "CreateModulationParameter",
            "DeactivateAllBusMixes",
            "DeactivateBus",
            "DeactivateBusMix",
            "DeactivateGenerator",
            "GetModulatorValue",
            "GetModulatorsFromDestination",
            "IsControlBusMixActive",
            "LoadMixFromProfile",
            "SaveMixToProfile",
            "SetGlobalBusMixValue",
            "UpdateMix",
            "UpdateMixByFilter",
            "UpdateMixFromObject",
            "UpdateModulator",
        }};
    };

    struct AudioModulationStyle
    {
        static constexpr std::string_view Name = "AudioModulationStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetControlBusColor",
            "GetControlBusMixColor",
            "GetModulationGeneratorColor",
            "GetParameterColor",
            "GetPatchColor",
        }};
    };

    struct AudioModulationSubsystem
    {
        static constexpr std::string_view Name = "AudioModulationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvelopeFollowerGeneratorParams
    {
        static constexpr std::string_view Name = "EnvelopeFollowerGeneratorParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bBypass = 0x0;
            static constexpr std::uintptr_t bInvert = 0x1;
            static constexpr std::uintptr_t AudioBus = 0x8;
            static constexpr std::uintptr_t Gain = 0x10;
            static constexpr std::uintptr_t AttackTime = 0x14;
            static constexpr std::uintptr_t ReleaseTime = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bBypass", 0x0, "BoolProperty"},
            {"bInvert", 0x1, "BoolProperty"},
            {"AudioBus", 0x8, "ObjectProperty"},
            {"Gain", 0x10, "FloatProperty"},
            {"AttackTime", 0x14, "FloatProperty"},
            {"ReleaseTime", 0x18, "FloatProperty"},
        }};
    };

    struct MovieSceneAudioControlBusComponentData
    {
        static constexpr std::string_view Name = "MovieSceneAudioControlBusComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Section = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Section", 0x0, "ObjectProperty"},
        }};
    };

    struct MovieSceneAudioControlBusMixComponentData
    {
        static constexpr std::string_view Name = "MovieSceneAudioControlBusMixComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Section = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Section", 0x0, "ObjectProperty"},
        }};
    };

    struct MovieSceneAudioControlBusMixSection
    {
        static constexpr std::string_view Name = "MovieSceneAudioControlBusMixSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t BusValue = 0x148;
            static constexpr std::uintptr_t MixBus = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BusValue", 0x148, "StructProperty"},
            {"MixBus", 0x210, "ObjectProperty"},
        }};
    };

    struct MovieSceneAudioControlBusMixSystem
    {
        static constexpr std::string_view Name = "MovieSceneAudioControlBusMixSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneAudioControlBusMixTrack
    {
        static constexpr std::string_view Name = "MovieSceneAudioControlBusMixTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t MixSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MixSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneAudioControlBusSection
    {
        static constexpr std::string_view Name = "MovieSceneAudioControlBusSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t BusValue = 0x148;
            static constexpr std::uintptr_t ControlBus = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BusValue", 0x148, "StructProperty"},
            {"ControlBus", 0x218, "ObjectProperty"},
        }};
    };

    struct MovieSceneAudioControlBusSystem
    {
        static constexpr std::string_view Name = "MovieSceneAudioControlBusSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ModulatorsByObjectKey = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModulatorsByObjectKey", 0x40, "MapProperty"},
        }};
    };

    struct MovieSceneAudioControlBusTrack
    {
        static constexpr std::string_view Name = "MovieSceneAudioControlBusTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AudioSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct SoundControlBus
    {
        static constexpr std::string_view Name = "SoundControlBus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bBypass = 0x30;
            static constexpr std::uintptr_t Address = 0x38;
            static constexpr std::uintptr_t Generators = 0x48;
            static constexpr std::uintptr_t Parameter = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bBypass", 0x30, "BoolProperty"},
            {"Address", 0x38, "StrProperty"},
            {"Generators", 0x48, "ArrayProperty"},
            {"Parameter", 0x58, "ObjectProperty"},
        }};
    };

    struct SoundControlBusMix
    {
        static constexpr std::string_view Name = "SoundControlBusMix";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileIndex = 0x28;
            static constexpr std::uintptr_t duration = 0x30;
            static constexpr std::uintptr_t bRetriggerOnActivation = 0x38;
            static constexpr std::uintptr_t MixStages = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProfileIndex", 0x28, "UInt32Property"},
            {"duration", 0x30, "DoubleProperty"},
            {"bRetriggerOnActivation", 0x38, "BoolProperty"},
            {"MixStages", 0x40, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ActivateMix",
            "DeactivateAllMixes",
            "DeactivateMix",
            "LoadMixFromProfile",
            "SaveMixToProfile",
            "SoloMix",
        }};
    };

    struct SoundControlBusMixStage
    {
        static constexpr std::string_view Name = "SoundControlBusMixStage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Bus = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Bus", 0x0, "ObjectProperty"},
            {"Value", 0x8, "StructProperty"},
        }};
    };

    struct SoundControlModulationInput
    {
        static constexpr std::string_view Name = "SoundControlModulationInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bSampleAndHold = 0x0;
            static constexpr std::uintptr_t Transform = 0x8;
            static constexpr std::uintptr_t Bus = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSampleAndHold", 0x0, "BoolProperty"},
            {"Transform", 0x8, "StructProperty"},
            {"Bus", 0x88, "ObjectProperty"},
        }};
    };

    struct SoundControlModulationPatch
    {
        static constexpr std::string_view Name = "SoundControlModulationPatch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bBypass = 0x0;
            static constexpr std::uintptr_t OutputParameter = 0x8;
            static constexpr std::uintptr_t Inputs = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bBypass", 0x0, "BoolProperty"},
            {"OutputParameter", 0x8, "ObjectProperty"},
            {"Inputs", 0x10, "ArrayProperty"},
        }};
    };

    struct SoundModulationADEnvelopeParams
    {
        static constexpr std::string_view Name = "SoundModulationADEnvelopeParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttackTime = 0x0;
            static constexpr std::uintptr_t DecayTime = 0x4;
            static constexpr std::uintptr_t AttackCurve = 0x8;
            static constexpr std::uintptr_t DecayCurve = 0xC;
            static constexpr std::uintptr_t bLooping = 0x10;
            static constexpr std::uintptr_t bBypass = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AttackTime", 0x0, "FloatProperty"},
            {"DecayTime", 0x4, "FloatProperty"},
            {"AttackCurve", 0x8, "FloatProperty"},
            {"DecayCurve", 0xC, "FloatProperty"},
            {"bLooping", 0x10, "BoolProperty"},
            {"bBypass", 0x11, "BoolProperty"},
        }};
    };

    struct SoundModulationGenerator
    {
        static constexpr std::string_view Name = "SoundModulationGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulatorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundModulationGeneratorADEnvelope
    {
        static constexpr std::string_view Name = "SoundModulationGeneratorADEnvelope";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Params", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationGeneratorEnvelopeFollower
    {
        static constexpr std::string_view Name = "SoundModulationGeneratorEnvelopeFollower";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Params", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationGeneratorLFO
    {
        static constexpr std::string_view Name = "SoundModulationGeneratorLFO";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Params", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationLFOParams
    {
        static constexpr std::string_view Name = "SoundModulationLFOParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Shape = 0x0;
            static constexpr std::uintptr_t ExponentialFactor = 0x4;
            static constexpr std::uintptr_t Width = 0x8;
            static constexpr std::uintptr_t Amplitude = 0xC;
            static constexpr std::uintptr_t Frequency = 0x10;
            static constexpr std::uintptr_t Offset = 0x14;
            static constexpr std::uintptr_t Phase = 0x18;
            static constexpr std::uintptr_t bLooping = 0x1C;
            static constexpr std::uintptr_t bBypass = 0x1D;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Shape", 0x0, "EnumProperty"},
            {"ExponentialFactor", 0x4, "FloatProperty"},
            {"Width", 0x8, "FloatProperty"},
            {"Amplitude", 0xC, "FloatProperty"},
            {"Frequency", 0x10, "FloatProperty"},
            {"Offset", 0x14, "FloatProperty"},
            {"Phase", 0x18, "FloatProperty"},
            {"bLooping", 0x1C, "BoolProperty"},
            {"bBypass", 0x1D, "BoolProperty"},
        }};
    };

    struct SoundModulationMixValue
    {
        static constexpr std::string_view Name = "SoundModulationMixValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetValue = 0x0;
            static constexpr std::uintptr_t AttackTime = 0x4;
            static constexpr std::uintptr_t ReleaseTime = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetValue", 0x0, "FloatProperty"},
            {"AttackTime", 0x4, "FloatProperty"},
            {"ReleaseTime", 0x8, "FloatProperty"},
        }};
    };

    struct SoundModulationParameter
    {
        static constexpr std::string_view Name = "SoundModulationParameter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationParameterAdditive
    {
        static constexpr std::string_view Name = "SoundModulationParameterAdditive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameter";
        struct Offsets
        {
            static constexpr std::uintptr_t UnitMin = 0x38;
            static constexpr std::uintptr_t UnitMax = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UnitMin", 0x38, "FloatProperty"},
            {"UnitMax", 0x3C, "FloatProperty"},
        }};
    };

    struct SoundModulationParameterBipolar
    {
        static constexpr std::string_view Name = "SoundModulationParameterBipolar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameter";
        struct Offsets
        {
            static constexpr std::uintptr_t UnitRange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UnitRange", 0x38, "FloatProperty"},
        }};
    };

    struct SoundModulationParameterFilterFrequency
    {
        static constexpr std::string_view Name = "SoundModulationParameterFilterFrequency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameterFrequencyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationParameterFrequency
    {
        static constexpr std::string_view Name = "SoundModulationParameterFrequency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameterFrequencyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t UnitMin = 0x38;
            static constexpr std::uintptr_t UnitMax = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UnitMin", 0x38, "FloatProperty"},
            {"UnitMax", 0x3C, "FloatProperty"},
        }};
    };

    struct SoundModulationParameterFrequencyBase
    {
        static constexpr std::string_view Name = "SoundModulationParameterFrequencyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameter";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationParameterHPFFrequency
    {
        static constexpr std::string_view Name = "SoundModulationParameterHPFFrequency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameterFilterFrequency";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationParameterLPFFrequency
    {
        static constexpr std::string_view Name = "SoundModulationParameterLPFFrequency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameterFilterFrequency";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationParameterScaled
    {
        static constexpr std::string_view Name = "SoundModulationParameterScaled";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameter";
        struct Offsets
        {
            static constexpr std::uintptr_t UnitMin = 0x38;
            static constexpr std::uintptr_t UnitMax = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UnitMin", 0x38, "FloatProperty"},
            {"UnitMax", 0x3C, "FloatProperty"},
        }};
    };

    struct SoundModulationParameterSettings
    {
        static constexpr std::string_view Name = "SoundModulationParameterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueNormalized = 0x0;
            static constexpr std::uintptr_t bClampToNormalizedRange = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ValueNormalized", 0x0, "FloatProperty"},
            {"bClampToNormalizedRange", 0x4, "BoolProperty"},
        }};
    };

    struct SoundModulationParameterVolume
    {
        static constexpr std::string_view Name = "SoundModulationParameterVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulationParameter";
        struct Offsets
        {
            static constexpr std::uintptr_t MinVolume = 0x38;
            static constexpr std::uintptr_t VolumeLimit = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinVolume", 0x38, "FloatProperty"},
            {"VolumeLimit", 0x3C, "FloatProperty"},
        }};
    };

    struct SoundModulationPatch
    {
        static constexpr std::string_view Name = "SoundModulationPatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundModulatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PatchSettings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PatchSettings", 0x30, "StructProperty"},
        }};
    };

    struct SoundModulationTransform
    {
        static constexpr std::string_view Name = "SoundModulationTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "WaveTableTransform";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x8;
            static constexpr std::uintptr_t Scalar = 0xC;
            static constexpr std::uintptr_t CurveCustom = 0x10;
            static constexpr std::uintptr_t CurveShared = 0x50;
            static constexpr std::uintptr_t TableData = 0x58;
            static constexpr std::uintptr_t duration = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Curve", 0x8, "EnumProperty"},
            {"Scalar", 0xC, "FloatProperty"},
            {"CurveCustom", 0x10, "StructProperty"},
            {"CurveShared", 0x50, "ObjectProperty"},
            {"TableData", 0x58, "StructProperty"},
            {"duration", 0x78, "FloatProperty"},
        }};
    };

}
