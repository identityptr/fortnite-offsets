#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioMixer
{
    struct AudioBusSubsystem
    {
        static constexpr std::string_view Name = "AudioBusSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMixerEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioDeviceNotificationSubsystem
    {
        static constexpr std::string_view Name = "AudioDeviceNotificationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCaptureDeviceChanged = 0x38;
            static constexpr std::uintptr_t DefaultRenderDeviceChanged = 0x60;
            static constexpr std::uintptr_t DeviceAdded = 0x88;
            static constexpr std::uintptr_t DeviceRemoved = 0xB0;
            static constexpr std::uintptr_t DeviceStateChanged = 0xD8;
            static constexpr std::uintptr_t DeviceSwitched = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DefaultCaptureDeviceChanged", 0x38, "MulticastInlineDelegateProperty"},
            {"DefaultRenderDeviceChanged", 0x60, "MulticastInlineDelegateProperty"},
            {"DeviceAdded", 0x88, "MulticastInlineDelegateProperty"},
            {"DeviceRemoved", 0xB0, "MulticastInlineDelegateProperty"},
            {"DeviceStateChanged", 0xD8, "MulticastInlineDelegateProperty"},
            {"DeviceSwitched", 0x100, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AudioGenerator
    {
        static constexpr std::string_view Name = "AudioGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioMixerBlueprintLibrary
    {
        static constexpr std::string_view Name = "AudioMixerBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 41> FunctionNames{{
            "AddMasterSubmixEffect",
            "AddSourceEffectToPresetChain",
            "AddSubmixEffect",
            "ClearMasterSubmixEffects",
            "ClearSubmixEffectChainOverride",
            "ClearSubmixEffects",
            "Conv_AudioOutputDeviceInfoToString",
            "GetAvailableAudioOutputDevices",
            "GetCurrentAudioOutputDeviceName",
            "GetMagnitudeForFrequencies",
            "GetNumberOfEntriesInSourceEffectChain",
            "GetPhaseForFrequencies",
            "IsAudioBusActive",
            "MakeFullSpectrumSpectralAnalysisBandSettings",
            "MakeMusicalSpectralAnalysisBandSettings",
            "MakePresetSpectralAnalysisBandSettings",
            "PauseRecordingOutput",
            "PlayQuantized",
            "PrimeSoundCueForPlayback",
            "PrimeSoundForPlayback",
            "RegisterAudioBusToSubmix",
            "RemoveMasterSubmixEffect",
            "RemoveSourceEffectFromPresetChain",
            "RemoveSubmixEffect",
            "RemoveSubmixEffectAtIndex",
            "RemoveSubmixEffectPreset",
            "RemoveSubmixEffectPresetAtIndex",
            "ReplaceSoundEffectSubmix",
            "ReplaceSubmixEffect",
            "ResumeRecordingOutput",
            "SetBypassSourceEffectChainEntry",
            "SetSubmixEffectChainOverride",
            "StartAnalyzingOutput",
            "StartAudioBus",
            "StartRecordingOutput",
            "StopAnalyzingOutput",
            "StopAudioBus",
            "StopRecordingOutput",
            "SwapAudioOutputDevice",
            "TrimAudioCache",
            "UnregisterAudioBusFromSubmix",
        }};
    };

    struct AudioMixerEngineSubsystem
    {
        static constexpr std::string_view Name = "AudioMixerEngineSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioOutputDeviceInfo
    {
        static constexpr std::string_view Name = "AudioOutputDeviceInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t DeviceID = 0x10;
            static constexpr std::uintptr_t NumChannels = 0x20;
            static constexpr std::uintptr_t SampleRate = 0x24;
            static constexpr std::uintptr_t Format = 0x28;
            static constexpr std::uintptr_t OutputChannelArray = 0x30;
            static constexpr std::uintptr_t bIsCurrentDevice = 0x40;
            static constexpr std::uintptr_t bIsSystemDefault = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"DeviceID", 0x10, "StrProperty"},
            {"NumChannels", 0x20, "IntProperty"},
            {"SampleRate", 0x24, "IntProperty"},
            {"Format", 0x28, "EnumProperty"},
            {"OutputChannelArray", 0x30, "ArrayProperty"},
            {"bIsCurrentDevice", 0x40, "BoolProperty"},
            {"bIsSystemDefault", 0x40, "BoolProperty"},
        }};
    };

    struct QuartzClockHandle
    {
        static constexpr std::string_view Name = "QuartzClockHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 27> FunctionNames{{
            "GetBeatProgressPercent",
            "GetBeatsPerMinute",
            "GetCurrentTimestamp",
            "GetDurationOfQuantizationTypeInSeconds",
            "GetEstimatedRunTime",
            "GetMillisecondsPerTick",
            "GetSecondsPerTick",
            "GetThirtySecondNotesPerMinute",
            "GetTicksPerSecond",
            "IsClockRunning",
            "NotifyOnQuantizationBoundary",
            "PauseClock",
            "ResetTransport",
            "ResetTransportQuantized",
            "ResumeClock",
            "SetBeatsPerMinute",
            "SetMillisecondsPerTick",
            "SetSecondsPerTick",
            "SetThirtySecondNotesPerMinute",
            "SetTicksPerSecond",
            "StartClock",
            "StartOtherClock",
            "StopClock",
            "SubscribeToAllQuantizationEvents",
            "SubscribeToQuantizationEvent",
            "UnsubscribeFromAllTimeDivisions",
            "UnsubscribeFromTimeDivision",
        }};
    };

    struct QuartzSubsystem
    {
        static constexpr std::string_view Name = "QuartzSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "CreateNewClock",
            "DeleteClockByHandle",
            "DeleteClockByName",
            "DoesClockExist",
            "GetAudioRenderThreadToGameThreadAverageLatency",
            "GetAudioRenderThreadToGameThreadMaxLatency",
            "GetAudioRenderThreadToGameThreadMinLatency",
            "GetCurrentClockTimestamp",
            "GetDurationOfQuantizationTypeInSeconds",
            "GetEstimatedClockRunTime",
            "GetGameThreadToAudioRenderThreadAverageLatency",
            "GetGameThreadToAudioRenderThreadMaxLatency",
            "GetGameThreadToAudioRenderThreadMinLatency",
            "GetHandleForClock",
            "GetRoundTripAverageLatency",
            "GetRoundTripMaxLatency",
            "GetRoundTripMinLatency",
            "IsClockRunning",
            "IsQuartzEnabled",
            "SetQuartzSubsystemTickableWhenPaused",
        }};
    };

    struct ScrubbedSound
    {
        static constexpr std::string_view Name = "ScrubbedSound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundWave";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundWaveToScrub = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundWaveToScrub", 0x2D0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetPlayheadTime",
            "SetGrainDurationRange",
            "SetIsScrubbing",
            "SetIsScrubbingWhileStationary",
            "SetPlayheadTime",
            "SetSoundWave",
        }};
    };

    struct SubmixEffectDynamicProcessorFilterSettings
    {
        static constexpr std::string_view Name = "SubmixEffectDynamicProcessorFilterSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Cutoff = 0x4;
            static constexpr std::uintptr_t GainDb = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Cutoff", 0x4, "FloatProperty"},
            {"GainDb", 0x8, "FloatProperty"},
        }};
    };

    struct SubmixEffectDynamicsProcessorPreset
    {
        static constexpr std::string_view Name = "SubmixEffectDynamicsProcessorPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xF0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ResetKey",
            "SetAudioBus",
            "SetExternalSubmix",
            "SetSettings",
        }};
    };

    struct SubmixEffectDynamicsProcessorSettings
    {
        static constexpr std::string_view Name = "SubmixEffectDynamicsProcessorSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicsProcessorType = 0x0;
            static constexpr std::uintptr_t PeakMode = 0x1;
            static constexpr std::uintptr_t LinkMode = 0x2;
            static constexpr std::uintptr_t InputGainDb = 0x4;
            static constexpr std::uintptr_t ThresholdDb = 0x8;
            static constexpr std::uintptr_t Ratio = 0xC;
            static constexpr std::uintptr_t KneeBandwidthDb = 0x10;
            static constexpr std::uintptr_t LookAheadMsec = 0x14;
            static constexpr std::uintptr_t AttackTimeMsec = 0x18;
            static constexpr std::uintptr_t ReleaseTimeMsec = 0x1C;
            static constexpr std::uintptr_t KeySource = 0x20;
            static constexpr std::uintptr_t ExternalAudioBus = 0x28;
            static constexpr std::uintptr_t ExternalSubmix = 0x30;
            static constexpr std::uintptr_t bAnalogMode = 0x38;
            static constexpr std::uintptr_t bBypass = 0x38;
            static constexpr std::uintptr_t bChannelLinked = 0x38;
            static constexpr std::uintptr_t bKeyAudition = 0x38;
            static constexpr std::uintptr_t KeyGainDb = 0x3C;
            static constexpr std::uintptr_t OutputGainDb = 0x40;
            static constexpr std::uintptr_t KeyHighshelf = 0x44;
            static constexpr std::uintptr_t KeyLowshelf = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"DynamicsProcessorType", 0x0, "EnumProperty"},
            {"PeakMode", 0x1, "EnumProperty"},
            {"LinkMode", 0x2, "EnumProperty"},
            {"InputGainDb", 0x4, "FloatProperty"},
            {"ThresholdDb", 0x8, "FloatProperty"},
            {"Ratio", 0xC, "FloatProperty"},
            {"KneeBandwidthDb", 0x10, "FloatProperty"},
            {"LookAheadMsec", 0x14, "FloatProperty"},
            {"AttackTimeMsec", 0x18, "FloatProperty"},
            {"ReleaseTimeMsec", 0x1C, "FloatProperty"},
            {"KeySource", 0x20, "EnumProperty"},
            {"ExternalAudioBus", 0x28, "ObjectProperty"},
            {"ExternalSubmix", 0x30, "ObjectProperty"},
            {"bAnalogMode", 0x38, "BoolProperty"},
            {"bBypass", 0x38, "BoolProperty"},
            {"bChannelLinked", 0x38, "BoolProperty"},
            {"bKeyAudition", 0x38, "BoolProperty"},
            {"KeyGainDb", 0x3C, "FloatProperty"},
            {"OutputGainDb", 0x40, "FloatProperty"},
            {"KeyHighshelf", 0x44, "StructProperty"},
            {"KeyLowshelf", 0x50, "StructProperty"},
        }};
    };

    struct SubmixEffectEQBand
    {
        static constexpr std::string_view Name = "SubmixEffectEQBand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Frequency = 0x0;
            static constexpr std::uintptr_t Bandwidth = 0x4;
            static constexpr std::uintptr_t GainDb = 0x8;
            static constexpr std::uintptr_t bEnabled = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Frequency", 0x0, "FloatProperty"},
            {"Bandwidth", 0x4, "FloatProperty"},
            {"GainDb", 0x8, "FloatProperty"},
            {"bEnabled", 0xC, "BoolProperty"},
        }};
    };

    struct SubmixEffectReverbPreset
    {
        static constexpr std::string_view Name = "SubmixEffectReverbPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xD0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetSettings",
            "SetSettingsWithReverbEffect",
        }};
    };

    struct SubmixEffectReverbSettings
    {
        static constexpr std::string_view Name = "SubmixEffectReverbSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bBypassEarlyReflections = 0x0;
            static constexpr std::uintptr_t ReflectionsDelay = 0x4;
            static constexpr std::uintptr_t GainHF = 0x8;
            static constexpr std::uintptr_t ReflectionsGain = 0xC;
            static constexpr std::uintptr_t bBypassLateReflections = 0x10;
            static constexpr std::uintptr_t LateDelay = 0x14;
            static constexpr std::uintptr_t DecayTime = 0x18;
            static constexpr std::uintptr_t Density = 0x1C;
            static constexpr std::uintptr_t Diffusion = 0x20;
            static constexpr std::uintptr_t AirAbsorptionGainHF = 0x24;
            static constexpr std::uintptr_t DecayHFRatio = 0x28;
            static constexpr std::uintptr_t LateGain = 0x2C;
            static constexpr std::uintptr_t Gain = 0x30;
            static constexpr std::uintptr_t WetLevel = 0x34;
            static constexpr std::uintptr_t DryLevel = 0x38;
            static constexpr std::uintptr_t bBypass = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bBypassEarlyReflections", 0x0, "BoolProperty"},
            {"ReflectionsDelay", 0x4, "FloatProperty"},
            {"GainHF", 0x8, "FloatProperty"},
            {"ReflectionsGain", 0xC, "FloatProperty"},
            {"bBypassLateReflections", 0x10, "BoolProperty"},
            {"LateDelay", 0x14, "FloatProperty"},
            {"DecayTime", 0x18, "FloatProperty"},
            {"Density", 0x1C, "FloatProperty"},
            {"Diffusion", 0x20, "FloatProperty"},
            {"AirAbsorptionGainHF", 0x24, "FloatProperty"},
            {"DecayHFRatio", 0x28, "FloatProperty"},
            {"LateGain", 0x2C, "FloatProperty"},
            {"Gain", 0x30, "FloatProperty"},
            {"WetLevel", 0x34, "FloatProperty"},
            {"DryLevel", 0x38, "FloatProperty"},
            {"bBypass", 0x3C, "BoolProperty"},
        }};
    };

    struct SubmixEffectSubmixEQPreset
    {
        static constexpr std::string_view Name = "SubmixEffectSubmixEQPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundEffectSubmixPreset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xA0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSettings",
        }};
    };

    struct SubmixEffectSubmixEQSettings
    {
        static constexpr std::string_view Name = "SubmixEffectSubmixEQSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EqBands = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EqBands", 0x0, "ArrayProperty"},
        }};
    };

    struct SwapAudioOutputResult
    {
        static constexpr std::string_view Name = "SwapAudioOutputResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentDeviceId = 0x0;
            static constexpr std::uintptr_t RequestedDeviceId = 0x10;
            static constexpr std::uintptr_t Result = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentDeviceId", 0x0, "StrProperty"},
            {"RequestedDeviceId", 0x10, "StrProperty"},
            {"Result", 0x20, "EnumProperty"},
        }};
    };

    struct SynthComponent
    {
        static constexpr std::string_view Name = "SynthComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowSpatialization = 0x240;
            static constexpr std::uintptr_t bAutoDestroy = 0x240;
            static constexpr std::uintptr_t bOverrideAttenuation = 0x240;
            static constexpr std::uintptr_t bStopWhenOwnerDestroyed = 0x240;
            static constexpr std::uintptr_t bEnableBaseSubmix = 0x244;
            static constexpr std::uintptr_t bEnableBusSends = 0x244;
            static constexpr std::uintptr_t bEnableSubmixSends = 0x244;
            static constexpr std::uintptr_t AttenuationSettings = 0x248;
            static constexpr std::uintptr_t AttenuationOverrides = 0x250;
            static constexpr std::uintptr_t ConcurrencySettings = 0x4E0;
            static constexpr std::uintptr_t ConcurrencySet = 0x4E8;
            static constexpr std::uintptr_t ModulationRouting = 0x4F8;
            static constexpr std::uintptr_t SoundClass = 0x560;
            static constexpr std::uintptr_t SourceEffectChain = 0x568;
            static constexpr std::uintptr_t SoundSubmix = 0x570;
            static constexpr std::uintptr_t SoundSubmixSends = 0x578;
            static constexpr std::uintptr_t BusSends = 0x588;
            static constexpr std::uintptr_t PreEffectBusSends = 0x598;
            static constexpr std::uintptr_t bIsPreviewSound = 0x5A8;
            static constexpr std::uintptr_t bIsUISound = 0x5A8;
            static constexpr std::uintptr_t EnvelopeFollowerAttackTime = 0x5AC;
            static constexpr std::uintptr_t EnvelopeFollowerReleaseTime = 0x5B0;
            static constexpr std::uintptr_t OnAudioEnvelopeValue = 0x5B8;
            static constexpr std::uintptr_t Synth = 0x5E8;
            static constexpr std::uintptr_t AudioComponent = 0x5F0;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"bAllowSpatialization", 0x240, "BoolProperty"},
            {"bAutoDestroy", 0x240, "BoolProperty"},
            {"bOverrideAttenuation", 0x240, "BoolProperty"},
            {"bStopWhenOwnerDestroyed", 0x240, "BoolProperty"},
            {"bEnableBaseSubmix", 0x244, "BoolProperty"},
            {"bEnableBusSends", 0x244, "BoolProperty"},
            {"bEnableSubmixSends", 0x244, "BoolProperty"},
            {"AttenuationSettings", 0x248, "ObjectProperty"},
            {"AttenuationOverrides", 0x250, "StructProperty"},
            {"ConcurrencySettings", 0x4E0, "ObjectProperty"},
            {"ConcurrencySet", 0x4E8, "SetProperty"},
            {"ModulationRouting", 0x4F8, "StructProperty"},
            {"SoundClass", 0x560, "ObjectProperty"},
            {"SourceEffectChain", 0x568, "ObjectProperty"},
            {"SoundSubmix", 0x570, "ObjectProperty"},
            {"SoundSubmixSends", 0x578, "ArrayProperty"},
            {"BusSends", 0x588, "ArrayProperty"},
            {"PreEffectBusSends", 0x598, "ArrayProperty"},
            {"bIsPreviewSound", 0x5A8, "BoolProperty"},
            {"bIsUISound", 0x5A8, "BoolProperty"},
            {"EnvelopeFollowerAttackTime", 0x5AC, "IntProperty"},
            {"EnvelopeFollowerReleaseTime", 0x5B0, "IntProperty"},
            {"OnAudioEnvelopeValue", 0x5B8, "MulticastInlineDelegateProperty"},
            {"Synth", 0x5E8, "ObjectProperty"},
            {"AudioComponent", 0x5F0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "AdjustVolume",
            "FadeIn",
            "FadeOut",
            "GetModulators",
            "IsPlaying",
            "SetAudioBusSendPostEffect",
            "SetAudioBusSendPreEffect",
            "SetLowPassFilterEnabled",
            "SetLowPassFilterFrequency",
            "SetModulationRouting",
            "SetOutputToBusOnly",
            "SetSourceBusSendPostEffect",
            "SetSourceBusSendPreEffect",
            "SetSubmixSend",
            "SetVolumeMultiplier",
            "Start",
            "Stop",
        }};
    };

    struct SynthSound
    {
        static constexpr std::string_view Name = "SynthSound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundWaveProcedural";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningSynthComponent = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningSynthComponent", 0x2F0, "WeakObjectProperty"},
        }};
    };

}
