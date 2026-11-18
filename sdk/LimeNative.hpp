#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LimeNative
{
    struct DebugObserveLimePlugin
    {
        static constexpr std::string_view Name = "DebugObserveLimePlugin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameFeatureAction_LimeDebug
    {
        static constexpr std::string_view Name = "GameFeatureAction_LimeDebug";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcePawnActions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ForcePawnActions", 0x28, "ArrayProperty"},
        }};
    };

    struct LimeAnalytics
    {
        static constexpr std::string_view Name = "LimeAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalyticsContexts = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnalyticsContexts", 0x28, "ArrayProperty"},
        }};
    };

    struct LimeArmedPlayerAnimInstance
    {
        static constexpr std::string_view Name = "LimeArmedPlayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bPlayerAimDownSights = 0x9B0;
            static constexpr std::uintptr_t bPlayerFiredCooldownActive = 0x9B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bPlayerAimDownSights", 0x9B0, "BoolProperty"},
            {"bPlayerFiredCooldownActive", 0x9B0, "BoolProperty"},
        }};
    };

    struct LimeBaseLayerAnimInstance
    {
        static constexpr std::string_view Name = "LimeBaseLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MainAnimInstanceWeakPtr = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MainAnimInstanceWeakPtr", 0x340, "WeakObjectProperty"},
        }};
    };

    struct LimeCameraMode_OrbitCam
    {
        static constexpr std::string_view Name = "LimeCameraMode_OrbitCam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t FOV = 0x78;
            static constexpr std::uintptr_t CameraSpaceForwardDistance = 0x7C;
            static constexpr std::uintptr_t bClampCameraPitch = 0x80;
            static constexpr std::uintptr_t bClampCameraYaw = 0x81;
            static constexpr std::uintptr_t bReorientYawClampToPawnFacing = 0x82;
            static constexpr std::uintptr_t bReorientPitchClampToPawnFacing = 0x83;
            static constexpr std::uintptr_t bUpdateCameraYawClampOnActivate = 0x84;
            static constexpr std::uintptr_t bUpdateCameraPitchClampOnActivate = 0x85;
            static constexpr std::uintptr_t CameraPitchMin = 0x88;
            static constexpr std::uintptr_t CameraPitchMax = 0x8C;
            static constexpr std::uintptr_t CameraYawMin = 0x90;
            static constexpr std::uintptr_t CameraYawMax = 0x94;
            static constexpr std::uintptr_t CameraOrigin = 0x98;
            static constexpr std::uintptr_t CameraOriginSocketName = 0x9C;
            static constexpr std::uintptr_t CameraOriginInterpSpeed = 0xA0;
            static constexpr std::uintptr_t StepUpCameraOriginInterpVerticalSpeed = 0xB8;
            static constexpr std::uintptr_t GravityChangeAngleThresholdDegrees = 0xBC;
            static constexpr std::uintptr_t CameraLocationErrorConstraintBox = 0xC0;
            static constexpr std::uintptr_t ViewTargetSpaceViewOffset = 0xF8;
            static constexpr std::uintptr_t ViewTargetSpaceViewOffset_Crouch = 0x130;
            static constexpr std::uintptr_t ViewTargetSpaceViewOffsetInterpSpeed = 0x168;
            static constexpr std::uintptr_t ViewTargetSpaceViewOffsetInterpSpeed_Crouch = 0x180;
            static constexpr std::uintptr_t CameraSpaceViewOffset = 0x198;
            static constexpr std::uintptr_t ViewTargetAlignmentFlipInterpDuration = 0x1D0;
            static constexpr std::uintptr_t bScaleViewOffsetByViewTargetScale = 0x1D4;
            static constexpr std::uintptr_t bUseLocationAsReferenceFrameTransform = 0x1D5;
            static constexpr std::uintptr_t bSupportsShoulderSwap = 0x1D6;
            static constexpr std::uintptr_t bControlsWeaponTransform = 0x1D8;
            static constexpr std::uintptr_t AimedObjectConfig = 0x1E0;
            static constexpr std::uintptr_t bShouldHideWeaponReticle = 0x238;
            static constexpr std::uintptr_t bShouldHideOpticsReticle = 0x239;
            static constexpr std::uintptr_t FirstPersonState = 0x240;
            static constexpr std::uintptr_t bCompensateForMovingPlatformOnCameraOriginInterpolation = 0x248;
            static constexpr std::uintptr_t bSkipUpdateIfPawnNull = 0x249;
            static constexpr std::uintptr_t FirstPersonUpdateFunctions = 0x2B8;
            static constexpr std::uintptr_t LastCameraOrigin = 0x2C8;
            static constexpr std::uintptr_t LastCameraOriginUnaltered = 0x2E0;
            static constexpr std::uintptr_t CameraOriginLocalOffset = 0x2F8;
            static constexpr std::uintptr_t PenetrationBlendInTime = 0x310;
            static constexpr std::uintptr_t PenetrationBlendOutTime = 0x314;
            static constexpr std::uintptr_t bPreventPenetration = 0x318;
            static constexpr std::uintptr_t bDoPredictiveAvoidance = 0x319;
            static constexpr std::uintptr_t CollisionPushOutDistance = 0x31C;
            static constexpr std::uintptr_t HidePawnPenetrationPercent = 0x320;
            static constexpr std::uintptr_t bHidePawnWhileNotFullyWeighted = 0x324;
            static constexpr std::uintptr_t bIgnoreFrontFacingPenetration = 0x325;
            static constexpr std::uintptr_t LastAttachSocketName = 0x390;
            static constexpr std::uintptr_t LastBasePOV = 0x3A0;
            static constexpr std::uintptr_t DeltaBasePOV = 0xCB0;
            static constexpr std::uintptr_t BlendAlpha = 0x15C0;
            static constexpr std::uintptr_t PenetrationAvoidanceFeelers = 0x15E0;
            static constexpr std::uintptr_t SafeLocToAimLineBlockedPct = 0x15F0;
            static constexpr std::uintptr_t AimLineToDesiredPosBlockedPct = 0x15F4;
            static constexpr std::uintptr_t LastDrawDebugTime = 0x15F8;
            static constexpr std::uintptr_t LastViewTargetSpaceViewOffset = 0x1600;
            static constexpr std::uintptr_t LastViewTargetAlignmentUp = 0x1618;
            static constexpr std::uintptr_t ViewTargetAlignmentFlipInterpTime = 0x1630;
            static constexpr std::uintptr_t LastCameraPivot = 0x1638;
            static constexpr std::uintptr_t CachedLookAtLocation = 0x1650;
            static constexpr std::uintptr_t CachedPitchLimitMin = 0x1670;
            static constexpr std::uintptr_t CachedPitchLimitMax = 0x1674;
            static constexpr std::uintptr_t CachedYawLimitMin = 0x1678;
            static constexpr std::uintptr_t CachedYawLimitMax = 0x167C;
            static constexpr std::uintptr_t bLastViewTargetValidGroupEmoteLookTarget = 0x1680;
            static constexpr std::uintptr_t IgnoreActorForCameraPenetration = 0x1688;
            static constexpr std::uintptr_t DebugActorsHitDuringCameraPenetration = 0x1690;
            static constexpr std::uintptr_t bWasInVehicle = 0x16A0;
            static constexpr std::uintptr_t PreviousIgnoreActorForCameraPenetration = 0x16A8;
            static constexpr std::uintptr_t PreviousVT = 0x16B0;
            static constexpr std::uintptr_t bIsActive = 0x2060;
            static constexpr std::uintptr_t bLockCameraWhileInactive = 0x2061;
        };

        inline static constexpr std::array<PropertyInfo, 71> Properties{{
            {"FOV", 0x78, "FloatProperty"},
            {"CameraSpaceForwardDistance", 0x7C, "FloatProperty"},
            {"bClampCameraPitch", 0x80, "BoolProperty"},
            {"bClampCameraYaw", 0x81, "BoolProperty"},
            {"bReorientYawClampToPawnFacing", 0x82, "BoolProperty"},
            {"bReorientPitchClampToPawnFacing", 0x83, "BoolProperty"},
            {"bUpdateCameraYawClampOnActivate", 0x84, "BoolProperty"},
            {"bUpdateCameraPitchClampOnActivate", 0x85, "BoolProperty"},
            {"CameraPitchMin", 0x88, "FloatProperty"},
            {"CameraPitchMax", 0x8C, "FloatProperty"},
            {"CameraYawMin", 0x90, "FloatProperty"},
            {"CameraYawMax", 0x94, "FloatProperty"},
            {"CameraOrigin", 0x98, "ByteProperty"},
            {"CameraOriginSocketName", 0x9C, "NameProperty"},
            {"CameraOriginInterpSpeed", 0xA0, "StructProperty"},
            {"StepUpCameraOriginInterpVerticalSpeed", 0xB8, "FloatProperty"},
            {"GravityChangeAngleThresholdDegrees", 0xBC, "FloatProperty"},
            {"CameraLocationErrorConstraintBox", 0xC0, "StructProperty"},
            {"ViewTargetSpaceViewOffset", 0xF8, "StructProperty"},
            {"ViewTargetSpaceViewOffset_Crouch", 0x130, "StructProperty"},
            {"ViewTargetSpaceViewOffsetInterpSpeed", 0x168, "StructProperty"},
            {"ViewTargetSpaceViewOffsetInterpSpeed_Crouch", 0x180, "StructProperty"},
            {"CameraSpaceViewOffset", 0x198, "StructProperty"},
            {"ViewTargetAlignmentFlipInterpDuration", 0x1D0, "FloatProperty"},
            {"bScaleViewOffsetByViewTargetScale", 0x1D4, "BoolProperty"},
            {"bUseLocationAsReferenceFrameTransform", 0x1D5, "BoolProperty"},
            {"bSupportsShoulderSwap", 0x1D6, "BoolProperty"},
            {"bControlsWeaponTransform", 0x1D8, "BoolProperty"},
            {"AimedObjectConfig", 0x1E0, "StructProperty"},
            {"bShouldHideWeaponReticle", 0x238, "BoolProperty"},
            {"bShouldHideOpticsReticle", 0x239, "BoolProperty"},
            {"FirstPersonState", 0x240, "ObjectProperty"},
            {"bCompensateForMovingPlatformOnCameraOriginInterpolation", 0x248, "BoolProperty"},
            {"bSkipUpdateIfPawnNull", 0x249, "BoolProperty"},
            {"FirstPersonUpdateFunctions", 0x2B8, "ArrayProperty"},
            {"LastCameraOrigin", 0x2C8, "StructProperty"},
            {"LastCameraOriginUnaltered", 0x2E0, "StructProperty"},
            {"CameraOriginLocalOffset", 0x2F8, "StructProperty"},
            {"PenetrationBlendInTime", 0x310, "FloatProperty"},
            {"PenetrationBlendOutTime", 0x314, "FloatProperty"},
            {"bPreventPenetration", 0x318, "BoolProperty"},
            {"bDoPredictiveAvoidance", 0x319, "BoolProperty"},
            {"CollisionPushOutDistance", 0x31C, "FloatProperty"},
            {"HidePawnPenetrationPercent", 0x320, "FloatProperty"},
            {"bHidePawnWhileNotFullyWeighted", 0x324, "BoolProperty"},
            {"bIgnoreFrontFacingPenetration", 0x325, "BoolProperty"},
            {"LastAttachSocketName", 0x390, "NameProperty"},
            {"LastBasePOV", 0x3A0, "StructProperty"},
            {"DeltaBasePOV", 0xCB0, "StructProperty"},
            {"BlendAlpha", 0x15C0, "FloatProperty"},
            {"PenetrationAvoidanceFeelers", 0x15E0, "ArrayProperty"},
            {"SafeLocToAimLineBlockedPct", 0x15F0, "FloatProperty"},
            {"AimLineToDesiredPosBlockedPct", 0x15F4, "FloatProperty"},
            {"LastDrawDebugTime", 0x15F8, "FloatProperty"},
            {"LastViewTargetSpaceViewOffset", 0x1600, "StructProperty"},
            {"LastViewTargetAlignmentUp", 0x1618, "StructProperty"},
            {"ViewTargetAlignmentFlipInterpTime", 0x1630, "FloatProperty"},
            {"LastCameraPivot", 0x1638, "StructProperty"},
            {"CachedLookAtLocation", 0x1650, "OptionalProperty"},
            {"CachedPitchLimitMin", 0x1670, "FloatProperty"},
            {"CachedPitchLimitMax", 0x1674, "FloatProperty"},
            {"CachedYawLimitMin", 0x1678, "FloatProperty"},
            {"CachedYawLimitMax", 0x167C, "FloatProperty"},
            {"bLastViewTargetValidGroupEmoteLookTarget", 0x1680, "BoolProperty"},
            {"IgnoreActorForCameraPenetration", 0x1688, "ObjectProperty"},
            {"DebugActorsHitDuringCameraPenetration", 0x1690, "ArrayProperty"},
            {"bWasInVehicle", 0x16A0, "BoolProperty"},
            {"PreviousIgnoreActorForCameraPenetration", 0x16A8, "ObjectProperty"},
            {"PreviousVT", 0x16B0, "StructProperty"},
            {"bIsActive", 0x2060, "BoolProperty"},
            {"bLockCameraWhileInactive", 0x2061, "BoolProperty"},
        }};
    };

    struct LimeDBNOAnimInstance
    {
        static constexpr std::string_view Name = "LimeDBNOAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LimeBaseLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimBodyType = 0x350;
            static constexpr std::uintptr_t LeanAngle = 0x354;
            static constexpr std::uintptr_t SpeedAdjustedPlayRate = 0x358;
            static constexpr std::uintptr_t LeanAdditiveAlpha = 0x35C;
            static constexpr std::uintptr_t Speed2D = 0x360;
            static constexpr std::uintptr_t MovementBlendSpaceSpeed2D = 0x364;
            static constexpr std::uintptr_t MaxMovementBlendSpaceSpeed = 0x368;
            static constexpr std::uintptr_t LocalVelocityYawAngle = 0x36C;
            static constexpr std::uintptr_t DBNOTurnPlayRate = 0x370;
            static constexpr std::uintptr_t YawDeltaCurrentTick = 0x374;
            static constexpr std::uintptr_t YawDeltaLastTick = 0x378;
            static constexpr std::uintptr_t YawDeltaSmoothed = 0x37C;
            static constexpr std::uintptr_t bIsLargeBodyType = 0x380;
            static constexpr std::uintptr_t bIsOnGround = 0x380;
            static constexpr std::uintptr_t bTransition_FullBody_DBNOMove = 0x380;
            static constexpr std::uintptr_t bTransition_FullBody_DBNOTurn = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"AnimBodyType", 0x350, "EnumProperty"},
            {"LeanAngle", 0x354, "FloatProperty"},
            {"SpeedAdjustedPlayRate", 0x358, "FloatProperty"},
            {"LeanAdditiveAlpha", 0x35C, "FloatProperty"},
            {"Speed2D", 0x360, "FloatProperty"},
            {"MovementBlendSpaceSpeed2D", 0x364, "FloatProperty"},
            {"MaxMovementBlendSpaceSpeed", 0x368, "FloatProperty"},
            {"LocalVelocityYawAngle", 0x36C, "FloatProperty"},
            {"DBNOTurnPlayRate", 0x370, "FloatProperty"},
            {"YawDeltaCurrentTick", 0x374, "FloatProperty"},
            {"YawDeltaLastTick", 0x378, "FloatProperty"},
            {"YawDeltaSmoothed", 0x37C, "FloatProperty"},
            {"bIsLargeBodyType", 0x380, "BoolProperty"},
            {"bIsOnGround", 0x380, "BoolProperty"},
            {"bTransition_FullBody_DBNOMove", 0x380, "BoolProperty"},
            {"bTransition_FullBody_DBNOTurn", 0x380, "BoolProperty"},
        }};
    };

    struct LimeGameFeatureAction_AddLimeAnalytics
    {
        static constexpr std::string_view Name = "LimeGameFeatureAction_AddLimeAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t LimeAnalyticsClass = 0x28;
            static constexpr std::uintptr_t LimeAnalyticsInstance = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LimeAnalyticsClass", 0x28, "SoftClassProperty"},
            {"LimeAnalyticsInstance", 0x48, "ObjectProperty"},
        }};
    };

    struct LimeGlobals
    {
        static constexpr std::string_view Name = "LimeGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LimeOverrideManager
    {
        static constexpr std::string_view Name = "LimeOverrideManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LimePawnComponent
    {
        static constexpr std::string_view Name = "LimePawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
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

    struct LimePawnComponentMood
    {
        static constexpr std::string_view Name = "LimePawnComponentMood";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLimeMoodChangedDelegate = 0xC8;
            static constexpr std::uintptr_t CurrentMoodState = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnLimeMoodChangedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"CurrentMoodState", 0xF0, "StructProperty"},
        }};
    };

    struct LimePawnComponentOverrides
    {
        static constexpr std::string_view Name = "LimePawnComponentOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectOverrides = 0xC8;
            static constexpr std::uintptr_t ClamberingMME = 0xD8;
            static constexpr std::uintptr_t VehicleAnimLayerOverlayClass = 0xE0;
            static constexpr std::uintptr_t DBNOAnimLayerClass = 0xF0;
            static constexpr std::uintptr_t DBNOCarriedAnimLayerClass = 0xF8;
            static constexpr std::uintptr_t SkydiveAnimLayerClass = 0x100;
            static constexpr std::uintptr_t CurrentAnimLayerClass = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ObjectOverrides", 0xC8, "ArrayProperty"},
            {"ClamberingMME", 0xD8, "ClassProperty"},
            {"VehicleAnimLayerOverlayClass", 0xE0, "MapProperty"},
            {"DBNOAnimLayerClass", 0xF0, "ClassProperty"},
            {"DBNOCarriedAnimLayerClass", 0xF8, "ClassProperty"},
            {"SkydiveAnimLayerClass", 0x100, "ClassProperty"},
            {"CurrentAnimLayerClass", 0x108, "ClassProperty"},
        }};
    };

    struct LimePawnComponent_EmotionalState
    {
        static constexpr std::string_view Name = "LimePawnComponent_EmotionalState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLimeCurrentEmotionalStateChangedDelegate = 0xC8;
            static constexpr std::uintptr_t OnLimeCurrentEmotionalStateStartedChange = 0xD8;
            static constexpr std::uintptr_t OnLimeCurrentEmotionChangeFinished = 0xE8;
            static constexpr std::uintptr_t OnCheatEmotionIndexChanged = 0xF8;
            static constexpr std::uintptr_t CurrentEmotionalState = 0x108;
            static constexpr std::uintptr_t TargetEmotionalState = 0x10C;
            static constexpr std::uintptr_t CheatEmotionIndex = 0x11C;
            static constexpr std::uintptr_t LimePawnEmotionalStateMappingFromAwesomeLevel = 0x120;
            static constexpr std::uintptr_t ResetToDefaultEmotionRate = 0x138;
            static constexpr std::uintptr_t TimeToStayAtEmotionInSeconds = 0x13C;
            static constexpr std::uintptr_t DefaultEmotionHandle = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnLimeCurrentEmotionalStateChangedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnLimeCurrentEmotionalStateStartedChange", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnLimeCurrentEmotionChangeFinished", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnCheatEmotionIndexChanged", 0xF8, "MulticastInlineDelegateProperty"},
            {"CurrentEmotionalState", 0x108, "EnumProperty"},
            {"TargetEmotionalState", 0x10C, "StructProperty"},
            {"CheatEmotionIndex", 0x11C, "ByteProperty"},
            {"LimePawnEmotionalStateMappingFromAwesomeLevel", 0x120, "ArrayProperty"},
            {"ResetToDefaultEmotionRate", 0x138, "FloatProperty"},
            {"TimeToStayAtEmotionInSeconds", 0x13C, "FloatProperty"},
            {"DefaultEmotionHandle", 0x148, "StructProperty"},
        }};
    };

    struct LimePlayerAnimInstance
    {
        static constexpr std::string_view Name = "LimePlayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerLookAngleFromPawnMax = 0x4A8;
            static constexpr std::uintptr_t PlayerLookAngleFromRootMax = 0x4AC;
            static constexpr std::uintptr_t PlayerFaceVisibleAngle = 0x4B0;
            static constexpr std::uintptr_t PlayerRunningAccelerationThreshold = 0x4B4;
            static constexpr std::uintptr_t PlayerWalkingAccelerationThreshold = 0x4B8;
            static constexpr std::uintptr_t PlayerStrafeCurve = 0x4C0;
            static constexpr std::uintptr_t DBNOCarrierAttachSocket = 0x4C8;
            static constexpr std::uintptr_t Locomotion_Parameters = 0x4CC;
            static constexpr std::uintptr_t FortPlayerPawn = 0x4D8;
            static constexpr std::uintptr_t bIsAccelerating2D = 0x4E0;
            static constexpr std::uintptr_t bIsMovingAndInMotionEmote = 0x4E0;
            static constexpr std::uintptr_t bIsPlayingEmote = 0x4E0;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0x4E0;
            static constexpr std::uintptr_t StaticToTraversalBlendTime = 0x4E4;
            static constexpr std::uintptr_t TraversalToStaticBlendTime = 0x4E8;
            static constexpr std::uintptr_t bIsSlopeSliding = 0x4EC;
            static constexpr std::uintptr_t bIsInVehicle = 0x4ED;
            static constexpr std::uintptr_t LocalAcceleration = 0x4F0;
            static constexpr std::uintptr_t LocalAccelYawAngle = 0x508;
            static constexpr std::uintptr_t LocalVelocity = 0x510;
            static constexpr std::uintptr_t LocalVelocityRight = 0x528;
            static constexpr std::uintptr_t LocalVelocityYawAngle = 0x52C;
            static constexpr std::uintptr_t MaxSpeed = 0x530;
            static constexpr std::uintptr_t MaxSwimSpeed = 0x534;
            static constexpr std::uintptr_t VelocityZ = 0x538;
            static constexpr std::uintptr_t WorldAcceleration = 0x540;
            static constexpr std::uintptr_t WorldVelocity = 0x558;
            static constexpr std::uintptr_t ActorRotationLastTick = 0x570;
            static constexpr std::uintptr_t YawDeltaCurrentTick = 0x588;
            static constexpr std::uintptr_t YawDeltaLastTick = 0x58C;
            static constexpr std::uintptr_t YawDeltaSmoothed = 0x590;
            static constexpr std::uintptr_t bIsParachuteOpen = 0x594;
            static constexpr std::uintptr_t bIsSkydiving = 0x594;
            static constexpr std::uintptr_t bIsTacticalSprint = 0x594;
            static constexpr std::uintptr_t AimPitch = 0x598;
            static constexpr std::uintptr_t FreeFallAimPitch = 0x59C;
            static constexpr std::uintptr_t SkydiveAimPitch = 0x5A0;
            static constexpr std::uintptr_t SkydiveAimYaw = 0x5A4;
            static constexpr std::uintptr_t bGliderIsOpen = 0x5A8;
            static constexpr std::uintptr_t bGliderUseFastDeploy = 0x5A8;
            static constexpr std::uintptr_t bGliderWasOpen = 0x5A8;
            static constexpr std::uintptr_t bMinifigDisableHeadConstraints = 0x5A8;
            static constexpr std::uintptr_t bPlayerProp1Aim = 0x5A8;
            static constexpr std::uintptr_t bPlayerProp2Aim = 0x5A8;
            static constexpr std::uintptr_t bPlayerProp2ShieldActive = 0x5A8;
            static constexpr std::uintptr_t bPlayerRotationUnlocked = 0x5A8;
            static constexpr std::uintptr_t bPlayerIsCold = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsDBNOCarried = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsDBNOCarrying = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsHot = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsMildCold = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsMildHot = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsVeryCold = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsVeryHot = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsFastDiving = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsFishing = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsFlying = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsFocusing = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsHumanControlled = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsRiding = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsSneaking = 0x5AA;
            static constexpr std::uintptr_t bPlayerWasFishing = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsFacingController = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsMovingBackwards = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsProp1AimTargetValid = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsPushing = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsRunning = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsZiplining = 0x5AB;
            static constexpr std::uintptr_t bPlayerRotationLocked = 0x5AB;
            static constexpr std::uintptr_t bPlayerWasPushing = 0x5AB;
            static constexpr std::uintptr_t bPlayerFaceIsVisible = 0x5AC;
            static constexpr std::uintptr_t bPlayerIsSprinting = 0x5AC;
            static constexpr std::uintptr_t bPlayerIsWalking = 0x5AC;
            static constexpr std::uintptr_t bPlayerIsWaterJumping = 0x5AC;
            static constexpr std::uintptr_t bPlayerProp1MontageActive = 0x5AC;
            static constexpr std::uintptr_t bPlayerShouldMove = 0x5AC;
            static constexpr std::uintptr_t bPlayerShouldTurnInPlace = 0x5AC;
            static constexpr std::uintptr_t bPlayerUpperBodyIsSwinging = 0x5AC;
            static constexpr std::uintptr_t bPlayerHeadShouldFollowCamera = 0x5AD;
            static constexpr std::uintptr_t bPlayerProp2MontageActive = 0x5AD;
            static constexpr std::uintptr_t DBNOCarrierAttachLocation = 0x5B0;
            static constexpr std::uintptr_t DBNOCarrierAttachRotation = 0x5C8;
            static constexpr std::uintptr_t PlayerMovementStyle = 0x5E0;
            static constexpr std::uintptr_t PlayerAccelerationAmount = 0x5E4;
            static constexpr std::uintptr_t PlayerLookAtRotation = 0x5E8;
            static constexpr std::uintptr_t PlayerRotationTarget = 0x600;
            static constexpr std::uintptr_t PlayerPreviousRotationTarget = 0x618;
            static constexpr std::uintptr_t PlayerRotationTargetRate = 0x630;
            static constexpr std::uintptr_t PlayerVelocityYawRate = 0x634;
            static constexpr std::uintptr_t PlayerUseProceduralFaceAnim = 0x638;
            static constexpr std::uintptr_t LayeringMask = 0x63C;
            static constexpr std::uintptr_t bLayering_V3_Enable = 0x6DC;
            static constexpr std::uintptr_t ABPDeltaTime = 0x6E0;
            static constexpr std::uintptr_t bPlayerIsDoubleJumping = 0x6E4;
            static constexpr std::uintptr_t SecondaryMotionLODBlend = 0x6E8;
            static constexpr std::uintptr_t SecondaryMotionLODThreshold = 0x730;
            static constexpr std::uintptr_t SecondaryMotionLODBlendTime = 0x734;
            static constexpr std::uintptr_t MontageSlotGroupsToStop = 0x738;
            static constexpr std::uintptr_t GliderPitch = 0x748;
            static constexpr std::uintptr_t GliderRoll = 0x74C;
            static constexpr std::uintptr_t PlayerMainHandItem = 0x750;
            static constexpr std::uintptr_t PlayerOffHandItem = 0x758;
            static constexpr std::uintptr_t PlayerAimOffset = 0x760;
            static constexpr std::uintptr_t PlayerAimOffsetTemp = 0x770;
            static constexpr std::uintptr_t PlayerProp1AimOffset = 0x788;
            static constexpr std::uintptr_t PlayerProp1AimTargetLocation = 0x798;
            static constexpr std::uintptr_t PlayerSlopeMatchingRotationOffset = 0x7B0;
            static constexpr std::uintptr_t PlayerSlopeMatchingWeight = 0x7C8;
            static constexpr std::uintptr_t PlayerPreviousRootRotation = 0x7D0;
            static constexpr std::uintptr_t PlayerRotationMode = 0x7E8;
            static constexpr std::uintptr_t SmoothedRotationTarget = 0x7F0;
            static constexpr std::uintptr_t SuperSmoothedRotationTarget = 0x808;
            static constexpr std::uintptr_t PlayerStartingRotation = 0x820;
            static constexpr std::uintptr_t PlayerStartingAngle = 0x838;
            static constexpr std::uintptr_t bPlayerEmotionHasChanged = 0x83C;
            static constexpr std::uintptr_t JunoRandomizeMontageSectionInput = 0x840;
            static constexpr std::uintptr_t bForcePlayerToFacePawnRotation = 0x858;
            static constexpr std::uintptr_t MinifigAnimationComponent = 0x85C;
            static constexpr std::uintptr_t OffhandComponent = 0x864;
            static constexpr std::uintptr_t LookAtComponent = 0x86C;
            static constexpr std::uintptr_t MovementComponent = 0x874;
            static constexpr std::uintptr_t bFacingV2_EnableNewStrafing = 0x87C;
            static constexpr std::uintptr_t bFacingV2_ForceFacingToCamera = 0x87D;
            static constexpr std::uintptr_t FacingV2_StrafeHipsRotationOffset = 0x880;
            static constexpr std::uintptr_t FacingV2_StrafeHipsRotationOffsetDefault = 0x890;
            static constexpr std::uintptr_t FacingV2_StrafingHipsAngle_Native = 0x8A0;
            static constexpr std::uintptr_t bFacingV2_IsOn = 0x8A9;
            static constexpr std::uintptr_t bFacingV2_IsSteering = 0x8AA;
            static constexpr std::uintptr_t bFacingV2_WasSteering = 0x8AB;
            static constexpr std::uintptr_t bFacingV2_IsHolding = 0x8AC;
            static constexpr std::uintptr_t FacingV2_SteeringTarget = 0x8B0;
            static constexpr std::uintptr_t CameraLocation = 0x8D0;
            static constexpr std::uintptr_t CameraDirection = 0x8E8;
            static constexpr std::uintptr_t ABP_LOD_Level = 0x938;
            static constexpr std::uintptr_t ABP_LOD_Level_IsOneOrLess = 0x93C;
            static constexpr std::uintptr_t JackalVehicleInput = 0x940;
        };

        inline static constexpr std::array<PropertyInfo, 136> Properties{{
            {"PlayerLookAngleFromPawnMax", 0x4A8, "FloatProperty"},
            {"PlayerLookAngleFromRootMax", 0x4AC, "FloatProperty"},
            {"PlayerFaceVisibleAngle", 0x4B0, "FloatProperty"},
            {"PlayerRunningAccelerationThreshold", 0x4B4, "FloatProperty"},
            {"PlayerWalkingAccelerationThreshold", 0x4B8, "FloatProperty"},
            {"PlayerStrafeCurve", 0x4C0, "ObjectProperty"},
            {"DBNOCarrierAttachSocket", 0x4C8, "NameProperty"},
            {"Locomotion_Parameters", 0x4CC, "StructProperty"},
            {"FortPlayerPawn", 0x4D8, "ObjectProperty"},
            {"bIsAccelerating2D", 0x4E0, "BoolProperty"},
            {"bIsMovingAndInMotionEmote", 0x4E0, "BoolProperty"},
            {"bIsPlayingEmote", 0x4E0, "BoolProperty"},
            {"bIsSurfaceSwimming", 0x4E0, "BoolProperty"},
            {"StaticToTraversalBlendTime", 0x4E4, "FloatProperty"},
            {"TraversalToStaticBlendTime", 0x4E8, "FloatProperty"},
            {"bIsSlopeSliding", 0x4EC, "BoolProperty"},
            {"bIsInVehicle", 0x4ED, "BoolProperty"},
            {"LocalAcceleration", 0x4F0, "StructProperty"},
            {"LocalAccelYawAngle", 0x508, "FloatProperty"},
            {"LocalVelocity", 0x510, "StructProperty"},
            {"LocalVelocityRight", 0x528, "FloatProperty"},
            {"LocalVelocityYawAngle", 0x52C, "FloatProperty"},
            {"MaxSpeed", 0x530, "FloatProperty"},
            {"MaxSwimSpeed", 0x534, "FloatProperty"},
            {"VelocityZ", 0x538, "FloatProperty"},
            {"WorldAcceleration", 0x540, "StructProperty"},
            {"WorldVelocity", 0x558, "StructProperty"},
            {"ActorRotationLastTick", 0x570, "StructProperty"},
            {"YawDeltaCurrentTick", 0x588, "FloatProperty"},
            {"YawDeltaLastTick", 0x58C, "FloatProperty"},
            {"YawDeltaSmoothed", 0x590, "FloatProperty"},
            {"bIsParachuteOpen", 0x594, "BoolProperty"},
            {"bIsSkydiving", 0x594, "BoolProperty"},
            {"bIsTacticalSprint", 0x594, "BoolProperty"},
            {"AimPitch", 0x598, "FloatProperty"},
            {"FreeFallAimPitch", 0x59C, "FloatProperty"},
            {"SkydiveAimPitch", 0x5A0, "FloatProperty"},
            {"SkydiveAimYaw", 0x5A4, "FloatProperty"},
            {"bGliderIsOpen", 0x5A8, "BoolProperty"},
            {"bGliderUseFastDeploy", 0x5A8, "BoolProperty"},
            {"bGliderWasOpen", 0x5A8, "BoolProperty"},
            {"bMinifigDisableHeadConstraints", 0x5A8, "BoolProperty"},
            {"bPlayerProp1Aim", 0x5A8, "BoolProperty"},
            {"bPlayerProp2Aim", 0x5A8, "BoolProperty"},
            {"bPlayerProp2ShieldActive", 0x5A8, "BoolProperty"},
            {"bPlayerRotationUnlocked", 0x5A8, "BoolProperty"},
            {"bPlayerIsCold", 0x5A9, "BoolProperty"},
            {"bPlayerIsDBNOCarried", 0x5A9, "BoolProperty"},
            {"bPlayerIsDBNOCarrying", 0x5A9, "BoolProperty"},
            {"bPlayerIsHot", 0x5A9, "BoolProperty"},
            {"bPlayerIsMildCold", 0x5A9, "BoolProperty"},
            {"bPlayerIsMildHot", 0x5A9, "BoolProperty"},
            {"bPlayerIsVeryCold", 0x5A9, "BoolProperty"},
            {"bPlayerIsVeryHot", 0x5A9, "BoolProperty"},
            {"bPlayerIsFastDiving", 0x5AA, "BoolProperty"},
            {"bPlayerIsFishing", 0x5AA, "BoolProperty"},
            {"bPlayerIsFlying", 0x5AA, "BoolProperty"},
            {"bPlayerIsFocusing", 0x5AA, "BoolProperty"},
            {"bPlayerIsHumanControlled", 0x5AA, "BoolProperty"},
            {"bPlayerIsRiding", 0x5AA, "BoolProperty"},
            {"bPlayerIsSneaking", 0x5AA, "BoolProperty"},
            {"bPlayerWasFishing", 0x5AA, "BoolProperty"},
            {"bPlayerIsFacingController", 0x5AB, "BoolProperty"},
            {"bPlayerIsMovingBackwards", 0x5AB, "BoolProperty"},
            {"bPlayerIsProp1AimTargetValid", 0x5AB, "BoolProperty"},
            {"bPlayerIsPushing", 0x5AB, "BoolProperty"},
            {"bPlayerIsRunning", 0x5AB, "BoolProperty"},
            {"bPlayerIsZiplining", 0x5AB, "BoolProperty"},
            {"bPlayerRotationLocked", 0x5AB, "BoolProperty"},
            {"bPlayerWasPushing", 0x5AB, "BoolProperty"},
            {"bPlayerFaceIsVisible", 0x5AC, "BoolProperty"},
            {"bPlayerIsSprinting", 0x5AC, "BoolProperty"},
            {"bPlayerIsWalking", 0x5AC, "BoolProperty"},
            {"bPlayerIsWaterJumping", 0x5AC, "BoolProperty"},
            {"bPlayerProp1MontageActive", 0x5AC, "BoolProperty"},
            {"bPlayerShouldMove", 0x5AC, "BoolProperty"},
            {"bPlayerShouldTurnInPlace", 0x5AC, "BoolProperty"},
            {"bPlayerUpperBodyIsSwinging", 0x5AC, "BoolProperty"},
            {"bPlayerHeadShouldFollowCamera", 0x5AD, "BoolProperty"},
            {"bPlayerProp2MontageActive", 0x5AD, "BoolProperty"},
            {"DBNOCarrierAttachLocation", 0x5B0, "StructProperty"},
            {"DBNOCarrierAttachRotation", 0x5C8, "StructProperty"},
            {"PlayerMovementStyle", 0x5E0, "ByteProperty"},
            {"PlayerAccelerationAmount", 0x5E4, "FloatProperty"},
            {"PlayerLookAtRotation", 0x5E8, "StructProperty"},
            {"PlayerRotationTarget", 0x600, "StructProperty"},
            {"PlayerPreviousRotationTarget", 0x618, "StructProperty"},
            {"PlayerRotationTargetRate", 0x630, "FloatProperty"},
            {"PlayerVelocityYawRate", 0x634, "FloatProperty"},
            {"PlayerUseProceduralFaceAnim", 0x638, "FloatProperty"},
            {"LayeringMask", 0x63C, "StructProperty"},
            {"bLayering_V3_Enable", 0x6DC, "BoolProperty"},
            {"ABPDeltaTime", 0x6E0, "FloatProperty"},
            {"bPlayerIsDoubleJumping", 0x6E4, "BoolProperty"},
            {"SecondaryMotionLODBlend", 0x6E8, "StructProperty"},
            {"SecondaryMotionLODThreshold", 0x730, "IntProperty"},
            {"SecondaryMotionLODBlendTime", 0x734, "FloatProperty"},
            {"MontageSlotGroupsToStop", 0x738, "ArrayProperty"},
            {"GliderPitch", 0x748, "FloatProperty"},
            {"GliderRoll", 0x74C, "FloatProperty"},
            {"PlayerMainHandItem", 0x750, "ObjectProperty"},
            {"PlayerOffHandItem", 0x758, "ObjectProperty"},
            {"PlayerAimOffset", 0x760, "StructProperty"},
            {"PlayerAimOffsetTemp", 0x770, "StructProperty"},
            {"PlayerProp1AimOffset", 0x788, "StructProperty"},
            {"PlayerProp1AimTargetLocation", 0x798, "StructProperty"},
            {"PlayerSlopeMatchingRotationOffset", 0x7B0, "StructProperty"},
            {"PlayerSlopeMatchingWeight", 0x7C8, "FloatProperty"},
            {"PlayerPreviousRootRotation", 0x7D0, "StructProperty"},
            {"PlayerRotationMode", 0x7E8, "EnumProperty"},
            {"SmoothedRotationTarget", 0x7F0, "StructProperty"},
            {"SuperSmoothedRotationTarget", 0x808, "StructProperty"},
            {"PlayerStartingRotation", 0x820, "StructProperty"},
            {"PlayerStartingAngle", 0x838, "FloatProperty"},
            {"bPlayerEmotionHasChanged", 0x83C, "BoolProperty"},
            {"JunoRandomizeMontageSectionInput", 0x840, "StructProperty"},
            {"bForcePlayerToFacePawnRotation", 0x858, "BoolProperty"},
            {"MinifigAnimationComponent", 0x85C, "WeakObjectProperty"},
            {"OffhandComponent", 0x864, "WeakObjectProperty"},
            {"LookAtComponent", 0x86C, "WeakObjectProperty"},
            {"MovementComponent", 0x874, "WeakObjectProperty"},
            {"bFacingV2_EnableNewStrafing", 0x87C, "BoolProperty"},
            {"bFacingV2_ForceFacingToCamera", 0x87D, "BoolProperty"},
            {"FacingV2_StrafeHipsRotationOffset", 0x880, "ArrayProperty"},
            {"FacingV2_StrafeHipsRotationOffsetDefault", 0x890, "ArrayProperty"},
            {"FacingV2_StrafingHipsAngle_Native", 0x8A0, "FloatProperty"},
            {"bFacingV2_IsOn", 0x8A9, "BoolProperty"},
            {"bFacingV2_IsSteering", 0x8AA, "BoolProperty"},
            {"bFacingV2_WasSteering", 0x8AB, "BoolProperty"},
            {"bFacingV2_IsHolding", 0x8AC, "BoolProperty"},
            {"FacingV2_SteeringTarget", 0x8B0, "StructProperty"},
            {"CameraLocation", 0x8D0, "StructProperty"},
            {"CameraDirection", 0x8E8, "StructProperty"},
            {"ABP_LOD_Level", 0x938, "IntProperty"},
            {"ABP_LOD_Level_IsOneOrLess", 0x93C, "BoolProperty"},
            {"JackalVehicleInput", 0x940, "StructProperty"},
        }};
    };

    struct LimeSkydivingAnimInstance
    {
        static constexpr std::string_view Name = "LimeSkydivingAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LimeBaseLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Skydiving = 0x350;
            static constexpr std::uintptr_t FreeFall_AimPitch = 0x3E0;
            static constexpr std::uintptr_t AimPitch = 0x3E4;
            static constexpr std::uintptr_t bIsAccelerating2D = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Skydiving", 0x350, "StructProperty"},
            {"FreeFall_AimPitch", 0x3E0, "FloatProperty"},
            {"AimPitch", 0x3E4, "FloatProperty"},
            {"bIsAccelerating2D", 0x3E8, "BoolProperty"},
        }};
    };

}
