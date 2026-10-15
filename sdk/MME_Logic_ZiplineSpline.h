/**
 * decamp dumper generated SDK
 * Package: /Zipline/MovementMode/MME_Logic_ZiplineSpline
 */
#pragma once
#include "Basic.h"

// /Zipline/MovementMode/MME_Logic_ZiplineSpline.MME_Logic_ZiplineSpline_C
// Kind: BlueprintGeneratedClass; super: FortMovementMode_ExtLogicZiplineSpline
class UMME_Logic_ZiplineSpline_C
{
public:
    std::uint8_t Pad_0000[0x550]; // 0x0000
    std::uint8_t XYVelocityClampMaxValue[0x28]; // 0x0550 (Size: 0x28, Type: StructProperty)
    float VerticalZiplineUseSweepDelay; // 0x0578 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMME_Logic_ZiplineSpline_C, XYVelocityClampMaxValue) == 1360, "Offset mismatch for UMME_Logic_ZiplineSpline_C::XYVelocityClampMaxValue");
static_assert(offsetof(UMME_Logic_ZiplineSpline_C, VerticalZiplineUseSweepDelay) == 1400, "Offset mismatch for UMME_Logic_ZiplineSpline_C::VerticalZiplineUseSweepDelay");
