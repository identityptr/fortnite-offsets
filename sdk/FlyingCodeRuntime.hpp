#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FlyingCodeRuntime
{
    struct FlyingAttributeSet
    {
        static constexpr std::string_view Name = "FlyingAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxFuel = 0x50;
            static constexpr std::uintptr_t FuelUsageRate = 0x78;
            static constexpr std::uintptr_t LocalFuel = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxFuel", 0x50, "StructProperty"},
            {"FuelUsageRate", 0x78, "StructProperty"},
            {"LocalFuel", 0xA0, "StructProperty"},
        }};
    };

    struct FortCameraMode_Flying
    {
        static constexpr std::string_view Name = "FortCameraMode_Flying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t LastActiveTimeSeconds = 0x2080;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LastActiveTimeSeconds", 0x2080, "FloatProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicFlying
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicFlying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableInput = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnableInput", 0x1B8, "BoolProperty"},
        }};
    };

    struct FortMovementMode_FlyingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_FlyingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementInput = 0x38;
            static constexpr std::uintptr_t CeilingHeight = 0x48;
            static constexpr std::uintptr_t MoveOrientation = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MovementInput", 0x38, "StructProperty"},
            {"CeilingHeight", 0x48, "FloatProperty"},
            {"MoveOrientation", 0x50, "StructProperty"},
        }};
    };

}
