#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ZoneGraphAnnotations
{
    struct ZoneGraphAnnotationComponent
    {
        static constexpr std::string_view Name = "ZoneGraphAnnotationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableDebugDrawing = 0x5D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnableDebugDrawing", 0x5D8, "BoolProperty"},
        }};
    };

    struct ZoneGraphAnnotationSubsystem
    {
        static constexpr std::string_view Name = "ZoneGraphAnnotationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredComponents = 0x48;
            static constexpr std::uintptr_t Events = 0x58;
            static constexpr std::uintptr_t TagToAnnotationLookup = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RegisteredComponents", 0x48, "ArrayProperty"},
            {"Events", 0x58, "StructProperty"},
            {"TagToAnnotationLookup", 0x80, "ArrayProperty"},
        }};
    };

    struct ZoneGraphAnnotationTest
    {
        static constexpr std::string_view Name = "ZoneGraphAnnotationTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerComponent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerComponent", 0x28, "ObjectProperty"},
        }};
    };

    struct ZoneGraphAnnotationTestingActor
    {
        static constexpr std::string_view Name = "ZoneGraphAnnotationTestingActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TestingComp = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TestingComp", 0x278, "ObjectProperty"},
        }};
    };

    struct ZoneGraphAnnotationTestingComponent
    {
        static constexpr std::string_view Name = "ZoneGraphAnnotationTestingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Tests = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tests", 0x5C0, "ArrayProperty"},
        }};
    };

    struct ZoneGraphDisturbanceAnnotation
    {
        static constexpr std::string_view Name = "ZoneGraphDisturbanceAnnotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ZoneGraphAnnotationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DangerAnnotationTag = 0x5E0;
            static constexpr std::uintptr_t ObstacleAnnotationTag = 0x5E1;
            static constexpr std::uintptr_t AffectedLaneTags = 0x5E4;
            static constexpr std::uintptr_t EscapeLaneTags = 0x5F0;
            static constexpr std::uintptr_t IdealSpanLength = 0x5FC;
            static constexpr std::uintptr_t ZoneGraphSubsystem = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DangerAnnotationTag", 0x5E0, "StructProperty"},
            {"ObstacleAnnotationTag", 0x5E1, "StructProperty"},
            {"AffectedLaneTags", 0x5E4, "StructProperty"},
            {"EscapeLaneTags", 0x5F0, "StructProperty"},
            {"IdealSpanLength", 0x5FC, "FloatProperty"},
            {"ZoneGraphSubsystem", 0x640, "ObjectProperty"},
        }};
    };

    struct ZoneGraphDisturbanceAnnotationBPLibrary
    {
        static constexpr std::string_view Name = "ZoneGraphDisturbanceAnnotationBPLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ZoneGraphDisturbanceAnnotationTest
    {
        static constexpr std::string_view Name = "ZoneGraphDisturbanceAnnotationTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ZoneGraphAnnotationTest";
        struct Offsets
        {
            static constexpr std::uintptr_t Offset = 0x30;
            static constexpr std::uintptr_t duration = 0x48;
            static constexpr std::uintptr_t DangerRadius = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Offset", 0x30, "StructProperty"},
            {"duration", 0x48, "FloatProperty"},
            {"DangerRadius", 0x4C, "FloatProperty"},
        }};
    };

}
