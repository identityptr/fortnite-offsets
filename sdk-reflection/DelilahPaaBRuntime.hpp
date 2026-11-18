#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelilahPaaBRuntime
{
    struct FortCheatManager_DelilahPaaB
    {
        static constexpr std::string_view Name = "FortCheatManager_DelilahPaaB";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelilahPaabSpawnActor
    {
        static constexpr std::string_view Name = "FortDelilahPaabSpawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSpawnFruit = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnSpawnFruit", 0x240, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortGameStateComponent_DelilahPaab
    {
        static constexpr std::string_view Name = "FortGameStateComponent_DelilahPaab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnOptions = 0xC0;
            static constexpr std::uintptr_t InitialSpawnGamePhase = 0xD0;
            static constexpr std::uintptr_t InitialSpawnDelay = 0xD4;
            static constexpr std::uintptr_t InitialSpawnEventTag = 0xD8;
            static constexpr std::uintptr_t RespawnDelay = 0xDC;
            static constexpr std::uintptr_t SpawnEnvQuery = 0xE0;
            static constexpr std::uintptr_t RespawnEnvQuery = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SpawnOptions", 0xC0, "MapProperty"},
            {"InitialSpawnGamePhase", 0xD0, "EnumProperty"},
            {"InitialSpawnDelay", 0xD4, "FloatProperty"},
            {"InitialSpawnEventTag", 0xD8, "StructProperty"},
            {"RespawnDelay", 0xDC, "FloatProperty"},
            {"SpawnEnvQuery", 0xE0, "StructProperty"},
            {"RespawnEnvQuery", 0xF0, "StructProperty"},
        }};
    };

    struct FortPawnComponent_DelilahPaab
    {
        static constexpr std::string_view Name = "FortPawnComponent_DelilahPaab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortQueryGenerator_RegisteredDelilahPaabSpawners
    {
        static constexpr std::string_view Name = "FortQueryGenerator_RegisteredDelilahPaabSpawners";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

}
