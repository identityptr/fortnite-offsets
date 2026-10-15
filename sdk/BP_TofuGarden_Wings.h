/**
 * decamp dumper generated SDK
 * Package: /TofuGarden/Gameplay/BP_TofuGarden_Wings
 */
#pragma once
#include "Basic.h"

// /TofuGarden/Gameplay/BP_TofuGarden_Wings.BP_TofuGarden_Wings_C
// Kind: BlueprintGeneratedClass; super: none
class UBP_TofuGarden_Wings_C
{
public:
    std::uint8_t Pad_0000[0x2A8]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x02A8 (Size: 0x8, Type: StructProperty)
    float Timeline_Emissive_936947064F1BC84DC4940CAA726C1DEA; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float Timeline_Numerals_Opacity_936947064F1BC84DC4940CAA726C1DEA; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    float Timeline_GlowBoost_936947064F1BC84DC4940CAA726C1DEA; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float Timeline_Opacity_936947064F1BC84DC4940CAA726C1DEA; // 0x02BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Timeline_Direction_936947064F1BC84DC4940CAA726C1DEA; // 0x02C0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02C1
    void* Timeline; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_TofuGarden_Wings_C, UberGraphFrame) == 680, "Offset mismatch for UBP_TofuGarden_Wings_C::UberGraphFrame");
static_assert(offsetof(UBP_TofuGarden_Wings_C, Timeline_Emissive_936947064F1BC84DC4940CAA726C1DEA) == 688, "Offset mismatch for UBP_TofuGarden_Wings_C::Timeline_Emissive_936947064F1BC84DC4940CAA726C1DEA");
static_assert(offsetof(UBP_TofuGarden_Wings_C, Timeline_Numerals_Opacity_936947064F1BC84DC4940CAA726C1DEA) == 692, "Offset mismatch for UBP_TofuGarden_Wings_C::Timeline_Numerals_Opacity_936947064F1BC84DC4940CAA726C1DEA");
static_assert(offsetof(UBP_TofuGarden_Wings_C, Timeline_GlowBoost_936947064F1BC84DC4940CAA726C1DEA) == 696, "Offset mismatch for UBP_TofuGarden_Wings_C::Timeline_GlowBoost_936947064F1BC84DC4940CAA726C1DEA");
static_assert(offsetof(UBP_TofuGarden_Wings_C, Timeline_Opacity_936947064F1BC84DC4940CAA726C1DEA) == 700, "Offset mismatch for UBP_TofuGarden_Wings_C::Timeline_Opacity_936947064F1BC84DC4940CAA726C1DEA");
static_assert(offsetof(UBP_TofuGarden_Wings_C, Timeline_Direction_936947064F1BC84DC4940CAA726C1DEA) == 704, "Offset mismatch for UBP_TofuGarden_Wings_C::Timeline_Direction_936947064F1BC84DC4940CAA726C1DEA");
static_assert(offsetof(UBP_TofuGarden_Wings_C, Timeline) == 712, "Offset mismatch for UBP_TofuGarden_Wings_C::Timeline");
