#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FigmentFrontendRuntime
{
    struct FigmentFrontendExperienceFlow
    {
        static constexpr std::string_view Name = "FigmentFrontendExperienceFlow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VideoPlayerClass = 0x60;
            static constexpr std::uintptr_t FlowStepArray = 0x80;
            static constexpr std::uintptr_t bEnableTrailer = 0x90;
            static constexpr std::uintptr_t CinematicTrailerVUID = 0x98;
            static constexpr std::uintptr_t CinematicTrailerString = 0xA8;
            static constexpr std::uintptr_t CinematicTrailerRating = 0xB0;
            static constexpr std::uintptr_t SimpleBuildAndEditModalHelper = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"VideoPlayerClass", 0x60, "SoftClassProperty"},
            {"FlowStepArray", 0x80, "ArrayProperty"},
            {"bEnableTrailer", 0x90, "BoolProperty"},
            {"CinematicTrailerVUID", 0x98, "StrProperty"},
            {"CinematicTrailerString", 0xA8, "NameProperty"},
            {"CinematicTrailerRating", 0xB0, "MapProperty"},
            {"SimpleBuildAndEditModalHelper", 0xC8, "ClassProperty"},
        }};
    };

}
