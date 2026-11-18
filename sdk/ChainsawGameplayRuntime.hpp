#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChainsawGameplayRuntime
{
    struct ChainsawAnimInstance
    {
        static constexpr std::string_view Name = "ChainsawAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ChainPlayRate = 0x260;
            static constexpr std::uintptr_t bIsSpinning = 0x268;
            static constexpr std::uintptr_t bIsSprinting = 0x269;
            static constexpr std::uintptr_t bIsEquip = 0x26A;
            static constexpr std::uintptr_t bIsNotEquip = 0x26B;
            static constexpr std::uintptr_t bIsFalling = 0x26C;
            static constexpr std::uintptr_t bIsSliding = 0x26D;
            static constexpr std::uintptr_t SprintTagName = 0x270;
            static constexpr std::uintptr_t EquippedTagName = 0x274;
            static constexpr std::uintptr_t FallingTagName = 0x278;
            static constexpr std::uintptr_t SlidingTagName = 0x27C;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ChainPlayRate", 0x260, "DoubleProperty"},
            {"bIsSpinning", 0x268, "BoolProperty"},
            {"bIsSprinting", 0x269, "BoolProperty"},
            {"bIsEquip", 0x26A, "BoolProperty"},
            {"bIsNotEquip", 0x26B, "BoolProperty"},
            {"bIsFalling", 0x26C, "BoolProperty"},
            {"bIsSliding", 0x26D, "BoolProperty"},
            {"SprintTagName", 0x270, "StructProperty"},
            {"EquippedTagName", 0x274, "StructProperty"},
            {"FallingTagName", 0x278, "StructProperty"},
            {"SlidingTagName", 0x27C, "StructProperty"},
        }};
    };

    struct ChainsawAttributeSet
    {
        static constexpr std::string_view Name = "ChainsawAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t Overheat = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Overheat", 0x48, "StructProperty"},
        }};
    };

    struct ChainsawLayerAnimInstance
    {
        static constexpr std::string_view Name = "ChainsawLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsChainsawScooter = 0x1180;
            static constexpr std::uintptr_t LeanX = 0x1184;
            static constexpr std::uintptr_t LeanY = 0x1188;
            static constexpr std::uintptr_t bIsFallingIntoScooter = 0x118C;
            static constexpr std::uintptr_t bIsScooterFalling = 0x118D;
            static constexpr std::uintptr_t bIsNotChainsawScooter = 0x118E;
            static constexpr std::uintptr_t CustomMeleeTwist = 0x1190;
            static constexpr std::uintptr_t bIsNotEquip = 0x1194;
            static constexpr std::uintptr_t ChainsawScooterPelvisOffset = 0x1198;
            static constexpr std::uintptr_t bIsUpperBodyEquip = 0x119C;
            static constexpr std::uintptr_t ForwardSpeedInterp = 0x11A0;
            static constexpr std::uintptr_t LateralSpeedInterp = 0x11A8;
            static constexpr std::uintptr_t bIsSlidingMovementMode = 0x11B0;
            static constexpr std::uintptr_t bIsOtherMovementMode = 0x11B1;
            static constexpr std::uintptr_t StartedSharpTurnTagName = 0x11B4;
            static constexpr std::uintptr_t EndedSharpTurnTagName = 0x11B8;
            static constexpr std::uintptr_t FallingIntoScooterTagName = 0x11BC;
            static constexpr std::uintptr_t HoldingScooterButtonTagName = 0x11C0;
            static constexpr std::uintptr_t ScooteringTagName = 0x11C4;
            static constexpr std::uintptr_t ZipLiningOnSplineTagName = 0x11C8;
            static constexpr std::uintptr_t SurfaceSwimmingTagName = 0x11CC;
            static constexpr std::uintptr_t ParachutingTagName = 0x11D0;
            static constexpr std::uintptr_t SkydivingTagName = 0x11D4;
            static constexpr std::uintptr_t BallooningTagName = 0x11D8;
            static constexpr std::uintptr_t GrindingTagName = 0x11DC;
            static constexpr std::uintptr_t SlidingTagName = 0x11E0;
            static constexpr std::uintptr_t DrivingTagName = 0x11E4;
            static constexpr std::uintptr_t PassengerTagName = 0x11E8;
            static constexpr std::uintptr_t ChainsawTagName = 0x11EC;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"bIsChainsawScooter", 0x1180, "BoolProperty"},
            {"LeanX", 0x1184, "FloatProperty"},
            {"LeanY", 0x1188, "FloatProperty"},
            {"bIsFallingIntoScooter", 0x118C, "BoolProperty"},
            {"bIsScooterFalling", 0x118D, "BoolProperty"},
            {"bIsNotChainsawScooter", 0x118E, "BoolProperty"},
            {"CustomMeleeTwist", 0x1190, "FloatProperty"},
            {"bIsNotEquip", 0x1194, "BoolProperty"},
            {"ChainsawScooterPelvisOffset", 0x1198, "FloatProperty"},
            {"bIsUpperBodyEquip", 0x119C, "BoolProperty"},
            {"ForwardSpeedInterp", 0x11A0, "DoubleProperty"},
            {"LateralSpeedInterp", 0x11A8, "DoubleProperty"},
            {"bIsSlidingMovementMode", 0x11B0, "BoolProperty"},
            {"bIsOtherMovementMode", 0x11B1, "BoolProperty"},
            {"StartedSharpTurnTagName", 0x11B4, "StructProperty"},
            {"EndedSharpTurnTagName", 0x11B8, "StructProperty"},
            {"FallingIntoScooterTagName", 0x11BC, "StructProperty"},
            {"HoldingScooterButtonTagName", 0x11C0, "StructProperty"},
            {"ScooteringTagName", 0x11C4, "StructProperty"},
            {"ZipLiningOnSplineTagName", 0x11C8, "StructProperty"},
            {"SurfaceSwimmingTagName", 0x11CC, "StructProperty"},
            {"ParachutingTagName", 0x11D0, "StructProperty"},
            {"SkydivingTagName", 0x11D4, "StructProperty"},
            {"BallooningTagName", 0x11D8, "StructProperty"},
            {"GrindingTagName", 0x11DC, "StructProperty"},
            {"SlidingTagName", 0x11E0, "StructProperty"},
            {"DrivingTagName", 0x11E4, "StructProperty"},
            {"PassengerTagName", 0x11E8, "StructProperty"},
            {"ChainsawTagName", 0x11EC, "StructProperty"},
        }};
    };

    struct FortMovementMode_ChainsawRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ChainsawRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ItemActivatedRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortMovementMode_ExtChainsaw
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtChainsaw";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ItemActivated";
        struct Offsets
        {
            static constexpr std::uintptr_t TAG_Scootering = 0x1E0;
            static constexpr std::uintptr_t TAG_BlockedByObstacle = 0x1E4;
            static constexpr std::uintptr_t TAG_StopSawScooter = 0x1E8;
            static constexpr std::uintptr_t TAG_StopSawScooterFromLedgeFall = 0x1EC;
            static constexpr std::uintptr_t TAG_StartedSharpTurn = 0x1F0;
            static constexpr std::uintptr_t TAG_EndedSharpTurn = 0x1F4;
            static constexpr std::uintptr_t SpeedDefault = 0x1F8;
            static constexpr std::uintptr_t SpeedBlocked = 0x228;
            static constexpr std::uintptr_t SpeedSharpTurn = 0x258;
            static constexpr std::uintptr_t InterpSpeedDefault = 0x288;
            static constexpr std::uintptr_t InterpSpeedBlocked = 0x2B8;
            static constexpr std::uintptr_t TurnSpeedDefault = 0x2E8;
            static constexpr std::uintptr_t TurnSpeedSharpTurn = 0x318;
            static constexpr std::uintptr_t DotProductSharpTurn = 0x348;
            static constexpr std::uintptr_t DotProductStraightenedOut = 0x378;
            static constexpr std::uintptr_t MinTimeForSharpTurn = 0x3A8;
            static constexpr std::uintptr_t GoalDirectionThreshold = 0x3D8;
            static constexpr std::uintptr_t bDeNativize = 0x408;
            static constexpr std::uintptr_t DenativizedRuntimeDataClass = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TAG_Scootering", 0x1E0, "StructProperty"},
            {"TAG_BlockedByObstacle", 0x1E4, "StructProperty"},
            {"TAG_StopSawScooter", 0x1E8, "StructProperty"},
            {"TAG_StopSawScooterFromLedgeFall", 0x1EC, "StructProperty"},
            {"TAG_StartedSharpTurn", 0x1F0, "StructProperty"},
            {"TAG_EndedSharpTurn", 0x1F4, "StructProperty"},
            {"SpeedDefault", 0x1F8, "StructProperty"},
            {"SpeedBlocked", 0x228, "StructProperty"},
            {"SpeedSharpTurn", 0x258, "StructProperty"},
            {"InterpSpeedDefault", 0x288, "StructProperty"},
            {"InterpSpeedBlocked", 0x2B8, "StructProperty"},
            {"TurnSpeedDefault", 0x2E8, "StructProperty"},
            {"TurnSpeedSharpTurn", 0x318, "StructProperty"},
            {"DotProductSharpTurn", 0x348, "StructProperty"},
            {"DotProductStraightenedOut", 0x378, "StructProperty"},
            {"MinTimeForSharpTurn", 0x3A8, "StructProperty"},
            {"GoalDirectionThreshold", 0x3D8, "StructProperty"},
            {"bDeNativize", 0x408, "BoolProperty"},
            {"DenativizedRuntimeDataClass", 0x410, "ClassProperty"},
        }};
    };

}
