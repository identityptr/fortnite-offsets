/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/UIKit/ProgressBar/WBP_UI_DownloadProgress
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/UIKit/ProgressBar/WBP_UI_DownloadProgress.WBP_UI_DownloadProgress_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UI_DownloadProgress_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* ProgressBar; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0318
    std::uint8_t WidgetSize[0x1]; // 0x0338 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_UI_DownloadProgress_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UI_DownloadProgress_C::UberGraphFrame");
static_assert(offsetof(UWBP_UI_DownloadProgress_C, ProgressBar) == 784, "Offset mismatch for UWBP_UI_DownloadProgress_C::ProgressBar");
static_assert(offsetof(UWBP_UI_DownloadProgress_C, WidgetSize) == 824, "Offset mismatch for UWBP_UI_DownloadProgress_C::WidgetSize");
