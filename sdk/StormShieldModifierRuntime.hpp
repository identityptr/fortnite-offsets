#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StormShieldModifierRuntime
{
    struct FortAthenaMutator_SplitStorm
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SplitStorm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SafeZoneProxyClass = 0x418;
            static constexpr std::uintptr_t ProxyUpdateFrequency = 0x420;
            static constexpr std::uintptr_t SplitParallelTravelDistance = 0x448;
            static constexpr std::uintptr_t JoinParallelTravelDistance = 0x470;
            static constexpr std::uintptr_t SplitPerpendicularTravelDistance = 0x498;
            static constexpr std::uintptr_t JoinAngleFromParallelDegrees = 0x4C0;
            static constexpr std::uintptr_t PhaseToSplitStorm = 0x4E8;
            static constexpr std::uintptr_t ProxyMapCircleColor = 0x510;
            static constexpr std::uintptr_t ProxyMapCircleLineThickness = 0x520;
            static constexpr std::uintptr_t ProxyMapCircleLineSegments = 0x524;
            static constexpr std::uintptr_t SafeZoneProxy = 0x528;
            static constexpr std::uintptr_t CurrentProxyPhase = 0x530;
            static constexpr std::uintptr_t MoveToHoldWaitDuration = 0x534;
            static constexpr std::uintptr_t MoveToHoldDuration = 0x538;
            static constexpr std::uintptr_t MoveToEndWaitDuration = 0x53C;
            static constexpr std::uintptr_t MoveToEndDuration = 0x540;
            static constexpr std::uintptr_t MoveStartTime = 0x544;
            static constexpr std::uintptr_t ProxyStartCircle = 0x548;
            static constexpr std::uintptr_t ProxyEndCircle = 0x568;
            static constexpr std::uintptr_t ProxyHoldCircle = 0x588;
            static constexpr std::uintptr_t CurrentProxyCircle = 0x5A8;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"SafeZoneProxyClass", 0x418, "ClassProperty"},
            {"ProxyUpdateFrequency", 0x420, "StructProperty"},
            {"SplitParallelTravelDistance", 0x448, "StructProperty"},
            {"JoinParallelTravelDistance", 0x470, "StructProperty"},
            {"SplitPerpendicularTravelDistance", 0x498, "StructProperty"},
            {"JoinAngleFromParallelDegrees", 0x4C0, "StructProperty"},
            {"PhaseToSplitStorm", 0x4E8, "StructProperty"},
            {"ProxyMapCircleColor", 0x510, "StructProperty"},
            {"ProxyMapCircleLineThickness", 0x520, "FloatProperty"},
            {"ProxyMapCircleLineSegments", 0x524, "IntProperty"},
            {"SafeZoneProxy", 0x528, "ObjectProperty"},
            {"CurrentProxyPhase", 0x530, "EnumProperty"},
            {"MoveToHoldWaitDuration", 0x534, "FloatProperty"},
            {"MoveToHoldDuration", 0x538, "FloatProperty"},
            {"MoveToEndWaitDuration", 0x53C, "FloatProperty"},
            {"MoveToEndDuration", 0x540, "FloatProperty"},
            {"MoveStartTime", 0x544, "FloatProperty"},
            {"ProxyStartCircle", 0x548, "StructProperty"},
            {"ProxyEndCircle", 0x568, "StructProperty"},
            {"ProxyHoldCircle", 0x588, "StructProperty"},
            {"CurrentProxyCircle", 0x5A8, "StructProperty"},
        }};
    };

}
