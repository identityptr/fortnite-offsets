/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimProVocalsLyricsUI
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimProVocalsLyricsUI.PilgrimProVocalsLyricColorSet
// Kind: ScriptStruct; super: none
struct FPilgrimProVocalsLyricColorSet
{
public:
    std::uint8_t Future[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t Current[0x14]; // 0x0014 (Size: 0x14, Type: StructProperty)
    std::uint8_t Passed[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimProVocalsLyricColorSet, Future) == 0, "Offset mismatch for FPilgrimProVocalsLyricColorSet::Future");
static_assert(offsetof(FPilgrimProVocalsLyricColorSet, Current) == 20, "Offset mismatch for FPilgrimProVocalsLyricColorSet::Current");
static_assert(offsetof(FPilgrimProVocalsLyricColorSet, Passed) == 40, "Offset mismatch for FPilgrimProVocalsLyricColorSet::Passed");

// /Script/PilgrimProVocalsLyricsUI.PilgrimProVocalsRetiringSegMID
// Kind: ScriptStruct; super: none
struct FPilgrimProVocalsRetiringSegMID
{
public:
    void* MID; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPilgrimProVocalsRetiringSegMID, MID) == 0, "Offset mismatch for FPilgrimProVocalsRetiringSegMID::MID");

// /Script/PilgrimProVocalsLyricsUI.PilgrimProVocalsLyricWidgetBase
// Kind: Class; super: UserWidget
class UPilgrimProVocalsLyricWidgetBase
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t TalkieFont[0x58]; // 0x0308 (Size: 0x58, Type: StructProperty)
    std::uint8_t LyricFont[0x58]; // 0x0360 (Size: 0x58, Type: StructProperty)
    std::uint8_t StandardColors[0x3C]; // 0x03B8 (Size: 0x3C, Type: StructProperty)
    std::uint8_t OverdriveColors[0x1]; // 0x03F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimProVocalsLyricWidgetBase, TalkieFont) == 776, "Offset mismatch for UPilgrimProVocalsLyricWidgetBase::TalkieFont");
static_assert(offsetof(UPilgrimProVocalsLyricWidgetBase, LyricFont) == 864, "Offset mismatch for UPilgrimProVocalsLyricWidgetBase::LyricFont");
static_assert(offsetof(UPilgrimProVocalsLyricWidgetBase, StandardColors) == 952, "Offset mismatch for UPilgrimProVocalsLyricWidgetBase::StandardColors");
static_assert(offsetof(UPilgrimProVocalsLyricWidgetBase, OverdriveColors) == 1012, "Offset mismatch for UPilgrimProVocalsLyricWidgetBase::OverdriveColors");

// /Script/PilgrimProVocalsLyricsUI.PilgrimProVocalsLyricsViewWidgetBase
// Kind: Class; super: UserWidget
class UPilgrimProVocalsLyricsViewWidgetBase
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* SongData; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimProVocalsLyricsViewWidgetBase, SongData) == 816, "Offset mismatch for UPilgrimProVocalsLyricsViewWidgetBase::SongData");

// /Script/PilgrimProVocalsLyricsUI.PilgrimProVocalsScrollingLyricWidget
// Kind: Class; super: PilgrimProVocalsLyricWidgetBase
class UPilgrimProVocalsScrollingLyricWidget
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t TalkieFont[0x58]; // 0x0308 (Size: 0x58, Type: StructProperty)
    std::uint8_t LyricFont[0x58]; // 0x0360 (Size: 0x58, Type: StructProperty)
    std::uint8_t StandardColors[0x3C]; // 0x03B8 (Size: 0x3C, Type: StructProperty)
    std::uint8_t OverdriveColors[0x1]; // 0x03F4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimProVocalsScrollingLyricWidget, TalkieFont) == 776, "Offset mismatch for UPilgrimProVocalsScrollingLyricWidget::TalkieFont");
static_assert(offsetof(UPilgrimProVocalsScrollingLyricWidget, LyricFont) == 864, "Offset mismatch for UPilgrimProVocalsScrollingLyricWidget::LyricFont");
static_assert(offsetof(UPilgrimProVocalsScrollingLyricWidget, StandardColors) == 952, "Offset mismatch for UPilgrimProVocalsScrollingLyricWidget::StandardColors");
static_assert(offsetof(UPilgrimProVocalsScrollingLyricWidget, OverdriveColors) == 1012, "Offset mismatch for UPilgrimProVocalsScrollingLyricWidget::OverdriveColors");

// /Script/PilgrimProVocalsLyricsUI.PilgrimProVocalsScrollingLyricsViewWidget
// Kind: Class; super: PilgrimProVocalsLyricsViewWidgetBase
class UPilgrimProVocalsScrollingLyricsViewWidget
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* LyricTemplate; // 0x0338 (Size: 0x8, Type: ClassProperty)
    std::uint8_t OverdriveDeploySectionBrush[0xB8]; // 0x0340 (Size: 0xB8, Type: StructProperty)
    TMap<void*, void*> LyricWidgets; // 0x03F8 (Size: 0x10, Type: MapProperty)
    TArray<void*> LyricPool; // 0x0408 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimProVocalsScrollingLyricsViewWidget, LyricTemplate) == 824, "Offset mismatch for UPilgrimProVocalsScrollingLyricsViewWidget::LyricTemplate");
static_assert(offsetof(UPilgrimProVocalsScrollingLyricsViewWidget, OverdriveDeploySectionBrush) == 832, "Offset mismatch for UPilgrimProVocalsScrollingLyricsViewWidget::OverdriveDeploySectionBrush");
static_assert(offsetof(UPilgrimProVocalsScrollingLyricsViewWidget, LyricWidgets) == 1016, "Offset mismatch for UPilgrimProVocalsScrollingLyricsViewWidget::LyricWidgets");
static_assert(offsetof(UPilgrimProVocalsScrollingLyricsViewWidget, LyricPool) == 1032, "Offset mismatch for UPilgrimProVocalsScrollingLyricsViewWidget::LyricPool");

// /Script/PilgrimProVocalsLyricsUI.PilgrimProVocalsStaticLyricsViewWidget
// Kind: Class; super: PilgrimProVocalsLyricsViewWidgetBase
class UPilgrimProVocalsStaticLyricsViewWidget
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t CountInBrush[0xB0]; // 0x0340 (Size: 0xB0, Type: StructProperty)
    std::uint8_t CountInProgressParameter[0x4]; // 0x03F0 (Size: 0x4, Type: NameProperty)
    float CountInLyricGapPx; // 0x03F4 (Size: 0x4, Type: FloatProperty)
    float PhraseRowGapPx; // 0x03F8 (Size: 0x4, Type: FloatProperty)
    float SungToTalkieSeamNudgePx; // 0x03FC (Size: 0x4, Type: FloatProperty)
    float TalkieToSungSeamNudgePx; // 0x0400 (Size: 0x4, Type: FloatProperty)
    float FutureLyricFontSize; // 0x0404 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SungFont[0x58]; // 0x0408 (Size: 0x58, Type: StructProperty)
    std::uint8_t TalkieFont[0x58]; // 0x0460 (Size: 0x58, Type: StructProperty)
    std::uint8_t StandardColors[0x3C]; // 0x04B8 (Size: 0x3C, Type: StructProperty)
    std::uint8_t OverdriveColors[0x3C]; // 0x04F4 (Size: 0x3C, Type: StructProperty)
    void* LyricsFontMaterial; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SweepFractionParameter[0x4]; // 0x0538 (Size: 0x4, Type: NameProperty)
    std::uint8_t PastColorParameter[0x4]; // 0x053C (Size: 0x4, Type: NameProperty)
    std::uint8_t CurrentColorParameter[0x4]; // 0x0540 (Size: 0x4, Type: NameProperty)
    float PhraseAdvanceDurationSeconds; // 0x0544 (Size: 0x4, Type: FloatProperty)
    void* PhraseAdvanceColorCurve; // 0x0548 (Size: 0x8, Type: ObjectProperty)
    void* PhraseAdvanceSizeCurve; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    void* PhraseAdvanceYOffsetCurve; // 0x0558 (Size: 0x8, Type: ObjectProperty)
    float PhraseAdvanceFadeOutDurationSeconds; // 0x0560 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0564
    void* PhraseAdvanceFadeOutCurve; // 0x0568 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0570
    void* CountInMID; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SegMIDs; // 0x0588 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RetiringSegMIDs; // 0x0598 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, CountInBrush) == 832, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::CountInBrush");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, CountInProgressParameter) == 1008, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::CountInProgressParameter");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, CountInLyricGapPx) == 1012, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::CountInLyricGapPx");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, PhraseRowGapPx) == 1016, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::PhraseRowGapPx");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, SungToTalkieSeamNudgePx) == 1020, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::SungToTalkieSeamNudgePx");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, TalkieToSungSeamNudgePx) == 1024, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::TalkieToSungSeamNudgePx");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, FutureLyricFontSize) == 1028, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::FutureLyricFontSize");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, SungFont) == 1032, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::SungFont");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, TalkieFont) == 1120, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::TalkieFont");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, StandardColors) == 1208, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::StandardColors");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, OverdriveColors) == 1268, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::OverdriveColors");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, LyricsFontMaterial) == 1328, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::LyricsFontMaterial");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, SweepFractionParameter) == 1336, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::SweepFractionParameter");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, PastColorParameter) == 1340, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::PastColorParameter");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, CurrentColorParameter) == 1344, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::CurrentColorParameter");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, PhraseAdvanceDurationSeconds) == 1348, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::PhraseAdvanceDurationSeconds");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, PhraseAdvanceColorCurve) == 1352, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::PhraseAdvanceColorCurve");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, PhraseAdvanceSizeCurve) == 1360, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::PhraseAdvanceSizeCurve");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, PhraseAdvanceYOffsetCurve) == 1368, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::PhraseAdvanceYOffsetCurve");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, PhraseAdvanceFadeOutDurationSeconds) == 1376, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::PhraseAdvanceFadeOutDurationSeconds");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, PhraseAdvanceFadeOutCurve) == 1384, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::PhraseAdvanceFadeOutCurve");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, CountInMID) == 1408, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::CountInMID");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, SegMIDs) == 1416, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::SegMIDs");
static_assert(offsetof(UPilgrimProVocalsStaticLyricsViewWidget, RetiringSegMIDs) == 1432, "Offset mismatch for UPilgrimProVocalsStaticLyricsViewWidget::RetiringSegMIDs");
