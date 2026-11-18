#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoTabascoInvasionRuntime
{
    struct JunoInvasionPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoInvasionPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t InvasionSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InvasionSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoInvasionPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoInvasionPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoInvasionPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoInvasionPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoTabascoInvasionManagerComponent
    {
        static constexpr std::string_view Name = "JunoTabascoInvasionManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EscalationLevelsBucket = 0xC0;
            static constexpr std::uintptr_t LevelingInterval = 0xD0;
            static constexpr std::uintptr_t PointsPerLevelingInterval = 0xF8;
            static constexpr std::uintptr_t bInvasionStarted = 0x120;
            static constexpr std::uintptr_t CurrentEscalationLevel = 0x124;
            static constexpr std::uintptr_t InvasionPersistenceFeatureData = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EscalationLevelsBucket", 0xC0, "ArrayProperty"},
            {"LevelingInterval", 0xD0, "StructProperty"},
            {"PointsPerLevelingInterval", 0xF8, "StructProperty"},
            {"bInvasionStarted", 0x120, "BoolProperty"},
            {"CurrentEscalationLevel", 0x124, "IntProperty"},
            {"InvasionPersistenceFeatureData", 0x140, "WeakObjectProperty"},
        }};
    };

}
