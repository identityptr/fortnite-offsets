#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Niagara
{
    struct AsyncNiagaraCaptureSimCache
    {
        static constexpr std::string_view Name = "AsyncNiagaraCaptureSimCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CaptureSimCache = 0x30;
            static constexpr std::uintptr_t CaptureComponent = 0x38;
            static constexpr std::uintptr_t CaptureComplete = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CaptureSimCache", 0x30, "ObjectProperty"},
            {"CaptureComponent", 0x38, "ObjectProperty"},
            {"CaptureComplete", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "CaptureNiagaraSimCache",
            "CaptureNiagaraSimCacheMultiFrame",
            "CaptureNiagaraSimCacheUntilComplete",
        }};
    };

    struct BasicParticleData
    {
        static constexpr std::string_view Name = "BasicParticleData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Size = 0x18;
            static constexpr std::uintptr_t Velocity = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Size", 0x18, "FloatProperty"},
            {"Velocity", 0x20, "StructProperty"},
        }};
    };

    struct EmitterCompiledScriptPair
    {
        static constexpr std::string_view Name = "EmitterCompiledScriptPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshTriCoordinate
    {
        static constexpr std::string_view Name = "MeshTriCoordinate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tri = 0x0;
            static constexpr std::uintptr_t BaryCoord = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tri", 0x0, "IntProperty"},
            {"BaryCoord", 0x4, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraBoolParameterSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraBoolParameterSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterSectionTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t BoolChannel = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoolChannel", 0x38, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraBoolParameterTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraBoolParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameter = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameter", 0x108, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraColorParameterSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraColorParameterSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterSectionTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t RedChannel = 0x38;
            static constexpr std::uintptr_t GreenChannel = 0x108;
            static constexpr std::uintptr_t BlueChannel = 0x1D8;
            static constexpr std::uintptr_t AlphaChannel = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RedChannel", 0x38, "StructProperty"},
            {"GreenChannel", 0x108, "StructProperty"},
            {"BlueChannel", 0x1D8, "StructProperty"},
            {"AlphaChannel", 0x2A8, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraColorParameterTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraColorParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameter = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameter", 0x108, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraFloatParameterSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraFloatParameterSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterSectionTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatChannel = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FloatChannel", 0x38, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraFloatParameterTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraFloatParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameter = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameter", 0x108, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraIntegerParameterSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraIntegerParameterSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterSectionTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t IntegerChannel = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntegerChannel", 0x38, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraIntegerParameterTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraIntegerParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameter = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameter", 0x108, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraParameterSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraParameterSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameter = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameter", 0x20, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraParameterTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNiagaraTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameter = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameter", 0x108, "StructProperty"},
        }};
    };

    struct MovieSceneNiagaraSystemSpawnSection
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraSystemSpawnSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionStartBehavior = 0x140;
            static constexpr std::uintptr_t SectionEvaluateBehavior = 0x141;
            static constexpr std::uintptr_t SectionEndBehavior = 0x142;
            static constexpr std::uintptr_t AgeUpdateMode = 0x143;
            static constexpr std::uintptr_t bAllowScalability = 0x144;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SectionStartBehavior", 0x140, "EnumProperty"},
            {"SectionEvaluateBehavior", 0x141, "EnumProperty"},
            {"SectionEndBehavior", 0x142, "EnumProperty"},
            {"AgeUpdateMode", 0x143, "EnumProperty"},
            {"bAllowScalability", 0x144, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "GetAgeUpdateMode",
            "GetAllowScalability",
            "GetSectionEndBehavior",
            "GetSectionEvaluateBehavior",
            "GetSectionStartBehavior",
            "SetAgeUpdateMode",
            "SetAllowScalability",
            "SetSectionEndBehavior",
            "SetSectionEvaluateBehavior",
            "SetSectionStartBehavior",
        }};
    };

    struct MovieSceneNiagaraSystemTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraSystemTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNiagaraTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneNiagaraSystemTrackImplementation
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraSystemTrackImplementation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneTrackImplementation";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnSectionStartFrame = 0x10;
            static constexpr std::uintptr_t SpawnSectionEndFrame = 0x14;
            static constexpr std::uintptr_t SpawnSectionStartBehavior = 0x18;
            static constexpr std::uintptr_t SpawnSectionEvaluateBehavior = 0x19;
            static constexpr std::uintptr_t SpawnSectionEndBehavior = 0x1A;
            static constexpr std::uintptr_t AgeUpdateMode = 0x1B;
            static constexpr std::uintptr_t bAllowScalability = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SpawnSectionStartFrame", 0x10, "StructProperty"},
            {"SpawnSectionEndFrame", 0x14, "StructProperty"},
            {"SpawnSectionStartBehavior", 0x18, "EnumProperty"},
            {"SpawnSectionEvaluateBehavior", 0x19, "EnumProperty"},
            {"SpawnSectionEndBehavior", 0x1A, "EnumProperty"},
            {"AgeUpdateMode", 0x1B, "EnumProperty"},
            {"bAllowScalability", 0x1C, "BoolProperty"},
        }};
    };

    struct MovieSceneNiagaraSystemTrackTemplate
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraSystemTrackTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t CompletionMode = 0x10;
            static constexpr std::uintptr_t SourceSectionPtr = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CompletionMode", 0x10, "EnumProperty"},
            {"SourceSectionPtr", 0x14, "WeakObjectProperty"},
        }};
    };

    struct MovieSceneNiagaraTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};
    };

    struct MovieSceneNiagaraVectorParameterSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraVectorParameterSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterSectionTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t VectorChannels = 0x38;
            static constexpr std::uintptr_t ChannelsUsed = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VectorChannels", 0x38, "StructProperty"},
            {"ChannelsUsed", 0x378, "IntProperty"},
        }};
    };

    struct MovieSceneNiagaraVectorParameterTrack
    {
        static constexpr std::string_view Name = "MovieSceneNiagaraVectorParameterTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNiagaraParameterTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelsUsed = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelsUsed", 0x128, "IntProperty"},
        }};
    };

    struct NCPool
    {
        static constexpr std::string_view Name = "NCPool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FreeElements = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FreeElements", 0x0, "ArrayProperty"},
        }};
    };

    struct NCPoolElement
    {
        static constexpr std::string_view Name = "NCPoolElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NDCAccessContext
    {
        static constexpr std::string_view Name = "NDCAccessContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NDCAccessContextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x10;
            static constexpr std::uintptr_t bOverrideLocation = 0x28;
            static constexpr std::uintptr_t bOverrideSystemToSpawn = 0x28;
            static constexpr std::uintptr_t bReturnExistingSystems = 0x28;
            static constexpr std::uintptr_t SystemToSpawn = 0x30;
            static constexpr std::uintptr_t SpawnedSystems = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Location", 0x10, "StructProperty"},
            {"bOverrideLocation", 0x28, "BoolProperty"},
            {"bOverrideSystemToSpawn", 0x28, "BoolProperty"},
            {"bReturnExistingSystems", 0x28, "BoolProperty"},
            {"SystemToSpawn", 0x30, "ObjectProperty"},
            {"SpawnedSystems", 0x38, "ArrayProperty"},
        }};
    };

    struct NDCAccessContextBase
    {
        static constexpr std::string_view Name = "NDCAccessContextBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningComponent = 0x0;
            static constexpr std::uintptr_t bIsAutoLinkingSystem = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OwningComponent", 0x0, "ObjectProperty"},
            {"bIsAutoLinkingSystem", 0x8, "BoolProperty"},
        }};
    };

    struct NDCAccessContextInst
    {
        static constexpr std::string_view Name = "NDCAccessContextInst";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AccessContext = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AccessContext", 0x0, "StructProperty"},
        }};
    };

    struct NDCAccessContextLegacy
    {
        static constexpr std::string_view Name = "NDCAccessContextLegacy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NDCAccessContextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x10;
            static constexpr std::uintptr_t bOverrideLocation = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Location", 0x10, "StructProperty"},
            {"bOverrideLocation", 0x28, "BoolProperty"},
        }};
    };

    struct NDCAccessContext_GameplayBurst
    {
        static constexpr std::string_view Name = "NDCAccessContext_GameplayBurst";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NDCAccessContext_MapBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bAttachedToOwningComponent = 0x48;
            static constexpr std::uintptr_t bForceAttachToOwningComponent = 0x48;
            static constexpr std::uintptr_t bOverrideBoundsPadding = 0x48;
            static constexpr std::uintptr_t bOverrideCellSize = 0x48;
            static constexpr std::uintptr_t CellSizeOverride = 0x50;
            static constexpr std::uintptr_t SystemBoundsPadding = 0x68;
            static constexpr std::uintptr_t GameplayTag = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bAttachedToOwningComponent", 0x48, "BoolProperty"},
            {"bForceAttachToOwningComponent", 0x48, "BoolProperty"},
            {"bOverrideBoundsPadding", 0x48, "BoolProperty"},
            {"bOverrideCellSize", 0x48, "BoolProperty"},
            {"CellSizeOverride", 0x50, "StructProperty"},
            {"SystemBoundsPadding", 0x68, "StructProperty"},
            {"GameplayTag", 0x80, "StructProperty"},
        }};
    };

    struct NDCAccessContext_MapBase
    {
        static constexpr std::string_view Name = "NDCAccessContext_MapBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NDCAccessContext";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x10;
            static constexpr std::uintptr_t bOverrideLocation = 0x28;
            static constexpr std::uintptr_t bOverrideSystemToSpawn = 0x28;
            static constexpr std::uintptr_t bReturnExistingSystems = 0x28;
            static constexpr std::uintptr_t SystemToSpawn = 0x30;
            static constexpr std::uintptr_t SpawnedSystems = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Location", 0x10, "StructProperty"},
            {"bOverrideLocation", 0x28, "BoolProperty"},
            {"bOverrideSystemToSpawn", 0x28, "BoolProperty"},
            {"bReturnExistingSystems", 0x28, "BoolProperty"},
            {"SystemToSpawn", 0x30, "ObjectProperty"},
            {"SpawnedSystems", 0x38, "ArrayProperty"},
        }};
    };

    struct NDCGameplayBurstAttachmentSettings
    {
        static constexpr std::string_view Name = "NDCGameplayBurstAttachmentSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedThreshold = 0x0;
            static constexpr std::uintptr_t GameplayTags = 0x8;
            static constexpr std::uintptr_t ComponentTypes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpeedThreshold", 0x0, "FloatProperty"},
            {"GameplayTags", 0x8, "StructProperty"},
            {"ComponentTypes", 0x28, "ArrayProperty"},
        }};
    };

    struct NDCIsland
    {
        static constexpr std::string_view Name = "NDCIsland";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t Bounds = 0x8;
            static constexpr std::uintptr_t SpawnedComponents = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Owner", 0x0, "ObjectProperty"},
            {"Bounds", 0x8, "StructProperty"},
            {"SpawnedComponents", 0x40, "ArrayProperty"},
        }};
    };

    struct NDCIslandDebugDrawSettings
    {
        static constexpr std::string_view Name = "NDCIslandDebugDrawSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t bShowIslandBounds = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"bShowIslandBounds", 0x0, "BoolProperty"},
        }};
    };

    struct NDCMapEntry
    {
        static constexpr std::string_view Name = "NDCMapEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryData", 0x0, "StructProperty"},
        }};
    };

    struct NDCMapEntryBase
    {
        static constexpr std::string_view Name = "NDCMapEntryBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x8;
            static constexpr std::uintptr_t SpawnedComponents = 0x10;
            static constexpr std::uintptr_t LastUsedTime = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Owner", 0x8, "ObjectProperty"},
            {"SpawnedComponents", 0x10, "ArrayProperty"},
            {"LastUsedTime", 0x30, "FloatProperty"},
        }};
    };

    struct NDCMapEntry_GameplayBurst
    {
        static constexpr std::string_view Name = "NDCMapEntry_GameplayBurst";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NDCMapEntryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x8;
            static constexpr std::uintptr_t SpawnedComponents = 0x10;
            static constexpr std::uintptr_t LastUsedTime = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Owner", 0x8, "ObjectProperty"},
            {"SpawnedComponents", 0x10, "ArrayProperty"},
            {"LastUsedTime", 0x30, "FloatProperty"},
        }};
    };

    struct NDCMapKey
    {
        static constexpr std::string_view Name = "NDCMapKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NDCSpawnedSystemRef
    {
        static constexpr std::string_view Name = "NDCSpawnedSystemRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedSystem = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnedSystem", 0x0, "WeakObjectProperty"},
        }};
    };

    struct NDIArraySimCacheData
    {
        static constexpr std::string_view Name = "NDIArraySimCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CpuFrameData = 0x28;
            static constexpr std::uintptr_t GpuFrameData = 0x38;
            static constexpr std::uintptr_t BufferData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CpuFrameData", 0x28, "ArrayProperty"},
            {"GpuFrameData", 0x38, "ArrayProperty"},
            {"BufferData", 0x48, "ArrayProperty"},
        }};
    };

    struct NDIArraySimCacheDataFrame
    {
        static constexpr std::string_view Name = "NDIArraySimCacheDataFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumElements = 0x0;
            static constexpr std::uintptr_t DataOffset = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumElements", 0x0, "IntProperty"},
            {"DataOffset", 0x4, "IntProperty"},
        }};
    };

    struct NDIDataChannelCompiledData
    {
        static constexpr std::string_view Name = "NDIDataChannelCompiledData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FunctionInfo = 0x0;
            static constexpr std::uintptr_t GPUScriptParameterInfos = 0x10;
            static constexpr std::uintptr_t TotalParams = 0x20;
            static constexpr std::uintptr_t bUsedByCPU = 0x24;
            static constexpr std::uintptr_t bUsedByGPU = 0x25;
            static constexpr std::uintptr_t bNeedsSpawnDataTable = 0x26;
            static constexpr std::uintptr_t bSpawnsParticles = 0x27;
            static constexpr std::uintptr_t bCallsWrite = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FunctionInfo", 0x0, "ArrayProperty"},
            {"GPUScriptParameterInfos", 0x10, "MapProperty"},
            {"TotalParams", 0x20, "UInt32Property"},
            {"bUsedByCPU", 0x24, "BoolProperty"},
            {"bUsedByGPU", 0x25, "BoolProperty"},
            {"bNeedsSpawnDataTable", 0x26, "BoolProperty"},
            {"bSpawnsParticles", 0x27, "BoolProperty"},
            {"bCallsWrite", 0x28, "BoolProperty"},
        }};
    };

    struct NDIDataChannelFunctionInfo
    {
        static constexpr std::string_view Name = "NDIDataChannelFunctionInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FunctionName = 0x0;
            static constexpr std::uintptr_t Inputs = 0x8;
            static constexpr std::uintptr_t Outputs = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FunctionName", 0x0, "NameProperty"},
            {"Inputs", 0x8, "ArrayProperty"},
            {"Outputs", 0x18, "ArrayProperty"},
        }};
    };

    struct NDIDataChannelWriteCompiledData
    {
        static constexpr std::string_view Name = "NDIDataChannelWriteCompiledData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NDIDataChannelCompiledData";
        struct Offsets
        {
            static constexpr std::uintptr_t DataLayout = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataLayout", 0x30, "StructProperty"},
        }};
    };

    struct NDIDataChannelWriteSimCacheData
    {
        static constexpr std::string_view Name = "NDIDataChannelWriteSimCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameData = 0x28;
            static constexpr std::uintptr_t DataChannelReference = 0x38;
            static constexpr std::uintptr_t DataInterface = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FrameData", 0x28, "ArrayProperty"},
            {"DataChannelReference", 0x38, "StructProperty"},
            {"DataInterface", 0x50, "ObjectProperty"},
        }};
    };

    struct NDIDataChannelWriteSimCacheFrame
    {
        static constexpr std::string_view Name = "NDIDataChannelWriteSimCacheFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumElements = 0x0;
            static constexpr std::uintptr_t VariableData = 0x8;
            static constexpr std::uintptr_t bVisibleToGame = 0x18;
            static constexpr std::uintptr_t bVisibleToCPUSims = 0x19;
            static constexpr std::uintptr_t bVisibleToGPUSims = 0x1A;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NumElements", 0x0, "IntProperty"},
            {"VariableData", 0x8, "ArrayProperty"},
            {"bVisibleToGame", 0x18, "BoolProperty"},
            {"bVisibleToCPUSims", 0x19, "BoolProperty"},
            {"bVisibleToGPUSims", 0x1A, "BoolProperty"},
        }};
    };

    struct NDIDataChannelWriteSimCacheFrameBuffer
    {
        static constexpr std::string_view Name = "NDIDataChannelWriteSimCacheFrameBuffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
            static constexpr std::uintptr_t Size = 0x10;
            static constexpr std::uintptr_t SourceVar = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Data", 0x0, "ArrayProperty"},
            {"Size", 0x10, "IntProperty"},
            {"SourceVar", 0x14, "StructProperty"},
        }};
    };

    struct NDIDataChannel_GPUScriptParameterAccessInfo
    {
        static constexpr std::string_view Name = "NDIDataChannel_GPUScriptParameterAccessInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SortedParameters = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SortedParameters", 0x0, "ArrayProperty"},
        }};
    };

    struct NDIDistributionIntArrayEntry
    {
        static constexpr std::string_view Name = "NDIDistributionIntArrayEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Weight = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "IntProperty"},
            {"Weight", 0x4, "FloatProperty"},
        }};
    };

    struct NDIDynamicMeshSimCacheFrame
    {
        static constexpr std::string_view Name = "NDIDynamicMeshSimCacheFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTriangles = 0x0;
            static constexpr std::uintptr_t NumVertices = 0x4;
            static constexpr std::uintptr_t NumTexCoords = 0x8;
            static constexpr std::uintptr_t LocalBounds = 0x10;
            static constexpr std::uintptr_t VertexBufferSize = 0x48;
            static constexpr std::uintptr_t PositionOffset = 0x4C;
            static constexpr std::uintptr_t TangentBasisOffset = 0x50;
            static constexpr std::uintptr_t TexCoordOffset = 0x54;
            static constexpr std::uintptr_t ColorOffset = 0x58;
            static constexpr std::uintptr_t IndexData = 0x60;
            static constexpr std::uintptr_t VertexData = 0x70;
            static constexpr std::uintptr_t Sections = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"NumTriangles", 0x0, "UInt32Property"},
            {"NumVertices", 0x4, "UInt32Property"},
            {"NumTexCoords", 0x8, "UInt32Property"},
            {"LocalBounds", 0x10, "StructProperty"},
            {"VertexBufferSize", 0x48, "UInt32Property"},
            {"PositionOffset", 0x4C, "UInt32Property"},
            {"TangentBasisOffset", 0x50, "UInt32Property"},
            {"TexCoordOffset", 0x54, "UInt32Property"},
            {"ColorOffset", 0x58, "UInt32Property"},
            {"IndexData", 0x60, "ArrayProperty"},
            {"VertexData", 0x70, "ArrayProperty"},
            {"Sections", 0x80, "ArrayProperty"},
        }};
    };

    struct NDIDynamicMeshSimCacheSection
    {
        static constexpr std::string_view Name = "NDIDynamicMeshSimCacheSection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TriangleOffset = 0x0;
            static constexpr std::uintptr_t MaxTriangles = 0x4;
            static constexpr std::uintptr_t AllocatedTriangles = 0x8;
            static constexpr std::uintptr_t Material = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TriangleOffset", 0x0, "UInt32Property"},
            {"MaxTriangles", 0x4, "UInt32Property"},
            {"AllocatedTriangles", 0x8, "UInt32Property"},
            {"Material", 0x10, "ObjectProperty"},
        }};
    };

    struct NDILandscapeSimCacheData
    {
        static constexpr std::string_view Name = "NDILandscapeSimCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HeightFieldTextures = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HeightFieldTextures", 0x28, "ArrayProperty"},
        }};
    };

    struct NDIMemoryBufferSimCacheData
    {
        static constexpr std::string_view Name = "NDIMemoryBufferSimCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameData = 0x28;
            static constexpr std::uintptr_t BufferData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrameData", 0x28, "ArrayProperty"},
            {"BufferData", 0x38, "ArrayProperty"},
        }};
    };

    struct NDIMemoryBufferSimCacheDataFrame
    {
        static constexpr std::string_view Name = "NDIMemoryBufferSimCacheDataFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CpuBufferSize = 0x0;
            static constexpr std::uintptr_t CpuDataOffset = 0x4;
            static constexpr std::uintptr_t GpuBufferSize = 0x8;
            static constexpr std::uintptr_t GpuDataOffset = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CpuBufferSize", 0x0, "IntProperty"},
            {"CpuDataOffset", 0x4, "IntProperty"},
            {"GpuBufferSize", 0x8, "IntProperty"},
            {"GpuDataOffset", 0xC, "IntProperty"},
        }};
    };

    struct NDIRenderTargetSimCacheData
    {
        static constexpr std::string_view Name = "NDIRenderTargetSimCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CompressionType = 0x28;
            static constexpr std::uintptr_t Frames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CompressionType", 0x28, "NameProperty"},
            {"Frames", 0x30, "ArrayProperty"},
        }};
    };

    struct NDIRenderTargetSimCacheFrame
    {
        static constexpr std::string_view Name = "NDIRenderTargetSimCacheFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x0;
            static constexpr std::uintptr_t Format = 0xC;
            static constexpr std::uintptr_t UncompressedSize = 0x10;
            static constexpr std::uintptr_t CompressedSize = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Size", 0x0, "StructProperty"},
            {"Format", 0xC, "ByteProperty"},
            {"UncompressedSize", 0x10, "IntProperty"},
            {"CompressedSize", 0x14, "IntProperty"},
        }};
    };

    struct NDISimpleCounterSimCacheData
    {
        static constexpr std::string_view Name = "NDISimpleCounterSimCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Values", 0x28, "ArrayProperty"},
        }};
    };

    struct NDIStaticMeshIndirectCompiledData
    {
        static constexpr std::string_view Name = "NDIStaticMeshIndirectCompiledData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bNeedsCpuAccess = 0x0;
            static constexpr std::uintptr_t bRequiresDistanceFields = 0x0;
            static constexpr std::uintptr_t bUsedByCPU = 0x0;
            static constexpr std::uintptr_t bUsedByGPU = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bNeedsCpuAccess", 0x0, "BoolProperty"},
            {"bRequiresDistanceFields", 0x0, "BoolProperty"},
            {"bUsedByCPU", 0x0, "BoolProperty"},
            {"bUsedByGPU", 0x0, "BoolProperty"},
        }};
    };

    struct NDIStaticMeshSectionFilter
    {
        static constexpr std::string_view Name = "NDIStaticMeshSectionFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedMaterialSlots = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllowedMaterialSlots", 0x0, "ArrayProperty"},
        }};
    };

    struct NiagaraActor
    {
        static constexpr std::string_view Name = "NiagaraActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t NiagaraComponent = 0x278;
            static constexpr std::uintptr_t bDestroyOnSystemFinish = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NiagaraComponent", 0x278, "ObjectProperty"},
            {"bDestroyOnSystemFinish", 0x280, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetDestroyOnSystemFinish",
            "OnNiagaraSystemFinished",
            "SetDestroyOnSystemFinish",
        }};
    };

    struct NiagaraArraySpawnBurstEntry
    {
        static constexpr std::string_view Name = "NiagaraArraySpawnBurstEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnCount = 0x0;
            static constexpr std::uintptr_t SpawnCountMax = 0x4;
            static constexpr std::uintptr_t SpawnTime = 0x8;
            static constexpr std::uintptr_t SpawnProbability = 0xC;
            static constexpr std::uintptr_t SpawnGroup = 0x10;
            static constexpr std::uintptr_t bSpawnCountMaxEnabled = 0x14;
            static constexpr std::uintptr_t bSpawnProbabilityEnabled = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SpawnCount", 0x0, "IntProperty"},
            {"SpawnCountMax", 0x4, "IntProperty"},
            {"SpawnTime", 0x8, "FloatProperty"},
            {"SpawnProbability", 0xC, "FloatProperty"},
            {"SpawnGroup", 0x10, "IntProperty"},
            {"bSpawnCountMaxEnabled", 0x14, "BoolProperty"},
            {"bSpawnProbabilityEnabled", 0x14, "BoolProperty"},
        }};
    };

    struct NiagaraAssetTagDefinition
    {
        static constexpr std::string_view Name = "NiagaraAssetTagDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetTag = 0x0;
            static constexpr std::uintptr_t AssetFlags = 0x10;
            static constexpr std::uintptr_t Description = 0x18;
            static constexpr std::uintptr_t DisplayType = 0x28;
            static constexpr std::uintptr_t Color = 0x2C;
            static constexpr std::uintptr_t TagGuid = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AssetTag", 0x0, "TextProperty"},
            {"AssetFlags", 0x10, "IntProperty"},
            {"Description", 0x18, "TextProperty"},
            {"DisplayType", 0x28, "EnumProperty"},
            {"Color", 0x2C, "StructProperty"},
            {"TagGuid", 0x3C, "StructProperty"},
        }};
    };

    struct NiagaraAssetTagDefinitionReference
    {
        static constexpr std::string_view Name = "NiagaraAssetTagDefinitionReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetTagDefinitionGuid = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssetTagDefinitionGuid", 0x0, "StructProperty"},
        }};
    };

    struct NiagaraAssetTagDefinitions
    {
        static constexpr std::string_view Name = "NiagaraAssetTagDefinitions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
            static constexpr std::uintptr_t Description = 0x38;
            static constexpr std::uintptr_t TagDefinitions = 0x48;
            static constexpr std::uintptr_t bDisplayTagsAsFlatList = 0x58;
            static constexpr std::uintptr_t SortOrder = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayName", 0x28, "TextProperty"},
            {"Description", 0x38, "TextProperty"},
            {"TagDefinitions", 0x48, "ArrayProperty"},
            {"bDisplayTagsAsFlatList", 0x58, "BoolProperty"},
            {"SortOrder", 0x5C, "IntProperty"},
        }};
    };

    struct NiagaraAssetVersion
    {
        static constexpr std::string_view Name = "NiagaraAssetVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MajorVersion = 0x0;
            static constexpr std::uintptr_t MinorVersion = 0x4;
            static constexpr std::uintptr_t VersionGuid = 0x8;
            static constexpr std::uintptr_t bIsVisibleInVersionSelector = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MajorVersion", 0x0, "IntProperty"},
            {"MinorVersion", 0x4, "IntProperty"},
            {"VersionGuid", 0x8, "StructProperty"},
            {"bIsVisibleInVersionSelector", 0x18, "BoolProperty"},
        }};
    };

    struct NiagaraBakerCameraSettings
    {
        static constexpr std::string_view Name = "NiagaraBakerCameraSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewMode = 0x0;
            static constexpr std::uintptr_t ViewportLocation = 0x8;
            static constexpr std::uintptr_t ViewportRotation = 0x20;
            static constexpr std::uintptr_t OrbitDistance = 0x38;
            static constexpr std::uintptr_t FOV = 0x3C;
            static constexpr std::uintptr_t OrthoWidth = 0x40;
            static constexpr std::uintptr_t bUseAspectRatio = 0x44;
            static constexpr std::uintptr_t AspectRatio = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ViewMode", 0x0, "EnumProperty"},
            {"ViewportLocation", 0x8, "StructProperty"},
            {"ViewportRotation", 0x20, "StructProperty"},
            {"OrbitDistance", 0x38, "FloatProperty"},
            {"FOV", 0x3C, "FloatProperty"},
            {"OrthoWidth", 0x40, "FloatProperty"},
            {"bUseAspectRatio", 0x44, "BoolProperty"},
            {"AspectRatio", 0x48, "FloatProperty"},
        }};
    };

    struct NiagaraBakerOutput
    {
        static constexpr std::string_view Name = "NiagaraBakerOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutputName", 0x28, "StrProperty"},
        }};
    };

    struct NiagaraBakerOutputSimCache
    {
        static constexpr std::string_view Name = "NiagaraBakerOutputSimCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraBakerOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t SimCacheAssetPathFormat = 0x38;
            static constexpr std::uintptr_t CreateParameters = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SimCacheAssetPathFormat", 0x38, "StrProperty"},
            {"CreateParameters", 0x48, "StructProperty"},
        }};
    };

    struct NiagaraBakerOutputSparseVolumeTexture
    {
        static constexpr std::string_view Name = "NiagaraBakerOutputSparseVolumeTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraBakerOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBinding = 0x38;
            static constexpr std::uintptr_t VolumeWorldSpaceSizeBinding = 0x50;
            static constexpr std::uintptr_t SparseVolumeTextureAssetPathFormat = 0x58;
            static constexpr std::uintptr_t bEnableLoopedOutput = 0x68;
            static constexpr std::uintptr_t LoopedSparseVolumeTextureAssetPathFormat = 0x70;
            static constexpr std::uintptr_t StartTime = 0x80;
            static constexpr std::uintptr_t BlendDuration = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SourceBinding", 0x38, "StructProperty"},
            {"VolumeWorldSpaceSizeBinding", 0x50, "StructProperty"},
            {"SparseVolumeTextureAssetPathFormat", 0x58, "StrProperty"},
            {"bEnableLoopedOutput", 0x68, "BoolProperty"},
            {"LoopedSparseVolumeTextureAssetPathFormat", 0x70, "StrProperty"},
            {"StartTime", 0x80, "FloatProperty"},
            {"BlendDuration", 0x84, "FloatProperty"},
        }};
    };

    struct NiagaraBakerOutputStaticMesh
    {
        static constexpr std::string_view Name = "NiagaraBakerOutputStaticMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraBakerOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t FramesAssetPathFormat = 0x38;
            static constexpr std::uintptr_t ExportParameters = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FramesAssetPathFormat", 0x38, "StrProperty"},
            {"ExportParameters", 0x48, "StructProperty"},
        }};
    };

    struct NiagaraBakerOutputTexture2D
    {
        static constexpr std::string_view Name = "NiagaraBakerOutputTexture2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraBakerOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBinding = 0x38;
            static constexpr std::uintptr_t bExportFrames = 0x50;
            static constexpr std::uintptr_t bGenerateAtlas = 0x50;
            static constexpr std::uintptr_t bGenerateFrames = 0x50;
            static constexpr std::uintptr_t bSetTextureAddressX = 0x50;
            static constexpr std::uintptr_t bSetTextureAddressY = 0x50;
            static constexpr std::uintptr_t FrameSize = 0x54;
            static constexpr std::uintptr_t AtlasTextureSize = 0x5C;
            static constexpr std::uintptr_t TextureAddressX = 0x6C;
            static constexpr std::uintptr_t TextureAddressY = 0x6D;
            static constexpr std::uintptr_t AtlasAssetPathFormat = 0x70;
            static constexpr std::uintptr_t FramesAssetPathFormat = 0x80;
            static constexpr std::uintptr_t FramesExportPathFormat = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SourceBinding", 0x38, "StructProperty"},
            {"bExportFrames", 0x50, "BoolProperty"},
            {"bGenerateAtlas", 0x50, "BoolProperty"},
            {"bGenerateFrames", 0x50, "BoolProperty"},
            {"bSetTextureAddressX", 0x50, "BoolProperty"},
            {"bSetTextureAddressY", 0x50, "BoolProperty"},
            {"FrameSize", 0x54, "StructProperty"},
            {"AtlasTextureSize", 0x5C, "StructProperty"},
            {"TextureAddressX", 0x6C, "ByteProperty"},
            {"TextureAddressY", 0x6D, "ByteProperty"},
            {"AtlasAssetPathFormat", 0x70, "StrProperty"},
            {"FramesAssetPathFormat", 0x80, "StrProperty"},
            {"FramesExportPathFormat", 0x90, "StrProperty"},
        }};
    };

    struct NiagaraBakerOutputVolumeTexture
    {
        static constexpr std::string_view Name = "NiagaraBakerOutputVolumeTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraBakerOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBinding = 0x38;
            static constexpr std::uintptr_t bExportFrames = 0x50;
            static constexpr std::uintptr_t bGenerateAtlas = 0x50;
            static constexpr std::uintptr_t bGenerateFrames = 0x50;
            static constexpr std::uintptr_t AtlasAssetPathFormat = 0x58;
            static constexpr std::uintptr_t FramesAssetPathFormat = 0x68;
            static constexpr std::uintptr_t FramesExportPathFormat = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SourceBinding", 0x38, "StructProperty"},
            {"bExportFrames", 0x50, "BoolProperty"},
            {"bGenerateAtlas", 0x50, "BoolProperty"},
            {"bGenerateFrames", 0x50, "BoolProperty"},
            {"AtlasAssetPathFormat", 0x58, "StrProperty"},
            {"FramesAssetPathFormat", 0x68, "StrProperty"},
            {"FramesExportPathFormat", 0x78, "StrProperty"},
        }};
    };

    struct NiagaraBakerSettings
    {
        static constexpr std::string_view Name = "NiagaraBakerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StartSeconds = 0x28;
            static constexpr std::uintptr_t DurationSeconds = 0x2C;
            static constexpr std::uintptr_t framesPerSecond = 0x30;
            static constexpr std::uintptr_t bLockToSimulationFrameRate = 0x34;
            static constexpr std::uintptr_t bPreviewLooping = 0x34;
            static constexpr std::uintptr_t FramesPerDimension = 0x38;
            static constexpr std::uintptr_t Outputs = 0x40;
            static constexpr std::uintptr_t CameraSettings = 0x50;
            static constexpr std::uintptr_t CurrentCameraIndex = 0x60;
            static constexpr std::uintptr_t BakeQualityLevel = 0x64;
            static constexpr std::uintptr_t bPreviewLoopedOutput = 0x68;
            static constexpr std::uintptr_t bRenderComponentOnly = 0x68;
            static constexpr std::uintptr_t OutputTextures = 0x70;
            static constexpr std::uintptr_t CameraViewportMode = 0x80;
            static constexpr std::uintptr_t CameraViewportLocation = 0x88;
            static constexpr std::uintptr_t CameraViewportRotation = 0x130;
            static constexpr std::uintptr_t CameraOrbitDistance = 0x1D8;
            static constexpr std::uintptr_t CameraFOV = 0x1DC;
            static constexpr std::uintptr_t CameraOrthoWidth = 0x1E0;
            static constexpr std::uintptr_t bUseCameraAspectRatio = 0x1E4;
            static constexpr std::uintptr_t CameraAspectRatio = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"StartSeconds", 0x28, "FloatProperty"},
            {"DurationSeconds", 0x2C, "FloatProperty"},
            {"framesPerSecond", 0x30, "IntProperty"},
            {"bLockToSimulationFrameRate", 0x34, "BoolProperty"},
            {"bPreviewLooping", 0x34, "BoolProperty"},
            {"FramesPerDimension", 0x38, "StructProperty"},
            {"Outputs", 0x40, "ArrayProperty"},
            {"CameraSettings", 0x50, "ArrayProperty"},
            {"CurrentCameraIndex", 0x60, "IntProperty"},
            {"BakeQualityLevel", 0x64, "NameProperty"},
            {"bPreviewLoopedOutput", 0x68, "BoolProperty"},
            {"bRenderComponentOnly", 0x68, "BoolProperty"},
            {"OutputTextures", 0x70, "ArrayProperty"},
            {"CameraViewportMode", 0x80, "EnumProperty"},
            {"CameraViewportLocation", 0x88, "StructProperty"},
            {"CameraViewportRotation", 0x130, "StructProperty"},
            {"CameraOrbitDistance", 0x1D8, "FloatProperty"},
            {"CameraFOV", 0x1DC, "FloatProperty"},
            {"CameraOrthoWidth", 0x1E0, "FloatProperty"},
            {"bUseCameraAspectRatio", 0x1E4, "BoolProperty"},
            {"CameraAspectRatio", 0x1E8, "FloatProperty"},
        }};
    };

    struct NiagaraBakerTextureSettings
    {
        static constexpr std::string_view Name = "NiagaraBakerTextureSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputName = 0x0;
            static constexpr std::uintptr_t SourceBinding = 0x8;
            static constexpr std::uintptr_t bUseFrameSize = 0x20;
            static constexpr std::uintptr_t FrameSize = 0x24;
            static constexpr std::uintptr_t TextureSize = 0x2C;
            static constexpr std::uintptr_t GeneratedTexture = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OutputName", 0x0, "NameProperty"},
            {"SourceBinding", 0x8, "StructProperty"},
            {"bUseFrameSize", 0x20, "BoolProperty"},
            {"FrameSize", 0x24, "StructProperty"},
            {"TextureSize", 0x2C, "StructProperty"},
            {"GeneratedTexture", 0x38, "ObjectProperty"},
        }};
    };

    struct NiagaraBakerTextureSource
    {
        static constexpr std::string_view Name = "NiagaraBakerTextureSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayString = 0x0;
            static constexpr std::uintptr_t SourceName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DisplayString", 0x0, "StrProperty"},
            {"SourceName", 0x10, "NameProperty"},
        }};
    };

    struct NiagaraBaselineController
    {
        static constexpr std::string_view Name = "NiagaraBaselineController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TestDuration = 0x28;
            static constexpr std::uintptr_t EffectType = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
            static constexpr std::uintptr_t System = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TestDuration", 0x28, "FloatProperty"},
            {"EffectType", 0x30, "ObjectProperty"},
            {"Owner", 0x38, "ObjectProperty"},
            {"System", 0x40, "SoftObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetSystem",
            "OnBeginTest",
            "OnEndTest",
            "OnOwnerTick",
            "OnTickTest",
        }};
    };

    struct NiagaraBaselineController_Basic
    {
        static constexpr std::string_view Name = "NiagaraBaselineController_Basic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraBaselineController";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInstances = 0x60;
            static constexpr std::uintptr_t SpawnedComponents = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumInstances", 0x60, "IntProperty"},
            {"SpawnedComponents", 0x68, "ArrayProperty"},
        }};
    };

    struct NiagaraBool
    {
        static constexpr std::string_view Name = "NiagaraBool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "IntProperty"},
        }};
    };

    struct NiagaraBoolParameterMetaData
    {
        static constexpr std::string_view Name = "NiagaraBoolParameterMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayMode = 0x0;
            static constexpr std::uintptr_t OverrideNameTrue = 0x4;
            static constexpr std::uintptr_t OverrideNameFalse = 0x8;
            static constexpr std::uintptr_t IconOverrideTrue = 0x10;
            static constexpr std::uintptr_t IconOverrideFalse = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DisplayMode", 0x0, "EnumProperty"},
            {"OverrideNameTrue", 0x4, "NameProperty"},
            {"OverrideNameFalse", 0x8, "NameProperty"},
            {"IconOverrideTrue", 0x10, "ObjectProperty"},
            {"IconOverrideFalse", 0x18, "ObjectProperty"},
        }};
    };

    struct NiagaraBoundParameter
    {
        static constexpr std::string_view Name = "NiagaraBoundParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameter = 0x0;
            static constexpr std::uintptr_t SrcOffset = 0x8;
            static constexpr std::uintptr_t DestOffset = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Parameter", 0x0, "StructProperty"},
            {"SrcOffset", 0x8, "IntProperty"},
            {"DestOffset", 0xC, "IntProperty"},
        }};
    };

    struct NiagaraCollisionEventPayload
    {
        static constexpr std::string_view Name = "NiagaraCollisionEventPayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionPos = 0x0;
            static constexpr std::uintptr_t CollisionNormal = 0x18;
            static constexpr std::uintptr_t CollisionVelocity = 0x30;
            static constexpr std::uintptr_t ParticleIndex = 0x48;
            static constexpr std::uintptr_t PhysicalMaterialIndex = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CollisionPos", 0x0, "StructProperty"},
            {"CollisionNormal", 0x18, "StructProperty"},
            {"CollisionVelocity", 0x30, "StructProperty"},
            {"ParticleIndex", 0x48, "IntProperty"},
            {"PhysicalMaterialIndex", 0x4C, "IntProperty"},
        }};
    };

    struct NiagaraCompileDependency
    {
        static constexpr std::string_view Name = "NiagaraCompileDependency";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkerErrorMessage = 0x0;
            static constexpr std::uintptr_t NodeGUID = 0x10;
            static constexpr std::uintptr_t PinGuid = 0x20;
            static constexpr std::uintptr_t StackGuids = 0x30;
            static constexpr std::uintptr_t DependentVariable = 0x40;
            static constexpr std::uintptr_t bDependentVariableFromCustomIterationNamespace = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LinkerErrorMessage", 0x0, "StrProperty"},
            {"NodeGUID", 0x10, "StructProperty"},
            {"PinGuid", 0x20, "StructProperty"},
            {"StackGuids", 0x30, "ArrayProperty"},
            {"DependentVariable", 0x40, "StructProperty"},
            {"bDependentVariableFromCustomIterationNamespace", 0x48, "BoolProperty"},
        }};
    };

    struct NiagaraCompileHashVisitorDebugInfo
    {
        static constexpr std::string_view Name = "NiagaraCompileHashVisitorDebugInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
            static constexpr std::uintptr_t PropertyKeys = 0x10;
            static constexpr std::uintptr_t PropertyValues = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Object", 0x0, "StrProperty"},
            {"PropertyKeys", 0x10, "ArrayProperty"},
            {"PropertyValues", 0x20, "ArrayProperty"},
        }};
    };

    struct NiagaraCompilerTag
    {
        static constexpr std::string_view Name = "NiagaraCompilerTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Variable = 0x0;
            static constexpr std::uintptr_t StringValue = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Variable", 0x0, "StructProperty"},
            {"StringValue", 0x18, "StrProperty"},
        }};
    };

    struct NiagaraComponent
    {
        static constexpr std::string_view Name = "NiagaraComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FXSystemComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x570;
            static constexpr std::uintptr_t TickBehavior = 0x578;
            static constexpr std::uintptr_t RandomSeedOffset = 0x57C;
            static constexpr std::uintptr_t OverrideParameters = 0x580;
            static constexpr std::uintptr_t bEnableGpuComputeDebug = 0x618;
            static constexpr std::uintptr_t bOverrideWarmupSettings = 0x618;
            static constexpr std::uintptr_t WarmupTickCount = 0x61C;
            static constexpr std::uintptr_t WarmupTickDelta = 0x620;
            static constexpr std::uintptr_t bAutoAttachWeldSimulatedBodies = 0x658;
            static constexpr std::uintptr_t bAutoDestroy = 0x658;
            static constexpr std::uintptr_t bAutoManageAttachment = 0x658;
            static constexpr std::uintptr_t bRenderingEnabled = 0x658;
            static constexpr std::uintptr_t MaxTimeBeforeForceUpdateTransform = 0x65C;
            static constexpr std::uintptr_t OcclusionQueryMode = 0x661;
            static constexpr std::uintptr_t OnSystemFinished = 0x668;
            static constexpr std::uintptr_t AutoAttachParent = 0x678;
            static constexpr std::uintptr_t AutoAttachSocketName = 0x680;
            static constexpr std::uintptr_t AutoAttachLocationRule = 0x684;
            static constexpr std::uintptr_t AutoAttachRotationRule = 0x685;
            static constexpr std::uintptr_t AutoAttachScaleRule = 0x686;
            static constexpr std::uintptr_t bAllowScalability = 0x690;
            static constexpr std::uintptr_t SimCache = 0x7B0;
            static constexpr std::uintptr_t CullProxy = 0x7B8;
            static constexpr std::uintptr_t ParameterCollectionOverrides = 0x7C0;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"Asset", 0x570, "ObjectProperty"},
            {"TickBehavior", 0x578, "EnumProperty"},
            {"RandomSeedOffset", 0x57C, "IntProperty"},
            {"OverrideParameters", 0x580, "StructProperty"},
            {"bEnableGpuComputeDebug", 0x618, "BoolProperty"},
            {"bOverrideWarmupSettings", 0x618, "BoolProperty"},
            {"WarmupTickCount", 0x61C, "IntProperty"},
            {"WarmupTickDelta", 0x620, "FloatProperty"},
            {"bAutoAttachWeldSimulatedBodies", 0x658, "BoolProperty"},
            {"bAutoDestroy", 0x658, "BoolProperty"},
            {"bAutoManageAttachment", 0x658, "BoolProperty"},
            {"bRenderingEnabled", 0x658, "BoolProperty"},
            {"MaxTimeBeforeForceUpdateTransform", 0x65C, "FloatProperty"},
            {"OcclusionQueryMode", 0x661, "EnumProperty"},
            {"OnSystemFinished", 0x668, "MulticastInlineDelegateProperty"},
            {"AutoAttachParent", 0x678, "WeakObjectProperty"},
            {"AutoAttachSocketName", 0x680, "NameProperty"},
            {"AutoAttachLocationRule", 0x684, "EnumProperty"},
            {"AutoAttachRotationRule", 0x685, "EnumProperty"},
            {"AutoAttachScaleRule", 0x686, "EnumProperty"},
            {"bAllowScalability", 0x690, "BoolProperty"},
            {"SimCache", 0x7B0, "ObjectProperty"},
            {"CullProxy", 0x7B8, "ObjectProperty"},
            {"ParameterCollectionOverrides", 0x7C0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 92> FunctionNames{{
            "AdvanceSimulation",
            "AdvanceSimulationByTime",
            "ClearEmitterFixedBounds",
            "ClearParameterCollectionOverrides",
            "ClearSimCache",
            "ClearSystemFixedBounds",
            "GetAgeUpdateMode",
            "GetAllowScalability",
            "GetAsset",
            "GetCustomTimeDilation",
            "GetDataInterface",
            "GetDesiredAge",
            "GetEmitterFixedBounds",
            "GetForceLocalPlayerEffect",
            "GetForceSolo",
            "GetLockDesiredAgeDeltaTimeToSeekDelta",
            "GetMaxSimTime",
            "GetOcclusionQueryMode",
            "GetPreviewLODDistance",
            "GetPreviewLODDistanceEnabled",
            "GetRandomSeedOffset",
            "GetSeekDelta",
            "GetSimCache",
            "GetSystemFixedBounds",
            "GetTickBehavior",
            "GetVariableBool",
            "GetVariableColor",
            "GetVariableFloat",
            "GetVariableInt",
            "GetVariableMatrix",
            "GetVariablePosition",
            "GetVariableQuat",
            "GetVariableVec2",
            "GetVariableVec3",
            "GetVariableVec4",
            "InitForPerformanceBaseline",
            "IsPaused",
            "ReinitializeSystem",
            "RemoveParameterCollectionOverride",
            "ResetSystem",
            "SeekToDesiredAge",
            "SetAgeUpdateMode",
            "SetAllowScalability",
            "SetAsset",
            "SetAutoDestroy",
            "SetCanRenderWhileSeeking",
            "SetCustomTimeDilation",
            "SetDesiredAge",
            "SetEmitterFixedBounds",
            "SetForceLocalPlayerEffect",
            "SetForceSolo",
            "SetGpuComputeDebug",
            "SetLockDesiredAgeDeltaTimeToSeekDelta",
            "SetMaxSimTime",
            "SetNiagaraVariableActor",
            "SetNiagaraVariableBool",
            "SetNiagaraVariableFloat",
            "SetNiagaraVariableInt",
            "SetNiagaraVariableLinearColor",
            "SetNiagaraVariableMatrix",
            "SetNiagaraVariableObject",
            "SetNiagaraVariablePosition",
            "SetNiagaraVariableQuat",
            "SetNiagaraVariableVec2",
            "SetNiagaraVariableVec3",
            "SetNiagaraVariableVec4",
            "SetOcclusionQueryMode",
            "SetParameterCollectionOverride",
            "SetPaused",
            "SetPreviewLODDistance",
            "SetRandomSeedOffset",
            "SetRenderingEnabled",
            "SetSeekDelta",
            "SetSimCache",
            "SetSystemFixedBounds",
            "SetTickBehavior",
            "SetVariableActor",
            "SetVariableBool",
            "SetVariableFloat",
            "SetVariableInt",
            "SetVariableLinearColor",
            "SetVariableMaterial",
            "SetVariableMatrix",
            "SetVariableObject",
            "SetVariablePosition",
            "SetVariableQuat",
            "SetVariableStaticMesh",
            "SetVariableTexture",
            "SetVariableTextureRenderTarget",
            "SetVariableVec2",
            "SetVariableVec3",
            "SetVariableVec4",
        }};
    };

    struct NiagaraComponentPool
    {
        static constexpr std::string_view Name = "NiagaraComponentPool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraComponentPropertyBinding
    {
        static constexpr std::string_view Name = "NiagaraComponentPropertyBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeBinding = 0x0;
            static constexpr std::uintptr_t PropertyName = 0x14;
            static constexpr std::uintptr_t PropertyType = 0x18;
            static constexpr std::uintptr_t MetadataSetterName = 0x30;
            static constexpr std::uintptr_t PropertySetterParameterDefaults = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AttributeBinding", 0x0, "StructProperty"},
            {"PropertyName", 0x14, "NameProperty"},
            {"PropertyType", 0x18, "StructProperty"},
            {"MetadataSetterName", 0x30, "NameProperty"},
            {"PropertySetterParameterDefaults", 0x38, "MapProperty"},
        }};
    };

    struct NiagaraComponentRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraComponentRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentType = 0x98;
            static constexpr std::uintptr_t ComponentCountLimit = 0xA0;
            static constexpr std::uintptr_t EnabledBinding = 0xA4;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0xB8;
            static constexpr std::uintptr_t bAssignComponentsOnParticleID = 0xCC;
            static constexpr std::uintptr_t bCreateComponentFirstParticleFrame = 0xCD;
            static constexpr std::uintptr_t bOnlyActivateNewlyAquiredComponents = 0xCE;
            static constexpr std::uintptr_t bInheritOwnerVisibility = 0xCF;
            static constexpr std::uintptr_t RendererVisibility = 0xD0;
            static constexpr std::uintptr_t TemplateComponent = 0xD8;
            static constexpr std::uintptr_t PropertyBindings = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ComponentType", 0x98, "ClassProperty"},
            {"ComponentCountLimit", 0xA0, "UInt32Property"},
            {"EnabledBinding", 0xA4, "StructProperty"},
            {"RendererVisibilityTagBinding", 0xB8, "StructProperty"},
            {"bAssignComponentsOnParticleID", 0xCC, "BoolProperty"},
            {"bCreateComponentFirstParticleFrame", 0xCD, "BoolProperty"},
            {"bOnlyActivateNewlyAquiredComponents", 0xCE, "BoolProperty"},
            {"bInheritOwnerVisibility", 0xCF, "BoolProperty"},
            {"RendererVisibility", 0xD0, "IntProperty"},
            {"TemplateComponent", 0xD8, "ObjectProperty"},
            {"PropertyBindings", 0xE0, "ArrayProperty"},
        }};
    };

    struct NiagaraConvertInPlaceUtilityBase
    {
        static constexpr std::string_view Name = "NiagaraConvertInPlaceUtilityBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraCullProxyComponent
    {
        static constexpr std::string_view Name = "NiagaraCullProxyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Instances = 0x7D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instances", 0x7D0, "ArrayProperty"},
        }};
    };

    struct NiagaraCulledComponentInfo
    {
        static constexpr std::string_view Name = "NiagaraCulledComponentInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDIRigidMeshCollisionFunctionLibrary
    {
        static constexpr std::string_view Name = "NiagaraDIRigidMeshCollisionFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSourceActors",
        }};
    };

    struct NiagaraDataChannel
    {
        static constexpr std::string_view Name = "NiagaraDataChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelVariables = 0x28;
            static constexpr std::uintptr_t bKeepPreviousFrameData = 0x38;
            static constexpr std::uintptr_t bEnforceTickGroupReadWriteOrder = 0x39;
            static constexpr std::uintptr_t FinalWriteTickGroup = 0x3A;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ChannelVariables", 0x28, "ArrayProperty"},
            {"bKeepPreviousFrameData", 0x38, "BoolProperty"},
            {"bEnforceTickGroupReadWriteOrder", 0x39, "BoolProperty"},
            {"FinalWriteTickGroup", 0x3A, "ByteProperty"},
        }};
    };

    struct NiagaraDataChannelAsset
    {
        static constexpr std::string_view Name = "NiagaraDataChannelAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DataChannel = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataChannel", 0x28, "ObjectProperty"},
        }};
    };

    struct NiagaraDataChannelGameDataLayout
    {
        static constexpr std::string_view Name = "NiagaraDataChannelGameDataLayout";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableIndices = 0x0;
            static constexpr std::uintptr_t LwcConverters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableIndices", 0x0, "MapProperty"},
            {"LwcConverters", 0x10, "ArrayProperty"},
        }};
    };

    struct NiagaraDataChannelHandler
    {
        static constexpr std::string_view Name = "NiagaraDataChannelHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DataChannel = 0x30;
            static constexpr std::uintptr_t Writer = 0x38;
            static constexpr std::uintptr_t Reader = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DataChannel", 0x30, "WeakObjectProperty"},
            {"Writer", 0x38, "ObjectProperty"},
            {"Reader", 0x40, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetDataChannelReader",
            "GetDataChannelWriter",
            "SubscribeToDataChannelUpdates",
            "SubscribeToDataChannelUpdates_WithContext",
            "UnsubscribeFromDataChannelUpdates",
        }};
    };

    struct NiagaraDataChannelHandler_GameplayBurst
    {
        static constexpr std::string_view Name = "NiagaraDataChannelHandler_GameplayBurst";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataChannelHandler_MapBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachmentSettings = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachmentSettings", 0x100, "StructProperty"},
        }};
    };

    struct NiagaraDataChannelHandler_Global
    {
        static constexpr std::string_view Name = "NiagaraDataChannelHandler_Global";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataChannelHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t DataChannel = 0x30;
            static constexpr std::uintptr_t Writer = 0x38;
            static constexpr std::uintptr_t Reader = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DataChannel", 0x30, "WeakObjectProperty"},
            {"Writer", 0x38, "ObjectProperty"},
            {"Reader", 0x40, "ObjectProperty"},
        }};
    };

    struct NiagaraDataChannelHandler_Islands
    {
        static constexpr std::string_view Name = "NiagaraDataChannelHandler_Islands";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataChannelHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveIslands = 0xA8;
            static constexpr std::uintptr_t FreeIslands = 0xB8;
            static constexpr std::uintptr_t IslandPool = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveIslands", 0xA8, "ArrayProperty"},
            {"FreeIslands", 0xB8, "ArrayProperty"},
            {"IslandPool", 0xC8, "ArrayProperty"},
        }};
    };

    struct NiagaraDataChannelHandler_MapBase
    {
        static constexpr std::string_view Name = "NiagaraDataChannelHandler_MapBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataChannelHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryPool = 0xB8;
            static constexpr std::uintptr_t SpawnedComponentsToActiveEntry = 0xE8;
            static constexpr std::uintptr_t DefaultSystemToSpawn = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EntryPool", 0xB8, "ArrayProperty"},
            {"SpawnedComponentsToActiveEntry", 0xE8, "MapProperty"},
            {"DefaultSystemToSpawn", 0xF8, "ObjectProperty"},
        }};
    };

    struct NiagaraDataChannelLibrary
    {
        static constexpr std::string_view Name = "NiagaraDataChannelLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 22> FunctionNames{{
            "GetDataChannelElementCount",
            "GetDataChannelElementCount_WithContext",
            "GetMembersInNDCAccessContextInstance",
            "GetNiagaraDataChannel",
            "GetSinglePropertyInNDCAccessContextInstance",
            "GetUsableAccessContextFromNDC",
            "GetUsableAccessContextFromNDCRef",
            "MakeNDCAccessContextInstance",
            "PrepareAccessContextFromNDCRef",
            "ReadFromNiagaraDataChannel",
            "ReadFromNiagaraDataChannelSingle",
            "ReadFromNiagaraDataChannelSingle_WithContext",
            "ReadFromNiagaraDataChannel_WithContext",
            "SetMembersInNDCAccessContextInstance",
            "SetSinglePropertyInNDCAccessContextInstance",
            "SubscribeToNiagaraDataChannel",
            "SubscribeToNiagaraDataChannel_WithContext",
            "UnsubscribeFromNiagaraDataChannel",
            "WriteToNiagaraDataChannel",
            "WriteToNiagaraDataChannelSingle",
            "WriteToNiagaraDataChannelSingle_WithContext",
            "WriteToNiagaraDataChannel_WithContext",
        }};
    };

    struct NiagaraDataChannelReader
    {
        static constexpr std::string_view Name = "NiagaraDataChannelReader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x40, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "InitAccess",
            "Num",
            "ReadBool",
            "ReadEnum",
            "ReadFloat",
            "ReadID",
            "ReadInt",
            "ReadLinearColor",
            "ReadPosition",
            "ReadQuat",
            "ReadSpawnInfo",
            "ReadVector",
            "ReadVector2D",
            "ReadVector4",
        }};
    };

    struct NiagaraDataChannelReference
    {
        static constexpr std::string_view Name = "NiagaraDataChannelReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataChannel = 0x0;
            static constexpr std::uintptr_t AccessContext = 0x8;
            static constexpr std::uintptr_t bCustomAccessContext = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DataChannel", 0x0, "ObjectProperty"},
            {"AccessContext", 0x8, "StructProperty"},
            {"bCustomAccessContext", 0x18, "BoolProperty"},
        }};
    };

    struct NiagaraDataChannelSearchParameters
    {
        static constexpr std::string_view Name = "NiagaraDataChannelSearchParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningComponent = 0x0;
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t bOverrideLocation = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwningComponent", 0x0, "ObjectProperty"},
            {"Location", 0x8, "StructProperty"},
            {"bOverrideLocation", 0x20, "BoolProperty"},
        }};
    };

    struct NiagaraDataChannelUpdateContext
    {
        static constexpr std::string_view Name = "NiagaraDataChannelUpdateContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Reader = 0x0;
            static constexpr std::uintptr_t FirstNewDataIndex = 0x8;
            static constexpr std::uintptr_t LastNewDataIndex = 0xC;
            static constexpr std::uintptr_t NewElementCount = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Reader", 0x0, "ObjectProperty"},
            {"FirstNewDataIndex", 0x8, "IntProperty"},
            {"LastNewDataIndex", 0xC, "IntProperty"},
            {"NewElementCount", 0x10, "IntProperty"},
        }};
    };

    struct NiagaraDataChannelVariable
    {
        static constexpr std::string_view Name = "NiagaraDataChannelVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t TypeDefHandle = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"TypeDefHandle", 0x4, "StructProperty"},
        }};
    };

    struct NiagaraDataChannelWriter
    {
        static constexpr std::string_view Name = "NiagaraDataChannelWriter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x40, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "InitWrite",
            "Num",
            "WriteBool",
            "WriteEnum",
            "WriteFloat",
            "WriteID",
            "WriteInt",
            "WriteLinearColor",
            "WritePosition",
            "WriteQuat",
            "WriteSpawnInfo",
            "WriteVector",
            "WriteVector2D",
            "WriteVector4",
        }};
    };

    struct NiagaraDataChannel_GameplayBurst
    {
        static constexpr std::string_view Name = "NiagaraDataChannel_GameplayBurst";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataChannel_MapBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CellSize = 0x70;
            static constexpr std::uintptr_t SystemBoundsPadding = 0x88;
            static constexpr std::uintptr_t AttachmentSettings = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CellSize", 0x70, "StructProperty"},
            {"SystemBoundsPadding", 0x88, "StructProperty"},
            {"AttachmentSettings", 0xA0, "StructProperty"},
        }};
    };

    struct NiagaraDataChannel_Global
    {
        static constexpr std::string_view Name = "NiagaraDataChannel_Global";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelVariables = 0x28;
            static constexpr std::uintptr_t bKeepPreviousFrameData = 0x38;
            static constexpr std::uintptr_t bEnforceTickGroupReadWriteOrder = 0x39;
            static constexpr std::uintptr_t FinalWriteTickGroup = 0x3A;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ChannelVariables", 0x28, "ArrayProperty"},
            {"bKeepPreviousFrameData", 0x38, "BoolProperty"},
            {"bEnforceTickGroupReadWriteOrder", 0x39, "BoolProperty"},
            {"FinalWriteTickGroup", 0x3A, "ByteProperty"},
        }};
    };

    struct NiagaraDataChannel_Islands
    {
        static constexpr std::string_view Name = "NiagaraDataChannel_Islands";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x68;
            static constexpr std::uintptr_t InitialExtents = 0x70;
            static constexpr std::uintptr_t MaxExtents = 0x88;
            static constexpr std::uintptr_t PerElementExtents = 0xA0;
            static constexpr std::uintptr_t Systems = 0xB8;
            static constexpr std::uintptr_t IslandPoolSize = 0xC8;
            static constexpr std::uintptr_t DebugDrawSettings = 0xCC;
            static constexpr std::uintptr_t SystemsInternal = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Mode", 0x68, "EnumProperty"},
            {"InitialExtents", 0x70, "StructProperty"},
            {"MaxExtents", 0x88, "StructProperty"},
            {"PerElementExtents", 0xA0, "StructProperty"},
            {"Systems", 0xB8, "ArrayProperty"},
            {"IslandPoolSize", 0xC8, "IntProperty"},
            {"DebugDrawSettings", 0xCC, "StructProperty"},
            {"SystemsInternal", 0xD0, "ArrayProperty"},
        }};
    };

    struct NiagaraDataChannel_MapBase
    {
        static constexpr std::string_view Name = "NiagaraDataChannel_MapBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSystemToSpawn = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultSystemToSpawn", 0x68, "ObjectProperty"},
        }};
    };

    struct NiagaraDataInterface
    {
        static constexpr std::string_view Name = "NiagaraDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterface2DArrayTexture
    {
        static constexpr std::string_view Name = "NiagaraDataInterface2DArrayTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x38;
            static constexpr std::uintptr_t TextureUserParameter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Texture", 0x38, "ObjectProperty"},
            {"TextureUserParameter", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceActorComponent
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x38;
            static constexpr std::uintptr_t LocalPlayerIndex = 0x3C;
            static constexpr std::uintptr_t SourceActorRef = 0x40;
            static constexpr std::uintptr_t ActorOrComponentParameter = 0x60;
            static constexpr std::uintptr_t bRequireCurrentFrameData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceMode", 0x38, "EnumProperty"},
            {"LocalPlayerIndex", 0x3C, "IntProperty"},
            {"SourceActorRef", 0x40, "SoftObjectProperty"},
            {"ActorOrComponentParameter", 0x60, "StructProperty"},
            {"bRequireCurrentFrameData", 0x78, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceArray
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GpuSyncMode = 0x48;
            static constexpr std::uintptr_t MaxElements = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GpuSyncMode", 0x48, "EnumProperty"},
            {"MaxElements", 0x4C, "IntProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayBool
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayBool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t BoolData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoolData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayColor
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayColor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ColorData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayDistributionInt
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayDistributionInt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ArrayData = 0x40;
            static constexpr std::uintptr_t BuiltTableData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ArrayData", 0x40, "ArrayProperty"},
            {"BuiltTableData", 0x50, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetNiagaraArrayDistributionInt",
        }};
    };

    struct NiagaraDataInterfaceArrayFloat
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FloatData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayFloat2
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayFloat2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalFloatData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalFloatData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayFloat3
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayFloat3";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalFloatData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalFloatData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayFloat4
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayFloat4";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalFloatData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalFloatData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayFunctionLibrary
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 44> FunctionNames{{
            "GetNiagaraArrayBool",
            "GetNiagaraArrayBoolValue",
            "GetNiagaraArrayColor",
            "GetNiagaraArrayColorValue",
            "GetNiagaraArrayFloat",
            "GetNiagaraArrayFloatValue",
            "GetNiagaraArrayInt32",
            "GetNiagaraArrayInt32Value",
            "GetNiagaraArrayMatrix",
            "GetNiagaraArrayMatrixValue",
            "GetNiagaraArrayPosition",
            "GetNiagaraArrayPositionValue",
            "GetNiagaraArrayQuat",
            "GetNiagaraArrayQuatValue",
            "GetNiagaraArrayUInt8",
            "GetNiagaraArrayUInt8Value",
            "GetNiagaraArrayVector",
            "GetNiagaraArrayVector2D",
            "GetNiagaraArrayVector2DValue",
            "GetNiagaraArrayVector4",
            "GetNiagaraArrayVector4Value",
            "GetNiagaraArrayVectorValue",
            "SetNiagaraArrayBool",
            "SetNiagaraArrayBoolValue",
            "SetNiagaraArrayColor",
            "SetNiagaraArrayColorValue",
            "SetNiagaraArrayFloat",
            "SetNiagaraArrayFloatValue",
            "SetNiagaraArrayInt32",
            "SetNiagaraArrayInt32Value",
            "SetNiagaraArrayMatrix",
            "SetNiagaraArrayMatrixValue",
            "SetNiagaraArrayPosition",
            "SetNiagaraArrayPositionValue",
            "SetNiagaraArrayQuat",
            "SetNiagaraArrayQuatValue",
            "SetNiagaraArrayUInt8",
            "SetNiagaraArrayUInt8Value",
            "SetNiagaraArrayVector",
            "SetNiagaraArrayVector2D",
            "SetNiagaraArrayVector2DValue",
            "SetNiagaraArrayVector4",
            "SetNiagaraArrayVector4Value",
            "SetNiagaraArrayVectorValue",
        }};
    };

    struct NiagaraDataInterfaceArrayInt32
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayInt32";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t IntData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayMatrix
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayMatrix";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalMatrixData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalMatrixData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayMesh
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshData", 0x58, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetNiagaraArrayMesh",
            "SetNiagaraArrayMeshSM",
        }};
    };

    struct NiagaraDataInterfaceArrayNiagaraID
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayNiagaraID";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t IntData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayPosition
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayPosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t PositionData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PositionData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArrayQuat
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayQuat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalQuatData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalQuatData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceArraySpawnBurst
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArraySpawnBurst";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnData", 0x50, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetNiagaraArraySpawnBurst",
        }};
    };

    struct NiagaraDataInterfaceArrayUInt8
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceArrayUInt8";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceArray";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalIntData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalIntData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceAsyncGpuTrace
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceAsyncGpuTrace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxTracesPerParticle = 0x38;
            static constexpr std::uintptr_t MaxRetraces = 0x3C;
            static constexpr std::uintptr_t TraceProvider = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxTracesPerParticle", 0x38, "IntProperty"},
            {"MaxRetraces", 0x3C, "IntProperty"},
            {"TraceProvider", 0x40, "ByteProperty"},
        }};
    };

    struct NiagaraDataInterfaceAudioOscilloscope
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceAudioOscilloscope";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Submix = 0x38;
            static constexpr std::uintptr_t Resolution = 0x40;
            static constexpr std::uintptr_t ScopeInMilliseconds = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Submix", 0x38, "ObjectProperty"},
            {"Resolution", 0x40, "IntProperty"},
            {"ScopeInMilliseconds", 0x44, "FloatProperty"},
        }};
    };

    struct NiagaraDataInterfaceAudioPlayer
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceAudioPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundToPlay = 0x38;
            static constexpr std::uintptr_t Attenuation = 0x40;
            static constexpr std::uintptr_t Concurrency = 0x48;
            static constexpr std::uintptr_t ParameterNames = 0x50;
            static constexpr std::uintptr_t ConfigurationUserParameter = 0x60;
            static constexpr std::uintptr_t bLimitPlaysPerTick = 0x78;
            static constexpr std::uintptr_t MaxPlaysPerTick = 0x7C;
            static constexpr std::uintptr_t bStopWhenComponentIsDestroyed = 0x80;
            static constexpr std::uintptr_t bAllowLoopingOneShotSounds = 0x81;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SoundToPlay", 0x38, "ObjectProperty"},
            {"Attenuation", 0x40, "ObjectProperty"},
            {"Concurrency", 0x48, "ObjectProperty"},
            {"ParameterNames", 0x50, "ArrayProperty"},
            {"ConfigurationUserParameter", 0x60, "StructProperty"},
            {"bLimitPlaysPerTick", 0x78, "BoolProperty"},
            {"MaxPlaysPerTick", 0x7C, "IntProperty"},
            {"bStopWhenComponentIsDestroyed", 0x80, "BoolProperty"},
            {"bAllowLoopingOneShotSounds", 0x81, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceAudioPlayerSettings
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceAudioPlayerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideConcurrency = 0x28;
            static constexpr std::uintptr_t Concurrency = 0x30;
            static constexpr std::uintptr_t bOverrideAttenuationSettings = 0x38;
            static constexpr std::uintptr_t AttenuationSettings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bOverrideConcurrency", 0x28, "BoolProperty"},
            {"Concurrency", 0x30, "ObjectProperty"},
            {"bOverrideAttenuationSettings", 0x38, "BoolProperty"},
            {"AttenuationSettings", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceAudioSpectrum
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceAudioSpectrum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Submix = 0x38;
            static constexpr std::uintptr_t Resolution = 0x40;
            static constexpr std::uintptr_t MinimumFrequency = 0x44;
            static constexpr std::uintptr_t MaximumFrequency = 0x48;
            static constexpr std::uintptr_t NoiseFloorDb = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Submix", 0x38, "ObjectProperty"},
            {"Resolution", 0x40, "IntProperty"},
            {"MinimumFrequency", 0x44, "FloatProperty"},
            {"MaximumFrequency", 0x48, "FloatProperty"},
            {"NoiseFloorDb", 0x4C, "FloatProperty"},
        }};
    };

    struct NiagaraDataInterfaceCamera
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerControllerIndex = 0x38;
            static constexpr std::uintptr_t bRequireCurrentFrameData = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerControllerIndex", 0x38, "IntProperty"},
            {"bRequireCurrentFrameData", 0x3C, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceCollisionQuery
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceCollisionQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceColorCurve
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceColorCurve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceCurveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RedCurve = 0x70;
            static constexpr std::uintptr_t GreenCurve = 0xB0;
            static constexpr std::uintptr_t BlueCurve = 0xF0;
            static constexpr std::uintptr_t AlphaCurve = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RedCurve", 0x70, "StructProperty"},
            {"GreenCurve", 0xB0, "StructProperty"},
            {"BlueCurve", 0xF0, "StructProperty"},
            {"AlphaCurve", 0x130, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceConsoleVariable
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceConsoleVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceCubeTexture
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceCubeTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x38;
            static constexpr std::uintptr_t TextureUserParameter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Texture", 0x38, "ObjectProperty"},
            {"TextureUserParameter", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceCurlNoise
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceCurlNoise";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Seed", 0x38, "UInt32Property"},
        }};
    };

    struct NiagaraDataInterfaceCurve
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceCurve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceCurveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Curve", 0x70, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceCurveBase
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceCurveBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ShaderLUT = 0x38;
            static constexpr std::uintptr_t LUTMinTime = 0x48;
            static constexpr std::uintptr_t LUTMaxTime = 0x4C;
            static constexpr std::uintptr_t LUTInvTimeRange = 0x50;
            static constexpr std::uintptr_t LUTNumSamplesMinusOne = 0x54;
            static constexpr std::uintptr_t bExposeCurve = 0x5C;
            static constexpr std::uintptr_t bUseLUT = 0x5C;
            static constexpr std::uintptr_t ExposedName = 0x60;
            static constexpr std::uintptr_t ExposedTexture = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ShaderLUT", 0x38, "ArrayProperty"},
            {"LUTMinTime", 0x48, "FloatProperty"},
            {"LUTMaxTime", 0x4C, "FloatProperty"},
            {"LUTInvTimeRange", 0x50, "FloatProperty"},
            {"LUTNumSamplesMinusOne", 0x54, "FloatProperty"},
            {"bExposeCurve", 0x5C, "BoolProperty"},
            {"bUseLUT", 0x5C, "BoolProperty"},
            {"ExposedName", 0x60, "NameProperty"},
            {"ExposedTexture", 0x68, "ObjectProperty"},
        }};
    };

    struct NiagaraDataInterfaceDataChannelRead
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceDataChannelRead";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Channel = 0x38;
            static constexpr std::uintptr_t AccessContext = 0x40;
            static constexpr std::uintptr_t bAutoLinkToSpawningNDC = 0x50;
            static constexpr std::uintptr_t bReadCurrentFrame = 0x51;
            static constexpr std::uintptr_t bUpdateSourceDataEveryTick = 0x52;
            static constexpr std::uintptr_t bOverrideSpawnGroupToDataChannelIndex = 0x53;
            static constexpr std::uintptr_t bOnlySpawnOnceOnSubticks = 0x54;
            static constexpr std::uintptr_t CompiledData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Channel", 0x38, "ObjectProperty"},
            {"AccessContext", 0x40, "StructProperty"},
            {"bAutoLinkToSpawningNDC", 0x50, "BoolProperty"},
            {"bReadCurrentFrame", 0x51, "BoolProperty"},
            {"bUpdateSourceDataEveryTick", 0x52, "BoolProperty"},
            {"bOverrideSpawnGroupToDataChannelIndex", 0x53, "BoolProperty"},
            {"bOnlySpawnOnceOnSubticks", 0x54, "BoolProperty"},
            {"CompiledData", 0x58, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceDataChannelWrite
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceDataChannelWrite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t AllocationMode = 0x40;
            static constexpr std::uintptr_t AllocationCount = 0x44;
            static constexpr std::uintptr_t bPublishToGame = 0x48;
            static constexpr std::uintptr_t bPublishToCPU = 0x49;
            static constexpr std::uintptr_t bPublishToGPU = 0x4A;
            static constexpr std::uintptr_t bUpdateDestinationDataEveryTick = 0x4B;
            static constexpr std::uintptr_t bOnlyWriteOnceOnSubticks = 0x4C;
            static constexpr std::uintptr_t Channel = 0x50;
            static constexpr std::uintptr_t AccessContext = 0x58;
            static constexpr std::uintptr_t CompiledData = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"AllocationMode", 0x40, "EnumProperty"},
            {"AllocationCount", 0x44, "UInt32Property"},
            {"bPublishToGame", 0x48, "BoolProperty"},
            {"bPublishToCPU", 0x49, "BoolProperty"},
            {"bPublishToGPU", 0x4A, "BoolProperty"},
            {"bUpdateDestinationDataEveryTick", 0x4B, "BoolProperty"},
            {"bOnlyWriteOnceOnSubticks", 0x4C, "BoolProperty"},
            {"Channel", 0x50, "ObjectProperty"},
            {"AccessContext", 0x58, "StructProperty"},
            {"CompiledData", 0x68, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceDataTable
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceDataTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DataTable = 0x38;
            static constexpr std::uintptr_t FilteredRowNames = 0x40;
            static constexpr std::uintptr_t ObjectParameterBinding = 0x50;
            static constexpr std::uintptr_t bCreateFilteredTable = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DataTable", 0x38, "ObjectProperty"},
            {"FilteredRowNames", 0x40, "ArrayProperty"},
            {"ObjectParameterBinding", 0x50, "StructProperty"},
            {"bCreateFilteredTable", 0x68, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceDebugDraw
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceDebugDraw";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideMaxLineInstances = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverrideMaxLineInstances", 0x38, "UInt32Property"},
        }};
    };

    struct NiagaraDataInterfaceDynamicMesh
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceDynamicMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0x48;
            static constexpr std::uintptr_t Materials = 0x58;
            static constexpr std::uintptr_t NumVertices = 0x68;
            static constexpr std::uintptr_t NumTexCoords = 0x6C;
            static constexpr std::uintptr_t bHasColors = 0x70;
            static constexpr std::uintptr_t bHasTangentBasis = 0x71;
            static constexpr std::uintptr_t bClearTrianglesPerFrame = 0x72;
            static constexpr std::uintptr_t DefaultBounds = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Sections", 0x48, "ArrayProperty"},
            {"Materials", 0x58, "ArrayProperty"},
            {"NumVertices", 0x68, "IntProperty"},
            {"NumTexCoords", 0x6C, "IntProperty"},
            {"bHasColors", 0x70, "BoolProperty"},
            {"bHasTangentBasis", 0x71, "BoolProperty"},
            {"bClearTrianglesPerFrame", 0x72, "BoolProperty"},
            {"DefaultBounds", 0x78, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceDynamicMeshSimCacheData
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceDynamicMeshSimCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueFrames = 0x28;
            static constexpr std::uintptr_t CpuFrameIndices = 0x38;
            static constexpr std::uintptr_t GpuFrameIndices = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UniqueFrames", 0x28, "ArrayProperty"},
            {"CpuFrameIndices", 0x38, "ArrayProperty"},
            {"GpuFrameIndices", 0x48, "ArrayProperty"},
        }};
    };

    struct NiagaraDataInterfaceEmitterBinding
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceEmitterBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingMode = 0x0;
            static constexpr std::uintptr_t EmitterName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BindingMode", 0x0, "EnumProperty"},
            {"EmitterName", 0x4, "NameProperty"},
        }};
    };

    struct NiagaraDataInterfaceEmitterProperties
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceEmitterProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterBinding = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmitterBinding", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceExport
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceExport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t CallbackHandlerParameter = 0x38;
            static constexpr std::uintptr_t GPUAllocationMode = 0x50;
            static constexpr std::uintptr_t GPUAllocationFixedSize = 0x54;
            static constexpr std::uintptr_t GPUAllocationPerParticleSize = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CallbackHandlerParameter", 0x38, "StructProperty"},
            {"GPUAllocationMode", 0x50, "EnumProperty"},
            {"GPUAllocationFixedSize", 0x54, "IntProperty"},
            {"GPUAllocationPerParticleSize", 0x58, "FloatProperty"},
        }};
    };

    struct NiagaraDataInterfaceGBuffer
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGBuffer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceGrid2D
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGrid2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClearBeforeNonIterationStage = 0x38;
            static constexpr std::uintptr_t NumCellsX = 0x3C;
            static constexpr std::uintptr_t NumCellsY = 0x40;
            static constexpr std::uintptr_t NumCellsMaxAxis = 0x44;
            static constexpr std::uintptr_t NumAttributes = 0x48;
            static constexpr std::uintptr_t SetGridFromMaxAxis = 0x4C;
            static constexpr std::uintptr_t WorldBBoxSize = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ClearBeforeNonIterationStage", 0x38, "BoolProperty"},
            {"NumCellsX", 0x3C, "IntProperty"},
            {"NumCellsY", 0x40, "IntProperty"},
            {"NumCellsMaxAxis", 0x44, "IntProperty"},
            {"NumAttributes", 0x48, "IntProperty"},
            {"SetGridFromMaxAxis", 0x4C, "BoolProperty"},
            {"WorldBBoxSize", 0x50, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceGrid2DCollection
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGrid2DCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceGrid2D";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderTargetUserParameter = 0x60;
            static constexpr std::uintptr_t OverrideBufferFormat = 0x78;
            static constexpr std::uintptr_t bOverrideFormat = 0x79;
            static constexpr std::uintptr_t ManagedRenderTargets = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RenderTargetUserParameter", 0x60, "StructProperty"},
            {"OverrideBufferFormat", 0x78, "EnumProperty"},
            {"bOverrideFormat", 0x79, "BoolProperty"},
            {"ManagedRenderTargets", 0x90, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "FillRawTexture2D",
            "FillTexture2D",
            "GetRawTextureSize",
            "GetTextureSize",
        }};
    };

    struct NiagaraDataInterfaceGrid2DCollectionReader
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGrid2DCollectionReader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceGrid2DCollection";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0xA0;
            static constexpr std::uintptr_t DIName = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EmitterName", 0xA0, "StrProperty"},
            {"DIName", 0xB0, "StrProperty"},
        }};
    };

    struct NiagaraDataInterfaceGrid3D
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGrid3D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClearBeforeNonIterationStage = 0x38;
            static constexpr std::uintptr_t NumCells = 0x3C;
            static constexpr std::uintptr_t CellSize = 0x48;
            static constexpr std::uintptr_t NumCellsMaxAxis = 0x4C;
            static constexpr std::uintptr_t SetResolutionMethod = 0x50;
            static constexpr std::uintptr_t WorldBBoxSize = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ClearBeforeNonIterationStage", 0x38, "BoolProperty"},
            {"NumCells", 0x3C, "StructProperty"},
            {"CellSize", 0x48, "FloatProperty"},
            {"NumCellsMaxAxis", 0x4C, "IntProperty"},
            {"SetResolutionMethod", 0x50, "EnumProperty"},
            {"WorldBBoxSize", 0x58, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceGrid3DCollection
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGrid3DCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceGrid3D";
        struct Offsets
        {
            static constexpr std::uintptr_t NumAttributes = 0x70;
            static constexpr std::uintptr_t RenderTargetUserParameter = 0x78;
            static constexpr std::uintptr_t OverrideBufferFormat = 0x90;
            static constexpr std::uintptr_t bOverrideFormat = 0x91;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NumAttributes", 0x70, "IntProperty"},
            {"RenderTargetUserParameter", 0x78, "StructProperty"},
            {"OverrideBufferFormat", 0x90, "EnumProperty"},
            {"bOverrideFormat", 0x91, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "FillRawVolumeTexture",
            "FillVolumeTexture",
            "GetRawTextureSize",
            "GetTextureSize",
        }};
    };

    struct NiagaraDataInterfaceGrid3DCollectionReader
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceGrid3DCollectionReader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceGrid3DCollection";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0xA8;
            static constexpr std::uintptr_t DIName = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EmitterName", 0xA8, "StrProperty"},
            {"DIName", 0xB8, "StrProperty"},
        }};
    };

    struct NiagaraDataInterfaceIntRenderTarget2D
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceIntRenderTarget2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x38;
            static constexpr std::uintptr_t RenderTargetUserParameter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Size", 0x38, "StructProperty"},
            {"RenderTargetUserParameter", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceLandscape
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceLandscape";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceLandscape = 0x38;
            static constexpr std::uintptr_t SourceMode = 0x40;
            static constexpr std::uintptr_t PhysicalMaterials = 0x48;
            static constexpr std::uintptr_t bVirtualTexturesSupported = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SourceLandscape", 0x38, "ObjectProperty"},
            {"SourceMode", 0x40, "EnumProperty"},
            {"PhysicalMaterials", 0x48, "ArrayProperty"},
            {"bVirtualTexturesSupported", 0x58, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceMaterialInstanceDynamic
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMaterialInstanceDynamic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultMaterialInst = 0x38;
            static constexpr std::uintptr_t InstancedMaterialParamBinding = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultMaterialInst", 0x38, "ObjectProperty"},
            {"InstancedMaterialParamBinding", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceMaterialParameterCollection
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMaterialParameterCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCollection = 0x38;
            static constexpr std::uintptr_t CollectionBinding = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultCollection", 0x38, "ObjectProperty"},
            {"CollectionBinding", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceMemoryBuffer
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMemoryBuffer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultNumElements = 0x40;
            static constexpr std::uintptr_t GpuSyncMode = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultNumElements", 0x40, "IntProperty"},
            {"GpuSyncMode", 0x44, "EnumProperty"},
        }};
    };

    struct NiagaraDataInterfaceMeshRendererInfo
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMeshRendererInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshRenderer = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshRenderer", 0x38, "ObjectProperty"},
        }};
    };

    struct NiagaraDataInterfaceNeighborGrid3D
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceNeighborGrid3D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceGrid3D";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNeighborsPerCell = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxNeighborsPerCell", 0x70, "UInt32Property"},
        }};
    };

    struct NiagaraDataInterfaceNeighborQuery
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceNeighborQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceGrid3D";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxCellsPerParticle = 0x70;
            static constexpr std::uintptr_t bCountOnly = 0x74;
            static constexpr std::uintptr_t bUsePersistentIDs = 0x75;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxCellsPerParticle", 0x70, "UInt32Property"},
            {"bCountOnly", 0x74, "BoolProperty"},
            {"bUsePersistentIDs", 0x75, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceOcclusion
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceOcclusion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceParticleRead
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceParticleRead";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterBinding = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmitterBinding", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfacePhysicsAsset
    {
        static constexpr std::string_view Name = "NiagaraDataInterfacePhysicsAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSource = 0x38;
            static constexpr std::uintptr_t SoftSourceActor = 0x40;
            static constexpr std::uintptr_t MeshUserParameter = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultSource", 0x38, "ObjectProperty"},
            {"SoftSourceActor", 0x40, "SoftObjectProperty"},
            {"MeshUserParameter", 0x60, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfacePlatformSet
    {
        static constexpr std::string_view Name = "NiagaraDataInterfacePlatformSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Platforms = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Platforms", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfacePropertyInterface
    {
        static constexpr std::string_view Name = "NiagaraDataInterfacePropertyInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t InterfaceName = 0x38;
            static constexpr std::uintptr_t InterfacePath = 0x3C;
            static constexpr std::uintptr_t InterfacePackage = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InterfaceName", 0x38, "NameProperty"},
            {"InterfacePath", 0x3C, "NameProperty"},
            {"InterfacePackage", 0x40, "NameProperty"},
        }};
    };

    struct NiagaraDataInterfaceRWBase
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceRWBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceRasterizationGrid3D
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceRasterizationGrid3D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceGrid3D";
        struct Offsets
        {
            static constexpr std::uintptr_t NumAttributes = 0x70;
            static constexpr std::uintptr_t Precision = 0x74;
            static constexpr std::uintptr_t ResetValue = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumAttributes", 0x70, "IntProperty"},
            {"Precision", 0x74, "FloatProperty"},
            {"ResetValue", 0x78, "IntProperty"},
        }};
    };

    struct NiagaraDataInterfaceRenderTarget2D
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceRenderTarget2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x40;
            static constexpr std::uintptr_t MipMapGeneration = 0x48;
            static constexpr std::uintptr_t MipMapGenerationType = 0x49;
            static constexpr std::uintptr_t OverrideRenderTargetFormat = 0x4A;
            static constexpr std::uintptr_t OverrideRenderTargetFilter = 0x4B;
            static constexpr std::uintptr_t bInheritUserParameterSettings = 0x4C;
            static constexpr std::uintptr_t bOverrideFormat = 0x4C;
            static constexpr std::uintptr_t RenderTargetUserParameter = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Size", 0x40, "StructProperty"},
            {"MipMapGeneration", 0x48, "EnumProperty"},
            {"MipMapGenerationType", 0x49, "EnumProperty"},
            {"OverrideRenderTargetFormat", 0x4A, "ByteProperty"},
            {"OverrideRenderTargetFilter", 0x4B, "ByteProperty"},
            {"bInheritUserParameterSettings", 0x4C, "BoolProperty"},
            {"bOverrideFormat", 0x4C, "BoolProperty"},
            {"RenderTargetUserParameter", 0x50, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceRenderTarget2DArray
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceRenderTarget2DArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x38;
            static constexpr std::uintptr_t OverrideRenderTargetFormat = 0x44;
            static constexpr std::uintptr_t OverrideRenderTargetFilter = 0x45;
            static constexpr std::uintptr_t bInheritUserParameterSettings = 0x46;
            static constexpr std::uintptr_t bOverrideFormat = 0x46;
            static constexpr std::uintptr_t RenderTargetUserParameter = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Size", 0x38, "StructProperty"},
            {"OverrideRenderTargetFormat", 0x44, "ByteProperty"},
            {"OverrideRenderTargetFilter", 0x45, "ByteProperty"},
            {"bInheritUserParameterSettings", 0x46, "BoolProperty"},
            {"bOverrideFormat", 0x46, "BoolProperty"},
            {"RenderTargetUserParameter", 0x48, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceRenderTargetCube
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceRenderTargetCube";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x38;
            static constexpr std::uintptr_t OverrideRenderTargetFormat = 0x3C;
            static constexpr std::uintptr_t OverrideRenderTargetFilter = 0x3D;
            static constexpr std::uintptr_t bInheritUserParameterSettings = 0x3E;
            static constexpr std::uintptr_t bOverrideFormat = 0x3E;
            static constexpr std::uintptr_t RenderTargetUserParameter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Size", 0x38, "IntProperty"},
            {"OverrideRenderTargetFormat", 0x3C, "ByteProperty"},
            {"OverrideRenderTargetFilter", 0x3D, "ByteProperty"},
            {"bInheritUserParameterSettings", 0x3E, "BoolProperty"},
            {"bOverrideFormat", 0x3E, "BoolProperty"},
            {"RenderTargetUserParameter", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceRenderTargetVolume
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceRenderTargetVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x40;
            static constexpr std::uintptr_t OverrideRenderTargetFormat = 0x4C;
            static constexpr std::uintptr_t OverrideRenderTargetFilter = 0x4D;
            static constexpr std::uintptr_t bInheritUserParameterSettings = 0x4E;
            static constexpr std::uintptr_t bOverrideFormat = 0x4E;
            static constexpr std::uintptr_t RenderTargetUserParameter = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Size", 0x40, "StructProperty"},
            {"OverrideRenderTargetFormat", 0x4C, "ByteProperty"},
            {"OverrideRenderTargetFilter", 0x4D, "ByteProperty"},
            {"bInheritUserParameterSettings", 0x4E, "BoolProperty"},
            {"bOverrideFormat", 0x4E, "BoolProperty"},
            {"RenderTargetUserParameter", 0x50, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceRibbon
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceRibbon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t bRibbonEnableAccurateGeometry = 0x38;
            static constexpr std::uintptr_t bRibbonShapeClosed = 0x38;
            static constexpr std::uintptr_t bRibbonUseMaterialBackfaceCulling = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bRibbonEnableAccurateGeometry", 0x38, "BoolProperty"},
            {"bRibbonShapeClosed", 0x38, "BoolProperty"},
            {"bRibbonUseMaterialBackfaceCulling", 0x38, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceRigidMeshCollisionQuery
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceRigidMeshCollisionQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorTags = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x48;
            static constexpr std::uintptr_t SourceActors = 0x58;
            static constexpr std::uintptr_t OnlyUseMoveable = 0x68;
            static constexpr std::uintptr_t UseComplexCollisions = 0x69;
            static constexpr std::uintptr_t bFilterByObjectType = 0x6A;
            static constexpr std::uintptr_t GlobalSearchAllowed = 0x6B;
            static constexpr std::uintptr_t GlobalSearchForced = 0x6C;
            static constexpr std::uintptr_t GlobalSearchFallback_Unscripted = 0x6D;
            static constexpr std::uintptr_t MaxNumPrimitives = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ActorTags", 0x38, "ArrayProperty"},
            {"ComponentTags", 0x48, "ArrayProperty"},
            {"SourceActors", 0x58, "ArrayProperty"},
            {"OnlyUseMoveable", 0x68, "BoolProperty"},
            {"UseComplexCollisions", 0x69, "BoolProperty"},
            {"bFilterByObjectType", 0x6A, "BoolProperty"},
            {"GlobalSearchAllowed", 0x6B, "BoolProperty"},
            {"GlobalSearchForced", 0x6C, "BoolProperty"},
            {"GlobalSearchFallback_Unscripted", 0x6D, "BoolProperty"},
            {"MaxNumPrimitives", 0x70, "IntProperty"},
        }};
    };

    struct NiagaraDataInterfaceSceneCapture2D
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSceneCapture2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x38;
            static constexpr std::uintptr_t SceneCaptureUserParameter = 0x40;
            static constexpr std::uintptr_t bAutoMoveWithComponent = 0x58;
            static constexpr std::uintptr_t AutoMoveOffsetLocationMode = 0x59;
            static constexpr std::uintptr_t AutoMoveOffsetLocation = 0x60;
            static constexpr std::uintptr_t AutoMoveOffsetRotationMode = 0x78;
            static constexpr std::uintptr_t AutoMoveOffsetRotation = 0x80;
            static constexpr std::uintptr_t ManagedCaptureSource = 0x98;
            static constexpr std::uintptr_t ManagedTextureSize = 0x9C;
            static constexpr std::uintptr_t ManagedTextureFormat = 0xA4;
            static constexpr std::uintptr_t ManagedProjectionType = 0xA5;
            static constexpr std::uintptr_t ManagedFOVAngle = 0xA8;
            static constexpr std::uintptr_t ManagedOrthoWidth = 0xAC;
            static constexpr std::uintptr_t ManagedLODDistanceFactor = 0xB0;
            static constexpr std::uintptr_t bManagedCaptureEveryFrame = 0xB4;
            static constexpr std::uintptr_t bManagedCaptureOnMovement = 0xB5;
            static constexpr std::uintptr_t bManagedHideAttachComponent = 0xB6;
            static constexpr std::uintptr_t ManagedHiddenActors = 0xB8;
            static constexpr std::uintptr_t ManagedShowOnlyActors = 0xC8;
            static constexpr std::uintptr_t ManagedCaptureComponents = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"SourceMode", 0x38, "EnumProperty"},
            {"SceneCaptureUserParameter", 0x40, "StructProperty"},
            {"bAutoMoveWithComponent", 0x58, "BoolProperty"},
            {"AutoMoveOffsetLocationMode", 0x59, "EnumProperty"},
            {"AutoMoveOffsetLocation", 0x60, "StructProperty"},
            {"AutoMoveOffsetRotationMode", 0x78, "EnumProperty"},
            {"AutoMoveOffsetRotation", 0x80, "StructProperty"},
            {"ManagedCaptureSource", 0x98, "ByteProperty"},
            {"ManagedTextureSize", 0x9C, "StructProperty"},
            {"ManagedTextureFormat", 0xA4, "ByteProperty"},
            {"ManagedProjectionType", 0xA5, "ByteProperty"},
            {"ManagedFOVAngle", 0xA8, "FloatProperty"},
            {"ManagedOrthoWidth", 0xAC, "FloatProperty"},
            {"ManagedLODDistanceFactor", 0xB0, "FloatProperty"},
            {"bManagedCaptureEveryFrame", 0xB4, "BoolProperty"},
            {"bManagedCaptureOnMovement", 0xB5, "BoolProperty"},
            {"bManagedHideAttachComponent", 0xB6, "BoolProperty"},
            {"ManagedHiddenActors", 0xB8, "ArrayProperty"},
            {"ManagedShowOnlyActors", 0xC8, "ArrayProperty"},
            {"ManagedCaptureComponents", 0xE0, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetSceneCapture2DManagedHiddenActors",
            "SetSceneCapture2DManagedShowOnlyActors",
        }};
    };

    struct NiagaraDataInterfaceSimCacheReader
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSimCacheReader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SimCacheBinding = 0x38;
            static constexpr std::uintptr_t SimCache = 0x50;
            static constexpr std::uintptr_t EmitterBinding = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SimCacheBinding", 0x38, "StructProperty"},
            {"SimCache", 0x50, "ObjectProperty"},
            {"EmitterBinding", 0x58, "NameProperty"},
        }};
    };

    struct NiagaraDataInterfaceSimpleCounter
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSimpleCounter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceRWBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GpuSyncMode = 0x40;
            static constexpr std::uintptr_t InitialValue = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GpuSyncMode", 0x40, "EnumProperty"},
            {"InitialValue", 0x44, "IntProperty"},
        }};
    };

    struct NiagaraDataInterfaceSkeletalMesh
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSkeletalMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x38;
            static constexpr std::uintptr_t DefaultMesh = 0x40;
            static constexpr std::uintptr_t SoftSourceActor = 0x48;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t OptionalComponentClass = 0x78;
            static constexpr std::uintptr_t SourceComponent = 0x80;
            static constexpr std::uintptr_t MeshUserParameter = 0x88;
            static constexpr std::uintptr_t SkinningMode = 0xA0;
            static constexpr std::uintptr_t SamplingRegions = 0xA8;
            static constexpr std::uintptr_t WholeMeshLOD = 0xB8;
            static constexpr std::uintptr_t FilteredBones = 0xC0;
            static constexpr std::uintptr_t FilteredSockets = 0xD0;
            static constexpr std::uintptr_t ExcludeBoneName = 0xE0;
            static constexpr std::uintptr_t bExcludeBone = 0xE4;
            static constexpr std::uintptr_t UVSetIndex = 0xE8;
            static constexpr std::uintptr_t bRequireCurrentFrameData = 0xEC;
            static constexpr std::uintptr_t bReadDeformedGeometry = 0xED;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"SourceMode", 0x38, "EnumProperty"},
            {"DefaultMesh", 0x40, "ObjectProperty"},
            {"SoftSourceActor", 0x48, "SoftObjectProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"OptionalComponentClass", 0x78, "ClassProperty"},
            {"SourceComponent", 0x80, "WeakObjectProperty"},
            {"MeshUserParameter", 0x88, "StructProperty"},
            {"SkinningMode", 0xA0, "EnumProperty"},
            {"SamplingRegions", 0xA8, "ArrayProperty"},
            {"WholeMeshLOD", 0xB8, "IntProperty"},
            {"FilteredBones", 0xC0, "ArrayProperty"},
            {"FilteredSockets", 0xD0, "ArrayProperty"},
            {"ExcludeBoneName", 0xE0, "NameProperty"},
            {"bExcludeBone", 0xE4, "BoolProperty"},
            {"UVSetIndex", 0xE8, "IntProperty"},
            {"bRequireCurrentFrameData", 0xEC, "BoolProperty"},
            {"bReadDeformedGeometry", 0xED, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnSourceEndPlay",
        }};
    };

    struct NiagaraDataInterfaceSocketReader
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSocketReader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x38;
            static constexpr std::uintptr_t FilteredSockets = 0x40;
            static constexpr std::uintptr_t SourceActorRef = 0x50;
            static constexpr std::uintptr_t SourceAsset = 0x70;
            static constexpr std::uintptr_t AttachComponentClass = 0x78;
            static constexpr std::uintptr_t AttachComponentTag = 0x80;
            static constexpr std::uintptr_t ObjectParameterBinding = 0x88;
            static constexpr std::uintptr_t bUpdateSocketsPerFrame = 0xA0;
            static constexpr std::uintptr_t bRequireCurrentFrameData = 0xA1;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SourceMode", 0x38, "EnumProperty"},
            {"FilteredSockets", 0x40, "ArrayProperty"},
            {"SourceActorRef", 0x50, "SoftObjectProperty"},
            {"SourceAsset", 0x70, "ObjectProperty"},
            {"AttachComponentClass", 0x78, "ClassProperty"},
            {"AttachComponentTag", 0x80, "NameProperty"},
            {"ObjectParameterBinding", 0x88, "StructProperty"},
            {"bUpdateSocketsPerFrame", 0xA0, "BoolProperty"},
            {"bRequireCurrentFrameData", 0xA1, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceSparseVolumeTexture
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSparseVolumeTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SparseVolumeTexture = 0x38;
            static constexpr std::uintptr_t SparseVolumeTextureUserParameter = 0x40;
            static constexpr std::uintptr_t BlockingStreamingRequests = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SparseVolumeTexture", 0x38, "ObjectProperty"},
            {"SparseVolumeTextureUserParameter", 0x40, "StructProperty"},
            {"BlockingStreamingRequests", 0x58, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceSpline
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSpline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x38;
            static constexpr std::uintptr_t SoftSourceActor = 0x40;
            static constexpr std::uintptr_t SplineUserParameter = 0x60;
            static constexpr std::uintptr_t bUseLUT = 0x78;
            static constexpr std::uintptr_t NumLUTSteps = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceMode", 0x38, "EnumProperty"},
            {"SoftSourceActor", 0x40, "SoftObjectProperty"},
            {"SplineUserParameter", 0x60, "StructProperty"},
            {"bUseLUT", 0x78, "BoolProperty"},
            {"NumLUTSteps", 0x7C, "IntProperty"},
        }};
    };

    struct NiagaraDataInterfaceSplineLUT
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSplineLUT";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Positions = 0x0;
            static constexpr std::uintptr_t Scales = 0x10;
            static constexpr std::uintptr_t Rotations = 0x20;
            static constexpr std::uintptr_t SplineLength = 0x30;
            static constexpr std::uintptr_t SplineDistanceStep = 0x34;
            static constexpr std::uintptr_t InvSplineDistanceStep = 0x38;
            static constexpr std::uintptr_t MaxIndex = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Positions", 0x0, "ArrayProperty"},
            {"Scales", 0x10, "ArrayProperty"},
            {"Rotations", 0x20, "ArrayProperty"},
            {"SplineLength", 0x30, "FloatProperty"},
            {"SplineDistanceStep", 0x34, "FloatProperty"},
            {"InvSplineDistanceStep", 0x38, "FloatProperty"},
            {"MaxIndex", 0x3C, "IntProperty"},
        }};
    };

    struct NiagaraDataInterfaceSpriteRendererInfo
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSpriteRendererInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SpriteRenderer = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpriteRenderer", 0x38, "ObjectProperty"},
        }};
    };

    struct NiagaraDataInterfaceStaticMesh
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceStaticMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x38;
            static constexpr std::uintptr_t DefaultMesh = 0x40;
            static constexpr std::uintptr_t SoftSourceActor = 0x48;
            static constexpr std::uintptr_t SourceComponent = 0x68;
            static constexpr std::uintptr_t SectionFilter = 0x70;
            static constexpr std::uintptr_t bCaptureTransformsPerFrame = 0x80;
            static constexpr std::uintptr_t bUsePhysicsBodyVelocity = 0x81;
            static constexpr std::uintptr_t bAllowSamplingFromStreamingLODs = 0x82;
            static constexpr std::uintptr_t LODIndex = 0x84;
            static constexpr std::uintptr_t LODIndexUserParameter = 0x88;
            static constexpr std::uintptr_t MeshParameterBinding = 0xA0;
            static constexpr std::uintptr_t InstanceIndex = 0xB8;
            static constexpr std::uintptr_t FilteredSockets = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SourceMode", 0x38, "EnumProperty"},
            {"DefaultMesh", 0x40, "ObjectProperty"},
            {"SoftSourceActor", 0x48, "SoftObjectProperty"},
            {"SourceComponent", 0x68, "WeakObjectProperty"},
            {"SectionFilter", 0x70, "StructProperty"},
            {"bCaptureTransformsPerFrame", 0x80, "BoolProperty"},
            {"bUsePhysicsBodyVelocity", 0x81, "BoolProperty"},
            {"bAllowSamplingFromStreamingLODs", 0x82, "BoolProperty"},
            {"LODIndex", 0x84, "IntProperty"},
            {"LODIndexUserParameter", 0x88, "StructProperty"},
            {"MeshParameterBinding", 0xA0, "StructProperty"},
            {"InstanceIndex", 0xB8, "IntProperty"},
            {"FilteredSockets", 0xC0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnSourceEndPlay",
            "SetNiagaraStaticMeshDIInstanceIndex",
        }};
    };

    struct NiagaraDataInterfaceStaticMeshIndirect
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceStaticMeshIndirect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t CompiledData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CompiledData", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceSystemProperties
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceSystemProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceTexture
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x38;
            static constexpr std::uintptr_t TextureUserParameter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Texture", 0x38, "ObjectProperty"},
            {"TextureUserParameter", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceUObjectPropertyReader
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceUObjectPropertyReader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x38;
            static constexpr std::uintptr_t UObjectParameterBinding = 0x40;
            static constexpr std::uintptr_t PropertyRemap = 0x58;
            static constexpr std::uintptr_t SourceActor = 0x68;
            static constexpr std::uintptr_t SourceActorComponentClass = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceMode", 0x38, "EnumProperty"},
            {"UObjectParameterBinding", 0x40, "StructProperty"},
            {"PropertyRemap", 0x58, "ArrayProperty"},
            {"SourceActor", 0x68, "SoftObjectProperty"},
            {"SourceActorComponentClass", 0x88, "ClassProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetUObjectReaderPropertyRemap",
        }};
    };

    struct NiagaraDataInterfaceVector2DCurve
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVector2DCurve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceCurveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t XCurve = 0x70;
            static constexpr std::uintptr_t YCurve = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"XCurve", 0x70, "StructProperty"},
            {"YCurve", 0xB0, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceVector4Curve
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVector4Curve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceCurveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t XCurve = 0x70;
            static constexpr std::uintptr_t YCurve = 0xB0;
            static constexpr std::uintptr_t ZCurve = 0xF0;
            static constexpr std::uintptr_t WCurve = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"XCurve", 0x70, "StructProperty"},
            {"YCurve", 0xB0, "StructProperty"},
            {"ZCurve", 0xF0, "StructProperty"},
            {"WCurve", 0x130, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceVectorCurve
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVectorCurve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceCurveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t XCurve = 0x70;
            static constexpr std::uintptr_t YCurve = 0xB0;
            static constexpr std::uintptr_t ZCurve = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"XCurve", 0x70, "StructProperty"},
            {"YCurve", 0xB0, "StructProperty"},
            {"ZCurve", 0xF0, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceVectorField
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVectorField";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Field = 0x38;
            static constexpr std::uintptr_t bTileX = 0x40;
            static constexpr std::uintptr_t bTileY = 0x41;
            static constexpr std::uintptr_t bTileZ = 0x42;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Field", 0x38, "ObjectProperty"},
            {"bTileX", 0x40, "BoolProperty"},
            {"bTileY", 0x41, "BoolProperty"},
            {"bTileZ", 0x42, "BoolProperty"},
        }};
    };

    struct NiagaraDataInterfaceVirtualTexture
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVirtualTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x38;
            static constexpr std::uintptr_t TextureUserParameter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Texture", 0x38, "ObjectProperty"},
            {"TextureUserParameter", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceVirtualTextureSample
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVirtualTextureSample";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x38;
            static constexpr std::uintptr_t TextureUserParameter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Texture", 0x38, "ObjectProperty"},
            {"TextureUserParameter", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceVolumeCache
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVolumeCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeCache = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VolumeCache", 0x38, "ObjectProperty"},
        }};
    };

    struct NiagaraDataInterfaceVolumeTexture
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceVolumeTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t Texture = 0x38;
            static constexpr std::uintptr_t TextureUserParameter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Texture", 0x38, "ObjectProperty"},
            {"TextureUserParameter", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDataManager
    {
        static constexpr std::string_view Name = "NiagaraDataManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnReferencingSystemFinished",
        }};
    };

    struct NiagaraDataManager_StaticMesh
    {
        static constexpr std::string_view Name = "NiagaraDataManager_StaticMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataSetCompiledData
    {
        static constexpr std::string_view Name = "NiagaraDataSetCompiledData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Variables = 0x0;
            static constexpr std::uintptr_t VariableLayouts = 0x10;
            static constexpr std::uintptr_t ID = 0x20;
            static constexpr std::uintptr_t TotalFloatComponents = 0x28;
            static constexpr std::uintptr_t TotalInt32Components = 0x2C;
            static constexpr std::uintptr_t TotalHalfComponents = 0x30;
            static constexpr std::uintptr_t bRequiresPersistentIDs = 0x34;
            static constexpr std::uintptr_t SimTarget = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Variables", 0x0, "ArrayProperty"},
            {"VariableLayouts", 0x10, "ArrayProperty"},
            {"ID", 0x20, "StructProperty"},
            {"TotalFloatComponents", 0x28, "UInt32Property"},
            {"TotalInt32Components", 0x2C, "UInt32Property"},
            {"TotalHalfComponents", 0x30, "UInt32Property"},
            {"bRequiresPersistentIDs", 0x34, "BoolProperty"},
            {"SimTarget", 0x38, "EnumProperty"},
        }};
    };

    struct NiagaraDataSetID
    {
        static constexpr std::string_view Name = "NiagaraDataSetID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Type = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Type", 0x4, "EnumProperty"},
        }};
    };

    struct NiagaraDataSetProperties
    {
        static constexpr std::string_view Name = "NiagaraDataSetProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Variables = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"Variables", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraDebugHUDSettingsData
    {
        static constexpr std::string_view Name = "NiagaraDebugHUDSettingsData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bHudEnabled = 0x0;
            static constexpr std::uintptr_t bHudRenderingEnabled = 0x1;
            static constexpr std::uintptr_t bValidationEnabled = 0x2;
            static constexpr std::uintptr_t bOverviewEnabled = 0x3;
            static constexpr std::uintptr_t OverviewMode = 0x4;
            static constexpr std::uintptr_t OverviewSortMode = 0x8;
            static constexpr std::uintptr_t bIncludeCascade = 0xC;
            static constexpr std::uintptr_t bIncludeNiagara = 0xD;
            static constexpr std::uintptr_t bShowRegisteredComponents = 0xE;
            static constexpr std::uintptr_t bOverviewShowFilteredSystemOnly = 0xF;
            static constexpr std::uintptr_t bShowGlobalBudgetInfo = 0x10;
            static constexpr std::uintptr_t bFiltersEnabled = 0x11;
            static constexpr std::uintptr_t bSystemFilterEnabled = 0x12;
            static constexpr std::uintptr_t SystemFilter = 0x18;
            static constexpr std::uintptr_t bEmitterFilterEnabled = 0x28;
            static constexpr std::uintptr_t EmitterFilter = 0x30;
            static constexpr std::uintptr_t bActorFilterEnabled = 0x40;
            static constexpr std::uintptr_t ActorFilter = 0x48;
            static constexpr std::uintptr_t bComponentFilterEnabled = 0x58;
            static constexpr std::uintptr_t ComponentFilter = 0x60;
            static constexpr std::uintptr_t bValidateSystemSimulationDataBuffers = 0x70;
            static constexpr std::uintptr_t bValidateParticleDataBuffers = 0x71;
            static constexpr std::uintptr_t bValidationLogErrors = 0x72;
            static constexpr std::uintptr_t ValidationAttributeDisplayTruncate = 0x74;
            static constexpr std::uintptr_t SystemDebugVerbosity = 0x78;
            static constexpr std::uintptr_t SystemEmitterVerbosity = 0x7C;
            static constexpr std::uintptr_t DataInterfaceVerbosity = 0x80;
            static constexpr std::uintptr_t SystemVariables = 0x88;
            static constexpr std::uintptr_t bSystemShowActiveOnlyInWorld = 0x98;
            static constexpr std::uintptr_t bShowParticleVariables = 0x99;
            static constexpr std::uintptr_t ParticlesVariables = 0xA0;
            static constexpr std::uintptr_t bEnableGpuParticleReadback = 0xB0;
            static constexpr std::uintptr_t bShowParticleIndex = 0xB1;
            static constexpr std::uintptr_t bShowParticlesVariablesWithSystem = 0xB2;
            static constexpr std::uintptr_t bShowParticleVariablesVertical = 0xB3;
            static constexpr std::uintptr_t bUseMaxParticlesToDisplay = 0xB4;
            static constexpr std::uintptr_t MaxParticlesToDisplay = 0xB8;
            static constexpr std::uintptr_t bUseParticleDisplayClip = 0xBC;
            static constexpr std::uintptr_t ParticleDisplayClip = 0xC0;
            static constexpr std::uintptr_t bUseParticleDisplayCenterRadius = 0xD0;
            static constexpr std::uintptr_t ParticleDisplayCenterRadius = 0xD4;
            static constexpr std::uintptr_t PerfReportFrames = 0xD8;
            static constexpr std::uintptr_t PerfSampleMode = 0xDC;
            static constexpr std::uintptr_t PerfUnits = 0xE0;
            static constexpr std::uintptr_t bShowPerfColumGameThreadOnly = 0xE4;
            static constexpr std::uintptr_t PerfGraphMode = 0xE8;
            static constexpr std::uintptr_t PerfHistoryFrames = 0xEC;
            static constexpr std::uintptr_t bUsePerfGraphTimeRange = 0xF0;
            static constexpr std::uintptr_t PerfGraphTimeRange = 0xF4;
            static constexpr std::uintptr_t PerfGraphSize = 0xF8;
            static constexpr std::uintptr_t PerfGraphAxisColor = 0x108;
            static constexpr std::uintptr_t SmoothingWidth = 0x118;
            static constexpr std::uintptr_t OverviewFont = 0x11C;
            static constexpr std::uintptr_t OverviewLocation = 0x120;
            static constexpr std::uintptr_t SystemTextOptions = 0x130;
            static constexpr std::uintptr_t ParticleTextOptions = 0x148;
            static constexpr std::uintptr_t bDrawBoundsEnabled = 0x160;
            static constexpr std::uintptr_t bDrawBoundsWireframe = 0x161;
            static constexpr std::uintptr_t DrawBoundsAlpha = 0x164;
            static constexpr std::uintptr_t DefaultBackgroundColor = 0x168;
            static constexpr std::uintptr_t OverviewHeadingColor = 0x178;
            static constexpr std::uintptr_t OverviewDetailColor = 0x188;
            static constexpr std::uintptr_t OverviewDetailHighlightColor = 0x198;
            static constexpr std::uintptr_t InWorldErrorTextColor = 0x1A8;
            static constexpr std::uintptr_t InWorldTextColor = 0x1B8;
            static constexpr std::uintptr_t MessageInfoTextColor = 0x1C8;
            static constexpr std::uintptr_t MessageWarningTextColor = 0x1D8;
            static constexpr std::uintptr_t MessageErrorTextColor = 0x1E8;
            static constexpr std::uintptr_t SystemColorTableOpacity = 0x1F8;
            static constexpr std::uintptr_t SystemColorSeed = 0x1FC;
            static constexpr std::uintptr_t SystemColorHSVMin = 0x200;
            static constexpr std::uintptr_t SystemColorHSVMax = 0x218;
            static constexpr std::uintptr_t PlaybackMode = 0x230;
            static constexpr std::uintptr_t bPlaybackRateEnabled = 0x231;
            static constexpr std::uintptr_t PlaybackRate = 0x234;
            static constexpr std::uintptr_t bLoopEnabled = 0x238;
            static constexpr std::uintptr_t bLoopTimeEnabled = 0x239;
            static constexpr std::uintptr_t LoopTime = 0x23C;
            static constexpr std::uintptr_t PlaybackStepFrames = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 79> Properties{{
            {"bHudEnabled", 0x0, "BoolProperty"},
            {"bHudRenderingEnabled", 0x1, "BoolProperty"},
            {"bValidationEnabled", 0x2, "BoolProperty"},
            {"bOverviewEnabled", 0x3, "BoolProperty"},
            {"OverviewMode", 0x4, "EnumProperty"},
            {"OverviewSortMode", 0x8, "EnumProperty"},
            {"bIncludeCascade", 0xC, "BoolProperty"},
            {"bIncludeNiagara", 0xD, "BoolProperty"},
            {"bShowRegisteredComponents", 0xE, "BoolProperty"},
            {"bOverviewShowFilteredSystemOnly", 0xF, "BoolProperty"},
            {"bShowGlobalBudgetInfo", 0x10, "BoolProperty"},
            {"bFiltersEnabled", 0x11, "BoolProperty"},
            {"bSystemFilterEnabled", 0x12, "BoolProperty"},
            {"SystemFilter", 0x18, "StrProperty"},
            {"bEmitterFilterEnabled", 0x28, "BoolProperty"},
            {"EmitterFilter", 0x30, "StrProperty"},
            {"bActorFilterEnabled", 0x40, "BoolProperty"},
            {"ActorFilter", 0x48, "StrProperty"},
            {"bComponentFilterEnabled", 0x58, "BoolProperty"},
            {"ComponentFilter", 0x60, "StrProperty"},
            {"bValidateSystemSimulationDataBuffers", 0x70, "BoolProperty"},
            {"bValidateParticleDataBuffers", 0x71, "BoolProperty"},
            {"bValidationLogErrors", 0x72, "BoolProperty"},
            {"ValidationAttributeDisplayTruncate", 0x74, "IntProperty"},
            {"SystemDebugVerbosity", 0x78, "EnumProperty"},
            {"SystemEmitterVerbosity", 0x7C, "EnumProperty"},
            {"DataInterfaceVerbosity", 0x80, "EnumProperty"},
            {"SystemVariables", 0x88, "ArrayProperty"},
            {"bSystemShowActiveOnlyInWorld", 0x98, "BoolProperty"},
            {"bShowParticleVariables", 0x99, "BoolProperty"},
            {"ParticlesVariables", 0xA0, "ArrayProperty"},
            {"bEnableGpuParticleReadback", 0xB0, "BoolProperty"},
            {"bShowParticleIndex", 0xB1, "BoolProperty"},
            {"bShowParticlesVariablesWithSystem", 0xB2, "BoolProperty"},
            {"bShowParticleVariablesVertical", 0xB3, "BoolProperty"},
            {"bUseMaxParticlesToDisplay", 0xB4, "BoolProperty"},
            {"MaxParticlesToDisplay", 0xB8, "IntProperty"},
            {"bUseParticleDisplayClip", 0xBC, "BoolProperty"},
            {"ParticleDisplayClip", 0xC0, "StructProperty"},
            {"bUseParticleDisplayCenterRadius", 0xD0, "BoolProperty"},
            {"ParticleDisplayCenterRadius", 0xD4, "FloatProperty"},
            {"PerfReportFrames", 0xD8, "IntProperty"},
            {"PerfSampleMode", 0xDC, "EnumProperty"},
            {"PerfUnits", 0xE0, "EnumProperty"},
            {"bShowPerfColumGameThreadOnly", 0xE4, "BoolProperty"},
            {"PerfGraphMode", 0xE8, "EnumProperty"},
            {"PerfHistoryFrames", 0xEC, "IntProperty"},
            {"bUsePerfGraphTimeRange", 0xF0, "BoolProperty"},
            {"PerfGraphTimeRange", 0xF4, "FloatProperty"},
            {"PerfGraphSize", 0xF8, "StructProperty"},
            {"PerfGraphAxisColor", 0x108, "StructProperty"},
            {"SmoothingWidth", 0x118, "IntProperty"},
            {"OverviewFont", 0x11C, "EnumProperty"},
            {"OverviewLocation", 0x120, "StructProperty"},
            {"SystemTextOptions", 0x130, "StructProperty"},
            {"ParticleTextOptions", 0x148, "StructProperty"},
            {"bDrawBoundsEnabled", 0x160, "BoolProperty"},
            {"bDrawBoundsWireframe", 0x161, "BoolProperty"},
            {"DrawBoundsAlpha", 0x164, "FloatProperty"},
            {"DefaultBackgroundColor", 0x168, "StructProperty"},
            {"OverviewHeadingColor", 0x178, "StructProperty"},
            {"OverviewDetailColor", 0x188, "StructProperty"},
            {"OverviewDetailHighlightColor", 0x198, "StructProperty"},
            {"InWorldErrorTextColor", 0x1A8, "StructProperty"},
            {"InWorldTextColor", 0x1B8, "StructProperty"},
            {"MessageInfoTextColor", 0x1C8, "StructProperty"},
            {"MessageWarningTextColor", 0x1D8, "StructProperty"},
            {"MessageErrorTextColor", 0x1E8, "StructProperty"},
            {"SystemColorTableOpacity", 0x1F8, "FloatProperty"},
            {"SystemColorSeed", 0x1FC, "UInt32Property"},
            {"SystemColorHSVMin", 0x200, "StructProperty"},
            {"SystemColorHSVMax", 0x218, "StructProperty"},
            {"PlaybackMode", 0x230, "EnumProperty"},
            {"bPlaybackRateEnabled", 0x231, "BoolProperty"},
            {"PlaybackRate", 0x234, "FloatProperty"},
            {"bLoopEnabled", 0x238, "BoolProperty"},
            {"bLoopTimeEnabled", 0x239, "BoolProperty"},
            {"LoopTime", 0x23C, "FloatProperty"},
            {"PlaybackStepFrames", 0x240, "IntProperty"},
        }};
    };

    struct NiagaraDebugHUDVariable
    {
        static constexpr std::string_view Name = "NiagaraDebugHUDVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Name = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Name", 0x8, "StrProperty"},
        }};
    };

    struct NiagaraDebugHudTextOptions
    {
        static constexpr std::string_view Name = "NiagaraDebugHudTextOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Font = 0x0;
            static constexpr std::uintptr_t HorizontalAlignment = 0x4;
            static constexpr std::uintptr_t VerticalAlignment = 0x5;
            static constexpr std::uintptr_t ScreenOffset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Font", 0x0, "EnumProperty"},
            {"HorizontalAlignment", 0x4, "EnumProperty"},
            {"VerticalAlignment", 0x5, "EnumProperty"},
            {"ScreenOffset", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraDebuggerAcceptConnection
    {
        static constexpr std::string_view Name = "NiagaraDebuggerAcceptConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x0;
            static constexpr std::uintptr_t InstanceID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SessionID", 0x0, "StructProperty"},
            {"InstanceID", 0x10, "StructProperty"},
        }};
    };

    struct NiagaraDebuggerConnectionClosed
    {
        static constexpr std::string_view Name = "NiagaraDebuggerConnectionClosed";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x0;
            static constexpr std::uintptr_t InstanceID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SessionID", 0x0, "StructProperty"},
            {"InstanceID", 0x10, "StructProperty"},
        }};
    };

    struct NiagaraDebuggerExecuteConsoleCommand
    {
        static constexpr std::string_view Name = "NiagaraDebuggerExecuteConsoleCommand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Command = 0x0;
            static constexpr std::uintptr_t bRequiresWorld = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Command", 0x0, "StrProperty"},
            {"bRequiresWorld", 0x10, "BoolProperty"},
        }};
    };

    struct NiagaraDebuggerOutlinerUpdate
    {
        static constexpr std::string_view Name = "NiagaraDebuggerOutlinerUpdate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OutlinerData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutlinerData", 0x0, "StructProperty"},
        }};
    };

    struct NiagaraDebuggerRequestConnection
    {
        static constexpr std::string_view Name = "NiagaraDebuggerRequestConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionID = 0x0;
            static constexpr std::uintptr_t InstanceID = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SessionID", 0x0, "StructProperty"},
            {"InstanceID", 0x10, "StructProperty"},
        }};
    };

    struct NiagaraDecalRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraDecalRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x98;
            static constexpr std::uintptr_t MaterialParameterBinding = 0xA0;
            static constexpr std::uintptr_t SourceMode = 0xA8;
            static constexpr std::uintptr_t RendererVisibility = 0xAC;
            static constexpr std::uintptr_t DecalScreenSizeFade = 0xB0;
            static constexpr std::uintptr_t PositionBinding = 0xB4;
            static constexpr std::uintptr_t DecalOrientationBinding = 0xC8;
            static constexpr std::uintptr_t DecalSizeBinding = 0xDC;
            static constexpr std::uintptr_t DecalFadeBinding = 0xF0;
            static constexpr std::uintptr_t DecalSortOrderBinding = 0x104;
            static constexpr std::uintptr_t DecalColorBinding = 0x118;
            static constexpr std::uintptr_t DecalVisibleBinding = 0x12C;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0x140;
            static constexpr std::uintptr_t MaterialParameters = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Material", 0x98, "ObjectProperty"},
            {"MaterialParameterBinding", 0xA0, "StructProperty"},
            {"SourceMode", 0xA8, "EnumProperty"},
            {"RendererVisibility", 0xAC, "IntProperty"},
            {"DecalScreenSizeFade", 0xB0, "FloatProperty"},
            {"PositionBinding", 0xB4, "StructProperty"},
            {"DecalOrientationBinding", 0xC8, "StructProperty"},
            {"DecalSizeBinding", 0xDC, "StructProperty"},
            {"DecalFadeBinding", 0xF0, "StructProperty"},
            {"DecalSortOrderBinding", 0x104, "StructProperty"},
            {"DecalColorBinding", 0x118, "StructProperty"},
            {"DecalVisibleBinding", 0x12C, "StructProperty"},
            {"RendererVisibilityTagBinding", 0x140, "StructProperty"},
            {"MaterialParameters", 0x158, "StructProperty"},
        }};
    };

    struct NiagaraDetailsLevelScaleOverrides
    {
        static constexpr std::string_view Name = "NiagaraDetailsLevelScaleOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Low = 0x0;
            static constexpr std::uintptr_t Medium = 0x4;
            static constexpr std::uintptr_t High = 0x8;
            static constexpr std::uintptr_t Epic = 0xC;
            static constexpr std::uintptr_t Cine = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Low", 0x0, "FloatProperty"},
            {"Medium", 0x4, "FloatProperty"},
            {"High", 0x8, "FloatProperty"},
            {"Epic", 0xC, "FloatProperty"},
            {"Cine", 0x10, "FloatProperty"},
        }};
    };

    struct NiagaraDeviceProfileStateEntry
    {
        static constexpr std::string_view Name = "NiagaraDeviceProfileStateEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileName = 0x0;
            static constexpr std::uintptr_t QualityLevelMask = 0x4;
            static constexpr std::uintptr_t SetQualityLevelMask = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProfileName", 0x0, "NameProperty"},
            {"QualityLevelMask", 0x4, "UInt32Property"},
            {"SetQualityLevelMask", 0x8, "UInt32Property"},
        }};
    };

    struct NiagaraDistributionBase
    {
        static constexpr std::string_view Name = "NiagaraDistributionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x8;
            static constexpr std::uintptr_t AddressMode = 0x9;
            static constexpr std::uintptr_t InterpolationMode = 0x9;
            static constexpr std::uintptr_t LookupValueMode = 0xA;
            static constexpr std::uintptr_t ParameterBinding = 0xC;
            static constexpr std::uintptr_t ParameterExpression = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Mode", 0x8, "EnumProperty"},
            {"AddressMode", 0x9, "BoolProperty"},
            {"InterpolationMode", 0x9, "BoolProperty"},
            {"LookupValueMode", 0xA, "ByteProperty"},
            {"ParameterBinding", 0xC, "StructProperty"},
            {"ParameterExpression", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraDistributionColor
    {
        static constexpr std::string_view Name = "NiagaraDistributionColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x28;
            static constexpr std::uintptr_t ValuesTimeRange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x28, "ArrayProperty"},
            {"ValuesTimeRange", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDistributionCurveFloat
    {
        static constexpr std::string_view Name = "NiagaraDistributionCurveFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x28;
            static constexpr std::uintptr_t ValuesTimeRange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x28, "ArrayProperty"},
            {"ValuesTimeRange", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDistributionCurveVector3
    {
        static constexpr std::string_view Name = "NiagaraDistributionCurveVector3";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x28;
            static constexpr std::uintptr_t ValuesTimeRange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x28, "ArrayProperty"},
            {"ValuesTimeRange", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDistributionFloat
    {
        static constexpr std::string_view Name = "NiagaraDistributionFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x28;
            static constexpr std::uintptr_t ValuesTimeRange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x28, "ArrayProperty"},
            {"ValuesTimeRange", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDistributionPosition
    {
        static constexpr std::string_view Name = "NiagaraDistributionPosition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionVector3";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x28;
            static constexpr std::uintptr_t ValuesTimeRange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x28, "ArrayProperty"},
            {"ValuesTimeRange", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDistributionRangeColor
    {
        static constexpr std::string_view Name = "NiagaraDistributionRangeColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x28;
            static constexpr std::uintptr_t max = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x28, "StructProperty"},
            {"max", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDistributionRangeFloat
    {
        static constexpr std::string_view Name = "NiagaraDistributionRangeFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x28;
            static constexpr std::uintptr_t max = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x28, "FloatProperty"},
            {"max", 0x2C, "FloatProperty"},
        }};
    };

    struct NiagaraDistributionRangeInt
    {
        static constexpr std::string_view Name = "NiagaraDistributionRangeInt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x0;
            static constexpr std::uintptr_t ParameterBinding = 0x4;
            static constexpr std::uintptr_t ParameterExpression = 0x10;
            static constexpr std::uintptr_t min = 0x20;
            static constexpr std::uintptr_t max = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Mode", 0x0, "EnumProperty"},
            {"ParameterBinding", 0x4, "StructProperty"},
            {"ParameterExpression", 0x10, "StructProperty"},
            {"min", 0x20, "IntProperty"},
            {"max", 0x24, "IntProperty"},
        }};
    };

    struct NiagaraDistributionRangeRotator
    {
        static constexpr std::string_view Name = "NiagaraDistributionRangeRotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x28;
            static constexpr std::uintptr_t max = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x28, "StructProperty"},
            {"max", 0x34, "StructProperty"},
        }};
    };

    struct NiagaraDistributionRangeVector2
    {
        static constexpr std::string_view Name = "NiagaraDistributionRangeVector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x28;
            static constexpr std::uintptr_t max = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x28, "StructProperty"},
            {"max", 0x30, "StructProperty"},
        }};
    };

    struct NiagaraDistributionRangeVector3
    {
        static constexpr std::string_view Name = "NiagaraDistributionRangeVector3";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x28;
            static constexpr std::uintptr_t max = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x28, "StructProperty"},
            {"max", 0x34, "StructProperty"},
        }};
    };

    struct NiagaraDistributionRangeVector4
    {
        static constexpr std::string_view Name = "NiagaraDistributionRangeVector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x30;
            static constexpr std::uintptr_t max = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x30, "StructProperty"},
            {"max", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraDistributionVector2
    {
        static constexpr std::string_view Name = "NiagaraDistributionVector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x28;
            static constexpr std::uintptr_t ValuesTimeRange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x28, "ArrayProperty"},
            {"ValuesTimeRange", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDistributionVector3
    {
        static constexpr std::string_view Name = "NiagaraDistributionVector3";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraDistributionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Values = 0x28;
            static constexpr std::uintptr_t ValuesTimeRange = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Values", 0x28, "ArrayProperty"},
            {"ValuesTimeRange", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraDouble
    {
        static constexpr std::string_view Name = "NiagaraDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "DoubleProperty"},
        }};
    };

    struct NiagaraDynamicMeshMaterial
    {
        static constexpr std::string_view Name = "NiagaraDynamicMeshMaterial";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x0;
            static constexpr std::uintptr_t MaterialUserParamBinding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Material", 0x0, "ObjectProperty"},
            {"MaterialUserParamBinding", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraDynamicMeshSection
    {
        static constexpr std::string_view Name = "NiagaraDynamicMeshSection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumTriangles = 0x0;
            static constexpr std::uintptr_t MaterialIndex = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NumTriangles", 0x0, "IntProperty"},
            {"MaterialIndex", 0x4, "IntProperty"},
        }};
    };

    struct NiagaraEditorDataBase
    {
        static constexpr std::string_view Name = "NiagaraEditorDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraEditorParametersAdapterBase
    {
        static constexpr std::string_view Name = "NiagaraEditorParametersAdapterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraEditorPreviewActor
    {
        static constexpr std::string_view Name = "NiagaraEditorPreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MotionDuration = 0x278;
            static constexpr std::uintptr_t PlaybackType = 0x280;
            static constexpr std::uintptr_t MotionType = 0x284;
            static constexpr std::uintptr_t ShapeTension = 0x288;
            static constexpr std::uintptr_t ShapeScale = 0x290;
            static constexpr std::uintptr_t ShapeRotation = 0x298;
            static constexpr std::uintptr_t CustomShapePoints = 0x2B0;
            static constexpr std::uintptr_t CircleRadius = 0x2C0;
            static constexpr std::uintptr_t CircleEndRadius = 0x2C8;
            static constexpr std::uintptr_t CircleRotationRate = 0x2D8;
            static constexpr std::uintptr_t SquareSize = 0x2E8;
            static constexpr std::uintptr_t TriangleSize = 0x2F8;
            static constexpr std::uintptr_t RotationMode = 0x308;
            static constexpr std::uintptr_t NiagaraComponent = 0x310;
            static constexpr std::uintptr_t ArrowComponent = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"MotionDuration", 0x278, "DoubleProperty"},
            {"PlaybackType", 0x280, "EnumProperty"},
            {"MotionType", 0x284, "EnumProperty"},
            {"ShapeTension", 0x288, "DoubleProperty"},
            {"ShapeScale", 0x290, "DoubleProperty"},
            {"ShapeRotation", 0x298, "StructProperty"},
            {"CustomShapePoints", 0x2B0, "ArrayProperty"},
            {"CircleRadius", 0x2C0, "DoubleProperty"},
            {"CircleEndRadius", 0x2C8, "OptionalProperty"},
            {"CircleRotationRate", 0x2D8, "OptionalProperty"},
            {"SquareSize", 0x2E8, "StructProperty"},
            {"TriangleSize", 0x2F8, "StructProperty"},
            {"RotationMode", 0x308, "EnumProperty"},
            {"NiagaraComponent", 0x310, "ObjectProperty"},
            {"ArrowComponent", 0x318, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CalculateLocation",
            "CalculateRotation",
        }};
    };

    struct NiagaraEffectType
    {
        static constexpr std::string_view Name = "NiagaraEffectType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowCullingForLocalPlayers = 0x28;
            static constexpr std::uintptr_t UpdateFrequency = 0x2C;
            static constexpr std::uintptr_t CullReaction = 0x30;
            static constexpr std::uintptr_t SignificanceHandler = 0x38;
            static constexpr std::uintptr_t DetailLevelScalabilitySettings = 0x40;
            static constexpr std::uintptr_t SystemScalabilitySettings = 0x50;
            static constexpr std::uintptr_t EmitterScalabilitySettings = 0x60;
            static constexpr std::uintptr_t ReadinessSettings = 0x70;
            static constexpr std::uintptr_t ReadinessProfile = 0x78;
            static constexpr std::uintptr_t PerformanceBaselineController = 0x88;
            static constexpr std::uintptr_t PerfBaselineStats = 0x90;
            static constexpr std::uintptr_t PerfBaselineVersion = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bAllowCullingForLocalPlayers", 0x28, "BoolProperty"},
            {"UpdateFrequency", 0x2C, "EnumProperty"},
            {"CullReaction", 0x30, "EnumProperty"},
            {"SignificanceHandler", 0x38, "ObjectProperty"},
            {"DetailLevelScalabilitySettings", 0x40, "ArrayProperty"},
            {"SystemScalabilitySettings", 0x50, "StructProperty"},
            {"EmitterScalabilitySettings", 0x60, "StructProperty"},
            {"ReadinessSettings", 0x70, "ObjectProperty"},
            {"ReadinessProfile", 0x78, "StructProperty"},
            {"PerformanceBaselineController", 0x88, "ObjectProperty"},
            {"PerfBaselineStats", 0x90, "StructProperty"},
            {"PerfBaselineVersion", 0xA0, "StructProperty"},
        }};
    };

    struct NiagaraEmitter
    {
        static constexpr std::string_view Name = "NiagaraEmitter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraEmitterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExposedVersion = 0x40;
            static constexpr std::uintptr_t bVersioningEnabled = 0x50;
            static constexpr std::uintptr_t VersionData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ExposedVersion", 0x40, "StructProperty"},
            {"bVersioningEnabled", 0x50, "BoolProperty"},
            {"VersionData", 0x58, "ArrayProperty"},
        }};
    };

    struct NiagaraEmitterBase
    {
        static constexpr std::string_view Name = "NiagaraEmitterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueEmitterName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UniqueEmitterName", 0x28, "StrProperty"},
        }};
    };

    struct NiagaraEmitterCompiledData
    {
        static constexpr std::string_view Name = "NiagaraEmitterCompiledData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnAttributes = 0x0;
            static constexpr std::uintptr_t EmitterSpawnIntervalVar = 0x10;
            static constexpr std::uintptr_t EmitterInterpSpawnStartDTVar = 0x28;
            static constexpr std::uintptr_t EmitterSpawnGroupVar = 0x40;
            static constexpr std::uintptr_t EmitterAgeVar = 0x58;
            static constexpr std::uintptr_t EmitterRandomSeedVar = 0x70;
            static constexpr std::uintptr_t EmitterInstanceSeedVar = 0x88;
            static constexpr std::uintptr_t EmitterTotalSpawnedParticlesVar = 0xA0;
            static constexpr std::uintptr_t DataSetCompiledData = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SpawnAttributes", 0x0, "ArrayProperty"},
            {"EmitterSpawnIntervalVar", 0x10, "StructProperty"},
            {"EmitterInterpSpawnStartDTVar", 0x28, "StructProperty"},
            {"EmitterSpawnGroupVar", 0x40, "StructProperty"},
            {"EmitterAgeVar", 0x58, "StructProperty"},
            {"EmitterRandomSeedVar", 0x70, "StructProperty"},
            {"EmitterInstanceSeedVar", 0x88, "StructProperty"},
            {"EmitterTotalSpawnedParticlesVar", 0xA0, "StructProperty"},
            {"DataSetCompiledData", 0xB8, "StructProperty"},
        }};
    };

    struct NiagaraEmitterHandle
    {
        static constexpr std::string_view Name = "NiagaraEmitterHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ID = 0x4;
            static constexpr std::uintptr_t IdName = 0x14;
            static constexpr std::uintptr_t bIsEnabled = 0x18;
            static constexpr std::uintptr_t EmitterMode = 0x19;
            static constexpr std::uintptr_t VersionedInstance = 0x20;
            static constexpr std::uintptr_t StatelessEmitter = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ID", 0x4, "StructProperty"},
            {"IdName", 0x14, "NameProperty"},
            {"bIsEnabled", 0x18, "BoolProperty"},
            {"EmitterMode", 0x19, "EnumProperty"},
            {"VersionedInstance", 0x20, "StructProperty"},
            {"StatelessEmitter", 0x38, "ObjectProperty"},
        }};
    };

    struct NiagaraEmitterID
    {
        static constexpr std::string_view Name = "NiagaraEmitterID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "IntProperty"},
        }};
    };

    struct NiagaraEmitterScalabilityOverride
    {
        static constexpr std::string_view Name = "NiagaraEmitterScalabilityOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraEmitterScalabilitySettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideSpawnCountScale = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bOverrideSpawnCountScale", 0x38, "BoolProperty"},
        }};
    };

    struct NiagaraEmitterScalabilityOverrides
    {
        static constexpr std::string_view Name = "NiagaraEmitterScalabilityOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Overrides = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overrides", 0x0, "ArrayProperty"},
        }};
    };

    struct NiagaraEmitterScalabilitySettings
    {
        static constexpr std::string_view Name = "NiagaraEmitterScalabilitySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Platforms = 0x0;
            static constexpr std::uintptr_t bScaleSpawnCount = 0x30;
            static constexpr std::uintptr_t SpawnCountScale = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Platforms", 0x0, "StructProperty"},
            {"bScaleSpawnCount", 0x30, "BoolProperty"},
            {"SpawnCountScale", 0x34, "FloatProperty"},
        }};
    };

    struct NiagaraEmitterScalabilitySettingsArray
    {
        static constexpr std::string_view Name = "NiagaraEmitterScalabilitySettingsArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x0, "ArrayProperty"},
        }};
    };

    struct NiagaraEmitterScriptProperties
    {
        static constexpr std::string_view Name = "NiagaraEmitterScriptProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Script = 0x0;
            static constexpr std::uintptr_t EventReceivers = 0x8;
            static constexpr std::uintptr_t EventGenerators = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Script", 0x0, "ObjectProperty"},
            {"EventReceivers", 0x8, "ArrayProperty"},
            {"EventGenerators", 0x18, "ArrayProperty"},
        }};
    };

    struct NiagaraEmitterStateData
    {
        static constexpr std::string_view Name = "NiagaraEmitterStateData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InactiveResponse = 0x0;
            static constexpr std::uintptr_t LoopBehavior = 0x1;
            static constexpr std::uintptr_t LoopCount = 0x4;
            static constexpr std::uintptr_t LoopDurationMode = 0x8;
            static constexpr std::uintptr_t LoopDuration = 0x10;
            static constexpr std::uintptr_t LoopDelay = 0x40;
            static constexpr std::uintptr_t bDelayFirstLoopOnly = 0x70;
            static constexpr std::uintptr_t bEnableDistanceCulling = 0x70;
            static constexpr std::uintptr_t bEnableVisibilityCulling = 0x70;
            static constexpr std::uintptr_t bLoopDelayEnabled = 0x70;
            static constexpr std::uintptr_t bMaxDistanceEnabled = 0x70;
            static constexpr std::uintptr_t bMinDistanceEnabled = 0x70;
            static constexpr std::uintptr_t bRecalculateDelayEachLoop = 0x70;
            static constexpr std::uintptr_t bRecalculateDurationEachLoop = 0x70;
            static constexpr std::uintptr_t bResetAgeOnAwaken = 0x71;
            static constexpr std::uintptr_t MinDistance = 0x74;
            static constexpr std::uintptr_t MinDistanceReaction = 0x78;
            static constexpr std::uintptr_t MaxDistance = 0x7C;
            static constexpr std::uintptr_t MaxDistanceReaction = 0x80;
            static constexpr std::uintptr_t VisibilityCullReaction = 0x84;
            static constexpr std::uintptr_t VisibilityCullDelay = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"InactiveResponse", 0x0, "EnumProperty"},
            {"LoopBehavior", 0x1, "EnumProperty"},
            {"LoopCount", 0x4, "IntProperty"},
            {"LoopDurationMode", 0x8, "EnumProperty"},
            {"LoopDuration", 0x10, "StructProperty"},
            {"LoopDelay", 0x40, "StructProperty"},
            {"bDelayFirstLoopOnly", 0x70, "BoolProperty"},
            {"bEnableDistanceCulling", 0x70, "BoolProperty"},
            {"bEnableVisibilityCulling", 0x70, "BoolProperty"},
            {"bLoopDelayEnabled", 0x70, "BoolProperty"},
            {"bMaxDistanceEnabled", 0x70, "BoolProperty"},
            {"bMinDistanceEnabled", 0x70, "BoolProperty"},
            {"bRecalculateDelayEachLoop", 0x70, "BoolProperty"},
            {"bRecalculateDurationEachLoop", 0x70, "BoolProperty"},
            {"bResetAgeOnAwaken", 0x71, "BoolProperty"},
            {"MinDistance", 0x74, "FloatProperty"},
            {"MinDistanceReaction", 0x78, "EnumProperty"},
            {"MaxDistance", 0x7C, "FloatProperty"},
            {"MaxDistanceReaction", 0x80, "EnumProperty"},
            {"VisibilityCullReaction", 0x84, "EnumProperty"},
            {"VisibilityCullDelay", 0x88, "FloatProperty"},
        }};
    };

    struct NiagaraEnumParameterMetaData
    {
        static constexpr std::string_view Name = "NiagaraEnumParameterMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideName = 0x0;
            static constexpr std::uintptr_t IconOverride = 0x8;
            static constexpr std::uintptr_t bUseColorOverride = 0x10;
            static constexpr std::uintptr_t ColorOverride = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OverrideName", 0x0, "NameProperty"},
            {"IconOverride", 0x8, "ObjectProperty"},
            {"bUseColorOverride", 0x10, "BoolProperty"},
            {"ColorOverride", 0x14, "StructProperty"},
        }};
    };

    struct NiagaraEventGeneratorProperties
    {
        static constexpr std::string_view Name = "NiagaraEventGeneratorProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxEventsPerFrame = 0x0;
            static constexpr std::uintptr_t ID = 0x4;
            static constexpr std::uintptr_t DataSetCompiledData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxEventsPerFrame", 0x0, "IntProperty"},
            {"ID", 0x4, "NameProperty"},
            {"DataSetCompiledData", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraEventReceiverEmitterAction
    {
        static constexpr std::string_view Name = "NiagaraEventReceiverEmitterAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraEventReceiverEmitterAction_SpawnParticles
    {
        static constexpr std::string_view Name = "NiagaraEventReceiverEmitterAction_SpawnParticles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraEventReceiverEmitterAction";
        struct Offsets
        {
            static constexpr std::uintptr_t NumParticles = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumParticles", 0x28, "UInt32Property"},
        }};
    };

    struct NiagaraEventReceiverProperties
    {
        static constexpr std::string_view Name = "NiagaraEventReceiverProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t SourceEventGenerator = 0x4;
            static constexpr std::uintptr_t SourceEmitter = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"SourceEventGenerator", 0x4, "NameProperty"},
            {"SourceEmitter", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraEventScriptProperties
    {
        static constexpr std::string_view Name = "NiagaraEventScriptProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraEmitterScriptProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionMode = 0x28;
            static constexpr std::uintptr_t SpawnNumber = 0x2C;
            static constexpr std::uintptr_t MaxEventsPerFrame = 0x30;
            static constexpr std::uintptr_t SourceEmitterID = 0x34;
            static constexpr std::uintptr_t SourceEventName = 0x44;
            static constexpr std::uintptr_t bRandomSpawnNumber = 0x48;
            static constexpr std::uintptr_t MinSpawnNumber = 0x4C;
            static constexpr std::uintptr_t UpdateAttributeInitialValues = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionMode", 0x28, "EnumProperty"},
            {"SpawnNumber", 0x2C, "UInt32Property"},
            {"MaxEventsPerFrame", 0x30, "UInt32Property"},
            {"SourceEmitterID", 0x34, "StructProperty"},
            {"SourceEventName", 0x44, "NameProperty"},
            {"bRandomSpawnNumber", 0x48, "BoolProperty"},
            {"MinSpawnNumber", 0x4C, "UInt32Property"},
            {"UpdateAttributeInitialValues", 0x50, "BoolProperty"},
        }};
    };

    struct NiagaraExternalUObjectInfo
    {
        static constexpr std::string_view Name = "NiagaraExternalUObjectInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Variable = 0x0;
            static constexpr std::uintptr_t ExternalName = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Variable", 0x0, "StructProperty"},
            {"ExternalName", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraFloat
    {
        static constexpr std::string_view Name = "NiagaraFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "FloatProperty"},
        }};
    };

    struct NiagaraFunctionLibrary
    {
        static constexpr std::string_view Name = "NiagaraFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 22> FunctionNames{{
            "AcquireNiagaraGPURayTracedCollisionGroup",
            "CreateNiagaraParameterCollectionInstance",
            "GetAllEmitters",
            "GetAllUserParameters",
            "GetNiagaraParameterCollection",
            "OverrideSystemUserVariableSkeletalMeshComponent",
            "OverrideSystemUserVariableStaticMesh",
            "OverrideSystemUserVariableStaticMeshComponent",
            "ReleaseNiagaraGPURayTracedCollisionGroup",
            "SetActorNiagaraGPURayTracedCollisionGroup",
            "SetComponentNiagaraGPURayTracedCollisionGroup",
            "SetSceneCapture2DDataInterfaceManagedMode",
            "SetSkeletalMeshDataInterfaceFilteredBones",
            "SetSkeletalMeshDataInterfaceFilteredSockets",
            "SetSkeletalMeshDataInterfaceSamplingRegions",
            "SetTexture2DArrayObject",
            "SetTextureObject",
            "SetVolumeTextureObject",
            "SpawnSystemAtLocation",
            "SpawnSystemAtLocationWithParams",
            "SpawnSystemAttached",
            "SpawnSystemAttachedWithParams",
        }};
    };

    struct NiagaraFunctionSignature
    {
        static constexpr std::string_view Name = "NiagaraFunctionSignature";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Inputs = 0x8;
            static constexpr std::uintptr_t Outputs = 0x18;
            static constexpr std::uintptr_t OwnerName = 0x28;
            static constexpr std::uintptr_t bExperimental = 0x2C;
            static constexpr std::uintptr_t bMemberFunction = 0x2C;
            static constexpr std::uintptr_t bReadFunction = 0x2C;
            static constexpr std::uintptr_t bRequiresContext = 0x2C;
            static constexpr std::uintptr_t bRequiresExecPin = 0x2C;
            static constexpr std::uintptr_t bSupportsCPU = 0x2C;
            static constexpr std::uintptr_t bSupportsGPU = 0x2C;
            static constexpr std::uintptr_t bWriteFunction = 0x2C;
            static constexpr std::uintptr_t bHidden = 0x2D;
            static constexpr std::uintptr_t bIsCompileTagGenerator = 0x2D;
            static constexpr std::uintptr_t bSoftDeprecatedFunction = 0x2D;
            static constexpr std::uintptr_t ModuleUsageBitmask = 0x30;
            static constexpr std::uintptr_t MiscUsageBitMask = 0x34;
            static constexpr std::uintptr_t ContextStageIndex = 0x38;
            static constexpr std::uintptr_t RequiredInputs = 0x3C;
            static constexpr std::uintptr_t RequiredOutputs = 0x3E;
            static constexpr std::uintptr_t FunctionSpecifiers = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Inputs", 0x8, "ArrayProperty"},
            {"Outputs", 0x18, "ArrayProperty"},
            {"OwnerName", 0x28, "NameProperty"},
            {"bExperimental", 0x2C, "BoolProperty"},
            {"bMemberFunction", 0x2C, "BoolProperty"},
            {"bReadFunction", 0x2C, "BoolProperty"},
            {"bRequiresContext", 0x2C, "BoolProperty"},
            {"bRequiresExecPin", 0x2C, "BoolProperty"},
            {"bSupportsCPU", 0x2C, "BoolProperty"},
            {"bSupportsGPU", 0x2C, "BoolProperty"},
            {"bWriteFunction", 0x2C, "BoolProperty"},
            {"bHidden", 0x2D, "BoolProperty"},
            {"bIsCompileTagGenerator", 0x2D, "BoolProperty"},
            {"bSoftDeprecatedFunction", 0x2D, "BoolProperty"},
            {"ModuleUsageBitmask", 0x30, "IntProperty"},
            {"MiscUsageBitMask", 0x34, "UInt16Property"},
            {"ContextStageIndex", 0x38, "IntProperty"},
            {"RequiredInputs", 0x3C, "Int16Property"},
            {"RequiredOutputs", 0x3E, "Int16Property"},
            {"FunctionSpecifiers", 0x40, "MapProperty"},
        }};
    };

    struct NiagaraGlobalBudgetScaling
    {
        static constexpr std::string_view Name = "NiagaraGlobalBudgetScaling";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bCullByGlobalBudget = 0x0;
            static constexpr std::uintptr_t bScaleMaxDistanceByGlobalBudgetUse = 0x0;
            static constexpr std::uintptr_t bScaleMaxInstanceCountByGlobalBudgetUse = 0x0;
            static constexpr std::uintptr_t bScaleSystemInstanceCountByGlobalBudgetUse = 0x0;
            static constexpr std::uintptr_t MaxGlobalBudgetUsage = 0x4;
            static constexpr std::uintptr_t MaxDistanceScaleByGlobalBudgetUse = 0x8;
            static constexpr std::uintptr_t MaxInstanceCountScaleByGlobalBudgetUse = 0x18;
            static constexpr std::uintptr_t MaxSystemInstanceCountScaleByGlobalBudgetUse = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bCullByGlobalBudget", 0x0, "BoolProperty"},
            {"bScaleMaxDistanceByGlobalBudgetUse", 0x0, "BoolProperty"},
            {"bScaleMaxInstanceCountByGlobalBudgetUse", 0x0, "BoolProperty"},
            {"bScaleSystemInstanceCountByGlobalBudgetUse", 0x0, "BoolProperty"},
            {"MaxGlobalBudgetUsage", 0x4, "FloatProperty"},
            {"MaxDistanceScaleByGlobalBudgetUse", 0x8, "StructProperty"},
            {"MaxInstanceCountScaleByGlobalBudgetUse", 0x18, "StructProperty"},
            {"MaxSystemInstanceCountScaleByGlobalBudgetUse", 0x28, "StructProperty"},
        }};
    };

    struct NiagaraGraphViewSettings
    {
        static constexpr std::string_view Name = "NiagaraGraphViewSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Zoom = 0x8;
            static constexpr std::uintptr_t bIsValid = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Zoom", 0x8, "FloatProperty"},
            {"bIsValid", 0xC, "BoolProperty"},
        }};
    };

    struct NiagaraHalf
    {
        static constexpr std::string_view Name = "NiagaraHalf";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt16Property"},
        }};
    };

    struct NiagaraHalfVector2
    {
        static constexpr std::string_view Name = "NiagaraHalfVector2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "UInt16Property"},
            {"Y", 0x2, "UInt16Property"},
        }};
    };

    struct NiagaraHalfVector3
    {
        static constexpr std::string_view Name = "NiagaraHalfVector3";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x2;
            static constexpr std::uintptr_t Z = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "UInt16Property"},
            {"Y", 0x2, "UInt16Property"},
            {"Z", 0x4, "UInt16Property"},
        }};
    };

    struct NiagaraHalfVector4
    {
        static constexpr std::string_view Name = "NiagaraHalfVector4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x2;
            static constexpr std::uintptr_t Z = 0x4;
            static constexpr std::uintptr_t W = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"X", 0x0, "UInt16Property"},
            {"Y", 0x2, "UInt16Property"},
            {"Z", 0x4, "UInt16Property"},
            {"W", 0x6, "UInt16Property"},
        }};
    };

    struct NiagaraID
    {
        static constexpr std::string_view Name = "NiagaraID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t AcquireTag = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Index", 0x0, "IntProperty"},
            {"AcquireTag", 0x4, "IntProperty"},
        }};
    };

    struct NiagaraInlineDynamicInputFormatToken
    {
        static constexpr std::string_view Name = "NiagaraInlineDynamicInputFormatToken";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraInputConditionMetadata
    {
        static constexpr std::string_view Name = "NiagaraInputConditionMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputName = 0x0;
            static constexpr std::uintptr_t TargetValues = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputName", 0x0, "NameProperty"},
            {"TargetValues", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraInputParameterCustomization
    {
        static constexpr std::string_view Name = "NiagaraInputParameterCustomization";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetType = 0x0;
            static constexpr std::uintptr_t bHasMinValue = 0x1;
            static constexpr std::uintptr_t MinValue = 0x4;
            static constexpr std::uintptr_t bHasMaxValue = 0x8;
            static constexpr std::uintptr_t MaxValue = 0xC;
            static constexpr std::uintptr_t bHasStepWidth = 0x10;
            static constexpr std::uintptr_t StepWidth = 0x14;
            static constexpr std::uintptr_t InputDropdownValues = 0x18;
            static constexpr std::uintptr_t EnumStyleDropdownValues = 0x28;
            static constexpr std::uintptr_t MaxSegmentsPerRow = 0x38;
            static constexpr std::uintptr_t SegmentValueOverrides = 0x40;
            static constexpr std::uintptr_t bBroadcastValueChangesOnCommitOnly = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"WidgetType", 0x0, "EnumProperty"},
            {"bHasMinValue", 0x1, "BoolProperty"},
            {"MinValue", 0x4, "FloatProperty"},
            {"bHasMaxValue", 0x8, "BoolProperty"},
            {"MaxValue", 0xC, "FloatProperty"},
            {"bHasStepWidth", 0x10, "BoolProperty"},
            {"StepWidth", 0x14, "FloatProperty"},
            {"InputDropdownValues", 0x18, "ArrayProperty"},
            {"EnumStyleDropdownValues", 0x28, "ArrayProperty"},
            {"MaxSegmentsPerRow", 0x38, "IntProperty"},
            {"SegmentValueOverrides", 0x40, "ArrayProperty"},
            {"bBroadcastValueChangesOnCommitOnly", 0x50, "BoolProperty"},
        }};
    };

    struct NiagaraInt32
    {
        static constexpr std::string_view Name = "NiagaraInt32";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "IntProperty"},
        }};
    };

    struct NiagaraLensEffectBase
    {
        static constexpr std::string_view Name = "NiagaraLensEffectBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraActor";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredRelativeTransform = 0x290;
            static constexpr std::uintptr_t BaseAuthoredFOV = 0x2F0;
            static constexpr std::uintptr_t bAllowMultipleInstances = 0x2F4;
            static constexpr std::uintptr_t bResetWhenRetriggered = 0x2F4;
            static constexpr std::uintptr_t EmittersToTreatAsSame = 0x2F8;
            static constexpr std::uintptr_t OwningCameraManager = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DesiredRelativeTransform", 0x290, "StructProperty"},
            {"BaseAuthoredFOV", 0x2F0, "FloatProperty"},
            {"bAllowMultipleInstances", 0x2F4, "BoolProperty"},
            {"bResetWhenRetriggered", 0x2F4, "BoolProperty"},
            {"EmittersToTreatAsSame", 0x2F8, "ArrayProperty"},
            {"OwningCameraManager", 0x308, "ObjectProperty"},
        }};
    };

    struct NiagaraLightRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraLightRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMode = 0x98;
            static constexpr std::uintptr_t bAffectsTranslucency = 0x9C;
            static constexpr std::uintptr_t bAllowMegaLights = 0x9C;
            static constexpr std::uintptr_t bAlphaScalesBrightness = 0x9C;
            static constexpr std::uintptr_t bMegaLightsCastShadows = 0x9C;
            static constexpr std::uintptr_t bOverrideInverseExposureBlend = 0x9C;
            static constexpr std::uintptr_t bUseInverseSquaredFalloff = 0x9C;
            static constexpr std::uintptr_t RadiusScale = 0xA0;
            static constexpr std::uintptr_t DefaultExponent = 0xA4;
            static constexpr std::uintptr_t SpecularScale = 0xA8;
            static constexpr std::uintptr_t DiffuseScale = 0xAC;
            static constexpr std::uintptr_t ColorAdd = 0xB0;
            static constexpr std::uintptr_t InverseExposureBlend = 0xBC;
            static constexpr std::uintptr_t RendererVisibility = 0xC0;
            static constexpr std::uintptr_t LightRenderingEnabledBinding = 0xC4;
            static constexpr std::uintptr_t LightExponentBinding = 0xD8;
            static constexpr std::uintptr_t PositionBinding = 0xEC;
            static constexpr std::uintptr_t ColorBinding = 0x100;
            static constexpr std::uintptr_t RadiusBinding = 0x114;
            static constexpr std::uintptr_t VolumetricScatteringBinding = 0x128;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0x13C;
            static constexpr std::uintptr_t SpecularScaleBinding = 0x150;
            static constexpr std::uintptr_t DiffuseScaleBinding = 0x164;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"SourceMode", 0x98, "EnumProperty"},
            {"bAffectsTranslucency", 0x9C, "BoolProperty"},
            {"bAllowMegaLights", 0x9C, "BoolProperty"},
            {"bAlphaScalesBrightness", 0x9C, "BoolProperty"},
            {"bMegaLightsCastShadows", 0x9C, "BoolProperty"},
            {"bOverrideInverseExposureBlend", 0x9C, "BoolProperty"},
            {"bUseInverseSquaredFalloff", 0x9C, "BoolProperty"},
            {"RadiusScale", 0xA0, "FloatProperty"},
            {"DefaultExponent", 0xA4, "FloatProperty"},
            {"SpecularScale", 0xA8, "FloatProperty"},
            {"DiffuseScale", 0xAC, "FloatProperty"},
            {"ColorAdd", 0xB0, "StructProperty"},
            {"InverseExposureBlend", 0xBC, "FloatProperty"},
            {"RendererVisibility", 0xC0, "IntProperty"},
            {"LightRenderingEnabledBinding", 0xC4, "StructProperty"},
            {"LightExponentBinding", 0xD8, "StructProperty"},
            {"PositionBinding", 0xEC, "StructProperty"},
            {"ColorBinding", 0x100, "StructProperty"},
            {"RadiusBinding", 0x114, "StructProperty"},
            {"VolumetricScatteringBinding", 0x128, "StructProperty"},
            {"RendererVisibilityTagBinding", 0x13C, "StructProperty"},
            {"SpecularScaleBinding", 0x150, "StructProperty"},
            {"DiffuseScaleBinding", 0x164, "StructProperty"},
        }};
    };

    struct NiagaraLinearRamp
    {
        static constexpr std::string_view Name = "NiagaraLinearRamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartX = 0x0;
            static constexpr std::uintptr_t StartY = 0x4;
            static constexpr std::uintptr_t EndX = 0x8;
            static constexpr std::uintptr_t EndY = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StartX", 0x0, "FloatProperty"},
            {"StartY", 0x4, "FloatProperty"},
            {"EndX", 0x8, "FloatProperty"},
            {"EndY", 0xC, "FloatProperty"},
        }};
    };

    struct NiagaraLwcStructConverter
    {
        static constexpr std::string_view Name = "NiagaraLwcStructConverter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LWCSize = 0x0;
            static constexpr std::uintptr_t SWCSize = 0x4;
            static constexpr std::uintptr_t ConversionSteps = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LWCSize", 0x0, "IntProperty"},
            {"SWCSize", 0x4, "IntProperty"},
            {"ConversionSteps", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraMaterialAttributeBinding
    {
        static constexpr std::string_view Name = "NiagaraMaterialAttributeBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParameterName = 0x0;
            static constexpr std::uintptr_t NiagaraVariable = 0x4;
            static constexpr std::uintptr_t ResolvedNiagaraVariable = 0xC;
            static constexpr std::uintptr_t NiagaraChildVariable = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaterialParameterName", 0x0, "NameProperty"},
            {"NiagaraVariable", 0x4, "StructProperty"},
            {"ResolvedNiagaraVariable", 0xC, "StructProperty"},
            {"NiagaraChildVariable", 0x14, "StructProperty"},
        }};
    };

    struct NiagaraMatrix
    {
        static constexpr std::string_view Name = "NiagaraMatrix";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Row0 = 0x0;
            static constexpr std::uintptr_t Row1 = 0x10;
            static constexpr std::uintptr_t Row2 = 0x20;
            static constexpr std::uintptr_t Row3 = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Row0", 0x0, "StructProperty"},
            {"Row1", 0x10, "StructProperty"},
            {"Row2", 0x20, "StructProperty"},
            {"Row3", 0x30, "StructProperty"},
        }};
    };

    struct NiagaraMeshMICOverride
    {
        static constexpr std::string_view Name = "NiagaraMeshMICOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginalMaterial = 0x0;
            static constexpr std::uintptr_t ReplacementMaterial = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OriginalMaterial", 0x0, "ObjectProperty"},
            {"ReplacementMaterial", 0x8, "ObjectProperty"},
        }};
    };

    struct NiagaraMeshMaterialOverride
    {
        static constexpr std::string_view Name = "NiagaraMeshMaterialOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExplicitMat = 0x0;
            static constexpr std::uintptr_t UserParamBinding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExplicitMat", 0x0, "ObjectProperty"},
            {"UserParamBinding", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraMeshRendererMeshProperties
    {
        static constexpr std::string_view Name = "NiagaraMeshRendererMeshProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraMeshRendererMeshPropertiesBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshParameterBinding = 0x58;
            static constexpr std::uintptr_t LODMode = 0x60;
            static constexpr std::uintptr_t LODLevel = 0x64;
            static constexpr std::uintptr_t LODBias = 0x68;
            static constexpr std::uintptr_t LODDistanceFactor = 0x6C;
            static constexpr std::uintptr_t bUseLODRange = 0x70;
            static constexpr std::uintptr_t LODRange = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MeshParameterBinding", 0x58, "StructProperty"},
            {"LODMode", 0x60, "EnumProperty"},
            {"LODLevel", 0x64, "IntProperty"},
            {"LODBias", 0x68, "IntProperty"},
            {"LODDistanceFactor", 0x6C, "FloatProperty"},
            {"bUseLODRange", 0x70, "BoolProperty"},
            {"LODRange", 0x74, "StructProperty"},
        }};
    };

    struct NiagaraMeshRendererMeshPropertiesBase
    {
        static constexpr std::string_view Name = "NiagaraMeshRendererMeshPropertiesBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x0;
            static constexpr std::uintptr_t Scale = 0x8;
            static constexpr std::uintptr_t Rotation = 0x20;
            static constexpr std::uintptr_t PivotOffset = 0x38;
            static constexpr std::uintptr_t PivotOffsetSpace = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Mesh", 0x0, "ObjectProperty"},
            {"Scale", 0x8, "StructProperty"},
            {"Rotation", 0x20, "StructProperty"},
            {"PivotOffset", 0x38, "StructProperty"},
            {"PivotOffsetSpace", 0x50, "EnumProperty"},
        }};
    };

    struct NiagaraMeshRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraMeshRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Meshes = 0xA0;
            static constexpr std::uintptr_t MeshesBinding = 0xB0;
            static constexpr std::uintptr_t SourceMode = 0xB8;
            static constexpr std::uintptr_t SortMode = 0xB9;
            static constexpr std::uintptr_t SortPrecision = 0xBA;
            static constexpr std::uintptr_t GpuTranslucentLatency = 0xBB;
            static constexpr std::uintptr_t bEnableCameraDistanceCulling = 0xBC;
            static constexpr std::uintptr_t bEnableFrustumCulling = 0xBC;
            static constexpr std::uintptr_t bEnableMeshFlipbook = 0xBC;
            static constexpr std::uintptr_t bLockedAxisEnable = 0xBC;
            static constexpr std::uintptr_t bOverrideMaterials = 0xBC;
            static constexpr std::uintptr_t bSortOnlyWhenTranslucent = 0xBC;
            static constexpr std::uintptr_t bSubImageBlend = 0xBC;
            static constexpr std::uintptr_t bCastShadows = 0xC0;
            static constexpr std::uintptr_t bUseScaleWithTangentBasis = 0xC0;
            static constexpr std::uintptr_t OverrideMaterials = 0xC8;
            static constexpr std::uintptr_t MICOverrideMaterials = 0xD8;
            static constexpr std::uintptr_t SubImageSize = 0xE8;
            static constexpr std::uintptr_t LockedAxis = 0xF8;
            static constexpr std::uintptr_t MeshBoundsScale = 0x110;
            static constexpr std::uintptr_t FacingMode = 0x128;
            static constexpr std::uintptr_t LockedAxisSpace = 0x129;
            static constexpr std::uintptr_t MinCameraDistance = 0x12C;
            static constexpr std::uintptr_t MaxCameraDistance = 0x130;
            static constexpr std::uintptr_t RendererVisibility = 0x134;
            static constexpr std::uintptr_t PositionBinding = 0x138;
            static constexpr std::uintptr_t ColorBinding = 0x14C;
            static constexpr std::uintptr_t VelocityBinding = 0x160;
            static constexpr std::uintptr_t MeshOrientationBinding = 0x174;
            static constexpr std::uintptr_t ScaleBinding = 0x188;
            static constexpr std::uintptr_t SubImageIndexBinding = 0x19C;
            static constexpr std::uintptr_t DynamicMaterialBinding = 0x1B0;
            static constexpr std::uintptr_t DynamicMaterial1Binding = 0x1C4;
            static constexpr std::uintptr_t DynamicMaterial2Binding = 0x1D8;
            static constexpr std::uintptr_t DynamicMaterial3Binding = 0x1EC;
            static constexpr std::uintptr_t MaterialRandomBinding = 0x200;
            static constexpr std::uintptr_t CustomSortingBinding = 0x214;
            static constexpr std::uintptr_t NormalizedAgeBinding = 0x228;
            static constexpr std::uintptr_t CameraOffsetBinding = 0x23C;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0x250;
            static constexpr std::uintptr_t MeshIndexBinding = 0x264;
            static constexpr std::uintptr_t MaterialParameters = 0x278;
            static constexpr std::uintptr_t PrevPositionBinding = 0x2C8;
            static constexpr std::uintptr_t PrevScaleBinding = 0x2DC;
            static constexpr std::uintptr_t PrevMeshOrientationBinding = 0x2F0;
            static constexpr std::uintptr_t PrevCameraOffsetBinding = 0x304;
            static constexpr std::uintptr_t PrevVelocityBinding = 0x318;
            static constexpr std::uintptr_t MaterialParamValidMask = 0x32C;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"Meshes", 0xA0, "ArrayProperty"},
            {"MeshesBinding", 0xB0, "StructProperty"},
            {"SourceMode", 0xB8, "EnumProperty"},
            {"SortMode", 0xB9, "EnumProperty"},
            {"SortPrecision", 0xBA, "EnumProperty"},
            {"GpuTranslucentLatency", 0xBB, "EnumProperty"},
            {"bEnableCameraDistanceCulling", 0xBC, "BoolProperty"},
            {"bEnableFrustumCulling", 0xBC, "BoolProperty"},
            {"bEnableMeshFlipbook", 0xBC, "BoolProperty"},
            {"bLockedAxisEnable", 0xBC, "BoolProperty"},
            {"bOverrideMaterials", 0xBC, "BoolProperty"},
            {"bSortOnlyWhenTranslucent", 0xBC, "BoolProperty"},
            {"bSubImageBlend", 0xBC, "BoolProperty"},
            {"bCastShadows", 0xC0, "BoolProperty"},
            {"bUseScaleWithTangentBasis", 0xC0, "BoolProperty"},
            {"OverrideMaterials", 0xC8, "ArrayProperty"},
            {"MICOverrideMaterials", 0xD8, "ArrayProperty"},
            {"SubImageSize", 0xE8, "StructProperty"},
            {"LockedAxis", 0xF8, "StructProperty"},
            {"MeshBoundsScale", 0x110, "StructProperty"},
            {"FacingMode", 0x128, "EnumProperty"},
            {"LockedAxisSpace", 0x129, "EnumProperty"},
            {"MinCameraDistance", 0x12C, "FloatProperty"},
            {"MaxCameraDistance", 0x130, "FloatProperty"},
            {"RendererVisibility", 0x134, "UInt32Property"},
            {"PositionBinding", 0x138, "StructProperty"},
            {"ColorBinding", 0x14C, "StructProperty"},
            {"VelocityBinding", 0x160, "StructProperty"},
            {"MeshOrientationBinding", 0x174, "StructProperty"},
            {"ScaleBinding", 0x188, "StructProperty"},
            {"SubImageIndexBinding", 0x19C, "StructProperty"},
            {"DynamicMaterialBinding", 0x1B0, "StructProperty"},
            {"DynamicMaterial1Binding", 0x1C4, "StructProperty"},
            {"DynamicMaterial2Binding", 0x1D8, "StructProperty"},
            {"DynamicMaterial3Binding", 0x1EC, "StructProperty"},
            {"MaterialRandomBinding", 0x200, "StructProperty"},
            {"CustomSortingBinding", 0x214, "StructProperty"},
            {"NormalizedAgeBinding", 0x228, "StructProperty"},
            {"CameraOffsetBinding", 0x23C, "StructProperty"},
            {"RendererVisibilityTagBinding", 0x250, "StructProperty"},
            {"MeshIndexBinding", 0x264, "StructProperty"},
            {"MaterialParameters", 0x278, "StructProperty"},
            {"PrevPositionBinding", 0x2C8, "StructProperty"},
            {"PrevScaleBinding", 0x2DC, "StructProperty"},
            {"PrevMeshOrientationBinding", 0x2F0, "StructProperty"},
            {"PrevCameraOffsetBinding", 0x304, "StructProperty"},
            {"PrevVelocityBinding", 0x318, "StructProperty"},
            {"MaterialParamValidMask", 0x32C, "UInt32Property"},
        }};
    };

    struct NiagaraMessageDataBase
    {
        static constexpr std::string_view Name = "NiagaraMessageDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraMessageStore
    {
        static constexpr std::string_view Name = "NiagaraMessageStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraMinimalEmitterInfo
    {
        static constexpr std::string_view Name = "NiagaraMinimalEmitterInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0x0;
            static constexpr std::uintptr_t bIsEnabled = 0x4;
            static constexpr std::uintptr_t bIsLightweight = 0x5;
            static constexpr std::uintptr_t UsedRendererMaterials = 0x8;
            static constexpr std::uintptr_t UsedRendererMeshes = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EmitterName", 0x0, "NameProperty"},
            {"bIsEnabled", 0x4, "BoolProperty"},
            {"bIsLightweight", 0x5, "BoolProperty"},
            {"UsedRendererMaterials", 0x8, "ArrayProperty"},
            {"UsedRendererMeshes", 0x18, "ArrayProperty"},
        }};
    };

    struct NiagaraModuleDependency
    {
        static constexpr std::string_view Name = "NiagaraModuleDependency";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Type = 0x4;
            static constexpr std::uintptr_t ScriptConstraint = 0x5;
            static constexpr std::uintptr_t RequiredVersion = 0x8;
            static constexpr std::uintptr_t OnlyEvaluateInScriptUsage = 0x18;
            static constexpr std::uintptr_t Description = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ID", 0x0, "NameProperty"},
            {"Type", 0x4, "EnumProperty"},
            {"ScriptConstraint", 0x5, "EnumProperty"},
            {"RequiredVersion", 0x8, "StrProperty"},
            {"OnlyEvaluateInScriptUsage", 0x18, "IntProperty"},
            {"Description", 0x20, "TextProperty"},
        }};
    };

    struct NiagaraNumeric
    {
        static constexpr std::string_view Name = "NiagaraNumeric";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraOutlinerCaptureSettings
    {
        static constexpr std::string_view Name = "NiagaraOutlinerCaptureSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bTriggerCapture = 0x0;
            static constexpr std::uintptr_t CaptureDelayFrames = 0x4;
            static constexpr std::uintptr_t bGatherPerfData = 0x8;
            static constexpr std::uintptr_t SimCacheCaptureFrames = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bTriggerCapture", 0x0, "BoolProperty"},
            {"CaptureDelayFrames", 0x4, "UInt32Property"},
            {"bGatherPerfData", 0x8, "BoolProperty"},
            {"SimCacheCaptureFrames", 0xC, "UInt32Property"},
        }};
    };

    struct NiagaraOutlinerData
    {
        static constexpr std::string_view Name = "NiagaraOutlinerData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldData", 0x0, "MapProperty"},
        }};
    };

    struct NiagaraOutlinerEmitterInstanceData
    {
        static constexpr std::string_view Name = "NiagaraOutlinerEmitterInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0x0;
            static constexpr std::uintptr_t SimTarget = 0x10;
            static constexpr std::uintptr_t ExecState = 0x14;
            static constexpr std::uintptr_t NumParticles = 0x18;
            static constexpr std::uintptr_t bIsLightweight = 0x1C;
            static constexpr std::uintptr_t bRequiresPersistentIDs = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EmitterName", 0x0, "StrProperty"},
            {"SimTarget", 0x10, "EnumProperty"},
            {"ExecState", 0x14, "EnumProperty"},
            {"NumParticles", 0x18, "IntProperty"},
            {"bIsLightweight", 0x1C, "BoolProperty"},
            {"bRequiresPersistentIDs", 0x1C, "BoolProperty"},
        }};
    };

    struct NiagaraOutlinerSystemData
    {
        static constexpr std::string_view Name = "NiagaraOutlinerSystemData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetPath = 0x0;
            static constexpr std::uintptr_t SystemInstances = 0x18;
            static constexpr std::uintptr_t AveragePerFrameTime = 0x28;
            static constexpr std::uintptr_t MaxPerFrameTime = 0x30;
            static constexpr std::uintptr_t AveragePerInstanceTime = 0x38;
            static constexpr std::uintptr_t MaxPerInstanceTime = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AssetPath", 0x0, "StructProperty"},
            {"SystemInstances", 0x18, "ArrayProperty"},
            {"AveragePerFrameTime", 0x28, "StructProperty"},
            {"MaxPerFrameTime", 0x30, "StructProperty"},
            {"AveragePerInstanceTime", 0x38, "StructProperty"},
            {"MaxPerInstanceTime", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraOutlinerSystemInstanceData
    {
        static constexpr std::string_view Name = "NiagaraOutlinerSystemInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentName = 0x0;
            static constexpr std::uintptr_t LWCTile = 0x10;
            static constexpr std::uintptr_t Emitters = 0x20;
            static constexpr std::uintptr_t ActualExecutionState = 0x30;
            static constexpr std::uintptr_t RequestedExecutionState = 0x34;
            static constexpr std::uintptr_t ScalabilityState = 0x38;
            static constexpr std::uintptr_t bPendingKill = 0x44;
            static constexpr std::uintptr_t bUsingCullProxy = 0x44;
            static constexpr std::uintptr_t PoolMethod = 0x48;
            static constexpr std::uintptr_t AverageTime = 0x4C;
            static constexpr std::uintptr_t MaxTime = 0x54;
            static constexpr std::uintptr_t TickGroup = 0x5C;
            static constexpr std::uintptr_t GpuTickStage = 0x5D;
            static constexpr std::uintptr_t bIsSolo = 0x60;
            static constexpr std::uintptr_t bRequiresCurrentFrameNDC = 0x60;
            static constexpr std::uintptr_t bRequiresDepthBuffer = 0x60;
            static constexpr std::uintptr_t bRequiresEarlyViewData = 0x60;
            static constexpr std::uintptr_t bRequiresGlobalDistanceField = 0x60;
            static constexpr std::uintptr_t bRequiresRayTracingScene = 0x60;
            static constexpr std::uintptr_t bRequiresViewUniformBuffer = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"ComponentName", 0x0, "StrProperty"},
            {"LWCTile", 0x10, "StructProperty"},
            {"Emitters", 0x20, "ArrayProperty"},
            {"ActualExecutionState", 0x30, "EnumProperty"},
            {"RequestedExecutionState", 0x34, "EnumProperty"},
            {"ScalabilityState", 0x38, "StructProperty"},
            {"bPendingKill", 0x44, "BoolProperty"},
            {"bUsingCullProxy", 0x44, "BoolProperty"},
            {"PoolMethod", 0x48, "EnumProperty"},
            {"AverageTime", 0x4C, "StructProperty"},
            {"MaxTime", 0x54, "StructProperty"},
            {"TickGroup", 0x5C, "ByteProperty"},
            {"GpuTickStage", 0x5D, "ByteProperty"},
            {"bIsSolo", 0x60, "BoolProperty"},
            {"bRequiresCurrentFrameNDC", 0x60, "BoolProperty"},
            {"bRequiresDepthBuffer", 0x60, "BoolProperty"},
            {"bRequiresEarlyViewData", 0x60, "BoolProperty"},
            {"bRequiresGlobalDistanceField", 0x60, "BoolProperty"},
            {"bRequiresRayTracingScene", 0x60, "BoolProperty"},
            {"bRequiresViewUniformBuffer", 0x60, "BoolProperty"},
        }};
    };

    struct NiagaraOutlinerTimingData
    {
        static constexpr std::string_view Name = "NiagaraOutlinerTimingData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GameThread = 0x0;
            static constexpr std::uintptr_t RenderThread = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameThread", 0x0, "FloatProperty"},
            {"RenderThread", 0x4, "FloatProperty"},
        }};
    };

    struct NiagaraOutlinerWorldData
    {
        static constexpr std::string_view Name = "NiagaraOutlinerWorldData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Systems = 0x0;
            static constexpr std::uintptr_t bHasBegunPlay = 0x10;
            static constexpr std::uintptr_t WorldType = 0x11;
            static constexpr std::uintptr_t NetMode = 0x12;
            static constexpr std::uintptr_t AveragePerFrameTime = 0x14;
            static constexpr std::uintptr_t MaxPerFrameTime = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Systems", 0x0, "MapProperty"},
            {"bHasBegunPlay", 0x10, "BoolProperty"},
            {"WorldType", 0x11, "ByteProperty"},
            {"NetMode", 0x12, "ByteProperty"},
            {"AveragePerFrameTime", 0x14, "StructProperty"},
            {"MaxPerFrameTime", 0x1C, "StructProperty"},
        }};
    };

    struct NiagaraParameterBinding
    {
        static constexpr std::string_view Name = "NiagaraParameterBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ResolvedParameter = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResolvedParameter", 0x0, "StructProperty"},
        }};
    };

    struct NiagaraParameterBindingWithValue
    {
        static constexpr std::string_view Name = "NiagaraParameterBindingWithValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraParameterBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraParameterCollection
    {
        static constexpr std::string_view Name = "NiagaraParameterCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Namespace = 0x28;
            static constexpr std::uintptr_t Parameters = 0x30;
            static constexpr std::uintptr_t SourceMaterialCollection = 0x40;
            static constexpr std::uintptr_t DefaultInstance = 0x48;
            static constexpr std::uintptr_t CompileId = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Namespace", 0x28, "NameProperty"},
            {"Parameters", 0x30, "ArrayProperty"},
            {"SourceMaterialCollection", 0x40, "ObjectProperty"},
            {"DefaultInstance", 0x48, "ObjectProperty"},
            {"CompileId", 0x50, "StructProperty"},
        }};
    };

    struct NiagaraParameterCollectionInstance
    {
        static constexpr std::string_view Name = "NiagaraParameterCollectionInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Collection = 0x28;
            static constexpr std::uintptr_t OverridenParameters = 0x30;
            static constexpr std::uintptr_t ParameterStorage = 0x40;
            static constexpr std::uintptr_t SourceMaterialCollectionInstance = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Collection", 0x28, "ObjectProperty"},
            {"OverridenParameters", 0x30, "ArrayProperty"},
            {"ParameterStorage", 0x40, "StructProperty"},
            {"SourceMaterialCollectionInstance", 0xC8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "GetBoolParameter",
            "GetColorParameter",
            "GetFloatParameter",
            "GetIntParameter",
            "GetQuatParameter",
            "GetVector2DParameter",
            "GetVector4Parameter",
            "GetVectorParameter",
            "SetBoolParameter",
            "SetColorParameter",
            "SetFloatParameter",
            "SetIntParameter",
            "SetQuatParameter",
            "SetVector2DParameter",
            "SetVector4Parameter",
            "SetVectorParameter",
        }};
    };

    struct NiagaraParameterDataSetBinding
    {
        static constexpr std::string_view Name = "NiagaraParameterDataSetBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterOffset = 0x0;
            static constexpr std::uintptr_t DataSetComponentOffset = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParameterOffset", 0x0, "IntProperty"},
            {"DataSetComponentOffset", 0x4, "IntProperty"},
        }};
    };

    struct NiagaraParameterDataSetBindingCollection
    {
        static constexpr std::string_view Name = "NiagaraParameterDataSetBindingCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatOffsets = 0x0;
            static constexpr std::uintptr_t Int32Offsets = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FloatOffsets", 0x0, "ArrayProperty"},
            {"Int32Offsets", 0x10, "ArrayProperty"},
        }};
    };

    struct NiagaraParameterDefinitionsBase
    {
        static constexpr std::string_view Name = "NiagaraParameterDefinitionsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraParameterMap
    {
        static constexpr std::string_view Name = "NiagaraParameterMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraParameterStore
    {
        static constexpr std::string_view Name = "NiagaraParameterStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x8;
            static constexpr std::uintptr_t SortedParameterOffsets = 0x10;
            static constexpr std::uintptr_t ParameterData = 0x20;
            static constexpr std::uintptr_t DataInterfaces = 0x30;
            static constexpr std::uintptr_t UObjects = 0x40;
            static constexpr std::uintptr_t OriginalPositionData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Owner", 0x8, "WeakObjectProperty"},
            {"SortedParameterOffsets", 0x10, "ArrayProperty"},
            {"ParameterData", 0x20, "ArrayProperty"},
            {"DataInterfaces", 0x30, "ArrayProperty"},
            {"UObjects", 0x40, "ArrayProperty"},
            {"OriginalPositionData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraParameters
    {
        static constexpr std::string_view Name = "NiagaraParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x0, "ArrayProperty"},
        }};
    };

    struct NiagaraParticleCallbackHandler
    {
        static constexpr std::string_view Name = "NiagaraParticleCallbackHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ReceiveParticleData",
        }};
    };

    struct NiagaraPerfBaselineActor
    {
        static constexpr std::string_view Name = "NiagaraPerfBaselineActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Controller = 0x278;
            static constexpr std::uintptr_t Label = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Controller", 0x278, "ObjectProperty"},
            {"Label", 0x280, "ObjectProperty"},
        }};
    };

    struct NiagaraPerfBaselineStats
    {
        static constexpr std::string_view Name = "NiagaraPerfBaselineStats";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PerInstanceAvg_GT = 0x0;
            static constexpr std::uintptr_t PerInstanceAvg_RT = 0x4;
            static constexpr std::uintptr_t PerInstanceMax_GT = 0x8;
            static constexpr std::uintptr_t PerInstanceMax_RT = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PerInstanceAvg_GT", 0x0, "FloatProperty"},
            {"PerInstanceAvg_RT", 0x4, "FloatProperty"},
            {"PerInstanceMax_GT", 0x8, "FloatProperty"},
            {"PerInstanceMax_RT", 0xC, "FloatProperty"},
        }};
    };

    struct NiagaraPhysicsAssetDICollectorInterface
    {
        static constexpr std::string_view Name = "NiagaraPhysicsAssetDICollectorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraPlatformSet
    {
        static constexpr std::string_view Name = "NiagaraPlatformSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceProfileStates = 0x0;
            static constexpr std::uintptr_t CVarConditions = 0x10;
            static constexpr std::uintptr_t QualityLevelMask = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DeviceProfileStates", 0x0, "ArrayProperty"},
            {"CVarConditions", 0x10, "ArrayProperty"},
            {"QualityLevelMask", 0x20, "IntProperty"},
        }};
    };

    struct NiagaraPlatformSetCVarCondition
    {
        static constexpr std::string_view Name = "NiagaraPlatformSetCVarCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CVarName = 0x0;
            static constexpr std::uintptr_t PassResponse = 0x4;
            static constexpr std::uintptr_t FailResponse = 0x5;
            static constexpr std::uintptr_t Value = 0x6;
            static constexpr std::uintptr_t MinInt = 0x8;
            static constexpr std::uintptr_t MaxInt = 0xC;
            static constexpr std::uintptr_t MinFloat = 0x10;
            static constexpr std::uintptr_t MaxFloat = 0x14;
            static constexpr std::uintptr_t bUseMaxFloat = 0x18;
            static constexpr std::uintptr_t bUseMaxInt = 0x18;
            static constexpr std::uintptr_t bUseMinFloat = 0x18;
            static constexpr std::uintptr_t bUseMinInt = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CVarName", 0x0, "NameProperty"},
            {"PassResponse", 0x4, "EnumProperty"},
            {"FailResponse", 0x5, "EnumProperty"},
            {"Value", 0x6, "BoolProperty"},
            {"MinInt", 0x8, "IntProperty"},
            {"MaxInt", 0xC, "IntProperty"},
            {"MinFloat", 0x10, "FloatProperty"},
            {"MaxFloat", 0x14, "FloatProperty"},
            {"bUseMaxFloat", 0x18, "BoolProperty"},
            {"bUseMaxInt", 0x18, "BoolProperty"},
            {"bUseMinFloat", 0x18, "BoolProperty"},
            {"bUseMinInt", 0x18, "BoolProperty"},
        }};
    };

    struct NiagaraPlatformSetConflictEntry
    {
        static constexpr std::string_view Name = "NiagaraPlatformSetConflictEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileName = 0x0;
            static constexpr std::uintptr_t QualityLevelMask = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProfileName", 0x0, "NameProperty"},
            {"QualityLevelMask", 0x4, "IntProperty"},
        }};
    };

    struct NiagaraPlatformSetConflictInfo
    {
        static constexpr std::string_view Name = "NiagaraPlatformSetConflictInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SetAIndex = 0x0;
            static constexpr std::uintptr_t SetBIndex = 0x4;
            static constexpr std::uintptr_t Conflicts = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SetAIndex", 0x0, "IntProperty"},
            {"SetBIndex", 0x4, "IntProperty"},
            {"Conflicts", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraPlatformSetRedirect
    {
        static constexpr std::string_view Name = "NiagaraPlatformSetRedirect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileNames = 0x0;
            static constexpr std::uintptr_t Mode = 0x10;
            static constexpr std::uintptr_t RedirectProfileName = 0x14;
            static constexpr std::uintptr_t CVarConditionEnabled = 0x18;
            static constexpr std::uintptr_t CVarConditionDisabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ProfileNames", 0x0, "ArrayProperty"},
            {"Mode", 0x10, "EnumProperty"},
            {"RedirectProfileName", 0x14, "NameProperty"},
            {"CVarConditionEnabled", 0x18, "StructProperty"},
            {"CVarConditionDisabled", 0x48, "StructProperty"},
        }};
    };

    struct NiagaraPosition
    {
        static constexpr std::string_view Name = "NiagaraPosition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Vector3f";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
            static constexpr std::uintptr_t Z = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"X", 0x0, "FloatProperty"},
            {"Y", 0x4, "FloatProperty"},
            {"Z", 0x8, "FloatProperty"},
        }};
    };

    struct NiagaraPositionSource
    {
        static constexpr std::string_view Name = "NiagaraPositionSource";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Value", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraPrecompileContainer
    {
        static constexpr std::string_view Name = "NiagaraPrecompileContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Scripts = 0x28;
            static constexpr std::uintptr_t System = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Scripts", 0x28, "ArrayProperty"},
            {"System", 0x38, "ObjectProperty"},
        }};
    };

    struct NiagaraPreviewAxis
    {
        static constexpr std::string_view Name = "NiagaraPreviewAxis";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ApplyToPreview",
            "Num",
        }};
    };

    struct NiagaraPreviewAxis_InterpParamBase
    {
        static constexpr std::string_view Name = "NiagaraPreviewAxis_InterpParamBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraPreviewAxis";
        struct Offsets
        {
            static constexpr std::uintptr_t Param = 0x28;
            static constexpr std::uintptr_t Count = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Param", 0x28, "NameProperty"},
            {"Count", 0x2C, "IntProperty"},
        }};
    };

    struct NiagaraPreviewAxis_InterpParamFloat
    {
        static constexpr std::string_view Name = "NiagaraPreviewAxis_InterpParamFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraPreviewAxis_InterpParamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x30;
            static constexpr std::uintptr_t max = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x30, "FloatProperty"},
            {"max", 0x34, "FloatProperty"},
        }};
    };

    struct NiagaraPreviewAxis_InterpParamInt32
    {
        static constexpr std::string_view Name = "NiagaraPreviewAxis_InterpParamInt32";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraPreviewAxis_InterpParamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x30;
            static constexpr std::uintptr_t max = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x30, "IntProperty"},
            {"max", 0x34, "IntProperty"},
        }};
    };

    struct NiagaraPreviewAxis_InterpParamLinearColor
    {
        static constexpr std::string_view Name = "NiagaraPreviewAxis_InterpParamLinearColor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraPreviewAxis_InterpParamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x30;
            static constexpr std::uintptr_t max = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x30, "StructProperty"},
            {"max", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraPreviewAxis_InterpParamVector
    {
        static constexpr std::string_view Name = "NiagaraPreviewAxis_InterpParamVector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraPreviewAxis_InterpParamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x30;
            static constexpr std::uintptr_t max = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x30, "StructProperty"},
            {"max", 0x48, "StructProperty"},
        }};
    };

    struct NiagaraPreviewAxis_InterpParamVector2D
    {
        static constexpr std::string_view Name = "NiagaraPreviewAxis_InterpParamVector2D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraPreviewAxis_InterpParamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x30;
            static constexpr std::uintptr_t max = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x30, "StructProperty"},
            {"max", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraPreviewAxis_InterpParamVector4
    {
        static constexpr std::string_view Name = "NiagaraPreviewAxis_InterpParamVector4";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraPreviewAxis_InterpParamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x30;
            static constexpr std::uintptr_t max = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x30, "StructProperty"},
            {"max", 0x50, "StructProperty"},
        }};
    };

    struct NiagaraPreviewBase
    {
        static constexpr std::string_view Name = "NiagaraPreviewBase";
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

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetLabelText",
            "SetSystem",
        }};
    };

    struct NiagaraPreviewGrid
    {
        static constexpr std::string_view Name = "NiagaraPreviewGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t System = 0x278;
            static constexpr std::uintptr_t ResetMode = 0x280;
            static constexpr std::uintptr_t PreviewAxisX = 0x288;
            static constexpr std::uintptr_t PreviewAxisY = 0x290;
            static constexpr std::uintptr_t PreviewClass = 0x298;
            static constexpr std::uintptr_t SpacingX = 0x2A0;
            static constexpr std::uintptr_t SpacingY = 0x2A4;
            static constexpr std::uintptr_t NumX = 0x2A8;
            static constexpr std::uintptr_t NumY = 0x2AC;
            static constexpr std::uintptr_t PreviewComponents = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"System", 0x278, "ObjectProperty"},
            {"ResetMode", 0x280, "EnumProperty"},
            {"PreviewAxisX", 0x288, "ObjectProperty"},
            {"PreviewAxisY", 0x290, "ObjectProperty"},
            {"PreviewClass", 0x298, "ClassProperty"},
            {"SpacingX", 0x2A0, "FloatProperty"},
            {"SpacingY", 0x2A4, "FloatProperty"},
            {"NumX", 0x2A8, "IntProperty"},
            {"NumY", 0x2AC, "IntProperty"},
            {"PreviewComponents", 0x2B0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ActivatePreviews",
            "DeactivatePreviews",
            "GetPreviews",
            "SetPaused",
        }};
    };

    struct NiagaraRandInfo
    {
        static constexpr std::string_view Name = "NiagaraRandInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Seed1 = 0x0;
            static constexpr std::uintptr_t Seed2 = 0x4;
            static constexpr std::uintptr_t Seed3 = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Seed1", 0x0, "IntProperty"},
            {"Seed2", 0x4, "IntProperty"},
            {"Seed3", 0x8, "IntProperty"},
        }};
    };

    struct NiagaraReadinessSettings
    {
        static constexpr std::string_view Name = "NiagaraReadinessSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraSettingsProfile";
        struct Offsets
        {
            static constexpr std::uintptr_t PlatformSet = 0x0;
            static constexpr std::uintptr_t PSOPrecacheSettings = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlatformSet", 0x0, "StructProperty"},
            {"PSOPrecacheSettings", 0x30, "StructProperty"},
        }};
    };

    struct NiagaraReadinessSettingsProfile
    {
        static constexpr std::string_view Name = "NiagaraReadinessSettingsProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraScalabiltiySettingsProfile";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraRenderableMeshArrayInterface
    {
        static constexpr std::string_view Name = "NiagaraRenderableMeshArrayInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraRenderableMeshInterface
    {
        static constexpr std::string_view Name = "NiagaraRenderableMeshInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraRendererMaterialParameters
    {
        static constexpr std::string_view Name = "NiagaraRendererMaterialParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeBindings = 0x0;
            static constexpr std::uintptr_t ScalarParameters = 0x10;
            static constexpr std::uintptr_t VectorParameters = 0x20;
            static constexpr std::uintptr_t TextureParameters = 0x30;
            static constexpr std::uintptr_t StaticBoolParameters = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AttributeBindings", 0x0, "ArrayProperty"},
            {"ScalarParameters", 0x10, "ArrayProperty"},
            {"VectorParameters", 0x20, "ArrayProperty"},
            {"TextureParameters", 0x30, "ArrayProperty"},
            {"StaticBoolParameters", 0x40, "ArrayProperty"},
        }};
    };

    struct NiagaraRendererMaterialScalarParameter
    {
        static constexpr std::string_view Name = "NiagaraRendererMaterialScalarParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParameterName = 0x0;
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaterialParameterName", 0x0, "NameProperty"},
            {"Value", 0x4, "FloatProperty"},
        }};
    };

    struct NiagaraRendererMaterialStaticBoolParameter
    {
        static constexpr std::string_view Name = "NiagaraRendererMaterialStaticBoolParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParameterName = 0x0;
            static constexpr std::uintptr_t StaticVariableName = 0x4;
            static constexpr std::uintptr_t StaticValue = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaterialParameterName", 0x0, "NameProperty"},
            {"StaticVariableName", 0x4, "NameProperty"},
            {"StaticValue", 0x8, "OptionalProperty"},
        }};
    };

    struct NiagaraRendererMaterialTextureParameter
    {
        static constexpr std::string_view Name = "NiagaraRendererMaterialTextureParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParameterName = 0x0;
            static constexpr std::uintptr_t Texture = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaterialParameterName", 0x0, "NameProperty"},
            {"Texture", 0x8, "ObjectProperty"},
        }};
    };

    struct NiagaraRendererMaterialVectorParameter
    {
        static constexpr std::string_view Name = "NiagaraRendererMaterialVectorParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParameterName = 0x0;
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaterialParameterName", 0x0, "NameProperty"},
            {"Value", 0x4, "StructProperty"},
        }};
    };

    struct NiagaraRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraMergeable";
        struct Offsets
        {
            static constexpr std::uintptr_t Platforms = 0x28;
            static constexpr std::uintptr_t SortOrderHint = 0x58;
            static constexpr std::uintptr_t MotionVectorSetting = 0x5C;
            static constexpr std::uintptr_t bIsEnabled = 0x5D;
            static constexpr std::uintptr_t bAllowInCullProxies = 0x5E;
            static constexpr std::uintptr_t RendererEnabledBinding = 0x60;
            static constexpr std::uintptr_t OuterEmitterVersion = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Platforms", 0x28, "StructProperty"},
            {"SortOrderHint", 0x58, "IntProperty"},
            {"MotionVectorSetting", 0x5C, "EnumProperty"},
            {"bIsEnabled", 0x5D, "BoolProperty"},
            {"bAllowInCullProxies", 0x5E, "BoolProperty"},
            {"RendererEnabledBinding", 0x60, "StructProperty"},
            {"OuterEmitterVersion", 0x74, "StructProperty"},
        }};
    };

    struct NiagaraRendererReadbackParameters
    {
        static constexpr std::string_view Name = "NiagaraRendererReadbackParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CoordinateSpace = 0x0;
            static constexpr std::uintptr_t bExportPosition = 0x1;
            static constexpr std::uintptr_t bExportTangentBasis = 0x2;
            static constexpr std::uintptr_t bExportColor = 0x3;
            static constexpr std::uintptr_t ExportNumTexCoords = 0x4;
            static constexpr std::uintptr_t ExportTexCoordBindings = 0x8;
            static constexpr std::uintptr_t bExportMaterials = 0x18;
            static constexpr std::uintptr_t bApplyWPO = 0x19;
            static constexpr std::uintptr_t ViewIndexToCapture = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CoordinateSpace", 0x0, "EnumProperty"},
            {"bExportPosition", 0x1, "BoolProperty"},
            {"bExportTangentBasis", 0x2, "BoolProperty"},
            {"bExportColor", 0x3, "BoolProperty"},
            {"ExportNumTexCoords", 0x4, "IntProperty"},
            {"ExportTexCoordBindings", 0x8, "ArrayProperty"},
            {"bExportMaterials", 0x18, "BoolProperty"},
            {"bApplyWPO", 0x19, "BoolProperty"},
            {"ViewIndexToCapture", 0x1C, "OptionalProperty"},
        }};
    };

    struct NiagaraRequestSimpleClientInfoMessage
    {
        static constexpr std::string_view Name = "NiagaraRequestSimpleClientInfoMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraResolvedUObjectInfo
    {
        static constexpr std::string_view Name = "NiagaraResolvedUObjectInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ReadVariableName = 0x0;
            static constexpr std::uintptr_t ResolvedVariable = 0x4;
            static constexpr std::uintptr_t Object = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReadVariableName", 0x0, "NameProperty"},
            {"ResolvedVariable", 0x4, "StructProperty"},
            {"Object", 0x10, "ObjectProperty"},
        }};
    };

    struct NiagaraResolvedUserDataInterfaceBinding
    {
        static constexpr std::string_view Name = "NiagaraResolvedUserDataInterfaceBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserParameterStoreDataInterfaceIndex = 0x0;
            static constexpr std::uintptr_t ScriptParameterStoreDataInterfaceIndex = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UserParameterStoreDataInterfaceIndex", 0x0, "IntProperty"},
            {"ScriptParameterStoreDataInterfaceIndex", 0x4, "IntProperty"},
        }};
    };

    struct NiagaraRibbonRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraRibbonRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x98;
            static constexpr std::uintptr_t MaterialUserParamBinding = 0xA0;
            static constexpr std::uintptr_t RibbonInterfaceBinding = 0xB8;
            static constexpr std::uintptr_t UV0Settings = 0xC0;
            static constexpr std::uintptr_t UV1Settings = 0xE8;
            static constexpr std::uintptr_t FacingMode = 0x110;
            static constexpr std::uintptr_t RendererVisibility = 0x114;
            static constexpr std::uintptr_t MaxNumRibbons = 0x118;
            static constexpr std::uintptr_t DrawDirection = 0x11C;
            static constexpr std::uintptr_t Shape = 0x11D;
            static constexpr std::uintptr_t bCastShadows = 0x11E;
            static constexpr std::uintptr_t bEnableAccurateGeometry = 0x11E;
            static constexpr std::uintptr_t bLinkOrderUseUniqueID = 0x11E;
            static constexpr std::uintptr_t bScreenSpaceTessellation = 0x11E;
            static constexpr std::uintptr_t bUseConstantFactor = 0x11E;
            static constexpr std::uintptr_t bUseGPUInit = 0x11E;
            static constexpr std::uintptr_t bUseGeometryNormals = 0x11E;
            static constexpr std::uintptr_t bUseMaterialBackfaceCulling = 0x11E;
            static constexpr std::uintptr_t WidthSegmentationCount = 0x120;
            static constexpr std::uintptr_t MultiPlaneCount = 0x124;
            static constexpr std::uintptr_t TubeSubdivisions = 0x128;
            static constexpr std::uintptr_t CustomVertices = 0x130;
            static constexpr std::uintptr_t bCustomShapeClosed = 0x140;
            static constexpr std::uintptr_t TessellationMode = 0x141;
            static constexpr std::uintptr_t CurveTension = 0x144;
            static constexpr std::uintptr_t TessellationFactor = 0x148;
            static constexpr std::uintptr_t TessellationAngle = 0x14C;
            static constexpr std::uintptr_t PositionBinding = 0x150;
            static constexpr std::uintptr_t ColorBinding = 0x164;
            static constexpr std::uintptr_t VelocityBinding = 0x178;
            static constexpr std::uintptr_t NormalizedAgeBinding = 0x18C;
            static constexpr std::uintptr_t RibbonTwistBinding = 0x1A0;
            static constexpr std::uintptr_t RibbonWidthBinding = 0x1B4;
            static constexpr std::uintptr_t RibbonFacingBinding = 0x1C8;
            static constexpr std::uintptr_t RibbonIdBinding = 0x1DC;
            static constexpr std::uintptr_t RibbonLinkOrderBinding = 0x1F0;
            static constexpr std::uintptr_t MaterialRandomBinding = 0x204;
            static constexpr std::uintptr_t DynamicMaterialBinding = 0x218;
            static constexpr std::uintptr_t DynamicMaterial1Binding = 0x22C;
            static constexpr std::uintptr_t DynamicMaterial2Binding = 0x240;
            static constexpr std::uintptr_t DynamicMaterial3Binding = 0x254;
            static constexpr std::uintptr_t RibbonUVDistance = 0x268;
            static constexpr std::uintptr_t U0OverrideBinding = 0x27C;
            static constexpr std::uintptr_t V0RangeOverrideBinding = 0x290;
            static constexpr std::uintptr_t U1OverrideBinding = 0x2A4;
            static constexpr std::uintptr_t V1RangeOverrideBinding = 0x2B8;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0x2CC;
            static constexpr std::uintptr_t MaterialParameters = 0x2E0;
            static constexpr std::uintptr_t PrevPositionBinding = 0x330;
            static constexpr std::uintptr_t PrevRibbonWidthBinding = 0x344;
            static constexpr std::uintptr_t PrevRibbonFacingBinding = 0x358;
            static constexpr std::uintptr_t PrevRibbonTwistBinding = 0x36C;
            static constexpr std::uintptr_t MaterialParamValidMask = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 53> Properties{{
            {"Material", 0x98, "ObjectProperty"},
            {"MaterialUserParamBinding", 0xA0, "StructProperty"},
            {"RibbonInterfaceBinding", 0xB8, "StructProperty"},
            {"UV0Settings", 0xC0, "StructProperty"},
            {"UV1Settings", 0xE8, "StructProperty"},
            {"FacingMode", 0x110, "EnumProperty"},
            {"RendererVisibility", 0x114, "IntProperty"},
            {"MaxNumRibbons", 0x118, "IntProperty"},
            {"DrawDirection", 0x11C, "EnumProperty"},
            {"Shape", 0x11D, "EnumProperty"},
            {"bCastShadows", 0x11E, "BoolProperty"},
            {"bEnableAccurateGeometry", 0x11E, "BoolProperty"},
            {"bLinkOrderUseUniqueID", 0x11E, "BoolProperty"},
            {"bScreenSpaceTessellation", 0x11E, "BoolProperty"},
            {"bUseConstantFactor", 0x11E, "BoolProperty"},
            {"bUseGPUInit", 0x11E, "BoolProperty"},
            {"bUseGeometryNormals", 0x11E, "BoolProperty"},
            {"bUseMaterialBackfaceCulling", 0x11E, "BoolProperty"},
            {"WidthSegmentationCount", 0x120, "IntProperty"},
            {"MultiPlaneCount", 0x124, "IntProperty"},
            {"TubeSubdivisions", 0x128, "IntProperty"},
            {"CustomVertices", 0x130, "ArrayProperty"},
            {"bCustomShapeClosed", 0x140, "BoolProperty"},
            {"TessellationMode", 0x141, "EnumProperty"},
            {"CurveTension", 0x144, "FloatProperty"},
            {"TessellationFactor", 0x148, "IntProperty"},
            {"TessellationAngle", 0x14C, "FloatProperty"},
            {"PositionBinding", 0x150, "StructProperty"},
            {"ColorBinding", 0x164, "StructProperty"},
            {"VelocityBinding", 0x178, "StructProperty"},
            {"NormalizedAgeBinding", 0x18C, "StructProperty"},
            {"RibbonTwistBinding", 0x1A0, "StructProperty"},
            {"RibbonWidthBinding", 0x1B4, "StructProperty"},
            {"RibbonFacingBinding", 0x1C8, "StructProperty"},
            {"RibbonIdBinding", 0x1DC, "StructProperty"},
            {"RibbonLinkOrderBinding", 0x1F0, "StructProperty"},
            {"MaterialRandomBinding", 0x204, "StructProperty"},
            {"DynamicMaterialBinding", 0x218, "StructProperty"},
            {"DynamicMaterial1Binding", 0x22C, "StructProperty"},
            {"DynamicMaterial2Binding", 0x240, "StructProperty"},
            {"DynamicMaterial3Binding", 0x254, "StructProperty"},
            {"RibbonUVDistance", 0x268, "StructProperty"},
            {"U0OverrideBinding", 0x27C, "StructProperty"},
            {"V0RangeOverrideBinding", 0x290, "StructProperty"},
            {"U1OverrideBinding", 0x2A4, "StructProperty"},
            {"V1RangeOverrideBinding", 0x2B8, "StructProperty"},
            {"RendererVisibilityTagBinding", 0x2CC, "StructProperty"},
            {"MaterialParameters", 0x2E0, "StructProperty"},
            {"PrevPositionBinding", 0x330, "StructProperty"},
            {"PrevRibbonWidthBinding", 0x344, "StructProperty"},
            {"PrevRibbonFacingBinding", 0x358, "StructProperty"},
            {"PrevRibbonTwistBinding", 0x36C, "StructProperty"},
            {"MaterialParamValidMask", 0x380, "UInt32Property"},
        }};
    };

    struct NiagaraRibbonShape
    {
        static constexpr std::string_view Name = "NiagaraRibbonShape";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bClosedShape = 0x0;
            static constexpr std::uintptr_t bEnableAccurateGeometry = 0x0;
            static constexpr std::uintptr_t bUseMaterialBackfaceCulling = 0x0;
            static constexpr std::uintptr_t Points = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bClosedShape", 0x0, "BoolProperty"},
            {"bEnableAccurateGeometry", 0x0, "BoolProperty"},
            {"bUseMaterialBackfaceCulling", 0x0, "BoolProperty"},
            {"Points", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraRibbonShapeCustomVertex
    {
        static constexpr std::string_view Name = "NiagaraRibbonShapeCustomVertex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Normal = 0x8;
            static constexpr std::uintptr_t TextureV = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Normal", 0x8, "StructProperty"},
            {"TextureV", 0x10, "FloatProperty"},
        }};
    };

    struct NiagaraRibbonShapePoint
    {
        static constexpr std::string_view Name = "NiagaraRibbonShapePoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Normal = 0x8;
            static constexpr std::uintptr_t TextureV = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Normal", 0x8, "StructProperty"},
            {"TextureV", 0x10, "FloatProperty"},
        }};
    };

    struct NiagaraRibbonUVSettings
    {
        static constexpr std::string_view Name = "NiagaraRibbonUVSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DistributionMode = 0x0;
            static constexpr std::uintptr_t LeadingEdgeMode = 0x1;
            static constexpr std::uintptr_t TrailingEdgeMode = 0x2;
            static constexpr std::uintptr_t bEnablePerParticleUOverride = 0x3;
            static constexpr std::uintptr_t bEnablePerParticleVRangeOverride = 0x3;
            static constexpr std::uintptr_t TilingLength = 0x4;
            static constexpr std::uintptr_t Offset = 0x8;
            static constexpr std::uintptr_t Scale = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DistributionMode", 0x0, "EnumProperty"},
            {"LeadingEdgeMode", 0x1, "EnumProperty"},
            {"TrailingEdgeMode", 0x2, "EnumProperty"},
            {"bEnablePerParticleUOverride", 0x3, "BoolProperty"},
            {"bEnablePerParticleVRangeOverride", 0x3, "BoolProperty"},
            {"TilingLength", 0x4, "FloatProperty"},
            {"Offset", 0x8, "StructProperty"},
            {"Scale", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraScalabilityManager
    {
        static constexpr std::string_view Name = "NiagaraScalabilityManager";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EffectType = 0x8;
            static constexpr std::uintptr_t ManagedComponents = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EffectType", 0x8, "ObjectProperty"},
            {"ManagedComponents", 0x10, "ArrayProperty"},
        }};
    };

    struct NiagaraScalabilityState
    {
        static constexpr std::string_view Name = "NiagaraScalabilityState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Significance = 0x0;
            static constexpr std::uintptr_t LastVisibleTime = 0x4;
            static constexpr std::uintptr_t bCulled = 0xA;
            static constexpr std::uintptr_t bCulledByDistance = 0xA;
            static constexpr std::uintptr_t bCulledByGlobalBudget = 0xA;
            static constexpr std::uintptr_t bCulledByInstanceCount = 0xA;
            static constexpr std::uintptr_t bCulledByVisibility = 0xA;
            static constexpr std::uintptr_t bNewlyRegistered = 0xA;
            static constexpr std::uintptr_t bNewlyRegisteredDirty = 0xA;
            static constexpr std::uintptr_t bPreviousCulled = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Significance", 0x0, "FloatProperty"},
            {"LastVisibleTime", 0x4, "FloatProperty"},
            {"bCulled", 0xA, "BoolProperty"},
            {"bCulledByDistance", 0xA, "BoolProperty"},
            {"bCulledByGlobalBudget", 0xA, "BoolProperty"},
            {"bCulledByInstanceCount", 0xA, "BoolProperty"},
            {"bCulledByVisibility", 0xA, "BoolProperty"},
            {"bNewlyRegistered", 0xA, "BoolProperty"},
            {"bNewlyRegisteredDirty", 0xA, "BoolProperty"},
            {"bPreviousCulled", 0xA, "BoolProperty"},
        }};
    };

    struct NiagaraScalabiltiySettingsProfile
    {
        static constexpr std::string_view Name = "NiagaraScalabiltiySettingsProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraScratchPadContainer
    {
        static constexpr std::string_view Name = "NiagaraScratchPadContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraScript
    {
        static constexpr std::string_view Name = "NiagaraScript";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraScriptBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Usage = 0x30;
            static constexpr std::uintptr_t UsageId = 0x34;
            static constexpr std::uintptr_t RapidIterationParameters = 0x48;
            static constexpr std::uintptr_t CachedScriptVMId = 0xD0;
            static constexpr std::uintptr_t CachedScriptVM = 0x108;
            static constexpr std::uintptr_t CachedParameterCollectionReferences = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Usage", 0x30, "EnumProperty"},
            {"UsageId", 0x34, "StructProperty"},
            {"RapidIterationParameters", 0x48, "StructProperty"},
            {"CachedScriptVMId", 0xD0, "StructProperty"},
            {"CachedScriptVM", 0x108, "StructProperty"},
            {"CachedParameterCollectionReferences", 0x220, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "RaiseOnGPUCompilationComplete",
        }};
    };

    struct NiagaraScriptAsyncCompileData
    {
        static constexpr std::string_view Name = "NiagaraScriptAsyncCompileData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RapidIterationParameters = 0x80;
            static constexpr std::uintptr_t NamedDataInterfaces = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RapidIterationParameters", 0x80, "ArrayProperty"},
            {"NamedDataInterfaces", 0x90, "MapProperty"},
        }};
    };

    struct NiagaraScriptDataInterfaceCompileInfo
    {
        static constexpr std::string_view Name = "NiagaraScriptDataInterfaceCompileInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t UserPtrIdx = 0x4;
            static constexpr std::uintptr_t Type = 0x8;
            static constexpr std::uintptr_t RegisteredParameterMapRead = 0x20;
            static constexpr std::uintptr_t RegisteredParameterMapWrite = 0x24;
            static constexpr std::uintptr_t bIsPlaceholder = 0x28;
            static constexpr std::uintptr_t SourceEmitterName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"UserPtrIdx", 0x4, "IntProperty"},
            {"Type", 0x8, "StructProperty"},
            {"RegisteredParameterMapRead", 0x20, "NameProperty"},
            {"RegisteredParameterMapWrite", 0x24, "NameProperty"},
            {"bIsPlaceholder", 0x28, "BoolProperty"},
            {"SourceEmitterName", 0x30, "StrProperty"},
        }};
    };

    struct NiagaraScriptDataInterfaceInfo
    {
        static constexpr std::string_view Name = "NiagaraScriptDataInterfaceInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataInterface = 0x0;
            static constexpr std::uintptr_t Name = 0x8;
            static constexpr std::uintptr_t CompileName = 0xC;
            static constexpr std::uintptr_t UserPtrIdx = 0x10;
            static constexpr std::uintptr_t Type = 0x18;
            static constexpr std::uintptr_t RegisteredParameterMapRead = 0x30;
            static constexpr std::uintptr_t RegisteredParameterMapWrite = 0x34;
            static constexpr std::uintptr_t SourceEmitterName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DataInterface", 0x0, "ObjectProperty"},
            {"Name", 0x8, "NameProperty"},
            {"CompileName", 0xC, "NameProperty"},
            {"UserPtrIdx", 0x10, "IntProperty"},
            {"Type", 0x18, "StructProperty"},
            {"RegisteredParameterMapRead", 0x30, "NameProperty"},
            {"RegisteredParameterMapWrite", 0x34, "NameProperty"},
            {"SourceEmitterName", 0x38, "StrProperty"},
        }};
    };

    struct NiagaraScriptDataKey
    {
        static constexpr std::string_view Name = "NiagaraScriptDataKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterHandleId = 0x0;
            static constexpr std::uintptr_t ScriptUsage = 0x10;
            static constexpr std::uintptr_t ScriptUsageId = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EmitterHandleId", 0x0, "StructProperty"},
            {"ScriptUsage", 0x10, "EnumProperty"},
            {"ScriptUsageId", 0x14, "StructProperty"},
        }};
    };

    struct NiagaraScriptDataUsageInfo
    {
        static constexpr std::string_view Name = "NiagaraScriptDataUsageInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bReadsAttributeData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bReadsAttributeData", 0x0, "BoolProperty"},
        }};
    };

    struct NiagaraScriptExecutionPaddingInfo
    {
        static constexpr std::string_view Name = "NiagaraScriptExecutionPaddingInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SrcOffset = 0x0;
            static constexpr std::uintptr_t DestOffset = 0x2;
            static constexpr std::uintptr_t SrcSize = 0x4;
            static constexpr std::uintptr_t DestSize = 0x6;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SrcOffset", 0x0, "UInt16Property"},
            {"DestOffset", 0x2, "UInt16Property"},
            {"SrcSize", 0x4, "UInt16Property"},
            {"DestSize", 0x6, "UInt16Property"},
        }};
    };

    struct NiagaraScriptExecutionParameterStore
    {
        static constexpr std::string_view Name = "NiagaraScriptExecutionParameterStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraParameterStore";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterSize = 0x88;
            static constexpr std::uintptr_t bInitialized = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParameterSize", 0x88, "IntProperty"},
            {"bInitialized", 0x8C, "BoolProperty"},
        }};
    };

    struct NiagaraScriptHighlight
    {
        static constexpr std::string_view Name = "NiagaraScriptHighlight";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Color = 0x0;
            static constexpr std::uintptr_t DisplayName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Color", 0x0, "StructProperty"},
            {"DisplayName", 0x10, "TextProperty"},
        }};
    };

    struct NiagaraScriptInstanceParameterStore
    {
        static constexpr std::string_view Name = "NiagaraScriptInstanceParameterStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraParameterStore";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x8;
            static constexpr std::uintptr_t SortedParameterOffsets = 0x10;
            static constexpr std::uintptr_t ParameterData = 0x20;
            static constexpr std::uintptr_t DataInterfaces = 0x30;
            static constexpr std::uintptr_t UObjects = 0x40;
            static constexpr std::uintptr_t OriginalPositionData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Owner", 0x8, "WeakObjectProperty"},
            {"SortedParameterOffsets", 0x10, "ArrayProperty"},
            {"ParameterData", 0x20, "ArrayProperty"},
            {"DataInterfaces", 0x30, "ArrayProperty"},
            {"UObjects", 0x40, "ArrayProperty"},
            {"OriginalPositionData", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraScriptResolvedDataInterfaceInfo
    {
        static constexpr std::string_view Name = "NiagaraScriptResolvedDataInterfaceInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t CompileName = 0x4;
            static constexpr std::uintptr_t ResolvedSourceEmitterName = 0x8;
            static constexpr std::uintptr_t ResolvedVariable = 0x18;
            static constexpr std::uintptr_t ParameterStoreVariable = 0x20;
            static constexpr std::uintptr_t bIsInternal = 0x28;
            static constexpr std::uintptr_t ResolvedDataInterface = 0x30;
            static constexpr std::uintptr_t UserPtrIdx = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"CompileName", 0x4, "NameProperty"},
            {"ResolvedSourceEmitterName", 0x8, "StrProperty"},
            {"ResolvedVariable", 0x18, "StructProperty"},
            {"ParameterStoreVariable", 0x20, "StructProperty"},
            {"bIsInternal", 0x28, "BoolProperty"},
            {"ResolvedDataInterface", 0x30, "ObjectProperty"},
            {"UserPtrIdx", 0x38, "IntProperty"},
        }};
    };

    struct NiagaraScriptRuntimeCompiledData
    {
        static constexpr std::string_view Name = "NiagaraScriptRuntimeCompiledData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ResolvedDataInterfaces = 0x0;
            static constexpr std::uintptr_t ResolvedUserDataInterfaceBindings = 0x10;
            static constexpr std::uintptr_t ResolvedUObjects = 0x20;
            static constexpr std::uintptr_t SimTarget = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ResolvedDataInterfaces", 0x0, "ArrayProperty"},
            {"ResolvedUserDataInterfaceBindings", 0x10, "ArrayProperty"},
            {"ResolvedUObjects", 0x20, "ArrayProperty"},
            {"SimTarget", 0x30, "EnumProperty"},
        }};
    };

    struct NiagaraScriptRuntimeCompiledDataEditorReference
    {
        static constexpr std::string_view Name = "NiagaraScriptRuntimeCompiledDataEditorReference";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ScriptRuntimeCompiledDataMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScriptRuntimeCompiledDataMap", 0x28, "MapProperty"},
        }};
    };

    struct NiagaraScriptRuntimeCookedData
    {
        static constexpr std::string_view Name = "NiagaraScriptRuntimeCookedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CookedScriptRuntimeCompiledData = 0x0;
            static constexpr std::uintptr_t CookedExecutionParameterStore = 0x38;
            static constexpr std::uintptr_t CookedRapidIterationBindings = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CookedScriptRuntimeCompiledData", 0x0, "StructProperty"},
            {"CookedExecutionParameterStore", 0x38, "StructProperty"},
            {"CookedRapidIterationBindings", 0xC8, "ArrayProperty"},
        }};
    };

    struct NiagaraScriptSourceBase
    {
        static constexpr std::string_view Name = "NiagaraScriptSourceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraScriptUObjectCompileInfo
    {
        static constexpr std::string_view Name = "NiagaraScriptUObjectCompileInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Variable = 0x0;
            static constexpr std::uintptr_t Object = 0x8;
            static constexpr std::uintptr_t ObjectPath = 0x10;
            static constexpr std::uintptr_t RegisteredParameterMapRead = 0x28;
            static constexpr std::uintptr_t RegisteredParameterMapWrites = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Variable", 0x0, "StructProperty"},
            {"Object", 0x8, "ObjectProperty"},
            {"ObjectPath", 0x10, "StructProperty"},
            {"RegisteredParameterMapRead", 0x28, "NameProperty"},
            {"RegisteredParameterMapWrites", 0x30, "ArrayProperty"},
        }};
    };

    struct NiagaraScriptVariableBinding
    {
        static constexpr std::string_view Name = "NiagaraScriptVariableBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct NiagaraSettings
    {
        static constexpr std::string_view Name = "NiagaraSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bSystemsSupportLargeWorldCoordinates = 0x30;
            static constexpr std::uintptr_t LargeWorldCoordinateTileUpdateMode = 0x31;
            static constexpr std::uintptr_t LargeWorldCoordinateMaxTilesBeforeReset = 0x34;
            static constexpr std::uintptr_t bEnforceStrictStackTypes = 0x38;
            static constexpr std::uintptr_t bAccurateQuatInterpolation = 0x39;
            static constexpr std::uintptr_t InvalidNamespaceWriteSeverity = 0x3A;
            static constexpr std::uintptr_t bLimitDeltaTime = 0x3B;
            static constexpr std::uintptr_t MaxDeltaTimePerTick = 0x3C;
            static constexpr std::uintptr_t DefaultEffectType = 0x40;
            static constexpr std::uintptr_t bAllowCreateActorFromSystemWithNoEffectType = 0x58;
            static constexpr std::uintptr_t PositionPinTypeColor = 0x5C;
            static constexpr std::uintptr_t ByteCodeStripOption = 0x6C;
            static constexpr std::uintptr_t QualityLevels = 0x70;
            static constexpr std::uintptr_t ComponentRendererWarningsPerClass = 0x80;
            static constexpr std::uintptr_t DefaultRenderTargetFormat = 0x90;
            static constexpr std::uintptr_t DefaultGridFormat = 0x91;
            static constexpr std::uintptr_t DefaultRendererMotionVectorSetting = 0x92;
            static constexpr std::uintptr_t DefaultPixelCoverageMode = 0x93;
            static constexpr std::uintptr_t DefaultSortPrecision = 0x94;
            static constexpr std::uintptr_t DefaultGpuTranslucentLatency = 0x95;
            static constexpr std::uintptr_t DefaultLightInverseExposureBlend = 0x98;
            static constexpr std::uintptr_t NDISkelMesh_SupportReadingDeformedGeometry = 0x9C;
            static constexpr std::uintptr_t NDISkelMesh_Support16BitIndexWeight = 0x9D;
            static constexpr std::uintptr_t NDISkelMesh_GpuMaxInfluences = 0x9E;
            static constexpr std::uintptr_t NDISkelMesh_GpuUniformSamplingFormat = 0x9F;
            static constexpr std::uintptr_t NDISkelMesh_AdjacencyTriangleIndexFormat = 0xA0;
            static constexpr std::uintptr_t NDIStaticMesh_AllowDistanceFields = 0xA1;
            static constexpr std::uintptr_t NDICollisionQuery_AsyncGpuTraceProviderOrder = 0xA8;
            static constexpr std::uintptr_t SimCacheAuxiliaryFileBasePath = 0xB8;
            static constexpr std::uintptr_t SimCacheMaxCPUMemoryVolumetrics = 0xC8;
            static constexpr std::uintptr_t PlatformSetRedirects = 0xD0;
            static constexpr std::uintptr_t DefaultPSOPrecacheSettings = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"bSystemsSupportLargeWorldCoordinates", 0x30, "BoolProperty"},
            {"LargeWorldCoordinateTileUpdateMode", 0x31, "EnumProperty"},
            {"LargeWorldCoordinateMaxTilesBeforeReset", 0x34, "UInt32Property"},
            {"bEnforceStrictStackTypes", 0x38, "BoolProperty"},
            {"bAccurateQuatInterpolation", 0x39, "BoolProperty"},
            {"InvalidNamespaceWriteSeverity", 0x3A, "EnumProperty"},
            {"bLimitDeltaTime", 0x3B, "BoolProperty"},
            {"MaxDeltaTimePerTick", 0x3C, "FloatProperty"},
            {"DefaultEffectType", 0x40, "StructProperty"},
            {"bAllowCreateActorFromSystemWithNoEffectType", 0x58, "BoolProperty"},
            {"PositionPinTypeColor", 0x5C, "StructProperty"},
            {"ByteCodeStripOption", 0x6C, "EnumProperty"},
            {"QualityLevels", 0x70, "ArrayProperty"},
            {"ComponentRendererWarningsPerClass", 0x80, "MapProperty"},
            {"DefaultRenderTargetFormat", 0x90, "ByteProperty"},
            {"DefaultGridFormat", 0x91, "EnumProperty"},
            {"DefaultRendererMotionVectorSetting", 0x92, "EnumProperty"},
            {"DefaultPixelCoverageMode", 0x93, "EnumProperty"},
            {"DefaultSortPrecision", 0x94, "EnumProperty"},
            {"DefaultGpuTranslucentLatency", 0x95, "EnumProperty"},
            {"DefaultLightInverseExposureBlend", 0x98, "FloatProperty"},
            {"NDISkelMesh_SupportReadingDeformedGeometry", 0x9C, "BoolProperty"},
            {"NDISkelMesh_Support16BitIndexWeight", 0x9D, "BoolProperty"},
            {"NDISkelMesh_GpuMaxInfluences", 0x9E, "ByteProperty"},
            {"NDISkelMesh_GpuUniformSamplingFormat", 0x9F, "ByteProperty"},
            {"NDISkelMesh_AdjacencyTriangleIndexFormat", 0xA0, "ByteProperty"},
            {"NDIStaticMesh_AllowDistanceFields", 0xA1, "BoolProperty"},
            {"NDICollisionQuery_AsyncGpuTraceProviderOrder", 0xA8, "ArrayProperty"},
            {"SimCacheAuxiliaryFileBasePath", 0xB8, "StrProperty"},
            {"SimCacheMaxCPUMemoryVolumetrics", 0xC8, "Int64Property"},
            {"PlatformSetRedirects", 0xD0, "ArrayProperty"},
            {"DefaultPSOPrecacheSettings", 0xE0, "StructProperty"},
        }};
    };

    struct NiagaraSettingsProfile
    {
        static constexpr std::string_view Name = "NiagaraSettingsProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraSettingsProfileSet
    {
        static constexpr std::string_view Name = "NiagaraSettingsProfileSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraSharedDataID_StaticMesh
    {
        static constexpr std::string_view Name = "NiagaraSharedDataID_StaticMesh";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraID";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
            static constexpr std::uintptr_t AcquireTag = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Index", 0x0, "IntProperty"},
            {"AcquireTag", 0x4, "IntProperty"},
        }};
    };

    struct NiagaraSignificanceHandler
    {
        static constexpr std::string_view Name = "NiagaraSignificanceHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraSignificanceHandlerAge
    {
        static constexpr std::string_view Name = "NiagaraSignificanceHandlerAge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraSignificanceHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraSignificanceHandlerDistance
    {
        static constexpr std::string_view Name = "NiagaraSignificanceHandlerDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraSignificanceHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraSimCache
    {
        static constexpr std::string_view Name = "NiagaraSimCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheGuid = 0x28;
            static constexpr std::uintptr_t SoftNiagaraSystem = 0x38;
            static constexpr std::uintptr_t StartSeconds = 0x58;
            static constexpr std::uintptr_t DurationSeconds = 0x5C;
            static constexpr std::uintptr_t CreateParameters = 0x60;
            static constexpr std::uintptr_t bNeedsReadComponentMappingRecache = 0xB8;
            static constexpr std::uintptr_t bCanRunAsync = 0xB9;
            static constexpr std::uintptr_t CacheLayout = 0xC0;
            static constexpr std::uintptr_t CacheFrames = 0x180;
            static constexpr std::uintptr_t DataInterfaceStorage = 0x190;
            static constexpr std::uintptr_t DebugData = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CacheGuid", 0x28, "StructProperty"},
            {"SoftNiagaraSystem", 0x38, "SoftObjectProperty"},
            {"StartSeconds", 0x58, "FloatProperty"},
            {"DurationSeconds", 0x5C, "FloatProperty"},
            {"CreateParameters", 0x60, "StructProperty"},
            {"bNeedsReadComponentMappingRecache", 0xB8, "BoolProperty"},
            {"bCanRunAsync", 0xB9, "BoolProperty"},
            {"CacheLayout", 0xC0, "StructProperty"},
            {"CacheFrames", 0x180, "ArrayProperty"},
            {"DataInterfaceStorage", 0x190, "MapProperty"},
            {"DebugData", 0x1A0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "GetAttributeCaptureMode",
            "GetEmitterName",
            "GetEmitterNames",
            "GetNumEmitters",
            "GetNumFrames",
            "GetStartSeconds",
            "IsCacheValid",
            "IsEmpty",
            "ReadColorAttribute",
            "ReadDataInterfaceAs",
            "ReadFloatAttribute",
            "ReadIDAttribute",
            "ReadIntAttribute",
            "ReadPositionAttribute",
            "ReadPositionAttributeWithRebase",
            "ReadQuatAttribute",
            "ReadQuatAttributeWithRebase",
            "ReadVector2Attribute",
            "ReadVector4Attribute",
            "ReadVectorAttribute",
        }};
    };

    struct NiagaraSimCacheCaptureParameters
    {
        static constexpr std::string_view Name = "NiagaraSimCacheCaptureParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAppendToSimCache = 0x0;
            static constexpr std::uintptr_t bCaptureFixedNumberOfFrames = 0x0;
            static constexpr std::uintptr_t NumFrames = 0x4;
            static constexpr std::uintptr_t CaptureRate = 0x8;
            static constexpr std::uintptr_t bUseTimeout = 0xC;
            static constexpr std::uintptr_t TimeoutFrameCount = 0x10;
            static constexpr std::uintptr_t bCaptureAllFramesImmediatly = 0x14;
            static constexpr std::uintptr_t ImmediateCaptureDeltaTime = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bAppendToSimCache", 0x0, "BoolProperty"},
            {"bCaptureFixedNumberOfFrames", 0x0, "BoolProperty"},
            {"NumFrames", 0x4, "IntProperty"},
            {"CaptureRate", 0x8, "IntProperty"},
            {"bUseTimeout", 0xC, "BoolProperty"},
            {"TimeoutFrameCount", 0x10, "IntProperty"},
            {"bCaptureAllFramesImmediatly", 0x14, "BoolProperty"},
            {"ImmediateCaptureDeltaTime", 0x18, "FloatProperty"},
        }};
    };

    struct NiagaraSimCacheCreateParameters
    {
        static constexpr std::string_view Name = "NiagaraSimCacheCreateParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeCaptureMode = 0x0;
            static constexpr std::uintptr_t bAllowDataInterfaceCaching = 0x4;
            static constexpr std::uintptr_t bAllowInterpolation = 0x4;
            static constexpr std::uintptr_t bAllowRebasing = 0x4;
            static constexpr std::uintptr_t bAllowSerializeLargeCache = 0x4;
            static constexpr std::uintptr_t bAllowVelocityExtrapolation = 0x4;
            static constexpr std::uintptr_t bIncludeDebugData = 0x4;
            static constexpr std::uintptr_t bInterpolateAllTypes = 0x4;
            static constexpr std::uintptr_t RebaseIncludeAttributes = 0x8;
            static constexpr std::uintptr_t RebaseExcludeAttributes = 0x18;
            static constexpr std::uintptr_t InterpolationIncludeAttributes = 0x28;
            static constexpr std::uintptr_t InterpolationExcludeAttributes = 0x38;
            static constexpr std::uintptr_t ExplicitCaptureAttributes = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"AttributeCaptureMode", 0x0, "EnumProperty"},
            {"bAllowDataInterfaceCaching", 0x4, "BoolProperty"},
            {"bAllowInterpolation", 0x4, "BoolProperty"},
            {"bAllowRebasing", 0x4, "BoolProperty"},
            {"bAllowSerializeLargeCache", 0x4, "BoolProperty"},
            {"bAllowVelocityExtrapolation", 0x4, "BoolProperty"},
            {"bIncludeDebugData", 0x4, "BoolProperty"},
            {"bInterpolateAllTypes", 0x4, "BoolProperty"},
            {"RebaseIncludeAttributes", 0x8, "ArrayProperty"},
            {"RebaseExcludeAttributes", 0x18, "ArrayProperty"},
            {"InterpolationIncludeAttributes", 0x28, "ArrayProperty"},
            {"InterpolationExcludeAttributes", 0x38, "ArrayProperty"},
            {"ExplicitCaptureAttributes", 0x48, "ArrayProperty"},
        }};
    };

    struct NiagaraSimCacheCustomStorageInterface
    {
        static constexpr std::string_view Name = "NiagaraSimCacheCustomStorageInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraSimCacheDataBuffers
    {
        static constexpr std::string_view Name = "NiagaraSimCacheDataBuffers";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumInstances = 0x0;
            static constexpr std::uintptr_t IDAcquireTag = 0x4;
            static constexpr std::uintptr_t IDToIndexTableElements = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumInstances", 0x0, "UInt32Property"},
            {"IDAcquireTag", 0x4, "UInt32Property"},
            {"IDToIndexTableElements", 0x8, "UInt32Property"},
        }};
    };

    struct NiagaraSimCacheDataBuffersLayout
    {
        static constexpr std::string_view Name = "NiagaraSimCacheDataBuffersLayout";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutName = 0x0;
            static constexpr std::uintptr_t SimTarget = 0x4;
            static constexpr std::uintptr_t Variables = 0x8;
            static constexpr std::uintptr_t FloatCount = 0x18;
            static constexpr std::uintptr_t HalfCount = 0x1A;
            static constexpr std::uintptr_t Int32Count = 0x1C;
            static constexpr std::uintptr_t bLocalSpace = 0x1E;
            static constexpr std::uintptr_t bAllowInterpolation = 0x1F;
            static constexpr std::uintptr_t bAllowVelocityExtrapolation = 0x20;
            static constexpr std::uintptr_t RebaseVariableNames = 0x28;
            static constexpr std::uintptr_t InterpVariableNames = 0x38;
            static constexpr std::uintptr_t ComponentVelocity = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"LayoutName", 0x0, "NameProperty"},
            {"SimTarget", 0x4, "EnumProperty"},
            {"Variables", 0x8, "ArrayProperty"},
            {"FloatCount", 0x18, "UInt16Property"},
            {"HalfCount", 0x1A, "UInt16Property"},
            {"Int32Count", 0x1C, "UInt16Property"},
            {"bLocalSpace", 0x1E, "BoolProperty"},
            {"bAllowInterpolation", 0x1F, "BoolProperty"},
            {"bAllowVelocityExtrapolation", 0x20, "BoolProperty"},
            {"RebaseVariableNames", 0x28, "ArrayProperty"},
            {"InterpVariableNames", 0x38, "ArrayProperty"},
            {"ComponentVelocity", 0x48, "UInt16Property"},
        }};
    };

    struct NiagaraSimCacheDebugData
    {
        static constexpr std::string_view Name = "NiagaraSimCacheDebugData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemStateData = 0x28;
            static constexpr std::uintptr_t Frames = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SystemStateData", 0x28, "StructProperty"},
            {"Frames", 0x98, "ArrayProperty"},
        }};
    };

    struct NiagaraSimCacheDebugDataFrame
    {
        static constexpr std::string_view Name = "NiagaraSimCacheDebugDataFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugParameterStores = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugParameterStores", 0x0, "MapProperty"},
        }};
    };

    struct NiagaraSimCacheEmitterFrame
    {
        static constexpr std::string_view Name = "NiagaraSimCacheEmitterFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalBounds = 0x0;
            static constexpr std::uintptr_t TotalSpawnedParticles = 0x38;
            static constexpr std::uintptr_t ParticleDataBuffers = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LocalBounds", 0x0, "StructProperty"},
            {"TotalSpawnedParticles", 0x38, "IntProperty"},
            {"ParticleDataBuffers", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraSimCacheFrame
    {
        static constexpr std::string_view Name = "NiagaraSimCacheFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalToWorld = 0x0;
            static constexpr std::uintptr_t LWCTile = 0x60;
            static constexpr std::uintptr_t SimulationAge = 0x6C;
            static constexpr std::uintptr_t SimulationTickCount = 0x70;
            static constexpr std::uintptr_t SystemData = 0x78;
            static constexpr std::uintptr_t EmitterData = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LocalToWorld", 0x0, "StructProperty"},
            {"LWCTile", 0x60, "StructProperty"},
            {"SimulationAge", 0x6C, "FloatProperty"},
            {"SimulationTickCount", 0x70, "IntProperty"},
            {"SystemData", 0x78, "StructProperty"},
            {"EmitterData", 0x148, "ArrayProperty"},
        }};
    };

    struct NiagaraSimCacheFunctionLibrary
    {
        static constexpr std::string_view Name = "NiagaraSimCacheFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CaptureNiagaraSimCacheImmediate",
            "CreateNiagaraSimCache",
        }};
    };

    struct NiagaraSimCacheLayout
    {
        static constexpr std::string_view Name = "NiagaraSimCacheLayout";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemLayout = 0x0;
            static constexpr std::uintptr_t EmitterLayouts = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SystemLayout", 0x0, "StructProperty"},
            {"EmitterLayouts", 0xB0, "ArrayProperty"},
        }};
    };

    struct NiagaraSimCacheSystemFrame
    {
        static constexpr std::string_view Name = "NiagaraSimCacheSystemFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalBounds = 0x0;
            static constexpr std::uintptr_t SystemDataBuffers = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocalBounds", 0x0, "StructProperty"},
            {"SystemDataBuffers", 0x38, "StructProperty"},
        }};
    };

    struct NiagaraSimCacheVariable
    {
        static constexpr std::string_view Name = "NiagaraSimCacheVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Variable = 0x0;
            static constexpr std::uintptr_t FloatOffset = 0x8;
            static constexpr std::uintptr_t FloatCount = 0xA;
            static constexpr std::uintptr_t HalfOffset = 0xC;
            static constexpr std::uintptr_t HalfCount = 0xE;
            static constexpr std::uintptr_t Int32Offset = 0x10;
            static constexpr std::uintptr_t Int32Count = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Variable", 0x0, "StructProperty"},
            {"FloatOffset", 0x8, "UInt16Property"},
            {"FloatCount", 0xA, "UInt16Property"},
            {"HalfOffset", 0xC, "UInt16Property"},
            {"HalfCount", 0xE, "UInt16Property"},
            {"Int32Offset", 0x10, "UInt16Property"},
            {"Int32Count", 0x12, "UInt16Property"},
        }};
    };

    struct NiagaraSimStageExecutionLoopData
    {
        static constexpr std::string_view Name = "NiagaraSimStageExecutionLoopData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumLoopsBinding = 0x0;
            static constexpr std::uintptr_t NumLoops = 0x4;
            static constexpr std::uintptr_t StartStageIndex = 0x8;
            static constexpr std::uintptr_t EndStageIndex = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NumLoopsBinding", 0x0, "NameProperty"},
            {"NumLoops", 0x4, "IntProperty"},
            {"StartStageIndex", 0x8, "IntProperty"},
            {"EndStageIndex", 0xC, "IntProperty"},
        }};
    };

    struct NiagaraSimStageExecutionLoopEditorData
    {
        static constexpr std::string_view Name = "NiagaraSimStageExecutionLoopEditorData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraSimpleClientInfo
    {
        static constexpr std::string_view Name = "NiagaraSimpleClientInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Systems = 0x0;
            static constexpr std::uintptr_t Actors = 0x10;
            static constexpr std::uintptr_t Components = 0x20;
            static constexpr std::uintptr_t Emitters = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Systems", 0x0, "ArrayProperty"},
            {"Actors", 0x10, "ArrayProperty"},
            {"Components", 0x20, "ArrayProperty"},
            {"Emitters", 0x30, "ArrayProperty"},
        }};
    };

    struct NiagaraSimulationStageBase
    {
        static constexpr std::string_view Name = "NiagaraSimulationStageBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraMergeable";
        struct Offsets
        {
            static constexpr std::uintptr_t Script = 0x28;
            static constexpr std::uintptr_t SimulationStageName = 0x30;
            static constexpr std::uintptr_t bEnabled = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Script", 0x28, "ObjectProperty"},
            {"SimulationStageName", 0x30, "NameProperty"},
            {"bEnabled", 0x34, "BoolProperty"},
        }};
    };

    struct NiagaraSimulationStageGeneric
    {
        static constexpr std::string_view Name = "NiagaraSimulationStageGeneric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraSimulationStageBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledBinding = 0x38;
            static constexpr std::uintptr_t IterationSource = 0x4C;
            static constexpr std::uintptr_t NumIterations = 0x50;
            static constexpr std::uintptr_t ExecuteBehavior = 0x68;
            static constexpr std::uintptr_t bDisablePartialParticleUpdate = 0x6C;
            static constexpr std::uintptr_t DataInterface = 0x70;
            static constexpr std::uintptr_t bParticleIterationStateEnabled = 0x88;
            static constexpr std::uintptr_t ParticleIterationStateBinding = 0x8C;
            static constexpr std::uintptr_t ParticleIterationStateRange = 0xA0;
            static constexpr std::uintptr_t bGpuDispatchForceLinear = 0xA8;
            static constexpr std::uintptr_t bOverrideGpuDispatchNumThreads = 0xA8;
            static constexpr std::uintptr_t OverrideGpuDispatchNumThreadsX = 0xB0;
            static constexpr std::uintptr_t OverrideGpuDispatchNumThreadsY = 0xC8;
            static constexpr std::uintptr_t OverrideGpuDispatchNumThreadsZ = 0xE0;
            static constexpr std::uintptr_t DirectDispatchType = 0xF8;
            static constexpr std::uintptr_t DirectDispatchElementType = 0xF9;
            static constexpr std::uintptr_t ElementCountX = 0x100;
            static constexpr std::uintptr_t ElementCountY = 0x118;
            static constexpr std::uintptr_t ElementCountZ = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"EnabledBinding", 0x38, "StructProperty"},
            {"IterationSource", 0x4C, "EnumProperty"},
            {"NumIterations", 0x50, "StructProperty"},
            {"ExecuteBehavior", 0x68, "EnumProperty"},
            {"bDisablePartialParticleUpdate", 0x6C, "BoolProperty"},
            {"DataInterface", 0x70, "StructProperty"},
            {"bParticleIterationStateEnabled", 0x88, "BoolProperty"},
            {"ParticleIterationStateBinding", 0x8C, "StructProperty"},
            {"ParticleIterationStateRange", 0xA0, "StructProperty"},
            {"bGpuDispatchForceLinear", 0xA8, "BoolProperty"},
            {"bOverrideGpuDispatchNumThreads", 0xA8, "BoolProperty"},
            {"OverrideGpuDispatchNumThreadsX", 0xB0, "StructProperty"},
            {"OverrideGpuDispatchNumThreadsY", 0xC8, "StructProperty"},
            {"OverrideGpuDispatchNumThreadsZ", 0xE0, "StructProperty"},
            {"DirectDispatchType", 0xF8, "EnumProperty"},
            {"DirectDispatchElementType", 0xF9, "EnumProperty"},
            {"ElementCountX", 0x100, "StructProperty"},
            {"ElementCountY", 0x118, "StructProperty"},
            {"ElementCountZ", 0x130, "StructProperty"},
        }};
    };

    struct NiagaraSpawnInfo
    {
        static constexpr std::string_view Name = "NiagaraSpawnInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Count = 0x0;
            static constexpr std::uintptr_t InterpStartDt = 0x4;
            static constexpr std::uintptr_t IntervalDt = 0x8;
            static constexpr std::uintptr_t SpawnGroup = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Count", 0x0, "IntProperty"},
            {"InterpStartDt", 0x4, "FloatProperty"},
            {"IntervalDt", 0x8, "FloatProperty"},
            {"SpawnGroup", 0xC, "IntProperty"},
        }};
    };

    struct NiagaraSpriteRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraSpriteRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x98;
            static constexpr std::uintptr_t MaterialUserParamBinding = 0xA0;
            static constexpr std::uintptr_t SourceMode = 0xB8;
            static constexpr std::uintptr_t Alignment = 0xB9;
            static constexpr std::uintptr_t FacingMode = 0xBA;
            static constexpr std::uintptr_t SortMode = 0xBB;
            static constexpr std::uintptr_t MacroUVRadius = 0xBC;
            static constexpr std::uintptr_t PivotInUVSpace = 0xC0;
            static constexpr std::uintptr_t SubImageSize = 0xD0;
            static constexpr std::uintptr_t bCastShadows = 0xE0;
            static constexpr std::uintptr_t bEnableCameraDistanceCulling = 0xE0;
            static constexpr std::uintptr_t bRemoveHMDRollInVR = 0xE0;
            static constexpr std::uintptr_t bSortOnlyWhenTranslucent = 0xE0;
            static constexpr std::uintptr_t bSubImageBlend = 0xE0;
            static constexpr std::uintptr_t SortPrecision = 0xE1;
            static constexpr std::uintptr_t GpuTranslucentLatency = 0xE2;
            static constexpr std::uintptr_t PixelCoverageMode = 0xE3;
            static constexpr std::uintptr_t PixelCoverageBlend = 0xE4;
            static constexpr std::uintptr_t MinFacingCameraBlendDistance = 0xE8;
            static constexpr std::uintptr_t MaxFacingCameraBlendDistance = 0xEC;
            static constexpr std::uintptr_t MinCameraDistance = 0xF0;
            static constexpr std::uintptr_t MaxCameraDistance = 0xF4;
            static constexpr std::uintptr_t RendererVisibility = 0xF8;
            static constexpr std::uintptr_t PositionBinding = 0xFC;
            static constexpr std::uintptr_t ColorBinding = 0x110;
            static constexpr std::uintptr_t VelocityBinding = 0x124;
            static constexpr std::uintptr_t SpriteRotationBinding = 0x138;
            static constexpr std::uintptr_t SpriteSizeBinding = 0x14C;
            static constexpr std::uintptr_t SpriteFacingBinding = 0x160;
            static constexpr std::uintptr_t SpriteAlignmentBinding = 0x174;
            static constexpr std::uintptr_t SubImageIndexBinding = 0x188;
            static constexpr std::uintptr_t DynamicMaterialBinding = 0x19C;
            static constexpr std::uintptr_t DynamicMaterial1Binding = 0x1B0;
            static constexpr std::uintptr_t DynamicMaterial2Binding = 0x1C4;
            static constexpr std::uintptr_t DynamicMaterial3Binding = 0x1D8;
            static constexpr std::uintptr_t CameraOffsetBinding = 0x1EC;
            static constexpr std::uintptr_t UVScaleBinding = 0x200;
            static constexpr std::uintptr_t PivotOffsetBinding = 0x214;
            static constexpr std::uintptr_t MaterialRandomBinding = 0x228;
            static constexpr std::uintptr_t CustomSortingBinding = 0x23C;
            static constexpr std::uintptr_t NormalizedAgeBinding = 0x250;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0x264;
            static constexpr std::uintptr_t MaterialParameters = 0x278;
            static constexpr std::uintptr_t PrevPositionBinding = 0x2C8;
            static constexpr std::uintptr_t PrevVelocityBinding = 0x2DC;
            static constexpr std::uintptr_t PrevSpriteRotationBinding = 0x2F0;
            static constexpr std::uintptr_t PrevSpriteSizeBinding = 0x304;
            static constexpr std::uintptr_t PrevSpriteFacingBinding = 0x318;
            static constexpr std::uintptr_t PrevSpriteAlignmentBinding = 0x32C;
            static constexpr std::uintptr_t PrevCameraOffsetBinding = 0x340;
            static constexpr std::uintptr_t PrevPivotOffsetBinding = 0x354;
            static constexpr std::uintptr_t MaterialParamValidMask = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 52> Properties{{
            {"Material", 0x98, "ObjectProperty"},
            {"MaterialUserParamBinding", 0xA0, "StructProperty"},
            {"SourceMode", 0xB8, "EnumProperty"},
            {"Alignment", 0xB9, "EnumProperty"},
            {"FacingMode", 0xBA, "EnumProperty"},
            {"SortMode", 0xBB, "EnumProperty"},
            {"MacroUVRadius", 0xBC, "FloatProperty"},
            {"PivotInUVSpace", 0xC0, "StructProperty"},
            {"SubImageSize", 0xD0, "StructProperty"},
            {"bCastShadows", 0xE0, "BoolProperty"},
            {"bEnableCameraDistanceCulling", 0xE0, "BoolProperty"},
            {"bRemoveHMDRollInVR", 0xE0, "BoolProperty"},
            {"bSortOnlyWhenTranslucent", 0xE0, "BoolProperty"},
            {"bSubImageBlend", 0xE0, "BoolProperty"},
            {"SortPrecision", 0xE1, "EnumProperty"},
            {"GpuTranslucentLatency", 0xE2, "EnumProperty"},
            {"PixelCoverageMode", 0xE3, "EnumProperty"},
            {"PixelCoverageBlend", 0xE4, "FloatProperty"},
            {"MinFacingCameraBlendDistance", 0xE8, "FloatProperty"},
            {"MaxFacingCameraBlendDistance", 0xEC, "FloatProperty"},
            {"MinCameraDistance", 0xF0, "FloatProperty"},
            {"MaxCameraDistance", 0xF4, "FloatProperty"},
            {"RendererVisibility", 0xF8, "UInt32Property"},
            {"PositionBinding", 0xFC, "StructProperty"},
            {"ColorBinding", 0x110, "StructProperty"},
            {"VelocityBinding", 0x124, "StructProperty"},
            {"SpriteRotationBinding", 0x138, "StructProperty"},
            {"SpriteSizeBinding", 0x14C, "StructProperty"},
            {"SpriteFacingBinding", 0x160, "StructProperty"},
            {"SpriteAlignmentBinding", 0x174, "StructProperty"},
            {"SubImageIndexBinding", 0x188, "StructProperty"},
            {"DynamicMaterialBinding", 0x19C, "StructProperty"},
            {"DynamicMaterial1Binding", 0x1B0, "StructProperty"},
            {"DynamicMaterial2Binding", 0x1C4, "StructProperty"},
            {"DynamicMaterial3Binding", 0x1D8, "StructProperty"},
            {"CameraOffsetBinding", 0x1EC, "StructProperty"},
            {"UVScaleBinding", 0x200, "StructProperty"},
            {"PivotOffsetBinding", 0x214, "StructProperty"},
            {"MaterialRandomBinding", 0x228, "StructProperty"},
            {"CustomSortingBinding", 0x23C, "StructProperty"},
            {"NormalizedAgeBinding", 0x250, "StructProperty"},
            {"RendererVisibilityTagBinding", 0x264, "StructProperty"},
            {"MaterialParameters", 0x278, "StructProperty"},
            {"PrevPositionBinding", 0x2C8, "StructProperty"},
            {"PrevVelocityBinding", 0x2DC, "StructProperty"},
            {"PrevSpriteRotationBinding", 0x2F0, "StructProperty"},
            {"PrevSpriteSizeBinding", 0x304, "StructProperty"},
            {"PrevSpriteFacingBinding", 0x318, "StructProperty"},
            {"PrevSpriteAlignmentBinding", 0x32C, "StructProperty"},
            {"PrevCameraOffsetBinding", 0x340, "StructProperty"},
            {"PrevPivotOffsetBinding", 0x354, "StructProperty"},
            {"MaterialParamValidMask", 0x368, "UInt32Property"},
        }};
    };

    struct NiagaraStackSection
    {
        static constexpr std::string_view Name = "NiagaraStackSection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionIdentifier = 0x0;
            static constexpr std::uintptr_t SectionDisplayName = 0x8;
            static constexpr std::uintptr_t Categories = 0x18;
            static constexpr std::uintptr_t ToolTip = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SectionIdentifier", 0x0, "NameProperty"},
            {"SectionDisplayName", 0x8, "TextProperty"},
            {"Categories", 0x18, "ArrayProperty"},
            {"ToolTip", 0x28, "TextProperty"},
            {"bEnabled", 0x38, "BoolProperty"},
        }};
    };

    struct NiagaraStatScope
    {
        static constexpr std::string_view Name = "NiagaraStatScope";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FullName = 0x0;
            static constexpr std::uintptr_t FriendlyName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FullName", 0x0, "NameProperty"},
            {"FriendlyName", 0x4, "NameProperty"},
        }};
    };

    struct NiagaraStatelessDynamicParameterSet
    {
        static constexpr std::string_view Name = "NiagaraStatelessDynamicParameterSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bWChannelEnabled = 0x0;
            static constexpr std::uintptr_t bXChannelEnabled = 0x0;
            static constexpr std::uintptr_t bYChannelEnabled = 0x0;
            static constexpr std::uintptr_t bZChannelEnabled = 0x0;
            static constexpr std::uintptr_t XChannelDistribution = 0x8;
            static constexpr std::uintptr_t YChannelDistribution = 0x48;
            static constexpr std::uintptr_t ZChannelDistribution = 0x88;
            static constexpr std::uintptr_t WChannelDistribution = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bWChannelEnabled", 0x0, "BoolProperty"},
            {"bXChannelEnabled", 0x0, "BoolProperty"},
            {"bYChannelEnabled", 0x0, "BoolProperty"},
            {"bZChannelEnabled", 0x0, "BoolProperty"},
            {"XChannelDistribution", 0x8, "StructProperty"},
            {"YChannelDistribution", 0x48, "StructProperty"},
            {"ZChannelDistribution", 0x88, "StructProperty"},
            {"WChannelDistribution", 0xC8, "StructProperty"},
        }};
    };

    struct NiagaraStatelessEmitter
    {
        static constexpr std::string_view Name = "NiagaraStatelessEmitter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraEmitterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterTemplate = 0x48;
            static constexpr std::uintptr_t bDeterministic = 0x50;
            static constexpr std::uintptr_t AllowedFeatureMask = 0x54;
            static constexpr std::uintptr_t RandomSeed = 0x58;
            static constexpr std::uintptr_t FixedBounds = 0x60;
            static constexpr std::uintptr_t EmitterState = 0x98;
            static constexpr std::uintptr_t SpawnInfos = 0x128;
            static constexpr std::uintptr_t Modules = 0x138;
            static constexpr std::uintptr_t RendererProperties = 0x148;
            static constexpr std::uintptr_t Platforms = 0x158;
            static constexpr std::uintptr_t ScalabilityOverrides = 0x188;
            static constexpr std::uintptr_t ParticleDataSetCompiledData = 0x198;
            static constexpr std::uintptr_t ShaderOutputVariableOffsets = 0x1D8;
            static constexpr std::uintptr_t CachedParameterCollectionReferences = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"EmitterTemplate", 0x48, "ObjectProperty"},
            {"bDeterministic", 0x50, "BoolProperty"},
            {"AllowedFeatureMask", 0x54, "UInt32Property"},
            {"RandomSeed", 0x58, "IntProperty"},
            {"FixedBounds", 0x60, "StructProperty"},
            {"EmitterState", 0x98, "StructProperty"},
            {"SpawnInfos", 0x128, "ArrayProperty"},
            {"Modules", 0x138, "ArrayProperty"},
            {"RendererProperties", 0x148, "ArrayProperty"},
            {"Platforms", 0x158, "StructProperty"},
            {"ScalabilityOverrides", 0x188, "StructProperty"},
            {"ParticleDataSetCompiledData", 0x198, "StructProperty"},
            {"ShaderOutputVariableOffsets", 0x1D8, "ArrayProperty"},
            {"CachedParameterCollectionReferences", 0x1E8, "ArrayProperty"},
        }};
    };

    struct NiagaraStatelessEmitterDefault
    {
        static constexpr std::string_view Name = "NiagaraStatelessEmitterDefault";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessEmitterTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t Modules = 0x28;
            static constexpr std::uintptr_t NumShaderOutputVariables = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Modules", 0x28, "ArrayProperty"},
            {"NumShaderOutputVariables", 0x38, "IntProperty"},
        }};
    };

    struct NiagaraStatelessEmitterTemplate
    {
        static constexpr std::string_view Name = "NiagaraStatelessEmitterTemplate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Modules = 0x28;
            static constexpr std::uintptr_t NumShaderOutputVariables = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Modules", 0x28, "ArrayProperty"},
            {"NumShaderOutputVariables", 0x38, "IntProperty"},
        }};
    };

    struct NiagaraStatelessExpression
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpression";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraStatelessExpressionColor
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpression";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraStatelessExpressionColorAdd
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionColorAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionColor";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionColorBinding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionColorBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionColor";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionColorConstant
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionColorConstant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionColor";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionColorDivide
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionColorDivide";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionColor";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionColorFromFloatBinding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionColorFromFloatBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionColor";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionColorMultiply
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionColorMultiply";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionColor";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionColorSubtract
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionColorSubtract";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionColor";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionFloat
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpression";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraStatelessExpressionFloatAdd
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionFloatAdd";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionFloatBinding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionFloatBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionFloatConstant
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionFloatConstant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "FloatProperty"},
        }};
    };

    struct NiagaraStatelessExpressionFloatDivide
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionFloatDivide";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionFloatMultiply
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionFloatMultiply";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionFloatSubtract
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionFloatSubtract";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionFloat";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec2
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpression";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraStatelessExpressionVec2Add
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec2Add";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec2";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec2Binding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec2Binding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec2";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec2Constant
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec2Constant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec2";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec2Divide
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec2Divide";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec2";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec2FromFloatBinding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec2FromFloatBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec2";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec2Multiply
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec2Multiply";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec2";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec2Subtract
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec2Subtract";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec2";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec3
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec3";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpression";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraStatelessExpressionVec3Add
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec3Add";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec3";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec3Binding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec3Binding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec3";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec3Constant
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec3Constant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec3";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec3Divide
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec3Divide";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec3";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec3FromFloatBinding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec3FromFloatBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec3";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec3Multiply
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec3Multiply";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec3";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec3Subtract
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec3Subtract";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec3";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec4
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec4";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpression";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraStatelessExpressionVec4Add
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec4Add";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec4";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec4Binding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec4Binding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec4";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec4Constant
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec4Constant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec4";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x10, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec4Divide
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec4Divide";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec4";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec4FromFloatBinding
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec4FromFloatBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec4";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"A", 0x8, "NameProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec4Multiply
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec4Multiply";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec4";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessExpressionVec4Subtract
    {
        static constexpr std::string_view Name = "NiagaraStatelessExpressionVec4Subtract";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraStatelessExpressionVec4";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x8;
            static constexpr std::uintptr_t B = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"A", 0x8, "StructProperty"},
            {"B", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraMergeable";
        struct Offsets
        {
            static constexpr std::uintptr_t bModuleEnabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bModuleEnabled", 0x28, "BoolProperty"},
        }};
    };

    struct NiagaraStatelessModule_AccelerationForce
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_AccelerationForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t AccelerationDistribution = 0x30;
            static constexpr std::uintptr_t CoordinateSpace = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AccelerationDistribution", 0x30, "StructProperty"},
            {"CoordinateSpace", 0x70, "EnumProperty"},
        }};
    };

    struct NiagaraStatelessModule_AddVelocity
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_AddVelocity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t VelocityType = 0x30;
            static constexpr std::uintptr_t LinearVelocityDistribution = 0x38;
            static constexpr std::uintptr_t LinearVelocityScale = 0x78;
            static constexpr std::uintptr_t ConeVelocityDistribution = 0xA8;
            static constexpr std::uintptr_t ConeVelocityScale = 0xD8;
            static constexpr std::uintptr_t ConeRotationType = 0x108;
            static constexpr std::uintptr_t ConeRotation = 0x110;
            static constexpr std::uintptr_t ConeDirection = 0x150;
            static constexpr std::uintptr_t ConeAngle = 0x190;
            static constexpr std::uintptr_t InnerCone = 0x194;
            static constexpr std::uintptr_t PointVelocityDistribution = 0x198;
            static constexpr std::uintptr_t PointVelocityScale = 0x1C8;
            static constexpr std::uintptr_t PointOrigin = 0x1F8;
            static constexpr std::uintptr_t bSpeedFalloffFromConeAxisEnabled = 0x204;
            static constexpr std::uintptr_t SpeedFalloffFromConeAxis = 0x208;
            static constexpr std::uintptr_t CoordinateSpace = 0x20C;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"VelocityType", 0x30, "EnumProperty"},
            {"LinearVelocityDistribution", 0x38, "StructProperty"},
            {"LinearVelocityScale", 0x78, "StructProperty"},
            {"ConeVelocityDistribution", 0xA8, "StructProperty"},
            {"ConeVelocityScale", 0xD8, "StructProperty"},
            {"ConeRotationType", 0x108, "EnumProperty"},
            {"ConeRotation", 0x110, "StructProperty"},
            {"ConeDirection", 0x150, "StructProperty"},
            {"ConeAngle", 0x190, "FloatProperty"},
            {"InnerCone", 0x194, "FloatProperty"},
            {"PointVelocityDistribution", 0x198, "StructProperty"},
            {"PointVelocityScale", 0x1C8, "StructProperty"},
            {"PointOrigin", 0x1F8, "StructProperty"},
            {"bSpeedFalloffFromConeAxisEnabled", 0x204, "BoolProperty"},
            {"SpeedFalloffFromConeAxis", 0x208, "FloatProperty"},
            {"CoordinateSpace", 0x20C, "EnumProperty"},
        }};
    };

    struct NiagaraStatelessModule_ApplyOwnerScaleToAttributes
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_ApplyOwnerScaleToAttributes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemScaleData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SystemScaleData", 0x30, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_CalculateAccurateVelocity
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_CalculateAccurateVelocity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bModuleEnabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bModuleEnabled", 0x28, "BoolProperty"},
        }};
    };

    struct NiagaraStatelessModule_CameraOffset
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_CameraOffset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraOffsetDistribution = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraOffsetDistribution", 0x30, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_CurlNoiseForce
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_CurlNoiseForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t NoiseStrength = 0x30;
            static constexpr std::uintptr_t NoiseFrequency = 0x34;
            static constexpr std::uintptr_t bBiasNoiseFieldEnabled = 0x38;
            static constexpr std::uintptr_t BiasNoiseField = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NoiseStrength", 0x30, "FloatProperty"},
            {"NoiseFrequency", 0x34, "FloatProperty"},
            {"bBiasNoiseFieldEnabled", 0x38, "BoolProperty"},
            {"BiasNoiseField", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_DecalAttributes
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_DecalAttributes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyOrientation = 0x30;
            static constexpr std::uintptr_t bApplySize = 0x31;
            static constexpr std::uintptr_t bApplyFade = 0x32;
            static constexpr std::uintptr_t orientation = 0x38;
            static constexpr std::uintptr_t OrientationCoordinateSpace = 0x78;
            static constexpr std::uintptr_t Size = 0x80;
            static constexpr std::uintptr_t Fade = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bApplyOrientation", 0x30, "BoolProperty"},
            {"bApplySize", 0x31, "BoolProperty"},
            {"bApplyFade", 0x32, "BoolProperty"},
            {"orientation", 0x38, "StructProperty"},
            {"OrientationCoordinateSpace", 0x78, "EnumProperty"},
            {"Size", 0x80, "StructProperty"},
            {"Fade", 0xC0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsOrientationEnabled",
        }};
    };

    struct NiagaraStatelessModule_Drag
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_Drag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t DragDistribution = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DragDistribution", 0x30, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_DynamicMaterialParameters
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_DynamicMaterialParameters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bParameter0Enabled = 0x30;
            static constexpr std::uintptr_t bParameter1Enabled = 0x30;
            static constexpr std::uintptr_t bParameter2Enabled = 0x30;
            static constexpr std::uintptr_t bParameter3Enabled = 0x30;
            static constexpr std::uintptr_t Parameter0 = 0x38;
            static constexpr std::uintptr_t Parameter1 = 0x140;
            static constexpr std::uintptr_t Parameter2 = 0x248;
            static constexpr std::uintptr_t Parameter3 = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bParameter0Enabled", 0x30, "BoolProperty"},
            {"bParameter1Enabled", 0x30, "BoolProperty"},
            {"bParameter2Enabled", 0x30, "BoolProperty"},
            {"bParameter3Enabled", 0x30, "BoolProperty"},
            {"Parameter0", 0x38, "StructProperty"},
            {"Parameter1", 0x140, "StructProperty"},
            {"Parameter2", 0x248, "StructProperty"},
            {"Parameter3", 0x350, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_GravityForce
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_GravityForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GravityDistribution = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GravityDistribution", 0x30, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_InitialMeshOrientation
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_InitialMeshOrientation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshOrientationMode = 0x30;
            static constexpr std::uintptr_t OrientationVector = 0x38;
            static constexpr std::uintptr_t MeshAxisToOrient = 0x78;
            static constexpr std::uintptr_t Rotation = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MeshOrientationMode", 0x30, "EnumProperty"},
            {"OrientationVector", 0x38, "StructProperty"},
            {"MeshAxisToOrient", 0x78, "StructProperty"},
            {"Rotation", 0xB8, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_InitializeParticle
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_InitializeParticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t LifetimeDistribution = 0x30;
            static constexpr std::uintptr_t ColorDistribution = 0x60;
            static constexpr std::uintptr_t MassDistribution = 0xA0;
            static constexpr std::uintptr_t SpriteSizeDistribution = 0xD0;
            static constexpr std::uintptr_t SpriteRotationDistribution = 0x108;
            static constexpr std::uintptr_t MeshScaleDistribution = 0x138;
            static constexpr std::uintptr_t bWriteRibbonWidth = 0x178;
            static constexpr std::uintptr_t RibbonWidthDistribution = 0x180;
            static constexpr std::uintptr_t InitialPositionDistribution = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LifetimeDistribution", 0x30, "StructProperty"},
            {"ColorDistribution", 0x60, "StructProperty"},
            {"MassDistribution", 0xA0, "StructProperty"},
            {"SpriteSizeDistribution", 0xD0, "StructProperty"},
            {"SpriteRotationDistribution", 0x108, "StructProperty"},
            {"MeshScaleDistribution", 0x138, "StructProperty"},
            {"bWriteRibbonWidth", 0x178, "BoolProperty"},
            {"RibbonWidthDistribution", 0x180, "StructProperty"},
            {"InitialPositionDistribution", 0x1B0, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_LightAttributes
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_LightAttributes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyDiffuseScale = 0x30;
            static constexpr std::uintptr_t bApplyFalloffExponent = 0x30;
            static constexpr std::uintptr_t bApplyRadius = 0x30;
            static constexpr std::uintptr_t bApplySpecularScale = 0x30;
            static constexpr std::uintptr_t bApplyVolumetricScattering = 0x30;
            static constexpr std::uintptr_t Radius = 0x38;
            static constexpr std::uintptr_t FallOffExponent = 0x78;
            static constexpr std::uintptr_t DiffuseScale = 0xB8;
            static constexpr std::uintptr_t SpecularScale = 0xF8;
            static constexpr std::uintptr_t VolumetricScattering = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bApplyDiffuseScale", 0x30, "BoolProperty"},
            {"bApplyFalloffExponent", 0x30, "BoolProperty"},
            {"bApplyRadius", 0x30, "BoolProperty"},
            {"bApplySpecularScale", 0x30, "BoolProperty"},
            {"bApplyVolumetricScattering", 0x30, "BoolProperty"},
            {"Radius", 0x38, "StructProperty"},
            {"FallOffExponent", 0x78, "StructProperty"},
            {"DiffuseScale", 0xB8, "StructProperty"},
            {"SpecularScale", 0xF8, "StructProperty"},
            {"VolumetricScattering", 0x138, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_MeshIndex
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_MeshIndex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshIndex = 0x30;
            static constexpr std::uintptr_t MeshIndexWeight = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MeshIndex", 0x30, "StructProperty"},
            {"MeshIndexWeight", 0x58, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "NeedsMeshIndexWeights",
        }};
    };

    struct NiagaraStatelessModule_MeshRotationRate
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_MeshRotationRate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseRateScale = 0x30;
            static constexpr std::uintptr_t RotationRateDistribution = 0x38;
            static constexpr std::uintptr_t RateScaleDistribution = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseRateScale", 0x30, "BoolProperty"},
            {"RotationRateDistribution", 0x38, "StructProperty"},
            {"RateScaleDistribution", 0x78, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_RotateAroundPoint
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_RotateAroundPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t Rate = 0x30;
            static constexpr std::uintptr_t Radius = 0x60;
            static constexpr std::uintptr_t InitialPhase = 0x90;
            static constexpr std::uintptr_t CenterCoordinateSpace = 0xC0;
            static constexpr std::uintptr_t Center = 0xC8;
            static constexpr std::uintptr_t RotationCoordinateSpace = 0x108;
            static constexpr std::uintptr_t RotationAxis = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Rate", 0x30, "StructProperty"},
            {"Radius", 0x60, "StructProperty"},
            {"InitialPhase", 0x90, "StructProperty"},
            {"CenterCoordinateSpace", 0xC0, "EnumProperty"},
            {"Center", 0xC8, "StructProperty"},
            {"RotationCoordinateSpace", 0x108, "EnumProperty"},
            {"RotationAxis", 0x110, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_ScaleColor
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_ScaleColor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleDistribution = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScaleDistribution", 0x30, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_ScaleMeshSize
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_ScaleMeshSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleDistribution = 0x30;
            static constexpr std::uintptr_t ScaleCurveRange = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScaleDistribution", 0x30, "StructProperty"},
            {"ScaleCurveRange", 0x70, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UseScaleCurveRange",
        }};
    };

    struct NiagaraStatelessModule_ScaleMeshSizeBySpeed
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_ScaleMeshSizeBySpeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t VelocityThreshold = 0x30;
            static constexpr std::uintptr_t MinScaleFactor = 0x60;
            static constexpr std::uintptr_t MaxScaleFactor = 0xA0;
            static constexpr std::uintptr_t bSampleScaleFactorByCurve = 0xE0;
            static constexpr std::uintptr_t SampleFactorCurve = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VelocityThreshold", 0x30, "StructProperty"},
            {"MinScaleFactor", 0x60, "StructProperty"},
            {"MaxScaleFactor", 0xA0, "StructProperty"},
            {"bSampleScaleFactorByCurve", 0xE0, "BoolProperty"},
            {"SampleFactorCurve", 0xE8, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_ScaleRibbonWidth
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_ScaleRibbonWidth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleDistribution = 0x30;
            static constexpr std::uintptr_t ScaleCurveRange = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScaleDistribution", 0x30, "StructProperty"},
            {"ScaleCurveRange", 0x70, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UseScaleCurveRange",
        }};
    };

    struct NiagaraStatelessModule_ScaleSpriteSize
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_ScaleSpriteSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleDistribution = 0x30;
            static constexpr std::uintptr_t ScaleCurveRange = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScaleDistribution", 0x30, "StructProperty"},
            {"ScaleCurveRange", 0x70, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UseScaleCurveRange",
        }};
    };

    struct NiagaraStatelessModule_ScaleSpriteSizeBySpeed
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_ScaleSpriteSizeBySpeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t VelocityThreshold = 0x30;
            static constexpr std::uintptr_t MinScaleFactor = 0x60;
            static constexpr std::uintptr_t MaxScaleFactor = 0x98;
            static constexpr std::uintptr_t bSampleScaleFactorByCurve = 0xD0;
            static constexpr std::uintptr_t SampleFactorCurve = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VelocityThreshold", 0x30, "StructProperty"},
            {"MinScaleFactor", 0x60, "StructProperty"},
            {"MaxScaleFactor", 0x98, "StructProperty"},
            {"bSampleScaleFactorByCurve", 0xD0, "BoolProperty"},
            {"SampleFactorCurve", 0xD8, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_ShapeLocation
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_ShapeLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapePrimitive = 0x30;
            static constexpr std::uintptr_t BoxSize = 0x38;
            static constexpr std::uintptr_t bBoxSurfaceOnly = 0x78;
            static constexpr std::uintptr_t BoxSurfaceExpansion = 0x79;
            static constexpr std::uintptr_t BoxSurfaceThickness = 0x80;
            static constexpr std::uintptr_t PlaneSize = 0xB0;
            static constexpr std::uintptr_t bPlaneEdgesOnly = 0xE8;
            static constexpr std::uintptr_t PlaneEdgeExpansion = 0xE9;
            static constexpr std::uintptr_t PlaneEdgeThickness = 0xF0;
            static constexpr std::uintptr_t CylinderHeight = 0x120;
            static constexpr std::uintptr_t CylinderRadius = 0x150;
            static constexpr std::uintptr_t CylinderHeightMidpoint = 0x180;
            static constexpr std::uintptr_t bCylinderSurfaceOnly = 0x1B0;
            static constexpr std::uintptr_t bCylinderSurfaceOnlyIncludeEndCaps = 0x1B1;
            static constexpr std::uintptr_t CylinderSurfaceExpansion = 0x1B2;
            static constexpr std::uintptr_t CylinderSurfaceThickness = 0x1B8;
            static constexpr std::uintptr_t RingRadius = 0x1E8;
            static constexpr std::uintptr_t DiscCoverage = 0x218;
            static constexpr std::uintptr_t RingUDistribution = 0x248;
            static constexpr std::uintptr_t SphereRadius = 0x278;
            static constexpr std::uintptr_t CoordinateSpace = 0x2A8;
            static constexpr std::uintptr_t ShapeRotation = 0x2B0;
            static constexpr std::uintptr_t ShapeScale = 0x2F0;
            static constexpr std::uintptr_t TransformOffset = 0x330;
            static constexpr std::uintptr_t TransformOffsetScale = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"ShapePrimitive", 0x30, "EnumProperty"},
            {"BoxSize", 0x38, "StructProperty"},
            {"bBoxSurfaceOnly", 0x78, "BoolProperty"},
            {"BoxSurfaceExpansion", 0x79, "EnumProperty"},
            {"BoxSurfaceThickness", 0x80, "StructProperty"},
            {"PlaneSize", 0xB0, "StructProperty"},
            {"bPlaneEdgesOnly", 0xE8, "BoolProperty"},
            {"PlaneEdgeExpansion", 0xE9, "EnumProperty"},
            {"PlaneEdgeThickness", 0xF0, "StructProperty"},
            {"CylinderHeight", 0x120, "StructProperty"},
            {"CylinderRadius", 0x150, "StructProperty"},
            {"CylinderHeightMidpoint", 0x180, "StructProperty"},
            {"bCylinderSurfaceOnly", 0x1B0, "BoolProperty"},
            {"bCylinderSurfaceOnlyIncludeEndCaps", 0x1B1, "BoolProperty"},
            {"CylinderSurfaceExpansion", 0x1B2, "EnumProperty"},
            {"CylinderSurfaceThickness", 0x1B8, "StructProperty"},
            {"RingRadius", 0x1E8, "StructProperty"},
            {"DiscCoverage", 0x218, "StructProperty"},
            {"RingUDistribution", 0x248, "StructProperty"},
            {"SphereRadius", 0x278, "StructProperty"},
            {"CoordinateSpace", 0x2A8, "EnumProperty"},
            {"ShapeRotation", 0x2B0, "StructProperty"},
            {"ShapeScale", 0x2F0, "StructProperty"},
            {"TransformOffset", 0x330, "StructProperty"},
            {"TransformOffsetScale", 0x370, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_SolveVelocitiesAndForces
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_SolveVelocitiesAndForces";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bModuleEnabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bModuleEnabled", 0x28, "BoolProperty"},
        }};
    };

    struct NiagaraStatelessModule_SpriteFacingAndAlignment
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_SpriteFacingAndAlignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bSpriteFacingEnabled = 0x30;
            static constexpr std::uintptr_t bSpriteAlignmentEnabled = 0x31;
            static constexpr std::uintptr_t SpriteFacing = 0x38;
            static constexpr std::uintptr_t SpriteAlignment = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bSpriteFacingEnabled", 0x30, "BoolProperty"},
            {"bSpriteAlignmentEnabled", 0x31, "BoolProperty"},
            {"SpriteFacing", 0x38, "StructProperty"},
            {"SpriteAlignment", 0x78, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_SpriteRotationRate
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_SpriteRotationRate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseRateScale = 0x30;
            static constexpr std::uintptr_t RotationRateDistribution = 0x38;
            static constexpr std::uintptr_t RateScaleDistribution = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseRateScale", 0x30, "BoolProperty"},
            {"RotationRateDistribution", 0x38, "StructProperty"},
            {"RateScaleDistribution", 0x68, "StructProperty"},
        }};
    };

    struct NiagaraStatelessModule_SubUVAnimation
    {
        static constexpr std::string_view Name = "NiagaraStatelessModule_SubUVAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraStatelessModule";
        struct Offsets
        {
            static constexpr std::uintptr_t NumFrames = 0x30;
            static constexpr std::uintptr_t FrameIndex = 0x38;
            static constexpr std::uintptr_t bStartFrameRangeOverride_Enabled = 0x60;
            static constexpr std::uintptr_t bEndFrameRangeOverride_Enabled = 0x61;
            static constexpr std::uintptr_t StartFrameRangeOverride = 0x64;
            static constexpr std::uintptr_t EndFrameRangeOverride = 0x68;
            static constexpr std::uintptr_t AnimationMode = 0x6C;
            static constexpr std::uintptr_t LoopsPerSecond = 0x70;
            static constexpr std::uintptr_t RandomChangeInterval = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"NumFrames", 0x30, "IntProperty"},
            {"FrameIndex", 0x38, "StructProperty"},
            {"bStartFrameRangeOverride_Enabled", 0x60, "BoolProperty"},
            {"bEndFrameRangeOverride_Enabled", 0x61, "BoolProperty"},
            {"StartFrameRangeOverride", 0x64, "IntProperty"},
            {"EndFrameRangeOverride", 0x68, "IntProperty"},
            {"AnimationMode", 0x6C, "EnumProperty"},
            {"LoopsPerSecond", 0x70, "FloatProperty"},
            {"RandomChangeInterval", 0x74, "FloatProperty"},
        }};
    };

    struct NiagaraStatelessSpawnInfo
    {
        static constexpr std::string_view Name = "NiagaraStatelessSpawnInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t SpawnTime = 0x4;
            static constexpr std::uintptr_t Amount = 0x8;
            static constexpr std::uintptr_t Rate = 0x30;
            static constexpr std::uintptr_t bEnabled = 0x60;
            static constexpr std::uintptr_t bLoopCountLimitEnabled = 0x60;
            static constexpr std::uintptr_t bSpawnProbabilityEnabled = 0x60;
            static constexpr std::uintptr_t SpawnProbability = 0x68;
            static constexpr std::uintptr_t LoopCountLimit = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"SpawnTime", 0x4, "FloatProperty"},
            {"Amount", 0x8, "StructProperty"},
            {"Rate", 0x30, "StructProperty"},
            {"bEnabled", 0x60, "BoolProperty"},
            {"bLoopCountLimitEnabled", 0x60, "BoolProperty"},
            {"bSpawnProbabilityEnabled", 0x60, "BoolProperty"},
            {"SpawnProbability", 0x68, "StructProperty"},
            {"LoopCountLimit", 0x98, "StructProperty"},
        }};
    };

    struct NiagaraStatelessSystemScaleBuildData
    {
        static constexpr std::string_view Name = "NiagaraStatelessSystemScaleBuildData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bScaleCameraOffset = 0x0;
            static constexpr std::uintptr_t bScaleForces = 0x0;
            static constexpr std::uintptr_t bScaleInitialDecalSize = 0x0;
            static constexpr std::uintptr_t bScaleInitialLightRadius = 0x0;
            static constexpr std::uintptr_t bScaleInitialRibbonWidth = 0x0;
            static constexpr std::uintptr_t bScaleInitialSpriteSize = 0x0;
            static constexpr std::uintptr_t bScaleInitialSpriteSizeBySingleAxis = 0x0;
            static constexpr std::uintptr_t bScaleInitialVelocity = 0x0;
            static constexpr std::uintptr_t bScaleInitialLightRadiusBySingleAxis = 0x1;
            static constexpr std::uintptr_t bScaleInitialRibbonWidthBySingleAxis = 0x1;
            static constexpr std::uintptr_t ScaleInitialVelocityScaleAmount = 0x4;
            static constexpr std::uintptr_t ScaleForcesScaleAmount = 0x10;
            static constexpr std::uintptr_t bScaleForcesInverseScaling = 0x1C;
            static constexpr std::uintptr_t ScaleInitialSpriteSizeScaleAmount = 0x20;
            static constexpr std::uintptr_t ScaleInitialSpriteSizeAxis = 0x24;
            static constexpr std::uintptr_t ScaleCameraOffsetAmount = 0x28;
            static constexpr std::uintptr_t ScaleInitialRibbonWidthScaleAmount = 0x2C;
            static constexpr std::uintptr_t ScaleInitialRibbonWidthScalingAxis = 0x30;
            static constexpr std::uintptr_t ScaleInitialDecalSizeScaleAmount = 0x34;
            static constexpr std::uintptr_t ScaleInitialLightRadiusScaleAmount = 0x40;
            static constexpr std::uintptr_t ScaleInitialLightRadiusScalingAxis = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bScaleCameraOffset", 0x0, "BoolProperty"},
            {"bScaleForces", 0x0, "BoolProperty"},
            {"bScaleInitialDecalSize", 0x0, "BoolProperty"},
            {"bScaleInitialLightRadius", 0x0, "BoolProperty"},
            {"bScaleInitialRibbonWidth", 0x0, "BoolProperty"},
            {"bScaleInitialSpriteSize", 0x0, "BoolProperty"},
            {"bScaleInitialSpriteSizeBySingleAxis", 0x0, "BoolProperty"},
            {"bScaleInitialVelocity", 0x0, "BoolProperty"},
            {"bScaleInitialLightRadiusBySingleAxis", 0x1, "BoolProperty"},
            {"bScaleInitialRibbonWidthBySingleAxis", 0x1, "BoolProperty"},
            {"ScaleInitialVelocityScaleAmount", 0x4, "StructProperty"},
            {"ScaleForcesScaleAmount", 0x10, "StructProperty"},
            {"bScaleForcesInverseScaling", 0x1C, "BoolProperty"},
            {"ScaleInitialSpriteSizeScaleAmount", 0x20, "FloatProperty"},
            {"ScaleInitialSpriteSizeAxis", 0x24, "EnumProperty"},
            {"ScaleCameraOffsetAmount", 0x28, "FloatProperty"},
            {"ScaleInitialRibbonWidthScaleAmount", 0x2C, "FloatProperty"},
            {"ScaleInitialRibbonWidthScalingAxis", 0x30, "EnumProperty"},
            {"ScaleInitialDecalSizeScaleAmount", 0x34, "StructProperty"},
            {"ScaleInitialLightRadiusScaleAmount", 0x40, "FloatProperty"},
            {"ScaleInitialLightRadiusScalingAxis", 0x44, "EnumProperty"},
        }};
    };

    struct NiagaraStructConversionStep
    {
        static constexpr std::string_view Name = "NiagaraStructConversionStep";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LWCBytes = 0x0;
            static constexpr std::uintptr_t LWCOffset = 0x4;
            static constexpr std::uintptr_t SimulationBytes = 0x8;
            static constexpr std::uintptr_t SimulationOffset = 0xC;
            static constexpr std::uintptr_t ConversionType = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LWCBytes", 0x0, "IntProperty"},
            {"LWCOffset", 0x4, "IntProperty"},
            {"SimulationBytes", 0x8, "IntProperty"},
            {"SimulationOffset", 0xC, "IntProperty"},
            {"ConversionType", 0x10, "EnumProperty"},
        }};
    };

    struct NiagaraSystem
    {
        static constexpr std::string_view Name = "NiagaraSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FXSystemAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideCastShadow = 0x60;
            static constexpr std::uintptr_t bOverrideCustomDepthStencilValue = 0x60;
            static constexpr std::uintptr_t bOverrideCustomDepthStencilWriteMask = 0x60;
            static constexpr std::uintptr_t bOverrideReceivesDecals = 0x60;
            static constexpr std::uintptr_t bOverrideRenderCustomDepth = 0x60;
            static constexpr std::uintptr_t bOverrideTranslucencySortDistanceOffset = 0x60;
            static constexpr std::uintptr_t bOverrideTranslucencySortPriority = 0x60;
            static constexpr std::uintptr_t bSupportLargeWorldCoordinates = 0x60;
            static constexpr std::uintptr_t bCastShadow = 0x61;
            static constexpr std::uintptr_t bInitialOwnerVelocityFromActor = 0x61;
            static constexpr std::uintptr_t bReceivesDecals = 0x61;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x61;
            static constexpr std::uintptr_t LargeWorldCoordinateTileUpdateMode = 0x62;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x64;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x68;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x6C;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x70;
            static constexpr std::uintptr_t bDumpDebugEmitterInfo = 0x74;
            static constexpr std::uintptr_t bDumpDebugSystemInfo = 0x74;
            static constexpr std::uintptr_t bOverrideScalabilitySettings = 0x74;
            static constexpr std::uintptr_t bRequireCurrentFrameData = 0x74;
            static constexpr std::uintptr_t bAlwaysRender = 0x78;
            static constexpr std::uintptr_t bFixedBounds = 0x78;
            static constexpr std::uintptr_t EffectType = 0x80;
            static constexpr std::uintptr_t bAllowCullingForLocalPlayersOverride = 0x88;
            static constexpr std::uintptr_t bOverrideAllowCullingForLocalPlayers = 0x88;
            static constexpr std::uintptr_t SystemScalabilityOverrides = 0x90;
            static constexpr std::uintptr_t Platforms = 0xA0;
            static constexpr std::uintptr_t EmitterHandles = 0xD0;
            static constexpr std::uintptr_t ParameterCollectionOverrides = 0xE0;
            static constexpr std::uintptr_t SystemSpawnScript = 0xF0;
            static constexpr std::uintptr_t SystemUpdateScript = 0xF8;
            static constexpr std::uintptr_t SystemCompiledData = 0x110;
            static constexpr std::uintptr_t ScriptRuntimeCookedDataMap = 0x348;
            static constexpr std::uintptr_t ExposedParameters = 0x358;
            static constexpr std::uintptr_t FixedBounds = 0x3F0;
            static constexpr std::uintptr_t bUseInitialStreamingBounds = 0x428;
            static constexpr std::uintptr_t InitialStreamingBounds = 0x430;
            static constexpr std::uintptr_t bNeedsGPUContextInitForDataInterfaces = 0x468;
            static constexpr std::uintptr_t bDeterminism = 0x469;
            static constexpr std::uintptr_t bFixedTickDelta = 0x46A;
            static constexpr std::uintptr_t RandomSeed = 0x46C;
            static constexpr std::uintptr_t WarmupTime = 0x470;
            static constexpr std::uintptr_t WarmupTickCount = 0x474;
            static constexpr std::uintptr_t WarmupTickDelta = 0x478;
            static constexpr std::uintptr_t FixedTickDeltaTime = 0x47C;
            static constexpr std::uintptr_t MaxEmitterImportance = 0x480;
            static constexpr std::uintptr_t bAllowSystemStateFastPath = 0x518;
            static constexpr std::uintptr_t bSystemStateFastPathEnabled = 0x518;
            static constexpr std::uintptr_t SystemStateDataStruct = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 50> Properties{{
            {"bOverrideCastShadow", 0x60, "BoolProperty"},
            {"bOverrideCustomDepthStencilValue", 0x60, "BoolProperty"},
            {"bOverrideCustomDepthStencilWriteMask", 0x60, "BoolProperty"},
            {"bOverrideReceivesDecals", 0x60, "BoolProperty"},
            {"bOverrideRenderCustomDepth", 0x60, "BoolProperty"},
            {"bOverrideTranslucencySortDistanceOffset", 0x60, "BoolProperty"},
            {"bOverrideTranslucencySortPriority", 0x60, "BoolProperty"},
            {"bSupportLargeWorldCoordinates", 0x60, "BoolProperty"},
            {"bCastShadow", 0x61, "BoolProperty"},
            {"bInitialOwnerVelocityFromActor", 0x61, "BoolProperty"},
            {"bReceivesDecals", 0x61, "BoolProperty"},
            {"bRenderCustomDepth", 0x61, "BoolProperty"},
            {"LargeWorldCoordinateTileUpdateMode", 0x62, "OptionalProperty"},
            {"CustomDepthStencilWriteMask", 0x64, "EnumProperty"},
            {"CustomDepthStencilValue", 0x68, "IntProperty"},
            {"TranslucencySortPriority", 0x6C, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x70, "FloatProperty"},
            {"bDumpDebugEmitterInfo", 0x74, "BoolProperty"},
            {"bDumpDebugSystemInfo", 0x74, "BoolProperty"},
            {"bOverrideScalabilitySettings", 0x74, "BoolProperty"},
            {"bRequireCurrentFrameData", 0x74, "BoolProperty"},
            {"bAlwaysRender", 0x78, "BoolProperty"},
            {"bFixedBounds", 0x78, "BoolProperty"},
            {"EffectType", 0x80, "ObjectProperty"},
            {"bAllowCullingForLocalPlayersOverride", 0x88, "BoolProperty"},
            {"bOverrideAllowCullingForLocalPlayers", 0x88, "BoolProperty"},
            {"SystemScalabilityOverrides", 0x90, "StructProperty"},
            {"Platforms", 0xA0, "StructProperty"},
            {"EmitterHandles", 0xD0, "ArrayProperty"},
            {"ParameterCollectionOverrides", 0xE0, "ArrayProperty"},
            {"SystemSpawnScript", 0xF0, "ObjectProperty"},
            {"SystemUpdateScript", 0xF8, "ObjectProperty"},
            {"SystemCompiledData", 0x110, "StructProperty"},
            {"ScriptRuntimeCookedDataMap", 0x348, "MapProperty"},
            {"ExposedParameters", 0x358, "StructProperty"},
            {"FixedBounds", 0x3F0, "StructProperty"},
            {"bUseInitialStreamingBounds", 0x428, "BoolProperty"},
            {"InitialStreamingBounds", 0x430, "StructProperty"},
            {"bNeedsGPUContextInitForDataInterfaces", 0x468, "BoolProperty"},
            {"bDeterminism", 0x469, "BoolProperty"},
            {"bFixedTickDelta", 0x46A, "BoolProperty"},
            {"RandomSeed", 0x46C, "IntProperty"},
            {"WarmupTime", 0x470, "FloatProperty"},
            {"WarmupTickCount", 0x474, "IntProperty"},
            {"WarmupTickDelta", 0x478, "FloatProperty"},
            {"FixedTickDeltaTime", 0x47C, "FloatProperty"},
            {"MaxEmitterImportance", 0x480, "EnumProperty"},
            {"bAllowSystemStateFastPath", 0x518, "BoolProperty"},
            {"bSystemStateFastPathEnabled", 0x518, "BoolProperty"},
            {"SystemStateDataStruct", 0x528, "StructProperty"},
        }};
    };

    struct NiagaraSystemAsyncCompileResults
    {
        static constexpr std::string_view Name = "NiagaraSystemAsyncCompileResults";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootObjects = 0x0;
            static constexpr std::uintptr_t ExposedVariables = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RootObjects", 0x0, "ArrayProperty"},
            {"ExposedVariables", 0x28, "ArrayProperty"},
        }};
    };

    struct NiagaraSystemCollection
    {
        static constexpr std::string_view Name = "NiagaraSystemCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemCollection = 0x28;
            static constexpr std::uintptr_t bLoadImmediately = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SystemCollection", 0x28, "StructProperty"},
            {"bLoadImmediately", 0x58, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetSystems",
            "LoadAsync",
            "LoadSynchronous",
            "Num",
            "Release",
        }};
    };

    struct NiagaraSystemCollectionData
    {
        static constexpr std::string_view Name = "NiagaraSystemCollectionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Systems = 0x0;
            static constexpr std::uintptr_t SystemsInternal = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Systems", 0x0, "ArrayProperty"},
            {"SystemsInternal", 0x10, "ArrayProperty"},
        }};
    };

    struct NiagaraSystemCompiledData
    {
        static constexpr std::string_view Name = "NiagaraSystemCompiledData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceParamStore = 0x0;
            static constexpr std::uintptr_t DataSetCompiledData = 0x88;
            static constexpr std::uintptr_t SpawnInstanceParamsDataSetCompiledData = 0xC8;
            static constexpr std::uintptr_t UpdateInstanceParamsDataSetCompiledData = 0x108;
            static constexpr std::uintptr_t SpawnInstanceGlobalBinding = 0x148;
            static constexpr std::uintptr_t SpawnInstanceSystemBinding = 0x168;
            static constexpr std::uintptr_t SpawnInstanceOwnerBinding = 0x188;
            static constexpr std::uintptr_t SpawnInstanceEmitterBindings = 0x1A8;
            static constexpr std::uintptr_t UpdateInstanceGlobalBinding = 0x1B8;
            static constexpr std::uintptr_t UpdateInstanceSystemBinding = 0x1D8;
            static constexpr std::uintptr_t UpdateInstanceOwnerBinding = 0x1F8;
            static constexpr std::uintptr_t UpdateInstanceEmitterBindings = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"InstanceParamStore", 0x0, "StructProperty"},
            {"DataSetCompiledData", 0x88, "StructProperty"},
            {"SpawnInstanceParamsDataSetCompiledData", 0xC8, "StructProperty"},
            {"UpdateInstanceParamsDataSetCompiledData", 0x108, "StructProperty"},
            {"SpawnInstanceGlobalBinding", 0x148, "StructProperty"},
            {"SpawnInstanceSystemBinding", 0x168, "StructProperty"},
            {"SpawnInstanceOwnerBinding", 0x188, "StructProperty"},
            {"SpawnInstanceEmitterBindings", 0x1A8, "ArrayProperty"},
            {"UpdateInstanceGlobalBinding", 0x1B8, "StructProperty"},
            {"UpdateInstanceSystemBinding", 0x1D8, "StructProperty"},
            {"UpdateInstanceOwnerBinding", 0x1F8, "StructProperty"},
            {"UpdateInstanceEmitterBindings", 0x218, "ArrayProperty"},
        }};
    };

    struct NiagaraSystemPSOPrecacheSettings
    {
        static constexpr std::string_view Name = "NiagaraSystemPSOPrecacheSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayMode = 0x0;
            static constexpr std::uintptr_t PreCachePriorityBoost = 0x1;
            static constexpr std::uintptr_t PrecachingTime = 0x2;
            static constexpr std::uintptr_t bCacheOnLoad = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DelayMode", 0x0, "EnumProperty"},
            {"PreCachePriorityBoost", 0x1, "EnumProperty"},
            {"PrecachingTime", 0x2, "EnumProperty"},
            {"bCacheOnLoad", 0x3, "BoolProperty"},
        }};
    };

    struct NiagaraSystemReadinessSettings
    {
        static constexpr std::string_view Name = "NiagaraSystemReadinessSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraSettingsProfileSet";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x28;
            static constexpr std::uintptr_t Profiles = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Parent", 0x28, "ObjectProperty"},
            {"Profiles", 0x30, "MapProperty"},
        }};
    };

    struct NiagaraSystemScalabilityOverride
    {
        static constexpr std::string_view Name = "NiagaraSystemScalabilityOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraSystemScalabilitySettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideCullProxySettings = 0x98;
            static constexpr std::uintptr_t bOverrideDistanceSettings = 0x98;
            static constexpr std::uintptr_t bOverrideGlobalBudgetScalingSettings = 0x98;
            static constexpr std::uintptr_t bOverrideInstanceCountSettings = 0x98;
            static constexpr std::uintptr_t bOverridePerSystemInstanceCountSettings = 0x98;
            static constexpr std::uintptr_t bOverrideVisibilitySettings = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bOverrideCullProxySettings", 0x98, "BoolProperty"},
            {"bOverrideDistanceSettings", 0x98, "BoolProperty"},
            {"bOverrideGlobalBudgetScalingSettings", 0x98, "BoolProperty"},
            {"bOverrideInstanceCountSettings", 0x98, "BoolProperty"},
            {"bOverridePerSystemInstanceCountSettings", 0x98, "BoolProperty"},
            {"bOverrideVisibilitySettings", 0x98, "BoolProperty"},
        }};
    };

    struct NiagaraSystemScalabilityOverrides
    {
        static constexpr std::string_view Name = "NiagaraSystemScalabilityOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Overrides = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overrides", 0x0, "ArrayProperty"},
        }};
    };

    struct NiagaraSystemScalabilitySettings
    {
        static constexpr std::string_view Name = "NiagaraSystemScalabilitySettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Platforms = 0x0;
            static constexpr std::uintptr_t bCullByDistance = 0x30;
            static constexpr std::uintptr_t bCullMaxInstanceCount = 0x30;
            static constexpr std::uintptr_t bCullPerSystemMaxInstanceCount = 0x30;
            static constexpr std::uintptr_t MaxDistance = 0x34;
            static constexpr std::uintptr_t bCullByMaxTimeWithoutRender = 0x38;
            static constexpr std::uintptr_t MaxInstances = 0x3C;
            static constexpr std::uintptr_t MaxSystemInstances = 0x40;
            static constexpr std::uintptr_t MaxTimeWithoutRender = 0x44;
            static constexpr std::uintptr_t CullProxyMode = 0x48;
            static constexpr std::uintptr_t MaxSystemProxies = 0x4C;
            static constexpr std::uintptr_t VisibilityCulling = 0x50;
            static constexpr std::uintptr_t BudgetScaling = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Platforms", 0x0, "StructProperty"},
            {"bCullByDistance", 0x30, "BoolProperty"},
            {"bCullMaxInstanceCount", 0x30, "BoolProperty"},
            {"bCullPerSystemMaxInstanceCount", 0x30, "BoolProperty"},
            {"MaxDistance", 0x34, "FloatProperty"},
            {"bCullByMaxTimeWithoutRender", 0x38, "BoolProperty"},
            {"MaxInstances", 0x3C, "IntProperty"},
            {"MaxSystemInstances", 0x40, "IntProperty"},
            {"MaxTimeWithoutRender", 0x44, "FloatProperty"},
            {"CullProxyMode", 0x48, "EnumProperty"},
            {"MaxSystemProxies", 0x4C, "IntProperty"},
            {"VisibilityCulling", 0x50, "StructProperty"},
            {"BudgetScaling", 0x5C, "StructProperty"},
        }};
    };

    struct NiagaraSystemScalabilitySettingsArray
    {
        static constexpr std::string_view Name = "NiagaraSystemScalabilitySettingsArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x0, "ArrayProperty"},
        }};
    };

    struct NiagaraSystemSimCacheCaptureReply
    {
        static constexpr std::string_view Name = "NiagaraSystemSimCacheCaptureReply";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentName = 0x0;
            static constexpr std::uintptr_t SimCacheData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ComponentName", 0x0, "NameProperty"},
            {"SimCacheData", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraSystemSimCacheCaptureRequest
    {
        static constexpr std::string_view Name = "NiagaraSystemSimCacheCaptureRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentName = 0x0;
            static constexpr std::uintptr_t CaptureDelayFrames = 0x4;
            static constexpr std::uintptr_t CaptureFrames = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ComponentName", 0x0, "NameProperty"},
            {"CaptureDelayFrames", 0x4, "UInt32Property"},
            {"CaptureFrames", 0x8, "UInt32Property"},
        }};
    };

    struct NiagaraSystemStateData
    {
        static constexpr std::string_view Name = "NiagaraSystemStateData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bDelayFirstLoopOnly = 0x0;
            static constexpr std::uintptr_t bIgnoreSystemState = 0x0;
            static constexpr std::uintptr_t bLoopDelayEnabled = 0x0;
            static constexpr std::uintptr_t bRecalculateDelayEachLoop = 0x0;
            static constexpr std::uintptr_t bRecalculateDurationEachLoop = 0x0;
            static constexpr std::uintptr_t bRunSpawnScript = 0x0;
            static constexpr std::uintptr_t bRunUpdateScript = 0x0;
            static constexpr std::uintptr_t InactiveResponse = 0x4;
            static constexpr std::uintptr_t LoopBehavior = 0x5;
            static constexpr std::uintptr_t LoopDuration = 0x8;
            static constexpr std::uintptr_t LoopCount = 0x38;
            static constexpr std::uintptr_t LoopDelay = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bDelayFirstLoopOnly", 0x0, "BoolProperty"},
            {"bIgnoreSystemState", 0x0, "BoolProperty"},
            {"bLoopDelayEnabled", 0x0, "BoolProperty"},
            {"bRecalculateDelayEachLoop", 0x0, "BoolProperty"},
            {"bRecalculateDurationEachLoop", 0x0, "BoolProperty"},
            {"bRunSpawnScript", 0x0, "BoolProperty"},
            {"bRunUpdateScript", 0x0, "BoolProperty"},
            {"InactiveResponse", 0x4, "EnumProperty"},
            {"LoopBehavior", 0x5, "EnumProperty"},
            {"LoopDuration", 0x8, "StructProperty"},
            {"LoopCount", 0x38, "IntProperty"},
            {"LoopDelay", 0x40, "StructProperty"},
        }};
    };

    struct NiagaraSystemUpdateContext
    {
        static constexpr std::string_view Name = "NiagaraSystemUpdateContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentsToReset = 0x0;
            static constexpr std::uintptr_t ComponentsToReInit = 0x10;
            static constexpr std::uintptr_t ComponentsToNotifySimDestroy = 0x20;
            static constexpr std::uintptr_t ComponentsToDestroyInstance = 0x30;
            static constexpr std::uintptr_t SystemSimsToDestroy = 0x40;
            static constexpr std::uintptr_t SystemSimsToRecache = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ComponentsToReset", 0x0, "ArrayProperty"},
            {"ComponentsToReInit", 0x10, "ArrayProperty"},
            {"ComponentsToNotifySimDestroy", 0x20, "ArrayProperty"},
            {"ComponentsToDestroyInstance", 0x30, "ArrayProperty"},
            {"SystemSimsToDestroy", 0x40, "ArrayProperty"},
            {"SystemSimsToRecache", 0x50, "ArrayProperty"},
        }};
    };

    struct NiagaraSystemVisibilityCullingSettings
    {
        static constexpr std::string_view Name = "NiagaraSystemVisibilityCullingSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowPreCullingByViewFrustum = 0x0;
            static constexpr std::uintptr_t bCullByViewFrustum = 0x0;
            static constexpr std::uintptr_t bCullWhenNotRendered = 0x0;
            static constexpr std::uintptr_t MaxTimeOutsideViewFrustum = 0x4;
            static constexpr std::uintptr_t MaxTimeWithoutRender = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bAllowPreCullingByViewFrustum", 0x0, "BoolProperty"},
            {"bCullByViewFrustum", 0x0, "BoolProperty"},
            {"bCullWhenNotRendered", 0x0, "BoolProperty"},
            {"MaxTimeOutsideViewFrustum", 0x4, "FloatProperty"},
            {"MaxTimeWithoutRender", 0x8, "FloatProperty"},
        }};
    };

    struct NiagaraTypeDefinition
    {
        static constexpr std::string_view Name = "NiagaraTypeDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassStructOrEnum = 0x0;
            static constexpr std::uintptr_t UnderlyingType = 0x8;
            static constexpr std::uintptr_t Flags = 0xA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ClassStructOrEnum", 0x0, "ObjectProperty"},
            {"UnderlyingType", 0x8, "UInt16Property"},
            {"Flags", 0xA, "ByteProperty"},
        }};
    };

    struct NiagaraTypeDefinitionHandle
    {
        static constexpr std::string_view Name = "NiagaraTypeDefinitionHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredTypeIndex = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredTypeIndex", 0x0, "IntProperty"},
        }};
    };

    struct NiagaraTypeLayoutInfo
    {
        static constexpr std::string_view Name = "NiagaraTypeLayoutInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumFloatComponents = 0x0;
            static constexpr std::uintptr_t NumInt32Components = 0x2;
            static constexpr std::uintptr_t NumHalfComponents = 0x4;
            static constexpr std::uintptr_t ComponentsOffsets = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NumFloatComponents", 0x0, "UInt16Property"},
            {"NumInt32Components", 0x2, "UInt16Property"},
            {"NumHalfComponents", 0x4, "UInt16Property"},
            {"ComponentsOffsets", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraUObjectPropertyReaderRemap
    {
        static constexpr std::string_view Name = "NiagaraUObjectPropertyReaderRemap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphName = 0x0;
            static constexpr std::uintptr_t RemapName = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GraphName", 0x0, "NameProperty"},
            {"RemapName", 0x4, "NameProperty"},
        }};
    };

    struct NiagaraUserParameterBinding
    {
        static constexpr std::string_view Name = "NiagaraUserParameterBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameter = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameter", 0x0, "StructProperty"},
        }};
    };

    struct NiagaraUserParameterInfo
    {
        static constexpr std::string_view Name = "NiagaraUserParameterInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterType = 0x8;
            static constexpr std::uintptr_t TypeName = 0x10;
            static constexpr std::uintptr_t ParameterSizeBytes = 0x14;
            static constexpr std::uintptr_t bIsEnumType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ParameterName", 0x0, "NameProperty"},
            {"ParameterType", 0x8, "ObjectProperty"},
            {"TypeName", 0x10, "NameProperty"},
            {"ParameterSizeBytes", 0x14, "IntProperty"},
            {"bIsEnumType", 0x18, "BoolProperty"},
        }};
    };

    struct NiagaraUserRedirectionParameterStore
    {
        static constexpr std::string_view Name = "NiagaraUserRedirectionParameterStore";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraParameterStore";
        struct Offsets
        {
            static constexpr std::uintptr_t UserParameterRedirects = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserParameterRedirects", 0x88, "MapProperty"},
        }};
    };

    struct NiagaraVMExecutableByteCode
    {
        static constexpr std::string_view Name = "NiagaraVMExecutableByteCode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
            static constexpr std::uintptr_t UncompressedSize = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Data", 0x0, "ArrayProperty"},
            {"UncompressedSize", 0x10, "IntProperty"},
        }};
    };

    struct NiagaraVMExecutableData
    {
        static constexpr std::string_view Name = "NiagaraVMExecutableData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ByteCode = 0x0;
            static constexpr std::uintptr_t NumTempRegisters = 0x18;
            static constexpr std::uintptr_t NumUserPtrs = 0x1C;
            static constexpr std::uintptr_t CompileTags = 0x20;
            static constexpr std::uintptr_t ScriptLiterals = 0x30;
            static constexpr std::uintptr_t Attributes = 0x40;
            static constexpr std::uintptr_t DataUsage = 0x50;
            static constexpr std::uintptr_t UObjectInfos = 0x58;
            static constexpr std::uintptr_t CalledVMExternalFunctions = 0x68;
            static constexpr std::uintptr_t ReadDataSets = 0x78;
            static constexpr std::uintptr_t WriteDataSets = 0x88;
            static constexpr std::uintptr_t StatScopes = 0x98;
            static constexpr std::uintptr_t ShaderScriptParametersMetadata = 0xA8;
            static constexpr std::uintptr_t LastCompileStatus = 0xE8;
            static constexpr std::uintptr_t SimulationStageMetaData = 0xF0;
            static constexpr std::uintptr_t ExperimentalContextData = 0x100;
            static constexpr std::uintptr_t bNeedsGPUContextInit = 0x110;
            static constexpr std::uintptr_t bReadsSignificanceIndex = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"ByteCode", 0x0, "StructProperty"},
            {"NumTempRegisters", 0x18, "IntProperty"},
            {"NumUserPtrs", 0x1C, "IntProperty"},
            {"CompileTags", 0x20, "ArrayProperty"},
            {"ScriptLiterals", 0x30, "ArrayProperty"},
            {"Attributes", 0x40, "ArrayProperty"},
            {"DataUsage", 0x50, "StructProperty"},
            {"UObjectInfos", 0x58, "ArrayProperty"},
            {"CalledVMExternalFunctions", 0x68, "ArrayProperty"},
            {"ReadDataSets", 0x78, "ArrayProperty"},
            {"WriteDataSets", 0x88, "ArrayProperty"},
            {"StatScopes", 0x98, "ArrayProperty"},
            {"ShaderScriptParametersMetadata", 0xA8, "StructProperty"},
            {"LastCompileStatus", 0xE8, "EnumProperty"},
            {"SimulationStageMetaData", 0xF0, "ArrayProperty"},
            {"ExperimentalContextData", 0x100, "ArrayProperty"},
            {"bNeedsGPUContextInit", 0x110, "BoolProperty"},
            {"bReadsSignificanceIndex", 0x110, "BoolProperty"},
        }};
    };

    struct NiagaraVMExecutableDataId
    {
        static constexpr std::string_view Name = "NiagaraVMExecutableDataId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CompilerVersionID = 0x0;
            static constexpr std::uintptr_t InterpolatedSpawnMode = 0x10;
            static constexpr std::uintptr_t BaseScriptCompileHash = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CompilerVersionID", 0x0, "StructProperty"},
            {"InterpolatedSpawnMode", 0x10, "EnumProperty"},
            {"BaseScriptCompileHash", 0x18, "StructProperty"},
        }};
    };

    struct NiagaraValidationRule
    {
        static constexpr std::string_view Name = "NiagaraValidationRule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsConfigDisabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsConfigDisabled", 0x28, "BoolProperty"},
        }};
    };

    struct NiagaraValidationRuleSet
    {
        static constexpr std::string_view Name = "NiagaraValidationRuleSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidationRules = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidationRules", 0x28, "ArrayProperty"},
        }};
    };

    struct NiagaraVariable
    {
        static constexpr std::string_view Name = "NiagaraVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VarData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VarData", 0x8, "ArrayProperty"},
        }};
    };

    struct NiagaraVariableAttributeBinding
    {
        static constexpr std::string_view Name = "NiagaraVariableAttributeBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootName = 0x0;
            static constexpr std::uintptr_t ParamMapVariable = 0x4;
            static constexpr std::uintptr_t DataSetName = 0xC;
            static constexpr std::uintptr_t BindingSourceMode = 0x10;
            static constexpr std::uintptr_t bBindingExistsOnSource = 0x11;
            static constexpr std::uintptr_t bIsCachedParticleValue = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RootName", 0x0, "NameProperty"},
            {"ParamMapVariable", 0x4, "StructProperty"},
            {"DataSetName", 0xC, "NameProperty"},
            {"BindingSourceMode", 0x10, "ByteProperty"},
            {"bBindingExistsOnSource", 0x11, "BoolProperty"},
            {"bIsCachedParticleValue", 0x11, "BoolProperty"},
        }};
    };

    struct NiagaraVariableBase
    {
        static constexpr std::string_view Name = "NiagaraVariableBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t TypeDefHandle = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"TypeDefHandle", 0x4, "StructProperty"},
        }};
    };

    struct NiagaraVariableDataInterfaceBinding
    {
        static constexpr std::string_view Name = "NiagaraVariableDataInterfaceBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundVariable = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoundVariable", 0x0, "StructProperty"},
        }};
    };

    struct NiagaraVariableInfo
    {
        static constexpr std::string_view Name = "NiagaraVariableInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Variable = 0x0;
            static constexpr std::uintptr_t Definition = 0x18;
            static constexpr std::uintptr_t DataInterface = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Variable", 0x0, "StructProperty"},
            {"Definition", 0x18, "TextProperty"},
            {"DataInterface", 0x28, "ObjectProperty"},
        }};
    };

    struct NiagaraVariableLayoutInfo
    {
        static constexpr std::string_view Name = "NiagaraVariableLayoutInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatComponentStart = 0x0;
            static constexpr std::uintptr_t Int32ComponentStart = 0x2;
            static constexpr std::uintptr_t HalfComponentStart = 0x4;
            static constexpr std::uintptr_t LayoutInfo = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FloatComponentStart", 0x0, "UInt16Property"},
            {"Int32ComponentStart", 0x2, "UInt16Property"},
            {"HalfComponentStart", 0x4, "UInt16Property"},
            {"LayoutInfo", 0x8, "StructProperty"},
        }};
    };

    struct NiagaraVariableMetaData
    {
        static constexpr std::string_view Name = "NiagaraVariableMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x0;
            static constexpr std::uintptr_t DisplayUnit = 0x10;
            static constexpr std::uintptr_t bAdvancedDisplay = 0x11;
            static constexpr std::uintptr_t bDisplayInOverviewStack = 0x12;
            static constexpr std::uintptr_t InlineParameterSortPriority = 0x14;
            static constexpr std::uintptr_t bOverrideColor = 0x18;
            static constexpr std::uintptr_t InlineParameterColorOverride = 0x1C;
            static constexpr std::uintptr_t InlineParameterEnumOverrides = 0x30;
            static constexpr std::uintptr_t bEnableBoolOverride = 0x40;
            static constexpr std::uintptr_t InlineParameterBoolOverride = 0x48;
            static constexpr std::uintptr_t bInlineEditConditionToggle = 0x68;
            static constexpr std::uintptr_t EditCondition = 0x70;
            static constexpr std::uintptr_t VisibleCondition = 0x88;
            static constexpr std::uintptr_t PropertyMetaData = 0xA0;
            static constexpr std::uintptr_t AlternateAliases = 0xB0;
            static constexpr std::uintptr_t WidgetCustomization = 0xC0;
            static constexpr std::uintptr_t VariableGuid = 0x118;
            static constexpr std::uintptr_t bIsStaticSwitch = 0x128;
            static constexpr std::uintptr_t StaticSwitchDefaultValue = 0x12C;
            static constexpr std::uintptr_t CategoryName = 0x130;
            static constexpr std::uintptr_t ParentAttribute = 0x140;
            static constexpr std::uintptr_t EditorSortPriority = 0x144;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"Description", 0x0, "TextProperty"},
            {"DisplayUnit", 0x10, "EnumProperty"},
            {"bAdvancedDisplay", 0x11, "BoolProperty"},
            {"bDisplayInOverviewStack", 0x12, "BoolProperty"},
            {"InlineParameterSortPriority", 0x14, "IntProperty"},
            {"bOverrideColor", 0x18, "BoolProperty"},
            {"InlineParameterColorOverride", 0x1C, "StructProperty"},
            {"InlineParameterEnumOverrides", 0x30, "ArrayProperty"},
            {"bEnableBoolOverride", 0x40, "BoolProperty"},
            {"InlineParameterBoolOverride", 0x48, "StructProperty"},
            {"bInlineEditConditionToggle", 0x68, "BoolProperty"},
            {"EditCondition", 0x70, "StructProperty"},
            {"VisibleCondition", 0x88, "StructProperty"},
            {"PropertyMetaData", 0xA0, "MapProperty"},
            {"AlternateAliases", 0xB0, "ArrayProperty"},
            {"WidgetCustomization", 0xC0, "StructProperty"},
            {"VariableGuid", 0x118, "StructProperty"},
            {"bIsStaticSwitch", 0x128, "BoolProperty"},
            {"StaticSwitchDefaultValue", 0x12C, "IntProperty"},
            {"CategoryName", 0x130, "TextProperty"},
            {"ParentAttribute", 0x140, "NameProperty"},
            {"EditorSortPriority", 0x144, "IntProperty"},
        }};
    };

    struct NiagaraVariableWithOffset
    {
        static constexpr std::string_view Name = "NiagaraVariableWithOffset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NiagaraVariableBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Offset = 0x8;
            static constexpr std::uintptr_t StructConverter = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Offset", 0x8, "IntProperty"},
            {"StructConverter", 0x10, "StructProperty"},
        }};
    };

    struct NiagaraVariant
    {
        static constexpr std::string_view Name = "NiagaraVariant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
            static constexpr std::uintptr_t DataInterface = 0x8;
            static constexpr std::uintptr_t Bytes = 0x10;
            static constexpr std::uintptr_t CurrentMode = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Object", 0x0, "ObjectProperty"},
            {"DataInterface", 0x8, "ObjectProperty"},
            {"Bytes", 0x10, "ArrayProperty"},
            {"CurrentMode", 0x20, "EnumProperty"},
        }};
    };

    struct NiagaraVersionUpgradeBase
    {
        static constexpr std::string_view Name = "NiagaraVersionUpgradeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraVolumeRendererProperties
    {
        static constexpr std::string_view Name = "NiagaraVolumeRendererProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraRendererProperties";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x98;
            static constexpr std::uintptr_t MaterialParameterBinding = 0xA0;
            static constexpr std::uintptr_t RendererVisibility = 0xAC;
            static constexpr std::uintptr_t StepFactor = 0xB0;
            static constexpr std::uintptr_t LightingDownsampleFactor = 0xB4;
            static constexpr std::uintptr_t ShadowStepFactor = 0xB8;
            static constexpr std::uintptr_t ShadowBiasFactor = 0xBC;
            static constexpr std::uintptr_t RendererVisibilityTagBinding = 0xFC;
            static constexpr std::uintptr_t VolumeResolutionMaxAxisBinding = 0x110;
            static constexpr std::uintptr_t VolumeWorldSpaceSizeBinding = 0x124;
            static constexpr std::uintptr_t MaterialParameters = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Material", 0x98, "ObjectProperty"},
            {"MaterialParameterBinding", 0xA0, "StructProperty"},
            {"RendererVisibility", 0xAC, "IntProperty"},
            {"StepFactor", 0xB0, "FloatProperty"},
            {"LightingDownsampleFactor", 0xB4, "FloatProperty"},
            {"ShadowStepFactor", 0xB8, "FloatProperty"},
            {"ShadowBiasFactor", 0xBC, "FloatProperty"},
            {"RendererVisibilityTagBinding", 0xFC, "StructProperty"},
            {"VolumeResolutionMaxAxisBinding", 0x110, "StructProperty"},
            {"VolumeWorldSpaceSizeBinding", 0x124, "StructProperty"},
            {"MaterialParameters", 0x138, "StructProperty"},
        }};
    };

    struct NiagaraWidgetNamedIntegerInputValue
    {
        static constexpr std::string_view Name = "NiagaraWidgetNamedIntegerInputValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x0;
            static constexpr std::uintptr_t ToolTip = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DisplayName", 0x0, "TextProperty"},
            {"ToolTip", 0x10, "TextProperty"},
        }};
    };

    struct NiagaraWildcard
    {
        static constexpr std::string_view Name = "NiagaraWildcard";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraWorldManagerTickFunction
    {
        static constexpr std::string_view Name = "NiagaraWorldManagerTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct ParameterDefinitionsSubscription
    {
        static constexpr std::string_view Name = "ParameterDefinitionsSubscription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VMExternalFunctionBindingInfo
    {
        static constexpr std::string_view Name = "VMExternalFunctionBindingInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t OwnerName = 0x4;
            static constexpr std::uintptr_t InputParamLocations = 0x8;
            static constexpr std::uintptr_t NumOutputs = 0x18;
            static constexpr std::uintptr_t FunctionSpecifiers = 0x20;
            static constexpr std::uintptr_t VariadicInputs = 0x30;
            static constexpr std::uintptr_t VariadicOutputs = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"OwnerName", 0x4, "NameProperty"},
            {"InputParamLocations", 0x8, "ArrayProperty"},
            {"NumOutputs", 0x18, "IntProperty"},
            {"FunctionSpecifiers", 0x20, "ArrayProperty"},
            {"VariadicInputs", 0x30, "ArrayProperty"},
            {"VariadicOutputs", 0x40, "ArrayProperty"},
        }};
    };

    struct VMFunctionSpecifier
    {
        static constexpr std::string_view Name = "VMFunctionSpecifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Value = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "NameProperty"},
            {"Value", 0x4, "NameProperty"},
        }};
    };

    struct VersionedNiagaraEmitter
    {
        static constexpr std::string_view Name = "VersionedNiagaraEmitter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Emitter = 0x0;
            static constexpr std::uintptr_t Version = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Emitter", 0x0, "ObjectProperty"},
            {"Version", 0x8, "StructProperty"},
        }};
    };

    struct VersionedNiagaraEmitterData
    {
        static constexpr std::string_view Name = "VersionedNiagaraEmitterData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Version = 0x0;
            static constexpr std::uintptr_t bDeprecated = 0x1C;
            static constexpr std::uintptr_t DeprecationMessage = 0x20;
            static constexpr std::uintptr_t bLocalSpace = 0x30;
            static constexpr std::uintptr_t bDeterminism = 0x31;
            static constexpr std::uintptr_t RandomSeed = 0x34;
            static constexpr std::uintptr_t InterpolatedSpawnMode = 0x38;
            static constexpr std::uintptr_t SimTarget = 0x39;
            static constexpr std::uintptr_t Importance = 0x3A;
            static constexpr std::uintptr_t CalculateBoundsMode = 0x3B;
            static constexpr std::uintptr_t FixedBounds = 0x40;
            static constexpr std::uintptr_t bRequiresPersistentIDs = 0x78;
            static constexpr std::uintptr_t EventHandlerScriptProps = 0x80;
            static constexpr std::uintptr_t Platforms = 0x90;
            static constexpr std::uintptr_t ScalabilityOverrides = 0xC0;
            static constexpr std::uintptr_t MaxGPUParticlesSpawnPerFrame = 0xD0;
            static constexpr std::uintptr_t AllocationMode = 0xD4;
            static constexpr std::uintptr_t PreAllocationCount = 0xD8;
            static constexpr std::uintptr_t EmitterDependencies = 0xE0;
            static constexpr std::uintptr_t UpdateScriptProps = 0xF0;
            static constexpr std::uintptr_t SpawnScriptProps = 0x118;
            static constexpr std::uintptr_t RendererBindings = 0x140;
            static constexpr std::uintptr_t RendererBindingsExternalObjects = 0x1C8;
            static constexpr std::uintptr_t ResolvedDIBindings = 0x1D8;
            static constexpr std::uintptr_t RendererProperties = 0x1E8;
            static constexpr std::uintptr_t SimulationStages = 0x1F8;
            static constexpr std::uintptr_t SimStageExecutionLoops = 0x208;
            static constexpr std::uintptr_t GPUComputeScript = 0x228;
            static constexpr std::uintptr_t SharedEventGeneratorIds = 0x230;
            static constexpr std::uintptr_t CurrentScalabilitySettings = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"Version", 0x0, "StructProperty"},
            {"bDeprecated", 0x1C, "BoolProperty"},
            {"DeprecationMessage", 0x20, "TextProperty"},
            {"bLocalSpace", 0x30, "BoolProperty"},
            {"bDeterminism", 0x31, "BoolProperty"},
            {"RandomSeed", 0x34, "IntProperty"},
            {"InterpolatedSpawnMode", 0x38, "EnumProperty"},
            {"SimTarget", 0x39, "EnumProperty"},
            {"Importance", 0x3A, "EnumProperty"},
            {"CalculateBoundsMode", 0x3B, "EnumProperty"},
            {"FixedBounds", 0x40, "StructProperty"},
            {"bRequiresPersistentIDs", 0x78, "BoolProperty"},
            {"EventHandlerScriptProps", 0x80, "ArrayProperty"},
            {"Platforms", 0x90, "StructProperty"},
            {"ScalabilityOverrides", 0xC0, "StructProperty"},
            {"MaxGPUParticlesSpawnPerFrame", 0xD0, "IntProperty"},
            {"AllocationMode", 0xD4, "EnumProperty"},
            {"PreAllocationCount", 0xD8, "IntProperty"},
            {"EmitterDependencies", 0xE0, "ArrayProperty"},
            {"UpdateScriptProps", 0xF0, "StructProperty"},
            {"SpawnScriptProps", 0x118, "StructProperty"},
            {"RendererBindings", 0x140, "StructProperty"},
            {"RendererBindingsExternalObjects", 0x1C8, "ArrayProperty"},
            {"ResolvedDIBindings", 0x1D8, "MapProperty"},
            {"RendererProperties", 0x1E8, "ArrayProperty"},
            {"SimulationStages", 0x1F8, "ArrayProperty"},
            {"SimStageExecutionLoops", 0x208, "ArrayProperty"},
            {"GPUComputeScript", 0x228, "ObjectProperty"},
            {"SharedEventGeneratorIds", 0x230, "ArrayProperty"},
            {"CurrentScalabilitySettings", 0x240, "StructProperty"},
        }};
    };

    struct VersionedNiagaraScriptData
    {
        static constexpr std::string_view Name = "VersionedNiagaraScriptData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VolumeCache
    {
        static constexpr std::string_view Name = "VolumeCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FilePath = 0x28;
            static constexpr std::uintptr_t CacheType = 0x38;
            static constexpr std::uintptr_t Resolution = 0x3C;
            static constexpr std::uintptr_t FrameRangeStart = 0x48;
            static constexpr std::uintptr_t FrameRangeEnd = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FilePath", 0x28, "StrProperty"},
            {"CacheType", 0x38, "EnumProperty"},
            {"Resolution", 0x3C, "StructProperty"},
            {"FrameRangeStart", 0x48, "IntProperty"},
            {"FrameRangeEnd", 0x4C, "IntProperty"},
        }};
    };

    struct WidgetNamedInputValue
    {
        static constexpr std::string_view Name = "WidgetNamedInputValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t DisplayName = 0x8;
            static constexpr std::uintptr_t ToolTip = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "FloatProperty"},
            {"DisplayName", 0x8, "TextProperty"},
            {"ToolTip", 0x18, "TextProperty"},
        }};
    };

    struct WidgetSegmentValueOverride
    {
        static constexpr std::string_view Name = "WidgetSegmentValueOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumIndexToOverride = 0x0;
            static constexpr std::uintptr_t bOverrideDisplayName = 0x4;
            static constexpr std::uintptr_t DisplayNameOverride = 0x8;
            static constexpr std::uintptr_t DisplayIcon = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EnumIndexToOverride", 0x0, "IntProperty"},
            {"bOverrideDisplayName", 0x4, "BoolProperty"},
            {"DisplayNameOverride", 0x8, "TextProperty"},
            {"DisplayIcon", 0x18, "ObjectProperty"},
        }};
    };

}
