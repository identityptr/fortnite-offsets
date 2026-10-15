/**
 * decamp dumper generated SDK
 * Package: /Script/TakeMovieScene
 */
#pragma once
#include "Basic.h"

// /Script/TakeMovieScene.TakeMovieSceneHitchTimecodeCurves
// Kind: ScriptStruct; super: none
struct FTakeMovieSceneHitchTimecodeCurves
{
public:
    std::uint8_t HoursCurve[0xC8]; // 0x0000 (Size: 0xC8, Type: StructProperty)
    std::uint8_t MinutesCurve[0xC8]; // 0x00C8 (Size: 0xC8, Type: StructProperty)
    std::uint8_t SecondsCurve[0xC8]; // 0x0190 (Size: 0xC8, Type: StructProperty)
    std::uint8_t FramesCurve[0x1]; // 0x0258 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTakeMovieSceneHitchTimecodeCurves, HoursCurve) == 0, "Offset mismatch for FTakeMovieSceneHitchTimecodeCurves::HoursCurve");
static_assert(offsetof(FTakeMovieSceneHitchTimecodeCurves, MinutesCurve) == 200, "Offset mismatch for FTakeMovieSceneHitchTimecodeCurves::MinutesCurve");
static_assert(offsetof(FTakeMovieSceneHitchTimecodeCurves, SecondsCurve) == 400, "Offset mismatch for FTakeMovieSceneHitchTimecodeCurves::SecondsCurve");
static_assert(offsetof(FTakeMovieSceneHitchTimecodeCurves, FramesCurve) == 600, "Offset mismatch for FTakeMovieSceneHitchTimecodeCurves::FramesCurve");

// /Script/TakeMovieScene.FrameHitchSceneDecoration
// Kind: Class; super: Object
class UFrameHitchSceneDecoration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TargetTimecode[0x320]; // 0x0028 (Size: 0x320, Type: StructProperty)
    std::uint8_t ActualTimecode[0x320]; // 0x0348 (Size: 0x320, Type: StructProperty)
    std::uint8_t TimecodeProviderFrameRate[0x8]; // 0x0668 (Size: 0x8, Type: StructProperty)
    std::uint8_t RecordFrameRate[0x1]; // 0x0670 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFrameHitchSceneDecoration, TargetTimecode) == 40, "Offset mismatch for UFrameHitchSceneDecoration::TargetTimecode");
static_assert(offsetof(UFrameHitchSceneDecoration, ActualTimecode) == 840, "Offset mismatch for UFrameHitchSceneDecoration::ActualTimecode");
static_assert(offsetof(UFrameHitchSceneDecoration, TimecodeProviderFrameRate) == 1640, "Offset mismatch for UFrameHitchSceneDecoration::TimecodeProviderFrameRate");
static_assert(offsetof(UFrameHitchSceneDecoration, RecordFrameRate) == 1648, "Offset mismatch for UFrameHitchSceneDecoration::RecordFrameRate");

// /Script/TakeMovieScene.MovieSceneTakeSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneTakeSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t HoursCurve[0xC8]; // 0x0140 (Size: 0xC8, Type: StructProperty)
    std::uint8_t MinutesCurve[0xC8]; // 0x0208 (Size: 0xC8, Type: StructProperty)
    std::uint8_t SecondsCurve[0xC8]; // 0x02D0 (Size: 0xC8, Type: StructProperty)
    std::uint8_t FramesCurve[0xC8]; // 0x0398 (Size: 0xC8, Type: StructProperty)
    std::uint8_t SubFramesCurve[0xD0]; // 0x0460 (Size: 0xD0, Type: StructProperty)
    std::uint8_t RateCurve[0xD0]; // 0x0530 (Size: 0xD0, Type: StructProperty)
    std::uint8_t Slate[0x1]; // 0x0600 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneTakeSection, HoursCurve) == 320, "Offset mismatch for UMovieSceneTakeSection::HoursCurve");
static_assert(offsetof(UMovieSceneTakeSection, MinutesCurve) == 520, "Offset mismatch for UMovieSceneTakeSection::MinutesCurve");
static_assert(offsetof(UMovieSceneTakeSection, SecondsCurve) == 720, "Offset mismatch for UMovieSceneTakeSection::SecondsCurve");
static_assert(offsetof(UMovieSceneTakeSection, FramesCurve) == 920, "Offset mismatch for UMovieSceneTakeSection::FramesCurve");
static_assert(offsetof(UMovieSceneTakeSection, SubFramesCurve) == 1120, "Offset mismatch for UMovieSceneTakeSection::SubFramesCurve");
static_assert(offsetof(UMovieSceneTakeSection, RateCurve) == 1328, "Offset mismatch for UMovieSceneTakeSection::RateCurve");
static_assert(offsetof(UMovieSceneTakeSection, Slate) == 1536, "Offset mismatch for UMovieSceneTakeSection::Slate");

// /Script/TakeMovieScene.MovieSceneTakeSettings
// Kind: Class; super: Object
class UMovieSceneTakeSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString HoursName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString MinutesName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString SecondsName; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString FramesName; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString SubFramesName; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString RateName; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString SlateName; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMovieSceneTakeSettings, HoursName) == 40, "Offset mismatch for UMovieSceneTakeSettings::HoursName");
static_assert(offsetof(UMovieSceneTakeSettings, MinutesName) == 56, "Offset mismatch for UMovieSceneTakeSettings::MinutesName");
static_assert(offsetof(UMovieSceneTakeSettings, SecondsName) == 72, "Offset mismatch for UMovieSceneTakeSettings::SecondsName");
static_assert(offsetof(UMovieSceneTakeSettings, FramesName) == 88, "Offset mismatch for UMovieSceneTakeSettings::FramesName");
static_assert(offsetof(UMovieSceneTakeSettings, SubFramesName) == 104, "Offset mismatch for UMovieSceneTakeSettings::SubFramesName");
static_assert(offsetof(UMovieSceneTakeSettings, RateName) == 120, "Offset mismatch for UMovieSceneTakeSettings::RateName");
static_assert(offsetof(UMovieSceneTakeSettings, SlateName) == 136, "Offset mismatch for UMovieSceneTakeSettings::SlateName");

// /Script/TakeMovieScene.MovieSceneTakeTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneTakeTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneTakeTrack, Sections) == 248, "Offset mismatch for UMovieSceneTakeTrack::Sections");
