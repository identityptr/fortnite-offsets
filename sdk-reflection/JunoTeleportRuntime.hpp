#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoTeleportRuntime
{
    struct JunoControllerComponent_Teleport
    {
        static constexpr std::string_view Name = "JunoControllerComponent_Teleport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientTagsToApplyDuringTeleportSequence = 0xD0;
            static constexpr std::uintptr_t GameplayEffectsToApplyDuringTeleportSequence = 0xF0;
            static constexpr std::uintptr_t EQSQuerierClass = 0x100;
            static constexpr std::uintptr_t EQSQueryTemplate = 0x108;
            static constexpr std::uintptr_t StaticSpawnLocationRegistry = 0x110;
            static constexpr std::uintptr_t CachedTeleportRequest = 0x118;
            static constexpr std::uintptr_t WaitForLevelStreamingTask = 0x128;
            static constexpr std::uintptr_t EQSQueryInstance = 0x130;
            static constexpr std::uintptr_t ServerFinishedTeleportCallbacks = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ClientTagsToApplyDuringTeleportSequence", 0xD0, "StructProperty"},
            {"GameplayEffectsToApplyDuringTeleportSequence", 0xF0, "ArrayProperty"},
            {"EQSQuerierClass", 0x100, "ClassProperty"},
            {"EQSQueryTemplate", 0x108, "ObjectProperty"},
            {"StaticSpawnLocationRegistry", 0x110, "StructProperty"},
            {"CachedTeleportRequest", 0x118, "StructProperty"},
            {"WaitForLevelStreamingTask", 0x128, "ObjectProperty"},
            {"EQSQueryInstance", 0x130, "ObjectProperty"},
            {"ServerFinishedTeleportCallbacks", 0x138, "ArrayProperty"},
        }};
    };

    struct JunoTeleportAnalytics
    {
        static constexpr std::string_view Name = "JunoTeleportAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
