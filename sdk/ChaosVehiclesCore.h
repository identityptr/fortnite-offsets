/**
 * decamp dumper generated SDK
 * Package: /Script/ChaosVehiclesCore
 */
#pragma once
#include "Basic.h"

// /Script/ChaosVehiclesCore.ModuleInputContainer
// Kind: ScriptStruct; super: none
struct FModuleInputContainer
{
public:
    TArray<void*> InputValues; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FModuleInputContainer, InputValues) == 0, "Offset mismatch for FModuleInputContainer::InputValues");

// /Script/ChaosVehiclesCore.ModuleInputSetup
// Kind: ScriptStruct; super: none
struct FModuleInputSetup
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyInputDecay; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInverseInputDecay; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearAfterConsumed; // 0x0007 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FModuleInputSetup, Name) == 0, "Offset mismatch for FModuleInputSetup::Name");
static_assert(offsetof(FModuleInputSetup, Type) == 4, "Offset mismatch for FModuleInputSetup::Type");
static_assert(offsetof(FModuleInputSetup, bApplyInputDecay) == 5, "Offset mismatch for FModuleInputSetup::bApplyInputDecay");
static_assert(offsetof(FModuleInputSetup, bInverseInputDecay) == 6, "Offset mismatch for FModuleInputSetup::bInverseInputDecay");
static_assert(offsetof(FModuleInputSetup, bClearAfterConsumed) == 7, "Offset mismatch for FModuleInputSetup::bClearAfterConsumed");

// /Script/ChaosVehiclesCore.ModuleInputValue
// Kind: ScriptStruct; super: none
struct FModuleInputValue
{
public:
    std::uint8_t bHasValue; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Value[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::int32_t ValueInt; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t ValueType; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyInputDecay; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInverseInputDecay; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearAfterConsumed; // 0x0027 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FModuleInputValue, bHasValue) == 0, "Offset mismatch for FModuleInputValue::bHasValue");
static_assert(offsetof(FModuleInputValue, Value) == 8, "Offset mismatch for FModuleInputValue::Value");
static_assert(offsetof(FModuleInputValue, ValueInt) == 32, "Offset mismatch for FModuleInputValue::ValueInt");
static_assert(offsetof(FModuleInputValue, ValueType) == 36, "Offset mismatch for FModuleInputValue::ValueType");
static_assert(offsetof(FModuleInputValue, bApplyInputDecay) == 37, "Offset mismatch for FModuleInputValue::bApplyInputDecay");
static_assert(offsetof(FModuleInputValue, bInverseInputDecay) == 38, "Offset mismatch for FModuleInputValue::bInverseInputDecay");
static_assert(offsetof(FModuleInputValue, bClearAfterConsumed) == 39, "Offset mismatch for FModuleInputValue::bClearAfterConsumed");

// /Script/ChaosVehiclesCore.DefaultModularVehicleInputModifier
// Kind: Class; super: Object
class UDefaultModularVehicleInputModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float RiseRate; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float FallRate; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InputCurveFunction; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UDefaultModularVehicleInputModifier, RiseRate) == 40, "Offset mismatch for UDefaultModularVehicleInputModifier::RiseRate");
static_assert(offsetof(UDefaultModularVehicleInputModifier, FallRate) == 44, "Offset mismatch for UDefaultModularVehicleInputModifier::FallRate");
static_assert(offsetof(UDefaultModularVehicleInputModifier, InputCurveFunction) == 48, "Offset mismatch for UDefaultModularVehicleInputModifier::InputCurveFunction");

// /Script/ChaosVehiclesCore.VehicleInputProducerBase
// Kind: Class; super: Object
class UVehicleInputProducerBase
{
public:
    std::uint8_t Opaque[1];
};
