/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_LinkCodeMutatorRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CRD_LinkCodeMutatorRuntime.LinkCodeMutatorDevice
// Kind: Class; super: FortCreativeDeviceProp
class ULinkCodeMutatorDevice
{
public:
    std::uint8_t Pad_0000[0xB28]; // 0x0000
    TArray<void*> MutatorsToApply; // 0x0B28 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULinkCodeMutatorDevice, MutatorsToApply) == 2856, "Offset mismatch for ULinkCodeMutatorDevice::MutatorsToApply");
