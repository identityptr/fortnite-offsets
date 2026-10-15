/**
 * decamp dumper generated SDK
 * Package: /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP
 */
#pragma once
#include "Basic.h"

// /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_InAir_AnimBP.Player_InAir_AnimBP_C
// Kind: AnimBlueprintGeneratedClass; super: FortPlayerInAirAnimInstance
class UPlayer_InAir_AnimBP_C
{
public:
    std::uint8_t Pad_0000[0x11A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x28]; // 0x11A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_PropertyAccess[0x8]; // 0x11C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_Base[0x1550]; // 0x11D0 (Size: 0x1550, Type: StructProperty)
    std::uint8_t AnimGraphNode_Root[0x20]; // 0x2720 (Size: 0x20, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedInputPose[0x1248]; // 0x2740 (Size: 0x1248, Type: StructProperty)
    std::uint8_t AnimGraphNode_BlendSpacePlayer[0x848]; // 0x3988 (Size: 0x848, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedAnimLayer[0xF0]; // 0x41D0 (Size: 0xF0, Type: StructProperty)
    std::uint8_t AnimGraphNode_Slot[0x1]; // 0x42C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayer_InAir_AnimBP_C, UberGraphFrame) == 4512, "Offset mismatch for UPlayer_InAir_AnimBP_C::UberGraphFrame");
static_assert(offsetof(UPlayer_InAir_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 4552, "Offset mismatch for UPlayer_InAir_AnimBP_C::AnimBlueprintExtension_PropertyAccess");
static_assert(offsetof(UPlayer_InAir_AnimBP_C, AnimBlueprintExtension_Base) == 4560, "Offset mismatch for UPlayer_InAir_AnimBP_C::AnimBlueprintExtension_Base");
static_assert(offsetof(UPlayer_InAir_AnimBP_C, AnimGraphNode_Root) == 10016, "Offset mismatch for UPlayer_InAir_AnimBP_C::AnimGraphNode_Root");
static_assert(offsetof(UPlayer_InAir_AnimBP_C, AnimGraphNode_LinkedInputPose) == 10048, "Offset mismatch for UPlayer_InAir_AnimBP_C::AnimGraphNode_LinkedInputPose");
static_assert(offsetof(UPlayer_InAir_AnimBP_C, AnimGraphNode_BlendSpacePlayer) == 14728, "Offset mismatch for UPlayer_InAir_AnimBP_C::AnimGraphNode_BlendSpacePlayer");
static_assert(offsetof(UPlayer_InAir_AnimBP_C, AnimGraphNode_LinkedAnimLayer) == 16848, "Offset mismatch for UPlayer_InAir_AnimBP_C::AnimGraphNode_LinkedAnimLayer");
static_assert(offsetof(UPlayer_InAir_AnimBP_C, AnimGraphNode_Slot) == 17088, "Offset mismatch for UPlayer_InAir_AnimBP_C::AnimGraphNode_Slot");
