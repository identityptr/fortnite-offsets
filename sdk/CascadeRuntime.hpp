#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CascadeRuntime
{
    struct AnimNotifyState_TimedParticleEffect
    {
        static constexpr std::string_view Name = "AnimNotifyState_TimedParticleEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t PSTemplate = 0x30;
            static constexpr std::uintptr_t SocketName = 0x38;
            static constexpr std::uintptr_t LocationOffset = 0x40;
            static constexpr std::uintptr_t RotationOffset = 0x58;
            static constexpr std::uintptr_t bDestroyAtEnd = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PSTemplate", 0x30, "ObjectProperty"},
            {"SocketName", 0x38, "NameProperty"},
            {"LocationOffset", 0x40, "StructProperty"},
            {"RotationOffset", 0x58, "StructProperty"},
            {"bDestroyAtEnd", 0x70, "BoolProperty"},
        }};
    };

    struct AnimNotifyState_Trail
    {
        static constexpr std::string_view Name = "AnimNotifyState_Trail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t PSTemplate = 0x30;
            static constexpr std::uintptr_t FirstSocketName = 0x38;
            static constexpr std::uintptr_t SecondSocketName = 0x3C;
            static constexpr std::uintptr_t WidthScaleMode = 0x40;
            static constexpr std::uintptr_t WidthScaleCurve = 0x44;
            static constexpr std::uintptr_t bRecycleSpawnedSystems = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PSTemplate", 0x30, "ObjectProperty"},
            {"FirstSocketName", 0x38, "NameProperty"},
            {"SecondSocketName", 0x3C, "NameProperty"},
            {"WidthScaleMode", 0x40, "ByteProperty"},
            {"WidthScaleCurve", 0x44, "NameProperty"},
            {"bRecycleSpawnedSystems", 0x48, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OverridePSTemplate",
        }};
    };

    struct AnimNotify_PlayParticleEffect
    {
        static constexpr std::string_view Name = "AnimNotify_PlayParticleEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t PSTemplate = 0x38;
            static constexpr std::uintptr_t LocationOffset = 0x40;
            static constexpr std::uintptr_t RotationOffset = 0x58;
            static constexpr std::uintptr_t Scale = 0x70;
            static constexpr std::uintptr_t Attached = 0xB0;
            static constexpr std::uintptr_t SocketName = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PSTemplate", 0x38, "ObjectProperty"},
            {"LocationOffset", 0x40, "StructProperty"},
            {"RotationOffset", 0x58, "StructProperty"},
            {"Scale", 0x70, "StructProperty"},
            {"Attached", 0xB0, "BoolProperty"},
            {"SocketName", 0xB4, "NameProperty"},
        }};
    };

    struct BeamModifierOptions
    {
        static constexpr std::string_view Name = "BeamModifierOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Block = 0x0;
            static constexpr std::uintptr_t bModify = 0x0;
            static constexpr std::uintptr_t bScale = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Block", 0x0, "BoolProperty"},
            {"bModify", 0x0, "BoolProperty"},
            {"bScale", 0x0, "BoolProperty"},
        }};
    };

    struct BeamTargetData
    {
        static constexpr std::string_view Name = "BeamTargetData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetName = 0x0;
            static constexpr std::uintptr_t TargetPercentage = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetName", 0x0, "NameProperty"},
            {"TargetPercentage", 0x4, "FloatProperty"},
        }};
    };

    struct CascadeFunctionLibrary
    {
        static constexpr std::string_view Name = "CascadeFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SpawnEmitterAtLocation",
            "SpawnEmitterAttached",
        }};
    };

    struct CascadeRendererSettings
    {
        static constexpr std::string_view Name = "CascadeRendererSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GPUSimulationTextureSizeX = 0x30;
            static constexpr std::uintptr_t GPUSimulationTextureSizeY = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GPUSimulationTextureSizeX", 0x30, "IntProperty"},
            {"GPUSimulationTextureSizeY", 0x34, "IntProperty"},
        }};
    };

    struct DistributionFloatParticleParameter
    {
        static constexpr std::string_view Name = "DistributionFloatParticleParameter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DistributionFloatParameterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x40;
            static constexpr std::uintptr_t MinInput = 0x44;
            static constexpr std::uintptr_t MaxInput = 0x48;
            static constexpr std::uintptr_t MinOutput = 0x4C;
            static constexpr std::uintptr_t MaxOutput = 0x50;
            static constexpr std::uintptr_t ParamMode = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ParameterName", 0x40, "NameProperty"},
            {"MinInput", 0x44, "FloatProperty"},
            {"MaxInput", 0x48, "FloatProperty"},
            {"MinOutput", 0x4C, "FloatProperty"},
            {"MaxOutput", 0x50, "FloatProperty"},
            {"ParamMode", 0x54, "ByteProperty"},
        }};
    };

    struct DistributionVectorParticleParameter
    {
        static constexpr std::string_view Name = "DistributionVectorParticleParameter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DistributionVectorParameterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x58;
            static constexpr std::uintptr_t MinInput = 0x60;
            static constexpr std::uintptr_t MaxInput = 0x78;
            static constexpr std::uintptr_t MinOutput = 0x90;
            static constexpr std::uintptr_t MaxOutput = 0xA8;
            static constexpr std::uintptr_t ParamModes = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ParameterName", 0x58, "NameProperty"},
            {"MinInput", 0x60, "StructProperty"},
            {"MaxInput", 0x78, "StructProperty"},
            {"MinOutput", 0x90, "StructProperty"},
            {"MaxOutput", 0xA8, "StructProperty"},
            {"ParamModes", 0xC0, "ByteProperty"},
        }};
    };

    struct Emitter
    {
        static constexpr std::string_view Name = "Emitter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticleSystemComponent = 0x278;
            static constexpr std::uintptr_t bCurrentlyActive = 0x280;
            static constexpr std::uintptr_t bDestroyOnSystemFinish = 0x280;
            static constexpr std::uintptr_t bPostUpdateTickGroup = 0x280;
            static constexpr std::uintptr_t OnParticleSpawn = 0x288;
            static constexpr std::uintptr_t OnParticleBurst = 0x298;
            static constexpr std::uintptr_t OnParticleDeath = 0x2A8;
            static constexpr std::uintptr_t OnParticleCollide = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ParticleSystemComponent", 0x278, "ObjectProperty"},
            {"bCurrentlyActive", 0x280, "BoolProperty"},
            {"bDestroyOnSystemFinish", 0x280, "BoolProperty"},
            {"bPostUpdateTickGroup", 0x280, "BoolProperty"},
            {"OnParticleSpawn", 0x288, "MulticastInlineDelegateProperty"},
            {"OnParticleBurst", 0x298, "MulticastInlineDelegateProperty"},
            {"OnParticleDeath", 0x2A8, "MulticastInlineDelegateProperty"},
            {"OnParticleCollide", 0x2B8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "Activate",
            "Deactivate",
            "IsActive",
            "OnParticleSystemFinished",
            "OnRep_bCurrentlyActive",
            "SetActorParameter",
            "SetColorParameter",
            "SetFloatParameter",
            "SetMaterialParameter",
            "SetTemplate",
            "SetVectorParameter",
            "ToggleActive",
        }};
    };

    struct EmitterCameraLensEffectBase
    {
        static constexpr std::string_view Name = "EmitterCameraLensEffectBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Emitter";
        struct Offsets
        {
            static constexpr std::uintptr_t PS_CameraEffect = 0x2D0;
            static constexpr std::uintptr_t BaseCamera = 0x2D8;
            static constexpr std::uintptr_t RelativeTransform = 0x2E0;
            static constexpr std::uintptr_t BaseFOV = 0x340;
            static constexpr std::uintptr_t bAllowMultipleInstances = 0x344;
            static constexpr std::uintptr_t bResetWhenRetriggered = 0x344;
            static constexpr std::uintptr_t EmittersToTreatAsSame = 0x348;
            static constexpr std::uintptr_t DistFromCamera = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PS_CameraEffect", 0x2D0, "ObjectProperty"},
            {"BaseCamera", 0x2D8, "ObjectProperty"},
            {"RelativeTransform", 0x2E0, "StructProperty"},
            {"BaseFOV", 0x340, "FloatProperty"},
            {"bAllowMultipleInstances", 0x344, "BoolProperty"},
            {"bResetWhenRetriggered", 0x344, "BoolProperty"},
            {"EmittersToTreatAsSame", 0x348, "ArrayProperty"},
            {"DistFromCamera", 0x358, "FloatProperty"},
        }};
    };

    struct EmitterDynamicParameter
    {
        static constexpr std::string_view Name = "EmitterDynamicParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamName = 0x0;
            static constexpr std::uintptr_t bSpawnTimeOnly = 0x4;
            static constexpr std::uintptr_t bUseEmitterTime = 0x4;
            static constexpr std::uintptr_t ValueMethod = 0x8;
            static constexpr std::uintptr_t bScaleVelocityByParamValue = 0xC;
            static constexpr std::uintptr_t ParamValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ParamName", 0x0, "NameProperty"},
            {"bSpawnTimeOnly", 0x4, "BoolProperty"},
            {"bUseEmitterTime", 0x4, "BoolProperty"},
            {"ValueMethod", 0x8, "ByteProperty"},
            {"bScaleVelocityByParamValue", 0xC, "BoolProperty"},
            {"ParamValue", 0x10, "StructProperty"},
        }};
    };

    struct GPUSpriteEmitterInfo
    {
        static constexpr std::string_view Name = "GPUSpriteEmitterInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredModule = 0x0;
            static constexpr std::uintptr_t SpawnModule = 0x8;
            static constexpr std::uintptr_t SpawnPerUnitModule = 0x10;
            static constexpr std::uintptr_t SpawnModules = 0x18;
            static constexpr std::uintptr_t LocalVectorField = 0x30;
            static constexpr std::uintptr_t VectorFieldScale = 0x100;
            static constexpr std::uintptr_t DragCoefficient = 0x120;
            static constexpr std::uintptr_t PointAttractorStrength = 0x140;
            static constexpr std::uintptr_t Resilience = 0x160;
            static constexpr std::uintptr_t ConstantAcceleration = 0x180;
            static constexpr std::uintptr_t PointAttractorPosition = 0x198;
            static constexpr std::uintptr_t PointAttractorRadiusSq = 0x1B0;
            static constexpr std::uintptr_t OrbitOffsetBase = 0x1B8;
            static constexpr std::uintptr_t OrbitOffsetRange = 0x1D0;
            static constexpr std::uintptr_t InvMaxSize = 0x1E8;
            static constexpr std::uintptr_t InvRotationRateScale = 0x1F8;
            static constexpr std::uintptr_t MaxLifetime = 0x1FC;
            static constexpr std::uintptr_t MaxParticleCount = 0x200;
            static constexpr std::uintptr_t ScreenAlignment = 0x204;
            static constexpr std::uintptr_t LockAxisFlag = 0x205;
            static constexpr std::uintptr_t bEnableCollision = 0x208;
            static constexpr std::uintptr_t CollisionMode = 0x20C;
            static constexpr std::uintptr_t bRemoveHMDRoll = 0x210;
            static constexpr std::uintptr_t bUseVelocityForMotionBlur = 0x210;
            static constexpr std::uintptr_t MinFacingCameraBlendDistance = 0x214;
            static constexpr std::uintptr_t MaxFacingCameraBlendDistance = 0x218;
            static constexpr std::uintptr_t DynamicColor = 0x220;
            static constexpr std::uintptr_t DynamicAlpha = 0x280;
            static constexpr std::uintptr_t DynamicColorScale = 0x2B0;
            static constexpr std::uintptr_t DynamicAlphaScale = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"RequiredModule", 0x0, "ObjectProperty"},
            {"SpawnModule", 0x8, "ObjectProperty"},
            {"SpawnPerUnitModule", 0x10, "ObjectProperty"},
            {"SpawnModules", 0x18, "ArrayProperty"},
            {"LocalVectorField", 0x30, "StructProperty"},
            {"VectorFieldScale", 0x100, "StructProperty"},
            {"DragCoefficient", 0x120, "StructProperty"},
            {"PointAttractorStrength", 0x140, "StructProperty"},
            {"Resilience", 0x160, "StructProperty"},
            {"ConstantAcceleration", 0x180, "StructProperty"},
            {"PointAttractorPosition", 0x198, "StructProperty"},
            {"PointAttractorRadiusSq", 0x1B0, "FloatProperty"},
            {"OrbitOffsetBase", 0x1B8, "StructProperty"},
            {"OrbitOffsetRange", 0x1D0, "StructProperty"},
            {"InvMaxSize", 0x1E8, "StructProperty"},
            {"InvRotationRateScale", 0x1F8, "FloatProperty"},
            {"MaxLifetime", 0x1FC, "FloatProperty"},
            {"MaxParticleCount", 0x200, "IntProperty"},
            {"ScreenAlignment", 0x204, "ByteProperty"},
            {"LockAxisFlag", 0x205, "ByteProperty"},
            {"bEnableCollision", 0x208, "BoolProperty"},
            {"CollisionMode", 0x20C, "ByteProperty"},
            {"bRemoveHMDRoll", 0x210, "BoolProperty"},
            {"bUseVelocityForMotionBlur", 0x210, "BoolProperty"},
            {"MinFacingCameraBlendDistance", 0x214, "FloatProperty"},
            {"MaxFacingCameraBlendDistance", 0x218, "FloatProperty"},
            {"DynamicColor", 0x220, "StructProperty"},
            {"DynamicAlpha", 0x280, "StructProperty"},
            {"DynamicColorScale", 0x2B0, "StructProperty"},
            {"DynamicAlphaScale", 0x310, "StructProperty"},
        }};
    };

    struct GPUSpriteLocalVectorFieldInfo
    {
        static constexpr std::string_view Name = "GPUSpriteLocalVectorFieldInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Field = 0x0;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t MinInitialRotation = 0x70;
            static constexpr std::uintptr_t MaxInitialRotation = 0x88;
            static constexpr std::uintptr_t RotationRate = 0xA0;
            static constexpr std::uintptr_t Intensity = 0xB8;
            static constexpr std::uintptr_t Tightness = 0xBC;
            static constexpr std::uintptr_t bIgnoreComponentTransform = 0xC0;
            static constexpr std::uintptr_t bTileX = 0xC0;
            static constexpr std::uintptr_t bTileY = 0xC0;
            static constexpr std::uintptr_t bTileZ = 0xC0;
            static constexpr std::uintptr_t bUseFixDT = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Field", 0x0, "ObjectProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"MinInitialRotation", 0x70, "StructProperty"},
            {"MaxInitialRotation", 0x88, "StructProperty"},
            {"RotationRate", 0xA0, "StructProperty"},
            {"Intensity", 0xB8, "FloatProperty"},
            {"Tightness", 0xBC, "FloatProperty"},
            {"bIgnoreComponentTransform", 0xC0, "BoolProperty"},
            {"bTileX", 0xC0, "BoolProperty"},
            {"bTileY", 0xC0, "BoolProperty"},
            {"bTileZ", 0xC0, "BoolProperty"},
            {"bUseFixDT", 0xC0, "BoolProperty"},
        }};
    };

    struct GPUSpriteResourceData
    {
        static constexpr std::string_view Name = "GPUSpriteResourceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t QuantizedColorSamples = 0x0;
            static constexpr std::uintptr_t QuantizedMiscSamples = 0x10;
            static constexpr std::uintptr_t QuantizedSimulationAttrSamples = 0x20;
            static constexpr std::uintptr_t ColorScale = 0x30;
            static constexpr std::uintptr_t ColorBias = 0x50;
            static constexpr std::uintptr_t MiscScale = 0x70;
            static constexpr std::uintptr_t MiscBias = 0x90;
            static constexpr std::uintptr_t SimulationAttrCurveScale = 0xB0;
            static constexpr std::uintptr_t SimulationAttrCurveBias = 0xD0;
            static constexpr std::uintptr_t SubImageSize = 0xF0;
            static constexpr std::uintptr_t SizeBySpeed = 0x110;
            static constexpr std::uintptr_t ConstantAcceleration = 0x130;
            static constexpr std::uintptr_t OrbitOffsetBase = 0x148;
            static constexpr std::uintptr_t OrbitOffsetRange = 0x160;
            static constexpr std::uintptr_t OrbitFrequencyBase = 0x178;
            static constexpr std::uintptr_t OrbitFrequencyRange = 0x190;
            static constexpr std::uintptr_t OrbitPhaseBase = 0x1A8;
            static constexpr std::uintptr_t OrbitPhaseRange = 0x1C0;
            static constexpr std::uintptr_t GlobalVectorFieldScale = 0x1D8;
            static constexpr std::uintptr_t GlobalVectorFieldTightness = 0x1DC;
            static constexpr std::uintptr_t PerParticleVectorFieldScale = 0x1E0;
            static constexpr std::uintptr_t PerParticleVectorFieldBias = 0x1E4;
            static constexpr std::uintptr_t DragCoefficientScale = 0x1E8;
            static constexpr std::uintptr_t DragCoefficientBias = 0x1EC;
            static constexpr std::uintptr_t ResilienceScale = 0x1F0;
            static constexpr std::uintptr_t ResilienceBias = 0x1F4;
            static constexpr std::uintptr_t CollisionRadiusScale = 0x1F8;
            static constexpr std::uintptr_t CollisionRadiusBias = 0x1FC;
            static constexpr std::uintptr_t CollisionTimeBias = 0x200;
            static constexpr std::uintptr_t CollisionRandomSpread = 0x204;
            static constexpr std::uintptr_t CollisionRandomDistribution = 0x208;
            static constexpr std::uintptr_t OneMinusFriction = 0x20C;
            static constexpr std::uintptr_t RotationRateScale = 0x210;
            static constexpr std::uintptr_t CameraMotionBlurAmount = 0x214;
            static constexpr std::uintptr_t ScreenAlignment = 0x218;
            static constexpr std::uintptr_t LockAxisFlag = 0x219;
            static constexpr std::uintptr_t PivotOffset = 0x220;
            static constexpr std::uintptr_t bRemoveHMDRoll = 0x230;
            static constexpr std::uintptr_t bUseVelocityForMotionBlur = 0x230;
            static constexpr std::uintptr_t MinFacingCameraBlendDistance = 0x234;
            static constexpr std::uintptr_t MaxFacingCameraBlendDistance = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 41> Properties{{
            {"QuantizedColorSamples", 0x0, "ArrayProperty"},
            {"QuantizedMiscSamples", 0x10, "ArrayProperty"},
            {"QuantizedSimulationAttrSamples", 0x20, "ArrayProperty"},
            {"ColorScale", 0x30, "StructProperty"},
            {"ColorBias", 0x50, "StructProperty"},
            {"MiscScale", 0x70, "StructProperty"},
            {"MiscBias", 0x90, "StructProperty"},
            {"SimulationAttrCurveScale", 0xB0, "StructProperty"},
            {"SimulationAttrCurveBias", 0xD0, "StructProperty"},
            {"SubImageSize", 0xF0, "StructProperty"},
            {"SizeBySpeed", 0x110, "StructProperty"},
            {"ConstantAcceleration", 0x130, "StructProperty"},
            {"OrbitOffsetBase", 0x148, "StructProperty"},
            {"OrbitOffsetRange", 0x160, "StructProperty"},
            {"OrbitFrequencyBase", 0x178, "StructProperty"},
            {"OrbitFrequencyRange", 0x190, "StructProperty"},
            {"OrbitPhaseBase", 0x1A8, "StructProperty"},
            {"OrbitPhaseRange", 0x1C0, "StructProperty"},
            {"GlobalVectorFieldScale", 0x1D8, "FloatProperty"},
            {"GlobalVectorFieldTightness", 0x1DC, "FloatProperty"},
            {"PerParticleVectorFieldScale", 0x1E0, "FloatProperty"},
            {"PerParticleVectorFieldBias", 0x1E4, "FloatProperty"},
            {"DragCoefficientScale", 0x1E8, "FloatProperty"},
            {"DragCoefficientBias", 0x1EC, "FloatProperty"},
            {"ResilienceScale", 0x1F0, "FloatProperty"},
            {"ResilienceBias", 0x1F4, "FloatProperty"},
            {"CollisionRadiusScale", 0x1F8, "FloatProperty"},
            {"CollisionRadiusBias", 0x1FC, "FloatProperty"},
            {"CollisionTimeBias", 0x200, "FloatProperty"},
            {"CollisionRandomSpread", 0x204, "FloatProperty"},
            {"CollisionRandomDistribution", 0x208, "FloatProperty"},
            {"OneMinusFriction", 0x20C, "FloatProperty"},
            {"RotationRateScale", 0x210, "FloatProperty"},
            {"CameraMotionBlurAmount", 0x214, "FloatProperty"},
            {"ScreenAlignment", 0x218, "ByteProperty"},
            {"LockAxisFlag", 0x219, "ByteProperty"},
            {"PivotOffset", 0x220, "StructProperty"},
            {"bRemoveHMDRoll", 0x230, "BoolProperty"},
            {"bUseVelocityForMotionBlur", 0x230, "BoolProperty"},
            {"MinFacingCameraBlendDistance", 0x234, "FloatProperty"},
            {"MaxFacingCameraBlendDistance", 0x238, "FloatProperty"},
        }};
    };

    struct LODSoloTrack
    {
        static constexpr std::string_view Name = "LODSoloTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoloEnableSetting = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoloEnableSetting", 0x0, "ArrayProperty"},
        }};
    };

    struct LocationBoneSocketInfo
    {
        static constexpr std::string_view Name = "LocationBoneSocketInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneSocketName = 0x0;
            static constexpr std::uintptr_t Offset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoneSocketName", 0x0, "NameProperty"},
            {"Offset", 0x8, "StructProperty"},
        }};
    };

    struct NamedEmitterMaterial
    {
        static constexpr std::string_view Name = "NamedEmitterMaterial";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Material = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Material", 0x8, "ObjectProperty"},
        }};
    };

    struct OrbitOptions
    {
        static constexpr std::string_view Name = "OrbitOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bProcessDuringSpawn = 0x0;
            static constexpr std::uintptr_t bProcessDuringUpdate = 0x0;
            static constexpr std::uintptr_t bUseEmitterTime = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bProcessDuringSpawn", 0x0, "BoolProperty"},
            {"bProcessDuringUpdate", 0x0, "BoolProperty"},
            {"bUseEmitterTime", 0x0, "BoolProperty"},
        }};
    };

    struct PSCPool
    {
        static constexpr std::string_view Name = "PSCPool";
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

    struct PSCPoolElem
    {
        static constexpr std::string_view Name = "PSCPoolElem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PSC = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PSC", 0x0, "ObjectProperty"},
        }};
    };

    struct ParticleBurst
    {
        static constexpr std::string_view Name = "ParticleBurst";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Count = 0x0;
            static constexpr std::uintptr_t CountLow = 0x4;
            static constexpr std::uintptr_t time = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Count", 0x0, "IntProperty"},
            {"CountLow", 0x4, "IntProperty"},
            {"time", 0x8, "FloatProperty"},
        }};
    };

    struct ParticleCurvePair
    {
        static constexpr std::string_view Name = "ParticleCurvePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveName = 0x0;
            static constexpr std::uintptr_t CurveObject = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurveName", 0x0, "StrProperty"},
            {"CurveObject", 0x10, "ObjectProperty"},
        }};
    };

    struct ParticleEmitter
    {
        static constexpr std::string_view Name = "ParticleEmitter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0x28;
            static constexpr std::uintptr_t SubUVDataOffset = 0x2C;
            static constexpr std::uintptr_t EmitterRenderMode = 0x30;
            static constexpr std::uintptr_t SignificanceLevel = 0x31;
            static constexpr std::uintptr_t ConvertedModules = 0x33;
            static constexpr std::uintptr_t bCookedOut = 0x33;
            static constexpr std::uintptr_t bDisabledLODsKeepEmitterAlive = 0x33;
            static constexpr std::uintptr_t bIsSoloing = 0x33;
            static constexpr std::uintptr_t bUseLegacySpawningBehavior = 0x33;
            static constexpr std::uintptr_t bDisableWhenInsignficant = 0x34;
            static constexpr std::uintptr_t LODLevels = 0x38;
            static constexpr std::uintptr_t PeakActiveParticles = 0x48;
            static constexpr std::uintptr_t InitialAllocationCount = 0x4C;
            static constexpr std::uintptr_t QualityLevelSpawnRateScale = 0x50;
            static constexpr std::uintptr_t DetailModeBitmask = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"EmitterName", 0x28, "NameProperty"},
            {"SubUVDataOffset", 0x2C, "IntProperty"},
            {"EmitterRenderMode", 0x30, "ByteProperty"},
            {"SignificanceLevel", 0x31, "EnumProperty"},
            {"ConvertedModules", 0x33, "BoolProperty"},
            {"bCookedOut", 0x33, "BoolProperty"},
            {"bDisabledLODsKeepEmitterAlive", 0x33, "BoolProperty"},
            {"bIsSoloing", 0x33, "BoolProperty"},
            {"bUseLegacySpawningBehavior", 0x33, "BoolProperty"},
            {"bDisableWhenInsignficant", 0x34, "BoolProperty"},
            {"LODLevels", 0x38, "ArrayProperty"},
            {"PeakActiveParticles", 0x48, "IntProperty"},
            {"InitialAllocationCount", 0x4C, "IntProperty"},
            {"QualityLevelSpawnRateScale", 0x50, "FloatProperty"},
            {"DetailModeBitmask", 0x54, "UInt32Property"},
        }};
    };

    struct ParticleEmitterReplayFrame
    {
        static constexpr std::string_view Name = "ParticleEmitterReplayFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParticleEventManager
    {
        static constexpr std::string_view Name = "ParticleEventManager";
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

    struct ParticleEvent_GenerateInfo
    {
        static constexpr std::string_view Name = "ParticleEvent_GenerateInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
            static constexpr std::uintptr_t ParticleFrequency = 0x8;
            static constexpr std::uintptr_t FirstTimeOnly = 0xC;
            static constexpr std::uintptr_t LastTimeOnly = 0xC;
            static constexpr std::uintptr_t UseReflectedImpactVector = 0xC;
            static constexpr std::uintptr_t bUseOrbitOffset = 0xC;
            static constexpr std::uintptr_t CustomName = 0x10;
            static constexpr std::uintptr_t ParticleModuleEventsToSendToGame = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Type", 0x0, "ByteProperty"},
            {"Frequency", 0x4, "IntProperty"},
            {"ParticleFrequency", 0x8, "IntProperty"},
            {"FirstTimeOnly", 0xC, "BoolProperty"},
            {"LastTimeOnly", 0xC, "BoolProperty"},
            {"UseReflectedImpactVector", 0xC, "BoolProperty"},
            {"bUseOrbitOffset", 0xC, "BoolProperty"},
            {"CustomName", 0x10, "NameProperty"},
            {"ParticleModuleEventsToSendToGame", 0x18, "ArrayProperty"},
        }};
    };

    struct ParticleLODLevel
    {
        static constexpr std::string_view Name = "ParticleLODLevel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Level = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x2C;
            static constexpr std::uintptr_t RequiredModule = 0x30;
            static constexpr std::uintptr_t Modules = 0x38;
            static constexpr std::uintptr_t TypeDataModule = 0x48;
            static constexpr std::uintptr_t SpawnModule = 0x50;
            static constexpr std::uintptr_t EventGenerator = 0x58;
            static constexpr std::uintptr_t SpawningModules = 0x60;
            static constexpr std::uintptr_t SpawnModules = 0x70;
            static constexpr std::uintptr_t UpdateModules = 0x80;
            static constexpr std::uintptr_t OrbitModules = 0x90;
            static constexpr std::uintptr_t EventReceiverModules = 0xA0;
            static constexpr std::uintptr_t ConvertedModules = 0xB0;
            static constexpr std::uintptr_t PeakActiveParticles = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Level", 0x28, "IntProperty"},
            {"bEnabled", 0x2C, "BoolProperty"},
            {"RequiredModule", 0x30, "ObjectProperty"},
            {"Modules", 0x38, "ArrayProperty"},
            {"TypeDataModule", 0x48, "ObjectProperty"},
            {"SpawnModule", 0x50, "ObjectProperty"},
            {"EventGenerator", 0x58, "ObjectProperty"},
            {"SpawningModules", 0x60, "ArrayProperty"},
            {"SpawnModules", 0x70, "ArrayProperty"},
            {"UpdateModules", 0x80, "ArrayProperty"},
            {"OrbitModules", 0x90, "ArrayProperty"},
            {"EventReceiverModules", 0xA0, "ArrayProperty"},
            {"ConvertedModules", 0xB0, "BoolProperty"},
            {"PeakActiveParticles", 0xB4, "IntProperty"},
        }};
    };

    struct ParticleModule
    {
        static constexpr std::string_view Name = "ParticleModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleAcceleration
    {
        static constexpr std::string_view Name = "ParticleModuleAcceleration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAccelerationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Acceleration = 0x38;
            static constexpr std::uintptr_t bApplyOwnerScale = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Acceleration", 0x38, "StructProperty"},
            {"bApplyOwnerScale", 0x98, "BoolProperty"},
        }};
    };

    struct ParticleModuleAccelerationBase
    {
        static constexpr std::string_view Name = "ParticleModuleAccelerationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bAlwaysInWorldSpace = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAlwaysInWorldSpace", 0x30, "BoolProperty"},
        }};
    };

    struct ParticleModuleAccelerationConstant
    {
        static constexpr std::string_view Name = "ParticleModuleAccelerationConstant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAccelerationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Acceleration = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Acceleration", 0x38, "StructProperty"},
        }};
    };

    struct ParticleModuleAccelerationDrag
    {
        static constexpr std::string_view Name = "ParticleModuleAccelerationDrag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAccelerationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DragCoefficient = 0x38;
            static constexpr std::uintptr_t DragCoefficientRaw = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DragCoefficient", 0x38, "ObjectProperty"},
            {"DragCoefficientRaw", 0x40, "StructProperty"},
        }};
    };

    struct ParticleModuleAccelerationDragScaleOverLife
    {
        static constexpr std::string_view Name = "ParticleModuleAccelerationDragScaleOverLife";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAccelerationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DragScale = 0x38;
            static constexpr std::uintptr_t DragScaleRaw = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DragScale", 0x38, "ObjectProperty"},
            {"DragScaleRaw", 0x40, "StructProperty"},
        }};
    };

    struct ParticleModuleAccelerationOverLifetime
    {
        static constexpr std::string_view Name = "ParticleModuleAccelerationOverLifetime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAccelerationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AccelOverLife = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AccelOverLife", 0x38, "StructProperty"},
        }};
    };

    struct ParticleModuleAttractorBase
    {
        static constexpr std::string_view Name = "ParticleModuleAttractorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleAttractorLine
    {
        static constexpr std::string_view Name = "ParticleModuleAttractorLine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAttractorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EndPoint0 = 0x30;
            static constexpr std::uintptr_t EndPoint1 = 0x48;
            static constexpr std::uintptr_t Range = 0x60;
            static constexpr std::uintptr_t Strength = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EndPoint0", 0x30, "StructProperty"},
            {"EndPoint1", 0x48, "StructProperty"},
            {"Range", 0x60, "StructProperty"},
            {"Strength", 0x90, "StructProperty"},
        }};
    };

    struct ParticleModuleAttractorParticle
    {
        static constexpr std::string_view Name = "ParticleModuleAttractorParticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAttractorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0x30;
            static constexpr std::uintptr_t Range = 0x38;
            static constexpr std::uintptr_t bStrengthByDistance = 0x68;
            static constexpr std::uintptr_t Strength = 0x70;
            static constexpr std::uintptr_t bAffectBaseVelocity = 0xA0;
            static constexpr std::uintptr_t SelectionMethod = 0xA4;
            static constexpr std::uintptr_t bInheritSourceVel = 0xA8;
            static constexpr std::uintptr_t bRenewSource = 0xA8;
            static constexpr std::uintptr_t LastSelIndex = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"EmitterName", 0x30, "NameProperty"},
            {"Range", 0x38, "StructProperty"},
            {"bStrengthByDistance", 0x68, "BoolProperty"},
            {"Strength", 0x70, "StructProperty"},
            {"bAffectBaseVelocity", 0xA0, "BoolProperty"},
            {"SelectionMethod", 0xA4, "ByteProperty"},
            {"bInheritSourceVel", 0xA8, "BoolProperty"},
            {"bRenewSource", 0xA8, "BoolProperty"},
            {"LastSelIndex", 0xAC, "IntProperty"},
        }};
    };

    struct ParticleModuleAttractorPoint
    {
        static constexpr std::string_view Name = "ParticleModuleAttractorPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAttractorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x30;
            static constexpr std::uintptr_t Range = 0x90;
            static constexpr std::uintptr_t Strength = 0xC0;
            static constexpr std::uintptr_t Negative_X = 0xF0;
            static constexpr std::uintptr_t Positive_X = 0xF0;
            static constexpr std::uintptr_t Positive_Y = 0xF0;
            static constexpr std::uintptr_t Positive_Z = 0xF0;
            static constexpr std::uintptr_t StrengthByDistance = 0xF0;
            static constexpr std::uintptr_t bAffectBaseVelocity = 0xF0;
            static constexpr std::uintptr_t bOverrideVelocity = 0xF0;
            static constexpr std::uintptr_t bUseWorldSpacePosition = 0xF0;
            static constexpr std::uintptr_t Negative_Y = 0xF1;
            static constexpr std::uintptr_t Negative_Z = 0xF1;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Position", 0x30, "StructProperty"},
            {"Range", 0x90, "StructProperty"},
            {"Strength", 0xC0, "StructProperty"},
            {"Negative_X", 0xF0, "BoolProperty"},
            {"Positive_X", 0xF0, "BoolProperty"},
            {"Positive_Y", 0xF0, "BoolProperty"},
            {"Positive_Z", 0xF0, "BoolProperty"},
            {"StrengthByDistance", 0xF0, "BoolProperty"},
            {"bAffectBaseVelocity", 0xF0, "BoolProperty"},
            {"bOverrideVelocity", 0xF0, "BoolProperty"},
            {"bUseWorldSpacePosition", 0xF0, "BoolProperty"},
            {"Negative_Y", 0xF1, "BoolProperty"},
            {"Negative_Z", 0xF1, "BoolProperty"},
        }};
    };

    struct ParticleModuleAttractorPointGravity
    {
        static constexpr std::string_view Name = "ParticleModuleAttractorPointGravity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleAttractorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x30;
            static constexpr std::uintptr_t Radius = 0x48;
            static constexpr std::uintptr_t Strength = 0x50;
            static constexpr std::uintptr_t StrengthRaw = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Position", 0x30, "StructProperty"},
            {"Radius", 0x48, "FloatProperty"},
            {"Strength", 0x50, "ObjectProperty"},
            {"StrengthRaw", 0x58, "StructProperty"},
        }};
    };

    struct ParticleModuleBeamBase
    {
        static constexpr std::string_view Name = "ParticleModuleBeamBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleBeamModifier
    {
        static constexpr std::string_view Name = "ParticleModuleBeamModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleBeamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifierType = 0x30;
            static constexpr std::uintptr_t PositionOptions = 0x34;
            static constexpr std::uintptr_t Position = 0x38;
            static constexpr std::uintptr_t TangentOptions = 0x98;
            static constexpr std::uintptr_t Tangent = 0xA0;
            static constexpr std::uintptr_t bAbsoluteTangent = 0x100;
            static constexpr std::uintptr_t StrengthOptions = 0x104;
            static constexpr std::uintptr_t Strength = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ModifierType", 0x30, "ByteProperty"},
            {"PositionOptions", 0x34, "StructProperty"},
            {"Position", 0x38, "StructProperty"},
            {"TangentOptions", 0x98, "StructProperty"},
            {"Tangent", 0xA0, "StructProperty"},
            {"bAbsoluteTangent", 0x100, "BoolProperty"},
            {"StrengthOptions", 0x104, "StructProperty"},
            {"Strength", 0x108, "StructProperty"},
        }};
    };

    struct ParticleModuleBeamNoise
    {
        static constexpr std::string_view Name = "ParticleModuleBeamNoise";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleBeamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bLowFreq_Enabled = 0x30;
            static constexpr std::uintptr_t Frequency = 0x34;
            static constexpr std::uintptr_t Frequency_LowRange = 0x38;
            static constexpr std::uintptr_t NoiseRange = 0x40;
            static constexpr std::uintptr_t NoiseRangeScale = 0xA0;
            static constexpr std::uintptr_t bNRScaleEmitterTime = 0xD0;
            static constexpr std::uintptr_t NoiseSpeed = 0xD8;
            static constexpr std::uintptr_t bSmooth = 0x138;
            static constexpr std::uintptr_t NoiseLockRadius = 0x13C;
            static constexpr std::uintptr_t bNoiseLock = 0x140;
            static constexpr std::uintptr_t bOscillate = 0x140;
            static constexpr std::uintptr_t NoiseLockTime = 0x144;
            static constexpr std::uintptr_t NoiseTension = 0x148;
            static constexpr std::uintptr_t bUseNoiseTangents = 0x14C;
            static constexpr std::uintptr_t NoiseTangentStrength = 0x150;
            static constexpr std::uintptr_t NoiseTessellation = 0x180;
            static constexpr std::uintptr_t bTargetNoise = 0x184;
            static constexpr std::uintptr_t FrequencyDistance = 0x188;
            static constexpr std::uintptr_t bApplyNoiseScale = 0x18C;
            static constexpr std::uintptr_t NoiseScale = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"bLowFreq_Enabled", 0x30, "BoolProperty"},
            {"Frequency", 0x34, "IntProperty"},
            {"Frequency_LowRange", 0x38, "IntProperty"},
            {"NoiseRange", 0x40, "StructProperty"},
            {"NoiseRangeScale", 0xA0, "StructProperty"},
            {"bNRScaleEmitterTime", 0xD0, "BoolProperty"},
            {"NoiseSpeed", 0xD8, "StructProperty"},
            {"bSmooth", 0x138, "BoolProperty"},
            {"NoiseLockRadius", 0x13C, "FloatProperty"},
            {"bNoiseLock", 0x140, "BoolProperty"},
            {"bOscillate", 0x140, "BoolProperty"},
            {"NoiseLockTime", 0x144, "FloatProperty"},
            {"NoiseTension", 0x148, "FloatProperty"},
            {"bUseNoiseTangents", 0x14C, "BoolProperty"},
            {"NoiseTangentStrength", 0x150, "StructProperty"},
            {"NoiseTessellation", 0x180, "IntProperty"},
            {"bTargetNoise", 0x184, "BoolProperty"},
            {"FrequencyDistance", 0x188, "FloatProperty"},
            {"bApplyNoiseScale", 0x18C, "BoolProperty"},
            {"NoiseScale", 0x190, "StructProperty"},
        }};
    };

    struct ParticleModuleBeamSource
    {
        static constexpr std::string_view Name = "ParticleModuleBeamSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleBeamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMethod = 0x30;
            static constexpr std::uintptr_t SourceName = 0x34;
            static constexpr std::uintptr_t bSourceAbsolute = 0x38;
            static constexpr std::uintptr_t Source = 0x40;
            static constexpr std::uintptr_t bLockSource = 0xA0;
            static constexpr std::uintptr_t SourceTangentMethod = 0xA4;
            static constexpr std::uintptr_t SourceTangent = 0xA8;
            static constexpr std::uintptr_t bLockSourceTangent = 0x108;
            static constexpr std::uintptr_t SourceStrength = 0x110;
            static constexpr std::uintptr_t bLockSourceStength = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SourceMethod", 0x30, "ByteProperty"},
            {"SourceName", 0x34, "NameProperty"},
            {"bSourceAbsolute", 0x38, "BoolProperty"},
            {"Source", 0x40, "StructProperty"},
            {"bLockSource", 0xA0, "BoolProperty"},
            {"SourceTangentMethod", 0xA4, "ByteProperty"},
            {"SourceTangent", 0xA8, "StructProperty"},
            {"bLockSourceTangent", 0x108, "BoolProperty"},
            {"SourceStrength", 0x110, "StructProperty"},
            {"bLockSourceStength", 0x140, "BoolProperty"},
        }};
    };

    struct ParticleModuleBeamTarget
    {
        static constexpr std::string_view Name = "ParticleModuleBeamTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleBeamBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetMethod = 0x30;
            static constexpr std::uintptr_t TargetName = 0x34;
            static constexpr std::uintptr_t Target = 0x38;
            static constexpr std::uintptr_t bLockTarget = 0x98;
            static constexpr std::uintptr_t bTargetAbsolute = 0x98;
            static constexpr std::uintptr_t TargetTangentMethod = 0x9C;
            static constexpr std::uintptr_t TargetTangent = 0xA0;
            static constexpr std::uintptr_t bLockTargetTangent = 0x100;
            static constexpr std::uintptr_t TargetStrength = 0x108;
            static constexpr std::uintptr_t bLockTargetStength = 0x138;
            static constexpr std::uintptr_t LockRadius = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TargetMethod", 0x30, "ByteProperty"},
            {"TargetName", 0x34, "NameProperty"},
            {"Target", 0x38, "StructProperty"},
            {"bLockTarget", 0x98, "BoolProperty"},
            {"bTargetAbsolute", 0x98, "BoolProperty"},
            {"TargetTangentMethod", 0x9C, "ByteProperty"},
            {"TargetTangent", 0xA0, "StructProperty"},
            {"bLockTargetTangent", 0x100, "BoolProperty"},
            {"TargetStrength", 0x108, "StructProperty"},
            {"bLockTargetStength", 0x138, "BoolProperty"},
            {"LockRadius", 0x13C, "FloatProperty"},
        }};
    };

    struct ParticleModuleCameraBase
    {
        static constexpr std::string_view Name = "ParticleModuleCameraBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleCameraOffset
    {
        static constexpr std::string_view Name = "ParticleModuleCameraOffset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleCameraBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraOffset = 0x30;
            static constexpr std::uintptr_t bSpawnTimeOnly = 0x60;
            static constexpr std::uintptr_t UpdateMethod = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CameraOffset", 0x30, "StructProperty"},
            {"bSpawnTimeOnly", 0x60, "BoolProperty"},
            {"UpdateMethod", 0x64, "ByteProperty"},
        }};
    };

    struct ParticleModuleCollision
    {
        static constexpr std::string_view Name = "ParticleModuleCollision";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleCollisionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DampingFactor = 0x30;
            static constexpr std::uintptr_t DampingFactorRotation = 0x90;
            static constexpr std::uintptr_t MaxCollisions = 0xF0;
            static constexpr std::uintptr_t CollisionCompletionOption = 0x120;
            static constexpr std::uintptr_t CollisionTypes = 0x128;
            static constexpr std::uintptr_t bApplyPhysics = 0x148;
            static constexpr std::uintptr_t bIgnoreTriggerVolumes = 0x148;
            static constexpr std::uintptr_t ParticleMass = 0x150;
            static constexpr std::uintptr_t DirScalar = 0x180;
            static constexpr std::uintptr_t bOnlyVerticalNormalsDecrementCount = 0x184;
            static constexpr std::uintptr_t bPawnsDoNotDecrementCount = 0x184;
            static constexpr std::uintptr_t VerticalFudgeFactor = 0x188;
            static constexpr std::uintptr_t DelayAmount = 0x190;
            static constexpr std::uintptr_t bCollideOnlyIfVisible = 0x1C0;
            static constexpr std::uintptr_t bIgnoreSourceActor = 0x1C0;
            static constexpr std::uintptr_t MaxCollisionDistance = 0x1C4;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"DampingFactor", 0x30, "StructProperty"},
            {"DampingFactorRotation", 0x90, "StructProperty"},
            {"MaxCollisions", 0xF0, "StructProperty"},
            {"CollisionCompletionOption", 0x120, "ByteProperty"},
            {"CollisionTypes", 0x128, "ArrayProperty"},
            {"bApplyPhysics", 0x148, "BoolProperty"},
            {"bIgnoreTriggerVolumes", 0x148, "BoolProperty"},
            {"ParticleMass", 0x150, "StructProperty"},
            {"DirScalar", 0x180, "FloatProperty"},
            {"bOnlyVerticalNormalsDecrementCount", 0x184, "BoolProperty"},
            {"bPawnsDoNotDecrementCount", 0x184, "BoolProperty"},
            {"VerticalFudgeFactor", 0x188, "FloatProperty"},
            {"DelayAmount", 0x190, "StructProperty"},
            {"bCollideOnlyIfVisible", 0x1C0, "BoolProperty"},
            {"bIgnoreSourceActor", 0x1C0, "BoolProperty"},
            {"MaxCollisionDistance", 0x1C4, "FloatProperty"},
        }};
    };

    struct ParticleModuleCollisionBase
    {
        static constexpr std::string_view Name = "ParticleModuleCollisionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleCollisionGPU
    {
        static constexpr std::string_view Name = "ParticleModuleCollisionGPU";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleCollisionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Resilience = 0x30;
            static constexpr std::uintptr_t ResilienceScaleOverLife = 0x60;
            static constexpr std::uintptr_t Friction = 0x90;
            static constexpr std::uintptr_t RandomSpread = 0x94;
            static constexpr std::uintptr_t RandomDistribution = 0x98;
            static constexpr std::uintptr_t RadiusScale = 0x9C;
            static constexpr std::uintptr_t RadiusBias = 0xA0;
            static constexpr std::uintptr_t Response = 0xA4;
            static constexpr std::uintptr_t CollisionMode = 0xA5;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Resilience", 0x30, "StructProperty"},
            {"ResilienceScaleOverLife", 0x60, "StructProperty"},
            {"Friction", 0x90, "FloatProperty"},
            {"RandomSpread", 0x94, "FloatProperty"},
            {"RandomDistribution", 0x98, "FloatProperty"},
            {"RadiusScale", 0x9C, "FloatProperty"},
            {"RadiusBias", 0xA0, "FloatProperty"},
            {"Response", 0xA4, "ByteProperty"},
            {"CollisionMode", 0xA5, "ByteProperty"},
        }};
    };

    struct ParticleModuleColor
    {
        static constexpr std::string_view Name = "ParticleModuleColor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartColor = 0x30;
            static constexpr std::uintptr_t StartAlpha = 0x90;
            static constexpr std::uintptr_t bClampAlpha = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StartColor", 0x30, "StructProperty"},
            {"StartAlpha", 0x90, "StructProperty"},
            {"bClampAlpha", 0xC0, "BoolProperty"},
        }};
    };

    struct ParticleModuleColorBase
    {
        static constexpr std::string_view Name = "ParticleModuleColorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleColorOverLife
    {
        static constexpr std::string_view Name = "ParticleModuleColorOverLife";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorOverLife = 0x30;
            static constexpr std::uintptr_t AlphaOverLife = 0x90;
            static constexpr std::uintptr_t bClampAlpha = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ColorOverLife", 0x30, "StructProperty"},
            {"AlphaOverLife", 0x90, "StructProperty"},
            {"bClampAlpha", 0xC0, "BoolProperty"},
        }};
    };

    struct ParticleModuleColorScaleOverLife
    {
        static constexpr std::string_view Name = "ParticleModuleColorScaleOverLife";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleColorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorScaleOverLife = 0x30;
            static constexpr std::uintptr_t AlphaScaleOverLife = 0x90;
            static constexpr std::uintptr_t bEmitterTime = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ColorScaleOverLife", 0x30, "StructProperty"},
            {"AlphaScaleOverLife", 0x90, "StructProperty"},
            {"bEmitterTime", 0xC0, "BoolProperty"},
        }};
    };

    struct ParticleModuleColor_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleColor_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleColor";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0xC8, "StructProperty"},
        }};
    };

    struct ParticleModuleEventBase
    {
        static constexpr std::string_view Name = "ParticleModuleEventBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleEventGenerator
    {
        static constexpr std::string_view Name = "ParticleModuleEventGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Events = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Events", 0x30, "ArrayProperty"},
        }};
    };

    struct ParticleModuleEventReceiverBase
    {
        static constexpr std::string_view Name = "ParticleModuleEventReceiverBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EventGeneratorType = 0x30;
            static constexpr std::uintptr_t EventName = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EventGeneratorType", 0x30, "ByteProperty"},
            {"EventName", 0x34, "NameProperty"},
        }};
    };

    struct ParticleModuleEventReceiverKillParticles
    {
        static constexpr std::string_view Name = "ParticleModuleEventReceiverKillParticles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleEventReceiverBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bStopSpawning = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bStopSpawning", 0x38, "BoolProperty"},
        }};
    };

    struct ParticleModuleEventReceiverSpawn
    {
        static constexpr std::string_view Name = "ParticleModuleEventReceiverSpawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleEventReceiverBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnCount = 0x38;
            static constexpr std::uintptr_t bInheritVelocity = 0x68;
            static constexpr std::uintptr_t bUsePSysLocation = 0x68;
            static constexpr std::uintptr_t bUseParticleTime = 0x68;
            static constexpr std::uintptr_t InheritVelocityScale = 0x70;
            static constexpr std::uintptr_t PhysicalMaterials = 0xD0;
            static constexpr std::uintptr_t bBanPhysicalMaterials = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SpawnCount", 0x38, "StructProperty"},
            {"bInheritVelocity", 0x68, "BoolProperty"},
            {"bUsePSysLocation", 0x68, "BoolProperty"},
            {"bUseParticleTime", 0x68, "BoolProperty"},
            {"InheritVelocityScale", 0x70, "StructProperty"},
            {"PhysicalMaterials", 0xD0, "ArrayProperty"},
            {"bBanPhysicalMaterials", 0xE0, "BoolProperty"},
        }};
    };

    struct ParticleModuleEventSendToGame
    {
        static constexpr std::string_view Name = "ParticleModuleEventSendToGame";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParticleModuleKillBase
    {
        static constexpr std::string_view Name = "ParticleModuleKillBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleKillBox
    {
        static constexpr std::string_view Name = "ParticleModuleKillBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleKillBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LowerLeftCorner = 0x30;
            static constexpr std::uintptr_t UpperRightCorner = 0x90;
            static constexpr std::uintptr_t bAbsolute = 0xF0;
            static constexpr std::uintptr_t bAxisAlignedAndFixedSize = 0xF0;
            static constexpr std::uintptr_t bKillInside = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LowerLeftCorner", 0x30, "StructProperty"},
            {"UpperRightCorner", 0x90, "StructProperty"},
            {"bAbsolute", 0xF0, "BoolProperty"},
            {"bAxisAlignedAndFixedSize", 0xF0, "BoolProperty"},
            {"bKillInside", 0xF0, "BoolProperty"},
        }};
    };

    struct ParticleModuleKillHeight
    {
        static constexpr std::string_view Name = "ParticleModuleKillHeight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleKillBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Height = 0x30;
            static constexpr std::uintptr_t bAbsolute = 0x60;
            static constexpr std::uintptr_t bApplyPSysScale = 0x60;
            static constexpr std::uintptr_t bFloor = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Height", 0x30, "StructProperty"},
            {"bAbsolute", 0x60, "BoolProperty"},
            {"bApplyPSysScale", 0x60, "BoolProperty"},
            {"bFloor", 0x60, "BoolProperty"},
        }};
    };

    struct ParticleModuleLifetime
    {
        static constexpr std::string_view Name = "ParticleModuleLifetime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLifetimeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Lifetime = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Lifetime", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleLifetimeBase
    {
        static constexpr std::string_view Name = "ParticleModuleLifetimeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleLifetime_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleLifetime_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLifetime";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x60, "StructProperty"},
        }};
    };

    struct ParticleModuleLight
    {
        static constexpr std::string_view Name = "ParticleModuleLight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLightBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseInverseSquaredFalloff = 0x30;
            static constexpr std::uintptr_t bAffectsTranslucency = 0x31;
            static constexpr std::uintptr_t bOverrideInverseExposureBlend = 0x34;
            static constexpr std::uintptr_t bPreviewLightRadius = 0x38;
            static constexpr std::uintptr_t SpawnFraction = 0x3C;
            static constexpr std::uintptr_t ColorScaleOverLife = 0x40;
            static constexpr std::uintptr_t BrightnessOverLife = 0xA0;
            static constexpr std::uintptr_t RadiusScale = 0xD0;
            static constexpr std::uintptr_t LightExponent = 0x100;
            static constexpr std::uintptr_t InverseExposureBlend = 0x130;
            static constexpr std::uintptr_t LightingChannels = 0x134;
            static constexpr std::uintptr_t VolumetricScatteringIntensity = 0x138;
            static constexpr std::uintptr_t bHighQualityLights = 0x13C;
            static constexpr std::uintptr_t bShadowCastingLights = 0x13D;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bUseInverseSquaredFalloff", 0x30, "BoolProperty"},
            {"bAffectsTranslucency", 0x31, "BoolProperty"},
            {"bOverrideInverseExposureBlend", 0x34, "BoolProperty"},
            {"bPreviewLightRadius", 0x38, "BoolProperty"},
            {"SpawnFraction", 0x3C, "FloatProperty"},
            {"ColorScaleOverLife", 0x40, "StructProperty"},
            {"BrightnessOverLife", 0xA0, "StructProperty"},
            {"RadiusScale", 0xD0, "StructProperty"},
            {"LightExponent", 0x100, "StructProperty"},
            {"InverseExposureBlend", 0x130, "FloatProperty"},
            {"LightingChannels", 0x134, "StructProperty"},
            {"VolumetricScatteringIntensity", 0x138, "FloatProperty"},
            {"bHighQualityLights", 0x13C, "BoolProperty"},
            {"bShadowCastingLights", 0x13D, "BoolProperty"},
        }};
    };

    struct ParticleModuleLightBase
    {
        static constexpr std::string_view Name = "ParticleModuleLightBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleLight_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleLight_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLight";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x140, "StructProperty"},
        }};
    };

    struct ParticleModuleLocation
    {
        static constexpr std::string_view Name = "ParticleModuleLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartLocation = 0x30;
            static constexpr std::uintptr_t DistributeOverNPoints = 0x90;
            static constexpr std::uintptr_t DistributeThreshold = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StartLocation", 0x30, "StructProperty"},
            {"DistributeOverNPoints", 0x90, "FloatProperty"},
            {"DistributeThreshold", 0x94, "FloatProperty"},
        }};
    };

    struct ParticleModuleLocationBase
    {
        static constexpr std::string_view Name = "ParticleModuleLocationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleLocationBoneSocket
    {
        static constexpr std::string_view Name = "ParticleModuleLocationBoneSocket";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceType = 0x30;
            static constexpr std::uintptr_t UniversalOffset = 0x38;
            static constexpr std::uintptr_t SourceLocations = 0x50;
            static constexpr std::uintptr_t SelectionMethod = 0x60;
            static constexpr std::uintptr_t bInheritBoneVelocity = 0x64;
            static constexpr std::uintptr_t bOrientMeshEmitters = 0x64;
            static constexpr std::uintptr_t bUpdatePositionEachFrame = 0x64;
            static constexpr std::uintptr_t InheritVelocityScale = 0x68;
            static constexpr std::uintptr_t SkelMeshActorParamName = 0x6C;
            static constexpr std::uintptr_t NumPreSelectedIndices = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SourceType", 0x30, "ByteProperty"},
            {"UniversalOffset", 0x38, "StructProperty"},
            {"SourceLocations", 0x50, "ArrayProperty"},
            {"SelectionMethod", 0x60, "ByteProperty"},
            {"bInheritBoneVelocity", 0x64, "BoolProperty"},
            {"bOrientMeshEmitters", 0x64, "BoolProperty"},
            {"bUpdatePositionEachFrame", 0x64, "BoolProperty"},
            {"InheritVelocityScale", 0x68, "FloatProperty"},
            {"SkelMeshActorParamName", 0x6C, "NameProperty"},
            {"NumPreSelectedIndices", 0x70, "IntProperty"},
        }};
    };

    struct ParticleModuleLocationDirect
    {
        static constexpr std::string_view Name = "ParticleModuleLocationDirect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x30;
            static constexpr std::uintptr_t LocationOffset = 0x90;
            static constexpr std::uintptr_t ScaleFactor = 0xF0;
            static constexpr std::uintptr_t Direction = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Location", 0x30, "StructProperty"},
            {"LocationOffset", 0x90, "StructProperty"},
            {"ScaleFactor", 0xF0, "StructProperty"},
            {"Direction", 0x150, "StructProperty"},
        }};
    };

    struct ParticleModuleLocationEmitter
    {
        static constexpr std::string_view Name = "ParticleModuleLocationEmitter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0x30;
            static constexpr std::uintptr_t SelectionMethod = 0x34;
            static constexpr std::uintptr_t InheritSourceVelocity = 0x38;
            static constexpr std::uintptr_t InheritSourceVelocityScale = 0x3C;
            static constexpr std::uintptr_t bInheritSourceRotation = 0x40;
            static constexpr std::uintptr_t InheritSourceRotationScale = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EmitterName", 0x30, "NameProperty"},
            {"SelectionMethod", 0x34, "ByteProperty"},
            {"InheritSourceVelocity", 0x38, "BoolProperty"},
            {"InheritSourceVelocityScale", 0x3C, "FloatProperty"},
            {"bInheritSourceRotation", 0x40, "BoolProperty"},
            {"InheritSourceRotationScale", 0x44, "FloatProperty"},
        }};
    };

    struct ParticleModuleLocationEmitterDirect
    {
        static constexpr std::string_view Name = "ParticleModuleLocationEmitterDirect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EmitterName", 0x30, "NameProperty"},
        }};
    };

    struct ParticleModuleLocationPrimitiveBase
    {
        static constexpr std::string_view Name = "ParticleModuleLocationPrimitiveBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Negative_X = 0x30;
            static constexpr std::uintptr_t Negative_Y = 0x30;
            static constexpr std::uintptr_t Negative_Z = 0x30;
            static constexpr std::uintptr_t Positive_X = 0x30;
            static constexpr std::uintptr_t Positive_Y = 0x30;
            static constexpr std::uintptr_t Positive_Z = 0x30;
            static constexpr std::uintptr_t SurfaceOnly = 0x30;
            static constexpr std::uintptr_t Velocity = 0x30;
            static constexpr std::uintptr_t VelocityScale = 0x38;
            static constexpr std::uintptr_t StartLocation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Negative_X", 0x30, "BoolProperty"},
            {"Negative_Y", 0x30, "BoolProperty"},
            {"Negative_Z", 0x30, "BoolProperty"},
            {"Positive_X", 0x30, "BoolProperty"},
            {"Positive_Y", 0x30, "BoolProperty"},
            {"Positive_Z", 0x30, "BoolProperty"},
            {"SurfaceOnly", 0x30, "BoolProperty"},
            {"Velocity", 0x30, "BoolProperty"},
            {"VelocityScale", 0x38, "StructProperty"},
            {"StartLocation", 0x68, "StructProperty"},
        }};
    };

    struct ParticleModuleLocationPrimitiveCylinder
    {
        static constexpr std::string_view Name = "ParticleModuleLocationPrimitiveCylinder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationPrimitiveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RadialVelocity = 0xC8;
            static constexpr std::uintptr_t StartRadius = 0xD0;
            static constexpr std::uintptr_t StartHeight = 0x100;
            static constexpr std::uintptr_t HeightAxis = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RadialVelocity", 0xC8, "BoolProperty"},
            {"StartRadius", 0xD0, "StructProperty"},
            {"StartHeight", 0x100, "StructProperty"},
            {"HeightAxis", 0x130, "ByteProperty"},
        }};
    };

    struct ParticleModuleLocationPrimitiveCylinder_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleLocationPrimitiveCylinder_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationPrimitiveCylinder";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x138, "StructProperty"},
        }};
    };

    struct ParticleModuleLocationPrimitiveSphere
    {
        static constexpr std::string_view Name = "ParticleModuleLocationPrimitiveSphere";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationPrimitiveBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartRadius = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StartRadius", 0xC8, "StructProperty"},
        }};
    };

    struct ParticleModuleLocationPrimitiveSphere_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleLocationPrimitiveSphere_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationPrimitiveSphere";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0xF8, "StructProperty"},
        }};
    };

    struct ParticleModuleLocationPrimitiveTriangle
    {
        static constexpr std::string_view Name = "ParticleModuleLocationPrimitiveTriangle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartOffset = 0x30;
            static constexpr std::uintptr_t Height = 0x90;
            static constexpr std::uintptr_t Angle = 0xC0;
            static constexpr std::uintptr_t Thickness = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StartOffset", 0x30, "StructProperty"},
            {"Height", 0x90, "StructProperty"},
            {"Angle", 0xC0, "StructProperty"},
            {"Thickness", 0xF0, "StructProperty"},
        }};
    };

    struct ParticleModuleLocationSkelVertSurface
    {
        static constexpr std::string_view Name = "ParticleModuleLocationSkelVertSurface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceType = 0x30;
            static constexpr std::uintptr_t UniversalOffset = 0x38;
            static constexpr std::uintptr_t bInheritBoneVelocity = 0x50;
            static constexpr std::uintptr_t bOrientMeshEmitters = 0x50;
            static constexpr std::uintptr_t bUpdatePositionEachFrame = 0x50;
            static constexpr std::uintptr_t InheritVelocityScale = 0x54;
            static constexpr std::uintptr_t SkelMeshActorParamName = 0x58;
            static constexpr std::uintptr_t ValidAssociatedBones = 0x60;
            static constexpr std::uintptr_t bEnforceNormalCheck = 0x70;
            static constexpr std::uintptr_t NormalToCompare = 0x78;
            static constexpr std::uintptr_t NormalCheckToleranceDegrees = 0x90;
            static constexpr std::uintptr_t NormalCheckTolerance = 0x94;
            static constexpr std::uintptr_t ValidMaterialIndices = 0x98;
            static constexpr std::uintptr_t bInheritUV = 0xA8;
            static constexpr std::uintptr_t bInheritVertexColor = 0xA8;
            static constexpr std::uintptr_t InheritUVChannel = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"SourceType", 0x30, "ByteProperty"},
            {"UniversalOffset", 0x38, "StructProperty"},
            {"bInheritBoneVelocity", 0x50, "BoolProperty"},
            {"bOrientMeshEmitters", 0x50, "BoolProperty"},
            {"bUpdatePositionEachFrame", 0x50, "BoolProperty"},
            {"InheritVelocityScale", 0x54, "FloatProperty"},
            {"SkelMeshActorParamName", 0x58, "NameProperty"},
            {"ValidAssociatedBones", 0x60, "ArrayProperty"},
            {"bEnforceNormalCheck", 0x70, "BoolProperty"},
            {"NormalToCompare", 0x78, "StructProperty"},
            {"NormalCheckToleranceDegrees", 0x90, "FloatProperty"},
            {"NormalCheckTolerance", 0x94, "FloatProperty"},
            {"ValidMaterialIndices", 0x98, "ArrayProperty"},
            {"bInheritUV", 0xA8, "BoolProperty"},
            {"bInheritVertexColor", 0xA8, "BoolProperty"},
            {"InheritUVChannel", 0xAC, "UInt32Property"},
        }};
    };

    struct ParticleModuleLocationWorldOffset
    {
        static constexpr std::string_view Name = "ParticleModuleLocationWorldOffset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocation";
        struct Offsets
        {
            static constexpr std::uintptr_t StartLocation = 0x30;
            static constexpr std::uintptr_t DistributeOverNPoints = 0x90;
            static constexpr std::uintptr_t DistributeThreshold = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StartLocation", 0x30, "StructProperty"},
            {"DistributeOverNPoints", 0x90, "FloatProperty"},
            {"DistributeThreshold", 0x94, "FloatProperty"},
        }};
    };

    struct ParticleModuleLocationWorldOffset_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleLocationWorldOffset_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationWorldOffset";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x98, "StructProperty"},
        }};
    };

    struct ParticleModuleLocation_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleLocation_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocation";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x98, "StructProperty"},
        }};
    };

    struct ParticleModuleMaterialBase
    {
        static constexpr std::string_view Name = "ParticleModuleMaterialBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleMeshMaterial
    {
        static constexpr std::string_view Name = "ParticleModuleMeshMaterial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleMaterialBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshMaterials = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshMaterials", 0x30, "ArrayProperty"},
        }};
    };

    struct ParticleModuleMeshRotation
    {
        static constexpr std::string_view Name = "ParticleModuleMeshRotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartRotation = 0x30;
            static constexpr std::uintptr_t bInheritParent = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartRotation", 0x30, "StructProperty"},
            {"bInheritParent", 0x90, "BoolProperty"},
        }};
    };

    struct ParticleModuleMeshRotationRate
    {
        static constexpr std::string_view Name = "ParticleModuleMeshRotationRate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationRateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartRotationRate = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StartRotationRate", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleMeshRotationRateMultiplyLife
    {
        static constexpr std::string_view Name = "ParticleModuleMeshRotationRateMultiplyLife";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationRateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LifeMultiplier = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LifeMultiplier", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleMeshRotationRateOverLife
    {
        static constexpr std::string_view Name = "ParticleModuleMeshRotationRateOverLife";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationRateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RotRate = 0x30;
            static constexpr std::uintptr_t bScaleRotRate = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RotRate", 0x30, "StructProperty"},
            {"bScaleRotRate", 0x90, "BoolProperty"},
        }};
    };

    struct ParticleModuleMeshRotationRate_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleMeshRotationRate_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleMeshRotationRate";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x90, "StructProperty"},
        }};
    };

    struct ParticleModuleMeshRotation_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleMeshRotation_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleMeshRotation";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x98, "StructProperty"},
        }};
    };

    struct ParticleModuleOrbit
    {
        static constexpr std::string_view Name = "ParticleModuleOrbit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleOrbitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainMode = 0x38;
            static constexpr std::uintptr_t OffsetAmount = 0x40;
            static constexpr std::uintptr_t OffsetOptions = 0xA0;
            static constexpr std::uintptr_t RotationAmount = 0xA8;
            static constexpr std::uintptr_t RotationOptions = 0x108;
            static constexpr std::uintptr_t RotationRateAmount = 0x110;
            static constexpr std::uintptr_t RotationRateOptions = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ChainMode", 0x38, "ByteProperty"},
            {"OffsetAmount", 0x40, "StructProperty"},
            {"OffsetOptions", 0xA0, "StructProperty"},
            {"RotationAmount", 0xA8, "StructProperty"},
            {"RotationOptions", 0x108, "StructProperty"},
            {"RotationRateAmount", 0x110, "StructProperty"},
            {"RotationRateOptions", 0x170, "StructProperty"},
        }};
    };

    struct ParticleModuleOrbitBase
    {
        static constexpr std::string_view Name = "ParticleModuleOrbitBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseEmitterTime = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseEmitterTime", 0x30, "BoolProperty"},
        }};
    };

    struct ParticleModuleOrientationAxisLock
    {
        static constexpr std::string_view Name = "ParticleModuleOrientationAxisLock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleOrientationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LockAxisFlags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LockAxisFlags", 0x30, "ByteProperty"},
        }};
    };

    struct ParticleModuleOrientationBase
    {
        static constexpr std::string_view Name = "ParticleModuleOrientationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleParameterBase
    {
        static constexpr std::string_view Name = "ParticleModuleParameterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleParameterDynamic
    {
        static constexpr std::string_view Name = "ParticleModuleParameterDynamic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleParameterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicParams = 0x30;
            static constexpr std::uintptr_t UpdateFlags = 0x40;
            static constexpr std::uintptr_t bUsesVelocity = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DynamicParams", 0x30, "ArrayProperty"},
            {"UpdateFlags", 0x40, "IntProperty"},
            {"bUsesVelocity", 0x44, "BoolProperty"},
        }};
    };

    struct ParticleModuleParameterDynamic_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleParameterDynamic_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleParameterDynamic";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x48, "StructProperty"},
        }};
    };

    struct ParticleModulePivotOffset
    {
        static constexpr std::string_view Name = "ParticleModulePivotOffset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PivotOffset = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PivotOffset", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleRequired
    {
        static constexpr std::string_view Name = "ParticleModuleRequired";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x30;
            static constexpr std::uintptr_t MinFacingCameraBlendDistance = 0x38;
            static constexpr std::uintptr_t MaxFacingCameraBlendDistance = 0x3C;
            static constexpr std::uintptr_t EmitterOrigin = 0x40;
            static constexpr std::uintptr_t EmitterRotation = 0x58;
            static constexpr std::uintptr_t ScreenAlignment = 0x70;
            static constexpr std::uintptr_t bKillOnCompleted = 0x71;
            static constexpr std::uintptr_t bKillOnDeactivate = 0x71;
            static constexpr std::uintptr_t bUseLocalSpace = 0x71;
            static constexpr std::uintptr_t SortMode = 0x72;
            static constexpr std::uintptr_t bEmitterDurationUseRange = 0x73;
            static constexpr std::uintptr_t bOverrideUseVelocityForMotionBlur = 0x73;
            static constexpr std::uintptr_t bRemoveHMDRoll = 0x73;
            static constexpr std::uintptr_t bSupportLargeWorldCoordinates = 0x73;
            static constexpr std::uintptr_t bUseLegacyEmitterTime = 0x73;
            static constexpr std::uintptr_t bUseVelocityForMotionBlur = 0x73;
            static constexpr std::uintptr_t EmitterDuration = 0x74;
            static constexpr std::uintptr_t SpawnRate = 0x78;
            static constexpr std::uintptr_t BurstList = 0xA8;
            static constexpr std::uintptr_t EmitterDelay = 0xB8;
            static constexpr std::uintptr_t EmitterDelayLow = 0xBC;
            static constexpr std::uintptr_t bDelayFirstLoopOnly = 0xC0;
            static constexpr std::uintptr_t InterpolationMethod = 0xC1;
            static constexpr std::uintptr_t bEmitterDelayUseRange = 0xC2;
            static constexpr std::uintptr_t bScaleUV = 0xC2;
            static constexpr std::uintptr_t ParticleBurstMethod = 0xC3;
            static constexpr std::uintptr_t bOverrideSystemMacroUV = 0xC4;
            static constexpr std::uintptr_t bUseMaxDrawCount = 0xC4;
            static constexpr std::uintptr_t OpacitySourceMode = 0xC5;
            static constexpr std::uintptr_t EmitterNormalsMode = 0xC6;
            static constexpr std::uintptr_t bOrbitModuleAffectsVelocityAlignment = 0xC7;
            static constexpr std::uintptr_t SubImages_Horizontal = 0xC8;
            static constexpr std::uintptr_t SubImages_Vertical = 0xCC;
            static constexpr std::uintptr_t RandomImageTime = 0xD0;
            static constexpr std::uintptr_t RandomImageChanges = 0xD4;
            static constexpr std::uintptr_t MacroUVPosition = 0xD8;
            static constexpr std::uintptr_t MacroUVRadius = 0xF0;
            static constexpr std::uintptr_t UVFlippingMode = 0xF4;
            static constexpr std::uintptr_t BoundingMode = 0xF5;
            static constexpr std::uintptr_t bDurationRecalcEachLoop = 0xF6;
            static constexpr std::uintptr_t NormalsSphereCenter = 0xF8;
            static constexpr std::uintptr_t AlphaThreshold = 0x110;
            static constexpr std::uintptr_t EmitterLoops = 0x114;
            static constexpr std::uintptr_t CutoutTexture = 0x118;
            static constexpr std::uintptr_t MaxDrawCount = 0x120;
            static constexpr std::uintptr_t EmitterDurationLow = 0x124;
            static constexpr std::uintptr_t NormalsCylinderDirection = 0x128;
            static constexpr std::uintptr_t NamedMaterialOverrides = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"Material", 0x30, "ObjectProperty"},
            {"MinFacingCameraBlendDistance", 0x38, "FloatProperty"},
            {"MaxFacingCameraBlendDistance", 0x3C, "FloatProperty"},
            {"EmitterOrigin", 0x40, "StructProperty"},
            {"EmitterRotation", 0x58, "StructProperty"},
            {"ScreenAlignment", 0x70, "ByteProperty"},
            {"bKillOnCompleted", 0x71, "BoolProperty"},
            {"bKillOnDeactivate", 0x71, "BoolProperty"},
            {"bUseLocalSpace", 0x71, "BoolProperty"},
            {"SortMode", 0x72, "ByteProperty"},
            {"bEmitterDurationUseRange", 0x73, "BoolProperty"},
            {"bOverrideUseVelocityForMotionBlur", 0x73, "BoolProperty"},
            {"bRemoveHMDRoll", 0x73, "BoolProperty"},
            {"bSupportLargeWorldCoordinates", 0x73, "BoolProperty"},
            {"bUseLegacyEmitterTime", 0x73, "BoolProperty"},
            {"bUseVelocityForMotionBlur", 0x73, "BoolProperty"},
            {"EmitterDuration", 0x74, "FloatProperty"},
            {"SpawnRate", 0x78, "StructProperty"},
            {"BurstList", 0xA8, "ArrayProperty"},
            {"EmitterDelay", 0xB8, "FloatProperty"},
            {"EmitterDelayLow", 0xBC, "FloatProperty"},
            {"bDelayFirstLoopOnly", 0xC0, "BoolProperty"},
            {"InterpolationMethod", 0xC1, "ByteProperty"},
            {"bEmitterDelayUseRange", 0xC2, "BoolProperty"},
            {"bScaleUV", 0xC2, "BoolProperty"},
            {"ParticleBurstMethod", 0xC3, "ByteProperty"},
            {"bOverrideSystemMacroUV", 0xC4, "BoolProperty"},
            {"bUseMaxDrawCount", 0xC4, "BoolProperty"},
            {"OpacitySourceMode", 0xC5, "ByteProperty"},
            {"EmitterNormalsMode", 0xC6, "ByteProperty"},
            {"bOrbitModuleAffectsVelocityAlignment", 0xC7, "BoolProperty"},
            {"SubImages_Horizontal", 0xC8, "IntProperty"},
            {"SubImages_Vertical", 0xCC, "IntProperty"},
            {"RandomImageTime", 0xD0, "FloatProperty"},
            {"RandomImageChanges", 0xD4, "IntProperty"},
            {"MacroUVPosition", 0xD8, "StructProperty"},
            {"MacroUVRadius", 0xF0, "FloatProperty"},
            {"UVFlippingMode", 0xF4, "EnumProperty"},
            {"BoundingMode", 0xF5, "ByteProperty"},
            {"bDurationRecalcEachLoop", 0xF6, "BoolProperty"},
            {"NormalsSphereCenter", 0xF8, "StructProperty"},
            {"AlphaThreshold", 0x110, "FloatProperty"},
            {"EmitterLoops", 0x114, "IntProperty"},
            {"CutoutTexture", 0x118, "ObjectProperty"},
            {"MaxDrawCount", 0x120, "IntProperty"},
            {"EmitterDurationLow", 0x124, "FloatProperty"},
            {"NormalsCylinderDirection", 0x128, "StructProperty"},
            {"NamedMaterialOverrides", 0x140, "ArrayProperty"},
        }};
    };

    struct ParticleModuleRotation
    {
        static constexpr std::string_view Name = "ParticleModuleRotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartRotation = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StartRotation", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleRotationBase
    {
        static constexpr std::string_view Name = "ParticleModuleRotationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleRotationOverLifetime
    {
        static constexpr std::string_view Name = "ParticleModuleRotationOverLifetime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationOverLife = 0x30;
            static constexpr std::uintptr_t Scale = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RotationOverLife", 0x30, "StructProperty"},
            {"Scale", 0x60, "BoolProperty"},
        }};
    };

    struct ParticleModuleRotationRate
    {
        static constexpr std::string_view Name = "ParticleModuleRotationRate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationRateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartRotationRate = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StartRotationRate", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleRotationRateBase
    {
        static constexpr std::string_view Name = "ParticleModuleRotationRateBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleRotationRateMultiplyLife
    {
        static constexpr std::string_view Name = "ParticleModuleRotationRateMultiplyLife";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationRateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LifeMultiplier = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LifeMultiplier", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleRotationRate_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleRotationRate_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotationRate";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x60, "StructProperty"},
        }};
    };

    struct ParticleModuleRotation_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleRotation_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleRotation";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x60, "StructProperty"},
        }};
    };

    struct ParticleModuleSize
    {
        static constexpr std::string_view Name = "ParticleModuleSize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSizeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartSize = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StartSize", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleSizeBase
    {
        static constexpr std::string_view Name = "ParticleModuleSizeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleSizeMultiplyLife
    {
        static constexpr std::string_view Name = "ParticleModuleSizeMultiplyLife";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSizeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LifeMultiplier = 0x30;
            static constexpr std::uintptr_t MultiplyX = 0x90;
            static constexpr std::uintptr_t MultiplyY = 0x90;
            static constexpr std::uintptr_t MultiplyZ = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LifeMultiplier", 0x30, "StructProperty"},
            {"MultiplyX", 0x90, "BoolProperty"},
            {"MultiplyY", 0x90, "BoolProperty"},
            {"MultiplyZ", 0x90, "BoolProperty"},
        }};
    };

    struct ParticleModuleSizeScale
    {
        static constexpr std::string_view Name = "ParticleModuleSizeScale";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSizeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SizeScale = 0x30;
            static constexpr std::uintptr_t EnableX = 0x90;
            static constexpr std::uintptr_t EnableY = 0x90;
            static constexpr std::uintptr_t EnableZ = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SizeScale", 0x30, "StructProperty"},
            {"EnableX", 0x90, "BoolProperty"},
            {"EnableY", 0x90, "BoolProperty"},
            {"EnableZ", 0x90, "BoolProperty"},
        }};
    };

    struct ParticleModuleSizeScaleBySpeed
    {
        static constexpr std::string_view Name = "ParticleModuleSizeScaleBySpeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSizeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedScale = 0x30;
            static constexpr std::uintptr_t MaxScale = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpeedScale", 0x30, "StructProperty"},
            {"MaxScale", 0x40, "StructProperty"},
        }};
    };

    struct ParticleModuleSize_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleSize_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSize";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0x90, "StructProperty"},
        }};
    };

    struct ParticleModuleSourceMovement
    {
        static constexpr std::string_view Name = "ParticleModuleSourceMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleLocationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMovementScale = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SourceMovementScale", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleSpawn
    {
        static constexpr std::string_view Name = "ParticleModuleSpawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSpawnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Rate = 0x38;
            static constexpr std::uintptr_t RateScale = 0x68;
            static constexpr std::uintptr_t BurstList = 0x98;
            static constexpr std::uintptr_t BurstScale = 0xA8;
            static constexpr std::uintptr_t ParticleBurstMethod = 0xD8;
            static constexpr std::uintptr_t bApplyGlobalSpawnRateScale = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Rate", 0x38, "StructProperty"},
            {"RateScale", 0x68, "StructProperty"},
            {"BurstList", 0x98, "ArrayProperty"},
            {"BurstScale", 0xA8, "StructProperty"},
            {"ParticleBurstMethod", 0xD8, "ByteProperty"},
            {"bApplyGlobalSpawnRateScale", 0xDC, "BoolProperty"},
        }};
    };

    struct ParticleModuleSpawnBase
    {
        static constexpr std::string_view Name = "ParticleModuleSpawnBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bProcessBurstList = 0x30;
            static constexpr std::uintptr_t bProcessSpawnRate = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bProcessBurstList", 0x30, "BoolProperty"},
            {"bProcessSpawnRate", 0x30, "BoolProperty"},
        }};
    };

    struct ParticleModuleSpawnPerUnit
    {
        static constexpr std::string_view Name = "ParticleModuleSpawnPerUnit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSpawnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t UnitScalar = 0x38;
            static constexpr std::uintptr_t MovementTolerance = 0x3C;
            static constexpr std::uintptr_t SpawnPerUnit = 0x40;
            static constexpr std::uintptr_t MaxFrameDistance = 0x70;
            static constexpr std::uintptr_t bIgnoreMovementAlongX = 0x74;
            static constexpr std::uintptr_t bIgnoreMovementAlongY = 0x74;
            static constexpr std::uintptr_t bIgnoreMovementAlongZ = 0x74;
            static constexpr std::uintptr_t bIgnoreSpawnRateWhenMoving = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"UnitScalar", 0x38, "FloatProperty"},
            {"MovementTolerance", 0x3C, "FloatProperty"},
            {"SpawnPerUnit", 0x40, "StructProperty"},
            {"MaxFrameDistance", 0x70, "FloatProperty"},
            {"bIgnoreMovementAlongX", 0x74, "BoolProperty"},
            {"bIgnoreMovementAlongY", 0x74, "BoolProperty"},
            {"bIgnoreMovementAlongZ", 0x74, "BoolProperty"},
            {"bIgnoreSpawnRateWhenMoving", 0x74, "BoolProperty"},
        }};
    };

    struct ParticleModuleSubUV
    {
        static constexpr std::string_view Name = "ParticleModuleSubUV";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSubUVBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x30;
            static constexpr std::uintptr_t SubImageIndex = 0x38;
            static constexpr std::uintptr_t bUseRealTime = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Animation", 0x30, "ObjectProperty"},
            {"SubImageIndex", 0x38, "StructProperty"},
            {"bUseRealTime", 0x68, "BoolProperty"},
        }};
    };

    struct ParticleModuleSubUVBase
    {
        static constexpr std::string_view Name = "ParticleModuleSubUVBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleSubUVMovie
    {
        static constexpr std::string_view Name = "ParticleModuleSubUVMovie";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleSubUV";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseEmitterTime = 0x70;
            static constexpr std::uintptr_t FrameRate = 0x78;
            static constexpr std::uintptr_t StartingFrame = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseEmitterTime", 0x70, "BoolProperty"},
            {"FrameRate", 0x78, "StructProperty"},
            {"StartingFrame", 0xA8, "IntProperty"},
        }};
    };

    struct ParticleModuleTrailBase
    {
        static constexpr std::string_view Name = "ParticleModuleTrailBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleTrailSource
    {
        static constexpr std::string_view Name = "ParticleModuleTrailSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleTrailBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceMethod = 0x30;
            static constexpr std::uintptr_t SourceName = 0x34;
            static constexpr std::uintptr_t SourceStrength = 0x38;
            static constexpr std::uintptr_t bLockSourceStength = 0x68;
            static constexpr std::uintptr_t SourceOffsetCount = 0x6C;
            static constexpr std::uintptr_t SourceOffsetDefaults = 0x70;
            static constexpr std::uintptr_t SelectionMethod = 0x80;
            static constexpr std::uintptr_t bInheritRotation = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SourceMethod", 0x30, "ByteProperty"},
            {"SourceName", 0x34, "NameProperty"},
            {"SourceStrength", 0x38, "StructProperty"},
            {"bLockSourceStength", 0x68, "BoolProperty"},
            {"SourceOffsetCount", 0x6C, "IntProperty"},
            {"SourceOffsetDefaults", 0x70, "ArrayProperty"},
            {"SelectionMethod", 0x80, "ByteProperty"},
            {"bInheritRotation", 0x84, "BoolProperty"},
        }};
    };

    struct ParticleModuleTypeDataAnimTrail
    {
        static constexpr std::string_view Name = "ParticleModuleTypeDataAnimTrail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleTypeDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDeadTrailsOnDeactivate = 0x30;
            static constexpr std::uintptr_t bEnablePreviousTangentRecalculation = 0x30;
            static constexpr std::uintptr_t bTangentRecalculationEveryFrame = 0x30;
            static constexpr std::uintptr_t TilingDistance = 0x34;
            static constexpr std::uintptr_t DistanceTessellationStepSize = 0x38;
            static constexpr std::uintptr_t TangentTessellationStepSize = 0x3C;
            static constexpr std::uintptr_t WidthTessellationStepSize = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bDeadTrailsOnDeactivate", 0x30, "BoolProperty"},
            {"bEnablePreviousTangentRecalculation", 0x30, "BoolProperty"},
            {"bTangentRecalculationEveryFrame", 0x30, "BoolProperty"},
            {"TilingDistance", 0x34, "FloatProperty"},
            {"DistanceTessellationStepSize", 0x38, "FloatProperty"},
            {"TangentTessellationStepSize", 0x3C, "FloatProperty"},
            {"WidthTessellationStepSize", 0x40, "FloatProperty"},
        }};
    };

    struct ParticleModuleTypeDataBase
    {
        static constexpr std::string_view Name = "ParticleModuleTypeDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleTypeDataBeam2
    {
        static constexpr std::string_view Name = "ParticleModuleTypeDataBeam2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleTypeDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BeamMethod = 0x30;
            static constexpr std::uintptr_t TextureTile = 0x34;
            static constexpr std::uintptr_t TextureTileDistance = 0x38;
            static constexpr std::uintptr_t Sheets = 0x3C;
            static constexpr std::uintptr_t MaxBeamCount = 0x40;
            static constexpr std::uintptr_t Speed = 0x44;
            static constexpr std::uintptr_t InterpolationPoints = 0x48;
            static constexpr std::uintptr_t bAlwaysOn = 0x4C;
            static constexpr std::uintptr_t UpVectorStepSize = 0x50;
            static constexpr std::uintptr_t BranchParentName = 0x54;
            static constexpr std::uintptr_t Distance = 0x58;
            static constexpr std::uintptr_t TaperMethod = 0x88;
            static constexpr std::uintptr_t TaperFactor = 0x90;
            static constexpr std::uintptr_t TaperScale = 0xC0;
            static constexpr std::uintptr_t RenderDirectLine = 0xF0;
            static constexpr std::uintptr_t RenderGeometry = 0xF0;
            static constexpr std::uintptr_t RenderLines = 0xF0;
            static constexpr std::uintptr_t RenderTessellation = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"BeamMethod", 0x30, "ByteProperty"},
            {"TextureTile", 0x34, "IntProperty"},
            {"TextureTileDistance", 0x38, "FloatProperty"},
            {"Sheets", 0x3C, "IntProperty"},
            {"MaxBeamCount", 0x40, "IntProperty"},
            {"Speed", 0x44, "FloatProperty"},
            {"InterpolationPoints", 0x48, "IntProperty"},
            {"bAlwaysOn", 0x4C, "BoolProperty"},
            {"UpVectorStepSize", 0x50, "IntProperty"},
            {"BranchParentName", 0x54, "NameProperty"},
            {"Distance", 0x58, "StructProperty"},
            {"TaperMethod", 0x88, "ByteProperty"},
            {"TaperFactor", 0x90, "StructProperty"},
            {"TaperScale", 0xC0, "StructProperty"},
            {"RenderDirectLine", 0xF0, "BoolProperty"},
            {"RenderGeometry", 0xF0, "BoolProperty"},
            {"RenderLines", 0xF0, "BoolProperty"},
            {"RenderTessellation", 0xF0, "BoolProperty"},
        }};
    };

    struct ParticleModuleTypeDataGpu
    {
        static constexpr std::string_view Name = "ParticleModuleTypeDataGpu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleTypeDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterInfo = 0x30;
            static constexpr std::uintptr_t ResourceData = 0x380;
            static constexpr std::uintptr_t CameraMotionBlurAmount = 0x5C0;
            static constexpr std::uintptr_t bClearExistingParticlesOnInit = 0x5C4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EmitterInfo", 0x30, "StructProperty"},
            {"ResourceData", 0x380, "StructProperty"},
            {"CameraMotionBlurAmount", 0x5C0, "FloatProperty"},
            {"bClearExistingParticlesOnInit", 0x5C4, "BoolProperty"},
        }};
    };

    struct ParticleModuleTypeDataMesh
    {
        static constexpr std::string_view Name = "ParticleModuleTypeDataMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleTypeDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x30;
            static constexpr std::uintptr_t LODSizeScale = 0x40;
            static constexpr std::uintptr_t CastShadows = 0x44;
            static constexpr std::uintptr_t DoCollisions = 0x44;
            static constexpr std::uintptr_t bUseStaticMeshLODs = 0x44;
            static constexpr std::uintptr_t MeshAlignment = 0x45;
            static constexpr std::uintptr_t bEnableMotionBlur = 0x46;
            static constexpr std::uintptr_t bOverrideDefaultMotionBlurSettings = 0x46;
            static constexpr std::uintptr_t bOverrideMaterial = 0x46;
            static constexpr std::uintptr_t RollPitchYawRange = 0x48;
            static constexpr std::uintptr_t AxisLockOption = 0xA8;
            static constexpr std::uintptr_t bCameraFacing = 0xA9;
            static constexpr std::uintptr_t CameraFacingUpAxisOption = 0xAA;
            static constexpr std::uintptr_t CameraFacingOption = 0xAB;
            static constexpr std::uintptr_t bApplyParticleRotationAsSpin = 0xAC;
            static constexpr std::uintptr_t bCollisionsConsiderPartilceSize = 0xAC;
            static constexpr std::uintptr_t bFaceCameraDirectionRatherThanPosition = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Mesh", 0x30, "ObjectProperty"},
            {"LODSizeScale", 0x40, "FloatProperty"},
            {"CastShadows", 0x44, "BoolProperty"},
            {"DoCollisions", 0x44, "BoolProperty"},
            {"bUseStaticMeshLODs", 0x44, "BoolProperty"},
            {"MeshAlignment", 0x45, "ByteProperty"},
            {"bEnableMotionBlur", 0x46, "BoolProperty"},
            {"bOverrideDefaultMotionBlurSettings", 0x46, "BoolProperty"},
            {"bOverrideMaterial", 0x46, "BoolProperty"},
            {"RollPitchYawRange", 0x48, "StructProperty"},
            {"AxisLockOption", 0xA8, "ByteProperty"},
            {"bCameraFacing", 0xA9, "BoolProperty"},
            {"CameraFacingUpAxisOption", 0xAA, "ByteProperty"},
            {"CameraFacingOption", 0xAB, "ByteProperty"},
            {"bApplyParticleRotationAsSpin", 0xAC, "BoolProperty"},
            {"bCollisionsConsiderPartilceSize", 0xAC, "BoolProperty"},
            {"bFaceCameraDirectionRatherThanPosition", 0xAC, "BoolProperty"},
        }};
    };

    struct ParticleModuleTypeDataRibbon
    {
        static constexpr std::string_view Name = "ParticleModuleTypeDataRibbon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleTypeDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxTessellationBetweenParticles = 0x30;
            static constexpr std::uintptr_t SheetsPerTrail = 0x34;
            static constexpr std::uintptr_t MaxTrailCount = 0x38;
            static constexpr std::uintptr_t MaxParticleInTrailCount = 0x3C;
            static constexpr std::uintptr_t bClipSourceSegement = 0x40;
            static constexpr std::uintptr_t bDeadTrailsOnDeactivate = 0x40;
            static constexpr std::uintptr_t bDeadTrailsOnSourceLoss = 0x40;
            static constexpr std::uintptr_t bEnablePreviousTangentRecalculation = 0x40;
            static constexpr std::uintptr_t bSpawnInitialParticle = 0x40;
            static constexpr std::uintptr_t bTangentRecalculationEveryFrame = 0x40;
            static constexpr std::uintptr_t RenderAxis = 0x44;
            static constexpr std::uintptr_t TangentSpawningScalar = 0x48;
            static constexpr std::uintptr_t bRenderGeometry = 0x4C;
            static constexpr std::uintptr_t bRenderSpawnPoints = 0x4C;
            static constexpr std::uintptr_t bRenderTangents = 0x4C;
            static constexpr std::uintptr_t bRenderTessellation = 0x4C;
            static constexpr std::uintptr_t TilingDistance = 0x50;
            static constexpr std::uintptr_t DistanceTessellationStepSize = 0x54;
            static constexpr std::uintptr_t bEnableTangentDiffInterpScale = 0x58;
            static constexpr std::uintptr_t TangentTessellationScalar = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"MaxTessellationBetweenParticles", 0x30, "IntProperty"},
            {"SheetsPerTrail", 0x34, "IntProperty"},
            {"MaxTrailCount", 0x38, "IntProperty"},
            {"MaxParticleInTrailCount", 0x3C, "IntProperty"},
            {"bClipSourceSegement", 0x40, "BoolProperty"},
            {"bDeadTrailsOnDeactivate", 0x40, "BoolProperty"},
            {"bDeadTrailsOnSourceLoss", 0x40, "BoolProperty"},
            {"bEnablePreviousTangentRecalculation", 0x40, "BoolProperty"},
            {"bSpawnInitialParticle", 0x40, "BoolProperty"},
            {"bTangentRecalculationEveryFrame", 0x40, "BoolProperty"},
            {"RenderAxis", 0x44, "ByteProperty"},
            {"TangentSpawningScalar", 0x48, "FloatProperty"},
            {"bRenderGeometry", 0x4C, "BoolProperty"},
            {"bRenderSpawnPoints", 0x4C, "BoolProperty"},
            {"bRenderTangents", 0x4C, "BoolProperty"},
            {"bRenderTessellation", 0x4C, "BoolProperty"},
            {"TilingDistance", 0x50, "FloatProperty"},
            {"DistanceTessellationStepSize", 0x54, "FloatProperty"},
            {"bEnableTangentDiffInterpScale", 0x58, "BoolProperty"},
            {"TangentTessellationScalar", 0x5C, "FloatProperty"},
        }};
    };

    struct ParticleModuleVectorFieldBase
    {
        static constexpr std::string_view Name = "ParticleModuleVectorFieldBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t b3DDrawMode = 0x28;
            static constexpr std::uintptr_t bCurvesAsColor = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bFinalUpdateModule = 0x28;
            static constexpr std::uintptr_t bSpawnModule = 0x28;
            static constexpr std::uintptr_t bSupported3DDrawMode = 0x28;
            static constexpr std::uintptr_t bUpdateForGPUEmitter = 0x28;
            static constexpr std::uintptr_t bUpdateModule = 0x28;
            static constexpr std::uintptr_t LODDuplicate = 0x29;
            static constexpr std::uintptr_t bEditable = 0x29;
            static constexpr std::uintptr_t bRequiresLoopingNotification = 0x29;
            static constexpr std::uintptr_t bSupportsRandomSeed = 0x29;
            static constexpr std::uintptr_t LODValidity = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"b3DDrawMode", 0x28, "BoolProperty"},
            {"bCurvesAsColor", 0x28, "BoolProperty"},
            {"bEnabled", 0x28, "BoolProperty"},
            {"bFinalUpdateModule", 0x28, "BoolProperty"},
            {"bSpawnModule", 0x28, "BoolProperty"},
            {"bSupported3DDrawMode", 0x28, "BoolProperty"},
            {"bUpdateForGPUEmitter", 0x28, "BoolProperty"},
            {"bUpdateModule", 0x28, "BoolProperty"},
            {"LODDuplicate", 0x29, "BoolProperty"},
            {"bEditable", 0x29, "BoolProperty"},
            {"bRequiresLoopingNotification", 0x29, "BoolProperty"},
            {"bSupportsRandomSeed", 0x29, "BoolProperty"},
            {"LODValidity", 0x2A, "ByteProperty"},
        }};
    };

    struct ParticleModuleVectorFieldGlobal
    {
        static constexpr std::string_view Name = "ParticleModuleVectorFieldGlobal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVectorFieldBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideGlobalVectorFieldTightness = 0x30;
            static constexpr std::uintptr_t GlobalVectorFieldScale = 0x34;
            static constexpr std::uintptr_t GlobalVectorFieldTightness = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bOverrideGlobalVectorFieldTightness", 0x30, "BoolProperty"},
            {"GlobalVectorFieldScale", 0x34, "FloatProperty"},
            {"GlobalVectorFieldTightness", 0x38, "FloatProperty"},
        }};
    };

    struct ParticleModuleVectorFieldLocal
    {
        static constexpr std::string_view Name = "ParticleModuleVectorFieldLocal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVectorFieldBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VectorField = 0x30;
            static constexpr std::uintptr_t RelativeTranslation = 0x38;
            static constexpr std::uintptr_t RelativeRotation = 0x50;
            static constexpr std::uintptr_t RelativeScale3D = 0x68;
            static constexpr std::uintptr_t Intensity = 0x80;
            static constexpr std::uintptr_t Tightness = 0x84;
            static constexpr std::uintptr_t bIgnoreComponentTransform = 0x88;
            static constexpr std::uintptr_t bTileX = 0x88;
            static constexpr std::uintptr_t bTileY = 0x88;
            static constexpr std::uintptr_t bTileZ = 0x88;
            static constexpr std::uintptr_t bUseFixDT = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"VectorField", 0x30, "ObjectProperty"},
            {"RelativeTranslation", 0x38, "StructProperty"},
            {"RelativeRotation", 0x50, "StructProperty"},
            {"RelativeScale3D", 0x68, "StructProperty"},
            {"Intensity", 0x80, "FloatProperty"},
            {"Tightness", 0x84, "FloatProperty"},
            {"bIgnoreComponentTransform", 0x88, "BoolProperty"},
            {"bTileX", 0x88, "BoolProperty"},
            {"bTileY", 0x88, "BoolProperty"},
            {"bTileZ", 0x88, "BoolProperty"},
            {"bUseFixDT", 0x88, "BoolProperty"},
        }};
    };

    struct ParticleModuleVectorFieldRotation
    {
        static constexpr std::string_view Name = "ParticleModuleVectorFieldRotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVectorFieldBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MinInitialRotation = 0x30;
            static constexpr std::uintptr_t MaxInitialRotation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinInitialRotation", 0x30, "StructProperty"},
            {"MaxInitialRotation", 0x48, "StructProperty"},
        }};
    };

    struct ParticleModuleVectorFieldRotationRate
    {
        static constexpr std::string_view Name = "ParticleModuleVectorFieldRotationRate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVectorFieldBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationRate = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RotationRate", 0x30, "StructProperty"},
        }};
    };

    struct ParticleModuleVectorFieldScale
    {
        static constexpr std::string_view Name = "ParticleModuleVectorFieldScale";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVectorFieldBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VectorFieldScale = 0x30;
            static constexpr std::uintptr_t VectorFieldScaleRaw = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VectorFieldScale", 0x30, "ObjectProperty"},
            {"VectorFieldScaleRaw", 0x38, "StructProperty"},
        }};
    };

    struct ParticleModuleVectorFieldScaleOverLife
    {
        static constexpr std::string_view Name = "ParticleModuleVectorFieldScaleOverLife";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVectorFieldBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VectorFieldScaleOverLife = 0x30;
            static constexpr std::uintptr_t VectorFieldScaleOverLifeRaw = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VectorFieldScaleOverLife", 0x30, "ObjectProperty"},
            {"VectorFieldScaleOverLifeRaw", 0x38, "StructProperty"},
        }};
    };

    struct ParticleModuleVelocity
    {
        static constexpr std::string_view Name = "ParticleModuleVelocity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVelocityBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartVelocity = 0x38;
            static constexpr std::uintptr_t StartVelocityRadial = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartVelocity", 0x38, "StructProperty"},
            {"StartVelocityRadial", 0x98, "StructProperty"},
        }};
    };

    struct ParticleModuleVelocityBase
    {
        static constexpr std::string_view Name = "ParticleModuleVelocityBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModule";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyOwnerScale = 0x30;
            static constexpr std::uintptr_t bInWorldSpace = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bApplyOwnerScale", 0x30, "BoolProperty"},
            {"bInWorldSpace", 0x30, "BoolProperty"},
        }};
    };

    struct ParticleModuleVelocityCone
    {
        static constexpr std::string_view Name = "ParticleModuleVelocityCone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVelocityBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Angle = 0x38;
            static constexpr std::uintptr_t Velocity = 0x68;
            static constexpr std::uintptr_t Direction = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Angle", 0x38, "StructProperty"},
            {"Velocity", 0x68, "StructProperty"},
            {"Direction", 0x98, "StructProperty"},
        }};
    };

    struct ParticleModuleVelocityInheritParent
    {
        static constexpr std::string_view Name = "ParticleModuleVelocityInheritParent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVelocityBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Scale = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Scale", 0x38, "StructProperty"},
        }};
    };

    struct ParticleModuleVelocityOverLifetime
    {
        static constexpr std::string_view Name = "ParticleModuleVelocityOverLifetime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVelocityBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VelOverLife = 0x38;
            static constexpr std::uintptr_t Absolute = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VelOverLife", 0x38, "StructProperty"},
            {"Absolute", 0x98, "BoolProperty"},
        }};
    };

    struct ParticleModuleVelocity_Seeded
    {
        static constexpr std::string_view Name = "ParticleModuleVelocity_Seeded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleModuleVelocity";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeedInfo = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeedInfo", 0xC8, "StructProperty"},
        }};
    };

    struct ParticleRandomSeedInfo
    {
        static constexpr std::string_view Name = "ParticleRandomSeedInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t bGetSeedFromInstance = 0x4;
            static constexpr std::uintptr_t bInstanceSeedIsIndex = 0x4;
            static constexpr std::uintptr_t bRandomlySelectSeedArray = 0x4;
            static constexpr std::uintptr_t bResetSeedOnEmitterLooping = 0x4;
            static constexpr std::uintptr_t RandomSeeds = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ParameterName", 0x0, "NameProperty"},
            {"bGetSeedFromInstance", 0x4, "BoolProperty"},
            {"bInstanceSeedIsIndex", 0x4, "BoolProperty"},
            {"bRandomlySelectSeedArray", 0x4, "BoolProperty"},
            {"bResetSeedOnEmitterLooping", 0x4, "BoolProperty"},
            {"RandomSeeds", 0x8, "ArrayProperty"},
        }};
    };

    struct ParticleSpriteEmitter
    {
        static constexpr std::string_view Name = "ParticleSpriteEmitter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ParticleEmitter";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterName = 0x28;
            static constexpr std::uintptr_t SubUVDataOffset = 0x2C;
            static constexpr std::uintptr_t EmitterRenderMode = 0x30;
            static constexpr std::uintptr_t SignificanceLevel = 0x31;
            static constexpr std::uintptr_t ConvertedModules = 0x33;
            static constexpr std::uintptr_t bCookedOut = 0x33;
            static constexpr std::uintptr_t bDisabledLODsKeepEmitterAlive = 0x33;
            static constexpr std::uintptr_t bIsSoloing = 0x33;
            static constexpr std::uintptr_t bUseLegacySpawningBehavior = 0x33;
            static constexpr std::uintptr_t bDisableWhenInsignficant = 0x34;
            static constexpr std::uintptr_t LODLevels = 0x38;
            static constexpr std::uintptr_t PeakActiveParticles = 0x48;
            static constexpr std::uintptr_t InitialAllocationCount = 0x4C;
            static constexpr std::uintptr_t QualityLevelSpawnRateScale = 0x50;
            static constexpr std::uintptr_t DetailModeBitmask = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"EmitterName", 0x28, "NameProperty"},
            {"SubUVDataOffset", 0x2C, "IntProperty"},
            {"EmitterRenderMode", 0x30, "ByteProperty"},
            {"SignificanceLevel", 0x31, "EnumProperty"},
            {"ConvertedModules", 0x33, "BoolProperty"},
            {"bCookedOut", 0x33, "BoolProperty"},
            {"bDisabledLODsKeepEmitterAlive", 0x33, "BoolProperty"},
            {"bIsSoloing", 0x33, "BoolProperty"},
            {"bUseLegacySpawningBehavior", 0x33, "BoolProperty"},
            {"bDisableWhenInsignficant", 0x34, "BoolProperty"},
            {"LODLevels", 0x38, "ArrayProperty"},
            {"PeakActiveParticles", 0x48, "IntProperty"},
            {"InitialAllocationCount", 0x4C, "IntProperty"},
            {"QualityLevelSpawnRateScale", 0x50, "FloatProperty"},
            {"DetailModeBitmask", 0x54, "UInt32Property"},
        }};
    };

    struct ParticleSysParam
    {
        static constexpr std::string_view Name = "ParticleSysParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t ParamType = 0x4;
            static constexpr std::uintptr_t Scalar = 0x8;
            static constexpr std::uintptr_t Scalar_Low = 0xC;
            static constexpr std::uintptr_t Vector = 0x10;
            static constexpr std::uintptr_t Vector_Low = 0x28;
            static constexpr std::uintptr_t Color = 0x40;
            static constexpr std::uintptr_t Actor = 0x48;
            static constexpr std::uintptr_t Material = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"ParamType", 0x4, "ByteProperty"},
            {"Scalar", 0x8, "FloatProperty"},
            {"Scalar_Low", 0xC, "FloatProperty"},
            {"Vector", 0x10, "StructProperty"},
            {"Vector_Low", 0x28, "StructProperty"},
            {"Color", 0x40, "StructProperty"},
            {"Actor", 0x48, "ObjectProperty"},
            {"Material", 0x50, "ObjectProperty"},
        }};
    };

    struct ParticleSystem
    {
        static constexpr std::string_view Name = "ParticleSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FXSystemAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateTime_FPS = 0x60;
            static constexpr std::uintptr_t UpdateTime_Delta = 0x64;
            static constexpr std::uintptr_t WarmupTime = 0x68;
            static constexpr std::uintptr_t WarmupTickRate = 0x6C;
            static constexpr std::uintptr_t Emitters = 0x70;
            static constexpr std::uintptr_t PreviewComponent = 0x80;
            static constexpr std::uintptr_t CurveEdSetup = 0x88;
            static constexpr std::uintptr_t LODDistanceCheckTime = 0x90;
            static constexpr std::uintptr_t MacroUVRadius = 0x94;
            static constexpr std::uintptr_t LODDistances = 0x98;
            static constexpr std::uintptr_t LODSettings = 0xA8;
            static constexpr std::uintptr_t FixedRelativeBoundingBox = 0xB8;
            static constexpr std::uintptr_t SecondsBeforeInactive = 0xF0;
            static constexpr std::uintptr_t Delay = 0xF4;
            static constexpr std::uintptr_t DelayLow = 0xF8;
            static constexpr std::uintptr_t ThumbnailImageOutOfDate = 0xFC;
            static constexpr std::uintptr_t bHasPhysics = 0xFC;
            static constexpr std::uintptr_t bOrientZAxisTowardCamera = 0xFC;
            static constexpr std::uintptr_t bShouldResetPeakCounts = 0xFC;
            static constexpr std::uintptr_t bUseFixedRelativeBoundingBox = 0xFC;
            static constexpr std::uintptr_t bUseRealtimeThumbnail = 0xFC;
            static constexpr std::uintptr_t bAllowManagedTicking = 0xFD;
            static constexpr std::uintptr_t bAutoDeactivate = 0xFD;
            static constexpr std::uintptr_t bRegenerateLODDuplicate = 0xFD;
            static constexpr std::uintptr_t bUseDelayRange = 0xFD;
            static constexpr std::uintptr_t SystemUpdateMode = 0xFE;
            static constexpr std::uintptr_t LODMethod = 0xFF;
            static constexpr std::uintptr_t InsignificantReaction = 0x100;
            static constexpr std::uintptr_t OcclusionBoundsMethod = 0x101;
            static constexpr std::uintptr_t MaxSignificanceLevel = 0x103;
            static constexpr std::uintptr_t MinTimeBetweenTicks = 0x104;
            static constexpr std::uintptr_t InsignificanceDelay = 0x108;
            static constexpr std::uintptr_t MacroUVPosition = 0x110;
            static constexpr std::uintptr_t CustomOcclusionBounds = 0x128;
            static constexpr std::uintptr_t SoloTracking = 0x160;
            static constexpr std::uintptr_t NamedMaterialSlots = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"UpdateTime_FPS", 0x60, "FloatProperty"},
            {"UpdateTime_Delta", 0x64, "FloatProperty"},
            {"WarmupTime", 0x68, "FloatProperty"},
            {"WarmupTickRate", 0x6C, "FloatProperty"},
            {"Emitters", 0x70, "ArrayProperty"},
            {"PreviewComponent", 0x80, "ObjectProperty"},
            {"CurveEdSetup", 0x88, "ObjectProperty"},
            {"LODDistanceCheckTime", 0x90, "FloatProperty"},
            {"MacroUVRadius", 0x94, "FloatProperty"},
            {"LODDistances", 0x98, "ArrayProperty"},
            {"LODSettings", 0xA8, "ArrayProperty"},
            {"FixedRelativeBoundingBox", 0xB8, "StructProperty"},
            {"SecondsBeforeInactive", 0xF0, "FloatProperty"},
            {"Delay", 0xF4, "FloatProperty"},
            {"DelayLow", 0xF8, "FloatProperty"},
            {"ThumbnailImageOutOfDate", 0xFC, "BoolProperty"},
            {"bHasPhysics", 0xFC, "BoolProperty"},
            {"bOrientZAxisTowardCamera", 0xFC, "BoolProperty"},
            {"bShouldResetPeakCounts", 0xFC, "BoolProperty"},
            {"bUseFixedRelativeBoundingBox", 0xFC, "BoolProperty"},
            {"bUseRealtimeThumbnail", 0xFC, "BoolProperty"},
            {"bAllowManagedTicking", 0xFD, "BoolProperty"},
            {"bAutoDeactivate", 0xFD, "BoolProperty"},
            {"bRegenerateLODDuplicate", 0xFD, "BoolProperty"},
            {"bUseDelayRange", 0xFD, "BoolProperty"},
            {"SystemUpdateMode", 0xFE, "ByteProperty"},
            {"LODMethod", 0xFF, "ByteProperty"},
            {"InsignificantReaction", 0x100, "EnumProperty"},
            {"OcclusionBoundsMethod", 0x101, "ByteProperty"},
            {"MaxSignificanceLevel", 0x103, "EnumProperty"},
            {"MinTimeBetweenTicks", 0x104, "UInt32Property"},
            {"InsignificanceDelay", 0x108, "FloatProperty"},
            {"MacroUVPosition", 0x110, "StructProperty"},
            {"CustomOcclusionBounds", 0x128, "StructProperty"},
            {"SoloTracking", 0x160, "ArrayProperty"},
            {"NamedMaterialSlots", 0x170, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ContainsEmitterType",
        }};
    };

    struct ParticleSystemComponent
    {
        static constexpr std::string_view Name = "ParticleSystemComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FXSystemComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Template = 0x570;
            static constexpr std::uintptr_t EmitterMaterials = 0x578;
            static constexpr std::uintptr_t SkelMeshComponents = 0x588;
            static constexpr std::uintptr_t bAllowRecycling = 0x599;
            static constexpr std::uintptr_t bAutoAttachWeldSimulatedBodies = 0x599;
            static constexpr std::uintptr_t bAutoManageAttachment = 0x599;
            static constexpr std::uintptr_t bResetOnDetach = 0x599;
            static constexpr std::uintptr_t bUpdateOnDedicatedServer = 0x599;
            static constexpr std::uintptr_t bOverrideLODMethod = 0x59A;
            static constexpr std::uintptr_t bSkipUpdateDynamicDataDuringTick = 0x59A;
            static constexpr std::uintptr_t bWarmingUp = 0x59A;
            static constexpr std::uintptr_t LODMethod = 0x5A5;
            static constexpr std::uintptr_t RequiredSignificance = 0x5A6;
            static constexpr std::uintptr_t InstanceParameters = 0x5A8;
            static constexpr std::uintptr_t OnParticleSpawn = 0x5B8;
            static constexpr std::uintptr_t OnParticleBurst = 0x5C8;
            static constexpr std::uintptr_t OnParticleDeath = 0x5D8;
            static constexpr std::uintptr_t OnParticleCollide = 0x5E8;
            static constexpr std::uintptr_t bOldPositionValid = 0x5F8;
            static constexpr std::uintptr_t OldPosition = 0x600;
            static constexpr std::uintptr_t PartSysVelocity = 0x618;
            static constexpr std::uintptr_t WarmupTime = 0x630;
            static constexpr std::uintptr_t WarmupTickRate = 0x634;
            static constexpr std::uintptr_t SecondsBeforeInactive = 0x63C;
            static constexpr std::uintptr_t MaxTimeBeforeForceUpdateTransform = 0x644;
            static constexpr std::uintptr_t ReplayClips = 0x668;
            static constexpr std::uintptr_t CustomTimeDilation = 0x680;
            static constexpr std::uintptr_t AutoAttachParent = 0x6D8;
            static constexpr std::uintptr_t AutoAttachSocketName = 0x6E0;
            static constexpr std::uintptr_t AutoAttachLocationRule = 0x6E4;
            static constexpr std::uintptr_t AutoAttachRotationRule = 0x6E5;
            static constexpr std::uintptr_t AutoAttachScaleRule = 0x6E6;
            static constexpr std::uintptr_t OnSystemFinished = 0x738;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"Template", 0x570, "ObjectProperty"},
            {"EmitterMaterials", 0x578, "ArrayProperty"},
            {"SkelMeshComponents", 0x588, "ArrayProperty"},
            {"bAllowRecycling", 0x599, "BoolProperty"},
            {"bAutoAttachWeldSimulatedBodies", 0x599, "BoolProperty"},
            {"bAutoManageAttachment", 0x599, "BoolProperty"},
            {"bResetOnDetach", 0x599, "BoolProperty"},
            {"bUpdateOnDedicatedServer", 0x599, "BoolProperty"},
            {"bOverrideLODMethod", 0x59A, "BoolProperty"},
            {"bSkipUpdateDynamicDataDuringTick", 0x59A, "BoolProperty"},
            {"bWarmingUp", 0x59A, "BoolProperty"},
            {"LODMethod", 0x5A5, "ByteProperty"},
            {"RequiredSignificance", 0x5A6, "EnumProperty"},
            {"InstanceParameters", 0x5A8, "ArrayProperty"},
            {"OnParticleSpawn", 0x5B8, "MulticastInlineDelegateProperty"},
            {"OnParticleBurst", 0x5C8, "MulticastInlineDelegateProperty"},
            {"OnParticleDeath", 0x5D8, "MulticastInlineDelegateProperty"},
            {"OnParticleCollide", 0x5E8, "MulticastInlineDelegateProperty"},
            {"bOldPositionValid", 0x5F8, "BoolProperty"},
            {"OldPosition", 0x600, "StructProperty"},
            {"PartSysVelocity", 0x618, "StructProperty"},
            {"WarmupTime", 0x630, "FloatProperty"},
            {"WarmupTickRate", 0x634, "FloatProperty"},
            {"SecondsBeforeInactive", 0x63C, "FloatProperty"},
            {"MaxTimeBeforeForceUpdateTransform", 0x644, "FloatProperty"},
            {"ReplayClips", 0x668, "ArrayProperty"},
            {"CustomTimeDilation", 0x680, "FloatProperty"},
            {"AutoAttachParent", 0x6D8, "WeakObjectProperty"},
            {"AutoAttachSocketName", 0x6E0, "NameProperty"},
            {"AutoAttachLocationRule", 0x6E4, "EnumProperty"},
            {"AutoAttachRotationRule", 0x6E5, "EnumProperty"},
            {"AutoAttachScaleRule", 0x6E6, "EnumProperty"},
            {"OnSystemFinished", 0x738, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 24> FunctionNames{{
            "BeginTrails",
            "CreateNamedDynamicMaterialInstance",
            "EndTrails",
            "GenerateParticleEvent",
            "GetBeamEndPoint",
            "GetBeamSourcePoint",
            "GetBeamSourceStrength",
            "GetBeamSourceTangent",
            "GetBeamTargetPoint",
            "GetBeamTargetStrength",
            "GetBeamTargetTangent",
            "GetNamedMaterial",
            "GetNumActiveParticles",
            "SetAutoAttachParams",
            "SetBeamEndPoint",
            "SetBeamSourcePoint",
            "SetBeamSourceStrength",
            "SetBeamSourceTangent",
            "SetBeamTargetPoint",
            "SetBeamTargetStrength",
            "SetBeamTargetTangent",
            "SetMaterialParameter",
            "SetTemplate",
            "SetTrailSourceData",
        }};
    };

    struct ParticleSystemLOD
    {
        static constexpr std::string_view Name = "ParticleSystemLOD";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParticleSystemReplay
    {
        static constexpr std::string_view Name = "ParticleSystemReplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ClipIDNumber = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClipIDNumber", 0x28, "IntProperty"},
        }};
    };

    struct ParticleSystemReplayFrame
    {
        static constexpr std::string_view Name = "ParticleSystemReplayFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ParticleSystemWorldManagerTickFunction
    {
        static constexpr std::string_view Name = "ParticleSystemWorldManagerTickFunction";
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

    struct SubUVAnimation
    {
        static constexpr std::string_view Name = "SubUVAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SubUVTexture = 0x28;
            static constexpr std::uintptr_t SubImages_Horizontal = 0x30;
            static constexpr std::uintptr_t SubImages_Vertical = 0x34;
            static constexpr std::uintptr_t BoundingMode = 0x38;
            static constexpr std::uintptr_t OpacitySourceMode = 0x39;
            static constexpr std::uintptr_t AlphaThreshold = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SubUVTexture", 0x28, "ObjectProperty"},
            {"SubImages_Horizontal", 0x30, "IntProperty"},
            {"SubImages_Vertical", 0x34, "IntProperty"},
            {"BoundingMode", 0x38, "ByteProperty"},
            {"OpacitySourceMode", 0x39, "ByteProperty"},
            {"AlphaThreshold", 0x3C, "FloatProperty"},
        }};
    };

    struct WorldPSCPool
    {
        static constexpr std::string_view Name = "WorldPSCPool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldParticleSystemPools = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldParticleSystemPools", 0x0, "MapProperty"},
        }};
    };

}
