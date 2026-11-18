#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GeometryCacheTracks
{
    struct MovieSceneGeometryCacheSection
    {
        static constexpr std::string_view Name = "MovieSceneGeometryCacheSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Params", 0x140, "StructProperty"},
        }};
    };

    struct MovieSceneGeometryCacheTrack
    {
        static constexpr std::string_view Name = "MovieSceneGeometryCacheTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationSections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimationSections", 0x100, "ArrayProperty"},
        }};
    };

}
