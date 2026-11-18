#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpecterGameplayRuntime
{
    struct FortAthenaMutator_SpecterRespawn
    {
        static constexpr std::string_view Name = "FortAthenaMutator_SpecterRespawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpecterPawnClass = 0x410;
            static constexpr std::uintptr_t SpecterRespawnText = 0x418;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpecterPawnClass", 0x410, "ClassProperty"},
            {"SpecterRespawnText", 0x418, "TextProperty"},
        }};
    };

    struct FortMovementMode_SMFlightSpecter
    {
        static constexpr std::string_view Name = "FortMovementMode_SMFlightSpecter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtStatefulMovement";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingContext = 0x450;
            static constexpr std::uintptr_t AscendAction = 0x458;
            static constexpr std::uintptr_t DescendAction = 0x460;
            static constexpr std::uintptr_t MinimumTimeBeforeAllowLanding = 0x468;
            static constexpr std::uintptr_t MaxHeightAboveGround = 0x490;
            static constexpr std::uintptr_t WeakRuntimeData = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InputMappingContext", 0x450, "ObjectProperty"},
            {"AscendAction", 0x458, "ObjectProperty"},
            {"DescendAction", 0x460, "ObjectProperty"},
            {"MinimumTimeBeforeAllowLanding", 0x468, "StructProperty"},
            {"MaxHeightAboveGround", 0x490, "StructProperty"},
            {"WeakRuntimeData", 0x4B8, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_SMFlightSpecterRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_SMFlightSpecterRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ESMRuntimeData";
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

    struct FortProjectileMoveComp_SpecterUpdoot
    {
        static constexpr std::string_view Name = "FortProjectileMoveComp_SpecterUpdoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileMovementComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CollideDistanceToTarget = 0x450;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CollideDistanceToTarget", 0x450, "FloatProperty"},
        }};
    };

    struct SMFlightSpecter_MovementStates
    {
        static constexpr std::string_view Name = "SMFlightSpecter_MovementStates";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SM_MovementState";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanLandFromThisState = 0x2F0;
            static constexpr std::uintptr_t bIgnoreLandingBlockedTimer = 0x2F1;
            static constexpr std::uintptr_t TopFlyingAccelerationRate = 0x2F8;
            static constexpr std::uintptr_t TopFlyingDecelerationRate = 0x320;
            static constexpr std::uintptr_t TopFlyingSpeed = 0x348;
            static constexpr std::uintptr_t TopSpeedHeight = 0x370;
            static constexpr std::uintptr_t BottomSpeedHeight = 0x398;
            static constexpr std::uintptr_t StopFlightHeight = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bCanLandFromThisState", 0x2F0, "BoolProperty"},
            {"bIgnoreLandingBlockedTimer", 0x2F1, "BoolProperty"},
            {"TopFlyingAccelerationRate", 0x2F8, "StructProperty"},
            {"TopFlyingDecelerationRate", 0x320, "StructProperty"},
            {"TopFlyingSpeed", 0x348, "StructProperty"},
            {"TopSpeedHeight", 0x370, "StructProperty"},
            {"BottomSpeedHeight", 0x398, "StructProperty"},
            {"StopFlightHeight", 0x3C0, "StructProperty"},
        }};
    };

    struct SpecterAnalytics
    {
        static constexpr std::string_view Name = "SpecterAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpecterHauntInteractionExtensionComponent
    {
        static constexpr std::string_view Name = "SpecterHauntInteractionExtensionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortActorComponent_FortInteractExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t StartHauntInteractText = 0xF0;
            static constexpr std::uintptr_t StopHauntInteractText = 0x100;
            static constexpr std::uintptr_t HauntInteractionType = 0x110;
            static constexpr std::uintptr_t HauntInteractionAttempt = 0x111;
            static constexpr std::uintptr_t HauntInteractionAttemptSecondary = 0x112;
            static constexpr std::uintptr_t HauntInteractionColliderExtents = 0x118;
            static constexpr std::uintptr_t HauntInteractCollisionComponent = 0x130;
            static constexpr std::uintptr_t HaunterCount = 0x138;
            static constexpr std::uintptr_t NextWorldTimeToAllowHaunt = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"StartHauntInteractText", 0xF0, "TextProperty"},
            {"StopHauntInteractText", 0x100, "TextProperty"},
            {"HauntInteractionType", 0x110, "ByteProperty"},
            {"HauntInteractionAttempt", 0x111, "ByteProperty"},
            {"HauntInteractionAttemptSecondary", 0x112, "ByteProperty"},
            {"HauntInteractionColliderExtents", 0x118, "StructProperty"},
            {"HauntInteractCollisionComponent", 0x130, "ObjectProperty"},
            {"HaunterCount", 0x138, "IntProperty"},
            {"NextWorldTimeToAllowHaunt", 0x140, "DoubleProperty"},
        }};
    };

    struct SpecterHauntingComponent
    {
        static constexpr std::string_view Name = "SpecterHauntingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedActionTagsWhileHaunting = 0xC8;
            static constexpr std::uintptr_t HauntCameraEaseTime = 0xE8;
            static constexpr std::uintptr_t HauntCameraEaseFunction = 0x110;
            static constexpr std::uintptr_t HauntedPawn = 0x114;
            static constexpr std::uintptr_t HauntingAnalytics = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AllowedActionTagsWhileHaunting", 0xC8, "StructProperty"},
            {"HauntCameraEaseTime", 0xE8, "StructProperty"},
            {"HauntCameraEaseFunction", 0x110, "ByteProperty"},
            {"HauntedPawn", 0x114, "WeakObjectProperty"},
            {"HauntingAnalytics", 0x120, "ArrayProperty"},
        }};
    };

    struct SpecterPawn
    {
        static constexpr std::string_view Name = "SpecterPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortStandInPlayerPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentsToUnregister = 0x61D8;
            static constexpr std::uintptr_t bIsHaunting = 0x61E8;
            static constexpr std::uintptr_t DootAnalytics = 0x61F0;
            static constexpr std::uintptr_t StartLocation = 0x6200;
            static constexpr std::uintptr_t StartMatchTime = 0x6218;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ComponentsToUnregister", 0x61D8, "ArrayProperty"},
            {"bIsHaunting", 0x61E8, "BoolProperty"},
            {"DootAnalytics", 0x61F0, "ArrayProperty"},
            {"StartLocation", 0x6200, "StructProperty"},
            {"StartMatchTime", 0x6218, "DoubleProperty"},
        }};
    };

    struct SpecterRelevancyManagerComponent
    {
        static constexpr std::string_view Name = "SpecterRelevancyManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct SpriteGhostAnimInstance
    {
        static constexpr std::string_view Name = "SpriteGhostAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveAngle = 0x340;
            static constexpr std::uintptr_t MoveSpeed = 0x348;
            static constexpr std::uintptr_t Move_Tilt_AO_Alpha = 0x350;
            static constexpr std::uintptr_t bIsMoving = 0x358;
            static constexpr std::uintptr_t bIsFalling = 0x359;
            static constexpr std::uintptr_t bIsFlying = 0x35A;
            static constexpr std::uintptr_t bWasFlying = 0x35B;
            static constexpr std::uintptr_t bIsTacSprinting = 0x35C;
            static constexpr std::uintptr_t bJustLanded = 0x35D;
            static constexpr std::uintptr_t bIsGrounded = 0x35E;
            static constexpr std::uintptr_t ABP_IsGrounded = 0x35F;
            static constexpr std::uintptr_t ABP_IsMoving = 0x360;
            static constexpr std::uintptr_t ABP_JumpTriggered = 0x361;
            static constexpr std::uintptr_t bIsGroundedPrevious = 0x362;
            static constexpr std::uintptr_t bIsHaunting = 0x363;
            static constexpr std::uintptr_t bJumpTriggered = 0x364;
            static constexpr std::uintptr_t bHasTacSprintTag = 0x365;
            static constexpr std::uintptr_t SpiralAcceleration = 0x368;
            static constexpr std::uintptr_t SpiralCurrentValue = 0x36C;
            static constexpr std::uintptr_t OwningActorPtr = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"MoveAngle", 0x340, "FloatProperty"},
            {"MoveSpeed", 0x348, "DoubleProperty"},
            {"Move_Tilt_AO_Alpha", 0x350, "DoubleProperty"},
            {"bIsMoving", 0x358, "BoolProperty"},
            {"bIsFalling", 0x359, "BoolProperty"},
            {"bIsFlying", 0x35A, "BoolProperty"},
            {"bWasFlying", 0x35B, "BoolProperty"},
            {"bIsTacSprinting", 0x35C, "BoolProperty"},
            {"bJustLanded", 0x35D, "BoolProperty"},
            {"bIsGrounded", 0x35E, "BoolProperty"},
            {"ABP_IsGrounded", 0x35F, "BoolProperty"},
            {"ABP_IsMoving", 0x360, "BoolProperty"},
            {"ABP_JumpTriggered", 0x361, "BoolProperty"},
            {"bIsGroundedPrevious", 0x362, "BoolProperty"},
            {"bIsHaunting", 0x363, "BoolProperty"},
            {"bJumpTriggered", 0x364, "BoolProperty"},
            {"bHasTacSprintTag", 0x365, "BoolProperty"},
            {"SpiralAcceleration", 0x368, "FloatProperty"},
            {"SpiralCurrentValue", 0x36C, "FloatProperty"},
            {"OwningActorPtr", 0x370, "ObjectProperty"},
        }};
    };

    struct SpriteGhostPawnInterface
    {
        static constexpr std::string_view Name = "SpriteGhostPawnInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
