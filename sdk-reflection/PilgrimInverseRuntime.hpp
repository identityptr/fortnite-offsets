#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimInverseRuntime
{
    struct FortControllerComponent_PilgrimInverse
    {
        static constexpr std::string_view Name = "FortControllerComponent_PilgrimInverse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitForEventRouterAction = 0xC8;
            static constexpr std::uintptr_t EventRouter = 0xD0;
            static constexpr std::uintptr_t SourceHapticFeedbackConfig = 0xD8;
            static constexpr std::uintptr_t DefaultOverdriveReadyToDeployForceFeedback = 0xE0;
            static constexpr std::uintptr_t DefaultOverdriveDeployedForceFeedback = 0xE8;
            static constexpr std::uintptr_t DefaultGemHitForceFeedback = 0xF0;
            static constexpr std::uintptr_t CustomOverdriveReadyToDeployForceFeedback = 0xF8;
            static constexpr std::uintptr_t CustomOverdriveDeployedForceFeedback = 0x100;
            static constexpr std::uintptr_t CustomGemHitForceFeedback = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"WaitForEventRouterAction", 0xC8, "ObjectProperty"},
            {"EventRouter", 0xD0, "ObjectProperty"},
            {"SourceHapticFeedbackConfig", 0xD8, "ObjectProperty"},
            {"DefaultOverdriveReadyToDeployForceFeedback", 0xE0, "ObjectProperty"},
            {"DefaultOverdriveDeployedForceFeedback", 0xE8, "ObjectProperty"},
            {"DefaultGemHitForceFeedback", 0xF0, "ObjectProperty"},
            {"CustomOverdriveReadyToDeployForceFeedback", 0xF8, "ObjectProperty"},
            {"CustomOverdriveDeployedForceFeedback", 0x100, "ObjectProperty"},
            {"CustomGemHitForceFeedback", 0x108, "ObjectProperty"},
        }};
    };

    struct PilgrimInverseCommonBPFL
    {
        static constexpr std::string_view Name = "PilgrimInverseCommonBPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayspaceComponent_PilgrimInverseManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_PilgrimInverseManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayOverridesConfig = 0xC0;
            static constexpr std::uintptr_t PerfConfigOverride = 0x100;
            static constexpr std::uintptr_t DefaultGameplayOverridesConfig = 0x110;
            static constexpr std::uintptr_t DefaultPerfConfig = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GameplayOverridesConfig", 0xC0, "ObjectProperty"},
            {"PerfConfigOverride", 0x100, "ObjectProperty"},
            {"DefaultGameplayOverridesConfig", 0x110, "ObjectProperty"},
            {"DefaultPerfConfig", 0x118, "ObjectProperty"},
        }};
    };

}
