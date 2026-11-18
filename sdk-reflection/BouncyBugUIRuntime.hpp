#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BouncyBugUIRuntime
{
    struct FortGameplayAbility_BouncyBugBouncingMovement
    {
        static constexpr std::string_view Name = "FortGameplayAbility_BouncyBugBouncingMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActionName = 0xB60;
            static constexpr std::uintptr_t UseActionNameKBM = 0xB64;
            static constexpr std::uintptr_t UseActionNameGamepad = 0xB68;
            static constexpr std::uintptr_t BounceText = 0xB70;
            static constexpr std::uintptr_t DiveBounceText = 0xB80;
            static constexpr std::uintptr_t RevUpText = 0xB90;
            static constexpr std::uintptr_t ExitText = 0xBA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PrimaryActionName", 0xB60, "NameProperty"},
            {"UseActionNameKBM", 0xB64, "NameProperty"},
            {"UseActionNameGamepad", 0xB68, "NameProperty"},
            {"BounceText", 0xB70, "TextProperty"},
            {"DiveBounceText", 0xB80, "TextProperty"},
            {"RevUpText", 0xB90, "TextProperty"},
            {"ExitText", 0xBA0, "TextProperty"},
        }};
    };

}
