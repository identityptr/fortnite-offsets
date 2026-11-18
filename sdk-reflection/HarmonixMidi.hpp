#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HarmonixMidi
{
    struct BarMap
    {
        static constexpr std::string_view Name = "BarMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartBar = 0x0;
            static constexpr std::uintptr_t TicksPerQuarterNote = 0x4;
            static constexpr std::uintptr_t Points = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StartBar", 0x0, "IntProperty"},
            {"TicksPerQuarterNote", 0x4, "IntProperty"},
            {"Points", 0x8, "ArrayProperty"},
        }};
    };

    struct BeatMap
    {
        static constexpr std::string_view Name = "BeatMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TicksPerQuarterNote = 0x0;
            static constexpr std::uintptr_t Points = 0x8;
            static constexpr std::uintptr_t Bars = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TicksPerQuarterNote", 0x0, "IntProperty"},
            {"Points", 0x8, "ArrayProperty"},
            {"Bars", 0x18, "ArrayProperty"},
        }};
    };

    struct BeatMapPoint
    {
        static constexpr std::string_view Name = "BeatMapPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicMapTimespanBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PulseBar = 0x8;
            static constexpr std::uintptr_t Type = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PulseBar", 0x8, "IntProperty"},
            {"Type", 0xC, "EnumProperty"},
        }};
    };

    struct ChordMapPoint
    {
        static constexpr std::string_view Name = "ChordMapPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicMapTimespanBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x8, "NameProperty"},
        }};
    };

    struct ChordProgressionMap
    {
        static constexpr std::string_view Name = "ChordProgressionMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TicksPerQuarterNote = 0x0;
            static constexpr std::uintptr_t Points = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TicksPerQuarterNote", 0x0, "IntProperty"},
            {"Points", 0x8, "ArrayProperty"},
        }};
    };

    struct MidiEvent
    {
        static constexpr std::string_view Name = "MidiEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tick = 0x0;
            static constexpr std::uintptr_t Message = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tick", 0x0, "IntProperty"},
            {"Message", 0x4, "StructProperty"},
        }};
    };

    struct MidiFile
    {
        static constexpr std::string_view Name = "MidiFile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TheMidiData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TheMidiData", 0x38, "StructProperty"},
        }};
    };

    struct MidiFileData
    {
        static constexpr std::string_view Name = "MidiFileData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MidiFileName = 0x8;
            static constexpr std::uintptr_t TicksPerQuarterNote = 0x18;
            static constexpr std::uintptr_t SongMaps = 0x20;
            static constexpr std::uintptr_t Tracks = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MidiFileName", 0x8, "StrProperty"},
            {"TicksPerQuarterNote", 0x18, "IntProperty"},
            {"SongMaps", 0x20, "StructProperty"},
            {"Tracks", 0xE8, "ArrayProperty"},
        }};
    };

    struct MidiMsg
    {
        static constexpr std::string_view Name = "MidiMsg";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MidiNote
    {
        static constexpr std::string_view Name = "MidiNote";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NoteNumber = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NoteNumber", 0x0, "ByteProperty"},
        }};
    };

    struct MidiNoteFunctionLibrary
    {
        static constexpr std::string_view Name = "MidiNoteFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "ByteToMidiNote",
            "GetMaxMidiNote",
            "GetMaxNoteNumber",
            "GetMaxNoteVelocity",
            "GetMaxNumNotes",
            "GetMinMidiNote",
            "GetMinNoteNumber",
            "GetMinNoteVelocity",
            "IntToMidiNote",
            "MakeLiteralMidiNote",
            "MidiNoteToByte",
            "MidiNoteToInt",
        }};
    };

    struct MidiSongPos
    {
        static constexpr std::string_view Name = "MidiSongPos";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SecondsFromBarOne = 0x0;
            static constexpr std::uintptr_t SecondsIncludingCountIn = 0x4;
            static constexpr std::uintptr_t TimeSigNumerator = 0x8;
            static constexpr std::uintptr_t TimeSigDenominator = 0xC;
            static constexpr std::uintptr_t Tempo = 0x10;
            static constexpr std::uintptr_t BarsIncludingCountIn = 0x14;
            static constexpr std::uintptr_t BeatsIncludingCountIn = 0x18;
            static constexpr std::uintptr_t BeatType = 0x1C;
            static constexpr std::uintptr_t Timestamp = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SecondsFromBarOne", 0x0, "FloatProperty"},
            {"SecondsIncludingCountIn", 0x4, "FloatProperty"},
            {"TimeSigNumerator", 0x8, "IntProperty"},
            {"TimeSigDenominator", 0xC, "IntProperty"},
            {"Tempo", 0x10, "FloatProperty"},
            {"BarsIncludingCountIn", 0x14, "FloatProperty"},
            {"BeatsIncludingCountIn", 0x18, "FloatProperty"},
            {"BeatType", 0x1C, "EnumProperty"},
            {"Timestamp", 0x20, "StructProperty"},
        }};
    };

    struct MidiSongPosFunctionLibrary
    {
        static constexpr std::string_view Name = "MidiSongPosFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "IsSongPosValid",
            "LerpSongPos",
            "MakeSongPosFromTime",
        }};
    };

    struct MidiTrack
    {
        static constexpr std::string_view Name = "MidiTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Events = 0x0;
            static constexpr std::uintptr_t Sorted = 0x10;
            static constexpr std::uintptr_t PrimaryMidiChannel = 0x14;
            static constexpr std::uintptr_t Strings = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Events", 0x0, "ArrayProperty"},
            {"Sorted", 0x10, "BoolProperty"},
            {"PrimaryMidiChannel", 0x14, "IntProperty"},
            {"Strings", 0x18, "ArrayProperty"},
        }};
    };

    struct MusicMapTimespanBase
    {
        static constexpr std::string_view Name = "MusicMapTimespanBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartTick = 0x0;
            static constexpr std::uintptr_t LengthTicks = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartTick", 0x0, "IntProperty"},
            {"LengthTicks", 0x4, "IntProperty"},
        }};
    };

    struct MusicTimestamp
    {
        static constexpr std::string_view Name = "MusicTimestamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Bar = 0x0;
            static constexpr std::uintptr_t Beat = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Bar", 0x0, "IntProperty"},
            {"Beat", 0x4, "FloatProperty"},
        }};
    };

    struct MusicalTickFunctionLibrary
    {
        static constexpr std::string_view Name = "MusicalTickFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetQuarterNotesPerTick",
            "GetTicksPerQuarterNote",
            "GetTicksPerQuarterNoteInt",
            "QuarterNoteToTick",
            "TickToQuarterNote",
        }};
    };

    struct MusicalTimeSpan
    {
        static constexpr std::string_view Name = "MusicalTimeSpan";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LengthUnits = 0x0;
            static constexpr std::uintptr_t Length = 0x4;
            static constexpr std::uintptr_t OffsetUnits = 0x8;
            static constexpr std::uintptr_t Offset = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LengthUnits", 0x0, "EnumProperty"},
            {"Length", 0x4, "IntProperty"},
            {"OffsetUnits", 0x8, "EnumProperty"},
            {"Offset", 0xC, "IntProperty"},
        }};
    };

    struct PulseBar
    {
        static constexpr std::string_view Name = "PulseBar";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartTick = 0x0;
            static constexpr std::uintptr_t LengthTicks = 0x4;
            static constexpr std::uintptr_t FirstIncludedBeatIndex = 0x8;
            static constexpr std::uintptr_t LastIncludedBeatIndex = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StartTick", 0x0, "IntProperty"},
            {"LengthTicks", 0x4, "IntProperty"},
            {"FirstIncludedBeatIndex", 0x8, "IntProperty"},
            {"LastIncludedBeatIndex", 0xC, "IntProperty"},
        }};
    };

    struct SectionMap
    {
        static constexpr std::string_view Name = "SectionMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TicksPerQuarterNote = 0x0;
            static constexpr std::uintptr_t Points = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TicksPerQuarterNote", 0x0, "IntProperty"},
            {"Points", 0x8, "ArrayProperty"},
        }};
    };

    struct SongLengthData
    {
        static constexpr std::string_view Name = "SongLengthData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LengthTicks = 0x0;
            static constexpr std::uintptr_t LengthFractionalBars = 0x4;
            static constexpr std::uintptr_t LastTick = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LengthTicks", 0x0, "IntProperty"},
            {"LengthFractionalBars", 0x4, "FloatProperty"},
            {"LastTick", 0x8, "IntProperty"},
        }};
    };

    struct SongMaps
    {
        static constexpr std::string_view Name = "SongMaps";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TicksPerQuarterNote = 0x8;
            static constexpr std::uintptr_t TempoMap = 0x10;
            static constexpr std::uintptr_t BarMap = 0x30;
            static constexpr std::uintptr_t BeatMap = 0x48;
            static constexpr std::uintptr_t SectionMap = 0x70;
            static constexpr std::uintptr_t ChordMap = 0x88;
            static constexpr std::uintptr_t TrackNames = 0xA8;
            static constexpr std::uintptr_t LengthData = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TicksPerQuarterNote", 0x8, "IntProperty"},
            {"TempoMap", 0x10, "StructProperty"},
            {"BarMap", 0x30, "StructProperty"},
            {"BeatMap", 0x48, "StructProperty"},
            {"SectionMap", 0x70, "StructProperty"},
            {"ChordMap", 0x88, "StructProperty"},
            {"TrackNames", 0xA8, "ArrayProperty"},
            {"LengthData", 0xB8, "StructProperty"},
        }};
    };

    struct SongSection
    {
        static constexpr std::string_view Name = "SongSection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicMapTimespanBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x8, "StrProperty"},
        }};
    };

    struct TempoInfoPoint
    {
        static constexpr std::string_view Name = "TempoInfoPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicMapTimespanBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Ms = 0x8;
            static constexpr std::uintptr_t MidiTempo = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Ms", 0x8, "FloatProperty"},
            {"MidiTempo", 0xC, "IntProperty"},
        }};
    };

    struct TempoMap
    {
        static constexpr std::string_view Name = "TempoMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TicksPerQuarterNote = 0x8;
            static constexpr std::uintptr_t Points = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TicksPerQuarterNote", 0x8, "IntProperty"},
            {"Points", 0x10, "ArrayProperty"},
        }};
    };

    struct TimeSignature
    {
        static constexpr std::string_view Name = "TimeSignature";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Numerator = 0x0;
            static constexpr std::uintptr_t Denominator = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Numerator", 0x0, "IntProperty"},
            {"Denominator", 0x4, "IntProperty"},
        }};
    };

    struct TimeSignaturePoint
    {
        static constexpr std::string_view Name = "TimeSignaturePoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MusicMapTimespanBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BarIndex = 0x8;
            static constexpr std::uintptr_t BeatIndex = 0xC;
            static constexpr std::uintptr_t TimeSignature = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BarIndex", 0x8, "IntProperty"},
            {"BeatIndex", 0xC, "IntProperty"},
            {"TimeSignature", 0x10, "StructProperty"},
        }};
    };

}
