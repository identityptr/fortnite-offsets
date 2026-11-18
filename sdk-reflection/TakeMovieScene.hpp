#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TakeMovieScene
{
    struct FrameHitchSceneDecoration
    {
        static constexpr std::string_view Name = "FrameHitchSceneDecoration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetTimecode = 0x28;
            static constexpr std::uintptr_t ActualTimecode = 0x348;
            static constexpr std::uintptr_t TimecodeProviderFrameRate = 0x668;
            static constexpr std::uintptr_t RecordFrameRate = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetTimecode", 0x28, "StructProperty"},
            {"ActualTimecode", 0x348, "StructProperty"},
            {"TimecodeProviderFrameRate", 0x668, "StructProperty"},
            {"RecordFrameRate", 0x670, "StructProperty"},
        }};
    };

    struct MovieSceneTakeSection
    {
        static constexpr std::string_view Name = "MovieSceneTakeSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t HoursCurve = 0x140;
            static constexpr std::uintptr_t MinutesCurve = 0x208;
            static constexpr std::uintptr_t SecondsCurve = 0x2D0;
            static constexpr std::uintptr_t FramesCurve = 0x398;
            static constexpr std::uintptr_t SubFramesCurve = 0x460;
            static constexpr std::uintptr_t RateCurve = 0x530;
            static constexpr std::uintptr_t Slate = 0x600;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"HoursCurve", 0x140, "StructProperty"},
            {"MinutesCurve", 0x208, "StructProperty"},
            {"SecondsCurve", 0x2D0, "StructProperty"},
            {"FramesCurve", 0x398, "StructProperty"},
            {"SubFramesCurve", 0x460, "StructProperty"},
            {"RateCurve", 0x530, "StructProperty"},
            {"Slate", 0x600, "StructProperty"},
        }};
    };

    struct MovieSceneTakeSettings
    {
        static constexpr std::string_view Name = "MovieSceneTakeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HoursName = 0x28;
            static constexpr std::uintptr_t MinutesName = 0x38;
            static constexpr std::uintptr_t SecondsName = 0x48;
            static constexpr std::uintptr_t FramesName = 0x58;
            static constexpr std::uintptr_t SubFramesName = 0x68;
            static constexpr std::uintptr_t RateName = 0x78;
            static constexpr std::uintptr_t SlateName = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"HoursName", 0x28, "StrProperty"},
            {"MinutesName", 0x38, "StrProperty"},
            {"SecondsName", 0x48, "StrProperty"},
            {"FramesName", 0x58, "StrProperty"},
            {"SubFramesName", 0x68, "StrProperty"},
            {"RateName", 0x78, "StrProperty"},
            {"SlateName", 0x88, "StrProperty"},
        }};
    };

    struct MovieSceneTakeTrack
    {
        static constexpr std::string_view Name = "MovieSceneTakeTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};
    };

}
