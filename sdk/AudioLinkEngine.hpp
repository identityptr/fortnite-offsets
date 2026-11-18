#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioLinkEngine
{
    struct AudioLinkBlueprintInterface
    {
        static constexpr std::string_view Name = "AudioLinkBlueprintInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "IsLinkPlaying",
            "PlayLink",
            "SetLinkSound",
            "StopLink",
        }};
    };

}
