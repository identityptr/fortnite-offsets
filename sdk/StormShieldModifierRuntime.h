/**
 * decamp dumper generated SDK
 * Package: /Script/StormShieldModifierRuntime
 */
#pragma once
#include "Basic.h"

// /Script/StormShieldModifierRuntime.SplitStormProxyCircle
// Kind: ScriptStruct; super: none
struct FSplitStormProxyCircle
{
public:
    std::uint8_t Center[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSplitStormProxyCircle, Center) == 0, "Offset mismatch for FSplitStormProxyCircle::Center");
static_assert(offsetof(FSplitStormProxyCircle, Radius) == 24, "Offset mismatch for FSplitStormProxyCircle::Radius");

// /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_SplitStorm
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    void* SafeZoneProxyClass; // 0x0400 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ProxyUpdateFrequency[0x28]; // 0x0408 (Size: 0x28, Type: StructProperty)
    std::uint8_t SplitParallelTravelDistance[0x28]; // 0x0430 (Size: 0x28, Type: StructProperty)
    std::uint8_t JoinParallelTravelDistance[0x28]; // 0x0458 (Size: 0x28, Type: StructProperty)
    std::uint8_t SplitPerpendicularTravelDistance[0x28]; // 0x0480 (Size: 0x28, Type: StructProperty)
    std::uint8_t JoinAngleFromParallelDegrees[0x28]; // 0x04A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PhaseToSplitStorm[0x28]; // 0x04D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProxyMapCircleColor[0x10]; // 0x04F8 (Size: 0x10, Type: StructProperty)
    float ProxyMapCircleLineThickness; // 0x0508 (Size: 0x4, Type: FloatProperty)
    std::int32_t ProxyMapCircleLineSegments; // 0x050C (Size: 0x4, Type: IntProperty)
    void* SafeZoneProxy; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentProxyPhase; // 0x0518 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0519
    float MoveToHoldWaitDuration; // 0x051C (Size: 0x4, Type: FloatProperty)
    float MoveToHoldDuration; // 0x0520 (Size: 0x4, Type: FloatProperty)
    float MoveToEndWaitDuration; // 0x0524 (Size: 0x4, Type: FloatProperty)
    float MoveToEndDuration; // 0x0528 (Size: 0x4, Type: FloatProperty)
    float MoveStartTime; // 0x052C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ProxyStartCircle[0x20]; // 0x0530 (Size: 0x20, Type: StructProperty)
    std::uint8_t ProxyEndCircle[0x20]; // 0x0550 (Size: 0x20, Type: StructProperty)
    std::uint8_t ProxyHoldCircle[0x20]; // 0x0570 (Size: 0x20, Type: StructProperty)
    std::uint8_t CurrentProxyCircle[0x1]; // 0x0590 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_SplitStorm, SafeZoneProxyClass) == 1024, "Offset mismatch for UFortAthenaMutator_SplitStorm::SafeZoneProxyClass");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, ProxyUpdateFrequency) == 1032, "Offset mismatch for UFortAthenaMutator_SplitStorm::ProxyUpdateFrequency");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, SplitParallelTravelDistance) == 1072, "Offset mismatch for UFortAthenaMutator_SplitStorm::SplitParallelTravelDistance");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, JoinParallelTravelDistance) == 1112, "Offset mismatch for UFortAthenaMutator_SplitStorm::JoinParallelTravelDistance");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, SplitPerpendicularTravelDistance) == 1152, "Offset mismatch for UFortAthenaMutator_SplitStorm::SplitPerpendicularTravelDistance");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, JoinAngleFromParallelDegrees) == 1192, "Offset mismatch for UFortAthenaMutator_SplitStorm::JoinAngleFromParallelDegrees");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, PhaseToSplitStorm) == 1232, "Offset mismatch for UFortAthenaMutator_SplitStorm::PhaseToSplitStorm");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, ProxyMapCircleColor) == 1272, "Offset mismatch for UFortAthenaMutator_SplitStorm::ProxyMapCircleColor");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, ProxyMapCircleLineThickness) == 1288, "Offset mismatch for UFortAthenaMutator_SplitStorm::ProxyMapCircleLineThickness");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, ProxyMapCircleLineSegments) == 1292, "Offset mismatch for UFortAthenaMutator_SplitStorm::ProxyMapCircleLineSegments");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, SafeZoneProxy) == 1296, "Offset mismatch for UFortAthenaMutator_SplitStorm::SafeZoneProxy");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, CurrentProxyPhase) == 1304, "Offset mismatch for UFortAthenaMutator_SplitStorm::CurrentProxyPhase");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, MoveToHoldWaitDuration) == 1308, "Offset mismatch for UFortAthenaMutator_SplitStorm::MoveToHoldWaitDuration");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, MoveToHoldDuration) == 1312, "Offset mismatch for UFortAthenaMutator_SplitStorm::MoveToHoldDuration");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, MoveToEndWaitDuration) == 1316, "Offset mismatch for UFortAthenaMutator_SplitStorm::MoveToEndWaitDuration");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, MoveToEndDuration) == 1320, "Offset mismatch for UFortAthenaMutator_SplitStorm::MoveToEndDuration");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, MoveStartTime) == 1324, "Offset mismatch for UFortAthenaMutator_SplitStorm::MoveStartTime");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, ProxyStartCircle) == 1328, "Offset mismatch for UFortAthenaMutator_SplitStorm::ProxyStartCircle");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, ProxyEndCircle) == 1360, "Offset mismatch for UFortAthenaMutator_SplitStorm::ProxyEndCircle");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, ProxyHoldCircle) == 1392, "Offset mismatch for UFortAthenaMutator_SplitStorm::ProxyHoldCircle");
static_assert(offsetof(UFortAthenaMutator_SplitStorm, CurrentProxyCircle) == 1424, "Offset mismatch for UFortAthenaMutator_SplitStorm::CurrentProxyCircle");
