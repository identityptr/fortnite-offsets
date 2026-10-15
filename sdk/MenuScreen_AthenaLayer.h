/**
 * decamp dumper generated SDK
 * Package: /Game/Abilities/Player/Pawns/MenuScreen_AthenaLayer
 */
#pragma once
#include "Basic.h"

// /Game/Abilities/Player/Pawns/MenuScreen_AthenaLayer.MenuScreen_AthenaLayer_C
// Kind: AnimBlueprintGeneratedClass; super: FrontendLayerAnimInstance
class UMenuScreen_AthenaLayer_C
{
public:
    std::uint8_t Pad_0000[0x860]; // 0x0000
    std::uint8_t UberGraphFrame[0x1C8]; // 0x0860 (Size: 0x1C8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_PropertyAccess[0x8]; // 0x0A28 (Size: 0x8, Type: StructProperty)
    std::uint8_t AnimBlueprintExtension_Base[0xD18]; // 0x0A30 (Size: 0xD18, Type: StructProperty)
    std::uint8_t AnimGraphNode_Slot[0x3C08]; // 0x1748 (Size: 0x3C08, Type: StructProperty)
    std::uint8_t AnimGraphNode_BlendSpacePlayer[0x78]; // 0x5350 (Size: 0x78, Type: StructProperty)
    std::uint8_t AnimGraphNode_BlendSpacePlayer_2[0x430]; // 0x53C8 (Size: 0x430, Type: StructProperty)
    std::uint8_t AnimGraphNode_BlendSpacePlayer_3[0x1110]; // 0x57F8 (Size: 0x1110, Type: StructProperty)
    std::uint8_t AnimGraphNode_LegIK[0xC98]; // 0x6908 (Size: 0xC98, Type: StructProperty)
    std::uint8_t AnimGraphNode_Inertialization[0x960]; // 0x75A0 (Size: 0x960, Type: StructProperty)
    std::uint8_t AnimGraphNode_LinkedInputPose[0xB0]; // 0x7F00 (Size: 0xB0, Type: StructProperty)
    std::uint8_t AnimGraphNode_Root[0x68]; // 0x7FB0 (Size: 0x68, Type: StructProperty)
    void* PawnOwner; // 0x8018 (Size: 0x8, Type: ObjectProperty)
    double StartTime; // 0x8020 (Size: 0x8, Type: DoubleProperty)
    double PlayRate; // 0x8028 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UMenuScreen_AthenaLayer_C, UberGraphFrame) == 2144, "Offset mismatch for UMenuScreen_AthenaLayer_C::UberGraphFrame");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimBlueprintExtension_PropertyAccess) == 2600, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimBlueprintExtension_PropertyAccess");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimBlueprintExtension_Base) == 2608, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimBlueprintExtension_Base");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimGraphNode_Slot) == 5960, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimGraphNode_Slot");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimGraphNode_BlendSpacePlayer) == 21328, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimGraphNode_BlendSpacePlayer");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimGraphNode_BlendSpacePlayer_2) == 21448, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimGraphNode_BlendSpacePlayer_2");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimGraphNode_BlendSpacePlayer_3) == 22520, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimGraphNode_BlendSpacePlayer_3");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimGraphNode_LegIK) == 26888, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimGraphNode_LegIK");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimGraphNode_Inertialization) == 30112, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimGraphNode_Inertialization");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimGraphNode_LinkedInputPose) == 32512, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimGraphNode_LinkedInputPose");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, AnimGraphNode_Root) == 32688, "Offset mismatch for UMenuScreen_AthenaLayer_C::AnimGraphNode_Root");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, PawnOwner) == 32792, "Offset mismatch for UMenuScreen_AthenaLayer_C::PawnOwner");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, StartTime) == 32800, "Offset mismatch for UMenuScreen_AthenaLayer_C::StartTime");
static_assert(offsetof(UMenuScreen_AthenaLayer_C, PlayRate) == 32808, "Offset mismatch for UMenuScreen_AthenaLayer_C::PlayRate");
