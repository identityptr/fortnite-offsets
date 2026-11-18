#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoPersistence
{
    struct BaseRootPersistentPlayspace
    {
        static constexpr std::string_view Name = "BaseRootPersistentPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistentPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoStateMachineClass = 0x788;
            static constexpr std::uintptr_t CurrentJunoWorld = 0x790;
            static constexpr std::uintptr_t StateMachineManager = 0x798;
            static constexpr std::uintptr_t JunoPlayerPersistenceComponent = 0x7A0;
            static constexpr std::uintptr_t bReadyToApplyPersistentData = 0x7A8;
            static constexpr std::uintptr_t bRootPlayspaceReady = 0x7E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"JunoStateMachineClass", 0x788, "ClassProperty"},
            {"CurrentJunoWorld", 0x790, "ObjectProperty"},
            {"StateMachineManager", 0x798, "ObjectProperty"},
            {"JunoPlayerPersistenceComponent", 0x7A0, "ObjectProperty"},
            {"bReadyToApplyPersistentData", 0x7A8, "BoolProperty"},
            {"bRootPlayspaceReady", 0x7E0, "BoolProperty"},
        }};
    };

    struct JunoActorInstancesReportHandler
    {
        static constexpr std::string_view Name = "JunoActorInstancesReportHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBasePFWContainer
    {
        static constexpr std::string_view Name = "JunoBasePFWContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkContainer";
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

    struct JunoBasePFWPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoBasePFWPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bTriggerErrorOnSetDirtyAfterCheckIn = 0x38;
            static constexpr std::uintptr_t bDirty = 0x50;
            static constexpr std::uintptr_t bTransient = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bTriggerErrorOnSetDirtyAfterCheckIn", 0x38, "BoolProperty"},
            {"bDirty", 0x50, "BoolProperty"},
            {"bTransient", 0x51, "BoolProperty"},
        }};
    };

    struct JunoBasePFWPersistenceFeatureDataContainer
    {
        static constexpr std::string_view Name = "JunoBasePFWPersistenceFeatureDataContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWContainer";
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

    struct JunoBasePersistenceContainerGeneric
    {
        static constexpr std::string_view Name = "JunoBasePersistenceContainerGeneric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t SaveFrameworkResourceId = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SaveFrameworkResourceId", 0x148, "StrProperty"},
        }};
    };

    struct JunoBasePersistenceSubsystem
    {
        static constexpr std::string_view Name = "JunoBasePersistenceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDefaultWorldPersistence
    {
        static constexpr std::string_view Name = "JunoDefaultWorldPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldMetadata = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldMetadata", 0x30, "InterfaceProperty"},
        }};
    };

    struct JunoDeleteActionsReportHandler
    {
        static constexpr std::string_view Name = "JunoDeleteActionsReportHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDeltaFile
    {
        static constexpr std::string_view Name = "JunoDeltaFile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelSaveRecord";
        struct Offsets
        {
            static constexpr std::uintptr_t UniquePackageName = 0x3D0;
            static constexpr std::uintptr_t UpdateActions = 0x3D8;
            static constexpr std::uintptr_t WeakPersistentPlayspaceToApplyTo = 0x3E8;
            static constexpr std::uintptr_t bDirty = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"UniquePackageName", 0x3D0, "NameProperty"},
            {"UpdateActions", 0x3D8, "MapProperty"},
            {"WeakPersistentPlayspaceToApplyTo", 0x3E8, "WeakObjectProperty"},
            {"bDirty", 0x3F0, "BoolProperty"},
        }};
    };

    struct JunoDeltaFileApplier
    {
        static constexpr std::string_view Name = "JunoDeltaFileApplier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelRecordSpawner";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateActionMap = 0x3C8;
            static constexpr std::uintptr_t DeleteActionMap = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UpdateActionMap", 0x3C8, "MapProperty"},
            {"DeleteActionMap", 0x3D8, "MapProperty"},
        }};
    };

    struct JunoDeltasLevelSaveComponent
    {
        static constexpr std::string_view Name = "JunoDeltasLevelSaveComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLevelSaveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnClientSaveStateChanged = 0x270;
            static constexpr std::uintptr_t OnClientBackupSaveStateChanged = 0x280;
            static constexpr std::uintptr_t OnClientBackupRestoreStateChanged = 0x290;
            static constexpr std::uintptr_t OnClientCheckpointDateChanged = 0x2A0;
            static constexpr std::uintptr_t PaletteLinkCodes = 0x358;
            static constexpr std::uintptr_t CurrentVkProjectInfo = 0x380;
            static constexpr std::uintptr_t RestrictedPlotDefinition = 0x3C0;
            static constexpr std::uintptr_t bAutoLoadFromRestrictedPlotDefinition = 0x3C8;
            static constexpr std::uintptr_t LinkCodeNumberToAutoLoad = 0x3CC;
            static constexpr std::uintptr_t bLoadRandomLinkCode = 0x3D0;
            static constexpr std::uintptr_t bLoadMatchAssignedCode = 0x3D1;
            static constexpr std::uintptr_t bCuratedHub = 0x3D2;
            static constexpr std::uintptr_t bLoadPlaysetFromPlot = 0x3D3;
            static constexpr std::uintptr_t AccountIdOfOwner = 0x3D8;
            static constexpr std::uintptr_t OwnerCreativePermissions = 0x408;
            static constexpr std::uintptr_t LoadedPlot = 0x428;
            static constexpr std::uintptr_t LoadedGameFeatureSet = 0x430;
            static constexpr std::uintptr_t bPermissionsSaveInProgress = 0x440;
            static constexpr std::uintptr_t bCurated = 0x441;
            static constexpr std::uintptr_t LoadedPlotInstanceId = 0x448;
            static constexpr std::uintptr_t LoadedLinkData = 0x458;
            static constexpr std::uintptr_t CachedAnalyticsData = 0x740;
            static constexpr std::uintptr_t CachedGameFeatureSetName = 0x780;
            static constexpr std::uintptr_t bIsLoaded = 0x790;
            static constexpr std::uintptr_t bIsAutoSaving = 0x792;
            static constexpr std::uintptr_t BackupSaveState = 0x793;
            static constexpr std::uintptr_t RestoringState = 0x794;
            static constexpr std::uintptr_t LastCheckpointDateUtc = 0x798;
            static constexpr std::uintptr_t LevelInstanceList = 0x7E8;
            static constexpr std::uintptr_t bOptedInForDeviceUpgrades = 0x7F8;
            static constexpr std::uintptr_t bOptedInForMemorySystemUpgrades = 0x7F9;
            static constexpr std::uintptr_t bOptedInForVideoPlayerDeviceUpgrade = 0x7FA;
            static constexpr std::uintptr_t bOptedInForDaySequenceActorUpgrade = 0x7FB;
            static constexpr std::uintptr_t PublishRateLimitSeconds = 0x870;
            static constexpr std::uintptr_t BackupRateLimitSeconds = 0x888;
            static constexpr std::uintptr_t RestoreRateLimitSeconds = 0x8A0;
            static constexpr std::uintptr_t ReporterUniqueIds = 0x8F0;
        };

        inline static constexpr std::array<PropertyInfo, 37> Properties{{
            {"OnClientSaveStateChanged", 0x270, "MulticastInlineDelegateProperty"},
            {"OnClientBackupSaveStateChanged", 0x280, "MulticastInlineDelegateProperty"},
            {"OnClientBackupRestoreStateChanged", 0x290, "MulticastInlineDelegateProperty"},
            {"OnClientCheckpointDateChanged", 0x2A0, "MulticastInlineDelegateProperty"},
            {"PaletteLinkCodes", 0x358, "ArrayProperty"},
            {"CurrentVkProjectInfo", 0x380, "StructProperty"},
            {"RestrictedPlotDefinition", 0x3C0, "ObjectProperty"},
            {"bAutoLoadFromRestrictedPlotDefinition", 0x3C8, "BoolProperty"},
            {"LinkCodeNumberToAutoLoad", 0x3CC, "IntProperty"},
            {"bLoadRandomLinkCode", 0x3D0, "BoolProperty"},
            {"bLoadMatchAssignedCode", 0x3D1, "BoolProperty"},
            {"bCuratedHub", 0x3D2, "BoolProperty"},
            {"bLoadPlaysetFromPlot", 0x3D3, "BoolProperty"},
            {"AccountIdOfOwner", 0x3D8, "StructProperty"},
            {"OwnerCreativePermissions", 0x408, "ArrayProperty"},
            {"LoadedPlot", 0x428, "ObjectProperty"},
            {"LoadedGameFeatureSet", 0x430, "StrProperty"},
            {"bPermissionsSaveInProgress", 0x440, "BoolProperty"},
            {"bCurated", 0x441, "BoolProperty"},
            {"LoadedPlotInstanceId", 0x448, "StrProperty"},
            {"LoadedLinkData", 0x458, "StructProperty"},
            {"CachedAnalyticsData", 0x740, "StructProperty"},
            {"CachedGameFeatureSetName", 0x780, "StrProperty"},
            {"bIsLoaded", 0x790, "BoolProperty"},
            {"bIsAutoSaving", 0x792, "BoolProperty"},
            {"BackupSaveState", 0x793, "EnumProperty"},
            {"RestoringState", 0x794, "EnumProperty"},
            {"LastCheckpointDateUtc", 0x798, "StructProperty"},
            {"LevelInstanceList", 0x7E8, "StructProperty"},
            {"bOptedInForDeviceUpgrades", 0x7F8, "BoolProperty"},
            {"bOptedInForMemorySystemUpgrades", 0x7F9, "BoolProperty"},
            {"bOptedInForVideoPlayerDeviceUpgrade", 0x7FA, "BoolProperty"},
            {"bOptedInForDaySequenceActorUpgrade", 0x7FB, "BoolProperty"},
            {"PublishRateLimitSeconds", 0x870, "IntProperty"},
            {"BackupRateLimitSeconds", 0x888, "IntProperty"},
            {"RestoreRateLimitSeconds", 0x8A0, "IntProperty"},
            {"ReporterUniqueIds", 0x8F0, "MapProperty"},
        }};
    };

    struct JunoDeltasSaveHandler
    {
        static constexpr std::string_view Name = "JunoDeltasSaveHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SaveHandler = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SaveHandler", 0x110, "ObjectProperty"},
        }};
    };

    struct JunoDeprecatedPersistentClasses
    {
        static constexpr std::string_view Name = "JunoDeprecatedPersistentClasses";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DeprecatedPersistentClassPaths = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeprecatedPersistentClassPaths", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoDumpWorldPersistentContents
    {
        static constexpr std::string_view Name = "JunoDumpWorldPersistentContents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGlobalWorldPersistenceModel
    {
        static constexpr std::string_view Name = "JunoGlobalWorldPersistenceModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorldPersistenceModel";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldId = 0x28;
            static constexpr std::uintptr_t WorldTitle = 0x38;
            static constexpr std::uintptr_t WorldPersistence = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WorldId", 0x28, "StrProperty"},
            {"WorldTitle", 0x38, "StrProperty"},
            {"WorldPersistence", 0x48, "InterfaceProperty"},
        }};
    };

    struct JunoLevelProviderInterface
    {
        static constexpr std::string_view Name = "JunoLevelProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPFWContainer_LevelDelta
    {
        static constexpr std::string_view Name = "JunoPFWContainer_LevelDelta";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkContainer";
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

    struct JunoPFWContainer_LevelDeltaIndex
    {
        static constexpr std::string_view Name = "JunoPFWContainer_LevelDeltaIndex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWContainer";
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

    struct JunoPFWModule_LevelDeltas
    {
        static constexpr std::string_view Name = "JunoPFWModule_LevelDeltas";
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

    struct JunoPFWSaveFrameworkItemValueCustomSerializer
    {
        static constexpr std::string_view Name = "JunoPFWSaveFrameworkItemValueCustomSerializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PFWExtension_SaveFramework_ItemValueCustomSerializer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceAnalytics
    {
        static constexpr std::string_view Name = "JunoPersistenceAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceAssetPaths
    {
        static constexpr std::string_view Name = "JunoPersistenceAssetPaths";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedPackagePathPrefixes = 0x28;
            static constexpr std::uintptr_t AllowedPackagePaths = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AllowedPackagePathPrefixes", 0x28, "ArrayProperty"},
            {"AllowedPackagePaths", 0x38, "ArrayProperty"},
        }};
    };

    struct JunoPersistenceAssetType
    {
        static constexpr std::string_view Name = "JunoPersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceCheatManager
    {
        static constexpr std::string_view Name = "JunoPersistenceCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceDeveloperSettings
    {
        static constexpr std::string_view Name = "JunoPersistenceDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistenceType = 0x30;
            static constexpr std::uintptr_t ReadOnly = 0x34;
            static constexpr std::uintptr_t bForceCreateNewEmptyWorldCheckpoint = 0x38;
            static constexpr std::uintptr_t DevSettings = 0x40;
            static constexpr std::uintptr_t WorldId = 0x50;
            static constexpr std::uintptr_t NewWorldAdventureSeed = 0x60;
            static constexpr std::uintptr_t Mode = 0x64;
            static constexpr std::uintptr_t HostileCreatures = 0x65;
            static constexpr std::uintptr_t FriendlyCreatures = 0x66;
            static constexpr std::uintptr_t DropInventoryOnDeath = 0x67;
            static constexpr std::uintptr_t StaminaDrain = 0x68;
            static constexpr std::uintptr_t NPCs = 0x69;
            static constexpr std::uintptr_t Temperature = 0x6A;
            static constexpr std::uintptr_t Death = 0x6B;
            static constexpr std::uintptr_t FriendlyFire = 0x6C;
            static constexpr std::uintptr_t PowerSystem = 0x6D;
            static constexpr std::uintptr_t RecruitedCreaturePermaDeath = 0x6E;
            static constexpr std::uintptr_t EliteHostileCreatures = 0x6F;
            static constexpr std::uintptr_t Difficulty = 0x70;
            static constexpr std::uintptr_t Flying = 0x71;
            static constexpr std::uintptr_t ItemSpawner = 0x72;
            static constexpr std::uintptr_t FreeCrafting = 0x73;
            static constexpr std::uintptr_t Knowledge = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"PersistenceType", 0x30, "EnumProperty"},
            {"ReadOnly", 0x34, "EnumProperty"},
            {"bForceCreateNewEmptyWorldCheckpoint", 0x38, "BoolProperty"},
            {"DevSettings", 0x40, "StrProperty"},
            {"WorldId", 0x50, "StrProperty"},
            {"NewWorldAdventureSeed", 0x60, "IntProperty"},
            {"Mode", 0x64, "EnumProperty"},
            {"HostileCreatures", 0x65, "EnumProperty"},
            {"FriendlyCreatures", 0x66, "EnumProperty"},
            {"DropInventoryOnDeath", 0x67, "EnumProperty"},
            {"StaminaDrain", 0x68, "EnumProperty"},
            {"NPCs", 0x69, "EnumProperty"},
            {"Temperature", 0x6A, "EnumProperty"},
            {"Death", 0x6B, "EnumProperty"},
            {"FriendlyFire", 0x6C, "EnumProperty"},
            {"PowerSystem", 0x6D, "EnumProperty"},
            {"RecruitedCreaturePermaDeath", 0x6E, "EnumProperty"},
            {"EliteHostileCreatures", 0x6F, "EnumProperty"},
            {"Difficulty", 0x70, "EnumProperty"},
            {"Flying", 0x71, "EnumProperty"},
            {"ItemSpawner", 0x72, "EnumProperty"},
            {"FreeCrafting", 0x73, "EnumProperty"},
            {"Knowledge", 0x74, "EnumProperty"},
        }};
    };

    struct JunoPersistenceFeaturePFWState
    {
        static constexpr std::string_view Name = "JunoPersistenceFeaturePFWState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ContainerWeakPtr = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContainerWeakPtr", 0x28, "WeakObjectProperty"},
        }};
    };

    struct JunoPersistenceFeaturesReportHandler
    {
        static constexpr std::string_view Name = "JunoPersistenceFeaturesReportHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceFlushManager
    {
        static constexpr std::string_view Name = "JunoPersistenceFlushManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceGlobals
    {
        static constexpr std::string_view Name = "JunoPersistenceGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceReferenceableType
    {
        static constexpr std::string_view Name = "JunoPersistenceReferenceableType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceReportGenerator
    {
        static constexpr std::string_view Name = "JunoPersistenceReportGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPersistenceSaveManager
    {
        static constexpr std::string_view Name = "JunoPersistenceSaveManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SavePeriodInSeconds = 0x50;
            static constexpr std::uintptr_t SavePeriodInSeconds_PIEOverride = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SavePeriodInSeconds", 0x50, "FloatProperty"},
            {"SavePeriodInSeconds_PIEOverride", 0x54, "FloatProperty"},
        }};
    };

    struct JunoPersistentPlayspace
    {
        static constexpr std::string_view Name = "JunoPersistentPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredPersistenceFeatureDataClassesNative = 0x6D0;
            static constexpr std::uintptr_t PersistenceComponent = 0x6E8;
            static constexpr std::uintptr_t RequiredPersistenceFeatureDataClasses = 0x6F0;
            static constexpr std::uintptr_t SpatialLoadingState = 0x700;
            static constexpr std::uintptr_t PersistenceMainLevelUniquePackageName = 0x704;
            static constexpr std::uintptr_t PersistenceMainLevelWeakPtr = 0x708;
            static constexpr std::uintptr_t JunoPersistentPlayspaceSaveHandler = 0x710;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RequiredPersistenceFeatureDataClassesNative", 0x6D0, "ArrayProperty"},
            {"PersistenceComponent", 0x6E8, "ObjectProperty"},
            {"RequiredPersistenceFeatureDataClasses", 0x6F0, "ArrayProperty"},
            {"SpatialLoadingState", 0x700, "EnumProperty"},
            {"PersistenceMainLevelUniquePackageName", 0x704, "NameProperty"},
            {"PersistenceMainLevelWeakPtr", 0x708, "WeakObjectProperty"},
            {"JunoPersistentPlayspaceSaveHandler", 0x710, "WeakObjectProperty"},
        }};
    };

    struct JunoPersistentPlayspaceLevelRegistry
    {
        static constexpr std::string_view Name = "JunoPersistentPlayspaceLevelRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistentPlayspaceLevelMap = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PersistentPlayspaceLevelMap", 0x30, "MapProperty"},
        }};
    };

    struct JunoPersistentPlayspaceSaveHandler
    {
        static constexpr std::string_view Name = "JunoPersistentPlayspaceSaveHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistenceFeatures = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PersistenceFeatures", 0x30, "ArrayProperty"},
        }};
    };

    struct JunoPersistentPlayspaceSaveHandlerContainer
    {
        static constexpr std::string_view Name = "JunoPersistentPlayspaceSaveHandlerContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoPersistentPlayspaceSaveHandlers = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoPersistentPlayspaceSaveHandlers", 0x28, "MapProperty"},
        }};
    };

    struct JunoPersistentPlayspaceTrackableInterface
    {
        static constexpr std::string_view Name = "JunoPersistentPlayspaceTrackableInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayerCheckpointHandler
    {
        static constexpr std::string_view Name = "JunoPlayerCheckpointHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BadCheckpointRanges = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BadCheckpointRanges", 0x118, "ArrayProperty"},
        }};
    };

    struct JunoPlayerCheckpointHandler_Default
    {
        static constexpr std::string_view Name = "JunoPlayerCheckpointHandler_Default";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerCheckpointHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t BadCheckpointRanges = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BadCheckpointRanges", 0x118, "ArrayProperty"},
        }};
    };

    struct JunoPlayerLockPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerLockPersistenceFeatureModule";
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

    struct JunoPlayerPersistence
    {
        static constexpr std::string_view Name = "JunoPlayerPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayerPersistenceBinaryContainerGeneric
    {
        static constexpr std::string_view Name = "JunoPlayerPersistenceBinaryContainerGeneric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerPersistenceContainerGeneric";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerInfo = 0x170;
            static constexpr std::uintptr_t PlayerNetId = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerInfo", 0x170, "StructProperty"},
            {"PlayerNetId", 0x1D8, "StructProperty"},
        }};
    };

    struct JunoPlayerPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoPlayerPersistenceComponent";
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

    struct JunoPlayerPersistenceContainerGeneric
    {
        static constexpr std::string_view Name = "JunoPlayerPersistenceContainerGeneric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePersistenceContainerGeneric";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerInfo = 0x170;
            static constexpr std::uintptr_t PlayerNetId = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerInfo", 0x170, "StructProperty"},
            {"PlayerNetId", 0x1D8, "StructProperty"},
        }};
    };

    struct JunoPlayerPersistenceHandler
    {
        static constexpr std::string_view Name = "JunoPlayerPersistenceHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPersistenceSettings = 0x60;
            static constexpr std::uintptr_t CheckpointHandler = 0x68;
            static constexpr std::uintptr_t FlushManager = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlayerPersistenceSettings", 0x60, "ObjectProperty"},
            {"CheckpointHandler", 0x68, "ObjectProperty"},
            {"FlushManager", 0x70, "ObjectProperty"},
        }};
    };

    struct JunoPlayerPersistenceManager
    {
        static constexpr std::string_view Name = "JunoPlayerPersistenceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPersistenceSettings = 0x28;
            static constexpr std::uintptr_t FlushManager = 0x30;
            static constexpr std::uintptr_t ActivePlayers = 0x38;
            static constexpr std::uintptr_t PendingPlayers = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerPersistenceSettings", 0x28, "ObjectProperty"},
            {"FlushManager", 0x30, "ObjectProperty"},
            {"ActivePlayers", 0x38, "MapProperty"},
            {"PendingPlayers", 0x48, "MapProperty"},
        }};
    };

    struct JunoPlayerPersistenceSettings
    {
        static constexpr std::string_view Name = "JunoPlayerPersistenceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckpointHandlerClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CheckpointHandlerClass", 0x28, "ClassProperty"},
        }};
    };

    struct JunoPlayerPersistenceStorage
    {
        static constexpr std::string_view Name = "JunoPlayerPersistenceStorage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayspaceActorPersistentDataListener
    {
        static constexpr std::string_view Name = "JunoPlayspaceActorPersistentDataListener";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayspaceIndexPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoPlayspaceIndexPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldTilePlayspaceClass = 0x58;
            static constexpr std::uintptr_t CachedWorldTilePlayspaceClass = 0x70;
            static constexpr std::uintptr_t PlayspaceIndexSaveData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WorldTilePlayspaceClass", 0x58, "StructProperty"},
            {"CachedWorldTilePlayspaceClass", 0x70, "ClassProperty"},
            {"PlayspaceIndexSaveData", 0x78, "StructProperty"},
        }};
    };

    struct JunoPlayspaceIndexPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoPlayspaceIndexPersistenceFeatureData_Container";
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

    struct JunoPlayspaceIndexPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayspaceIndexPersistenceFeatureModule";
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

    struct JunoPlayspacePersistenceComponent
    {
        static constexpr std::string_view Name = "JunoPlayspacePersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoPersistentPlayspaceSaveHandler = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoPersistentPlayspaceSaveHandler", 0x11C, "WeakObjectProperty"},
        }};
    };

    struct JunoPlayspacePersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoPlayspacePersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayspacePersistenceFeatureDataActor
    {
        static constexpr std::string_view Name = "JunoPlayspacePersistenceFeatureDataActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedActorGuid = 0x2A0;
            static constexpr std::uintptr_t Version = 0x2B0;
            static constexpr std::uintptr_t bTriggerErrorOnSetDirtyAfterCheckIn = 0x2B4;
            static constexpr std::uintptr_t bSpawnedByLevelSaveRecord = 0x2C8;
            static constexpr std::uintptr_t bForceDirty = 0x2C9;
            static constexpr std::uintptr_t bDirty = 0x2CA;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SavedActorGuid", 0x2A0, "StructProperty"},
            {"Version", 0x2B0, "IntProperty"},
            {"bTriggerErrorOnSetDirtyAfterCheckIn", 0x2B4, "BoolProperty"},
            {"bSpawnedByLevelSaveRecord", 0x2C8, "BoolProperty"},
            {"bForceDirty", 0x2C9, "BoolProperty"},
            {"bDirty", 0x2CA, "BoolProperty"},
        }};
    };

    struct JunoPlayspacePersistenceFeatureOwner
    {
        static constexpr std::string_view Name = "JunoPlayspacePersistenceFeatureOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoReportHandler
    {
        static constexpr std::string_view Name = "JunoReportHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoRootPlayspacePersistenceComponent
    {
        static constexpr std::string_view Name = "JunoRootPlayspacePersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayspacePersistenceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoPersistentPlayspaceSaveHandler = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoPersistentPlayspaceSaveHandler", 0x11C, "WeakObjectProperty"},
        }};
    };

    struct JunoSerializedStructStoreLibrary
    {
        static constexpr std::string_view Name = "JunoSerializedStructStoreLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSubWorldPersistenceBinaryContainerGeneric
    {
        static constexpr std::string_view Name = "JunoSubWorldPersistenceBinaryContainerGeneric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoSubWorldPersistenceContainerGeneric";
        struct Offsets
        {
            static constexpr std::uintptr_t SubWorldId = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubWorldId", 0x170, "StructProperty"},
        }};
    };

    struct JunoSubWorldPersistenceConfig
    {
        static constexpr std::string_view Name = "JunoSubWorldPersistenceConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BadCheckpointRanges = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BadCheckpointRanges", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoSubWorldPersistenceContainerGeneric
    {
        static constexpr std::string_view Name = "JunoSubWorldPersistenceContainerGeneric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePersistenceContainerGeneric";
        struct Offsets
        {
            static constexpr std::uintptr_t SubWorldId = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubWorldId", 0x170, "StructProperty"},
        }};
    };

    struct JunoTemplatesReportHandler
    {
        static constexpr std::string_view Name = "JunoTemplatesReportHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoUpdateActionsReportHandler
    {
        static constexpr std::string_view Name = "JunoUpdateActionsReportHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldMetadataAdapter
    {
        static constexpr std::string_view Name = "JunoWorldMetadataAdapter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LegacyJunoWorld = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LegacyJunoWorld", 0x30, "ObjectProperty"},
        }};
    };

    struct JunoWorldMetadataInterface
    {
        static constexpr std::string_view Name = "JunoWorldMetadataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldPersistenceCheckpointManager
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceCheckpointManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckpointIntervalSeconds = 0x28;
            static constexpr std::uintptr_t MinCheckpointIntervalSeconds = 0x2C;
            static constexpr std::uintptr_t MaxCheckpointCountWithinConfiguredInterval = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CheckpointIntervalSeconds", 0x28, "IntProperty"},
            {"MinCheckpointIntervalSeconds", 0x2C, "IntProperty"},
            {"MaxCheckpointCountWithinConfiguredInterval", 0x30, "IntProperty"},
        }};
    };

    struct JunoWorldPersistenceHandler
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldPersistenceHandler_Deltas
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceHandler_Deltas";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorldPersistenceHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t DeltasPeriodicSaveIntervalSeconds_Default = 0x38;
            static constexpr std::uintptr_t DeltasPeriodicSaveIntervalSeconds_PIEOverride = 0x3C;
            static constexpr std::uintptr_t DeltasSaveHandler = 0x148;
            static constexpr std::uintptr_t WorldSaveInterface = 0x150;
            static constexpr std::uintptr_t DefaultDeltaFileClass = 0x170;
            static constexpr std::uintptr_t RollbackBadCheckpointRanges = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DeltasPeriodicSaveIntervalSeconds_Default", 0x38, "IntProperty"},
            {"DeltasPeriodicSaveIntervalSeconds_PIEOverride", 0x3C, "IntProperty"},
            {"DeltasSaveHandler", 0x148, "ObjectProperty"},
            {"WorldSaveInterface", 0x150, "InterfaceProperty"},
            {"DefaultDeltaFileClass", 0x170, "StructProperty"},
            {"RollbackBadCheckpointRanges", 0x188, "ArrayProperty"},
        }};
    };

    struct JunoWorldPersistenceHandler_Transient
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceHandler_Transient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorldPersistenceHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldPersistenceInterface
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldPersistenceManager
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldPersistenceSettings = 0x28;
            static constexpr std::uintptr_t WorldPersistenceModel = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WorldPersistenceSettings", 0x28, "ObjectProperty"},
            {"WorldPersistenceModel", 0x30, "ObjectProperty"},
        }};
    };

    struct JunoWorldPersistenceModel
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldPersistencePlayerManager
    {
        static constexpr std::string_view Name = "JunoWorldPersistencePlayerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldPersistenceSaveHandler
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceSaveHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldPersistenceSaveInterface
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceSaveInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldPersistenceSettings
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfiguredPersistenceModel = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConfiguredPersistenceModel", 0x28, "ObjectProperty"},
        }};
    };

    struct JunoWorldPersistenceSubsystem
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePersistenceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldPersistenceHandler = 0x90;
            static constexpr std::uintptr_t WorldPersistencePlayerManager = 0x98;
            static constexpr std::uintptr_t SubsystemData = 0xA0;
            static constexpr std::uintptr_t WorldCheckpointManager = 0xA8;
            static constexpr std::uintptr_t WorldPersistenceManager = 0xB0;
            static constexpr std::uintptr_t PlayerPersistenceManager = 0xB8;
            static constexpr std::uintptr_t SaveManager = 0xC0;
            static constexpr std::uintptr_t FlushManager = 0xC8;
            static constexpr std::uintptr_t PersistentPlayspaceMap = 0xD0;
            static constexpr std::uintptr_t PersistentPlayspaceInsertionOrderArray = 0xE0;
            static constexpr std::uintptr_t WorldSaveDataState = 0xF0;
            static constexpr std::uintptr_t SubsystemDataAssetPath = 0x118;
            static constexpr std::uintptr_t ManualFlushAndCheckpointHelper = 0x130;
            static constexpr std::uintptr_t ErrorCodeResponses = 0x150;
            static constexpr std::uintptr_t SkipAnalyticEventErrorCodes = 0x160;
            static constexpr std::uintptr_t JunoPersistentPlayspaceSaveHandlerContainer = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"WorldPersistenceHandler", 0x90, "ObjectProperty"},
            {"WorldPersistencePlayerManager", 0x98, "ObjectProperty"},
            {"SubsystemData", 0xA0, "ObjectProperty"},
            {"WorldCheckpointManager", 0xA8, "ObjectProperty"},
            {"WorldPersistenceManager", 0xB0, "ObjectProperty"},
            {"PlayerPersistenceManager", 0xB8, "ObjectProperty"},
            {"SaveManager", 0xC0, "ObjectProperty"},
            {"FlushManager", 0xC8, "ObjectProperty"},
            {"PersistentPlayspaceMap", 0xD0, "MapProperty"},
            {"PersistentPlayspaceInsertionOrderArray", 0xE0, "ArrayProperty"},
            {"WorldSaveDataState", 0xF0, "EnumProperty"},
            {"SubsystemDataAssetPath", 0x118, "StructProperty"},
            {"ManualFlushAndCheckpointHelper", 0x130, "ObjectProperty"},
            {"ErrorCodeResponses", 0x150, "MapProperty"},
            {"SkipAnalyticEventErrorCodes", 0x160, "ArrayProperty"},
            {"JunoPersistentPlayspaceSaveHandlerContainer", 0x240, "ObjectProperty"},
        }};
    };

    struct JunoWorldPersistenceSubsystemData
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceSubsystemData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultWorldPersistenceHandlerClass = 0x28;
            static constexpr std::uintptr_t WorldPersistenceSettings = 0x30;
            static constexpr std::uintptr_t PlayerPersistenceSettings = 0x38;
            static constexpr std::uintptr_t bUseModularSaveFlow = 0x40;
            static constexpr std::uintptr_t bEnablePersistenceProcessor = 0x41;
            static constexpr std::uintptr_t bEnablePlayerLocking = 0x42;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DefaultWorldPersistenceHandlerClass", 0x28, "ClassProperty"},
            {"WorldPersistenceSettings", 0x30, "ObjectProperty"},
            {"PlayerPersistenceSettings", 0x38, "ObjectProperty"},
            {"bUseModularSaveFlow", 0x40, "BoolProperty"},
            {"bEnablePersistenceProcessor", 0x41, "BoolProperty"},
            {"bEnablePlayerLocking", 0x42, "BoolProperty"},
        }};
    };

    struct ManualFlushAndCheckpointHelper
    {
        static constexpr std::string_view Name = "ManualFlushAndCheckpointHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakWorldPersistenceSubsystem = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WeakWorldPersistenceSubsystem", 0x28, "WeakObjectProperty"},
        }};
    };

    struct PFWSubsystemExtension_JunoGameNative
    {
        static constexpr std::string_view Name = "PFWSubsystemExtension_JunoGameNative";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkSubsystemExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
