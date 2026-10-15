/**
 * decamp dumper generated SDK
 * Package: /Script/SubtitlesWidgets
 */
#pragma once
#include "Basic.h"

// /Script/SubtitlesWidgets.SubtitleFormat
// Kind: ScriptStruct; super: none
struct FSubtitleFormat
{
public:
    std::uint8_t SubtitleTextSize; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SubtitleTextColor; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SubtitleTextBorder; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SubtitleBackgroundOpacity; // 0x0003 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSubtitleFormat, SubtitleTextSize) == 0, "Offset mismatch for FSubtitleFormat::SubtitleTextSize");
static_assert(offsetof(FSubtitleFormat, SubtitleTextColor) == 1, "Offset mismatch for FSubtitleFormat::SubtitleTextColor");
static_assert(offsetof(FSubtitleFormat, SubtitleTextBorder) == 2, "Offset mismatch for FSubtitleFormat::SubtitleTextBorder");
static_assert(offsetof(FSubtitleFormat, SubtitleBackgroundOpacity) == 3, "Offset mismatch for FSubtitleFormat::SubtitleBackgroundOpacity");

// /Script/SubtitlesWidgets.SubtitleWidgetPriorityData
// Kind: ScriptStruct; super: none
struct FSubtitleWidgetPriorityData
{
public:
    void* SubtitleWidget; // 0x0000 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSubtitleWidgetPriorityData, SubtitleWidget) == 0, "Offset mismatch for FSubtitleWidgetPriorityData::SubtitleWidget");

// /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer
// Kind: Class; super: Object
class UFortMediaSubtitlesPlayer
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* SourceSubtitles; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x68]; // 0x0038
    std::uint8_t CurrentSubtitleData[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMediaSubtitlesPlayer, SourceSubtitles) == 48, "Offset mismatch for UFortMediaSubtitlesPlayer::SourceSubtitles");
static_assert(offsetof(UFortMediaSubtitlesPlayer, CurrentSubtitleData) == 160, "Offset mismatch for UFortMediaSubtitlesPlayer::CurrentSubtitleData");

// /Script/SubtitlesWidgets.FortSubtitleWidget
// Kind: Class; super: SubtitleWidget
class UFortSubtitleWidget
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t Format[0x8]; // 0x0348 (Size: 0x8, Type: StructProperty)
    void* Options; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSubtitleWidget, Format) == 840, "Offset mismatch for UFortSubtitleWidget::Format");
static_assert(offsetof(UFortSubtitleWidget, Options) == 848, "Offset mismatch for UFortSubtitleWidget::Options");

// /Script/SubtitlesWidgets.GameFeatureAction_ReplaceSubtitleWidget
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_ReplaceSubtitleWidget
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SubtitleWidget[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint32_t Priority; // 0x0048 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    void* LoadedWidget; // 0x0050 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UGameFeatureAction_ReplaceSubtitleWidget, SubtitleWidget) == 40, "Offset mismatch for UGameFeatureAction_ReplaceSubtitleWidget::SubtitleWidget");
static_assert(offsetof(UGameFeatureAction_ReplaceSubtitleWidget, Priority) == 72, "Offset mismatch for UGameFeatureAction_ReplaceSubtitleWidget::Priority");
static_assert(offsetof(UGameFeatureAction_ReplaceSubtitleWidget, LoadedWidget) == 80, "Offset mismatch for UGameFeatureAction_ReplaceSubtitleWidget::LoadedWidget");

// /Script/SubtitlesWidgets.SubtitleDisplay
// Kind: Class; super: Widget
class USubtitleDisplay
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t Format[0x8]; // 0x0168 (Size: 0x8, Type: StructProperty)
    void* Options; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    float WrapTextAt; // 0x0178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreviewMode; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x017D
    std::uint8_t PreviewText[0x10]; // 0x0180 (Size: 0x10, Type: TextProperty)
    std::uint8_t GeneratedStyle[0x2E0]; // 0x0190 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t GeneratedBackgroundBorder[0x1]; // 0x0470 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubtitleDisplay, Format) == 360, "Offset mismatch for USubtitleDisplay::Format");
static_assert(offsetof(USubtitleDisplay, Options) == 368, "Offset mismatch for USubtitleDisplay::Options");
static_assert(offsetof(USubtitleDisplay, WrapTextAt) == 376, "Offset mismatch for USubtitleDisplay::WrapTextAt");
static_assert(offsetof(USubtitleDisplay, bPreviewMode) == 380, "Offset mismatch for USubtitleDisplay::bPreviewMode");
static_assert(offsetof(USubtitleDisplay, PreviewText) == 384, "Offset mismatch for USubtitleDisplay::PreviewText");
static_assert(offsetof(USubtitleDisplay, GeneratedStyle) == 400, "Offset mismatch for USubtitleDisplay::GeneratedStyle");
static_assert(offsetof(USubtitleDisplay, GeneratedBackgroundBorder) == 1136, "Offset mismatch for USubtitleDisplay::GeneratedBackgroundBorder");

// /Script/SubtitlesWidgets.SubtitleDisplayNative
// Kind: Class; super: Object
class USubtitleDisplayNative
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Options; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0038
    std::uint8_t GeneratedStyle[0x2E0]; // 0x0040 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t GeneratedBackgroundBorder[0x1]; // 0x0320 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubtitleDisplayNative, Options) == 48, "Offset mismatch for USubtitleDisplayNative::Options");
static_assert(offsetof(USubtitleDisplayNative, GeneratedStyle) == 64, "Offset mismatch for USubtitleDisplayNative::GeneratedStyle");
static_assert(offsetof(USubtitleDisplayNative, GeneratedBackgroundBorder) == 800, "Offset mismatch for USubtitleDisplayNative::GeneratedBackgroundBorder");

// /Script/SubtitlesWidgets.SubtitleDisplayOptions
// Kind: Class; super: DataAsset
class USubtitleDisplayOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Font[0x58]; // 0x0028 (Size: 0x58, Type: StructProperty)
    std::int32_t DisplayTextSizes; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0084
    std::uint8_t DisplayTextColors[0x20]; // 0x0094 (Size: 0x20, Type: StructProperty)
    float DisplayBorderSize; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00B8
    float DisplayBackgroundOpacity; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x1C]; // 0x00C4
    std::uint8_t BackgroundBrush[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubtitleDisplayOptions, Font) == 40, "Offset mismatch for USubtitleDisplayOptions::Font");
static_assert(offsetof(USubtitleDisplayOptions, DisplayTextSizes) == 128, "Offset mismatch for USubtitleDisplayOptions::DisplayTextSizes");
static_assert(offsetof(USubtitleDisplayOptions, DisplayTextColors) == 148, "Offset mismatch for USubtitleDisplayOptions::DisplayTextColors");
static_assert(offsetof(USubtitleDisplayOptions, DisplayBorderSize) == 180, "Offset mismatch for USubtitleDisplayOptions::DisplayBorderSize");
static_assert(offsetof(USubtitleDisplayOptions, DisplayBackgroundOpacity) == 192, "Offset mismatch for USubtitleDisplayOptions::DisplayBackgroundOpacity");
static_assert(offsetof(USubtitleDisplayOptions, BackgroundBrush) == 224, "Offset mismatch for USubtitleDisplayOptions::BackgroundBrush");

// /Script/SubtitlesWidgets.SubtitleDisplaySubsystem
// Kind: Class; super: GameInstanceSubsystem
class USubtitleDisplaySubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t SubtitleFormat[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USubtitleDisplaySubsystem, SubtitleFormat) == 72, "Offset mismatch for USubtitleDisplaySubsystem::SubtitleFormat");

// /Script/SubtitlesWidgets.SubtitleWidgetPrioritySubsystem
// Kind: Class; super: WorldSubsystem
class USubtitleWidgetPrioritySubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> SubtitleWidgetData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USubtitleWidgetPrioritySubsystem, SubtitleWidgetData) == 56, "Offset mismatch for USubtitleWidgetPrioritySubsystem::SubtitleWidgetData");
