#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticCompanionsRuntime
{
    struct ABPDoveSlideFlagCCPAnimInstance
    {
        static constexpr std::string_view Name = "ABPDoveSlideFlagCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisablePhysics = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDisablePhysics", 0x640, "BoolProperty"},
        }};
    };

    struct BurrBabyQuadrupedAnimInstance
    {
        static constexpr std::string_view Name = "BurrBabyQuadrupedAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bCustomEmoteRetarget = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCustomEmoteRetarget", 0x260, "BoolProperty"},
        }};
    };

    struct CompanionAnimExtension
    {
        static constexpr std::string_view Name = "CompanionAnimExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CompanionAnimationSettingsDataAsset
    {
        static constexpr std::string_view Name = "CompanionAnimationSettingsDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationSettings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimationSettings", 0x28, "StructProperty"},
        }};
    };

    struct CompanionBodyAnimInstance
    {
        static constexpr std::string_view Name = "CompanionBodyAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseReverseRetarget = 0x340;
            static constexpr std::uintptr_t ReverseRetargetCurveName = 0x344;
            static constexpr std::uintptr_t bEnableMaterialUpdate = 0x348;
            static constexpr std::uintptr_t PoseCurveThresholds = 0x34C;
            static constexpr std::uintptr_t HasPoseChangedParameterName = 0x43C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUseReverseRetarget", 0x340, "BoolProperty"},
            {"ReverseRetargetCurveName", 0x344, "NameProperty"},
            {"bEnableMaterialUpdate", 0x348, "BoolProperty"},
            {"PoseCurveThresholds", 0x34C, "StructProperty"},
            {"HasPoseChangedParameterName", 0x43C, "NameProperty"},
        }};
    };

    struct CompanionDragonAnimInstance
    {
        static constexpr std::string_view Name = "CompanionDragonAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionQuadrupedBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bFlyStateActive = 0x790;
            static constexpr std::uintptr_t bIsFlying = 0x791;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bFlyStateActive", 0x790, "BoolProperty"},
            {"bIsFlying", 0x791, "BoolProperty"},
        }};
    };

    struct CompanionMovementComponent
    {
        static constexpr std::string_view Name = "CompanionMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WalkingTag = 0xC0;
            static constexpr std::uintptr_t RunningTag = 0xC4;
            static constexpr std::uintptr_t StationaryTag = 0xC8;
            static constexpr std::uintptr_t SoundLibComp = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WalkingTag", 0xC0, "StructProperty"},
            {"RunningTag", 0xC4, "StructProperty"},
            {"StationaryTag", 0xC8, "StructProperty"},
            {"SoundLibComp", 0xD0, "ObjectProperty"},
        }};
    };

    struct CompanionMovementInterface
    {
        static constexpr std::string_view Name = "CompanionMovementInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CompanionPostProcessAnimInstance
    {
        static constexpr std::string_view Name = "CompanionPostProcessAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAdditivePoseVariantAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticPoseChooser = 0x350;
            static constexpr std::uintptr_t CosmeticPoseChannel = 0x370;
            static constexpr std::uintptr_t bDisableCosmeticPose = 0x374;
            static constexpr std::uintptr_t CosmeticPoseAlpha = 0x378;
            static constexpr std::uintptr_t CosmeticPoseTags = 0x380;
            static constexpr std::uintptr_t bAnimDynamicsEnabled = 0x3A0;
            static constexpr std::uintptr_t DynamicsAlpha = 0x3A4;
            static constexpr std::uintptr_t bRigidBodyEnabled = 0x3A8;
            static constexpr std::uintptr_t bClothEnabled = 0x3A9;
            static constexpr std::uintptr_t bIsPreviewActor = 0x3AA;
            static constexpr std::uintptr_t bIsGameActor = 0x3AB;
            static constexpr std::uintptr_t bUseReverseRetarget = 0x3AC;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CosmeticPoseChooser", 0x350, "StructProperty"},
            {"CosmeticPoseChannel", 0x370, "StructProperty"},
            {"bDisableCosmeticPose", 0x374, "BoolProperty"},
            {"CosmeticPoseAlpha", 0x378, "FloatProperty"},
            {"CosmeticPoseTags", 0x380, "StructProperty"},
            {"bAnimDynamicsEnabled", 0x3A0, "BoolProperty"},
            {"DynamicsAlpha", 0x3A4, "FloatProperty"},
            {"bRigidBodyEnabled", 0x3A8, "BoolProperty"},
            {"bClothEnabled", 0x3A9, "BoolProperty"},
            {"bIsPreviewActor", 0x3AA, "BoolProperty"},
            {"bIsGameActor", 0x3AB, "BoolProperty"},
            {"bUseReverseRetarget", 0x3AC, "BoolProperty"},
        }};
    };

    struct CompanionQuadrupedBaseAnimInstance
    {
        static constexpr std::string_view Name = "CompanionQuadrupedBaseAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerCompanionAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowTurnAngleThreshold = 0x670;
            static constexpr std::uintptr_t MaxBreathingAlpha = 0x674;
            static constexpr std::uintptr_t SitBreathingAlpha = 0x678;
            static constexpr std::uintptr_t BreathingPlayrateMultiplier = 0x67C;
            static constexpr std::uintptr_t SlopeWarpingAlpha = 0x680;
            static constexpr std::uintptr_t RootSlopeCompensationAlpha = 0x684;
            static constexpr std::uintptr_t AimOffsetAlpha = 0x688;
            static constexpr std::uintptr_t IkAlpha = 0x68C;
            static constexpr std::uintptr_t TailWagAlpha = 0x690;
            static constexpr std::uintptr_t BreathingPlayRate = 0x694;
            static constexpr std::uintptr_t LookAtPitchActual = 0x698;
            static constexpr std::uintptr_t TailWagSpeed = 0x69C;
            static constexpr std::uintptr_t IdleAnticAlpha = 0x6A0;
            static constexpr std::uintptr_t IdleAnticAlphaTarget = 0x6A8;
            static constexpr std::uintptr_t WorriedAddPoseAlpha = 0x6B0;
            static constexpr std::uintptr_t LookAtYawAdjusted = 0x6B8;
            static constexpr std::uintptr_t BreathingAlpha = 0x6C0;
            static constexpr std::uintptr_t SprintPlayRate = 0x6C8;
            static constexpr std::uintptr_t RunPlayrate = 0x6D0;
            static constexpr std::uintptr_t TrotPlayRate = 0x6D8;
            static constexpr std::uintptr_t WalkPlayrate = 0x6E0;
            static constexpr std::uintptr_t bIsReactionHappyPlaying = 0x6E8;
            static constexpr std::uintptr_t bIsReactionHappyCurve = 0x6E9;
            static constexpr std::uintptr_t bIsMontagePlaying = 0x6EA;
            static constexpr std::uintptr_t bIsSpecialIdleExit = 0x6EB;
            static constexpr std::uintptr_t bIsEarlyExitLocoStop = 0x6EC;
            static constexpr std::uintptr_t bIsStandToSit = 0x6ED;
            static constexpr std::uintptr_t bIsSitToStand = 0x6EE;
            static constexpr std::uintptr_t bIsSpecialIdleEnter = 0x6EF;
            static constexpr std::uintptr_t bIsAllowAnticToPlay = 0x6F0;
            static constexpr std::uintptr_t bIsAllowTurn = 0x6F1;
            static constexpr std::uintptr_t bIsCombatStop = 0x6F2;
            static constexpr std::uintptr_t bIsLocomotionStop = 0x6F3;
            static constexpr std::uintptr_t bIsStopToLocomotion = 0x6F4;
            static constexpr std::uintptr_t OldGoalRotation = 0x6F8;
            static constexpr std::uintptr_t UpdatedGoalRotation = 0x6FC;
            static constexpr std::uintptr_t bIsSitting = 0x700;
            static constexpr std::uintptr_t bIsSpecialIdlePlaying = 0x701;
            static constexpr std::uintptr_t bIsAllowedToSit = 0x702;
            static constexpr std::uintptr_t bIsPlayingAntic = 0x703;
            static constexpr std::uintptr_t bIsCanPlayAntic = 0x704;
            static constexpr std::uintptr_t bTriggerSpawnedAntic = 0x705;
            static constexpr std::uintptr_t bIsInSitTransition = 0x706;
            static constexpr std::uintptr_t bIsLocoStart = 0x707;
            static constexpr std::uintptr_t bIsLocomotionCoolDown = 0x708;
            static constexpr std::uintptr_t bIsLocomotionCoolDownReady = 0x709;
            static constexpr std::uintptr_t bIsBoredCoolDown = 0x70A;
            static constexpr std::uintptr_t bIsBoredCoolDownReady = 0x70B;
            static constexpr std::uintptr_t bPlayCombatBodyAdditive = 0x70C;
            static constexpr std::uintptr_t bUseRootSlopeOrientation = 0x70D;
            static constexpr std::uintptr_t bEnableLocomotionFacePose = 0x70E;
            static constexpr std::uintptr_t bIsWalkCurveActive = 0x70F;
            static constexpr std::uintptr_t bTriggerStartTurn = 0x710;
            static constexpr std::uintptr_t bExitLocomotion = 0x711;
            static constexpr std::uintptr_t bDisableMoodAndTailAdditives = 0x712;
            static constexpr std::uintptr_t CosmeticPose = 0x718;
            static constexpr std::uintptr_t AdditivePoseTagName = 0x738;
            static constexpr std::uintptr_t ChonkyChannelTagName = 0x73C;
            static constexpr std::uintptr_t ChonkyVariantTagName = 0x740;
            static constexpr std::uintptr_t SitWeight = 0x744;
            static constexpr std::uintptr_t ChonkyAdditiveWeight = 0x748;
            static constexpr std::uintptr_t bIsChonky = 0x74C;
            static constexpr std::uintptr_t bHasChonkyAdditivePose = 0x74D;
            static constexpr std::uintptr_t bHasTailAdditive = 0x74E;
            static constexpr std::uintptr_t TailAdditiveAlpha = 0x750;
        };

        inline static constexpr std::array<PropertyInfo, 65> Properties{{
            {"AllowTurnAngleThreshold", 0x670, "FloatProperty"},
            {"MaxBreathingAlpha", 0x674, "FloatProperty"},
            {"SitBreathingAlpha", 0x678, "FloatProperty"},
            {"BreathingPlayrateMultiplier", 0x67C, "FloatProperty"},
            {"SlopeWarpingAlpha", 0x680, "FloatProperty"},
            {"RootSlopeCompensationAlpha", 0x684, "FloatProperty"},
            {"AimOffsetAlpha", 0x688, "FloatProperty"},
            {"IkAlpha", 0x68C, "FloatProperty"},
            {"TailWagAlpha", 0x690, "FloatProperty"},
            {"BreathingPlayRate", 0x694, "FloatProperty"},
            {"LookAtPitchActual", 0x698, "FloatProperty"},
            {"TailWagSpeed", 0x69C, "FloatProperty"},
            {"IdleAnticAlpha", 0x6A0, "DoubleProperty"},
            {"IdleAnticAlphaTarget", 0x6A8, "DoubleProperty"},
            {"WorriedAddPoseAlpha", 0x6B0, "DoubleProperty"},
            {"LookAtYawAdjusted", 0x6B8, "DoubleProperty"},
            {"BreathingAlpha", 0x6C0, "DoubleProperty"},
            {"SprintPlayRate", 0x6C8, "DoubleProperty"},
            {"RunPlayrate", 0x6D0, "DoubleProperty"},
            {"TrotPlayRate", 0x6D8, "DoubleProperty"},
            {"WalkPlayrate", 0x6E0, "DoubleProperty"},
            {"bIsReactionHappyPlaying", 0x6E8, "BoolProperty"},
            {"bIsReactionHappyCurve", 0x6E9, "BoolProperty"},
            {"bIsMontagePlaying", 0x6EA, "BoolProperty"},
            {"bIsSpecialIdleExit", 0x6EB, "BoolProperty"},
            {"bIsEarlyExitLocoStop", 0x6EC, "BoolProperty"},
            {"bIsStandToSit", 0x6ED, "BoolProperty"},
            {"bIsSitToStand", 0x6EE, "BoolProperty"},
            {"bIsSpecialIdleEnter", 0x6EF, "BoolProperty"},
            {"bIsAllowAnticToPlay", 0x6F0, "BoolProperty"},
            {"bIsAllowTurn", 0x6F1, "BoolProperty"},
            {"bIsCombatStop", 0x6F2, "BoolProperty"},
            {"bIsLocomotionStop", 0x6F3, "BoolProperty"},
            {"bIsStopToLocomotion", 0x6F4, "BoolProperty"},
            {"OldGoalRotation", 0x6F8, "FloatProperty"},
            {"UpdatedGoalRotation", 0x6FC, "FloatProperty"},
            {"bIsSitting", 0x700, "BoolProperty"},
            {"bIsSpecialIdlePlaying", 0x701, "BoolProperty"},
            {"bIsAllowedToSit", 0x702, "BoolProperty"},
            {"bIsPlayingAntic", 0x703, "BoolProperty"},
            {"bIsCanPlayAntic", 0x704, "BoolProperty"},
            {"bTriggerSpawnedAntic", 0x705, "BoolProperty"},
            {"bIsInSitTransition", 0x706, "BoolProperty"},
            {"bIsLocoStart", 0x707, "BoolProperty"},
            {"bIsLocomotionCoolDown", 0x708, "BoolProperty"},
            {"bIsLocomotionCoolDownReady", 0x709, "BoolProperty"},
            {"bIsBoredCoolDown", 0x70A, "BoolProperty"},
            {"bIsBoredCoolDownReady", 0x70B, "BoolProperty"},
            {"bPlayCombatBodyAdditive", 0x70C, "BoolProperty"},
            {"bUseRootSlopeOrientation", 0x70D, "BoolProperty"},
            {"bEnableLocomotionFacePose", 0x70E, "BoolProperty"},
            {"bIsWalkCurveActive", 0x70F, "BoolProperty"},
            {"bTriggerStartTurn", 0x710, "BoolProperty"},
            {"bExitLocomotion", 0x711, "BoolProperty"},
            {"bDisableMoodAndTailAdditives", 0x712, "BoolProperty"},
            {"CosmeticPose", 0x718, "StructProperty"},
            {"AdditivePoseTagName", 0x738, "StructProperty"},
            {"ChonkyChannelTagName", 0x73C, "StructProperty"},
            {"ChonkyVariantTagName", 0x740, "StructProperty"},
            {"SitWeight", 0x744, "FloatProperty"},
            {"ChonkyAdditiveWeight", 0x748, "FloatProperty"},
            {"bIsChonky", 0x74C, "BoolProperty"},
            {"bHasChonkyAdditivePose", 0x74D, "BoolProperty"},
            {"bHasTailAdditive", 0x74E, "BoolProperty"},
            {"TailAdditiveAlpha", 0x750, "FloatProperty"},
        }};
    };

    struct CompanionQuadrupedPostProcessAnimInstance
    {
        static constexpr std::string_view Name = "CompanionQuadrupedPostProcessAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionPostProcessAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ChonkyAdditiveWeight = 0x3B0;
            static constexpr std::uintptr_t bHasChonkyAdditivePose = 0x3B4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ChonkyAdditiveWeight", 0x3B0, "FloatProperty"},
            {"bHasChonkyAdditivePose", 0x3B4, "BoolProperty"},
        }};
    };

    struct CompanionQuadrupedUAFAnimInstance
    {
        static constexpr std::string_view Name = "CompanionQuadrupedUAFAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionQuadrupedBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t UAFAuxiliaryTimer3Value = 0x790;
            static constexpr std::uintptr_t UAFCompanionDirection = 0x798;
            static constexpr std::uintptr_t UAFCompanionSpeed2D = 0x7A0;
            static constexpr std::uintptr_t UAFLocomotionMovementType = 0x7A8;
            static constexpr std::uintptr_t UAFLocomotionScaleMultiplier = 0x7B0;
            static constexpr std::uintptr_t UAFAnticSequenceToPlay = 0x7B8;
            static constexpr std::uintptr_t UAFTailWagSpeed = 0x7C0;
            static constexpr std::uintptr_t UAFIdleAnticAlpha = 0x7C8;
            static constexpr std::uintptr_t UAFTailWagAlpha = 0x7D0;
            static constexpr std::uintptr_t UAFLookAtPitchActual = 0x7D8;
            static constexpr std::uintptr_t UAFAimOffsetAlpha = 0x7E0;
            static constexpr std::uintptr_t UAFUpdatedGoalRotation = 0x7E8;
            static constexpr std::uintptr_t UAFLookAtPitch = 0x7F0;
            static constexpr std::uintptr_t UAFLookAtYaw = 0x7F8;
            static constexpr std::uintptr_t SitWeightCurveValue = 0x800;
            static constexpr std::uintptr_t IdleCurveValue = 0x808;
            static constexpr std::uintptr_t DisableCompanionIKCurveValue = 0x810;
            static constexpr std::uintptr_t ReactionHappyCurveValue = 0x818;
            static constexpr std::uintptr_t ReactionHappy01CurveValue = 0x820;
            static constexpr std::uintptr_t UseRootSlopeOrientationCurveValue = 0x828;
            static constexpr std::uintptr_t WalkCurveValue = 0x830;
            static constexpr std::uintptr_t DisableAimOffsetCurveValue = 0x838;
            static constexpr std::uintptr_t DisableSlopeWarpingCurveValue = 0x840;
            static constexpr std::uintptr_t EmoteACurveValue = 0x848;
            static constexpr std::uintptr_t EmoteBCurveValue = 0x850;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"UAFAuxiliaryTimer3Value", 0x790, "DoubleProperty"},
            {"UAFCompanionDirection", 0x798, "DoubleProperty"},
            {"UAFCompanionSpeed2D", 0x7A0, "DoubleProperty"},
            {"UAFLocomotionMovementType", 0x7A8, "IntProperty"},
            {"UAFLocomotionScaleMultiplier", 0x7B0, "DoubleProperty"},
            {"UAFAnticSequenceToPlay", 0x7B8, "ObjectProperty"},
            {"UAFTailWagSpeed", 0x7C0, "DoubleProperty"},
            {"UAFIdleAnticAlpha", 0x7C8, "DoubleProperty"},
            {"UAFTailWagAlpha", 0x7D0, "DoubleProperty"},
            {"UAFLookAtPitchActual", 0x7D8, "DoubleProperty"},
            {"UAFAimOffsetAlpha", 0x7E0, "DoubleProperty"},
            {"UAFUpdatedGoalRotation", 0x7E8, "DoubleProperty"},
            {"UAFLookAtPitch", 0x7F0, "DoubleProperty"},
            {"UAFLookAtYaw", 0x7F8, "DoubleProperty"},
            {"SitWeightCurveValue", 0x800, "DoubleProperty"},
            {"IdleCurveValue", 0x808, "DoubleProperty"},
            {"DisableCompanionIKCurveValue", 0x810, "DoubleProperty"},
            {"ReactionHappyCurveValue", 0x818, "DoubleProperty"},
            {"ReactionHappy01CurveValue", 0x820, "DoubleProperty"},
            {"UseRootSlopeOrientationCurveValue", 0x828, "DoubleProperty"},
            {"WalkCurveValue", 0x830, "DoubleProperty"},
            {"DisableAimOffsetCurveValue", 0x838, "DoubleProperty"},
            {"DisableSlopeWarpingCurveValue", 0x840, "DoubleProperty"},
            {"EmoteACurveValue", 0x848, "DoubleProperty"},
            {"EmoteBCurveValue", 0x850, "DoubleProperty"},
        }};
    };

    struct CompanionQuestAssetManifest
    {
        static constexpr std::string_view Name = "CompanionQuestAssetManifest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestAssets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestAssets", 0x28, "ArrayProperty"},
        }};
    };

    struct CompanionSlopeWarpingComponent
    {
        static constexpr std::string_view Name = "CompanionSlopeWarpingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSlopeWarpingComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionFrequency = 0x218;
            static constexpr std::uintptr_t StationarySpeedTolerance = 0x21C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollisionFrequency", 0x218, "FloatProperty"},
            {"StationarySpeedTolerance", 0x21C, "FloatProperty"},
        }};
    };

    struct CompanionSoundLibraryAnimContext
    {
        static constexpr std::string_view Name = "CompanionSoundLibraryAnimContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibraryAnimContext";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSettings = 0x60;
            static constexpr std::uintptr_t DefaultOffset = 0x98;
            static constexpr std::uintptr_t Animation = 0xB0;
            static constexpr std::uintptr_t MeshComponent = 0xB8;
            static constexpr std::uintptr_t bSupportsNotifyEnd = 0xC0;
            static constexpr std::uintptr_t AnimRate = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnimSettings", 0x60, "StructProperty"},
            {"DefaultOffset", 0x98, "StructProperty"},
            {"Animation", 0xB0, "WeakObjectProperty"},
            {"MeshComponent", 0xB8, "WeakObjectProperty"},
            {"bSupportsNotifyEnd", 0xC0, "BoolProperty"},
            {"AnimRate", 0xC4, "FloatProperty"},
        }};
    };

    struct CompanionVoLipSyncComponent
    {
        static constexpr std::string_view Name = "CompanionVoLipSyncComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveVoComponent = 0xC0;
            static constexpr std::uintptr_t ActiveAnimInstance = 0xC8;
            static constexpr std::uintptr_t CompanionMesh = 0xD0;
            static constexpr std::uintptr_t SoundLibComp = 0xD8;
            static constexpr std::uintptr_t StartWatchingCompanionVO = 0xF8;
            static constexpr std::uintptr_t StopWatchingCompanionVO = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ActiveVoComponent", 0xC0, "ObjectProperty"},
            {"ActiveAnimInstance", 0xC8, "ObjectProperty"},
            {"CompanionMesh", 0xD0, "ObjectProperty"},
            {"SoundLibComp", 0xD8, "ObjectProperty"},
            {"StartWatchingCompanionVO", 0xF8, "MulticastInlineDelegateProperty"},
            {"StopWatchingCompanionVO", 0x108, "MulticastInlineDelegateProperty"},
        }};
    };

    struct CompanionsDynamicProviderAssetBase
    {
        static constexpr std::string_view Name = "CompanionsDynamicProviderAssetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicProviderAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticCompanionItemDefinition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CosmeticCompanionItemDefinition", 0x28, "StructProperty"},
        }};
    };

    struct CompanionsDynamicProviderRuntimeBase
    {
        static constexpr std::string_view Name = "CompanionsDynamicProviderRuntimeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicRuntimeProviderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticCompanionInstance = 0x50;
            static constexpr std::uintptr_t InstanceCount = 0x58;
            static constexpr std::uintptr_t bIsClassEquipped = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CosmeticCompanionInstance", 0x50, "WeakObjectProperty"},
            {"InstanceCount", 0x58, "IntProperty"},
            {"bIsClassEquipped", 0x5C, "BoolProperty"},
        }};
    };

    struct CompanionsQuestCategoryDynamicProviderAsset
    {
        static constexpr std::string_view Name = "CompanionsQuestCategoryDynamicProviderAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionsDynamicProviderAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedCategoryData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SharedCategoryData", 0x30, "ObjectProperty"},
        }};
    };

    struct CompanionsQuestCategoryDynamicRuntimeProvider
    {
        static constexpr std::string_view Name = "CompanionsQuestCategoryDynamicRuntimeProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionsDynamicProviderRuntimeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticCompanionInstance = 0x50;
            static constexpr std::uintptr_t InstanceCount = 0x58;
            static constexpr std::uintptr_t bIsClassEquipped = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CosmeticCompanionInstance", 0x50, "WeakObjectProperty"},
            {"InstanceCount", 0x58, "IntProperty"},
            {"bIsClassEquipped", 0x5C, "BoolProperty"},
        }};
    };

    struct CompanionsQuestCategorySharedData
    {
        static constexpr std::string_view Name = "CompanionsQuestCategorySharedData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t NamedCompanionTextFormat = 0x28;
            static constexpr std::uintptr_t LongNamedCompanionTextFormat = 0x38;
            static constexpr std::uintptr_t NamedCompanionPluralTextFormat = 0x48;
            static constexpr std::uintptr_t LongNamedCompanionPluralTextFormat = 0x58;
            static constexpr std::uintptr_t EquippedSortOrder = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NamedCompanionTextFormat", 0x28, "TextProperty"},
            {"LongNamedCompanionTextFormat", 0x38, "TextProperty"},
            {"NamedCompanionPluralTextFormat", 0x48, "TextProperty"},
            {"LongNamedCompanionPluralTextFormat", 0x58, "TextProperty"},
            {"EquippedSortOrder", 0x68, "IntProperty"},
        }};
    };

    struct CompanionsQuestHeaderDynamicProviderAsset
    {
        static constexpr std::string_view Name = "CompanionsQuestHeaderDynamicProviderAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionsDynamicProviderAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SharedHeaderData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SharedHeaderData", 0x30, "ObjectProperty"},
        }};
    };

    struct CompanionsQuestHeaderDynamicRuntimeProvider
    {
        static constexpr std::string_view Name = "CompanionsQuestHeaderDynamicRuntimeProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionsDynamicProviderRuntimeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticCompanionInstance = 0x50;
            static constexpr std::uintptr_t InstanceCount = 0x58;
            static constexpr std::uintptr_t bIsClassEquipped = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CosmeticCompanionInstance", 0x50, "WeakObjectProperty"},
            {"InstanceCount", 0x58, "IntProperty"},
            {"bIsClassEquipped", 0x5C, "BoolProperty"},
        }};
    };

    struct CompanionsQuestHeaderSharedData
    {
        static constexpr std::string_view Name = "CompanionsQuestHeaderSharedData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t NamedCompanionTextFormat = 0x28;
            static constexpr std::uintptr_t NamedCompanionPluralTextFormat = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NamedCompanionTextFormat", 0x28, "TextProperty"},
            {"NamedCompanionPluralTextFormat", 0x38, "TextProperty"},
        }};
    };

    struct CosmeticCompanionItem
    {
        static constexpr std::string_view Name = "CosmeticCompanionItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCosmeticAccountItem";
        struct Offsets
        {
            static constexpr std::uintptr_t locked_in = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"locked_in", 0x150, "BoolProperty"},
        }};
    };

    struct CosmeticCompanionItemDefaultNames
    {
        static constexpr std::string_view Name = "CosmeticCompanionItemDefaultNames";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureActionMultipleAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultNames = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultNames", 0x30, "ArrayProperty"},
        }};
    };

    struct CosmeticCompanionItemDefinition
    {
        static constexpr std::string_view Name = "CosmeticCompanionItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCharacterPartItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t MainSkeletalMesh = 0x408;
            static constexpr std::uintptr_t MainAnimClass = 0x428;
            static constexpr std::uintptr_t MainUAFSystem = 0x448;
            static constexpr std::uintptr_t ReactionChooserProxy = 0x468;
            static constexpr std::uintptr_t InteractionSceneAsset = 0x488;
            static constexpr std::uintptr_t AnimDataAsset = 0x4A8;
            static constexpr std::uintptr_t AnimTableAsset = 0x4C8;
            static constexpr std::uintptr_t AnimationSettingsOverride = 0x4E8;
            static constexpr std::uintptr_t DefaultReactFXOverride = 0x508;
            static constexpr std::uintptr_t ReactFXAttachmentParameters = 0x528;
            static constexpr std::uintptr_t PreviewReactFXAttachmentParameters = 0x580;
            static constexpr std::uintptr_t PlayerCompanionFootstepData = 0x5D8;
            static constexpr std::uintptr_t InteractionText = 0x628;
            static constexpr std::uintptr_t LobbyInteractionText = 0x638;
            static constexpr std::uintptr_t SpawnReactionTag = 0x648;
            static constexpr std::uintptr_t bUseMutableCustomizableObject = 0x64C;
            static constexpr std::uintptr_t ItemDefaultNames = 0x650;
            static constexpr std::uintptr_t AdditionalPedestalOffset = 0x658;
            static constexpr std::uintptr_t CompanionTypeTag = 0x670;
            static constexpr std::uintptr_t CameraFramingBounds = 0x678;
            static constexpr std::uintptr_t ProgressionRewards = 0x698;
            static constexpr std::uintptr_t bEnableNPCCompanionUsage = 0x6A8;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"MainSkeletalMesh", 0x408, "SoftObjectProperty"},
            {"MainAnimClass", 0x428, "SoftClassProperty"},
            {"MainUAFSystem", 0x448, "SoftObjectProperty"},
            {"ReactionChooserProxy", 0x468, "SoftObjectProperty"},
            {"InteractionSceneAsset", 0x488, "SoftObjectProperty"},
            {"AnimDataAsset", 0x4A8, "SoftObjectProperty"},
            {"AnimTableAsset", 0x4C8, "SoftObjectProperty"},
            {"AnimationSettingsOverride", 0x4E8, "SoftObjectProperty"},
            {"DefaultReactFXOverride", 0x508, "SoftObjectProperty"},
            {"ReactFXAttachmentParameters", 0x528, "StructProperty"},
            {"PreviewReactFXAttachmentParameters", 0x580, "StructProperty"},
            {"PlayerCompanionFootstepData", 0x5D8, "StructProperty"},
            {"InteractionText", 0x628, "TextProperty"},
            {"LobbyInteractionText", 0x638, "TextProperty"},
            {"SpawnReactionTag", 0x648, "StructProperty"},
            {"bUseMutableCustomizableObject", 0x64C, "BoolProperty"},
            {"ItemDefaultNames", 0x650, "ObjectProperty"},
            {"AdditionalPedestalOffset", 0x658, "StructProperty"},
            {"CompanionTypeTag", 0x670, "StructProperty"},
            {"CameraFramingBounds", 0x678, "StructProperty"},
            {"ProgressionRewards", 0x698, "ArrayProperty"},
            {"bEnableNPCCompanionUsage", 0x6A8, "BoolProperty"},
        }};
    };

    struct CosmeticCompanionReactFXItem
    {
        static constexpr std::string_view Name = "CosmeticCompanionReactFXItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCosmeticAccountItem";
        struct Offsets
        {
            static constexpr std::uintptr_t VariantChannels = 0x108;
            static constexpr std::uintptr_t ActiveVariantOverrides = 0x118;
            static constexpr std::uintptr_t Variants = 0x128;
            static constexpr std::uintptr_t Hero = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VariantChannels", 0x108, "ArrayProperty"},
            {"ActiveVariantOverrides", 0x118, "ArrayProperty"},
            {"Variants", 0x128, "ArrayProperty"},
            {"Hero", 0x148, "ObjectProperty"},
        }};
    };

    struct CosmeticCompanionReactFXItemDefinition
    {
        static constexpr std::string_view Name = "CosmeticCompanionReactFXItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCosmeticItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactFX = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReactFX", 0x400, "SoftObjectProperty"},
        }};
    };

    struct CosmeticCompanionSubsystem
    {
        static constexpr std::string_view Name = "CosmeticCompanionSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactionSystemDiscriminator = 0x30;
            static constexpr std::uintptr_t AdditionalReactionTableMap = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReactionSystemDiscriminator", 0x30, "ObjectProperty"},
            {"AdditionalReactionTableMap", 0x38, "MapProperty"},
        }};
    };

    struct CosmeticCompanionsGlobals
    {
        static constexpr std::string_view Name = "CosmeticCompanionsGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticCompanionsSettings
    {
        static constexpr std::string_view Name = "CosmeticCompanionsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultFootstepVFX = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultFootstepVFX", 0x30, "StructProperty"},
        }};
    };

    struct CosmeticDownloadCandidateComponentCompanion
    {
        static constexpr std::string_view Name = "CosmeticDownloadCandidateComponentCompanion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CosmeticDownloadCandidateComponent";
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

    struct CosmeticItemStep_CompanionsLoadAssets
    {
        static constexpr std::string_view Name = "CosmeticItemStep_CompanionsLoadAssets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CosmeticItemStep_CompanionsPostLoad
    {
        static constexpr std::string_view Name = "CosmeticItemStep_CompanionsPostLoad";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CosmeticItemStep_CompanionsRunCustomizableObject
    {
        static constexpr std::string_view Name = "CosmeticItemStep_CompanionsRunCustomizableObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CrescentNailAnimInstance
    {
        static constexpr std::string_view Name = "CrescentNailAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerCompanionAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t StartStopPosition = 0x670;
            static constexpr std::uintptr_t AnticAlpha = 0x678;
            static constexpr std::uintptr_t LookAtYawAdjusted = 0x680;
            static constexpr std::uintptr_t LookAtPitchAdjusted = 0x688;
            static constexpr std::uintptr_t bIsReactionHappyPlaying = 0x690;
            static constexpr std::uintptr_t bIsEmoteDanceLoop = 0x691;
            static constexpr std::uintptr_t bIsHappyReaction_01 = 0x692;
            static constexpr std::uintptr_t bIsWalkStopFootR = 0x693;
            static constexpr std::uintptr_t bIsWalkStopFootL = 0x694;
            static constexpr std::uintptr_t bIsRunStopFootR = 0x695;
            static constexpr std::uintptr_t bIsSitting = 0x696;
            static constexpr std::uintptr_t bIsSpecialIdleFinish = 0x697;
            static constexpr std::uintptr_t bEnterEmoteLoops = 0x698;
            static constexpr std::uintptr_t bPlayCombatBodyAdditive = 0x699;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"StartStopPosition", 0x670, "FloatProperty"},
            {"AnticAlpha", 0x678, "DoubleProperty"},
            {"LookAtYawAdjusted", 0x680, "DoubleProperty"},
            {"LookAtPitchAdjusted", 0x688, "DoubleProperty"},
            {"bIsReactionHappyPlaying", 0x690, "BoolProperty"},
            {"bIsEmoteDanceLoop", 0x691, "BoolProperty"},
            {"bIsHappyReaction_01", 0x692, "BoolProperty"},
            {"bIsWalkStopFootR", 0x693, "BoolProperty"},
            {"bIsWalkStopFootL", 0x694, "BoolProperty"},
            {"bIsRunStopFootR", 0x695, "BoolProperty"},
            {"bIsSitting", 0x696, "BoolProperty"},
            {"bIsSpecialIdleFinish", 0x697, "BoolProperty"},
            {"bEnterEmoteLoops", 0x698, "BoolProperty"},
            {"bPlayCombatBodyAdditive", 0x699, "BoolProperty"},
        }};
    };

    struct DoveSlideQuadrupedAnimInstance
    {
        static constexpr std::string_view Name = "DoveSlideQuadrupedAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseReverseRetarget = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseReverseRetarget", 0x260, "BoolProperty"},
        }};
    };

    struct DustyWingOtherAnimInstance
    {
        static constexpr std::string_view Name = "DustyWingOtherAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bCustomEmote = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCustomEmote", 0x260, "BoolProperty"},
        }};
    };

    struct FinFlakeAnimInstance
    {
        static constexpr std::string_view Name = "FinFlakeAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerCompanionAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LookAtPitchAdjusted = 0x670;
            static constexpr std::uintptr_t LookAtYawAdjusted = 0x678;
            static constexpr std::uintptr_t CompanionAcceleration = 0x680;
            static constexpr std::uintptr_t CompanionAccelerationDelta = 0x688;
            static constexpr std::uintptr_t QuickStopThreshold = 0x690;
            static constexpr std::uintptr_t TurboPlayerSpeedThreshold = 0x694;
            static constexpr std::uintptr_t TurboPlayerSpeedDeltaThreshold = 0x698;
            static constexpr std::uintptr_t bTriggerTurbo = 0x69C;
            static constexpr std::uintptr_t bIsHappyReactionActive = 0x69D;
            static constexpr std::uintptr_t bIsEmoteActive = 0x69E;
            static constexpr std::uintptr_t bCanPlayPoseOffset = 0x69F;
            static constexpr std::uintptr_t bTriggerPoseOffset = 0x6A0;
            static constexpr std::uintptr_t bTriggerStop = 0x6A1;
            static constexpr std::uintptr_t bTriggerStopToStart = 0x6A2;
            static constexpr std::uintptr_t bAnticFlag = 0x6A3;
            static constexpr std::uintptr_t bTriggerAntic = 0x6A4;
            static constexpr std::uintptr_t bQuickStop = 0x6A5;
            static constexpr std::uintptr_t FaceAdditiveAlpha = 0x6A8;
            static constexpr std::uintptr_t AimOffsetAlpha = 0x6B0;
            static constexpr std::uintptr_t PlayRate = 0x6B8;
            static constexpr std::uintptr_t MovementAdditivesAlpha = 0x6C0;
            static constexpr std::uintptr_t bCanAnticsPlay = 0x6C8;
            static constexpr std::uintptr_t bEnableChildAdditive = 0x6C9;
            static constexpr std::uintptr_t ChildAdditiveAlpha = 0x6CC;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"LookAtPitchAdjusted", 0x670, "DoubleProperty"},
            {"LookAtYawAdjusted", 0x678, "DoubleProperty"},
            {"CompanionAcceleration", 0x680, "DoubleProperty"},
            {"CompanionAccelerationDelta", 0x688, "DoubleProperty"},
            {"QuickStopThreshold", 0x690, "FloatProperty"},
            {"TurboPlayerSpeedThreshold", 0x694, "FloatProperty"},
            {"TurboPlayerSpeedDeltaThreshold", 0x698, "FloatProperty"},
            {"bTriggerTurbo", 0x69C, "BoolProperty"},
            {"bIsHappyReactionActive", 0x69D, "BoolProperty"},
            {"bIsEmoteActive", 0x69E, "BoolProperty"},
            {"bCanPlayPoseOffset", 0x69F, "BoolProperty"},
            {"bTriggerPoseOffset", 0x6A0, "BoolProperty"},
            {"bTriggerStop", 0x6A1, "BoolProperty"},
            {"bTriggerStopToStart", 0x6A2, "BoolProperty"},
            {"bAnticFlag", 0x6A3, "BoolProperty"},
            {"bTriggerAntic", 0x6A4, "BoolProperty"},
            {"bQuickStop", 0x6A5, "BoolProperty"},
            {"FaceAdditiveAlpha", 0x6A8, "DoubleProperty"},
            {"AimOffsetAlpha", 0x6B0, "DoubleProperty"},
            {"PlayRate", 0x6B8, "DoubleProperty"},
            {"MovementAdditivesAlpha", 0x6C0, "DoubleProperty"},
            {"bCanAnticsPlay", 0x6C8, "BoolProperty"},
            {"bEnableChildAdditive", 0x6C9, "BoolProperty"},
            {"ChildAdditiveAlpha", 0x6CC, "FloatProperty"},
        }};
    };

    struct FortAnimNotifyState_CompanionRandomizeNextSection
    {
        static constexpr std::string_view Name = "FortAnimNotifyState_CompanionRandomizeNextSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimNotifyState_RandomizeNextSection";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLoopingEmote = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsLoopingEmote", 0x48, "BoolProperty"},
        }};
    };

    struct FortAnimNotify_PlayCompanionReactFX
    {
        static constexpr std::string_view Name = "FortAnimNotify_PlayCompanionReactFX";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify_PlayNiagaraEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t Template = 0x38;
            static constexpr std::uintptr_t LocationOffset = 0x40;
            static constexpr std::uintptr_t RotationOffset = 0x58;
            static constexpr std::uintptr_t Scale = 0x70;
            static constexpr std::uintptr_t bAbsoluteScale = 0x88;
            static constexpr std::uintptr_t Attached = 0xC0;
            static constexpr std::uintptr_t SocketName = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Template", 0x38, "ObjectProperty"},
            {"LocationOffset", 0x40, "StructProperty"},
            {"RotationOffset", 0x58, "StructProperty"},
            {"Scale", 0x70, "StructProperty"},
            {"bAbsoluteScale", 0x88, "BoolProperty"},
            {"Attached", 0xC0, "BoolProperty"},
            {"SocketName", 0xC4, "NameProperty"},
        }};
    };

    struct FortCompanionMannequin
    {
        static constexpr std::string_view Name = "FortCompanionMannequin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkeletalMeshActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticMeshComponents = 0x2E8;
            static constexpr std::uintptr_t OnMannequinCustomizationFinished = 0x2F8;
            static constexpr std::uintptr_t CosmeticComponent = 0x308;
            static constexpr std::uintptr_t CompanionItemDefinition = 0x310;
            static constexpr std::uintptr_t OverrideVariants = 0x318;
            static constexpr std::uintptr_t bEnableAnimations = 0x328;
            static constexpr std::uintptr_t SkeletalMeshComponentsSnapshot = 0x330;
            static constexpr std::uintptr_t bMarkForceCosmeticInitialization = 0x340;
            static constexpr std::uintptr_t bHasInitialized = 0x341;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CosmeticMeshComponents", 0x2E8, "ArrayProperty"},
            {"OnMannequinCustomizationFinished", 0x2F8, "MulticastInlineDelegateProperty"},
            {"CosmeticComponent", 0x308, "ObjectProperty"},
            {"CompanionItemDefinition", 0x310, "ObjectProperty"},
            {"OverrideVariants", 0x318, "ArrayProperty"},
            {"bEnableAnimations", 0x328, "BoolProperty"},
            {"SkeletalMeshComponentsSnapshot", 0x330, "ArrayProperty"},
            {"bMarkForceCosmeticInitialization", 0x340, "BoolProperty"},
            {"bHasInitialized", 0x341, "BoolProperty"},
        }};
    };

    struct FortObjectiveProcessor_EarnCompanionXP
    {
        static constexpr std::string_view Name = "FortObjectiveProcessor_EarnCompanionXP";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct FortPlayerCompanionAnimInstance
    {
        static constexpr std::string_view Name = "FortPlayerCompanionAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimExtension = 0x348;
            static constexpr std::uintptr_t IdleBreaksTimer = 0x350;
            static constexpr std::uintptr_t AnticsTimer = 0x374;
            static constexpr std::uintptr_t AuxiliaryTimer1 = 0x398;
            static constexpr std::uintptr_t AuxiliaryTimer2 = 0x3BC;
            static constexpr std::uintptr_t AuxiliaryTimer3 = 0x3E0;
            static constexpr std::uintptr_t AuxiliaryTimer4 = 0x404;
            static constexpr std::uintptr_t RandomizeMontageSectionInput = 0x428;
            static constexpr std::uintptr_t IdleBreakTimeMin = 0x440;
            static constexpr std::uintptr_t IdleBreakTimeMax = 0x444;
            static constexpr std::uintptr_t IdleBreakCount = 0x448;
            static constexpr std::uintptr_t AnticsPreviewActorInverseTimeScale = 0x44C;
            static constexpr std::uintptr_t LookAtPitchClamp = 0x450;
            static constexpr std::uintptr_t LookAtYawClamp = 0x454;
            static constexpr std::uintptr_t LookAtYawReset = 0x458;
            static constexpr std::uintptr_t FrontPreviewActorYaw = 0x45C;
            static constexpr std::uintptr_t FrontPreviewActorPitch = 0x460;
            static constexpr std::uintptr_t LowFidelityLODThreshold = 0x464;
            static constexpr std::uintptr_t InteractionBone = 0x468;
            static constexpr std::uintptr_t InteractionReferenceBone = 0x46C;
            static constexpr std::uintptr_t InteractionPelvisAdjust = 0x470;
            static constexpr std::uintptr_t CompanionLeader = 0x478;
            static constexpr std::uintptr_t CompanionLocation = 0x480;
            static constexpr std::uintptr_t CompanionRotation = 0x498;
            static constexpr std::uintptr_t CompanionSpeed2D = 0x4B0;
            static constexpr std::uintptr_t CompanionVelocity = 0x4B8;
            static constexpr std::uintptr_t GoalLocation = 0x4D0;
            static constexpr std::uintptr_t GoalRotation = 0x4E8;
            static constexpr std::uintptr_t PlayerLocation = 0x500;
            static constexpr std::uintptr_t PlayerSpeed2D = 0x518;
            static constexpr std::uintptr_t PlayerVelocity = 0x520;
            static constexpr std::uintptr_t LookAtPitch = 0x538;
            static constexpr std::uintptr_t LookAtYaw = 0x53C;
            static constexpr std::uintptr_t Mood = 0x540;
            static constexpr std::uintptr_t bTriggerIdleBreak = 0x541;
            static constexpr std::uintptr_t TriggerIdleBreakNumber = 0x544;
            static constexpr std::uintptr_t bIsPlayingEmote = 0x548;
            static constexpr std::uintptr_t bIsPreviewActor = 0x549;
            static constexpr std::uintptr_t PreviewActorIndex = 0x54C;
            static constexpr std::uintptr_t bUseLowFidelity = 0x550;
            static constexpr std::uintptr_t bJustSpawned = 0x551;
            static constexpr std::uintptr_t AnimTable = 0x558;
            static constexpr std::uintptr_t OnSpawnedProxy = 0x560;
            static constexpr std::uintptr_t OnSpawnedChooser = 0x568;
            static constexpr std::uintptr_t AnticsSelectionProxy = 0x588;
            static constexpr std::uintptr_t AnticsSelectionChooser = 0x590;
            static constexpr std::uintptr_t AnticSequenceInfo = 0x598;
            static constexpr std::uintptr_t CompanionDirection = 0x5A8;
            static constexpr std::uintptr_t bIsMoving = 0x5AC;
            static constexpr std::uintptr_t MovingThreshold = 0x5B0;
            static constexpr std::uintptr_t bIsCompanionStopping = 0x5B4;
            static constexpr std::uintptr_t bIsMoodWorried = 0x5B5;
            static constexpr std::uintptr_t bIsMoodCombat = 0x5B6;
            static constexpr std::uintptr_t bIsMoodBored = 0x5B7;
            static constexpr std::uintptr_t bIsMoodDefault = 0x5B8;
            static constexpr std::uintptr_t bIsDelayedMoodCombat = 0x5B9;
            static constexpr std::uintptr_t bIsEmoteCurveA = 0x5BA;
            static constexpr std::uintptr_t bIsEmoteCurveB = 0x5BB;
            static constexpr std::uintptr_t bOnlyAffectSkeletonRootBone = 0x5BC;
            static constexpr std::uintptr_t MaxStepHeight = 0x5C0;
            static constexpr std::uintptr_t MaxSkeletonRootBoneRotationAngle = 0x5C4;
            static constexpr std::uintptr_t AudioEnvelopeValue = 0x5C8;
            static constexpr std::uintptr_t bIsVOActive = 0x5CC;
            static constexpr std::uintptr_t bOpenJawWithVO = 0x5CD;
            static constexpr std::uintptr_t JawOpenValue = 0x5D0;
            static constexpr std::uintptr_t CurrentLocomotionMovementType = 0x5D4;
            static constexpr std::uintptr_t RunToSprintThreshold = 0x5D8;
            static constexpr std::uintptr_t SprintToRunThreshold = 0x5DC;
            static constexpr std::uintptr_t TrotToRunThreshold = 0x5E0;
            static constexpr std::uintptr_t RunToTrotThreshold = 0x5E4;
            static constexpr std::uintptr_t WalkToTrotThreshold = 0x5E8;
            static constexpr std::uintptr_t TrotToWalkThreshold = 0x5EC;
            static constexpr std::uintptr_t LocomotionPlayRate = 0x5F0;
            static constexpr std::uintptr_t LocomotionScaleMultiplierWeight = 0x5F4;
            static constexpr std::uintptr_t LocomotionPlayRateMultiplier = 0x5F8;
            static constexpr std::uintptr_t SlopeMatchingRotationOffset = 0x600;
            static constexpr std::uintptr_t SlopeMatchingWeight = 0x618;
            static constexpr std::uintptr_t SlopeWarpingComponent = 0x648;
        };

        inline static constexpr std::array<PropertyInfo, 78> Properties{{
            {"AnimExtension", 0x348, "ObjectProperty"},
            {"IdleBreaksTimer", 0x350, "StructProperty"},
            {"AnticsTimer", 0x374, "StructProperty"},
            {"AuxiliaryTimer1", 0x398, "StructProperty"},
            {"AuxiliaryTimer2", 0x3BC, "StructProperty"},
            {"AuxiliaryTimer3", 0x3E0, "StructProperty"},
            {"AuxiliaryTimer4", 0x404, "StructProperty"},
            {"RandomizeMontageSectionInput", 0x428, "StructProperty"},
            {"IdleBreakTimeMin", 0x440, "FloatProperty"},
            {"IdleBreakTimeMax", 0x444, "FloatProperty"},
            {"IdleBreakCount", 0x448, "IntProperty"},
            {"AnticsPreviewActorInverseTimeScale", 0x44C, "FloatProperty"},
            {"LookAtPitchClamp", 0x450, "FloatProperty"},
            {"LookAtYawClamp", 0x454, "FloatProperty"},
            {"LookAtYawReset", 0x458, "FloatProperty"},
            {"FrontPreviewActorYaw", 0x45C, "FloatProperty"},
            {"FrontPreviewActorPitch", 0x460, "FloatProperty"},
            {"LowFidelityLODThreshold", 0x464, "IntProperty"},
            {"InteractionBone", 0x468, "NameProperty"},
            {"InteractionReferenceBone", 0x46C, "NameProperty"},
            {"InteractionPelvisAdjust", 0x470, "FloatProperty"},
            {"CompanionLeader", 0x478, "ObjectProperty"},
            {"CompanionLocation", 0x480, "StructProperty"},
            {"CompanionRotation", 0x498, "StructProperty"},
            {"CompanionSpeed2D", 0x4B0, "FloatProperty"},
            {"CompanionVelocity", 0x4B8, "StructProperty"},
            {"GoalLocation", 0x4D0, "StructProperty"},
            {"GoalRotation", 0x4E8, "StructProperty"},
            {"PlayerLocation", 0x500, "StructProperty"},
            {"PlayerSpeed2D", 0x518, "FloatProperty"},
            {"PlayerVelocity", 0x520, "StructProperty"},
            {"LookAtPitch", 0x538, "FloatProperty"},
            {"LookAtYaw", 0x53C, "FloatProperty"},
            {"Mood", 0x540, "EnumProperty"},
            {"bTriggerIdleBreak", 0x541, "BoolProperty"},
            {"TriggerIdleBreakNumber", 0x544, "IntProperty"},
            {"bIsPlayingEmote", 0x548, "BoolProperty"},
            {"bIsPreviewActor", 0x549, "BoolProperty"},
            {"PreviewActorIndex", 0x54C, "IntProperty"},
            {"bUseLowFidelity", 0x550, "BoolProperty"},
            {"bJustSpawned", 0x551, "BoolProperty"},
            {"AnimTable", 0x558, "ObjectProperty"},
            {"OnSpawnedProxy", 0x560, "ObjectProperty"},
            {"OnSpawnedChooser", 0x568, "StructProperty"},
            {"AnticsSelectionProxy", 0x588, "ObjectProperty"},
            {"AnticsSelectionChooser", 0x590, "ObjectProperty"},
            {"AnticSequenceInfo", 0x598, "StructProperty"},
            {"CompanionDirection", 0x5A8, "FloatProperty"},
            {"bIsMoving", 0x5AC, "BoolProperty"},
            {"MovingThreshold", 0x5B0, "FloatProperty"},
            {"bIsCompanionStopping", 0x5B4, "BoolProperty"},
            {"bIsMoodWorried", 0x5B5, "BoolProperty"},
            {"bIsMoodCombat", 0x5B6, "BoolProperty"},
            {"bIsMoodBored", 0x5B7, "BoolProperty"},
            {"bIsMoodDefault", 0x5B8, "BoolProperty"},
            {"bIsDelayedMoodCombat", 0x5B9, "BoolProperty"},
            {"bIsEmoteCurveA", 0x5BA, "BoolProperty"},
            {"bIsEmoteCurveB", 0x5BB, "BoolProperty"},
            {"bOnlyAffectSkeletonRootBone", 0x5BC, "BoolProperty"},
            {"MaxStepHeight", 0x5C0, "FloatProperty"},
            {"MaxSkeletonRootBoneRotationAngle", 0x5C4, "FloatProperty"},
            {"AudioEnvelopeValue", 0x5C8, "FloatProperty"},
            {"bIsVOActive", 0x5CC, "BoolProperty"},
            {"bOpenJawWithVO", 0x5CD, "BoolProperty"},
            {"JawOpenValue", 0x5D0, "FloatProperty"},
            {"CurrentLocomotionMovementType", 0x5D4, "EnumProperty"},
            {"RunToSprintThreshold", 0x5D8, "FloatProperty"},
            {"SprintToRunThreshold", 0x5DC, "FloatProperty"},
            {"TrotToRunThreshold", 0x5E0, "FloatProperty"},
            {"RunToTrotThreshold", 0x5E4, "FloatProperty"},
            {"WalkToTrotThreshold", 0x5E8, "FloatProperty"},
            {"TrotToWalkThreshold", 0x5EC, "FloatProperty"},
            {"LocomotionPlayRate", 0x5F0, "FloatProperty"},
            {"LocomotionScaleMultiplierWeight", 0x5F4, "FloatProperty"},
            {"LocomotionPlayRateMultiplier", 0x5F8, "FloatProperty"},
            {"SlopeMatchingRotationOffset", 0x600, "StructProperty"},
            {"SlopeMatchingWeight", 0x618, "FloatProperty"},
            {"SlopeWarpingComponent", 0x648, "ObjectProperty"},
        }};
    };

    struct FortPlayerCompanionAnimInterface
    {
        static constexpr std::string_view Name = "FortPlayerCompanionAnimInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayerCompanionCosmeticComponent
    {
        static constexpr std::string_view Name = "FortPlayerCompanionCosmeticComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bFootstepFXDisabled = 0xE0;
            static constexpr std::uintptr_t CompanionActor = 0x130;
            static constexpr std::uintptr_t PlayerPawn = 0x138;
            static constexpr std::uintptr_t CompanionMainItemDef = 0x140;
            static constexpr std::uintptr_t CharacterPartMeshComponents = 0x148;
            static constexpr std::uintptr_t CompanionEmotes = 0x158;
            static constexpr std::uintptr_t ReactionChooserProxy = 0x168;
            static constexpr std::uintptr_t AdditionalReactionChooserTable = 0x198;
            static constexpr std::uintptr_t InteractionSceneAsset = 0x1A0;
            static constexpr std::uintptr_t AnimDataAsset = 0x1A8;
            static constexpr std::uintptr_t AnimTableAsset = 0x1B0;
            static constexpr std::uintptr_t AnimationSettingsOverride = 0x1B8;
            static constexpr std::uintptr_t ReactFX = 0x1C0;
            static constexpr std::uintptr_t ReactFXAttachmentParameters = 0x1C8;
            static constexpr std::uintptr_t CharacterParts = 0x220;
            static constexpr std::uintptr_t DesiredCosmeticParts = 0x230;
            static constexpr std::uintptr_t OnCosmeticsInitialized = 0x240;
            static constexpr std::uintptr_t CompanionName = 0x250;
            static constexpr std::uintptr_t OverrideMaterial = 0x260;
            static constexpr std::uintptr_t MaterialOverrideStateMap = 0x2C8;
            static constexpr std::uintptr_t VFXComponents = 0x2D8;
            static constexpr std::uintptr_t SampleItemDefs = 0x2E8;
            static constexpr std::uintptr_t SoftCompanionEmotes = 0x2F8;
            static constexpr std::uintptr_t PartModifiers = 0x308;
            static constexpr std::uintptr_t CachedCosmeticLoadout = 0x328;
            static constexpr std::uintptr_t CachedCompanionSubsystem = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"bFootstepFXDisabled", 0xE0, "BoolProperty"},
            {"CompanionActor", 0x130, "ObjectProperty"},
            {"PlayerPawn", 0x138, "WeakObjectProperty"},
            {"CompanionMainItemDef", 0x140, "ObjectProperty"},
            {"CharacterPartMeshComponents", 0x148, "ArrayProperty"},
            {"CompanionEmotes", 0x158, "ArrayProperty"},
            {"ReactionChooserProxy", 0x168, "ObjectProperty"},
            {"AdditionalReactionChooserTable", 0x198, "ObjectProperty"},
            {"InteractionSceneAsset", 0x1A0, "ObjectProperty"},
            {"AnimDataAsset", 0x1A8, "ObjectProperty"},
            {"AnimTableAsset", 0x1B0, "ObjectProperty"},
            {"AnimationSettingsOverride", 0x1B8, "ObjectProperty"},
            {"ReactFX", 0x1C0, "ObjectProperty"},
            {"ReactFXAttachmentParameters", 0x1C8, "StructProperty"},
            {"CharacterParts", 0x220, "ArrayProperty"},
            {"DesiredCosmeticParts", 0x230, "ArrayProperty"},
            {"OnCosmeticsInitialized", 0x240, "MulticastInlineDelegateProperty"},
            {"CompanionName", 0x250, "StrProperty"},
            {"OverrideMaterial", 0x260, "StructProperty"},
            {"MaterialOverrideStateMap", 0x2C8, "MapProperty"},
            {"VFXComponents", 0x2D8, "ArrayProperty"},
            {"SampleItemDefs", 0x2E8, "ArrayProperty"},
            {"SoftCompanionEmotes", 0x2F8, "ArrayProperty"},
            {"PartModifiers", 0x308, "ArrayProperty"},
            {"CachedCosmeticLoadout", 0x328, "OptionalProperty"},
            {"CachedCompanionSubsystem", 0x378, "WeakObjectProperty"},
        }};
    };

    struct FortPlayerCompanionCosmeticInterface
    {
        static constexpr std::string_view Name = "FortPlayerCompanionCosmeticInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayerCompanionPreviewActor
    {
        static constexpr std::string_view Name = "FortPlayerCompanionPreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticComponent = 0x298;
            static constexpr std::uintptr_t ContextualAnimSceneComponent = 0x2A0;
            static constexpr std::uintptr_t Mesh = 0x2A8;
            static constexpr std::uintptr_t ZoomScaleFactorOffPawnPreview = 0x2D4;
            static constexpr std::uintptr_t SpawnAnimMode = 0x2D8;
            static constexpr std::uintptr_t CameraFrameTargetBounds = 0x2E0;
            static constexpr std::uintptr_t bIsLockerActor = 0x300;
            static constexpr std::uintptr_t ContextTags = 0x308;
            static constexpr std::uintptr_t HologramMaterial = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CosmeticComponent", 0x298, "ObjectProperty"},
            {"ContextualAnimSceneComponent", 0x2A0, "ObjectProperty"},
            {"Mesh", 0x2A8, "ObjectProperty"},
            {"ZoomScaleFactorOffPawnPreview", 0x2D4, "FloatProperty"},
            {"SpawnAnimMode", 0x2D8, "EnumProperty"},
            {"CameraFrameTargetBounds", 0x2E0, "StructProperty"},
            {"bIsLockerActor", 0x300, "BoolProperty"},
            {"ContextTags", 0x308, "StructProperty"},
            {"HologramMaterial", 0x328, "ObjectProperty"},
        }};
    };

    struct FortPlayerCompanionPreviewActorReactionFinishedDelegateWrapper
    {
        static constexpr std::string_view Name = "FortPlayerCompanionPreviewActorReactionFinishedDelegateWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayerCompanionPreviewLockerComponent
    {
        static constexpr std::string_view Name = "FortPlayerCompanionPreviewLockerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CompanionActorClass = 0xC0;
            static constexpr std::uintptr_t CompanionActor = 0xE0;
            static constexpr std::uintptr_t LockerOffset = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CompanionActorClass", 0xC0, "SoftClassProperty"},
            {"CompanionActor", 0xE0, "ObjectProperty"},
            {"LockerOffset", 0xF0, "StructProperty"},
        }};
    };

    struct FortPlayerCompanionQuadrupedDataAsset
    {
        static constexpr std::string_view Name = "FortPlayerCompanionQuadrupedDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Struct = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Struct", 0x28, "StructProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_CompanionExtension
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_CompanionExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_CompanionProgression
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_CompanionProgression";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectivesExtensionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectivesExtensionData", 0x30, "MapProperty"},
        }};
    };

    struct HandleCompanionPostLoadInterface
    {
        static constexpr std::string_view Name = "HandleCompanionPostLoadInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RodentAnimExtension
    {
        static constexpr std::string_view Name = "RodentAnimExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionAnimExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t PivotAngleThreshold = 0x28;
            static constexpr std::uintptr_t MinLocoAdditiveSpeed = 0x2C;
            static constexpr std::uintptr_t MaxLocoAdditiveSpeed = 0x30;
            static constexpr std::uintptr_t LocoAdditiveAlphaInterpSpeed = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PivotAngleThreshold", 0x28, "FloatProperty"},
            {"MinLocoAdditiveSpeed", 0x2C, "FloatProperty"},
            {"MaxLocoAdditiveSpeed", 0x30, "FloatProperty"},
            {"LocoAdditiveAlphaInterpSpeed", 0x34, "FloatProperty"},
        }};
    };

    struct RoseBruinAnimInstance
    {
        static constexpr std::string_view Name = "RoseBruinAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerCompanionAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BreathingPlayRate = 0x670;
            static constexpr std::uintptr_t IdlePlayrate = 0x674;
            static constexpr std::uintptr_t LocomotionAlpha = 0x678;
            static constexpr std::uintptr_t LocoAdditiveAlpha = 0x680;
            static constexpr std::uintptr_t TailAdditiveAlpha = 0x684;
            static constexpr std::uintptr_t LookAtPitchAdjusted = 0x688;
            static constexpr std::uintptr_t AnticsAlpha = 0x690;
            static constexpr std::uintptr_t LookAtYawAdjusted = 0x698;
            static constexpr std::uintptr_t bDisableFaceAntics = 0x6A0;
            static constexpr std::uintptr_t bIsEmoteActive = 0x6A1;
            static constexpr std::uintptr_t bIsReactionActive = 0x6A2;
            static constexpr std::uintptr_t bTriggerReactOutro = 0x6A3;
            static constexpr std::uintptr_t bTriggerPivot = 0x6A4;
            static constexpr std::uintptr_t bHasPivotAnim = 0x6A5;
            static constexpr std::uintptr_t bTriggerStop = 0x6A6;
            static constexpr std::uintptr_t bTriggerStart = 0x6A7;
            static constexpr std::uintptr_t bTrotStop = 0x6A8;
            static constexpr std::uintptr_t bTriggerStopToStart = 0x6A9;
            static constexpr std::uintptr_t bTriggerFaceAntic = 0x6AA;
            static constexpr std::uintptr_t bTriggerBodyAntic = 0x6AB;
            static constexpr std::uintptr_t bExitBodyAntic = 0x6AC;
            static constexpr std::uintptr_t bDontInteruptAntic = 0x6AD;
            static constexpr std::uintptr_t bBlockBodyAntics = 0x6AE;
            static constexpr std::uintptr_t bIsCombatReactionActive = 0x6AF;
            static constexpr std::uintptr_t bIsHappyReactionActive = 0x6B0;
            static constexpr std::uintptr_t bHasTailAdditive = 0x6B1;
            static constexpr std::uintptr_t bHasStartAnim = 0x6B2;
            static constexpr std::uintptr_t bByPassStartWhenAngry = 0x6B3;
            static constexpr std::uintptr_t DisableLocoFace = 0x6B4;
            static constexpr std::uintptr_t TrotStopDecelerationThreshold = 0x6B8;
            static constexpr std::uintptr_t SlopeWarpingAlpha = 0x6BC;
            static constexpr std::uintptr_t BaseRootSlopeCompensationAlpha = 0x6C0;
            static constexpr std::uintptr_t RootSlopeCompensationAlpha = 0x6C4;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"BreathingPlayRate", 0x670, "FloatProperty"},
            {"IdlePlayrate", 0x674, "FloatProperty"},
            {"LocomotionAlpha", 0x678, "DoubleProperty"},
            {"LocoAdditiveAlpha", 0x680, "FloatProperty"},
            {"TailAdditiveAlpha", 0x684, "FloatProperty"},
            {"LookAtPitchAdjusted", 0x688, "DoubleProperty"},
            {"AnticsAlpha", 0x690, "DoubleProperty"},
            {"LookAtYawAdjusted", 0x698, "DoubleProperty"},
            {"bDisableFaceAntics", 0x6A0, "BoolProperty"},
            {"bIsEmoteActive", 0x6A1, "BoolProperty"},
            {"bIsReactionActive", 0x6A2, "BoolProperty"},
            {"bTriggerReactOutro", 0x6A3, "BoolProperty"},
            {"bTriggerPivot", 0x6A4, "BoolProperty"},
            {"bHasPivotAnim", 0x6A5, "BoolProperty"},
            {"bTriggerStop", 0x6A6, "BoolProperty"},
            {"bTriggerStart", 0x6A7, "BoolProperty"},
            {"bTrotStop", 0x6A8, "BoolProperty"},
            {"bTriggerStopToStart", 0x6A9, "BoolProperty"},
            {"bTriggerFaceAntic", 0x6AA, "BoolProperty"},
            {"bTriggerBodyAntic", 0x6AB, "BoolProperty"},
            {"bExitBodyAntic", 0x6AC, "BoolProperty"},
            {"bDontInteruptAntic", 0x6AD, "BoolProperty"},
            {"bBlockBodyAntics", 0x6AE, "BoolProperty"},
            {"bIsCombatReactionActive", 0x6AF, "BoolProperty"},
            {"bIsHappyReactionActive", 0x6B0, "BoolProperty"},
            {"bHasTailAdditive", 0x6B1, "BoolProperty"},
            {"bHasStartAnim", 0x6B2, "BoolProperty"},
            {"bByPassStartWhenAngry", 0x6B3, "BoolProperty"},
            {"DisableLocoFace", 0x6B4, "FloatProperty"},
            {"TrotStopDecelerationThreshold", 0x6B8, "FloatProperty"},
            {"SlopeWarpingAlpha", 0x6BC, "FloatProperty"},
            {"BaseRootSlopeCompensationAlpha", 0x6C0, "FloatProperty"},
            {"RootSlopeCompensationAlpha", 0x6C4, "FloatProperty"},
        }};
    };

    struct ShadowLapQuadrupedAnimInstance
    {
        static constexpr std::string_view Name = "ShadowLapQuadrupedAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bCustomEmote = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCustomEmote", 0x260, "BoolProperty"},
        }};
    };

    struct ShirtTilapiaQuadrupedPostAnimInstance
    {
        static constexpr std::string_view Name = "ShirtTilapiaQuadrupedPostAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CompanionPostProcessAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideWorldGravity = 0x3B0;
            static constexpr std::uintptr_t ShirtTilapiaEmoteAgreeMAnimMontage = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverrideWorldGravity", 0x3B0, "StructProperty"},
            {"ShirtTilapiaEmoteAgreeMAnimMontage", 0x3C8, "ObjectProperty"},
        }};
    };

    struct TeaPupQuadrupedCCPAnimInstance
    {
        static constexpr std::string_view Name = "TeaPupQuadrupedCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bCustomEmoteRetarget = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCustomEmoteRetarget", 0x640, "BoolProperty"},
        }};
    };

    struct WartyBarkQuadrupedAnimInstance
    {
        static constexpr std::string_view Name = "WartyBarkQuadrupedAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bCustomEmoteRetarget = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCustomEmoteRetarget", 0x260, "BoolProperty"},
        }};
    };

    struct WhineDummeezQuadrupedAnimInstance
    {
        static constexpr std::string_view Name = "WhineDummeezQuadrupedAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseReverseRetarget = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseReverseRetarget", 0x260, "BoolProperty"},
        }};
    };

    struct WideSnoreQuadrupedMorphCCPAnimInstance
    {
        static constexpr std::string_view Name = "WideSnoreQuadrupedMorphCCPAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterCustomizationFinished = 0x468;
            static constexpr std::uintptr_t CurrentWeapon = 0x478;
            static constexpr std::uintptr_t bCanPlayCustomAnimations = 0x480;
            static constexpr std::uintptr_t bHideUntilFirstAnimationUpdate = 0x480;
            static constexpr std::uintptr_t bIgnoreSignificanceManagerAndAlwaysTick = 0x480;
            static constexpr std::uintptr_t bIsRelaxedLevel2 = 0x480;
            static constexpr std::uintptr_t bIsRiding = 0x480;
            static constexpr std::uintptr_t bUnhideOnNextUpdate = 0x480;
            static constexpr std::uintptr_t bUpdateOwnerAnimInputProperty = 0x480;
            static constexpr std::uintptr_t bUsesDayPhaseChange = 0x480;
            static constexpr std::uintptr_t bIsCrouching = 0x481;
            static constexpr std::uintptr_t bIsInFirstPerson = 0x481;
            static constexpr std::uintptr_t bIsParachuteOpened = 0x481;
            static constexpr std::uintptr_t bIsSkydiveDiveMode = 0x481;
            static constexpr std::uintptr_t bIsSkydiveFloating = 0x481;
            static constexpr std::uintptr_t bIsSkydiving = 0x481;
            static constexpr std::uintptr_t bIsSkydivingFromBus = 0x481;
            static constexpr std::uintptr_t bParachuteOpenedAndStandingUpright = 0x481;
            static constexpr std::uintptr_t bIsAccelerating2D = 0x482;
            static constexpr std::uintptr_t bIsBackpedaling = 0x482;
            static constexpr std::uintptr_t bIsMoving2D = 0x482;
            static constexpr std::uintptr_t bIsSprinting = 0x482;
            static constexpr std::uintptr_t bIsUsingJetpack = 0x482;
            static constexpr std::uintptr_t bGoopJumpExecuted = 0x484;
            static constexpr std::uintptr_t bIsInFrontEnd = 0x488;
            static constexpr std::uintptr_t bIsPlayingEmote = 0x488;
            static constexpr std::uintptr_t bIsPlayingFullBodySlotInFrontEnd = 0x488;
            static constexpr std::uintptr_t bIsPlayingMeleeAnim = 0x488;
            static constexpr std::uintptr_t bIsSlopeSliding = 0x488;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0x488;
            static constexpr std::uintptr_t bIsSwimSprinting = 0x488;
            static constexpr std::uintptr_t bIsWaterJump = 0x488;
            static constexpr std::uintptr_t bIsInCannon = 0x489;
            static constexpr std::uintptr_t bIsInShoppingCart = 0x489;
            static constexpr std::uintptr_t bIsInVehicle = 0x489;
            static constexpr std::uintptr_t bIsOnPawn = 0x489;
            static constexpr std::uintptr_t bIsPreviewingItemInFrontEnd = 0x489;
            static constexpr std::uintptr_t bIsValetDriver = 0x489;
            static constexpr std::uintptr_t bIsValetPassenger = 0x489;
            static constexpr std::uintptr_t bShouldDisplayFrontendReactivity = 0x489;
            static constexpr std::uintptr_t bIsCrouchSprinting = 0x48A;
            static constexpr std::uintptr_t bIsDBNO = 0x48A;
            static constexpr std::uintptr_t bIsTargeting = 0x48A;
            static constexpr std::uintptr_t bIsTargetingConsumableThrow = 0x48A;
            static constexpr std::uintptr_t bIsInAir = 0x48C;
            static constexpr std::uintptr_t bIsOnGround = 0x48C;
            static constexpr std::uintptr_t bIsFerretVehicleDriver = 0x490;
            static constexpr std::uintptr_t bIsFerretVehiclePassenger = 0x490;
            static constexpr std::uintptr_t bIsGolfCartVehicleBackPassenger = 0x490;
            static constexpr std::uintptr_t bIsGolfCartVehicleDriver = 0x490;
            static constexpr std::uintptr_t bIsGolfCartVehicleFrontPassenger = 0x490;
            static constexpr std::uintptr_t bIsInVehicleSeat = 0x490;
            static constexpr std::uintptr_t bIsLandingPredicted = 0x490;
            static constexpr std::uintptr_t bVehicleSeatForcesCrouch = 0x490;
            static constexpr std::uintptr_t bHasMotorcyclePassenger = 0x491;
            static constexpr std::uintptr_t bIsAntelopeVehicleDriver = 0x491;
            static constexpr std::uintptr_t bIsAntelopeVehiclePassenger = 0x491;
            static constexpr std::uintptr_t bIsJackalVehicleDriver = 0x491;
            static constexpr std::uintptr_t bIsMotorcycleDriver = 0x491;
            static constexpr std::uintptr_t bIsMotorcyclePassenger = 0x491;
            static constexpr std::uintptr_t bIsOctopusVehicleDriver = 0x491;
            static constexpr std::uintptr_t bIsOstrichVehicleDriver = 0x491;
            static constexpr std::uintptr_t bIsDBNOCarried = 0x492;
            static constexpr std::uintptr_t bIsDBNOCarrying = 0x492;
            static constexpr std::uintptr_t bIsLeftArmHidden = 0x492;
            static constexpr std::uintptr_t bIsMeatballDriver = 0x492;
            static constexpr std::uintptr_t bIsMeatballPassenger = 0x492;
            static constexpr std::uintptr_t bIsOstrichVehicleGunner = 0x492;
            static constexpr std::uintptr_t bIsRightArmHidden = 0x492;
            static constexpr std::uintptr_t bIsTacticalSprinting = 0x492;
            static constexpr std::uintptr_t bIsLeftLegHidden = 0x493;
            static constexpr std::uintptr_t bIsNeckHeadHidden = 0x493;
            static constexpr std::uintptr_t bIsRightLegHidden = 0x493;
            static constexpr std::uintptr_t bCachedIsWearingBackbling = 0x494;
            static constexpr std::uintptr_t bCachedIsBackblingACape = 0x495;
            static constexpr std::uintptr_t bOverrideRBANSimSpaceInFrontEnd = 0x498;
            static constexpr std::uintptr_t VehicleSeatIndex = 0x49C;
            static constexpr std::uintptr_t VehicleSlotExposure = 0x4A0;
            static constexpr std::uintptr_t GameplayTagAnimations = 0x4A8;
            static constexpr std::uintptr_t CrouchingWithRigidBodyEnabled = 0x4B8;
            static constexpr std::uintptr_t RidingSpeed2D = 0x4BC;
            static constexpr std::uintptr_t CurrentLOD = 0x4C0;
            static constexpr std::uintptr_t SignificanceLOD = 0x4C4;
            static constexpr std::uintptr_t SkydivingExternalForceInput = 0x4C8;
            static constexpr std::uintptr_t SlopeInfoInput = 0x5B0;
            static constexpr std::uintptr_t PlayerGliderType = 0x610;
            static constexpr std::uintptr_t WeaponCoreAnim = 0x611;
            static constexpr std::uintptr_t bIsFlyingHorizontally = 0x612;
            static constexpr std::uintptr_t bIsFlyingVertically = 0x612;
            static constexpr std::uintptr_t bIsOnAscender = 0x612;
            static constexpr std::uintptr_t bIsOnGrindRail = 0x612;
            static constexpr std::uintptr_t bIsZiplining = 0x612;
            static constexpr std::uintptr_t bPbBlendEnabled = 0x612;
            static constexpr std::uintptr_t bRegisteredForDayPhaseChange = 0x614;
            static constexpr std::uintptr_t PartType = 0x618;
            static constexpr std::uintptr_t OwnerSkeletalMeshComponent = 0x61C;
            static constexpr std::uintptr_t PendingCustomizationFinishedEvent = 0x628;
            static constexpr std::uintptr_t PendingPickaxeCustomizationFinishedEvent = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 98> Properties{{
            {"CharacterCustomizationFinished", 0x468, "MulticastInlineDelegateProperty"},
            {"CurrentWeapon", 0x478, "ObjectProperty"},
            {"bCanPlayCustomAnimations", 0x480, "BoolProperty"},
            {"bHideUntilFirstAnimationUpdate", 0x480, "BoolProperty"},
            {"bIgnoreSignificanceManagerAndAlwaysTick", 0x480, "BoolProperty"},
            {"bIsRelaxedLevel2", 0x480, "BoolProperty"},
            {"bIsRiding", 0x480, "BoolProperty"},
            {"bUnhideOnNextUpdate", 0x480, "BoolProperty"},
            {"bUpdateOwnerAnimInputProperty", 0x480, "BoolProperty"},
            {"bUsesDayPhaseChange", 0x480, "BoolProperty"},
            {"bIsCrouching", 0x481, "BoolProperty"},
            {"bIsInFirstPerson", 0x481, "BoolProperty"},
            {"bIsParachuteOpened", 0x481, "BoolProperty"},
            {"bIsSkydiveDiveMode", 0x481, "BoolProperty"},
            {"bIsSkydiveFloating", 0x481, "BoolProperty"},
            {"bIsSkydiving", 0x481, "BoolProperty"},
            {"bIsSkydivingFromBus", 0x481, "BoolProperty"},
            {"bParachuteOpenedAndStandingUpright", 0x481, "BoolProperty"},
            {"bIsAccelerating2D", 0x482, "BoolProperty"},
            {"bIsBackpedaling", 0x482, "BoolProperty"},
            {"bIsMoving2D", 0x482, "BoolProperty"},
            {"bIsSprinting", 0x482, "BoolProperty"},
            {"bIsUsingJetpack", 0x482, "BoolProperty"},
            {"bGoopJumpExecuted", 0x484, "BoolProperty"},
            {"bIsInFrontEnd", 0x488, "BoolProperty"},
            {"bIsPlayingEmote", 0x488, "BoolProperty"},
            {"bIsPlayingFullBodySlotInFrontEnd", 0x488, "BoolProperty"},
            {"bIsPlayingMeleeAnim", 0x488, "BoolProperty"},
            {"bIsSlopeSliding", 0x488, "BoolProperty"},
            {"bIsSurfaceSwimming", 0x488, "BoolProperty"},
            {"bIsSwimSprinting", 0x488, "BoolProperty"},
            {"bIsWaterJump", 0x488, "BoolProperty"},
            {"bIsInCannon", 0x489, "BoolProperty"},
            {"bIsInShoppingCart", 0x489, "BoolProperty"},
            {"bIsInVehicle", 0x489, "BoolProperty"},
            {"bIsOnPawn", 0x489, "BoolProperty"},
            {"bIsPreviewingItemInFrontEnd", 0x489, "BoolProperty"},
            {"bIsValetDriver", 0x489, "BoolProperty"},
            {"bIsValetPassenger", 0x489, "BoolProperty"},
            {"bShouldDisplayFrontendReactivity", 0x489, "BoolProperty"},
            {"bIsCrouchSprinting", 0x48A, "BoolProperty"},
            {"bIsDBNO", 0x48A, "BoolProperty"},
            {"bIsTargeting", 0x48A, "BoolProperty"},
            {"bIsTargetingConsumableThrow", 0x48A, "BoolProperty"},
            {"bIsInAir", 0x48C, "BoolProperty"},
            {"bIsOnGround", 0x48C, "BoolProperty"},
            {"bIsFerretVehicleDriver", 0x490, "BoolProperty"},
            {"bIsFerretVehiclePassenger", 0x490, "BoolProperty"},
            {"bIsGolfCartVehicleBackPassenger", 0x490, "BoolProperty"},
            {"bIsGolfCartVehicleDriver", 0x490, "BoolProperty"},
            {"bIsGolfCartVehicleFrontPassenger", 0x490, "BoolProperty"},
            {"bIsInVehicleSeat", 0x490, "BoolProperty"},
            {"bIsLandingPredicted", 0x490, "BoolProperty"},
            {"bVehicleSeatForcesCrouch", 0x490, "BoolProperty"},
            {"bHasMotorcyclePassenger", 0x491, "BoolProperty"},
            {"bIsAntelopeVehicleDriver", 0x491, "BoolProperty"},
            {"bIsAntelopeVehiclePassenger", 0x491, "BoolProperty"},
            {"bIsJackalVehicleDriver", 0x491, "BoolProperty"},
            {"bIsMotorcycleDriver", 0x491, "BoolProperty"},
            {"bIsMotorcyclePassenger", 0x491, "BoolProperty"},
            {"bIsOctopusVehicleDriver", 0x491, "BoolProperty"},
            {"bIsOstrichVehicleDriver", 0x491, "BoolProperty"},
            {"bIsDBNOCarried", 0x492, "BoolProperty"},
            {"bIsDBNOCarrying", 0x492, "BoolProperty"},
            {"bIsLeftArmHidden", 0x492, "BoolProperty"},
            {"bIsMeatballDriver", 0x492, "BoolProperty"},
            {"bIsMeatballPassenger", 0x492, "BoolProperty"},
            {"bIsOstrichVehicleGunner", 0x492, "BoolProperty"},
            {"bIsRightArmHidden", 0x492, "BoolProperty"},
            {"bIsTacticalSprinting", 0x492, "BoolProperty"},
            {"bIsLeftLegHidden", 0x493, "BoolProperty"},
            {"bIsNeckHeadHidden", 0x493, "BoolProperty"},
            {"bIsRightLegHidden", 0x493, "BoolProperty"},
            {"bCachedIsWearingBackbling", 0x494, "BoolProperty"},
            {"bCachedIsBackblingACape", 0x495, "BoolProperty"},
            {"bOverrideRBANSimSpaceInFrontEnd", 0x498, "BoolProperty"},
            {"VehicleSeatIndex", 0x49C, "IntProperty"},
            {"VehicleSlotExposure", 0x4A0, "EnumProperty"},
            {"GameplayTagAnimations", 0x4A8, "StructProperty"},
            {"CrouchingWithRigidBodyEnabled", 0x4B8, "FloatProperty"},
            {"RidingSpeed2D", 0x4BC, "FloatProperty"},
            {"CurrentLOD", 0x4C0, "IntProperty"},
            {"SignificanceLOD", 0x4C4, "IntProperty"},
            {"SkydivingExternalForceInput", 0x4C8, "StructProperty"},
            {"SlopeInfoInput", 0x5B0, "StructProperty"},
            {"PlayerGliderType", 0x610, "EnumProperty"},
            {"WeaponCoreAnim", 0x611, "ByteProperty"},
            {"bIsFlyingHorizontally", 0x612, "BoolProperty"},
            {"bIsFlyingVertically", 0x612, "BoolProperty"},
            {"bIsOnAscender", 0x612, "BoolProperty"},
            {"bIsOnGrindRail", 0x612, "BoolProperty"},
            {"bIsZiplining", 0x612, "BoolProperty"},
            {"bPbBlendEnabled", 0x612, "BoolProperty"},
            {"bRegisteredForDayPhaseChange", 0x614, "BoolProperty"},
            {"PartType", 0x618, "ByteProperty"},
            {"OwnerSkeletalMeshComponent", 0x61C, "WeakObjectProperty"},
            {"PendingCustomizationFinishedEvent", 0x628, "ObjectProperty"},
            {"PendingPickaxeCustomizationFinishedEvent", 0x630, "ObjectProperty"},
        }};
    };

    struct ZestySiloQuadrupedAnimInstance
    {
        static constexpr std::string_view Name = "ZestySiloQuadrupedAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bCustomEmote = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCustomEmote", 0x260, "BoolProperty"},
        }};
    };

}
