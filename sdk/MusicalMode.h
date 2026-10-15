/**
 * decamp dumper generated SDK
 * Package: /Script/MusicalMode
 */
#pragma once
#include "Basic.h"

// /Script/MusicalMode.MovieSceneMusicTimeTransform
// Kind: Class; super: MovieSceneTimeWarpGetter
class UMovieSceneMusicTimeTransform
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TWeakObjectPtr<void> OuterClock; // 0x0070 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> InnerClock; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMovieSceneMusicTimeTransform, OuterClock) == 112, "Offset mismatch for UMovieSceneMusicTimeTransform::OuterClock");
static_assert(offsetof(UMovieSceneMusicTimeTransform, InnerClock) == 120, "Offset mismatch for UMovieSceneMusicTimeTransform::InnerClock");

// /Script/MusicalMode.MovieSceneMusicalClock
// Kind: Class; super: MovieSceneClock
class UMovieSceneMusicalClock
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* MusicMap; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> MusicalAsset; // 0x0060 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t ClockLocator[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClockTag[0x4]; // 0x0080 (Size: 0x4, Type: StructProperty)
    std::uint8_t ClockTagExactMatch; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RegisterAsGlobalAuthoritativeClock; // 0x0085 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayFramesAsBarsBeats; // 0x0086 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClockSourceType; // 0x0087 (Size: 0x1, Type: EnumProperty)
    float AuditionTempo; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::int32_t SnappingInterval; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t bShouldSnapFrameTime; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldMuteMetronome; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0092
    float MetronomeVolumeSetting; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CaptureMode; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::int32_t MappingQuantizationUnit; // 0x009C (Size: 0x4, Type: IntProperty)
    std::uint8_t TimeSignatureRemapping; // 0x00A0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneMusicalClock, MusicMap) == 88, "Offset mismatch for UMovieSceneMusicalClock::MusicMap");
static_assert(offsetof(UMovieSceneMusicalClock, MusicalAsset) == 96, "Offset mismatch for UMovieSceneMusicalClock::MusicalAsset");
static_assert(offsetof(UMovieSceneMusicalClock, ClockLocator) == 112, "Offset mismatch for UMovieSceneMusicalClock::ClockLocator");
static_assert(offsetof(UMovieSceneMusicalClock, ClockTag) == 128, "Offset mismatch for UMovieSceneMusicalClock::ClockTag");
static_assert(offsetof(UMovieSceneMusicalClock, ClockTagExactMatch) == 132, "Offset mismatch for UMovieSceneMusicalClock::ClockTagExactMatch");
static_assert(offsetof(UMovieSceneMusicalClock, RegisterAsGlobalAuthoritativeClock) == 133, "Offset mismatch for UMovieSceneMusicalClock::RegisterAsGlobalAuthoritativeClock");
static_assert(offsetof(UMovieSceneMusicalClock, bDisplayFramesAsBarsBeats) == 134, "Offset mismatch for UMovieSceneMusicalClock::bDisplayFramesAsBarsBeats");
static_assert(offsetof(UMovieSceneMusicalClock, ClockSourceType) == 135, "Offset mismatch for UMovieSceneMusicalClock::ClockSourceType");
static_assert(offsetof(UMovieSceneMusicalClock, AuditionTempo) == 136, "Offset mismatch for UMovieSceneMusicalClock::AuditionTempo");
static_assert(offsetof(UMovieSceneMusicalClock, SnappingInterval) == 140, "Offset mismatch for UMovieSceneMusicalClock::SnappingInterval");
static_assert(offsetof(UMovieSceneMusicalClock, bShouldSnapFrameTime) == 144, "Offset mismatch for UMovieSceneMusicalClock::bShouldSnapFrameTime");
static_assert(offsetof(UMovieSceneMusicalClock, bShouldMuteMetronome) == 145, "Offset mismatch for UMovieSceneMusicalClock::bShouldMuteMetronome");
static_assert(offsetof(UMovieSceneMusicalClock, MetronomeVolumeSetting) == 148, "Offset mismatch for UMovieSceneMusicalClock::MetronomeVolumeSetting");
static_assert(offsetof(UMovieSceneMusicalClock, CaptureMode) == 152, "Offset mismatch for UMovieSceneMusicalClock::CaptureMode");
static_assert(offsetof(UMovieSceneMusicalClock, MappingQuantizationUnit) == 156, "Offset mismatch for UMovieSceneMusicalClock::MappingQuantizationUnit");
static_assert(offsetof(UMovieSceneMusicalClock, TimeSignatureRemapping) == 160, "Offset mismatch for UMovieSceneMusicalClock::TimeSignatureRemapping");
