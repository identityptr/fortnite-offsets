/**
 * decamp dumper generated SDK
 * Package: /Script/EspressoGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/EspressoGameplayRuntime.DragoncartEspressoLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UDragoncartEspressoLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t InitialJumpAngle; // 0x1170 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1171
    float JumpForwardAngleDegrees; // 0x1174 (Size: 0x4, Type: FloatProperty)
    float JumpBackwardAngleDegrees; // 0x1178 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDragoncartEspressoLayerAnimInstance, InitialJumpAngle) == 4464, "Offset mismatch for UDragoncartEspressoLayerAnimInstance::InitialJumpAngle");
static_assert(offsetof(UDragoncartEspressoLayerAnimInstance, JumpForwardAngleDegrees) == 4468, "Offset mismatch for UDragoncartEspressoLayerAnimInstance::JumpForwardAngleDegrees");
static_assert(offsetof(UDragoncartEspressoLayerAnimInstance, JumpBackwardAngleDegrees) == 4472, "Offset mismatch for UDragoncartEspressoLayerAnimInstance::JumpBackwardAngleDegrees");

// /Script/EspressoGameplayRuntime.EspressoGameplayAttributeSet
// Kind: Class; super: FortAttributeSet
class UEspressoGameplayAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CurrentCharges[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEspressoGameplayAttributeSet, CurrentCharges) == 72, "Offset mismatch for UEspressoGameplayAttributeSet::CurrentCharges");
