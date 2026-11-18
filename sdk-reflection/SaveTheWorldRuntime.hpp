#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SaveTheWorldRuntime
{
    struct FortAIDataProvider_Defender
    {
        static constexpr std::string_view Name = "FortAIDataProvider_Defender";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t AnchorLocation = 0x28;
            static constexpr std::uintptr_t AnchorRadius = 0x40;
            static constexpr std::uintptr_t AnchorHeight = 0x44;
            static constexpr std::uintptr_t AnchorEQSGridSize = 0x48;
            static constexpr std::uintptr_t AnchorEQSSpaceBetween = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AnchorLocation", 0x28, "StructProperty"},
            {"AnchorRadius", 0x40, "FloatProperty"},
            {"AnchorHeight", 0x44, "FloatProperty"},
            {"AnchorEQSGridSize", 0x48, "FloatProperty"},
            {"AnchorEQSSpaceBetween", 0x4C, "FloatProperty"},
        }};
    };

    struct FortBTDecorator_DefenderAnchorTest
    {
        static constexpr std::string_view Name = "FortBTDecorator_DefenderAnchorTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckIfTethered = 0x68;
            static constexpr std::uintptr_t CheckIfInBounds = 0x80;
            static constexpr std::uintptr_t CheckIfGoalIsInBounds = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CheckIfTethered", 0x68, "StructProperty"},
            {"CheckIfInBounds", 0x80, "StructProperty"},
            {"CheckIfGoalIsInBounds", 0x98, "StructProperty"},
        }};
    };

    struct FortBTDecorator_DefenderLeaderTagQuery
    {
        static constexpr std::string_view Name = "FortBTDecorator_DefenderLeaderTagQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t LeaderTagQuery = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LeaderTagQuery", 0x68, "StructProperty"},
        }};
    };

    struct FortDefenderAnchor
    {
        static constexpr std::string_view Name = "FortDefenderAnchor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t WidthInBuildingTiles = 0xB50;
            static constexpr std::uintptr_t HeightInBuildingTiles = 0xB54;
            static constexpr std::uintptr_t EQSGridSpaceBetween = 0xB58;
            static constexpr std::uintptr_t DefenderAnchorBox = 0xB78;
            static constexpr std::uintptr_t DefenderAnchorMesh = 0xB80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WidthInBuildingTiles", 0xB50, "IntProperty"},
            {"HeightInBuildingTiles", 0xB54, "IntProperty"},
            {"EQSGridSpaceBetween", 0xB58, "FloatProperty"},
            {"DefenderAnchorBox", 0xB78, "ObjectProperty"},
            {"DefenderAnchorMesh", 0xB80, "ObjectProperty"},
        }};
    };

    struct FortDefenderComponent
    {
        static constexpr std::string_view Name = "FortDefenderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDefenderFinishedTeleport = 0xC8;
            static constexpr std::uintptr_t OnDefenderModeChanged = 0xD8;
            static constexpr std::uintptr_t DefaultWeaponDataHandle = 0xE8;
            static constexpr std::uintptr_t TimeAllowedOutsideTether = 0xF8;
            static constexpr std::uintptr_t DefenderAnchorClass = 0x120;
            static constexpr std::uintptr_t DefenderFollowRadius = 0x128;
            static constexpr std::uintptr_t DefenderFollowHalfHeight = 0x12C;
            static constexpr std::uintptr_t DefenderFollowEQSSize = 0x130;
            static constexpr std::uintptr_t DefenderFollowEQSSpaceBetween = 0x134;
            static constexpr std::uintptr_t MaxZAvoidMoveInHalfTiles = 0x138;
            static constexpr std::uintptr_t SpawnAbilityTagContainer = 0x140;
            static constexpr std::uintptr_t DespawnAbilityTagContainer = 0x160;
            static constexpr std::uintptr_t TeleportSettings = 0x180;
            static constexpr std::uintptr_t ZHeightTeleportCheck = 0x1B8;
            static constexpr std::uintptr_t Min2DDistanceTetherTransitionTeleport = 0x1E0;
            static constexpr std::uintptr_t MinZHeightTetherTransitionTeleport = 0x208;
            static constexpr std::uintptr_t PlayerToReviveKey = 0x230;
            static constexpr std::uintptr_t DefenderOwnerKey = 0x234;
            static constexpr std::uintptr_t AutoReviveTime = 0x238;
            static constexpr std::uintptr_t AnchorSnapZTolerance = 0x260;
            static constexpr std::uintptr_t DefenderAnchor = 0x268;
            static constexpr std::uintptr_t BuildingSupportActor = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"OnDefenderFinishedTeleport", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnDefenderModeChanged", 0xD8, "MulticastInlineDelegateProperty"},
            {"DefaultWeaponDataHandle", 0xE8, "StructProperty"},
            {"TimeAllowedOutsideTether", 0xF8, "StructProperty"},
            {"DefenderAnchorClass", 0x120, "ClassProperty"},
            {"DefenderFollowRadius", 0x128, "FloatProperty"},
            {"DefenderFollowHalfHeight", 0x12C, "FloatProperty"},
            {"DefenderFollowEQSSize", 0x130, "FloatProperty"},
            {"DefenderFollowEQSSpaceBetween", 0x134, "FloatProperty"},
            {"MaxZAvoidMoveInHalfTiles", 0x138, "IntProperty"},
            {"SpawnAbilityTagContainer", 0x140, "StructProperty"},
            {"DespawnAbilityTagContainer", 0x160, "StructProperty"},
            {"TeleportSettings", 0x180, "StructProperty"},
            {"ZHeightTeleportCheck", 0x1B8, "StructProperty"},
            {"Min2DDistanceTetherTransitionTeleport", 0x1E0, "StructProperty"},
            {"MinZHeightTetherTransitionTeleport", 0x208, "StructProperty"},
            {"PlayerToReviveKey", 0x230, "NameProperty"},
            {"DefenderOwnerKey", 0x234, "NameProperty"},
            {"AutoReviveTime", 0x238, "StructProperty"},
            {"AnchorSnapZTolerance", 0x260, "FloatProperty"},
            {"DefenderAnchor", 0x268, "ObjectProperty"},
            {"BuildingSupportActor", 0x2A0, "ObjectProperty"},
        }};
    };

    struct FortNavigationFilter_DefenderBounds
    {
        static constexpr std::string_view Name = "FortNavigationFilter_DefenderBounds";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortPlayerDefenderComponent
    {
        static constexpr std::string_view Name = "FortPlayerDefenderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisableDefenderTagQuery = 0xC0;
            static constexpr std::uintptr_t SpawnInDefenderEQSQuery = 0x108;
            static constexpr std::uintptr_t BehaviorTree = 0x110;
            static constexpr std::uintptr_t ExtraAbilitySets = 0x118;
            static constexpr std::uintptr_t RevivePlayerAbilityTags = 0x128;
            static constexpr std::uintptr_t PreventDefenderReviveTags = 0x148;
            static constexpr std::uintptr_t DefenderReviverEligibilityMatchingTags = 0x190;
            static constexpr std::uintptr_t DefenderReviveCooldownGE = 0x1B0;
            static constexpr std::uintptr_t Max2DReviveApproach = 0x1B8;
            static constexpr std::uintptr_t ValidateDefenseLocationQuery = 0x1E0;
            static constexpr std::uintptr_t RequestedDefenderReviver = 0x1E8;
            static constexpr std::uintptr_t DefenderPawns = 0x1F0;
            static constexpr std::uintptr_t bCanInteract = 0x204;
            static constexpr std::uintptr_t PendingSpawnRequests = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"DisableDefenderTagQuery", 0xC0, "StructProperty"},
            {"SpawnInDefenderEQSQuery", 0x108, "ObjectProperty"},
            {"BehaviorTree", 0x110, "ObjectProperty"},
            {"ExtraAbilitySets", 0x118, "ArrayProperty"},
            {"RevivePlayerAbilityTags", 0x128, "StructProperty"},
            {"PreventDefenderReviveTags", 0x148, "StructProperty"},
            {"DefenderReviverEligibilityMatchingTags", 0x190, "StructProperty"},
            {"DefenderReviveCooldownGE", 0x1B0, "ClassProperty"},
            {"Max2DReviveApproach", 0x1B8, "StructProperty"},
            {"ValidateDefenseLocationQuery", 0x1E0, "ObjectProperty"},
            {"RequestedDefenderReviver", 0x1E8, "ObjectProperty"},
            {"DefenderPawns", 0x1F0, "ArrayProperty"},
            {"bCanInteract", 0x204, "BoolProperty"},
            {"PendingSpawnRequests", 0x260, "ArrayProperty"},
        }};
    };

    struct FortQueryContext_DefenderAvoidEnemy
    {
        static constexpr std::string_view Name = "FortQueryContext_DefenderAvoidEnemy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_DefenderLeader
    {
        static constexpr std::string_view Name = "FortQueryContext_DefenderLeader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_DefenderLocationsToAvoid
    {
        static constexpr std::string_view Name = "FortQueryContext_DefenderLocationsToAvoid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClassesToAvoid = 0x28;
            static constexpr std::uintptr_t AnchorBoxEntentPadding = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActorClassesToAvoid", 0x28, "ArrayProperty"},
            {"AnchorBoxEntentPadding", 0x38, "FloatProperty"},
        }};
    };

    struct FortQueryContext_DefenderOutOfBoundsLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_DefenderOutOfBoundsLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratorZOffset = 0x28;
            static constexpr std::uintptr_t TraceStartOffset = 0x2C;
            static constexpr std::uintptr_t TraceEndOffset = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GeneratorZOffset", 0x28, "FloatProperty"},
            {"TraceStartOffset", 0x2C, "FloatProperty"},
            {"TraceEndOffset", 0x30, "FloatProperty"},
        }};
    };

    struct FortQueryContext_DefenderWander
    {
        static constexpr std::string_view Name = "FortQueryContext_DefenderWander";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_PlayerDefensePing
    {
        static constexpr std::string_view Name = "FortQueryContext_PlayerDefensePing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSTWUIDataBase
    {
        static constexpr std::string_view Name = "FortSTWUIDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
