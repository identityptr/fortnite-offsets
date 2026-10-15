/**
 * decamp dumper generated SDK
 * Package: /Script/SubtitlesAndClosedCaptions
 */
#pragma once
#include "Basic.h"

// /Script/SubtitlesAndClosedCaptions.ActiveSubtitleAssetData
// Kind: ScriptStruct; super: none
struct FActiveSubtitleAssetData
{
public:
    std::uint8_t Subtitle[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FActiveSubtitleAssetData, Subtitle) == 0, "Offset mismatch for FActiveSubtitleAssetData::Subtitle");

// /Script/SubtitlesAndClosedCaptions.SubtitleDataComponent
// Kind: ScriptStruct; super: none
struct FSubtitleDataComponent
{
public:
    void* SubtitleSection; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSubtitleDataComponent, SubtitleSection) == 0, "Offset mismatch for FSubtitleDataComponent::SubtitleSection");

// /Script/SubtitlesAndClosedCaptions.MovieSceneSubtitleSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneSubtitleSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    void* SubtitleAsset; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSubtitleSection, SubtitleAsset) == 328, "Offset mismatch for UMovieSceneSubtitleSection::SubtitleAsset");

// /Script/SubtitlesAndClosedCaptions.MovieSceneSubtitlesSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneSubtitlesSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSubtitlesSystem, Linker) == 40, "Offset mismatch for UMovieSceneSubtitlesSystem::Linker");

// /Script/SubtitlesAndClosedCaptions.MovieSceneSubtitlesTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneSubtitlesTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> SubtitleSections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneSubtitlesTrack, SubtitleSections) == 248, "Offset mismatch for UMovieSceneSubtitlesTrack::SubtitleSections");

// /Script/SubtitlesAndClosedCaptions.SubtitleWidget
// Kind: Class; super: UserWidget
class USubtitleWidget
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    void* DialogSubtitleBlock; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* CaptionSubtitleBlock; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* DescriptionSubtitleBlock; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* DialogBorder; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* CaptionBorder; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* DescriptionBorder; // 0x0340 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USubtitleWidget, DialogSubtitleBlock) == 792, "Offset mismatch for USubtitleWidget::DialogSubtitleBlock");
static_assert(offsetof(USubtitleWidget, CaptionSubtitleBlock) == 800, "Offset mismatch for USubtitleWidget::CaptionSubtitleBlock");
static_assert(offsetof(USubtitleWidget, DescriptionSubtitleBlock) == 808, "Offset mismatch for USubtitleWidget::DescriptionSubtitleBlock");
static_assert(offsetof(USubtitleWidget, DialogBorder) == 816, "Offset mismatch for USubtitleWidget::DialogBorder");
static_assert(offsetof(USubtitleWidget, CaptionBorder) == 824, "Offset mismatch for USubtitleWidget::CaptionBorder");
static_assert(offsetof(USubtitleWidget, DescriptionBorder) == 832, "Offset mismatch for USubtitleWidget::DescriptionBorder");

// /Script/SubtitlesAndClosedCaptions.SubtitlesAudioSubsystem
// Kind: Class; super: AudioEngineSubsystem
class USubtitlesAudioSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubtitlesAndClosedCaptions.SubtitlesBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USubtitlesBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SubtitlesAndClosedCaptions.SubtitlesSettings
// Kind: Class; super: DeveloperSettings
class USubtitlesSettings
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t SubtitleWidgetToUse[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> SubtitleWidgetToUseDefault; // 0x0060 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(USubtitlesSettings, SubtitleWidgetToUse) == 64, "Offset mismatch for USubtitlesSettings::SubtitleWidgetToUse");
static_assert(offsetof(USubtitlesSettings, SubtitleWidgetToUseDefault) == 96, "Offset mismatch for USubtitlesSettings::SubtitleWidgetToUseDefault");

// /Script/SubtitlesAndClosedCaptions.SubtitlesSubsystem
// Kind: Class; super: WorldSubsystem
class USubtitlesSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> SubtitleFontInfo; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> ActiveSubtitles; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DelayedSubtitles; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* ViewportWidget; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USubtitlesSubsystem, SubtitleFontInfo) == 56, "Offset mismatch for USubtitlesSubsystem::SubtitleFontInfo");
static_assert(offsetof(USubtitlesSubsystem, ActiveSubtitles) == 72, "Offset mismatch for USubtitlesSubsystem::ActiveSubtitles");
static_assert(offsetof(USubtitlesSubsystem, DelayedSubtitles) == 88, "Offset mismatch for USubtitlesSubsystem::DelayedSubtitles");
static_assert(offsetof(USubtitlesSubsystem, ViewportWidget) == 104, "Offset mismatch for USubtitlesSubsystem::ViewportWidget");
