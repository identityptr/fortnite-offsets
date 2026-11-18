#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BeanstalkRuntime
{
    struct BeanAudioDataAsset
    {
        static constexpr std::string_view Name = "BeanAudioDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundListsByCategory = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundListsByCategory", 0x28, "MapProperty"},
        }};
    };

    struct BeanCameraModeOverrideComponent
    {
        static constexpr std::string_view Name = "BeanCameraModeOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModeOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BeanCurrentCameraMode = 0xC8;
            static constexpr std::uintptr_t CharacterConfig = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BeanCurrentCameraMode", 0xC8, "ClassProperty"},
            {"CharacterConfig", 0xD0, "WeakObjectProperty"},
        }};
    };

    struct BeanCameraMode_ThirdPerson
    {
        static constexpr std::string_view Name = "BeanCameraMode_ThirdPerson";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableDraggedBehaviour = 0x2080;
            static constexpr std::uintptr_t ControllerYawToleranceForDragEnable = 0x2088;
            static constexpr std::uintptr_t DisableDraggedCameraTags = 0x2090;
            static constexpr std::uintptr_t ResetCameraPitch = 0x20B0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnableDraggedBehaviour", 0x2080, "BoolProperty"},
            {"ControllerYawToleranceForDragEnable", 0x2088, "DoubleProperty"},
            {"DisableDraggedCameraTags", 0x2090, "StructProperty"},
            {"ResetCameraPitch", 0x20B0, "DoubleProperty"},
        }};
    };

    struct BeanCharAnimInstance
    {
        static constexpr std::string_view Name = "BeanCharAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSimulatedProxy = 0x460;
            static constexpr std::uintptr_t UpperStateID = 0x461;
            static constexpr std::uintptr_t LowerStateID = 0x462;
            static constexpr std::uintptr_t PrevLowerStateID = 0x463;
            static constexpr std::uintptr_t MovementMode = 0x464;
            static constexpr std::uintptr_t bIsMoving = 0x465;
            static constexpr std::uintptr_t bIsGrounded = 0x466;
            static constexpr std::uintptr_t TurningPercentage = 0x468;
            static constexpr std::uintptr_t SpeedPercentage = 0x46C;
            static constexpr std::uintptr_t CurrentVelocity = 0x470;
            static constexpr std::uintptr_t bIsAnticipatingJumpLanding = 0x488;
            static constexpr std::uintptr_t LastRagdollImpactForce = 0x490;
            static constexpr std::uintptr_t LastImpactForce = 0x4A8;
            static constexpr std::uintptr_t LastImpactRelativeDirection = 0x4C0;
            static constexpr std::uintptr_t TurnState = 0x4D8;
            static constexpr std::uintptr_t bIsGrabbing = 0x4D9;
            static constexpr std::uintptr_t bHasGrabTarget = 0x4DA;
            static constexpr std::uintptr_t GrabStumbleDuration = 0x4DC;
            static constexpr std::uintptr_t LeftHandIKPosition = 0x4E0;
            static constexpr std::uintptr_t RightHandIKPosition = 0x4F8;
            static constexpr std::uintptr_t LeftHandIKRotation = 0x510;
            static constexpr std::uintptr_t RightHandIKRotation = 0x528;
            static constexpr std::uintptr_t IkAlpha = 0x540;
            static constexpr std::uintptr_t bUseImpactAnims = 0x544;
            static constexpr std::uintptr_t bImpactTriggered = 0x545;
            static constexpr std::uintptr_t ImpactAnimType = 0x546;
            static constexpr std::uintptr_t LowImpactUpperThresholdReciprocal = 0x548;
            static constexpr std::uintptr_t MediumImpactUpperThresholdReciprocal = 0x54C;
            static constexpr std::uintptr_t HighImpactUpperThresholdReciprocal = 0x550;
            static constexpr std::uintptr_t JiggleRotator0 = 0x558;
            static constexpr std::uintptr_t JiggleRotator1 = 0x570;
            static constexpr std::uintptr_t JiggleRotator2 = 0x588;
            static constexpr std::uintptr_t bLowerStateUsesLocomotionAnim = 0x5A0;
            static constexpr std::uintptr_t WeaponCoreAnim = 0x5A1;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x5A4;
        };

        inline static constexpr std::array<PropertyInfo, 35> Properties{{
            {"bIsSimulatedProxy", 0x460, "BoolProperty"},
            {"UpperStateID", 0x461, "EnumProperty"},
            {"LowerStateID", 0x462, "EnumProperty"},
            {"PrevLowerStateID", 0x463, "EnumProperty"},
            {"MovementMode", 0x464, "ByteProperty"},
            {"bIsMoving", 0x465, "BoolProperty"},
            {"bIsGrounded", 0x466, "BoolProperty"},
            {"TurningPercentage", 0x468, "FloatProperty"},
            {"SpeedPercentage", 0x46C, "FloatProperty"},
            {"CurrentVelocity", 0x470, "StructProperty"},
            {"bIsAnticipatingJumpLanding", 0x488, "BoolProperty"},
            {"LastRagdollImpactForce", 0x490, "StructProperty"},
            {"LastImpactForce", 0x4A8, "StructProperty"},
            {"LastImpactRelativeDirection", 0x4C0, "StructProperty"},
            {"TurnState", 0x4D8, "EnumProperty"},
            {"bIsGrabbing", 0x4D9, "BoolProperty"},
            {"bHasGrabTarget", 0x4DA, "BoolProperty"},
            {"GrabStumbleDuration", 0x4DC, "FloatProperty"},
            {"LeftHandIKPosition", 0x4E0, "StructProperty"},
            {"RightHandIKPosition", 0x4F8, "StructProperty"},
            {"LeftHandIKRotation", 0x510, "StructProperty"},
            {"RightHandIKRotation", 0x528, "StructProperty"},
            {"IkAlpha", 0x540, "FloatProperty"},
            {"bUseImpactAnims", 0x544, "BoolProperty"},
            {"bImpactTriggered", 0x545, "BoolProperty"},
            {"ImpactAnimType", 0x546, "EnumProperty"},
            {"LowImpactUpperThresholdReciprocal", 0x548, "FloatProperty"},
            {"MediumImpactUpperThresholdReciprocal", 0x54C, "FloatProperty"},
            {"HighImpactUpperThresholdReciprocal", 0x550, "FloatProperty"},
            {"JiggleRotator0", 0x558, "StructProperty"},
            {"JiggleRotator1", 0x570, "StructProperty"},
            {"JiggleRotator2", 0x588, "StructProperty"},
            {"bLowerStateUsesLocomotionAnim", 0x5A0, "BoolProperty"},
            {"WeaponCoreAnim", 0x5A1, "ByteProperty"},
            {"BeanCharacterConfig", 0x5A4, "WeakObjectProperty"},
        }};
    };

    struct BeanCharBeingGrabbedComponent
    {
        static constexpr std::string_view Name = "BeanCharBeingGrabbedComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
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

    struct BeanCharCollisionManagerComponent
    {
        static constexpr std::string_view Name = "BeanCharCollisionManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxConfigImpactThreshold = 0x118;
            static constexpr std::uintptr_t NextImpactCueExecution = 0x120;
            static constexpr std::uintptr_t RagdollThresholdMultiplier = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxConfigImpactThreshold", 0x118, "DoubleProperty"},
            {"NextImpactCueExecution", 0x120, "DoubleProperty"},
            {"RagdollThresholdMultiplier", 0x128, "FloatProperty"},
        }};
    };

    struct BeanCharConfigObject
    {
        static constexpr std::string_view Name = "BeanCharConfigObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Interaction = 0x28;
            static constexpr std::uintptr_t InventoryMode = 0x118;
            static constexpr std::uintptr_t Movement = 0x198;
            static constexpr std::uintptr_t Jump = 0x310;
            static constexpr std::uintptr_t Dive = 0x358;
            static constexpr std::uintptr_t Impact = 0x3B0;
            static constexpr std::uintptr_t Stagger = 0x4C0;
            static constexpr std::uintptr_t Ragdoll = 0x4D0;
            static constexpr std::uintptr_t Roll = 0x628;
            static constexpr std::uintptr_t Grab = 0x650;
            static constexpr std::uintptr_t Getup = 0x720;
            static constexpr std::uintptr_t GetupRoll = 0x748;
            static constexpr std::uintptr_t Mantle = 0x758;
            static constexpr std::uintptr_t Jostle = 0x818;
            static constexpr std::uintptr_t Camera = 0x848;
            static constexpr std::uintptr_t Cosmetics = 0x860;
            static constexpr std::uintptr_t Swimming = 0x870;
            static constexpr std::uintptr_t Zipline = 0x890;
            static constexpr std::uintptr_t Jiggle = 0x898;
            static constexpr std::uintptr_t HUD = 0x928;
            static constexpr std::uintptr_t TouchControls = 0x948;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"Interaction", 0x28, "StructProperty"},
            {"InventoryMode", 0x118, "StructProperty"},
            {"Movement", 0x198, "StructProperty"},
            {"Jump", 0x310, "StructProperty"},
            {"Dive", 0x358, "StructProperty"},
            {"Impact", 0x3B0, "StructProperty"},
            {"Stagger", 0x4C0, "StructProperty"},
            {"Ragdoll", 0x4D0, "StructProperty"},
            {"Roll", 0x628, "StructProperty"},
            {"Grab", 0x650, "StructProperty"},
            {"Getup", 0x720, "StructProperty"},
            {"GetupRoll", 0x748, "StructProperty"},
            {"Mantle", 0x758, "StructProperty"},
            {"Jostle", 0x818, "StructProperty"},
            {"Camera", 0x848, "StructProperty"},
            {"Cosmetics", 0x860, "StructProperty"},
            {"Swimming", 0x870, "StructProperty"},
            {"Zipline", 0x890, "StructProperty"},
            {"Jiggle", 0x898, "StructProperty"},
            {"HUD", 0x928, "StructProperty"},
            {"TouchControls", 0x948, "StructProperty"},
        }};
    };

    struct BeanCharGrabComponent
    {
        static constexpr std::string_view Name = "BeanCharGrabComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ArmsOutMontage = 0xC0;
            static constexpr std::uintptr_t LeftHandIKPosition = 0xC8;
            static constexpr std::uintptr_t RightHandIKPosition = 0xE0;
            static constexpr std::uintptr_t LeftHandIKRotation = 0xF8;
            static constexpr std::uintptr_t RightHandIKRotation = 0x110;
            static constexpr std::uintptr_t IkAlpha = 0x128;
            static constexpr std::uintptr_t bHasIKTarget = 0x12C;
            static constexpr std::uintptr_t bIsGrabStumbling = 0x12D;
            static constexpr std::uintptr_t GrabTarget = 0x150;
            static constexpr std::uintptr_t ServerLatestHoldStartTime = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ArmsOutMontage", 0xC0, "ObjectProperty"},
            {"LeftHandIKPosition", 0xC8, "StructProperty"},
            {"RightHandIKPosition", 0xE0, "StructProperty"},
            {"LeftHandIKRotation", 0xF8, "StructProperty"},
            {"RightHandIKRotation", 0x110, "StructProperty"},
            {"IkAlpha", 0x128, "FloatProperty"},
            {"bHasIKTarget", 0x12C, "BoolProperty"},
            {"bIsGrabStumbling", 0x12D, "BoolProperty"},
            {"GrabTarget", 0x150, "WeakObjectProperty"},
            {"ServerLatestHoldStartTime", 0x168, "FloatProperty"},
        }};
    };

    struct BeanCharMantleComponent
    {
        static constexpr std::string_view Name = "BeanCharMantleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ClamberingEnabled = 0xC0;
            static constexpr std::uintptr_t BeanCharacter = 0xE8;
            static constexpr std::uintptr_t CachedClamberingEnabledValue = 0xF0;
            static constexpr std::uintptr_t LastClamberingEnabledCacheTime = 0xF8;
            static constexpr std::uintptr_t ClamberingEnableCacheInterval = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ClamberingEnabled", 0xC0, "StructProperty"},
            {"BeanCharacter", 0xE8, "WeakObjectProperty"},
            {"CachedClamberingEnabledValue", 0xF0, "FloatProperty"},
            {"LastClamberingEnabledCacheTime", 0xF8, "DoubleProperty"},
            {"ClamberingEnableCacheInterval", 0x100, "DoubleProperty"},
        }};
    };

    struct BeanCharMovementComponent
    {
        static constexpr std::string_view Name = "BeanCharMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementComp_CharacterAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementBaseVelocitySamplingPeriod = 0x6C04;
            static constexpr std::uintptr_t CurrentSampledMovementBaseData = 0x6C08;
            static constexpr std::uintptr_t bAllowFloorHeightAdjustments = 0x6D21;
            static constexpr std::uintptr_t TurnState = 0x6D22;
            static constexpr std::uintptr_t CharConfig = 0x6D30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MovementBaseVelocitySamplingPeriod", 0x6C04, "FloatProperty"},
            {"CurrentSampledMovementBaseData", 0x6C08, "StructProperty"},
            {"bAllowFloorHeightAdjustments", 0x6D21, "BoolProperty"},
            {"TurnState", 0x6D22, "EnumProperty"},
            {"CharConfig", 0x6D30, "WeakObjectProperty"},
        }};
    };

    struct BeanCharRagdollComponent
    {
        static constexpr std::string_view Name = "BeanCharRagdollComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsConstraintComponentReference = 0xC0;
            static constexpr std::uintptr_t RootPrimitiveReference = 0xE8;
            static constexpr std::uintptr_t SkeletalMeshReference = 0x110;
            static constexpr std::uintptr_t bEnableInputControlCurve = 0x138;
            static constexpr std::uintptr_t RagdollInputControlWithTimeCurve = 0x140;
            static constexpr std::uintptr_t bIsConfiguredCorrectly = 0x189;
            static constexpr std::uintptr_t bHasRequestedRagdollExit = 0x18A;
            static constexpr std::uintptr_t StartingMeshTransform = 0x190;
            static constexpr std::uintptr_t OriginalActorRootCollisionResponse = 0x1F0;
            static constexpr std::uintptr_t RagdollControlInputVector = 0x278;
            static constexpr std::uintptr_t bIsRagdollGrounded = 0x290;
            static constexpr std::uintptr_t TimeOnGround = 0x294;
            static constexpr std::uintptr_t LatestRagdollFloorOffset = 0x2A8;
            static constexpr std::uintptr_t LatestRagdollFloorNormal = 0x2C0;
            static constexpr std::uintptr_t CurrentImpactData = 0x2D8;
            static constexpr std::uintptr_t CurrentGravityZOverride = 0x318;
            static constexpr std::uintptr_t CurrentAdditionalGravity = 0x320;
            static constexpr std::uintptr_t CachedMeshBodyIndexesForCCD = 0x348;
            static constexpr std::uintptr_t LowerLinearDistanceTarget = 0x358;
            static constexpr std::uintptr_t UpperLinearDistanceTarget = 0x360;
            static constexpr std::uintptr_t DefaultHardSnapLinearDistance = 0x368;
            static constexpr std::uintptr_t MaxHardsnapLinearDistance = 0x370;
            static constexpr std::uintptr_t bHasAddedIgnoredObjects = 0x378;
            static constexpr std::uintptr_t RagdollComponentHistory = 0x428;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"PhysicsConstraintComponentReference", 0xC0, "StructProperty"},
            {"RootPrimitiveReference", 0xE8, "StructProperty"},
            {"SkeletalMeshReference", 0x110, "StructProperty"},
            {"bEnableInputControlCurve", 0x138, "BoolProperty"},
            {"RagdollInputControlWithTimeCurve", 0x140, "StructProperty"},
            {"bIsConfiguredCorrectly", 0x189, "BoolProperty"},
            {"bHasRequestedRagdollExit", 0x18A, "BoolProperty"},
            {"StartingMeshTransform", 0x190, "StructProperty"},
            {"OriginalActorRootCollisionResponse", 0x1F0, "StructProperty"},
            {"RagdollControlInputVector", 0x278, "StructProperty"},
            {"bIsRagdollGrounded", 0x290, "BoolProperty"},
            {"TimeOnGround", 0x294, "FloatProperty"},
            {"LatestRagdollFloorOffset", 0x2A8, "StructProperty"},
            {"LatestRagdollFloorNormal", 0x2C0, "StructProperty"},
            {"CurrentImpactData", 0x2D8, "StructProperty"},
            {"CurrentGravityZOverride", 0x318, "FloatProperty"},
            {"CurrentAdditionalGravity", 0x320, "StructProperty"},
            {"CachedMeshBodyIndexesForCCD", 0x348, "ArrayProperty"},
            {"LowerLinearDistanceTarget", 0x358, "DoubleProperty"},
            {"UpperLinearDistanceTarget", 0x360, "DoubleProperty"},
            {"DefaultHardSnapLinearDistance", 0x368, "FloatProperty"},
            {"MaxHardsnapLinearDistance", 0x370, "DoubleProperty"},
            {"bHasAddedIgnoredObjects", 0x378, "BoolProperty"},
            {"RagdollComponentHistory", 0x428, "StructProperty"},
        }};
    };

    struct BeanCharStateBase
    {
        static constexpr std::string_view Name = "BeanCharStateBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharStateMachine
    {
        static constexpr std::string_view Name = "BeanCharStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsInitialized = 0xC0;
            static constexpr std::uintptr_t Layers = 0xC8;
            static constexpr std::uintptr_t TempTickStateList = 0x170;
            static constexpr std::uintptr_t States = 0x180;
            static constexpr std::uintptr_t bFlushMoveToServerAtEndOfFrame = 0x1A0;
            static constexpr std::uintptr_t bFlushPendingStateChangesAtEndOfFrame = 0x1A1;
            static constexpr std::uintptr_t bIsReplaying = 0x1A2;
            static constexpr std::uintptr_t ServerForceSetUpperState = 0x1A3;
            static constexpr std::uintptr_t ServerForceSetLowerState = 0x1A4;
            static constexpr std::uintptr_t SimulatedProxyStateData = 0x1A6;
            static constexpr std::uintptr_t AutonomousProxyServerStateData = 0x1A8;
            static constexpr std::uintptr_t StateSyncID = 0x1AC;
            static constexpr std::uintptr_t ServerStateSyncID = 0x1AD;
            static constexpr std::uintptr_t AutonomousProxyStateHistory = 0x1B0;
            static constexpr std::uintptr_t AutonomousProxyServerStateCheckTimer = 0x1C0;
            static constexpr std::uintptr_t RequestClientStateChangeTimeout = 0x1C4;
            static constexpr std::uintptr_t RequestClientStateChangePendingStateID = 0x1C8;
            static constexpr std::uintptr_t StateTagsDefinitions = 0x1D0;
            static constexpr std::uintptr_t AnimLayer_Swimming = 0x1E0;
            static constexpr std::uintptr_t AnimLayer_Ragdoll = 0x1E8;
            static constexpr std::uintptr_t AnimLayer_Zipline = 0x1F0;
            static constexpr std::uintptr_t AnimLayer_Flying = 0x1F8;
            static constexpr std::uintptr_t AnimLayer_Grab = 0x200;
            static constexpr std::uintptr_t AnimLayer_EditMode = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"bIsInitialized", 0xC0, "BoolProperty"},
            {"Layers", 0xC8, "StructProperty"},
            {"TempTickStateList", 0x170, "ArrayProperty"},
            {"States", 0x180, "ArrayProperty"},
            {"bFlushMoveToServerAtEndOfFrame", 0x1A0, "BoolProperty"},
            {"bFlushPendingStateChangesAtEndOfFrame", 0x1A1, "BoolProperty"},
            {"bIsReplaying", 0x1A2, "BoolProperty"},
            {"ServerForceSetUpperState", 0x1A3, "EnumProperty"},
            {"ServerForceSetLowerState", 0x1A4, "EnumProperty"},
            {"SimulatedProxyStateData", 0x1A6, "UInt16Property"},
            {"AutonomousProxyServerStateData", 0x1A8, "UInt32Property"},
            {"StateSyncID", 0x1AC, "ByteProperty"},
            {"ServerStateSyncID", 0x1AD, "ByteProperty"},
            {"AutonomousProxyStateHistory", 0x1B0, "ArrayProperty"},
            {"AutonomousProxyServerStateCheckTimer", 0x1C0, "FloatProperty"},
            {"RequestClientStateChangeTimeout", 0x1C4, "FloatProperty"},
            {"RequestClientStateChangePendingStateID", 0x1C8, "EnumProperty"},
            {"StateTagsDefinitions", 0x1D0, "ArrayProperty"},
            {"AnimLayer_Swimming", 0x1E0, "ClassProperty"},
            {"AnimLayer_Ragdoll", 0x1E8, "ClassProperty"},
            {"AnimLayer_Zipline", 0x1F0, "ClassProperty"},
            {"AnimLayer_Flying", 0x1F8, "ClassProperty"},
            {"AnimLayer_Grab", 0x200, "ClassProperty"},
            {"AnimLayer_EditMode", 0x208, "ClassProperty"},
        }};
    };

    struct BeanCharState_Dive
    {
        static constexpr std::string_view Name = "BeanCharState_Dive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Emote
    {
        static constexpr std::string_view Name = "BeanCharState_Emote";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Falling
    {
        static constexpr std::string_view Name = "BeanCharState_Falling";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Flying
    {
        static constexpr std::string_view Name = "BeanCharState_Flying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Getup
    {
        static constexpr std::string_view Name = "BeanCharState_Getup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveAnim = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveAnim", 0x1E8, "ObjectProperty"},
        }};
    };

    struct BeanCharState_GetupRoll
    {
        static constexpr std::string_view Name = "BeanCharState_GetupRoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Grab
    {
        static constexpr std::string_view Name = "BeanCharState_Grab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_GrabStumble
    {
        static constexpr std::string_view Name = "BeanCharState_GrabStumble";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Grounded
    {
        static constexpr std::string_view Name = "BeanCharState_Grounded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Jostle
    {
        static constexpr std::string_view Name = "BeanCharState_Jostle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SeparationForce = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SeparationForce", 0x198, "StructProperty"},
        }};
    };

    struct BeanCharState_Jump
    {
        static constexpr std::string_view Name = "BeanCharState_Jump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Mantle
    {
        static constexpr std::string_view Name = "BeanCharState_Mantle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Ragdoll
    {
        static constexpr std::string_view Name = "BeanCharState_Ragdoll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Roll
    {
        static constexpr std::string_view Name = "BeanCharState_Roll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Staggered
    {
        static constexpr std::string_view Name = "BeanCharState_Staggered";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentMontage = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentMontage", 0x1A0, "ObjectProperty"},
        }};
    };

    struct BeanCharState_SurfaceSwimming
    {
        static constexpr std::string_view Name = "BeanCharState_SurfaceSwimming";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_WaterJump
    {
        static constexpr std::string_view Name = "BeanCharState_WaterJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharState_Jump";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanCharState_Zipline
    {
        static constexpr std::string_view Name = "BeanCharState_Zipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharStateBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t LayerMask = 0x29;
            static constexpr std::uintptr_t MovementMode = 0x2A;
            static constexpr std::uintptr_t FortCustomMovementMode = 0x2B;
            static constexpr std::uintptr_t GameplayTag = 0x2C;
            static constexpr std::uintptr_t GameplayCue = 0x30;
            static constexpr std::uintptr_t GameplayCueParameters = 0x38;
            static constexpr std::uintptr_t bShouldSetMovementMode = 0x108;
            static constexpr std::uintptr_t bReplicateToSimulatedProxies = 0x109;
            static constexpr std::uintptr_t bExecuteCodeOnSimulatedProxies = 0x10A;
            static constexpr std::uintptr_t bTryActivateFailsIfAlreadyActive = 0x10B;
            static constexpr std::uintptr_t bServerMustFlushStateManually = 0x10C;
            static constexpr std::uintptr_t bFlushPendingStateChangesOnStateExit = 0x10D;
            static constexpr std::uintptr_t Priority = 0x110;
            static constexpr std::uintptr_t bShouldRemainVertical = 0x114;
            static constexpr std::uintptr_t bCanPerformMantle = 0x115;
            static constexpr std::uintptr_t DecelerationOverride = 0x118;
            static constexpr std::uintptr_t bPauseJiggleCalculations = 0x11C;
            static constexpr std::uintptr_t OwnerStateMachine = 0x120;
            static constexpr std::uintptr_t RootMotionSourceIDs = 0x128;
            static constexpr std::uintptr_t GrantedTags = 0x138;
            static constexpr std::uintptr_t BlockedTags = 0x158;
            static constexpr std::uintptr_t BlockedAbilityTags = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"StateId", 0x28, "EnumProperty"},
            {"LayerMask", 0x29, "EnumProperty"},
            {"MovementMode", 0x2A, "ByteProperty"},
            {"FortCustomMovementMode", 0x2B, "ByteProperty"},
            {"GameplayTag", 0x2C, "StructProperty"},
            {"GameplayCue", 0x30, "StructProperty"},
            {"GameplayCueParameters", 0x38, "StructProperty"},
            {"bShouldSetMovementMode", 0x108, "BoolProperty"},
            {"bReplicateToSimulatedProxies", 0x109, "BoolProperty"},
            {"bExecuteCodeOnSimulatedProxies", 0x10A, "BoolProperty"},
            {"bTryActivateFailsIfAlreadyActive", 0x10B, "BoolProperty"},
            {"bServerMustFlushStateManually", 0x10C, "BoolProperty"},
            {"bFlushPendingStateChangesOnStateExit", 0x10D, "BoolProperty"},
            {"Priority", 0x110, "FloatProperty"},
            {"bShouldRemainVertical", 0x114, "BoolProperty"},
            {"bCanPerformMantle", 0x115, "BoolProperty"},
            {"DecelerationOverride", 0x118, "FloatProperty"},
            {"bPauseJiggleCalculations", 0x11C, "BoolProperty"},
            {"OwnerStateMachine", 0x120, "ObjectProperty"},
            {"RootMotionSourceIDs", 0x128, "ArrayProperty"},
            {"GrantedTags", 0x138, "StructProperty"},
            {"BlockedTags", 0x158, "StructProperty"},
            {"BlockedAbilityTags", 0x178, "StructProperty"},
        }};
    };

    struct BeanChar_EditMode_AnimLayer
    {
        static constexpr std::string_view Name = "BeanChar_EditMode_AnimLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponCoreAnim = 0x260;
            static constexpr std::uintptr_t bIsMoving = 0x261;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x264;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WeaponCoreAnim", 0x260, "ByteProperty"},
            {"bIsMoving", 0x261, "BoolProperty"},
            {"BeanCharacterConfig", 0x264, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_Flying_AnimLayer
    {
        static constexpr std::string_view Name = "BeanChar_Flying_AnimLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BeanCharacterConfig = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BeanCharacterConfig", 0x260, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_Grab_AnimLayer
    {
        static constexpr std::string_view Name = "BeanChar_Grab_AnimLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasGrabTarget = 0x260;
            static constexpr std::uintptr_t GrabStumbleDuration = 0x264;
            static constexpr std::uintptr_t LeftHandIKPosition = 0x268;
            static constexpr std::uintptr_t RightHandIKPosition = 0x280;
            static constexpr std::uintptr_t LeftHandIKRotation = 0x298;
            static constexpr std::uintptr_t RightHandIKRotation = 0x2B0;
            static constexpr std::uintptr_t IkAlpha = 0x2C8;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x2CC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bHasGrabTarget", 0x260, "BoolProperty"},
            {"GrabStumbleDuration", 0x264, "FloatProperty"},
            {"LeftHandIKPosition", 0x268, "StructProperty"},
            {"RightHandIKPosition", 0x280, "StructProperty"},
            {"LeftHandIKRotation", 0x298, "StructProperty"},
            {"RightHandIKRotation", 0x2B0, "StructProperty"},
            {"IkAlpha", 0x2C8, "FloatProperty"},
            {"BeanCharacterConfig", 0x2CC, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_GroundLoc_AnimInstance
    {
        static constexpr std::string_view Name = "BeanChar_GroundLoc_AnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t TurningPercentage = 0x260;
            static constexpr std::uintptr_t SpeedPercentage = 0x264;
            static constexpr std::uintptr_t TurnState = 0x268;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x26C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TurningPercentage", 0x260, "FloatProperty"},
            {"SpeedPercentage", 0x264, "FloatProperty"},
            {"TurnState", 0x268, "EnumProperty"},
            {"BeanCharacterConfig", 0x26C, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_Idle_AnimInstance
    {
        static constexpr std::string_view Name = "BeanChar_Idle_AnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentIdleBreakAnimation = 0x260;
            static constexpr std::uintptr_t bIsPlayingIdleBreak = 0x268;
            static constexpr std::uintptr_t CurrentIdleBreakTime = 0x26C;
            static constexpr std::uintptr_t IdleBreaks = 0x278;
            static constexpr std::uintptr_t IdleBreakMinTime = 0x288;
            static constexpr std::uintptr_t IdleBreakMaxTime = 0x28C;
            static constexpr std::uintptr_t StopIdleBreakTrimTime = 0x290;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x294;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CurrentIdleBreakAnimation", 0x260, "ObjectProperty"},
            {"bIsPlayingIdleBreak", 0x268, "BoolProperty"},
            {"CurrentIdleBreakTime", 0x26C, "FloatProperty"},
            {"IdleBreaks", 0x278, "ArrayProperty"},
            {"IdleBreakMinTime", 0x288, "FloatProperty"},
            {"IdleBreakMaxTime", 0x28C, "FloatProperty"},
            {"StopIdleBreakTrimTime", 0x290, "FloatProperty"},
            {"BeanCharacterConfig", 0x294, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_InAirLoc_AnimInstance
    {
        static constexpr std::string_view Name = "BeanChar_InAirLoc_AnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsJumping = 0x260;
            static constexpr std::uintptr_t bIsFalling = 0x261;
            static constexpr std::uintptr_t bIsAnticipatingJumpLanding = 0x262;
            static constexpr std::uintptr_t bIsDiving = 0x263;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x264;
            static constexpr std::uintptr_t bWasJumping = 0x26C;
            static constexpr std::uintptr_t JumpStartZ = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsJumping", 0x260, "BoolProperty"},
            {"bIsFalling", 0x261, "BoolProperty"},
            {"bIsAnticipatingJumpLanding", 0x262, "BoolProperty"},
            {"bIsDiving", 0x263, "BoolProperty"},
            {"BeanCharacterConfig", 0x264, "WeakObjectProperty"},
            {"bWasJumping", 0x26C, "BoolProperty"},
            {"JumpStartZ", 0x270, "FloatProperty"},
        }};
    };

    struct BeanChar_Jiggle_AnimInstance
    {
        static constexpr std::string_view Name = "BeanChar_Jiggle_AnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LastImpactForce = 0x260;
            static constexpr std::uintptr_t LastImpactRelativeDirection = 0x278;
            static constexpr std::uintptr_t bJustLandedFromJump = 0x290;
            static constexpr std::uintptr_t bIsMoving = 0x291;
            static constexpr std::uintptr_t bUseImpactAnims = 0x292;
            static constexpr std::uintptr_t bImpactTriggered = 0x293;
            static constexpr std::uintptr_t ImpactAnimType = 0x294;
            static constexpr std::uintptr_t LowImpactUpperThresholdReciprocal = 0x298;
            static constexpr std::uintptr_t MediumImpactUpperThresholdReciprocal = 0x29C;
            static constexpr std::uintptr_t HighImpactUpperThresholdReciprocal = 0x2A0;
            static constexpr std::uintptr_t JiggleRotator0 = 0x2A8;
            static constexpr std::uintptr_t JiggleRotator1 = 0x2C0;
            static constexpr std::uintptr_t JiggleRotator2 = 0x2D8;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"LastImpactForce", 0x260, "StructProperty"},
            {"LastImpactRelativeDirection", 0x278, "StructProperty"},
            {"bJustLandedFromJump", 0x290, "BoolProperty"},
            {"bIsMoving", 0x291, "BoolProperty"},
            {"bUseImpactAnims", 0x292, "BoolProperty"},
            {"bImpactTriggered", 0x293, "BoolProperty"},
            {"ImpactAnimType", 0x294, "EnumProperty"},
            {"LowImpactUpperThresholdReciprocal", 0x298, "FloatProperty"},
            {"MediumImpactUpperThresholdReciprocal", 0x29C, "FloatProperty"},
            {"HighImpactUpperThresholdReciprocal", 0x2A0, "FloatProperty"},
            {"JiggleRotator0", 0x2A8, "StructProperty"},
            {"JiggleRotator1", 0x2C0, "StructProperty"},
            {"JiggleRotator2", 0x2D8, "StructProperty"},
            {"BeanCharacterConfig", 0x2F0, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_Main_AnimInstance
    {
        static constexpr std::string_view Name = "BeanChar_Main_AnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSimulatedProxy = 0x460;
            static constexpr std::uintptr_t MovementMode = 0x461;
            static constexpr std::uintptr_t bIsMoving = 0x462;
            static constexpr std::uintptr_t bIsGrounded = 0x463;
            static constexpr std::uintptr_t CurrentVelocity = 0x468;
            static constexpr std::uintptr_t JiggleRotator0 = 0x480;
            static constexpr std::uintptr_t JiggleRotator1 = 0x498;
            static constexpr std::uintptr_t JiggleRotator2 = 0x4B0;
            static constexpr std::uintptr_t bLowerStateUsesLocomotionAnim = 0x4C8;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x4CC;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bIsSimulatedProxy", 0x460, "BoolProperty"},
            {"MovementMode", 0x461, "ByteProperty"},
            {"bIsMoving", 0x462, "BoolProperty"},
            {"bIsGrounded", 0x463, "BoolProperty"},
            {"CurrentVelocity", 0x468, "StructProperty"},
            {"JiggleRotator0", 0x480, "StructProperty"},
            {"JiggleRotator1", 0x498, "StructProperty"},
            {"JiggleRotator2", 0x4B0, "StructProperty"},
            {"bLowerStateUsesLocomotionAnim", 0x4C8, "BoolProperty"},
            {"BeanCharacterConfig", 0x4CC, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_Ragdoll_AnimLayer
    {
        static constexpr std::string_view Name = "BeanChar_Ragdoll_AnimLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t HighImpactUpperThresholdReciprocal = 0x260;
            static constexpr std::uintptr_t LastRagdollImpactForce = 0x268;
            static constexpr std::uintptr_t LastImpactRelativeDirection = 0x280;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HighImpactUpperThresholdReciprocal", 0x260, "FloatProperty"},
            {"LastRagdollImpactForce", 0x268, "StructProperty"},
            {"LastImpactRelativeDirection", 0x280, "StructProperty"},
            {"BeanCharacterConfig", 0x298, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_Swimming_AnimLayer
    {
        static constexpr std::string_view Name = "BeanChar_Swimming_AnimLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeedPercentage = 0x260;
            static constexpr std::uintptr_t bIsJumping = 0x264;
            static constexpr std::uintptr_t BeanCharacterConfig = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpeedPercentage", 0x260, "FloatProperty"},
            {"bIsJumping", 0x264, "BoolProperty"},
            {"BeanCharacterConfig", 0x268, "WeakObjectProperty"},
        }};
    };

    struct BeanChar_Zipline_AnimLayer
    {
        static constexpr std::string_view Name = "BeanChar_Zipline_AnimLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BeanCharacterConfig = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BeanCharacterConfig", 0x260, "WeakObjectProperty"},
        }};
    };

    struct BeanCharacter
    {
        static constexpr std::string_view Name = "BeanCharacter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortStandInPlayerPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySet = 0x61D8;
            static constexpr std::uintptr_t AnimInstance = 0x61E0;
            static constexpr std::uintptr_t MotionWarpingComponent = 0x61E8;
            static constexpr std::uintptr_t ConfigurationClass = 0x61F0;
            static constexpr std::uintptr_t DefaultMappingContext = 0x61F8;
            static constexpr std::uintptr_t DiveAction = 0x6200;
            static constexpr std::uintptr_t GrabAction = 0x6208;
            static constexpr std::uintptr_t JumpButtonDiveIconOverrideTag = 0x6210;
            static constexpr std::uintptr_t MovementComponent = 0x6240;
            static constexpr std::uintptr_t JiggleComponent = 0x6248;
            static constexpr std::uintptr_t StateMachine = 0x6268;
            static constexpr std::uintptr_t BeanStreamManager = 0x6270;
            static constexpr std::uintptr_t bPressedDive = 0x6278;
            static constexpr std::uintptr_t BeanCameraModeOverrideComponent = 0x62A8;
            static constexpr std::uintptr_t ParticleSystemsComponent = 0x62B0;
            static constexpr std::uintptr_t GrabComponent = 0x62B8;
            static constexpr std::uintptr_t BeingGrabbedComponent = 0x62C0;
            static constexpr std::uintptr_t GrabFeatureEnabledTag = 0x62C8;
            static constexpr std::uintptr_t bPressingGrab = 0x62CC;
            static constexpr std::uintptr_t MantleComponent = 0x62D0;
            static constexpr std::uintptr_t bWantsToMantle = 0x62D8;
            static constexpr std::uintptr_t RagdollComponent = 0x62E8;
            static constexpr std::uintptr_t RagdollPhysicsConstraint = 0x62F0;
            static constexpr std::uintptr_t RagdollRootCapsule = 0x62F8;
            static constexpr std::uintptr_t CapsuleUnscaledHalfHeight = 0x6300;
            static constexpr std::uintptr_t CollisionManagerComponent = 0x6308;
            static constexpr std::uintptr_t PushedInteractionSelection = 0x6348;
            static constexpr std::uintptr_t MantleAnimationMontage = 0x6380;
            static constexpr std::uintptr_t GetupAnimationMontage_Front = 0x63A0;
            static constexpr std::uintptr_t GetupAnimationMontage_Left = 0x63C0;
            static constexpr std::uintptr_t GetupAnimationMontage_Right = 0x63E0;
            static constexpr std::uintptr_t GetupAnimationMontage_Back = 0x6400;
            static constexpr std::uintptr_t LandStaggerAnimationMontage = 0x6420;
            static constexpr std::uintptr_t LandStaggerAnimationMontageAlt = 0x6440;
            static constexpr std::uintptr_t BackpackAllowList = 0x6460;
            static constexpr std::uintptr_t bCharacterCosmeticsVisibility = 0x6480;
            static constexpr std::uintptr_t bBackpackCosmeticsVisibility = 0x6481;
            static constexpr std::uintptr_t IdleBreakBlockingTags = 0x6488;
            static constexpr std::uintptr_t bEnableInventoryMode = 0x64A8;
            static constexpr std::uintptr_t RetargetSourceMesh = 0x64B0;
        };

        inline static constexpr std::array<PropertyInfo, 40> Properties{{
            {"AbilitySet", 0x61D8, "ObjectProperty"},
            {"AnimInstance", 0x61E0, "ObjectProperty"},
            {"MotionWarpingComponent", 0x61E8, "ObjectProperty"},
            {"ConfigurationClass", 0x61F0, "ClassProperty"},
            {"DefaultMappingContext", 0x61F8, "ObjectProperty"},
            {"DiveAction", 0x6200, "ObjectProperty"},
            {"GrabAction", 0x6208, "ObjectProperty"},
            {"JumpButtonDiveIconOverrideTag", 0x6210, "StructProperty"},
            {"MovementComponent", 0x6240, "ObjectProperty"},
            {"JiggleComponent", 0x6248, "ObjectProperty"},
            {"StateMachine", 0x6268, "ObjectProperty"},
            {"BeanStreamManager", 0x6270, "ObjectProperty"},
            {"bPressedDive", 0x6278, "BoolProperty"},
            {"BeanCameraModeOverrideComponent", 0x62A8, "ObjectProperty"},
            {"ParticleSystemsComponent", 0x62B0, "ObjectProperty"},
            {"GrabComponent", 0x62B8, "ObjectProperty"},
            {"BeingGrabbedComponent", 0x62C0, "ObjectProperty"},
            {"GrabFeatureEnabledTag", 0x62C8, "StructProperty"},
            {"bPressingGrab", 0x62CC, "BoolProperty"},
            {"MantleComponent", 0x62D0, "ObjectProperty"},
            {"bWantsToMantle", 0x62D8, "BoolProperty"},
            {"RagdollComponent", 0x62E8, "ObjectProperty"},
            {"RagdollPhysicsConstraint", 0x62F0, "ObjectProperty"},
            {"RagdollRootCapsule", 0x62F8, "ObjectProperty"},
            {"CapsuleUnscaledHalfHeight", 0x6300, "FloatProperty"},
            {"CollisionManagerComponent", 0x6308, "ObjectProperty"},
            {"PushedInteractionSelection", 0x6348, "ObjectProperty"},
            {"MantleAnimationMontage", 0x6380, "SoftObjectProperty"},
            {"GetupAnimationMontage_Front", 0x63A0, "SoftObjectProperty"},
            {"GetupAnimationMontage_Left", 0x63C0, "SoftObjectProperty"},
            {"GetupAnimationMontage_Right", 0x63E0, "SoftObjectProperty"},
            {"GetupAnimationMontage_Back", 0x6400, "SoftObjectProperty"},
            {"LandStaggerAnimationMontage", 0x6420, "SoftObjectProperty"},
            {"LandStaggerAnimationMontageAlt", 0x6440, "SoftObjectProperty"},
            {"BackpackAllowList", 0x6460, "SoftObjectProperty"},
            {"bCharacterCosmeticsVisibility", 0x6480, "BoolProperty"},
            {"bBackpackCosmeticsVisibility", 0x6481, "BoolProperty"},
            {"IdleBreakBlockingTags", 0x6488, "StructProperty"},
            {"bEnableInventoryMode", 0x64A8, "BoolProperty"},
            {"RetargetSourceMesh", 0x64B0, "ObjectProperty"},
        }};
    };

    struct BeanCheatManager
    {
        static constexpr std::string_view Name = "BeanCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BeanCosmeticBackpackAllowList
    {
        static constexpr std::string_view Name = "BeanCosmeticBackpackAllowList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedBackpacks = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllowedBackpacks", 0x28, "SetProperty"},
        }};
    };

    struct BeanGrabbable
    {
        static constexpr std::string_view Name = "BeanGrabbable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BeanJiggleMotionComponent
    {
        static constexpr std::string_view Name = "BeanJiggleMotionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VelocityCurve = 0xC0;
            static constexpr std::uintptr_t CurrentBoneRotations = 0x138;
            static constexpr std::uintptr_t TargetBoneRotations = 0x148;
            static constexpr std::uintptr_t CurrentInterpolatedBoneRotations = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VelocityCurve", 0xC0, "StructProperty"},
            {"CurrentBoneRotations", 0x138, "ArrayProperty"},
            {"TargetBoneRotations", 0x148, "ArrayProperty"},
            {"CurrentInterpolatedBoneRotations", 0x158, "ArrayProperty"},
        }};
    };

    struct BeanLaunchPredictorInterface
    {
        static constexpr std::string_view Name = "BeanLaunchPredictorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BeanParticleSystemsComponent
    {
        static constexpr std::string_view Name = "BeanParticleSystemsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VfxParticleSystemsMap = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VfxParticleSystemsMap", 0xC0, "MapProperty"},
        }};
    };

    struct BeanPhysicsDOFConstraintSubsystem
    {
        static constexpr std::string_view Name = "BeanPhysicsDOFConstraintSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousConstraints = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviousConstraints", 0x30, "MapProperty"},
        }};
    };

    struct BeanStreamingManager
    {
        static constexpr std::string_view Name = "BeanStreamingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadedAssets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LoadedAssets", 0x28, "SetProperty"},
        }};
    };

    struct BeanstalkFunctionLibrary
    {
        static constexpr std::string_view Name = "BeanstalkFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaMutator_BeanGameStateCore
    {
        static constexpr std::string_view Name = "FortAthenaMutator_BeanGameStateCore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_BeanPlayerPawn
    {
        static constexpr std::string_view Name = "FortAthenaMutator_BeanPlayerPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t OverridePawnClass = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverridePawnClass", 0x2E8, "SoftClassProperty"},
        }};
    };

    struct FortAutomationRpcManager_Beanstalk
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_Beanstalk";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPickupInteractOverrideComponent_Beanstalk
    {
        static constexpr std::string_view Name = "FortPickupInteractOverrideComponent_Beanstalk";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupInteractOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Priority = 0xC0;
            static constexpr std::uintptr_t ContextOverrideWidget = 0xC8;
            static constexpr std::uintptr_t SecondContextOverrideWidget = 0xD0;
            static constexpr std::uintptr_t bContextOverrideWidgetApplied = 0xD8;
            static constexpr std::uintptr_t bRemoveContextOverrideWidgetsImmediately = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Priority", 0xC0, "IntProperty"},
            {"ContextOverrideWidget", 0xC8, "ClassProperty"},
            {"SecondContextOverrideWidget", 0xD0, "ClassProperty"},
            {"bContextOverrideWidgetApplied", 0xD8, "BoolProperty"},
            {"bRemoveContextOverrideWidgetsImmediately", 0xD9, "BoolProperty"},
        }};
    };

    struct InteractSelection_BeanPawn
    {
        static constexpr std::string_view Name = "InteractSelection_BeanPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractSelection_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractableActorsCache = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InteractableActorsCache", 0x38, "ArrayProperty"},
        }};
    };

}
