#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioGameplayBehavior
{
    struct AudioGameplayBehavior
    {
        static constexpr std::string_view Name = "AudioGameplayBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bKillOnSoundsFinished = 0xC8;
            static constexpr std::uintptr_t bTickWhileStopped = 0xC9;
            static constexpr std::uintptr_t OnAllSoundsFinished = 0xD0;
            static constexpr std::uintptr_t OnSoundFinished = 0xE0;
            static constexpr std::uintptr_t PlayingSounds = 0xF0;
            static constexpr std::uintptr_t ComponentGroupOwner = 0x100;
            static constexpr std::uintptr_t bReleaseActiveVoicesOnFadeOut = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bKillOnSoundsFinished", 0xC8, "BoolProperty"},
            {"bTickWhileStopped", 0xC9, "BoolProperty"},
            {"OnAllSoundsFinished", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnSoundFinished", 0xE0, "MulticastInlineDelegateProperty"},
            {"PlayingSounds", 0xF0, "ArrayProperty"},
            {"ComponentGroupOwner", 0x100, "ObjectProperty"},
            {"bReleaseActiveVoicesOnFadeOut", 0x108, "BoolProperty"},
        }};
    };

}
