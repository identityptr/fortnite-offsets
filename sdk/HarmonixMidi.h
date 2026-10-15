/**
 * decamp dumper generated SDK
 * Package: /Script/HarmonixMidi
 */
#pragma once
#include "Basic.h"

// /Script/HarmonixMidi.BarMap
// Kind: ScriptStruct; super: none
struct FBarMap
{
public:
    std::int32_t StartBar; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TicksPerQuarterNote; // 0x0004 (Size: 0x4, Type: IntProperty)
    TArray<void*> Points; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBarMap, StartBar) == 0, "Offset mismatch for FBarMap::StartBar");
static_assert(offsetof(FBarMap, TicksPerQuarterNote) == 4, "Offset mismatch for FBarMap::TicksPerQuarterNote");
static_assert(offsetof(FBarMap, Points) == 8, "Offset mismatch for FBarMap::Points");

// /Script/HarmonixMidi.BeatMap
// Kind: ScriptStruct; super: none
struct FBeatMap
{
public:
    std::int32_t TicksPerQuarterNote; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Points; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Bars; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBeatMap, TicksPerQuarterNote) == 0, "Offset mismatch for FBeatMap::TicksPerQuarterNote");
static_assert(offsetof(FBeatMap, Points) == 8, "Offset mismatch for FBeatMap::Points");
static_assert(offsetof(FBeatMap, Bars) == 24, "Offset mismatch for FBeatMap::Bars");

// /Script/HarmonixMidi.BeatMapPoint
// Kind: ScriptStruct; super: MusicMapTimespanBase
struct FBeatMapPoint
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t PulseBar; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FBeatMapPoint, PulseBar) == 8, "Offset mismatch for FBeatMapPoint::PulseBar");
static_assert(offsetof(FBeatMapPoint, Type) == 12, "Offset mismatch for FBeatMapPoint::Type");

// /Script/HarmonixMidi.ChordMapPoint
// Kind: ScriptStruct; super: MusicMapTimespanBase
struct FChordMapPoint
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Name; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChordMapPoint, Name) == 8, "Offset mismatch for FChordMapPoint::Name");

// /Script/HarmonixMidi.ChordProgressionMap
// Kind: ScriptStruct; super: none
struct FChordProgressionMap
{
public:
    std::int32_t TicksPerQuarterNote; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Points; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChordProgressionMap, TicksPerQuarterNote) == 0, "Offset mismatch for FChordProgressionMap::TicksPerQuarterNote");
static_assert(offsetof(FChordProgressionMap, Points) == 8, "Offset mismatch for FChordProgressionMap::Points");

// /Script/HarmonixMidi.MidiEvent
// Kind: ScriptStruct; super: none
struct FMidiEvent
{
public:
    std::int32_t Tick; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Message[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMidiEvent, Tick) == 0, "Offset mismatch for FMidiEvent::Tick");
static_assert(offsetof(FMidiEvent, Message) == 4, "Offset mismatch for FMidiEvent::Message");

// /Script/HarmonixMidi.MidiFileData
// Kind: ScriptStruct; super: none
struct FMidiFileData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString MidiFileName; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t TicksPerQuarterNote; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t SongMaps[0xC8]; // 0x0020 (Size: 0xC8, Type: StructProperty)
    TArray<void*> Tracks; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMidiFileData, MidiFileName) == 8, "Offset mismatch for FMidiFileData::MidiFileName");
static_assert(offsetof(FMidiFileData, TicksPerQuarterNote) == 24, "Offset mismatch for FMidiFileData::TicksPerQuarterNote");
static_assert(offsetof(FMidiFileData, SongMaps) == 32, "Offset mismatch for FMidiFileData::SongMaps");
static_assert(offsetof(FMidiFileData, Tracks) == 232, "Offset mismatch for FMidiFileData::Tracks");

// /Script/HarmonixMidi.MidiMsg
// Kind: ScriptStruct; super: none
struct FMidiMsg
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMidi.MidiNote
// Kind: ScriptStruct; super: none
struct FMidiNote
{
public:
    std::uint8_t NoteNumber; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMidiNote, NoteNumber) == 0, "Offset mismatch for FMidiNote::NoteNumber");

// /Script/HarmonixMidi.MidiSongPos
// Kind: ScriptStruct; super: none
struct FMidiSongPos
{
public:
    float SecondsFromBarOne; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float SecondsIncludingCountIn; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t TimeSigNumerator; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t TimeSigDenominator; // 0x000C (Size: 0x4, Type: IntProperty)
    float Tempo; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float BarsIncludingCountIn; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float BeatsIncludingCountIn; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BeatType; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x001D
    std::uint8_t Timestamp[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMidiSongPos, SecondsFromBarOne) == 0, "Offset mismatch for FMidiSongPos::SecondsFromBarOne");
static_assert(offsetof(FMidiSongPos, SecondsIncludingCountIn) == 4, "Offset mismatch for FMidiSongPos::SecondsIncludingCountIn");
static_assert(offsetof(FMidiSongPos, TimeSigNumerator) == 8, "Offset mismatch for FMidiSongPos::TimeSigNumerator");
static_assert(offsetof(FMidiSongPos, TimeSigDenominator) == 12, "Offset mismatch for FMidiSongPos::TimeSigDenominator");
static_assert(offsetof(FMidiSongPos, Tempo) == 16, "Offset mismatch for FMidiSongPos::Tempo");
static_assert(offsetof(FMidiSongPos, BarsIncludingCountIn) == 20, "Offset mismatch for FMidiSongPos::BarsIncludingCountIn");
static_assert(offsetof(FMidiSongPos, BeatsIncludingCountIn) == 24, "Offset mismatch for FMidiSongPos::BeatsIncludingCountIn");
static_assert(offsetof(FMidiSongPos, BeatType) == 28, "Offset mismatch for FMidiSongPos::BeatType");
static_assert(offsetof(FMidiSongPos, Timestamp) == 32, "Offset mismatch for FMidiSongPos::Timestamp");

// /Script/HarmonixMidi.MidiTrack
// Kind: ScriptStruct; super: none
struct FMidiTrack
{
public:
    TArray<void*> Events; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Sorted; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t PrimaryMidiChannel; // 0x0014 (Size: 0x4, Type: IntProperty)
    TArray<void*> Strings; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMidiTrack, Events) == 0, "Offset mismatch for FMidiTrack::Events");
static_assert(offsetof(FMidiTrack, Sorted) == 16, "Offset mismatch for FMidiTrack::Sorted");
static_assert(offsetof(FMidiTrack, PrimaryMidiChannel) == 20, "Offset mismatch for FMidiTrack::PrimaryMidiChannel");
static_assert(offsetof(FMidiTrack, Strings) == 24, "Offset mismatch for FMidiTrack::Strings");

// /Script/HarmonixMidi.MusicMapTimespanBase
// Kind: ScriptStruct; super: none
struct FMusicMapTimespanBase
{
public:
    std::int32_t StartTick; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t LengthTicks; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMusicMapTimespanBase, StartTick) == 0, "Offset mismatch for FMusicMapTimespanBase::StartTick");
static_assert(offsetof(FMusicMapTimespanBase, LengthTicks) == 4, "Offset mismatch for FMusicMapTimespanBase::LengthTicks");

// /Script/HarmonixMidi.MusicTimestamp
// Kind: ScriptStruct; super: none
struct FMusicTimestamp
{
public:
    std::int32_t Bar; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Beat; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMusicTimestamp, Bar) == 0, "Offset mismatch for FMusicTimestamp::Bar");
static_assert(offsetof(FMusicTimestamp, Beat) == 4, "Offset mismatch for FMusicTimestamp::Beat");

// /Script/HarmonixMidi.MusicalTimeSpan
// Kind: ScriptStruct; super: none
struct FMusicalTimeSpan
{
public:
    std::uint8_t LengthUnits; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t Length; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t OffsetUnits; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::int32_t Offset; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMusicalTimeSpan, LengthUnits) == 0, "Offset mismatch for FMusicalTimeSpan::LengthUnits");
static_assert(offsetof(FMusicalTimeSpan, Length) == 4, "Offset mismatch for FMusicalTimeSpan::Length");
static_assert(offsetof(FMusicalTimeSpan, OffsetUnits) == 8, "Offset mismatch for FMusicalTimeSpan::OffsetUnits");
static_assert(offsetof(FMusicalTimeSpan, Offset) == 12, "Offset mismatch for FMusicalTimeSpan::Offset");

// /Script/HarmonixMidi.PulseBar
// Kind: ScriptStruct; super: none
struct FPulseBar
{
public:
    std::int32_t StartTick; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t LengthTicks; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t FirstIncludedBeatIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t LastIncludedBeatIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPulseBar, StartTick) == 0, "Offset mismatch for FPulseBar::StartTick");
static_assert(offsetof(FPulseBar, LengthTicks) == 4, "Offset mismatch for FPulseBar::LengthTicks");
static_assert(offsetof(FPulseBar, FirstIncludedBeatIndex) == 8, "Offset mismatch for FPulseBar::FirstIncludedBeatIndex");
static_assert(offsetof(FPulseBar, LastIncludedBeatIndex) == 12, "Offset mismatch for FPulseBar::LastIncludedBeatIndex");

// /Script/HarmonixMidi.SectionMap
// Kind: ScriptStruct; super: none
struct FSectionMap
{
public:
    std::int32_t TicksPerQuarterNote; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Points; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSectionMap, TicksPerQuarterNote) == 0, "Offset mismatch for FSectionMap::TicksPerQuarterNote");
static_assert(offsetof(FSectionMap, Points) == 8, "Offset mismatch for FSectionMap::Points");

// /Script/HarmonixMidi.SongLengthData
// Kind: ScriptStruct; super: none
struct FSongLengthData
{
public:
    std::int32_t LengthTicks; // 0x0000 (Size: 0x4, Type: IntProperty)
    float LengthFractionalBars; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t LastTick; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSongLengthData, LengthTicks) == 0, "Offset mismatch for FSongLengthData::LengthTicks");
static_assert(offsetof(FSongLengthData, LengthFractionalBars) == 4, "Offset mismatch for FSongLengthData::LengthFractionalBars");
static_assert(offsetof(FSongLengthData, LastTick) == 8, "Offset mismatch for FSongLengthData::LastTick");

// /Script/HarmonixMidi.SongMaps
// Kind: ScriptStruct; super: none
struct FSongMaps
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t TicksPerQuarterNote; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t TempoMap[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t BarMap[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t BeatMap[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t SectionMap[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t ChordMap[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    TArray<void*> TrackNames; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LengthData[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSongMaps, TicksPerQuarterNote) == 8, "Offset mismatch for FSongMaps::TicksPerQuarterNote");
static_assert(offsetof(FSongMaps, TempoMap) == 16, "Offset mismatch for FSongMaps::TempoMap");
static_assert(offsetof(FSongMaps, BarMap) == 48, "Offset mismatch for FSongMaps::BarMap");
static_assert(offsetof(FSongMaps, BeatMap) == 72, "Offset mismatch for FSongMaps::BeatMap");
static_assert(offsetof(FSongMaps, SectionMap) == 112, "Offset mismatch for FSongMaps::SectionMap");
static_assert(offsetof(FSongMaps, ChordMap) == 136, "Offset mismatch for FSongMaps::ChordMap");
static_assert(offsetof(FSongMaps, TrackNames) == 168, "Offset mismatch for FSongMaps::TrackNames");
static_assert(offsetof(FSongMaps, LengthData) == 184, "Offset mismatch for FSongMaps::LengthData");

// /Script/HarmonixMidi.SongSection
// Kind: ScriptStruct; super: MusicMapTimespanBase
struct FSongSection
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString Name; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSongSection, Name) == 8, "Offset mismatch for FSongSection::Name");

// /Script/HarmonixMidi.TempoInfoPoint
// Kind: ScriptStruct; super: MusicMapTimespanBase
struct FTempoInfoPoint
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Ms; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t MidiTempo; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTempoInfoPoint, Ms) == 8, "Offset mismatch for FTempoInfoPoint::Ms");
static_assert(offsetof(FTempoInfoPoint, MidiTempo) == 12, "Offset mismatch for FTempoInfoPoint::MidiTempo");

// /Script/HarmonixMidi.TempoMap
// Kind: ScriptStruct; super: none
struct FTempoMap
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t TicksPerQuarterNote; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    TArray<void*> Points; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTempoMap, TicksPerQuarterNote) == 8, "Offset mismatch for FTempoMap::TicksPerQuarterNote");
static_assert(offsetof(FTempoMap, Points) == 16, "Offset mismatch for FTempoMap::Points");

// /Script/HarmonixMidi.TimeSignature
// Kind: ScriptStruct; super: none
struct FTimeSignature
{
public:
    std::int32_t Numerator; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Denominator; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTimeSignature, Numerator) == 0, "Offset mismatch for FTimeSignature::Numerator");
static_assert(offsetof(FTimeSignature, Denominator) == 4, "Offset mismatch for FTimeSignature::Denominator");

// /Script/HarmonixMidi.TimeSignaturePoint
// Kind: ScriptStruct; super: MusicMapTimespanBase
struct FTimeSignaturePoint
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t BarIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t BeatIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t TimeSignature[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTimeSignaturePoint, BarIndex) == 8, "Offset mismatch for FTimeSignaturePoint::BarIndex");
static_assert(offsetof(FTimeSignaturePoint, BeatIndex) == 12, "Offset mismatch for FTimeSignaturePoint::BeatIndex");
static_assert(offsetof(FTimeSignaturePoint, TimeSignature) == 16, "Offset mismatch for FTimeSignaturePoint::TimeSignature");

// /Script/HarmonixMidi.MidiFile
// Kind: Class; super: Object
class UMidiFile
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t TheMidiData[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMidiFile, TheMidiData) == 56, "Offset mismatch for UMidiFile::TheMidiData");

// /Script/HarmonixMidi.MidiNoteFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMidiNoteFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMidi.MidiSongPosFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMidiSongPosFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMidi.MusicalTickFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMusicalTickFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
