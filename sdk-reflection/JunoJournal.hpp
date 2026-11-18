#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoJournal
{
    struct JunoGameFrameworkComponent_Journal
    {
        static constexpr std::string_view Name = "JunoGameFrameworkComponent_Journal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoCompleteTaskNames = 0xC0;
            static constexpr std::uintptr_t ReplicatedTaskState = 0xD0;
            static constexpr std::uintptr_t ServerActiveTasksContainer = 0x160;
            static constexpr std::uintptr_t AccountRewardReconciler = 0x1A8;
            static constexpr std::uintptr_t bPersistenceEnabled = 0x1D1;
            static constexpr std::uintptr_t JournalTaskRegistry = 0x1EC;
            static constexpr std::uintptr_t AbandonAllowedTime = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AutoCompleteTaskNames", 0xC0, "ArrayProperty"},
            {"ReplicatedTaskState", 0xD0, "StructProperty"},
            {"ServerActiveTasksContainer", 0x160, "StructProperty"},
            {"AccountRewardReconciler", 0x1A8, "StructProperty"},
            {"bPersistenceEnabled", 0x1D1, "BoolProperty"},
            {"JournalTaskRegistry", 0x1EC, "StructProperty"},
            {"AbandonAllowedTime", 0x1F0, "StructProperty"},
        }};
    };

    struct JunoGameStateComponent_Journal
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Journal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameFrameworkComponent_Journal";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoCompleteTaskNames = 0xC0;
            static constexpr std::uintptr_t ReplicatedTaskState = 0xD0;
            static constexpr std::uintptr_t ServerActiveTasksContainer = 0x160;
            static constexpr std::uintptr_t AccountRewardReconciler = 0x1A8;
            static constexpr std::uintptr_t bPersistenceEnabled = 0x1D1;
            static constexpr std::uintptr_t JournalTaskRegistry = 0x1EC;
            static constexpr std::uintptr_t AbandonAllowedTime = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AutoCompleteTaskNames", 0xC0, "ArrayProperty"},
            {"ReplicatedTaskState", 0xD0, "StructProperty"},
            {"ServerActiveTasksContainer", 0x160, "StructProperty"},
            {"AccountRewardReconciler", 0x1A8, "StructProperty"},
            {"bPersistenceEnabled", 0x1D1, "BoolProperty"},
            {"JournalTaskRegistry", 0x1EC, "StructProperty"},
            {"AbandonAllowedTime", 0x1F0, "StructProperty"},
        }};
    };

    struct JunoJournalAnalytics
    {
        static constexpr std::string_view Name = "JunoJournalAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoJournalCheatManager
    {
        static constexpr std::string_view Name = "JunoJournalCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoJournalSourceComponent
    {
        static constexpr std::string_view Name = "JunoJournalSourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JournalSourceActorTag = 0xC0;
            static constexpr std::uintptr_t JournalTaskRegistry = 0xC4;
            static constexpr std::uintptr_t MaxGrantCount = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JournalSourceActorTag", 0xC0, "StructProperty"},
            {"JournalTaskRegistry", 0xC4, "StructProperty"},
            {"MaxGrantCount", 0xC8, "StructProperty"},
        }};
    };

    struct JunoJournalWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoJournalWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoPlayerJournalPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoPlayerJournalPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct JunoPlayerJournalPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerJournalPersistenceFeatureModule";
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

    struct JunoPlayerStateComponent_Journal
    {
        static constexpr std::string_view Name = "JunoPlayerStateComponent_Journal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameFrameworkComponent_Journal";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoCompleteTaskNames = 0xC0;
            static constexpr std::uintptr_t ReplicatedTaskState = 0xD0;
            static constexpr std::uintptr_t ServerActiveTasksContainer = 0x160;
            static constexpr std::uintptr_t AccountRewardReconciler = 0x1A8;
            static constexpr std::uintptr_t bPersistenceEnabled = 0x1D1;
            static constexpr std::uintptr_t JournalTaskRegistry = 0x1EC;
            static constexpr std::uintptr_t AbandonAllowedTime = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AutoCompleteTaskNames", 0xC0, "ArrayProperty"},
            {"ReplicatedTaskState", 0xD0, "StructProperty"},
            {"ServerActiveTasksContainer", 0x160, "StructProperty"},
            {"AccountRewardReconciler", 0x1A8, "StructProperty"},
            {"bPersistenceEnabled", 0x1D1, "BoolProperty"},
            {"JournalTaskRegistry", 0x1EC, "StructProperty"},
            {"AbandonAllowedTime", 0x1F0, "StructProperty"},
        }};
    };

    struct JunoPlayerStateComponent_JournalUserData
    {
        static constexpr std::string_view Name = "JunoPlayerStateComponent_JournalUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedViewedTasks = 0xE0;
            static constexpr std::uintptr_t TrackedTaskName = 0x140;
            static constexpr std::uintptr_t ReplicatedCategories = 0x158;
            static constexpr std::uintptr_t bIsInitialized = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ReplicatedViewedTasks", 0xE0, "StructProperty"},
            {"TrackedTaskName", 0x140, "NameProperty"},
            {"ReplicatedCategories", 0x158, "StructProperty"},
            {"bIsInitialized", 0x1C0, "BoolProperty"},
        }};
    };

    struct JunoVerbProcessor_JournalTaskUpdate
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_JournalTaskUpdate";
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

    struct JunoWorldJournalPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoWorldJournalPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t JournalSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JournalSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoWorldJournalPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoWorldJournalPersistenceFeatureData_Container";
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

    struct JunoWorldJournalPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoWorldJournalPersistenceFeatureModule";
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

}
