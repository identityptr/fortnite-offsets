/**
 * decamp dumper generated SDK
 * Package: /Script/PolarisInterstitials
 */
#pragma once
#include "Basic.h"

// /Script/PolarisInterstitials.PolarisInterstitial
// Kind: Class; super: Object
class UPolarisInterstitial
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ViewModel; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolarisInterstitial, ViewModel) == 40, "Offset mismatch for UPolarisInterstitial::ViewModel");

// /Script/PolarisInterstitials.PolarisInterstitialsChannel
// Kind: Class; super: PolarisChannel
class UPolarisInterstitialsChannel
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> Interstitials; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPolarisInterstitialsChannel, Interstitials) == 168, "Offset mismatch for UPolarisInterstitialsChannel::Interstitials");
