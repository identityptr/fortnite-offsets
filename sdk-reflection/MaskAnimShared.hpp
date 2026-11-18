#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MaskAnimShared
{
    struct MaskBaseCCPAnimInstance
    {
        static constexpr std::string_view Name = "MaskBaseCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachDataTable = 0x640;
            static constexpr std::uintptr_t LocalOffsetT = 0x648;
            static constexpr std::uintptr_t LocalOffsetR = 0x660;
            static constexpr std::uintptr_t LocalOffsetS = 0x678;
            static constexpr std::uintptr_t bSpineSocket = 0x690;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AttachDataTable", 0x640, "ObjectProperty"},
            {"LocalOffsetT", 0x648, "StructProperty"},
            {"LocalOffsetR", 0x660, "StructProperty"},
            {"LocalOffsetS", 0x678, "StructProperty"},
            {"bSpineSocket", 0x690, "BoolProperty"},
        }};
    };

}
