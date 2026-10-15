/**
 * decamp dumper generated SDK
 * Package: /DefaultCosmeticsAthena/Characters/Meshes/F_MED_Prime_Skeleton_AnimBlueprint_A
 */
#pragma once
#include "Basic.h"

// /DefaultCosmeticsAthena/Characters/Meshes/F_MED_Prime_Skeleton_AnimBlueprint_A.F_MED_Prime_Skeleton_AnimBlueprint_A_C
// Kind: AnimBlueprintGeneratedClass; super: CustomCharacterPartAnimInstance
class UF_MED_Prime_Skeleton_AnimBlueprint_A_C
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0630 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_PropertyAccess[0x8]; // 0x0638 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_Base[0x8]; // 0x0640 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimGraphNode_Root[0x20]; // 0x0648 (Size: 0x20, Type: StructProperty)
    std::uint8_t AnimGraphNode_CopyPoseFromMesh[0x130]; // 0x0668 (Size: 0x130, Type: StructProperty)
    std::uint8_t AnimGraphNode_ControlRig[0x4000]; // 0x0798 (Size: 0x4000, Type: StructProperty)
    std::uint8_t Pad_0001[0xB18]; // 0x4798
    std::uint8_t AnimGraphNode_RigidBody[0x1]; // 0x52B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UF_MED_Prime_Skeleton_AnimBlueprint_A_C, UberGraphFrame) == 1584, "Offset mismatch for UF_MED_Prime_Skeleton_AnimBlueprint_A_C::UberGraphFrame");
static_assert(offsetof(UF_MED_Prime_Skeleton_AnimBlueprint_A_C, AnimBlueprintExtension_PropertyAccess) == 1592, "Offset mismatch for UF_MED_Prime_Skeleton_AnimBlueprint_A_C::AnimBlueprintExtension_PropertyAccess");
static_assert(offsetof(UF_MED_Prime_Skeleton_AnimBlueprint_A_C, AnimBlueprintExtension_Base) == 1600, "Offset mismatch for UF_MED_Prime_Skeleton_AnimBlueprint_A_C::AnimBlueprintExtension_Base");
static_assert(offsetof(UF_MED_Prime_Skeleton_AnimBlueprint_A_C, AnimGraphNode_Root) == 1608, "Offset mismatch for UF_MED_Prime_Skeleton_AnimBlueprint_A_C::AnimGraphNode_Root");
static_assert(offsetof(UF_MED_Prime_Skeleton_AnimBlueprint_A_C, AnimGraphNode_CopyPoseFromMesh) == 1640, "Offset mismatch for UF_MED_Prime_Skeleton_AnimBlueprint_A_C::AnimGraphNode_CopyPoseFromMesh");
static_assert(offsetof(UF_MED_Prime_Skeleton_AnimBlueprint_A_C, AnimGraphNode_ControlRig) == 1944, "Offset mismatch for UF_MED_Prime_Skeleton_AnimBlueprint_A_C::AnimGraphNode_ControlRig");
static_assert(offsetof(UF_MED_Prime_Skeleton_AnimBlueprint_A_C, AnimGraphNode_RigidBody) == 21168, "Offset mismatch for UF_MED_Prime_Skeleton_AnimBlueprint_A_C::AnimGraphNode_RigidBody");
