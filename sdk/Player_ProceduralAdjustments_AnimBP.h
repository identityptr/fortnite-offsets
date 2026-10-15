/**
 * decamp dumper generated SDK
 * Package: /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ProceduralAdjustments_AnimBP
 */
#pragma once
#include "Basic.h"

// /Game/Characters/Player/AnimationBlueprints/LinkedAnimGraphs/Player_ProceduralAdjustments_AnimBP.Player_ProceduralAdjustments_AnimBP_C
// Kind: AnimBlueprintGeneratedClass; super: FortPlayerProceduralAdjustmentsAnimInstance
class UPlayer_ProceduralAdjustments_AnimBP_C
{
public:
    std::uint8_t Pad_0000[0xD60]; // 0x0000
    std::uint8_t AnimBlueprintExtension_PropertyAccess[0x8]; // 0x0D60 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_Base[0x4000]; // 0x0D68 (Size: 0x4000, Type: StructProperty)
    std::uint8_t Pad_0001[0x1C38]; // 0x4D68
    std::uint8_t AnimGraphNode_LegIK[0x7E0]; // 0x69A0 (Size: 0x7E0, Type: StructProperty)
    std::uint8_t AnimGraphNode_Root[0x20]; // 0x7180 (Size: 0x20, Type: StructProperty)
    std::uint8_t AnimGraphNode_Slot[0x48]; // 0x71A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t AnimGraphNode_LayeredBoneBlend[0x910]; // 0x71E8 (Size: 0x910, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedInputPose[0x5F8]; // 0x7AF8 (Size: 0x5F8, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedAnimLayer[0x1]; // 0x80F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayer_ProceduralAdjustments_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 3424, "Offset mismatch for UPlayer_ProceduralAdjustments_AnimBP_C::AnimBlueprintExtension_PropertyAccess");
static_assert(offsetof(UPlayer_ProceduralAdjustments_AnimBP_C, AnimBlueprintExtension_Base) == 3432, "Offset mismatch for UPlayer_ProceduralAdjustments_AnimBP_C::AnimBlueprintExtension_Base");
static_assert(offsetof(UPlayer_ProceduralAdjustments_AnimBP_C, AnimGraphNode_LegIK) == 27040, "Offset mismatch for UPlayer_ProceduralAdjustments_AnimBP_C::AnimGraphNode_LegIK");
static_assert(offsetof(UPlayer_ProceduralAdjustments_AnimBP_C, AnimGraphNode_Root) == 29056, "Offset mismatch for UPlayer_ProceduralAdjustments_AnimBP_C::AnimGraphNode_Root");
static_assert(offsetof(UPlayer_ProceduralAdjustments_AnimBP_C, AnimGraphNode_Slot) == 29088, "Offset mismatch for UPlayer_ProceduralAdjustments_AnimBP_C::AnimGraphNode_Slot");
static_assert(offsetof(UPlayer_ProceduralAdjustments_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 29160, "Offset mismatch for UPlayer_ProceduralAdjustments_AnimBP_C::AnimGraphNode_LayeredBoneBlend");
static_assert(offsetof(UPlayer_ProceduralAdjustments_AnimBP_C, AnimGraphNode_LinkedInputPose) == 31480, "Offset mismatch for UPlayer_ProceduralAdjustments_AnimBP_C::AnimGraphNode_LinkedInputPose");
static_assert(offsetof(UPlayer_ProceduralAdjustments_AnimBP_C, AnimGraphNode_LinkedAnimLayer) == 33008, "Offset mismatch for UPlayer_ProceduralAdjustments_AnimBP_C::AnimGraphNode_LinkedAnimLayer");
