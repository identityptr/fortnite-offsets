#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VictoryCrownsAmbienceRuntime
{
    struct FortGameplayCueNotify_CrownWear
    {
        static constexpr std::string_view Name = "FortGameplayCueNotify_CrownWear";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t IntroFXVisualVolume = 0xC58;
            static constexpr std::uintptr_t IntroFXTimelineRate = 0xC80;
            static constexpr std::uintptr_t IntroFXUpdatePrecision = 0xCA8;
            static constexpr std::uintptr_t IntroFXUpdateFrequencies = 0xCD0;
            static constexpr std::uintptr_t IntroFXCurve = 0xCE0;
            static constexpr std::uintptr_t IntroFXTimeline = 0xCE8;
            static constexpr std::uintptr_t CrownParticleComponent = 0xCF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IntroFXVisualVolume", 0xC58, "StructProperty"},
            {"IntroFXTimelineRate", 0xC80, "StructProperty"},
            {"IntroFXUpdatePrecision", 0xCA8, "StructProperty"},
            {"IntroFXUpdateFrequencies", 0xCD0, "ArrayProperty"},
            {"IntroFXCurve", 0xCE0, "ObjectProperty"},
            {"IntroFXTimeline", 0xCE8, "ObjectProperty"},
            {"CrownParticleComponent", 0xCF0, "ObjectProperty"},
        }};
    };

    struct FortPawnComponent_VictoryCrownsFrontEnd
    {
        static constexpr std::string_view Name = "FortPawnComponent_VictoryCrownsFrontEnd";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VictoryCrownPlaylistData = 0xC8;
            static constexpr std::uintptr_t bInitializeSuccess = 0xD0;
            static constexpr std::uintptr_t bSelectedPlaylistSupportCrown = 0xD1;
            static constexpr std::uintptr_t PersistentParty = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VictoryCrownPlaylistData", 0xC8, "ObjectProperty"},
            {"bInitializeSuccess", 0xD0, "BoolProperty"},
            {"bSelectedPlaylistSupportCrown", 0xD1, "BoolProperty"},
            {"PersistentParty", 0xD8, "ObjectProperty"},
        }};
    };

}
