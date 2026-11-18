#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CrimsonMistRuntime
{
    struct CrimsonMistHeavyMinigunAnimInstance
    {
        static constexpr std::string_view Name = "CrimsonMistHeavyMinigunAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Barrels_DegreesOffset_Current = 0x260;
            static constexpr std::uintptr_t AmmoSegmentRotation = 0x264;
            static constexpr std::uintptr_t LowAmmoSegmentRotation = 0x268;
            static constexpr std::uintptr_t Cluster_DegreesOffset_Current = 0x26C;
            static constexpr std::uintptr_t AmmoCount = 0x270;
            static constexpr std::uintptr_t bIsFiring = 0x274;
            static constexpr std::uintptr_t LowAmmoSegmentRotationRotator = 0x278;
            static constexpr std::uintptr_t AmmoSegmentRotationRotator = 0x290;
            static constexpr std::uintptr_t ClusterDegreesOffsetCurrentRotator = 0x2A8;
            static constexpr std::uintptr_t BarrelsDegreesOffsetCurrentRotator = 0x2C0;
            static constexpr std::uintptr_t NegBarrelsDegreesOffsetCurrentRotator = 0x2D8;
            static constexpr std::uintptr_t IsFiringFloat = 0x2F0;
            static constexpr std::uintptr_t bIsAmmoCountLow = 0x2F4;
            static constexpr std::uintptr_t bDoorOpen = 0x2F5;
            static constexpr std::uintptr_t bMagOut = 0x2F6;
            static constexpr std::uintptr_t bMagIn = 0x2F7;
            static constexpr std::uintptr_t MagDoorOpenTagName = 0x2F8;
            static constexpr std::uintptr_t MagOutTagName = 0x2FC;
            static constexpr std::uintptr_t MagInTagName = 0x300;
            static constexpr std::uintptr_t BarrelBrakeCurve = 0x308;
            static constexpr std::uintptr_t MaxNegSpinSpeed = 0x350;
            static constexpr std::uintptr_t MaxPosSpinSpeed = 0x354;
            static constexpr std::uintptr_t ClusterDegMultiplier = 0x358;
            static constexpr std::uintptr_t PrevBarrelQuadrantRumble = 0x35C;
            static constexpr std::uintptr_t PrevBarrelQuadrant = 0x360;
            static constexpr std::uintptr_t BarrelsDegreesOffsetUnclamped = 0x364;
            static constexpr std::uintptr_t CurrentBrakeTime = 0x368;
            static constexpr std::uintptr_t bCurrentlySpooling = 0x36C;
            static constexpr std::uintptr_t bCurrentlyEquipping = 0x36D;
            static constexpr std::uintptr_t bPlayedFinalSettle = 0x36E;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"Barrels_DegreesOffset_Current", 0x260, "FloatProperty"},
            {"AmmoSegmentRotation", 0x264, "FloatProperty"},
            {"LowAmmoSegmentRotation", 0x268, "FloatProperty"},
            {"Cluster_DegreesOffset_Current", 0x26C, "FloatProperty"},
            {"AmmoCount", 0x270, "IntProperty"},
            {"bIsFiring", 0x274, "BoolProperty"},
            {"LowAmmoSegmentRotationRotator", 0x278, "StructProperty"},
            {"AmmoSegmentRotationRotator", 0x290, "StructProperty"},
            {"ClusterDegreesOffsetCurrentRotator", 0x2A8, "StructProperty"},
            {"BarrelsDegreesOffsetCurrentRotator", 0x2C0, "StructProperty"},
            {"NegBarrelsDegreesOffsetCurrentRotator", 0x2D8, "StructProperty"},
            {"IsFiringFloat", 0x2F0, "FloatProperty"},
            {"bIsAmmoCountLow", 0x2F4, "BoolProperty"},
            {"bDoorOpen", 0x2F5, "BoolProperty"},
            {"bMagOut", 0x2F6, "BoolProperty"},
            {"bMagIn", 0x2F7, "BoolProperty"},
            {"MagDoorOpenTagName", 0x2F8, "StructProperty"},
            {"MagOutTagName", 0x2FC, "StructProperty"},
            {"MagInTagName", 0x300, "StructProperty"},
            {"BarrelBrakeCurve", 0x308, "StructProperty"},
            {"MaxNegSpinSpeed", 0x350, "FloatProperty"},
            {"MaxPosSpinSpeed", 0x354, "FloatProperty"},
            {"ClusterDegMultiplier", 0x358, "FloatProperty"},
            {"PrevBarrelQuadrantRumble", 0x35C, "IntProperty"},
            {"PrevBarrelQuadrant", 0x360, "IntProperty"},
            {"BarrelsDegreesOffsetUnclamped", 0x364, "FloatProperty"},
            {"CurrentBrakeTime", 0x368, "FloatProperty"},
            {"bCurrentlySpooling", 0x36C, "BoolProperty"},
            {"bCurrentlyEquipping", 0x36D, "BoolProperty"},
            {"bPlayedFinalSettle", 0x36E, "BoolProperty"},
        }};
    };

    struct CrimsonMistHeavyMinigunWeaponInterface
    {
        static constexpr std::string_view Name = "CrimsonMistHeavyMinigunWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CrimsonSmokeLayerAnimInstance
    {
        static constexpr std::string_view Name = "CrimsonSmokeLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationZYaw = 0x1180;
            static constexpr std::uintptr_t bNontargetedToPassthrough = 0x1184;
            static constexpr std::uintptr_t bPassthroughNonTargeted = 0x1185;
            static constexpr std::uintptr_t TimeToExitNonTargetedPose = 0x1188;
            static constexpr std::uintptr_t HeavyMinigunCrouchReloadCMMMAnimMontage = 0x1190;
            static constexpr std::uintptr_t HeavyMinigunReloadCMMMAnimMontage = 0x1198;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RotationZYaw", 0x1180, "FloatProperty"},
            {"bNontargetedToPassthrough", 0x1184, "BoolProperty"},
            {"bPassthroughNonTargeted", 0x1185, "BoolProperty"},
            {"TimeToExitNonTargetedPose", 0x1188, "DoubleProperty"},
            {"HeavyMinigunCrouchReloadCMMMAnimMontage", 0x1190, "ObjectProperty"},
            {"HeavyMinigunReloadCMMMAnimMontage", 0x1198, "ObjectProperty"},
        }};
    };

    struct FortWeaponComponent_BarrelSpin
    {
        static constexpr std::string_view Name = "FortWeaponComponent_BarrelSpin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RPMGainPerSecond = 0xC0;
            static constexpr std::uintptr_t RPMLossPerSecond = 0xE8;
            static constexpr std::uintptr_t MaxRPM = 0x110;
            static constexpr std::uintptr_t bStopOnUnEquip = 0x138;
            static constexpr std::uintptr_t OnSpoolingStarted = 0x140;
            static constexpr std::uintptr_t OnBrakingStarted = 0x150;
            static constexpr std::uintptr_t OnRPMChanged = 0x160;
            static constexpr std::uintptr_t CurrentRPM = 0x17C;
            static constexpr std::uintptr_t bIsSpooling = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"RPMGainPerSecond", 0xC0, "StructProperty"},
            {"RPMLossPerSecond", 0xE8, "StructProperty"},
            {"MaxRPM", 0x110, "StructProperty"},
            {"bStopOnUnEquip", 0x138, "BoolProperty"},
            {"OnSpoolingStarted", 0x140, "MulticastInlineDelegateProperty"},
            {"OnBrakingStarted", 0x150, "MulticastInlineDelegateProperty"},
            {"OnRPMChanged", 0x160, "MulticastInlineDelegateProperty"},
            {"CurrentRPM", 0x17C, "FloatProperty"},
            {"bIsSpooling", 0x180, "BoolProperty"},
        }};
    };

}
