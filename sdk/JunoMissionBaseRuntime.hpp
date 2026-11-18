#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoMissionBaseRuntime
{
    struct JunoMissionAnalytics
    {
        static constexpr std::string_view Name = "JunoMissionAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMissionCheatManager
    {
        static constexpr std::string_view Name = "JunoMissionCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMissionFilteredEventContextCollector
    {
        static constexpr std::string_view Name = "JunoMissionFilteredEventContextCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FilteredEventContextCollectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMissionManagerComponent
    {
        static constexpr std::string_view Name = "JunoMissionManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MissionDataRegistryType = 0x118;
            static constexpr std::uintptr_t MissionMetadataRegistryType = 0x11C;
            static constexpr std::uintptr_t MissionSpawnTag = 0x120;
            static constexpr std::uintptr_t MissionPrefabClass = 0x128;
            static constexpr std::uintptr_t MaxMissionTime = 0x130;
            static constexpr std::uintptr_t CurrentMissionInfo = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MissionDataRegistryType", 0x118, "StructProperty"},
            {"MissionMetadataRegistryType", 0x11C, "StructProperty"},
            {"MissionSpawnTag", 0x120, "StructProperty"},
            {"MissionPrefabClass", 0x128, "ClassProperty"},
            {"MaxMissionTime", 0x130, "StructProperty"},
            {"CurrentMissionInfo", 0x158, "StructProperty"},
        }};
    };

    struct JunoMissionPlayerControllerComponent
    {
        static constexpr std::string_view Name = "JunoMissionPlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoMissionPrefab
    {
        static constexpr std::string_view Name = "JunoMissionPrefab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LivingWorldEncounterPrefab";
        struct Offsets
        {
            static constexpr std::uintptr_t MissionStatus = 0xA80;
            static constexpr std::uintptr_t MissionInfo = 0xA88;
            static constexpr std::uintptr_t CurrentObjective = 0xC18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MissionStatus", 0xA80, "EnumProperty"},
            {"MissionInfo", 0xA88, "StructProperty"},
            {"CurrentObjective", 0xC18, "StructProperty"},
        }};
    };

    struct JunoObjectivePrefab
    {
        static constexpr std::string_view Name = "JunoObjectivePrefab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LivingWorldEncounterPrefab";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectiveStatus = 0xA80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectiveStatus", 0xA80, "EnumProperty"},
        }};
    };

    struct JunoVerbProcessor_MissionUpdated
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_MissionUpdated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

}
