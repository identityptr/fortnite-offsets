#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HarmonixMetasound
{
    struct HarmonixMetasoundMusicAsset
    {
        static constexpr std::string_view Name = "HarmonixMetasoundMusicAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HarmonixMusicAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaSoundSource = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetaSoundSource", 0x38, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AssetIsMissingHarmoixMusicInterface",
        }};
    };

    struct HarmonixMusicAsset
    {
        static constexpr std::string_view Name = "HarmonixMusicAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MidiSongMap = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MidiSongMap", 0x30, "ObjectProperty"},
        }};
    };

    struct HarmonixMusicEnvironmentMetronome
    {
        static constexpr std::string_view Name = "HarmonixMusicEnvironmentMetronome";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioComponent = 0x38;
            static constexpr std::uintptr_t MusicClockComponent = 0x40;
            static constexpr std::uintptr_t MidiFile = 0x48;
            static constexpr std::uintptr_t SourceBuilder = 0x50;
            static constexpr std::uintptr_t OnPlayNodeOutput = 0x58;
            static constexpr std::uintptr_t OnFinishedNodeInput = 0x78;
            static constexpr std::uintptr_t AudioOutNodeInputs = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AudioComponent", 0x38, "ObjectProperty"},
            {"MusicClockComponent", 0x40, "ObjectProperty"},
            {"MidiFile", 0x48, "ObjectProperty"},
            {"SourceBuilder", 0x50, "ObjectProperty"},
            {"OnPlayNodeOutput", 0x58, "StructProperty"},
            {"OnFinishedNodeInput", 0x78, "StructProperty"},
            {"AudioOutNodeInputs", 0x98, "ArrayProperty"},
        }};
    };

    struct HarmonixMusicHandle
    {
        static constexpr std::string_view Name = "HarmonixMusicHandle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioComponent = 0x58;
            static constexpr std::uintptr_t MusicClockComponent = 0x60;
            static constexpr std::uintptr_t PlayingAsset = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AudioComponent", 0x58, "ObjectProperty"},
            {"MusicClockComponent", 0x60, "ObjectProperty"},
            {"PlayingAsset", 0x68, "ObjectProperty"},
        }};
    };

    struct HarmonixPeakTamer
    {
        static constexpr std::string_view Name = "HarmonixPeakTamer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "Configure",
            "CreateHarmonixPeakTamer",
            "GetPeak",
            "GetValue",
            "Update",
        }};
    };

    struct HarmonixPeakTamerSettings
    {
        static constexpr std::string_view Name = "HarmonixPeakTamerSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PeakAttackTimeSeconds = 0x0;
            static constexpr std::uintptr_t PeakReleaseTimeSeconds = 0x4;
            static constexpr std::uintptr_t bEnableValueSmoothing = 0x8;
            static constexpr std::uintptr_t ValueAttackTimeSeconds = 0xC;
            static constexpr std::uintptr_t ValueReleaseTimeSeconds = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PeakAttackTimeSeconds", 0x0, "FloatProperty"},
            {"PeakReleaseTimeSeconds", 0x4, "FloatProperty"},
            {"bEnableValueSmoothing", 0x8, "BoolProperty"},
            {"ValueAttackTimeSeconds", 0xC, "FloatProperty"},
            {"ValueReleaseTimeSeconds", 0x10, "FloatProperty"},
        }};
    };

    struct HarmonixSimpleSamplerNodeConfiguration
    {
        static constexpr std::string_view Name = "HarmonixSimpleSamplerNodeConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetaSoundFrontendNodeConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t NumChannels = 0x8;
            static constexpr std::uintptr_t MaxCaptureSeconds = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumChannels", 0x8, "UInt32Property"},
            {"MaxCaptureSeconds", 0xC, "FloatProperty"},
        }};
    };

    struct HarmonixTapeSSNodeConfiguration
    {
        static constexpr std::string_view Name = "HarmonixTapeSSNodeConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MetaSoundFrontendNodeConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t NumChannels = 0x8;
            static constexpr std::uintptr_t MaxRampSeconds = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumChannels", 0x8, "UInt32Property"},
            {"MaxRampSeconds", 0xC, "FloatProperty"},
        }};
    };

    struct HarmonixWaveMusicAsset
    {
        static constexpr std::string_view Name = "HarmonixWaveMusicAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HarmonixMusicAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t WaveFile = 0x38;
            static constexpr std::uintptr_t CachedMetasound = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WaveFile", 0x38, "ObjectProperty"},
            {"CachedMetasound", 0x40, "ObjectProperty"},
        }};
    };

    struct ManualMusicSourceSettings
    {
        static constexpr std::string_view Name = "ManualMusicSourceSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Tempo = 0x8;
            static constexpr std::uintptr_t TimeSigNumerator = 0xC;
            static constexpr std::uintptr_t TimeSigDenominator = 0x10;
            static constexpr std::uintptr_t StartPositionSeconds = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Tempo", 0x8, "FloatProperty"},
            {"TimeSigNumerator", 0xC, "IntProperty"},
            {"TimeSigDenominator", 0x10, "IntProperty"},
            {"StartPositionSeconds", 0x14, "FloatProperty"},
        }};
    };

    struct MetasoundMusicClockSettings
    {
        static constexpr std::string_view Name = "MetasoundMusicClockSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicClockSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MetasoundOutputName = 0x18;
            static constexpr std::uintptr_t AudioComponent = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MetasoundOutputName", 0x18, "NameProperty"},
            {"AudioComponent", 0x20, "ObjectProperty"},
        }};
    };

    struct MetasoundMusicSource
    {
        static constexpr std::string_view Name = "MetasoundMusicSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MetasoundMusicSourceSettings
    {
        static constexpr std::string_view Name = "MetasoundMusicSourceSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioComponent = 0x8;
            static constexpr std::uintptr_t OutputPinName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AudioComponent", 0x8, "ObjectProperty"},
            {"OutputPinName", 0x10, "NameProperty"},
        }};
    };

    struct MetasoundOfflinePlayerComponent
    {
        static constexpr std::string_view Name = "MetasoundOfflinePlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaSoundSource = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetaSoundSource", 0xD0, "ObjectProperty"},
        }};
    };

    struct MidiClockUpdateSubsystem
    {
        static constexpr std::string_view Name = "MidiClockUpdateSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MidiEventInfo
    {
        static constexpr std::string_view Name = "MidiEventInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Timestamp = 0x0;
            static constexpr std::uintptr_t TrackIndex = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Timestamp", 0x0, "StructProperty"},
            {"TrackIndex", 0x8, "IntProperty"},
        }};
    };

    struct MidiEventInfoBlueprintLibrary
    {
        static constexpr std::string_view Name = "MidiEventInfoBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetChannel",
            "GetMidiEventInfo",
            "GetNoteNumber",
            "GetVelocity",
            "IsMidiEventInfo",
            "IsNote",
            "IsNoteOff",
            "IsNoteOn",
        }};
    };

    struct MidiMusicSourceSettings
    {
        static constexpr std::string_view Name = "MidiMusicSourceSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MidiFile = 0x8;
            static constexpr std::uintptr_t StartPositionSeconds = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MidiFile", 0x8, "ObjectProperty"},
            {"StartPositionSeconds", 0x10, "FloatProperty"},
        }};
    };

    struct MidiStepSequence
    {
        static constexpr std::string_view Name = "MidiStepSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Pages = 0x30;
            static constexpr std::uintptr_t Rows = 0x34;
            static constexpr std::uintptr_t Columns = 0x38;
            static constexpr std::uintptr_t StepTable = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Pages", 0x30, "IntProperty"},
            {"Rows", 0x34, "IntProperty"},
            {"Columns", 0x38, "IntProperty"},
            {"StepTable", 0x40, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "DisableRowsAbove",
            "GetCell",
            "GetCellOnPage",
            "GetStepTable",
            "SetCell",
            "SetCellContinuation",
            "SetCellContinuationOnPage",
            "SetCellOnPage",
            "SetNumColumns",
            "SetNumPages",
            "SetNumRows",
            "SetRowNoteNumber",
            "SetRowVelocity",
            "SetStepSkipIndex",
            "SetStepTable",
            "ToggleCell",
            "ToggleCellOnPage",
        }};
    };

    struct MidiStutterSequence
    {
        static constexpr std::string_view Name = "MidiStutterSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StutterTable = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StutterTable", 0x30, "StructProperty"},
        }};
    };

    struct MusicClock
    {
        static constexpr std::string_view Name = "MusicClock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BeatEvent = 0x28;
            static constexpr std::uintptr_t BarEvent = 0x38;
            static constexpr std::uintptr_t SectionEvent = 0x48;
            static constexpr std::uintptr_t PlayStateEvent = 0x58;
            static constexpr std::uintptr_t MusicTimeDiscontinuityEvent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BeatEvent", 0x28, "MulticastInlineDelegateProperty"},
            {"BarEvent", 0x38, "MulticastInlineDelegateProperty"},
            {"SectionEvent", 0x48, "MulticastInlineDelegateProperty"},
            {"PlayStateEvent", 0x58, "MulticastInlineDelegateProperty"},
            {"MusicTimeDiscontinuityEvent", 0x68, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 39> FunctionNames{{
            "BP_AddTimer",
            "GetBarsIncludingCountIn",
            "GetBeatsIncludingCountIn",
            "GetCurrentBarsPerSecond",
            "GetCurrentBeatsPerMinute",
            "GetCurrentBeatsPerSecond",
            "GetCurrentClockAdvanceRate",
            "GetCurrentSectionIndex",
            "GetCurrentSectionLengthMs",
            "GetCurrentSectionName",
            "GetCurrentSectionStartMs",
            "GetCurrentSongPos",
            "GetCurrentTempo",
            "GetCurrentTimeSignature",
            "GetCurrentTimestamp",
            "GetDeltaBar",
            "GetDeltaBeat",
            "GetDistanceFromCurrentBar",
            "GetDistanceFromCurrentBeat",
            "GetDistanceToClosestBar",
            "GetDistanceToClosestBeat",
            "GetDistanceToNextBar",
            "GetDistanceToNextBeat",
            "GetOffsetMs",
            "GetPreviousSongPos",
            "GetSecondsFromBarOne",
            "GetSecondsIncludingCountIn",
            "GetSongLengthMs",
            "GetSongRemainingMs",
            "GetSource",
            "GetState",
            "LoopedThisFrame",
            "PauseTimer",
            "Quantize",
            "RemoveTimer",
            "SeekedThisFrame",
            "SetOffsetMs",
            "SetSource",
            "TryGetAudioSourceLocation",
        }};
    };

    struct MusicClockComponent
    {
        static constexpr std::string_view Name = "MusicClockComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DriveMethod = 0xC8;
            static constexpr std::uintptr_t MetasoundOutputName = 0xCC;
            static constexpr std::uintptr_t MetasoundsAudioComponent = 0xD0;
            static constexpr std::uintptr_t TempoMap = 0xD8;
            static constexpr std::uintptr_t StartPositionSeconds = 0xE0;
            static constexpr std::uintptr_t MusicClockSettings = 0xE8;
            static constexpr std::uintptr_t TimebaseForBarAndBeatEvents = 0xF8;
            static constexpr std::uintptr_t PlayStateEvent = 0x100;
            static constexpr std::uintptr_t BeatEvent = 0x110;
            static constexpr std::uintptr_t BarEvent = 0x120;
            static constexpr std::uintptr_t SectionEvent = 0x130;
            static constexpr std::uintptr_t MusicClockConnectedEvent = 0x140;
            static constexpr std::uintptr_t MusicClockDisconnectedEvent = 0x150;
            static constexpr std::uintptr_t AudioRenderMusicTimeDiscontinuityEvent = 0x160;
            static constexpr std::uintptr_t PlayerExperienceMusicTimeDiscontinuityEvent = 0x170;
            static constexpr std::uintptr_t VideoRenderMusicTimeDiscontinuityEvent = 0x180;
            static constexpr std::uintptr_t DefaultTempo = 0x190;
            static constexpr std::uintptr_t DefaultTimeSignatureNum = 0x194;
            static constexpr std::uintptr_t DefaultTimeSignatureDenom = 0x198;
            static constexpr std::uintptr_t RunPastMusicEnd = 0x19C;
            static constexpr std::uintptr_t MusicSource = 0x1B8;
            static constexpr std::uintptr_t Clocks = 0x1C8;
            static constexpr std::uintptr_t MusicTimerManager = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"DriveMethod", 0xC8, "EnumProperty"},
            {"MetasoundOutputName", 0xCC, "NameProperty"},
            {"MetasoundsAudioComponent", 0xD0, "ObjectProperty"},
            {"TempoMap", 0xD8, "ObjectProperty"},
            {"StartPositionSeconds", 0xE0, "FloatProperty"},
            {"MusicClockSettings", 0xE8, "StructProperty"},
            {"TimebaseForBarAndBeatEvents", 0xF8, "EnumProperty"},
            {"PlayStateEvent", 0x100, "MulticastInlineDelegateProperty"},
            {"BeatEvent", 0x110, "MulticastInlineDelegateProperty"},
            {"BarEvent", 0x120, "MulticastInlineDelegateProperty"},
            {"SectionEvent", 0x130, "MulticastInlineDelegateProperty"},
            {"MusicClockConnectedEvent", 0x140, "MulticastInlineDelegateProperty"},
            {"MusicClockDisconnectedEvent", 0x150, "MulticastInlineDelegateProperty"},
            {"AudioRenderMusicTimeDiscontinuityEvent", 0x160, "MulticastInlineDelegateProperty"},
            {"PlayerExperienceMusicTimeDiscontinuityEvent", 0x170, "MulticastInlineDelegateProperty"},
            {"VideoRenderMusicTimeDiscontinuityEvent", 0x180, "MulticastInlineDelegateProperty"},
            {"DefaultTempo", 0x190, "FloatProperty"},
            {"DefaultTimeSignatureNum", 0x194, "IntProperty"},
            {"DefaultTimeSignatureDenom", 0x198, "IntProperty"},
            {"RunPastMusicEnd", 0x19C, "BoolProperty"},
            {"MusicSource", 0x1B8, "InterfaceProperty"},
            {"Clocks", 0x1C8, "ArrayProperty"},
            {"MusicTimerManager", 0x2C0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 81> FunctionNames{{
            "BP_AddTimer",
            "BarToMs",
            "BeatToMs",
            "ConnectToCustomClockWithSettings",
            "ConnectToMetasoundOnAudioComponent",
            "ConnectToWallClockForMidi",
            "Continue",
            "CreateMetasoundDrivenMusicClock",
            "CreateWallClockDrivenMusicClock",
            "GetBarsIncludingCountIn",
            "GetBeatInBarAtMs",
            "GetBeatsIncludingCountIn",
            "GetCountInSeconds",
            "GetCurrentBarsPerSecond",
            "GetCurrentBeatsPerMinute",
            "GetCurrentBeatsPerSecond",
            "GetCurrentClockAdvanceRate",
            "GetCurrentPlayerExperiencedSongPos",
            "GetCurrentRawAudioRenderSongPos",
            "GetCurrentSecondsPerBar",
            "GetCurrentSecondsPerBeat",
            "GetCurrentSectionIndex",
            "GetCurrentSectionLengthMs",
            "GetCurrentSectionName",
            "GetCurrentSectionStartMs",
            "GetCurrentSmoothedAudioRenderSongPos",
            "GetCurrentTempo",
            "GetCurrentTimeSignature",
            "GetCurrentTimeSignatureStruct",
            "GetCurrentTimestamp",
            "GetCurrentVideoRenderSongPos",
            "GetDeltaBar",
            "GetDeltaBeat",
            "GetDistanceFromCurrentBar",
            "GetDistanceFromCurrentBeat",
            "GetDistanceToClosestBar",
            "GetDistanceToClosestBeat",
            "GetDistanceToNextBar",
            "GetDistanceToNextBeat",
            "GetMsPerBarAtMs",
            "GetMsPerBeatAtMs",
            "GetNumBeatsInBarAtMs",
            "GetNumSections",
            "GetPreviousPlayerExperiencedSongPos",
            "GetPreviousSmoothedAudioRenderSongPos",
            "GetPreviousSongPos",
            "GetPreviousVideoRenderSongPos",
            "GetRunPastMusicEnd",
            "GetSecondsFromBarOne",
            "GetSecondsIncludingCountIn",
            "GetSectionEndMsAtMs",
            "GetSectionLengthMsAtMs",
            "GetSectionNameAtMs",
            "GetSectionStartMsAtMs",
            "GetSongLengthBars",
            "GetSongLengthBeats",
            "GetSongLengthMs",
            "GetSongPos",
            "GetSongRemainingMs",
            "GetSongSections",
            "GetState",
            "HandleAudioRenderDiscontinuity",
            "HandleClockBar",
            "HandleClockBeat",
            "HandleClockSection",
            "HandleExperiencedDiscontinuity",
            "HandleVideoRenderDiscontinuity",
            "LoopedThisFrame",
            "MeasureSpanProgress",
            "MsToBeat",
            "Pause",
            "PauseTimer",
            "Quantize",
            "RemoveTimer",
            "SeekedThisFrame",
            "SetRunPastMusicEnd",
            "SetTempoMapForWallClock",
            "Start",
            "Stop",
            "TickToMs",
            "TryGetAudioSourceLocation",
        }};
    };

    struct MusicClockSettingsBase
    {
        static constexpr std::string_view Name = "MusicClockSettingsBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTempo = 0x8;
            static constexpr std::uintptr_t DefaultTimeSigNumerator = 0xC;
            static constexpr std::uintptr_t DefaultTimeSigDenominator = 0x10;
            static constexpr std::uintptr_t SourceStreamTimebase = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultTempo", 0x8, "FloatProperty"},
            {"DefaultTimeSigNumerator", 0xC, "IntProperty"},
            {"DefaultTimeSigDenominator", 0x10, "IntProperty"},
            {"SourceStreamTimebase", 0x14, "EnumProperty"},
        }};
    };

    struct MusicLoopConfiguration
    {
        static constexpr std::string_view Name = "MusicLoopConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Enabled = 0x0;
            static constexpr std::uintptr_t RegionStart = 0x4;
            static constexpr std::uintptr_t RegionEnd = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Enabled", 0x0, "BoolProperty"},
            {"RegionStart", 0x4, "StructProperty"},
            {"RegionEnd", 0xC, "StructProperty"},
        }};
    };

    struct MusicParameterBlueprintLibrary
    {
        static constexpr std::string_view Name = "MusicParameterBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "GetMusicLoopConfiguration",
            "GetMusicSeekRequest",
            "GetMusicTimestamp",
            "HasMusicLoopConfiguration",
            "HasMusicSeekRequest",
            "HasMusicTimestamp",
            "SetMusicLoopConfiguration",
            "SetMusicSeekRequest",
            "SetMusicTimestamp",
        }};
    };

    struct MusicSeekRequest
    {
        static constexpr std::string_view Name = "MusicSeekRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EmmediateIfPastFromPoint = 0x0;
            static constexpr std::uintptr_t FromPoint = 0x4;
            static constexpr std::uintptr_t ToPoint = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EmmediateIfPastFromPoint", 0x0, "BoolProperty"},
            {"FromPoint", 0x4, "StructProperty"},
            {"ToPoint", 0xC, "StructProperty"},
        }};
    };

    struct MusicSeekTarget
    {
        static constexpr std::string_view Name = "MusicSeekTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t BarBeat = 0x4;
            static constexpr std::uintptr_t Ms = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"BarBeat", 0x4, "StructProperty"},
            {"Ms", 0xC, "FloatProperty"},
        }};
    };

    struct MusicSource
    {
        static constexpr std::string_view Name = "MusicSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 13> FunctionNames{{
            "ClearLoopRegion",
            "Continue",
            "IsPlaying",
            "IsPreparing",
            "IsStopped",
            "Pause",
            "Seek",
            "SetLoopRegion",
            "SetSpeed",
            "SetTempo",
            "SetTimeSignature",
            "Start",
            "Stop",
        }};
    };

    struct MusicSourceBlueprintLibrary
    {
        static constexpr std::string_view Name = "MusicSourceBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CreateMusicClock",
            "CreateMusicSource",
        }};
    };

    struct MusicSourceSettings
    {
        static constexpr std::string_view Name = "MusicSourceSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MusicTempometerComponent
    {
        static constexpr std::string_view Name = "MusicTempometerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SecondsIncludingCountInParameterName = 0xC0;
            static constexpr std::uintptr_t BarsIncludingCountInParameterName = 0xC4;
            static constexpr std::uintptr_t BeatsIncludingCountInParameterName = 0xC8;
            static constexpr std::uintptr_t SecondsFromBarOneParameterName = 0xCC;
            static constexpr std::uintptr_t TimestampBarParameterName = 0xD0;
            static constexpr std::uintptr_t TimestampBeatInBarParameterName = 0xD4;
            static constexpr std::uintptr_t BarProgressParameterName = 0xD8;
            static constexpr std::uintptr_t BeatProgressParameterName = 0xDC;
            static constexpr std::uintptr_t TimeSignatureNumeratorParameterName = 0xE0;
            static constexpr std::uintptr_t TimeSignatureDenominatorParameterName = 0xE4;
            static constexpr std::uintptr_t TempoParameterName = 0xE8;
            static constexpr std::uintptr_t MPCParameters = 0xEC;
            static constexpr std::uintptr_t SongPos = 0x150;
            static constexpr std::uintptr_t PreviousFrameSongPos = 0x198;
            static constexpr std::uintptr_t MusicClock = 0x210;
            static constexpr std::uintptr_t MaterialParameterCollection = 0x218;
            static constexpr std::uintptr_t MaterialParameterCollectionInstance = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"SecondsIncludingCountInParameterName", 0xC0, "NameProperty"},
            {"BarsIncludingCountInParameterName", 0xC4, "NameProperty"},
            {"BeatsIncludingCountInParameterName", 0xC8, "NameProperty"},
            {"SecondsFromBarOneParameterName", 0xCC, "NameProperty"},
            {"TimestampBarParameterName", 0xD0, "NameProperty"},
            {"TimestampBeatInBarParameterName", 0xD4, "NameProperty"},
            {"BarProgressParameterName", 0xD8, "NameProperty"},
            {"BeatProgressParameterName", 0xDC, "NameProperty"},
            {"TimeSignatureNumeratorParameterName", 0xE0, "NameProperty"},
            {"TimeSignatureDenominatorParameterName", 0xE4, "NameProperty"},
            {"TempoParameterName", 0xE8, "NameProperty"},
            {"MPCParameters", 0xEC, "StructProperty"},
            {"SongPos", 0x150, "StructProperty"},
            {"PreviousFrameSongPos", 0x198, "StructProperty"},
            {"MusicClock", 0x210, "ObjectProperty"},
            {"MaterialParameterCollection", 0x218, "ObjectProperty"},
            {"MaterialParameterCollectionInstance", 0x220, "WeakObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "GetBarProgress",
            "GetBarsIncludingCountIn",
            "GetBeatProgress",
            "GetBeatsIncludingCountIn",
            "GetClock",
            "GetClockNoMutex",
            "GetMaterialParameterCollection",
            "GetPreviousFrameSongPos",
            "GetSecondsFromBarOne",
            "GetSecondsIncludingCountIn",
            "GetSongPos",
            "GetTempo",
            "GetTimeSignatureDenominator",
            "GetTimeSignatureNumerator",
            "GetTimestamp",
            "SetClock",
            "SetClockFromActor",
            "SetMaterialParameterCollection",
        }};
    };

    struct MusicTempometerMPCParameterNames
    {
        static constexpr std::string_view Name = "MusicTempometerMPCParameterNames";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SecondsIncludingCountInParameterName = 0x0;
            static constexpr std::uintptr_t BarsIncludingCountInParameterName = 0x4;
            static constexpr std::uintptr_t BeatsIncludingCountInParameterName = 0x8;
            static constexpr std::uintptr_t SecondsFromBarOneParameterName = 0xC;
            static constexpr std::uintptr_t TimestampBarParameterName = 0x10;
            static constexpr std::uintptr_t TimestampBeatInBarParameterName = 0x14;
            static constexpr std::uintptr_t BarProgressParameterName = 0x18;
            static constexpr std::uintptr_t BeatProgressParameterName = 0x1C;
            static constexpr std::uintptr_t TimeSignatureNumeratorParameterName = 0x20;
            static constexpr std::uintptr_t TimeSignatureDenominatorParameterName = 0x24;
            static constexpr std::uintptr_t TempoParameterName = 0x28;
            static constexpr std::uintptr_t TimestampValidParameterName = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SecondsIncludingCountInParameterName", 0x0, "NameProperty"},
            {"BarsIncludingCountInParameterName", 0x4, "NameProperty"},
            {"BeatsIncludingCountInParameterName", 0x8, "NameProperty"},
            {"SecondsFromBarOneParameterName", 0xC, "NameProperty"},
            {"TimestampBarParameterName", 0x10, "NameProperty"},
            {"TimestampBeatInBarParameterName", 0x14, "NameProperty"},
            {"BarProgressParameterName", 0x18, "NameProperty"},
            {"BeatProgressParameterName", 0x1C, "NameProperty"},
            {"TimeSignatureNumeratorParameterName", 0x20, "NameProperty"},
            {"TimeSignatureDenominatorParameterName", 0x24, "NameProperty"},
            {"TempoParameterName", 0x28, "NameProperty"},
            {"TimestampValidParameterName", 0x2C, "NameProperty"},
        }};
    };

    struct MusicTempometerMPCParameters
    {
        static constexpr std::string_view Name = "MusicTempometerMPCParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentFrameParameterNames = 0x0;
            static constexpr std::uintptr_t PreviousFrameParameterNames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentFrameParameterNames", 0x0, "StructProperty"},
            {"PreviousFrameParameterNames", 0x30, "StructProperty"},
        }};
    };

    struct MusicTimeInterval
    {
        static constexpr std::string_view Name = "MusicTimeInterval";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x0;
            static constexpr std::uintptr_t Offset = 0x1;
            static constexpr std::uintptr_t IntervalMultiplier = 0x4;
            static constexpr std::uintptr_t OffsetMultiplier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interval", 0x0, "EnumProperty"},
            {"Offset", 0x1, "EnumProperty"},
            {"IntervalMultiplier", 0x4, "IntProperty"},
            {"OffsetMultiplier", 0x8, "IntProperty"},
        }};
    };

    struct MusicTimerHandle
    {
        static constexpr std::string_view Name = "MusicTimerHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Handle = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handle", 0x0, "UInt64Property"},
        }};
    };

    struct MusicTimerManager
    {
        static constexpr std::string_view Name = "MusicTimerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BP_AddTimer",
            "PauseTimer",
            "Quantize",
            "RemoveTimer",
        }};
    };

    struct MusicTimestampBlueprintLibrary
    {
        static constexpr std::string_view Name = "MusicTimestampBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetMusicTimestamp",
            "IsMusicTimestamp",
        }};
    };

    struct RuntimeMusicSource
    {
        static constexpr std::string_view Name = "RuntimeMusicSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StepSequenceCell
    {
        static constexpr std::string_view Name = "StepSequenceCell";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t bContinuation = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"bContinuation", 0x1, "BoolProperty"},
        }};
    };

    struct StepSequenceNote
    {
        static constexpr std::string_view Name = "StepSequenceNote";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NoteNumber = 0x0;
            static constexpr std::uintptr_t Velocity = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NoteNumber", 0x0, "IntProperty"},
            {"Velocity", 0x4, "IntProperty"},
        }};
    };

    struct StepSequencePage
    {
        static constexpr std::string_view Name = "StepSequencePage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rows = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Rows", 0x0, "ArrayProperty"},
        }};
    };

    struct StepSequenceRow
    {
        static constexpr std::string_view Name = "StepSequenceRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Cells = 0x0;
            static constexpr std::uintptr_t bRowEnabled = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Cells", 0x0, "ArrayProperty"},
            {"bRowEnabled", 0x10, "BoolProperty"},
        }};
    };

    struct StepSequenceTable
    {
        static constexpr std::string_view Name = "StepSequenceTable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Pages = 0x0;
            static constexpr std::uintptr_t Notes = 0x10;
            static constexpr std::uintptr_t StepSkipIndex = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Pages", 0x0, "ArrayProperty"},
            {"Notes", 0x10, "ArrayProperty"},
            {"StepSkipIndex", 0x20, "IntProperty"},
        }};
    };

    struct StutterSequenceEntry
    {
        static constexpr std::string_view Name = "StutterSequenceEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Spacing = 0x0;
            static constexpr std::uintptr_t AudibleDuration = 0x1;
            static constexpr std::uintptr_t Reverse = 0x2;
            static constexpr std::uintptr_t Count = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Spacing", 0x0, "EnumProperty"},
            {"AudibleDuration", 0x1, "EnumProperty"},
            {"Reverse", 0x2, "BoolProperty"},
            {"Count", 0x4, "IntProperty"},
        }};
    };

    struct StutterSequenceTable
    {
        static constexpr std::string_view Name = "StutterSequenceTable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CaptureDuration = 0x0;
            static constexpr std::uintptr_t ResetOnCompletion = 0x1;
            static constexpr std::uintptr_t Stutters = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CaptureDuration", 0x0, "EnumProperty"},
            {"ResetOnCompletion", 0x1, "BoolProperty"},
            {"Stutters", 0x8, "ArrayProperty"},
        }};
    };

    struct TimeSignatureBlueprintLibrary
    {
        static constexpr std::string_view Name = "TimeSignatureBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetTimeSignature",
            "IsTimeSignature",
        }};
    };

    struct WallClockMusicClockSettings
    {
        static constexpr std::string_view Name = "WallClockMusicClockSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicClockSettingsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TempoMap = 0x18;
            static constexpr std::uintptr_t StartPositionSecs = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TempoMap", 0x18, "ObjectProperty"},
            {"StartPositionSecs", 0x20, "FloatProperty"},
        }};
    };

}
