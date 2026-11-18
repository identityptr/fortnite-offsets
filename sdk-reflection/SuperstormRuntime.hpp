#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SuperstormRuntime
{
    struct TempestLightningComponent
    {
        static constexpr std::string_view Name = "TempestLightningComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LightningBoltClass = 0xC0;
            static constexpr std::uintptr_t LightningBoltTargetEffectContainers = 0xC8;
            static constexpr std::uintptr_t LightningBoltTargetingPreset = 0xD8;
            static constexpr std::uintptr_t FindTargetablePawnsQuery = 0xE0;
            static constexpr std::uintptr_t FindTargetableLocationQuery = 0xE8;
            static constexpr std::uintptr_t EnvironmentQueryParamName_LightningRadius = 0xF0;
            static constexpr std::uintptr_t EnvironmentQueryParamName_MinLightningTargetDistance = 0xF4;
            static constexpr std::uintptr_t LightningCloudHeight = 0xF8;
            static constexpr std::uintptr_t LightningRadius = 0x120;
            static constexpr std::uintptr_t MinLightningTargetDistance = 0x148;
            static constexpr std::uintptr_t LightningFrequencyMin = 0x170;
            static constexpr std::uintptr_t LightningFrequencyMax = 0x198;
            static constexpr std::uintptr_t LightningBoltsMin = 0x1C0;
            static constexpr std::uintptr_t LightningBoltsMax = 0x1E8;
            static constexpr std::uintptr_t LightningBoltIntervalMin = 0x210;
            static constexpr std::uintptr_t LightningBoltIntervalMax = 0x238;
            static constexpr std::uintptr_t LightningBoltSeparationDistance = 0x260;
            static constexpr std::uintptr_t LightningStruckPawnReselectionInterval = 0x288;
            static constexpr std::uintptr_t LightningBoltTelegraphDuration = 0x2B0;
            static constexpr std::uintptr_t LightningBoltImpactIgnitionRadius = 0x2D8;
            static constexpr std::uintptr_t LightningBoltGrassIgnitionRadius = 0x300;
            static constexpr std::uintptr_t LightningBoltGrassFirePropagationFuel = 0x328;
            static constexpr std::uintptr_t LightningAreaTargetTelegraphCue = 0x350;
            static constexpr std::uintptr_t LightningBoltTargetTelegraphCue = 0x354;
            static constexpr std::uintptr_t LightningBoltData = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"LightningBoltClass", 0xC0, "ClassProperty"},
            {"LightningBoltTargetEffectContainers", 0xC8, "ArrayProperty"},
            {"LightningBoltTargetingPreset", 0xD8, "ObjectProperty"},
            {"FindTargetablePawnsQuery", 0xE0, "ObjectProperty"},
            {"FindTargetableLocationQuery", 0xE8, "ObjectProperty"},
            {"EnvironmentQueryParamName_LightningRadius", 0xF0, "NameProperty"},
            {"EnvironmentQueryParamName_MinLightningTargetDistance", 0xF4, "NameProperty"},
            {"LightningCloudHeight", 0xF8, "StructProperty"},
            {"LightningRadius", 0x120, "StructProperty"},
            {"MinLightningTargetDistance", 0x148, "StructProperty"},
            {"LightningFrequencyMin", 0x170, "StructProperty"},
            {"LightningFrequencyMax", 0x198, "StructProperty"},
            {"LightningBoltsMin", 0x1C0, "StructProperty"},
            {"LightningBoltsMax", 0x1E8, "StructProperty"},
            {"LightningBoltIntervalMin", 0x210, "StructProperty"},
            {"LightningBoltIntervalMax", 0x238, "StructProperty"},
            {"LightningBoltSeparationDistance", 0x260, "StructProperty"},
            {"LightningStruckPawnReselectionInterval", 0x288, "StructProperty"},
            {"LightningBoltTelegraphDuration", 0x2B0, "StructProperty"},
            {"LightningBoltImpactIgnitionRadius", 0x2D8, "StructProperty"},
            {"LightningBoltGrassIgnitionRadius", 0x300, "StructProperty"},
            {"LightningBoltGrassFirePropagationFuel", 0x328, "StructProperty"},
            {"LightningAreaTargetTelegraphCue", 0x350, "StructProperty"},
            {"LightningBoltTargetTelegraphCue", 0x354, "StructProperty"},
            {"LightningBoltData", 0x358, "ArrayProperty"},
        }};
    };

    struct TempestTornadoForcesComponent
    {
        static constexpr std::string_view Name = "TempestTornadoForcesComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActorAddedToTornadoForces = 0xC0;
            static constexpr std::uintptr_t OnActorRemovedFromTornadoForces = 0xD0;
            static constexpr std::uintptr_t ConfigHandle = 0xE0;
            static constexpr std::uintptr_t PhysicsPresetTagsAngularDampingToOverride = 0xF0;
            static constexpr std::uintptr_t AngularDampingOverride = 0x100;
            static constexpr std::uintptr_t PawnInGE = 0x128;
            static constexpr std::uintptr_t ObjectTypeToMaxCapCount = 0x130;
            static constexpr std::uintptr_t TagsToIgnore = 0x140;
            static constexpr std::uintptr_t RecentlyRemovedGE = 0x160;
            static constexpr std::uintptr_t TargetingPreset = 0x168;
            static constexpr std::uintptr_t DamageSetByCallerTag = 0x170;
            static constexpr std::uintptr_t PeriodicDamageGE = 0x178;
            static constexpr std::uintptr_t BurstDamageGE = 0x180;
            static constexpr std::uintptr_t TornadoActiveCue = 0x188;
            static constexpr std::uintptr_t PlayerNearCue = 0x18C;
            static constexpr std::uintptr_t PawnInCue = 0x190;
            static constexpr std::uintptr_t PlayerNearRange = 0x198;
            static constexpr std::uintptr_t BlockAbilitiesWithTag = 0x1C0;
            static constexpr std::uintptr_t ActorsToClientSimulate = 0x1E0;
            static constexpr std::uintptr_t AsyncTargetingHandle = 0x290;
            static constexpr std::uintptr_t PreviouslyNearPlayers = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"OnActorAddedToTornadoForces", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnActorRemovedFromTornadoForces", 0xD0, "MulticastInlineDelegateProperty"},
            {"ConfigHandle", 0xE0, "StructProperty"},
            {"PhysicsPresetTagsAngularDampingToOverride", 0xF0, "ArrayProperty"},
            {"AngularDampingOverride", 0x100, "StructProperty"},
            {"PawnInGE", 0x128, "ClassProperty"},
            {"ObjectTypeToMaxCapCount", 0x130, "MapProperty"},
            {"TagsToIgnore", 0x140, "StructProperty"},
            {"RecentlyRemovedGE", 0x160, "ClassProperty"},
            {"TargetingPreset", 0x168, "ObjectProperty"},
            {"DamageSetByCallerTag", 0x170, "StructProperty"},
            {"PeriodicDamageGE", 0x178, "ClassProperty"},
            {"BurstDamageGE", 0x180, "ClassProperty"},
            {"TornadoActiveCue", 0x188, "StructProperty"},
            {"PlayerNearCue", 0x18C, "StructProperty"},
            {"PawnInCue", 0x190, "StructProperty"},
            {"PlayerNearRange", 0x198, "StructProperty"},
            {"BlockAbilitiesWithTag", 0x1C0, "StructProperty"},
            {"ActorsToClientSimulate", 0x1E0, "StructProperty"},
            {"AsyncTargetingHandle", 0x290, "StructProperty"},
            {"PreviouslyNearPlayers", 0x298, "SetProperty"},
        }};
    };

    struct TornadoRadialForce
    {
        static constexpr std::string_view Name = "TornadoRadialForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldSystemActor";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x280;
            static constexpr std::uintptr_t Strength = 0x284;
            static constexpr std::uintptr_t StartTime = 0x288;
            static constexpr std::uintptr_t StopTime = 0x28C;
            static constexpr std::uintptr_t IncomingDuration = 0x290;
            static constexpr std::uintptr_t OutgoingDuration = 0x294;
            static constexpr std::uintptr_t RadialVector = 0x2A0;
            static constexpr std::uintptr_t RadialFalloff = 0x2A8;
            static constexpr std::uintptr_t OperatorField = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Radius", 0x280, "FloatProperty"},
            {"Strength", 0x284, "FloatProperty"},
            {"StartTime", 0x288, "FloatProperty"},
            {"StopTime", 0x28C, "FloatProperty"},
            {"IncomingDuration", 0x290, "FloatProperty"},
            {"OutgoingDuration", 0x294, "FloatProperty"},
            {"RadialVector", 0x2A0, "ObjectProperty"},
            {"RadialFalloff", 0x2A8, "ObjectProperty"},
            {"OperatorField", 0x2B0, "ObjectProperty"},
        }};
    };

}
