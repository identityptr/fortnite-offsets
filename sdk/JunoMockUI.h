/**
 * decamp dumper generated SDK
 * Package: /Script/JunoMockUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoMockUI.JunoMockDataAsset
// Kind: Class; super: PrimaryDataAsset
class UJunoMockDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t WidgetClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    FName ViewModelName; // 0x0048 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoMockDataAsset, WidgetClass) == 40, "Offset mismatch for UJunoMockDataAsset::WidgetClass");
static_assert(offsetof(UJunoMockDataAsset, ViewModelName) == 72, "Offset mismatch for UJunoMockDataAsset::ViewModelName");

// /Script/JunoMockUI.JunoMockUIPlayerSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class UJunoMockUIPlayerSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoMockUI.JunoMockableView
// Kind: Class; super: Interface
class UJunoMockableView
{
public:
    std::uint8_t Opaque[1];
};
