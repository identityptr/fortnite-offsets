#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntitySequencer
{
    struct MovieSceneVerseEventSection
    {
        static constexpr std::string_view Name = "MovieSceneVerseEventSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t EventChannel = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventChannel", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneVerseEventSystem
    {
        static constexpr std::string_view Name = "MovieSceneVerseEventSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneVerseEventTrack
    {
        static constexpr std::string_view Name = "MovieSceneVerseEventTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0x100, "ArrayProperty"},
        }};
    };

}
