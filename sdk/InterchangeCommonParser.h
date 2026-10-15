/**
 * decamp dumper generated SDK
 * Package: /Script/InterchangeCommonParser
 */
#pragma once
#include "Basic.h"

// /Script/InterchangeCommonParser.InterchangeCurve
// Kind: ScriptStruct; super: none
struct FInterchangeCurve
{
public:
    TArray<void*> Keys; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FString ChannelName; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FInterchangeCurve, Keys) == 0, "Offset mismatch for FInterchangeCurve::Keys");
static_assert(offsetof(FInterchangeCurve, ChannelName) == 16, "Offset mismatch for FInterchangeCurve::ChannelName");

// /Script/InterchangeCommonParser.InterchangeCurveKey
// Kind: ScriptStruct; super: none
struct FInterchangeCurveKey
{
public:
    std::uint8_t InterpMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TangentMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TangentWeightMode; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float time; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ArriveTangent; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ArriveTangentWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LeaveTangent; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float LeaveTangentWeight; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInterchangeCurveKey, InterpMode) == 0, "Offset mismatch for FInterchangeCurveKey::InterpMode");
static_assert(offsetof(FInterchangeCurveKey, TangentMode) == 1, "Offset mismatch for FInterchangeCurveKey::TangentMode");
static_assert(offsetof(FInterchangeCurveKey, TangentWeightMode) == 2, "Offset mismatch for FInterchangeCurveKey::TangentWeightMode");
static_assert(offsetof(FInterchangeCurveKey, time) == 4, "Offset mismatch for FInterchangeCurveKey::time");
static_assert(offsetof(FInterchangeCurveKey, Value) == 8, "Offset mismatch for FInterchangeCurveKey::Value");
static_assert(offsetof(FInterchangeCurveKey, ArriveTangent) == 12, "Offset mismatch for FInterchangeCurveKey::ArriveTangent");
static_assert(offsetof(FInterchangeCurveKey, ArriveTangentWeight) == 16, "Offset mismatch for FInterchangeCurveKey::ArriveTangentWeight");
static_assert(offsetof(FInterchangeCurveKey, LeaveTangent) == 20, "Offset mismatch for FInterchangeCurveKey::LeaveTangent");
static_assert(offsetof(FInterchangeCurveKey, LeaveTangentWeight) == 24, "Offset mismatch for FInterchangeCurveKey::LeaveTangentWeight");

// /Script/InterchangeCommonParser.InterchangeStepCurve
// Kind: ScriptStruct; super: none
struct FInterchangeStepCurve
{
public:
    TArray<void*> KeyTimes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x50]; // 0x0010
    FString ChannelName; // 0x0060 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FInterchangeStepCurve, KeyTimes) == 0, "Offset mismatch for FInterchangeStepCurve::KeyTimes");
static_assert(offsetof(FInterchangeStepCurve, ChannelName) == 96, "Offset mismatch for FInterchangeStepCurve::ChannelName");
