#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UnableRomanRuntime
{
    struct FortAthenaMutator_UnableRoman
    {
        static constexpr std::string_view Name = "FortAthenaMutator_UnableRoman";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Loadouts = 0x418;
            static constexpr std::uintptr_t TeamScoreWidgetClass = 0x428;
            static constexpr std::uintptr_t RespawnConfig = 0x430;
            static constexpr std::uintptr_t OnAnyPawnRespawned = 0x438;
            static constexpr std::uintptr_t OnAnyPawnDied = 0x448;
            static constexpr std::uintptr_t TeamScoreWidgets = 0x458;
            static constexpr std::uintptr_t LoadoutChoices = 0x468;
            static constexpr std::uintptr_t LoadoutWidgets = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Loadouts", 0x418, "ArrayProperty"},
            {"TeamScoreWidgetClass", 0x428, "ClassProperty"},
            {"RespawnConfig", 0x430, "ObjectProperty"},
            {"OnAnyPawnRespawned", 0x438, "MulticastInlineDelegateProperty"},
            {"OnAnyPawnDied", 0x448, "MulticastInlineDelegateProperty"},
            {"TeamScoreWidgets", 0x458, "MapProperty"},
            {"LoadoutChoices", 0x468, "MapProperty"},
            {"LoadoutWidgets", 0x478, "MapProperty"},
        }};
    };

    struct FortControllerComponent_UnableRoman
    {
        static constexpr std::string_view Name = "FortControllerComponent_UnableRoman";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadoutSelectorWidgetClass = 0xC8;
            static constexpr std::uintptr_t DamageCameraShakeClassOverride = 0xD0;
            static constexpr std::uintptr_t DynamicDamageZoneComponentClass = 0xD8;
            static constexpr std::uintptr_t LoadoutWidget = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LoadoutSelectorWidgetClass", 0xC8, "ClassProperty"},
            {"DamageCameraShakeClassOverride", 0xD0, "ClassProperty"},
            {"DynamicDamageZoneComponentClass", 0xD8, "ClassProperty"},
            {"LoadoutWidget", 0xE0, "ObjectProperty"},
        }};
    };

    struct UnableRomanRespawnConfig
    {
        static constexpr std::string_view Name = "UnableRomanRespawnConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemVerticalOffset = 0x28;
            static constexpr std::uintptr_t EnemyVerticalOffset = 0x2C;
            static constexpr std::uintptr_t Weight_Distance = 0x30;
            static constexpr std::uintptr_t MinDist = 0x34;
            static constexpr std::uintptr_t MaxDist = 0x38;
            static constexpr std::uintptr_t Weight_LOS = 0x3C;
            static constexpr std::uintptr_t MaxDistToConsiderLOS = 0x40;
            static constexpr std::uintptr_t bDisallowDirectLOS = 0x44;
            static constexpr std::uintptr_t DirectLOSFOV = 0x48;
            static constexpr std::uintptr_t bPreferTeamLocation = 0x4C;
            static constexpr std::uintptr_t Weight_TeamLocation = 0x50;
            static constexpr std::uintptr_t MinSpawnDistFromTeammate = 0x54;
            static constexpr std::uintptr_t MaxDistForTeammateInfluence = 0x58;
            static constexpr std::uintptr_t bPreferQuerierLocation = 0x5C;
            static constexpr std::uintptr_t Weight_QuerierLocation = 0x60;
            static constexpr std::uintptr_t MaxInfluenceDistFromQuerier = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ItemVerticalOffset", 0x28, "FloatProperty"},
            {"EnemyVerticalOffset", 0x2C, "FloatProperty"},
            {"Weight_Distance", 0x30, "FloatProperty"},
            {"MinDist", 0x34, "FloatProperty"},
            {"MaxDist", 0x38, "FloatProperty"},
            {"Weight_LOS", 0x3C, "FloatProperty"},
            {"MaxDistToConsiderLOS", 0x40, "FloatProperty"},
            {"bDisallowDirectLOS", 0x44, "BoolProperty"},
            {"DirectLOSFOV", 0x48, "FloatProperty"},
            {"bPreferTeamLocation", 0x4C, "BoolProperty"},
            {"Weight_TeamLocation", 0x50, "FloatProperty"},
            {"MinSpawnDistFromTeammate", 0x54, "FloatProperty"},
            {"MaxDistForTeammateInfluence", 0x58, "FloatProperty"},
            {"bPreferQuerierLocation", 0x5C, "BoolProperty"},
            {"Weight_QuerierLocation", 0x60, "FloatProperty"},
            {"MaxInfluenceDistFromQuerier", 0x64, "FloatProperty"},
        }};
    };

}
