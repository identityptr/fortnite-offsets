#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MilitiaExpireRuntime
{
    struct FortAthenaMutator_MilitiaExpire
    {
        static constexpr std::string_view Name = "FortAthenaMutator_MilitiaExpire";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HF_ShouldBotUseDBNO = 0x410;
            static constexpr std::uintptr_t AnyReviverTags = 0x438;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HF_ShouldBotUseDBNO", 0x410, "StructProperty"},
            {"AnyReviverTags", 0x438, "StructProperty"},
        }};
    };

    struct MilitiaExpireAnalyticsLibrary
    {
        static constexpr std::string_view Name = "MilitiaExpireAnalyticsLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReviveKitConsumableAnimInstance
    {
        static constexpr std::string_view Name = "ReviveKitConsumableAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldPlaySwimSlot = 0x460;
            static constexpr std::uintptr_t bIsActivating = 0x461;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShouldPlaySwimSlot", 0x460, "BoolProperty"},
            {"bIsActivating", 0x461, "BoolProperty"},
        }};
    };

}
