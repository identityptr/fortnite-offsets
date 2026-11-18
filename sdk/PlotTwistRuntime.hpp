#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PlotTwistRuntime
{
    struct FortContextualTutorialDefinition_EquipWeaponAndAugment
    {
        static constexpr std::string_view Name = "FortContextualTutorialDefinition_EquipWeaponAndAugment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortContextualTutorialDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t TemplateIDs = 0xF0;
            static constexpr std::uintptr_t AugmentItemTags = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TemplateIDs", 0xF0, "ArrayProperty"},
            {"AugmentItemTags", 0x100, "StructProperty"},
        }};
    };

    struct FortContextualTutorial_NoLearnedForcePowers
    {
        static constexpr std::string_view Name = "FortContextualTutorial_NoLearnedForcePowers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortContextualTutorial";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakMarkerActor = 0xD8;
            static constexpr std::uintptr_t MarkerText = 0xE0;
            static constexpr std::uintptr_t MarkerHighlightComponent = 0xF0;
            static constexpr std::uintptr_t TutorialDefinition = 0xF8;
            static constexpr std::uintptr_t OwnerController = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WeakMarkerActor", 0xD8, "WeakObjectProperty"},
            {"MarkerText", 0xE0, "TextProperty"},
            {"MarkerHighlightComponent", 0xF0, "WeakObjectProperty"},
            {"TutorialDefinition", 0xF8, "ObjectProperty"},
            {"OwnerController", 0x108, "ObjectProperty"},
        }};
    };

    struct PlotTwistCheatManager
    {
        static constexpr std::string_view Name = "PlotTwistCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t WhiteRiftGateClass = 0x28;
            static constexpr std::uintptr_t PushRiftGateClass = 0x30;
            static constexpr std::uintptr_t PullRiftGateClass = 0x38;
            static constexpr std::uintptr_t ThrowRiftGateClass = 0x40;
            static constexpr std::uintptr_t LightningRiftGateClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WhiteRiftGateClass", 0x28, "ClassProperty"},
            {"PushRiftGateClass", 0x30, "ClassProperty"},
            {"PullRiftGateClass", 0x38, "ClassProperty"},
            {"ThrowRiftGateClass", 0x40, "ClassProperty"},
            {"LightningRiftGateClass", 0x48, "ClassProperty"},
        }};
    };

    struct PlotTwistForcePowersAbility
    {
        static constexpr std::string_view Name = "PlotTwistForcePowersAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_Action";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionName = 0xB40;
            static constexpr std::uintptr_t ExtraActionNames = 0xB48;
            static constexpr std::uintptr_t EnhancedInputActionsToBind = 0xB58;
            static constexpr std::uintptr_t bActivateOnInputPress = 0xB88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActionName", 0xB40, "NameProperty"},
            {"ExtraActionNames", 0xB48, "ArrayProperty"},
            {"EnhancedInputActionsToBind", 0xB58, "MapProperty"},
            {"bActivateOnInputPress", 0xB88, "BoolProperty"},
        }};
    };

    struct PlotTwistForcePowersInput
    {
        static constexpr std::string_view Name = "PlotTwistForcePowersInput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInputComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedKeyToActionInfo = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedKeyToActionInfo", 0x130, "ArrayProperty"},
        }};
    };

    struct PlotTwistForcePowersProjectileAbility
    {
        static constexpr std::string_view Name = "PlotTwistForcePowersProjectileAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlotTwistForcePowersAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectileQuery = 0xB90;
            static constexpr std::uintptr_t NativeGCCast = 0xB98;
            static constexpr std::uintptr_t NativeGCHeldActor = 0xB9C;
            static constexpr std::uintptr_t NativeTagGCThrow = 0xBA0;
            static constexpr std::uintptr_t NativeMontageIntro = 0xBA8;
            static constexpr std::uintptr_t NativeMontageIntroNoRootMotion = 0xBB0;
            static constexpr std::uintptr_t NativeMontageOutro = 0xBB8;
            static constexpr std::uintptr_t NativeMontageOutroNoRootMotion = 0xBC0;
            static constexpr std::uintptr_t NativeProjectile = 0xC28;
            static constexpr std::uintptr_t NativeProjectileWood = 0xC30;
            static constexpr std::uintptr_t NativeProjectileGravityScale = 0xC38;
            static constexpr std::uintptr_t NativeProjectileSpawnDistance = 0xC68;
            static constexpr std::uintptr_t NativeEnergyCost = 0xC98;
            static constexpr std::uintptr_t NativeMinEnergyToActivate = 0xCC8;
            static constexpr std::uintptr_t NativeSizeExcludeSmallerThan = 0xCF4;
            static constexpr std::uintptr_t NativeTagsExcludeFromHeldActors = 0xCF8;
            static constexpr std::uintptr_t NativeMaxObjectDiameterLimit = 0xD18;
            static constexpr std::uintptr_t NativeIncludeVehicles = 0xD48;
            static constexpr std::uintptr_t NativeTagsIsVehicle = 0xD78;
            static constexpr std::uintptr_t NativeIncludeHighPriorityPhysicsObjects = 0xD98;
            static constexpr std::uintptr_t NativeTagsIsHighPriorityPhysicsObject = 0xDC8;
            static constexpr std::uintptr_t NativeIncludeGeneralPhysicsObjects = 0xDE8;
            static constexpr std::uintptr_t NativePhysicsObjectRotationRateMin = 0xE18;
            static constexpr std::uintptr_t NativePhysicsObjectRotationRateMax = 0xE48;
            static constexpr std::uintptr_t NativeVehicleRotationRateMin = 0xE78;
            static constexpr std::uintptr_t NativeVehicleRotationRateMax = 0xEA8;
            static constexpr std::uintptr_t NativeAngularDampingVehicle = 0xED8;
            static constexpr std::uintptr_t NativeAngularDampingPhysics = 0xF08;
            static constexpr std::uintptr_t NativeHeldActorsUpdateInterval = 0xF38;
            static constexpr std::uintptr_t NativeHeldActorsUpdateVelocityMult = 0xF68;
            static constexpr std::uintptr_t NativeIdleLocationsArcAngle = 0xF98;
            static constexpr std::uintptr_t NativeIdleLocationsDistance = 0xFC8;
            static constexpr std::uintptr_t NativeIdleLocationsHeight = 0xFF8;
            static constexpr std::uintptr_t NativeThrowSpeedVehicle = 0x1028;
            static constexpr std::uintptr_t NativeThrowSpeedPhysicsObject = 0x1058;
            static constexpr std::uintptr_t NativeThrowSpeedProjectile = 0x1088;
            static constexpr std::uintptr_t NativeLaunchAngle = 0x10B8;
            static constexpr std::uintptr_t NativeMaxZVelocityProjectile = 0x10E8;
            static constexpr std::uintptr_t NativeMaxZVelocityVehicle = 0x1118;
            static constexpr std::uintptr_t NativeMaxZVelocityPhysicsObject = 0x1148;
            static constexpr std::uintptr_t NativePhysicsObjectThrownRotationRateMin = 0x1178;
            static constexpr std::uintptr_t NativePhysicsObjectThrownRotationRateMax = 0x11A8;
            static constexpr std::uintptr_t NativeVehicleThrownRotationRateMin = 0x11D8;
            static constexpr std::uintptr_t NativeVehicleThrownRotationRateMax = 0x1208;
            static constexpr std::uintptr_t NativeDestroyBlockingObjects = 0x1238;
            static constexpr std::uintptr_t NativeObjectTypesDestroyObjectsInArea = 0x1268;
            static constexpr std::uintptr_t NativeTagsExcludeFromDestroyObjectsInArea = 0x1278;
            static constexpr std::uintptr_t NativeBuildingExclusionHalfWidth = 0x1298;
            static constexpr std::uintptr_t NativeBuildingExclusionHalfHeight = 0x12C8;
            static constexpr std::uintptr_t NativeDestroyObjectsInAreaOffsetHeight = 0x12F8;
            static constexpr std::uintptr_t NativeDestroyActorsOverlappingSpawnedProjectiles = 0x1328;
            static constexpr std::uintptr_t NativeTagsIsBuilding = 0x1358;
            static constexpr std::uintptr_t NativeObjectTypesBuilds = 0x1378;
            static constexpr std::uintptr_t NativeDestroyObjectsInAreaHeight = 0x1388;
            static constexpr std::uintptr_t NativeGEDamageBuildAtProjectileSpawn = 0x13B8;
            static constexpr std::uintptr_t NativeBuildDamageAtProjectileSpawnPercentCurrentHealth = 0x13C0;
            static constexpr std::uintptr_t NativeBuildDamageAtProjectileSpawnMin = 0x13F0;
            static constexpr std::uintptr_t NativeUseAdjustedTargetLocation = 0x1420;
            static constexpr std::uintptr_t NativeTargetAdjustUseAngleChanceNegative = 0x1450;
            static constexpr std::uintptr_t NativeTargetAdjustChanceNegative = 0x1480;
            static constexpr std::uintptr_t NativeOffsetMaxHalfAngle = 0x14B0;
            static constexpr std::uintptr_t NativeOffsetDistanceMin = 0x14E0;
            static constexpr std::uintptr_t NativeOffsetDistanceMax = 0x1510;
            static constexpr std::uintptr_t NativeUseAimAngleOffset = 0x1540;
            static constexpr std::uintptr_t NativePitchOffsetMin = 0x1570;
            static constexpr std::uintptr_t NativePitchOffsetMax = 0x15A0;
            static constexpr std::uintptr_t NativeAngleOffsetChanceNegative = 0x15D0;
            static constexpr std::uintptr_t NativeYawOffsetMin = 0x1600;
            static constexpr std::uintptr_t NativeYawOffsetMax = 0x1630;
            static constexpr std::uintptr_t NativePitchOffsetNegMin = 0x1660;
            static constexpr std::uintptr_t NativePitchOffsetNegMax = 0x1690;
            static constexpr std::uintptr_t NativeYawOffsetNegMin = 0x16C0;
            static constexpr std::uintptr_t NativeYawOffsetNegMax = 0x16F0;
            static constexpr std::uintptr_t NativeUseActorTargeting = 0x1720;
            static constexpr std::uintptr_t NativeActorTargetingDistance = 0x1750;
            static constexpr std::uintptr_t NativeActorTargetingAngle = 0x1780;
            static constexpr std::uintptr_t NativeActorTargetingGroundCheckHeight = 0x17B0;
            static constexpr std::uintptr_t NativeTargetDistance = 0x17E0;
            static constexpr std::uintptr_t NativeShuffleProjectileAimAdjustments = 0x1810;
            static constexpr std::uintptr_t NativeThrowDelay = 0x1840;
            static constexpr std::uintptr_t NativeThrowAnimDurationOffset = 0x1870;
            static constexpr std::uintptr_t NativeAbilityTotalDuration = 0x18A0;
            static constexpr std::uintptr_t NativeThrowInterval = 0x18D0;
            static constexpr std::uintptr_t NativeHeldVehicleInitialZImpulse = 0x1900;
            static constexpr std::uintptr_t NativeProjectileCount = 0x1930;
            static constexpr std::uintptr_t NativeSpawnProjectilesFromDestroyedObjects = 0x1960;
            static constexpr std::uintptr_t NativeEnableWoodProjectiles = 0x1990;
            static constexpr std::uintptr_t NativeSpawnDirection = 0x19C0;
            static constexpr std::uintptr_t NativeAdditionalProjectilesToSpawn = 0x19F8;
            static constexpr std::uintptr_t NativeSortedSizeList = 0x1B60;
            static constexpr std::uintptr_t NativeActorToModify = 0x1B70;
            static constexpr std::uintptr_t NativeClosestActorToSpawnPoint = 0x1C3C;
            static constexpr std::uintptr_t NativePlayerPawn = 0x1C48;
            static constexpr std::uintptr_t NativePlayerController = 0x1C68;
            static constexpr std::uintptr_t NativeTagsAddedToHeldActors = 0x1C88;
            static constexpr std::uintptr_t NativeGEThrownActor = 0x1CA8;
            static constexpr std::uintptr_t NativeGEIgniteExplosive = 0x1CB0;
            static constexpr std::uintptr_t NativeTagExplosiveObject = 0x1CB8;
            static constexpr std::uintptr_t NativeGEHeldActor = 0x1CC0;
            static constexpr std::uintptr_t NativeEventTagThrow = 0x1CC8;
            static constexpr std::uintptr_t NativeGEMoveSpeedWhileCasting = 0x1CD0;
            static constexpr std::uintptr_t NativeGEPreventMove = 0x1CD8;
            static constexpr std::uintptr_t NativeTagsMoveSpeedWhileCasting = 0x1CE0;
            static constexpr std::uintptr_t NativeTagsPreventMove = 0x1D00;
            static constexpr std::uintptr_t NativeHolsterID = 0x1D20;
            static constexpr std::uintptr_t NativeTagNotifyEndAbility = 0x1D24;
            static constexpr std::uintptr_t NativeObjectTypesAimPointVsTargetedActor = 0x1D28;
            static constexpr std::uintptr_t NativeGEUICooldown = 0x1D38;
            static constexpr std::uintptr_t NativeTagsHUDElementsToHide = 0x1D40;
            static constexpr std::uintptr_t NativeHideHUDElementsReason = 0x1D60;
            static constexpr std::uintptr_t NativeTagFailedToActivateNoThrowableActors = 0x1D68;
            static constexpr std::uintptr_t NativeTacticalSprintEnergyComponent = 0x1D88;
            static constexpr std::uintptr_t NativeTagsNoRootMotion = 0x1D90;
            static constexpr std::uintptr_t NativeProjectileSphereTraceRadius = 0x1DB0;
            static constexpr std::uintptr_t RiftGateForceProjectile = 0x1DB8;
            static constexpr std::uintptr_t NativeTagBuilding = 0x1DC0;
            static constexpr std::uintptr_t NativeTagPhysicsObject = 0x1DC4;
            static constexpr std::uintptr_t RiftGateProjectileHalfHeight = 0x1DC8;
            static constexpr std::uintptr_t RiftGateProjectileRadius = 0x1DCC;
            static constexpr std::uintptr_t NativeDefaultGravity = 0x1DD0;
            static constexpr std::uintptr_t NativeDefaultGravityVehicle = 0x1DD4;
            static constexpr std::uintptr_t NativeGEUseAimOffset = 0x1DD8;
            static constexpr std::uintptr_t NativeTagsUseAimOffset = 0x1DE0;
            static constexpr std::uintptr_t NativeVehicleGravityMult = 0x1E00;
            static constexpr std::uintptr_t ForceThrowDenyList = 0x1EF0;
        };

        inline static constexpr std::array<PropertyInfo, 125> Properties{{
            {"ProjectileQuery", 0xB90, "ObjectProperty"},
            {"NativeGCCast", 0xB98, "StructProperty"},
            {"NativeGCHeldActor", 0xB9C, "StructProperty"},
            {"NativeTagGCThrow", 0xBA0, "StructProperty"},
            {"NativeMontageIntro", 0xBA8, "ObjectProperty"},
            {"NativeMontageIntroNoRootMotion", 0xBB0, "ObjectProperty"},
            {"NativeMontageOutro", 0xBB8, "ObjectProperty"},
            {"NativeMontageOutroNoRootMotion", 0xBC0, "ObjectProperty"},
            {"NativeProjectile", 0xC28, "ClassProperty"},
            {"NativeProjectileWood", 0xC30, "ClassProperty"},
            {"NativeProjectileGravityScale", 0xC38, "StructProperty"},
            {"NativeProjectileSpawnDistance", 0xC68, "StructProperty"},
            {"NativeEnergyCost", 0xC98, "StructProperty"},
            {"NativeMinEnergyToActivate", 0xCC8, "StructProperty"},
            {"NativeSizeExcludeSmallerThan", 0xCF4, "EnumProperty"},
            {"NativeTagsExcludeFromHeldActors", 0xCF8, "StructProperty"},
            {"NativeMaxObjectDiameterLimit", 0xD18, "StructProperty"},
            {"NativeIncludeVehicles", 0xD48, "StructProperty"},
            {"NativeTagsIsVehicle", 0xD78, "StructProperty"},
            {"NativeIncludeHighPriorityPhysicsObjects", 0xD98, "StructProperty"},
            {"NativeTagsIsHighPriorityPhysicsObject", 0xDC8, "StructProperty"},
            {"NativeIncludeGeneralPhysicsObjects", 0xDE8, "StructProperty"},
            {"NativePhysicsObjectRotationRateMin", 0xE18, "StructProperty"},
            {"NativePhysicsObjectRotationRateMax", 0xE48, "StructProperty"},
            {"NativeVehicleRotationRateMin", 0xE78, "StructProperty"},
            {"NativeVehicleRotationRateMax", 0xEA8, "StructProperty"},
            {"NativeAngularDampingVehicle", 0xED8, "StructProperty"},
            {"NativeAngularDampingPhysics", 0xF08, "StructProperty"},
            {"NativeHeldActorsUpdateInterval", 0xF38, "StructProperty"},
            {"NativeHeldActorsUpdateVelocityMult", 0xF68, "StructProperty"},
            {"NativeIdleLocationsArcAngle", 0xF98, "StructProperty"},
            {"NativeIdleLocationsDistance", 0xFC8, "StructProperty"},
            {"NativeIdleLocationsHeight", 0xFF8, "StructProperty"},
            {"NativeThrowSpeedVehicle", 0x1028, "StructProperty"},
            {"NativeThrowSpeedPhysicsObject", 0x1058, "StructProperty"},
            {"NativeThrowSpeedProjectile", 0x1088, "StructProperty"},
            {"NativeLaunchAngle", 0x10B8, "StructProperty"},
            {"NativeMaxZVelocityProjectile", 0x10E8, "StructProperty"},
            {"NativeMaxZVelocityVehicle", 0x1118, "StructProperty"},
            {"NativeMaxZVelocityPhysicsObject", 0x1148, "StructProperty"},
            {"NativePhysicsObjectThrownRotationRateMin", 0x1178, "StructProperty"},
            {"NativePhysicsObjectThrownRotationRateMax", 0x11A8, "StructProperty"},
            {"NativeVehicleThrownRotationRateMin", 0x11D8, "StructProperty"},
            {"NativeVehicleThrownRotationRateMax", 0x1208, "StructProperty"},
            {"NativeDestroyBlockingObjects", 0x1238, "StructProperty"},
            {"NativeObjectTypesDestroyObjectsInArea", 0x1268, "ArrayProperty"},
            {"NativeTagsExcludeFromDestroyObjectsInArea", 0x1278, "StructProperty"},
            {"NativeBuildingExclusionHalfWidth", 0x1298, "StructProperty"},
            {"NativeBuildingExclusionHalfHeight", 0x12C8, "StructProperty"},
            {"NativeDestroyObjectsInAreaOffsetHeight", 0x12F8, "StructProperty"},
            {"NativeDestroyActorsOverlappingSpawnedProjectiles", 0x1328, "StructProperty"},
            {"NativeTagsIsBuilding", 0x1358, "StructProperty"},
            {"NativeObjectTypesBuilds", 0x1378, "ArrayProperty"},
            {"NativeDestroyObjectsInAreaHeight", 0x1388, "StructProperty"},
            {"NativeGEDamageBuildAtProjectileSpawn", 0x13B8, "ClassProperty"},
            {"NativeBuildDamageAtProjectileSpawnPercentCurrentHealth", 0x13C0, "StructProperty"},
            {"NativeBuildDamageAtProjectileSpawnMin", 0x13F0, "StructProperty"},
            {"NativeUseAdjustedTargetLocation", 0x1420, "StructProperty"},
            {"NativeTargetAdjustUseAngleChanceNegative", 0x1450, "StructProperty"},
            {"NativeTargetAdjustChanceNegative", 0x1480, "StructProperty"},
            {"NativeOffsetMaxHalfAngle", 0x14B0, "StructProperty"},
            {"NativeOffsetDistanceMin", 0x14E0, "StructProperty"},
            {"NativeOffsetDistanceMax", 0x1510, "StructProperty"},
            {"NativeUseAimAngleOffset", 0x1540, "StructProperty"},
            {"NativePitchOffsetMin", 0x1570, "StructProperty"},
            {"NativePitchOffsetMax", 0x15A0, "StructProperty"},
            {"NativeAngleOffsetChanceNegative", 0x15D0, "StructProperty"},
            {"NativeYawOffsetMin", 0x1600, "StructProperty"},
            {"NativeYawOffsetMax", 0x1630, "StructProperty"},
            {"NativePitchOffsetNegMin", 0x1660, "StructProperty"},
            {"NativePitchOffsetNegMax", 0x1690, "StructProperty"},
            {"NativeYawOffsetNegMin", 0x16C0, "StructProperty"},
            {"NativeYawOffsetNegMax", 0x16F0, "StructProperty"},
            {"NativeUseActorTargeting", 0x1720, "StructProperty"},
            {"NativeActorTargetingDistance", 0x1750, "StructProperty"},
            {"NativeActorTargetingAngle", 0x1780, "StructProperty"},
            {"NativeActorTargetingGroundCheckHeight", 0x17B0, "StructProperty"},
            {"NativeTargetDistance", 0x17E0, "StructProperty"},
            {"NativeShuffleProjectileAimAdjustments", 0x1810, "StructProperty"},
            {"NativeThrowDelay", 0x1840, "StructProperty"},
            {"NativeThrowAnimDurationOffset", 0x1870, "StructProperty"},
            {"NativeAbilityTotalDuration", 0x18A0, "StructProperty"},
            {"NativeThrowInterval", 0x18D0, "StructProperty"},
            {"NativeHeldVehicleInitialZImpulse", 0x1900, "StructProperty"},
            {"NativeProjectileCount", 0x1930, "StructProperty"},
            {"NativeSpawnProjectilesFromDestroyedObjects", 0x1960, "StructProperty"},
            {"NativeEnableWoodProjectiles", 0x1990, "StructProperty"},
            {"NativeSpawnDirection", 0x19C0, "StructProperty"},
            {"NativeAdditionalProjectilesToSpawn", 0x19F8, "IntProperty"},
            {"NativeSortedSizeList", 0x1B60, "ArrayProperty"},
            {"NativeActorToModify", 0x1B70, "WeakObjectProperty"},
            {"NativeClosestActorToSpawnPoint", 0x1C3C, "WeakObjectProperty"},
            {"NativePlayerPawn", 0x1C48, "SoftObjectProperty"},
            {"NativePlayerController", 0x1C68, "SoftObjectProperty"},
            {"NativeTagsAddedToHeldActors", 0x1C88, "StructProperty"},
            {"NativeGEThrownActor", 0x1CA8, "ClassProperty"},
            {"NativeGEIgniteExplosive", 0x1CB0, "ClassProperty"},
            {"NativeTagExplosiveObject", 0x1CB8, "StructProperty"},
            {"NativeGEHeldActor", 0x1CC0, "ClassProperty"},
            {"NativeEventTagThrow", 0x1CC8, "StructProperty"},
            {"NativeGEMoveSpeedWhileCasting", 0x1CD0, "ClassProperty"},
            {"NativeGEPreventMove", 0x1CD8, "ClassProperty"},
            {"NativeTagsMoveSpeedWhileCasting", 0x1CE0, "StructProperty"},
            {"NativeTagsPreventMove", 0x1D00, "StructProperty"},
            {"NativeHolsterID", 0x1D20, "NameProperty"},
            {"NativeTagNotifyEndAbility", 0x1D24, "StructProperty"},
            {"NativeObjectTypesAimPointVsTargetedActor", 0x1D28, "ArrayProperty"},
            {"NativeGEUICooldown", 0x1D38, "ClassProperty"},
            {"NativeTagsHUDElementsToHide", 0x1D40, "StructProperty"},
            {"NativeHideHUDElementsReason", 0x1D60, "NameProperty"},
            {"NativeTagFailedToActivateNoThrowableActors", 0x1D68, "StructProperty"},
            {"NativeTacticalSprintEnergyComponent", 0x1D88, "ClassProperty"},
            {"NativeTagsNoRootMotion", 0x1D90, "StructProperty"},
            {"NativeProjectileSphereTraceRadius", 0x1DB0, "FloatProperty"},
            {"RiftGateForceProjectile", 0x1DB8, "ClassProperty"},
            {"NativeTagBuilding", 0x1DC0, "StructProperty"},
            {"NativeTagPhysicsObject", 0x1DC4, "StructProperty"},
            {"RiftGateProjectileHalfHeight", 0x1DC8, "FloatProperty"},
            {"RiftGateProjectileRadius", 0x1DCC, "FloatProperty"},
            {"NativeDefaultGravity", 0x1DD0, "FloatProperty"},
            {"NativeDefaultGravityVehicle", 0x1DD4, "FloatProperty"},
            {"NativeGEUseAimOffset", 0x1DD8, "ClassProperty"},
            {"NativeTagsUseAimOffset", 0x1DE0, "StructProperty"},
            {"NativeVehicleGravityMult", 0x1E00, "StructProperty"},
            {"ForceThrowDenyList", 0x1EF0, "ArrayProperty"},
        }};
    };

    struct PlotTwistForcePowersPushEventHandlerAbility
    {
        static constexpr std::string_view Name = "PlotTwistForcePowersPushEventHandlerAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeTargetingObjectTypesAll = 0xB40;
            static constexpr std::uintptr_t NativeTargetingObjectTypesBuilds = 0xB50;
            static constexpr std::uintptr_t NativeTargetingObjectTypesNonBuilds = 0xB60;
            static constexpr std::uintptr_t NativeTargetingTravelSpeed = 0xB70;
            static constexpr std::uintptr_t NativeTargetingInterval = 0xBA0;
            static constexpr std::uintptr_t NativeTargetingRangeMax = 0xBD0;
            static constexpr std::uintptr_t NativeTargetingRangeUseMaxSize = 0xC00;
            static constexpr std::uintptr_t NativeTargetingHalfWidthMin = 0xC30;
            static constexpr std::uintptr_t NativeTargetingHalfWidthMax = 0xC60;
            static constexpr std::uintptr_t NativeTargetingHalfHeightMin = 0xC90;
            static constexpr std::uintptr_t NativeTargetingHalfHeightMax = 0xCC0;
            static constexpr std::uintptr_t NativeTargetingBuildsHalfWidthMin = 0xCF0;
            static constexpr std::uintptr_t NativeTargetingBuildsHalfWidthMax = 0xD20;
            static constexpr std::uintptr_t NativeTargetingBuildsHalfHeightMin = 0xD50;
            static constexpr std::uintptr_t NativeTargetingBuildsHalfHeightMax = 0xD80;
            static constexpr std::uintptr_t NativeExclusionObjectTypes = 0xDB0;
            static constexpr std::uintptr_t NativeExclusionObjectTypesExperimental = 0xDC0;
            static constexpr std::uintptr_t NativeBuildingInclusionRange = 0xDD0;
            static constexpr std::uintptr_t NativeBuildingInclusionRangeStart = 0xE00;
            static constexpr std::uintptr_t NativeBuildingExclusionHeight = 0xE30;
            static constexpr std::uintptr_t NativeBuildingExclusionRadius = 0xE60;
            static constexpr std::uintptr_t NativeEnvDamageMin = 0xE90;
            static constexpr std::uintptr_t NativeEnvDamageMax = 0xEC0;
            static constexpr std::uintptr_t NativeDamageFalloffRangeMin = 0xEF0;
            static constexpr std::uintptr_t NativeDamageFalloffRangeMax = 0xF20;
            static constexpr std::uintptr_t NativeTagsExcludeFromThrownActors = 0xF50;
            static constexpr std::uintptr_t NativeMaxPhysicsActorsToThrow = 0xF70;
            static constexpr std::uintptr_t NativeVehiclesCountTowardsThrownActorLimit = 0xFA0;
            static constexpr std::uintptr_t NativeApplyBuildingEffectsToPhysicsActorsPastThrownActorLimit = 0xFD0;
            static constexpr std::uintptr_t NativeObjectsBlockLOS = 0x1000;
            static constexpr std::uintptr_t NativeLOSBlockingActorsDepthLimit = 0x1010;
            static constexpr std::uintptr_t NativeNonLOSBlockingActorsDepthLimit = 0x1040;
            static constexpr std::uintptr_t NativeDepthPenetrationEnvironmentDamageMult = 0x1070;
            static constexpr std::uintptr_t NativeEnableVsPlayers = 0x1098;
            static constexpr std::uintptr_t NativeEnableVsFriends = 0x10C8;
            static constexpr std::uintptr_t NativeEnableVsEnemies = 0x10F8;
            static constexpr std::uintptr_t NativeEnableVsDBNOFriends = 0x1128;
            static constexpr std::uintptr_t NativeEnableVsDBNOEnemies = 0x1158;
            static constexpr std::uintptr_t NativeEnableVsCreatures = 0x1188;
            static constexpr std::uintptr_t NativeEnableVsVehicles = 0x11B8;
            static constexpr std::uintptr_t NativeEnableVsPhysicsObjects = 0x11E8;
            static constexpr std::uintptr_t NativeEnableVsBuildings = 0x1218;
            static constexpr std::uintptr_t NativeEnableVsItemPickups = 0x1248;
            static constexpr std::uintptr_t NativeEnableVsProjectiles = 0x1278;
            static constexpr std::uintptr_t NativeGEDamage = 0x12A8;
            static constexpr std::uintptr_t NativeGEKnock = 0x12B0;
            static constexpr std::uintptr_t NativeGEThrownActor = 0x12B8;
            static constexpr std::uintptr_t NativeTagsPreventThrow = 0x12C0;
            static constexpr std::uintptr_t NativeTagsPreventDamage = 0x12E0;
            static constexpr std::uintptr_t NativeTagsPreventAllEffects = 0x1300;
            static constexpr std::uintptr_t NativeTagsPreventAllEffectsExperimental = 0x1320;
            static constexpr std::uintptr_t NativeIntervalsBeforeMaxSize = 0x1340;
            static constexpr std::uintptr_t NativeTravelDistancePerIntervalBeforeMaxSize = 0x1344;
            static constexpr std::uintptr_t NativeIntervalsAfterMaxSize = 0x1348;
            static constexpr std::uintptr_t NativeTravelDistancePerIntervalAfterMaxSize = 0x134C;
            static constexpr std::uintptr_t NativeHalfWidthGrowthPerInterval = 0x1350;
            static constexpr std::uintptr_t NativeHalfHeightGrowthPerInterval = 0x1354;
            static constexpr std::uintptr_t NativeTotalTargetingIntervals = 0x1358;
            static constexpr std::uintptr_t NativeCurrentTargetingInterval = 0x135C;
            static constexpr std::uintptr_t NativeCurrentHalfLength = 0x1360;
            static constexpr std::uintptr_t NativeCurrentHalfWidth = 0x1364;
            static constexpr std::uintptr_t NativeCurrentHalfHeight = 0x1368;
            static constexpr std::uintptr_t NativeTargetingLocationStart = 0x1370;
            static constexpr std::uintptr_t NativeTargetingRotation = 0x1388;
            static constexpr std::uintptr_t NativeTargetingLocationCurrent = 0x13A0;
            static constexpr std::uintptr_t NativeTimeStartTargetSelection = 0x13B8;
            static constexpr std::uintptr_t NativeHalfWidthGrowthPerIntervalBuilds = 0x13BC;
            static constexpr std::uintptr_t NativeHalfHeightGrowthPerIntervalBuilds = 0x13C0;
            static constexpr std::uintptr_t NativeCurrentHalfWidthBuilds = 0x13C4;
            static constexpr std::uintptr_t NativeCurrentHalfHeightBuilds = 0x13C8;
            static constexpr std::uintptr_t NativeActorsToInclude = 0x13D0;
            static constexpr std::uintptr_t NativeActorsToExclude = 0x13E0;
            static constexpr std::uintptr_t NativeUnsortedActorsToProcess = 0x13F0;
            static constexpr std::uintptr_t NativeProcessedActors = 0x1400;
            static constexpr std::uintptr_t NativeUnsortedPhysicsActorsToThrow = 0x1410;
            static constexpr std::uintptr_t NativeSortedPhysicsActorsToThrow = 0x1420;
            static constexpr std::uintptr_t NativeCurrentActorToProcess = 0x1430;
            static constexpr std::uintptr_t NativeLOSBlockingActorsToProcess = 0x1438;
            static constexpr std::uintptr_t NativeNonLOSBlockingActorsToProcess = 0x1448;
            static constexpr std::uintptr_t NativeMapLOSBlockingActorsToDepth = 0x1458;
            static constexpr std::uintptr_t NativeMapNonLOSBlockingActorsToDepth = 0x1468;
            static constexpr std::uintptr_t bNativeCurrentlyProcessingLOSBlockingActors = 0x1478;
            static constexpr std::uintptr_t NativeCurrentActorDepth = 0x147C;
            static constexpr std::uintptr_t NativeTagSetByCallerEnvironmentDamage = 0x1480;
            static constexpr std::uintptr_t NativePlayerPawn = 0x1484;
            static constexpr std::uintptr_t NativePlayerController = 0x148C;
            static constexpr std::uintptr_t NativeTagGCImpact = 0x1494;
            static constexpr std::uintptr_t NativeTagExplosiveObject = 0x1498;
            static constexpr std::uintptr_t NativeTagBuilding = 0x149C;
            static constexpr std::uintptr_t NativeTagPhysicsObject = 0x14A0;
            static constexpr std::uintptr_t NativeTagsBuildingPiece = 0x14A8;
            static constexpr std::uintptr_t NativeQuestTagsImpact = 0x14C8;
            static constexpr std::uintptr_t DamagedBuildingActors = 0x14F8;
            static constexpr std::uintptr_t ForcePushPullDenyList = 0x1510;
        };

        inline static constexpr std::array<PropertyInfo, 94> Properties{{
            {"NativeTargetingObjectTypesAll", 0xB40, "ArrayProperty"},
            {"NativeTargetingObjectTypesBuilds", 0xB50, "ArrayProperty"},
            {"NativeTargetingObjectTypesNonBuilds", 0xB60, "ArrayProperty"},
            {"NativeTargetingTravelSpeed", 0xB70, "StructProperty"},
            {"NativeTargetingInterval", 0xBA0, "StructProperty"},
            {"NativeTargetingRangeMax", 0xBD0, "StructProperty"},
            {"NativeTargetingRangeUseMaxSize", 0xC00, "StructProperty"},
            {"NativeTargetingHalfWidthMin", 0xC30, "StructProperty"},
            {"NativeTargetingHalfWidthMax", 0xC60, "StructProperty"},
            {"NativeTargetingHalfHeightMin", 0xC90, "StructProperty"},
            {"NativeTargetingHalfHeightMax", 0xCC0, "StructProperty"},
            {"NativeTargetingBuildsHalfWidthMin", 0xCF0, "StructProperty"},
            {"NativeTargetingBuildsHalfWidthMax", 0xD20, "StructProperty"},
            {"NativeTargetingBuildsHalfHeightMin", 0xD50, "StructProperty"},
            {"NativeTargetingBuildsHalfHeightMax", 0xD80, "StructProperty"},
            {"NativeExclusionObjectTypes", 0xDB0, "ArrayProperty"},
            {"NativeExclusionObjectTypesExperimental", 0xDC0, "ArrayProperty"},
            {"NativeBuildingInclusionRange", 0xDD0, "StructProperty"},
            {"NativeBuildingInclusionRangeStart", 0xE00, "StructProperty"},
            {"NativeBuildingExclusionHeight", 0xE30, "StructProperty"},
            {"NativeBuildingExclusionRadius", 0xE60, "StructProperty"},
            {"NativeEnvDamageMin", 0xE90, "StructProperty"},
            {"NativeEnvDamageMax", 0xEC0, "StructProperty"},
            {"NativeDamageFalloffRangeMin", 0xEF0, "StructProperty"},
            {"NativeDamageFalloffRangeMax", 0xF20, "StructProperty"},
            {"NativeTagsExcludeFromThrownActors", 0xF50, "StructProperty"},
            {"NativeMaxPhysicsActorsToThrow", 0xF70, "StructProperty"},
            {"NativeVehiclesCountTowardsThrownActorLimit", 0xFA0, "StructProperty"},
            {"NativeApplyBuildingEffectsToPhysicsActorsPastThrownActorLimit", 0xFD0, "StructProperty"},
            {"NativeObjectsBlockLOS", 0x1000, "ArrayProperty"},
            {"NativeLOSBlockingActorsDepthLimit", 0x1010, "StructProperty"},
            {"NativeNonLOSBlockingActorsDepthLimit", 0x1040, "StructProperty"},
            {"NativeDepthPenetrationEnvironmentDamageMult", 0x1070, "StructProperty"},
            {"NativeEnableVsPlayers", 0x1098, "StructProperty"},
            {"NativeEnableVsFriends", 0x10C8, "StructProperty"},
            {"NativeEnableVsEnemies", 0x10F8, "StructProperty"},
            {"NativeEnableVsDBNOFriends", 0x1128, "StructProperty"},
            {"NativeEnableVsDBNOEnemies", 0x1158, "StructProperty"},
            {"NativeEnableVsCreatures", 0x1188, "StructProperty"},
            {"NativeEnableVsVehicles", 0x11B8, "StructProperty"},
            {"NativeEnableVsPhysicsObjects", 0x11E8, "StructProperty"},
            {"NativeEnableVsBuildings", 0x1218, "StructProperty"},
            {"NativeEnableVsItemPickups", 0x1248, "StructProperty"},
            {"NativeEnableVsProjectiles", 0x1278, "StructProperty"},
            {"NativeGEDamage", 0x12A8, "ClassProperty"},
            {"NativeGEKnock", 0x12B0, "ClassProperty"},
            {"NativeGEThrownActor", 0x12B8, "ClassProperty"},
            {"NativeTagsPreventThrow", 0x12C0, "StructProperty"},
            {"NativeTagsPreventDamage", 0x12E0, "StructProperty"},
            {"NativeTagsPreventAllEffects", 0x1300, "StructProperty"},
            {"NativeTagsPreventAllEffectsExperimental", 0x1320, "StructProperty"},
            {"NativeIntervalsBeforeMaxSize", 0x1340, "IntProperty"},
            {"NativeTravelDistancePerIntervalBeforeMaxSize", 0x1344, "FloatProperty"},
            {"NativeIntervalsAfterMaxSize", 0x1348, "IntProperty"},
            {"NativeTravelDistancePerIntervalAfterMaxSize", 0x134C, "FloatProperty"},
            {"NativeHalfWidthGrowthPerInterval", 0x1350, "FloatProperty"},
            {"NativeHalfHeightGrowthPerInterval", 0x1354, "FloatProperty"},
            {"NativeTotalTargetingIntervals", 0x1358, "IntProperty"},
            {"NativeCurrentTargetingInterval", 0x135C, "IntProperty"},
            {"NativeCurrentHalfLength", 0x1360, "FloatProperty"},
            {"NativeCurrentHalfWidth", 0x1364, "FloatProperty"},
            {"NativeCurrentHalfHeight", 0x1368, "FloatProperty"},
            {"NativeTargetingLocationStart", 0x1370, "StructProperty"},
            {"NativeTargetingRotation", 0x1388, "StructProperty"},
            {"NativeTargetingLocationCurrent", 0x13A0, "StructProperty"},
            {"NativeTimeStartTargetSelection", 0x13B8, "FloatProperty"},
            {"NativeHalfWidthGrowthPerIntervalBuilds", 0x13BC, "FloatProperty"},
            {"NativeHalfHeightGrowthPerIntervalBuilds", 0x13C0, "FloatProperty"},
            {"NativeCurrentHalfWidthBuilds", 0x13C4, "FloatProperty"},
            {"NativeCurrentHalfHeightBuilds", 0x13C8, "FloatProperty"},
            {"NativeActorsToInclude", 0x13D0, "ArrayProperty"},
            {"NativeActorsToExclude", 0x13E0, "ArrayProperty"},
            {"NativeUnsortedActorsToProcess", 0x13F0, "ArrayProperty"},
            {"NativeProcessedActors", 0x1400, "ArrayProperty"},
            {"NativeUnsortedPhysicsActorsToThrow", 0x1410, "ArrayProperty"},
            {"NativeSortedPhysicsActorsToThrow", 0x1420, "ArrayProperty"},
            {"NativeCurrentActorToProcess", 0x1430, "ObjectProperty"},
            {"NativeLOSBlockingActorsToProcess", 0x1438, "ArrayProperty"},
            {"NativeNonLOSBlockingActorsToProcess", 0x1448, "ArrayProperty"},
            {"NativeMapLOSBlockingActorsToDepth", 0x1458, "MapProperty"},
            {"NativeMapNonLOSBlockingActorsToDepth", 0x1468, "MapProperty"},
            {"bNativeCurrentlyProcessingLOSBlockingActors", 0x1478, "BoolProperty"},
            {"NativeCurrentActorDepth", 0x147C, "IntProperty"},
            {"NativeTagSetByCallerEnvironmentDamage", 0x1480, "StructProperty"},
            {"NativePlayerPawn", 0x1484, "WeakObjectProperty"},
            {"NativePlayerController", 0x148C, "WeakObjectProperty"},
            {"NativeTagGCImpact", 0x1494, "StructProperty"},
            {"NativeTagExplosiveObject", 0x1498, "StructProperty"},
            {"NativeTagBuilding", 0x149C, "StructProperty"},
            {"NativeTagPhysicsObject", 0x14A0, "StructProperty"},
            {"NativeTagsBuildingPiece", 0x14A8, "StructProperty"},
            {"NativeQuestTagsImpact", 0x14C8, "StructProperty"},
            {"DamagedBuildingActors", 0x14F8, "ArrayProperty"},
            {"ForcePushPullDenyList", 0x1510, "ArrayProperty"},
        }};
    };

    struct PlotTwistForceProjectileBase
    {
        static constexpr std::string_view Name = "PlotTwistForceProjectileBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bNativeShouldPlaySpawnFX = 0xAF8;
            static constexpr std::uintptr_t bNativeShouldUseSpawnOffset = 0xAF9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bNativeShouldPlaySpawnFX", 0xAF8, "BoolProperty"},
            {"bNativeShouldUseSpawnOffset", 0xAF9, "BoolProperty"},
        }};
    };

    struct PlotTwistRiftGateConversationComponent
    {
        static constexpr std::string_view Name = "PlotTwistRiftGateConversationComponent";
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

    struct PlotTwistRiftGateEnterAbility
    {
        static constexpr std::string_view Name = "PlotTwistRiftGateEnterAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t WatchedPlayerController = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WatchedPlayerController", 0xB40, "ObjectProperty"},
        }};
    };

    struct RiftGateCinematicSequence
    {
        static constexpr std::string_view Name = "RiftGateCinematicSequence";
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

}
