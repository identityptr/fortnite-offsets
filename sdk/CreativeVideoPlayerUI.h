/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeVideoPlayerUI
 */
#pragma once
#include "Basic.h"

// /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
// Kind: Class; super: CommonActivatableWidget
class UCreativeVideoPlayerFullScreenWidget
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* SourceBus; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* SoundClass; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HoldToSkipAction[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    void* Button_Skip; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Image_VideoTexture; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    float SkipButtonTimeout; // 0x04E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x1C]; // 0x04EC
    void* SoundComponent; // 0x0508 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, SourceBus) == 1208, "Offset mismatch for UCreativeVideoPlayerFullScreenWidget::SourceBus");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, SoundClass) == 1216, "Offset mismatch for UCreativeVideoPlayerFullScreenWidget::SoundClass");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, HoldToSkipAction) == 1224, "Offset mismatch for UCreativeVideoPlayerFullScreenWidget::HoldToSkipAction");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, Button_Skip) == 1240, "Offset mismatch for UCreativeVideoPlayerFullScreenWidget::Button_Skip");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, Image_VideoTexture) == 1248, "Offset mismatch for UCreativeVideoPlayerFullScreenWidget::Image_VideoTexture");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, SkipButtonTimeout) == 1256, "Offset mismatch for UCreativeVideoPlayerFullScreenWidget::SkipButtonTimeout");
static_assert(offsetof(UCreativeVideoPlayerFullScreenWidget, SoundComponent) == 1288, "Offset mismatch for UCreativeVideoPlayerFullScreenWidget::SoundComponent");
