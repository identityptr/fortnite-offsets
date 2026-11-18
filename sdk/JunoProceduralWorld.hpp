#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoProceduralWorld
{
    struct CaveShellSpawnEntry
    {
        static constexpr std::string_view Name = "CaveShellSpawnEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAutomationRpcManager_JunoProceduralWorld
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_JunoProceduralWorld";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InstancedActorSmartObjectComponent
    {
        static constexpr std::string_view Name = "InstancedActorSmartObjectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentClass = 0xD0;
            static constexpr std::uintptr_t DefinitionAsset = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ComponentClass", 0xD0, "ClassProperty"},
            {"DefinitionAsset", 0xD8, "ObjectProperty"},
        }};
    };

    struct JunoBiomeTagVolume
    {
        static constexpr std::string_view Name = "JunoBiomeTagVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundsEvaluationType = 0x278;
            static constexpr std::uintptr_t VolumeTags = 0x280;
            static constexpr std::uintptr_t BoundsComponent = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BoundsEvaluationType", 0x278, "EnumProperty"},
            {"VolumeTags", 0x280, "StructProperty"},
            {"BoundsComponent", 0x2A0, "ObjectProperty"},
        }};
    };

    struct JunoBridgePOISelectorComponent
    {
        static constexpr std::string_view Name = "JunoBridgePOISelectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0xC0;
            static constexpr std::uintptr_t DataRegistryType = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Params", 0xC0, "StructProperty"},
            {"DataRegistryType", 0xF8, "StructProperty"},
        }};
    };

    struct JunoCaveBetweenFloorTeleporterComponent
    {
        static constexpr std::string_view Name = "JunoCaveBetweenFloorTeleporterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetFloor = 0xC8;
            static constexpr std::uintptr_t MatchID = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetFloor", 0xC8, "EnumProperty"},
            {"MatchID", 0xCC, "NameProperty"},
        }};
    };

    struct JunoCaveBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoCaveBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCaveDataCollectionBase
    {
        static constexpr std::string_view Name = "JunoCaveDataCollectionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCaveGeneratorDataMergerInterface
    {
        static constexpr std::string_view Name = "JunoCaveGeneratorDataMergerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCaveGeneratorInterface
    {
        static constexpr std::string_view Name = "JunoCaveGeneratorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCaveGeneratorPlayspaceComponent
    {
        static constexpr std::string_view Name = "JunoCaveGeneratorPlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CaveGeneratorRegistry = 0x118;
            static constexpr std::uintptr_t CaveGeneratorShellsRegistry = 0x11C;
            static constexpr std::uintptr_t CaveGeneratorRulesRegistry = 0x120;
            static constexpr std::uintptr_t CaveGeneratorThemesRegistry = 0x124;
            static constexpr std::uintptr_t CaveGeneratorSequencesRegistry = 0x128;
            static constexpr std::uintptr_t CaveGeneratorTypesRegistry = 0x12C;
            static constexpr std::uintptr_t bUseSplitDataRegistries = 0x130;
            static constexpr std::uintptr_t POIDataRegistry = 0x134;
            static constexpr std::uintptr_t MergedData = 0x138;
            static constexpr std::uintptr_t bWasDataMerged = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"CaveGeneratorRegistry", 0x118, "StructProperty"},
            {"CaveGeneratorShellsRegistry", 0x11C, "StructProperty"},
            {"CaveGeneratorRulesRegistry", 0x120, "StructProperty"},
            {"CaveGeneratorThemesRegistry", 0x124, "StructProperty"},
            {"CaveGeneratorSequencesRegistry", 0x128, "StructProperty"},
            {"CaveGeneratorTypesRegistry", 0x12C, "StructProperty"},
            {"bUseSplitDataRegistries", 0x130, "BoolProperty"},
            {"POIDataRegistry", 0x134, "StructProperty"},
            {"MergedData", 0x138, "StructProperty"},
            {"bWasDataMerged", 0x190, "BoolProperty"},
        }};
    };

    struct JunoCaveInternalTeleporterComponent
    {
        static constexpr std::string_view Name = "JunoCaveInternalTeleporterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MatchID = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MatchID", 0xC8, "NameProperty"},
        }};
    };

    struct JunoCaveLivingWorldStaticPointProvider
    {
        static constexpr std::string_view Name = "JunoCaveLivingWorldStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoLivingWorldStaticPointProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t CaveShellID = 0x400;
            static constexpr std::uintptr_t ConditionalTags = 0x408;
            static constexpr std::uintptr_t AssignLeashVolume = 0x418;
            static constexpr std::uintptr_t CaveShellEntry = 0x440;
            static constexpr std::uintptr_t bNeverEnable = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CaveShellID", 0x400, "NameProperty"},
            {"ConditionalTags", 0x408, "ArrayProperty"},
            {"AssignLeashVolume", 0x418, "StructProperty"},
            {"CaveShellEntry", 0x440, "WeakObjectProperty"},
            {"bNeverEnable", 0x448, "BoolProperty"},
        }};
    };

    struct JunoCaveReturnToEntranceTeleporter
    {
        static constexpr std::string_view Name = "JunoCaveReturnToEntranceTeleporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoCaveShellGameplayVolume
    {
        static constexpr std::string_view Name = "JunoCaveShellGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoStreamingGameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceData = 0x430;
            static constexpr std::uintptr_t ShellID = 0x4B8;
            static constexpr std::uintptr_t CaveGUID = 0x4BC;
            static constexpr std::uintptr_t Teleporters = 0x4D0;
            static constexpr std::uintptr_t LevelsToInject = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InstanceData", 0x430, "StructProperty"},
            {"ShellID", 0x4B8, "NameProperty"},
            {"CaveGUID", 0x4BC, "StructProperty"},
            {"Teleporters", 0x4D0, "ArrayProperty"},
            {"LevelsToInject", 0x4E0, "ArrayProperty"},
        }};
    };

    struct JunoCaveShellGateComponent
    {
        static constexpr std::string_view Name = "JunoCaveShellGateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GateActors = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GateActors", 0x118, "ArrayProperty"},
        }};
    };

    struct JunoCaveShellPlayspace
    {
        static constexpr std::string_view Name = "JunoCaveShellPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoStreamingPlayspace";
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

    struct JunoCaveVolume
    {
        static constexpr std::string_view Name = "JunoCaveVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TriggerBox";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CollisionComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct JunoCaveVolumePlayspaceComponent
    {
        static constexpr std::string_view Name = "JunoCaveVolumePlayspaceComponent";
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

    struct JunoCheatManager_ProceduralWorld
    {
        static constexpr std::string_view Name = "JunoCheatManager_ProceduralWorld";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCosmeticGatheringInCave
    {
        static constexpr std::string_view Name = "JunoCosmeticGatheringInCave";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProfileGo";
        struct Offsets
        {
            static constexpr std::uintptr_t CsvNonPersistentMetadata = 0xB8;
            static constexpr std::uintptr_t CsvMetadata = 0xC8;
            static constexpr std::uintptr_t DefaultSettleTime = 0xD8;
            static constexpr std::uintptr_t ProfileGoScenarios = 0x450;
            static constexpr std::uintptr_t ProfileGoGeneratedScenarios = 0x460;
            static constexpr std::uintptr_t ProfileGoCollections = 0x470;
            static constexpr std::uintptr_t ProfileGoCommands = 0x480;
            static constexpr std::uintptr_t AnimProfilingAssetsBlacklist = 0x490;
            static constexpr std::uintptr_t AnimProfilingCosmeticsWhitelist = 0x4A0;
            static constexpr std::uintptr_t CachedAthenaCosmeticItemDefinitions = 0x4B0;
            static constexpr std::uintptr_t CachedAthenaCosmeticVariantTokens = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CsvNonPersistentMetadata", 0xB8, "MapProperty"},
            {"CsvMetadata", 0xC8, "MapProperty"},
            {"DefaultSettleTime", 0xD8, "FloatProperty"},
            {"ProfileGoScenarios", 0x450, "ArrayProperty"},
            {"ProfileGoGeneratedScenarios", 0x460, "ArrayProperty"},
            {"ProfileGoCollections", 0x470, "ArrayProperty"},
            {"ProfileGoCommands", 0x480, "ArrayProperty"},
            {"AnimProfilingAssetsBlacklist", 0x490, "ArrayProperty"},
            {"AnimProfilingCosmeticsWhitelist", 0x4A0, "ArrayProperty"},
            {"CachedAthenaCosmeticItemDefinitions", 0x4B0, "ArrayProperty"},
            {"CachedAthenaCosmeticVariantTokens", 0x4C0, "ArrayProperty"},
        }};
    };

    struct JunoGameFeatureAction_AddTileSet
    {
        static constexpr std::string_view Name = "JunoGameFeatureAction_AddTileSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t TilesetRegistryName = 0x28;
            static constexpr std::uintptr_t UniqueTag = 0x2C;
            static constexpr std::uintptr_t TileManipulatorClass = 0x30;
            static constexpr std::uintptr_t LandscapeMaterialLibrary = 0x50;
            static constexpr std::uintptr_t CachedComponentLayers = 0x70;
            static constexpr std::uintptr_t CachedComponentData = 0x90;
            static constexpr std::uintptr_t TileAssetData = 0xB0;
            static constexpr std::uintptr_t TileAssetDatas = 0xD0;
            static constexpr std::uintptr_t TileAssetMetaData = 0xE0;
            static constexpr std::uintptr_t TerrainDirectories = 0x100;
            static constexpr std::uintptr_t TerrainAssetPaths = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TilesetRegistryName", 0x28, "StructProperty"},
            {"UniqueTag", 0x2C, "StructProperty"},
            {"TileManipulatorClass", 0x30, "SoftClassProperty"},
            {"LandscapeMaterialLibrary", 0x50, "SoftObjectProperty"},
            {"CachedComponentLayers", 0x70, "SoftObjectProperty"},
            {"CachedComponentData", 0x90, "SoftObjectProperty"},
            {"TileAssetData", 0xB0, "SoftObjectProperty"},
            {"TileAssetDatas", 0xD0, "ArrayProperty"},
            {"TileAssetMetaData", 0xE0, "SoftObjectProperty"},
            {"TerrainDirectories", 0x100, "ArrayProperty"},
            {"TerrainAssetPaths", 0x110, "ArrayProperty"},
        }};
    };

    struct JunoGenerateTileCommandlet
    {
        static constexpr std::string_view Name = "JunoGenerateTileCommandlet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Commandlet";
        struct Offsets
        {
            static constexpr std::uintptr_t HelpDescription = 0x28;
            static constexpr std::uintptr_t HelpUsage = 0x38;
            static constexpr std::uintptr_t HelpWebLink = 0x48;
            static constexpr std::uintptr_t HelpParamNames = 0x58;
            static constexpr std::uintptr_t HelpParamDescriptions = 0x68;
            static constexpr std::uintptr_t FastExit = 0x78;
            static constexpr std::uintptr_t IsClient = 0x78;
            static constexpr std::uintptr_t IsEditor = 0x78;
            static constexpr std::uintptr_t IsServer = 0x78;
            static constexpr std::uintptr_t LogToConsole = 0x78;
            static constexpr std::uintptr_t ShowErrorCount = 0x78;
            static constexpr std::uintptr_t ShowProgress = 0x78;
            static constexpr std::uintptr_t UseCommandletResultAsExitCode = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"HelpDescription", 0x28, "StrProperty"},
            {"HelpUsage", 0x38, "StrProperty"},
            {"HelpWebLink", 0x48, "StrProperty"},
            {"HelpParamNames", 0x58, "ArrayProperty"},
            {"HelpParamDescriptions", 0x68, "ArrayProperty"},
            {"FastExit", 0x78, "BoolProperty"},
            {"IsClient", 0x78, "BoolProperty"},
            {"IsEditor", 0x78, "BoolProperty"},
            {"IsServer", 0x78, "BoolProperty"},
            {"LogToConsole", 0x78, "BoolProperty"},
            {"ShowErrorCount", 0x78, "BoolProperty"},
            {"ShowProgress", 0x78, "BoolProperty"},
            {"UseCommandletResultAsExitCode", 0x78, "BoolProperty"},
        }};
    };

    struct JunoGenerateTileInterface
    {
        static constexpr std::string_view Name = "JunoGenerateTileInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoHLODMapActorRedirectors
    {
        static constexpr std::string_view Name = "JunoHLODMapActorRedirectors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultMapActorRedirectors = 0x28;
            static constexpr std::uintptr_t MapActorRedirectorsLookup = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultMapActorRedirectors", 0x28, "ArrayProperty"},
            {"MapActorRedirectorsLookup", 0x38, "MapProperty"},
        }};
    };

    struct JunoHLODMapActorsPersistenceMigration
    {
        static constexpr std::string_view Name = "JunoHLODMapActorsPersistenceMigration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGJunoStreamingGameplayVolumePersistenceMigration";
        struct Offsets
        {
            static constexpr std::uintptr_t Classes = 0x28;
            static constexpr std::uintptr_t TargetLevel = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Classes", 0x28, "ArrayProperty"},
            {"TargetLevel", 0x38, "EnumProperty"},
        }};
    };

    struct JunoInstancedActorData
    {
        static constexpr std::string_view Name = "JunoInstancedActorData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsData";
        struct Offsets
        {
            static constexpr std::uintptr_t CompressedInstanceTransforms = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CompressedInstanceTransforms", 0x2E0, "StructProperty"},
        }};
    };

    struct JunoInstancedActorManager
    {
        static constexpr std::string_view Name = "JunoInstancedActorManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsManager";
        struct Offsets
        {
            static constexpr std::uintptr_t bPersistentDataRestored = 0x9B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bPersistentDataRestored", 0x9B8, "BoolProperty"},
        }};
    };

    struct JunoInstancedActorManagerHLODClonerComponent
    {
        static constexpr std::string_view Name = "JunoInstancedActorManagerHLODClonerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
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

    struct JunoInstancedActorModifierVolumeComponent
    {
        static constexpr std::string_view Name = "JunoInstancedActorModifierVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsModifierVolumeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Shape = 0x560;
            static constexpr std::uintptr_t Extent = 0x568;
            static constexpr std::uintptr_t Radius = 0x580;
            static constexpr std::uintptr_t Modifiers = 0x588;
            static constexpr std::uintptr_t bIgnoreOwnLevelsInstances = 0x598;
            static constexpr std::uintptr_t LevelsToIgnore = 0x5A0;
            static constexpr std::uintptr_t Color = 0x5B0;
            static constexpr std::uintptr_t bDrawOnlyIfSelected = 0x5B4;
            static constexpr std::uintptr_t LineThickness = 0x5B8;
            static constexpr std::uintptr_t ModifierVolumeHandle = 0x5BC;
            static constexpr std::uintptr_t ModifiedManagers = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Shape", 0x560, "EnumProperty"},
            {"Extent", 0x568, "StructProperty"},
            {"Radius", 0x580, "FloatProperty"},
            {"Modifiers", 0x588, "ArrayProperty"},
            {"bIgnoreOwnLevelsInstances", 0x598, "BoolProperty"},
            {"LevelsToIgnore", 0x5A0, "ArrayProperty"},
            {"Color", 0x5B0, "StructProperty"},
            {"bDrawOnlyIfSelected", 0x5B4, "BoolProperty"},
            {"LineThickness", 0x5B8, "FloatProperty"},
            {"ModifierVolumeHandle", 0x5BC, "StructProperty"},
            {"ModifiedManagers", 0x5C0, "ArrayProperty"},
        }};
    };

    struct JunoInstancedActorRemovalModifierVolume
    {
        static constexpr std::string_view Name = "JunoInstancedActorRemovalModifierVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsModifierVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifierVolumeComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModifierVolumeComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct JunoInstancedActorRepresentationActorManagement
    {
        static constexpr std::string_view Name = "JunoInstancedActorRepresentationActorManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsRepresentationActorManagement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoInstancedActorSubsystem
    {
        static constexpr std::string_view Name = "JunoInstancedActorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectSettings = 0x68;
            static constexpr std::uintptr_t DataRegistrySubsystem = 0x70;
            static constexpr std::uintptr_t ActorPartitionSubsystem = 0x78;
            static constexpr std::uintptr_t InstancedActorsManagerClass = 0x80;
            static constexpr std::uintptr_t ExemplarActorWorld = 0x250;
            static constexpr std::uintptr_t SettingsType = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ProjectSettings", 0x68, "ObjectProperty"},
            {"DataRegistrySubsystem", 0x70, "ObjectProperty"},
            {"ActorPartitionSubsystem", 0x78, "ObjectProperty"},
            {"InstancedActorsManagerClass", 0x80, "ClassProperty"},
            {"ExemplarActorWorld", 0x250, "ObjectProperty"},
            {"SettingsType", 0x268, "ObjectProperty"},
        }};
    };

    struct JunoInstancedActorVisualizationTrait
    {
        static constexpr std::string_view Name = "JunoInstancedActorVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsVisualizationTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceData = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceData", 0x120, "WeakObjectProperty"},
        }};
    };

    struct JunoInstancedActorsMaterialOverrideComponent
    {
        static constexpr std::string_view Name = "JunoInstancedActorsMaterialOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceHandle = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceHandle", 0xC0, "StructProperty"},
        }};
    };

    struct JunoLandscapeClampingHelper
    {
        static constexpr std::string_view Name = "JunoLandscapeClampingHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLandscapeClampingHelperBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedTerrainGenerationSystem = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedTerrainGenerationSystem", 0x28, "WeakObjectProperty"},
        }};
    };

    struct JunoLevelInstance
    {
        static constexpr std::string_view Name = "JunoLevelInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingLevelInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLevelLoaded = 0x748;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnLevelLoaded", 0x748, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoLevelRedirectors
    {
        static constexpr std::string_view Name = "JunoLevelRedirectors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelNameRedirectors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LevelNameRedirectors", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoLifecycleClientProcessor
    {
        static constexpr std::string_view Name = "JunoLifecycleClientProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct JunoLifecycleComponent
    {
        static constexpr std::string_view Name = "JunoLifecycleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LifecyclePhases = 0xE0;
            static constexpr std::uintptr_t bAutoAddFinalLifecyclePhase = 0xF0;
            static constexpr std::uintptr_t bRepeatLifecyclePhases = 0xF1;
            static constexpr std::uintptr_t OnLifecyclePhaseChangedDelegate = 0xF8;
            static constexpr std::uintptr_t OnLifecycleCompletedDelegate = 0x108;
            static constexpr std::uintptr_t MeshComponent = 0x118;
            static constexpr std::uintptr_t FinalLifecycleScale = 0x120;
            static constexpr std::uintptr_t StartingPhaseIndex = 0x138;
            static constexpr std::uintptr_t CurrentPhaseIndex = 0x139;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LifecyclePhases", 0xE0, "ArrayProperty"},
            {"bAutoAddFinalLifecyclePhase", 0xF0, "BoolProperty"},
            {"bRepeatLifecyclePhases", 0xF1, "BoolProperty"},
            {"OnLifecyclePhaseChangedDelegate", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnLifecycleCompletedDelegate", 0x108, "MulticastInlineDelegateProperty"},
            {"MeshComponent", 0x118, "ObjectProperty"},
            {"FinalLifecycleScale", 0x120, "StructProperty"},
            {"StartingPhaseIndex", 0x138, "ByteProperty"},
            {"CurrentPhaseIndex", 0x139, "ByteProperty"},
        }};
    };

    struct JunoLifecycleProcessor
    {
        static constexpr std::string_view Name = "JunoLifecycleProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct JunoLifecycleScaleDeinitializer
    {
        static constexpr std::string_view Name = "JunoLifecycleScaleDeinitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct JunoLifecycleScaleInitializer
    {
        static constexpr std::string_view Name = "JunoLifecycleScaleInitializer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct JunoLifecycleVisualizationProcessor
    {
        static constexpr std::string_view Name = "JunoLifecycleVisualizationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct JunoLightWeightBuildingGameplayActor
    {
        static constexpr std::string_view Name = "JunoLightWeightBuildingGameplayActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct JunoLightWeightBuildingProp
    {
        static constexpr std::string_view Name = "JunoLightWeightBuildingProp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct JunoLightWeightFortStaticMeshActor
    {
        static constexpr std::string_view Name = "JunoLightWeightFortStaticMeshActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct JunoLivingWorldCaveSpawnLimiterComponent
    {
        static constexpr std::string_view Name = "JunoLivingWorldCaveSpawnLimiterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnLimitData = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnLimitData", 0xC0, "StructProperty"},
        }};
    };

    struct JunoLivingWorldCaveSpawnManager
    {
        static constexpr std::string_view Name = "JunoLivingWorldCaveSpawnManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShellInfos = 0xC0;
            static constexpr std::uintptr_t UnprocessedPointProviders = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShellInfos", 0xC0, "MapProperty"},
            {"UnprocessedPointProviders", 0xD0, "MapProperty"},
        }};
    };

    struct JunoLivingWorldLightStaticPointProvider
    {
        static constexpr std::string_view Name = "JunoLivingWorldLightStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldLightStaticPointProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t EventLimiter = 0x1C0;
            static constexpr std::uintptr_t SavedActorGuid = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EventLimiter", 0x1C0, "StructProperty"},
            {"SavedActorGuid", 0x1E0, "StructProperty"},
        }};
    };

    struct JunoLivingWorldModifierManager
    {
        static constexpr std::string_view Name = "JunoLivingWorldModifierManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnModifierChangedDelegate = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnModifierChangedDelegate", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoLivingWorldModifierVolumeComponent
    {
        static constexpr std::string_view Name = "JunoLivingWorldModifierVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifierTagQuery = 0xC0;
            static constexpr std::uintptr_t bIsDisableModifier = 0x108;
            static constexpr std::uintptr_t AreaDatas = 0x110;
            static constexpr std::uintptr_t ClipToOwnerTile = 0x120;
            static constexpr std::uintptr_t ClipDistanceThreshold = 0x148;
            static constexpr std::uintptr_t VerticalExpandDistance = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ModifierTagQuery", 0xC0, "StructProperty"},
            {"bIsDisableModifier", 0x108, "BoolProperty"},
            {"AreaDatas", 0x110, "ArrayProperty"},
            {"ClipToOwnerTile", 0x120, "StructProperty"},
            {"ClipDistanceThreshold", 0x148, "StructProperty"},
            {"VerticalExpandDistance", 0x170, "StructProperty"},
        }};
    };

    struct JunoLivingWorldStaticPointProvider
    {
        static constexpr std::string_view Name = "JunoLivingWorldStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldStaticPointProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t EventLimiter = 0x3B8;
            static constexpr std::uintptr_t SavedActorGuid = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EventLimiter", 0x3B8, "StructProperty"},
            {"SavedActorGuid", 0x3D8, "StructProperty"},
        }};
    };

    struct JunoLivingWorldStaticPointProviderCluster
    {
        static constexpr std::string_view Name = "JunoLivingWorldStaticPointProviderCluster";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ClusterTag = 0x278;
            static constexpr std::uintptr_t GlobalTags = 0x280;
            static constexpr std::uintptr_t Entries = 0x2A0;
            static constexpr std::uintptr_t PointInfos = 0x2B0;
            static constexpr std::uintptr_t PartitionnerCellSize = 0x2C0;
            static constexpr std::uintptr_t PointProvidersBounds = 0x2E8;
            static constexpr std::uintptr_t HysteresisSize = 0x320;
            static constexpr std::uintptr_t MaxPlayerQueryRange = 0x324;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ClusterTag", 0x278, "StructProperty"},
            {"GlobalTags", 0x280, "StructProperty"},
            {"Entries", 0x2A0, "ArrayProperty"},
            {"PointInfos", 0x2B0, "ArrayProperty"},
            {"PartitionnerCellSize", 0x2C0, "StructProperty"},
            {"PointProvidersBounds", 0x2E8, "StructProperty"},
            {"HysteresisSize", 0x320, "FloatProperty"},
            {"MaxPlayerQueryRange", 0x324, "FloatProperty"},
        }};
    };

    struct JunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo
    {
        static constexpr std::string_view Name = "JunoLivingWorldStaticPointProviderClusterNavigationInvokerInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NavInvocationDistance = 0x28;
            static constexpr std::uintptr_t EnablingDistance = 0x50;
            static constexpr std::uintptr_t EnablingDistanceOverride = 0x78;
            static constexpr std::uintptr_t GenerationRadius = 0x88;
            static constexpr std::uintptr_t SupportedAgents = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NavInvocationDistance", 0x28, "StructProperty"},
            {"EnablingDistance", 0x50, "StructProperty"},
            {"EnablingDistanceOverride", 0x78, "ArrayProperty"},
            {"GenerationRadius", 0x88, "StructProperty"},
            {"SupportedAgents", 0xB0, "StructProperty"},
        }};
    };

    struct JunoLivingWorldStaticPointProviderClusterRenderComponent
    {
        static constexpr std::string_view Name = "JunoLivingWorldStaticPointProviderClusterRenderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct JunoMarkerTrigger
    {
        static constexpr std::string_view Name = "JunoMarkerTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct JunoMassDehydrationSignalProcessor
    {
        static constexpr std::string_view Name = "JunoMassDehydrationSignalProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMassHydrationSignalProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct JunoMassHydrationSignalProcessor
    {
        static constexpr std::string_view Name = "JunoMassHydrationSignalProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMassHydrationSignalProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct JunoMassHydrationSignalProcessorBase
    {
        static constexpr std::string_view Name = "JunoMassHydrationSignalProcessorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassSignalProcessorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct JunoMaterialOverrideInitializerProcessor
    {
        static constexpr std::string_view Name = "JunoMaterialOverrideInitializerProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct JunoMinimapGenerator
    {
        static constexpr std::string_view Name = "JunoMinimapGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTexture2DPackageCreatedDelegate = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnTexture2DPackageCreatedDelegate", 0x278, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoOutOfBoundsTile
    {
        static constexpr std::string_view Name = "JunoOutOfBoundsTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelsToLoad = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LevelsToLoad", 0x278, "ArrayProperty"},
        }};
    };

    struct JunoPCGVolume
    {
        static constexpr std::string_view Name = "JunoPCGVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CompressedData = 0x278;
            static constexpr std::uintptr_t bIsCompressedDataValid = 0x288;
            static constexpr std::uintptr_t SceneRootComponent = 0x290;
            static constexpr std::uintptr_t GeneratorComponent = 0x298;
            static constexpr std::uintptr_t SpawnerComponent = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CompressedData", 0x278, "MapProperty"},
            {"bIsCompressedDataValid", 0x288, "BoolProperty"},
            {"SceneRootComponent", 0x290, "ObjectProperty"},
            {"GeneratorComponent", 0x298, "ObjectProperty"},
            {"SpawnerComponent", 0x2A0, "ObjectProperty"},
        }};
    };

    struct JunoPOIBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoPOIBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPOIGameplayVolume
    {
        static constexpr std::string_view Name = "JunoPOIGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoStreamingGameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceData = 0x438;
            static constexpr std::uintptr_t POIGuid = 0x458;
            static constexpr std::uintptr_t CaveGUID = 0x468;
            static constexpr std::uintptr_t EncounterCapabilities = 0x478;
            static constexpr std::uintptr_t EncounterVariantCount = 0x498;
            static constexpr std::uintptr_t EncounterCategoryTable = 0x4A0;
            static constexpr std::uintptr_t LevelsToInject = 0x4C0;
            static constexpr std::uintptr_t RegistryItemName = 0x4D0;
            static constexpr std::uintptr_t RegistryType = 0x4D4;
            static constexpr std::uintptr_t PersistenceVersion = 0x4D8;
            static constexpr std::uintptr_t Teleporters = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"InstanceData", 0x438, "StructProperty"},
            {"POIGuid", 0x458, "StructProperty"},
            {"CaveGUID", 0x468, "StructProperty"},
            {"EncounterCapabilities", 0x478, "StructProperty"},
            {"EncounterVariantCount", 0x498, "IntProperty"},
            {"EncounterCategoryTable", 0x4A0, "SoftObjectProperty"},
            {"LevelsToInject", 0x4C0, "ArrayProperty"},
            {"RegistryItemName", 0x4D0, "NameProperty"},
            {"RegistryType", 0x4D4, "StructProperty"},
            {"PersistenceVersion", 0x4D8, "IntProperty"},
            {"Teleporters", 0x4E0, "ArrayProperty"},
        }};
    };

    struct JunoPOIIAMDuplicatedInvalidInstancesFix
    {
        static constexpr std::string_view Name = "JunoPOIIAMDuplicatedInvalidInstancesFix";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGJunoStreamingGameplayVolumePersistenceMigration";
        struct Offsets
        {
            static constexpr std::uintptr_t MapNameFilter = 0x28;
            static constexpr std::uintptr_t ActorsToMigrateNames = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MapNameFilter", 0x28, "StrProperty"},
            {"ActorsToMigrateNames", 0x38, "ArrayProperty"},
        }};
    };

    struct JunoPOIIAMMigrationToHLOD
    {
        static constexpr std::string_view Name = "JunoPOIIAMMigrationToHLOD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHLODMapActorsPersistenceMigration";
        struct Offsets
        {
            static constexpr std::uintptr_t Classes = 0x28;
            static constexpr std::uintptr_t TargetLevel = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Classes", 0x28, "ArrayProperty"},
            {"TargetLevel", 0x38, "EnumProperty"},
        }};
    };

    struct JunoPOIIAMMigrationToNonHLOD
    {
        static constexpr std::string_view Name = "JunoPOIIAMMigrationToNonHLOD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHLODMapActorsPersistenceMigration";
        struct Offsets
        {
            static constexpr std::uintptr_t Classes = 0x28;
            static constexpr std::uintptr_t TargetLevel = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Classes", 0x28, "ArrayProperty"},
            {"TargetLevel", 0x38, "EnumProperty"},
        }};
    };

    struct JunoPOIMessageControllerComponent
    {
        static constexpr std::string_view Name = "JunoPOIMessageControllerComponent";
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

    struct JunoPOIPreselectorComponent
    {
        static constexpr std::string_view Name = "JunoPOIPreselectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldTileSlots = 0xC0;
            static constexpr std::uintptr_t DebugSpawnPOIs = 0x118;
            static constexpr std::uintptr_t POIDataRegistry = 0x128;
            static constexpr std::uintptr_t POIBlockerDataRegistry = 0x12C;
            static constexpr std::uintptr_t TileRequiredTags = 0x130;
            static constexpr std::uintptr_t WorldTile = 0x178;
            static constexpr std::uintptr_t TuningParams = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"WorldTileSlots", 0xC0, "ArrayProperty"},
            {"DebugSpawnPOIs", 0x118, "ArrayProperty"},
            {"POIDataRegistry", 0x128, "StructProperty"},
            {"POIBlockerDataRegistry", 0x12C, "StructProperty"},
            {"TileRequiredTags", 0x130, "StructProperty"},
            {"WorldTile", 0x178, "ObjectProperty"},
            {"TuningParams", 0x198, "StructProperty"},
        }};
    };

    struct JunoPOIPreselectorModifierInterface
    {
        static constexpr std::string_view Name = "JunoPOIPreselectorModifierInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPOIRegistryNameRedirectors
    {
        static constexpr std::string_view Name = "JunoPOIRegistryNameRedirectors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t POIRegistryNameRedirectors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"POIRegistryNameRedirectors", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoPOISelectorComponent
    {
        static constexpr std::string_view Name = "JunoPOISelectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DataRegistryType = 0xC0;
            static constexpr std::uintptr_t TeleporterClasses = 0xC8;
            static constexpr std::uintptr_t POITypes = 0x150;
            static constexpr std::uintptr_t CaveGenerationTags = 0x160;
            static constexpr std::uintptr_t RequiredPOITags = 0x180;
            static constexpr std::uintptr_t bRandomizeRotation = 0x1A0;
            static constexpr std::uintptr_t Params = 0x1A8;
            static constexpr std::uintptr_t PreSelectorComponent = 0x1D8;
            static constexpr std::uintptr_t CaveSurfaceData = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DataRegistryType", 0xC0, "StructProperty"},
            {"TeleporterClasses", 0xC8, "ArrayProperty"},
            {"POITypes", 0x150, "SetProperty"},
            {"CaveGenerationTags", 0x160, "StructProperty"},
            {"RequiredPOITags", 0x180, "StructProperty"},
            {"bRandomizeRotation", 0x1A0, "BoolProperty"},
            {"Params", 0x1A8, "StructProperty"},
            {"PreSelectorComponent", 0x1D8, "WeakObjectProperty"},
            {"CaveSurfaceData", 0x1E8, "StructProperty"},
        }};
    };

    struct JunoPOISelectorPlayspaceComponent
    {
        static constexpr std::string_view Name = "JunoPOISelectorPlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DataRegistry = 0x118;
            static constexpr std::uintptr_t Cache = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataRegistry", 0x118, "StructProperty"},
            {"Cache", 0x120, "StructProperty"},
        }};
    };

    struct JunoPOISlot
    {
        static constexpr std::string_view Name = "JunoPOISlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PotentialPOIs = 0x278;
            static constexpr std::uintptr_t SlotSize = 0x298;
            static constexpr std::uintptr_t TerrainHeightTexture = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PotentialPOIs", 0x278, "SoftObjectProperty"},
            {"SlotSize", 0x298, "EnumProperty"},
            {"TerrainHeightTexture", 0x2A0, "SoftObjectProperty"},
        }};
    };

    struct JunoPawnComponent_StreamingSourcesProvider
    {
        static constexpr std::string_view Name = "JunoPawnComponent_StreamingSourcesProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AboveGroundLocation = 0xD8;
            static constexpr std::uintptr_t AboveGroundRotation = 0xF0;
            static constexpr std::uintptr_t BelowGroundLocation = 0x108;
            static constexpr std::uintptr_t BelowGroundRotation = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AboveGroundLocation", 0xD8, "StructProperty"},
            {"AboveGroundRotation", 0xF0, "StructProperty"},
            {"BelowGroundLocation", 0x108, "StructProperty"},
            {"BelowGroundRotation", 0x120, "StructProperty"},
        }};
    };

    struct JunoProceduralFoundation
    {
        static constexpr std::string_view Name = "JunoProceduralFoundation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingFoundation";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingGroups = 0xB08;
            static constexpr std::uintptr_t AdditionalWorlds = 0xB18;
            static constexpr std::uintptr_t BuildingDeconstructorOrigin = 0xB28;
            static constexpr std::uintptr_t BuildingDeconstructorExtent = 0xB40;
            static constexpr std::uintptr_t bConditionalFoundation = 0xB58;
            static constexpr std::uintptr_t bFlipXAxis = 0xB58;
            static constexpr std::uintptr_t bFlipYAxis = 0xB58;
            static constexpr std::uintptr_t bForceDitheringTransition = 0xB58;
            static constexpr std::uintptr_t bHasExcludedZone = 0xB58;
            static constexpr std::uintptr_t bOverrideNavigationGraphCells = 0xB58;
            static constexpr std::uintptr_t bServerStreamedInLevel = 0xB58;
            static constexpr std::uintptr_t bShowHLODWhenDisabled = 0xB58;
            static constexpr std::uintptr_t bStreamingDataBasedBounds = 0xB59;
            static constexpr std::uintptr_t FoundationEnabledState = 0xB5B;
            static constexpr std::uintptr_t DynamicFoundationType = 0xB5C;
            static constexpr std::uintptr_t FoundationType = 0xB5D;
            static constexpr std::uintptr_t NavExclusionMinX = 0xB60;
            static constexpr std::uintptr_t NavExclusionMaxX = 0xB64;
            static constexpr std::uintptr_t NavExclusionMinY = 0xB68;
            static constexpr std::uintptr_t NavExclusionMaxY = 0xB6C;
            static constexpr std::uintptr_t StreamingBoundingBox = 0xB70;
            static constexpr std::uintptr_t LevelToStream = 0xBA8;
            static constexpr std::uintptr_t BuildingGroupFilter = 0xBB0;
            static constexpr std::uintptr_t MapLocationTag = 0xBF8;
            static constexpr std::uintptr_t LandIcon = 0xC00;
            static constexpr std::uintptr_t LandIconWorldOffset = 0xCB0;
            static constexpr std::uintptr_t MapLocationText = 0xCC8;
            static constexpr std::uintptr_t MapLocationTextOffset = 0xCD8;
            static constexpr std::uintptr_t LandIconAdditionalRenderYaw = 0xCF0;
            static constexpr std::uintptr_t bRotateLandIconWorldOffset = 0xCF4;
            static constexpr std::uintptr_t MapLocationOverride = 0xCF8;
            static constexpr std::uintptr_t bShadowLayer = 0xD10;
            static constexpr std::uintptr_t StreamingData = 0xD18;
            static constexpr std::uintptr_t SpawnedLODActors = 0xDE0;
            static constexpr std::uintptr_t SpawnedLODActorsMinDrawDistances = 0xDF0;
            static constexpr std::uintptr_t ChildSpawnedLODActors = 0xE00;
            static constexpr std::uintptr_t HLODActors = 0xE10;
            static constexpr std::uintptr_t ParentFoundation = 0xE20;
            static constexpr std::uintptr_t ProxyMeshMaxDrawDistanceMultiplier = 0xE28;
            static constexpr std::uintptr_t LevelStreamInfo = 0xE38;
            static constexpr std::uintptr_t DynamicFoundationRepData = 0xE58;
            static constexpr std::uintptr_t DynamicFoundationTransform = 0xEA0;
            static constexpr std::uintptr_t FoundationGUID = 0xF3C;
        };

        inline static constexpr std::array<PropertyInfo, 43> Properties{{
            {"BuildingGroups", 0xB08, "ArrayProperty"},
            {"AdditionalWorlds", 0xB18, "ArrayProperty"},
            {"BuildingDeconstructorOrigin", 0xB28, "StructProperty"},
            {"BuildingDeconstructorExtent", 0xB40, "StructProperty"},
            {"bConditionalFoundation", 0xB58, "BoolProperty"},
            {"bFlipXAxis", 0xB58, "BoolProperty"},
            {"bFlipYAxis", 0xB58, "BoolProperty"},
            {"bForceDitheringTransition", 0xB58, "BoolProperty"},
            {"bHasExcludedZone", 0xB58, "BoolProperty"},
            {"bOverrideNavigationGraphCells", 0xB58, "BoolProperty"},
            {"bServerStreamedInLevel", 0xB58, "BoolProperty"},
            {"bShowHLODWhenDisabled", 0xB58, "BoolProperty"},
            {"bStreamingDataBasedBounds", 0xB59, "BoolProperty"},
            {"FoundationEnabledState", 0xB5B, "EnumProperty"},
            {"DynamicFoundationType", 0xB5C, "EnumProperty"},
            {"FoundationType", 0xB5D, "ByteProperty"},
            {"NavExclusionMinX", 0xB60, "IntProperty"},
            {"NavExclusionMaxX", 0xB64, "IntProperty"},
            {"NavExclusionMinY", 0xB68, "IntProperty"},
            {"NavExclusionMaxY", 0xB6C, "IntProperty"},
            {"StreamingBoundingBox", 0xB70, "StructProperty"},
            {"LevelToStream", 0xBA8, "NameProperty"},
            {"BuildingGroupFilter", 0xBB0, "StructProperty"},
            {"MapLocationTag", 0xBF8, "StructProperty"},
            {"LandIcon", 0xC00, "StructProperty"},
            {"LandIconWorldOffset", 0xCB0, "StructProperty"},
            {"MapLocationText", 0xCC8, "TextProperty"},
            {"MapLocationTextOffset", 0xCD8, "StructProperty"},
            {"LandIconAdditionalRenderYaw", 0xCF0, "FloatProperty"},
            {"bRotateLandIconWorldOffset", 0xCF4, "BoolProperty"},
            {"MapLocationOverride", 0xCF8, "StructProperty"},
            {"bShadowLayer", 0xD10, "BoolProperty"},
            {"StreamingData", 0xD18, "StructProperty"},
            {"SpawnedLODActors", 0xDE0, "ArrayProperty"},
            {"SpawnedLODActorsMinDrawDistances", 0xDF0, "ArrayProperty"},
            {"ChildSpawnedLODActors", 0xE00, "ArrayProperty"},
            {"HLODActors", 0xE10, "ArrayProperty"},
            {"ParentFoundation", 0xE20, "ObjectProperty"},
            {"ProxyMeshMaxDrawDistanceMultiplier", 0xE28, "FloatProperty"},
            {"LevelStreamInfo", 0xE38, "ObjectProperty"},
            {"DynamicFoundationRepData", 0xE58, "StructProperty"},
            {"DynamicFoundationTransform", 0xEA0, "StructProperty"},
            {"FoundationGUID", 0xF3C, "StructProperty"},
        }};
    };

    struct JunoProceduralWorldAdditionalPOIBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoProceduralWorldAdditionalPOIBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoProceduralWorldBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoProceduralWorldBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoProceduralWorldDeveloperSettings
    {
        static constexpr std::string_view Name = "JunoProceduralWorldDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoProceduralWorldSettings
    {
        static constexpr std::string_view Name = "JunoProceduralWorldSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableTiledWorldsInPIE = 0x118;
            static constexpr std::uintptr_t CellLoadingMode = 0x119;
            static constexpr std::uintptr_t Caves_LevelInstanceMode = 0x11A;
            static constexpr std::uintptr_t POI_LevelInstanceMode = 0x11B;
            static constexpr std::uintptr_t bEnablePOI_HLODs = 0x11C;
            static constexpr std::uintptr_t MaxPOIsPerTile = 0x120;
            static constexpr std::uintptr_t InjectedPOI_GridName = 0x124;
            static constexpr std::uintptr_t InjectedPOI_HLODGridName = 0x128;
            static constexpr std::uintptr_t InjectedCave_GridName = 0x12C;
            static constexpr std::uintptr_t InjectedCave_HLODGridName = 0x130;
            static constexpr std::uintptr_t POIStreamingPriority = 0x134;
            static constexpr std::uintptr_t CaveStreamingPriority = 0x138;
            static constexpr std::uintptr_t TileSize = 0x140;
            static constexpr std::uintptr_t WorldSize = 0x148;
            static constexpr std::uintptr_t GenerateWorldDiameter = 0x150;
            static constexpr std::uintptr_t WorldOriginTileOffset = 0x158;
            static constexpr std::uintptr_t DynamicGridLevels = 0x168;
            static constexpr std::uintptr_t DynamicGridWorldMaxExtent = 0x170;
            static constexpr std::uintptr_t DynamicGridLoadingRange = 0x174;
            static constexpr std::uintptr_t TileSelectionClass = 0x178;
            static constexpr std::uintptr_t WorldTileClass = 0x180;
            static constexpr std::uintptr_t OutOfBoundsTileActor = 0x188;
            static constexpr std::uintptr_t TerrainElevationMinimum = 0x190;
            static constexpr std::uintptr_t TerrainElevationMaximum = 0x194;
            static constexpr std::uintptr_t CaveVolumeClass = 0x198;
            static constexpr std::uintptr_t POIVolumeClass = 0x1A0;
            static constexpr std::uintptr_t POIResourcesTable = 0x1A8;
            static constexpr std::uintptr_t TileRegistryType = 0x1C8;
            static constexpr std::uintptr_t EventUpdatesRegistryType = 0x1CC;
            static constexpr std::uintptr_t TilesetRegistryType = 0x1D0;
            static constexpr std::uintptr_t POIRegistryType = 0x1D4;
            static constexpr std::uintptr_t AdditionalPOIsRegistryType = 0x1D8;
            static constexpr std::uintptr_t TileSelectorRegistryType = 0x1DC;
            static constexpr std::uintptr_t CaveResetEventsRegistry = 0x1E0;
            static constexpr std::uintptr_t TestOverlayLevel = 0x1E8;
            static constexpr std::uintptr_t TileSelectorOverride = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"bEnableTiledWorldsInPIE", 0x118, "BoolProperty"},
            {"CellLoadingMode", 0x119, "EnumProperty"},
            {"Caves_LevelInstanceMode", 0x11A, "EnumProperty"},
            {"POI_LevelInstanceMode", 0x11B, "EnumProperty"},
            {"bEnablePOI_HLODs", 0x11C, "BoolProperty"},
            {"MaxPOIsPerTile", 0x120, "IntProperty"},
            {"InjectedPOI_GridName", 0x124, "NameProperty"},
            {"InjectedPOI_HLODGridName", 0x128, "NameProperty"},
            {"InjectedCave_GridName", 0x12C, "NameProperty"},
            {"InjectedCave_HLODGridName", 0x130, "NameProperty"},
            {"POIStreamingPriority", 0x134, "IntProperty"},
            {"CaveStreamingPriority", 0x138, "IntProperty"},
            {"TileSize", 0x140, "Int64Property"},
            {"WorldSize", 0x148, "Int64Property"},
            {"GenerateWorldDiameter", 0x150, "Int64Property"},
            {"WorldOriginTileOffset", 0x158, "StructProperty"},
            {"DynamicGridLevels", 0x168, "Int64Property"},
            {"DynamicGridWorldMaxExtent", 0x170, "FloatProperty"},
            {"DynamicGridLoadingRange", 0x174, "FloatProperty"},
            {"TileSelectionClass", 0x178, "ClassProperty"},
            {"WorldTileClass", 0x180, "ClassProperty"},
            {"OutOfBoundsTileActor", 0x188, "ClassProperty"},
            {"TerrainElevationMinimum", 0x190, "FloatProperty"},
            {"TerrainElevationMaximum", 0x194, "FloatProperty"},
            {"CaveVolumeClass", 0x198, "ClassProperty"},
            {"POIVolumeClass", 0x1A0, "ClassProperty"},
            {"POIResourcesTable", 0x1A8, "SoftObjectProperty"},
            {"TileRegistryType", 0x1C8, "StructProperty"},
            {"EventUpdatesRegistryType", 0x1CC, "StructProperty"},
            {"TilesetRegistryType", 0x1D0, "StructProperty"},
            {"POIRegistryType", 0x1D4, "StructProperty"},
            {"AdditionalPOIsRegistryType", 0x1D8, "StructProperty"},
            {"TileSelectorRegistryType", 0x1DC, "StructProperty"},
            {"CaveResetEventsRegistry", 0x1E0, "StructProperty"},
            {"TestOverlayLevel", 0x1E8, "SoftObjectProperty"},
            {"TileSelectorOverride", 0x208, "NameProperty"},
        }};
    };

    struct JunoProfileGo
    {
        static constexpr std::string_view Name = "JunoProfileGo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProfileGo";
        struct Offsets
        {
            static constexpr std::uintptr_t CsvNonPersistentMetadata = 0xB8;
            static constexpr std::uintptr_t CsvMetadata = 0xC8;
            static constexpr std::uintptr_t DefaultSettleTime = 0xD8;
            static constexpr std::uintptr_t ProfileGoScenarios = 0x450;
            static constexpr std::uintptr_t ProfileGoGeneratedScenarios = 0x460;
            static constexpr std::uintptr_t ProfileGoCollections = 0x470;
            static constexpr std::uintptr_t ProfileGoCommands = 0x480;
            static constexpr std::uintptr_t AnimProfilingAssetsBlacklist = 0x490;
            static constexpr std::uintptr_t AnimProfilingCosmeticsWhitelist = 0x4A0;
            static constexpr std::uintptr_t CachedAthenaCosmeticItemDefinitions = 0x4B0;
            static constexpr std::uintptr_t CachedAthenaCosmeticVariantTokens = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CsvNonPersistentMetadata", 0xB8, "MapProperty"},
            {"CsvMetadata", 0xC8, "MapProperty"},
            {"DefaultSettleTime", 0xD8, "FloatProperty"},
            {"ProfileGoScenarios", 0x450, "ArrayProperty"},
            {"ProfileGoGeneratedScenarios", 0x460, "ArrayProperty"},
            {"ProfileGoCollections", 0x470, "ArrayProperty"},
            {"ProfileGoCommands", 0x480, "ArrayProperty"},
            {"AnimProfilingAssetsBlacklist", 0x490, "ArrayProperty"},
            {"AnimProfilingCosmeticsWhitelist", 0x4A0, "ArrayProperty"},
            {"CachedAthenaCosmeticItemDefinitions", 0x4B0, "ArrayProperty"},
            {"CachedAthenaCosmeticVariantTokens", 0x4C0, "ArrayProperty"},
        }};
    };

    struct JunoProjectPositionTestShape
    {
        static constexpr std::string_view Name = "JunoProjectPositionTestShape";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSpatialData";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0x48;
            static constexpr std::uintptr_t bKeepZeroDensityPoints = 0x50;
            static constexpr std::uintptr_t bHasCachedLastSelector = 0x51;
            static constexpr std::uintptr_t CachedLastSelector = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TargetActor", 0x48, "WeakObjectProperty"},
            {"bKeepZeroDensityPoints", 0x50, "BoolProperty"},
            {"bHasCachedLastSelector", 0x51, "BoolProperty"},
            {"CachedLastSelector", 0x58, "StructProperty"},
        }};
    };

    struct JunoRemoveInstancesModifierVolumeComponent
    {
        static constexpr std::string_view Name = "JunoRemoveInstancesModifierVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInstancedActorModifierVolumeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Shape = 0x560;
            static constexpr std::uintptr_t Extent = 0x568;
            static constexpr std::uintptr_t Radius = 0x580;
            static constexpr std::uintptr_t Modifiers = 0x588;
            static constexpr std::uintptr_t bIgnoreOwnLevelsInstances = 0x598;
            static constexpr std::uintptr_t LevelsToIgnore = 0x5A0;
            static constexpr std::uintptr_t Color = 0x5B0;
            static constexpr std::uintptr_t bDrawOnlyIfSelected = 0x5B4;
            static constexpr std::uintptr_t LineThickness = 0x5B8;
            static constexpr std::uintptr_t ModifierVolumeHandle = 0x5BC;
            static constexpr std::uintptr_t ModifiedManagers = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Shape", 0x560, "EnumProperty"},
            {"Extent", 0x568, "StructProperty"},
            {"Radius", 0x580, "FloatProperty"},
            {"Modifiers", 0x588, "ArrayProperty"},
            {"bIgnoreOwnLevelsInstances", 0x598, "BoolProperty"},
            {"LevelsToIgnore", 0x5A0, "ArrayProperty"},
            {"Color", 0x5B0, "StructProperty"},
            {"bDrawOnlyIfSelected", 0x5B4, "BoolProperty"},
            {"LineThickness", 0x5B8, "FloatProperty"},
            {"ModifierVolumeHandle", 0x5BC, "StructProperty"},
            {"ModifiedManagers", 0x5C0, "ArrayProperty"},
        }};
    };

    struct JunoResetPOITagsPersistenceMigration
    {
        static constexpr std::string_view Name = "JunoResetPOITagsPersistenceMigration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGJunoStreamingGameplayVolumePersistenceMigration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoResetPlayspacePersistenceMigration
    {
        static constexpr std::string_view Name = "JunoResetPlayspacePersistenceMigration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGJunoStreamingGameplayVolumePersistenceMigration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoRoadAINavigationCluster
    {
        static constexpr std::string_view Name = "JunoRoadAINavigationCluster";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t GlobalTags = 0x278;
            static constexpr std::uintptr_t Entries = 0x298;
            static constexpr std::uintptr_t SharedPoints = 0x2A8;
            static constexpr std::uintptr_t PatrolInfos = 0x2B8;
            static constexpr std::uintptr_t PointInfos = 0x2C8;
            static constexpr std::uintptr_t PartitionnerCellSize = 0x2D8;
            static constexpr std::uintptr_t NavInvocationRange = 0x300;
            static constexpr std::uintptr_t NavMeshGenerationRadius = 0x328;
            static constexpr std::uintptr_t NavInvocationSupportedAgents = 0x350;
            static constexpr std::uintptr_t LeashExtraWidth = 0x358;
            static constexpr std::uintptr_t LeashHeight = 0x380;
            static constexpr std::uintptr_t InnerLeashExtraWidth = 0x3A8;
            static constexpr std::uintptr_t InnerLeashHeight = 0x3D0;
            static constexpr std::uintptr_t EnableCampTagging = 0x3F8;
            static constexpr std::uintptr_t CampTags = 0x420;
            static constexpr std::uintptr_t CampDistanceThreshold = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"GlobalTags", 0x278, "StructProperty"},
            {"Entries", 0x298, "ArrayProperty"},
            {"SharedPoints", 0x2A8, "ArrayProperty"},
            {"PatrolInfos", 0x2B8, "ArrayProperty"},
            {"PointInfos", 0x2C8, "ArrayProperty"},
            {"PartitionnerCellSize", 0x2D8, "StructProperty"},
            {"NavInvocationRange", 0x300, "StructProperty"},
            {"NavMeshGenerationRadius", 0x328, "StructProperty"},
            {"NavInvocationSupportedAgents", 0x350, "StructProperty"},
            {"LeashExtraWidth", 0x358, "StructProperty"},
            {"LeashHeight", 0x380, "StructProperty"},
            {"InnerLeashExtraWidth", 0x3A8, "StructProperty"},
            {"InnerLeashHeight", 0x3D0, "StructProperty"},
            {"EnableCampTagging", 0x3F8, "StructProperty"},
            {"CampTags", 0x420, "StructProperty"},
            {"CampDistanceThreshold", 0x440, "StructProperty"},
        }};
    };

    struct JunoRoadAINavigationClusterRenderComponent
    {
        static constexpr std::string_view Name = "JunoRoadAINavigationClusterRenderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct JunoRoadLivingWorldRuntimePointProviderComponent
    {
        static constexpr std::string_view Name = "JunoRoadLivingWorldRuntimePointProviderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldRuntimePointProviderComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseSpawnLimitFromPatrol = 0xD0;
            static constexpr std::uintptr_t SpawnLimiter = 0xD8;
            static constexpr std::uintptr_t bUseTagsFromPatrol = 0x140;
            static constexpr std::uintptr_t Tags = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseSpawnLimitFromPatrol", 0xD0, "BoolProperty"},
            {"SpawnLimiter", 0xD8, "StructProperty"},
            {"bUseTagsFromPatrol", 0x140, "BoolProperty"},
            {"Tags", 0x148, "StructProperty"},
        }};
    };

    struct JunoServerInstancedActorSpawnerSubsystem
    {
        static constexpr std::string_view Name = "JunoServerInstancedActorSpawnerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ServerInstancedActorsSpawnerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TransientActorBeingSpawned = 0xE0;
            static constexpr std::uintptr_t TransientActorSpawningInstance = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransientActorBeingSpawned", 0xE0, "ObjectProperty"},
            {"TransientActorSpawningInstance", 0xE8, "StructProperty"},
        }};
    };

    struct JunoStaticMeshPoolActor
    {
        static constexpr std::string_view Name = "JunoStaticMeshPoolActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct JunoStaticMeshPoolSubsystem
    {
        static constexpr std::string_view Name = "JunoStaticMeshPoolSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMeshPoolActor = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StaticMeshPoolActor", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoStreamingGameplayVolume
    {
        static constexpr std::string_view Name = "JunoStreamingGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedActorGuid = 0x360;
            static constexpr std::uintptr_t bSpawnedByLevelSaveRecord = 0x370;
            static constexpr std::uintptr_t BoundsExtent = 0x378;
            static constexpr std::uintptr_t BoundsOffset = 0x390;
            static constexpr std::uintptr_t bStreamingPrioritized = 0x3A8;
            static constexpr std::uintptr_t UnloadCompletionPollTimer = 0x3B0;
            static constexpr std::uintptr_t bReceiveOnActorPersistentDataReadyNotification = 0x3C8;
            static constexpr std::uintptr_t bDeleteFromPersistenceDataRequest = 0x3E0;
            static constexpr std::uintptr_t LevelsToLoad = 0x3F8;
            static constexpr std::uintptr_t RegisteredLevelIdentities = 0x408;
            static constexpr std::uintptr_t bLevelIdentitiesInitialized = 0x418;
            static constexpr std::uintptr_t RetiredRuntimeLevelIndices = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SavedActorGuid", 0x360, "StructProperty"},
            {"bSpawnedByLevelSaveRecord", 0x370, "BoolProperty"},
            {"BoundsExtent", 0x378, "StructProperty"},
            {"BoundsOffset", 0x390, "StructProperty"},
            {"bStreamingPrioritized", 0x3A8, "BoolProperty"},
            {"UnloadCompletionPollTimer", 0x3B0, "StructProperty"},
            {"bReceiveOnActorPersistentDataReadyNotification", 0x3C8, "BoolProperty"},
            {"bDeleteFromPersistenceDataRequest", 0x3E0, "BoolProperty"},
            {"LevelsToLoad", 0x3F8, "ArrayProperty"},
            {"RegisteredLevelIdentities", 0x408, "ArrayProperty"},
            {"bLevelIdentitiesInitialized", 0x418, "BoolProperty"},
            {"RetiredRuntimeLevelIndices", 0x420, "SetProperty"},
        }};
    };

    struct JunoStreamingGameplayVolumeDebugger
    {
        static constexpr std::string_view Name = "JunoStreamingGameplayVolumeDebugger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoStreamingPlayspace
    {
        static constexpr std::string_view Name = "JunoStreamingPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistentPlayspace";
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

    struct JunoSurfaceTargetTeleporterComponent
    {
        static constexpr std::string_view Name = "JunoSurfaceTargetTeleporterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoTerrainCachedComponentData
    {
        static constexpr std::string_view Name = "JunoTerrainCachedComponentData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRuntimeLandscapeCachedComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t PrecachedData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PrecachedData", 0x28, "MapProperty"},
        }};
    };

    struct JunoTerrainGenerationCommandlet
    {
        static constexpr std::string_view Name = "JunoTerrainGenerationCommandlet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Commandlet";
        struct Offsets
        {
            static constexpr std::uintptr_t HelpDescription = 0x28;
            static constexpr std::uintptr_t HelpUsage = 0x38;
            static constexpr std::uintptr_t HelpWebLink = 0x48;
            static constexpr std::uintptr_t HelpParamNames = 0x58;
            static constexpr std::uintptr_t HelpParamDescriptions = 0x68;
            static constexpr std::uintptr_t FastExit = 0x78;
            static constexpr std::uintptr_t IsClient = 0x78;
            static constexpr std::uintptr_t IsEditor = 0x78;
            static constexpr std::uintptr_t IsServer = 0x78;
            static constexpr std::uintptr_t LogToConsole = 0x78;
            static constexpr std::uintptr_t ShowErrorCount = 0x78;
            static constexpr std::uintptr_t ShowProgress = 0x78;
            static constexpr std::uintptr_t UseCommandletResultAsExitCode = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"HelpDescription", 0x28, "StrProperty"},
            {"HelpUsage", 0x38, "StrProperty"},
            {"HelpWebLink", 0x48, "StrProperty"},
            {"HelpParamNames", 0x58, "ArrayProperty"},
            {"HelpParamDescriptions", 0x68, "ArrayProperty"},
            {"FastExit", 0x78, "BoolProperty"},
            {"IsClient", 0x78, "BoolProperty"},
            {"IsEditor", 0x78, "BoolProperty"},
            {"IsServer", 0x78, "BoolProperty"},
            {"LogToConsole", 0x78, "BoolProperty"},
            {"ShowErrorCount", 0x78, "BoolProperty"},
            {"ShowProgress", 0x78, "BoolProperty"},
            {"UseCommandletResultAsExitCode", 0x78, "BoolProperty"},
        }};
    };

    struct JunoTerrainGenerationSystem
    {
        static constexpr std::string_view Name = "JunoTerrainGenerationSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedLandscapes = 0x68;
            static constexpr std::uintptr_t TrackedLandscapeComponents = 0x78;
            static constexpr std::uintptr_t RuntimeLandscapeSubsystem = 0x88;
            static constexpr std::uintptr_t TileTrackingSubsystem = 0x98;
            static constexpr std::uintptr_t VisualsConfiguration = 0x140;
            static constexpr std::uintptr_t ModificationsConfiguration = 0x1B0;
            static constexpr std::uintptr_t HeightmapConfiguration = 0x220;
            static constexpr std::uintptr_t GrassConfiguration = 0x290;
            static constexpr std::uintptr_t CollisionConfiguration = 0x300;
            static constexpr std::uintptr_t WeightmapConfiguration = 0x370;
            static constexpr std::uintptr_t WaterConfiguration = 0x3E0;
            static constexpr std::uintptr_t WeightmapsToGather = 0x460;
            static constexpr std::uintptr_t bEnablePhysicsAndGrassStripping = 0x470;
            static constexpr std::uintptr_t ExcludePhysicsAndGrassStrippingPlatforms = 0x478;
            static constexpr std::uintptr_t bEnablePCGCacheStripping = 0x488;
            static constexpr std::uintptr_t ExcludePCGCacheStrippingPlatforms = 0x490;
            static constexpr std::uintptr_t WaterNavigationMaterial = 0x4A0;
            static constexpr std::uintptr_t WaterIdentificationMaterial = 0x4A8;
            static constexpr std::uintptr_t WaterIdentificationMaterialDynamic = 0x4B0;
            static constexpr std::uintptr_t WaterNavigationMaterialDynamic = 0x4B8;
            static constexpr std::uintptr_t RiverIdentificationMaterial = 0x4C0;
            static constexpr std::uintptr_t LakeIdentificationMaterial = 0x4C8;
            static constexpr std::uintptr_t WaterBodyIdentificationTexture = 0x4D0;
            static constexpr std::uintptr_t WaterIdentificationFinal = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"TrackedLandscapes", 0x68, "SetProperty"},
            {"TrackedLandscapeComponents", 0x78, "SetProperty"},
            {"RuntimeLandscapeSubsystem", 0x88, "ObjectProperty"},
            {"TileTrackingSubsystem", 0x98, "ObjectProperty"},
            {"VisualsConfiguration", 0x140, "StructProperty"},
            {"ModificationsConfiguration", 0x1B0, "StructProperty"},
            {"HeightmapConfiguration", 0x220, "StructProperty"},
            {"GrassConfiguration", 0x290, "StructProperty"},
            {"CollisionConfiguration", 0x300, "StructProperty"},
            {"WeightmapConfiguration", 0x370, "StructProperty"},
            {"WaterConfiguration", 0x3E0, "StructProperty"},
            {"WeightmapsToGather", 0x460, "ArrayProperty"},
            {"bEnablePhysicsAndGrassStripping", 0x470, "BoolProperty"},
            {"ExcludePhysicsAndGrassStrippingPlatforms", 0x478, "ArrayProperty"},
            {"bEnablePCGCacheStripping", 0x488, "BoolProperty"},
            {"ExcludePCGCacheStrippingPlatforms", 0x490, "ArrayProperty"},
            {"WaterNavigationMaterial", 0x4A0, "ObjectProperty"},
            {"WaterIdentificationMaterial", 0x4A8, "ObjectProperty"},
            {"WaterIdentificationMaterialDynamic", 0x4B0, "ObjectProperty"},
            {"WaterNavigationMaterialDynamic", 0x4B8, "ObjectProperty"},
            {"RiverIdentificationMaterial", 0x4C0, "ObjectProperty"},
            {"LakeIdentificationMaterial", 0x4C8, "ObjectProperty"},
            {"WaterBodyIdentificationTexture", 0x4D0, "ObjectProperty"},
            {"WaterIdentificationFinal", 0x4D8, "ObjectProperty"},
        }};
    };

    struct JunoTerrainMaterialCollector
    {
        static constexpr std::string_view Name = "JunoTerrainMaterialCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortRuntimeLandscapeExternalMaterialsCollector";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTerrainSystemAssets
    {
        static constexpr std::string_view Name = "JunoTerrainSystemAssets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterNavigationMaterial = 0x28;
            static constexpr std::uintptr_t WaterIdentificationMaterial = 0x30;
            static constexpr std::uintptr_t RiverIdentificationMaterial = 0x38;
            static constexpr std::uintptr_t LakeIdentificationMaterial = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WaterNavigationMaterial", 0x28, "ObjectProperty"},
            {"WaterIdentificationMaterial", 0x30, "ObjectProperty"},
            {"RiverIdentificationMaterial", 0x38, "ObjectProperty"},
            {"LakeIdentificationMaterial", 0x40, "ObjectProperty"},
        }};
    };

    struct JunoTestPOIMarker
    {
        static constexpr std::string_view Name = "JunoTestPOIMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugBoxSize = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugBoxSize", 0x278, "FloatProperty"},
        }};
    };

    struct JunoTileGenerationUGCRequest
    {
        static constexpr std::string_view Name = "JunoTileGenerationUGCRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTileGenerationUGCRequest_AllTiles
    {
        static constexpr std::string_view Name = "JunoTileGenerationUGCRequest_AllTiles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTileGenerationUGCRequest";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTileGridPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoTileGridPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t Tiles = 0x58;
            static constexpr std::uintptr_t SaveIDToTiles = 0x68;
            static constexpr std::uintptr_t TileSaveData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tiles", 0x58, "MapProperty"},
            {"SaveIDToTiles", 0x68, "MapProperty"},
            {"TileSaveData", 0x78, "StructProperty"},
        }};
    };

    struct JunoTileGridPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoTileGridPersistenceFeatureData_Container";
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

    struct JunoTileGridPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoTileGridPersistenceFeatureModule";
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

    struct JunoTilePOIStreamingComponent
    {
        static constexpr std::string_view Name = "JunoTilePOIStreamingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoTileSubsystem
    {
        static constexpr std::string_view Name = "JunoTileSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TileGridPersistenceFeatureHelper = 0x78;
            static constexpr std::uintptr_t OutOfBoundsActors = 0x80;
            static constexpr std::uintptr_t WorldTileGenerator = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TileGridPersistenceFeatureHelper", 0x78, "ObjectProperty"},
            {"OutOfBoundsActors", 0x80, "MapProperty"},
            {"WorldTileGenerator", 0x98, "ObjectProperty"},
        }};
    };

    struct JunoTileTrackingSubsystem
    {
        static constexpr std::string_view Name = "JunoTileTrackingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTilesetSubsystem
    {
        static constexpr std::string_view Name = "JunoTilesetSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTransitionCaveEntranceTeleporterComponent
    {
        static constexpr std::string_view Name = "JunoTransitionCaveEntranceTeleporterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalPOIs = 0xC8;
            static constexpr std::uintptr_t TransitionId = 0xD8;
            static constexpr std::uintptr_t PreselectorLayerName = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AdditionalPOIs", 0xC8, "ArrayProperty"},
            {"TransitionId", 0xD8, "NameProperty"},
            {"PreselectorLayerName", 0xDC, "NameProperty"},
        }};
    };

    struct JunoTransitionCaveExitTeleporterComponent
    {
        static constexpr std::string_view Name = "JunoTransitionCaveExitTeleporterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalPOIs = 0xC8;
            static constexpr std::uintptr_t TransitionId = 0xD8;
            static constexpr std::uintptr_t PreselectorLayerName = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AdditionalPOIs", 0xC8, "ArrayProperty"},
            {"TransitionId", 0xD8, "NameProperty"},
            {"PreselectorLayerName", 0xDC, "NameProperty"},
        }};
    };

    struct JunoWaterSplineInjector
    {
        static constexpr std::string_view Name = "JunoWaterSplineInjector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
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

    struct JunoWorldEventStartTileChooser
    {
        static constexpr std::string_view Name = "JunoWorldEventStartTileChooser";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldEventTileLayout
    {
        static constexpr std::string_view Name = "JunoWorldEventTileLayout";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldLocalEnvironmentComponent
    {
        static constexpr std::string_view Name = "JunoWorldLocalEnvironmentComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalBiome = 0xC8;
            static constexpr std::uintptr_t ServerBiome = 0x198;
            static constexpr std::uintptr_t WaterDirectionInformation = 0x268;
            static constexpr std::uintptr_t LookDirectionWaterInformation = 0x278;
            static constexpr std::uintptr_t bShouldUpdateWaterLocation = 0x2C8;
            static constexpr std::uintptr_t WorldTile = 0x2CC;
            static constexpr std::uintptr_t OnJunoEnvironmentChanged = 0x2D8;
            static constexpr std::uintptr_t CaveGUID = 0x370;
            static constexpr std::uintptr_t WeakRegistryManager = 0x380;
            static constexpr std::uintptr_t CachedController = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"LocalBiome", 0xC8, "StructProperty"},
            {"ServerBiome", 0x198, "StructProperty"},
            {"WaterDirectionInformation", 0x268, "ArrayProperty"},
            {"LookDirectionWaterInformation", 0x278, "StructProperty"},
            {"bShouldUpdateWaterLocation", 0x2C8, "BoolProperty"},
            {"WorldTile", 0x2CC, "WeakObjectProperty"},
            {"OnJunoEnvironmentChanged", 0x2D8, "MulticastInlineDelegateProperty"},
            {"CaveGUID", 0x370, "StructProperty"},
            {"WeakRegistryManager", 0x380, "WeakObjectProperty"},
            {"CachedController", 0x388, "WeakObjectProperty"},
        }};
    };

    struct JunoWorldMutationSubsystem
    {
        static constexpr std::string_view Name = "JunoWorldMutationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldMutationsPersistenceFeatureHelper = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldMutationsPersistenceFeatureHelper", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoWorldMutationsPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoWorldMutationsPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t SaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoWorldMutationsPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoWorldMutationsPersistenceFeatureData_Container";
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

    struct JunoWorldMutationsPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoWorldMutationsPersistenceFeatureModule";
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

    struct JunoWorldPreloadActor
    {
        static constexpr std::string_view Name = "JunoWorldPreloadActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideBounds = 0x280;
            static constexpr std::uintptr_t OverridenBounds = 0x288;
            static constexpr std::uintptr_t PrecalculatedBounds = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bOverrideBounds", 0x280, "BoolProperty"},
            {"OverridenBounds", 0x288, "StructProperty"},
            {"PrecalculatedBounds", 0x2C0, "StructProperty"},
        }};
    };

    struct JunoWorldPreloadActorReference
    {
        static constexpr std::string_view Name = "JunoWorldPreloadActorReference";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedActor = 0x28;
            static constexpr std::uintptr_t ActorInfo = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnedActor", 0x28, "ObjectProperty"},
            {"ActorInfo", 0x30, "StructProperty"},
        }};
    };

    struct JunoWorldRegistryActorComponent
    {
        static constexpr std::string_view Name = "JunoWorldRegistryActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldRegistryEntryTags = 0xC0;
            static constexpr std::uintptr_t WorldRegistryType = 0xE0;
            static constexpr std::uintptr_t VisitedTags = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WorldRegistryEntryTags", 0xC0, "StructProperty"},
            {"WorldRegistryType", 0xE0, "EnumProperty"},
            {"VisitedTags", 0xE8, "StructProperty"},
        }};
    };

    struct JunoWorldRegistryManager
    {
        static constexpr std::string_view Name = "JunoWorldRegistryManager";
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

    struct JunoWorldTile
    {
        static constexpr std::string_view Name = "JunoWorldTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoStreamingGameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t TileInformation = 0x440;
            static constexpr std::uintptr_t WorldPartitionPersistentDataHandler = 0x608;
            static constexpr std::uintptr_t InjectedLevels = 0x618;
            static constexpr std::uintptr_t ReferencedTagVolumes = 0x678;
            static constexpr std::uintptr_t PreloadActors = 0x688;
            static constexpr std::uintptr_t OwnedPreloadActorReferences = 0x698;
            static constexpr std::uintptr_t ReferencedPreloadActors = 0x6A8;
            static constexpr std::uintptr_t EventBuilder = 0x6B8;
            static constexpr std::uintptr_t PreloadActorCount = 0x6C0;
            static constexpr std::uintptr_t ReferencedPreloadActorCount = 0x6C4;
            static constexpr std::uintptr_t bTileGenerationComplete = 0x700;
            static constexpr std::uintptr_t bLoaded = 0x701;
            static constexpr std::uintptr_t KnownNonStreamingLevels = 0x720;
            static constexpr std::uintptr_t InjectedObjectsWorldPartition = 0x760;
            static constexpr std::uintptr_t POITeleporters = 0x788;
            static constexpr std::uintptr_t bIsSingleTileProxy = 0x798;
            static constexpr std::uintptr_t DefaultEmptyTileMap = 0x7A0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"TileInformation", 0x440, "StructProperty"},
            {"WorldPartitionPersistentDataHandler", 0x608, "StructProperty"},
            {"InjectedLevels", 0x618, "StructProperty"},
            {"ReferencedTagVolumes", 0x678, "ArrayProperty"},
            {"PreloadActors", 0x688, "ArrayProperty"},
            {"OwnedPreloadActorReferences", 0x698, "ArrayProperty"},
            {"ReferencedPreloadActors", 0x6A8, "ArrayProperty"},
            {"EventBuilder", 0x6B8, "WeakObjectProperty"},
            {"PreloadActorCount", 0x6C0, "IntProperty"},
            {"ReferencedPreloadActorCount", 0x6C4, "IntProperty"},
            {"bTileGenerationComplete", 0x700, "BoolProperty"},
            {"bLoaded", 0x701, "BoolProperty"},
            {"KnownNonStreamingLevels", 0x720, "SetProperty"},
            {"InjectedObjectsWorldPartition", 0x760, "ObjectProperty"},
            {"POITeleporters", 0x788, "MapProperty"},
            {"bIsSingleTileProxy", 0x798, "BoolProperty"},
            {"DefaultEmptyTileMap", 0x7A0, "SoftObjectProperty"},
        }};
    };

    struct JunoWorldTileControllerComponent
    {
        static constexpr std::string_view Name = "JunoWorldTileControllerComponent";
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

    struct JunoWorldTileDebugger
    {
        static constexpr std::string_view Name = "JunoWorldTileDebugger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldTileEventBuilder
    {
        static constexpr std::string_view Name = "JunoWorldTileEventBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t EventTileSize = 0x278;
            static constexpr std::uintptr_t bIsBespokeEvent = 0x280;
            static constexpr std::uintptr_t bFillWithWater = 0x281;
            static constexpr std::uintptr_t TileExtent = 0x288;
            static constexpr std::uintptr_t TileSize = 0x290;
            static constexpr std::uintptr_t WorldRadius = 0x298;
            static constexpr std::uintptr_t EventRandomStream = 0x2A0;
            static constexpr std::uintptr_t bUsePlayerLocationBuffer = 0x2A8;
            static constexpr std::uintptr_t bPlaceNearLastEvent = 0x2A9;
            static constexpr std::uintptr_t bPlaceNearPlayer = 0x2AA;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"EventTileSize", 0x278, "StructProperty"},
            {"bIsBespokeEvent", 0x280, "BoolProperty"},
            {"bFillWithWater", 0x281, "BoolProperty"},
            {"TileExtent", 0x288, "DoubleProperty"},
            {"TileSize", 0x290, "DoubleProperty"},
            {"WorldRadius", 0x298, "DoubleProperty"},
            {"EventRandomStream", 0x2A0, "StructProperty"},
            {"bUsePlayerLocationBuffer", 0x2A8, "BoolProperty"},
            {"bPlaceNearLastEvent", 0x2A9, "BoolProperty"},
            {"bPlaceNearPlayer", 0x2AA, "BoolProperty"},
        }};
    };

    struct JunoWorldTileGenerator
    {
        static constexpr std::string_view Name = "JunoWorldTileGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TileGrid = 0x38;
            static constexpr std::uintptr_t OwnerPlayspace = 0x40;
            static constexpr std::uintptr_t ProceduralSettings = 0x48;
            static constexpr std::uintptr_t TileSelectionInterfaceObject = 0xC8;
            static constexpr std::uintptr_t POIRegistry = 0xD0;
            static constexpr std::uintptr_t AdditionalPOIsRegistry = 0xD8;
            static constexpr std::uintptr_t CaveResetEventsRegistry = 0xE0;
            static constexpr std::uintptr_t RandomStreamComponent = 0xE8;
            static constexpr std::uintptr_t TileSubsystem = 0xF0;
            static constexpr std::uintptr_t LocationComponent = 0xF8;
            static constexpr std::uintptr_t PendingEventAndBuilders = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TileGrid", 0x38, "WeakObjectProperty"},
            {"OwnerPlayspace", 0x40, "WeakObjectProperty"},
            {"ProceduralSettings", 0x48, "WeakObjectProperty"},
            {"TileSelectionInterfaceObject", 0xC8, "ObjectProperty"},
            {"POIRegistry", 0xD0, "WeakObjectProperty"},
            {"AdditionalPOIsRegistry", 0xD8, "WeakObjectProperty"},
            {"CaveResetEventsRegistry", 0xE0, "WeakObjectProperty"},
            {"RandomStreamComponent", 0xE8, "WeakObjectProperty"},
            {"TileSubsystem", 0xF0, "WeakObjectProperty"},
            {"LocationComponent", 0xF8, "WeakObjectProperty"},
            {"PendingEventAndBuilders", 0x100, "MapProperty"},
        }};
    };

    struct JunoWorldTileLayoutInterface
    {
        static constexpr std::string_view Name = "JunoWorldTileLayoutInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldTileLayoutInterfaceBlueprintLibary
    {
        static constexpr std::string_view Name = "JunoWorldTileLayoutInterfaceBlueprintLibary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldTileManipulator
    {
        static constexpr std::string_view Name = "JunoWorldTileManipulator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldTilePersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoWorldTilePersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t Caves = 0x68;
            static constexpr std::uintptr_t POIs = 0x78;
            static constexpr std::uintptr_t HasClearedUGCSlots = 0x88;
            static constexpr std::uintptr_t SaveData = 0x98;
            static constexpr std::uintptr_t MissingPOIWaiverState = 0x108;
            static constexpr std::uintptr_t MissingPOIWaiverEpoch = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Caves", 0x68, "MapProperty"},
            {"POIs", 0x78, "MapProperty"},
            {"HasClearedUGCSlots", 0x88, "SetProperty"},
            {"SaveData", 0x98, "StructProperty"},
            {"MissingPOIWaiverState", 0x108, "EnumProperty"},
            {"MissingPOIWaiverEpoch", 0x10C, "IntProperty"},
        }};
    };

    struct JunoWorldTilePersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoWorldTilePersistenceFeatureModule";
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

    struct JunoWorldTilePlayspaceComponent
    {
        static constexpr std::string_view Name = "JunoWorldTilePlayspaceComponent";
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

    struct JunoWorldTileReplaceableTileUGCCollector
    {
        static constexpr std::string_view Name = "JunoWorldTileReplaceableTileUGCCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTileGenerationUGCRequest";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldTileSaveData_Container
    {
        static constexpr std::string_view Name = "JunoWorldTileSaveData_Container";
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

    struct JunoWorldTileSelectionBase
    {
        static constexpr std::string_view Name = "JunoWorldTileSelectionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ProceduralWorldSettings = 0x28;
            static constexpr std::uintptr_t TileExtent = 0x30;
            static constexpr std::uintptr_t WorldGridCount = 0x34;
            static constexpr std::uintptr_t WorldSize = 0x38;
            static constexpr std::uintptr_t BaseTileset = 0x40;
            static constexpr std::uintptr_t bRequiresDebugArea = 0x44;
            static constexpr std::uintptr_t bEnableBiomeSwaps = 0x45;
            static constexpr std::uintptr_t bEnableBorderPermutations = 0x46;
            static constexpr std::uintptr_t WaterTileName = 0x48;
            static constexpr std::uintptr_t JunoWorldTileLayoutInterface = 0x50;
            static constexpr std::uintptr_t RandomStreamGenerator = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ProceduralWorldSettings", 0x28, "WeakObjectProperty"},
            {"TileExtent", 0x30, "FloatProperty"},
            {"WorldGridCount", 0x34, "IntProperty"},
            {"WorldSize", 0x38, "Int64Property"},
            {"BaseTileset", 0x40, "StructProperty"},
            {"bRequiresDebugArea", 0x44, "BoolProperty"},
            {"bEnableBiomeSwaps", 0x45, "BoolProperty"},
            {"bEnableBorderPermutations", 0x46, "BoolProperty"},
            {"WaterTileName", 0x48, "NameProperty"},
            {"JunoWorldTileLayoutInterface", 0x50, "ObjectProperty"},
            {"RandomStreamGenerator", 0x58, "ObjectProperty"},
        }};
    };

    struct JunoWorldTileSelectionCynthia
    {
        static constexpr std::string_view Name = "JunoWorldTileSelectionCynthia";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWorldTileSelectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ScatteredLandBiomes = 0x78;
            static constexpr std::uintptr_t StartTileRequiredBiomes = 0x88;
            static constexpr std::uintptr_t WaterLevel = 0x98;
            static constexpr std::uintptr_t TileNoiseFrequency = 0x9C;
            static constexpr std::uintptr_t NumberOfAlpineRanges = 0xA0;
            static constexpr std::uintptr_t AlpineRangeLength = 0xA4;
            static constexpr std::uintptr_t ScatteredAlpineBiomes = 0xA8;
            static constexpr std::uintptr_t AreasToUpdate = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ScatteredLandBiomes", 0x78, "ArrayProperty"},
            {"StartTileRequiredBiomes", 0x88, "ArrayProperty"},
            {"WaterLevel", 0x98, "FloatProperty"},
            {"TileNoiseFrequency", 0x9C, "FloatProperty"},
            {"NumberOfAlpineRanges", 0xA0, "IntProperty"},
            {"AlpineRangeLength", 0xA4, "IntProperty"},
            {"ScatteredAlpineBiomes", 0xA8, "ArrayProperty"},
            {"AreasToUpdate", 0xB8, "MapProperty"},
        }};
    };

    struct JunoWorldTileTabascoWaterTileUGCCollector
    {
        static constexpr std::string_view Name = "JunoWorldTileTabascoWaterTileUGCCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoTileGenerationUGCRequest";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldWeatherLocationComponent
    {
        static constexpr std::string_view Name = "JunoWorldWeatherLocationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoWeatherLocationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLocationChanged = 0xC0;
            static constexpr std::uintptr_t Location = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnLocationChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"Location", 0xF0, "StructProperty"},
        }};
    };

    struct LandmassCluster
    {
        static constexpr std::string_view Name = "LandmassCluster";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bInitialized = 0x28;
            static constexpr std::uintptr_t Actors = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInitialized", 0x28, "BoolProperty"},
            {"Actors", 0x40, "ArrayProperty"},
        }};
    };

    struct LandmassFunctionLibrary
    {
        static constexpr std::string_view Name = "LandmassFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LandmassPathfinder
    {
        static constexpr std::string_view Name = "LandmassPathfinder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LandscapeProxy = 0x28;
            static constexpr std::uintptr_t RouteSystem = 0x30;
            static constexpr std::uintptr_t BackStopPaths = 0x38;
            static constexpr std::uintptr_t BlockingRoute = 0x48;
            static constexpr std::uintptr_t PCGSampler = 0x1A8;
            static constexpr std::uintptr_t PathfinderSpawnWarpingActorDelegate = 0x1C0;
            static constexpr std::uintptr_t PathfinderHistory = 0x1D0;
            static constexpr std::uintptr_t MaxNodesPerCell = 0x218;
            static constexpr std::uintptr_t bUsePCGSamplerIfAvailable = 0x220;
            static constexpr std::uintptr_t bVisualizeHeuristicSteps = 0x221;
            static constexpr std::uintptr_t bVisualizeBacktracedPathOfHeuristicSteps = 0x222;
            static constexpr std::uintptr_t bVisualizeValidLocationSearching = 0x223;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"LandscapeProxy", 0x28, "ObjectProperty"},
            {"RouteSystem", 0x30, "ObjectProperty"},
            {"BackStopPaths", 0x38, "ArrayProperty"},
            {"BlockingRoute", 0x48, "ObjectProperty"},
            {"PCGSampler", 0x1A8, "WeakObjectProperty"},
            {"PathfinderSpawnWarpingActorDelegate", 0x1C0, "MulticastInlineDelegateProperty"},
            {"PathfinderHistory", 0x1D0, "StructProperty"},
            {"MaxNodesPerCell", 0x218, "IntProperty"},
            {"bUsePCGSamplerIfAvailable", 0x220, "BoolProperty"},
            {"bVisualizeHeuristicSteps", 0x221, "BoolProperty"},
            {"bVisualizeBacktracedPathOfHeuristicSteps", 0x222, "BoolProperty"},
            {"bVisualizeValidLocationSearching", 0x223, "BoolProperty"},
        }};
    };

    struct LandmassProceduralRoadGenRules
    {
        static constexpr std::string_view Name = "LandmassProceduralRoadGenRules";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RuleSet = 0x28;
            static constexpr std::uintptr_t RoadGridGridSize = 0x38;
            static constexpr std::uintptr_t RasterizeToRoadGridExtent = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RuleSet", 0x28, "MapProperty"},
            {"RoadGridGridSize", 0x38, "FloatProperty"},
            {"RasterizeToRoadGridExtent", 0x3C, "IntProperty"},
        }};
    };

    struct LandmassProceduralRoute
    {
        static constexpr std::string_view Name = "LandmassProceduralRoute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t EditorTickIsEnabled = 0x280;
            static constexpr std::uintptr_t PCGSampler = 0x284;
            static constexpr std::uintptr_t bRunFromPCG = 0x28C;
            static constexpr std::uintptr_t LandscapeProxy = 0x290;
            static constexpr std::uintptr_t TickFrequency = 0x298;
            static constexpr std::uintptr_t JunoTileInfo = 0x29C;
            static constexpr std::uintptr_t Pathfinder = 0x2A8;
            static constexpr std::uintptr_t Lakes = 0x2B0;
            static constexpr std::uintptr_t OnGenerationFinishedMulticastDelegate = 0x2D0;
            static constexpr std::uintptr_t PendingRoutesToAddToRouteGrid = 0x300;
            static constexpr std::uintptr_t LandmassCluster = 0x330;
            static constexpr std::uintptr_t bEnableDebugInfo = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"EditorTickIsEnabled", 0x280, "BoolProperty"},
            {"PCGSampler", 0x284, "WeakObjectProperty"},
            {"bRunFromPCG", 0x28C, "BoolProperty"},
            {"LandscapeProxy", 0x290, "ObjectProperty"},
            {"TickFrequency", 0x298, "IntProperty"},
            {"JunoTileInfo", 0x29C, "StructProperty"},
            {"Pathfinder", 0x2A8, "ClassProperty"},
            {"Lakes", 0x2B0, "ArrayProperty"},
            {"OnGenerationFinishedMulticastDelegate", 0x2D0, "MulticastInlineDelegateProperty"},
            {"PendingRoutesToAddToRouteGrid", 0x300, "ArrayProperty"},
            {"LandmassCluster", 0x330, "ObjectProperty"},
            {"bEnableDebugInfo", 0x338, "BoolProperty"},
        }};
    };

    struct PCGAddLandscapeLayerWeightsSettings
    {
        static constexpr std::string_view Name = "PCGAddLandscapeLayerWeightsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGJunoActorBoundsToPointSettings
    {
        static constexpr std::string_view Name = "PCGJunoActorBoundsToPointSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x50;
            static constexpr std::uintptr_t bExecutionDependencyRequired = 0x54;
            static constexpr std::uintptr_t bUseSeed = 0x60;
            static constexpr std::uintptr_t CachedOverridableParams = 0x80;
            static constexpr std::uintptr_t OverriddenSettingsPropertyBag = 0x90;
            static constexpr std::uintptr_t bExecuteOnGPU = 0x99;
            static constexpr std::uintptr_t bDumpCookedHLSL = 0x9A;
            static constexpr std::uintptr_t bDumpDataDescriptions = 0x9B;
            static constexpr std::uintptr_t bPrintShaderDebugValues = 0x9C;
            static constexpr std::uintptr_t DebugBufferSize = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Seed", 0x50, "IntProperty"},
            {"bExecutionDependencyRequired", 0x54, "BoolProperty"},
            {"bUseSeed", 0x60, "BoolProperty"},
            {"CachedOverridableParams", 0x80, "ArrayProperty"},
            {"OverriddenSettingsPropertyBag", 0x90, "ObjectProperty"},
            {"bExecuteOnGPU", 0x99, "BoolProperty"},
            {"bDumpCookedHLSL", 0x9A, "BoolProperty"},
            {"bDumpDataDescriptions", 0x9B, "BoolProperty"},
            {"bPrintShaderDebugValues", 0x9C, "BoolProperty"},
            {"DebugBufferSize", 0xA0, "IntProperty"},
        }};
    };

    struct PCGJunoApplyMaskNodeSettings
    {
        static constexpr std::string_view Name = "PCGJunoApplyMaskNodeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mode", 0xA8, "EnumProperty"},
        }};
    };

    struct PCGJunoCreateMaskDataNodeSettings
    {
        static constexpr std::string_view Name = "PCGJunoCreateMaskDataNodeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bIs2D = 0xA8;
            static constexpr std::uintptr_t Resolution = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIs2D", 0xA8, "BoolProperty"},
            {"Resolution", 0xAC, "IntProperty"},
        }};
    };

    struct PCGJunoFilterPointsBasedOnLandscapeSlopeSettings
    {
        static constexpr std::string_view Name = "PCGJunoFilterPointsBasedOnLandscapeSlopeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0xA8;
            static constexpr std::uintptr_t DirectionCount = 0xAC;
            static constexpr std::uintptr_t SampleOnEachDirectionCount = 0xB0;
            static constexpr std::uintptr_t BaseDistanceThreshold = 0xB4;
            static constexpr std::uintptr_t MaxSlopeAngleDegree = 0xB8;
            static constexpr std::uintptr_t RequiredValidConsecutiveDirectionsCount = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Radius", 0xA8, "FloatProperty"},
            {"DirectionCount", 0xAC, "IntProperty"},
            {"SampleOnEachDirectionCount", 0xB0, "IntProperty"},
            {"BaseDistanceThreshold", 0xB4, "FloatProperty"},
            {"MaxSlopeAngleDegree", 0xB8, "FloatProperty"},
            {"RequiredValidConsecutiveDirectionsCount", 0xBC, "IntProperty"},
        }};
    };

    struct PCGJunoFindFoundationSettings
    {
        static constexpr std::string_view Name = "PCGJunoFindFoundationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceToSample = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DistanceToSample", 0xA8, "FloatProperty"},
        }};
    };

    struct PCGJunoFractalNoise2DSettings
    {
        static constexpr std::string_view Name = "PCGJunoFractalNoise2DSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t TilingFactor = 0xA8;
            static constexpr std::uintptr_t Brightness = 0xB8;
            static constexpr std::uintptr_t Contrast = 0xBC;
            static constexpr std::uintptr_t Iterations = 0xC0;
            static constexpr std::uintptr_t Mode = 0xC4;
            static constexpr std::uintptr_t AttributeName = 0xC8;
            static constexpr std::uintptr_t VoronoiIDAttributeName = 0xCC;
            static constexpr std::uintptr_t bVoronoiOrientSamplesToCellEdge = 0xD0;
            static constexpr std::uintptr_t VoronoiDistortion = 0xD8;
            static constexpr std::uintptr_t VoronoiDistortionTiling = 0xE0;
            static constexpr std::uintptr_t TiledVoronoiResolution = 0xF0;
            static constexpr std::uintptr_t DensityMode = 0xF4;
            static constexpr std::uintptr_t Offset = 0xF8;
            static constexpr std::uintptr_t RandomizedOffset = 0x108;
            static constexpr std::uintptr_t EdgeBlendDistance = 0x118;
            static constexpr std::uintptr_t EdgeNoiseBrightness = 0x11C;
            static constexpr std::uintptr_t EdgeNoiseContrast = 0x120;
            static constexpr std::uintptr_t EdgeBlendCurve = 0x124;
            static constexpr std::uintptr_t EdgeBlendCurveOffset = 0x128;
            static constexpr std::uintptr_t EdgeBlendNoise = 0x12C;
            static constexpr std::uintptr_t EdgeBlendFadeOut = 0x130;
            static constexpr std::uintptr_t EdgeBlendNoiseTilingFactor = 0x138;
            static constexpr std::uintptr_t EdgeNoiseMode = 0x148;
            static constexpr std::uintptr_t EdgeNoiseIterations = 0x14C;
            static constexpr std::uintptr_t EdgeBlendCellCount = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"TilingFactor", 0xA8, "StructProperty"},
            {"Brightness", 0xB8, "FloatProperty"},
            {"Contrast", 0xBC, "FloatProperty"},
            {"Iterations", 0xC0, "IntProperty"},
            {"Mode", 0xC4, "EnumProperty"},
            {"AttributeName", 0xC8, "NameProperty"},
            {"VoronoiIDAttributeName", 0xCC, "NameProperty"},
            {"bVoronoiOrientSamplesToCellEdge", 0xD0, "BoolProperty"},
            {"VoronoiDistortion", 0xD8, "DoubleProperty"},
            {"VoronoiDistortionTiling", 0xE0, "StructProperty"},
            {"TiledVoronoiResolution", 0xF0, "IntProperty"},
            {"DensityMode", 0xF4, "EnumProperty"},
            {"Offset", 0xF8, "StructProperty"},
            {"RandomizedOffset", 0x108, "StructProperty"},
            {"EdgeBlendDistance", 0x118, "FloatProperty"},
            {"EdgeNoiseBrightness", 0x11C, "FloatProperty"},
            {"EdgeNoiseContrast", 0x120, "FloatProperty"},
            {"EdgeBlendCurve", 0x124, "FloatProperty"},
            {"EdgeBlendCurveOffset", 0x128, "FloatProperty"},
            {"EdgeBlendNoise", 0x12C, "FloatProperty"},
            {"EdgeBlendFadeOut", 0x130, "BoolProperty"},
            {"EdgeBlendNoiseTilingFactor", 0x138, "StructProperty"},
            {"EdgeNoiseMode", 0x148, "EnumProperty"},
            {"EdgeNoiseIterations", 0x14C, "IntProperty"},
            {"EdgeBlendCellCount", 0x150, "IntProperty"},
        }};
    };

    struct PCGJunoLoadDataSettings
    {
        static constexpr std::string_view Name = "PCGJunoLoadDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Pins = 0xA8;
            static constexpr std::uintptr_t Source = 0xB8;
            static constexpr std::uintptr_t AdditionalExtents = 0xC0;
            static constexpr std::uintptr_t Tag = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Pins", 0xA8, "ArrayProperty"},
            {"Source", 0xB8, "EnumProperty"},
            {"AdditionalExtents", 0xC0, "StructProperty"},
            {"Tag", 0xD8, "NameProperty"},
        }};
    };

    struct PCGJunoMaskData
    {
        static constexpr std::string_view Name = "PCGJunoMaskData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGData";
        struct Offsets
        {
            static constexpr std::uintptr_t UID = 0x28;
            static constexpr std::uintptr_t MetaData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UID", 0x28, "UInt64Property"},
            {"MetaData", 0x38, "ObjectProperty"},
        }};
    };

    struct PCGJunoPathfindSettings
    {
        static constexpr std::string_view Name = "PCGJunoPathfindSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ProceduralRouteTag = 0xA8;
            static constexpr std::uintptr_t InputPins = 0xB0;
            static constexpr std::uintptr_t OutputPins = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProceduralRouteTag", 0xA8, "NameProperty"},
            {"InputPins", 0xB0, "ArrayProperty"},
            {"OutputPins", 0xC0, "ArrayProperty"},
        }};
    };

    struct PCGJunoProjectPositionSettings
    {
        static constexpr std::string_view Name = "PCGJunoProjectPositionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bProjectLandscapeMetadata = 0xA8;
            static constexpr std::uintptr_t bProjectPositions = 0xA9;
            static constexpr std::uintptr_t bProjectRotations = 0xAA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bProjectLandscapeMetadata", 0xA8, "BoolProperty"},
            {"bProjectPositions", 0xA9, "BoolProperty"},
            {"bProjectRotations", 0xAA, "BoolProperty"},
        }};
    };

    struct PCGJunoReadLandscapeSplinesSettings
    {
        static constexpr std::string_view Name = "PCGJunoReadLandscapeSplinesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtraSearchExtents = 0xA8;
            static constexpr std::uintptr_t bPerformBoundsCheck = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExtraSearchExtents", 0xA8, "StructProperty"},
            {"bPerformBoundsCheck", 0xC0, "BoolProperty"},
        }};
    };

    struct PCGJunoReadProceduralSplinesSettings
    {
        static constexpr std::string_view Name = "PCGJunoReadProceduralSplinesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ProceduralRouteTag = 0xA8;
            static constexpr std::uintptr_t OutputPins = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProceduralRouteTag", 0xA8, "NameProperty"},
            {"OutputPins", 0xB0, "ArrayProperty"},
        }};
    };

    struct PCGJunoRoadAINavigationSettings
    {
        static constexpr std::string_view Name = "PCGJunoRoadAINavigationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t RoadClusterClass = 0xA8;
            static constexpr std::uintptr_t PatrolPathClass = 0xC8;
            static constexpr std::uintptr_t PatrolPointClass = 0xE8;
            static constexpr std::uintptr_t GraphSettings = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RoadClusterClass", 0xA8, "SoftClassProperty"},
            {"PatrolPathClass", 0xC8, "SoftClassProperty"},
            {"PatrolPointClass", 0xE8, "SoftClassProperty"},
            {"GraphSettings", 0x108, "StructProperty"},
        }};
    };

    struct PCGJunoSpawnLivingWorldStaticPointSettings
    {
        static constexpr std::string_view Name = "PCGJunoSpawnLivingWorldStaticPointSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t FiltersTags = 0xA8;
            static constexpr std::uintptr_t ConditionalTags = 0xC8;
            static constexpr std::uintptr_t ConditionalTagsSets = 0xD8;
            static constexpr std::uintptr_t bExclusiveConditionalTags = 0xE8;
            static constexpr std::uintptr_t bUseLightStaticPoint = 0xE9;
            static constexpr std::uintptr_t StaticPointClass = 0xF0;
            static constexpr std::uintptr_t LightStaticPointClass = 0x110;
            static constexpr std::uintptr_t LightStaticPointNavInfoClass = 0x130;
            static constexpr std::uintptr_t PointClusterClass = 0x150;
            static constexpr std::uintptr_t ClusterTag = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"FiltersTags", 0xA8, "StructProperty"},
            {"ConditionalTags", 0xC8, "ArrayProperty"},
            {"ConditionalTagsSets", 0xD8, "ArrayProperty"},
            {"bExclusiveConditionalTags", 0xE8, "BoolProperty"},
            {"bUseLightStaticPoint", 0xE9, "BoolProperty"},
            {"StaticPointClass", 0xF0, "SoftClassProperty"},
            {"LightStaticPointClass", 0x110, "SoftClassProperty"},
            {"LightStaticPointNavInfoClass", 0x130, "SoftClassProperty"},
            {"PointClusterClass", 0x150, "SoftClassProperty"},
            {"ClusterTag", 0x170, "StructProperty"},
        }};
    };

    struct PCGJunoStoreDataSettings
    {
        static constexpr std::string_view Name = "PCGJunoStoreDataSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ExpectedPins = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExpectedPins", 0xA8, "ArrayProperty"},
        }};
    };

    struct PCGJunoStreamingGameplayVolumePersistenceMigration
    {
        static constexpr std::string_view Name = "PCGJunoStreamingGameplayVolumePersistenceMigration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PCGJunoUnionMasksNodeSettings
    {
        static constexpr std::string_view Name = "PCGJunoUnionMasksNodeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bIs2D = 0xA8;
            static constexpr std::uintptr_t Resolution = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIs2D", 0xA8, "BoolProperty"},
            {"Resolution", 0xAC, "IntProperty"},
        }};
    };

    struct PCGManageLightweightInstances
    {
        static constexpr std::string_view Name = "PCGManageLightweightInstances";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedActors";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedLWIs = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeneratedLWIs", 0x60, "SetProperty"},
        }};
    };

    struct PCGManagedActorInstances
    {
        static constexpr std::string_view Name = "PCGManagedActorInstances";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedActors";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedInstances = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GeneratedInstances", 0x60, "SetProperty"},
        }};
    };

    struct PCGResolveAudioBankSettings
    {
        static constexpr std::string_view Name = "PCGResolveAudioBankSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNameForBiomeDataTable = 0xA8;
            static constexpr std::uintptr_t AttributeNameForResolvedActorPath = 0xAC;
            static constexpr std::uintptr_t AttributeNameForResolvedAudioBankPath = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AttributeNameForBiomeDataTable", 0xA8, "NameProperty"},
            {"AttributeNameForResolvedActorPath", 0xAC, "NameProperty"},
            {"AttributeNameForResolvedAudioBankPath", 0xB0, "NameProperty"},
        }};
    };

    struct PCGResolveBiomeIngredientsSettings
    {
        static constexpr std::string_view Name = "PCGResolveBiomeIngredientsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNameForBiomeTypeFilter = 0xA8;
            static constexpr std::uintptr_t AttributeNameForBiomeDataTable = 0xAC;
            static constexpr std::uintptr_t AttributeNameForBiomeLayer = 0xB0;
            static constexpr std::uintptr_t AttributeNameForResolvedActorPath = 0xB4;
            static constexpr std::uintptr_t AttributeNameForRepresentation = 0xB8;
            static constexpr std::uintptr_t AttributeNameForResolvedRowName = 0xBC;
            static constexpr std::uintptr_t bApplyBlendToVertical = 0xC0;
            static constexpr std::uintptr_t bApplyRandomLeanAmount = 0xC1;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AttributeNameForBiomeTypeFilter", 0xA8, "NameProperty"},
            {"AttributeNameForBiomeDataTable", 0xAC, "NameProperty"},
            {"AttributeNameForBiomeLayer", 0xB0, "NameProperty"},
            {"AttributeNameForResolvedActorPath", 0xB4, "NameProperty"},
            {"AttributeNameForRepresentation", 0xB8, "NameProperty"},
            {"AttributeNameForResolvedRowName", 0xBC, "NameProperty"},
            {"bApplyBlendToVertical", 0xC0, "BoolProperty"},
            {"bApplyRandomLeanAmount", 0xC1, "BoolProperty"},
        }};
    };

    struct PCGResolveBiomePOISettings
    {
        static constexpr std::string_view Name = "PCGResolveBiomePOISettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNameForBiomeDataTable = 0xA8;
            static constexpr std::uintptr_t AttributeNameForResolvedActorPath = 0xAC;
            static constexpr std::uintptr_t AttributeNameForResolvedPOIPath = 0xB0;
            static constexpr std::uintptr_t AttributeNameForBoundsMultiplier = 0xB4;
            static constexpr std::uintptr_t AttributeNameForRepresentation = 0xB8;
            static constexpr std::uintptr_t AttributeNameForResolvedRowName = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AttributeNameForBiomeDataTable", 0xA8, "NameProperty"},
            {"AttributeNameForResolvedActorPath", 0xAC, "NameProperty"},
            {"AttributeNameForResolvedPOIPath", 0xB0, "NameProperty"},
            {"AttributeNameForBoundsMultiplier", 0xB4, "NameProperty"},
            {"AttributeNameForRepresentation", 0xB8, "NameProperty"},
            {"AttributeNameForResolvedRowName", 0xBC, "NameProperty"},
        }};
    };

    struct PCGResolveBiomeSettings
    {
        static constexpr std::string_view Name = "PCGResolveBiomeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultBiome = 0xA8;
            static constexpr std::uintptr_t Biomes = 0xD0;
            static constexpr std::uintptr_t AttributeNameForResolvedBiome = 0xE0;
            static constexpr std::uintptr_t AttributeNameForResolvedBiomeEnum = 0xE4;
            static constexpr std::uintptr_t AttributeNameForResolvedBiomeDataTable = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DefaultBiome", 0xA8, "StructProperty"},
            {"Biomes", 0xD0, "ArrayProperty"},
            {"AttributeNameForResolvedBiome", 0xE0, "NameProperty"},
            {"AttributeNameForResolvedBiomeEnum", 0xE4, "NameProperty"},
            {"AttributeNameForResolvedBiomeDataTable", 0xE8, "NameProperty"},
        }};
    };

    struct PCGResolvePOISlotsSettings
    {
        static constexpr std::string_view Name = "PCGResolvePOISlotsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNameForBiomeDataTable = 0xA8;
            static constexpr std::uintptr_t AttributeNameForPotentialPIOsDataTable = 0xAC;
            static constexpr std::uintptr_t AttributeNameForResolvedActorPath = 0xB0;
            static constexpr std::uintptr_t AttributeNameForResolvedPOIPath = 0xB4;
            static constexpr std::uintptr_t AttributeNameForResolvedSlotSize = 0xB8;
            static constexpr std::uintptr_t AttributeNameForResolvedTerrainHeightPatch = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AttributeNameForBiomeDataTable", 0xA8, "NameProperty"},
            {"AttributeNameForPotentialPIOsDataTable", 0xAC, "NameProperty"},
            {"AttributeNameForResolvedActorPath", 0xB0, "NameProperty"},
            {"AttributeNameForResolvedPOIPath", 0xB4, "NameProperty"},
            {"AttributeNameForResolvedSlotSize", 0xB8, "NameProperty"},
            {"AttributeNameForResolvedTerrainHeightPatch", 0xBC, "NameProperty"},
        }};
    };

    struct PCGSetAudioBankSettings
    {
        static constexpr std::string_view Name = "PCGSetAudioBankSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNameForResolvedAudioBankPath = 0xA8;
            static constexpr std::uintptr_t AttributeNameForSpawnedActorPtr = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeNameForResolvedAudioBankPath", 0xA8, "NameProperty"},
            {"AttributeNameForSpawnedActorPtr", 0xAC, "NameProperty"},
        }};
    };

    struct PCGSetFoundationLevelSettings
    {
        static constexpr std::string_view Name = "PCGSetFoundationLevelSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNameForResolvedPOIPath = 0xA8;
            static constexpr std::uintptr_t AttributeNameForSpawnedActorPtr = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeNameForResolvedPOIPath", 0xA8, "NameProperty"},
            {"AttributeNameForSpawnedActorPtr", 0xAC, "NameProperty"},
        }};
    };

    struct PCGSetLevelInstanceLevelSettings
    {
        static constexpr std::string_view Name = "PCGSetLevelInstanceLevelSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNameForResolvedPOIPath = 0xA8;
            static constexpr std::uintptr_t AttributeNameForSpawnedActorPtr = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttributeNameForResolvedPOIPath", 0xA8, "NameProperty"},
            {"AttributeNameForSpawnedActorPtr", 0xAC, "NameProperty"},
        }};
    };

    struct PCGSetPOISlotPropertiesSettings
    {
        static constexpr std::string_view Name = "PCGSetPOISlotPropertiesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeNameForSpawnedActorPtr = 0xA8;
            static constexpr std::uintptr_t AttributeNameForPotentialPIOsDataTable = 0xAC;
            static constexpr std::uintptr_t AttributeNameForResolvedPOIPath = 0xB0;
            static constexpr std::uintptr_t AttributeNameForResolvedSlotSize = 0xB4;
            static constexpr std::uintptr_t AttributeNameForResolvedTerrainHeightPatch = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AttributeNameForSpawnedActorPtr", 0xA8, "NameProperty"},
            {"AttributeNameForPotentialPIOsDataTable", 0xAC, "NameProperty"},
            {"AttributeNameForResolvedPOIPath", 0xB0, "NameProperty"},
            {"AttributeNameForResolvedSlotSize", 0xB4, "NameProperty"},
            {"AttributeNameForResolvedTerrainHeightPatch", 0xB8, "NameProperty"},
        }};
    };

    struct PCGSpawnActorForPathSettings
    {
        static constexpr std::string_view Name = "PCGSpawnActorForPathSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseInstancedActors = 0xA8;
            static constexpr std::uintptr_t InstanceTags = 0xB0;
            static constexpr std::uintptr_t TagsToAddOnActors = 0xD0;
            static constexpr std::uintptr_t bAddSpawnedActorAttribute = 0xE0;
            static constexpr std::uintptr_t AttributeNameForSpawnedActorPtr = 0xE4;
            static constexpr std::uintptr_t PathAttributeName = 0xE8;
            static constexpr std::uintptr_t MaterialOverrideAttributeName = 0xEC;
            static constexpr std::uintptr_t AttributeNameForRepresentation = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bUseInstancedActors", 0xA8, "BoolProperty"},
            {"InstanceTags", 0xB0, "StructProperty"},
            {"TagsToAddOnActors", 0xD0, "ArrayProperty"},
            {"bAddSpawnedActorAttribute", 0xE0, "BoolProperty"},
            {"AttributeNameForSpawnedActorPtr", 0xE4, "NameProperty"},
            {"PathAttributeName", 0xE8, "NameProperty"},
            {"MaterialOverrideAttributeName", 0xEC, "NameProperty"},
            {"AttributeNameForRepresentation", 0xF0, "NameProperty"},
        }};
    };

    struct PCGSpawnJunoBiomeSettings
    {
        static constexpr std::string_view Name = "PCGSpawnJunoBiomeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultBiome = 0xA8;
            static constexpr std::uintptr_t Biomes = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultBiome", 0xA8, "StructProperty"},
            {"Biomes", 0xD0, "ArrayProperty"},
        }};
    };

    struct PathfinderGuideSetsDataAsset
    {
        static constexpr std::string_view Name = "PathfinderGuideSetsDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GuideSets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GuideSets", 0x28, "ArrayProperty"},
        }};
    };

    struct ProceduralRiverDefinition
    {
        static constexpr std::string_view Name = "ProceduralRiverDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralRouteDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t GenRulesAsset = 0x30;
            static constexpr std::uintptr_t RiverTier = 0x38;
            static constexpr std::uintptr_t WaterBody = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GenRulesAsset", 0x30, "ObjectProperty"},
            {"RiverTier", 0x38, "EnumProperty"},
            {"WaterBody", 0x40, "ObjectProperty"},
        }};
    };

    struct ProceduralRiverGenRulesAsset
    {
        static constexpr std::string_view Name = "ProceduralRiverGenRulesAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RuleSet = 0x28;
            static constexpr std::uintptr_t RiverGridGridSize = 0x38;
            static constexpr std::uintptr_t RasterizeToRiverGridExtent = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RuleSet", 0x28, "MapProperty"},
            {"RiverGridGridSize", 0x38, "FloatProperty"},
            {"RasterizeToRiverGridExtent", 0x3C, "IntProperty"},
        }};
    };

    struct ProceduralRivers
    {
        static constexpr std::string_view Name = "ProceduralRivers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandmassProceduralRoute";
        struct Offsets
        {
            static constexpr std::uintptr_t WaterClass = 0x340;
            static constexpr std::uintptr_t GenRulesAsset = 0x348;
            static constexpr std::uintptr_t AnchorsInput = 0x350;
            static constexpr std::uintptr_t OutRivers = 0x360;
            static constexpr std::uintptr_t CurrentRoute = 0x370;
            static constexpr std::uintptr_t bEnableDebug = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WaterClass", 0x340, "ClassProperty"},
            {"GenRulesAsset", 0x348, "ObjectProperty"},
            {"AnchorsInput", 0x350, "ArrayProperty"},
            {"OutRivers", 0x360, "ArrayProperty"},
            {"CurrentRoute", 0x370, "ObjectProperty"},
            {"bEnableDebug", 0x378, "BoolProperty"},
        }};
    };

    struct ProceduralRoadDefinition
    {
        static constexpr std::string_view Name = "ProceduralRoadDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ProceduralRouteDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t GenRulesAsset = 0x30;
            static constexpr std::uintptr_t RoadTier = 0x38;
            static constexpr std::uintptr_t Transform = 0x40;
            static constexpr std::uintptr_t OutInterpSegments = 0xA0;
            static constexpr std::uintptr_t Length = 0xB0;
            static constexpr std::uintptr_t LUTGridSize = 0xB4;
            static constexpr std::uintptr_t LUT = 0xB8;
            static constexpr std::uintptr_t LUTResolution = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GenRulesAsset", 0x30, "ObjectProperty"},
            {"RoadTier", 0x38, "EnumProperty"},
            {"Transform", 0x40, "StructProperty"},
            {"OutInterpSegments", 0xA0, "ArrayProperty"},
            {"Length", 0xB0, "FloatProperty"},
            {"LUTGridSize", 0xB4, "FloatProperty"},
            {"LUT", 0xB8, "ArrayProperty"},
            {"LUTResolution", 0xC8, "FloatProperty"},
        }};
    };

    struct ProceduralRoads
    {
        static constexpr std::string_view Name = "ProceduralRoads";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LandmassProceduralRoute";
        struct Offsets
        {
            static constexpr std::uintptr_t bDoesAffectLandscape = 0x340;
            static constexpr std::uintptr_t SplinesComponent = 0x348;
            static constexpr std::uintptr_t SplineLayerIndex = 0x350;
            static constexpr std::uintptr_t GenRulesAsset = 0x358;
            static constexpr std::uintptr_t OutRoads = 0x360;
            static constexpr std::uintptr_t CurrentRoute = 0x370;
            static constexpr std::uintptr_t SelectedSplineControlPoints = 0x3D8;
            static constexpr std::uintptr_t ControlPoints = 0x660;
            static constexpr std::uintptr_t Segments = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bDoesAffectLandscape", 0x340, "BoolProperty"},
            {"SplinesComponent", 0x348, "ObjectProperty"},
            {"SplineLayerIndex", 0x350, "IntProperty"},
            {"GenRulesAsset", 0x358, "ObjectProperty"},
            {"OutRoads", 0x360, "ArrayProperty"},
            {"CurrentRoute", 0x370, "ObjectProperty"},
            {"SelectedSplineControlPoints", 0x3D8, "ArrayProperty"},
            {"ControlPoints", 0x660, "ArrayProperty"},
            {"Segments", 0x670, "ArrayProperty"},
        }};
    };

    struct ProceduralRouteDefinition
    {
        static constexpr std::string_view Name = "ProceduralRouteDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
