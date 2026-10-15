/**
 * decamp dumper generated SDK
 * Package: /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Land_AnimBP
 */
#pragma once
#include "Basic.h"

// /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_Land_AnimBP.Player_Land_AnimBP_C
// Kind: AnimBlueprintGeneratedClass; super: FortPlayerLandingAnimInstance
class UPlayer_Land_AnimBP_C
{
public:
    std::uint8_t Pad_0000[0x11B8]; // 0x0000
    std::uint8_t AnimBlueprintExtension_PropertyAccess[0x30]; // 0x11B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_Base[0x18A0]; // 0x11E8 (Size: 0x18A0, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedInputPose[0x1010]; // 0x2A88 (Size: 0x1010, Type: StructProperty)
    std::uint8_t AnimGraphNode_Root[0x588]; // 0x3A98 (Size: 0x588, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedAnimLayer[0xC8]; // 0x4020 (Size: 0xC8, Type: StructProperty)
    std::uint8_t AnimGraphNode_Layer[0x118]; // 0x40E8 (Size: 0x118, Type: StructProperty)
    std::uint8_t AnimGraphNode_LayeredBoneBlend[0x1]; // 0x4200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 4536, "Offset mismatch for UPlayer_Land_AnimBP_C::AnimBlueprintExtension_PropertyAccess");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimBlueprintExtension_Base) == 4584, "Offset mismatch for UPlayer_Land_AnimBP_C::AnimBlueprintExtension_Base");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedInputPose) == 10888, "Offset mismatch for UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedInputPose");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Root) == 15000, "Offset mismatch for UPlayer_Land_AnimBP_C::AnimGraphNode_Root");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LinkedAnimLayer) == 16416, "Offset mismatch for UPlayer_Land_AnimBP_C::AnimGraphNode_LinkedAnimLayer");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_Layer) == 16616, "Offset mismatch for UPlayer_Land_AnimBP_C::AnimGraphNode_Layer");
static_assert(offsetof(UPlayer_Land_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 16896, "Offset mismatch for UPlayer_Land_AnimBP_C::AnimGraphNode_LayeredBoneBlend");
