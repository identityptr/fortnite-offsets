/**
 * decamp dumper generated SDK
 * Package: /Script/PolarisMotdUI
 */
#pragma once
#include "Basic.h"

// /Script/PolarisMotdUI.PolarisMotdChannel
// Kind: Class; super: PolarisChannel
class UPolarisMotdChannel
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    void* SelectionVM; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolarisMotdChannel, SelectionVM) == 168, "Offset mismatch for UPolarisMotdChannel::SelectionVM");

// /Script/PolarisMotdUI.PolarisMotdImageVM
// Kind: Class; super: PolarisMotdVM
class UPolarisMotdImageVM
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t TeaserDisplay[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t FullDisplay[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPolarisMotdImageVM, TeaserDisplay) == 144, "Offset mismatch for UPolarisMotdImageVM::TeaserDisplay");
static_assert(offsetof(UPolarisMotdImageVM, FullDisplay) == 200, "Offset mismatch for UPolarisMotdImageVM::FullDisplay");

// /Script/PolarisMotdUI.PolarisMotdSelectionVM
// Kind: Class; super: MVVMViewModelBase
class UPolarisMotdSelectionVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> MotdVMs; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPolarisMotdSelectionVM, MotdVMs) == 104, "Offset mismatch for UPolarisMotdSelectionVM::MotdVMs");

// /Script/PolarisMotdUI.PolarisMotdVM
// Kind: Class; super: MVVMViewModelBase
class UPolarisMotdVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> Buttons; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsVerticalTextLayout; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    float PreviewDuration; // 0x007C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPolarisMotdVM, Buttons) == 104, "Offset mismatch for UPolarisMotdVM::Buttons");
static_assert(offsetof(UPolarisMotdVM, bIsVerticalTextLayout) == 120, "Offset mismatch for UPolarisMotdVM::bIsVerticalTextLayout");
static_assert(offsetof(UPolarisMotdVM, PreviewDuration) == 124, "Offset mismatch for UPolarisMotdVM::PreviewDuration");
