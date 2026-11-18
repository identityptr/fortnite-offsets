#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseTestingUtilities
{
    struct TeleportVerificationComponent
    {
        static constexpr std::string_view Name = "TeleportVerificationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientTeleportData = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClientTeleportData", 0xD8, "ArrayProperty"},
        }};
    };

    struct TransformVerificationComponent
    {
        static constexpr std::string_view Name = "TransformVerificationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientEntityData = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClientEntityData", 0xD8, "ArrayProperty"},
        }};
    };

}
