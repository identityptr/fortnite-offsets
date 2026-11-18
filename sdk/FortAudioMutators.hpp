#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortAudioMutators
{
    struct SoundClassGraphMapping
    {
        static constexpr std::string_view Name = "SoundClassGraphMapping";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundClassMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundClassMap", 0x28, "MapProperty"},
        }};
    };

}
