#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameFeatureSet
{
    struct GameFeatureAction_SetGFSClassReplacements
    {
        static constexpr std::string_view Name = "GameFeatureAction_SetGFSClassReplacements";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplacementMappings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplacementMappings", 0x28, "ArrayProperty"},
        }};
    };

    struct GameFeatureSetAssetReplacementMappingBase
    {
        static constexpr std::string_view Name = "GameFeatureSetAssetReplacementMappingBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureSetBackdropReplacement
    {
        static constexpr std::string_view Name = "GameFeatureSetBackdropReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureSetAssetReplacementMappingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BackdropLevel = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BackdropLevel", 0x28, "SoftObjectProperty"},
        }};
    };

    struct GameFeatureSetEmptyItemDefinitionSet
    {
        static constexpr std::string_view Name = "GameFeatureSetEmptyItemDefinitionSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideType = 0x0;
            static constexpr std::uintptr_t EmptyItemDefinitionsClassList = 0x8;
            static constexpr std::uintptr_t bAddToExistingEmptyDefinitions = 0x18;
            static constexpr std::uintptr_t AllowedPlaylists = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OverrideType", 0x0, "NameProperty"},
            {"EmptyItemDefinitionsClassList", 0x8, "ArrayProperty"},
            {"bAddToExistingEmptyDefinitions", 0x18, "BoolProperty"},
            {"AllowedPlaylists", 0x20, "StructProperty"},
        }};
    };

    struct GameFeatureSetEmptyItemDefinitionsReplacement
    {
        static constexpr std::string_view Name = "GameFeatureSetEmptyItemDefinitionsReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureSetAssetReplacementMappingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmptyItemDefinitionSets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmptyItemDefinitionSets", 0x28, "ArrayProperty"},
        }};
    };

    struct GameFeatureSetIslandSettingsReplacement
    {
        static constexpr std::string_view Name = "GameFeatureSetIslandSettingsReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureSetAssetReplacementMappingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IslandSettingsClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IslandSettingsClass", 0x28, "SoftClassProperty"},
        }};
    };

    struct GameFeatureSetPlayerSpawnerReplacement
    {
        static constexpr std::string_view Name = "GameFeatureSetPlayerSpawnerReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureSetAssetReplacementMappingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerSpawnerClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerSpawnerClass", 0x28, "SoftObjectProperty"},
        }};
    };

    struct GameFeatureSetSubsystem
    {
        static constexpr std::string_view Name = "GameFeatureSetSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureSetTimeOfDayManagerReplacement
    {
        static constexpr std::string_view Name = "GameFeatureSetTimeOfDayManagerReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureSetAssetReplacementMappingBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeOfDayManagerClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeOfDayManagerClass", 0x28, "SoftClassProperty"},
        }};
    };

}
