#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CaretakerRuntime
{
    struct FortAIAnimInstance_Caretaker
    {
        static constexpr std::string_view Name = "FortAIAnimInstance_Caretaker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsMoving = 0x4A0;
            static constexpr std::uintptr_t WalkPlayrate = 0x4A4;
            static constexpr std::uintptr_t AimOffsetCurve = 0x4A8;
            static constexpr std::uintptr_t bFootPhase_StopLeftPlant = 0x4AC;
            static constexpr std::uintptr_t bFootPhase_StopLeftPass = 0x4AD;
            static constexpr std::uintptr_t bFootPhase_StopRightPlant = 0x4AE;
            static constexpr std::uintptr_t bFootPhase_StopRightPass = 0x4AF;
            static constexpr std::uintptr_t BreathingCurve = 0x4B0;
            static constexpr std::uintptr_t MovingTreshold = 0x4B4;
            static constexpr std::uintptr_t CurveName_AimOffsetCurve = 0x4B8;
            static constexpr std::uintptr_t CurveName_FootPhase = 0x4BC;
            static constexpr std::uintptr_t CurveName_BreathingCurve = 0x4C0;
            static constexpr std::uintptr_t SocketName_FX_Chest = 0x4C4;
            static constexpr std::uintptr_t ParamName_ChestSocketLocation = 0x4C8;
            static constexpr std::uintptr_t ParamName_ChestSocketVector = 0x4CC;
            static constexpr std::uintptr_t FirstFootPhaseMin = 0x4D0;
            static constexpr std::uintptr_t SecondFootPhaseMin = 0x4D4;
            static constexpr std::uintptr_t ThirdFootPhaseMin = 0x4D8;
            static constexpr std::uintptr_t FourthFootPhaseMin = 0x4DC;
            static constexpr std::uintptr_t FootPhaseMax = 0x4E0;
            static constexpr std::uintptr_t WorldStriderComponent = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsMoving", 0x4A0, "BoolProperty"},
            {"WalkPlayrate", 0x4A4, "FloatProperty"},
            {"AimOffsetCurve", 0x4A8, "FloatProperty"},
            {"bFootPhase_StopLeftPlant", 0x4AC, "BoolProperty"},
            {"bFootPhase_StopLeftPass", 0x4AD, "BoolProperty"},
            {"bFootPhase_StopRightPlant", 0x4AE, "BoolProperty"},
            {"bFootPhase_StopRightPass", 0x4AF, "BoolProperty"},
            {"BreathingCurve", 0x4B0, "FloatProperty"},
            {"MovingTreshold", 0x4B4, "FloatProperty"},
            {"CurveName_AimOffsetCurve", 0x4B8, "NameProperty"},
            {"CurveName_FootPhase", 0x4BC, "NameProperty"},
            {"CurveName_BreathingCurve", 0x4C0, "NameProperty"},
            {"SocketName_FX_Chest", 0x4C4, "NameProperty"},
            {"ParamName_ChestSocketLocation", 0x4C8, "NameProperty"},
            {"ParamName_ChestSocketVector", 0x4CC, "NameProperty"},
            {"FirstFootPhaseMin", 0x4D0, "FloatProperty"},
            {"SecondFootPhaseMin", 0x4D4, "FloatProperty"},
            {"ThirdFootPhaseMin", 0x4D8, "FloatProperty"},
            {"FourthFootPhaseMin", 0x4DC, "FloatProperty"},
            {"FootPhaseMax", 0x4E0, "FloatProperty"},
            {"WorldStriderComponent", 0x4E8, "ObjectProperty"},
        }};
    };

    struct FortAITask_CaretakerMove
    {
        static constexpr std::string_view Name = "FortAITask_CaretakerMove";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAbilityTask_MoveAI";
        struct Offsets
        {
            static constexpr std::uintptr_t OnComplete = 0x190;
            static constexpr std::uintptr_t OnInterrupted = 0x1A0;
            static constexpr std::uintptr_t OnCancelled = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnComplete", 0x190, "MulticastInlineDelegateProperty"},
            {"OnInterrupted", 0x1A0, "MulticastInlineDelegateProperty"},
            {"OnCancelled", 0x1B0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAthenaCaretakerAIController
    {
        static constexpr std::string_view Name = "FortAthenaCaretakerAIController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIController";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalActorDistancesNotifies = 0x5B8;
            static constexpr std::uintptr_t PrimaryMeleeAttackAbilityInstance = 0x610;
            static constexpr std::uintptr_t PrimaryRangedAttackAbilityInstance = 0x618;
            static constexpr std::uintptr_t NavWalkingSearchExtentScale = 0x620;
            static constexpr std::uintptr_t CheapFlyingNavPointHorizontalGridRatio = 0x638;
            static constexpr std::uintptr_t CheapFlyingNavNavPointVerticalGridRatio = 0x63C;
            static constexpr std::uintptr_t CheapFlyingNavSmashableAbilityTag = 0x640;
            static constexpr std::uintptr_t bAllowBacktrackPathfinding = 0x660;
            static constexpr std::uintptr_t bAutoAttackOnMovedHit = 0x660;
            static constexpr std::uintptr_t bAutoGenerateHotspotOnPlayerBuildings = 0x660;
            static constexpr std::uintptr_t bAutomaticallyChooseClosestTargetAsGoal = 0x660;
            static constexpr std::uintptr_t bEnableCheapFlyingNavigation = 0x660;
            static constexpr std::uintptr_t bIsGoalRequiredForBehavior = 0x660;
            static constexpr std::uintptr_t bRegisterToAthenaAIDropper = 0x661;
            static constexpr std::uintptr_t SecondaryGoalActor = 0x668;
            static constexpr std::uintptr_t AttackCheckInterval = 0x670;
            static constexpr std::uintptr_t MeleeAttackCheckDistance = 0x674;
            static constexpr std::uintptr_t RangedAttackCheckDistance = 0x678;
            static constexpr std::uintptr_t BacktrackingZThreshold = 0x67C;
            static constexpr std::uintptr_t bAllowBacktracking = 0x680;
            static constexpr std::uintptr_t bAllowPawnRVOWeightOverrides = 0x681;
            static constexpr std::uintptr_t AthenaPFC = 0x690;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"GoalActorDistancesNotifies", 0x5B8, "ArrayProperty"},
            {"PrimaryMeleeAttackAbilityInstance", 0x610, "ObjectProperty"},
            {"PrimaryRangedAttackAbilityInstance", 0x618, "ObjectProperty"},
            {"NavWalkingSearchExtentScale", 0x620, "StructProperty"},
            {"CheapFlyingNavPointHorizontalGridRatio", 0x638, "FloatProperty"},
            {"CheapFlyingNavNavPointVerticalGridRatio", 0x63C, "FloatProperty"},
            {"CheapFlyingNavSmashableAbilityTag", 0x640, "StructProperty"},
            {"bAllowBacktrackPathfinding", 0x660, "BoolProperty"},
            {"bAutoAttackOnMovedHit", 0x660, "BoolProperty"},
            {"bAutoGenerateHotspotOnPlayerBuildings", 0x660, "BoolProperty"},
            {"bAutomaticallyChooseClosestTargetAsGoal", 0x660, "BoolProperty"},
            {"bEnableCheapFlyingNavigation", 0x660, "BoolProperty"},
            {"bIsGoalRequiredForBehavior", 0x660, "BoolProperty"},
            {"bRegisterToAthenaAIDropper", 0x661, "BoolProperty"},
            {"SecondaryGoalActor", 0x668, "ObjectProperty"},
            {"AttackCheckInterval", 0x670, "FloatProperty"},
            {"MeleeAttackCheckDistance", 0x674, "FloatProperty"},
            {"RangedAttackCheckDistance", 0x678, "FloatProperty"},
            {"BacktrackingZThreshold", 0x67C, "FloatProperty"},
            {"bAllowBacktracking", 0x680, "BoolProperty"},
            {"bAllowPawnRVOWeightOverrides", 0x681, "BoolProperty"},
            {"AthenaPFC", 0x690, "ObjectProperty"},
        }};
    };

    struct FortBTTask_CaretakerMoveTo
    {
        static constexpr std::string_view Name = "FortBTTask_CaretakerMoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalPointWhileMoving = 0x1B0;
            static constexpr std::uintptr_t PathObstacleAction = 0x1D8;
            static constexpr std::uintptr_t bEnableSlowdownAtGoal = 0x1DC;
            static constexpr std::uintptr_t bFinishMoveOnOverlap = 0x1DC;
            static constexpr std::uintptr_t bMoveDirectlyTowards = 0x1DC;
            static constexpr std::uintptr_t bStopAtGoal = 0x1DC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FocalPointWhileMoving", 0x1B0, "StructProperty"},
            {"PathObstacleAction", 0x1D8, "ByteProperty"},
            {"bEnableSlowdownAtGoal", 0x1DC, "BoolProperty"},
            {"bFinishMoveOnOverlap", 0x1DC, "BoolProperty"},
            {"bMoveDirectlyTowards", 0x1DC, "BoolProperty"},
            {"bStopAtGoal", 0x1DC, "BoolProperty"},
        }};
    };

    struct FortNavigationFilter_Caretaker
    {
        static constexpr std::string_view Name = "FortNavigationFilter_Caretaker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t EndPointAcceptableRadius = 0x48;
            static constexpr std::uintptr_t EndPointFilterClass = 0x50;
            static constexpr std::uintptr_t bEndPointReachTestIncludesAgentRadius = 0x58;
            static constexpr std::uintptr_t bEndPointReachTestIncludesGoalRadius = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EndPointAcceptableRadius", 0x48, "FloatProperty"},
            {"EndPointFilterClass", 0x50, "ClassProperty"},
            {"bEndPointReachTestIncludesAgentRadius", 0x58, "BoolProperty"},
            {"bEndPointReachTestIncludesGoalRadius", 0x58, "BoolProperty"},
        }};
    };

}
