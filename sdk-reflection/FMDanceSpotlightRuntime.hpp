#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMDanceSpotlightRuntime
{
    struct DanceSpotlightComponent
    {
        static constexpr std::string_view Name = "DanceSpotlightComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDanceSpotlightHoldChanged = 0xC0;
            static constexpr std::uintptr_t MoodVfxSetup = 0xD0;
            static constexpr std::uintptr_t OwnerSkeletalMeshComp = 0xE0;
            static constexpr std::uintptr_t ActiveTrailVFX = 0xE8;
            static constexpr std::uintptr_t ActiveBurstVFX = 0xF0;
            static constexpr std::uintptr_t LoadedBurstNiagaraSystem = 0xF8;
            static constexpr std::uintptr_t JamGameplayTag = 0x100;
            static constexpr std::uintptr_t DanceGameplayTag = 0x104;
            static constexpr std::uintptr_t DanceSpotlightGameplayTag = 0x108;
            static constexpr std::uintptr_t DanceEnergy = 0x10C;
            static constexpr std::uintptr_t bPlayerOnTheBeat = 0x110;
            static constexpr std::uintptr_t NearbyPlayerRange = 0x114;
            static constexpr std::uintptr_t NearbyPlayerCount = 0x118;
            static constexpr std::uintptr_t NearbyPlayerUpdateTime = 0x11C;
            static constexpr std::uintptr_t TimeSpentQuestUpdateTime = 0x120;
            static constexpr std::uintptr_t CooldownDurationForTrailVfxInS = 0x148;
            static constexpr std::uintptr_t DeferredMoodIndex = 0x150;
            static constexpr std::uintptr_t LastMoodChangeTimeInS = 0x158;
            static constexpr std::uintptr_t bInTheSpotlight = 0x170;
            static constexpr std::uintptr_t bTrailVFXActive = 0x171;
            static constexpr std::uintptr_t CurrentMoodIndex = 0x174;
            static constexpr std::uintptr_t bPlayerHolding = 0x178;
            static constexpr std::uintptr_t WeakMusicClockPtr = 0x17C;
            static constexpr std::uintptr_t WeakMusicEventPtr = 0x184;
            static constexpr std::uintptr_t CurrentEmote = 0x190;
            static constexpr std::uintptr_t AnalyticsData = 0x198;
            static constexpr std::uintptr_t Analytics_SpotlightStartTime = 0x1C8;
            static constexpr std::uintptr_t Analytics_MoodStartTime = 0x1CC;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"OnDanceSpotlightHoldChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"MoodVfxSetup", 0xD0, "ArrayProperty"},
            {"OwnerSkeletalMeshComp", 0xE0, "WeakObjectProperty"},
            {"ActiveTrailVFX", 0xE8, "ObjectProperty"},
            {"ActiveBurstVFX", 0xF0, "ObjectProperty"},
            {"LoadedBurstNiagaraSystem", 0xF8, "ObjectProperty"},
            {"JamGameplayTag", 0x100, "StructProperty"},
            {"DanceGameplayTag", 0x104, "StructProperty"},
            {"DanceSpotlightGameplayTag", 0x108, "StructProperty"},
            {"DanceEnergy", 0x10C, "FloatProperty"},
            {"bPlayerOnTheBeat", 0x110, "BoolProperty"},
            {"NearbyPlayerRange", 0x114, "FloatProperty"},
            {"NearbyPlayerCount", 0x118, "IntProperty"},
            {"NearbyPlayerUpdateTime", 0x11C, "FloatProperty"},
            {"TimeSpentQuestUpdateTime", 0x120, "FloatProperty"},
            {"CooldownDurationForTrailVfxInS", 0x148, "DoubleProperty"},
            {"DeferredMoodIndex", 0x150, "IntProperty"},
            {"LastMoodChangeTimeInS", 0x158, "DoubleProperty"},
            {"bInTheSpotlight", 0x170, "BoolProperty"},
            {"bTrailVFXActive", 0x171, "BoolProperty"},
            {"CurrentMoodIndex", 0x174, "IntProperty"},
            {"bPlayerHolding", 0x178, "BoolProperty"},
            {"WeakMusicClockPtr", 0x17C, "WeakObjectProperty"},
            {"WeakMusicEventPtr", 0x184, "WeakObjectProperty"},
            {"CurrentEmote", 0x190, "ObjectProperty"},
            {"AnalyticsData", 0x198, "StructProperty"},
            {"Analytics_SpotlightStartTime", 0x1C8, "FloatProperty"},
            {"Analytics_MoodStartTime", 0x1CC, "FloatProperty"},
        }};
    };

}
