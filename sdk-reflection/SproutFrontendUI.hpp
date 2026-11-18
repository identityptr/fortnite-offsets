#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutFrontendUI
{
    struct SproutFrontendUIExperienceFlow
    {
        static constexpr std::string_view Name = "SproutFrontendUIExperienceFlow";
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
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"VideoPlayerClass", 0x60, "SoftClassProperty"},
            {"FlowStepArray", 0x80, "ArrayProperty"},
            {"bEnableTrailer", 0x90, "BoolProperty"},
            {"CinematicTrailerVUID", 0x98, "StrProperty"},
            {"CinematicTrailerString", 0xA8, "NameProperty"},
            {"CinematicTrailerRating", 0xB0, "MapProperty"},
        }};
    };

}
