#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PiggybackRuntime
{
    struct FortMovementMode_ExtPiggybackCarrier
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtPiggybackCarrier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t CarrierTag = 0x1C4;
            static constexpr std::uintptr_t PiggybackCarrierAnimLayer = 0x1C8;
            static constexpr std::uintptr_t PiggybackAnimDataOverride = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CarrierTag", 0x1C4, "StructProperty"},
            {"PiggybackCarrierAnimLayer", 0x1C8, "ClassProperty"},
            {"PiggybackAnimDataOverride", 0x1D0, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtPiggybackRider
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtPiggybackRider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t RiderTag = 0x1C8;
            static constexpr std::uintptr_t LaunchTag = 0x1CC;
            static constexpr std::uintptr_t CarrierAttachmentSocket = 0x1D0;
            static constexpr std::uintptr_t RiderAttachmentOffset = 0x1D8;
            static constexpr std::uintptr_t RiderBoundsScaleMult = 0x1F0;
            static constexpr std::uintptr_t PiggybackRiderAnimLayer = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RiderTag", 0x1C8, "StructProperty"},
            {"LaunchTag", 0x1CC, "StructProperty"},
            {"CarrierAttachmentSocket", 0x1D0, "NameProperty"},
            {"RiderAttachmentOffset", 0x1D8, "StructProperty"},
            {"RiderBoundsScaleMult", 0x1F0, "StructProperty"},
            {"PiggybackRiderAnimLayer", 0x220, "ClassProperty"},
        }};
    };

    struct FortMovementMode_PiggybackCarrierRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_PiggybackCarrierRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t NetRidingComponent = 0x38;
            static constexpr std::uintptr_t NetState = 0x40;
            static constexpr std::uintptr_t EndReason = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NetRidingComponent", 0x38, "WeakObjectProperty"},
            {"NetState", 0x40, "EnumProperty"},
            {"EndReason", 0x41, "EnumProperty"},
        }};
    };

    struct FortMovementMode_PiggybackRiderRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_PiggybackRiderRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t NetCarryingComponent = 0x38;
            static constexpr std::uintptr_t NetState = 0x40;
            static constexpr std::uintptr_t EndReason = 0x43;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NetCarryingComponent", 0x38, "WeakObjectProperty"},
            {"NetState", 0x40, "EnumProperty"},
            {"EndReason", 0x43, "EnumProperty"},
        }};
    };

    struct PiggybackComponent
    {
        static constexpr std::string_view Name = "PiggybackComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PiggybackRider = 0xD0;
            static constexpr std::uintptr_t PiggybackCarrier = 0xD8;
            static constexpr std::uintptr_t PiggybackRootCarrierComp = 0xE0;
            static constexpr std::uintptr_t PiggybackStack = 0xE8;
            static constexpr std::uintptr_t CapsuleOverlapHeight = 0xF8;
            static constexpr std::uintptr_t FinalCapsuleHeightAdjustment = 0x120;
            static constexpr std::uintptr_t ThrowStrengthXY = 0x150;
            static constexpr std::uintptr_t ThrowStrengthZ = 0x154;
            static constexpr std::uintptr_t JumpStrengthXY = 0x158;
            static constexpr std::uintptr_t JumpStrengthZ = 0x15C;
            static constexpr std::uintptr_t CarrierAbilityTagsToCancel = 0x160;
            static constexpr std::uintptr_t RiderAbilityTagsToCancel = 0x180;
            static constexpr std::uintptr_t EventThrowCurrentRiderTag = 0x1A0;
            static constexpr std::uintptr_t EventThrowRiderKnownTag = 0x1A4;
            static constexpr std::uintptr_t PiggybackRiderMMEClass = 0x1A8;
            static constexpr std::uintptr_t PiggybackCarrierMMEClass = 0x1B0;
            static constexpr std::uintptr_t ObstructingObjects = 0x1B8;
            static constexpr std::uintptr_t MaxStackSize = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"PiggybackRider", 0xD0, "WeakObjectProperty"},
            {"PiggybackCarrier", 0xD8, "WeakObjectProperty"},
            {"PiggybackRootCarrierComp", 0xE0, "WeakObjectProperty"},
            {"PiggybackStack", 0xE8, "ArrayProperty"},
            {"CapsuleOverlapHeight", 0xF8, "StructProperty"},
            {"FinalCapsuleHeightAdjustment", 0x120, "StructProperty"},
            {"ThrowStrengthXY", 0x150, "FloatProperty"},
            {"ThrowStrengthZ", 0x154, "FloatProperty"},
            {"JumpStrengthXY", 0x158, "FloatProperty"},
            {"JumpStrengthZ", 0x15C, "FloatProperty"},
            {"CarrierAbilityTagsToCancel", 0x160, "StructProperty"},
            {"RiderAbilityTagsToCancel", 0x180, "StructProperty"},
            {"EventThrowCurrentRiderTag", 0x1A0, "StructProperty"},
            {"EventThrowRiderKnownTag", 0x1A4, "StructProperty"},
            {"PiggybackRiderMMEClass", 0x1A8, "ClassProperty"},
            {"PiggybackCarrierMMEClass", 0x1B0, "ClassProperty"},
            {"ObstructingObjects", 0x1B8, "ArrayProperty"},
            {"MaxStackSize", 0x1C8, "StructProperty"},
        }};
    };

    struct PiggybackDanceItemDefinition
    {
        static constexpr std::string_view Name = "PiggybackDanceItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaDanceItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityTag = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AbilityTag", 0x630, "StructProperty"},
        }};
    };

    struct ShoulderRideCarrierLayerAnimInstance
    {
        static constexpr std::string_view Name = "ShoulderRideCarrierLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t ForceCarrierUpperBodyPoseNOTAlpha = 0x1180;
            static constexpr std::uintptr_t CarrierAngularVelocity = 0x1184;
            static constexpr std::uintptr_t CarrierBasePoseGripWidth = 0x1188;
            static constexpr std::uintptr_t CarrierAOYaw_ABSOLUTE_FINAL = 0x1190;
            static constexpr std::uintptr_t CarrierLoco_LoopAdditive_PlaybackRate = 0x1198;
            static constexpr std::uintptr_t CarrierZiplineVerticalOffset = 0x11A0;
            static constexpr std::uintptr_t bCarrierLoco_IsMovingOnGround = 0x11A8;
            static constexpr std::uintptr_t bForceCarrierUpperBodyPose = 0x11A9;
            static constexpr std::uintptr_t bSkipJumpJoinAdditve = 0x11AA;
            static constexpr std::uintptr_t bCarrierIsJumping_Delayed = 0x11AB;
            static constexpr std::uintptr_t bHasEmoteJoinTag = 0x11AC;
            static constexpr std::uintptr_t bIsOnZipline = 0x11AD;
            static constexpr std::uintptr_t bIsOnGrindRail = 0x11AE;
            static constexpr std::uintptr_t bIsBoostJumping = 0x11AF;
            static constexpr std::uintptr_t bIsOnAscender = 0x11B0;
            static constexpr std::uintptr_t bJustLanded = 0x11B1;
            static constexpr std::uintptr_t PawnRootCarrier = 0x11B8;
            static constexpr std::uintptr_t PawnTopRider = 0x11C0;
            static constexpr std::uintptr_t RiderAboveMe = 0x11C8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"ForceCarrierUpperBodyPoseNOTAlpha", 0x1180, "FloatProperty"},
            {"CarrierAngularVelocity", 0x1184, "FloatProperty"},
            {"CarrierBasePoseGripWidth", 0x1188, "DoubleProperty"},
            {"CarrierAOYaw_ABSOLUTE_FINAL", 0x1190, "DoubleProperty"},
            {"CarrierLoco_LoopAdditive_PlaybackRate", 0x1198, "DoubleProperty"},
            {"CarrierZiplineVerticalOffset", 0x11A0, "DoubleProperty"},
            {"bCarrierLoco_IsMovingOnGround", 0x11A8, "BoolProperty"},
            {"bForceCarrierUpperBodyPose", 0x11A9, "BoolProperty"},
            {"bSkipJumpJoinAdditve", 0x11AA, "BoolProperty"},
            {"bCarrierIsJumping_Delayed", 0x11AB, "BoolProperty"},
            {"bHasEmoteJoinTag", 0x11AC, "BoolProperty"},
            {"bIsOnZipline", 0x11AD, "BoolProperty"},
            {"bIsOnGrindRail", 0x11AE, "BoolProperty"},
            {"bIsBoostJumping", 0x11AF, "BoolProperty"},
            {"bIsOnAscender", 0x11B0, "BoolProperty"},
            {"bJustLanded", 0x11B1, "BoolProperty"},
            {"PawnRootCarrier", 0x11B8, "ObjectProperty"},
            {"PawnTopRider", 0x11C0, "ObjectProperty"},
            {"RiderAboveMe", 0x11C8, "ObjectProperty"},
        }};
    };

    struct ShoulderRideRiderLayerAnimInstance
    {
        static constexpr std::string_view Name = "ShoulderRideRiderLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t RiderPelvisTranslationOffset = 0x1180;
            static constexpr std::uintptr_t RiderAOYaw_Normalized_RootCarrierRelative = 0x1198;
            static constexpr std::uintptr_t RiderAOYaw_Final_UpperBody_Lerped = 0x119C;
            static constexpr std::uintptr_t RiderSlidePoseAlpha = 0x11A0;
            static constexpr std::uintptr_t RiderPelvisYawOffset = 0x11A4;
            static constexpr std::uintptr_t RiderLeanDirection = 0x11A8;
            static constexpr std::uintptr_t RiderLoco_AdditiveAlpha = 0x11B0;
            static constexpr std::uintptr_t RiderLoco_PlayRate = 0x11B8;
            static constexpr std::uintptr_t RiderAOYaw_Final_UpperBody = 0x11C0;
            static constexpr std::uintptr_t RiderAOYaw_ABSOLUTE_FINAL = 0x11C8;
            static constexpr std::uintptr_t MidStackRiderRootYawFinal = 0x11D0;
            static constexpr std::uintptr_t bSkipJumpJoinAdditive = 0x11D8;
            static constexpr std::uintptr_t bCarrierJustLanded = 0x11D9;
            static constexpr std::uintptr_t bCarrierIsJumping = 0x11DA;
            static constexpr std::uintptr_t bCarrierIsJumping_Delayed = 0x11DB;
            static constexpr std::uintptr_t bCarrier_IsMovingOnFoot = 0x11DC;
            static constexpr std::uintptr_t bDoYawLerp = 0x11DD;
            static constexpr std::uintptr_t bCarrierIsSliding = 0x11DE;
            static constexpr std::uintptr_t bAllowRootControl = 0x11DF;
            static constexpr std::uintptr_t bHasEmoteJoinTag = 0x11E0;
            static constexpr std::uintptr_t PawnRootCarrier = 0x11E8;
            static constexpr std::uintptr_t PawnTopRider = 0x11F0;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"RiderPelvisTranslationOffset", 0x1180, "StructProperty"},
            {"RiderAOYaw_Normalized_RootCarrierRelative", 0x1198, "FloatProperty"},
            {"RiderAOYaw_Final_UpperBody_Lerped", 0x119C, "FloatProperty"},
            {"RiderSlidePoseAlpha", 0x11A0, "FloatProperty"},
            {"RiderPelvisYawOffset", 0x11A4, "FloatProperty"},
            {"RiderLeanDirection", 0x11A8, "FloatProperty"},
            {"RiderLoco_AdditiveAlpha", 0x11B0, "DoubleProperty"},
            {"RiderLoco_PlayRate", 0x11B8, "DoubleProperty"},
            {"RiderAOYaw_Final_UpperBody", 0x11C0, "DoubleProperty"},
            {"RiderAOYaw_ABSOLUTE_FINAL", 0x11C8, "DoubleProperty"},
            {"MidStackRiderRootYawFinal", 0x11D0, "DoubleProperty"},
            {"bSkipJumpJoinAdditive", 0x11D8, "BoolProperty"},
            {"bCarrierJustLanded", 0x11D9, "BoolProperty"},
            {"bCarrierIsJumping", 0x11DA, "BoolProperty"},
            {"bCarrierIsJumping_Delayed", 0x11DB, "BoolProperty"},
            {"bCarrier_IsMovingOnFoot", 0x11DC, "BoolProperty"},
            {"bDoYawLerp", 0x11DD, "BoolProperty"},
            {"bCarrierIsSliding", 0x11DE, "BoolProperty"},
            {"bAllowRootControl", 0x11DF, "BoolProperty"},
            {"bHasEmoteJoinTag", 0x11E0, "BoolProperty"},
            {"PawnRootCarrier", 0x11E8, "ObjectProperty"},
            {"PawnTopRider", 0x11F0, "ObjectProperty"},
        }};
    };

}
