/**
 * decamp dumper generated SDK
 * Package: /CosmicThunderCheatCodesGameplay/Gameplay/ABP_CosmicThunderCheatCodeInput_Player
 */
#pragma once
#include "Basic.h"

// /CosmicThunderCheatCodesGameplay/Gameplay/ABP_CosmicThunderCheatCodeInput_Player.ABP_CosmicThunderCheatCodeInput_Player_C
// Kind: AnimBlueprintGeneratedClass; super: CosmicThunderCheatCodeInputLayerAnimInstance
class UABP_CosmicThunderCheatCodeInput_Player_C
{
public:
    std::uint8_t Pad_0000[0x11C0]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x11C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_PropertyAccess[0x8]; // 0x11D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_Base[0x1A98]; // 0x11D8 (Size: 0x1A98, Type: StructProperty)
    std::uint8_t AnimGraphNode_LayeredBoneBlend[0x7B0]; // 0x2C70 (Size: 0x7B0, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedInputPose[0xB0]; // 0x3420 (Size: 0xB0, Type: StructProperty)
    std::uint8_t AnimGraphNode_Root[0x20]; // 0x34D0 (Size: 0x20, Type: StructProperty)
    void* AsyncTAction_WaitInputEvent; // 0x34F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLatestInputCorrect; // 0x34F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LatestInput_b; // 0x34F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t selfBlend_b; // 0x34FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bounceLeft_b; // 0x34FB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bounceRight_b; // 0x34FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x34FD
    double bounceStrength_b; // 0x3500 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UseLowerBodyFromSource_b; // 0x3508 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, UberGraphFrame) == 4544, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::UberGraphFrame");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, AnimBlueprintExtension_PropertyAccess) == 4560, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::AnimBlueprintExtension_PropertyAccess");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, AnimBlueprintExtension_Base) == 4568, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::AnimBlueprintExtension_Base");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, AnimGraphNode_LayeredBoneBlend) == 11376, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::AnimGraphNode_LayeredBoneBlend");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, AnimGraphNode_LinkedInputPose) == 13344, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::AnimGraphNode_LinkedInputPose");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, AnimGraphNode_Root) == 13520, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::AnimGraphNode_Root");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, AsyncTAction_WaitInputEvent) == 13552, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::AsyncTAction_WaitInputEvent");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, bLatestInputCorrect) == 13560, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::bLatestInputCorrect");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, LatestInput_b) == 13561, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::LatestInput_b");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, selfBlend_b) == 13562, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::selfBlend_b");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, bounceLeft_b) == 13563, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::bounceLeft_b");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, bounceRight_b) == 13564, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::bounceRight_b");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, bounceStrength_b) == 13568, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::bounceStrength_b");
static_assert(offsetof(UABP_CosmicThunderCheatCodeInput_Player_C, UseLowerBodyFromSource_b) == 13576, "Offset mismatch for UABP_CosmicThunderCheatCodeInput_Player_C::UseLowerBodyFromSource_b");
