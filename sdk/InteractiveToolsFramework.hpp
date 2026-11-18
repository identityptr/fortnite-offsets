#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InteractiveToolsFramework
{
    struct ActiveGizmo
    {
        static constexpr std::string_view Name = "ActiveGizmo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Gizmo = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Gizmo", 0x0, "ObjectProperty"},
        }};
    };

    struct AnyButtonInputBehavior
    {
        static constexpr std::string_view Name = "AnyButtonInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AssetBackedTarget
    {
        static constexpr std::string_view Name = "AssetBackedTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AxisAngleGizmo
    {
        static constexpr std::string_view Name = "AxisAngleGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0x48;
            static constexpr std::uintptr_t AngleSource = 0x58;
            static constexpr std::uintptr_t HitTarget = 0x68;
            static constexpr std::uintptr_t StateTarget = 0x78;
            static constexpr std::uintptr_t MouseBehavior = 0x88;
            static constexpr std::uintptr_t bInInteraction = 0xF0;
            static constexpr std::uintptr_t RotationOrigin = 0xF8;
            static constexpr std::uintptr_t RotationAxis = 0x110;
            static constexpr std::uintptr_t RotationPlaneX = 0x128;
            static constexpr std::uintptr_t RotationPlaneY = 0x140;
            static constexpr std::uintptr_t InteractionStartPoint = 0x158;
            static constexpr std::uintptr_t InteractionCurPoint = 0x170;
            static constexpr std::uintptr_t InteractionStartAngle = 0x188;
            static constexpr std::uintptr_t InteractionCurAngle = 0x18C;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"AxisSource", 0x48, "InterfaceProperty"},
            {"AngleSource", 0x58, "InterfaceProperty"},
            {"HitTarget", 0x68, "InterfaceProperty"},
            {"StateTarget", 0x78, "InterfaceProperty"},
            {"MouseBehavior", 0x88, "ObjectProperty"},
            {"bInInteraction", 0xF0, "BoolProperty"},
            {"RotationOrigin", 0xF8, "StructProperty"},
            {"RotationAxis", 0x110, "StructProperty"},
            {"RotationPlaneX", 0x128, "StructProperty"},
            {"RotationPlaneY", 0x140, "StructProperty"},
            {"InteractionStartPoint", 0x158, "StructProperty"},
            {"InteractionCurPoint", 0x170, "StructProperty"},
            {"InteractionStartAngle", 0x188, "FloatProperty"},
            {"InteractionCurAngle", 0x18C, "FloatProperty"},
        }};
    };

    struct AxisAngleGizmoBuilder
    {
        static constexpr std::string_view Name = "AxisAngleGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AxisPositionGizmo
    {
        static constexpr std::string_view Name = "AxisPositionGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0x48;
            static constexpr std::uintptr_t ParameterSource = 0x58;
            static constexpr std::uintptr_t GizmoViewContext = 0x68;
            static constexpr std::uintptr_t HitTarget = 0x70;
            static constexpr std::uintptr_t StateTarget = 0x80;
            static constexpr std::uintptr_t MouseBehavior = 0x90;
            static constexpr std::uintptr_t bEnableSignedAxis = 0x98;
            static constexpr std::uintptr_t bInInteraction = 0x101;
            static constexpr std::uintptr_t InteractionOrigin = 0x108;
            static constexpr std::uintptr_t InteractionAxis = 0x120;
            static constexpr std::uintptr_t InteractionStartPoint = 0x138;
            static constexpr std::uintptr_t InteractionCurPoint = 0x150;
            static constexpr std::uintptr_t InteractionStartParameter = 0x168;
            static constexpr std::uintptr_t InteractionCurParameter = 0x16C;
            static constexpr std::uintptr_t ParameterSign = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"AxisSource", 0x48, "InterfaceProperty"},
            {"ParameterSource", 0x58, "InterfaceProperty"},
            {"GizmoViewContext", 0x68, "ObjectProperty"},
            {"HitTarget", 0x70, "InterfaceProperty"},
            {"StateTarget", 0x80, "InterfaceProperty"},
            {"MouseBehavior", 0x90, "ObjectProperty"},
            {"bEnableSignedAxis", 0x98, "BoolProperty"},
            {"bInInteraction", 0x101, "BoolProperty"},
            {"InteractionOrigin", 0x108, "StructProperty"},
            {"InteractionAxis", 0x120, "StructProperty"},
            {"InteractionStartPoint", 0x138, "StructProperty"},
            {"InteractionCurPoint", 0x150, "StructProperty"},
            {"InteractionStartParameter", 0x168, "FloatProperty"},
            {"InteractionCurParameter", 0x16C, "FloatProperty"},
            {"ParameterSign", 0x170, "FloatProperty"},
        }};
    };

    struct AxisPositionGizmoBuilder
    {
        static constexpr std::string_view Name = "AxisPositionGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BaseBrushTool
    {
        static constexpr std::string_view Name = "BaseBrushTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshSurfacePointTool";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushProperties = 0x118;
            static constexpr std::uintptr_t bInBrushStroke = 0x120;
            static constexpr std::uintptr_t WorldToLocalScale = 0x124;
            static constexpr std::uintptr_t LastBrushStamp = 0x128;
            static constexpr std::uintptr_t PropertyClass = 0x270;
            static constexpr std::uintptr_t BrushStampIndicator = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BrushProperties", 0x118, "ObjectProperty"},
            {"bInBrushStroke", 0x120, "BoolProperty"},
            {"WorldToLocalScale", 0x124, "FloatProperty"},
            {"LastBrushStamp", 0x128, "StructProperty"},
            {"PropertyClass", 0x270, "SoftClassProperty"},
            {"BrushStampIndicator", 0x290, "ObjectProperty"},
        }};
    };

    struct BehaviorInfo
    {
        static constexpr std::string_view Name = "BehaviorInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Behavior = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Behavior", 0x0, "ObjectProperty"},
        }};
    };

    struct BrushAdjusterInputBehavior
    {
        static constexpr std::string_view Name = "BrushAdjusterInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnyButtonInputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BrushBaseProperties
    {
        static constexpr std::string_view Name = "BrushBaseProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolPropertySet";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushSize = 0x68;
            static constexpr std::uintptr_t bSpecifyRadius = 0x6C;
            static constexpr std::uintptr_t BrushRadius = 0x70;
            static constexpr std::uintptr_t bToolSupportsPressureSensitivity = 0x74;
            static constexpr std::uintptr_t bEnablePressureSensitivity = 0x75;
            static constexpr std::uintptr_t BrushStrength = 0x78;
            static constexpr std::uintptr_t BrushFalloffAmount = 0x7C;
            static constexpr std::uintptr_t bHitBackFaces = 0x80;
            static constexpr std::uintptr_t bShowStrength = 0x81;
            static constexpr std::uintptr_t bShowFalloff = 0x82;
            static constexpr std::uintptr_t bShowHitBackFaces = 0x83;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BrushSize", 0x68, "FloatProperty"},
            {"bSpecifyRadius", 0x6C, "BoolProperty"},
            {"BrushRadius", 0x70, "FloatProperty"},
            {"bToolSupportsPressureSensitivity", 0x74, "BoolProperty"},
            {"bEnablePressureSensitivity", 0x75, "BoolProperty"},
            {"BrushStrength", 0x78, "FloatProperty"},
            {"BrushFalloffAmount", 0x7C, "FloatProperty"},
            {"bHitBackFaces", 0x80, "BoolProperty"},
            {"bShowStrength", 0x81, "BoolProperty"},
            {"bShowFalloff", 0x82, "BoolProperty"},
            {"bShowHitBackFaces", 0x83, "BoolProperty"},
        }};
    };

    struct BrushStampData
    {
        static constexpr std::string_view Name = "BrushStampData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BrushStampIndicator
    {
        static constexpr std::string_view Name = "BrushStampIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t bVisible = 0x38;
            static constexpr std::uintptr_t BrushRadius = 0x3C;
            static constexpr std::uintptr_t BrushFalloff = 0x40;
            static constexpr std::uintptr_t BrushStrength = 0x44;
            static constexpr std::uintptr_t BrushPosition = 0x48;
            static constexpr std::uintptr_t BrushNormal = 0x60;
            static constexpr std::uintptr_t bDrawIndicatorLines = 0x78;
            static constexpr std::uintptr_t bDrawRadiusCircle = 0x79;
            static constexpr std::uintptr_t bScaleNormalByStrength = 0x7A;
            static constexpr std::uintptr_t SampleStepCount = 0x7C;
            static constexpr std::uintptr_t LineColor = 0x80;
            static constexpr std::uintptr_t LineThickness = 0x90;
            static constexpr std::uintptr_t bDepthTested = 0x94;
            static constexpr std::uintptr_t bDrawSecondaryLines = 0x95;
            static constexpr std::uintptr_t SecondaryLineThickness = 0x98;
            static constexpr std::uintptr_t SecondaryLineColor = 0x9C;
            static constexpr std::uintptr_t AttachedComponent = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"bVisible", 0x38, "BoolProperty"},
            {"BrushRadius", 0x3C, "FloatProperty"},
            {"BrushFalloff", 0x40, "FloatProperty"},
            {"BrushStrength", 0x44, "FloatProperty"},
            {"BrushPosition", 0x48, "StructProperty"},
            {"BrushNormal", 0x60, "StructProperty"},
            {"bDrawIndicatorLines", 0x78, "BoolProperty"},
            {"bDrawRadiusCircle", 0x79, "BoolProperty"},
            {"bScaleNormalByStrength", 0x7A, "BoolProperty"},
            {"SampleStepCount", 0x7C, "IntProperty"},
            {"LineColor", 0x80, "StructProperty"},
            {"LineThickness", 0x90, "FloatProperty"},
            {"bDepthTested", 0x94, "BoolProperty"},
            {"bDrawSecondaryLines", 0x95, "BoolProperty"},
            {"SecondaryLineThickness", 0x98, "FloatProperty"},
            {"SecondaryLineColor", 0x9C, "StructProperty"},
            {"AttachedComponent", 0xB0, "ObjectProperty"},
        }};
    };

    struct BrushStampIndicatorBuilder
    {
        static constexpr std::string_view Name = "BrushStampIndicatorBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClickDragInputBehavior
    {
        static constexpr std::string_view Name = "ClickDragInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnyButtonInputBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t bUpdateModifiersDuringDrag = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUpdateModifiersDuringDrag", 0xE0, "BoolProperty"},
        }};
    };

    struct ClickDragTool
    {
        static constexpr std::string_view Name = "ClickDragTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t InputBehaviors = 0x60;
            static constexpr std::uintptr_t ToolPropertyObjects = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputBehaviors", 0x60, "ObjectProperty"},
            {"ToolPropertyObjects", 0x68, "ArrayProperty"},
        }};
    };

    struct ClickDragToolBuilder
    {
        static constexpr std::string_view Name = "ClickDragToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CombinedTransformGizmo
    {
        static constexpr std::string_view Name = "CombinedTransformGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveTarget = 0x38;
            static constexpr std::uintptr_t bSnapToWorldGrid = 0x40;
            static constexpr std::uintptr_t bGridSizeIsExplicit = 0x44;
            static constexpr std::uintptr_t ExplicitGridSize = 0x48;
            static constexpr std::uintptr_t bRotationGridSizeIsExplicit = 0x60;
            static constexpr std::uintptr_t ExplicitRotationGridSize = 0x68;
            static constexpr std::uintptr_t bSnapToWorldRotGrid = 0x80;
            static constexpr std::uintptr_t bSnapToScaleGrid = 0x81;
            static constexpr std::uintptr_t bUseContextCoordinateSystem = 0x82;
            static constexpr std::uintptr_t CurrentCoordinateSystem = 0x83;
            static constexpr std::uintptr_t bUseContextGizmoMode = 0x84;
            static constexpr std::uintptr_t ActiveGizmoMode = 0x85;
            static constexpr std::uintptr_t ActiveComponents = 0x190;
            static constexpr std::uintptr_t ActiveGizmos = 0x1A0;
            static constexpr std::uintptr_t GizmoActor = 0x3C8;
            static constexpr std::uintptr_t CameraAxisSource = 0x3D0;
            static constexpr std::uintptr_t AxisXSource = 0x3D8;
            static constexpr std::uintptr_t AxisYSource = 0x3E0;
            static constexpr std::uintptr_t AxisZSource = 0x3E8;
            static constexpr std::uintptr_t UnitAxisXSource = 0x3F0;
            static constexpr std::uintptr_t UnitAxisYSource = 0x3F8;
            static constexpr std::uintptr_t UnitAxisZSource = 0x400;
            static constexpr std::uintptr_t StateTarget = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ActiveTarget", 0x38, "ObjectProperty"},
            {"bSnapToWorldGrid", 0x40, "BoolProperty"},
            {"bGridSizeIsExplicit", 0x44, "BoolProperty"},
            {"ExplicitGridSize", 0x48, "StructProperty"},
            {"bRotationGridSizeIsExplicit", 0x60, "BoolProperty"},
            {"ExplicitRotationGridSize", 0x68, "StructProperty"},
            {"bSnapToWorldRotGrid", 0x80, "BoolProperty"},
            {"bSnapToScaleGrid", 0x81, "BoolProperty"},
            {"bUseContextCoordinateSystem", 0x82, "BoolProperty"},
            {"CurrentCoordinateSystem", 0x83, "EnumProperty"},
            {"bUseContextGizmoMode", 0x84, "BoolProperty"},
            {"ActiveGizmoMode", 0x85, "EnumProperty"},
            {"ActiveComponents", 0x190, "ArrayProperty"},
            {"ActiveGizmos", 0x1A0, "ArrayProperty"},
            {"GizmoActor", 0x3C8, "ObjectProperty"},
            {"CameraAxisSource", 0x3D0, "ObjectProperty"},
            {"AxisXSource", 0x3D8, "ObjectProperty"},
            {"AxisYSource", 0x3E0, "ObjectProperty"},
            {"AxisZSource", 0x3E8, "ObjectProperty"},
            {"UnitAxisXSource", 0x3F0, "ObjectProperty"},
            {"UnitAxisYSource", 0x3F8, "ObjectProperty"},
            {"UnitAxisZSource", 0x400, "ObjectProperty"},
            {"StateTarget", 0x408, "ObjectProperty"},
        }};
    };

    struct CombinedTransformGizmoActor
    {
        static constexpr std::string_view Name = "CombinedTransformGizmoActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoActor";
        struct Offsets
        {
            static constexpr std::uintptr_t TranslateX = 0x280;
            static constexpr std::uintptr_t TranslateY = 0x288;
            static constexpr std::uintptr_t TranslateZ = 0x290;
            static constexpr std::uintptr_t TranslateYZ = 0x298;
            static constexpr std::uintptr_t TranslateXZ = 0x2A0;
            static constexpr std::uintptr_t TranslateXY = 0x2A8;
            static constexpr std::uintptr_t RotateX = 0x2B0;
            static constexpr std::uintptr_t RotateY = 0x2B8;
            static constexpr std::uintptr_t RotateZ = 0x2C0;
            static constexpr std::uintptr_t RotationSphere = 0x2C8;
            static constexpr std::uintptr_t FreeRotateHandle = 0x2D0;
            static constexpr std::uintptr_t FreeTranslateHandle = 0x2D8;
            static constexpr std::uintptr_t UniformScale = 0x2E0;
            static constexpr std::uintptr_t AxisScaleX = 0x2E8;
            static constexpr std::uintptr_t AxisScaleY = 0x2F0;
            static constexpr std::uintptr_t AxisScaleZ = 0x2F8;
            static constexpr std::uintptr_t PlaneScaleYZ = 0x300;
            static constexpr std::uintptr_t PlaneScaleXZ = 0x308;
            static constexpr std::uintptr_t PlaneScaleXY = 0x310;
            static constexpr std::uintptr_t FullAxisScaleX = 0x328;
            static constexpr std::uintptr_t FullAxisScaleY = 0x330;
            static constexpr std::uintptr_t FullAxisScaleZ = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"TranslateX", 0x280, "ObjectProperty"},
            {"TranslateY", 0x288, "ObjectProperty"},
            {"TranslateZ", 0x290, "ObjectProperty"},
            {"TranslateYZ", 0x298, "ObjectProperty"},
            {"TranslateXZ", 0x2A0, "ObjectProperty"},
            {"TranslateXY", 0x2A8, "ObjectProperty"},
            {"RotateX", 0x2B0, "ObjectProperty"},
            {"RotateY", 0x2B8, "ObjectProperty"},
            {"RotateZ", 0x2C0, "ObjectProperty"},
            {"RotationSphere", 0x2C8, "ObjectProperty"},
            {"FreeRotateHandle", 0x2D0, "ObjectProperty"},
            {"FreeTranslateHandle", 0x2D8, "ObjectProperty"},
            {"UniformScale", 0x2E0, "ObjectProperty"},
            {"AxisScaleX", 0x2E8, "ObjectProperty"},
            {"AxisScaleY", 0x2F0, "ObjectProperty"},
            {"AxisScaleZ", 0x2F8, "ObjectProperty"},
            {"PlaneScaleYZ", 0x300, "ObjectProperty"},
            {"PlaneScaleXZ", 0x308, "ObjectProperty"},
            {"PlaneScaleXY", 0x310, "ObjectProperty"},
            {"FullAxisScaleX", 0x328, "ObjectProperty"},
            {"FullAxisScaleY", 0x330, "ObjectProperty"},
            {"FullAxisScaleZ", 0x338, "ObjectProperty"},
        }};
    };

    struct CombinedTransformGizmoBuilder
    {
        static constexpr std::string_view Name = "CombinedTransformGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CombinedTransformGizmoContextObject
    {
        static constexpr std::string_view Name = "CombinedTransformGizmoContextObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ComponentBoundTransformProxy
    {
        static constexpr std::string_view Name = "ComponentBoundTransformProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TransformProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bRotatePerObject = 0xD0;
            static constexpr std::uintptr_t bSetPivotMode = 0xD1;
            static constexpr std::uintptr_t SharedTransform = 0xF0;
            static constexpr std::uintptr_t InitialSharedTransform = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bRotatePerObject", 0xD0, "BoolProperty"},
            {"bSetPivotMode", 0xD1, "BoolProperty"},
            {"SharedTransform", 0xF0, "StructProperty"},
            {"InitialSharedTransform", 0x150, "StructProperty"},
        }};
    };

    struct ContextObjectStore
    {
        static constexpr std::string_view Name = "ContextObjectStore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextObjects = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextObjects", 0x28, "ArrayProperty"},
        }};
    };

    struct DeviceButtonState
    {
        static constexpr std::string_view Name = "DeviceButtonState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t button = 0x0;
            static constexpr std::uintptr_t bPressed = 0x18;
            static constexpr std::uintptr_t bDown = 0x19;
            static constexpr std::uintptr_t bReleased = 0x1A;
            static constexpr std::uintptr_t bDoubleClicked = 0x1B;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"button", 0x0, "StructProperty"},
            {"bPressed", 0x18, "BoolProperty"},
            {"bDown", 0x19, "BoolProperty"},
            {"bReleased", 0x1A, "BoolProperty"},
            {"bDoubleClicked", 0x1B, "BoolProperty"},
        }};
    };

    struct DoubleClickInputBehavior
    {
        static constexpr std::string_view Name = "DoubleClickInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleClickInputBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t HitTestOnRelease = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HitTestOnRelease", 0xB0, "BoolProperty"},
        }};
    };

    struct EnabledToolGroupState
    {
        static constexpr std::string_view Name = "EnabledToolGroupState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorSet = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BehaviorSet", 0x0, "ObjectProperty"},
        }};
    };

    struct FreePositionSubGizmo
    {
        static constexpr std::string_view Name = "FreePositionSubGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlanePositionGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformSource = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransformSource", 0x280, "InterfaceProperty"},
        }};
    };

    struct FreeRotationSubGizmo
    {
        static constexpr std::string_view Name = "FreeRotationSubGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0x48;
            static constexpr std::uintptr_t HitTarget = 0x58;
            static constexpr std::uintptr_t StateTarget = 0x68;
            static constexpr std::uintptr_t TransformSource = 0x78;
            static constexpr std::uintptr_t GizmoViewContext = 0x88;
            static constexpr std::uintptr_t MouseBehavior = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AxisSource", 0x48, "InterfaceProperty"},
            {"HitTarget", 0x58, "InterfaceProperty"},
            {"StateTarget", 0x68, "InterfaceProperty"},
            {"TransformSource", 0x78, "InterfaceProperty"},
            {"GizmoViewContext", 0x88, "ObjectProperty"},
            {"MouseBehavior", 0x90, "ObjectProperty"},
        }};
    };

    struct GizmoActor
    {
        static constexpr std::string_view Name = "GizmoActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InternalToolFrameworkActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSelectableInEditor = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsSelectableInEditor", 0x278, "BoolProperty"},
        }};
    };

    struct GizmoArrowComponent
    {
        static constexpr std::string_view Name = "GizmoArrowComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Direction = 0x5A0;
            static constexpr std::uintptr_t Gap = 0x5B8;
            static constexpr std::uintptr_t Length = 0x5BC;
            static constexpr std::uintptr_t Thickness = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Direction", 0x5A0, "StructProperty"},
            {"Gap", 0x5B8, "FloatProperty"},
            {"Length", 0x5BC, "FloatProperty"},
            {"Thickness", 0x5C0, "FloatProperty"},
        }};
    };

    struct GizmoAxisIntervalParameterSource
    {
        static constexpr std::string_view Name = "GizmoAxisIntervalParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseFloatParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t FloatParameterSource = 0x48;
            static constexpr std::uintptr_t MinParameter = 0x58;
            static constexpr std::uintptr_t MaxParameter = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FloatParameterSource", 0x48, "InterfaceProperty"},
            {"MinParameter", 0x58, "FloatProperty"},
            {"MaxParameter", 0x5C, "FloatProperty"},
        }};
    };

    struct GizmoAxisRotationParameterSource
    {
        static constexpr std::string_view Name = "GizmoAxisRotationParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseFloatParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0xB0;
            static constexpr std::uintptr_t TransformSource = 0xC0;
            static constexpr std::uintptr_t Angle = 0xD0;
            static constexpr std::uintptr_t LastChange = 0xD4;
            static constexpr std::uintptr_t CurRotationAxis = 0xE0;
            static constexpr std::uintptr_t CurRotationOrigin = 0xF8;
            static constexpr std::uintptr_t InitialTransform = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AxisSource", 0xB0, "InterfaceProperty"},
            {"TransformSource", 0xC0, "InterfaceProperty"},
            {"Angle", 0xD0, "FloatProperty"},
            {"LastChange", 0xD4, "StructProperty"},
            {"CurRotationAxis", 0xE0, "StructProperty"},
            {"CurRotationOrigin", 0xF8, "StructProperty"},
            {"InitialTransform", 0x110, "StructProperty"},
        }};
    };

    struct GizmoAxisScaleParameterSource
    {
        static constexpr std::string_view Name = "GizmoAxisScaleParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseFloatParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0xB0;
            static constexpr std::uintptr_t TransformSource = 0xC0;
            static constexpr std::uintptr_t ScaleMultiplier = 0xD0;
            static constexpr std::uintptr_t bClampToZero = 0xD4;
            static constexpr std::uintptr_t Parameter = 0xD8;
            static constexpr std::uintptr_t LastChange = 0xDC;
            static constexpr std::uintptr_t CurScaleAxis = 0xE8;
            static constexpr std::uintptr_t CurScaleOrigin = 0x100;
            static constexpr std::uintptr_t InitialTransform = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AxisSource", 0xB0, "InterfaceProperty"},
            {"TransformSource", 0xC0, "InterfaceProperty"},
            {"ScaleMultiplier", 0xD0, "FloatProperty"},
            {"bClampToZero", 0xD4, "BoolProperty"},
            {"Parameter", 0xD8, "FloatProperty"},
            {"LastChange", 0xDC, "StructProperty"},
            {"CurScaleAxis", 0xE8, "StructProperty"},
            {"CurScaleOrigin", 0x100, "StructProperty"},
            {"InitialTransform", 0x120, "StructProperty"},
        }};
    };

    struct GizmoAxisSource
    {
        static constexpr std::string_view Name = "GizmoAxisSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetDirection",
            "GetOrigin",
            "GetTangentVectors",
            "HasTangentVectors",
        }};
    };

    struct GizmoAxisTranslationParameterSource
    {
        static constexpr std::string_view Name = "GizmoAxisTranslationParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseFloatParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0xB0;
            static constexpr std::uintptr_t TransformSource = 0xC0;
            static constexpr std::uintptr_t Parameter = 0xD0;
            static constexpr std::uintptr_t LastChange = 0xD4;
            static constexpr std::uintptr_t CurTranslationAxis = 0xE0;
            static constexpr std::uintptr_t CurTranslationOrigin = 0xF8;
            static constexpr std::uintptr_t InitialTransform = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AxisSource", 0xB0, "InterfaceProperty"},
            {"TransformSource", 0xC0, "InterfaceProperty"},
            {"Parameter", 0xD0, "FloatProperty"},
            {"LastChange", 0xD4, "StructProperty"},
            {"CurTranslationAxis", 0xE0, "StructProperty"},
            {"CurTranslationOrigin", 0xF8, "StructProperty"},
            {"InitialTransform", 0x110, "StructProperty"},
        }};
    };

    struct GizmoBaseComponent
    {
        static constexpr std::string_view Name = "GizmoBaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Color = 0x568;
            static constexpr std::uintptr_t HoverSizeMultiplier = 0x578;
            static constexpr std::uintptr_t PixelHitDistanceThreshold = 0x57C;
            static constexpr std::uintptr_t GizmoViewContext = 0x588;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Color", 0x568, "StructProperty"},
            {"HoverSizeMultiplier", 0x578, "FloatProperty"},
            {"PixelHitDistanceThreshold", 0x57C, "FloatProperty"},
            {"GizmoViewContext", 0x588, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "UpdateHoverState",
            "UpdateWorldLocalState",
        }};
    };

    struct GizmoBaseComponentInterface
    {
        static constexpr std::string_view Name = "GizmoBaseComponentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoBaseFloatParameterSource
    {
        static constexpr std::string_view Name = "GizmoBaseFloatParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoBaseTransformSource
    {
        static constexpr std::string_view Name = "GizmoBaseTransformSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoBaseVec2ParameterSource
    {
        static constexpr std::string_view Name = "GizmoBaseVec2ParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoBoxComponent
    {
        static constexpr std::string_view Name = "GizmoBoxComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x5A0;
            static constexpr std::uintptr_t Rotation = 0x5C0;
            static constexpr std::uintptr_t Dimensions = 0x5E0;
            static constexpr std::uintptr_t LineThickness = 0x5F8;
            static constexpr std::uintptr_t bRemoveHiddenLines = 0x5FC;
            static constexpr std::uintptr_t bEnableAxisFlip = 0x5FD;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"origin", 0x5A0, "StructProperty"},
            {"Rotation", 0x5C0, "StructProperty"},
            {"Dimensions", 0x5E0, "StructProperty"},
            {"LineThickness", 0x5F8, "FloatProperty"},
            {"bRemoveHiddenLines", 0x5FC, "BoolProperty"},
            {"bEnableAxisFlip", 0x5FD, "BoolProperty"},
        }};
    };

    struct GizmoCircleComponent
    {
        static constexpr std::string_view Name = "GizmoCircleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Normal = 0x5A0;
            static constexpr std::uintptr_t Radius = 0x5B8;
            static constexpr std::uintptr_t Thickness = 0x5BC;
            static constexpr std::uintptr_t NumSides = 0x5C0;
            static constexpr std::uintptr_t bViewAligned = 0x5C4;
            static constexpr std::uintptr_t bDrawFullCircle = 0x5C5;
            static constexpr std::uintptr_t bOnlyAllowFrontFacingHits = 0x5C6;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Normal", 0x5A0, "StructProperty"},
            {"Radius", 0x5B8, "FloatProperty"},
            {"Thickness", 0x5BC, "FloatProperty"},
            {"NumSides", 0x5C0, "IntProperty"},
            {"bViewAligned", 0x5C4, "BoolProperty"},
            {"bDrawFullCircle", 0x5C5, "BoolProperty"},
            {"bOnlyAllowFrontFacingHits", 0x5C6, "BoolProperty"},
        }};
    };

    struct GizmoClickMultiTarget
    {
        static constexpr std::string_view Name = "GizmoClickMultiTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "UpdateHittableState",
            "UpdateHoverState",
            "UpdateInteractingState",
            "UpdateSelectedState",
            "UpdateSubdueState",
        }};
    };

    struct GizmoClickTarget
    {
        static constexpr std::string_view Name = "GizmoClickTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "UpdateHoverState",
            "UpdateInteractingState",
            "UpdateSelectedState",
            "UpdateSubdueState",
        }};
    };

    struct GizmoComponentAxisSource
    {
        static constexpr std::string_view Name = "GizmoComponentAxisSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x30;
            static constexpr std::uintptr_t AxisIndex = 0x38;
            static constexpr std::uintptr_t bLocalAxes = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Component", 0x30, "ObjectProperty"},
            {"AxisIndex", 0x38, "IntProperty"},
            {"bLocalAxes", 0x3C, "BoolProperty"},
        }};
    };

    struct GizmoComponentHitTarget
    {
        static constexpr std::string_view Name = "GizmoComponentHitTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Component", 0x30, "ObjectProperty"},
        }};
    };

    struct GizmoComponentWorldTransformSource
    {
        static constexpr std::string_view Name = "GizmoComponentWorldTransformSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseTransformSource";
        struct Offsets
        {
            static constexpr std::uintptr_t Component = 0x48;
            static constexpr std::uintptr_t bModifyComponentOnTransform = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Component", 0x48, "ObjectProperty"},
            {"bModifyComponentOnTransform", 0x50, "BoolProperty"},
        }};
    };

    struct GizmoConstantAxisSource
    {
        static constexpr std::string_view Name = "GizmoConstantAxisSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x30;
            static constexpr std::uintptr_t Direction = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"origin", 0x30, "StructProperty"},
            {"Direction", 0x48, "StructProperty"},
        }};
    };

    struct GizmoConstantFrameAxisSource
    {
        static constexpr std::string_view Name = "GizmoConstantFrameAxisSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x30;
            static constexpr std::uintptr_t Direction = 0x48;
            static constexpr std::uintptr_t TangentX = 0x60;
            static constexpr std::uintptr_t TangentY = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"origin", 0x30, "StructProperty"},
            {"Direction", 0x48, "StructProperty"},
            {"TangentX", 0x60, "StructProperty"},
            {"TangentY", 0x78, "StructProperty"},
        }};
    };

    struct GizmoElementArc
    {
        static constexpr std::string_view Name = "GizmoElementArc";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementCircleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerRadius = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InnerRadius", 0x2F0, "DoubleProperty"},
        }};
    };

    struct GizmoElementArrow
    {
        static constexpr std::string_view Name = "GizmoElementArrow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementGroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CylinderElement = 0x258;
            static constexpr std::uintptr_t HeadElement = 0x260;
            static constexpr std::uintptr_t base = 0x268;
            static constexpr std::uintptr_t Direction = 0x280;
            static constexpr std::uintptr_t SideDirection = 0x298;
            static constexpr std::uintptr_t BodyLength = 0x2B0;
            static constexpr std::uintptr_t BodyRadius = 0x2B4;
            static constexpr std::uintptr_t HeadLength = 0x2B8;
            static constexpr std::uintptr_t HeadRadius = 0x2BC;
            static constexpr std::uintptr_t NumSides = 0x2C0;
            static constexpr std::uintptr_t bEndCaps = 0x2C4;
            static constexpr std::uintptr_t HeadType = 0x2C8;
            static constexpr std::uintptr_t HitMask = 0x2CC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"CylinderElement", 0x258, "ObjectProperty"},
            {"HeadElement", 0x260, "ObjectProperty"},
            {"base", 0x268, "StructProperty"},
            {"Direction", 0x280, "StructProperty"},
            {"SideDirection", 0x298, "StructProperty"},
            {"BodyLength", 0x2B0, "FloatProperty"},
            {"BodyRadius", 0x2B4, "FloatProperty"},
            {"HeadLength", 0x2B8, "FloatProperty"},
            {"HeadRadius", 0x2BC, "FloatProperty"},
            {"NumSides", 0x2C0, "IntProperty"},
            {"bEndCaps", 0x2C4, "BoolProperty"},
            {"HeadType", 0x2C8, "EnumProperty"},
            {"HitMask", 0x2CC, "WeakObjectProperty"},
        }};
    };

    struct GizmoElementArrowHead
    {
        static constexpr std::string_view Name = "GizmoElementArrowHead";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementGroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConeElement = 0x258;
            static constexpr std::uintptr_t BoxElement = 0x260;
            static constexpr std::uintptr_t SphereElement = 0x268;
            static constexpr std::uintptr_t Center = 0x270;
            static constexpr std::uintptr_t Direction = 0x288;
            static constexpr std::uintptr_t SideDirection = 0x2A0;
            static constexpr std::uintptr_t Length = 0x2B8;
            static constexpr std::uintptr_t Radius = 0x2BC;
            static constexpr std::uintptr_t NumSides = 0x2C0;
            static constexpr std::uintptr_t Type = 0x2C4;
            static constexpr std::uintptr_t HitMask = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ConeElement", 0x258, "ObjectProperty"},
            {"BoxElement", 0x260, "ObjectProperty"},
            {"SphereElement", 0x268, "ObjectProperty"},
            {"Center", 0x270, "StructProperty"},
            {"Direction", 0x288, "StructProperty"},
            {"SideDirection", 0x2A0, "StructProperty"},
            {"Length", 0x2B8, "FloatProperty"},
            {"Radius", 0x2BC, "FloatProperty"},
            {"NumSides", 0x2C0, "IntProperty"},
            {"Type", 0x2C4, "EnumProperty"},
            {"HitMask", 0x2C8, "WeakObjectProperty"},
        }};
    };

    struct GizmoElementBase
    {
        static constexpr std::string_view Name = "GizmoElementBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
            static constexpr std::uintptr_t bEnabledForPerspectiveProjection = 0x29;
            static constexpr std::uintptr_t bEnabledForOrthographicProjection = 0x2A;
            static constexpr std::uintptr_t bEnabledForDefaultState = 0x2B;
            static constexpr std::uintptr_t bEnabledForHoveringState = 0x2C;
            static constexpr std::uintptr_t bEnabledForInteractingState = 0x2D;
            static constexpr std::uintptr_t bEnabledForSelectedState = 0x2E;
            static constexpr std::uintptr_t bEnabledForSubduedState = 0x2F;
            static constexpr std::uintptr_t PartIdentifier = 0x90;
            static constexpr std::uintptr_t MeshRenderAttributes = 0x94;
            static constexpr std::uintptr_t ElementState = 0x134;
            static constexpr std::uintptr_t ElementInteractionState = 0x138;
            static constexpr std::uintptr_t ViewDependentType = 0x13C;
            static constexpr std::uintptr_t ViewDependentAxis = 0x140;
            static constexpr std::uintptr_t ViewDependentAngleTol = 0x158;
            static constexpr std::uintptr_t ViewDependentAxialMaxCosAngleTol = 0x15C;
            static constexpr std::uintptr_t ViewDependentPlanarMinCosAngleTol = 0x160;
            static constexpr std::uintptr_t ViewAlignType = 0x164;
            static constexpr std::uintptr_t ViewAlignAxis = 0x168;
            static constexpr std::uintptr_t ViewAlignNormal = 0x180;
            static constexpr std::uintptr_t ViewAlignAxialAngleTol = 0x198;
            static constexpr std::uintptr_t ViewAlignAxialMaxCosAngleTol = 0x19C;
            static constexpr std::uintptr_t PixelHitDistanceThreshold = 0x1A0;
            static constexpr std::uintptr_t MinimumPixelHitDistanceThreshold = 0x1A4;
            static constexpr std::uintptr_t HitPriority = 0x1A8;
            static constexpr std::uintptr_t ViewDepthOffset = 0x1AC;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
            {"bEnabledForPerspectiveProjection", 0x29, "BoolProperty"},
            {"bEnabledForOrthographicProjection", 0x2A, "BoolProperty"},
            {"bEnabledForDefaultState", 0x2B, "BoolProperty"},
            {"bEnabledForHoveringState", 0x2C, "BoolProperty"},
            {"bEnabledForInteractingState", 0x2D, "BoolProperty"},
            {"bEnabledForSelectedState", 0x2E, "BoolProperty"},
            {"bEnabledForSubduedState", 0x2F, "BoolProperty"},
            {"PartIdentifier", 0x90, "UInt32Property"},
            {"MeshRenderAttributes", 0x94, "StructProperty"},
            {"ElementState", 0x134, "EnumProperty"},
            {"ElementInteractionState", 0x138, "EnumProperty"},
            {"ViewDependentType", 0x13C, "EnumProperty"},
            {"ViewDependentAxis", 0x140, "StructProperty"},
            {"ViewDependentAngleTol", 0x158, "FloatProperty"},
            {"ViewDependentAxialMaxCosAngleTol", 0x15C, "FloatProperty"},
            {"ViewDependentPlanarMinCosAngleTol", 0x160, "FloatProperty"},
            {"ViewAlignType", 0x164, "EnumProperty"},
            {"ViewAlignAxis", 0x168, "StructProperty"},
            {"ViewAlignNormal", 0x180, "StructProperty"},
            {"ViewAlignAxialAngleTol", 0x198, "FloatProperty"},
            {"ViewAlignAxialMaxCosAngleTol", 0x19C, "FloatProperty"},
            {"PixelHitDistanceThreshold", 0x1A0, "FloatProperty"},
            {"MinimumPixelHitDistanceThreshold", 0x1A4, "FloatProperty"},
            {"HitPriority", 0x1A8, "IntProperty"},
            {"ViewDepthOffset", 0x1AC, "FloatProperty"},
        }};
    };

    struct GizmoElementBox
    {
        static constexpr std::string_view Name = "GizmoElementBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x1B0;
            static constexpr std::uintptr_t Dimensions = 0x1C8;
            static constexpr std::uintptr_t UpDirection = 0x1E0;
            static constexpr std::uintptr_t SideDirection = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Center", 0x1B0, "StructProperty"},
            {"Dimensions", 0x1C8, "StructProperty"},
            {"UpDirection", 0x1E0, "StructProperty"},
            {"SideDirection", 0x1F8, "StructProperty"},
        }};
    };

    struct GizmoElementCircle
    {
        static constexpr std::string_view Name = "GizmoElementCircle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementCircleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bDrawMesh = 0x2F0;
            static constexpr std::uintptr_t bDrawLine = 0x2F1;
            static constexpr std::uintptr_t bHitMesh = 0x2F2;
            static constexpr std::uintptr_t bHitLine = 0x2F3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bDrawMesh", 0x2F0, "BoolProperty"},
            {"bDrawLine", 0x2F1, "BoolProperty"},
            {"bHitMesh", 0x2F2, "BoolProperty"},
            {"bHitLine", 0x2F3, "BoolProperty"},
        }};
    };

    struct GizmoElementCircleBase
    {
        static constexpr std::string_view Name = "GizmoElementCircleBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementLineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x230;
            static constexpr std::uintptr_t Axis0 = 0x248;
            static constexpr std::uintptr_t Axis1 = 0x260;
            static constexpr std::uintptr_t Radius = 0x278;
            static constexpr std::uintptr_t RadiusMultiplier = 0x280;
            static constexpr std::uintptr_t NumSegments = 0x2D0;
            static constexpr std::uintptr_t PartialType = 0x2D4;
            static constexpr std::uintptr_t PartialStartAngle = 0x2D8;
            static constexpr std::uintptr_t PartialEndAngle = 0x2E0;
            static constexpr std::uintptr_t PartialViewDependentMaxCosTol = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Center", 0x230, "StructProperty"},
            {"Axis0", 0x248, "StructProperty"},
            {"Axis1", 0x260, "StructProperty"},
            {"Radius", 0x278, "DoubleProperty"},
            {"RadiusMultiplier", 0x280, "StructProperty"},
            {"NumSegments", 0x2D0, "IntProperty"},
            {"PartialType", 0x2D4, "EnumProperty"},
            {"PartialStartAngle", 0x2D8, "DoubleProperty"},
            {"PartialEndAngle", 0x2E0, "DoubleProperty"},
            {"PartialViewDependentMaxCosTol", 0x2E8, "DoubleProperty"},
        }};
    };

    struct GizmoElementColorAttribute
    {
        static constexpr std::string_view Name = "GizmoElementColorAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t bHasValue = 0x10;
            static constexpr std::uintptr_t bOverridesChildState = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "StructProperty"},
            {"bHasValue", 0x10, "BoolProperty"},
            {"bOverridesChildState", 0x11, "BoolProperty"},
        }};
    };

    struct GizmoElementCone
    {
        static constexpr std::string_view Name = "GizmoElementCone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x1B0;
            static constexpr std::uintptr_t Direction = 0x1C8;
            static constexpr std::uintptr_t Height = 0x1E0;
            static constexpr std::uintptr_t Radius = 0x1E4;
            static constexpr std::uintptr_t NumSides = 0x1E8;
            static constexpr std::uintptr_t bEndCaps = 0x1EC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"origin", 0x1B0, "StructProperty"},
            {"Direction", 0x1C8, "StructProperty"},
            {"Height", 0x1E0, "FloatProperty"},
            {"Radius", 0x1E4, "FloatProperty"},
            {"NumSides", 0x1E8, "IntProperty"},
            {"bEndCaps", 0x1EC, "BoolProperty"},
        }};
    };

    struct GizmoElementCylinder
    {
        static constexpr std::string_view Name = "GizmoElementCylinder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t base = 0x1B0;
            static constexpr std::uintptr_t Direction = 0x1C8;
            static constexpr std::uintptr_t Height = 0x1E0;
            static constexpr std::uintptr_t Radius = 0x1E4;
            static constexpr std::uintptr_t NumSides = 0x1E8;
            static constexpr std::uintptr_t bIsDashed = 0x1EC;
            static constexpr std::uintptr_t DashLength = 0x1F0;
            static constexpr std::uintptr_t DashGapLength = 0x1F4;
            static constexpr std::uintptr_t bScreenSpace = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"base", 0x1B0, "StructProperty"},
            {"Direction", 0x1C8, "StructProperty"},
            {"Height", 0x1E0, "FloatProperty"},
            {"Radius", 0x1E4, "FloatProperty"},
            {"NumSides", 0x1E8, "IntProperty"},
            {"bIsDashed", 0x1EC, "BoolProperty"},
            {"DashLength", 0x1F0, "FloatProperty"},
            {"DashGapLength", 0x1F4, "FloatProperty"},
            {"bScreenSpace", 0x1F8, "BoolProperty"},
        }};
    };

    struct GizmoElementGroup
    {
        static constexpr std::string_view Name = "GizmoElementGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementGroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bConstantScale = 0x230;
            static constexpr std::uintptr_t bHitOwner = 0x231;
            static constexpr std::uintptr_t Elements = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bConstantScale", 0x230, "BoolProperty"},
            {"bHitOwner", 0x231, "BoolProperty"},
            {"Elements", 0x238, "ArrayProperty"},
        }};
    };

    struct GizmoElementGroupBase
    {
        static constexpr std::string_view Name = "GizmoElementGroupBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementLineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bConstantScale = 0x230;
            static constexpr std::uintptr_t bHitOwner = 0x231;
            static constexpr std::uintptr_t Elements = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bConstantScale", 0x230, "BoolProperty"},
            {"bHitOwner", 0x231, "BoolProperty"},
            {"Elements", 0x238, "ArrayProperty"},
        }};
    };

    struct GizmoElementHitMultiTarget
    {
        static constexpr std::string_view Name = "GizmoElementHitMultiTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GizmoElement = 0x30;
            static constexpr std::uintptr_t GizmoViewContext = 0x38;
            static constexpr std::uintptr_t GizmoTransformProxy = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GizmoElement", 0x30, "ObjectProperty"},
            {"GizmoViewContext", 0x38, "ObjectProperty"},
            {"GizmoTransformProxy", 0x40, "ObjectProperty"},
        }};
    };

    struct GizmoElementHitTarget
    {
        static constexpr std::string_view Name = "GizmoElementHitTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GizmoElement = 0x30;
            static constexpr std::uintptr_t GizmoViewContext = 0x38;
            static constexpr std::uintptr_t GizmoTransformProxy = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GizmoElement", 0x30, "ObjectProperty"},
            {"GizmoViewContext", 0x38, "ObjectProperty"},
            {"GizmoTransformProxy", 0x40, "ObjectProperty"},
        }};
    };

    struct GizmoElementLineBase
    {
        static constexpr std::string_view Name = "GizmoElementLineBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LineRenderAttributes = 0x1B0;
            static constexpr std::uintptr_t LineThickness = 0x214;
            static constexpr std::uintptr_t bScreenSpaceLine = 0x218;
            static constexpr std::uintptr_t HoverLineThicknessMultiplier = 0x21C;
            static constexpr std::uintptr_t InteractLineThicknessMultiplier = 0x220;
            static constexpr std::uintptr_t SelectLineThicknessMultiplier = 0x224;
            static constexpr std::uintptr_t SubdueLineThicknessMultiplier = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LineRenderAttributes", 0x1B0, "StructProperty"},
            {"LineThickness", 0x214, "FloatProperty"},
            {"bScreenSpaceLine", 0x218, "BoolProperty"},
            {"HoverLineThicknessMultiplier", 0x21C, "FloatProperty"},
            {"InteractLineThicknessMultiplier", 0x220, "FloatProperty"},
            {"SelectLineThicknessMultiplier", 0x224, "FloatProperty"},
            {"SubdueLineThicknessMultiplier", 0x228, "FloatProperty"},
        }};
    };

    struct GizmoElementLineRenderStateAttributes
    {
        static constexpr std::string_view Name = "GizmoElementLineRenderStateAttributes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LineColor = 0x0;
            static constexpr std::uintptr_t HoverLineColor = 0x14;
            static constexpr std::uintptr_t InteractLineColor = 0x28;
            static constexpr std::uintptr_t SelectLineColor = 0x3C;
            static constexpr std::uintptr_t SubdueLineColor = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LineColor", 0x0, "StructProperty"},
            {"HoverLineColor", 0x14, "StructProperty"},
            {"InteractLineColor", 0x28, "StructProperty"},
            {"SelectLineColor", 0x3C, "StructProperty"},
            {"SubdueLineColor", 0x50, "StructProperty"},
        }};
    };

    struct GizmoElementLineStrip
    {
        static constexpr std::string_view Name = "GizmoElementLineStrip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementLineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vertices = 0x230;
            static constexpr std::uintptr_t base = 0x240;
            static constexpr std::uintptr_t UpDirection = 0x258;
            static constexpr std::uintptr_t SideDirection = 0x270;
            static constexpr std::uintptr_t bDrawLineStrip = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Vertices", 0x230, "ArrayProperty"},
            {"base", 0x240, "StructProperty"},
            {"UpDirection", 0x258, "StructProperty"},
            {"SideDirection", 0x270, "StructProperty"},
            {"bDrawLineStrip", 0x288, "BoolProperty"},
        }};
    };

    struct GizmoElementMaterialAttribute
    {
        static constexpr std::string_view Name = "GizmoElementMaterialAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t bOverridesChildState = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "WeakObjectProperty"},
            {"bOverridesChildState", 0x8, "BoolProperty"},
        }};
    };

    struct GizmoElementMeshRenderStateAttributes
    {
        static constexpr std::string_view Name = "GizmoElementMeshRenderStateAttributes";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x0;
            static constexpr std::uintptr_t HoverMaterial = 0xC;
            static constexpr std::uintptr_t InteractMaterial = 0x18;
            static constexpr std::uintptr_t SelectMaterial = 0x24;
            static constexpr std::uintptr_t SubdueMaterial = 0x30;
            static constexpr std::uintptr_t VertexColor = 0x3C;
            static constexpr std::uintptr_t HoverVertexColor = 0x50;
            static constexpr std::uintptr_t InteractVertexColor = 0x64;
            static constexpr std::uintptr_t SelectVertexColor = 0x78;
            static constexpr std::uintptr_t SubdueVertexColor = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Material", 0x0, "StructProperty"},
            {"HoverMaterial", 0xC, "StructProperty"},
            {"InteractMaterial", 0x18, "StructProperty"},
            {"SelectMaterial", 0x24, "StructProperty"},
            {"SubdueMaterial", 0x30, "StructProperty"},
            {"VertexColor", 0x3C, "StructProperty"},
            {"HoverVertexColor", 0x50, "StructProperty"},
            {"InteractVertexColor", 0x64, "StructProperty"},
            {"SelectVertexColor", 0x78, "StructProperty"},
            {"SubdueVertexColor", 0x8C, "StructProperty"},
        }};
    };

    struct GizmoElementRectangle
    {
        static constexpr std::string_view Name = "GizmoElementRectangle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementLineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x230;
            static constexpr std::uintptr_t Width = 0x248;
            static constexpr std::uintptr_t Height = 0x24C;
            static constexpr std::uintptr_t UpDirection = 0x250;
            static constexpr std::uintptr_t SideDirection = 0x268;
            static constexpr std::uintptr_t bDrawMesh = 0x280;
            static constexpr std::uintptr_t bDrawLine = 0x281;
            static constexpr std::uintptr_t bHitMesh = 0x282;
            static constexpr std::uintptr_t bHitLine = 0x283;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Center", 0x230, "StructProperty"},
            {"Width", 0x248, "FloatProperty"},
            {"Height", 0x24C, "FloatProperty"},
            {"UpDirection", 0x250, "StructProperty"},
            {"SideDirection", 0x268, "StructProperty"},
            {"bDrawMesh", 0x280, "BoolProperty"},
            {"bDrawLine", 0x281, "BoolProperty"},
            {"bHitMesh", 0x282, "BoolProperty"},
            {"bHitLine", 0x283, "BoolProperty"},
        }};
    };

    struct GizmoElementSphere
    {
        static constexpr std::string_view Name = "GizmoElementSphere";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x1B0;
            static constexpr std::uintptr_t Radius = 0x1C8;
            static constexpr std::uintptr_t NumSides = 0x1CC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Center", 0x1B0, "StructProperty"},
            {"Radius", 0x1C8, "FloatProperty"},
            {"NumSides", 0x1CC, "IntProperty"},
        }};
    };

    struct GizmoElementTorus
    {
        static constexpr std::string_view Name = "GizmoElementTorus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementCircleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerRadius = 0x2F0;
            static constexpr std::uintptr_t InnerRadiusMultiplier = 0x2F8;
            static constexpr std::uintptr_t NumInnerSlices = 0x348;
            static constexpr std::uintptr_t bEndCaps = 0x34C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InnerRadius", 0x2F0, "DoubleProperty"},
            {"InnerRadiusMultiplier", 0x2F8, "StructProperty"},
            {"NumInnerSlices", 0x348, "IntProperty"},
            {"bEndCaps", 0x34C, "BoolProperty"},
        }};
    };

    struct GizmoElementTriangleList
    {
        static constexpr std::string_view Name = "GizmoElementTriangleList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoElementBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Vertices = 0x1B0;
            static constexpr std::uintptr_t base = 0x1C0;
            static constexpr std::uintptr_t UpDirection = 0x1D8;
            static constexpr std::uintptr_t SideDirection = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Vertices", 0x1B0, "ArrayProperty"},
            {"base", 0x1C0, "StructProperty"},
            {"UpDirection", 0x1D8, "StructProperty"},
            {"SideDirection", 0x1F0, "StructProperty"},
        }};
    };

    struct GizmoFloatParameterChange
    {
        static constexpr std::string_view Name = "GizmoFloatParameterChange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x0;
            static constexpr std::uintptr_t CurrentValue = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialValue", 0x0, "FloatProperty"},
            {"CurrentValue", 0x4, "FloatProperty"},
        }};
    };

    struct GizmoFloatParameterSource
    {
        static constexpr std::string_view Name = "GizmoFloatParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BeginModify",
            "EndModify",
            "GetParameter",
            "SetParameter",
        }};
    };

    struct GizmoLambdaHitTarget
    {
        static constexpr std::string_view Name = "GizmoLambdaHitTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoLambdaStateTarget
    {
        static constexpr std::string_view Name = "GizmoLambdaStateTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoLineHandleComponent
    {
        static constexpr std::string_view Name = "GizmoLineHandleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Normal = 0x5A0;
            static constexpr std::uintptr_t HandleSize = 0x5B8;
            static constexpr std::uintptr_t Thickness = 0x5BC;
            static constexpr std::uintptr_t Direction = 0x5C0;
            static constexpr std::uintptr_t Length = 0x5D8;
            static constexpr std::uintptr_t bImageScale = 0x5DC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Normal", 0x5A0, "StructProperty"},
            {"HandleSize", 0x5B8, "FloatProperty"},
            {"Thickness", 0x5BC, "FloatProperty"},
            {"Direction", 0x5C0, "StructProperty"},
            {"Length", 0x5D8, "FloatProperty"},
            {"bImageScale", 0x5DC, "BoolProperty"},
        }};
    };

    struct GizmoLocalFloatParameterSource
    {
        static constexpr std::string_view Name = "GizmoLocalFloatParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseFloatParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x48;
            static constexpr std::uintptr_t LastChange = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x48, "FloatProperty"},
            {"LastChange", 0x4C, "StructProperty"},
        }};
    };

    struct GizmoLocalVec2ParameterSource
    {
        static constexpr std::string_view Name = "GizmoLocalVec2ParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseVec2ParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x48;
            static constexpr std::uintptr_t LastChange = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x48, "StructProperty"},
            {"LastChange", 0x58, "StructProperty"},
        }};
    };

    struct GizmoNilStateTarget
    {
        static constexpr std::string_view Name = "GizmoNilStateTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoObjectModifyStateTarget
    {
        static constexpr std::string_view Name = "GizmoObjectModifyStateTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TransactionManager = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransactionManager", 0x48, "InterfaceProperty"},
        }};
    };

    struct GizmoPerStateValueDouble
    {
        static constexpr std::string_view Name = "GizmoPerStateValueDouble";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x0;
            static constexpr std::uintptr_t Hover = 0x10;
            static constexpr std::uintptr_t Interact = 0x20;
            static constexpr std::uintptr_t Select = 0x30;
            static constexpr std::uintptr_t Subdue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Default", 0x0, "OptionalProperty"},
            {"Hover", 0x10, "OptionalProperty"},
            {"Interact", 0x20, "OptionalProperty"},
            {"Select", 0x30, "OptionalProperty"},
            {"Subdue", 0x40, "OptionalProperty"},
        }};
    };

    struct GizmoPerStateValueLinearColor
    {
        static constexpr std::string_view Name = "GizmoPerStateValueLinearColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x0;
            static constexpr std::uintptr_t Hover = 0x14;
            static constexpr std::uintptr_t Interact = 0x28;
            static constexpr std::uintptr_t Select = 0x3C;
            static constexpr std::uintptr_t Subdue = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Default", 0x0, "OptionalProperty"},
            {"Hover", 0x14, "OptionalProperty"},
            {"Interact", 0x28, "OptionalProperty"},
            {"Select", 0x3C, "OptionalProperty"},
            {"Subdue", 0x50, "OptionalProperty"},
        }};
    };

    struct GizmoPlaneScaleParameterSource
    {
        static constexpr std::string_view Name = "GizmoPlaneScaleParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseVec2ParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0x110;
            static constexpr std::uintptr_t TransformSource = 0x120;
            static constexpr std::uintptr_t ScaleMultiplier = 0x130;
            static constexpr std::uintptr_t bUseEqualScaling = 0x134;
            static constexpr std::uintptr_t bClampToZero = 0x135;
            static constexpr std::uintptr_t Parameter = 0x138;
            static constexpr std::uintptr_t LastChange = 0x148;
            static constexpr std::uintptr_t CurScaleOrigin = 0x168;
            static constexpr std::uintptr_t CurScaleNormal = 0x180;
            static constexpr std::uintptr_t CurScaleAxisX = 0x198;
            static constexpr std::uintptr_t CurScaleAxisY = 0x1B0;
            static constexpr std::uintptr_t InitialTransform = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"AxisSource", 0x110, "InterfaceProperty"},
            {"TransformSource", 0x120, "InterfaceProperty"},
            {"ScaleMultiplier", 0x130, "FloatProperty"},
            {"bUseEqualScaling", 0x134, "BoolProperty"},
            {"bClampToZero", 0x135, "BoolProperty"},
            {"Parameter", 0x138, "StructProperty"},
            {"LastChange", 0x148, "StructProperty"},
            {"CurScaleOrigin", 0x168, "StructProperty"},
            {"CurScaleNormal", 0x180, "StructProperty"},
            {"CurScaleAxisX", 0x198, "StructProperty"},
            {"CurScaleAxisY", 0x1B0, "StructProperty"},
            {"InitialTransform", 0x1D0, "StructProperty"},
        }};
    };

    struct GizmoPlaneTranslationParameterSource
    {
        static constexpr std::string_view Name = "GizmoPlaneTranslationParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseVec2ParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0xE8;
            static constexpr std::uintptr_t TransformSource = 0xF8;
            static constexpr std::uintptr_t Parameter = 0x108;
            static constexpr std::uintptr_t LastChange = 0x118;
            static constexpr std::uintptr_t CurTranslationOrigin = 0x138;
            static constexpr std::uintptr_t CurTranslationNormal = 0x150;
            static constexpr std::uintptr_t CurTranslationAxisX = 0x168;
            static constexpr std::uintptr_t CurTranslationAxisY = 0x180;
            static constexpr std::uintptr_t InitialTransform = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AxisSource", 0xE8, "InterfaceProperty"},
            {"TransformSource", 0xF8, "InterfaceProperty"},
            {"Parameter", 0x108, "StructProperty"},
            {"LastChange", 0x118, "StructProperty"},
            {"CurTranslationOrigin", 0x138, "StructProperty"},
            {"CurTranslationNormal", 0x150, "StructProperty"},
            {"CurTranslationAxisX", 0x168, "StructProperty"},
            {"CurTranslationAxisY", 0x180, "StructProperty"},
            {"InitialTransform", 0x1A0, "StructProperty"},
        }};
    };

    struct GizmoRectangleComponent
    {
        static constexpr std::string_view Name = "GizmoRectangleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectionX = 0x5A0;
            static constexpr std::uintptr_t DirectionY = 0x5B8;
            static constexpr std::uintptr_t bOrientYAccordingToCamera = 0x5D0;
            static constexpr std::uintptr_t OffsetX = 0x5D4;
            static constexpr std::uintptr_t OffsetY = 0x5D8;
            static constexpr std::uintptr_t LengthX = 0x5DC;
            static constexpr std::uintptr_t LengthY = 0x5E0;
            static constexpr std::uintptr_t Thickness = 0x5E4;
            static constexpr std::uintptr_t SegmentFlags = 0x5E8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DirectionX", 0x5A0, "StructProperty"},
            {"DirectionY", 0x5B8, "StructProperty"},
            {"bOrientYAccordingToCamera", 0x5D0, "BoolProperty"},
            {"OffsetX", 0x5D4, "FloatProperty"},
            {"OffsetY", 0x5D8, "FloatProperty"},
            {"LengthX", 0x5DC, "FloatProperty"},
            {"LengthY", 0x5E0, "FloatProperty"},
            {"Thickness", 0x5E4, "FloatProperty"},
            {"SegmentFlags", 0x5E8, "ByteProperty"},
        }};
    };

    struct GizmoRenderMultiTarget
    {
        static constexpr std::string_view Name = "GizmoRenderMultiTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UpdateVisibilityState",
        }};
    };

    struct GizmoRenderTarget
    {
        static constexpr std::string_view Name = "GizmoRenderTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoScaledAndUnscaledTransformSources
    {
        static constexpr std::string_view Name = "GizmoScaledAndUnscaledTransformSources";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseTransformSource";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaledTransformSource = 0x48;
            static constexpr std::uintptr_t UnscaledTransformSource = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScaledTransformSource", 0x48, "InterfaceProperty"},
            {"UnscaledTransformSource", 0x58, "InterfaceProperty"},
        }};
    };

    struct GizmoScaledTransformSource
    {
        static constexpr std::string_view Name = "GizmoScaledTransformSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseTransformSource";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildTransformSource = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChildTransformSource", 0x48, "InterfaceProperty"},
        }};
    };

    struct GizmoStateTarget
    {
        static constexpr std::string_view Name = "GizmoStateTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BeginUpdate",
            "CancelUpdate",
            "EndUpdate",
        }};
    };

    struct GizmoTransformChangeStateTarget
    {
        static constexpr std::string_view Name = "GizmoTransformChangeStateTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TransactionManager = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransactionManager", 0x48, "InterfaceProperty"},
        }};
    };

    struct GizmoTransformProxyTransformSource
    {
        static constexpr std::string_view Name = "GizmoTransformProxyTransformSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseTransformSource";
        struct Offsets
        {
            static constexpr std::uintptr_t Proxy = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Proxy", 0x48, "ObjectProperty"},
        }};
    };

    struct GizmoTransformSource
    {
        static constexpr std::string_view Name = "GizmoTransformSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetTransform",
            "SetTransform",
        }};
    };

    struct GizmoUniformScaleParameterSource
    {
        static constexpr std::string_view Name = "GizmoUniformScaleParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoBaseVec2ParameterSource";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0xB0;
            static constexpr std::uintptr_t TransformSource = 0xC0;
            static constexpr std::uintptr_t ScaleMultiplier = 0xD0;
            static constexpr std::uintptr_t Parameter = 0xD8;
            static constexpr std::uintptr_t LastChange = 0xE8;
            static constexpr std::uintptr_t CurScaleOrigin = 0x108;
            static constexpr std::uintptr_t CurScaleNormal = 0x120;
            static constexpr std::uintptr_t CurScaleAxisX = 0x138;
            static constexpr std::uintptr_t CurScaleAxisY = 0x150;
            static constexpr std::uintptr_t InitialTransform = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"AxisSource", 0xB0, "InterfaceProperty"},
            {"TransformSource", 0xC0, "InterfaceProperty"},
            {"ScaleMultiplier", 0xD0, "FloatProperty"},
            {"Parameter", 0xD8, "StructProperty"},
            {"LastChange", 0xE8, "StructProperty"},
            {"CurScaleOrigin", 0x108, "StructProperty"},
            {"CurScaleNormal", 0x120, "StructProperty"},
            {"CurScaleAxisX", 0x138, "StructProperty"},
            {"CurScaleAxisY", 0x150, "StructProperty"},
            {"InitialTransform", 0x170, "StructProperty"},
        }};
    };

    struct GizmoVec2ParameterChange
    {
        static constexpr std::string_view Name = "GizmoVec2ParameterChange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialValue = 0x0;
            static constexpr std::uintptr_t CurrentValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InitialValue", 0x0, "StructProperty"},
            {"CurrentValue", 0x10, "StructProperty"},
        }};
    };

    struct GizmoVec2ParameterSource
    {
        static constexpr std::string_view Name = "GizmoVec2ParameterSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BeginModify",
            "EndModify",
            "GetParameter",
            "SetParameter",
        }};
    };

    struct GizmoViewContext
    {
        static constexpr std::string_view Name = "GizmoViewContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GizmoWorldAxisSource
    {
        static constexpr std::string_view Name = "GizmoWorldAxisSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x30;
            static constexpr std::uintptr_t AxisIndex = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"origin", 0x30, "StructProperty"},
            {"AxisIndex", 0x48, "IntProperty"},
        }};
    };

    struct InputBehavior
    {
        static constexpr std::string_view Name = "InputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InputBehaviorSet
    {
        static constexpr std::string_view Name = "InputBehaviorSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Behaviors = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Behaviors", 0x28, "ArrayProperty"},
        }};
    };

    struct InputBehaviorSource
    {
        static constexpr std::string_view Name = "InputBehaviorSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InputDeviceRay
    {
        static constexpr std::string_view Name = "InputDeviceRay";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldRay = 0x0;
            static constexpr std::uintptr_t bHas2D = 0x30;
            static constexpr std::uintptr_t ScreenPosition = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WorldRay", 0x0, "StructProperty"},
            {"bHas2D", 0x30, "BoolProperty"},
            {"ScreenPosition", 0x38, "StructProperty"},
        }};
    };

    struct InputDeviceState
    {
        static constexpr std::string_view Name = "InputDeviceState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputDevice = 0x0;
            static constexpr std::uintptr_t bShiftKeyDown = 0x4;
            static constexpr std::uintptr_t bAltKeyDown = 0x5;
            static constexpr std::uintptr_t bCtrlKeyDown = 0x6;
            static constexpr std::uintptr_t bCmdKeyDown = 0x7;
            static constexpr std::uintptr_t Keyboard = 0x8;
            static constexpr std::uintptr_t Mouse = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InputDevice", 0x0, "EnumProperty"},
            {"bShiftKeyDown", 0x4, "BoolProperty"},
            {"bAltKeyDown", 0x5, "BoolProperty"},
            {"bCtrlKeyDown", 0x6, "BoolProperty"},
            {"bCmdKeyDown", 0x7, "BoolProperty"},
            {"Keyboard", 0x8, "StructProperty"},
            {"Mouse", 0x28, "StructProperty"},
        }};
    };

    struct InputRayHit
    {
        static constexpr std::string_view Name = "InputRayHit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bHit = 0x0;
            static constexpr std::uintptr_t HitDepth = 0x8;
            static constexpr std::uintptr_t HitNormal = 0x10;
            static constexpr std::uintptr_t bHasHitNormal = 0x28;
            static constexpr std::uintptr_t HitIdentifier = 0x2C;
            static constexpr std::uintptr_t HitObject = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bHit", 0x0, "BoolProperty"},
            {"HitDepth", 0x8, "DoubleProperty"},
            {"HitNormal", 0x10, "StructProperty"},
            {"bHasHitNormal", 0x28, "BoolProperty"},
            {"HitIdentifier", 0x2C, "IntProperty"},
            {"HitObject", 0x38, "WeakObjectProperty"},
        }};
    };

    struct InputRouter
    {
        static constexpr std::string_view Name = "InputRouter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoInvalidateOnHover = 0x28;
            static constexpr std::uintptr_t bAutoInvalidateOnCapture = 0x29;
            static constexpr std::uintptr_t ActiveInputBehaviors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAutoInvalidateOnHover", 0x28, "BoolProperty"},
            {"bAutoInvalidateOnCapture", 0x29, "BoolProperty"},
            {"ActiveInputBehaviors", 0x38, "ObjectProperty"},
        }};
    };

    struct InteractionMechanic
    {
        static constexpr std::string_view Name = "InteractionMechanic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveCommand
    {
        static constexpr std::string_view Name = "InteractiveCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveCommandArguments
    {
        static constexpr std::string_view Name = "InteractiveCommandArguments";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveCommandResult
    {
        static constexpr std::string_view Name = "InteractiveCommandResult";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveGizmo
    {
        static constexpr std::string_view Name = "InteractiveGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputBehaviors = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputBehaviors", 0x30, "ObjectProperty"},
        }};
    };

    struct InteractiveGizmoBuilder
    {
        static constexpr std::string_view Name = "InteractiveGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveGizmoManager
    {
        static constexpr std::string_view Name = "InteractiveGizmoManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveGizmos = 0x30;
            static constexpr std::uintptr_t GizmoBuilders = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveGizmos", 0x30, "ArrayProperty"},
            {"GizmoBuilders", 0x58, "MapProperty"},
        }};
    };

    struct InteractiveTool
    {
        static constexpr std::string_view Name = "InteractiveTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputBehaviors = 0x60;
            static constexpr std::uintptr_t ToolPropertyObjects = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputBehaviors", 0x60, "ObjectProperty"},
            {"ToolPropertyObjects", 0x68, "ArrayProperty"},
        }};
    };

    struct InteractiveToolBuilder
    {
        static constexpr std::string_view Name = "InteractiveToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveToolCameraFocusAPI
    {
        static constexpr std::string_view Name = "InteractiveToolCameraFocusAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveToolEditorGizmoAPI
    {
        static constexpr std::string_view Name = "InteractiveToolEditorGizmoAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveToolExclusiveToolAPI
    {
        static constexpr std::string_view Name = "InteractiveToolExclusiveToolAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveToolManageGeometrySelectionAPI
    {
        static constexpr std::string_view Name = "InteractiveToolManageGeometrySelectionAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveToolManager
    {
        static constexpr std::string_view Name = "InteractiveToolManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveLeftTool = 0x58;
            static constexpr std::uintptr_t ActiveRightTool = 0x60;
            static constexpr std::uintptr_t ToolBuilders = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveLeftTool", 0x58, "ObjectProperty"},
            {"ActiveRightTool", 0x60, "ObjectProperty"},
            {"ToolBuilders", 0x100, "MapProperty"},
        }};
    };

    struct InteractiveToolNestedAcceptCancelAPI
    {
        static constexpr std::string_view Name = "InteractiveToolNestedAcceptCancelAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveToolPropertySet
    {
        static constexpr std::string_view Name = "InteractiveToolPropertySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPropertiesMap = 0x38;
            static constexpr std::uintptr_t bIsPropertySetEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedPropertiesMap", 0x38, "MapProperty"},
            {"bIsPropertySetEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct InteractiveToolShutdownQueryAPI
    {
        static constexpr std::string_view Name = "InteractiveToolShutdownQueryAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveToolWithToolTargetsBuilder
    {
        static constexpr std::string_view Name = "InteractiveToolWithToolTargetsBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InteractiveToolsContext
    {
        static constexpr std::string_view Name = "InteractiveToolsContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputRouter = 0x58;
            static constexpr std::uintptr_t TargetManager = 0x60;
            static constexpr std::uintptr_t ToolManager = 0x68;
            static constexpr std::uintptr_t GizmoManager = 0x70;
            static constexpr std::uintptr_t ToolGroupManager = 0x78;
            static constexpr std::uintptr_t ContextObjectStore = 0x80;
            static constexpr std::uintptr_t ToolManagerClass = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InputRouter", 0x58, "ObjectProperty"},
            {"TargetManager", 0x60, "ObjectProperty"},
            {"ToolManager", 0x68, "ObjectProperty"},
            {"GizmoManager", 0x70, "ObjectProperty"},
            {"ToolGroupManager", 0x78, "ObjectProperty"},
            {"ContextObjectStore", 0x80, "ObjectProperty"},
            {"ToolManagerClass", 0x2D0, "SoftClassProperty"},
        }};
    };

    struct InternalToolFrameworkActor
    {
        static constexpr std::string_view Name = "InternalToolFrameworkActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSelectableInEditor = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsSelectableInEditor", 0x278, "BoolProperty"},
        }};
    };

    struct IntervalGizmo
    {
        static constexpr std::string_view Name = "IntervalGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTarget = 0x38;
            static constexpr std::uintptr_t World = 0x88;
            static constexpr std::uintptr_t GizmoActor = 0x90;
            static constexpr std::uintptr_t TransformProxy = 0x98;
            static constexpr std::uintptr_t ActiveComponents = 0xA0;
            static constexpr std::uintptr_t ActiveGizmos = 0xB0;
            static constexpr std::uintptr_t UpIntervalSource = 0xC0;
            static constexpr std::uintptr_t DownIntervalSource = 0xC8;
            static constexpr std::uintptr_t ForwardIntervalSource = 0xD0;
            static constexpr std::uintptr_t BackwardIntervalSource = 0xD8;
            static constexpr std::uintptr_t RightIntervalSource = 0xE0;
            static constexpr std::uintptr_t LeftIntervalSource = 0xE8;
            static constexpr std::uintptr_t AxisXSource = 0xF0;
            static constexpr std::uintptr_t AxisYSource = 0xF8;
            static constexpr std::uintptr_t AxisZSource = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"StateTarget", 0x38, "ObjectProperty"},
            {"World", 0x88, "ObjectProperty"},
            {"GizmoActor", 0x90, "ObjectProperty"},
            {"TransformProxy", 0x98, "ObjectProperty"},
            {"ActiveComponents", 0xA0, "ArrayProperty"},
            {"ActiveGizmos", 0xB0, "ArrayProperty"},
            {"UpIntervalSource", 0xC0, "ObjectProperty"},
            {"DownIntervalSource", 0xC8, "ObjectProperty"},
            {"ForwardIntervalSource", 0xD0, "ObjectProperty"},
            {"BackwardIntervalSource", 0xD8, "ObjectProperty"},
            {"RightIntervalSource", 0xE0, "ObjectProperty"},
            {"LeftIntervalSource", 0xE8, "ObjectProperty"},
            {"AxisXSource", 0xF0, "ObjectProperty"},
            {"AxisYSource", 0xF8, "ObjectProperty"},
            {"AxisZSource", 0x100, "ObjectProperty"},
        }};
    };

    struct IntervalGizmoActor
    {
        static constexpr std::string_view Name = "IntervalGizmoActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GizmoActor";
        struct Offsets
        {
            static constexpr std::uintptr_t UpIntervalComponent = 0x280;
            static constexpr std::uintptr_t DownIntervalComponent = 0x288;
            static constexpr std::uintptr_t ForwardIntervalComponent = 0x290;
            static constexpr std::uintptr_t BackwardIntervalComponent = 0x298;
            static constexpr std::uintptr_t RightIntervalComponent = 0x2A0;
            static constexpr std::uintptr_t LeftIntervalComponent = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"UpIntervalComponent", 0x280, "ObjectProperty"},
            {"DownIntervalComponent", 0x288, "ObjectProperty"},
            {"ForwardIntervalComponent", 0x290, "ObjectProperty"},
            {"BackwardIntervalComponent", 0x298, "ObjectProperty"},
            {"RightIntervalComponent", 0x2A0, "ObjectProperty"},
            {"LeftIntervalComponent", 0x2A8, "ObjectProperty"},
        }};
    };

    struct IntervalGizmoBuilder
    {
        static constexpr std::string_view Name = "IntervalGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct KeyAsModifierInputBehavior
    {
        static constexpr std::string_view Name = "KeyAsModifierInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct KeyInputBehavior
    {
        static constexpr std::string_view Name = "KeyInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct KeyboardInputDeviceState
    {
        static constexpr std::string_view Name = "KeyboardInputDeviceState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveKey = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveKey", 0x0, "StructProperty"},
        }};
    };

    struct LocalClickDragInputBehavior
    {
        static constexpr std::string_view Name = "LocalClickDragInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClickDragInputBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t bUpdateModifiersDuringDrag = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUpdateModifiersDuringDrag", 0xE0, "BoolProperty"},
        }};
    };

    struct LocalDoubleClickInputBehavior
    {
        static constexpr std::string_view Name = "LocalDoubleClickInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DoubleClickInputBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t HitTestOnRelease = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HitTestOnRelease", 0xB0, "BoolProperty"},
        }};
    };

    struct LocalInputBehaviorSource
    {
        static constexpr std::string_view Name = "LocalInputBehaviorSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LocalMouseHoverBehavior
    {
        static constexpr std::string_view Name = "LocalMouseHoverBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MouseHoverBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LocalSingleClickInputBehavior
    {
        static constexpr std::string_view Name = "LocalSingleClickInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleClickInputBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t HitTestOnRelease = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HitTestOnRelease", 0xB0, "BoolProperty"},
        }};
    };

    struct LocalTwoAxisPropertyEditInputBehavior
    {
        static constexpr std::string_view Name = "LocalTwoAxisPropertyEditInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TwoAxisPropertyEditInputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MaterialProvider
    {
        static constexpr std::string_view Name = "MaterialProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshDescriptionCommitter
    {
        static constexpr std::string_view Name = "MeshDescriptionCommitter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshDescriptionProvider
    {
        static constexpr std::string_view Name = "MeshDescriptionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshSelectionSet
    {
        static constexpr std::string_view Name = "MeshSelectionSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SelectionSet";
        struct Offsets
        {
            static constexpr std::uintptr_t Vertices = 0x40;
            static constexpr std::uintptr_t Edges = 0x50;
            static constexpr std::uintptr_t Faces = 0x60;
            static constexpr std::uintptr_t Groups = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Vertices", 0x40, "ArrayProperty"},
            {"Edges", 0x50, "ArrayProperty"},
            {"Faces", 0x60, "ArrayProperty"},
            {"Groups", 0x70, "ArrayProperty"},
        }};
    };

    struct MeshSurfacePointTool
    {
        static constexpr std::string_view Name = "MeshSurfacePointTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SingleSelectionTool";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetWorld = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetWorld", 0x110, "WeakObjectProperty"},
        }};
    };

    struct MeshSurfacePointToolBuilder
    {
        static constexpr std::string_view Name = "MeshSurfacePointToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolWithToolTargetsBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MouseButtonAsModifierInputBehavior
    {
        static constexpr std::string_view Name = "MouseButtonAsModifierInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "KeyAsModifierInputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MouseHoverBehavior
    {
        static constexpr std::string_view Name = "MouseHoverBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MouseInputDeviceState
    {
        static constexpr std::string_view Name = "MouseInputDeviceState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Middle = 0x20;
            static constexpr std::uintptr_t Right = 0x40;
            static constexpr std::uintptr_t WheelDelta = 0x60;
            static constexpr std::uintptr_t Position2D = 0x68;
            static constexpr std::uintptr_t Delta2D = 0x78;
            static constexpr std::uintptr_t WorldRay = 0x88;
            static constexpr std::uintptr_t UnboundedPosition2D = 0xB8;
            static constexpr std::uintptr_t UnboundedMouseDelta2D = 0xC8;
            static constexpr std::uintptr_t UnboundedWorldRay = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Left", 0x0, "StructProperty"},
            {"Middle", 0x20, "StructProperty"},
            {"Right", 0x40, "StructProperty"},
            {"WheelDelta", 0x60, "FloatProperty"},
            {"Position2D", 0x68, "StructProperty"},
            {"Delta2D", 0x78, "StructProperty"},
            {"WorldRay", 0x88, "StructProperty"},
            {"UnboundedPosition2D", 0xB8, "StructProperty"},
            {"UnboundedMouseDelta2D", 0xC8, "StructProperty"},
            {"UnboundedWorldRay", 0xD8, "StructProperty"},
        }};
    };

    struct MouseWheelInputBehavior
    {
        static constexpr std::string_view Name = "MouseWheelInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnyButtonInputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MouseWheelModifierInputBehavior
    {
        static constexpr std::string_view Name = "MouseWheelModifierInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MouseWheelInputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MultiClickSequenceInputBehavior
    {
        static constexpr std::string_view Name = "MultiClickSequenceInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnyButtonInputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MultiSelectionTool
    {
        static constexpr std::string_view Name = "MultiSelectionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Targets = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Targets", 0xB8, "ArrayProperty"},
        }};
    };

    struct PhysicsDataSource
    {
        static constexpr std::string_view Name = "PhysicsDataSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlanePositionGizmo
    {
        static constexpr std::string_view Name = "PlanePositionGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t AxisSource = 0x48;
            static constexpr std::uintptr_t ParameterSource = 0x58;
            static constexpr std::uintptr_t HitTarget = 0x68;
            static constexpr std::uintptr_t StateTarget = 0x78;
            static constexpr std::uintptr_t MouseBehavior = 0x88;
            static constexpr std::uintptr_t bEnableSignedAxis = 0x90;
            static constexpr std::uintptr_t bFlipX = 0x91;
            static constexpr std::uintptr_t bFlipY = 0x92;
            static constexpr std::uintptr_t bInInteraction = 0x100;
            static constexpr std::uintptr_t InteractionOrigin = 0x108;
            static constexpr std::uintptr_t InteractionNormal = 0x120;
            static constexpr std::uintptr_t InteractionAxisX = 0x138;
            static constexpr std::uintptr_t InteractionAxisY = 0x150;
            static constexpr std::uintptr_t InteractionStartPoint = 0x168;
            static constexpr std::uintptr_t InteractionCurPoint = 0x180;
            static constexpr std::uintptr_t InteractionStartParameter = 0x198;
            static constexpr std::uintptr_t InteractionCurParameter = 0x1A8;
            static constexpr std::uintptr_t ParameterSigns = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"AxisSource", 0x48, "InterfaceProperty"},
            {"ParameterSource", 0x58, "InterfaceProperty"},
            {"HitTarget", 0x68, "InterfaceProperty"},
            {"StateTarget", 0x78, "InterfaceProperty"},
            {"MouseBehavior", 0x88, "ObjectProperty"},
            {"bEnableSignedAxis", 0x90, "BoolProperty"},
            {"bFlipX", 0x91, "BoolProperty"},
            {"bFlipY", 0x92, "BoolProperty"},
            {"bInInteraction", 0x100, "BoolProperty"},
            {"InteractionOrigin", 0x108, "StructProperty"},
            {"InteractionNormal", 0x120, "StructProperty"},
            {"InteractionAxisX", 0x138, "StructProperty"},
            {"InteractionAxisY", 0x150, "StructProperty"},
            {"InteractionStartPoint", 0x168, "StructProperty"},
            {"InteractionCurPoint", 0x180, "StructProperty"},
            {"InteractionStartParameter", 0x198, "StructProperty"},
            {"InteractionCurParameter", 0x1A8, "StructProperty"},
            {"ParameterSigns", 0x1B8, "StructProperty"},
        }};
    };

    struct PlanePositionGizmoBuilder
    {
        static constexpr std::string_view Name = "PlanePositionGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PrimitiveComponentBackedTarget
    {
        static constexpr std::string_view Name = "PrimitiveComponentBackedTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponentBackedTarget";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PrimitiveComponentToolTarget
    {
        static constexpr std::string_view Name = "PrimitiveComponentToolTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ToolTarget";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PrimitiveComponentToolTargetFactory
    {
        static constexpr std::string_view Name = "PrimitiveComponentToolTargetFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ToolTargetFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RepositionableTransformGizmo
    {
        static constexpr std::string_view Name = "RepositionableTransformGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CombinedTransformGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t RepositionStateTarget = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RepositionStateTarget", 0x5B0, "ObjectProperty"},
        }};
    };

    struct RepositionableTransformGizmoBuilder
    {
        static constexpr std::string_view Name = "RepositionableTransformGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CombinedTransformGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ScalableSphereGizmo
    {
        static constexpr std::string_view Name = "ScalableSphereGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t HitErrorThreshold = 0x70;
            static constexpr std::uintptr_t TransactionDescription = 0x78;
            static constexpr std::uintptr_t Radius = 0x88;
            static constexpr std::uintptr_t bIsHovering = 0x8C;
            static constexpr std::uintptr_t bIsDragging = 0x8D;
            static constexpr std::uintptr_t ActiveTarget = 0x90;
            static constexpr std::uintptr_t ActiveAxis = 0x98;
            static constexpr std::uintptr_t DragStartWorldPosition = 0xB0;
            static constexpr std::uintptr_t DragCurrentPositionProjected = 0xC8;
            static constexpr std::uintptr_t InteractionStartParameter = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"HitErrorThreshold", 0x70, "FloatProperty"},
            {"TransactionDescription", 0x78, "TextProperty"},
            {"Radius", 0x88, "FloatProperty"},
            {"bIsHovering", 0x8C, "BoolProperty"},
            {"bIsDragging", 0x8D, "BoolProperty"},
            {"ActiveTarget", 0x90, "ObjectProperty"},
            {"ActiveAxis", 0x98, "StructProperty"},
            {"DragStartWorldPosition", 0xB0, "StructProperty"},
            {"DragCurrentPositionProjected", 0xC8, "StructProperty"},
            {"InteractionStartParameter", 0xE0, "FloatProperty"},
        }};
    };

    struct ScalableSphereGizmoBuilder
    {
        static constexpr std::string_view Name = "ScalableSphereGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ScalableSphereGizmoInputBehavior
    {
        static constexpr std::string_view Name = "ScalableSphereGizmoInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnyButtonInputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SceneComponentBackedTarget
    {
        static constexpr std::string_view Name = "SceneComponentBackedTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneObjectTarget";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SceneComponentToolTarget
    {
        static constexpr std::string_view Name = "SceneComponentToolTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ToolTarget";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SceneComponentToolTargetFactory
    {
        static constexpr std::string_view Name = "SceneComponentToolTargetFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ToolTargetFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SceneObjectTarget
    {
        static constexpr std::string_view Name = "SceneObjectTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SceneSnappingManager
    {
        static constexpr std::string_view Name = "SceneSnappingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SelectionSet
    {
        static constexpr std::string_view Name = "SelectionSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimpleLambdaInteractiveGizmoBuilder
    {
        static constexpr std::string_view Name = "SimpleLambdaInteractiveGizmoBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmoBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimpleSingleClickGizmo
    {
        static constexpr std::string_view Name = "SimpleSingleClickGizmo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveGizmo";
        struct Offsets
        {
            static constexpr std::uintptr_t HitTarget = 0x60;
            static constexpr std::uintptr_t ClickBehavior = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HitTarget", 0x60, "InterfaceProperty"},
            {"ClickBehavior", 0x70, "ObjectProperty"},
        }};
    };

    struct SingleClickInputBehavior
    {
        static constexpr std::string_view Name = "SingleClickInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnyButtonInputBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t HitTestOnRelease = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HitTestOnRelease", 0xB0, "BoolProperty"},
        }};
    };

    struct SingleClickOrDragInputBehavior
    {
        static constexpr std::string_view Name = "SingleClickOrDragInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnyButtonInputBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t bBeginDragIfClickTargetNotHit = 0xE0;
            static constexpr std::uintptr_t ClickDistanceThreshold = 0xE4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bBeginDragIfClickTargetNotHit", 0xE0, "BoolProperty"},
            {"ClickDistanceThreshold", 0xE4, "FloatProperty"},
        }};
    };

    struct SingleClickTool
    {
        static constexpr std::string_view Name = "SingleClickTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t InputBehaviors = 0x60;
            static constexpr std::uintptr_t ToolPropertyObjects = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputBehaviors", 0x60, "ObjectProperty"},
            {"ToolPropertyObjects", 0x68, "ArrayProperty"},
        }};
    };

    struct SingleClickToolBuilder
    {
        static constexpr std::string_view Name = "SingleClickToolBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveToolBuilder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SingleKeyCaptureBehavior
    {
        static constexpr std::string_view Name = "SingleKeyCaptureBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SingleSelectionTool
    {
        static constexpr std::string_view Name = "SingleSelectionTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractiveTool";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Target", 0xB8, "ObjectProperty"},
        }};
    };

    struct SkeletalMeshBackedTarget
    {
        static constexpr std::string_view Name = "SkeletalMeshBackedTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetBackedTarget";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StaticMeshBackedTarget
    {
        static constexpr std::string_view Name = "StaticMeshBackedTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetBackedTarget";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolContextTransactionProvider
    {
        static constexpr std::string_view Name = "ToolContextTransactionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolFrameworkComponent
    {
        static constexpr std::string_view Name = "ToolFrameworkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolGroupManager
    {
        static constexpr std::string_view Name = "ToolGroupManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledGroups = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnabledGroups", 0x38, "MapProperty"},
        }};
    };

    struct ToolTarget
    {
        static constexpr std::string_view Name = "ToolTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolTargetFactory
    {
        static constexpr std::string_view Name = "ToolTargetFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolTargetManager
    {
        static constexpr std::string_view Name = "ToolTargetManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Factories = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Factories", 0x30, "ArrayProperty"},
        }};
    };

    struct ToolsContextCursorAPI
    {
        static constexpr std::string_view Name = "ToolsContextCursorAPI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransformProxy
    {
        static constexpr std::string_view Name = "TransformProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bRotatePerObject = 0xD0;
            static constexpr std::uintptr_t bSetPivotMode = 0xD1;
            static constexpr std::uintptr_t SharedTransform = 0xF0;
            static constexpr std::uintptr_t InitialSharedTransform = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bRotatePerObject", 0xD0, "BoolProperty"},
            {"bSetPivotMode", 0xD1, "BoolProperty"},
            {"SharedTransform", 0xF0, "StructProperty"},
            {"InitialSharedTransform", 0x150, "StructProperty"},
        }};
    };

    struct TwoAxisPropertyEditInputBehavior
    {
        static constexpr std::string_view Name = "TwoAxisPropertyEditInputBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputBehavior";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ViewAdjustedStaticMeshGizmoComponent
    {
        static constexpr std::string_view Name = "ViewAdjustedStaticMeshGizmoComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GizmoViewContext = 0x6A8;
            static constexpr std::uintptr_t SubstituteInteractionComponent = 0x6B0;
            static constexpr std::uintptr_t HoverOverrideMaterial = 0x6B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GizmoViewContext", 0x6A8, "ObjectProperty"},
            {"SubstituteInteractionComponent", 0x6B0, "ObjectProperty"},
            {"HoverOverrideMaterial", 0x6B8, "ObjectProperty"},
        }};
    };

    struct WidgetBaseBehavior
    {
        static constexpr std::string_view Name = "WidgetBaseBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
