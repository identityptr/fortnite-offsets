#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseInteract
{
    struct VerseInteractProxyActor
    {
        static constexpr std::string_view Name = "VerseInteractProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractText = 0x290;
            static constexpr std::uintptr_t CannotInteractText = 0x2A0;
            static constexpr std::uintptr_t InteractingControllers = 0x2B0;
            static constexpr std::uintptr_t CachedInteractComponent = 0x2C8;
            static constexpr std::uintptr_t bSuccessLimitAllowsInteract = 0x2D8;
            static constexpr std::uintptr_t SharedCooldownTimerHandle = 0x2E0;
            static constexpr std::uintptr_t PerControllerCooldownTimers = 0x2F0;
            static constexpr std::uintptr_t LongInteractTimers = 0x300;
            static constexpr std::uintptr_t PerControllerInteractDurationOverrides = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"InteractText", 0x290, "TextProperty"},
            {"CannotInteractText", 0x2A0, "TextProperty"},
            {"InteractingControllers", 0x2B0, "ArrayProperty"},
            {"CachedInteractComponent", 0x2C8, "WeakObjectProperty"},
            {"bSuccessLimitAllowsInteract", 0x2D8, "BoolProperty"},
            {"SharedCooldownTimerHandle", 0x2E0, "StructProperty"},
            {"PerControllerCooldownTimers", 0x2F0, "MapProperty"},
            {"LongInteractTimers", 0x300, "MapProperty"},
            {"PerControllerInteractDurationOverrides", 0x310, "MapProperty"},
        }};
    };

}
