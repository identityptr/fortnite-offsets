#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TempestRuntime
{
    struct FortAIControllerComponent_Tempest
    {
        static constexpr std::string_view Name = "FortAIControllerComponent_Tempest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WeatherComponent = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WeatherComponent", 0xC8, "ObjectProperty"},
        }};
    };

    struct FortCheatManager_Tempest
    {
        static constexpr std::string_view Name = "FortCheatManager_Tempest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TempestMovementComponent
    {
        static constexpr std::string_view Name = "TempestMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementData = 0xC0;
            static constexpr std::uintptr_t OnTempestMovementStuck = 0x110;
            static constexpr std::uintptr_t OnTempestSafeZoneStateChanged = 0x120;
            static constexpr std::uintptr_t MovementMode = 0x130;
            static constexpr std::uintptr_t FindNextMovementLocationQuery = 0x138;
            static constexpr std::uintptr_t MovementPath = 0x140;
            static constexpr std::uintptr_t MovementSpeed = 0x148;
            static constexpr std::uintptr_t RotationSpeed = 0x170;
            static constexpr std::uintptr_t bFloatOnWater = 0x198;
            static constexpr std::uintptr_t bShouldIgnoreZMovement = 0x198;
            static constexpr std::uintptr_t WaterTraceZOffset = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MovementData", 0xC0, "StructProperty"},
            {"OnTempestMovementStuck", 0x110, "MulticastInlineDelegateProperty"},
            {"OnTempestSafeZoneStateChanged", 0x120, "MulticastInlineDelegateProperty"},
            {"MovementMode", 0x130, "EnumProperty"},
            {"FindNextMovementLocationQuery", 0x138, "ObjectProperty"},
            {"MovementPath", 0x140, "ObjectProperty"},
            {"MovementSpeed", 0x148, "StructProperty"},
            {"RotationSpeed", 0x170, "StructProperty"},
            {"bFloatOnWater", 0x198, "BoolProperty"},
            {"bShouldIgnoreZMovement", 0x198, "BoolProperty"},
            {"WaterTraceZOffset", 0x1A0, "StructProperty"},
        }};
    };

    struct TempestStateMachineComponent
    {
        static constexpr std::string_view Name = "TempestStateMachineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyOnCompletion = 0xC0;
            static constexpr std::uintptr_t FormationDuration = 0xC8;
            static constexpr std::uintptr_t ActiveDuration = 0xF0;
            static constexpr std::uintptr_t DissipationDuration = 0x118;
            static constexpr std::uintptr_t CurrentStateInfo = 0x140;
            static constexpr std::uintptr_t OnTempestStateChangedDelegate = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bDestroyOnCompletion", 0xC0, "BoolProperty"},
            {"FormationDuration", 0xC8, "StructProperty"},
            {"ActiveDuration", 0xF0, "StructProperty"},
            {"DissipationDuration", 0x118, "StructProperty"},
            {"CurrentStateInfo", 0x140, "StructProperty"},
            {"OnTempestStateChangedDelegate", 0x170, "MulticastInlineDelegateProperty"},
        }};
    };

}
