#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VersePerception
{
    struct HearingNoiseBridge
    {
        static constexpr std::string_view Name = "HearingNoiseBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SightDetectorConfig
    {
        static constexpr std::string_view Name = "SightDetectorConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig_Sight";
        struct Offsets
        {
            static constexpr std::uintptr_t Implementation = 0x48;
            static constexpr std::uintptr_t SightRadius = 0x50;
            static constexpr std::uintptr_t LoseSightRadius = 0x54;
            static constexpr std::uintptr_t PeripheralVisionAngleDegrees = 0x58;
            static constexpr std::uintptr_t LosePeripheralVisionAngleDegrees = 0x5C;
            static constexpr std::uintptr_t DetectionByAffiliation = 0x60;
            static constexpr std::uintptr_t AutoSuccessRangeFromLastSeenLocation = 0x64;
            static constexpr std::uintptr_t PointOfViewBackwardOffset = 0x68;
            static constexpr std::uintptr_t NearClippingRadius = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Implementation", 0x48, "ClassProperty"},
            {"SightRadius", 0x50, "FloatProperty"},
            {"LoseSightRadius", 0x54, "FloatProperty"},
            {"PeripheralVisionAngleDegrees", 0x58, "FloatProperty"},
            {"LosePeripheralVisionAngleDegrees", 0x5C, "FloatProperty"},
            {"DetectionByAffiliation", 0x60, "StructProperty"},
            {"AutoSuccessRangeFromLastSeenLocation", 0x64, "FloatProperty"},
            {"PointOfViewBackwardOffset", 0x68, "FloatProperty"},
            {"NearClippingRadius", 0x6C, "FloatProperty"},
        }};
    };

    struct SightObserver
    {
        static constexpr std::string_view Name = "SightObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SenseConfig = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SenseConfig", 0x38, "ObjectProperty"},
        }};
    };

    struct SightPerceivable
    {
        static constexpr std::string_view Name = "SightPerceivable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SightProxyRegistry
    {
        static constexpr std::string_view Name = "SightProxyRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialSenseProxy
    {
        static constexpr std::string_view Name = "SpatialSenseProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatialSenseProxyRegistry
    {
        static constexpr std::string_view Name = "SpatialSenseProxyRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
