#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ZoneGraphDebug
{
    struct ZoneGraphTestingActor
    {
        static constexpr std::string_view Name = "ZoneGraphTestingActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugComp = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugComp", 0x278, "ObjectProperty"},
        }};
    };

    struct ZoneGraphTestingComponent
    {
        static constexpr std::string_view Name = "ZoneGraphTestingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ZoneGraph = 0x570;
            static constexpr std::uintptr_t LaneLocation = 0x578;
            static constexpr std::uintptr_t NextLaneLocation = 0x5E8;
            static constexpr std::uintptr_t NearestLaneLocation = 0x658;
            static constexpr std::uintptr_t SearchExtent = 0x6C8;
            static constexpr std::uintptr_t AdvanceDistance = 0x6E0;
            static constexpr std::uintptr_t NearestTestOffset = 0x6E8;
            static constexpr std::uintptr_t QueryFilter = 0x700;
            static constexpr std::uintptr_t bDrawLinkedLanes = 0x70C;
            static constexpr std::uintptr_t bDrawLaneTangentVectors = 0x70D;
            static constexpr std::uintptr_t bDrawLaneSmoothing = 0x70E;
            static constexpr std::uintptr_t bDrawBVTreeQuery = 0x70F;
            static constexpr std::uintptr_t bDrawLanePath = 0x710;
            static constexpr std::uintptr_t OtherActor = 0x718;
            static constexpr std::uintptr_t CustomTests = 0x820;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ZoneGraph", 0x570, "ObjectProperty"},
            {"LaneLocation", 0x578, "StructProperty"},
            {"NextLaneLocation", 0x5E8, "StructProperty"},
            {"NearestLaneLocation", 0x658, "StructProperty"},
            {"SearchExtent", 0x6C8, "StructProperty"},
            {"AdvanceDistance", 0x6E0, "FloatProperty"},
            {"NearestTestOffset", 0x6E8, "StructProperty"},
            {"QueryFilter", 0x700, "StructProperty"},
            {"bDrawLinkedLanes", 0x70C, "BoolProperty"},
            {"bDrawLaneTangentVectors", 0x70D, "BoolProperty"},
            {"bDrawLaneSmoothing", 0x70E, "BoolProperty"},
            {"bDrawBVTreeQuery", 0x70F, "BoolProperty"},
            {"bDrawLanePath", 0x710, "BoolProperty"},
            {"OtherActor", 0x718, "ObjectProperty"},
            {"CustomTests", 0x820, "ArrayProperty"},
        }};
    };

    struct ZoneLaneTest
    {
        static constexpr std::string_view Name = "ZoneLaneTest";
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

}
