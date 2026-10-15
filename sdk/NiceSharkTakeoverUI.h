/**
 * decamp dumper generated SDK
 * Package: /Script/NiceSharkTakeoverUI
 */
#pragma once
#include "Basic.h"

// /Script/NiceSharkTakeoverUI.FortControllerComponent_NiceSharkTakeoverUI
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_NiceSharkTakeoverUI
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t VideoWidgetClass[0x20]; // 0x00C8 (Size: 0x20, Type: SoftClassProperty)
    float StreamingStabilityHoldSeconds; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x44]; // 0x00EC
    TWeakObjectPtr<void> VideoTakeoverWidget; // 0x0130 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverUI, VideoWidgetClass) == 200, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverUI::VideoWidgetClass");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverUI, StreamingStabilityHoldSeconds) == 232, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverUI::StreamingStabilityHoldSeconds");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverUI, VideoTakeoverWidget) == 304, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverUI::VideoTakeoverWidget");

// /Script/NiceSharkTakeoverUI.NiceSharkTakeoverVideoWidget
// Kind: Class; super: CommonActivatableWidget
class UNiceSharkTakeoverVideoWidget
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    FString VideoUID; // 0x04A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t MediaWidgetClass[0x20]; // 0x04B8 (Size: 0x20, Type: SoftClassProperty)
    float ShowtimeWatchdogSeconds; // 0x04D8 (Size: 0x4, Type: FloatProperty)
    float PlaybackEndingLeadSeconds; // 0x04DC (Size: 0x4, Type: FloatProperty)
    void* VideoContentSlot; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x04E8
    void* MediaContent; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* MediaConfig; // 0x0500 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiceSharkTakeoverVideoWidget, VideoUID) == 1192, "Offset mismatch for UNiceSharkTakeoverVideoWidget::VideoUID");
static_assert(offsetof(UNiceSharkTakeoverVideoWidget, MediaWidgetClass) == 1208, "Offset mismatch for UNiceSharkTakeoverVideoWidget::MediaWidgetClass");
static_assert(offsetof(UNiceSharkTakeoverVideoWidget, ShowtimeWatchdogSeconds) == 1240, "Offset mismatch for UNiceSharkTakeoverVideoWidget::ShowtimeWatchdogSeconds");
static_assert(offsetof(UNiceSharkTakeoverVideoWidget, PlaybackEndingLeadSeconds) == 1244, "Offset mismatch for UNiceSharkTakeoverVideoWidget::PlaybackEndingLeadSeconds");
static_assert(offsetof(UNiceSharkTakeoverVideoWidget, VideoContentSlot) == 1248, "Offset mismatch for UNiceSharkTakeoverVideoWidget::VideoContentSlot");
static_assert(offsetof(UNiceSharkTakeoverVideoWidget, MediaContent) == 1272, "Offset mismatch for UNiceSharkTakeoverVideoWidget::MediaContent");
static_assert(offsetof(UNiceSharkTakeoverVideoWidget, MediaConfig) == 1280, "Offset mismatch for UNiceSharkTakeoverVideoWidget::MediaConfig");
