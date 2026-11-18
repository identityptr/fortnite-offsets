#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ClusterLauncherRuntime
{
    struct FortGameplayAbility_ClusterLauncherBeam
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ClusterLauncherBeam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t BeamTraceCollisionChannel = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BeamTraceCollisionChannel", 0xB40, "ByteProperty"},
        }};
    };

    struct FortGameplayAbility_ClusterLauncherPrimary
    {
        static constexpr std::string_view Name = "FortGameplayAbility_ClusterLauncherPrimary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility_RangedWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t MissileProjectileClass = 0xB90;
            static constexpr std::uintptr_t MissileInitialSpeed = 0xB98;
            static constexpr std::uintptr_t MissileGravityScale = 0xBC0;
            static constexpr std::uintptr_t MissileChargePercent = 0xBE8;
            static constexpr std::uintptr_t SpawnedMissiles = 0xC10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MissileProjectileClass", 0xB90, "ClassProperty"},
            {"MissileInitialSpeed", 0xB98, "StructProperty"},
            {"MissileGravityScale", 0xBC0, "StructProperty"},
            {"MissileChargePercent", 0xBE8, "StructProperty"},
            {"SpawnedMissiles", 0xC10, "ArrayProperty"},
        }};
    };

    struct FortProjectileAthena_ClusterLauncher
    {
        static constexpr std::string_view Name = "FortProjectileAthena_ClusterLauncher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnHitResults = 0xB18;
            static constexpr std::uintptr_t FireStartLoc = 0xB30;
            static constexpr std::uintptr_t bExplodeOnPawnHit = 0xB48;
            static constexpr std::uintptr_t bIsOverlapPiercingHit = 0xB48;
            static constexpr std::uintptr_t bNoCollisionForNonOwningClients = 0xB48;
            static constexpr std::uintptr_t bUseAsyncExplosions = 0xB48;
            static constexpr std::uintptr_t bUseAsyncExplosionsOnlyOnce = 0xB48;
            static constexpr std::uintptr_t bEstimateCollisionForSniperTrace = 0xB49;
            static constexpr std::uintptr_t bIgnoreActorsAttachedToFiringPawn = 0xB49;
            static constexpr std::uintptr_t bPredictMaxSimulationDistanceExceeded = 0xB49;
            static constexpr std::uintptr_t bProcessLocalHits = 0xB49;
            static constexpr std::uintptr_t bSkipOnTouchedEventForInitialOwnerHit = 0xB49;
            static constexpr std::uintptr_t bTriggerTouchForAllSniperTraceHits = 0xB49;
            static constexpr std::uintptr_t bProcessOnServerForFortAIControllers = 0xB4A;
            static constexpr std::uintptr_t TimeToWaitForPawnHitBeforeKillOnServer = 0xB4C;
            static constexpr std::uintptr_t PredictedHitActor = 0xB60;
            static constexpr std::uintptr_t PredictedHitComp = 0xB68;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"PawnHitResults", 0xB18, "ArrayProperty"},
            {"FireStartLoc", 0xB30, "StructProperty"},
            {"bExplodeOnPawnHit", 0xB48, "BoolProperty"},
            {"bIsOverlapPiercingHit", 0xB48, "BoolProperty"},
            {"bNoCollisionForNonOwningClients", 0xB48, "BoolProperty"},
            {"bUseAsyncExplosions", 0xB48, "BoolProperty"},
            {"bUseAsyncExplosionsOnlyOnce", 0xB48, "BoolProperty"},
            {"bEstimateCollisionForSniperTrace", 0xB49, "BoolProperty"},
            {"bIgnoreActorsAttachedToFiringPawn", 0xB49, "BoolProperty"},
            {"bPredictMaxSimulationDistanceExceeded", 0xB49, "BoolProperty"},
            {"bProcessLocalHits", 0xB49, "BoolProperty"},
            {"bSkipOnTouchedEventForInitialOwnerHit", 0xB49, "BoolProperty"},
            {"bTriggerTouchForAllSniperTraceHits", 0xB49, "BoolProperty"},
            {"bProcessOnServerForFortAIControllers", 0xB4A, "BoolProperty"},
            {"TimeToWaitForPawnHitBeforeKillOnServer", 0xB4C, "FloatProperty"},
            {"PredictedHitActor", 0xB60, "ObjectProperty"},
            {"PredictedHitComp", 0xB68, "ObjectProperty"},
        }};
    };

    struct FortProjectileMoveComp_DrunkClusterLauncher
    {
        static constexpr std::string_view Name = "FortProjectileMoveComp_DrunkClusterLauncher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileMoveComp_Drunk";
        struct Offsets
        {
            static constexpr std::uintptr_t PostLockOnDrunkConfig = 0x570;
            static constexpr std::uintptr_t bHasLockedOn = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PostLockOnDrunkConfig", 0x570, "StructProperty"},
            {"bHasLockedOn", 0x5C0, "BoolProperty"},
        }};
    };

    struct FortWeaponComponent_ClusterLauncher
    {
        static constexpr std::string_view Name = "FortWeaponComponent_ClusterLauncher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
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

    struct RocketClusterTidalCraneLauncherWeaponAnimInstance
    {
        static constexpr std::string_view Name = "RocketClusterTidalCraneLauncherWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowRocketsInLauncher = 0x370;
            static constexpr std::uintptr_t bIsADS = 0x371;
            static constexpr std::uintptr_t bJustFired = 0x372;
            static constexpr std::uintptr_t PreviousAmmo = 0x374;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bShowRocketsInLauncher", 0x370, "BoolProperty"},
            {"bIsADS", 0x371, "BoolProperty"},
            {"bJustFired", 0x372, "BoolProperty"},
            {"PreviousAmmo", 0x374, "IntProperty"},
        }};
    };

    struct RocketClusterTidalCraneLauncherWeaponInterface
    {
        static constexpr std::string_view Name = "RocketClusterTidalCraneLauncherWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
