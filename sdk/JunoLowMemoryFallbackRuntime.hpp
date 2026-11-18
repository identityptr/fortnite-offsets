#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoLowMemoryFallbackRuntime
{
    struct JunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "JunoActivateStrategyOnAllClients_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t StrategyToActivate = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StrategyToActivate", 0x38, "ClassProperty"},
        }};
    };

    struct JunoBlockBuilding_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "JunoBlockBuilding_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockingTag = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlockingTag", 0x38, "StructProperty"},
        }};
    };

    struct JunoLowMemoryFallbackGameStateComponent
    {
        static constexpr std::string_view Name = "JunoLowMemoryFallbackGameStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TriggeredStrategies = 0xC0;
            static constexpr std::uintptr_t ActiveStrategies = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TriggeredStrategies", 0xC0, "ArrayProperty"},
            {"ActiveStrategies", 0xD0, "ArrayProperty"},
        }};
    };

    struct JunoLowMemoryFallbackPlayerControllerComponent
    {
        static constexpr std::string_view Name = "JunoLowMemoryFallbackPlayerControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
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

    struct JunoLowMemoryFallbackWorldSubsystem
    {
        static constexpr std::string_view Name = "JunoLowMemoryFallbackWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PluginName = 0x38;
            static constexpr std::uintptr_t Thresholds = 0x48;
            static constexpr std::uintptr_t ThresholdStates = 0x58;
            static constexpr std::uintptr_t MemoryRollingAverageSamples = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PluginName", 0x38, "StrProperty"},
            {"Thresholds", 0x48, "ArrayProperty"},
            {"ThresholdStates", 0x58, "ArrayProperty"},
            {"MemoryRollingAverageSamples", 0x94, "IntProperty"},
        }};
    };

    struct JunoMutableLODs_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "JunoMutableLODs_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t NumLOD0 = 0x38;
            static constexpr std::uintptr_t NumLOD1 = 0x3C;
            static constexpr std::uintptr_t NumLOD2 = 0x40;
            static constexpr std::uintptr_t LOD2Distance = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NumLOD0", 0x38, "IntProperty"},
            {"NumLOD1", 0x3C, "IntProperty"},
            {"NumLOD2", 0x40, "IntProperty"},
            {"LOD2Distance", 0x44, "IntProperty"},
        }};
    };

    struct JunoSendMemoryStateMessage_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t MemoryState = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MemoryState", 0x38, "EnumProperty"},
        }};
    };

    struct JunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical
    {
        static constexpr std::string_view Name = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategyCritical";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t MemoryState = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MemoryState", 0x38, "EnumProperty"},
        }};
    };

    struct JunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood
    {
        static constexpr std::string_view Name = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategyGood";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t MemoryState = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MemoryState", 0x38, "EnumProperty"},
        }};
    };

    struct JunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow
    {
        static constexpr std::string_view Name = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategyLow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t MemoryState = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MemoryState", 0x38, "EnumProperty"},
        }};
    };

    struct JunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow
    {
        static constexpr std::string_view Name = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategyVeryLow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoSendMemoryStateMessage_LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t MemoryState = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MemoryState", 0x38, "EnumProperty"},
        }};
    };

    struct JunoStreamingDistance_LowMemoryFallbackStrategy
    {
        static constexpr std::string_view Name = "JunoStreamingDistance_LowMemoryFallbackStrategy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LowMemoryFallbackStrategy";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleMultiplier = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScaleMultiplier", 0x38, "FloatProperty"},
        }};
    };

}
