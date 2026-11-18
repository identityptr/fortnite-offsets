#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SevenSlideRuntime
{
    struct FortMovementMode_SevenSlideGuidedMotion
    {
        static constexpr std::string_view Name = "FortMovementMode_SevenSlideGuidedMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtGuidedMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t HangTimeTag = 0x5A0;
            static constexpr std::uintptr_t HangTimeBlendOutTag = 0x5A4;
            static constexpr std::uintptr_t TagsRequiredOnceEstablished = 0x5A8;
            static constexpr std::uintptr_t ExistingVerticalSpeedContributionPercent = 0x5C8;
            static constexpr std::uintptr_t BaseSpeed = 0x5F8;
            static constexpr std::uintptr_t TurnDegreesPerSecond = 0x628;
            static constexpr std::uintptr_t EnableSlopeCalculation = 0x658;
            static constexpr std::uintptr_t SlopeMin = 0x688;
            static constexpr std::uintptr_t SlopeMax = 0x6B8;
            static constexpr std::uintptr_t SlopeMinMultiplier = 0x6E8;
            static constexpr std::uintptr_t SlopeMaxMultiplier = 0x718;
            static constexpr std::uintptr_t SlideStrengthOverTime = 0x748;
            static constexpr std::uintptr_t HangTimeSlowDownPercentage = 0x750;
            static constexpr std::uintptr_t RiseOutOfWaterVelocityZ = 0x780;
            static constexpr std::uintptr_t EstablishSeconds = 0x7B0;
            static constexpr std::uintptr_t SlowDownBlendRate = 0x7E0;
            static constexpr std::uintptr_t HangtimeSlowDownBlendRate = 0x7E4;
            static constexpr std::uintptr_t PostHangtimeBlendRate = 0x7E8;
            static constexpr std::uintptr_t bRiseOutOfWater = 0x7EC;
            static constexpr std::uintptr_t bBlendSpeed = 0x7ED;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"HangTimeTag", 0x5A0, "StructProperty"},
            {"HangTimeBlendOutTag", 0x5A4, "StructProperty"},
            {"TagsRequiredOnceEstablished", 0x5A8, "StructProperty"},
            {"ExistingVerticalSpeedContributionPercent", 0x5C8, "StructProperty"},
            {"BaseSpeed", 0x5F8, "StructProperty"},
            {"TurnDegreesPerSecond", 0x628, "StructProperty"},
            {"EnableSlopeCalculation", 0x658, "StructProperty"},
            {"SlopeMin", 0x688, "StructProperty"},
            {"SlopeMax", 0x6B8, "StructProperty"},
            {"SlopeMinMultiplier", 0x6E8, "StructProperty"},
            {"SlopeMaxMultiplier", 0x718, "StructProperty"},
            {"SlideStrengthOverTime", 0x748, "ObjectProperty"},
            {"HangTimeSlowDownPercentage", 0x750, "StructProperty"},
            {"RiseOutOfWaterVelocityZ", 0x780, "StructProperty"},
            {"EstablishSeconds", 0x7B0, "StructProperty"},
            {"SlowDownBlendRate", 0x7E0, "FloatProperty"},
            {"HangtimeSlowDownBlendRate", 0x7E4, "FloatProperty"},
            {"PostHangtimeBlendRate", 0x7E8, "FloatProperty"},
            {"bRiseOutOfWater", 0x7EC, "BoolProperty"},
            {"bBlendSpeed", 0x7ED, "BoolProperty"},
        }};
    };

    struct FortMovementMode_SevenSlideGuidedMotionRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SevenSlideGuidedMotionRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_GuidedMotionRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalSlideReferenceVector = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocalSlideReferenceVector", 0x240, "StructProperty"},
        }};
    };

    struct SevenSlideAttributeSet
    {
        static constexpr std::string_view Name = "SevenSlideAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxFuel = 0x50;
            static constexpr std::uintptr_t Fuel = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxFuel", 0x50, "StructProperty"},
            {"Fuel", 0x78, "StructProperty"},
        }};
    };

    struct SevenSlideLayerAnimInstance
    {
        static constexpr std::string_view Name = "SevenSlideLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t Rot_Spine03 = 0x1180;
            static constexpr std::uintptr_t Rot_Spine04 = 0x1198;
            static constexpr std::uintptr_t Rot_Pelvis = 0x11B0;
            static constexpr std::uintptr_t Rot_Spine05 = 0x11C8;
            static constexpr std::uintptr_t Rot_Spine02 = 0x11E0;
            static constexpr std::uintptr_t Rot_Spine01 = 0x11F8;
            static constexpr std::uintptr_t Rot_Neck01 = 0x1210;
            static constexpr std::uintptr_t Rot_Head = 0x1228;
            static constexpr std::uintptr_t SevenSlide_LegIK_Alpha = 0x1240;
            static constexpr std::uintptr_t Pelvis_InputRot_Alpha = 0x1244;
            static constexpr std::uintptr_t Head_InputRot_Alpha = 0x1248;
            static constexpr std::uintptr_t Spine_InputRot_Alpha = 0x124C;
            static constexpr std::uintptr_t EnableTurnOrLeanBS = 0x1250;
            static constexpr std::uintptr_t InputLR = 0x1258;
            static constexpr std::uintptr_t InputFwBw = 0x1260;
            static constexpr std::uintptr_t LeanAmount = 0x1268;
            static constexpr std::uintptr_t TurnAmount = 0x1270;
            static constexpr std::uintptr_t bUseTurnBS = 0x1278;
            static constexpr std::uintptr_t bTransitionRule_ConduitToFw = 0x1279;
            static constexpr std::uintptr_t bTransitionRule_ConduitToBw = 0x127A;
            static constexpr std::uintptr_t bTransitionRule_ConduitToLSlowmo = 0x127B;
            static constexpr std::uintptr_t bTransitionRule_ConduitToBwSlowmo = 0x127C;
            static constexpr std::uintptr_t bTransitionRule_ConduitToFwSlowmo = 0x127D;
            static constexpr std::uintptr_t bTransitionRule_ConduitToRSlowmo = 0x127E;
            static constexpr std::uintptr_t bTransitionRule_ConduitToR = 0x127F;
            static constexpr std::uintptr_t bTransitionRule_ConduitToL = 0x1280;
            static constexpr std::uintptr_t bSlider_IsEquipped = 0x1281;
            static constexpr std::uintptr_t bIsSlowMo = 0x1282;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"Rot_Spine03", 0x1180, "StructProperty"},
            {"Rot_Spine04", 0x1198, "StructProperty"},
            {"Rot_Pelvis", 0x11B0, "StructProperty"},
            {"Rot_Spine05", 0x11C8, "StructProperty"},
            {"Rot_Spine02", 0x11E0, "StructProperty"},
            {"Rot_Spine01", 0x11F8, "StructProperty"},
            {"Rot_Neck01", 0x1210, "StructProperty"},
            {"Rot_Head", 0x1228, "StructProperty"},
            {"SevenSlide_LegIK_Alpha", 0x1240, "FloatProperty"},
            {"Pelvis_InputRot_Alpha", 0x1244, "FloatProperty"},
            {"Head_InputRot_Alpha", 0x1248, "FloatProperty"},
            {"Spine_InputRot_Alpha", 0x124C, "FloatProperty"},
            {"EnableTurnOrLeanBS", 0x1250, "FloatProperty"},
            {"InputLR", 0x1258, "DoubleProperty"},
            {"InputFwBw", 0x1260, "DoubleProperty"},
            {"LeanAmount", 0x1268, "DoubleProperty"},
            {"TurnAmount", 0x1270, "DoubleProperty"},
            {"bUseTurnBS", 0x1278, "BoolProperty"},
            {"bTransitionRule_ConduitToFw", 0x1279, "BoolProperty"},
            {"bTransitionRule_ConduitToBw", 0x127A, "BoolProperty"},
            {"bTransitionRule_ConduitToLSlowmo", 0x127B, "BoolProperty"},
            {"bTransitionRule_ConduitToBwSlowmo", 0x127C, "BoolProperty"},
            {"bTransitionRule_ConduitToFwSlowmo", 0x127D, "BoolProperty"},
            {"bTransitionRule_ConduitToRSlowmo", 0x127E, "BoolProperty"},
            {"bTransitionRule_ConduitToR", 0x127F, "BoolProperty"},
            {"bTransitionRule_ConduitToL", 0x1280, "BoolProperty"},
            {"bSlider_IsEquipped", 0x1281, "BoolProperty"},
            {"bIsSlowMo", 0x1282, "BoolProperty"},
        }};
    };

    struct SevenSliderBootsCCPAnimInstance
    {
        static constexpr std::string_view Name = "SevenSliderBootsCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t OppositeLeanAmount = 0x640;
            static constexpr std::uintptr_t LeanAmount = 0x648;
            static constexpr std::uintptr_t bIsSlowMo = 0x650;
            static constexpr std::uintptr_t bIsOverheated = 0x651;
            static constexpr std::uintptr_t bSliderIsSliding = 0x652;
            static constexpr std::uintptr_t InInventoryTagName = 0x654;
            static constexpr std::uintptr_t ActiveWindowTagName = 0x658;
            static constexpr std::uintptr_t OverheatTagName = 0x65C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OppositeLeanAmount", 0x640, "DoubleProperty"},
            {"LeanAmount", 0x648, "DoubleProperty"},
            {"bIsSlowMo", 0x650, "BoolProperty"},
            {"bIsOverheated", 0x651, "BoolProperty"},
            {"bSliderIsSliding", 0x652, "BoolProperty"},
            {"InInventoryTagName", 0x654, "StructProperty"},
            {"ActiveWindowTagName", 0x658, "StructProperty"},
            {"OverheatTagName", 0x65C, "StructProperty"},
        }};
    };

}
