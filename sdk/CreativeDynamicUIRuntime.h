/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeDynamicUIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeDynamicUIRuntime.CreativeDynamicUIAlignmentConstraint
// Kind: ScriptStruct; super: none
struct FCreativeDynamicUIAlignmentConstraint
{
public:
    std::uint8_t Alignment; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Anchor; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AspectRatio; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0003
    std::uint8_t Offset[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCreativeDynamicUIAlignmentConstraint, Alignment) == 0, "Offset mismatch for FCreativeDynamicUIAlignmentConstraint::Alignment");
static_assert(offsetof(FCreativeDynamicUIAlignmentConstraint, Anchor) == 1, "Offset mismatch for FCreativeDynamicUIAlignmentConstraint::Anchor");
static_assert(offsetof(FCreativeDynamicUIAlignmentConstraint, AspectRatio) == 2, "Offset mismatch for FCreativeDynamicUIAlignmentConstraint::AspectRatio");
static_assert(offsetof(FCreativeDynamicUIAlignmentConstraint, Offset) == 8, "Offset mismatch for FCreativeDynamicUIAlignmentConstraint::Offset");

// /Script/CreativeDynamicUIRuntime.CreativeDynamicUIFixedSizeModifier
// Kind: ScriptStruct; super: none
struct FCreativeDynamicUIFixedSizeModifier
{
public:
    std::uint8_t Size[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseRenderTransform; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCreativeDynamicUIFixedSizeModifier, Size) == 0, "Offset mismatch for FCreativeDynamicUIFixedSizeModifier::Size");
static_assert(offsetof(FCreativeDynamicUIFixedSizeModifier, bUseRenderTransform) == 8, "Offset mismatch for FCreativeDynamicUIFixedSizeModifier::bUseRenderTransform");

// /Script/CreativeDynamicUIRuntime.CreativeDynamicUIScaleSizeModifier
// Kind: ScriptStruct; super: none
struct FCreativeDynamicUIScaleSizeModifier
{
public:
    std::uint8_t Scale[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseRenderTransform; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCreativeDynamicUIScaleSizeModifier, Scale) == 0, "Offset mismatch for FCreativeDynamicUIScaleSizeModifier::Scale");
static_assert(offsetof(FCreativeDynamicUIScaleSizeModifier, bUseRenderTransform) == 8, "Offset mismatch for FCreativeDynamicUIScaleSizeModifier::bUseRenderTransform");
