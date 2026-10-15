/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaVideoWidgetBase
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase
// Kind: Class; super: CommonActivatableWidget
class UEpicMediaVideoWidgetBase
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* BasePlayer; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Config; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PressToSkipAction[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t HoldToSkipAction[0x10]; // 0x04D8 (Size: 0x10, Type: StructProperty)
    void* Button_Skip; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* MediaTexture; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* Image_VideoTexture; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* Image_Throbber; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* SoundComponent; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* ActiveSoundMix; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    void* DefaultSubmix; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* SoundClass; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* LicensedSubmix; // 0x0528 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAutoBroadcastRebuild; // 0x0530 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEpicMediaVideoWidgetBase, BasePlayer) == 1208, "Offset mismatch for UEpicMediaVideoWidgetBase::BasePlayer");
static_assert(offsetof(UEpicMediaVideoWidgetBase, Config) == 1216, "Offset mismatch for UEpicMediaVideoWidgetBase::Config");
static_assert(offsetof(UEpicMediaVideoWidgetBase, PressToSkipAction) == 1224, "Offset mismatch for UEpicMediaVideoWidgetBase::PressToSkipAction");
static_assert(offsetof(UEpicMediaVideoWidgetBase, HoldToSkipAction) == 1240, "Offset mismatch for UEpicMediaVideoWidgetBase::HoldToSkipAction");
static_assert(offsetof(UEpicMediaVideoWidgetBase, Button_Skip) == 1256, "Offset mismatch for UEpicMediaVideoWidgetBase::Button_Skip");
static_assert(offsetof(UEpicMediaVideoWidgetBase, MediaTexture) == 1264, "Offset mismatch for UEpicMediaVideoWidgetBase::MediaTexture");
static_assert(offsetof(UEpicMediaVideoWidgetBase, Image_VideoTexture) == 1272, "Offset mismatch for UEpicMediaVideoWidgetBase::Image_VideoTexture");
static_assert(offsetof(UEpicMediaVideoWidgetBase, Image_Throbber) == 1280, "Offset mismatch for UEpicMediaVideoWidgetBase::Image_Throbber");
static_assert(offsetof(UEpicMediaVideoWidgetBase, SoundComponent) == 1288, "Offset mismatch for UEpicMediaVideoWidgetBase::SoundComponent");
static_assert(offsetof(UEpicMediaVideoWidgetBase, ActiveSoundMix) == 1296, "Offset mismatch for UEpicMediaVideoWidgetBase::ActiveSoundMix");
static_assert(offsetof(UEpicMediaVideoWidgetBase, DefaultSubmix) == 1304, "Offset mismatch for UEpicMediaVideoWidgetBase::DefaultSubmix");
static_assert(offsetof(UEpicMediaVideoWidgetBase, SoundClass) == 1312, "Offset mismatch for UEpicMediaVideoWidgetBase::SoundClass");
static_assert(offsetof(UEpicMediaVideoWidgetBase, LicensedSubmix) == 1320, "Offset mismatch for UEpicMediaVideoWidgetBase::LicensedSubmix");
static_assert(offsetof(UEpicMediaVideoWidgetBase, bAutoBroadcastRebuild) == 1328, "Offset mismatch for UEpicMediaVideoWidgetBase::bAutoBroadcastRebuild");

// /Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetConfig
// Kind: Class; super: Object
class UEpicMediaVideoWidgetConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString MediaID; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString MediaName; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t PerfControl; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowSkipping; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHoldToSkip; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHideControls; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoPlay; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoop; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNoAudio; // 0x004E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x004F
    TWeakObjectPtr<void> BasePlayerOverride; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UEpicMediaVideoWidgetConfig, MediaID) == 40, "Offset mismatch for UEpicMediaVideoWidgetConfig::MediaID");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, MediaName) == 56, "Offset mismatch for UEpicMediaVideoWidgetConfig::MediaName");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, PerfControl) == 72, "Offset mismatch for UEpicMediaVideoWidgetConfig::PerfControl");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, bAllowSkipping) == 73, "Offset mismatch for UEpicMediaVideoWidgetConfig::bAllowSkipping");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, bHoldToSkip) == 74, "Offset mismatch for UEpicMediaVideoWidgetConfig::bHoldToSkip");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, bHideControls) == 75, "Offset mismatch for UEpicMediaVideoWidgetConfig::bHideControls");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, bAutoPlay) == 76, "Offset mismatch for UEpicMediaVideoWidgetConfig::bAutoPlay");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, bLoop) == 77, "Offset mismatch for UEpicMediaVideoWidgetConfig::bLoop");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, bNoAudio) == 78, "Offset mismatch for UEpicMediaVideoWidgetConfig::bNoAudio");
static_assert(offsetof(UEpicMediaVideoWidgetConfig, BasePlayerOverride) == 80, "Offset mismatch for UEpicMediaVideoWidgetConfig::BasePlayerOverride");
