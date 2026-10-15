/**
 * decamp dumper generated SDK
 * Package: /DefaultCosmeticsAthena/Characters/Meshes/F_MED_Emmy3L_Head_AnimBP
 */
#pragma once
#include "Basic.h"

// /DefaultCosmeticsAthena/Characters/Meshes/F_MED_Emmy3L_Head_AnimBP.F_MED_Emmy3L_Head_AnimBP_C
// Kind: AnimBlueprintGeneratedClass; super: none
class UF_MED_Emmy3L_Head_AnimBP_C
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    std::uint8_t UberGraphFrame[0x20]; // 0x06B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_PropertyAccess[0x8]; // 0x06D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_Base[0x768]; // 0x06D8 (Size: 0x768, Type: StructProperty)
    std::uint8_t AnimGraphNode_LiveLinkPose[0x60]; // 0x0E40 (Size: 0x60, Type: StructProperty)
    std::uint8_t AnimGraphNode_LiveLinkPose_2[0xF8]; // 0x0EA0 (Size: 0xF8, Type: StructProperty)
    std::uint8_t AnimGraphNode_RigLogic[0x448]; // 0x0F98 (Size: 0x448, Type: StructProperty)
    std::uint8_t AnimGraphNode_RemapCurves[0x648]; // 0x13E0 (Size: 0x648, Type: StructProperty)
    std::uint8_t AnimGraphNode_Slot[0x1A8]; // 0x1A28 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t AnimGraphNode_RigMapper[0x1A8]; // 0x1BD0 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t AnimGraphNode_LayeredBoneBlend[0xE8]; // 0x1D78 (Size: 0xE8, Type: StructProperty)
    std::uint8_t AnimGraphNode_CopyPoseFromMesh[0x160]; // 0x1E60 (Size: 0x160, Type: StructProperty)
    std::uint8_t AnimGraphNode_RigMapper_2[0xD0]; // 0x1FC0 (Size: 0xD0, Type: StructProperty)
    std::uint8_t AnimGraphNode_RigMapper_3[0xD0]; // 0x2090 (Size: 0xD0, Type: StructProperty)
    std::uint8_t AnimGraphNode_RigMapper_4[0x238]; // 0x2160 (Size: 0x238, Type: StructProperty)
    std::uint8_t AnimGraphNode_Root[0xD0]; // 0x2398 (Size: 0xD0, Type: StructProperty)
    void* MeshToCopy; // 0x2468 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GetPlayerListUsesCustomCharacterParts; // 0x2470 (Size: 0x1, Type: BoolProperty)
    std::uint8_t is_3L_anim_obsolete; // 0x2471 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x2472
    void* facial_curve_mapping_expression; // 0x2478 (Size: 0x8, Type: ObjectProperty)
    void* facial_curve_mute_expression; // 0x2480 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bypassIdleAnim; // 0x2488 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultFaceIdleActive; // 0x2489 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x248A
    void* Facial_Curve_Zero_Expression; // 0x2490 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SkipDefaultFaceIdle; // 0x2498 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsV2Skeleton; // 0x2499 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x249A
    double fIsV2Skeleton; // 0x24A0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, UberGraphFrame) == 1712, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::UberGraphFrame");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 1744, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimBlueprintExtension_PropertyAccess");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimBlueprintExtension_Base) == 1752, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimBlueprintExtension_Base");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_LiveLinkPose) == 3648, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_LiveLinkPose");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_LiveLinkPose_2) == 3744, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_LiveLinkPose_2");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_RigLogic) == 3992, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_RigLogic");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_RemapCurves) == 5088, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_RemapCurves");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_Slot) == 6696, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_Slot");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_RigMapper) == 7120, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_RigMapper");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_LayeredBoneBlend) == 7544, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_LayeredBoneBlend");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_CopyPoseFromMesh) == 7776, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_CopyPoseFromMesh");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_RigMapper_2) == 8128, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_RigMapper_2");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_RigMapper_3) == 8336, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_RigMapper_3");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_RigMapper_4) == 8544, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_RigMapper_4");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, AnimGraphNode_Root) == 9112, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::AnimGraphNode_Root");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, MeshToCopy) == 9320, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::MeshToCopy");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, GetPlayerListUsesCustomCharacterParts) == 9328, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::GetPlayerListUsesCustomCharacterParts");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, is_3L_anim_obsolete) == 9329, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::is_3L_anim_obsolete");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, facial_curve_mapping_expression) == 9336, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::facial_curve_mapping_expression");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, facial_curve_mute_expression) == 9344, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::facial_curve_mute_expression");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, bypassIdleAnim) == 9352, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::bypassIdleAnim");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, DefaultFaceIdleActive) == 9353, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::DefaultFaceIdleActive");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, Facial_Curve_Zero_Expression) == 9360, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::Facial_Curve_Zero_Expression");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, SkipDefaultFaceIdle) == 9368, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::SkipDefaultFaceIdle");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, bIsV2Skeleton) == 9369, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::bIsV2Skeleton");
static_assert(offsetof(UF_MED_Emmy3L_Head_AnimBP_C, fIsV2Skeleton) == 9376, "Offset mismatch for UF_MED_Emmy3L_Head_AnimBP_C::fIsV2Skeleton");
