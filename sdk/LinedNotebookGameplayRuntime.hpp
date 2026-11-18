#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LinedNotebookGameplayRuntime
{
    struct LinedNotebookItemLayerAnimInstance
    {
        static constexpr std::string_view Name = "LinedNotebookItemLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t IsInAirAttackTag = 0x5F0;
            static constexpr std::uintptr_t IsDoubleJumpingTag = 0x5F4;
            static constexpr std::uintptr_t IsSurfaceSwimmingTag = 0x5F8;
            static constexpr std::uintptr_t IsRidingMotorcycleTag = 0x5FC;
            static constexpr std::uintptr_t IsGrindRailTag = 0x600;
            static constexpr std::uintptr_t DoubleJumpSequenceForward = 0x608;
            static constexpr std::uintptr_t DoubleJumpSequenceBackward = 0x610;
            static constexpr std::uintptr_t DoubleJumpSequenceLeft = 0x618;
            static constexpr std::uintptr_t DoubleJumpSequenceRight = 0x620;
            static constexpr std::uintptr_t EvergreenMotorcyclePose = 0x628;
            static constexpr std::uintptr_t EvergreenSlidingPose = 0x630;
            static constexpr std::uintptr_t EvergreenGrindRailPose = 0x638;
            static constexpr std::uintptr_t TacSprintHandPose = 0x640;
            static constexpr std::uintptr_t SwimUpperBodyAdditivePoseOffset = 0x648;
            static constexpr std::uintptr_t DashMontage = 0x650;
            static constexpr std::uintptr_t DeltaEquipMontage = 0x670;
            static constexpr std::uintptr_t SwingMontages = 0x690;
            static constexpr std::uintptr_t DeltaEquipBlendOut = 0x6A0;
            static constexpr std::uintptr_t bUseOceanRiverTacSprint = 0x6B0;
            static constexpr std::uintptr_t bUseDeltaTacSprint = 0x6B1;
            static constexpr std::uintptr_t bIsDelta = 0x6B2;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0x6B3;
            static constexpr std::uintptr_t DoubleJumpSequence = 0x6B8;
            static constexpr std::uintptr_t EvergreenPose = 0x6C0;
            static constexpr std::uintptr_t Yaw = 0x6C8;
            static constexpr std::uintptr_t YawAdjusted = 0x6CC;
            static constexpr std::uintptr_t Pitch = 0x6D0;
            static constexpr std::uintptr_t RotationAlpha = 0x6D4;
            static constexpr std::uintptr_t DeltaDoorBashRightArmAlpha = 0x6D8;
            static constexpr std::uintptr_t bIsDashLoop = 0x6DC;
            static constexpr std::uintptr_t bIsDeltaWaterJump = 0x6DC;
            static constexpr std::uintptr_t bIsDoubleJumpStart = 0x6DC;
            static constexpr std::uintptr_t bIsDoubleJumping = 0x6DC;
            static constexpr std::uintptr_t bIsExitDoubleJump = 0x6DC;
            static constexpr std::uintptr_t bIsNoDashOrDoubleJump = 0x6DC;
            static constexpr std::uintptr_t bIsNotDeltaSwimJump = 0x6DC;
            static constexpr std::uintptr_t bIsWaterLanding = 0x6DC;
            static constexpr std::uintptr_t bIsDeltaTacSprint = 0x6DD;
            static constexpr std::uintptr_t bIsDolphinDoubleJump = 0x6DD;
            static constexpr std::uintptr_t bIsEvergreenUB = 0x6DD;
            static constexpr std::uintptr_t bIsOceanRiverTacSprint = 0x6DD;
            static constexpr std::uintptr_t bIsParachuting = 0x6DD;
        };

        inline static constexpr std::array<PropertyInfo, 42> Properties{{
            {"IsInAirAttackTag", 0x5F0, "StructProperty"},
            {"IsDoubleJumpingTag", 0x5F4, "StructProperty"},
            {"IsSurfaceSwimmingTag", 0x5F8, "StructProperty"},
            {"IsRidingMotorcycleTag", 0x5FC, "StructProperty"},
            {"IsGrindRailTag", 0x600, "StructProperty"},
            {"DoubleJumpSequenceForward", 0x608, "ObjectProperty"},
            {"DoubleJumpSequenceBackward", 0x610, "ObjectProperty"},
            {"DoubleJumpSequenceLeft", 0x618, "ObjectProperty"},
            {"DoubleJumpSequenceRight", 0x620, "ObjectProperty"},
            {"EvergreenMotorcyclePose", 0x628, "ObjectProperty"},
            {"EvergreenSlidingPose", 0x630, "ObjectProperty"},
            {"EvergreenGrindRailPose", 0x638, "ObjectProperty"},
            {"TacSprintHandPose", 0x640, "ObjectProperty"},
            {"SwimUpperBodyAdditivePoseOffset", 0x648, "ObjectProperty"},
            {"DashMontage", 0x650, "SoftObjectProperty"},
            {"DeltaEquipMontage", 0x670, "SoftObjectProperty"},
            {"SwingMontages", 0x690, "ArrayProperty"},
            {"DeltaEquipBlendOut", 0x6A0, "StructProperty"},
            {"bUseOceanRiverTacSprint", 0x6B0, "BoolProperty"},
            {"bUseDeltaTacSprint", 0x6B1, "BoolProperty"},
            {"bIsDelta", 0x6B2, "BoolProperty"},
            {"bIsSurfaceSwimming", 0x6B3, "BoolProperty"},
            {"DoubleJumpSequence", 0x6B8, "ObjectProperty"},
            {"EvergreenPose", 0x6C0, "ObjectProperty"},
            {"Yaw", 0x6C8, "FloatProperty"},
            {"YawAdjusted", 0x6CC, "FloatProperty"},
            {"Pitch", 0x6D0, "FloatProperty"},
            {"RotationAlpha", 0x6D4, "FloatProperty"},
            {"DeltaDoorBashRightArmAlpha", 0x6D8, "FloatProperty"},
            {"bIsDashLoop", 0x6DC, "BoolProperty"},
            {"bIsDeltaWaterJump", 0x6DC, "BoolProperty"},
            {"bIsDoubleJumpStart", 0x6DC, "BoolProperty"},
            {"bIsDoubleJumping", 0x6DC, "BoolProperty"},
            {"bIsExitDoubleJump", 0x6DC, "BoolProperty"},
            {"bIsNoDashOrDoubleJump", 0x6DC, "BoolProperty"},
            {"bIsNotDeltaSwimJump", 0x6DC, "BoolProperty"},
            {"bIsWaterLanding", 0x6DC, "BoolProperty"},
            {"bIsDeltaTacSprint", 0x6DD, "BoolProperty"},
            {"bIsDolphinDoubleJump", 0x6DD, "BoolProperty"},
            {"bIsEvergreenUB", 0x6DD, "BoolProperty"},
            {"bIsOceanRiverTacSprint", 0x6DD, "BoolProperty"},
            {"bIsParachuting", 0x6DD, "BoolProperty"},
        }};
    };

    struct LinedNotebookLakeWeaponAnimInstance
    {
        static constexpr std::string_view Name = "LinedNotebookLakeWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Swing01Montages = 0x370;
            static constexpr std::uintptr_t Swing02Montages = 0x380;
            static constexpr std::uintptr_t Swing03Montages = 0x390;
            static constexpr std::uintptr_t Swing04Montages = 0x3A0;
            static constexpr std::uintptr_t Swing05Montages = 0x3B0;
            static constexpr std::uintptr_t UpperBodySwing01Montages = 0x3C0;
            static constexpr std::uintptr_t UpperBodySwing02Montages = 0x3D0;
            static constexpr std::uintptr_t InAirAttackMontages = 0x3E0;
            static constexpr std::uintptr_t bIsEquipping = 0x3F0;
            static constexpr std::uintptr_t bSwing01 = 0x3F1;
            static constexpr std::uintptr_t bSwing02 = 0x3F2;
            static constexpr std::uintptr_t bSwing03 = 0x3F3;
            static constexpr std::uintptr_t bSwing04 = 0x3F4;
            static constexpr std::uintptr_t bSwing05 = 0x3F5;
            static constexpr std::uintptr_t bIsUpperBodySwing01 = 0x3F6;
            static constexpr std::uintptr_t bIsUpperBodySwing02 = 0x3F7;
            static constexpr std::uintptr_t bIsAirLand = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Swing01Montages", 0x370, "ArrayProperty"},
            {"Swing02Montages", 0x380, "ArrayProperty"},
            {"Swing03Montages", 0x390, "ArrayProperty"},
            {"Swing04Montages", 0x3A0, "ArrayProperty"},
            {"Swing05Montages", 0x3B0, "ArrayProperty"},
            {"UpperBodySwing01Montages", 0x3C0, "ArrayProperty"},
            {"UpperBodySwing02Montages", 0x3D0, "ArrayProperty"},
            {"InAirAttackMontages", 0x3E0, "ArrayProperty"},
            {"bIsEquipping", 0x3F0, "BoolProperty"},
            {"bSwing01", 0x3F1, "BoolProperty"},
            {"bSwing02", 0x3F2, "BoolProperty"},
            {"bSwing03", 0x3F3, "BoolProperty"},
            {"bSwing04", 0x3F4, "BoolProperty"},
            {"bSwing05", 0x3F5, "BoolProperty"},
            {"bIsUpperBodySwing01", 0x3F6, "BoolProperty"},
            {"bIsUpperBodySwing02", 0x3F7, "BoolProperty"},
            {"bIsAirLand", 0x3F8, "BoolProperty"},
        }};
    };

    struct LinedNotebookRiverWeaponAnimInstance
    {
        static constexpr std::string_view Name = "LinedNotebookRiverWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t InAirMontages = 0x370;
            static constexpr std::uintptr_t bIsAirLand = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InAirMontages", 0x370, "ArrayProperty"},
            {"bIsAirLand", 0x380, "BoolProperty"},
        }};
    };

}
