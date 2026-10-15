/**
 * decamp dumper generated SDK
 * Package: /Game/FrontEnd/Cameras/StoreCamera_Blueprint
 */
#pragma once
#include "Basic.h"

// /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C
// Kind: BlueprintGeneratedClass; super: FortCameraBase
class UStoreCamera_Blueprint_C
{
public:
    std::uint8_t Pad_0000[0xAE0]; // 0x0000
    std::uint8_t UberGraphFrame[0x38]; // 0x0AE0 (Size: 0x38, Type: StructProperty)
    void* Timeline; // 0x0B18 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UStoreCamera_Blueprint_C, UberGraphFrame) == 2784, "Offset mismatch for UStoreCamera_Blueprint_C::UberGraphFrame");
static_assert(offsetof(UStoreCamera_Blueprint_C, Timeline) == 2840, "Offset mismatch for UStoreCamera_Blueprint_C::Timeline");
