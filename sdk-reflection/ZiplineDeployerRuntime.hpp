#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ZiplineDeployerRuntime
{
    struct FortGameplayAbility_ZiplineDeployer_PrimaryFire
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ZiplineDeployer_PrimaryFire";
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

    struct FortMovementMode_ZiplineDeployerMount
    {
        static constexpr std::string_view Name = "FortMovementMode_ZiplineDeployerMount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxMountTime = 0x5A0;
            static constexpr std::uintptr_t SmashImmuneTag = 0x5D0;
            static constexpr std::uintptr_t BuildingDeathReason = 0x5D4;
            static constexpr std::uintptr_t MoveIgnoredBuildings = 0x5D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxMountTime", 0x5A0, "StructProperty"},
            {"SmashImmuneTag", 0x5D0, "StructProperty"},
            {"BuildingDeathReason", 0x5D4, "StructProperty"},
            {"MoveIgnoredBuildings", 0x5D8, "ArrayProperty"},
        }};
    };

    struct FortMovementMode_ZiplineDeployerMountRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ZiplineDeployerMountRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_GuidedMotionRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t DeployDirection = 0x240;
            static constexpr std::uintptr_t DeployLocation = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DeployDirection", 0x240, "StructProperty"},
            {"DeployLocation", 0x258, "StructProperty"},
        }};
    };

    struct FortPawnComponent_ZiplineDeployer
    {
        static constexpr std::string_view Name = "FortPawnComponent_ZiplineDeployer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedProjectileShootLoc = 0xC8;
            static constexpr std::uintptr_t CachedProjectileShootDir = 0xE0;
            static constexpr std::uintptr_t CurrentHeightAboveWorld = 0xF8;
            static constexpr std::uintptr_t MaxAllowedDeployHeight = 0x100;
            static constexpr std::uintptr_t CachedStartingDeployOffsetZ = 0x108;
            static constexpr std::uintptr_t StartDroneSpawnOffsetZWhenCrouching = 0x110;
            static constexpr std::uintptr_t TagToEnableHeightCheck = 0x118;
            static constexpr std::uintptr_t HeightCheckInterval = 0x120;
            static constexpr std::uintptr_t HeightCheckTraceLength = 0x148;
            static constexpr std::uintptr_t EndingZiplineDeployHeightZ = 0x170;
            static constexpr std::uintptr_t DroneDeployRadius = 0x1A0;
            static constexpr std::uintptr_t ProjectileSpeed = 0x1D0;
            static constexpr std::uintptr_t TrajectoryExtraLifeSpan = 0x200;
            static constexpr std::uintptr_t AimPitchConstraint = 0x230;
            static constexpr std::uintptr_t DeployMinDistance = 0x260;
            static constexpr std::uintptr_t DeployMinHeightWhenFalling = 0x290;
            static constexpr std::uintptr_t EndingDeployHeightOffsetZ = 0x2C0;
            static constexpr std::uintptr_t AutoAttachEjectFromVehicle = 0x2F0;
            static constexpr std::uintptr_t ClampPitchForStartLoc = 0x320;
            static constexpr std::uintptr_t ClampPitchMaxRelativeHeight = 0x350;
            static constexpr std::uintptr_t ClampStartPitchUseMinConstraint = 0x380;
            static constexpr std::uintptr_t ClampEndPitchRelativeHeightForceHorizontal = 0x3B0;
            static constexpr std::uintptr_t ClampEndPitchCheckRelativeHeight = 0x3E0;
            static constexpr std::uintptr_t ClampEndPitchCheckMaxBuildHeight = 0x410;
            static constexpr std::uintptr_t ClampPitchProjectDistance = 0x440;
            static constexpr std::uintptr_t StartDroneSpawnZOffsetFromVehicle = 0x470;
            static constexpr std::uintptr_t StartDroneSpawnZOffset = 0x4A0;
            static constexpr std::uintptr_t ProjectileLifeSpan = 0x4D0;
            static constexpr std::uintptr_t ProjLifeSpanAdjustOnlyForUp = 0x500;
            static constexpr std::uintptr_t ProjLifeSpanAdjustPitchConstraint = 0x530;
            static constexpr std::uintptr_t ProjLifeSpanAdjustDelta = 0x560;
            static constexpr std::uintptr_t ProjectileExtent = 0x590;
            static constexpr std::uintptr_t bTraceComplexForSplineTrace = 0x594;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"CachedProjectileShootLoc", 0xC8, "StructProperty"},
            {"CachedProjectileShootDir", 0xE0, "StructProperty"},
            {"CurrentHeightAboveWorld", 0xF8, "FloatProperty"},
            {"MaxAllowedDeployHeight", 0x100, "DoubleProperty"},
            {"CachedStartingDeployOffsetZ", 0x108, "DoubleProperty"},
            {"StartDroneSpawnOffsetZWhenCrouching", 0x110, "DoubleProperty"},
            {"TagToEnableHeightCheck", 0x118, "StructProperty"},
            {"HeightCheckInterval", 0x120, "StructProperty"},
            {"HeightCheckTraceLength", 0x148, "StructProperty"},
            {"EndingZiplineDeployHeightZ", 0x170, "StructProperty"},
            {"DroneDeployRadius", 0x1A0, "StructProperty"},
            {"ProjectileSpeed", 0x1D0, "StructProperty"},
            {"TrajectoryExtraLifeSpan", 0x200, "StructProperty"},
            {"AimPitchConstraint", 0x230, "StructProperty"},
            {"DeployMinDistance", 0x260, "StructProperty"},
            {"DeployMinHeightWhenFalling", 0x290, "StructProperty"},
            {"EndingDeployHeightOffsetZ", 0x2C0, "StructProperty"},
            {"AutoAttachEjectFromVehicle", 0x2F0, "StructProperty"},
            {"ClampPitchForStartLoc", 0x320, "StructProperty"},
            {"ClampPitchMaxRelativeHeight", 0x350, "StructProperty"},
            {"ClampStartPitchUseMinConstraint", 0x380, "StructProperty"},
            {"ClampEndPitchRelativeHeightForceHorizontal", 0x3B0, "StructProperty"},
            {"ClampEndPitchCheckRelativeHeight", 0x3E0, "StructProperty"},
            {"ClampEndPitchCheckMaxBuildHeight", 0x410, "StructProperty"},
            {"ClampPitchProjectDistance", 0x440, "StructProperty"},
            {"StartDroneSpawnZOffsetFromVehicle", 0x470, "StructProperty"},
            {"StartDroneSpawnZOffset", 0x4A0, "StructProperty"},
            {"ProjectileLifeSpan", 0x4D0, "StructProperty"},
            {"ProjLifeSpanAdjustOnlyForUp", 0x500, "StructProperty"},
            {"ProjLifeSpanAdjustPitchConstraint", 0x530, "StructProperty"},
            {"ProjLifeSpanAdjustDelta", 0x560, "StructProperty"},
            {"ProjectileExtent", 0x590, "FloatProperty"},
            {"bTraceComplexForSplineTrace", 0x594, "BoolProperty"},
        }};
    };

    struct FortProjectileTrajectory_ZiplineDeployer
    {
        static constexpr std::string_view Name = "FortProjectileTrajectory_ZiplineDeployer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileTrajectory";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineMeshTargetableParameter = 0x2A0;
            static constexpr std::uintptr_t SplineMeshStartLocParameter = 0x2A4;
            static constexpr std::uintptr_t SplineMeshEndLocParameter = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SplineMeshTargetableParameter", 0x2A0, "NameProperty"},
            {"SplineMeshStartLocParameter", 0x2A4, "NameProperty"},
            {"SplineMeshEndLocParameter", 0x2A8, "NameProperty"},
        }};
    };

    struct FortProjectile_ZiplineDeployer
    {
        static constexpr std::string_view Name = "FortProjectile_ZiplineDeployer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EndingZiplineDeployHeightZ = 0xAF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EndingZiplineDeployHeightZ", 0xAF8, "StructProperty"},
        }};
    };

    struct ZiplineDeployerBlueprintLibrary
    {
        static constexpr std::string_view Name = "ZiplineDeployerBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ZiplineDeployerGunAnimInstance
    {
        static constexpr std::string_view Name = "ZiplineDeployerGunAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasAmmo = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHasAmmo", 0x350, "BoolProperty"},
        }};
    };

}
