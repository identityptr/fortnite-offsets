#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayCameras
{
    struct AccelerationDecelerationValueInterpolator
    {
        static constexpr std::string_view Name = "AccelerationDecelerationValueInterpolator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraValueInterpolator";
        struct Offsets
        {
            static constexpr std::uintptr_t Acceleration = 0x28;
            static constexpr std::uintptr_t MaxSpeed = 0x2C;
            static constexpr std::uintptr_t Deceleration = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Acceleration", 0x28, "FloatProperty"},
            {"MaxSpeed", 0x2C, "FloatProperty"},
            {"Deceleration", 0x30, "FloatProperty"},
        }};
    };

    struct ActivateCameraRigFunctions
    {
        static constexpr std::string_view Name = "ActivateCameraRigFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ActivatePersistentBaseCameraRig",
            "ActivatePersistentGlobalCameraRig",
            "ActivatePersistentVisualCameraRig",
        }};
    };

    struct AimAtActorCameraAction
    {
        static constexpr std::string_view Name = "AimAtActorCameraAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseAimAtCameraAction";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0x50;
            static constexpr std::uintptr_t TargetSocketName = 0x58;
            static constexpr std::uintptr_t TargetBoneName = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetActor", 0x50, "ObjectProperty"},
            {"TargetSocketName", 0x58, "NameProperty"},
            {"TargetBoneName", 0x5C, "NameProperty"},
        }};
    };

    struct AimAtCameraAction
    {
        static constexpr std::string_view Name = "AimAtCameraAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseAimAtCameraAction";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetLocation = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetLocation", 0x50, "StructProperty"},
        }};
    };

    struct ArrayCameraNode
    {
        static constexpr std::string_view Name = "ArrayCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Children", 0x38, "ArrayProperty"},
        }};
    };

    struct AssetReferenceCameraNode
    {
        static constexpr std::string_view Name = "AssetReferenceCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AttachToActorCameraNode
    {
        static constexpr std::string_view Name = "AttachToActorCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Attachment = 0x38;
            static constexpr std::uintptr_t AttachmentDataID = 0x50;
            static constexpr std::uintptr_t AttachToLocation = 0x58;
            static constexpr std::uintptr_t AttachToRotation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Attachment", 0x38, "StructProperty"},
            {"AttachmentDataID", 0x50, "StructProperty"},
            {"AttachToLocation", 0x58, "StructProperty"},
            {"AttachToRotation", 0x68, "StructProperty"},
        }};
    };

    struct AttachToActorGroupCameraNode
    {
        static constexpr std::string_view Name = "AttachToActorGroupCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Attachments = 0x38;
            static constexpr std::uintptr_t AttachmentsDataID = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Attachments", 0x38, "ArrayProperty"},
            {"AttachmentsDataID", 0x48, "StructProperty"},
        }};
    };

    struct AttachToPlayerPawnCameraNode
    {
        static constexpr std::string_view Name = "AttachToPlayerPawnCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachToLocation = 0x38;
            static constexpr std::uintptr_t AttachToRotation = 0x48;
            static constexpr std::uintptr_t SocketName = 0x58;
            static constexpr std::uintptr_t BoneName = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AttachToLocation", 0x38, "StructProperty"},
            {"AttachToRotation", 0x48, "StructProperty"},
            {"SocketName", 0x58, "NameProperty"},
            {"BoneName", 0x5C, "NameProperty"},
        }};
    };

    struct AutoFocusCameraNode
    {
        static constexpr std::string_view Name = "AutoFocusCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableAutoFocus = 0x38;
            static constexpr std::uintptr_t AutoFocusDampingFactor = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnableAutoFocus", 0x38, "StructProperty"},
            {"AutoFocusDampingFactor", 0x48, "StructProperty"},
        }};
    };

    struct AutoRotateInput2DCameraNode
    {
        static constexpr std::string_view Name = "AutoRotateInput2DCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Input2DCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Direction = 0x38;
            static constexpr std::uintptr_t DirectionVector = 0x40;
            static constexpr std::uintptr_t WaitTime = 0x50;
            static constexpr std::uintptr_t DeactivationThreshold = 0x60;
            static constexpr std::uintptr_t Interpolator = 0x70;
            static constexpr std::uintptr_t FreezeControlRotation = 0x78;
            static constexpr std::uintptr_t EnableAutoRotate = 0x88;
            static constexpr std::uintptr_t AutoRotateYaw = 0x98;
            static constexpr std::uintptr_t AutoRotatePitch = 0xA8;
            static constexpr std::uintptr_t InputNode = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Direction", 0x38, "EnumProperty"},
            {"DirectionVector", 0x40, "StructProperty"},
            {"WaitTime", 0x50, "StructProperty"},
            {"DeactivationThreshold", 0x60, "StructProperty"},
            {"Interpolator", 0x70, "ObjectProperty"},
            {"FreezeControlRotation", 0x78, "StructProperty"},
            {"EnableAutoRotate", 0x88, "StructProperty"},
            {"AutoRotateYaw", 0x98, "StructProperty"},
            {"AutoRotatePitch", 0xA8, "StructProperty"},
            {"InputNode", 0xB8, "ObjectProperty"},
        }};
    };

    struct BaseAimAtCameraAction
    {
        static constexpr std::string_view Name = "BaseAimAtCameraAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Interpolator = 0x30;
            static constexpr std::uintptr_t LockOnAngleTolerance = 0x38;
            static constexpr std::uintptr_t LockOnPolicy = 0x3C;
            static constexpr std::uintptr_t TargetFraming = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interpolator", 0x30, "ObjectProperty"},
            {"LockOnAngleTolerance", 0x38, "FloatProperty"},
            {"LockOnPolicy", 0x3C, "EnumProperty"},
            {"TargetFraming", 0x40, "StructProperty"},
        }};
    };

    struct BaseCameraObject
    {
        static constexpr std::string_view Name = "BaseCameraObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Interface = 0x28;
            static constexpr std::uintptr_t Connections = 0x58;
            static constexpr std::uintptr_t AllocationInfo = 0x70;
            static constexpr std::uintptr_t Guid = 0x98;
            static constexpr std::uintptr_t DefaultParameters = 0xA8;
            static constexpr std::uintptr_t ParameterDefinitions = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Interface", 0x28, "StructProperty"},
            {"Connections", 0x58, "StructProperty"},
            {"AllocationInfo", 0x70, "StructProperty"},
            {"Guid", 0x98, "StructProperty"},
            {"DefaultParameters", 0xA8, "StructProperty"},
            {"ParameterDefinitions", 0xB8, "ArrayProperty"},
        }};
    };

    struct BaseCameraObjectReference
    {
        static constexpr std::string_view Name = "BaseCameraObjectReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x8;
            static constexpr std::uintptr_t ParameterMetaData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Parameters", 0x8, "StructProperty"},
            {"ParameterMetaData", 0x28, "ArrayProperty"},
        }};
    };

    struct BaseFramingCameraNode
    {
        static constexpr std::string_view Name = "BaseFramingCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetLocation = 0x40;
            static constexpr std::uintptr_t TargetInfos = 0x50;
            static constexpr std::uintptr_t TargetInfosDataID = 0x60;
            static constexpr std::uintptr_t SetTargetDistance = 0x68;
            static constexpr std::uintptr_t InitializeWithIdealFraming = 0x78;
            static constexpr std::uintptr_t IdealFramingLocation = 0x88;
            static constexpr std::uintptr_t ReframeDampingFactor = 0xA8;
            static constexpr std::uintptr_t LowReframeDampingFactor = 0xB8;
            static constexpr std::uintptr_t ReengageTime = 0xC8;
            static constexpr std::uintptr_t DisengageTime = 0xD8;
            static constexpr std::uintptr_t TargetMovementAnticipationTime = 0xE8;
            static constexpr std::uintptr_t DeadZone = 0xF8;
            static constexpr std::uintptr_t SoftZone = 0x120;
            static constexpr std::uintptr_t TargetInfo = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"TargetLocation", 0x40, "StructProperty"},
            {"TargetInfos", 0x50, "ArrayProperty"},
            {"TargetInfosDataID", 0x60, "StructProperty"},
            {"SetTargetDistance", 0x68, "StructProperty"},
            {"InitializeWithIdealFraming", 0x78, "StructProperty"},
            {"IdealFramingLocation", 0x88, "StructProperty"},
            {"ReframeDampingFactor", 0xA8, "StructProperty"},
            {"LowReframeDampingFactor", 0xB8, "StructProperty"},
            {"ReengageTime", 0xC8, "StructProperty"},
            {"DisengageTime", 0xD8, "StructProperty"},
            {"TargetMovementAnticipationTime", 0xE8, "StructProperty"},
            {"DeadZone", 0xF8, "StructProperty"},
            {"SoftZone", 0x120, "StructProperty"},
            {"TargetInfo", 0x148, "StructProperty"},
        }};
    };

    struct BlendCameraNode
    {
        static constexpr std::string_view Name = "BlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct BlendStackCameraNode
    {
        static constexpr std::string_view Name = "BlendStackCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendStackType = 0x38;
            static constexpr std::uintptr_t Layer = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendStackType", 0x38, "EnumProperty"},
            {"Layer", 0x3C, "EnumProperty"},
        }};
    };

    struct BlendStackRootCameraNode
    {
        static constexpr std::string_view Name = "BlendStackRootCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Blend = 0x38;
            static constexpr std::uintptr_t RootNode = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Blend", 0x38, "ObjectProperty"},
            {"RootNode", 0x40, "ObjectProperty"},
        }};
    };

    struct BlueprintCameraContextDataTableFunctionLibrary
    {
        static constexpr std::string_view Name = "BlueprintCameraContextDataTableFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "GetClassData",
            "GetEnumData",
            "GetNameData",
            "GetObjectData",
            "GetStringData",
            "GetStructData",
            "SetClassData",
            "SetEnumData",
            "SetNameData",
            "SetObjectData",
            "SetStringData",
            "SetStructData",
        }};
    };

    struct BlueprintCameraDirector
    {
        static constexpr std::string_view Name = "BlueprintCameraDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraDirectorEvaluatorClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraDirectorEvaluatorClass", 0x48, "ClassProperty"},
        }};
    };

    struct BlueprintCameraDirectorActivateParams
    {
        static constexpr std::string_view Name = "BlueprintCameraDirectorActivateParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluationContextOwner = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EvaluationContextOwner", 0x0, "ObjectProperty"},
        }};
    };

    struct BlueprintCameraDirectorDeactivateParams
    {
        static constexpr std::string_view Name = "BlueprintCameraDirectorDeactivateParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluationContextOwner = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EvaluationContextOwner", 0x0, "ObjectProperty"},
        }};
    };

    struct BlueprintCameraDirectorEvaluationParams
    {
        static constexpr std::string_view Name = "BlueprintCameraDirectorEvaluationParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeltaTime = 0x0;
            static constexpr std::uintptr_t EvaluationContextOwner = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DeltaTime", 0x0, "FloatProperty"},
            {"EvaluationContextOwner", 0x8, "ObjectProperty"},
        }};
    };

    struct BlueprintCameraDirectorEvaluator
    {
        static constexpr std::string_view Name = "BlueprintCameraDirectorEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "ActivateCameraDirector",
            "ActivateCameraRig",
            "ActivateCameraRigViaProxy",
            "ActivatePersistentBaseCameraRig",
            "ActivatePersistentGlobalCameraRig",
            "ActivatePersistentVisualCameraRig",
            "AddChildEvaluationContext",
            "DeactivateCameraDirector",
            "DeactivatePersistentBaseCameraRig",
            "DeactivatePersistentGlobalCameraRig",
            "DeactivatePersistentVisualCameraRig",
            "FindEvaluationContextOwnerActor",
            "GetConditionalContextResult",
            "GetInitialContextResult",
            "RemoveChildEvaluationContext",
            "ResolveCameraRigProxy",
            "RunCameraDirector",
            "RunChildCameraDirector",
        }};
    };

    struct BlueprintCameraEvaluationDataFunctionLibrary
    {
        static constexpr std::string_view Name = "BlueprintCameraEvaluationDataFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "BlendCameraEvaluationData",
            "GetCameraPose",
            "MakeCameraEvaluationData",
            "SetCameraPose",
            "SetDefaultCameraRigParameters",
        }};
    };

    struct BlueprintCameraEvaluationDataRef
    {
        static constexpr std::string_view Name = "BlueprintCameraEvaluationDataRef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlueprintCameraNode
    {
        static constexpr std::string_view Name = "BlueprintCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraNodeEvaluatorTemplate = 0x40;
            static constexpr std::uintptr_t CameraNodeEvaluatorOverrides = 0x48;
            static constexpr std::uintptr_t bRunInEditor = 0x68;
            static constexpr std::uintptr_t CameraNodeEvaluatorClass = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CameraNodeEvaluatorTemplate", 0x40, "ObjectProperty"},
            {"CameraNodeEvaluatorOverrides", 0x48, "StructProperty"},
            {"bRunInEditor", 0x68, "BoolProperty"},
            {"CameraNodeEvaluatorClass", 0x70, "ClassProperty"},
        }};
    };

    struct BlueprintCameraNodeEvaluator
    {
        static constexpr std::string_view Name = "BlueprintCameraNodeEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFirstFrame = 0x28;
            static constexpr std::uintptr_t bIsActiveCameraRig = 0x29;
            static constexpr std::uintptr_t EvaluationContextOwner = 0x30;
            static constexpr std::uintptr_t CameraData = 0x38;
            static constexpr std::uintptr_t CameraPose = 0x50;
            static constexpr std::uintptr_t VariableTable = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsFirstFrame", 0x28, "BoolProperty"},
            {"bIsActiveCameraRig", 0x29, "BoolProperty"},
            {"EvaluationContextOwner", 0x30, "ObjectProperty"},
            {"CameraData", 0x38, "StructProperty"},
            {"CameraPose", 0x50, "StructProperty"},
            {"VariableTable", 0xE0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "FindEvaluationContextOwnerActor",
            "GetCameraPose",
            "GetCameraRig",
            "GetCurrentCameraPose",
            "GetPlayerController",
            "InitializeCameraNode",
            "SetCameraPose",
            "SetCurrentCameraPose",
            "SetDefaultOwningCameraRigParameters",
            "TickCameraNode",
        }};
    };

    struct BlueprintCameraPose
    {
        static constexpr std::string_view Name = "BlueprintCameraPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Rotation = 0x18;
            static constexpr std::uintptr_t TargetDistance = 0x30;
            static constexpr std::uintptr_t FieldOfView = 0x38;
            static constexpr std::uintptr_t FocalLength = 0x3C;
            static constexpr std::uintptr_t FirstPersonFieldOfView = 0x40;
            static constexpr std::uintptr_t FirstPersonScale = 0x44;
            static constexpr std::uintptr_t OrthographicWidth = 0x48;
            static constexpr std::uintptr_t Aperture = 0x4C;
            static constexpr std::uintptr_t ShutterSpeed = 0x50;
            static constexpr std::uintptr_t FocusDistance = 0x54;
            static constexpr std::uintptr_t SensorWidth = 0x58;
            static constexpr std::uintptr_t SensorHeight = 0x5C;
            static constexpr std::uintptr_t SensorHorizontalOffset = 0x60;
            static constexpr std::uintptr_t SensorVerticalOffset = 0x64;
            static constexpr std::uintptr_t ISO = 0x68;
            static constexpr std::uintptr_t SqueezeFactor = 0x6C;
            static constexpr std::uintptr_t Overscan = 0x70;
            static constexpr std::uintptr_t DiaphragmBladeCount = 0x74;
            static constexpr std::uintptr_t NearClippingPlane = 0x78;
            static constexpr std::uintptr_t FarClippingPlane = 0x7C;
            static constexpr std::uintptr_t PhysicalCameraBlendWeight = 0x80;
            static constexpr std::uintptr_t EnableFirstPerson = 0x84;
            static constexpr std::uintptr_t EnablePhysicalCamera = 0x85;
            static constexpr std::uintptr_t ConstrainAspectRatio = 0x86;
            static constexpr std::uintptr_t OverrideAspectRatioAxisConstraint = 0x87;
            static constexpr std::uintptr_t AspectRatioAxisConstraint = 0x88;
            static constexpr std::uintptr_t ProjectionMode = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Rotation", 0x18, "StructProperty"},
            {"TargetDistance", 0x30, "DoubleProperty"},
            {"FieldOfView", 0x38, "FloatProperty"},
            {"FocalLength", 0x3C, "FloatProperty"},
            {"FirstPersonFieldOfView", 0x40, "FloatProperty"},
            {"FirstPersonScale", 0x44, "FloatProperty"},
            {"OrthographicWidth", 0x48, "FloatProperty"},
            {"Aperture", 0x4C, "FloatProperty"},
            {"ShutterSpeed", 0x50, "FloatProperty"},
            {"FocusDistance", 0x54, "FloatProperty"},
            {"SensorWidth", 0x58, "FloatProperty"},
            {"SensorHeight", 0x5C, "FloatProperty"},
            {"SensorHorizontalOffset", 0x60, "FloatProperty"},
            {"SensorVerticalOffset", 0x64, "FloatProperty"},
            {"ISO", 0x68, "FloatProperty"},
            {"SqueezeFactor", 0x6C, "FloatProperty"},
            {"Overscan", 0x70, "FloatProperty"},
            {"DiaphragmBladeCount", 0x74, "IntProperty"},
            {"NearClippingPlane", 0x78, "FloatProperty"},
            {"FarClippingPlane", 0x7C, "FloatProperty"},
            {"PhysicalCameraBlendWeight", 0x80, "FloatProperty"},
            {"EnableFirstPerson", 0x84, "BoolProperty"},
            {"EnablePhysicalCamera", 0x85, "BoolProperty"},
            {"ConstrainAspectRatio", 0x86, "BoolProperty"},
            {"OverrideAspectRatioAxisConstraint", 0x87, "BoolProperty"},
            {"AspectRatioAxisConstraint", 0x88, "ByteProperty"},
            {"ProjectionMode", 0x89, "ByteProperty"},
        }};
    };

    struct BlueprintCameraPoseFunctionLibrary
    {
        static constexpr std::string_view Name = "BlueprintCameraPoseFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "GetAimDir",
            "GetAimRay",
            "GetEffectiveFieldOfView",
            "GetFieldOfView",
            "GetFocalLength",
            "GetLocation",
            "GetRotation",
            "GetSensorAspectRatio",
            "GetTarget",
            "GetTargetAtDistance",
            "GetTargetDistance",
            "GetTransform",
            "MakeCameraPoseFromCameraComponent",
            "MakeCameraPoseFromCineCameraComponent",
            "SetFieldOfView",
            "SetFocalLength",
            "SetLocation",
            "SetRotation",
            "SetTargetDistance",
            "SetTransform",
        }};
    };

    struct BlueprintCameraVariableTableFunctionLibrary
    {
        static constexpr std::string_view Name = "BlueprintCameraVariableTableFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "GetBooleanCameraVariable",
            "GetDoubleCameraVariable",
            "GetFloatCameraVariable",
            "GetInteger32CameraVariable",
            "GetRotatorCameraVariable",
            "GetTransformCameraVariable",
            "GetVector2CameraVariable",
            "GetVector3CameraVariable",
            "GetVector4CameraVariable",
            "SetBooleanCameraVariable",
            "SetDoubleCameraVariable",
            "SetFloatCameraVariable",
            "SetInteger32CameraVariable",
            "SetRotatorCameraVariable",
            "SetTransformCameraVariable",
            "SetVector2CameraVariable",
            "SetVector3CameraVariable",
            "SetVector4CameraVariable",
        }};
    };

    struct BlueprintPostProcessSettingsCollectionFunctionLibrary
    {
        static constexpr std::string_view Name = "BlueprintPostProcessSettingsCollectionFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetPostProcessSettings",
            "LerpPostProcessSettings",
            "OverrideChangedPostProcessSettings",
            "SetPostProcessSettings",
        }};
    };

    struct BodyParametersCameraNode
    {
        static constexpr std::string_view Name = "BodyParametersCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ShutterSpeed = 0x38;
            static constexpr std::uintptr_t ISO = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShutterSpeed", 0x38, "StructProperty"},
            {"ISO", 0x48, "StructProperty"},
        }};
    };

    struct BooleanCameraParameter
    {
        static constexpr std::string_view Name = "BooleanCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x4;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "BoolProperty"},
            {"VariableID", 0x4, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct BooleanCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "BooleanCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct BooleanCameraVariable
    {
        static constexpr std::string_view Name = "BooleanCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDefaultValue", 0x40, "BoolProperty"},
        }};
    };

    struct BooleanCameraVariableReference
    {
        static constexpr std::string_view Name = "BooleanCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct BoomArmCameraNode
    {
        static constexpr std::string_view Name = "BoomArmCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x38;
            static constexpr std::uintptr_t BoomOffset = 0x48;
            static constexpr std::uintptr_t BoomLengthInterpolator = 0x70;
            static constexpr std::uintptr_t MaxForwardInterpolationFactor = 0x78;
            static constexpr std::uintptr_t MaxBackwardInterpolationFactor = 0x90;
            static constexpr std::uintptr_t InputSlot = 0xA8;
            static constexpr std::uintptr_t bAdditiveRotation = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IsEnabled", 0x38, "StructProperty"},
            {"BoomOffset", 0x48, "StructProperty"},
            {"BoomLengthInterpolator", 0x70, "ObjectProperty"},
            {"MaxForwardInterpolationFactor", 0x78, "StructProperty"},
            {"MaxBackwardInterpolationFactor", 0x90, "StructProperty"},
            {"InputSlot", 0xA8, "ObjectProperty"},
            {"bAdditiveRotation", 0xB0, "BoolProperty"},
        }};
    };

    struct CalcCameraActorCameraNode
    {
        static constexpr std::string_view Name = "CalcCameraActorCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct CameraAction
    {
        static constexpr std::string_view Name = "CameraAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bPropagateToNewCameraRigs = 0x28;
            static constexpr std::uintptr_t Timeout = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bPropagateToNewCameraRigs", 0x28, "BoolProperty"},
            {"Timeout", 0x2C, "FloatProperty"},
        }};
    };

    struct CameraActionInstanceFunctions
    {
        static constexpr std::string_view Name = "CameraActionInstanceFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsValid",
        }};
    };

    struct CameraActionInstanceID
    {
        static constexpr std::string_view Name = "CameraActionInstanceID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct CameraActorAttachmentInfo
    {
        static constexpr std::string_view Name = "CameraActorAttachmentInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x0;
            static constexpr std::uintptr_t SocketName = 0x8;
            static constexpr std::uintptr_t BoneName = 0xC;
            static constexpr std::uintptr_t Weight = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Actor", 0x0, "ObjectProperty"},
            {"SocketName", 0x8, "NameProperty"},
            {"BoneName", 0xC, "NameProperty"},
            {"Weight", 0x10, "FloatProperty"},
        }};
    };

    struct CameraActorTargetInfo
    {
        static constexpr std::string_view Name = "CameraActorTargetInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x0;
            static constexpr std::uintptr_t SocketName = 0x20;
            static constexpr std::uintptr_t BoneName = 0x24;
            static constexpr std::uintptr_t TargetShape = 0x28;
            static constexpr std::uintptr_t TargetSize = 0x2C;
            static constexpr std::uintptr_t Weight = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Actor", 0x0, "SoftObjectProperty"},
            {"SocketName", 0x20, "NameProperty"},
            {"BoneName", 0x24, "NameProperty"},
            {"TargetShape", 0x28, "EnumProperty"},
            {"TargetSize", 0x2C, "FloatProperty"},
            {"Weight", 0x30, "FloatProperty"},
        }};
    };

    struct CameraAsset
    {
        static constexpr std::string_view Name = "CameraAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Interface = 0x48;
            static constexpr std::uintptr_t CameraDirector = 0x58;
            static constexpr std::uintptr_t EnterTransitions = 0x60;
            static constexpr std::uintptr_t ExitTransitions = 0x70;
            static constexpr std::uintptr_t BuildStatus = 0x80;
            static constexpr std::uintptr_t DefaultParameters = 0x88;
            static constexpr std::uintptr_t ParameterDefinitions = 0x98;
            static constexpr std::uintptr_t AllocationInfo = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Interface", 0x48, "StructProperty"},
            {"CameraDirector", 0x58, "ObjectProperty"},
            {"EnterTransitions", 0x60, "ArrayProperty"},
            {"ExitTransitions", 0x70, "ArrayProperty"},
            {"BuildStatus", 0x80, "EnumProperty"},
            {"DefaultParameters", 0x88, "StructProperty"},
            {"ParameterDefinitions", 0x98, "ArrayProperty"},
            {"AllocationInfo", 0xA8, "StructProperty"},
        }};
    };

    struct CameraAssetAllocationInfo
    {
        static constexpr std::string_view Name = "CameraAssetAllocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableTableInfo = 0x0;
            static constexpr std::uintptr_t ContextDataTableInfo = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableTableInfo", 0x0, "StructProperty"},
            {"ContextDataTableInfo", 0x10, "StructProperty"},
        }};
    };

    struct CameraAssetInterface
    {
        static constexpr std::string_view Name = "CameraAssetInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parameters", 0x0, "ArrayProperty"},
        }};
    };

    struct CameraAssetInterfaceParameter
    {
        static constexpr std::string_view Name = "CameraAssetInterfaceParameter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InterfaceParameterName = 0x28;
            static constexpr std::uintptr_t SourceCameraRig = 0x38;
            static constexpr std::uintptr_t SourceParameterName = 0x58;
            static constexpr std::uintptr_t Guid = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InterfaceParameterName", 0x28, "StrProperty"},
            {"SourceCameraRig", 0x38, "SoftObjectProperty"},
            {"SourceParameterName", 0x58, "NameProperty"},
            {"Guid", 0x5C, "StructProperty"},
        }};
    };

    struct CameraAssetReference
    {
        static constexpr std::string_view Name = "CameraAssetReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraAsset = 0x0;
            static constexpr std::uintptr_t Parameters = 0x8;
            static constexpr std::uintptr_t ParameterOverrideGuids = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CameraAsset", 0x0, "ObjectProperty"},
            {"Parameters", 0x8, "StructProperty"},
            {"ParameterOverrideGuids", 0x28, "ArrayProperty"},
        }};
    };

    struct CameraComponentCameraNode
    {
        static constexpr std::string_view Name = "CameraComponentCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct CameraContextDataDefinition
    {
        static constexpr std::string_view Name = "CameraContextDataDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataID = 0x0;
            static constexpr std::uintptr_t DataType = 0x4;
            static constexpr std::uintptr_t DataContainerType = 0x8;
            static constexpr std::uintptr_t DataTypeObject = 0x10;
            static constexpr std::uintptr_t bAutoReset = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DataID", 0x0, "StructProperty"},
            {"DataType", 0x4, "EnumProperty"},
            {"DataContainerType", 0x8, "EnumProperty"},
            {"DataTypeObject", 0x10, "ObjectProperty"},
            {"bAutoReset", 0x18, "BoolProperty"},
        }};
    };

    struct CameraContextDataID
    {
        static constexpr std::string_view Name = "CameraContextDataID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct CameraContextDataTableAllocationInfo
    {
        static constexpr std::string_view Name = "CameraContextDataTableAllocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataDefinitions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataDefinitions", 0x0, "ArrayProperty"},
        }};
    };

    struct CameraDirector
    {
        static constexpr std::string_view Name = "CameraDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigProxyRedirectTable = 0x28;
            static constexpr std::uintptr_t bRunInEditor = 0x38;
            static constexpr std::uintptr_t CameraRigProxyTable = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CameraRigProxyRedirectTable", 0x28, "StructProperty"},
            {"bRunInEditor", 0x38, "BoolProperty"},
            {"CameraRigProxyTable", 0x40, "ObjectProperty"},
        }};
    };

    struct CameraDirectorStateTreeEvaluationData
    {
        static constexpr std::string_view Name = "CameraDirectorStateTreeEvaluationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveCameraRigs = 0x0;
            static constexpr std::uintptr_t ActiveCameraRigProxies = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveCameraRigs", 0x0, "ArrayProperty"},
            {"ActiveCameraRigProxies", 0x10, "ArrayProperty"},
        }};
    };

    struct CameraDirectorStateTreeSchema
    {
        static constexpr std::string_view Name = "CameraDirectorStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct CameraFramingZone
    {
        static constexpr std::string_view Name = "CameraFramingZone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Top = 0x8;
            static constexpr std::uintptr_t Right = 0x10;
            static constexpr std::uintptr_t Bottom = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Left", 0x0, "DoubleProperty"},
            {"Top", 0x8, "DoubleProperty"},
            {"Right", 0x10, "DoubleProperty"},
            {"Bottom", 0x18, "DoubleProperty"},
        }};
    };

    struct CameraFramingZoneParameter
    {
        static constexpr std::string_view Name = "CameraFramingZoneParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x20, "StructProperty"},
        }};
    };

    struct CameraNode
    {
        static constexpr std::string_view Name = "CameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct CameraNodeEvaluatorAllocationInfo
    {
        static constexpr std::string_view Name = "CameraNodeEvaluatorAllocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TotalSizeof = 0x0;
            static constexpr std::uintptr_t MaxAlignof = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TotalSizeof", 0x0, "Int16Property"},
            {"MaxAlignof", 0x2, "Int16Property"},
        }};
    };

    struct CameraObjectAllocationInfo
    {
        static constexpr std::string_view Name = "CameraObjectAllocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluatorInfo = 0x0;
            static constexpr std::uintptr_t VariableTableInfo = 0x8;
            static constexpr std::uintptr_t ContextDataTableInfo = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EvaluatorInfo", 0x0, "StructProperty"},
            {"VariableTableInfo", 0x8, "StructProperty"},
            {"ContextDataTableInfo", 0x18, "StructProperty"},
        }};
    };

    struct CameraObjectConnection
    {
        static constexpr std::string_view Name = "CameraObjectConnection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t SourcePropertyName = 0x8;
            static constexpr std::uintptr_t Target = 0x10;
            static constexpr std::uintptr_t TargetPropertyName = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Source", 0x0, "ObjectProperty"},
            {"SourcePropertyName", 0x8, "NameProperty"},
            {"Target", 0x10, "ObjectProperty"},
            {"TargetPropertyName", 0x18, "NameProperty"},
        }};
    };

    struct CameraObjectConnections
    {
        static constexpr std::string_view Name = "CameraObjectConnections";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Connections = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Connections", 0x0, "ArrayProperty"},
        }};
    };

    struct CameraObjectInterface
    {
        static constexpr std::string_view Name = "CameraObjectInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendableParameters = 0x0;
            static constexpr std::uintptr_t DataParameters = 0x10;
            static constexpr std::uintptr_t DisplayName = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BlendableParameters", 0x0, "ArrayProperty"},
            {"DataParameters", 0x10, "ArrayProperty"},
            {"DisplayName", 0x20, "StrProperty"},
        }};
    };

    struct CameraObjectInterfaceBlendableParameter
    {
        static constexpr std::string_view Name = "CameraObjectInterfaceBlendableParameter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraObjectInterfaceParameterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableType = 0x60;
            static constexpr std::uintptr_t BlendableStructType = 0x68;
            static constexpr std::uintptr_t bIsPreBlended = 0x70;
            static constexpr std::uintptr_t PrivateVariableID = 0x74;
            static constexpr std::uintptr_t PrivateVariable = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VariableType", 0x60, "EnumProperty"},
            {"BlendableStructType", 0x68, "ObjectProperty"},
            {"bIsPreBlended", 0x70, "BoolProperty"},
            {"PrivateVariableID", 0x74, "StructProperty"},
            {"PrivateVariable", 0x78, "ObjectProperty"},
        }};
    };

    struct CameraObjectInterfaceDataParameter
    {
        static constexpr std::string_view Name = "CameraObjectInterfaceDataParameter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraObjectInterfaceParameterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DataType = 0x60;
            static constexpr std::uintptr_t DataContainerType = 0x64;
            static constexpr std::uintptr_t DataTypeObject = 0x68;
            static constexpr std::uintptr_t PrivateDataID = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DataType", 0x60, "EnumProperty"},
            {"DataContainerType", 0x64, "EnumProperty"},
            {"DataTypeObject", 0x68, "ObjectProperty"},
            {"PrivateDataID", 0x70, "StructProperty"},
        }};
    };

    struct CameraObjectInterfaceParameterBase
    {
        static constexpr std::string_view Name = "CameraObjectInterfaceParameterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InterfaceParameterName = 0x28;
            static constexpr std::uintptr_t bIsVisible = 0x38;
            static constexpr std::uintptr_t Guid = 0x3C;
            static constexpr std::uintptr_t Target = 0x50;
            static constexpr std::uintptr_t TargetPropertyName = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InterfaceParameterName", 0x28, "StrProperty"},
            {"bIsVisible", 0x38, "BoolProperty"},
            {"Guid", 0x3C, "StructProperty"},
            {"Target", 0x50, "ObjectProperty"},
            {"TargetPropertyName", 0x58, "NameProperty"},
        }};
    };

    struct CameraObjectInterfaceParameterDefinition
    {
        static constexpr std::string_view Name = "CameraObjectInterfaceParameterDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t ParameterGuid = 0x4;
            static constexpr std::uintptr_t ParameterType = 0x14;
            static constexpr std::uintptr_t bIsVisible = 0x15;
            static constexpr std::uintptr_t VariableID = 0x18;
            static constexpr std::uintptr_t VariableType = 0x1C;
            static constexpr std::uintptr_t BlendableStructType = 0x20;
            static constexpr std::uintptr_t DataID = 0x28;
            static constexpr std::uintptr_t DataType = 0x2C;
            static constexpr std::uintptr_t DataContainerType = 0x30;
            static constexpr std::uintptr_t DataTypeObject = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ParameterName", 0x0, "NameProperty"},
            {"ParameterGuid", 0x4, "StructProperty"},
            {"ParameterType", 0x14, "EnumProperty"},
            {"bIsVisible", 0x15, "BoolProperty"},
            {"VariableID", 0x18, "StructProperty"},
            {"VariableType", 0x1C, "EnumProperty"},
            {"BlendableStructType", 0x20, "ObjectProperty"},
            {"DataID", 0x28, "StructProperty"},
            {"DataType", 0x2C, "EnumProperty"},
            {"DataContainerType", 0x30, "EnumProperty"},
            {"DataTypeObject", 0x38, "ObjectProperty"},
        }};
    };

    struct CameraObjectInterfaceParameterGetter
    {
        static constexpr std::string_view Name = "CameraObjectInterfaceParameterGetter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterGuid = 0x30;
            static constexpr std::uintptr_t GraphNodePos = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParameterGuid", 0x30, "StructProperty"},
            {"GraphNodePos", 0x40, "StructProperty"},
        }};
    };

    struct CameraObjectInterfaceParameterMetaData
    {
        static constexpr std::string_view Name = "CameraObjectInterfaceParameterMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterGuid = 0x0;
            static constexpr std::uintptr_t OverrideVariableID = 0x10;
            static constexpr std::uintptr_t OverrideDataID = 0x14;
            static constexpr std::uintptr_t bIsOverridden = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParameterGuid", 0x0, "StructProperty"},
            {"OverrideVariableID", 0x10, "StructProperty"},
            {"OverrideDataID", 0x14, "StructProperty"},
            {"bIsOverridden", 0x18, "BoolProperty"},
        }};
    };

    struct CameraParameterClamping
    {
        static constexpr std::string_view Name = "CameraParameterClamping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MinValue = 0x0;
            static constexpr std::uintptr_t MaxValue = 0x8;
            static constexpr std::uintptr_t bClampMin = 0x10;
            static constexpr std::uintptr_t bClampMax = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MinValue", 0x0, "DoubleProperty"},
            {"MaxValue", 0x8, "DoubleProperty"},
            {"bClampMin", 0x10, "BoolProperty"},
            {"bClampMax", 0x11, "BoolProperty"},
        }};
    };

    struct CameraParameterNormalization
    {
        static constexpr std::string_view Name = "CameraParameterNormalization";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxValue = 0x0;
            static constexpr std::uintptr_t bNormalize = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxValue", 0x0, "DoubleProperty"},
            {"bNormalize", 0x8, "BoolProperty"},
        }};
    };

    struct CameraPose
    {
        static constexpr std::string_view Name = "CameraPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x0;
            static constexpr std::uintptr_t Rotation = 0x18;
            static constexpr std::uintptr_t TargetDistance = 0x30;
            static constexpr std::uintptr_t FieldOfView = 0x38;
            static constexpr std::uintptr_t FocalLength = 0x3C;
            static constexpr std::uintptr_t FirstPersonFieldOfView = 0x40;
            static constexpr std::uintptr_t FirstPersonScale = 0x44;
            static constexpr std::uintptr_t OrthographicWidth = 0x48;
            static constexpr std::uintptr_t Aperture = 0x4C;
            static constexpr std::uintptr_t ShutterSpeed = 0x50;
            static constexpr std::uintptr_t FocusDistance = 0x54;
            static constexpr std::uintptr_t SensorWidth = 0x58;
            static constexpr std::uintptr_t SensorHeight = 0x5C;
            static constexpr std::uintptr_t SensorHorizontalOffset = 0x60;
            static constexpr std::uintptr_t SensorVerticalOffset = 0x64;
            static constexpr std::uintptr_t ISO = 0x68;
            static constexpr std::uintptr_t SqueezeFactor = 0x6C;
            static constexpr std::uintptr_t Overscan = 0x70;
            static constexpr std::uintptr_t DiaphragmBladeCount = 0x74;
            static constexpr std::uintptr_t NearClippingPlane = 0x78;
            static constexpr std::uintptr_t FarClippingPlane = 0x7C;
            static constexpr std::uintptr_t PhysicalCameraBlendWeight = 0x80;
            static constexpr std::uintptr_t EnableFirstPerson = 0x84;
            static constexpr std::uintptr_t EnablePhysicalCamera = 0x85;
            static constexpr std::uintptr_t ConstrainAspectRatio = 0x86;
            static constexpr std::uintptr_t OverrideAspectRatioAxisConstraint = 0x87;
            static constexpr std::uintptr_t AspectRatioAxisConstraint = 0x88;
            static constexpr std::uintptr_t ProjectionMode = 0x89;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"Location", 0x0, "StructProperty"},
            {"Rotation", 0x18, "StructProperty"},
            {"TargetDistance", 0x30, "DoubleProperty"},
            {"FieldOfView", 0x38, "FloatProperty"},
            {"FocalLength", 0x3C, "FloatProperty"},
            {"FirstPersonFieldOfView", 0x40, "FloatProperty"},
            {"FirstPersonScale", 0x44, "FloatProperty"},
            {"OrthographicWidth", 0x48, "FloatProperty"},
            {"Aperture", 0x4C, "FloatProperty"},
            {"ShutterSpeed", 0x50, "FloatProperty"},
            {"FocusDistance", 0x54, "FloatProperty"},
            {"SensorWidth", 0x58, "FloatProperty"},
            {"SensorHeight", 0x5C, "FloatProperty"},
            {"SensorHorizontalOffset", 0x60, "FloatProperty"},
            {"SensorVerticalOffset", 0x64, "FloatProperty"},
            {"ISO", 0x68, "FloatProperty"},
            {"SqueezeFactor", 0x6C, "FloatProperty"},
            {"Overscan", 0x70, "FloatProperty"},
            {"DiaphragmBladeCount", 0x74, "IntProperty"},
            {"NearClippingPlane", 0x78, "FloatProperty"},
            {"FarClippingPlane", 0x7C, "FloatProperty"},
            {"PhysicalCameraBlendWeight", 0x80, "FloatProperty"},
            {"EnableFirstPerson", 0x84, "BoolProperty"},
            {"EnablePhysicalCamera", 0x85, "BoolProperty"},
            {"ConstrainAspectRatio", 0x86, "BoolProperty"},
            {"OverrideAspectRatioAxisConstraint", 0x87, "BoolProperty"},
            {"AspectRatioAxisConstraint", 0x88, "ByteProperty"},
            {"ProjectionMode", 0x89, "ByteProperty"},
        }};
    };

    struct CameraRigAsset
    {
        static constexpr std::string_view Name = "CameraRigAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCameraObject";
        struct Offsets
        {
            static constexpr std::uintptr_t RootNode = 0xF0;
            static constexpr std::uintptr_t GameplayTags = 0xF8;
            static constexpr std::uintptr_t EnterTransitions = 0x118;
            static constexpr std::uintptr_t ExitTransitions = 0x128;
            static constexpr std::uintptr_t InitialOrientation = 0x138;
            static constexpr std::uintptr_t BuildStatus = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RootNode", 0xF0, "ObjectProperty"},
            {"GameplayTags", 0xF8, "StructProperty"},
            {"EnterTransitions", 0x118, "ArrayProperty"},
            {"ExitTransitions", 0x128, "ArrayProperty"},
            {"InitialOrientation", 0x138, "EnumProperty"},
            {"BuildStatus", 0x13C, "EnumProperty"},
        }};
    };

    struct CameraRigAssetReference
    {
        static constexpr std::string_view Name = "CameraRigAssetReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseCameraObjectReference";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRig = 0x38;
            static constexpr std::uintptr_t ParameterOverrideGuids = 0x40;
            static constexpr std::uintptr_t ParameterOverrides = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CameraRig", 0x38, "ObjectProperty"},
            {"ParameterOverrideGuids", 0x40, "ArrayProperty"},
            {"ParameterOverrides", 0x50, "StructProperty"},
        }};
    };

    struct CameraRigCameraNode
    {
        static constexpr std::string_view Name = "CameraRigCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigReference = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraRigReference", 0x48, "StructProperty"},
        }};
    };

    struct CameraRigInput1DSlot
    {
        static constexpr std::string_view Name = "CameraRigInput1DSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Input1DCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t clamp = 0x38;
            static constexpr std::uintptr_t Normalize = 0x50;
            static constexpr std::uintptr_t RevertAxis = 0x60;
            static constexpr std::uintptr_t Speed = 0x70;
            static constexpr std::uintptr_t BuiltInVariable = 0x88;
            static constexpr std::uintptr_t CustomVariable = 0x90;
            static constexpr std::uintptr_t bIsPreBlended = 0xA0;
            static constexpr std::uintptr_t InputSlotParameters = 0xA1;
            static constexpr std::uintptr_t SpeedVariableID = 0xA4;
            static constexpr std::uintptr_t VariableID = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"clamp", 0x38, "StructProperty"},
            {"Normalize", 0x50, "StructProperty"},
            {"RevertAxis", 0x60, "StructProperty"},
            {"Speed", 0x70, "StructProperty"},
            {"BuiltInVariable", 0x88, "EnumProperty"},
            {"CustomVariable", 0x90, "StructProperty"},
            {"bIsPreBlended", 0xA0, "BoolProperty"},
            {"InputSlotParameters", 0xA1, "StructProperty"},
            {"SpeedVariableID", 0xA4, "StructProperty"},
            {"VariableID", 0xA8, "StructProperty"},
        }};
    };

    struct CameraRigInput2DSlot
    {
        static constexpr std::string_view Name = "CameraRigInput2DSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Input2DCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ClampX = 0x38;
            static constexpr std::uintptr_t ClampY = 0x50;
            static constexpr std::uintptr_t NormalizeX = 0x68;
            static constexpr std::uintptr_t NormalizeY = 0x78;
            static constexpr std::uintptr_t RevertAxisX = 0x88;
            static constexpr std::uintptr_t RevertAxisY = 0x98;
            static constexpr std::uintptr_t Speed = 0xA8;
            static constexpr std::uintptr_t BuiltInVariable = 0xC8;
            static constexpr std::uintptr_t CustomVariable = 0xD0;
            static constexpr std::uintptr_t bIsPreBlended = 0xE0;
            static constexpr std::uintptr_t InputSlotParameters = 0xE1;
            static constexpr std::uintptr_t SpeedVariableID = 0xE4;
            static constexpr std::uintptr_t VariableID = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ClampX", 0x38, "StructProperty"},
            {"ClampY", 0x50, "StructProperty"},
            {"NormalizeX", 0x68, "StructProperty"},
            {"NormalizeY", 0x78, "StructProperty"},
            {"RevertAxisX", 0x88, "StructProperty"},
            {"RevertAxisY", 0x98, "StructProperty"},
            {"Speed", 0xA8, "StructProperty"},
            {"BuiltInVariable", 0xC8, "EnumProperty"},
            {"CustomVariable", 0xD0, "StructProperty"},
            {"bIsPreBlended", 0xE0, "BoolProperty"},
            {"InputSlotParameters", 0xE1, "StructProperty"},
            {"SpeedVariableID", 0xE4, "StructProperty"},
            {"VariableID", 0xE8, "StructProperty"},
        }};
    };

    struct CameraRigInputSlotParameters
    {
        static constexpr std::string_view Name = "CameraRigInputSlotParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsAccumulated = 0x0;
            static constexpr std::uintptr_t bIsPreBlended = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsAccumulated", 0x0, "BoolProperty"},
            {"bIsPreBlended", 0x1, "BoolProperty"},
        }};
    };

    struct CameraRigInstanceFunctions
    {
        static constexpr std::string_view Name = "CameraRigInstanceFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsValid",
        }};
    };

    struct CameraRigInstanceID
    {
        static constexpr std::string_view Name = "CameraRigInstanceID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Layer = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "UInt32Property"},
            {"Layer", 0x4, "EnumProperty"},
        }};
    };

    struct CameraRigParameterInterop
    {
        static constexpr std::string_view Name = "CameraRigParameterInterop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetCameraParameter",
            "SetCameraParameter",
        }};
    };

    struct CameraRigParameterInteropLibrary
    {
        static constexpr std::string_view Name = "CameraRigParameterInteropLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "MakeLiteralLinearColor",
            "MakeLiteralRotator",
            "MakeLiteralVector",
            "MakeLiteralVector2D",
            "MakeLiteralVector3f",
        }};
    };

    struct CameraRigParameterOverrideBase
    {
        static constexpr std::string_view Name = "CameraRigParameterOverrideBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InterfaceParameterGuid = 0x0;
            static constexpr std::uintptr_t PrivateVariableGuid = 0x10;
            static constexpr std::uintptr_t InterfaceParameterName = 0x20;
            static constexpr std::uintptr_t bInvalid = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InterfaceParameterGuid", 0x0, "StructProperty"},
            {"PrivateVariableGuid", 0x10, "StructProperty"},
            {"InterfaceParameterName", 0x20, "StrProperty"},
            {"bInvalid", 0x30, "BoolProperty"},
        }};
    };

    struct CameraRigParameterOverrides
    {
        static constexpr std::string_view Name = "CameraRigParameterOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BooleanOverrides = 0x0;
            static constexpr std::uintptr_t Integer32Overrides = 0x10;
            static constexpr std::uintptr_t FloatOverrides = 0x20;
            static constexpr std::uintptr_t DoubleOverrides = 0x30;
            static constexpr std::uintptr_t Vector2fOverrides = 0x40;
            static constexpr std::uintptr_t Vector2dOverrides = 0x50;
            static constexpr std::uintptr_t Vector3fOverrides = 0x60;
            static constexpr std::uintptr_t Vector3dOverrides = 0x70;
            static constexpr std::uintptr_t Vector4fOverrides = 0x80;
            static constexpr std::uintptr_t Vector4dOverrides = 0x90;
            static constexpr std::uintptr_t Rotator3fOverrides = 0xA0;
            static constexpr std::uintptr_t Rotator3dOverrides = 0xB0;
            static constexpr std::uintptr_t Transform3fOverrides = 0xC0;
            static constexpr std::uintptr_t Transform3dOverrides = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"BooleanOverrides", 0x0, "ArrayProperty"},
            {"Integer32Overrides", 0x10, "ArrayProperty"},
            {"FloatOverrides", 0x20, "ArrayProperty"},
            {"DoubleOverrides", 0x30, "ArrayProperty"},
            {"Vector2fOverrides", 0x40, "ArrayProperty"},
            {"Vector2dOverrides", 0x50, "ArrayProperty"},
            {"Vector3fOverrides", 0x60, "ArrayProperty"},
            {"Vector3dOverrides", 0x70, "ArrayProperty"},
            {"Vector4fOverrides", 0x80, "ArrayProperty"},
            {"Vector4dOverrides", 0x90, "ArrayProperty"},
            {"Rotator3fOverrides", 0xA0, "ArrayProperty"},
            {"Rotator3dOverrides", 0xB0, "ArrayProperty"},
            {"Transform3fOverrides", 0xC0, "ArrayProperty"},
            {"Transform3dOverrides", 0xD0, "ArrayProperty"},
        }};
    };

    struct CameraRigProxyAsset
    {
        static constexpr std::string_view Name = "CameraRigProxyAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Guid", 0x28, "StructProperty"},
        }};
    };

    struct CameraRigProxyRedirectTable
    {
        static constexpr std::string_view Name = "CameraRigProxyRedirectTable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x0, "ArrayProperty"},
        }};
    };

    struct CameraRigProxyRedirectTableEntry
    {
        static constexpr std::string_view Name = "CameraRigProxyRedirectTableEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigProxy = 0x0;
            static constexpr std::uintptr_t CameraRig = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraRigProxy", 0x0, "ObjectProperty"},
            {"CameraRig", 0x8, "ObjectProperty"},
        }};
    };

    struct CameraRigProxyTable
    {
        static constexpr std::string_view Name = "CameraRigProxyTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x28, "ArrayProperty"},
        }};
    };

    struct CameraRigTransition
    {
        static constexpr std::string_view Name = "CameraRigTransition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditions = 0x30;
            static constexpr std::uintptr_t Blend = 0x40;
            static constexpr std::uintptr_t InitialOrientation = 0x48;
            static constexpr std::uintptr_t bOverrideInitialOrientation = 0x4C;
            static constexpr std::uintptr_t bFreezePreviousCameraRigs = 0x4D;
            static constexpr std::uintptr_t bAllowCameraRigMerging = 0x4E;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Conditions", 0x30, "ArrayProperty"},
            {"Blend", 0x40, "ObjectProperty"},
            {"InitialOrientation", 0x48, "EnumProperty"},
            {"bOverrideInitialOrientation", 0x4C, "BoolProperty"},
            {"bFreezePreviousCameraRigs", 0x4D, "BoolProperty"},
            {"bAllowCameraRigMerging", 0x4E, "BoolProperty"},
        }};
    };

    struct CameraRigTransitionCondition
    {
        static constexpr std::string_view Name = "CameraRigTransitionCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CameraRotatorCurve
    {
        static constexpr std::string_view Name = "CameraRotatorCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Curves = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Curves", 0x0, "StructProperty"},
        }};
    };

    struct CameraShakeAsset
    {
        static constexpr std::string_view Name = "CameraShakeAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseCameraObject";
        struct Offsets
        {
            static constexpr std::uintptr_t RootNode = 0xE8;
            static constexpr std::uintptr_t BlendIn = 0xF0;
            static constexpr std::uintptr_t BlendOut = 0xF8;
            static constexpr std::uintptr_t bIsSingleInstance = 0x100;
            static constexpr std::uintptr_t BuildStatus = 0x101;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RootNode", 0xE8, "ObjectProperty"},
            {"BlendIn", 0xF0, "ObjectProperty"},
            {"BlendOut", 0xF8, "ObjectProperty"},
            {"bIsSingleInstance", 0x100, "BoolProperty"},
            {"BuildStatus", 0x101, "EnumProperty"},
        }};
    };

    struct CameraShakeAssetReference
    {
        static constexpr std::string_view Name = "CameraShakeAssetReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseCameraObjectReference";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraShake = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraShake", 0x38, "ObjectProperty"},
        }};
    };

    struct CameraShakeCameraNode
    {
        static constexpr std::string_view Name = "CameraShakeCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraShakeReference = 0x40;
            static constexpr std::uintptr_t EvaluationMode = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraShakeReference", 0x40, "StructProperty"},
            {"EvaluationMode", 0x80, "EnumProperty"},
        }};
    };

    struct CameraShakeInstanceFunctionLibrary
    {
        static constexpr std::string_view Name = "CameraShakeInstanceFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsValid",
        }};
    };

    struct CameraShakeInstanceID
    {
        static constexpr std::string_view Name = "CameraShakeInstanceID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct CameraShakeServiceCameraNode
    {
        static constexpr std::string_view Name = "CameraShakeServiceCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct CameraSingleCurve
    {
        static constexpr std::string_view Name = "CameraSingleCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Curve = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Curve", 0x0, "StructProperty"},
        }};
    };

    struct CameraValueInterpolator
    {
        static constexpr std::string_view Name = "CameraValueInterpolator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CameraVariableAsset
    {
        static constexpr std::string_view Name = "CameraVariableAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoReset = 0x28;
            static constexpr std::uintptr_t bIsPreBlended = 0x29;
            static constexpr std::uintptr_t bIsPrivate = 0x2A;
            static constexpr std::uintptr_t Guid = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bAutoReset", 0x28, "BoolProperty"},
            {"bIsPreBlended", 0x29, "BoolProperty"},
            {"bIsPrivate", 0x2A, "BoolProperty"},
            {"Guid", 0x2C, "StructProperty"},
        }};
    };

    struct CameraVariableCollection
    {
        static constexpr std::string_view Name = "CameraVariableCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Variables = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Variables", 0x28, "ArrayProperty"},
        }};
    };

    struct CameraVariableDefinition
    {
        static constexpr std::string_view Name = "CameraVariableDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t VariableType = 0x4;
            static constexpr std::uintptr_t BlendableStructType = 0x8;
            static constexpr std::uintptr_t bIsPrivate = 0x10;
            static constexpr std::uintptr_t bIsInput = 0x11;
            static constexpr std::uintptr_t bAutoReset = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"VariableType", 0x4, "EnumProperty"},
            {"BlendableStructType", 0x8, "ObjectProperty"},
            {"bIsPrivate", 0x10, "BoolProperty"},
            {"bIsInput", 0x11, "BoolProperty"},
            {"bAutoReset", 0x12, "BoolProperty"},
        }};
    };

    struct CameraVariableID
    {
        static constexpr std::string_view Name = "CameraVariableID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct CameraVariableSetterHandle
    {
        static constexpr std::string_view Name = "CameraVariableSetterHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t SerialNumber = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "UInt32Property"},
            {"SerialNumber", 0x4, "UInt32Property"},
        }};
    };

    struct CameraVariableTableAllocationInfo
    {
        static constexpr std::string_view Name = "CameraVariableTableAllocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableDefinitions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VariableDefinitions", 0x0, "ArrayProperty"},
        }};
    };

    struct CameraVectorCurve
    {
        static constexpr std::string_view Name = "CameraVectorCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Curves = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Curves", 0x0, "StructProperty"},
        }};
    };

    struct ClippingPlanesCameraNode
    {
        static constexpr std::string_view Name = "ClippingPlanesCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t NearPlane = 0x38;
            static constexpr std::uintptr_t FarPlane = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NearPlane", 0x38, "StructProperty"},
            {"FarPlane", 0x50, "StructProperty"},
        }};
    };

    struct CollisionPushCameraNode
    {
        static constexpr std::string_view Name = "CollisionPushCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SafePosition = 0x38;
            static constexpr std::uintptr_t CustomSafePosition = 0x40;
            static constexpr std::uintptr_t SafePositionOffset = 0x50;
            static constexpr std::uintptr_t SafePositionOffsetSpace = 0x78;
            static constexpr std::uintptr_t EnableCollision = 0x80;
            static constexpr std::uintptr_t CollisionSphereRadius = 0x90;
            static constexpr std::uintptr_t CollisionChannel = 0xA0;
            static constexpr std::uintptr_t PushInterpolator = 0xA8;
            static constexpr std::uintptr_t PullInterpolator = 0xB0;
            static constexpr std::uintptr_t bRunAsyncCollision = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SafePosition", 0x38, "EnumProperty"},
            {"CustomSafePosition", 0x40, "StructProperty"},
            {"SafePositionOffset", 0x50, "StructProperty"},
            {"SafePositionOffsetSpace", 0x78, "EnumProperty"},
            {"EnableCollision", 0x80, "StructProperty"},
            {"CollisionSphereRadius", 0x90, "StructProperty"},
            {"CollisionChannel", 0xA0, "ByteProperty"},
            {"PushInterpolator", 0xA8, "ObjectProperty"},
            {"PullInterpolator", 0xB0, "ObjectProperty"},
            {"bRunAsyncCollision", 0xB8, "BoolProperty"},
        }};
    };

    struct CombinedCameraRigsCameraNode
    {
        static constexpr std::string_view Name = "CombinedCameraRigsCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigReferences = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraRigReferences", 0x38, "ArrayProperty"},
        }};
    };

    struct CompositeShakeCameraNode
    {
        static constexpr std::string_view Name = "CompositeShakeCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShakeCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Shakes = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Shakes", 0x38, "ArrayProperty"},
        }};
    };

    struct ControllerGameplayCameraEvaluationComponent
    {
        static constexpr std::string_view Name = "ControllerGameplayCameraEvaluationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraSystemHost = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraSystemHost", 0xE0, "InterfaceProperty"},
        }};
    };

    struct CriticalDamperValueInterpolator
    {
        static constexpr std::string_view Name = "CriticalDamperValueInterpolator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraValueInterpolator";
        struct Offsets
        {
            static constexpr std::uintptr_t DampingFactor = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DampingFactor", 0x28, "FloatProperty"},
        }};
    };

    struct CustomCameraNodeBlendableParameter
    {
        static constexpr std::string_view Name = "CustomCameraNodeBlendableParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t VariableType = 0x4;
            static constexpr std::uintptr_t BlendableStructType = 0x8;
            static constexpr std::uintptr_t OverrideVariableID = 0x10;
            static constexpr std::uintptr_t OverrideVariable = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ParameterName", 0x0, "NameProperty"},
            {"VariableType", 0x4, "EnumProperty"},
            {"BlendableStructType", 0x8, "ObjectProperty"},
            {"OverrideVariableID", 0x10, "StructProperty"},
            {"OverrideVariable", 0x18, "ObjectProperty"},
        }};
    };

    struct CustomCameraNodeDataParameter
    {
        static constexpr std::string_view Name = "CustomCameraNodeDataParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x0;
            static constexpr std::uintptr_t DataType = 0x4;
            static constexpr std::uintptr_t DataContainerType = 0x8;
            static constexpr std::uintptr_t DataTypeObject = 0x10;
            static constexpr std::uintptr_t OverrideDataID = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ParameterName", 0x0, "NameProperty"},
            {"DataType", 0x4, "EnumProperty"},
            {"DataContainerType", 0x8, "EnumProperty"},
            {"DataTypeObject", 0x10, "ObjectProperty"},
            {"OverrideDataID", 0x18, "StructProperty"},
        }};
    };

    struct CustomCameraNodeParameterProvider
    {
        static constexpr std::string_view Name = "CustomCameraNodeParameterProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CustomCameraNodeParameters
    {
        static constexpr std::string_view Name = "CustomCameraNodeParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendableParameters = 0x0;
            static constexpr std::uintptr_t DataParameters = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendableParameters", 0x0, "ArrayProperty"},
            {"DataParameters", 0x10, "ArrayProperty"},
        }};
    };

    struct DampenPositionCameraNode
    {
        static constexpr std::string_view Name = "DampenPositionCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ForwardDampingFactor = 0x38;
            static constexpr std::uintptr_t LateralDampingFactor = 0x48;
            static constexpr std::uintptr_t VerticalDampingFactor = 0x58;
            static constexpr std::uintptr_t DampenSpace = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ForwardDampingFactor", 0x38, "StructProperty"},
            {"LateralDampingFactor", 0x48, "StructProperty"},
            {"VerticalDampingFactor", 0x58, "StructProperty"},
            {"DampenSpace", 0x68, "EnumProperty"},
        }};
    };

    struct DampenRotationCameraNode
    {
        static constexpr std::string_view Name = "DampenRotationCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t YawDampingFactor = 0x38;
            static constexpr std::uintptr_t PitchDampingFactor = 0x48;
            static constexpr std::uintptr_t RollDampingFactor = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"YawDampingFactor", 0x38, "StructProperty"},
            {"PitchDampingFactor", 0x48, "StructProperty"},
            {"RollDampingFactor", 0x58, "StructProperty"},
        }};
    };

    struct DefaultRootCameraNode
    {
        static constexpr std::string_view Name = "DefaultRootCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RootCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseLayer = 0x38;
            static constexpr std::uintptr_t MainLayer = 0x40;
            static constexpr std::uintptr_t GlobalLayer = 0x48;
            static constexpr std::uintptr_t VisualLayer = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BaseLayer", 0x38, "ObjectProperty"},
            {"MainLayer", 0x40, "ObjectProperty"},
            {"GlobalLayer", 0x48, "ObjectProperty"},
            {"VisualLayer", 0x50, "ObjectProperty"},
        }};
    };

    struct DollyFramingCameraNode
    {
        static constexpr std::string_view Name = "DollyFramingCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseFramingCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CanMoveLaterally = 0x180;
            static constexpr std::uintptr_t CanMoveVertically = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CanMoveLaterally", 0x180, "StructProperty"},
            {"CanMoveVertically", 0x190, "StructProperty"},
        }};
    };

    struct DoubleCameraParameter
    {
        static constexpr std::string_view Name = "DoubleCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x8;
            static constexpr std::uintptr_t Variable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "DoubleProperty"},
            {"VariableID", 0x8, "StructProperty"},
            {"Variable", 0x10, "ObjectProperty"},
        }};
    };

    struct DoubleCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "DoubleCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct DoubleCameraVariable
    {
        static constexpr std::string_view Name = "DoubleCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "DoubleProperty"},
        }};
    };

    struct DoubleCameraVariableReference
    {
        static constexpr std::string_view Name = "DoubleCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct DoubleIIRValueInterpolator
    {
        static constexpr std::string_view Name = "DoubleIIRValueInterpolator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraValueInterpolator";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimarySpeed = 0x28;
            static constexpr std::uintptr_t IntermediateSpeed = 0x2C;
            static constexpr std::uintptr_t bUseFixedStep = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PrimarySpeed", 0x28, "FloatProperty"},
            {"IntermediateSpeed", 0x2C, "FloatProperty"},
            {"bUseFixedStep", 0x30, "BoolProperty"},
        }};
    };

    struct DrivenControlRotationCameraNode
    {
        static constexpr std::string_view Name = "DrivenControlRotationCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Input2DCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct EasingBlendCameraNode
    {
        static constexpr std::string_view Name = "EasingBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleFixedTimeBlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendType = 0x48;
            static constexpr std::uintptr_t BlendTypeDataID = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlendType", 0x48, "EnumProperty"},
            {"BlendTypeDataID", 0x4C, "StructProperty"},
        }};
    };

    struct EnvelopeShakeCameraNode
    {
        static constexpr std::string_view Name = "EnvelopeShakeCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShakeCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EaseInTime = 0x38;
            static constexpr std::uintptr_t EaseOutTime = 0x48;
            static constexpr std::uintptr_t TotalTime = 0x58;
            static constexpr std::uintptr_t Shake = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EaseInTime", 0x38, "StructProperty"},
            {"EaseOutTime", 0x48, "StructProperty"},
            {"TotalTime", 0x58, "StructProperty"},
            {"Shake", 0x68, "ObjectProperty"},
        }};
    };

    struct FieldOfViewCameraNode
    {
        static constexpr std::string_view Name = "FieldOfViewCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldOfView = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FieldOfView", 0x38, "StructProperty"},
        }};
    };

    struct FilmbackCameraNode
    {
        static constexpr std::string_view Name = "FilmbackCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SensorWidth = 0x38;
            static constexpr std::uintptr_t SensorHeight = 0x48;
            static constexpr std::uintptr_t SensorHorizontalOffset = 0x58;
            static constexpr std::uintptr_t SensorVerticalOffset = 0x68;
            static constexpr std::uintptr_t Overscan = 0x78;
            static constexpr std::uintptr_t ConstrainAspectRatio = 0x88;
            static constexpr std::uintptr_t OverrideAspectRatioAxisConstraint = 0x98;
            static constexpr std::uintptr_t AspectRatioAxisConstraint = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SensorWidth", 0x38, "StructProperty"},
            {"SensorHeight", 0x48, "StructProperty"},
            {"SensorHorizontalOffset", 0x58, "StructProperty"},
            {"SensorVerticalOffset", 0x68, "StructProperty"},
            {"Overscan", 0x78, "StructProperty"},
            {"ConstrainAspectRatio", 0x88, "StructProperty"},
            {"OverrideAspectRatioAxisConstraint", 0x98, "StructProperty"},
            {"AspectRatioAxisConstraint", 0xA8, "ByteProperty"},
        }};
    };

    struct FirstPersonCameraNode
    {
        static constexpr std::string_view Name = "FirstPersonCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableFirstPerson = 0x38;
            static constexpr std::uintptr_t FirstPersonFieldOfView = 0x48;
            static constexpr std::uintptr_t FirstPersonScale = 0x58;
            static constexpr std::uintptr_t bEnableFirstPersonFieldOfView = 0x68;
            static constexpr std::uintptr_t bEnableFirstPersonScale = 0x69;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EnableFirstPerson", 0x38, "StructProperty"},
            {"FirstPersonFieldOfView", 0x48, "StructProperty"},
            {"FirstPersonScale", 0x58, "StructProperty"},
            {"bEnableFirstPersonFieldOfView", 0x68, "BoolProperty"},
            {"bEnableFirstPersonScale", 0x69, "BoolProperty"},
        }};
    };

    struct FixedTestCameraDirector
    {
        static constexpr std::string_view Name = "FixedTestCameraDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigs = 0x48;
            static constexpr std::uintptr_t CameraRigNames = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraRigs", 0x48, "ArrayProperty"},
            {"CameraRigNames", 0x58, "ArrayProperty"},
        }};
    };

    struct FloatCameraParameter
    {
        static constexpr std::string_view Name = "FloatCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x4;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "FloatProperty"},
            {"VariableID", 0x4, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct FloatCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "FloatCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct FloatCameraVariable
    {
        static constexpr std::string_view Name = "FloatCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "FloatProperty"},
        }};
    };

    struct FloatCameraVariableReference
    {
        static constexpr std::string_view Name = "FloatCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct GameplayCameraActor
    {
        static constexpr std::string_view Name = "GameplayCameraActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCameraActorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraComponent = 0x278;
            static constexpr std::uintptr_t OutputCameraComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraComponent", 0x278, "ObjectProperty"},
            {"OutputCameraComponent", 0x280, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetCameraComponent",
            "GetOutputCameraComponent",
        }};
    };

    struct GameplayCameraActorBase
    {
        static constexpr std::string_view Name = "GameplayCameraActorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct GameplayCameraComponent
    {
        static constexpr std::string_view Name = "GameplayCameraComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCameraComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraReference = 0x290;
            static constexpr std::uintptr_t CachedParameterOverrides = 0x2C8;
            static constexpr std::uintptr_t Camera = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CameraReference", 0x290, "StructProperty"},
            {"CachedParameterOverrides", 0x2C8, "StructProperty"},
            {"Camera", 0x2D8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "NotifyChangeCameraReference",
        }};
    };

    struct GameplayCameraComponentBase
    {
        static constexpr std::string_view Name = "GameplayCameraComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultPlayer = 0x258;
            static constexpr std::uintptr_t bRunStandaloneCameraSystem = 0x259;
            static constexpr std::uintptr_t bSetControlRotationWhenViewTarget = 0x25A;
            static constexpr std::uintptr_t bPlaybackMode = 0x25B;
            static constexpr std::uintptr_t OutputCameraComponent = 0x260;
            static constexpr std::uintptr_t bIsOwnedOutputCameraComponent = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DefaultPlayer", 0x258, "ByteProperty"},
            {"bRunStandaloneCameraSystem", 0x259, "BoolProperty"},
            {"bSetControlRotationWhenViewTarget", 0x25A, "BoolProperty"},
            {"bPlaybackMode", 0x25B, "BoolProperty"},
            {"OutputCameraComponent", 0x260, "ObjectProperty"},
            {"bIsOwnedOutputCameraComponent", 0x268, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 21> FunctionNames{{
            "ActivateCameraForPlayerController",
            "ActivateCameraForPlayerIndex",
            "ActivatePersistentBaseCameraRig",
            "ActivatePersistentGlobalCameraRig",
            "ActivatePersistentVisualCameraRig",
            "DeactivateCamera",
            "DeactivateCameraRig",
            "GetConditionalResult",
            "GetEvaluatedCameraRotation",
            "GetInitialResult",
            "GetOutputCameraComponent",
            "IsActionRunning",
            "IsCameraShakeAssetPlaying",
            "StartAction",
            "StartCameraShakeAsset",
            "StartGlobalCameraModifierRig",
            "StartVisualCameraModifierRig",
            "StopAction",
            "StopAllActionsOfClass",
            "StopCameraModifierRig",
            "StopCameraShakeAsset",
        }};
    };

    struct GameplayCameraParameterSetterComponent
    {
        static constexpr std::string_view Name = "GameplayCameraParameterSetterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigReference = 0xC0;
            static constexpr std::uintptr_t BlendInTime = 0x1F0;
            static constexpr std::uintptr_t BlendOutTime = 0x1F4;
            static constexpr std::uintptr_t BlendType = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CameraRigReference", 0xC0, "StructProperty"},
            {"BlendInTime", 0x1F0, "FloatProperty"},
            {"BlendOutTime", 0x1F4, "FloatProperty"},
            {"BlendType", 0x1F8, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "OnActorBeginOverlap",
            "OnActorEndOverlap",
            "StartParameterSetters",
            "StopParameterSetters",
        }};
    };

    struct GameplayCameraRigActor
    {
        static constexpr std::string_view Name = "GameplayCameraRigActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCameraActorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigComponent = 0x278;
            static constexpr std::uintptr_t OutputCameraComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraRigComponent", 0x278, "ObjectProperty"},
            {"OutputCameraComponent", 0x280, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetCameraRigComponent",
            "GetOutputCameraComponent",
        }};
    };

    struct GameplayCameraRigComponent
    {
        static constexpr std::string_view Name = "GameplayCameraRigComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCameraComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigReference = 0x290;
            static constexpr std::uintptr_t GeneratedCameraAsset = 0x3C0;
            static constexpr std::uintptr_t CachedParameterOverrides = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CameraRigReference", 0x290, "StructProperty"},
            {"GeneratedCameraAsset", 0x3C0, "ObjectProperty"},
            {"CachedParameterOverrides", 0x3C8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "NotifyChangeCameraRigReference",
        }};
    };

    struct GameplayCameraSystemActor
    {
        static constexpr std::string_view Name = "GameplayCameraSystemActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraSystemComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraSystemComponent", 0x278, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetCameraSystemComponent",
        }};
    };

    struct GameplayCameraSystemComponent
    {
        static constexpr std::string_view Name = "GameplayCameraSystemComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoActivateForPlayer = 0x258;
            static constexpr std::uintptr_t bSetPlayerControllerRotation = 0x259;
            static constexpr std::uintptr_t WeakPlayerController = 0x25C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AutoActivateForPlayer", 0x258, "ByteProperty"},
            {"bSetPlayerControllerRotation", 0x259, "BoolProperty"},
            {"WeakPlayerController", 0x25C, "WeakObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "ActivateCameraSystemForPlayerController",
            "ActivateCameraSystemForPlayerIndex",
            "DeactivateCameraSystem",
            "IsCameraSystemActiveForPlayController",
            "StartGlobalCameraModifierRig",
            "StartVisualCameraModifierRig",
            "StopCameraModifierRig",
        }};
    };

    struct GameplayCameraSystemHost
    {
        static constexpr std::string_view Name = "GameplayCameraSystemHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayCamerasActivateCameraRigTask
    {
        static constexpr std::string_view Name = "GameplayCamerasActivateCameraRigTask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayCamerasStateTreeTask";
        struct Offsets
        {
            static constexpr std::uintptr_t bRunOnce = 0x2E;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRunOnce", 0x2E, "BoolProperty"},
        }};
    };

    struct GameplayCamerasActivateCameraRigTaskInstanceData
    {
        static constexpr std::string_view Name = "GameplayCamerasActivateCameraRigTaskInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRig = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraRig", 0x0, "ObjectProperty"},
        }};
    };

    struct GameplayCamerasActivateCameraRigViaProxyTask
    {
        static constexpr std::string_view Name = "GameplayCamerasActivateCameraRigViaProxyTask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayCamerasStateTreeTask";
        struct Offsets
        {
            static constexpr std::uintptr_t bRunOnce = 0x2E;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRunOnce", 0x2E, "BoolProperty"},
        }};
    };

    struct GameplayCamerasActivateCameraRigViaProxyTaskInstanceData
    {
        static constexpr std::string_view Name = "GameplayCamerasActivateCameraRigViaProxyTaskInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigProxy = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraRigProxy", 0x0, "ObjectProperty"},
        }};
    };

    struct GameplayCamerasPlayerCameraManager
    {
        static constexpr std::string_view Name = "GameplayCamerasPlayerCameraManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerCameraManager";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewRotationMode = 0x2908;
            static constexpr std::uintptr_t bOverrideViewRotationMode = 0x290C;
            static constexpr std::uintptr_t OriginalCameraManager = 0x2910;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ViewRotationMode", 0x2908, "EnumProperty"},
            {"bOverrideViewRotationMode", 0x290C, "BoolProperty"},
            {"OriginalCameraManager", 0x2910, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "ActivateGameplayCamera",
            "ActivatePersistentBaseCameraRig",
            "ActivatePersistentGlobalCameraRig",
            "ActivatePersistentVisualCameraRig",
            "DeactivateCameraRig",
            "DeactivateGameplayCamera",
            "IsCameraShakeAssetPlaying",
            "ReleasePlayerController",
            "StartCameraShakeAsset",
            "StartGlobalCameraModifierRig",
            "StartVisualCameraModifierRig",
            "StealPlayerController",
            "StopCameraModifierRig",
            "StopCameraShakeAsset",
        }};
    };

    struct GameplayCamerasSettings
    {
        static constexpr std::string_view Name = "GameplayCamerasSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoBuildInPIE = 0x30;
            static constexpr std::uintptr_t DefaultViewRotationMode = 0x34;
            static constexpr std::uintptr_t CombinedCameraRigNumThreshold = 0x38;
            static constexpr std::uintptr_t MaxUsageSearchDistance = 0x3C;
            static constexpr std::uintptr_t DefaultIKAimingAngleTolerance = 0x40;
            static constexpr std::uintptr_t DefaultIKAimingDistanceTolerance = 0x48;
            static constexpr std::uintptr_t DefaultIKAimingMaxIterations = 0x50;
            static constexpr std::uintptr_t DefaultIKAimingMinDistance = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bAutoBuildInPIE", 0x30, "BoolProperty"},
            {"DefaultViewRotationMode", 0x34, "EnumProperty"},
            {"CombinedCameraRigNumThreshold", 0x38, "IntProperty"},
            {"MaxUsageSearchDistance", 0x3C, "IntProperty"},
            {"DefaultIKAimingAngleTolerance", 0x40, "DoubleProperty"},
            {"DefaultIKAimingDistanceTolerance", 0x48, "DoubleProperty"},
            {"DefaultIKAimingMaxIterations", 0x50, "ByteProperty"},
            {"DefaultIKAimingMinDistance", 0x58, "DoubleProperty"},
        }};
    };

    struct GameplayCamerasStateTreeCondition
    {
        static constexpr std::string_view Name = "GameplayCamerasStateTreeCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeConditionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Operand = 0x20;
            static constexpr std::uintptr_t DeltaIndent = 0x21;
            static constexpr std::uintptr_t EvaluationMode = 0x22;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operand", 0x20, "EnumProperty"},
            {"DeltaIndent", 0x21, "Int8Property"},
            {"EvaluationMode", 0x22, "EnumProperty"},
        }};
    };

    struct GameplayCamerasStateTreeTask
    {
        static constexpr std::string_view Name = "GameplayCamerasStateTreeTask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "StateTreeTaskBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bTaskEnabled = 0x20;
            static constexpr std::uintptr_t bHasTaskCompletionDelegateDispatcher = 0x21;
            static constexpr std::uintptr_t TransitionHandlingPriority = 0x22;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bTaskEnabled", 0x20, "BoolProperty"},
            {"bHasTaskCompletionDelegateDispatcher", 0x21, "BoolProperty"},
            {"TransitionHandlingPriority", 0x22, "EnumProperty"},
        }};
    };

    struct GameplayControlRotationComponent
    {
        static constexpr std::string_view Name = "GameplayControlRotationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisActions = 0xC0;
            static constexpr std::uintptr_t AxisActionAngularSpeedThreshold = 0xD0;
            static constexpr std::uintptr_t AxisActionMagnitudeThreshold = 0xD4;
            static constexpr std::uintptr_t AutoActivateForPlayer = 0xD8;
            static constexpr std::uintptr_t PlayerController = 0xE0;
            static constexpr std::uintptr_t CameraSystemHost = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AxisActions", 0xC0, "ArrayProperty"},
            {"AxisActionAngularSpeedThreshold", 0xD0, "FloatProperty"},
            {"AxisActionMagnitudeThreshold", 0xD4, "FloatProperty"},
            {"AutoActivateForPlayer", 0xD8, "ByteProperty"},
            {"PlayerController", 0xE0, "ObjectProperty"},
            {"CameraSystemHost", 0xE8, "InterfaceProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ActivateControlRotationManagementForPlayerController",
            "ActivateControlRotationManagementForPlayerIndex",
            "DeactivateControlRotationManagement",
        }};
    };

    struct GameplayTagTransitionCondition
    {
        static constexpr std::string_view Name = "GameplayTagTransitionCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraRigTransitionCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousGameplayTagQuery = 0x30;
            static constexpr std::uintptr_t NextGameplayTagQuery = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviousGameplayTagQuery", 0x30, "StructProperty"},
            {"NextGameplayTagQuery", 0x78, "StructProperty"},
        }};
    };

    struct HasCameraBuildStatus
    {
        static constexpr std::string_view Name = "HasCameraBuildStatus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IIRValueInterpolator
    {
        static constexpr std::string_view Name = "IIRValueInterpolator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraValueInterpolator";
        struct Offsets
        {
            static constexpr std::uintptr_t Speed = 0x28;
            static constexpr std::uintptr_t bUseFixedStep = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Speed", 0x28, "FloatProperty"},
            {"bUseFixedStep", 0x2C, "BoolProperty"},
        }};
    };

    struct Input1DCameraNode
    {
        static constexpr std::string_view Name = "Input1DCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct Input2DCameraNode
    {
        static constexpr std::string_view Name = "Input2DCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct InputAccumulator2DCameraNode
    {
        static constexpr std::string_view Name = "InputAccumulator2DCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraRigInput2DSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSlot = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputSlot", 0xF0, "ObjectProperty"},
        }};
    };

    struct InputAxisBinding2DCameraNode
    {
        static constexpr std::string_view Name = "InputAxisBinding2DCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraRigInput2DSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisActions = 0xF0;
            static constexpr std::uintptr_t Multiplier = 0x100;
            static constexpr std::uintptr_t bIsAccumulated = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AxisActions", 0xF0, "ArrayProperty"},
            {"Multiplier", 0x100, "StructProperty"},
            {"bIsAccumulated", 0x120, "BoolProperty"},
        }};
    };

    struct InstancedOverridablePropertyBag
    {
        static constexpr std::string_view Name = "InstancedOverridablePropertyBag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InstancedPropertyBag";
        struct Offsets
        {
            static constexpr std::uintptr_t OverridenPropertyIDs = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverridenPropertyIDs", 0x10, "ArrayProperty"},
        }};
    };

    struct Integer32CameraParameter
    {
        static constexpr std::string_view Name = "Integer32CameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x4;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "IntProperty"},
            {"VariableID", 0x4, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct Integer32CameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Integer32CameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct Integer32CameraVariable
    {
        static constexpr std::string_view Name = "Integer32CameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "IntProperty"},
        }};
    };

    struct Integer32CameraVariableReference
    {
        static constexpr std::string_view Name = "Integer32CameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct IsCameraRigTransitionCondition
    {
        static constexpr std::string_view Name = "IsCameraRigTransitionCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraRigTransitionCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousCameraRig = 0x30;
            static constexpr std::uintptr_t NextCameraRig = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviousCameraRig", 0x30, "ObjectProperty"},
            {"NextCameraRig", 0x38, "ObjectProperty"},
        }};
    };

    struct LensParametersCameraNode
    {
        static constexpr std::string_view Name = "LensParametersCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalLength = 0x38;
            static constexpr std::uintptr_t Aperture = 0x48;
            static constexpr std::uintptr_t FocusDistance = 0x58;
            static constexpr std::uintptr_t EnablePhysicalCamera = 0x68;
            static constexpr std::uintptr_t bEnableFocalLength = 0x78;
            static constexpr std::uintptr_t bEnableAperture = 0x79;
            static constexpr std::uintptr_t bEnableFocusDistance = 0x7A;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FocalLength", 0x38, "StructProperty"},
            {"Aperture", 0x48, "StructProperty"},
            {"FocusDistance", 0x58, "StructProperty"},
            {"EnablePhysicalCamera", 0x68, "StructProperty"},
            {"bEnableFocalLength", 0x78, "BoolProperty"},
            {"bEnableAperture", 0x79, "BoolProperty"},
            {"bEnableFocusDistance", 0x7A, "BoolProperty"},
        }};
    };

    struct LinearBlendCameraNode
    {
        static constexpr std::string_view Name = "LinearBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleFixedTimeBlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendTime = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlendTime", 0x38, "StructProperty"},
        }};
    };

    struct LocationRotationBlendCameraNode
    {
        static constexpr std::string_view Name = "LocationRotationBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationBlend = 0x38;
            static constexpr std::uintptr_t RotationBlend = 0x40;
            static constexpr std::uintptr_t OtherBlend = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LocationBlend", 0x38, "ObjectProperty"},
            {"RotationBlend", 0x40, "ObjectProperty"},
            {"OtherBlend", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneCameraFramingZonePropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneCameraFramingZonePropertySystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstantiatorSystem = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstantiatorSystem", 0x48, "ObjectProperty"},
        }};
    };

    struct MovieSceneCameraFramingZoneSection
    {
        static constexpr std::string_view Name = "MovieSceneCameraFramingZoneSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftMarginCurve = 0x148;
            static constexpr std::uintptr_t TopMarginCurve = 0x220;
            static constexpr std::uintptr_t RightMarginCurve = 0x2F8;
            static constexpr std::uintptr_t BottomMarginCurve = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LeftMarginCurve", 0x148, "StructProperty"},
            {"TopMarginCurve", 0x220, "StructProperty"},
            {"RightMarginCurve", 0x2F8, "StructProperty"},
            {"BottomMarginCurve", 0x3D0, "StructProperty"},
        }};
    };

    struct MovieSceneCameraFramingZoneTrack
    {
        static constexpr std::string_view Name = "MovieSceneCameraFramingZoneTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionToKey = 0xF8;
            static constexpr std::uintptr_t PropertyBinding = 0x100;
            static constexpr std::uintptr_t Sections = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SectionToKey", 0xF8, "ObjectProperty"},
            {"PropertyBinding", 0x100, "StructProperty"},
            {"Sections", 0x110, "ArrayProperty"},
        }};
    };

    struct ObjectTreeGraphComment
    {
        static constexpr std::string_view Name = "ObjectTreeGraphComment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectTreeGraphObject
    {
        static constexpr std::string_view Name = "ObjectTreeGraphObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ObjectTreeGraphRootObject
    {
        static constexpr std::string_view Name = "ObjectTreeGraphRootObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OcclusionMaterialCameraNode
    {
        static constexpr std::string_view Name = "OcclusionMaterialCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t OcclusionTransparencyMaterial = 0x38;
            static constexpr std::uintptr_t OcclusionSphereRadius = 0x40;
            static constexpr std::uintptr_t OcclusionChannel = 0x50;
            static constexpr std::uintptr_t OcclusionTargetPosition = 0x51;
            static constexpr std::uintptr_t OcclusionTargetOffsetSpace = 0x52;
            static constexpr std::uintptr_t OcclusionTargetOffset = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OcclusionTransparencyMaterial", 0x38, "ObjectProperty"},
            {"OcclusionSphereRadius", 0x40, "StructProperty"},
            {"OcclusionChannel", 0x50, "ByteProperty"},
            {"OcclusionTargetPosition", 0x51, "EnumProperty"},
            {"OcclusionTargetOffsetSpace", 0x52, "EnumProperty"},
            {"OcclusionTargetOffset", 0x58, "StructProperty"},
        }};
    };

    struct OffsetCameraNode
    {
        static constexpr std::string_view Name = "OffsetCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TranslationOffset = 0x38;
            static constexpr std::uintptr_t RotationOffset = 0x60;
            static constexpr std::uintptr_t OffsetSpace = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TranslationOffset", 0x38, "StructProperty"},
            {"RotationOffset", 0x60, "StructProperty"},
            {"OffsetSpace", 0x88, "EnumProperty"},
        }};
    };

    struct OrbitBlendCameraNode
    {
        static constexpr std::string_view Name = "OrbitBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DrivingBlend = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DrivingBlend", 0x38, "ObjectProperty"},
        }};
    };

    struct OrthographicCameraNode
    {
        static constexpr std::string_view Name = "OrthographicCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableOrthographicMode = 0x38;
            static constexpr std::uintptr_t OrthographicWidth = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnableOrthographicMode", 0x38, "StructProperty"},
            {"OrthographicWidth", 0x48, "StructProperty"},
        }};
    };

    struct PanningFramingCameraNode
    {
        static constexpr std::string_view Name = "PanningFramingCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseFramingCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CanPanLaterally = 0x180;
            static constexpr std::uintptr_t CanPanVertically = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CanPanLaterally", 0x180, "StructProperty"},
            {"CanPanVertically", 0x190, "StructProperty"},
        }};
    };

    struct PerlinNoiseData
    {
        static constexpr std::string_view Name = "PerlinNoiseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Amplitude = 0x0;
            static constexpr std::uintptr_t Frequency = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Amplitude", 0x0, "FloatProperty"},
            {"Frequency", 0x4, "FloatProperty"},
        }};
    };

    struct PerlinNoiseLocationShakeCameraNode
    {
        static constexpr std::string_view Name = "PerlinNoiseLocationShakeCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShakeCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AmplitudeMultiplier = 0x38;
            static constexpr std::uintptr_t FrequencyMultiplier = 0x48;
            static constexpr std::uintptr_t Octaves = 0x58;
            static constexpr std::uintptr_t X = 0x68;
            static constexpr std::uintptr_t Y = 0x70;
            static constexpr std::uintptr_t Z = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AmplitudeMultiplier", 0x38, "StructProperty"},
            {"FrequencyMultiplier", 0x48, "StructProperty"},
            {"Octaves", 0x58, "StructProperty"},
            {"X", 0x68, "StructProperty"},
            {"Y", 0x70, "StructProperty"},
            {"Z", 0x78, "StructProperty"},
        }};
    };

    struct PerlinNoiseRotationShakeCameraNode
    {
        static constexpr std::string_view Name = "PerlinNoiseRotationShakeCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ShakeCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AmplitudeMultiplier = 0x38;
            static constexpr std::uintptr_t FrequencyMultiplier = 0x48;
            static constexpr std::uintptr_t Octaves = 0x58;
            static constexpr std::uintptr_t Yaw = 0x68;
            static constexpr std::uintptr_t Pitch = 0x70;
            static constexpr std::uintptr_t Roll = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AmplitudeMultiplier", 0x38, "StructProperty"},
            {"FrequencyMultiplier", 0x48, "StructProperty"},
            {"Octaves", 0x58, "StructProperty"},
            {"Yaw", 0x68, "StructProperty"},
            {"Pitch", 0x70, "StructProperty"},
            {"Roll", 0x78, "StructProperty"},
        }};
    };

    struct PopBlendCameraNode
    {
        static constexpr std::string_view Name = "PopBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct PopValueInterpolator
    {
        static constexpr std::string_view Name = "PopValueInterpolator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraValueInterpolator";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PostProcessCameraNode
    {
        static constexpr std::string_view Name = "PostProcessCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t PostProcessSettings = 0x40;
            static constexpr std::uintptr_t PostProcessSettingsDataID = 0x7F0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PostProcessSettings", 0x40, "StructProperty"},
            {"PostProcessSettingsDataID", 0x7F0, "StructProperty"},
        }};
    };

    struct PriorityQueueCameraDirector
    {
        static constexpr std::string_view Name = "PriorityQueueCameraDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRigProxyRedirectTable = 0x28;
            static constexpr std::uintptr_t bRunInEditor = 0x38;
            static constexpr std::uintptr_t CameraRigProxyTable = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CameraRigProxyRedirectTable", 0x28, "StructProperty"},
            {"bRunInEditor", 0x38, "BoolProperty"},
            {"CameraRigProxyTable", 0x40, "ObjectProperty"},
        }};
    };

    struct RawInputAxisBinding2DCameraNode
    {
        static constexpr std::string_view Name = "RawInputAxisBinding2DCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Input2DCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisActions = 0x38;
            static constexpr std::uintptr_t Multiplier = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AxisActions", 0x38, "ArrayProperty"},
            {"Multiplier", 0x48, "StructProperty"},
        }};
    };

    struct RootCameraNode
    {
        static constexpr std::string_view Name = "RootCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct Rotator3dCameraParameter
    {
        static constexpr std::string_view Name = "Rotator3dCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x18;
            static constexpr std::uintptr_t Variable = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x18, "StructProperty"},
            {"Variable", 0x20, "ObjectProperty"},
        }};
    };

    struct Rotator3dCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Rotator3dCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct Rotator3dCameraVariable
    {
        static constexpr std::string_view Name = "Rotator3dCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Rotator3dCameraVariableReference
    {
        static constexpr std::string_view Name = "Rotator3dCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct Rotator3fCameraParameter
    {
        static constexpr std::string_view Name = "Rotator3fCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0xC;
            static constexpr std::uintptr_t Variable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0xC, "StructProperty"},
            {"Variable", 0x10, "ObjectProperty"},
        }};
    };

    struct Rotator3fCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Rotator3fCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct Rotator3fCameraVariable
    {
        static constexpr std::string_view Name = "Rotator3fCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Rotator3fCameraVariableReference
    {
        static constexpr std::string_view Name = "Rotator3fCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct SetLocationCameraNode
    {
        static constexpr std::string_view Name = "SetLocationCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x38;
            static constexpr std::uintptr_t OffsetSpace = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Location", 0x38, "StructProperty"},
            {"OffsetSpace", 0x60, "EnumProperty"},
        }};
    };

    struct SetRotationCameraNode
    {
        static constexpr std::string_view Name = "SetRotationCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x38;
            static constexpr std::uintptr_t OffsetSpace = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Rotation", 0x38, "StructProperty"},
            {"OffsetSpace", 0x60, "EnumProperty"},
        }};
    };

    struct ShakeCameraNode
    {
        static constexpr std::string_view Name = "ShakeCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct SimpleBlendCameraNode
    {
        static constexpr std::string_view Name = "SimpleBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct SimpleFixedTimeBlendCameraNode
    {
        static constexpr std::string_view Name = "SimpleFixedTimeBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleBlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendTime = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlendTime", 0x38, "StructProperty"},
        }};
    };

    struct SingleCameraDirector
    {
        static constexpr std::string_view Name = "SingleCameraDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRig = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraRig", 0x48, "ObjectProperty"},
        }};
    };

    struct SmoothBlendCameraNode
    {
        static constexpr std::string_view Name = "SmoothBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleFixedTimeBlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendType = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlendType", 0x48, "EnumProperty"},
        }};
    };

    struct SplineFieldOfViewCameraNode
    {
        static constexpr std::string_view Name = "SplineFieldOfViewCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineInput = 0x38;
            static constexpr std::uintptr_t FieldOfViewSpline = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SplineInput", 0x38, "StructProperty"},
            {"FieldOfViewSpline", 0x48, "StructProperty"},
        }};
    };

    struct SplineOffsetCameraNode
    {
        static constexpr std::string_view Name = "SplineOffsetCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineInput = 0x38;
            static constexpr std::uintptr_t TranslationOffsetSpline = 0x48;
            static constexpr std::uintptr_t RotationOffsetSpline = 0x108;
            static constexpr std::uintptr_t OffsetSpace = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SplineInput", 0x38, "StructProperty"},
            {"TranslationOffsetSpline", 0x48, "StructProperty"},
            {"RotationOffsetSpline", 0x108, "StructProperty"},
            {"OffsetSpace", 0x1C8, "EnumProperty"},
        }};
    };

    struct SplineOrbitCameraNode
    {
        static constexpr std::string_view Name = "SplineOrbitCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationOffsetSpline = 0x38;
            static constexpr std::uintptr_t TargetOffsetSpline = 0xF8;
            static constexpr std::uintptr_t RotationOffsetSpline = 0x1B8;
            static constexpr std::uintptr_t LocationOffsetMultiplier = 0x278;
            static constexpr std::uintptr_t TargetOffsetSpace = 0x288;
            static constexpr std::uintptr_t InputSlot = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LocationOffsetSpline", 0x38, "StructProperty"},
            {"TargetOffsetSpline", 0xF8, "StructProperty"},
            {"RotationOffsetSpline", 0x1B8, "StructProperty"},
            {"LocationOffsetMultiplier", 0x278, "StructProperty"},
            {"TargetOffsetSpace", 0x288, "EnumProperty"},
            {"InputSlot", 0x290, "ObjectProperty"},
        }};
    };

    struct SplineOrbitControlPoint
    {
        static constexpr std::string_view Name = "SplineOrbitControlPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationOffset = 0x0;
            static constexpr std::uintptr_t TargetOffset = 0x18;
            static constexpr std::uintptr_t RotationOffset = 0x30;
            static constexpr std::uintptr_t PitchAngle = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LocationOffset", 0x0, "StructProperty"},
            {"TargetOffset", 0x18, "StructProperty"},
            {"RotationOffset", 0x30, "StructProperty"},
            {"PitchAngle", 0x48, "FloatProperty"},
        }};
    };

    struct StateTreeCameraDirector
    {
        static constexpr std::string_view Name = "StateTreeCameraDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeReference = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTreeReference", 0x48, "StructProperty"},
        }};
    };

    struct TargetRayCastCameraNode
    {
        static constexpr std::string_view Name = "TargetRayCastCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceChannel = 0x38;
            static constexpr std::uintptr_t AutoFocus = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TraceChannel", 0x38, "ByteProperty"},
            {"AutoFocus", 0x40, "StructProperty"},
        }};
    };

    struct Transform3dCameraParameter
    {
        static constexpr std::string_view Name = "Transform3dCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x60;
            static constexpr std::uintptr_t Variable = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x60, "StructProperty"},
            {"Variable", 0x68, "ObjectProperty"},
        }};
    };

    struct Transform3dCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Transform3dCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x40, "StructProperty"},
        }};
    };

    struct Transform3dCameraVariable
    {
        static constexpr std::string_view Name = "Transform3dCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Transform3dCameraVariableReference
    {
        static constexpr std::string_view Name = "Transform3dCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct Transform3fCameraParameter
    {
        static constexpr std::string_view Name = "Transform3fCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x30;
            static constexpr std::uintptr_t Variable = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x30, "StructProperty"},
            {"Variable", 0x38, "ObjectProperty"},
        }};
    };

    struct Transform3fCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Transform3fCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x40, "StructProperty"},
        }};
    };

    struct Transform3fCameraVariable
    {
        static constexpr std::string_view Name = "Transform3fCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Transform3fCameraVariableReference
    {
        static constexpr std::string_view Name = "Transform3fCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct UpdateTrackerCameraAction
    {
        static constexpr std::string_view Name = "UpdateTrackerCameraAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraAction";
        struct Offsets
        {
            static constexpr std::uintptr_t NumUpdates = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumUpdates", 0x30, "IntProperty"},
        }};
    };

    struct UpdateTrackerCameraNode
    {
        static constexpr std::string_view Name = "UpdateTrackerCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DoubleParameter = 0x38;
            static constexpr std::uintptr_t VectorParameter = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DoubleParameter", 0x38, "StructProperty"},
            {"VectorParameter", 0x50, "StructProperty"},
        }};
    };

    struct Vector2dCameraParameter
    {
        static constexpr std::string_view Name = "Vector2dCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x10;
            static constexpr std::uintptr_t Variable = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x10, "StructProperty"},
            {"Variable", 0x18, "ObjectProperty"},
        }};
    };

    struct Vector2dCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Vector2dCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct Vector2dCameraVariable
    {
        static constexpr std::string_view Name = "Vector2dCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Vector2dCameraVariableReference
    {
        static constexpr std::string_view Name = "Vector2dCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct Vector2fCameraParameter
    {
        static constexpr std::string_view Name = "Vector2fCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x8;
            static constexpr std::uintptr_t Variable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x8, "StructProperty"},
            {"Variable", 0x10, "ObjectProperty"},
        }};
    };

    struct Vector2fCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Vector2fCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct Vector2fCameraVariable
    {
        static constexpr std::string_view Name = "Vector2fCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Vector2fCameraVariableReference
    {
        static constexpr std::string_view Name = "Vector2fCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct Vector3dCameraParameter
    {
        static constexpr std::string_view Name = "Vector3dCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x18;
            static constexpr std::uintptr_t Variable = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x18, "StructProperty"},
            {"Variable", 0x20, "ObjectProperty"},
        }};
    };

    struct Vector3dCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Vector3dCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct Vector3dCameraVariable
    {
        static constexpr std::string_view Name = "Vector3dCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Vector3dCameraVariableReference
    {
        static constexpr std::string_view Name = "Vector3dCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct Vector3fCameraParameter
    {
        static constexpr std::string_view Name = "Vector3fCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0xC;
            static constexpr std::uintptr_t Variable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0xC, "StructProperty"},
            {"Variable", 0x10, "ObjectProperty"},
        }};
    };

    struct Vector3fCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Vector3fCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x38, "StructProperty"},
        }};
    };

    struct Vector3fCameraVariable
    {
        static constexpr std::string_view Name = "Vector3fCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Vector3fCameraVariableReference
    {
        static constexpr std::string_view Name = "Vector3fCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct Vector4dCameraParameter
    {
        static constexpr std::string_view Name = "Vector4dCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x20;
            static constexpr std::uintptr_t Variable = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x20, "StructProperty"},
            {"Variable", 0x28, "ObjectProperty"},
        }};
    };

    struct Vector4dCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Vector4dCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x40, "StructProperty"},
        }};
    };

    struct Vector4dCameraVariable
    {
        static constexpr std::string_view Name = "Vector4dCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Vector4dCameraVariableReference
    {
        static constexpr std::string_view Name = "Vector4dCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct Vector4fCameraParameter
    {
        static constexpr std::string_view Name = "Vector4fCameraParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t VariableID = 0x10;
            static constexpr std::uintptr_t Variable = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"VariableID", 0x10, "StructProperty"},
            {"Variable", 0x18, "ObjectProperty"},
        }};
    };

    struct Vector4fCameraRigParameterOverride
    {
        static constexpr std::string_view Name = "Vector4fCameraRigParameterOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CameraRigParameterOverrideBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x40, "StructProperty"},
        }};
    };

    struct Vector4fCameraVariable
    {
        static constexpr std::string_view Name = "Vector4fCameraVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraVariableAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x40, "StructProperty"},
        }};
    };

    struct Vector4fCameraVariableReference
    {
        static constexpr std::string_view Name = "Vector4fCameraVariableReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableID = 0x0;
            static constexpr std::uintptr_t Variable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VariableID", 0x0, "StructProperty"},
            {"Variable", 0x8, "ObjectProperty"},
        }};
    };

    struct ViewTargetTransitionParamsBlendCameraNode
    {
        static constexpr std::string_view Name = "ViewTargetTransitionParamsBlendCameraNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleBlendCameraNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionParams = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransitionParams", 0x38, "StructProperty"},
        }};
    };

}
