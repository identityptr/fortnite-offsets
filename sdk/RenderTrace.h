/**
 * decamp dumper generated SDK
 * Package: /Script/RenderTrace
 */
#pragma once
#include "Basic.h"

// /Script/RenderTrace.PhysicalMaterialTraceInput
// Kind: ScriptStruct; super: none
struct FPhysicalMaterialTraceInput
{
public:
    void* PhysicalMaterial; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Input[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhysicalMaterialTraceInput, PhysicalMaterial) == 0, "Offset mismatch for FPhysicalMaterialTraceInput::PhysicalMaterial");
static_assert(offsetof(FPhysicalMaterialTraceInput, Input) == 8, "Offset mismatch for FPhysicalMaterialTraceInput::Input");

// /Script/RenderTrace.MaterialExpressionPhysicalMaterialOutput
// Kind: Class; super: MaterialExpressionCustomOutput
class UMaterialExpressionPhysicalMaterialOutput
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> Inputs; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMaterialExpressionPhysicalMaterialOutput, Inputs) == 176, "Offset mismatch for UMaterialExpressionPhysicalMaterialOutput::Inputs");
