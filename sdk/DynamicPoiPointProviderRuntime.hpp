#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DynamicPoiPointProviderRuntime
{
    struct AIServiceDynamicPoiPointProvider
    {
        static constexpr std::string_view Name = "AIServiceDynamicPoiPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicPOIPointProviderTags = 0x98;
            static constexpr std::uintptr_t SpawnLimiterBehavior = 0xB8;
            static constexpr std::uintptr_t MaxActorConditions = 0xC0;
            static constexpr std::uintptr_t DefaultMaxActorCount = 0xD0;
            static constexpr std::uintptr_t CachedAIServicePlayerBots = 0xD8;
            static constexpr std::uintptr_t DynamicPoiPointProviders = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DynamicPOIPointProviderTags", 0x98, "StructProperty"},
            {"SpawnLimiterBehavior", 0xB8, "EnumProperty"},
            {"MaxActorConditions", 0xC0, "ArrayProperty"},
            {"DefaultMaxActorCount", 0xD0, "IntProperty"},
            {"CachedAIServicePlayerBots", 0xD8, "ObjectProperty"},
            {"DynamicPoiPointProviders", 0xE0, "ArrayProperty"},
        }};
    };

    struct DynamicPoiPointProvider
    {
        static constexpr std::string_view Name = "DynamicPoiPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedGameState = 0x30;
            static constexpr std::uintptr_t CachedLivingWorldManager = 0x38;
            static constexpr std::uintptr_t PointProviderFiltersTags = 0x40;
            static constexpr std::uintptr_t SpawnLimiter = 0x60;
            static constexpr std::uintptr_t Box = 0xC8;
            static constexpr std::uintptr_t Locations = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CachedGameState", 0x30, "ObjectProperty"},
            {"CachedLivingWorldManager", 0x38, "ObjectProperty"},
            {"PointProviderFiltersTags", 0x40, "StructProperty"},
            {"SpawnLimiter", 0x60, "StructProperty"},
            {"Box", 0xC8, "StructProperty"},
            {"Locations", 0x100, "ArrayProperty"},
        }};
    };

}
