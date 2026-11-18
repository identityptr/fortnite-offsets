#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MovieSceneGameplayEventTrack
{
    struct MovieSceneGameplayEventSection
    {
        static constexpr std::string_view Name = "MovieSceneGameplayEventSection";
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

    struct MovieSceneGameplayEventSystem
    {
        static constexpr std::string_view Name = "MovieSceneGameplayEventSystem";
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

    struct MovieSceneGameplayEventTrack
    {
        static constexpr std::string_view Name = "MovieSceneGameplayEventTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t bFireEventsWhenBackwards = 0x100;
            static constexpr std::uintptr_t bFireEventsWhenForwards = 0x100;
            static constexpr std::uintptr_t Sections = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bFireEventsWhenBackwards", 0x100, "BoolProperty"},
            {"bFireEventsWhenForwards", 0x100, "BoolProperty"},
            {"Sections", 0x108, "ArrayProperty"},
        }};
    };

}
