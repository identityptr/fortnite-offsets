#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UAFPoseSearch
{
    struct NotifyState_PoseSearchInteractionAlignment
    {
        static constexpr std::string_view Name = "NotifyState_PoseSearchInteractionAlignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyStateBehaviorFlags = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyStateBehaviorFlags", 0x29, "ByteProperty"},
        }};
    };

    struct NotifyState_PoseSearchSteerAlongTrajectory
    {
        static constexpr std::string_view Name = "NotifyState_PoseSearchSteerAlongTrajectory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t Trajectory = 0x30;
            static constexpr std::uintptr_t StartTrajectorySampleTime = 0x60;
            static constexpr std::uintptr_t EndTrajectorySampleTime = 0x64;
            static constexpr std::uintptr_t SmoothingTime = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Trajectory", 0x30, "StructProperty"},
            {"StartTrajectorySampleTime", 0x60, "FloatProperty"},
            {"EndTrajectorySampleTime", 0x64, "FloatProperty"},
            {"SmoothingTime", 0x68, "FloatProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_DistanceFromAnimNextVar
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_DistanceFromAnimNextVar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel_Distance";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceVariable = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DistanceVariable", 0x90, "StructProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_HeadingFromVar
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_HeadingFromVar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel_Heading";
        struct Offsets
        {
            static constexpr std::uintptr_t Variable = 0x88;
            static constexpr std::uintptr_t Offset = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Variable", 0x88, "StructProperty"},
            {"Offset", 0xB8, "StructProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_PositionFromVar
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_PositionFromVar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel_Position";
        struct Offsets
        {
            static constexpr std::uintptr_t Variable = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Variable", 0x88, "StructProperty"},
        }};
    };

}
