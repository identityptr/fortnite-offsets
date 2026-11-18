#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortMetasound
{
    struct CachedMetaSoundContainer
    {
        static constexpr std::string_view Name = "CachedMetaSoundContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedMetaSounds = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedMetaSounds", 0x0, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_PrecacheMetaSounds
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_PrecacheMetaSounds";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction_AudioActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefineCacheInline = 0x38;
            static constexpr std::uintptr_t CacheDefinition = 0x40;
            static constexpr std::uintptr_t InlineCacheDefinition = 0x48;
            static constexpr std::uintptr_t CachedMetaSoundsForDevice = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bDefineCacheInline", 0x38, "BoolProperty"},
            {"CacheDefinition", 0x40, "ObjectProperty"},
            {"InlineCacheDefinition", 0x48, "StructProperty"},
            {"CachedMetaSoundsForDevice", 0x58, "MapProperty"},
        }};
    };

    struct FortMetaSoundCache
    {
        static constexpr std::string_view Name = "FortMetaSoundCache";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheEntries = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CacheEntries", 0x0, "ArrayProperty"},
        }};
    };

    struct FortMetaSoundCacheDefinition
    {
        static constexpr std::string_view Name = "FortMetaSoundCacheDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Cache = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Cache", 0x28, "StructProperty"},
        }};
    };

    struct FortMetaSoundCacheEntry
    {
        static constexpr std::string_view Name = "FortMetaSoundCacheEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Metasound = 0x0;
            static constexpr std::uintptr_t MaxInstancesToCache = 0x20;
            static constexpr std::uintptr_t bUseSharedCache = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Metasound", 0x0, "SoftObjectProperty"},
            {"MaxInstancesToCache", 0x20, "IntProperty"},
            {"bUseSharedCache", 0x24, "BoolProperty"},
        }};
    };

    struct FortMetaSoundInterfaceSubsystem
    {
        static constexpr std::string_view Name = "FortMetaSoundInterfaceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction_AddParameterInterfaceDefinitions
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddParameterInterfaceDefinitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction_AudioActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Definitions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Definitions", 0x38, "ArrayProperty"},
        }};
    };

    struct ParameterInterfaceContext
    {
        static constexpr std::string_view Name = "ParameterInterfaceContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParameterInterfaceContext_ActiveSound
    {
        static constexpr std::string_view Name = "ParameterInterfaceContext_ActiveSound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ParameterInterfaceContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParameterInterfaceContext_ActiveSound_Movement
    {
        static constexpr std::string_view Name = "ParameterInterfaceContext_ActiveSound_Movement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ParameterInterfaceContext_ActiveSound";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParameterInterfaceContext_ActiveSound_RecentCollection
    {
        static constexpr std::string_view Name = "ParameterInterfaceContext_ActiveSound_RecentCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ParameterInterfaceContext_ActiveSound";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParameterInterfaceContext_ActiveSound_Time
    {
        static constexpr std::string_view Name = "ParameterInterfaceContext_ActiveSound_Time";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ParameterInterfaceContext_ActiveSound";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParameterInterfaceDefinition
    {
        static constexpr std::string_view Name = "ParameterInterfaceDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextUpdateRate = 0x8;
            static constexpr std::uintptr_t InterpSpeed = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ContextUpdateRate", 0x8, "StructProperty"},
            {"InterpSpeed", 0x20, "FloatProperty"},
        }};
    };

    struct ParameterInterfaceDefinition_ActiveSound
    {
        static constexpr std::string_view Name = "ParameterInterfaceDefinition_ActiveSound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ParameterInterfaceDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextUpdateRate = 0x8;
            static constexpr std::uintptr_t InterpSpeed = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ContextUpdateRate", 0x8, "StructProperty"},
            {"InterpSpeed", 0x20, "FloatProperty"},
        }};
    };

    struct ParameterInterfaceDefinition_ActiveSound_Movement
    {
        static constexpr std::string_view Name = "ParameterInterfaceDefinition_ActiveSound_Movement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ParameterInterfaceDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextUpdateRate = 0x8;
            static constexpr std::uintptr_t InterpSpeed = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ContextUpdateRate", 0x8, "StructProperty"},
            {"InterpSpeed", 0x20, "FloatProperty"},
        }};
    };

    struct ParameterInterfaceDefinition_ActiveSound_RecentCollection
    {
        static constexpr std::string_view Name = "ParameterInterfaceDefinition_ActiveSound_RecentCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ParameterInterfaceDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextUpdateRate = 0x8;
            static constexpr std::uintptr_t InterpSpeed = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ContextUpdateRate", 0x8, "StructProperty"},
            {"InterpSpeed", 0x20, "FloatProperty"},
        }};
    };

    struct ParameterInterfaceDefinition_ActiveSound_Time
    {
        static constexpr std::string_view Name = "ParameterInterfaceDefinition_ActiveSound_Time";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ParameterInterfaceDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextUpdateRate = 0x8;
            static constexpr std::uintptr_t InterpSpeed = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ContextUpdateRate", 0x8, "StructProperty"},
            {"InterpSpeed", 0x20, "FloatProperty"},
        }};
    };

    struct RecentPlayTimes
    {
        static constexpr std::string_view Name = "RecentPlayTimes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RecentPlayTimes = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RecentPlayTimes", 0x0, "ArrayProperty"},
        }};
    };

}
