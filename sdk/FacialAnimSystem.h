/**
 * decamp dumper generated SDK
 * Package: /Script/FacialAnimSystem
 */
#pragma once
#include "Basic.h"

// /Script/FacialAnimSystem.FacialLiveLinkRemapAsset
// Kind: Class; super: LiveLinkRetargetAsset
class UFacialLiveLinkRemapAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bExtractBoneTransform; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExtractCurve; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFacialLiveLinkRemapAsset, bExtractBoneTransform) == 40, "Offset mismatch for UFacialLiveLinkRemapAsset::bExtractBoneTransform");
static_assert(offsetof(UFacialLiveLinkRemapAsset, bExtractCurve) == 41, "Offset mismatch for UFacialLiveLinkRemapAsset::bExtractCurve");
