#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SourForkRuntime
{
    struct BananaAnimInstance
    {
        static constexpr std::string_view Name = "BananaAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LookAtBusYaw = 0x260;
            static constexpr std::uintptr_t LookAtBusPitch = 0x268;
            static constexpr std::uintptr_t bIsSpawn = 0x270;
            static constexpr std::uintptr_t BananaAOAlphaValue = 0x274;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LookAtBusYaw", 0x260, "DoubleProperty"},
            {"LookAtBusPitch", 0x268, "DoubleProperty"},
            {"bIsSpawn", 0x270, "BoolProperty"},
            {"BananaAOAlphaValue", 0x274, "FloatProperty"},
        }};
    };

    struct BananaSpawnerInterface
    {
        static constexpr std::string_view Name = "BananaSpawnerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameStateComponent_SourFork
    {
        static constexpr std::string_view Name = "FortGameStateComponent_SourFork";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_GiantPawnMode";
        struct Offsets
        {
            static constexpr std::uintptr_t PortalSpawnTime = 0xDC;
            static constexpr std::uintptr_t EnteredPlayerID = 0xE0;
            static constexpr std::uintptr_t TopDamagePlayerID = 0xF0;
            static constexpr std::uintptr_t TopDamage = 0x100;
            static constexpr std::uintptr_t TotalDamageRecieved = 0x104;
            static constexpr std::uintptr_t SessionStartTime = 0x108;
            static constexpr std::uintptr_t SessionEndTime = 0x10C;
            static constexpr std::uintptr_t PortalSpawnLocation = 0x110;
            static constexpr std::uintptr_t SessionStartLocation = 0x128;
            static constexpr std::uintptr_t SessionEndLocation = 0x140;
            static constexpr std::uintptr_t TotalWeakpointHits = 0x158;
            static constexpr std::uintptr_t TotalWeakpointsDestroyed = 0x15C;
            static constexpr std::uintptr_t PortalEnteredTime = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"PortalSpawnTime", 0xDC, "FloatProperty"},
            {"EnteredPlayerID", 0xE0, "StrProperty"},
            {"TopDamagePlayerID", 0xF0, "StrProperty"},
            {"TopDamage", 0x100, "FloatProperty"},
            {"TotalDamageRecieved", 0x104, "FloatProperty"},
            {"SessionStartTime", 0x108, "FloatProperty"},
            {"SessionEndTime", 0x10C, "FloatProperty"},
            {"PortalSpawnLocation", 0x110, "StructProperty"},
            {"SessionStartLocation", 0x128, "StructProperty"},
            {"SessionEndLocation", 0x140, "StructProperty"},
            {"TotalWeakpointHits", 0x158, "IntProperty"},
            {"TotalWeakpointsDestroyed", 0x15C, "IntProperty"},
            {"PortalEnteredTime", 0x160, "FloatProperty"},
        }};
    };

    struct FortMovementMode_SourForkWalking
    {
        static constexpr std::string_view Name = "FortMovementMode_SourForkWalking";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_GiantWalking";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationSpeedDegSecs = 0x1F8;
            static constexpr std::uintptr_t MaxGiantWalkingSpeed = 0x220;
            static constexpr std::uintptr_t MaxGiantReverseWalkingSpeed = 0x248;
            static constexpr std::uintptr_t GiantWalkingBrakingSpeed = 0x270;
            static constexpr std::uintptr_t MaxMovementAcceleration = 0x298;
            static constexpr std::uintptr_t CapsuleHoverHeight = 0x2C0;
            static constexpr std::uintptr_t ServerCorrectionDistanceTolerance = 0x2EC;
            static constexpr std::uintptr_t AngleFromBackVectorToReverseWalk = 0x2F0;
            static constexpr std::uintptr_t FastTurnVelocityThreshold = 0x2F4;
            static constexpr std::uintptr_t FastTurnSpeed = 0x2F8;
            static constexpr std::uintptr_t BeamingRotationSpeed = 0x2FC;
            static constexpr std::uintptr_t DebugVisualizerOffset = 0x300;
            static constexpr std::uintptr_t GroundGridConfig = 0x318;
            static constexpr std::uintptr_t bUseNativeLogic = 0x338;
            static constexpr std::uintptr_t bNativeUseSuperMoveUpdatedComponent = 0x339;
            static constexpr std::uintptr_t bEnableRecursiveGlide = 0x33A;
            static constexpr std::uintptr_t BlockMoveTags = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"RotationSpeedDegSecs", 0x1F8, "StructProperty"},
            {"MaxGiantWalkingSpeed", 0x220, "StructProperty"},
            {"MaxGiantReverseWalkingSpeed", 0x248, "StructProperty"},
            {"GiantWalkingBrakingSpeed", 0x270, "StructProperty"},
            {"MaxMovementAcceleration", 0x298, "StructProperty"},
            {"CapsuleHoverHeight", 0x2C0, "StructProperty"},
            {"ServerCorrectionDistanceTolerance", 0x2EC, "FloatProperty"},
            {"AngleFromBackVectorToReverseWalk", 0x2F0, "FloatProperty"},
            {"FastTurnVelocityThreshold", 0x2F4, "FloatProperty"},
            {"FastTurnSpeed", 0x2F8, "FloatProperty"},
            {"BeamingRotationSpeed", 0x2FC, "FloatProperty"},
            {"DebugVisualizerOffset", 0x300, "StructProperty"},
            {"GroundGridConfig", 0x318, "StructProperty"},
            {"bUseNativeLogic", 0x338, "BoolProperty"},
            {"bNativeUseSuperMoveUpdatedComponent", 0x339, "BoolProperty"},
            {"bEnableRecursiveGlide", 0x33A, "BoolProperty"},
            {"BlockMoveTags", 0x340, "StructProperty"},
        }};
    };

    struct FortMovementMode_SourForkWalkingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SourForkWalkingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_GiantWalkingRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementInput = 0x38;
            static constexpr std::uintptr_t DesiredControlYaw = 0x48;
            static constexpr std::uintptr_t StartYaw = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MovementInput", 0x38, "StructProperty"},
            {"DesiredControlYaw", 0x48, "FloatProperty"},
            {"StartYaw", 0x4C, "FloatProperty"},
        }};
    };

    struct SourForkAnimInstance
    {
        static constexpr std::string_view Name = "SourForkAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsExit = 0x340;
            static constexpr std::uintptr_t bIsStomp = 0x341;
            static constexpr std::uintptr_t bIsHeatRay = 0x342;
            static constexpr std::uintptr_t HeatRayAimYaw = 0x348;
            static constexpr std::uintptr_t AimPitchInterp = 0x350;
            static constexpr std::uintptr_t AimYawInterp = 0x358;
            static constexpr std::uintptr_t HeatRayAimPitch = 0x360;
            static constexpr std::uintptr_t bIsHeatRayAO = 0x368;
            static constexpr std::uintptr_t bIsInputFront = 0x369;
            static constexpr std::uintptr_t bIsInputBack = 0x36A;
            static constexpr std::uintptr_t MoveStartBPlayRate = 0x370;
            static constexpr std::uintptr_t bIsHeatRayAndTurn = 0x378;
            static constexpr std::uintptr_t HeatRayLowerBodyAdditiveAlpha = 0x380;
            static constexpr std::uintptr_t HeatRayTurnPoseAlpha = 0x388;
            static constexpr std::uintptr_t RootBoneRot = 0x390;
            static constexpr std::uintptr_t TurnInPlaceAmount = 0x3A8;
            static constexpr std::uintptr_t HeatRayAdditiveAlpha = 0x3B0;
            static constexpr std::uintptr_t RootBoneRotRate = 0x3B8;
            static constexpr std::uintptr_t TailCurveAddAlpha = 0x3C0;
            static constexpr std::uintptr_t LeftFootPlantAlpha = 0x3C8;
            static constexpr std::uintptr_t RightFootPlantAlpha = 0x3D0;
            static constexpr std::uintptr_t TailTraceZInterp = 0x3D8;
            static constexpr std::uintptr_t bIsIntroAnimStateExit = 0x3E0;
            static constexpr std::uintptr_t bIsIntro = 0x3E1;
            static constexpr std::uintptr_t bIsMoveStartFL = 0x3E2;
            static constexpr std::uintptr_t bIsMoveStartFR = 0x3E3;
            static constexpr std::uintptr_t bIsMoveStopFL = 0x3E4;
            static constexpr std::uintptr_t bIsMoveStopFR = 0x3E5;
            static constexpr std::uintptr_t bIsMoveStopFRHard = 0x3E6;
            static constexpr std::uintptr_t bIsMoveStartB = 0x3E7;
            static constexpr std::uintptr_t bIsMoveStopBL = 0x3E8;
            static constexpr std::uintptr_t bIsMoveStopBR = 0x3E9;
            static constexpr std::uintptr_t bIsTurningInPlace = 0x3EA;
            static constexpr std::uintptr_t bIsTurnRightInPlace = 0x3EB;
            static constexpr std::uintptr_t bIsTurnLeftInPlace = 0x3EC;
            static constexpr std::uintptr_t bIsHeatRayTurningInPlace = 0x3ED;
            static constexpr std::uintptr_t bIsHeatRayTurnRightInPlace = 0x3EE;
            static constexpr std::uintptr_t bIsHeatRayTurnLeftInPlace = 0x3EF;
            static constexpr std::uintptr_t StompMontage = 0x3F0;
            static constexpr std::uintptr_t ExitMontage = 0x410;
            static constexpr std::uintptr_t HeatRayMontage = 0x430;
            static constexpr std::uintptr_t RoarOrHitMontages = 0x450;
        };

        inline static constexpr std::array<PropertyInfo, 42> Properties{{
            {"bIsExit", 0x340, "BoolProperty"},
            {"bIsStomp", 0x341, "BoolProperty"},
            {"bIsHeatRay", 0x342, "BoolProperty"},
            {"HeatRayAimYaw", 0x348, "DoubleProperty"},
            {"AimPitchInterp", 0x350, "DoubleProperty"},
            {"AimYawInterp", 0x358, "DoubleProperty"},
            {"HeatRayAimPitch", 0x360, "DoubleProperty"},
            {"bIsHeatRayAO", 0x368, "BoolProperty"},
            {"bIsInputFront", 0x369, "BoolProperty"},
            {"bIsInputBack", 0x36A, "BoolProperty"},
            {"MoveStartBPlayRate", 0x370, "DoubleProperty"},
            {"bIsHeatRayAndTurn", 0x378, "BoolProperty"},
            {"HeatRayLowerBodyAdditiveAlpha", 0x380, "DoubleProperty"},
            {"HeatRayTurnPoseAlpha", 0x388, "FloatProperty"},
            {"RootBoneRot", 0x390, "StructProperty"},
            {"TurnInPlaceAmount", 0x3A8, "DoubleProperty"},
            {"HeatRayAdditiveAlpha", 0x3B0, "FloatProperty"},
            {"RootBoneRotRate", 0x3B8, "DoubleProperty"},
            {"TailCurveAddAlpha", 0x3C0, "FloatProperty"},
            {"LeftFootPlantAlpha", 0x3C8, "DoubleProperty"},
            {"RightFootPlantAlpha", 0x3D0, "DoubleProperty"},
            {"TailTraceZInterp", 0x3D8, "DoubleProperty"},
            {"bIsIntroAnimStateExit", 0x3E0, "BoolProperty"},
            {"bIsIntro", 0x3E1, "BoolProperty"},
            {"bIsMoveStartFL", 0x3E2, "BoolProperty"},
            {"bIsMoveStartFR", 0x3E3, "BoolProperty"},
            {"bIsMoveStopFL", 0x3E4, "BoolProperty"},
            {"bIsMoveStopFR", 0x3E5, "BoolProperty"},
            {"bIsMoveStopFRHard", 0x3E6, "BoolProperty"},
            {"bIsMoveStartB", 0x3E7, "BoolProperty"},
            {"bIsMoveStopBL", 0x3E8, "BoolProperty"},
            {"bIsMoveStopBR", 0x3E9, "BoolProperty"},
            {"bIsTurningInPlace", 0x3EA, "BoolProperty"},
            {"bIsTurnRightInPlace", 0x3EB, "BoolProperty"},
            {"bIsTurnLeftInPlace", 0x3EC, "BoolProperty"},
            {"bIsHeatRayTurningInPlace", 0x3ED, "BoolProperty"},
            {"bIsHeatRayTurnRightInPlace", 0x3EE, "BoolProperty"},
            {"bIsHeatRayTurnLeftInPlace", 0x3EF, "BoolProperty"},
            {"StompMontage", 0x3F0, "SoftObjectProperty"},
            {"ExitMontage", 0x410, "SoftObjectProperty"},
            {"HeatRayMontage", 0x430, "SoftObjectProperty"},
            {"RoarOrHitMontages", 0x450, "ArrayProperty"},
        }};
    };

    struct SourForkCameraModifier
    {
        static constexpr std::string_view Name = "SourForkCameraModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxCombinedOffset = 0x48;
            static constexpr std::uintptr_t BeamTransitionDurationSecs = 0x4C;
            static constexpr std::uintptr_t BeamOriginSocket = 0x50;
            static constexpr std::uintptr_t BeamCameraActiveTag = 0x54;
            static constexpr std::uintptr_t ExitingTag = 0x58;
            static constexpr std::uintptr_t DefaultFovOffset = 0x5C;
            static constexpr std::uintptr_t ReturnToDefaultFovInterpSpeed = 0x60;
            static constexpr std::uintptr_t BeamingFovOffset = 0x64;
            static constexpr std::uintptr_t BeamingFovInterpSpeed = 0x68;
            static constexpr std::uintptr_t CurveBeamBlend_Z = 0x70;
            static constexpr std::uintptr_t BaseOffsetBeamOriginWeight = 0x78;
            static constexpr std::uintptr_t BaseOffsetInterpSpeed = 0x7C;
            static constexpr std::uintptr_t DefaultUpOffset = 0x80;
            static constexpr std::uintptr_t DefaultRightOffset = 0x84;
            static constexpr std::uintptr_t DefaultBackwardOffset = 0x88;
            static constexpr std::uintptr_t WhileExitingBackwardOffset = 0x8C;
            static constexpr std::uintptr_t ViewSpaceOffsetInterpSpeed = 0x90;
            static constexpr std::uintptr_t WhileExitingViewSpaceOffsetInterpSpeed = 0x94;
            static constexpr std::uintptr_t CurrentFovOffset = 0x98;
            static constexpr std::uintptr_t BaseOffset = 0xA0;
            static constexpr std::uintptr_t CurrentUpOffset = 0xB8;
            static constexpr std::uintptr_t CurrentRightOffset = 0xBC;
            static constexpr std::uintptr_t CurrentBackwardOffset = 0xC0;
            static constexpr std::uintptr_t BeamAlpha = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"MaxCombinedOffset", 0x48, "FloatProperty"},
            {"BeamTransitionDurationSecs", 0x4C, "FloatProperty"},
            {"BeamOriginSocket", 0x50, "NameProperty"},
            {"BeamCameraActiveTag", 0x54, "StructProperty"},
            {"ExitingTag", 0x58, "StructProperty"},
            {"DefaultFovOffset", 0x5C, "FloatProperty"},
            {"ReturnToDefaultFovInterpSpeed", 0x60, "FloatProperty"},
            {"BeamingFovOffset", 0x64, "FloatProperty"},
            {"BeamingFovInterpSpeed", 0x68, "FloatProperty"},
            {"CurveBeamBlend_Z", 0x70, "ObjectProperty"},
            {"BaseOffsetBeamOriginWeight", 0x78, "FloatProperty"},
            {"BaseOffsetInterpSpeed", 0x7C, "FloatProperty"},
            {"DefaultUpOffset", 0x80, "FloatProperty"},
            {"DefaultRightOffset", 0x84, "FloatProperty"},
            {"DefaultBackwardOffset", 0x88, "FloatProperty"},
            {"WhileExitingBackwardOffset", 0x8C, "FloatProperty"},
            {"ViewSpaceOffsetInterpSpeed", 0x90, "FloatProperty"},
            {"WhileExitingViewSpaceOffsetInterpSpeed", 0x94, "FloatProperty"},
            {"CurrentFovOffset", 0x98, "FloatProperty"},
            {"BaseOffset", 0xA0, "StructProperty"},
            {"CurrentUpOffset", 0xB8, "FloatProperty"},
            {"CurrentRightOffset", 0xBC, "FloatProperty"},
            {"CurrentBackwardOffset", 0xC0, "FloatProperty"},
            {"BeamAlpha", 0xC4, "FloatProperty"},
        }};
    };

    struct SourForkCheatManagerExtension
    {
        static constexpr std::string_view Name = "SourForkCheatManagerExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SourForkFunctionLibrary
    {
        static constexpr std::string_view Name = "SourForkFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SourForkGiantGroupDestructionManager
    {
        static constexpr std::string_view Name = "SourForkGiantGroupDestructionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GiantGroupDestructionManager";
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

    struct SourForkGiantPawnDestructionComponent
    {
        static constexpr std::string_view Name = "SourForkGiantPawnDestructionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GiantPawnDestructionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxBuildingCountToPredictDestroyPerFrame = 0xC0;
            static constexpr std::uintptr_t MaxBuildingCountToSimplePredictDestroyPerFrame = 0xF0;
            static constexpr std::uintptr_t AsyncDeathTag = 0x120;
            static constexpr std::uintptr_t bSetDamageDealt = 0x124;
            static constexpr std::uintptr_t bDoNeighborProcessing = 0x125;
            static constexpr std::uintptr_t BuildingEntriesWaitingForDestroy = 0x128;
            static constexpr std::uintptr_t PredictedDestroyedBuildingEntries = 0x138;
            static constexpr std::uintptr_t SimplePredictDeathBuildingEntries = 0x148;
            static constexpr std::uintptr_t BuildingEntriesWaitingForSimpleDestroy = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MaxBuildingCountToPredictDestroyPerFrame", 0xC0, "StructProperty"},
            {"MaxBuildingCountToSimplePredictDestroyPerFrame", 0xF0, "StructProperty"},
            {"AsyncDeathTag", 0x120, "StructProperty"},
            {"bSetDamageDealt", 0x124, "BoolProperty"},
            {"bDoNeighborProcessing", 0x125, "BoolProperty"},
            {"BuildingEntriesWaitingForDestroy", 0x128, "ArrayProperty"},
            {"PredictedDestroyedBuildingEntries", 0x138, "ArrayProperty"},
            {"SimplePredictDeathBuildingEntries", 0x148, "ArrayProperty"},
            {"BuildingEntriesWaitingForSimpleDestroy", 0x158, "ArrayProperty"},
        }};
    };

    struct SourForkPlayerPawn
    {
        static constexpr std::string_view Name = "SourForkPlayerPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGiantPlayerPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentBeamRotation = 0x62D0;
            static constexpr std::uintptr_t bIsBeaming = 0x62E8;
            static constexpr std::uintptr_t bIsIntroAnimStateExit = 0x62E9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentBeamRotation", 0x62D0, "StructProperty"},
            {"bIsBeaming", 0x62E8, "BoolProperty"},
            {"bIsIntroAnimStateExit", 0x62E9, "BoolProperty"},
        }};
    };

}
