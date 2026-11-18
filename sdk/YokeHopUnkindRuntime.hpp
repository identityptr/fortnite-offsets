#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::YokeHopUnkindRuntime
{
    struct FortAISafeZoneModifier_YokeHopUnkind
    {
        static constexpr std::string_view Name = "FortAISafeZoneModifier_YokeHopUnkind";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAISafeZoneModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SafeZoneComponent = 0x40;
            static constexpr std::uintptr_t GameStateComponent = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SafeZoneComponent", 0x40, "ObjectProperty"},
            {"GameStateComponent", 0x48, "ObjectProperty"},
        }};
    };

    struct FortAthenaMutator_YokeHopUnkind
    {
        static constexpr std::string_view Name = "FortAthenaMutator_YokeHopUnkind";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StormShapeRegistry = 0x418;
            static constexpr std::uintptr_t StormShapeRegistryStrongReference = 0x438;
            static constexpr std::uintptr_t StormShapeRegistryIndex = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StormShapeRegistry", 0x418, "SoftObjectProperty"},
            {"StormShapeRegistryStrongReference", 0x438, "ObjectProperty"},
            {"StormShapeRegistryIndex", 0x440, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_YokeHopUnkindUI
    {
        static constexpr std::string_view Name = "FortAthenaMutator_YokeHopUnkindUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GentlePointSearchDistance = 0x430;
            static constexpr std::uintptr_t GentlePointMaxAngleTolerated = 0x434;
            static constexpr std::uintptr_t GentlePointSearchStepDistance = 0x438;
            static constexpr std::uintptr_t GentlePointMaxSearchDistance = 0x43C;
            static constexpr std::uintptr_t StormCollisionSearchStepDistance = 0x440;
            static constexpr std::uintptr_t StormCollisionMaxSearchDistance = 0x444;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"GentlePointSearchDistance", 0x430, "FloatProperty"},
            {"GentlePointMaxAngleTolerated", 0x434, "FloatProperty"},
            {"GentlePointSearchStepDistance", 0x438, "FloatProperty"},
            {"GentlePointMaxSearchDistance", 0x43C, "FloatProperty"},
            {"StormCollisionSearchStepDistance", 0x440, "FloatProperty"},
            {"StormCollisionMaxSearchDistance", 0x444, "FloatProperty"},
        }};
    };

    struct FortCheatManager_YokeHopUnkind
    {
        static constexpr std::string_view Name = "FortCheatManager_YokeHopUnkind";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameFeatureAction_AddSafeZoneShapeProviderRegistry
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddSafeZoneShapeProviderRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SafeZoneShapeProviderRegistry = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SafeZoneShapeProviderRegistry", 0x28, "SoftObjectProperty"},
        }};
    };

    struct FortGameStateComponent_YokeHopUnkind
    {
        static constexpr std::string_view Name = "FortGameStateComponent_YokeHopUnkind";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStormShapeSelected = 0x130;
            static constexpr std::uintptr_t HF_RadialPhase0Radius = 0x140;
            static constexpr std::uintptr_t HF_RadialPhase0WaitTime = 0x168;
            static constexpr std::uintptr_t HF_RadialPhase0ShrinkTime = 0x190;
            static constexpr std::uintptr_t HF_RadialPhase1Radius = 0x1B8;
            static constexpr std::uintptr_t HF_RadialPhase1WaitTime = 0x1E0;
            static constexpr std::uintptr_t HF_RadialPhase1ShrinkTime = 0x208;
            static constexpr std::uintptr_t WaveInfillPercentChance = 0x248;
            static constexpr std::uintptr_t OverrideGameData = 0x270;
            static constexpr std::uintptr_t StormShapeRegistry = 0x2A8;
            static constexpr std::uintptr_t StormShapeRegistryStrongReference = 0x2C8;
            static constexpr std::uintptr_t AllStormShapeRegistries = 0x2D0;
            static constexpr std::uintptr_t StormInfillShapeDataStrongReference = 0x2E0;
            static constexpr std::uintptr_t StormShapeSystemConfig = 0x2E8;
            static constexpr std::uintptr_t ActiveStormShapeConfig = 0x4D8;
            static constexpr std::uintptr_t PreviousStormShapeConfig = 0x750;
            static constexpr std::uintptr_t CurrentValidShapeProviderSets = 0x9C8;
            static constexpr std::uintptr_t CurrentShapeProviderSetIndex = 0x9D8;
            static constexpr std::uintptr_t PrevStormShapeProvider = 0x9E0;
            static constexpr std::uintptr_t ActiveStormShapeProvider = 0x9E8;
            static constexpr std::uintptr_t ActiveShapeProviderIndex = 0x9F0;
            static constexpr std::uintptr_t ShapeConfigRotation = 0x9F4;
            static constexpr std::uintptr_t bPrevOverrideRotation = 0x9F8;
            static constexpr std::uintptr_t PrevShapeProviderRotation = 0x9FC;
            static constexpr std::uintptr_t bCurrentOverrideRotation = 0xA00;
            static constexpr std::uintptr_t CurrentShapeProviderRotation = 0xA04;
            static constexpr std::uintptr_t bIsNextSafeZoneInsidePreviousSafeZone = 0xA08;
            static constexpr std::uintptr_t bIsNextSafeZoneTouchingPreviousSafeZone = 0xA09;
            static constexpr std::uintptr_t StormPhaseInfo = 0xA30;
            static constexpr std::uintptr_t MoveStartTime = 0xA44;
            static constexpr std::uintptr_t PreviousShapeSpline = 0xA90;
            static constexpr std::uintptr_t CurrentShapeSpline = 0xA98;
            static constexpr std::uintptr_t WaveInfillCurrentShapeSplines = 0xAA0;
            static constexpr std::uintptr_t WaveInfillPreviousShapeSpline = 0xAB0;
            static constexpr std::uintptr_t WaveInfillEndShapeSpline = 0xAB8;
            static constexpr std::uintptr_t EndShapeSpline = 0xAC0;
            static constexpr std::uintptr_t InfluencerControlPointAngles = 0xB40;
            static constexpr std::uintptr_t AdditionalAdjustControlPointAngleFactor = 0xB50;
            static constexpr std::uintptr_t FinalPhaseWithInfluencers = 0xB54;
            static constexpr std::uintptr_t SplineMeshes = 0xB58;
            static constexpr std::uintptr_t SafeZoneInfluencers = 0xB98;
            static constexpr std::uintptr_t CurrentPhaseDataIndex = 0xBA8;
            static constexpr std::uintptr_t bIsEnabled = 0xBC8;
            static constexpr std::uintptr_t CachedLandscapeSplinePoints = 0xBE0;
            static constexpr std::uintptr_t CachedSafeZonePhases = 0xBF0;
            static constexpr std::uintptr_t bIsRadialFirstPhaseActive = 0xC18;
            static constexpr std::uintptr_t RadialPhase0Info = 0xC20;
            static constexpr std::uintptr_t RadialPhase1Info = 0xC70;
            static constexpr std::uintptr_t bForceConformFirstStormShapeToLand = 0xD60;
            static constexpr std::uintptr_t bForceEnforceShrinkTimes = 0xD61;
            static constexpr std::uintptr_t StormInfillShapeData = 0xD68;
            static constexpr std::uintptr_t ShrinkPhaseCompletionAlpha_Replicated = 0xD70;
            static constexpr std::uintptr_t ShapePhaseCompletionAlpha_Replicated = 0xD78;
            static constexpr std::uintptr_t WaveInfillEnabledStatus = 0xD88;
            static constexpr std::uintptr_t WaveInfillSeed = 0xD8C;
        };

        inline static constexpr std::array<PropertyInfo, 55> Properties{{
            {"OnStormShapeSelected", 0x130, "MulticastInlineDelegateProperty"},
            {"HF_RadialPhase0Radius", 0x140, "StructProperty"},
            {"HF_RadialPhase0WaitTime", 0x168, "StructProperty"},
            {"HF_RadialPhase0ShrinkTime", 0x190, "StructProperty"},
            {"HF_RadialPhase1Radius", 0x1B8, "StructProperty"},
            {"HF_RadialPhase1WaitTime", 0x1E0, "StructProperty"},
            {"HF_RadialPhase1ShrinkTime", 0x208, "StructProperty"},
            {"WaveInfillPercentChance", 0x248, "StructProperty"},
            {"OverrideGameData", 0x270, "ObjectProperty"},
            {"StormShapeRegistry", 0x2A8, "SoftObjectProperty"},
            {"StormShapeRegistryStrongReference", 0x2C8, "ObjectProperty"},
            {"AllStormShapeRegistries", 0x2D0, "ArrayProperty"},
            {"StormInfillShapeDataStrongReference", 0x2E0, "ObjectProperty"},
            {"StormShapeSystemConfig", 0x2E8, "StructProperty"},
            {"ActiveStormShapeConfig", 0x4D8, "StructProperty"},
            {"PreviousStormShapeConfig", 0x750, "StructProperty"},
            {"CurrentValidShapeProviderSets", 0x9C8, "ArrayProperty"},
            {"CurrentShapeProviderSetIndex", 0x9D8, "IntProperty"},
            {"PrevStormShapeProvider", 0x9E0, "ObjectProperty"},
            {"ActiveStormShapeProvider", 0x9E8, "ObjectProperty"},
            {"ActiveShapeProviderIndex", 0x9F0, "IntProperty"},
            {"ShapeConfigRotation", 0x9F4, "FloatProperty"},
            {"bPrevOverrideRotation", 0x9F8, "BoolProperty"},
            {"PrevShapeProviderRotation", 0x9FC, "FloatProperty"},
            {"bCurrentOverrideRotation", 0xA00, "BoolProperty"},
            {"CurrentShapeProviderRotation", 0xA04, "FloatProperty"},
            {"bIsNextSafeZoneInsidePreviousSafeZone", 0xA08, "BoolProperty"},
            {"bIsNextSafeZoneTouchingPreviousSafeZone", 0xA09, "BoolProperty"},
            {"StormPhaseInfo", 0xA30, "StructProperty"},
            {"MoveStartTime", 0xA44, "FloatProperty"},
            {"PreviousShapeSpline", 0xA90, "ObjectProperty"},
            {"CurrentShapeSpline", 0xA98, "ObjectProperty"},
            {"WaveInfillCurrentShapeSplines", 0xAA0, "ArrayProperty"},
            {"WaveInfillPreviousShapeSpline", 0xAB0, "ObjectProperty"},
            {"WaveInfillEndShapeSpline", 0xAB8, "ObjectProperty"},
            {"EndShapeSpline", 0xAC0, "ObjectProperty"},
            {"InfluencerControlPointAngles", 0xB40, "ArrayProperty"},
            {"AdditionalAdjustControlPointAngleFactor", 0xB50, "FloatProperty"},
            {"FinalPhaseWithInfluencers", 0xB54, "IntProperty"},
            {"SplineMeshes", 0xB58, "ArrayProperty"},
            {"SafeZoneInfluencers", 0xB98, "ArrayProperty"},
            {"CurrentPhaseDataIndex", 0xBA8, "IntProperty"},
            {"bIsEnabled", 0xBC8, "BoolProperty"},
            {"CachedLandscapeSplinePoints", 0xBE0, "ArrayProperty"},
            {"CachedSafeZonePhases", 0xBF0, "ArrayProperty"},
            {"bIsRadialFirstPhaseActive", 0xC18, "BoolProperty"},
            {"RadialPhase0Info", 0xC20, "StructProperty"},
            {"RadialPhase1Info", 0xC70, "StructProperty"},
            {"bForceConformFirstStormShapeToLand", 0xD60, "BoolProperty"},
            {"bForceEnforceShrinkTimes", 0xD61, "BoolProperty"},
            {"StormInfillShapeData", 0xD68, "ObjectProperty"},
            {"ShrinkPhaseCompletionAlpha_Replicated", 0xD70, "FloatProperty"},
            {"ShapePhaseCompletionAlpha_Replicated", 0xD78, "FloatProperty"},
            {"WaveInfillEnabledStatus", 0xD88, "EnumProperty"},
            {"WaveInfillSeed", 0xD8C, "UInt32Property"},
        }};
    };

    struct FortSafeZoneInfluencer
    {
        static constexpr std::string_view Name = "FortSafeZoneInfluencer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t InfluenceType = 0x278;
            static constexpr std::uintptr_t Radius = 0x27C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InfluenceType", 0x278, "EnumProperty"},
            {"Radius", 0x27C, "FloatProperty"},
        }};
    };

    struct FortSafeZoneInfluencerEditorComponent
    {
        static constexpr std::string_view Name = "FortSafeZoneInfluencerEditorComponent";
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

    struct SafeZoneShapeCircularOffsets
    {
        static constexpr std::string_view Name = "SafeZoneShapeCircularOffsets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SafeZoneShapeProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t CircleYawDeg = 0x1E8;
            static constexpr std::uintptr_t CircleScale = 0x1F0;
            static constexpr std::uintptr_t ControlPointRadiusScale = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CircleYawDeg", 0x1E8, "FloatProperty"},
            {"CircleScale", 0x1F0, "StructProperty"},
            {"ControlPointRadiusScale", 0x200, "ArrayProperty"},
        }};
    };

    struct SafeZoneShapeExplicitSpline
    {
        static constexpr std::string_view Name = "SafeZoneShapeExplicitSpline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SafeZoneShapeProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedSpline = 0x28;
            static constexpr std::uintptr_t Enabled = 0x90;
            static constexpr std::uintptr_t Weight = 0xB8;
            static constexpr std::uintptr_t OverrideConfigRotation = 0xE0;
            static constexpr std::uintptr_t BaseRotation = 0x108;
            static constexpr std::uintptr_t RandomRotationRangeMin = 0x130;
            static constexpr std::uintptr_t RandomRotationRangeMax = 0x158;
            static constexpr std::uintptr_t PrimitiveShape = 0x180;
            static constexpr std::uintptr_t InOutTest = 0x1A8;
            static constexpr std::uintptr_t AdditionalPointDistribution = 0x1A9;
            static constexpr std::uintptr_t MinimapOverrides = 0x1B0;
            static constexpr std::uintptr_t bSkipReindexing = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"GeneratedSpline", 0x28, "StructProperty"},
            {"Enabled", 0x90, "StructProperty"},
            {"Weight", 0xB8, "StructProperty"},
            {"OverrideConfigRotation", 0xE0, "StructProperty"},
            {"BaseRotation", 0x108, "StructProperty"},
            {"RandomRotationRangeMin", 0x130, "StructProperty"},
            {"RandomRotationRangeMax", 0x158, "StructProperty"},
            {"PrimitiveShape", 0x180, "StructProperty"},
            {"InOutTest", 0x1A8, "EnumProperty"},
            {"AdditionalPointDistribution", 0x1A9, "EnumProperty"},
            {"MinimapOverrides", 0x1B0, "StructProperty"},
            {"bSkipReindexing", 0x1E0, "BoolProperty"},
        }};
    };

    struct SafeZoneShapeFromMask
    {
        static constexpr std::string_view Name = "SafeZoneShapeFromMask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SafeZoneShapeProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeMask = 0x1E8;
            static constexpr std::uintptr_t Scale = 0x208;
            static constexpr std::uintptr_t ConversionControlPointNum = 0x20C;
            static constexpr std::uintptr_t DefaultRadiusStepCount = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShapeMask", 0x1E8, "SoftObjectProperty"},
            {"Scale", 0x208, "FloatProperty"},
            {"ConversionControlPointNum", 0x20C, "IntProperty"},
            {"DefaultRadiusStepCount", 0x210, "IntProperty"},
        }};
    };

    struct SafeZoneShapeProvider
    {
        static constexpr std::string_view Name = "SafeZoneShapeProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedSpline = 0x28;
            static constexpr std::uintptr_t Enabled = 0x90;
            static constexpr std::uintptr_t Weight = 0xB8;
            static constexpr std::uintptr_t OverrideConfigRotation = 0xE0;
            static constexpr std::uintptr_t BaseRotation = 0x108;
            static constexpr std::uintptr_t RandomRotationRangeMin = 0x130;
            static constexpr std::uintptr_t RandomRotationRangeMax = 0x158;
            static constexpr std::uintptr_t PrimitiveShape = 0x180;
            static constexpr std::uintptr_t InOutTest = 0x1A8;
            static constexpr std::uintptr_t AdditionalPointDistribution = 0x1A9;
            static constexpr std::uintptr_t MinimapOverrides = 0x1B0;
            static constexpr std::uintptr_t bSkipReindexing = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"GeneratedSpline", 0x28, "StructProperty"},
            {"Enabled", 0x90, "StructProperty"},
            {"Weight", 0xB8, "StructProperty"},
            {"OverrideConfigRotation", 0xE0, "StructProperty"},
            {"BaseRotation", 0x108, "StructProperty"},
            {"RandomRotationRangeMin", 0x130, "StructProperty"},
            {"RandomRotationRangeMax", 0x158, "StructProperty"},
            {"PrimitiveShape", 0x180, "StructProperty"},
            {"InOutTest", 0x1A8, "EnumProperty"},
            {"AdditionalPointDistribution", 0x1A9, "EnumProperty"},
            {"MinimapOverrides", 0x1B0, "StructProperty"},
            {"bSkipReindexing", 0x1E0, "BoolProperty"},
        }};
    };

    struct SafeZoneShapeProviderRegistry
    {
        static constexpr std::string_view Name = "SafeZoneShapeProviderRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeConfigsNew = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShapeConfigsNew", 0x28, "ArrayProperty"},
        }};
    };

    struct SafeZoneShapeProviderSet
    {
        static constexpr std::string_view Name = "SafeZoneShapeProviderSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MinPhase = 0x28;
            static constexpr std::uintptr_t MaxPhase = 0x50;
            static constexpr std::uintptr_t PhaseData_Providers = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MinPhase", 0x28, "StructProperty"},
            {"MaxPhase", 0x50, "StructProperty"},
            {"PhaseData_Providers", 0x78, "ArrayProperty"},
        }};
    };

    struct StormInfillShapeData
    {
        static constexpr std::string_view Name = "StormInfillShapeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t StormInfillSplinePoints = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StormInfillSplinePoints", 0x28, "ArrayProperty"},
        }};
    };

    struct StormMapOverrideCircleProviderInterface
    {
        static constexpr std::string_view Name = "StormMapOverrideCircleProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
