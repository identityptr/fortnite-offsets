/**
 * decamp dumper generated SDK
 * Package: /Script/FMCalibrationUI
 */
#pragma once
#include "Basic.h"

// /Script/FMCalibrationUI.CalibrationProcessVM
// Kind: Class; super: MVVMViewModelBase
class UCalibrationProcessVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FMulticastInlineDelegate OnStageCompletion; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> CachedCalibrationComponent; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MusicClockComponent; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    float MinAudioCalibrationMs; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float MaxAudioCalibrationMs; // 0x008C (Size: 0x4, Type: FloatProperty)
    float MinVideoCalibrationMs; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float MaxVideoCalibrationMs; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float FractionToDiscard; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float AudioAccuracyMs; // 0x009C (Size: 0x4, Type: FloatProperty)
    float VideoAccuracyMs; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float InaccuracyMultiplier; // 0x00A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCalibrationProcessVM, OnStageCompletion) == 104, "Offset mismatch for UCalibrationProcessVM::OnStageCompletion");
static_assert(offsetof(UCalibrationProcessVM, CachedCalibrationComponent) == 120, "Offset mismatch for UCalibrationProcessVM::CachedCalibrationComponent");
static_assert(offsetof(UCalibrationProcessVM, MusicClockComponent) == 128, "Offset mismatch for UCalibrationProcessVM::MusicClockComponent");
static_assert(offsetof(UCalibrationProcessVM, MinAudioCalibrationMs) == 136, "Offset mismatch for UCalibrationProcessVM::MinAudioCalibrationMs");
static_assert(offsetof(UCalibrationProcessVM, MaxAudioCalibrationMs) == 140, "Offset mismatch for UCalibrationProcessVM::MaxAudioCalibrationMs");
static_assert(offsetof(UCalibrationProcessVM, MinVideoCalibrationMs) == 144, "Offset mismatch for UCalibrationProcessVM::MinVideoCalibrationMs");
static_assert(offsetof(UCalibrationProcessVM, MaxVideoCalibrationMs) == 148, "Offset mismatch for UCalibrationProcessVM::MaxVideoCalibrationMs");
static_assert(offsetof(UCalibrationProcessVM, FractionToDiscard) == 152, "Offset mismatch for UCalibrationProcessVM::FractionToDiscard");
static_assert(offsetof(UCalibrationProcessVM, AudioAccuracyMs) == 156, "Offset mismatch for UCalibrationProcessVM::AudioAccuracyMs");
static_assert(offsetof(UCalibrationProcessVM, VideoAccuracyMs) == 160, "Offset mismatch for UCalibrationProcessVM::VideoAccuracyMs");
static_assert(offsetof(UCalibrationProcessVM, InaccuracyMultiplier) == 164, "Offset mismatch for UCalibrationProcessVM::InaccuracyMultiplier");

// /Script/FMCalibrationUI.CalibrationProfileVM
// Kind: Class; super: MVVMViewModelBase
class UCalibrationProfileVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bHasUsedCalibrationProfileFeature; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t ActiveProfileIndex; // 0x006C (Size: 0x4, Type: IntProperty)
    void* CalibrationComponent; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCalibrationProfileVM, bHasUsedCalibrationProfileFeature) == 104, "Offset mismatch for UCalibrationProfileVM::bHasUsedCalibrationProfileFeature");
static_assert(offsetof(UCalibrationProfileVM, ActiveProfileIndex) == 108, "Offset mismatch for UCalibrationProfileVM::ActiveProfileIndex");
static_assert(offsetof(UCalibrationProfileVM, CalibrationComponent) == 112, "Offset mismatch for UCalibrationProfileVM::CalibrationComponent");

// /Script/FMCalibrationUI.FMCalibrationScreenWidgetBase
// Kind: Class; super: CommonActivatableWidget
class UFMCalibrationScreenWidgetBase
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t bEnableCalibrometerCheat; // 0x04A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFMCalibrationScreenWidgetBase, bEnableCalibrometerCheat) == 1184, "Offset mismatch for UFMCalibrationScreenWidgetBase::bEnableCalibrometerCheat");
