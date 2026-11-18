#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ElectricityRuntime
{
    struct FortCheatManagerCurieElectricity
    {
        static constexpr std::string_view Name = "FortCheatManagerCurieElectricity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCurieElectricityInteractWithWaterHandler
    {
        static constexpr std::string_view Name = "FortCurieElectricityInteractWithWaterHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieElementInteractWithElementHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractingElementTag = 0x30;
            static constexpr std::uintptr_t InteractMagnitudeThreshold = 0x38;
            static constexpr std::uintptr_t ElementMagnitudeToIntensityDecreaseCurve = 0x60;
            static constexpr std::uintptr_t ElementMagnitudeToIntensityDecayRateCurve = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InteractingElementTag", 0x30, "StructProperty"},
            {"InteractMagnitudeThreshold", 0x38, "StructProperty"},
            {"ElementMagnitudeToIntensityDecreaseCurve", 0x60, "StructProperty"},
            {"ElementMagnitudeToIntensityDecayRateCurve", 0x70, "StructProperty"},
        }};
    };

    struct FortCurieElectricityNativeFXHandler
    {
        static constexpr std::string_view Name = "FortCurieElectricityNativeFXHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieNativeFXHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedConfig", 0x28, "ObjectProperty"},
        }};
    };

    struct FortCurieElectricityNativeFXHandlerConfig
    {
        static constexpr std::string_view Name = "FortCurieElectricityNativeFXHandlerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieNativeFXHandlerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigName = 0x30;
            static constexpr std::uintptr_t ConfigTag = 0x34;
            static constexpr std::uintptr_t bNeedsAmbientAudio = 0x38;
            static constexpr std::uintptr_t bNeedsSignificanceTracking = 0x38;
            static constexpr std::uintptr_t bUseGlow = 0x38;
            static constexpr std::uintptr_t GlowPriority = 0x3C;
            static constexpr std::uintptr_t GlowMaterialIdx = 0x40;
            static constexpr std::uintptr_t GlowFadeInCurve = 0x48;
            static constexpr std::uintptr_t GlowFadeOutCurve = 0x90;
            static constexpr std::uintptr_t AmbientSound = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ConfigName", 0x30, "NameProperty"},
            {"ConfigTag", 0x34, "StructProperty"},
            {"bNeedsAmbientAudio", 0x38, "BoolProperty"},
            {"bNeedsSignificanceTracking", 0x38, "BoolProperty"},
            {"bUseGlow", 0x38, "BoolProperty"},
            {"GlowPriority", 0x3C, "IntProperty"},
            {"GlowMaterialIdx", 0x40, "FloatProperty"},
            {"GlowFadeInCurve", 0x48, "StructProperty"},
            {"GlowFadeOutCurve", 0x90, "StructProperty"},
            {"AmbientSound", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortCurieElectricityPropagationManager
    {
        static constexpr std::string_view Name = "FortCurieElectricityPropagationManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryTickFunction = 0x30;
            static constexpr std::uintptr_t PropagationManagerConfig = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PrimaryTickFunction", 0x30, "StructProperty"},
            {"PropagationManagerConfig", 0x278, "ObjectProperty"},
        }};
    };

    struct FortCurieElectricityPropagationManagerConfig
    {
        static constexpr std::string_view Name = "FortCurieElectricityPropagationManagerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CurieManagerComponentConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t MinPropagationDepthLimit = 0x38;
            static constexpr std::uintptr_t MaxPropagationDepthLimit = 0x39;
            static constexpr std::uintptr_t DefaultPropagationDepthLimit = 0x3A;
            static constexpr std::uintptr_t PropagationDelay = 0x3C;
            static constexpr std::uintptr_t TemporaryGridDepropagationDelay = 0x40;
            static constexpr std::uintptr_t NeighborCacheDefaultSlack = 0x44;
            static constexpr std::uintptr_t OverlapElectricityApplicationMagnitude = 0x48;
            static constexpr std::uintptr_t DefaultCollisionExpansion = 0x50;
            static constexpr std::uintptr_t bAllowPropagationDepthLimitOverrides = 0x68;
            static constexpr std::uintptr_t bAllowInteractsWhileDBNO = 0x69;
            static constexpr std::uintptr_t bAllowInteractsWhileInVehicle = 0x6A;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MinPropagationDepthLimit", 0x38, "ByteProperty"},
            {"MaxPropagationDepthLimit", 0x39, "ByteProperty"},
            {"DefaultPropagationDepthLimit", 0x3A, "ByteProperty"},
            {"PropagationDelay", 0x3C, "FloatProperty"},
            {"TemporaryGridDepropagationDelay", 0x40, "FloatProperty"},
            {"NeighborCacheDefaultSlack", 0x44, "IntProperty"},
            {"OverlapElectricityApplicationMagnitude", 0x48, "FloatProperty"},
            {"DefaultCollisionExpansion", 0x50, "StructProperty"},
            {"bAllowPropagationDepthLimitOverrides", 0x68, "BoolProperty"},
            {"bAllowInteractsWhileDBNO", 0x69, "BoolProperty"},
            {"bAllowInteractsWhileInVehicle", 0x6A, "BoolProperty"},
        }};
    };

    struct FortCurieElectricityRuntimeBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "FortCurieElectricityRuntimeBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCurieElementAllocationHandler_Electricity
    {
        static constexpr std::string_view Name = "FortCurieElementAllocationHandler_Electricity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieElementAllocationHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCurieElementAttachConditionHandlerElectricity
    {
        static constexpr std::string_view Name = "FortCurieElementAttachConditionHandlerElectricity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieElementAttachConditionHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementMagnitudeToIntensityCurve = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ElementMagnitudeToIntensityCurve", 0x30, "StructProperty"},
        }};
    };

    struct FortCurieElementContainerParamsGenerator_Electricity
    {
        static constexpr std::string_view Name = "FortCurieElementContainerParamsGenerator_Electricity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieElementContainerParamsGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t PropagationDepthLimit = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropagationDepthLimit", 0x30, "IntProperty"},
        }};
    };

    struct FortGameplayAbility_ElectrifiedBuilding
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ElectrifiedBuilding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingReplacementGroups = 0xB40;
            static constexpr std::uintptr_t ReplacementChance = 0xB50;
            static constexpr std::uintptr_t MinReplacementDelay = 0xB78;
            static constexpr std::uintptr_t MaxReplacementDelay = 0xBA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BuildingReplacementGroups", 0xB40, "ArrayProperty"},
            {"ReplacementChance", 0xB50, "StructProperty"},
            {"MinReplacementDelay", 0xB78, "StructProperty"},
            {"MaxReplacementDelay", 0xBA0, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_ElectrifiedVehicle
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ElectrifiedVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t MinTurnDelay = 0xB40;
            static constexpr std::uintptr_t MaxTurnDelay = 0xB68;
            static constexpr std::uintptr_t MinHonkDelay = 0xB90;
            static constexpr std::uintptr_t MaxHonkDelay = 0xBB8;
            static constexpr std::uintptr_t MinHonkDuration = 0xBE0;
            static constexpr std::uintptr_t MaxHonkDuration = 0xC08;
            static constexpr std::uintptr_t MinBoostDelay = 0xC30;
            static constexpr std::uintptr_t MaxBoostDelay = 0xC58;
            static constexpr std::uintptr_t MinBoostDuration = 0xC80;
            static constexpr std::uintptr_t MaxBoostDuration = 0xCA8;
            static constexpr std::uintptr_t TargetingChance = 0xCD0;
            static constexpr std::uintptr_t TargetingPreset = 0xCF8;
            static constexpr std::uintptr_t Target = 0xD00;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"MinTurnDelay", 0xB40, "StructProperty"},
            {"MaxTurnDelay", 0xB68, "StructProperty"},
            {"MinHonkDelay", 0xB90, "StructProperty"},
            {"MaxHonkDelay", 0xBB8, "StructProperty"},
            {"MinHonkDuration", 0xBE0, "StructProperty"},
            {"MaxHonkDuration", 0xC08, "StructProperty"},
            {"MinBoostDelay", 0xC30, "StructProperty"},
            {"MaxBoostDelay", 0xC58, "StructProperty"},
            {"MinBoostDuration", 0xC80, "StructProperty"},
            {"MaxBoostDuration", 0xCA8, "StructProperty"},
            {"TargetingChance", 0xCD0, "StructProperty"},
            {"TargetingPreset", 0xCF8, "ObjectProperty"},
            {"Target", 0xD00, "ObjectProperty"},
        }};
    };

}
