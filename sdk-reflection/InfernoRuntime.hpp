#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InfernoRuntime
{
    struct FortCurieElementAttachConditionHandlerVoxelFire
    {
        static constexpr std::string_view Name = "FortCurieElementAttachConditionHandlerVoxelFire";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieElementAttachConditionHandlerFire";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementMagnitudeToIntensityCurve = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ElementMagnitudeToIntensityCurve", 0x30, "StructProperty"},
        }};
    };

    struct FortCurieElementAttachHandlerVoxelFire
    {
        static constexpr std::string_view Name = "FortCurieElementAttachHandlerVoxelFire";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieElementAttachHandlerFire";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachmentSuggestedStates = 0x68;
            static constexpr std::uintptr_t bActAsDmgSrcDirectly = 0x78;
            static constexpr std::uintptr_t DamageDataTableRowHandle = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AttachmentSuggestedStates", 0x68, "ArrayProperty"},
            {"bActAsDmgSrcDirectly", 0x78, "BoolProperty"},
            {"DamageDataTableRowHandle", 0x80, "StructProperty"},
        }};
    };

    struct FortCurieVoxelFireDebugNiagaraDataInterface
    {
        static constexpr std::string_view Name = "FortCurieVoxelFireDebugNiagaraDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCurieVoxelFireDebugParticleDataInterface
    {
        static constexpr std::string_view Name = "FortCurieVoxelFireDebugParticleDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCurieVoxelFireNativeFXHandler
    {
        static constexpr std::string_view Name = "FortCurieVoxelFireNativeFXHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieNativeFXHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingUpdateComponents = 0x70;
            static constexpr std::uintptr_t PendingRemoveComponents = 0x80;
            static constexpr std::uintptr_t WorldFireNiagaraSystems = 0xA0;
            static constexpr std::uintptr_t WorldFireDebugNiagaraSystems = 0xB0;
            static constexpr std::uintptr_t WorldSystemFireParticleSignificanceRequirement = 0xC0;
            static constexpr std::uintptr_t WorldSystemIgnitionParticleSignificanceRequirement = 0xC4;
            static constexpr std::uintptr_t AudioGrassFireSignificanceRequirement = 0xC8;
            static constexpr std::uintptr_t AudioActorFireSignificanceRequirement = 0xCC;
            static constexpr std::uintptr_t RandomStream = 0xD0;
            static constexpr std::uintptr_t GrassFireBounds = 0xD8;
            static constexpr std::uintptr_t LandscapeCharInterpSpeed = 0x110;
            static constexpr std::uintptr_t TimeSinceAudioUpdate = 0x114;
            static constexpr std::uintptr_t CachedFireParticleGrassData = 0x118;
            static constexpr std::uintptr_t CachedFireParticleActorData = 0x128;
            static constexpr std::uintptr_t CachedBurningGrassGridCells = 0x158;
            static constexpr std::uintptr_t GrassAudioMap = 0x168;
            static constexpr std::uintptr_t PreallocatedAudioComponents = 0x188;
            static constexpr std::uintptr_t AudioComponentCleanupTimerHandle = 0x198;
            static constexpr std::uintptr_t PreviousLandscapeCharTickTime = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"PendingUpdateComponents", 0x70, "SetProperty"},
            {"PendingRemoveComponents", 0x80, "SetProperty"},
            {"WorldFireNiagaraSystems", 0xA0, "ArrayProperty"},
            {"WorldFireDebugNiagaraSystems", 0xB0, "ArrayProperty"},
            {"WorldSystemFireParticleSignificanceRequirement", 0xC0, "FloatProperty"},
            {"WorldSystemIgnitionParticleSignificanceRequirement", 0xC4, "FloatProperty"},
            {"AudioGrassFireSignificanceRequirement", 0xC8, "FloatProperty"},
            {"AudioActorFireSignificanceRequirement", 0xCC, "FloatProperty"},
            {"RandomStream", 0xD0, "StructProperty"},
            {"GrassFireBounds", 0xD8, "StructProperty"},
            {"LandscapeCharInterpSpeed", 0x110, "FloatProperty"},
            {"TimeSinceAudioUpdate", 0x114, "FloatProperty"},
            {"CachedFireParticleGrassData", 0x118, "ArrayProperty"},
            {"CachedFireParticleActorData", 0x128, "ArrayProperty"},
            {"CachedBurningGrassGridCells", 0x158, "SetProperty"},
            {"GrassAudioMap", 0x168, "MapProperty"},
            {"PreallocatedAudioComponents", 0x188, "ArrayProperty"},
            {"AudioComponentCleanupTimerHandle", 0x198, "StructProperty"},
            {"PreviousLandscapeCharTickTime", 0x1A8, "DoubleProperty"},
        }};
    };

    struct FortCurieVoxelFireNativeFXHandlerConfig
    {
        static constexpr std::string_view Name = "FortCurieVoxelFireNativeFXHandlerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieNativeFXHandlerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldFireSystem = 0xE0;
            static constexpr std::uintptr_t WorldFireDebugSystem = 0xE8;
            static constexpr std::uintptr_t LandscapeCharRenderTarget = 0xF0;
            static constexpr std::uintptr_t MaterialParameterCollection = 0xF8;
            static constexpr std::uintptr_t PlayerWorldFireSystemLightScalabilityParamName = 0x100;
            static constexpr std::uintptr_t LandscapeBiasParameterName = 0x104;
            static constexpr std::uintptr_t LandscapeDivisorParameterName = 0x108;
            static constexpr std::uintptr_t LandscapeFireRandomLocationRadius = 0x10C;
            static constexpr std::uintptr_t MinLandscapeFireSphericalBounds = 0x110;
            static constexpr std::uintptr_t MaxLandscapeFireSphericalBounds = 0x114;
            static constexpr std::uintptr_t LandscapeCharInterpSpeed = 0x118;
            static constexpr std::uintptr_t LandscapeIgnitionParticleMovementSpeed = 0x11C;
            static constexpr std::uintptr_t bUseVoxelFireAmbientAudio = 0x120;
            static constexpr std::uintptr_t StructureFireAmbientSound = 0x128;
            static constexpr std::uintptr_t GrassFireAmbientSound = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"WorldFireSystem", 0xE0, "ObjectProperty"},
            {"WorldFireDebugSystem", 0xE8, "ObjectProperty"},
            {"LandscapeCharRenderTarget", 0xF0, "ObjectProperty"},
            {"MaterialParameterCollection", 0xF8, "ObjectProperty"},
            {"PlayerWorldFireSystemLightScalabilityParamName", 0x100, "NameProperty"},
            {"LandscapeBiasParameterName", 0x104, "NameProperty"},
            {"LandscapeDivisorParameterName", 0x108, "NameProperty"},
            {"LandscapeFireRandomLocationRadius", 0x10C, "FloatProperty"},
            {"MinLandscapeFireSphericalBounds", 0x110, "FloatProperty"},
            {"MaxLandscapeFireSphericalBounds", 0x114, "FloatProperty"},
            {"LandscapeCharInterpSpeed", 0x118, "FloatProperty"},
            {"LandscapeIgnitionParticleMovementSpeed", 0x11C, "FloatProperty"},
            {"bUseVoxelFireAmbientAudio", 0x120, "BoolProperty"},
            {"StructureFireAmbientSound", 0x128, "ObjectProperty"},
            {"GrassFireAmbientSound", 0x130, "ObjectProperty"},
        }};
    };

    struct FortCurieVoxelFireNiagaraDataInterface
    {
        static constexpr std::string_view Name = "FortCurieVoxelFireNiagaraDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCurieVoxelFireParticleDataInterface
    {
        static constexpr std::string_view Name = "FortCurieVoxelFireParticleDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCurieVoxelFirePropagationManager
    {
        static constexpr std::string_view Name = "FortCurieVoxelFirePropagationManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryTickFunction = 0x40;
            static constexpr std::uintptr_t InternalManagerConfig = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PrimaryTickFunction", 0x40, "StructProperty"},
            {"InternalManagerConfig", 0x2B8, "ObjectProperty"},
        }};
    };

    struct FortCurieVoxelFirePropagationManagerConfig
    {
        static constexpr std::string_view Name = "FortCurieVoxelFirePropagationManagerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieFirePropagationManagerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultPropagationProperties = 0x128;
            static constexpr std::uintptr_t PropagationPropertiesRegistry = 0x140;
            static constexpr std::uintptr_t PropagationNoiseMinimum = 0x144;
            static constexpr std::uintptr_t PropagationNoiseMaximum = 0x148;
            static constexpr std::uintptr_t PropagationSpeedNoiseRange = 0x14C;
            static constexpr std::uintptr_t PropagationMinimumSpeed = 0x150;
            static constexpr std::uintptr_t PropagationMinimumTime = 0x154;
            static constexpr std::uintptr_t VoxelOverlapExpansionFactor = 0x158;
            static constexpr std::uintptr_t bAllowPerMaterialPropagationProperties = 0x15C;
            static constexpr std::uintptr_t ActorPropagationInteractMagnitude = 0x160;
            static constexpr std::uintptr_t MovedActorGrassIgnitionDelay = 0x164;
            static constexpr std::uintptr_t MovedActorGrassGridCellZExpansion = 0x168;
            static constexpr std::uintptr_t MovedActorGroundTraceZRange = 0x16C;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"DefaultPropagationProperties", 0x128, "StructProperty"},
            {"PropagationPropertiesRegistry", 0x140, "NameProperty"},
            {"PropagationNoiseMinimum", 0x144, "FloatProperty"},
            {"PropagationNoiseMaximum", 0x148, "FloatProperty"},
            {"PropagationSpeedNoiseRange", 0x14C, "FloatProperty"},
            {"PropagationMinimumSpeed", 0x150, "FloatProperty"},
            {"PropagationMinimumTime", 0x154, "FloatProperty"},
            {"VoxelOverlapExpansionFactor", 0x158, "FloatProperty"},
            {"bAllowPerMaterialPropagationProperties", 0x15C, "BoolProperty"},
            {"ActorPropagationInteractMagnitude", 0x160, "FloatProperty"},
            {"MovedActorGrassIgnitionDelay", 0x164, "FloatProperty"},
            {"MovedActorGrassGridCellZExpansion", 0x168, "FloatProperty"},
            {"MovedActorGroundTraceZRange", 0x16C, "FloatProperty"},
        }};
    };

    struct InfernoCurieVoxelFireAudioNiagaraDataInterface
    {
        static constexpr std::string_view Name = "InfernoCurieVoxelFireAudioNiagaraDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InfernoCurieVoxelFireAudioParticleDataInterface
    {
        static constexpr std::string_view Name = "InfernoCurieVoxelFireAudioParticleDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
