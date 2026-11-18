#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DryBoxRuntime
{
    struct NyxGlassFuelAttributeSet
    {
        static constexpr std::string_view Name = "NyxGlassFuelAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxFuel = 0x50;
            static constexpr std::uintptr_t Fuel = 0x78;
            static constexpr std::uintptr_t LocalFuel = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxFuel", 0x50, "StructProperty"},
            {"Fuel", 0x78, "StructProperty"},
            {"LocalFuel", 0xA0, "StructProperty"},
        }};
    };

    struct NyxGlassSwingingMovementControls
    {
        static constexpr std::string_view Name = "NyxGlassSwingingMovementControls";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementControls";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementControlsTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MovementControlsTag", 0x28, "StructProperty"},
        }};
    };

    struct NyxGlassWeaponComponent_Swinging
    {
        static constexpr std::string_view Name = "NyxGlassWeaponComponent_Swinging";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent_Swinging";
        struct Offsets
        {
            static constexpr std::uintptr_t SwingTargetRaycastDist = 0x6B0;
            static constexpr std::uintptr_t AttackTargetRaycastDist = 0x6D8;
            static constexpr std::uintptr_t CameraDistScale = 0x700;
            static constexpr std::uintptr_t TargetingSphereRadius = 0x728;
            static constexpr std::uintptr_t MaxAttachPointActorBoundsSize = 0x750;
            static constexpr std::uintptr_t MaxAttachPointActorExtent = 0x778;
            static constexpr std::uintptr_t MinAttachPointDistFromCamera = 0x7A0;
            static constexpr std::uintptr_t MinAttachPointAngleInRad = 0x7C8;
            static constexpr std::uintptr_t MaxSecondAttachPointDotProd = 0x7F0;
            static constexpr std::uintptr_t RayTraceTargetingCollisionChannel = 0x818;
            static constexpr std::uintptr_t SphereOverlapTargetingCollisionChannel = 0x819;
            static constexpr std::uintptr_t DisallowedActorClasses = 0x820;
            static constexpr std::uintptr_t DirectRaycastDisallowedActorClasses = 0x830;
            static constexpr std::uintptr_t AllowedBuildingTypes = 0x840;
            static constexpr std::uintptr_t SwingingAutoDetachDist = 0x850;
            static constexpr std::uintptr_t AttackStartSlashDist = 0x878;
            static constexpr std::uintptr_t MaxAcceleration = 0x8A0;
            static constexpr std::uintptr_t GasOrthogonalPowerWhileAttacking = 0x8C8;
            static constexpr std::uintptr_t GasOrthogonalPowerWhileSwinging = 0x8F0;
            static constexpr std::uintptr_t GasReelInPowerSwinging = 0x918;
            static constexpr std::uintptr_t GasReelInPowerAttacking = 0x940;
            static constexpr std::uintptr_t bShouldInterpolateCurGasToGoal = 0x968;
            static constexpr std::uintptr_t GasForceInterpSpeed = 0x990;
            static constexpr std::uintptr_t bShouldAccelerateWhileAttached = 0x9B8;
            static constexpr std::uintptr_t UnattachedDeaccelerationMultiplier = 0x9E0;
            static constexpr std::uintptr_t AttachedDeaccelerationMultiplier = 0xA08;
            static constexpr std::uintptr_t TimeAttachedBeforeSpeedStartsIncreasing = 0xA30;
            static constexpr std::uintptr_t TimeAttachedForMaxSpeed = 0xA58;
            static constexpr std::uintptr_t MinAttachedSpeedMultiplier = 0xA80;
            static constexpr std::uintptr_t MaxAttachedSpeedMultiplier = 0xAA8;
            static constexpr std::uintptr_t MinUnattachedSpeedMultiplier = 0xAD0;
            static constexpr std::uintptr_t MaxSpeedMultiplier = 0xAF8;
            static constexpr std::uintptr_t MaxSpeedDecreaseFromUpwardAngle = 0xB20;
            static constexpr std::uintptr_t SpeedBasedOnHeightCurve = 0xB48;
            static constexpr std::uintptr_t BaseSwingSpeed = 0xB50;
            static constexpr std::uintptr_t InitialAccelerationStartSpeed = 0xB78;
            static constexpr std::uintptr_t InitialAccelerationTime = 0xBA0;
            static constexpr std::uintptr_t InitialAccelerationCurve = 0xBC8;
            static constexpr std::uintptr_t SpeedSoftCapDrag = 0xBD0;
            static constexpr std::uintptr_t SpeedHardCapFailsafe = 0xBF8;
            static constexpr std::uintptr_t MaxHoverTime = 0xC20;
            static constexpr std::uintptr_t FullHoverRechargeTime = 0xC48;
            static constexpr std::uintptr_t DesiredHoverZSpeed = 0xC70;
            static constexpr std::uintptr_t HoverZMultiplier = 0xC98;
            static constexpr std::uintptr_t HoverTimeWhileUnequipped = 0xCC0;
            static constexpr std::uintptr_t HoverZMultiplierWhileUnequipped = 0xCE8;
            static constexpr std::uintptr_t SpeedSoftCapDragWhenHovering = 0xD10;
            static constexpr std::uintptr_t MaxHoverSpeed = 0xD38;
            static constexpr std::uintptr_t OldAttackDistanceXRange = 0xD60;
            static constexpr std::uintptr_t OldAttackDistanceYRange = 0xD88;
            static constexpr std::uintptr_t NewAttackDistanceXRange = 0xDB0;
            static constexpr std::uintptr_t NewAttackDistanceYRange = 0xDD8;
            static constexpr std::uintptr_t AttackAccelerationCurve = 0xE00;
            static constexpr std::uintptr_t ReelInForceAttackMinDist = 0xE08;
            static constexpr std::uintptr_t ReelInForceAttackMaxDist = 0xE30;
            static constexpr std::uintptr_t ReelInForceAttackMinMult = 0xE58;
            static constexpr std::uintptr_t ReelInForceAttackMaxMult = 0xE80;
            static constexpr std::uintptr_t AttackStartSpeed = 0xEA8;
            static constexpr std::uintptr_t AttackMaxSpeed = 0xED0;
            static constexpr std::uintptr_t SpeedSoftCapDragWhenAttacking = 0xEF8;
            static constexpr std::uintptr_t SlashLockDistance = 0xF20;
            static constexpr std::uintptr_t MinSlashDistToTarget = 0xF48;
            static constexpr std::uintptr_t SlashSpeed = 0xF70;
            static constexpr std::uintptr_t SlashLockTime = 0xF98;
            static constexpr std::uintptr_t SlashLeapBackTime = 0xFC0;
            static constexpr std::uintptr_t SlashLeapBackHeightModifier = 0xFE8;
            static constexpr std::uintptr_t SlashLeapBackSpeed = 0x1010;
            static constexpr std::uintptr_t OverrideSwingingControlParamsTag_Swinging = 0x1038;
            static constexpr std::uintptr_t OverrideSwingingControlParamsTag_Hovering = 0x103C;
            static constexpr std::uintptr_t OverrideSwingingControlParamsTag_Attacking = 0x1040;
            static constexpr std::uintptr_t OverrideSwingingControlParamsTag_LeapingBack = 0x1044;
            static constexpr std::uintptr_t LeapingBack_OverrideTimer = 0x1048;
            static constexpr std::uintptr_t ActorHasPreferredSwingMeshTag = 0x1070;
            static constexpr std::uintptr_t ComponentIsPreferredSwingMeshTag = 0x1074;
            static constexpr std::uintptr_t bUsingDirectRaycast = 0x1078;
            static constexpr std::uintptr_t CurTargetingData = 0x1080;
        };

        inline static constexpr std::array<PropertyInfo, 76> Properties{{
            {"SwingTargetRaycastDist", 0x6B0, "StructProperty"},
            {"AttackTargetRaycastDist", 0x6D8, "StructProperty"},
            {"CameraDistScale", 0x700, "StructProperty"},
            {"TargetingSphereRadius", 0x728, "StructProperty"},
            {"MaxAttachPointActorBoundsSize", 0x750, "StructProperty"},
            {"MaxAttachPointActorExtent", 0x778, "StructProperty"},
            {"MinAttachPointDistFromCamera", 0x7A0, "StructProperty"},
            {"MinAttachPointAngleInRad", 0x7C8, "StructProperty"},
            {"MaxSecondAttachPointDotProd", 0x7F0, "StructProperty"},
            {"RayTraceTargetingCollisionChannel", 0x818, "ByteProperty"},
            {"SphereOverlapTargetingCollisionChannel", 0x819, "ByteProperty"},
            {"DisallowedActorClasses", 0x820, "ArrayProperty"},
            {"DirectRaycastDisallowedActorClasses", 0x830, "ArrayProperty"},
            {"AllowedBuildingTypes", 0x840, "ArrayProperty"},
            {"SwingingAutoDetachDist", 0x850, "StructProperty"},
            {"AttackStartSlashDist", 0x878, "StructProperty"},
            {"MaxAcceleration", 0x8A0, "StructProperty"},
            {"GasOrthogonalPowerWhileAttacking", 0x8C8, "StructProperty"},
            {"GasOrthogonalPowerWhileSwinging", 0x8F0, "StructProperty"},
            {"GasReelInPowerSwinging", 0x918, "StructProperty"},
            {"GasReelInPowerAttacking", 0x940, "StructProperty"},
            {"bShouldInterpolateCurGasToGoal", 0x968, "StructProperty"},
            {"GasForceInterpSpeed", 0x990, "StructProperty"},
            {"bShouldAccelerateWhileAttached", 0x9B8, "StructProperty"},
            {"UnattachedDeaccelerationMultiplier", 0x9E0, "StructProperty"},
            {"AttachedDeaccelerationMultiplier", 0xA08, "StructProperty"},
            {"TimeAttachedBeforeSpeedStartsIncreasing", 0xA30, "StructProperty"},
            {"TimeAttachedForMaxSpeed", 0xA58, "StructProperty"},
            {"MinAttachedSpeedMultiplier", 0xA80, "StructProperty"},
            {"MaxAttachedSpeedMultiplier", 0xAA8, "StructProperty"},
            {"MinUnattachedSpeedMultiplier", 0xAD0, "StructProperty"},
            {"MaxSpeedMultiplier", 0xAF8, "StructProperty"},
            {"MaxSpeedDecreaseFromUpwardAngle", 0xB20, "StructProperty"},
            {"SpeedBasedOnHeightCurve", 0xB48, "ObjectProperty"},
            {"BaseSwingSpeed", 0xB50, "StructProperty"},
            {"InitialAccelerationStartSpeed", 0xB78, "StructProperty"},
            {"InitialAccelerationTime", 0xBA0, "StructProperty"},
            {"InitialAccelerationCurve", 0xBC8, "ObjectProperty"},
            {"SpeedSoftCapDrag", 0xBD0, "StructProperty"},
            {"SpeedHardCapFailsafe", 0xBF8, "StructProperty"},
            {"MaxHoverTime", 0xC20, "StructProperty"},
            {"FullHoverRechargeTime", 0xC48, "StructProperty"},
            {"DesiredHoverZSpeed", 0xC70, "StructProperty"},
            {"HoverZMultiplier", 0xC98, "StructProperty"},
            {"HoverTimeWhileUnequipped", 0xCC0, "StructProperty"},
            {"HoverZMultiplierWhileUnequipped", 0xCE8, "StructProperty"},
            {"SpeedSoftCapDragWhenHovering", 0xD10, "StructProperty"},
            {"MaxHoverSpeed", 0xD38, "StructProperty"},
            {"OldAttackDistanceXRange", 0xD60, "StructProperty"},
            {"OldAttackDistanceYRange", 0xD88, "StructProperty"},
            {"NewAttackDistanceXRange", 0xDB0, "StructProperty"},
            {"NewAttackDistanceYRange", 0xDD8, "StructProperty"},
            {"AttackAccelerationCurve", 0xE00, "ObjectProperty"},
            {"ReelInForceAttackMinDist", 0xE08, "StructProperty"},
            {"ReelInForceAttackMaxDist", 0xE30, "StructProperty"},
            {"ReelInForceAttackMinMult", 0xE58, "StructProperty"},
            {"ReelInForceAttackMaxMult", 0xE80, "StructProperty"},
            {"AttackStartSpeed", 0xEA8, "StructProperty"},
            {"AttackMaxSpeed", 0xED0, "StructProperty"},
            {"SpeedSoftCapDragWhenAttacking", 0xEF8, "StructProperty"},
            {"SlashLockDistance", 0xF20, "StructProperty"},
            {"MinSlashDistToTarget", 0xF48, "StructProperty"},
            {"SlashSpeed", 0xF70, "StructProperty"},
            {"SlashLockTime", 0xF98, "StructProperty"},
            {"SlashLeapBackTime", 0xFC0, "StructProperty"},
            {"SlashLeapBackHeightModifier", 0xFE8, "StructProperty"},
            {"SlashLeapBackSpeed", 0x1010, "StructProperty"},
            {"OverrideSwingingControlParamsTag_Swinging", 0x1038, "StructProperty"},
            {"OverrideSwingingControlParamsTag_Hovering", 0x103C, "StructProperty"},
            {"OverrideSwingingControlParamsTag_Attacking", 0x1040, "StructProperty"},
            {"OverrideSwingingControlParamsTag_LeapingBack", 0x1044, "StructProperty"},
            {"LeapingBack_OverrideTimer", 0x1048, "StructProperty"},
            {"ActorHasPreferredSwingMeshTag", 0x1070, "NameProperty"},
            {"ComponentIsPreferredSwingMeshTag", 0x1074, "NameProperty"},
            {"bUsingDirectRaycast", 0x1078, "BoolProperty"},
            {"CurTargetingData", 0x1080, "StructProperty"},
        }};
    };

}
