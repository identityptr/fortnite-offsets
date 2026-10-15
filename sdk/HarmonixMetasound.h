/**
 * decamp dumper generated SDK
 * Package: /Script/HarmonixMetasound
 */
#pragma once
#include "Basic.h"

// /Script/HarmonixMetasound.HarmonixPeakTamerSettings
// Kind: ScriptStruct; super: none
struct FHarmonixPeakTamerSettings
{
public:
    float PeakAttackTimeSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float PeakReleaseTimeSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableValueSmoothing; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float ValueAttackTimeSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ValueReleaseTimeSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHarmonixPeakTamerSettings, PeakAttackTimeSeconds) == 0, "Offset mismatch for FHarmonixPeakTamerSettings::PeakAttackTimeSeconds");
static_assert(offsetof(FHarmonixPeakTamerSettings, PeakReleaseTimeSeconds) == 4, "Offset mismatch for FHarmonixPeakTamerSettings::PeakReleaseTimeSeconds");
static_assert(offsetof(FHarmonixPeakTamerSettings, bEnableValueSmoothing) == 8, "Offset mismatch for FHarmonixPeakTamerSettings::bEnableValueSmoothing");
static_assert(offsetof(FHarmonixPeakTamerSettings, ValueAttackTimeSeconds) == 12, "Offset mismatch for FHarmonixPeakTamerSettings::ValueAttackTimeSeconds");
static_assert(offsetof(FHarmonixPeakTamerSettings, ValueReleaseTimeSeconds) == 16, "Offset mismatch for FHarmonixPeakTamerSettings::ValueReleaseTimeSeconds");

// /Script/HarmonixMetasound.HarmonixSimpleSamplerNodeConfiguration
// Kind: ScriptStruct; super: MetaSoundFrontendNodeConfiguration
struct FHarmonixSimpleSamplerNodeConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint32_t NumChannels; // 0x0008 (Size: 0x4, Type: UInt32Property)
    float MaxCaptureSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHarmonixSimpleSamplerNodeConfiguration, NumChannels) == 8, "Offset mismatch for FHarmonixSimpleSamplerNodeConfiguration::NumChannels");
static_assert(offsetof(FHarmonixSimpleSamplerNodeConfiguration, MaxCaptureSeconds) == 12, "Offset mismatch for FHarmonixSimpleSamplerNodeConfiguration::MaxCaptureSeconds");

// /Script/HarmonixMetasound.HarmonixTapeSSNodeConfiguration
// Kind: ScriptStruct; super: MetaSoundFrontendNodeConfiguration
struct FHarmonixTapeSSNodeConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint32_t NumChannels; // 0x0008 (Size: 0x4, Type: UInt32Property)
    float MaxRampSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FHarmonixTapeSSNodeConfiguration, NumChannels) == 8, "Offset mismatch for FHarmonixTapeSSNodeConfiguration::NumChannels");
static_assert(offsetof(FHarmonixTapeSSNodeConfiguration, MaxRampSeconds) == 12, "Offset mismatch for FHarmonixTapeSSNodeConfiguration::MaxRampSeconds");

// /Script/HarmonixMetasound.ManualMusicSourceSettings
// Kind: ScriptStruct; super: MusicSourceSettings
struct FManualMusicSourceSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Tempo; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t TimeSigNumerator; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t TimeSigDenominator; // 0x0010 (Size: 0x4, Type: IntProperty)
    float StartPositionSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FManualMusicSourceSettings, Tempo) == 8, "Offset mismatch for FManualMusicSourceSettings::Tempo");
static_assert(offsetof(FManualMusicSourceSettings, TimeSigNumerator) == 12, "Offset mismatch for FManualMusicSourceSettings::TimeSigNumerator");
static_assert(offsetof(FManualMusicSourceSettings, TimeSigDenominator) == 16, "Offset mismatch for FManualMusicSourceSettings::TimeSigDenominator");
static_assert(offsetof(FManualMusicSourceSettings, StartPositionSeconds) == 20, "Offset mismatch for FManualMusicSourceSettings::StartPositionSeconds");

// /Script/HarmonixMetasound.MetasoundMusicClockSettings
// Kind: ScriptStruct; super: MusicClockSettingsBase
struct FMetasoundMusicClockSettings
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FName MetasoundOutputName; // 0x0018 (Size: 0x8, Type: NameProperty)
    void* AudioComponent; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMetasoundMusicClockSettings, MetasoundOutputName) == 24, "Offset mismatch for FMetasoundMusicClockSettings::MetasoundOutputName");
static_assert(offsetof(FMetasoundMusicClockSettings, AudioComponent) == 32, "Offset mismatch for FMetasoundMusicClockSettings::AudioComponent");

// /Script/HarmonixMetasound.MetasoundMusicSourceSettings
// Kind: ScriptStruct; super: MusicSourceSettings
struct FMetasoundMusicSourceSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* AudioComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    FName OutputPinName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMetasoundMusicSourceSettings, AudioComponent) == 8, "Offset mismatch for FMetasoundMusicSourceSettings::AudioComponent");
static_assert(offsetof(FMetasoundMusicSourceSettings, OutputPinName) == 16, "Offset mismatch for FMetasoundMusicSourceSettings::OutputPinName");

// /Script/HarmonixMetasound.MidiEventInfo
// Kind: ScriptStruct; super: none
struct FMidiEventInfo
{
public:
    std::uint8_t Timestamp[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::int32_t TrackIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMidiEventInfo, Timestamp) == 0, "Offset mismatch for FMidiEventInfo::Timestamp");
static_assert(offsetof(FMidiEventInfo, TrackIndex) == 8, "Offset mismatch for FMidiEventInfo::TrackIndex");

// /Script/HarmonixMetasound.MidiMusicSourceSettings
// Kind: ScriptStruct; super: MusicSourceSettings
struct FMidiMusicSourceSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* MidiFile; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float StartPositionSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMidiMusicSourceSettings, MidiFile) == 8, "Offset mismatch for FMidiMusicSourceSettings::MidiFile");
static_assert(offsetof(FMidiMusicSourceSettings, StartPositionSeconds) == 16, "Offset mismatch for FMidiMusicSourceSettings::StartPositionSeconds");

// /Script/HarmonixMetasound.MusicClockSettingsBase
// Kind: ScriptStruct; super: none
struct FMusicClockSettingsBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float DefaultTempo; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t DefaultTimeSigNumerator; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t DefaultTimeSigDenominator; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t SourceStreamTimebase; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMusicClockSettingsBase, DefaultTempo) == 8, "Offset mismatch for FMusicClockSettingsBase::DefaultTempo");
static_assert(offsetof(FMusicClockSettingsBase, DefaultTimeSigNumerator) == 12, "Offset mismatch for FMusicClockSettingsBase::DefaultTimeSigNumerator");
static_assert(offsetof(FMusicClockSettingsBase, DefaultTimeSigDenominator) == 16, "Offset mismatch for FMusicClockSettingsBase::DefaultTimeSigDenominator");
static_assert(offsetof(FMusicClockSettingsBase, SourceStreamTimebase) == 20, "Offset mismatch for FMusicClockSettingsBase::SourceStreamTimebase");

// /Script/HarmonixMetasound.MusicLoopConfiguration
// Kind: ScriptStruct; super: none
struct FMusicLoopConfiguration
{
public:
    std::uint8_t Enabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t RegionStart[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t RegionEnd[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMusicLoopConfiguration, Enabled) == 0, "Offset mismatch for FMusicLoopConfiguration::Enabled");
static_assert(offsetof(FMusicLoopConfiguration, RegionStart) == 4, "Offset mismatch for FMusicLoopConfiguration::RegionStart");
static_assert(offsetof(FMusicLoopConfiguration, RegionEnd) == 12, "Offset mismatch for FMusicLoopConfiguration::RegionEnd");

// /Script/HarmonixMetasound.MusicSeekRequest
// Kind: ScriptStruct; super: none
struct FMusicSeekRequest
{
public:
    std::uint8_t EmmediateIfPastFromPoint; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t FromPoint[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t ToPoint[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMusicSeekRequest, EmmediateIfPastFromPoint) == 0, "Offset mismatch for FMusicSeekRequest::EmmediateIfPastFromPoint");
static_assert(offsetof(FMusicSeekRequest, FromPoint) == 4, "Offset mismatch for FMusicSeekRequest::FromPoint");
static_assert(offsetof(FMusicSeekRequest, ToPoint) == 12, "Offset mismatch for FMusicSeekRequest::ToPoint");

// /Script/HarmonixMetasound.MusicSeekTarget
// Kind: ScriptStruct; super: none
struct FMusicSeekTarget
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t BarBeat[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    float Ms; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMusicSeekTarget, Type) == 0, "Offset mismatch for FMusicSeekTarget::Type");
static_assert(offsetof(FMusicSeekTarget, BarBeat) == 4, "Offset mismatch for FMusicSeekTarget::BarBeat");
static_assert(offsetof(FMusicSeekTarget, Ms) == 12, "Offset mismatch for FMusicSeekTarget::Ms");

// /Script/HarmonixMetasound.MusicSourceSettings
// Kind: ScriptStruct; super: none
struct FMusicSourceSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.MusicTempometerMPCParameterNames
// Kind: ScriptStruct; super: none
struct FMusicTempometerMPCParameterNames
{
public:
    std::uint8_t SecondsIncludingCountInParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BarsIncludingCountInParameterName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t BeatsIncludingCountInParameterName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t SecondsFromBarOneParameterName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t TimestampBarParameterName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t TimestampBeatInBarParameterName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t BarProgressParameterName[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t BeatProgressParameterName[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t TimeSignatureNumeratorParameterName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t TimeSignatureDenominatorParameterName[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t TempoParameterName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    FName TimestampValidParameterName; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMusicTempometerMPCParameterNames, SecondsIncludingCountInParameterName) == 0, "Offset mismatch for FMusicTempometerMPCParameterNames::SecondsIncludingCountInParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, BarsIncludingCountInParameterName) == 4, "Offset mismatch for FMusicTempometerMPCParameterNames::BarsIncludingCountInParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, BeatsIncludingCountInParameterName) == 8, "Offset mismatch for FMusicTempometerMPCParameterNames::BeatsIncludingCountInParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, SecondsFromBarOneParameterName) == 12, "Offset mismatch for FMusicTempometerMPCParameterNames::SecondsFromBarOneParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, TimestampBarParameterName) == 16, "Offset mismatch for FMusicTempometerMPCParameterNames::TimestampBarParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, TimestampBeatInBarParameterName) == 20, "Offset mismatch for FMusicTempometerMPCParameterNames::TimestampBeatInBarParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, BarProgressParameterName) == 24, "Offset mismatch for FMusicTempometerMPCParameterNames::BarProgressParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, BeatProgressParameterName) == 28, "Offset mismatch for FMusicTempometerMPCParameterNames::BeatProgressParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, TimeSignatureNumeratorParameterName) == 32, "Offset mismatch for FMusicTempometerMPCParameterNames::TimeSignatureNumeratorParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, TimeSignatureDenominatorParameterName) == 36, "Offset mismatch for FMusicTempometerMPCParameterNames::TimeSignatureDenominatorParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, TempoParameterName) == 40, "Offset mismatch for FMusicTempometerMPCParameterNames::TempoParameterName");
static_assert(offsetof(FMusicTempometerMPCParameterNames, TimestampValidParameterName) == 44, "Offset mismatch for FMusicTempometerMPCParameterNames::TimestampValidParameterName");

// /Script/HarmonixMetasound.MusicTempometerMPCParameters
// Kind: ScriptStruct; super: none
struct FMusicTempometerMPCParameters
{
public:
    std::uint8_t CurrentFrameParameterNames[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t PreviousFrameParameterNames[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMusicTempometerMPCParameters, CurrentFrameParameterNames) == 0, "Offset mismatch for FMusicTempometerMPCParameters::CurrentFrameParameterNames");
static_assert(offsetof(FMusicTempometerMPCParameters, PreviousFrameParameterNames) == 48, "Offset mismatch for FMusicTempometerMPCParameters::PreviousFrameParameterNames");

// /Script/HarmonixMetasound.MusicTimeInterval
// Kind: ScriptStruct; super: none
struct FMusicTimeInterval
{
public:
    std::uint8_t Interval; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Offset; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t IntervalMultiplier; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t OffsetMultiplier; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMusicTimeInterval, Interval) == 0, "Offset mismatch for FMusicTimeInterval::Interval");
static_assert(offsetof(FMusicTimeInterval, Offset) == 1, "Offset mismatch for FMusicTimeInterval::Offset");
static_assert(offsetof(FMusicTimeInterval, IntervalMultiplier) == 4, "Offset mismatch for FMusicTimeInterval::IntervalMultiplier");
static_assert(offsetof(FMusicTimeInterval, OffsetMultiplier) == 8, "Offset mismatch for FMusicTimeInterval::OffsetMultiplier");

// /Script/HarmonixMetasound.MusicTimerHandle
// Kind: ScriptStruct; super: none
struct FMusicTimerHandle
{
public:
    std::uint64_t Handle; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FMusicTimerHandle, Handle) == 0, "Offset mismatch for FMusicTimerHandle::Handle");

// /Script/HarmonixMetasound.StepSequenceCell
// Kind: ScriptStruct; super: none
struct FStepSequenceCell
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bContinuation; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStepSequenceCell, bEnabled) == 0, "Offset mismatch for FStepSequenceCell::bEnabled");
static_assert(offsetof(FStepSequenceCell, bContinuation) == 1, "Offset mismatch for FStepSequenceCell::bContinuation");

// /Script/HarmonixMetasound.StepSequenceNote
// Kind: ScriptStruct; super: none
struct FStepSequenceNote
{
public:
    std::int32_t NoteNumber; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Velocity; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStepSequenceNote, NoteNumber) == 0, "Offset mismatch for FStepSequenceNote::NoteNumber");
static_assert(offsetof(FStepSequenceNote, Velocity) == 4, "Offset mismatch for FStepSequenceNote::Velocity");

// /Script/HarmonixMetasound.StepSequencePage
// Kind: ScriptStruct; super: none
struct FStepSequencePage
{
public:
    TArray<void*> Rows; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStepSequencePage, Rows) == 0, "Offset mismatch for FStepSequencePage::Rows");

// /Script/HarmonixMetasound.StepSequenceRow
// Kind: ScriptStruct; super: none
struct FStepSequenceRow
{
public:
    TArray<void*> Cells; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRowEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FStepSequenceRow, Cells) == 0, "Offset mismatch for FStepSequenceRow::Cells");
static_assert(offsetof(FStepSequenceRow, bRowEnabled) == 16, "Offset mismatch for FStepSequenceRow::bRowEnabled");

// /Script/HarmonixMetasound.StepSequenceTable
// Kind: ScriptStruct; super: none
struct FStepSequenceTable
{
public:
    TArray<void*> Pages; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Notes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t StepSkipIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStepSequenceTable, Pages) == 0, "Offset mismatch for FStepSequenceTable::Pages");
static_assert(offsetof(FStepSequenceTable, Notes) == 16, "Offset mismatch for FStepSequenceTable::Notes");
static_assert(offsetof(FStepSequenceTable, StepSkipIndex) == 32, "Offset mismatch for FStepSequenceTable::StepSkipIndex");

// /Script/HarmonixMetasound.StutterSequenceEntry
// Kind: ScriptStruct; super: none
struct FStutterSequenceEntry
{
public:
    std::uint8_t Spacing; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AudibleDuration; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Reverse; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::int32_t Count; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStutterSequenceEntry, Spacing) == 0, "Offset mismatch for FStutterSequenceEntry::Spacing");
static_assert(offsetof(FStutterSequenceEntry, AudibleDuration) == 1, "Offset mismatch for FStutterSequenceEntry::AudibleDuration");
static_assert(offsetof(FStutterSequenceEntry, Reverse) == 2, "Offset mismatch for FStutterSequenceEntry::Reverse");
static_assert(offsetof(FStutterSequenceEntry, Count) == 4, "Offset mismatch for FStutterSequenceEntry::Count");

// /Script/HarmonixMetasound.StutterSequenceTable
// Kind: ScriptStruct; super: none
struct FStutterSequenceTable
{
public:
    std::uint8_t CaptureDuration; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ResetOnCompletion; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    TArray<void*> Stutters; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FStutterSequenceTable, CaptureDuration) == 0, "Offset mismatch for FStutterSequenceTable::CaptureDuration");
static_assert(offsetof(FStutterSequenceTable, ResetOnCompletion) == 1, "Offset mismatch for FStutterSequenceTable::ResetOnCompletion");
static_assert(offsetof(FStutterSequenceTable, Stutters) == 8, "Offset mismatch for FStutterSequenceTable::Stutters");

// /Script/HarmonixMetasound.WallClockMusicClockSettings
// Kind: ScriptStruct; super: MusicClockSettingsBase
struct FWallClockMusicClockSettings
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* TempoMap; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    float StartPositionSecs; // 0x0020 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWallClockMusicClockSettings, TempoMap) == 24, "Offset mismatch for FWallClockMusicClockSettings::TempoMap");
static_assert(offsetof(FWallClockMusicClockSettings, StartPositionSecs) == 32, "Offset mismatch for FWallClockMusicClockSettings::StartPositionSecs");

// /Script/HarmonixMetasound.HarmonixMetasoundMusicAsset
// Kind: Class; super: HarmonixMusicAsset
class UHarmonixMetasoundMusicAsset
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* MetaSoundSource; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHarmonixMetasoundMusicAsset, MetaSoundSource) == 56, "Offset mismatch for UHarmonixMetasoundMusicAsset::MetaSoundSource");

// /Script/HarmonixMetasound.HarmonixMusicAsset
// Kind: Class; super: Object
class UHarmonixMusicAsset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* MidiSongMap; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHarmonixMusicAsset, MidiSongMap) == 48, "Offset mismatch for UHarmonixMusicAsset::MidiSongMap");

// /Script/HarmonixMetasound.HarmonixMusicEnvironmentMetronome
// Kind: Class; super: Object
class UHarmonixMusicEnvironmentMetronome
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* AudioComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* MusicClockComponent; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* MidiFile; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* SourceBuilder; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OnPlayNodeOutput[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t OnFinishedNodeInput[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    TArray<void*> AudioOutNodeInputs; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHarmonixMusicEnvironmentMetronome, AudioComponent) == 56, "Offset mismatch for UHarmonixMusicEnvironmentMetronome::AudioComponent");
static_assert(offsetof(UHarmonixMusicEnvironmentMetronome, MusicClockComponent) == 64, "Offset mismatch for UHarmonixMusicEnvironmentMetronome::MusicClockComponent");
static_assert(offsetof(UHarmonixMusicEnvironmentMetronome, MidiFile) == 72, "Offset mismatch for UHarmonixMusicEnvironmentMetronome::MidiFile");
static_assert(offsetof(UHarmonixMusicEnvironmentMetronome, SourceBuilder) == 80, "Offset mismatch for UHarmonixMusicEnvironmentMetronome::SourceBuilder");
static_assert(offsetof(UHarmonixMusicEnvironmentMetronome, OnPlayNodeOutput) == 88, "Offset mismatch for UHarmonixMusicEnvironmentMetronome::OnPlayNodeOutput");
static_assert(offsetof(UHarmonixMusicEnvironmentMetronome, OnFinishedNodeInput) == 120, "Offset mismatch for UHarmonixMusicEnvironmentMetronome::OnFinishedNodeInput");
static_assert(offsetof(UHarmonixMusicEnvironmentMetronome, AudioOutNodeInputs) == 152, "Offset mismatch for UHarmonixMusicEnvironmentMetronome::AudioOutNodeInputs");

// /Script/HarmonixMetasound.HarmonixMusicHandle
// Kind: Class; super: Object
class UHarmonixMusicHandle
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* AudioComponent; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* MusicClockComponent; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* PlayingAsset; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHarmonixMusicHandle, AudioComponent) == 88, "Offset mismatch for UHarmonixMusicHandle::AudioComponent");
static_assert(offsetof(UHarmonixMusicHandle, MusicClockComponent) == 96, "Offset mismatch for UHarmonixMusicHandle::MusicClockComponent");
static_assert(offsetof(UHarmonixMusicHandle, PlayingAsset) == 104, "Offset mismatch for UHarmonixMusicHandle::PlayingAsset");

// /Script/HarmonixMetasound.HarmonixPeakTamer
// Kind: Class; super: Object
class UHarmonixPeakTamer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.HarmonixWaveMusicAsset
// Kind: Class; super: HarmonixMusicAsset
class UHarmonixWaveMusicAsset
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* WaveFile; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* CachedMetasound; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHarmonixWaveMusicAsset, WaveFile) == 56, "Offset mismatch for UHarmonixWaveMusicAsset::WaveFile");
static_assert(offsetof(UHarmonixWaveMusicAsset, CachedMetasound) == 64, "Offset mismatch for UHarmonixWaveMusicAsset::CachedMetasound");

// /Script/HarmonixMetasound.MetasoundMusicSource
// Kind: Class; super: Object
class UMetasoundMusicSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.MetasoundOfflinePlayerComponent
// Kind: Class; super: ActorComponent
class UMetasoundOfflinePlayerComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* MetaSoundSource; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMetasoundOfflinePlayerComponent, MetaSoundSource) == 208, "Offset mismatch for UMetasoundOfflinePlayerComponent::MetaSoundSource");

// /Script/HarmonixMetasound.MidiClockUpdateSubsystem
// Kind: Class; super: EngineSubsystem
class UMidiClockUpdateSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMidiEventInfoBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.MidiStepSequence
// Kind: Class; super: Object
class UMidiStepSequence
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t Pages; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t Rows; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::int32_t Columns; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    std::uint8_t StepTable[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMidiStepSequence, Pages) == 48, "Offset mismatch for UMidiStepSequence::Pages");
static_assert(offsetof(UMidiStepSequence, Rows) == 52, "Offset mismatch for UMidiStepSequence::Rows");
static_assert(offsetof(UMidiStepSequence, Columns) == 56, "Offset mismatch for UMidiStepSequence::Columns");
static_assert(offsetof(UMidiStepSequence, StepTable) == 64, "Offset mismatch for UMidiStepSequence::StepTable");

// /Script/HarmonixMetasound.MidiStutterSequence
// Kind: Class; super: Object
class UMidiStutterSequence
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t StutterTable[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMidiStutterSequence, StutterTable) == 48, "Offset mismatch for UMidiStutterSequence::StutterTable");

// /Script/HarmonixMetasound.MusicClock
// Kind: Class; super: Object
class UMusicClock
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate BeatEvent; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BarEvent; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate SectionEvent; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate PlayStateEvent; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate MusicTimeDiscontinuityEvent; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UMusicClock, BeatEvent) == 40, "Offset mismatch for UMusicClock::BeatEvent");
static_assert(offsetof(UMusicClock, BarEvent) == 56, "Offset mismatch for UMusicClock::BarEvent");
static_assert(offsetof(UMusicClock, SectionEvent) == 72, "Offset mismatch for UMusicClock::SectionEvent");
static_assert(offsetof(UMusicClock, PlayStateEvent) == 88, "Offset mismatch for UMusicClock::PlayStateEvent");
static_assert(offsetof(UMusicClock, MusicTimeDiscontinuityEvent) == 104, "Offset mismatch for UMusicClock::MusicTimeDiscontinuityEvent");

// /Script/HarmonixMetasound.MusicClockComponent
// Kind: Class; super: ActorComponent
class UMusicClockComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t DriveMethod; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    std::uint8_t MetasoundOutputName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    void* MetasoundsAudioComponent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* TempoMap; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    float StartPositionSeconds; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00E4
    std::uint8_t MusicClockSettings[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TimebaseForBarAndBeatEvents; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00F9
    FMulticastInlineDelegate PlayStateEvent; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BeatEvent; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BarEvent; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate SectionEvent; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate MusicClockConnectedEvent; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate MusicClockDisconnectedEvent; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate AudioRenderMusicTimeDiscontinuityEvent; // 0x0160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate PlayerExperienceMusicTimeDiscontinuityEvent; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VideoRenderMusicTimeDiscontinuityEvent; // 0x0180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float DefaultTempo; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::int32_t DefaultTimeSignatureNum; // 0x0194 (Size: 0x4, Type: IntProperty)
    std::int32_t DefaultTimeSignatureDenom; // 0x0198 (Size: 0x4, Type: IntProperty)
    std::uint8_t RunPastMusicEnd; // 0x019C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1B]; // 0x019D
    TScriptInterface<void> MusicSource; // 0x01B8 (Size: 0x10, Type: InterfaceProperty)
    TArray<void*> Clocks; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0xE8]; // 0x01D8
    void* MusicTimerManager; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMusicClockComponent, DriveMethod) == 200, "Offset mismatch for UMusicClockComponent::DriveMethod");
static_assert(offsetof(UMusicClockComponent, MetasoundOutputName) == 204, "Offset mismatch for UMusicClockComponent::MetasoundOutputName");
static_assert(offsetof(UMusicClockComponent, MetasoundsAudioComponent) == 208, "Offset mismatch for UMusicClockComponent::MetasoundsAudioComponent");
static_assert(offsetof(UMusicClockComponent, TempoMap) == 216, "Offset mismatch for UMusicClockComponent::TempoMap");
static_assert(offsetof(UMusicClockComponent, StartPositionSeconds) == 224, "Offset mismatch for UMusicClockComponent::StartPositionSeconds");
static_assert(offsetof(UMusicClockComponent, MusicClockSettings) == 232, "Offset mismatch for UMusicClockComponent::MusicClockSettings");
static_assert(offsetof(UMusicClockComponent, TimebaseForBarAndBeatEvents) == 248, "Offset mismatch for UMusicClockComponent::TimebaseForBarAndBeatEvents");
static_assert(offsetof(UMusicClockComponent, PlayStateEvent) == 256, "Offset mismatch for UMusicClockComponent::PlayStateEvent");
static_assert(offsetof(UMusicClockComponent, BeatEvent) == 272, "Offset mismatch for UMusicClockComponent::BeatEvent");
static_assert(offsetof(UMusicClockComponent, BarEvent) == 288, "Offset mismatch for UMusicClockComponent::BarEvent");
static_assert(offsetof(UMusicClockComponent, SectionEvent) == 304, "Offset mismatch for UMusicClockComponent::SectionEvent");
static_assert(offsetof(UMusicClockComponent, MusicClockConnectedEvent) == 320, "Offset mismatch for UMusicClockComponent::MusicClockConnectedEvent");
static_assert(offsetof(UMusicClockComponent, MusicClockDisconnectedEvent) == 336, "Offset mismatch for UMusicClockComponent::MusicClockDisconnectedEvent");
static_assert(offsetof(UMusicClockComponent, AudioRenderMusicTimeDiscontinuityEvent) == 352, "Offset mismatch for UMusicClockComponent::AudioRenderMusicTimeDiscontinuityEvent");
static_assert(offsetof(UMusicClockComponent, PlayerExperienceMusicTimeDiscontinuityEvent) == 368, "Offset mismatch for UMusicClockComponent::PlayerExperienceMusicTimeDiscontinuityEvent");
static_assert(offsetof(UMusicClockComponent, VideoRenderMusicTimeDiscontinuityEvent) == 384, "Offset mismatch for UMusicClockComponent::VideoRenderMusicTimeDiscontinuityEvent");
static_assert(offsetof(UMusicClockComponent, DefaultTempo) == 400, "Offset mismatch for UMusicClockComponent::DefaultTempo");
static_assert(offsetof(UMusicClockComponent, DefaultTimeSignatureNum) == 404, "Offset mismatch for UMusicClockComponent::DefaultTimeSignatureNum");
static_assert(offsetof(UMusicClockComponent, DefaultTimeSignatureDenom) == 408, "Offset mismatch for UMusicClockComponent::DefaultTimeSignatureDenom");
static_assert(offsetof(UMusicClockComponent, RunPastMusicEnd) == 412, "Offset mismatch for UMusicClockComponent::RunPastMusicEnd");
static_assert(offsetof(UMusicClockComponent, MusicSource) == 440, "Offset mismatch for UMusicClockComponent::MusicSource");
static_assert(offsetof(UMusicClockComponent, Clocks) == 456, "Offset mismatch for UMusicClockComponent::Clocks");
static_assert(offsetof(UMusicClockComponent, MusicTimerManager) == 704, "Offset mismatch for UMusicClockComponent::MusicTimerManager");

// /Script/HarmonixMetasound.MusicParameterBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMusicParameterBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.MusicSource
// Kind: Class; super: Interface
class UMusicSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.MusicSourceBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMusicSourceBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.MusicTempometerComponent
// Kind: Class; super: ActorComponent
class UMusicTempometerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SecondsIncludingCountInParameterName[0x4]; // 0x00C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t BarsIncludingCountInParameterName[0x4]; // 0x00C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t BeatsIncludingCountInParameterName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t SecondsFromBarOneParameterName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t TimestampBarParameterName[0x4]; // 0x00D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TimestampBeatInBarParameterName[0x4]; // 0x00D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t BarProgressParameterName[0x4]; // 0x00D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t BeatProgressParameterName[0x4]; // 0x00DC (Size: 0x4, Type: NameProperty)
    std::uint8_t TimeSignatureNumeratorParameterName[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TimeSignatureDenominatorParameterName[0x4]; // 0x00E4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TempoParameterName[0x4]; // 0x00E8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MPCParameters[0x64]; // 0x00EC (Size: 0x64, Type: StructProperty)
    std::uint8_t SongPos[0x48]; // 0x0150 (Size: 0x48, Type: StructProperty)
    std::uint8_t PreviousFrameSongPos[0x78]; // 0x0198 (Size: 0x78, Type: StructProperty)
    void* MusicClock; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    void* MaterialParameterCollection; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> MaterialParameterCollectionInstance; // 0x0220 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMusicTempometerComponent, SecondsIncludingCountInParameterName) == 192, "Offset mismatch for UMusicTempometerComponent::SecondsIncludingCountInParameterName");
static_assert(offsetof(UMusicTempometerComponent, BarsIncludingCountInParameterName) == 196, "Offset mismatch for UMusicTempometerComponent::BarsIncludingCountInParameterName");
static_assert(offsetof(UMusicTempometerComponent, BeatsIncludingCountInParameterName) == 200, "Offset mismatch for UMusicTempometerComponent::BeatsIncludingCountInParameterName");
static_assert(offsetof(UMusicTempometerComponent, SecondsFromBarOneParameterName) == 204, "Offset mismatch for UMusicTempometerComponent::SecondsFromBarOneParameterName");
static_assert(offsetof(UMusicTempometerComponent, TimestampBarParameterName) == 208, "Offset mismatch for UMusicTempometerComponent::TimestampBarParameterName");
static_assert(offsetof(UMusicTempometerComponent, TimestampBeatInBarParameterName) == 212, "Offset mismatch for UMusicTempometerComponent::TimestampBeatInBarParameterName");
static_assert(offsetof(UMusicTempometerComponent, BarProgressParameterName) == 216, "Offset mismatch for UMusicTempometerComponent::BarProgressParameterName");
static_assert(offsetof(UMusicTempometerComponent, BeatProgressParameterName) == 220, "Offset mismatch for UMusicTempometerComponent::BeatProgressParameterName");
static_assert(offsetof(UMusicTempometerComponent, TimeSignatureNumeratorParameterName) == 224, "Offset mismatch for UMusicTempometerComponent::TimeSignatureNumeratorParameterName");
static_assert(offsetof(UMusicTempometerComponent, TimeSignatureDenominatorParameterName) == 228, "Offset mismatch for UMusicTempometerComponent::TimeSignatureDenominatorParameterName");
static_assert(offsetof(UMusicTempometerComponent, TempoParameterName) == 232, "Offset mismatch for UMusicTempometerComponent::TempoParameterName");
static_assert(offsetof(UMusicTempometerComponent, MPCParameters) == 236, "Offset mismatch for UMusicTempometerComponent::MPCParameters");
static_assert(offsetof(UMusicTempometerComponent, SongPos) == 336, "Offset mismatch for UMusicTempometerComponent::SongPos");
static_assert(offsetof(UMusicTempometerComponent, PreviousFrameSongPos) == 408, "Offset mismatch for UMusicTempometerComponent::PreviousFrameSongPos");
static_assert(offsetof(UMusicTempometerComponent, MusicClock) == 528, "Offset mismatch for UMusicTempometerComponent::MusicClock");
static_assert(offsetof(UMusicTempometerComponent, MaterialParameterCollection) == 536, "Offset mismatch for UMusicTempometerComponent::MaterialParameterCollection");
static_assert(offsetof(UMusicTempometerComponent, MaterialParameterCollectionInstance) == 544, "Offset mismatch for UMusicTempometerComponent::MaterialParameterCollectionInstance");

// /Script/HarmonixMetasound.MusicTimerManager
// Kind: Class; super: Object
class UMusicTimerManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.MusicTimestampBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UMusicTimestampBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.RuntimeMusicSource
// Kind: Class; super: Object
class URuntimeMusicSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/HarmonixMetasound.TimeSignatureBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTimeSignatureBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};
