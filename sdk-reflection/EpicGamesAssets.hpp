#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicGamesAssets
{
    struct PlayedSoundReplication
    {
        static constexpr std::string_view Name = "PlayedSoundReplication";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t StartTime = 0x278;
            static constexpr std::uintptr_t bPlaySound2D = 0x280;
            static constexpr std::uintptr_t SoundAsset = 0x288;
            static constexpr std::uintptr_t AudioComponent = 0x2A8;
            static constexpr std::uintptr_t SoundAttenuation = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StartTime", 0x278, "DoubleProperty"},
            {"bPlaySound2D", 0x280, "BoolProperty"},
            {"SoundAsset", 0x288, "SoftObjectProperty"},
            {"AudioComponent", 0x2A8, "ObjectProperty"},
            {"SoundAttenuation", 0x2B0, "ObjectProperty"},
        }};
    };

    struct SpawnedParticleSystemReplication
    {
        static constexpr std::string_view Name = "SpawnedParticleSystemReplication";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleSystemRepData = 0x278;
            static constexpr std::uintptr_t ParticleSystemComponent = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParticleSystemRepData", 0x278, "StructProperty"},
            {"ParticleSystemComponent", 0x298, "ObjectProperty"},
        }};
    };

}
