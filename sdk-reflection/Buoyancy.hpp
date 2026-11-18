#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Buoyancy
{
    struct BuoyancyEventInterface
    {
        static constexpr std::string_view Name = "BuoyancyEventInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnSurfaceTouchBegin",
            "OnSurfaceTouchEnd",
            "OnSurfaceTouching",
        }};
    };

    struct BuoyancyRuntimeSettings
    {
        static constexpr std::string_view Name = "BuoyancyRuntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bBuoyancyEnabled = 0x30;
            static constexpr std::uintptr_t bKeepFloatingObjectsAwake = 0x31;
            static constexpr std::uintptr_t WaterDensity = 0x34;
            static constexpr std::uintptr_t WaterDrag = 0x38;
            static constexpr std::uintptr_t WaterLift = 0x3C;
            static constexpr std::uintptr_t CollisionChannelForWaterObjects = 0x40;
            static constexpr std::uintptr_t MaxNumBoundsSubdivisions = 0x44;
            static constexpr std::uintptr_t MinBoundsSubdivisionVol = 0x48;
            static constexpr std::uintptr_t SurfaceTouchCallbackFlags = 0x4C;
            static constexpr std::uintptr_t MinVelocityForSurfaceTouchCallback = 0x50;
            static constexpr std::uintptr_t bEnableSplineKeyCacheGrid = 0x54;
            static constexpr std::uintptr_t SplineKeyCacheGridSize = 0x58;
            static constexpr std::uintptr_t SplineKeyCacheLimit = 0x5C;
            static constexpr std::uintptr_t bCullInteractionsByOceanSpline = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bBuoyancyEnabled", 0x30, "BoolProperty"},
            {"bKeepFloatingObjectsAwake", 0x31, "BoolProperty"},
            {"WaterDensity", 0x34, "FloatProperty"},
            {"WaterDrag", 0x38, "FloatProperty"},
            {"WaterLift", 0x3C, "FloatProperty"},
            {"CollisionChannelForWaterObjects", 0x40, "ByteProperty"},
            {"MaxNumBoundsSubdivisions", 0x44, "IntProperty"},
            {"MinBoundsSubdivisionVol", 0x48, "FloatProperty"},
            {"SurfaceTouchCallbackFlags", 0x4C, "ByteProperty"},
            {"MinVelocityForSurfaceTouchCallback", 0x50, "FloatProperty"},
            {"bEnableSplineKeyCacheGrid", 0x54, "BoolProperty"},
            {"SplineKeyCacheGridSize", 0x58, "FloatProperty"},
            {"SplineKeyCacheLimit", 0x5C, "UInt32Property"},
            {"bCullInteractionsByOceanSpline", 0x60, "BoolProperty"},
        }};
    };

    struct BuoyancySubsystem
    {
        static constexpr std::string_view Name = "BuoyancySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsEnabled",
        }};
    };

}
