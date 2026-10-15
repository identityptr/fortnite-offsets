/**
 * decamp dumper generated SDK
 * Package: /Script/MusicEnvironment
 */
#pragma once
#include "Basic.h"

// /Script/MusicEnvironment.FrameBasedTempoPoint
// Kind: ScriptStruct; super: none
struct FFrameBasedTempoPoint
{
public:
    std::int32_t MicrosecondsPerQuarterNote; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t OnTick; // 0x0004 (Size: 0x4, Type: IntProperty)
    float OnMs; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFrameBasedTempoPoint, MicrosecondsPerQuarterNote) == 0, "Offset mismatch for FFrameBasedTempoPoint::MicrosecondsPerQuarterNote");
static_assert(offsetof(FFrameBasedTempoPoint, OnTick) == 4, "Offset mismatch for FFrameBasedTempoPoint::OnTick");
static_assert(offsetof(FFrameBasedTempoPoint, OnMs) == 8, "Offset mismatch for FFrameBasedTempoPoint::OnMs");

// /Script/MusicEnvironment.FrameBasedTimeSignature
// Kind: ScriptStruct; super: none
struct FFrameBasedTimeSignature
{
public:
    std::int16_t Numerator; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t Denominator; // 0x0002 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FFrameBasedTimeSignature, Numerator) == 0, "Offset mismatch for FFrameBasedTimeSignature::Numerator");
static_assert(offsetof(FFrameBasedTimeSignature, Denominator) == 2, "Offset mismatch for FFrameBasedTimeSignature::Denominator");

// /Script/MusicEnvironment.FrameBasedTimeSignaturePoint
// Kind: ScriptStruct; super: none
struct FFrameBasedTimeSignaturePoint
{
public:
    std::uint8_t TimeSignature[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t OnBar; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t OnTick; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    double OnFrame; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FFrameBasedTimeSignaturePoint, TimeSignature) == 0, "Offset mismatch for FFrameBasedTimeSignaturePoint::TimeSignature");
static_assert(offsetof(FFrameBasedTimeSignaturePoint, OnBar) == 4, "Offset mismatch for FFrameBasedTimeSignaturePoint::OnBar");
static_assert(offsetof(FFrameBasedTimeSignaturePoint, OnTick) == 8, "Offset mismatch for FFrameBasedTimeSignaturePoint::OnTick");
static_assert(offsetof(FFrameBasedTimeSignaturePoint, OnFrame) == 16, "Offset mismatch for FFrameBasedTimeSignaturePoint::OnFrame");

// /Script/MusicEnvironment.MarkerProviderResults
// Kind: ScriptStruct; super: none
struct FMarkerProviderResults
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MusicEnvironment.TempoTimeSignatureMarker
// Kind: ScriptStruct; super: none
struct FTempoTimeSignatureMarker
{
public:
    std::uint8_t TimeSigPoint[0x20]; // 0x0000 (Size: 0x20, Type: OptionalProperty)
    std::uint8_t TempoPoint[0x10]; // 0x0020 (Size: 0x10, Type: OptionalProperty)
    float Seconds; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTempoTimeSignatureMarker, TimeSigPoint) == 0, "Offset mismatch for FTempoTimeSignatureMarker::TimeSigPoint");
static_assert(offsetof(FTempoTimeSignatureMarker, TempoPoint) == 32, "Offset mismatch for FTempoTimeSignatureMarker::TempoPoint");
static_assert(offsetof(FTempoTimeSignatureMarker, Seconds) == 48, "Offset mismatch for FTempoTimeSignatureMarker::Seconds");

// /Script/MusicEnvironment.FrameBasedMusicMap
// Kind: Class; super: Object
class UFrameBasedMusicMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> TempoMap; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BarMap; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FrameResolution[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFrameBasedMusicMap, TempoMap) == 40, "Offset mismatch for UFrameBasedMusicMap::TempoMap");
static_assert(offsetof(UFrameBasedMusicMap, BarMap) == 56, "Offset mismatch for UFrameBasedMusicMap::BarMap");
static_assert(offsetof(UFrameBasedMusicMap, FrameResolution) == 72, "Offset mismatch for UFrameBasedMusicMap::FrameResolution");

// /Script/MusicEnvironment.MusicClockSourceManager
// Kind: Class; super: Object
class UMusicClockSourceManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MusicEnvironment.MusicEnvironmentClockSource
// Kind: Class; super: Interface
class UMusicEnvironmentClockSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MusicEnvironment.MusicEnvironmentMetronome
// Kind: Class; super: MusicEnvironmentClockSource
class UMusicEnvironmentMetronome
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MusicEnvironment.MusicEnvironmentSubsystem
// Kind: Class; super: EngineSubsystem
class UMusicEnvironmentSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* ClockSourceManager; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TSoftClassPtr<void> MetronomeType; // 0x0038 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UMusicEnvironmentSubsystem, ClockSourceManager) == 48, "Offset mismatch for UMusicEnvironmentSubsystem::ClockSourceManager");
static_assert(offsetof(UMusicEnvironmentSubsystem, MetronomeType) == 56, "Offset mismatch for UMusicEnvironmentSubsystem::MetronomeType");

// /Script/MusicEnvironment.MusicHandle
// Kind: Class; super: Interface
class UMusicHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MusicEnvironment.MusicHandleBlueprintHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class UMusicHandleBlueprintHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MusicEnvironment.MusicMapSource
// Kind: Class; super: Interface
class UMusicMapSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MusicEnvironment.MusicalAsset
// Kind: Class; super: MusicMapSource
class UMusicalAsset
{
public:
    std::uint8_t Opaque[1];
};
