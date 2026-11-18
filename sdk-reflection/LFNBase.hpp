#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNBase
{
    struct LFNBaseActor
    {
        static constexpr std::string_view Name = "LFNBaseActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIncludeOnCellTransformer = 0x2A8;
            static constexpr std::uintptr_t DefaultTags = 0x2B0;
            static constexpr std::uintptr_t SnapGridSize = 0x2D0;
            static constexpr std::uintptr_t VertSnapGridSize = 0x2D4;
            static constexpr std::uintptr_t SnapOffset = 0x2D8;
            static constexpr std::uintptr_t CentroidOffset = 0x2E4;
            static constexpr std::uintptr_t BaseLocToPivotOffset = 0x2F0;
            static constexpr std::uintptr_t bAutoAssignNavProperties = 0x2FC;
            static constexpr std::uintptr_t bBeingDragged = 0x2FC;
            static constexpr std::uintptr_t bBeingRotated = 0x2FC;
            static constexpr std::uintptr_t bBeingTranslated = 0x2FC;
            static constexpr std::uintptr_t bCanInteract = 0x2FC;
            static constexpr std::uintptr_t bEnableRotationSnap = 0x2FC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bIncludeOnCellTransformer", 0x2A8, "BoolProperty"},
            {"DefaultTags", 0x2B0, "StructProperty"},
            {"SnapGridSize", 0x2D0, "FloatProperty"},
            {"VertSnapGridSize", 0x2D4, "FloatProperty"},
            {"SnapOffset", 0x2D8, "StructProperty"},
            {"CentroidOffset", 0x2E4, "StructProperty"},
            {"BaseLocToPivotOffset", 0x2F0, "StructProperty"},
            {"bAutoAssignNavProperties", 0x2FC, "BoolProperty"},
            {"bBeingDragged", 0x2FC, "BoolProperty"},
            {"bBeingRotated", 0x2FC, "BoolProperty"},
            {"bBeingTranslated", 0x2FC, "BoolProperty"},
            {"bCanInteract", 0x2FC, "BoolProperty"},
            {"bEnableRotationSnap", 0x2FC, "BoolProperty"},
        }};
    };

    struct LFNDynamicRelevancyComponent
    {
        static constexpr std::string_view Name = "LFNDynamicRelevancyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateRateInSeconds = 0xC0;
            static constexpr std::uintptr_t MinDynamicCullDistance = 0xE8;
            static constexpr std::uintptr_t MaxDynamicCullDistance = 0x110;
            static constexpr std::uintptr_t DesiredMaxPawnsInRange = 0x138;
            static constexpr std::uintptr_t DynamicCullDistanceStep = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"UpdateRateInSeconds", 0xC0, "StructProperty"},
            {"MinDynamicCullDistance", 0xE8, "StructProperty"},
            {"MaxDynamicCullDistance", 0x110, "StructProperty"},
            {"DesiredMaxPawnsInRange", 0x138, "StructProperty"},
            {"DynamicCullDistanceStep", 0x160, "StructProperty"},
        }};
    };

    struct LFNLightConeMeshComponent
    {
        static constexpr std::string_view Name = "LFNLightConeMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseLightCone = 0x6A8;
            static constexpr std::uintptr_t ConeSettings = 0x6B0;
            static constexpr std::uintptr_t MaxDrawDistance = 0x708;
            static constexpr std::uintptr_t FadeSize = 0x70C;
            static constexpr std::uintptr_t IgnoreTimeOfDayUpdates = 0x710;
            static constexpr std::uintptr_t MID = 0x718;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bUseLightCone", 0x6A8, "BoolProperty"},
            {"ConeSettings", 0x6B0, "StructProperty"},
            {"MaxDrawDistance", 0x708, "FloatProperty"},
            {"FadeSize", 0x70C, "FloatProperty"},
            {"IgnoreTimeOfDayUpdates", 0x710, "BoolProperty"},
            {"MID", 0x718, "ObjectProperty"},
        }};
    };

    struct LFNLightMeshComponent
    {
        static constexpr std::string_view Name = "LFNLightMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowLightMeshMaterials = 0x6A8;
            static constexpr std::uintptr_t LightMeshMaterial = 0x6B0;
            static constexpr std::uintptr_t LightMeshMaterialWithFog = 0x6D0;
            static constexpr std::uintptr_t LightMeshMaterialWithNoiseFog = 0x6F0;
            static constexpr std::uintptr_t LightMeshMaterialIES = 0x710;
            static constexpr std::uintptr_t LightMeshMaterialIESWithFog = 0x730;
            static constexpr std::uintptr_t LightMeshMaterialIESWithNoiseFog = 0x750;
            static constexpr std::uintptr_t bUseMIDOnIESLightMeshMaterials = 0x770;
            static constexpr std::uintptr_t bGetLightIntensityFromParent = 0x771;
            static constexpr std::uintptr_t Intensity = 0x774;
            static constexpr std::uintptr_t bGetLightColorFromParent = 0x778;
            static constexpr std::uintptr_t Color = 0x77C;
            static constexpr std::uintptr_t bUseTemperature = 0x78C;
            static constexpr std::uintptr_t Temperature = 0x790;
            static constexpr std::uintptr_t bGetLightAttenuationRadiusFromParent = 0x794;
            static constexpr std::uintptr_t AttenuationRadius = 0x798;
            static constexpr std::uintptr_t bGetLightFalloffExponentFromParent = 0x79C;
            static constexpr std::uintptr_t LightFalloffExponent = 0x7A0;
            static constexpr std::uintptr_t bGetInverseExposureBlendFromParent = 0x7A4;
            static constexpr std::uintptr_t InverseExposureBlend = 0x7A8;
            static constexpr std::uintptr_t bSpotlight = 0x7AC;
            static constexpr std::uintptr_t bGetSpotlightOuterConeFromParent = 0x7AD;
            static constexpr std::uintptr_t SpotlightOuterCone = 0x7B0;
            static constexpr std::uintptr_t bGetSpotlightInnerConeFromParent = 0x7B4;
            static constexpr std::uintptr_t SpotlightInnerCone = 0x7B8;
            static constexpr std::uintptr_t bUseFog = 0x7BC;
            static constexpr std::uintptr_t bUseNoise = 0x7BD;
            static constexpr std::uintptr_t LocalFogIntensity = 0x7C0;
            static constexpr std::uintptr_t FogIntensity = 0x7C4;
            static constexpr std::uintptr_t FogOriginOffset = 0x7C8;
            static constexpr std::uintptr_t LightFadeInDistance = 0x7CC;
            static constexpr std::uintptr_t LightFadeInSize = 0x7D0;
            static constexpr std::uintptr_t LightFadeOutDistance = 0x7D4;
            static constexpr std::uintptr_t LightFadeOutSize = 0x7D8;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"bShowLightMeshMaterials", 0x6A8, "BoolProperty"},
            {"LightMeshMaterial", 0x6B0, "SoftObjectProperty"},
            {"LightMeshMaterialWithFog", 0x6D0, "SoftObjectProperty"},
            {"LightMeshMaterialWithNoiseFog", 0x6F0, "SoftObjectProperty"},
            {"LightMeshMaterialIES", 0x710, "SoftObjectProperty"},
            {"LightMeshMaterialIESWithFog", 0x730, "SoftObjectProperty"},
            {"LightMeshMaterialIESWithNoiseFog", 0x750, "SoftObjectProperty"},
            {"bUseMIDOnIESLightMeshMaterials", 0x770, "BoolProperty"},
            {"bGetLightIntensityFromParent", 0x771, "BoolProperty"},
            {"Intensity", 0x774, "FloatProperty"},
            {"bGetLightColorFromParent", 0x778, "BoolProperty"},
            {"Color", 0x77C, "StructProperty"},
            {"bUseTemperature", 0x78C, "BoolProperty"},
            {"Temperature", 0x790, "FloatProperty"},
            {"bGetLightAttenuationRadiusFromParent", 0x794, "BoolProperty"},
            {"AttenuationRadius", 0x798, "FloatProperty"},
            {"bGetLightFalloffExponentFromParent", 0x79C, "BoolProperty"},
            {"LightFalloffExponent", 0x7A0, "FloatProperty"},
            {"bGetInverseExposureBlendFromParent", 0x7A4, "BoolProperty"},
            {"InverseExposureBlend", 0x7A8, "FloatProperty"},
            {"bSpotlight", 0x7AC, "BoolProperty"},
            {"bGetSpotlightOuterConeFromParent", 0x7AD, "BoolProperty"},
            {"SpotlightOuterCone", 0x7B0, "FloatProperty"},
            {"bGetSpotlightInnerConeFromParent", 0x7B4, "BoolProperty"},
            {"SpotlightInnerCone", 0x7B8, "FloatProperty"},
            {"bUseFog", 0x7BC, "BoolProperty"},
            {"bUseNoise", 0x7BD, "BoolProperty"},
            {"LocalFogIntensity", 0x7C0, "FloatProperty"},
            {"FogIntensity", 0x7C4, "FloatProperty"},
            {"FogOriginOffset", 0x7C8, "FloatProperty"},
            {"LightFadeInDistance", 0x7CC, "FloatProperty"},
            {"LightFadeInSize", 0x7D0, "FloatProperty"},
            {"LightFadeOutDistance", 0x7D4, "FloatProperty"},
            {"LightFadeOutSize", 0x7D8, "FloatProperty"},
        }};
    };

    struct LFNLightPresetDataAsset
    {
        static constexpr std::string_view Name = "LFNLightPresetDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideAttenuationRadiusCustom = 0x28;
            static constexpr std::uintptr_t bOverrideBrickColorCustom = 0x28;
            static constexpr std::uintptr_t bOverrideColorCustom = 0x28;
            static constexpr std::uintptr_t bOverrideIntensityCustom = 0x28;
            static constexpr std::uintptr_t bOverrideSpotlightInnerConeCustom = 0x28;
            static constexpr std::uintptr_t bOverrideSpotlightOuterConeCustom = 0x28;
            static constexpr std::uintptr_t IntensityCustom = 0x2C;
            static constexpr std::uintptr_t ColorCustom = 0x30;
            static constexpr std::uintptr_t BrickColorIndexCustom = 0x40;
            static constexpr std::uintptr_t AttenuationRadiusCustom = 0x44;
            static constexpr std::uintptr_t SpotlightInnerConeCustom = 0x48;
            static constexpr std::uintptr_t SpotlightOuterConeCustom = 0x4C;
            static constexpr std::uintptr_t PresetLightSettings = 0x50;
            static constexpr std::uintptr_t PresetOutputLightSettings = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bOverrideAttenuationRadiusCustom", 0x28, "BoolProperty"},
            {"bOverrideBrickColorCustom", 0x28, "BoolProperty"},
            {"bOverrideColorCustom", 0x28, "BoolProperty"},
            {"bOverrideIntensityCustom", 0x28, "BoolProperty"},
            {"bOverrideSpotlightInnerConeCustom", 0x28, "BoolProperty"},
            {"bOverrideSpotlightOuterConeCustom", 0x28, "BoolProperty"},
            {"IntensityCustom", 0x2C, "FloatProperty"},
            {"ColorCustom", 0x30, "StructProperty"},
            {"BrickColorIndexCustom", 0x40, "IntProperty"},
            {"AttenuationRadiusCustom", 0x44, "FloatProperty"},
            {"SpotlightInnerConeCustom", 0x48, "FloatProperty"},
            {"SpotlightOuterConeCustom", 0x4C, "FloatProperty"},
            {"PresetLightSettings", 0x50, "StructProperty"},
            {"PresetOutputLightSettings", 0xD8, "StructProperty"},
        }};
    };

    struct LFNLightingComponent
    {
        static constexpr std::string_view Name = "LFNLightingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MPC = 0xC0;
            static constexpr std::uintptr_t bUseGlobalLightIntensityMultiplier = 0xC8;
            static constexpr std::uintptr_t LightingContext = 0xC9;
            static constexpr std::uintptr_t LightingContextIntensityParamNames = 0xD0;
            static constexpr std::uintptr_t bUseGlobalFogIntensityMultiplier = 0xE0;
            static constexpr std::uintptr_t GlobalFogIntensityMultiplierParamName = 0xE4;
            static constexpr std::uintptr_t bUsePowerOutage = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MPC", 0xC0, "ObjectProperty"},
            {"bUseGlobalLightIntensityMultiplier", 0xC8, "BoolProperty"},
            {"LightingContext", 0xC9, "EnumProperty"},
            {"LightingContextIntensityParamNames", 0xD0, "MapProperty"},
            {"bUseGlobalFogIntensityMultiplier", 0xE0, "BoolProperty"},
            {"GlobalFogIntensityMultiplierParamName", 0xE4, "NameProperty"},
            {"bUsePowerOutage", 0xE8, "BoolProperty"},
        }};
    };

    struct LFNLightingFunctionLibrary
    {
        static constexpr std::string_view Name = "LFNLightingFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LFNLightingInterface
    {
        static constexpr std::string_view Name = "LFNLightingInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LFNPointLightActor
    {
        static constexpr std::string_view Name = "LFNPointLightActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PointLightComponent = 0x278;
            static constexpr std::uintptr_t ScalabilityComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PointLightComponent", 0x278, "ObjectProperty"},
            {"ScalabilityComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct LFNPointLightComponent
    {
        static constexpr std::string_view Name = "LFNPointLightComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PointLightComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GlobalIntensityMultiplier = 0x428;
            static constexpr std::uintptr_t LocalIntensityMultiplier = 0x42C;
            static constexpr std::uintptr_t bIsPowerOutageActive = 0x430;
            static constexpr std::uintptr_t bUseLightPreset = 0x430;
            static constexpr std::uintptr_t LightPreset = 0x438;
            static constexpr std::uintptr_t bOverrideAttenuationRadiusCustom = 0x440;
            static constexpr std::uintptr_t bOverrideBrickColorCustom = 0x440;
            static constexpr std::uintptr_t bOverrideColorCustom = 0x440;
            static constexpr std::uintptr_t bOverrideIntensityCustom = 0x440;
            static constexpr std::uintptr_t IntensityCustom = 0x444;
            static constexpr std::uintptr_t ColorCustom = 0x448;
            static constexpr std::uintptr_t BrickColorIndexCustom = 0x458;
            static constexpr std::uintptr_t AttenuationRadiusCustom = 0x45C;
            static constexpr std::uintptr_t ComponentLightSettings = 0x460;
            static constexpr std::uintptr_t bShowComputedLightSettings = 0x4E8;
            static constexpr std::uintptr_t ComputedLightSettings = 0x4F0;
            static constexpr std::uintptr_t UpdateBrickLights = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"GlobalIntensityMultiplier", 0x428, "FloatProperty"},
            {"LocalIntensityMultiplier", 0x42C, "FloatProperty"},
            {"bIsPowerOutageActive", 0x430, "BoolProperty"},
            {"bUseLightPreset", 0x430, "BoolProperty"},
            {"LightPreset", 0x438, "ObjectProperty"},
            {"bOverrideAttenuationRadiusCustom", 0x440, "BoolProperty"},
            {"bOverrideBrickColorCustom", 0x440, "BoolProperty"},
            {"bOverrideColorCustom", 0x440, "BoolProperty"},
            {"bOverrideIntensityCustom", 0x440, "BoolProperty"},
            {"IntensityCustom", 0x444, "FloatProperty"},
            {"ColorCustom", 0x448, "StructProperty"},
            {"BrickColorIndexCustom", 0x458, "IntProperty"},
            {"AttenuationRadiusCustom", 0x45C, "FloatProperty"},
            {"ComponentLightSettings", 0x460, "StructProperty"},
            {"bShowComputedLightSettings", 0x4E8, "BoolProperty"},
            {"ComputedLightSettings", 0x4F0, "StructProperty"},
            {"UpdateBrickLights", 0x5A0, "BoolProperty"},
        }};
    };

    struct LFNProfileGo
    {
        static constexpr std::string_view Name = "LFNProfileGo";
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

    struct LFNScalabilityComponent
    {
        static constexpr std::string_view Name = "LFNScalabilityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalabilitySettings = 0xD8;
            static constexpr std::uintptr_t LightFadeOverlapRatio = 0x200;
            static constexpr std::uintptr_t LightMeshFadeOverlapRatio = 0x204;
            static constexpr std::uintptr_t LightMeshActivationOffset = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ScalabilitySettings", 0xD8, "StructProperty"},
            {"LightFadeOverlapRatio", 0x200, "FloatProperty"},
            {"LightMeshFadeOverlapRatio", 0x204, "FloatProperty"},
            {"LightMeshActivationOffset", 0x208, "FloatProperty"},
        }};
    };

    struct LFNSpotLightActor
    {
        static constexpr std::string_view Name = "LFNSpotLightActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SpotLightComponent = 0x278;
            static constexpr std::uintptr_t ScalabilityComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpotLightComponent", 0x278, "ObjectProperty"},
            {"ScalabilityComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct LFNSpotLightComponent
    {
        static constexpr std::string_view Name = "LFNSpotLightComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpotLightComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GlobalIntensityMultiplier = 0x438;
            static constexpr std::uintptr_t LocalIntensityMultiplier = 0x43C;
            static constexpr std::uintptr_t bIsPowerOutageActive = 0x440;
            static constexpr std::uintptr_t bUseLightPreset = 0x440;
            static constexpr std::uintptr_t LightPreset = 0x448;
            static constexpr std::uintptr_t bOverrideAttenuationRadiusCustom = 0x450;
            static constexpr std::uintptr_t bOverrideBrickColorCustom = 0x450;
            static constexpr std::uintptr_t bOverrideColorCustom = 0x450;
            static constexpr std::uintptr_t bOverrideIntensityCustom = 0x450;
            static constexpr std::uintptr_t bOverrideSpotlightInnerConeCustom = 0x450;
            static constexpr std::uintptr_t bOverrideSpotlightOuterConeCustom = 0x450;
            static constexpr std::uintptr_t IntensityCustom = 0x454;
            static constexpr std::uintptr_t ColorCustom = 0x458;
            static constexpr std::uintptr_t BrickColorIndexCustom = 0x468;
            static constexpr std::uintptr_t AttenuationRadiusCustom = 0x46C;
            static constexpr std::uintptr_t SpotlightInnerConeCustom = 0x470;
            static constexpr std::uintptr_t SpotlightOuterConeCustom = 0x474;
            static constexpr std::uintptr_t ComponentLightSettings = 0x478;
            static constexpr std::uintptr_t bShowComputedLightSettings = 0x500;
            static constexpr std::uintptr_t ComputedLightSettings = 0x508;
            static constexpr std::uintptr_t UpdateBrickLights = 0x5B8;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"GlobalIntensityMultiplier", 0x438, "FloatProperty"},
            {"LocalIntensityMultiplier", 0x43C, "FloatProperty"},
            {"bIsPowerOutageActive", 0x440, "BoolProperty"},
            {"bUseLightPreset", 0x440, "BoolProperty"},
            {"LightPreset", 0x448, "ObjectProperty"},
            {"bOverrideAttenuationRadiusCustom", 0x450, "BoolProperty"},
            {"bOverrideBrickColorCustom", 0x450, "BoolProperty"},
            {"bOverrideColorCustom", 0x450, "BoolProperty"},
            {"bOverrideIntensityCustom", 0x450, "BoolProperty"},
            {"bOverrideSpotlightInnerConeCustom", 0x450, "BoolProperty"},
            {"bOverrideSpotlightOuterConeCustom", 0x450, "BoolProperty"},
            {"IntensityCustom", 0x454, "FloatProperty"},
            {"ColorCustom", 0x458, "StructProperty"},
            {"BrickColorIndexCustom", 0x468, "IntProperty"},
            {"AttenuationRadiusCustom", 0x46C, "FloatProperty"},
            {"SpotlightInnerConeCustom", 0x470, "FloatProperty"},
            {"SpotlightOuterConeCustom", 0x474, "FloatProperty"},
            {"ComponentLightSettings", 0x478, "StructProperty"},
            {"bShowComputedLightSettings", 0x500, "BoolProperty"},
            {"ComputedLightSettings", 0x508, "StructProperty"},
            {"UpdateBrickLights", 0x5B8, "BoolProperty"},
        }};
    };

}
