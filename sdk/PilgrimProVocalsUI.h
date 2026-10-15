/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimProVocalsUI
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimProVocalsUI.PilgrimAspectRatio
// Kind: ScriptStruct; super: none
struct FPilgrimAspectRatio
{
public:
    std::int32_t Width; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Height; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPilgrimAspectRatio, Width) == 0, "Offset mismatch for FPilgrimAspectRatio::Width");
static_assert(offsetof(FPilgrimAspectRatio, Height) == 4, "Offset mismatch for FPilgrimAspectRatio::Height");

// /Script/PilgrimProVocalsUI.PilgrimNowBarAspectEntry
// Kind: ScriptStruct; super: none
struct FPilgrimNowBarAspectEntry
{
public:
    std::uint8_t AspectRatio[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float NowBarScreenPercentage; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPilgrimNowBarAspectEntry, AspectRatio) == 0, "Offset mismatch for FPilgrimNowBarAspectEntry::AspectRatio");
static_assert(offsetof(FPilgrimNowBarAspectEntry, NowBarScreenPercentage) == 8, "Offset mismatch for FPilgrimNowBarAspectEntry::NowBarScreenPercentage");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsAccuracyVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimProVocalsAccuracyVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t SectionRatingText[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t SectionRatingType; // 0x00A0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPilgrimProVocalsAccuracyVM, SectionRatingText) == 144, "Offset mismatch for UPilgrimProVocalsAccuracyVM::SectionRatingText");
static_assert(offsetof(UPilgrimProVocalsAccuracyVM, SectionRatingType) == 160, "Offset mismatch for UPilgrimProVocalsAccuracyVM::SectionRatingType");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsNoteTubeVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimProVocalsNoteTubeVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float NoteTubeSdfFill; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float NoteTubeThicknessPixels; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float NoteTubeMarginThickness; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float NoteTubeBodyIntensity; // 0x009C (Size: 0x4, Type: FloatProperty)
    float NoteTubeGlowIntensity; // 0x00A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimProVocalsNoteTubeVM, NoteTubeSdfFill) == 144, "Offset mismatch for UPilgrimProVocalsNoteTubeVM::NoteTubeSdfFill");
static_assert(offsetof(UPilgrimProVocalsNoteTubeVM, NoteTubeThicknessPixels) == 148, "Offset mismatch for UPilgrimProVocalsNoteTubeVM::NoteTubeThicknessPixels");
static_assert(offsetof(UPilgrimProVocalsNoteTubeVM, NoteTubeMarginThickness) == 152, "Offset mismatch for UPilgrimProVocalsNoteTubeVM::NoteTubeMarginThickness");
static_assert(offsetof(UPilgrimProVocalsNoteTubeVM, NoteTubeBodyIntensity) == 156, "Offset mismatch for UPilgrimProVocalsNoteTubeVM::NoteTubeBodyIntensity");
static_assert(offsetof(UPilgrimProVocalsNoteTubeVM, NoteTubeGlowIntensity) == 160, "Offset mismatch for UPilgrimProVocalsNoteTubeVM::NoteTubeGlowIntensity");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsNoteTubesWidget
// Kind: Class; super: Widget
class UPilgrimProVocalsNoteTubesWidget
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    void* NoteTubeMaterial; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    void* DynamicNoteTubeMaterial; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    void* SongData; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0180
    float NoteTubeSdfFill; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NoteTubeSdfFillParameterName[0x4]; // 0x0194 (Size: 0x4, Type: NameProperty)
    float NoteTubeBodyIntensity; // 0x0198 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NoteTubeBodyIntensityParameterName[0x4]; // 0x019C (Size: 0x4, Type: NameProperty)
    float NoteTubeGlowIntensity; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NoteTubeGlowIntensityParameterName[0x4]; // 0x01A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t WidgetSizeParameterName[0x4]; // 0x01A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t WidgetMatrixParameterName[0x4]; // 0x01AC (Size: 0x4, Type: NameProperty)
    std::uint8_t WidgetTranslationParameterName[0x4]; // 0x01B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t WidgetColorAndOpacityTintParameterName[0x4]; // 0x01B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t WidgetForegroundColorParameterName[0x4]; // 0x01B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t WidgetSubduedForegroundColorParameterName[0x4]; // 0x01BC (Size: 0x4, Type: NameProperty)
    float TalkieThicknessOverride; // 0x01C0 (Size: 0x4, Type: FloatProperty)
    float TalkieVerticalCenter; // 0x01C4 (Size: 0x4, Type: FloatProperty)
    float TalkieFrontThresholdMargin; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    float TalkieEndThresholdMargin; // 0x01CC (Size: 0x4, Type: FloatProperty)
    float TalkieLeftMargin; // 0x01D0 (Size: 0x4, Type: FloatProperty)
    float TalkieTopMargin; // 0x01D4 (Size: 0x4, Type: FloatProperty)
    float TalkieRightMargin; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float TalkieBottomMargin; // 0x01DC (Size: 0x4, Type: FloatProperty)
    float TalkieLeftTexCoord; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    float TalkieTopTexCoord; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    float TalkieRightTexCoord; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    float TalkieBottomTexCoord; // 0x01EC (Size: 0x4, Type: FloatProperty)
    float NoteTubeThicknessOverride; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float NoteTubeFrontThresholdMarginThicknessFraction; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    float NoteTubeEndThresholdMarginThicknessFraction; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    float NoteTubeFrontCapMarginThicknessFraction; // 0x01FC (Size: 0x4, Type: FloatProperty)
    float NoteTubeEndCapMarginThicknessFraction; // 0x0200 (Size: 0x4, Type: FloatProperty)
    float NoteTubeFrontCapTexCoord; // 0x0204 (Size: 0x4, Type: FloatProperty)
    float NoteTubeEndCapTexCoord; // 0x0208 (Size: 0x4, Type: FloatProperty)
    float NoteTubeTransitionStartMarginThicknessFraction; // 0x020C (Size: 0x4, Type: FloatProperty)
    float NoteTubeTransitionEndMarginThicknessFraction; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float NowBarOffsetSeconds; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float ViewWidthSeconds; // 0x0218 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeMaterial) == 360, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeMaterial");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, DynamicNoteTubeMaterial) == 368, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::DynamicNoteTubeMaterial");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, SongData) == 376, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::SongData");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeSdfFill) == 400, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeSdfFill");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeSdfFillParameterName) == 404, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeSdfFillParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeBodyIntensity) == 408, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeBodyIntensity");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeBodyIntensityParameterName) == 412, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeBodyIntensityParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeGlowIntensity) == 416, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeGlowIntensity");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeGlowIntensityParameterName) == 420, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeGlowIntensityParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, WidgetSizeParameterName) == 424, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::WidgetSizeParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, WidgetMatrixParameterName) == 428, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::WidgetMatrixParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, WidgetTranslationParameterName) == 432, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::WidgetTranslationParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, WidgetColorAndOpacityTintParameterName) == 436, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::WidgetColorAndOpacityTintParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, WidgetForegroundColorParameterName) == 440, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::WidgetForegroundColorParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, WidgetSubduedForegroundColorParameterName) == 444, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::WidgetSubduedForegroundColorParameterName");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieThicknessOverride) == 448, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieThicknessOverride");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieVerticalCenter) == 452, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieVerticalCenter");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieFrontThresholdMargin) == 456, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieFrontThresholdMargin");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieEndThresholdMargin) == 460, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieEndThresholdMargin");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieLeftMargin) == 464, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieLeftMargin");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieTopMargin) == 468, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieTopMargin");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieRightMargin) == 472, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieRightMargin");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieBottomMargin) == 476, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieBottomMargin");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieLeftTexCoord) == 480, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieLeftTexCoord");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieTopTexCoord) == 484, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieTopTexCoord");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieRightTexCoord) == 488, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieRightTexCoord");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, TalkieBottomTexCoord) == 492, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::TalkieBottomTexCoord");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeThicknessOverride) == 496, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeThicknessOverride");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeFrontThresholdMarginThicknessFraction) == 500, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeFrontThresholdMarginThicknessFraction");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeEndThresholdMarginThicknessFraction) == 504, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeEndThresholdMarginThicknessFraction");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeFrontCapMarginThicknessFraction) == 508, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeFrontCapMarginThicknessFraction");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeEndCapMarginThicknessFraction) == 512, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeEndCapMarginThicknessFraction");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeFrontCapTexCoord) == 516, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeFrontCapTexCoord");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeEndCapTexCoord) == 520, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeEndCapTexCoord");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeTransitionStartMarginThicknessFraction) == 524, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeTransitionStartMarginThicknessFraction");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NoteTubeTransitionEndMarginThicknessFraction) == 528, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NoteTubeTransitionEndMarginThicknessFraction");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, NowBarOffsetSeconds) == 532, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::NowBarOffsetSeconds");
static_assert(offsetof(UPilgrimProVocalsNoteTubesWidget, ViewWidthSeconds) == 536, "Offset mismatch for UPilgrimProVocalsNoteTubesWidget::ViewWidthSeconds");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsNowBarConfig
// Kind: Class; super: FortGameFeatureActionSingletonAsset
class UPilgrimProVocalsNowBarConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> AspectEntries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPilgrimProVocalsNowBarConfig, AspectEntries) == 40, "Offset mismatch for UPilgrimProVocalsNowBarConfig::AspectEntries");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsOverdriveVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimProVocalsOverdriveVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bIsOverdriveReady; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOverdriveActive; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOverdriveReadyAndActivateable; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0093
    float VisualOverdrive; // 0x0094 (Size: 0x4, Type: FloatProperty)
    void* CachedEvaluator; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimProVocalsOverdriveVM, bIsOverdriveReady) == 144, "Offset mismatch for UPilgrimProVocalsOverdriveVM::bIsOverdriveReady");
static_assert(offsetof(UPilgrimProVocalsOverdriveVM, bIsOverdriveActive) == 145, "Offset mismatch for UPilgrimProVocalsOverdriveVM::bIsOverdriveActive");
static_assert(offsetof(UPilgrimProVocalsOverdriveVM, bIsOverdriveReadyAndActivateable) == 146, "Offset mismatch for UPilgrimProVocalsOverdriveVM::bIsOverdriveReadyAndActivateable");
static_assert(offsetof(UPilgrimProVocalsOverdriveVM, VisualOverdrive) == 148, "Offset mismatch for UPilgrimProVocalsOverdriveVM::VisualOverdrive");
static_assert(offsetof(UPilgrimProVocalsOverdriveVM, CachedEvaluator) == 152, "Offset mismatch for UPilgrimProVocalsOverdriveVM::CachedEvaluator");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsParticlesWidget
// Kind: Class; super: UserWidget
class UPilgrimProVocalsParticlesWidget
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    std::uint8_t EmitterOrigin[0x30]; // 0x0310 (Size: 0x30, Type: StructProperty)
    void* NiagaraSystem; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* NiagaraComponent; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0350
    void* ParticleMaterial; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    float NormalizedAngle; // 0x0368 (Size: 0x4, Type: FloatProperty)
    float NormalizedYPos; // 0x036C (Size: 0x4, Type: FloatProperty)
    float PitchIndicatorOpacity; // 0x0370 (Size: 0x4, Type: FloatProperty)
    float NormalizedUserPerformance; // 0x0374 (Size: 0x4, Type: FloatProperty)
    float TimeWindowSeconds; // 0x0378 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x037C
    float SlateToWorldScale; // 0x0380 (Size: 0x4, Type: FloatProperty)
    float WorldToSlateScale; // 0x0384 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasSingingTarget; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSingingTargetNotePerfectly; // 0x0389 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUserSingingTalkie; // 0x038A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSingingInOverdrivePhrase; // 0x038B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInOverdrive; // 0x038C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPilgrimProVocalsParticlesWidget, EmitterOrigin) == 784, "Offset mismatch for UPilgrimProVocalsParticlesWidget::EmitterOrigin");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, NiagaraSystem) == 832, "Offset mismatch for UPilgrimProVocalsParticlesWidget::NiagaraSystem");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, NiagaraComponent) == 840, "Offset mismatch for UPilgrimProVocalsParticlesWidget::NiagaraComponent");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, ParticleMaterial) == 864, "Offset mismatch for UPilgrimProVocalsParticlesWidget::ParticleMaterial");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, NormalizedAngle) == 872, "Offset mismatch for UPilgrimProVocalsParticlesWidget::NormalizedAngle");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, NormalizedYPos) == 876, "Offset mismatch for UPilgrimProVocalsParticlesWidget::NormalizedYPos");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, PitchIndicatorOpacity) == 880, "Offset mismatch for UPilgrimProVocalsParticlesWidget::PitchIndicatorOpacity");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, NormalizedUserPerformance) == 884, "Offset mismatch for UPilgrimProVocalsParticlesWidget::NormalizedUserPerformance");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, TimeWindowSeconds) == 888, "Offset mismatch for UPilgrimProVocalsParticlesWidget::TimeWindowSeconds");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, SlateToWorldScale) == 896, "Offset mismatch for UPilgrimProVocalsParticlesWidget::SlateToWorldScale");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, WorldToSlateScale) == 900, "Offset mismatch for UPilgrimProVocalsParticlesWidget::WorldToSlateScale");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, bHasSingingTarget) == 904, "Offset mismatch for UPilgrimProVocalsParticlesWidget::bHasSingingTarget");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, bIsSingingTargetNotePerfectly) == 905, "Offset mismatch for UPilgrimProVocalsParticlesWidget::bIsSingingTargetNotePerfectly");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, bIsUserSingingTalkie) == 906, "Offset mismatch for UPilgrimProVocalsParticlesWidget::bIsUserSingingTalkie");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, bIsSingingInOverdrivePhrase) == 907, "Offset mismatch for UPilgrimProVocalsParticlesWidget::bIsSingingInOverdrivePhrase");
static_assert(offsetof(UPilgrimProVocalsParticlesWidget, bIsInOverdrive) == 908, "Offset mismatch for UPilgrimProVocalsParticlesWidget::bIsInOverdrive");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsPitchIndicatorVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimProVocalsPitchIndicatorVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float NormalizedAngle; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float NormalizedYPos; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float Opacity; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float NormalizedUserPerformance; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasSingingTarget; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSingingTargetNotePerfectly; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUserSingingTalkie; // 0x00A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSingingInOverdrivePhrase; // 0x00A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00A4
    std::uint8_t LastPitchPerformance[0x1]; // 0x00B4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, NormalizedAngle) == 144, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::NormalizedAngle");
static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, NormalizedYPos) == 148, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::NormalizedYPos");
static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, Opacity) == 152, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::Opacity");
static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, NormalizedUserPerformance) == 156, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::NormalizedUserPerformance");
static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, bHasSingingTarget) == 160, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::bHasSingingTarget");
static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, bIsSingingTargetNotePerfectly) == 161, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::bIsSingingTargetNotePerfectly");
static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, bIsUserSingingTalkie) == 162, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::bIsUserSingingTalkie");
static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, bIsSingingInOverdrivePhrase) == 163, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::bIsSingingInOverdrivePhrase");
static_assert(offsetof(UPilgrimProVocalsPitchIndicatorVM, LastPitchPerformance) == 180, "Offset mismatch for UPilgrimProVocalsPitchIndicatorVM::LastPitchPerformance");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsPlayerScoreVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimProVocalsPlayerScoreVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bHasFullCombo; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasPerfectCombo; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0092
    void* CachedEvaluator; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimProVocalsPlayerScoreVM, bHasFullCombo) == 144, "Offset mismatch for UPilgrimProVocalsPlayerScoreVM::bHasFullCombo");
static_assert(offsetof(UPilgrimProVocalsPlayerScoreVM, bHasPerfectCombo) == 145, "Offset mismatch for UPilgrimProVocalsPlayerScoreVM::bHasPerfectCombo");
static_assert(offsetof(UPilgrimProVocalsPlayerScoreVM, CachedEvaluator) == 152, "Offset mismatch for UPilgrimProVocalsPlayerScoreVM::CachedEvaluator");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsSectionsWidget
// Kind: Class; super: Widget
class UPilgrimProVocalsSectionsWidget
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t SectionLineBrush[0xC0]; // 0x0170 (Size: 0xC0, Type: StructProperty)
    void* SongData; // 0x0230 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPilgrimProVocalsSectionsWidget, SectionLineBrush) == 368, "Offset mismatch for UPilgrimProVocalsSectionsWidget::SectionLineBrush");
static_assert(offsetof(UPilgrimProVocalsSectionsWidget, SongData) == 560, "Offset mismatch for UPilgrimProVocalsSectionsWidget::SongData");

// /Script/PilgrimProVocalsUI.PilgrimProVocalsVM
// Kind: Class; super: PilgrimEventDrivenVM
class UPilgrimProVocalsVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* SongData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    float ViewStartTimeSeconds; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float SongPositionSeconds; // 0x009C (Size: 0x4, Type: FloatProperty)
    std::int32_t LyricsInViewStartIndex; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t LyricsInViewEndIndex; // 0x00A4 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentLyricIndex; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsOverdriveReady; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOverdriveActive; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVoiceActivatedODEnabled; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00AF
    float TimeWindowSeconds; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float NowBarScreenPercentage; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float NowBarTranslationX; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00BC
    std::uint8_t NowBarTranslationVector[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    float NowBarOffsetSeconds; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t StaticModeEnabled; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00D5
    float FadeWidthFraction; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float StaticLyricsWidgetWidth; // 0x00DC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPilgrimProVocalsVM, SongData) == 144, "Offset mismatch for UPilgrimProVocalsVM::SongData");
static_assert(offsetof(UPilgrimProVocalsVM, ViewStartTimeSeconds) == 152, "Offset mismatch for UPilgrimProVocalsVM::ViewStartTimeSeconds");
static_assert(offsetof(UPilgrimProVocalsVM, SongPositionSeconds) == 156, "Offset mismatch for UPilgrimProVocalsVM::SongPositionSeconds");
static_assert(offsetof(UPilgrimProVocalsVM, LyricsInViewStartIndex) == 160, "Offset mismatch for UPilgrimProVocalsVM::LyricsInViewStartIndex");
static_assert(offsetof(UPilgrimProVocalsVM, LyricsInViewEndIndex) == 164, "Offset mismatch for UPilgrimProVocalsVM::LyricsInViewEndIndex");
static_assert(offsetof(UPilgrimProVocalsVM, CurrentLyricIndex) == 168, "Offset mismatch for UPilgrimProVocalsVM::CurrentLyricIndex");
static_assert(offsetof(UPilgrimProVocalsVM, bIsOverdriveReady) == 172, "Offset mismatch for UPilgrimProVocalsVM::bIsOverdriveReady");
static_assert(offsetof(UPilgrimProVocalsVM, bIsOverdriveActive) == 173, "Offset mismatch for UPilgrimProVocalsVM::bIsOverdriveActive");
static_assert(offsetof(UPilgrimProVocalsVM, bIsVoiceActivatedODEnabled) == 174, "Offset mismatch for UPilgrimProVocalsVM::bIsVoiceActivatedODEnabled");
static_assert(offsetof(UPilgrimProVocalsVM, TimeWindowSeconds) == 176, "Offset mismatch for UPilgrimProVocalsVM::TimeWindowSeconds");
static_assert(offsetof(UPilgrimProVocalsVM, NowBarScreenPercentage) == 180, "Offset mismatch for UPilgrimProVocalsVM::NowBarScreenPercentage");
static_assert(offsetof(UPilgrimProVocalsVM, NowBarTranslationX) == 184, "Offset mismatch for UPilgrimProVocalsVM::NowBarTranslationX");
static_assert(offsetof(UPilgrimProVocalsVM, NowBarTranslationVector) == 192, "Offset mismatch for UPilgrimProVocalsVM::NowBarTranslationVector");
static_assert(offsetof(UPilgrimProVocalsVM, NowBarOffsetSeconds) == 208, "Offset mismatch for UPilgrimProVocalsVM::NowBarOffsetSeconds");
static_assert(offsetof(UPilgrimProVocalsVM, StaticModeEnabled) == 212, "Offset mismatch for UPilgrimProVocalsVM::StaticModeEnabled");
static_assert(offsetof(UPilgrimProVocalsVM, FadeWidthFraction) == 216, "Offset mismatch for UPilgrimProVocalsVM::FadeWidthFraction");
static_assert(offsetof(UPilgrimProVocalsVM, StaticLyricsWidgetWidth) == 220, "Offset mismatch for UPilgrimProVocalsVM::StaticLyricsWidgetWidth");
