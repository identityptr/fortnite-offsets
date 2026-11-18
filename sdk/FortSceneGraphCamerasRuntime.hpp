#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortSceneGraphCamerasRuntime
{
    struct FortAttachToEntityWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortAttachToEntityWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortBoomArmWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortBoomArmWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCameraMode_SceneGraphCamera
    {
        static constexpr std::string_view Name = "FortCameraMode_SceneGraphCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerCamera = 0x28;
            static constexpr std::uintptr_t BlendStateData = 0x30;
            static constexpr std::uintptr_t TransitionTime = 0x40;
            static constexpr std::uintptr_t TransitionOutTime = 0x44;
            static constexpr std::uintptr_t bOverrideTransitionOutTime = 0x48;
            static constexpr std::uintptr_t TransitionParams = 0x4C;
            static constexpr std::uintptr_t FOVTransitionCurve = 0x60;
            static constexpr std::uintptr_t TranslationTransitionCurve = 0x68;
            static constexpr std::uintptr_t bIsUsingConstantFOV = 0x70;
            static constexpr std::uintptr_t bResetInterpolation = 0x70;
            static constexpr std::uintptr_t bShouldAllowBlendingWhenActive = 0x70;
            static constexpr std::uintptr_t bShouldAllowBlendingWhenInactive = 0x70;
            static constexpr std::uintptr_t bShouldClearWeaponRelativeTransform = 0x70;
            static constexpr std::uintptr_t bShouldPassViewTargetCheckOnTransition = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"PlayerCamera", 0x28, "ObjectProperty"},
            {"BlendStateData", 0x30, "StructProperty"},
            {"TransitionTime", 0x40, "FloatProperty"},
            {"TransitionOutTime", 0x44, "FloatProperty"},
            {"bOverrideTransitionOutTime", 0x48, "BoolProperty"},
            {"TransitionParams", 0x4C, "StructProperty"},
            {"FOVTransitionCurve", 0x60, "ObjectProperty"},
            {"TranslationTransitionCurve", 0x68, "ObjectProperty"},
            {"bIsUsingConstantFOV", 0x70, "BoolProperty"},
            {"bResetInterpolation", 0x70, "BoolProperty"},
            {"bShouldAllowBlendingWhenActive", 0x70, "BoolProperty"},
            {"bShouldAllowBlendingWhenInactive", 0x70, "BoolProperty"},
            {"bShouldClearWeaponRelativeTransform", 0x70, "BoolProperty"},
            {"bShouldPassViewTargetCheckOnTransition", 0x70, "BoolProperty"},
        }};
    };

    struct FortCollisionPushWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortCollisionPushWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortDampenRotationWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortDampenRotationWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortDampenTranslationWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortDampenTranslationWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortFramingWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortFramingWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortOffsetWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortOffsetWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortSceneGraphCameraController
    {
        static constexpr std::string_view Name = "FortSceneGraphCameraController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCustomCameraController";
        struct Offsets
        {
            static constexpr std::uintptr_t POIFramingTrackedActors = 0x278;
            static constexpr std::uintptr_t CustomCameraModeClass = 0x288;
            static constexpr std::uintptr_t GameplayEffectClass = 0x290;
            static constexpr std::uintptr_t CameraModeTag = 0x298;
            static constexpr std::uintptr_t CameraPriority = 0x29C;
            static constexpr std::uintptr_t CameraModifiersList = 0x2A0;
            static constexpr std::uintptr_t TagTrackedCameraModifierList = 0x2B0;
            static constexpr std::uintptr_t bThirdPersonTargetingAllowed = 0x2C0;
            static constexpr std::uintptr_t OnControllerActivated = 0x2C4;
            static constexpr std::uintptr_t OnControllerDeactivated = 0x2D0;
            static constexpr std::uintptr_t OnControllerEnabled = 0x2DC;
            static constexpr std::uintptr_t OnControllerDisabled = 0x2E8;
            static constexpr std::uintptr_t Pawn = 0x308;
            static constexpr std::uintptr_t LastBoundPawn = 0x310;
            static constexpr std::uintptr_t FortPlayerCamera = 0x318;
            static constexpr std::uintptr_t bIsCustomCameraModeEnabled = 0x320;
            static constexpr std::uintptr_t FieldOfView = 0x324;
            static constexpr std::uintptr_t NearClipPlane = 0x328;
            static constexpr std::uintptr_t bIsDeathCameraOverridden = 0x32C;
            static constexpr std::uintptr_t bIsDeathCameraRotationOverridden = 0x32D;
            static constexpr std::uintptr_t DeathCameraLocationOffset = 0x330;
            static constexpr std::uintptr_t bDeathCameraUsingLocation = 0x348;
            static constexpr std::uintptr_t DeathCameraRotation = 0x350;
            static constexpr std::uintptr_t TransitionInData = 0x368;
            static constexpr std::uintptr_t TransitionOutData = 0x380;
            static constexpr std::uintptr_t LookAtTarget = 0x398;
            static constexpr std::uintptr_t bEnableLookAtTarget = 0x3A0;
            static constexpr std::uintptr_t CameraModifiersInstances = 0x3A8;
            static constexpr std::uintptr_t CameraModifierInstanceMap = 0x3B8;
            static constexpr std::uintptr_t LocalPlayerControllers = 0x3E0;
            static constexpr std::uintptr_t ActiveBlockedTags = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"POIFramingTrackedActors", 0x278, "ArrayProperty"},
            {"CustomCameraModeClass", 0x288, "ClassProperty"},
            {"GameplayEffectClass", 0x290, "ClassProperty"},
            {"CameraModeTag", 0x298, "StructProperty"},
            {"CameraPriority", 0x29C, "IntProperty"},
            {"CameraModifiersList", 0x2A0, "ArrayProperty"},
            {"TagTrackedCameraModifierList", 0x2B0, "ArrayProperty"},
            {"bThirdPersonTargetingAllowed", 0x2C0, "BoolProperty"},
            {"OnControllerActivated", 0x2C4, "DelegateProperty"},
            {"OnControllerDeactivated", 0x2D0, "DelegateProperty"},
            {"OnControllerEnabled", 0x2DC, "DelegateProperty"},
            {"OnControllerDisabled", 0x2E8, "DelegateProperty"},
            {"Pawn", 0x308, "ObjectProperty"},
            {"LastBoundPawn", 0x310, "WeakObjectProperty"},
            {"FortPlayerCamera", 0x318, "ObjectProperty"},
            {"bIsCustomCameraModeEnabled", 0x320, "BoolProperty"},
            {"FieldOfView", 0x324, "FloatProperty"},
            {"NearClipPlane", 0x328, "FloatProperty"},
            {"bIsDeathCameraOverridden", 0x32C, "BoolProperty"},
            {"bIsDeathCameraRotationOverridden", 0x32D, "BoolProperty"},
            {"DeathCameraLocationOffset", 0x330, "StructProperty"},
            {"bDeathCameraUsingLocation", 0x348, "BoolProperty"},
            {"DeathCameraRotation", 0x350, "StructProperty"},
            {"TransitionInData", 0x368, "StructProperty"},
            {"TransitionOutData", 0x380, "StructProperty"},
            {"LookAtTarget", 0x398, "ObjectProperty"},
            {"bEnableLookAtTarget", 0x3A0, "BoolProperty"},
            {"CameraModifiersInstances", 0x3A8, "ArrayProperty"},
            {"CameraModifierInstanceMap", 0x3B8, "MapProperty"},
            {"LocalPlayerControllers", 0x3E0, "ArrayProperty"},
            {"ActiveBlockedTags", 0x3F0, "StructProperty"},
        }};
    };

    struct FortSceneGraphCamerasFirstPersonCameraNode
    {
        static constexpr std::string_view Name = "FortSceneGraphCamerasFirstPersonCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortSceneGraphCamerasFixedAngleCameraNode
    {
        static constexpr std::string_view Name = "FortSceneGraphCamerasFixedAngleCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortSceneGraphCamerasFixedPointCameraNode
    {
        static constexpr std::string_view Name = "FortSceneGraphCamerasFixedPointCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortSceneGraphCamerasOrbitCameraNode
    {
        static constexpr std::string_view Name = "FortSceneGraphCamerasOrbitCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortSceneGraphCamerasSubsystem
    {
        static constexpr std::string_view Name = "FortSceneGraphCamerasSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSetRotationWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortSetRotationWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

    struct FortSetTranslationWrapperCameraNode
    {
        static constexpr std::string_view Name = "FortSetTranslationWrapperCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NativeCameraRigCameraModifierNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerNode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerNode", 0x38, "ObjectProperty"},
        }};
    };

}
