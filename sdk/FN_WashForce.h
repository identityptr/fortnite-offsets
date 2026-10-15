/**
 * decamp dumper generated SDK
 * Package: /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_WashForce
 */
#pragma once
#include "Basic.h"

// /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_WashForce.FN_WashForce_C
// Kind: BlueprintGeneratedClass; super: FieldSystemActor
class UFN_WashForce_C
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0278 (Size: 0x8, Type: StructProperty)
    void* RadialFalloff; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* Multiply; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* RadialVector; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    double Radius; // 0x0298 (Size: 0x8, Type: DoubleProperty)
    double Strength; // 0x02A0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFN_WashForce_C, UberGraphFrame) == 632, "Offset mismatch for UFN_WashForce_C::UberGraphFrame");
static_assert(offsetof(UFN_WashForce_C, RadialFalloff) == 640, "Offset mismatch for UFN_WashForce_C::RadialFalloff");
static_assert(offsetof(UFN_WashForce_C, Multiply) == 648, "Offset mismatch for UFN_WashForce_C::Multiply");
static_assert(offsetof(UFN_WashForce_C, RadialVector) == 656, "Offset mismatch for UFN_WashForce_C::RadialVector");
static_assert(offsetof(UFN_WashForce_C, Radius) == 664, "Offset mismatch for UFN_WashForce_C::Radius");
static_assert(offsetof(UFN_WashForce_C, Strength) == 672, "Offset mismatch for UFN_WashForce_C::Strength");
