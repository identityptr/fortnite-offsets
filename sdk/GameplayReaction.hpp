#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayReaction
{
    struct GameplayReaction
    {
        static constexpr std::string_view Name = "GameplayReaction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayReactionContext
    {
        static constexpr std::string_view Name = "GameplayReactionContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Instigator = 0x0;
            static constexpr std::uintptr_t Target = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Instigator", 0x0, "ObjectProperty"},
            {"Target", 0x8, "ObjectProperty"},
        }};
    };

    struct VerseGameplayReaction
    {
        static constexpr std::string_view Name = "VerseGameplayReaction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseGameplayReactionContext
    {
        static constexpr std::string_view Name = "VerseGameplayReactionContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
