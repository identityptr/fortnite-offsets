#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameFeatures
{
    struct DataRegistrySourceToAdd
    {
        static constexpr std::string_view Name = "DataRegistrySourceToAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RegistryToAddTo = 0x0;
            static constexpr std::uintptr_t AssetPriority = 0x4;
            static constexpr std::uintptr_t bClientSource = 0x8;
            static constexpr std::uintptr_t bServerSource = 0x8;
            static constexpr std::uintptr_t DataTableToAdd = 0x10;
            static constexpr std::uintptr_t CurveTableToAdd = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RegistryToAddTo", 0x0, "NameProperty"},
            {"AssetPriority", 0x4, "IntProperty"},
            {"bClientSource", 0x8, "BoolProperty"},
            {"bServerSource", 0x8, "BoolProperty"},
            {"DataTableToAdd", 0x10, "SoftObjectProperty"},
            {"CurveTableToAdd", 0x30, "SoftObjectProperty"},
        }};
    };

    struct DefaultGameFeaturesProjectPolicies
    {
        static constexpr std::string_view Name = "DefaultGameFeaturesProjectPolicies";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeaturesProjectPolicies";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction
    {
        static constexpr std::string_view Name = "GameFeatureAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction_AddActorFactory
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddActorFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction_AddCheats
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddCheats";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CheatManagers = 0x28;
            static constexpr std::uintptr_t bLoadCheatManagersAsync = 0x38;
            static constexpr std::uintptr_t SpawnedCheatManagers = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CheatManagers", 0x28, "ArrayProperty"},
            {"bLoadCheatManagersAsync", 0x38, "BoolProperty"},
            {"SpawnedCheatManagers", 0x48, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_AddChunkOverride
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddChunkOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction_AddComponents
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddComponents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentList = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentList", 0x28, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_AddWPContent
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddWPContent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ContentBundleDescriptor = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContentBundleDescriptor", 0x28, "ObjectProperty"},
        }};
    };

    struct GameFeatureAction_AddWorldPartitionContent
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddWorldPartitionContent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalDataLayerAsset = 0x28;
            static constexpr std::uintptr_t RequiredCVar = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExternalDataLayerAsset", 0x28, "ObjectProperty"},
            {"RequiredCVar", 0x30, "NameProperty"},
        }};
    };

    struct GameFeatureAction_AudioActionBase
    {
        static constexpr std::string_view Name = "GameFeatureAction_AudioActionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction_DataRegistry
    {
        static constexpr std::string_view Name = "GameFeatureAction_DataRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t RegistriesToAdd = 0x28;
            static constexpr std::uintptr_t bPreloadInEditor = 0x38;
            static constexpr std::uintptr_t bPreloadInCommandlets = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RegistriesToAdd", 0x28, "ArrayProperty"},
            {"bPreloadInEditor", 0x38, "BoolProperty"},
            {"bPreloadInCommandlets", 0x39, "BoolProperty"},
        }};
    };

    struct GameFeatureAction_DataRegistrySource
    {
        static constexpr std::string_view Name = "GameFeatureAction_DataRegistrySource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SourcesToAdd = 0x28;
            static constexpr std::uintptr_t bPreloadInEditor = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourcesToAdd", 0x28, "ArrayProperty"},
            {"bPreloadInEditor", 0x38, "BoolProperty"},
        }};
    };

    struct GameFeatureComponentEntry
    {
        static constexpr std::string_view Name = "GameFeatureComponentEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClass = 0x0;
            static constexpr std::uintptr_t ComponentClass = 0x20;
            static constexpr std::uintptr_t bClientComponent = 0x40;
            static constexpr std::uintptr_t bServerComponent = 0x40;
            static constexpr std::uintptr_t AdditionFlags = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ActorClass", 0x0, "SoftClassProperty"},
            {"ComponentClass", 0x20, "SoftClassProperty"},
            {"bClientComponent", 0x40, "BoolProperty"},
            {"bServerComponent", 0x40, "BoolProperty"},
            {"AdditionFlags", 0x41, "ByteProperty"},
        }};
    };

    struct GameFeatureData
    {
        static constexpr std::string_view Name = "GameFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Actions = 0x28;
            static constexpr std::uintptr_t PrimaryAssetTypesToScan = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Actions", 0x28, "ArrayProperty"},
            {"PrimaryAssetTypesToScan", 0x38, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetPluginName",
        }};
    };

    struct GameFeatureOptionalContentInstaller
    {
        static constexpr std::string_view Name = "GameFeatureOptionalContentInstaller";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeaturePluginIdentifier
    {
        static constexpr std::string_view Name = "GameFeaturePluginIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeaturePluginInfo
    {
        static constexpr std::string_view Name = "GameFeaturePluginInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GfpUri = 0x0;
            static constexpr std::uintptr_t Dependencies = 0x10;
            static constexpr std::uintptr_t ImplicitDependencies = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GfpUri", 0x0, "StrProperty"},
            {"Dependencies", 0x10, "ArrayProperty"},
            {"ImplicitDependencies", 0x20, "ArrayProperty"},
        }};
    };

    struct GameFeaturePluginStateMachine
    {
        static constexpr std::string_view Name = "GameFeaturePluginStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StateProperties = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateProperties", 0x28, "StructProperty"},
        }};
    };

    struct GameFeaturePluginStateMachineProperties
    {
        static constexpr std::string_view Name = "GameFeaturePluginStateMachineProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeatureData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameFeatureData", 0xB0, "ObjectProperty"},
        }};
    };

    struct GameFeatureStateChangeObserver
    {
        static constexpr std::string_view Name = "GameFeatureStateChangeObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureVersePathMapperCommandlet
    {
        static constexpr std::string_view Name = "GameFeatureVersePathMapperCommandlet";
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

    struct GameFeaturesProjectPolicies
    {
        static constexpr std::string_view Name = "GameFeaturesProjectPolicies";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeaturesSubsystem
    {
        static constexpr std::string_view Name = "GameFeaturesSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeaturePluginStateMachines = 0x30;
            static constexpr std::uintptr_t GameFeaturesByIdentifier = 0x40;
            static constexpr std::uintptr_t TerminalGameFeaturePluginStateMachines = 0x88;
            static constexpr std::uintptr_t Observers = 0xC8;
            static constexpr std::uintptr_t GameSpecificPolicies = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GameFeaturePluginStateMachines", 0x30, "MapProperty"},
            {"GameFeaturesByIdentifier", 0x40, "MapProperty"},
            {"TerminalGameFeaturePluginStateMachines", 0x88, "ArrayProperty"},
            {"Observers", 0xC8, "ArrayProperty"},
            {"GameSpecificPolicies", 0xD8, "ObjectProperty"},
        }};
    };

    struct GameFeaturesSubsystemSettings
    {
        static constexpr std::string_view Name = "GameFeaturesSubsystemSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GameFeaturesManagerClassName = 0x30;
            static constexpr std::uintptr_t EnabledPlugins = 0x48;
            static constexpr std::uintptr_t DisabledPlugins = 0x58;
            static constexpr std::uintptr_t AdditionalPluginMetadataKeys = 0x68;
            static constexpr std::uintptr_t OnDemandContentFilters = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GameFeaturesManagerClassName", 0x30, "StructProperty"},
            {"EnabledPlugins", 0x48, "ArrayProperty"},
            {"DisabledPlugins", 0x58, "ArrayProperty"},
            {"AdditionalPluginMetadataKeys", 0x68, "ArrayProperty"},
            {"OnDemandContentFilters", 0x78, "ArrayProperty"},
        }};
    };

    struct InstallBundlePluginProtocolOptions
    {
        static constexpr std::string_view Name = "InstallBundlePluginProtocolOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IrisFilterGameFeatureAction
    {
        static constexpr std::string_view Name = "IrisFilterGameFeatureAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterDefinition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FilterDefinition", 0x28, "StructProperty"},
        }};
    };

}
