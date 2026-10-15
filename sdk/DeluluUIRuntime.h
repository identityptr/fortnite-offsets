/**
 * decamp dumper generated SDK
 * Package: /Script/DeluluUIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DeluluUIRuntime.DeluluAnimatedHUDElementWidget
// Kind: Class; super: FortHUDElementWidget
class UDeluluAnimatedHUDElementWidget
{
public:
    std::uint8_t Pad_0000[0x390]; // 0x0000
    void* Anim_Intro; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Outro; // 0x0398 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDeluluAnimatedHUDElementWidget, Anim_Intro) == 912, "Offset mismatch for UDeluluAnimatedHUDElementWidget::Anim_Intro");
static_assert(offsetof(UDeluluAnimatedHUDElementWidget, Anim_Outro) == 920, "Offset mismatch for UDeluluAnimatedHUDElementWidget::Anim_Outro");

// /Script/DeluluUIRuntime.DeluluGiveUpWidget
// Kind: Class; super: FortHUDElementWidget
class UDeluluGiveUpWidget
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    float HoldDuration; // 0x0370 (Size: 0x4, Type: FloatProperty)
    float InvulnerabilityGiveUpDisplayDelay; // 0x0374 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InvulnerabilityGameplayTag[0x8]; // 0x0378 (Size: 0x8, Type: StructProperty)
    void* KeyBindWidget; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0388
    void* DeluluGiveUpInputComponent; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x03B0
    TWeakObjectPtr<void> OwnerASC; // 0x03B4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UDeluluGiveUpWidget, HoldDuration) == 880, "Offset mismatch for UDeluluGiveUpWidget::HoldDuration");
static_assert(offsetof(UDeluluGiveUpWidget, InvulnerabilityGiveUpDisplayDelay) == 884, "Offset mismatch for UDeluluGiveUpWidget::InvulnerabilityGiveUpDisplayDelay");
static_assert(offsetof(UDeluluGiveUpWidget, InvulnerabilityGameplayTag) == 888, "Offset mismatch for UDeluluGiveUpWidget::InvulnerabilityGameplayTag");
static_assert(offsetof(UDeluluGiveUpWidget, KeyBindWidget) == 896, "Offset mismatch for UDeluluGiveUpWidget::KeyBindWidget");
static_assert(offsetof(UDeluluGiveUpWidget, DeluluGiveUpInputComponent) == 936, "Offset mismatch for UDeluluGiveUpWidget::DeluluGiveUpInputComponent");
static_assert(offsetof(UDeluluGiveUpWidget, OwnerASC) == 948, "Offset mismatch for UDeluluGiveUpWidget::OwnerASC");

// /Script/DeluluUIRuntime.DeluluPostMatchViewModel
// Kind: Class; super: FortPerUserViewModel
class UDeluluPostMatchViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bMatchWithCurrentPlayers; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMatchWithEnabled; // 0x0079 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDeluluPostMatchViewModel, bMatchWithCurrentPlayers) == 120, "Offset mismatch for UDeluluPostMatchViewModel::bMatchWithCurrentPlayers");
static_assert(offsetof(UDeluluPostMatchViewModel, bMatchWithEnabled) == 121, "Offset mismatch for UDeluluPostMatchViewModel::bMatchWithEnabled");

// /Script/DeluluUIRuntime.SpectatingGhostViewModel
// Kind: Class; super: FortPerUserViewModel
class USpectatingGhostViewModel
{
public:
    std::uint8_t Opaque[1];
};
