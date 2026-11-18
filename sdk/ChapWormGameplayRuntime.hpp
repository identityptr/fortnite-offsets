#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChapWormGameplayRuntime
{
    struct ChapWormLayerAnimInstance
    {
        static constexpr std::string_view Name = "ChapWormLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsKineticEnergyIdle = 0x1180;
            static constexpr std::uintptr_t bCanEnterBaseToActivate = 0x1181;
            static constexpr std::uintptr_t KineticEnergyActivateTagName = 0x1184;
            static constexpr std::uintptr_t ApplyOverpowerStatusTagName = 0x1188;
            static constexpr std::uintptr_t AthenaInVehicleTagName = 0x118C;
            static constexpr std::uintptr_t SurfaceSwimmingTagName = 0x1190;
            static constexpr std::uintptr_t IsGrindingTagName = 0x1194;
            static constexpr std::uintptr_t HoverActiveTagName = 0x1198;
            static constexpr std::uintptr_t ZipLiningOnSplineTagName = 0x119C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bIsKineticEnergyIdle", 0x1180, "BoolProperty"},
            {"bCanEnterBaseToActivate", 0x1181, "BoolProperty"},
            {"KineticEnergyActivateTagName", 0x1184, "StructProperty"},
            {"ApplyOverpowerStatusTagName", 0x1188, "StructProperty"},
            {"AthenaInVehicleTagName", 0x118C, "StructProperty"},
            {"SurfaceSwimmingTagName", 0x1190, "StructProperty"},
            {"IsGrindingTagName", 0x1194, "StructProperty"},
            {"HoverActiveTagName", 0x1198, "StructProperty"},
            {"ZipLiningOnSplineTagName", 0x119C, "StructProperty"},
        }};
    };

    struct FortCameraModifier_ChapWorm
    {
        static constexpr std::string_view Name = "FortCameraModifier_ChapWorm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModifier_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraModifierLifetimeDuration = 0x80;
            static constexpr std::uintptr_t OverpoweredGameplayTag = 0x84;
            static constexpr std::uintptr_t bInterpCameraViewFov = 0x88;
            static constexpr std::uintptr_t FOVInterpSpeed = 0x8C;
            static constexpr std::uintptr_t TargetDeltaFov_Default = 0x90;
            static constexpr std::uintptr_t TargetDeltaFov_Overpowered = 0x94;
            static constexpr std::uintptr_t bInterpCameraViewLocation = 0x98;
            static constexpr std::uintptr_t DeltaLocationInterpSpeed = 0x9C;
            static constexpr std::uintptr_t TargetDeltaForwardDirectionOffset_Default = 0xA0;
            static constexpr std::uintptr_t TargetDeltaForwardDirectionOffset_Overpowered = 0xA4;
            static constexpr std::uintptr_t bWindingDown = 0xA8;
            static constexpr std::uintptr_t CurrentDeltaFov = 0xAC;
            static constexpr std::uintptr_t CurrentDeltaLocation = 0xB0;
            static constexpr std::uintptr_t LifetimeDurationTimerHandle = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"CameraModifierLifetimeDuration", 0x80, "FloatProperty"},
            {"OverpoweredGameplayTag", 0x84, "StructProperty"},
            {"bInterpCameraViewFov", 0x88, "BoolProperty"},
            {"FOVInterpSpeed", 0x8C, "FloatProperty"},
            {"TargetDeltaFov_Default", 0x90, "FloatProperty"},
            {"TargetDeltaFov_Overpowered", 0x94, "FloatProperty"},
            {"bInterpCameraViewLocation", 0x98, "BoolProperty"},
            {"DeltaLocationInterpSpeed", 0x9C, "FloatProperty"},
            {"TargetDeltaForwardDirectionOffset_Default", 0xA0, "FloatProperty"},
            {"TargetDeltaForwardDirectionOffset_Overpowered", 0xA4, "FloatProperty"},
            {"bWindingDown", 0xA8, "BoolProperty"},
            {"CurrentDeltaFov", 0xAC, "FloatProperty"},
            {"CurrentDeltaLocation", 0xB0, "StructProperty"},
            {"LifetimeDurationTimerHandle", 0xC8, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_ChapWorm_InventoryPassive
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ChapWorm_InventoryPassive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationType = 0x3A8;
            static constexpr std::uintptr_t EffectContainers = 0x3B0;
            static constexpr std::uintptr_t GameplayEffectContainers = 0x748;
            static constexpr std::uintptr_t DynamicGameplayEffectContainers = 0x758;
            static constexpr std::uintptr_t OwnerPreviewImageOverrideTags = 0x768;
            static constexpr std::uintptr_t ProjectileClass = 0x788;
            static constexpr std::uintptr_t bAllowBlueprintReplicatedVariables = 0x790;
            static constexpr std::uintptr_t DamageStatHandle = 0x798;
            static constexpr std::uintptr_t AbilityCosts = 0x7A8;
            static constexpr std::uintptr_t Costs = 0x7B8;
            static constexpr std::uintptr_t bApplyingCostsEnabled = 0x7C8;
            static constexpr std::uintptr_t bShowWidgetForCosts = 0x7C8;
            static constexpr std::uintptr_t MovementCancellationLeashLength = 0x7D0;
            static constexpr std::uintptr_t ExplicitCooldownDuration = 0x7F8;
            static constexpr std::uintptr_t ExplicitCooldownTags = 0x820;
            static constexpr std::uintptr_t ExplicitCooldownAssetTags = 0x840;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x860;
            static constexpr std::uintptr_t bDisableMoveCombining = 0x864;
            static constexpr std::uintptr_t bIgnoreClientActivationAttempts = 0x864;
            static constexpr std::uintptr_t bPersistOnDeath = 0x864;
            static constexpr std::uintptr_t bRequireServerTimeValidationPass = 0x864;
            static constexpr std::uintptr_t bRequireServerValidationPass = 0x864;
            static constexpr std::uintptr_t bStartWithCooldown = 0x864;
            static constexpr std::uintptr_t bStopsAIBehaviorLogic = 0x864;
            static constexpr std::uintptr_t bStopsAIMovement = 0x864;
            static constexpr std::uintptr_t bForceNormalAILOD = 0x865;
            static constexpr std::uintptr_t bStopsRVOAvoidance = 0x865;
            static constexpr std::uintptr_t MinimumRequiredAILODLevel = 0x868;
            static constexpr std::uintptr_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bAcceptTargetActorVehicleForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bRelevantForAIDespawning = 0x86C;
            static constexpr std::uintptr_t bUseOwnerInstigatorAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseTetheredPawnAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseAIFireLocationAndRotation = 0x86D;
            static constexpr std::uintptr_t AIWeaponUsage = 0x870;
            static constexpr std::uintptr_t WeaponTestApplicationTag = 0x874;
            static constexpr std::uintptr_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = 0x878;
            static constexpr std::uintptr_t bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast = 0x878;
            static constexpr std::uintptr_t bVerifyFireOffsetIsNotObstructedByWorldGeometry = 0x878;
            static constexpr std::uintptr_t FireOffset = 0x880;
            static constexpr std::uintptr_t ActivationNoiseRange = 0x898;
            static constexpr std::uintptr_t ImpactNoiseRange = 0x89C;
            static constexpr std::uintptr_t ActivationNoiseLoudness = 0x8A0;
            static constexpr std::uintptr_t ImpactNoiseLoudness = 0x8A4;
            static constexpr std::uintptr_t ProhibitedTargetTags = 0x8A8;
            static constexpr std::uintptr_t bLeadPawnTargets = 0x8C9;
            static constexpr std::uintptr_t DesiredThrowAngle = 0x8CC;
            static constexpr std::uintptr_t MaxYawAngleToFire = 0x8D0;
            static constexpr std::uintptr_t bClampMaxYawAngleToFire = 0x8D4;
            static constexpr std::uintptr_t bUseTargetActorLocation = 0x8D5;
            static constexpr std::uintptr_t InitialAccuracyMax = 0x8D8;
            static constexpr std::uintptr_t InitialAccuracyMin = 0x8DC;
            static constexpr std::uintptr_t TargetAccuracyMax = 0x8E0;
            static constexpr std::uintptr_t TargetAccuracyMin = 0x8E4;
            static constexpr std::uintptr_t MinAccuracyDistance = 0x8E8;
            static constexpr std::uintptr_t MaxAccuracyDistance = 0x8EC;
            static constexpr std::uintptr_t AccuracyDistanceMultiplier = 0x8F0;
            static constexpr std::uintptr_t NumUsesToReachTargetAccuracy = 0x8F4;
            static constexpr std::uintptr_t UseCount = 0x8F8;
            static constexpr std::uintptr_t bIsMobileToggle = 0x8FC;
            static constexpr std::uintptr_t bActivateIfTagsAlreadyPresent = 0x8FD;
            static constexpr std::uintptr_t GameplayAbilityBehaviorDistanceData = 0x908;
            static constexpr std::uintptr_t MontageInfo = 0x978;
            static constexpr std::uintptr_t PreviousMontageInfo = 0x9D0;
            static constexpr std::uintptr_t ModList = 0xA28;
            static constexpr std::uintptr_t AbilityWeapon = 0xA38;
            static constexpr std::uintptr_t DisplayName = 0xA40;
            static constexpr std::uintptr_t Description = 0xA50;
            static constexpr std::uintptr_t SmallPreviewImageOverride = 0xA68;
            static constexpr std::uintptr_t ChargeStartTime = 0xA80;
            static constexpr std::uintptr_t ChargeState = 0xA88;
            static constexpr std::uintptr_t ToolTip = 0xAD0;
            static constexpr std::uintptr_t StatList = 0xAD8;
            static constexpr std::uintptr_t ActorTrackingSettings = 0xAE8;
            static constexpr std::uintptr_t AnalyticsTags = 0xB10;
            static constexpr std::uintptr_t TagChangedActions = 0xB30;
        };

        inline static constexpr std::array<PropertyInfo, 76> Properties{{
            {"ActivationType", 0x3A8, "EnumProperty"},
            {"EffectContainers", 0x3B0, "StructProperty"},
            {"GameplayEffectContainers", 0x748, "ArrayProperty"},
            {"DynamicGameplayEffectContainers", 0x758, "MapProperty"},
            {"OwnerPreviewImageOverrideTags", 0x768, "StructProperty"},
            {"ProjectileClass", 0x788, "ClassProperty"},
            {"bAllowBlueprintReplicatedVariables", 0x790, "BoolProperty"},
            {"DamageStatHandle", 0x798, "StructProperty"},
            {"AbilityCosts", 0x7A8, "ArrayProperty"},
            {"Costs", 0x7B8, "ArrayProperty"},
            {"bApplyingCostsEnabled", 0x7C8, "BoolProperty"},
            {"bShowWidgetForCosts", 0x7C8, "BoolProperty"},
            {"MovementCancellationLeashLength", 0x7D0, "StructProperty"},
            {"ExplicitCooldownDuration", 0x7F8, "StructProperty"},
            {"ExplicitCooldownTags", 0x820, "StructProperty"},
            {"ExplicitCooldownAssetTags", 0x840, "StructProperty"},
            {"CustomFiringSequenceLength", 0x860, "ByteProperty"},
            {"bDisableMoveCombining", 0x864, "BoolProperty"},
            {"bIgnoreClientActivationAttempts", 0x864, "BoolProperty"},
            {"bPersistOnDeath", 0x864, "BoolProperty"},
            {"bRequireServerTimeValidationPass", 0x864, "BoolProperty"},
            {"bRequireServerValidationPass", 0x864, "BoolProperty"},
            {"bStartWithCooldown", 0x864, "BoolProperty"},
            {"bStopsAIBehaviorLogic", 0x864, "BoolProperty"},
            {"bStopsAIMovement", 0x864, "BoolProperty"},
            {"bForceNormalAILOD", 0x865, "BoolProperty"},
            {"bStopsRVOAvoidance", 0x865, "BoolProperty"},
            {"MinimumRequiredAILODLevel", 0x868, "EnumProperty"},
            {"bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests", 0x86C, "BoolProperty"},
            {"bAcceptTargetActorVehicleForCanHitTests", 0x86C, "BoolProperty"},
            {"bRelevantForAIDespawning", 0x86C, "BoolProperty"},
            {"bUseOwnerInstigatorAsInstigator", 0x86C, "BoolProperty"},
            {"bUseTetheredPawnAsInstigator", 0x86C, "BoolProperty"},
            {"bUseAIFireLocationAndRotation", 0x86D, "BoolProperty"},
            {"AIWeaponUsage", 0x870, "EnumProperty"},
            {"WeaponTestApplicationTag", 0x874, "StructProperty"},
            {"bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling", 0x878, "BoolProperty"},
            {"bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast", 0x878, "BoolProperty"},
            {"bVerifyFireOffsetIsNotObstructedByWorldGeometry", 0x878, "BoolProperty"},
            {"FireOffset", 0x880, "StructProperty"},
            {"ActivationNoiseRange", 0x898, "FloatProperty"},
            {"ImpactNoiseRange", 0x89C, "FloatProperty"},
            {"ActivationNoiseLoudness", 0x8A0, "FloatProperty"},
            {"ImpactNoiseLoudness", 0x8A4, "FloatProperty"},
            {"ProhibitedTargetTags", 0x8A8, "StructProperty"},
            {"bLeadPawnTargets", 0x8C9, "BoolProperty"},
            {"DesiredThrowAngle", 0x8CC, "FloatProperty"},
            {"MaxYawAngleToFire", 0x8D0, "FloatProperty"},
            {"bClampMaxYawAngleToFire", 0x8D4, "BoolProperty"},
            {"bUseTargetActorLocation", 0x8D5, "BoolProperty"},
            {"InitialAccuracyMax", 0x8D8, "FloatProperty"},
            {"InitialAccuracyMin", 0x8DC, "FloatProperty"},
            {"TargetAccuracyMax", 0x8E0, "FloatProperty"},
            {"TargetAccuracyMin", 0x8E4, "FloatProperty"},
            {"MinAccuracyDistance", 0x8E8, "FloatProperty"},
            {"MaxAccuracyDistance", 0x8EC, "FloatProperty"},
            {"AccuracyDistanceMultiplier", 0x8F0, "FloatProperty"},
            {"NumUsesToReachTargetAccuracy", 0x8F4, "IntProperty"},
            {"UseCount", 0x8F8, "IntProperty"},
            {"bIsMobileToggle", 0x8FC, "BoolProperty"},
            {"bActivateIfTagsAlreadyPresent", 0x8FD, "BoolProperty"},
            {"GameplayAbilityBehaviorDistanceData", 0x908, "ArrayProperty"},
            {"MontageInfo", 0x978, "StructProperty"},
            {"PreviousMontageInfo", 0x9D0, "StructProperty"},
            {"ModList", 0xA28, "ArrayProperty"},
            {"AbilityWeapon", 0xA38, "ObjectProperty"},
            {"DisplayName", 0xA40, "TextProperty"},
            {"Description", 0xA50, "TextProperty"},
            {"SmallPreviewImageOverride", 0xA68, "ObjectProperty"},
            {"ChargeStartTime", 0xA80, "FloatProperty"},
            {"ChargeState", 0xA88, "EnumProperty"},
            {"ToolTip", 0xAD0, "ClassProperty"},
            {"StatList", 0xAD8, "ObjectProperty"},
            {"ActorTrackingSettings", 0xAE8, "StructProperty"},
            {"AnalyticsTags", 0xB10, "StructProperty"},
            {"TagChangedActions", 0xB30, "ArrayProperty"},
        }};
    };

    struct FortMovementMode_ChapWormSprint
    {
        static constexpr std::string_view Name = "FortMovementMode_ChapWormSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ELTacSprint";
        struct Offsets
        {
            static constexpr std::uintptr_t GrantedGameplayEffect = 0x5F0;
            static constexpr std::uintptr_t SprintThresholdGameplayTag = 0x5F8;
            static constexpr std::uintptr_t SprintThresholdSpeedMultiplier = 0x600;
            static constexpr std::uintptr_t SprintThresholdOverpowerSpeedMultiplier = 0x628;
            static constexpr std::uintptr_t OverpowerGameplayTag = 0x650;
            static constexpr std::uintptr_t OverpowerSpeedMultiplier = 0x658;
            static constexpr std::uintptr_t OverpowerJumpHeightMultiplier = 0x680;
            static constexpr std::uintptr_t GrantedGameplayEffectHandle = 0x6A8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GrantedGameplayEffect", 0x5F0, "ClassProperty"},
            {"SprintThresholdGameplayTag", 0x5F8, "StructProperty"},
            {"SprintThresholdSpeedMultiplier", 0x600, "StructProperty"},
            {"SprintThresholdOverpowerSpeedMultiplier", 0x628, "StructProperty"},
            {"OverpowerGameplayTag", 0x650, "StructProperty"},
            {"OverpowerSpeedMultiplier", 0x658, "StructProperty"},
            {"OverpowerJumpHeightMultiplier", 0x680, "StructProperty"},
            {"GrantedGameplayEffectHandle", 0x6A8, "StructProperty"},
        }};
    };

}
