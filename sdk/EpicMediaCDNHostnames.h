/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaCDNHostnames
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaCDNHostnames.EpicMediaCDNHostnames
// Kind: Class; super: Object
class UEpicMediaCDNHostnames
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CDNDistribution; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEpicMediaCDNHostnames, CDNDistribution) == 40, "Offset mismatch for UEpicMediaCDNHostnames::CDNDistribution");
