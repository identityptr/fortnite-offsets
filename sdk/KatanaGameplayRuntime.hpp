#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::KatanaGameplayRuntime
{
    struct FortKatanaLayerAnimInstance
    {
        static constexpr std::string_view Name = "FortKatanaLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMantisLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t IsDashCharge = 0x1190;
            static constexpr std::uintptr_t AsFortPlayerPawn = 0x1198;
            static constexpr std::uintptr_t IsBMeleeKatana = 0x11A0;
            static constexpr std::uintptr_t HandIKHipAttachAlpha = 0x11A4;
            static constexpr std::uintptr_t LeftAttachedHandIKLoc = 0x11A8;
            static constexpr std::uintptr_t LeftAttachedhandIKRot = 0x11C0;
            static constexpr std::uintptr_t RightWeaponLoc = 0x11D8;
            static constexpr std::uintptr_t RightWeaponRot = 0x11F0;
            static constexpr std::uintptr_t LeftAttachedHandIKLocOffsetMED = 0x1208;
            static constexpr std::uintptr_t LeftAttachedHandIKRotOffset = 0x1220;
            static constexpr std::uintptr_t RightWeaponLocOffsetMED = 0x1238;
            static constexpr std::uintptr_t RightWeaponRotOffset = 0x1250;
            static constexpr std::uintptr_t IsDashAttack = 0x1268;
            static constexpr std::uintptr_t IsDashOutro = 0x1269;
            static constexpr std::uintptr_t PelvisAOAlpha = 0x126C;
            static constexpr std::uintptr_t ClampedAimPitch = 0x1270;
            static constexpr std::uintptr_t EarlyExitFromDashOutro = 0x1274;
            static constexpr std::uintptr_t IsTechniqueActive = 0x1275;
            static constexpr std::uintptr_t IsPrimaryAttack = 0x1276;
            static constexpr std::uintptr_t WeaponHipAttachAlpha = 0x1278;
            static constexpr std::uintptr_t LeftAttachedHandIKLocOffsetLRG = 0x1280;
            static constexpr std::uintptr_t RightWeaponLocOffsetLRG = 0x1298;
            static constexpr std::uintptr_t FeetCorrectionAlpha = 0x12B0;
            static constexpr std::uintptr_t IsInAirAttackLeap = 0x12B4;
            static constexpr std::uintptr_t ShouldStartDashOutro = 0x12B5;
            static constexpr std::uintptr_t StartedDashOutro = 0x12B6;
            static constexpr std::uintptr_t DashRootMotionDuration = 0x12B8;
            static constexpr std::uintptr_t IsPrimaryAttack2 = 0x12E0;
            static constexpr std::uintptr_t IsAirAttackSlam = 0x12E1;
            static constexpr std::uintptr_t TransitionRuleToDefault = 0x12E2;
            static constexpr std::uintptr_t IsGrindRailSwing = 0x12E3;
            static constexpr std::uintptr_t CanExitDashCharge = 0x12E4;
            static constexpr std::uintptr_t DashChargePlayRate = 0x12E8;
            static constexpr std::uintptr_t YawForKatanaDashAO = 0x12EC;
            static constexpr std::uintptr_t bIsDying = 0x12F0;
        };

        inline static constexpr std::array<PropertyInfo, 35> Properties{{
            {"IsDashCharge", 0x1190, "BoolProperty"},
            {"AsFortPlayerPawn", 0x1198, "ObjectProperty"},
            {"IsBMeleeKatana", 0x11A0, "BoolProperty"},
            {"HandIKHipAttachAlpha", 0x11A4, "FloatProperty"},
            {"LeftAttachedHandIKLoc", 0x11A8, "StructProperty"},
            {"LeftAttachedhandIKRot", 0x11C0, "StructProperty"},
            {"RightWeaponLoc", 0x11D8, "StructProperty"},
            {"RightWeaponRot", 0x11F0, "StructProperty"},
            {"LeftAttachedHandIKLocOffsetMED", 0x1208, "StructProperty"},
            {"LeftAttachedHandIKRotOffset", 0x1220, "StructProperty"},
            {"RightWeaponLocOffsetMED", 0x1238, "StructProperty"},
            {"RightWeaponRotOffset", 0x1250, "StructProperty"},
            {"IsDashAttack", 0x1268, "BoolProperty"},
            {"IsDashOutro", 0x1269, "BoolProperty"},
            {"PelvisAOAlpha", 0x126C, "FloatProperty"},
            {"ClampedAimPitch", 0x1270, "FloatProperty"},
            {"EarlyExitFromDashOutro", 0x1274, "BoolProperty"},
            {"IsTechniqueActive", 0x1275, "BoolProperty"},
            {"IsPrimaryAttack", 0x1276, "BoolProperty"},
            {"WeaponHipAttachAlpha", 0x1278, "FloatProperty"},
            {"LeftAttachedHandIKLocOffsetLRG", 0x1280, "StructProperty"},
            {"RightWeaponLocOffsetLRG", 0x1298, "StructProperty"},
            {"FeetCorrectionAlpha", 0x12B0, "FloatProperty"},
            {"IsInAirAttackLeap", 0x12B4, "BoolProperty"},
            {"ShouldStartDashOutro", 0x12B5, "BoolProperty"},
            {"StartedDashOutro", 0x12B6, "BoolProperty"},
            {"DashRootMotionDuration", 0x12B8, "StructProperty"},
            {"IsPrimaryAttack2", 0x12E0, "BoolProperty"},
            {"IsAirAttackSlam", 0x12E1, "BoolProperty"},
            {"TransitionRuleToDefault", 0x12E2, "BoolProperty"},
            {"IsGrindRailSwing", 0x12E3, "BoolProperty"},
            {"CanExitDashCharge", 0x12E4, "BoolProperty"},
            {"DashChargePlayRate", 0x12E8, "FloatProperty"},
            {"YawForKatanaDashAO", 0x12EC, "FloatProperty"},
            {"bIsDying", 0x12F0, "BoolProperty"},
        }};
    };

    struct FortKatanaWeaponAnimInstance
    {
        static constexpr std::string_view Name = "FortKatanaWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMantisAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AsFortPlayerPawn = 0x350;
            static constexpr std::uintptr_t BMeleeKatanaAsWeapon = 0x358;
            static constexpr std::uintptr_t IsBMeleeKatana = 0x360;
            static constexpr std::uintptr_t LocalLeftHandIKAlpha = 0x364;
            static constexpr std::uintptr_t LocalRightHandIKAlpha = 0x368;
            static constexpr std::uintptr_t IsDashCharge = 0x36C;
            static constexpr std::uintptr_t IsDashAttack = 0x36D;
            static constexpr std::uintptr_t SwordPlayRate = 0x370;
            static constexpr std::uintptr_t IsInAirAttack_Leap = 0x374;
            static constexpr std::uintptr_t IsInAirAttack_Slam = 0x375;
            static constexpr std::uintptr_t KatanaPlayer = 0x378;
            static constexpr std::uintptr_t EarlyExitFromDashOutro = 0x380;
            static constexpr std::uintptr_t IsDashOutro = 0x381;
            static constexpr std::uintptr_t ScabbardLoc = 0x388;
            static constexpr std::uintptr_t ScabbardRot = 0x3A0;
            static constexpr std::uintptr_t ScabbardLocOffset = 0x3B8;
            static constexpr std::uintptr_t ScabbardRotOffset = 0x3D0;
            static constexpr std::uintptr_t IsSurfaceSwimming = 0x3E8;
            static constexpr std::uintptr_t IsTechniqueActive = 0x3E9;
            static constexpr std::uintptr_t SwordLoc = 0x3F0;
            static constexpr std::uintptr_t SwordRot = 0x408;
            static constexpr std::uintptr_t SwordLocOffset = 0x420;
            static constexpr std::uintptr_t SwordRotOffset = 0x438;
            static constexpr std::uintptr_t IsRidingSwing = 0x450;
            static constexpr std::uintptr_t IsPrimaryAttack = 0x451;
            static constexpr std::uintptr_t IsPrimaryAttack2 = 0x452;
            static constexpr std::uintptr_t ExitFromPrimaryAttack = 0x453;
            static constexpr std::uintptr_t ExitFromPrimaryAttack2 = 0x454;
            static constexpr std::uintptr_t NonPrimaryAttackState = 0x455;
            static constexpr std::uintptr_t IsComboAttack = 0x456;
            static constexpr std::uintptr_t TransitionRuleToDefaultPose = 0x457;
            static constexpr std::uintptr_t ExitFromInAirLand = 0x458;
            static constexpr std::uintptr_t IsGrindRailSwing = 0x459;
            static constexpr std::uintptr_t CurrentTechniqueBranch = 0x45C;
            static constexpr std::uintptr_t PreviousTechniqueBranch = 0x460;
            static constexpr std::uintptr_t PelvisSocket = 0x464;
            static constexpr std::uintptr_t ScabbardLocOffsetVeh = 0x468;
            static constexpr std::uintptr_t ScabbardRotOffsetVeh = 0x480;
            static constexpr std::uintptr_t DashChargePlayRate = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 39> Properties{{
            {"AsFortPlayerPawn", 0x350, "ObjectProperty"},
            {"BMeleeKatanaAsWeapon", 0x358, "ObjectProperty"},
            {"IsBMeleeKatana", 0x360, "BoolProperty"},
            {"LocalLeftHandIKAlpha", 0x364, "FloatProperty"},
            {"LocalRightHandIKAlpha", 0x368, "FloatProperty"},
            {"IsDashCharge", 0x36C, "BoolProperty"},
            {"IsDashAttack", 0x36D, "BoolProperty"},
            {"SwordPlayRate", 0x370, "FloatProperty"},
            {"IsInAirAttack_Leap", 0x374, "BoolProperty"},
            {"IsInAirAttack_Slam", 0x375, "BoolProperty"},
            {"KatanaPlayer", 0x378, "ObjectProperty"},
            {"EarlyExitFromDashOutro", 0x380, "BoolProperty"},
            {"IsDashOutro", 0x381, "BoolProperty"},
            {"ScabbardLoc", 0x388, "StructProperty"},
            {"ScabbardRot", 0x3A0, "StructProperty"},
            {"ScabbardLocOffset", 0x3B8, "StructProperty"},
            {"ScabbardRotOffset", 0x3D0, "StructProperty"},
            {"IsSurfaceSwimming", 0x3E8, "BoolProperty"},
            {"IsTechniqueActive", 0x3E9, "BoolProperty"},
            {"SwordLoc", 0x3F0, "StructProperty"},
            {"SwordRot", 0x408, "StructProperty"},
            {"SwordLocOffset", 0x420, "StructProperty"},
            {"SwordRotOffset", 0x438, "StructProperty"},
            {"IsRidingSwing", 0x450, "BoolProperty"},
            {"IsPrimaryAttack", 0x451, "BoolProperty"},
            {"IsPrimaryAttack2", 0x452, "BoolProperty"},
            {"ExitFromPrimaryAttack", 0x453, "BoolProperty"},
            {"ExitFromPrimaryAttack2", 0x454, "BoolProperty"},
            {"NonPrimaryAttackState", 0x455, "BoolProperty"},
            {"IsComboAttack", 0x456, "BoolProperty"},
            {"TransitionRuleToDefaultPose", 0x457, "BoolProperty"},
            {"ExitFromInAirLand", 0x458, "BoolProperty"},
            {"IsGrindRailSwing", 0x459, "BoolProperty"},
            {"CurrentTechniqueBranch", 0x45C, "IntProperty"},
            {"PreviousTechniqueBranch", 0x460, "IntProperty"},
            {"PelvisSocket", 0x464, "NameProperty"},
            {"ScabbardLocOffsetVeh", 0x468, "StructProperty"},
            {"ScabbardRotOffsetVeh", 0x480, "StructProperty"},
            {"DashChargePlayRate", 0x498, "FloatProperty"},
        }};
    };

    struct KatanaTargetingComponent
    {
        static constexpr std::string_view Name = "KatanaTargetingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t KatanaTechniqueAbilityClass = 0xC0;
            static constexpr std::uintptr_t CachedTechniqueAbilityCDO = 0xC8;
            static constexpr std::uintptr_t DashDistance = 0xD0;
            static constexpr std::uintptr_t AdditionalDashForwardAttackRange = 0xF8;
            static constexpr std::uintptr_t AdditionalOutOfRangeDetection = 0x120;
            static constexpr std::uintptr_t DashOffsetFromTarget = 0x148;
            static constexpr std::uintptr_t PropRemainingHealthToDestroy = 0x170;
            static constexpr std::uintptr_t BuildingRemainingHealthToDestroy = 0x198;
            static constexpr std::uintptr_t DashBlockingBuildingTags = 0x1C0;
            static constexpr std::uintptr_t DashBlockingBuildingClasses = 0x1E0;
            static constexpr std::uintptr_t PawnTargetSelectionList = 0x1F0;
            static constexpr std::uintptr_t DashTraceChannel = 0x238;
            static constexpr std::uintptr_t ObstructionOverlapBoxHalfSize = 0x23C;
            static constexpr std::uintptr_t ObstructionTargetFilter = 0x240;
            static constexpr std::uintptr_t DashBlockIgnoreTags = 0x280;
            static constexpr std::uintptr_t PrimaryAttackVariationInfos = 0x2A0;
            static constexpr std::uintptr_t PrimaryAttackMinForwardMovement = 0x2B0;
            static constexpr std::uintptr_t PrimaryAttackObstructionTraceChannel = 0x2B4;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"KatanaTechniqueAbilityClass", 0xC0, "ClassProperty"},
            {"CachedTechniqueAbilityCDO", 0xC8, "ObjectProperty"},
            {"DashDistance", 0xD0, "StructProperty"},
            {"AdditionalDashForwardAttackRange", 0xF8, "StructProperty"},
            {"AdditionalOutOfRangeDetection", 0x120, "StructProperty"},
            {"DashOffsetFromTarget", 0x148, "StructProperty"},
            {"PropRemainingHealthToDestroy", 0x170, "StructProperty"},
            {"BuildingRemainingHealthToDestroy", 0x198, "StructProperty"},
            {"DashBlockingBuildingTags", 0x1C0, "StructProperty"},
            {"DashBlockingBuildingClasses", 0x1E0, "SetProperty"},
            {"PawnTargetSelectionList", 0x1F0, "StructProperty"},
            {"DashTraceChannel", 0x238, "ByteProperty"},
            {"ObstructionOverlapBoxHalfSize", 0x23C, "FloatProperty"},
            {"ObstructionTargetFilter", 0x240, "StructProperty"},
            {"DashBlockIgnoreTags", 0x280, "StructProperty"},
            {"PrimaryAttackVariationInfos", 0x2A0, "MapProperty"},
            {"PrimaryAttackMinForwardMovement", 0x2B0, "FloatProperty"},
            {"PrimaryAttackObstructionTraceChannel", 0x2B4, "ByteProperty"},
        }};
    };

}
