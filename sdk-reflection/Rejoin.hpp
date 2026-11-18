#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Rejoin
{
    struct RejoinCheck
    {
        static constexpr std::string_view Name = "RejoinCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LastKnownStatus = 0x28;
            static constexpr std::uintptr_t bRejoinAfterCheck = 0x29;
            static constexpr std::uintptr_t bAttemptingRejoin = 0x2A;
            static constexpr std::uintptr_t bShouldRecheckIfRejoinCheckUnsuccessful = 0x2B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LastKnownStatus", 0x28, "EnumProperty"},
            {"bRejoinAfterCheck", 0x29, "BoolProperty"},
            {"bAttemptingRejoin", 0x2A, "BoolProperty"},
            {"bShouldRecheckIfRejoinCheckUnsuccessful", 0x2B, "BoolProperty"},
        }};
    };

}
