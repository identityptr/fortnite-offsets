#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NavCorridor
{
    struct NavCorridorParams
    {
        static constexpr std::string_view Name = "NavCorridorParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Width = 0x30;
            static constexpr std::uintptr_t PathOffsetFromBoundaries = 0x34;
            static constexpr std::uintptr_t ObstacleTaperAngle = 0x38;
            static constexpr std::uintptr_t SmallSectorThreshold = 0x3C;
            static constexpr std::uintptr_t LargeSectorThreshold = 0x40;
            static constexpr std::uintptr_t SimplifyEdgeThreshold = 0x44;
            static constexpr std::uintptr_t bSimplifyFlipPortals = 0x48;
            static constexpr std::uintptr_t bSimplifyConvexPortals = 0x49;
            static constexpr std::uintptr_t bSimplifyConcavePortals = 0x4A;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Width", 0x30, "FloatProperty"},
            {"PathOffsetFromBoundaries", 0x34, "FloatProperty"},
            {"ObstacleTaperAngle", 0x38, "FloatProperty"},
            {"SmallSectorThreshold", 0x3C, "FloatProperty"},
            {"LargeSectorThreshold", 0x40, "FloatProperty"},
            {"SimplifyEdgeThreshold", 0x44, "FloatProperty"},
            {"bSimplifyFlipPortals", 0x48, "BoolProperty"},
            {"bSimplifyConvexPortals", 0x49, "BoolProperty"},
            {"bSimplifyConcavePortals", 0x4A, "BoolProperty"},
        }};
    };

    struct NavCorridorTestingActor
    {
        static constexpr std::string_view Name = "NavCorridorTestingActor";
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

    struct NavCorridorTestingComponent
    {
        static constexpr std::string_view Name = "NavCorridorTestingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NavAgentProps = 0x5C0;
            static constexpr std::uintptr_t FilterClass = 0x5F0;
            static constexpr std::uintptr_t bFindCorridorToGoal = 0x5F8;
            static constexpr std::uintptr_t bFollowPathOnGoalCorridor = 0x5F9;
            static constexpr std::uintptr_t FollowLookAheadDistance = 0x5FC;
            static constexpr std::uintptr_t GoalActor = 0x600;
            static constexpr std::uintptr_t NavData = 0x608;
            static constexpr std::uintptr_t CorridorParams = 0x610;
            static constexpr std::uintptr_t bUpdateParametersFromWidth = 0x660;
            static constexpr std::uintptr_t PathOffset = 0x664;
            static constexpr std::uintptr_t PathfindingTimeUs = 0x668;
            static constexpr std::uintptr_t CorridorTimeUs = 0x66C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"NavAgentProps", 0x5C0, "StructProperty"},
            {"FilterClass", 0x5F0, "ClassProperty"},
            {"bFindCorridorToGoal", 0x5F8, "BoolProperty"},
            {"bFollowPathOnGoalCorridor", 0x5F9, "BoolProperty"},
            {"FollowLookAheadDistance", 0x5FC, "FloatProperty"},
            {"GoalActor", 0x600, "ObjectProperty"},
            {"NavData", 0x608, "ObjectProperty"},
            {"CorridorParams", 0x610, "StructProperty"},
            {"bUpdateParametersFromWidth", 0x660, "BoolProperty"},
            {"PathOffset", 0x664, "FloatProperty"},
            {"PathfindingTimeUs", 0x668, "FloatProperty"},
            {"CorridorTimeUs", 0x66C, "FloatProperty"},
        }};
    };

}
