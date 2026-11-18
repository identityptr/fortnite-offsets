#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiveLinkInterface
{
    struct CachedSubjectFrame
    {
        static constexpr std::string_view Name = "CachedSubjectFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkAnimationFrameData
    {
        static constexpr std::string_view Name = "LiveLinkAnimationFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseFrameData";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transforms", 0x60, "ArrayProperty"},
        }};
    };

    struct LiveLinkAnimationRole
    {
        static constexpr std::string_view Name = "LiveLinkAnimationRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkBasicRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkBaseBlueprintData
    {
        static constexpr std::string_view Name = "LiveLinkBaseBlueprintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkBaseFrameData
    {
        static constexpr std::string_view Name = "LiveLinkBaseFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldTime = 0x0;
            static constexpr std::uintptr_t MetaData = 0x10;
            static constexpr std::uintptr_t PropertyValues = 0x30;
            static constexpr std::uintptr_t FrameId = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WorldTime", 0x0, "StructProperty"},
            {"MetaData", 0x10, "StructProperty"},
            {"PropertyValues", 0x30, "ArrayProperty"},
            {"FrameId", 0x58, "IntProperty"},
        }};
    };

    struct LiveLinkBaseStaticData
    {
        static constexpr std::string_view Name = "LiveLinkBaseStaticData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyNames = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyNames", 0x0, "ArrayProperty"},
        }};
    };

    struct LiveLinkBasicBlueprintData
    {
        static constexpr std::string_view Name = "LiveLinkBasicBlueprintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseBlueprintData";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticData = 0x8;
            static constexpr std::uintptr_t FrameData = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StaticData", 0x8, "StructProperty"},
            {"FrameData", 0x18, "StructProperty"},
        }};
    };

    struct LiveLinkBasicRole
    {
        static constexpr std::string_view Name = "LiveLinkBasicRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkCameraBlueprintData
    {
        static constexpr std::string_view Name = "LiveLinkCameraBlueprintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseBlueprintData";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticData = 0x8;
            static constexpr std::uintptr_t FrameData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StaticData", 0x8, "StructProperty"},
            {"FrameData", 0x30, "StructProperty"},
        }};
    };

    struct LiveLinkCameraFrameData
    {
        static constexpr std::string_view Name = "LiveLinkCameraFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkTransformFrameData";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldOfView = 0xC0;
            static constexpr std::uintptr_t AspectRatio = 0xC4;
            static constexpr std::uintptr_t FocalLength = 0xC8;
            static constexpr std::uintptr_t Aperture = 0xCC;
            static constexpr std::uintptr_t FocusDistance = 0xD0;
            static constexpr std::uintptr_t ProjectionMode = 0xD4;
            static constexpr std::uintptr_t FilmBackWidth = 0xD8;
            static constexpr std::uintptr_t FilmBackHeight = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FieldOfView", 0xC0, "FloatProperty"},
            {"AspectRatio", 0xC4, "FloatProperty"},
            {"FocalLength", 0xC8, "FloatProperty"},
            {"Aperture", 0xCC, "FloatProperty"},
            {"FocusDistance", 0xD0, "FloatProperty"},
            {"ProjectionMode", 0xD4, "EnumProperty"},
            {"FilmBackWidth", 0xD8, "FloatProperty"},
            {"FilmBackHeight", 0xDC, "FloatProperty"},
        }};
    };

    struct LiveLinkCameraRole
    {
        static constexpr std::string_view Name = "LiveLinkCameraRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkTransformRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkCameraStaticData
    {
        static constexpr std::string_view Name = "LiveLinkCameraStaticData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkTransformStaticData";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFieldOfViewSupported = 0x18;
            static constexpr std::uintptr_t bIsAspectRatioSupported = 0x19;
            static constexpr std::uintptr_t bIsFocalLengthSupported = 0x1A;
            static constexpr std::uintptr_t bIsProjectionModeSupported = 0x1B;
            static constexpr std::uintptr_t FilmBackWidth = 0x1C;
            static constexpr std::uintptr_t FilmBackHeight = 0x20;
            static constexpr std::uintptr_t bIsApertureSupported = 0x24;
            static constexpr std::uintptr_t bIsFocusDistanceSupported = 0x25;
            static constexpr std::uintptr_t bIsDepthOfFieldSupported = 0x26;
            static constexpr std::uintptr_t bIsDynamicFilmbackSupported = 0x27;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bIsFieldOfViewSupported", 0x18, "BoolProperty"},
            {"bIsAspectRatioSupported", 0x19, "BoolProperty"},
            {"bIsFocalLengthSupported", 0x1A, "BoolProperty"},
            {"bIsProjectionModeSupported", 0x1B, "BoolProperty"},
            {"FilmBackWidth", 0x1C, "FloatProperty"},
            {"FilmBackHeight", 0x20, "FloatProperty"},
            {"bIsApertureSupported", 0x24, "BoolProperty"},
            {"bIsFocusDistanceSupported", 0x25, "BoolProperty"},
            {"bIsDepthOfFieldSupported", 0x26, "BoolProperty"},
            {"bIsDynamicFilmbackSupported", 0x27, "BoolProperty"},
        }};
    };

    struct LiveLinkCharacterFrameData
    {
        static constexpr std::string_view Name = "LiveLinkCharacterFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkAnimationFrameData";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transform", 0x70, "StructProperty"},
        }};
    };

    struct LiveLinkCharacterRole
    {
        static constexpr std::string_view Name = "LiveLinkCharacterRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkAnimationRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkCharacterStaticData
    {
        static constexpr std::string_view Name = "LiveLinkCharacterStaticData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkSkeletonStaticData";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLocationSupported = 0x30;
            static constexpr std::uintptr_t bIsRotationSupported = 0x31;
            static constexpr std::uintptr_t bIsScaleSupported = 0x32;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsLocationSupported", 0x30, "BoolProperty"},
            {"bIsRotationSupported", 0x31, "BoolProperty"},
            {"bIsScaleSupported", 0x32, "BoolProperty"},
        }};
    };

    struct LiveLinkController
    {
        static constexpr std::string_view Name = "LiveLinkController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkCurveConversionSettings
    {
        static constexpr std::string_view Name = "LiveLinkCurveConversionSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveConversionAssetMap = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurveConversionAssetMap", 0x0, "MapProperty"},
        }};
    };

    struct LiveLinkCurveElement
    {
        static constexpr std::string_view Name = "LiveLinkCurveElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveName = 0x0;
            static constexpr std::uintptr_t CurveValue = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurveName", 0x0, "NameProperty"},
            {"CurveValue", 0x4, "FloatProperty"},
        }};
    };

    struct LiveLinkCurveRemapSettings
    {
        static constexpr std::string_view Name = "LiveLinkCurveRemapSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveConversionSettings = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurveConversionSettings", 0xB8, "StructProperty"},
        }};
    };

    struct LiveLinkDefaultSourceSettings
    {
        static constexpr std::string_view Name = "LiveLinkDefaultSourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSourceFrameBufferSize = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultSourceFrameBufferSize", 0x28, "IntProperty"},
        }};
    };

    struct LiveLinkDefaultSubjectSettings
    {
        static constexpr std::string_view Name = "LiveLinkDefaultSubjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bRebroadcastSubjectsByDefault = 0x28;
            static constexpr std::uintptr_t bAllowEditingRebroadcastProperty = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bRebroadcastSubjectsByDefault", 0x28, "BoolProperty"},
            {"bAllowEditingRebroadcastProperty", 0x29, "BoolProperty"},
        }};
    };

    struct LiveLinkFloatAnimationFrameData
    {
        static constexpr std::string_view Name = "LiveLinkFloatAnimationFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseFrameData";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transforms", 0x60, "ArrayProperty"},
        }};
    };

    struct LiveLinkFrameData
    {
        static constexpr std::string_view Name = "LiveLinkFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transforms = 0x0;
            static constexpr std::uintptr_t CurveElements = 0x10;
            static constexpr std::uintptr_t WorldTime = 0x20;
            static constexpr std::uintptr_t MetaData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Transforms", 0x0, "ArrayProperty"},
            {"CurveElements", 0x10, "ArrayProperty"},
            {"WorldTime", 0x20, "StructProperty"},
            {"MetaData", 0x30, "StructProperty"},
        }};
    };

    struct LiveLinkFrameInterpolationProcessor
    {
        static constexpr std::string_view Name = "LiveLinkFrameInterpolationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkFramePreProcessor
    {
        static constexpr std::string_view Name = "LiveLinkFramePreProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkFrameRate
    {
        static constexpr std::string_view Name = "LiveLinkFrameRate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FrameRate";
        struct Offsets
        {
            static constexpr std::uintptr_t Numerator = 0x0;
            static constexpr std::uintptr_t Denominator = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Numerator", 0x0, "IntProperty"},
            {"Denominator", 0x4, "IntProperty"},
        }};
    };

    struct LiveLinkFrameTranslator
    {
        static constexpr std::string_view Name = "LiveLinkFrameTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkGamepadInputDeviceBlueprintData
    {
        static constexpr std::string_view Name = "LiveLinkGamepadInputDeviceBlueprintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseBlueprintData";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticData = 0x8;
            static constexpr std::uintptr_t FrameData = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StaticData", 0x8, "StructProperty"},
            {"FrameData", 0x18, "StructProperty"},
        }};
    };

    struct LiveLinkGamepadInputDeviceFrameData
    {
        static constexpr std::string_view Name = "LiveLinkGamepadInputDeviceFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseFrameData";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftAnalogX = 0x60;
            static constexpr std::uintptr_t LeftAnalogY = 0x64;
            static constexpr std::uintptr_t RightAnalogX = 0x68;
            static constexpr std::uintptr_t RightAnalogY = 0x6C;
            static constexpr std::uintptr_t LeftTriggerAnalog = 0x70;
            static constexpr std::uintptr_t RightTriggerAnalog = 0x74;
            static constexpr std::uintptr_t LeftThumb = 0x78;
            static constexpr std::uintptr_t RightThumb = 0x7C;
            static constexpr std::uintptr_t SpecialLeft = 0x80;
            static constexpr std::uintptr_t SpecialLeft_X = 0x84;
            static constexpr std::uintptr_t SpecialLeft_Y = 0x88;
            static constexpr std::uintptr_t SpecialRight = 0x8C;
            static constexpr std::uintptr_t FaceButtonBottom = 0x90;
            static constexpr std::uintptr_t FaceButtonRight = 0x94;
            static constexpr std::uintptr_t FaceButtonLeft = 0x98;
            static constexpr std::uintptr_t FaceButtonTop = 0x9C;
            static constexpr std::uintptr_t LeftShoulder = 0xA0;
            static constexpr std::uintptr_t RightShoulder = 0xA4;
            static constexpr std::uintptr_t LeftTriggerThreshold = 0xA8;
            static constexpr std::uintptr_t RightTriggerThreshold = 0xAC;
            static constexpr std::uintptr_t DPadUp = 0xB0;
            static constexpr std::uintptr_t DPadDown = 0xB4;
            static constexpr std::uintptr_t DPadRight = 0xB8;
            static constexpr std::uintptr_t DPadLeft = 0xBC;
            static constexpr std::uintptr_t LeftStickUp = 0xC0;
            static constexpr std::uintptr_t LeftStickDown = 0xC4;
            static constexpr std::uintptr_t LeftStickRight = 0xC8;
            static constexpr std::uintptr_t LeftStickLeft = 0xCC;
            static constexpr std::uintptr_t RightStickUp = 0xD0;
            static constexpr std::uintptr_t RightStickDown = 0xD4;
            static constexpr std::uintptr_t RightStickRight = 0xD8;
            static constexpr std::uintptr_t RightStickLeft = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"LeftAnalogX", 0x60, "FloatProperty"},
            {"LeftAnalogY", 0x64, "FloatProperty"},
            {"RightAnalogX", 0x68, "FloatProperty"},
            {"RightAnalogY", 0x6C, "FloatProperty"},
            {"LeftTriggerAnalog", 0x70, "FloatProperty"},
            {"RightTriggerAnalog", 0x74, "FloatProperty"},
            {"LeftThumb", 0x78, "FloatProperty"},
            {"RightThumb", 0x7C, "FloatProperty"},
            {"SpecialLeft", 0x80, "FloatProperty"},
            {"SpecialLeft_X", 0x84, "FloatProperty"},
            {"SpecialLeft_Y", 0x88, "FloatProperty"},
            {"SpecialRight", 0x8C, "FloatProperty"},
            {"FaceButtonBottom", 0x90, "FloatProperty"},
            {"FaceButtonRight", 0x94, "FloatProperty"},
            {"FaceButtonLeft", 0x98, "FloatProperty"},
            {"FaceButtonTop", 0x9C, "FloatProperty"},
            {"LeftShoulder", 0xA0, "FloatProperty"},
            {"RightShoulder", 0xA4, "FloatProperty"},
            {"LeftTriggerThreshold", 0xA8, "FloatProperty"},
            {"RightTriggerThreshold", 0xAC, "FloatProperty"},
            {"DPadUp", 0xB0, "FloatProperty"},
            {"DPadDown", 0xB4, "FloatProperty"},
            {"DPadRight", 0xB8, "FloatProperty"},
            {"DPadLeft", 0xBC, "FloatProperty"},
            {"LeftStickUp", 0xC0, "FloatProperty"},
            {"LeftStickDown", 0xC4, "FloatProperty"},
            {"LeftStickRight", 0xC8, "FloatProperty"},
            {"LeftStickLeft", 0xCC, "FloatProperty"},
            {"RightStickUp", 0xD0, "FloatProperty"},
            {"RightStickDown", 0xD4, "FloatProperty"},
            {"RightStickRight", 0xD8, "FloatProperty"},
            {"RightStickLeft", 0xDC, "FloatProperty"},
        }};
    };

    struct LiveLinkGamepadInputDeviceStaticData
    {
        static constexpr std::string_view Name = "LiveLinkGamepadInputDeviceStaticData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseStaticData";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyNames = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyNames", 0x0, "ArrayProperty"},
        }};
    };

    struct LiveLinkHubSessionExtraData
    {
        static constexpr std::string_view Name = "LiveLinkHubSessionExtraData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkInputDeviceRole
    {
        static constexpr std::string_view Name = "LiveLinkInputDeviceRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkBasicRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkInterpolationSettings
    {
        static constexpr std::string_view Name = "LiveLinkInterpolationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseInterpolation = 0x0;
            static constexpr std::uintptr_t InterpolationOffset = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseInterpolation", 0x0, "BoolProperty"},
            {"InterpolationOffset", 0x4, "FloatProperty"},
        }};
    };

    struct LiveLinkLightBlueprintData
    {
        static constexpr std::string_view Name = "LiveLinkLightBlueprintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseBlueprintData";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticData = 0x8;
            static constexpr std::uintptr_t FrameData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StaticData", 0x8, "StructProperty"},
            {"FrameData", 0x30, "StructProperty"},
        }};
    };

    struct LiveLinkLightFrameData
    {
        static constexpr std::string_view Name = "LiveLinkLightFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkTransformFrameData";
        struct Offsets
        {
            static constexpr std::uintptr_t Temperature = 0xC0;
            static constexpr std::uintptr_t Intensity = 0xC4;
            static constexpr std::uintptr_t LightColor = 0xC8;
            static constexpr std::uintptr_t InnerConeAngle = 0xCC;
            static constexpr std::uintptr_t OuterConeAngle = 0xD0;
            static constexpr std::uintptr_t AttenuationRadius = 0xD4;
            static constexpr std::uintptr_t SourceRadius = 0xD8;
            static constexpr std::uintptr_t SoftSourceRadius = 0xDC;
            static constexpr std::uintptr_t SourceLength = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Temperature", 0xC0, "FloatProperty"},
            {"Intensity", 0xC4, "FloatProperty"},
            {"LightColor", 0xC8, "StructProperty"},
            {"InnerConeAngle", 0xCC, "FloatProperty"},
            {"OuterConeAngle", 0xD0, "FloatProperty"},
            {"AttenuationRadius", 0xD4, "FloatProperty"},
            {"SourceRadius", 0xD8, "FloatProperty"},
            {"SoftSourceRadius", 0xDC, "FloatProperty"},
            {"SourceLength", 0xE0, "FloatProperty"},
        }};
    };

    struct LiveLinkLightRole
    {
        static constexpr std::string_view Name = "LiveLinkLightRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkTransformRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkLightStaticData
    {
        static constexpr std::string_view Name = "LiveLinkLightStaticData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkTransformStaticData";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTemperatureSupported = 0x18;
            static constexpr std::uintptr_t bIsIntensitySupported = 0x19;
            static constexpr std::uintptr_t bIsLightColorSupported = 0x1A;
            static constexpr std::uintptr_t bIsInnerConeAngleSupported = 0x1B;
            static constexpr std::uintptr_t bIsOuterConeAngleSupported = 0x1C;
            static constexpr std::uintptr_t bIsAttenuationRadiusSupported = 0x1D;
            static constexpr std::uintptr_t bIsSourceLenghtSupported = 0x1E;
            static constexpr std::uintptr_t bIsSourceRadiusSupported = 0x1F;
            static constexpr std::uintptr_t bIsSoftSourceRadiusSupported = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bIsTemperatureSupported", 0x18, "BoolProperty"},
            {"bIsIntensitySupported", 0x19, "BoolProperty"},
            {"bIsLightColorSupported", 0x1A, "BoolProperty"},
            {"bIsInnerConeAngleSupported", 0x1B, "BoolProperty"},
            {"bIsOuterConeAngleSupported", 0x1C, "BoolProperty"},
            {"bIsAttenuationRadiusSupported", 0x1D, "BoolProperty"},
            {"bIsSourceLenghtSupported", 0x1E, "BoolProperty"},
            {"bIsSourceRadiusSupported", 0x1F, "BoolProperty"},
            {"bIsSoftSourceRadiusSupported", 0x20, "BoolProperty"},
        }};
    };

    struct LiveLinkLocatorBlueprintData
    {
        static constexpr std::string_view Name = "LiveLinkLocatorBlueprintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseBlueprintData";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticData = 0x8;
            static constexpr std::uintptr_t FrameData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StaticData", 0x8, "StructProperty"},
            {"FrameData", 0x30, "StructProperty"},
        }};
    };

    struct LiveLinkLocatorFrameData
    {
        static constexpr std::string_view Name = "LiveLinkLocatorFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseFrameData";
        struct Offsets
        {
            static constexpr std::uintptr_t Locators = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Locators", 0x60, "ArrayProperty"},
        }};
    };

    struct LiveLinkLocatorRole
    {
        static constexpr std::string_view Name = "LiveLinkLocatorRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkBasicRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkLocatorStaticData
    {
        static constexpr std::string_view Name = "LiveLinkLocatorStaticData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseStaticData";
        struct Offsets
        {
            static constexpr std::uintptr_t LocatorNames = 0x10;
            static constexpr std::uintptr_t bUnlabelledData = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocatorNames", 0x10, "ArrayProperty"},
            {"bUnlabelledData", 0x20, "BoolProperty"},
        }};
    };

    struct LiveLinkMetaData
    {
        static constexpr std::string_view Name = "LiveLinkMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StringMetadata = 0x0;
            static constexpr std::uintptr_t SceneTime = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StringMetadata", 0x0, "MapProperty"},
            {"SceneTime", 0x10, "StructProperty"},
        }};
    };

    struct LiveLinkRefSkeleton
    {
        static constexpr std::string_view Name = "LiveLinkRefSkeleton";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneNames = 0x0;
            static constexpr std::uintptr_t BoneParents = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoneNames", 0x0, "ArrayProperty"},
            {"BoneParents", 0x10, "ArrayProperty"},
        }};
    };

    struct LiveLinkRole
    {
        static constexpr std::string_view Name = "LiveLinkRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkSkeletonStaticData
    {
        static constexpr std::string_view Name = "LiveLinkSkeletonStaticData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseStaticData";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneNames = 0x10;
            static constexpr std::uintptr_t BoneParents = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoneNames", 0x10, "ArrayProperty"},
            {"BoneParents", 0x20, "ArrayProperty"},
        }};
    };

    struct LiveLinkSourceBufferManagementSettings
    {
        static constexpr std::string_view Name = "LiveLinkSourceBufferManagementSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bValidEngineTimeEnabled = 0x0;
            static constexpr std::uintptr_t ValidEngineTime = 0x4;
            static constexpr std::uintptr_t EngineTimeOffset = 0x8;
            static constexpr std::uintptr_t EngineTimeClockOffset = 0x10;
            static constexpr std::uintptr_t SmoothEngineTimeOffset = 0x18;
            static constexpr std::uintptr_t bGenerateSubFrame = 0x20;
            static constexpr std::uintptr_t DetectedFrameRate = 0x24;
            static constexpr std::uintptr_t bUseTimecodeSmoothLatest = 0x2C;
            static constexpr std::uintptr_t SourceTimecodeFrameRate = 0x30;
            static constexpr std::uintptr_t bValidTimecodeFrameEnabled = 0x38;
            static constexpr std::uintptr_t ValidTimecodeFrame = 0x3C;
            static constexpr std::uintptr_t TimecodeFrameOffset = 0x40;
            static constexpr std::uintptr_t TimecodeClockOffset = 0x48;
            static constexpr std::uintptr_t LatestOffset = 0x50;
            static constexpr std::uintptr_t MaxNumberOfFrameToBuffered = 0x54;
            static constexpr std::uintptr_t bKeepAtLeastOneFrame = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bValidEngineTimeEnabled", 0x0, "BoolProperty"},
            {"ValidEngineTime", 0x4, "FloatProperty"},
            {"EngineTimeOffset", 0x8, "FloatProperty"},
            {"EngineTimeClockOffset", 0x10, "DoubleProperty"},
            {"SmoothEngineTimeOffset", 0x18, "DoubleProperty"},
            {"bGenerateSubFrame", 0x20, "BoolProperty"},
            {"DetectedFrameRate", 0x24, "StructProperty"},
            {"bUseTimecodeSmoothLatest", 0x2C, "BoolProperty"},
            {"SourceTimecodeFrameRate", 0x30, "StructProperty"},
            {"bValidTimecodeFrameEnabled", 0x38, "BoolProperty"},
            {"ValidTimecodeFrame", 0x3C, "IntProperty"},
            {"TimecodeFrameOffset", 0x40, "FloatProperty"},
            {"TimecodeClockOffset", 0x48, "DoubleProperty"},
            {"LatestOffset", 0x50, "IntProperty"},
            {"MaxNumberOfFrameToBuffered", 0x54, "IntProperty"},
            {"bKeepAtLeastOneFrame", 0x58, "BoolProperty"},
        }};
    };

    struct LiveLinkSourceDebugInfo
    {
        static constexpr std::string_view Name = "LiveLinkSourceDebugInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectName = 0x0;
            static constexpr std::uintptr_t SnapshotIndex = 0x4;
            static constexpr std::uintptr_t NumberOfBufferAtSnapshot = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SubjectName", 0x0, "StructProperty"},
            {"SnapshotIndex", 0x4, "IntProperty"},
            {"NumberOfBufferAtSnapshot", 0x8, "IntProperty"},
        }};
    };

    struct LiveLinkSourceFactory
    {
        static constexpr std::string_view Name = "LiveLinkSourceFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkSourceHandle
    {
        static constexpr std::string_view Name = "LiveLinkSourceHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkSourcePreset
    {
        static constexpr std::string_view Name = "LiveLinkSourcePreset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Settings = 0x10;
            static constexpr std::uintptr_t SourceType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"Settings", 0x10, "ObjectProperty"},
            {"SourceType", 0x18, "TextProperty"},
        }};
    };

    struct LiveLinkSourceSettings
    {
        static constexpr std::string_view Name = "LiveLinkSourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x28;
            static constexpr std::uintptr_t BufferSettings = 0x30;
            static constexpr std::uintptr_t bTransmitEvaluatedData = 0x90;
            static constexpr std::uintptr_t ConnectionString = 0x98;
            static constexpr std::uintptr_t Factory = 0xA8;
            static constexpr std::uintptr_t ParentSubject = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Mode", 0x28, "EnumProperty"},
            {"BufferSettings", 0x30, "StructProperty"},
            {"bTransmitEvaluatedData", 0x90, "BoolProperty"},
            {"ConnectionString", 0x98, "StrProperty"},
            {"Factory", 0xA8, "ClassProperty"},
            {"ParentSubject", 0xB0, "StructProperty"},
        }};
    };

    struct LiveLinkSubjectKey
    {
        static constexpr std::string_view Name = "LiveLinkSubjectKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x0;
            static constexpr std::uintptr_t SubjectName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Source", 0x0, "StructProperty"},
            {"SubjectName", 0x10, "StructProperty"},
        }};
    };

    struct LiveLinkSubjectName
    {
        static constexpr std::string_view Name = "LiveLinkSubjectName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct LiveLinkSubjectPreset
    {
        static constexpr std::string_view Name = "LiveLinkSubjectPreset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Role = 0x18;
            static constexpr std::uintptr_t Settings = 0x20;
            static constexpr std::uintptr_t VirtualSubject = 0x28;
            static constexpr std::uintptr_t bEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"Role", 0x18, "ClassProperty"},
            {"Settings", 0x20, "ObjectProperty"},
            {"VirtualSubject", 0x28, "ObjectProperty"},
            {"bEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct LiveLinkSubjectRemapper
    {
        static constexpr std::string_view Name = "LiveLinkSubjectRemapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneNameMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoneNameMap", 0x28, "MapProperty"},
        }};
    };

    struct LiveLinkSubjectRepresentation
    {
        static constexpr std::string_view Name = "LiveLinkSubjectRepresentation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Subject = 0x0;
            static constexpr std::uintptr_t Role = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Subject", 0x0, "StructProperty"},
            {"Role", 0x8, "ClassProperty"},
        }};
    };

    struct LiveLinkSubjectSettings
    {
        static constexpr std::string_view Name = "LiveLinkSubjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PreProcessors = 0x28;
            static constexpr std::uintptr_t InterpolationProcessor = 0x38;
            static constexpr std::uintptr_t Translators = 0x40;
            static constexpr std::uintptr_t Remapper = 0x50;
            static constexpr std::uintptr_t Role = 0x58;
            static constexpr std::uintptr_t FrameRate = 0x60;
            static constexpr std::uintptr_t bRebroadcastSubject = 0x68;
            static constexpr std::uintptr_t OriginalSourceName = 0x6C;
            static constexpr std::uintptr_t Key = 0x70;
            static constexpr std::uintptr_t bAllowModifyingRebroadcast = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PreProcessors", 0x28, "ArrayProperty"},
            {"InterpolationProcessor", 0x38, "ObjectProperty"},
            {"Translators", 0x40, "ArrayProperty"},
            {"Remapper", 0x50, "ObjectProperty"},
            {"Role", 0x58, "ClassProperty"},
            {"FrameRate", 0x60, "StructProperty"},
            {"bRebroadcastSubject", 0x68, "BoolProperty"},
            {"OriginalSourceName", 0x6C, "NameProperty"},
            {"Key", 0x70, "StructProperty"},
            {"bAllowModifyingRebroadcast", 0x90, "BoolProperty"},
        }};
    };

    struct LiveLinkTime
    {
        static constexpr std::string_view Name = "LiveLinkTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldTime = 0x0;
            static constexpr std::uintptr_t SceneTime = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WorldTime", 0x0, "DoubleProperty"},
            {"SceneTime", 0x8, "StructProperty"},
        }};
    };

    struct LiveLinkTimeCode
    {
        static constexpr std::string_view Name = "LiveLinkTimeCode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkTimeCode_Base_DEPRECATED";
        struct Offsets
        {
            static constexpr std::uintptr_t Seconds = 0x0;
            static constexpr std::uintptr_t Frames = 0x4;
            static constexpr std::uintptr_t FrameRate = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Seconds", 0x0, "IntProperty"},
            {"Frames", 0x4, "IntProperty"},
            {"FrameRate", 0x8, "StructProperty"},
        }};
    };

    struct LiveLinkTimeCode_Base_DEPRECATED
    {
        static constexpr std::string_view Name = "LiveLinkTimeCode_Base_DEPRECATED";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Seconds = 0x0;
            static constexpr std::uintptr_t Frames = 0x4;
            static constexpr std::uintptr_t FrameRate = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Seconds", 0x0, "IntProperty"},
            {"Frames", 0x4, "IntProperty"},
            {"FrameRate", 0x8, "StructProperty"},
        }};
    };

    struct LiveLinkTimeSynchronizationSettings
    {
        static constexpr std::string_view Name = "LiveLinkTimeSynchronizationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameRate = 0x0;
            static constexpr std::uintptr_t FrameOffset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrameRate", 0x0, "StructProperty"},
            {"FrameOffset", 0x8, "StructProperty"},
        }};
    };

    struct LiveLinkTransform
    {
        static constexpr std::string_view Name = "LiveLinkTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkTransformBlueprintData
    {
        static constexpr std::string_view Name = "LiveLinkTransformBlueprintData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseBlueprintData";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticData = 0x8;
            static constexpr std::uintptr_t FrameData = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StaticData", 0x8, "StructProperty"},
            {"FrameData", 0x20, "StructProperty"},
        }};
    };

    struct LiveLinkTransformFrameData
    {
        static constexpr std::string_view Name = "LiveLinkTransformFrameData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseFrameData";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transform", 0x60, "StructProperty"},
        }};
    };

    struct LiveLinkTransformRole
    {
        static constexpr std::string_view Name = "LiveLinkTransformRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkBasicRole";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkTransformStaticData
    {
        static constexpr std::string_view Name = "LiveLinkTransformStaticData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseStaticData";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLocationSupported = 0x10;
            static constexpr std::uintptr_t bIsRotationSupported = 0x11;
            static constexpr std::uintptr_t bIsScaleSupported = 0x12;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsLocationSupported", 0x10, "BoolProperty"},
            {"bIsRotationSupported", 0x11, "BoolProperty"},
            {"bIsScaleSupported", 0x12, "BoolProperty"},
        }};
    };

    struct LiveLinkVirtualSubject
    {
        static constexpr std::string_view Name = "LiveLinkVirtualSubject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SyncSubject = 0x30;
            static constexpr std::uintptr_t Role = 0x38;
            static constexpr std::uintptr_t Subjects = 0x40;
            static constexpr std::uintptr_t FrameTranslators = 0x50;
            static constexpr std::uintptr_t bRebroadcastSubject = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SyncSubject", 0x30, "StructProperty"},
            {"Role", 0x38, "ClassProperty"},
            {"Subjects", 0x40, "ArrayProperty"},
            {"FrameTranslators", 0x50, "ArrayProperty"},
            {"bRebroadcastSubject", 0x60, "BoolProperty"},
        }};
    };

    struct LiveLinkWorldTime
    {
        static constexpr std::string_view Name = "LiveLinkWorldTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t time = 0x0;
            static constexpr std::uintptr_t Offset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"time", 0x0, "DoubleProperty"},
            {"Offset", 0x8, "DoubleProperty"},
        }};
    };

    struct SubjectFrameHandle
    {
        static constexpr std::string_view Name = "SubjectFrameHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "LiveLinkBaseBlueprintData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SubjectMetadata
    {
        static constexpr std::string_view Name = "SubjectMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StringMetadata = 0x0;
            static constexpr std::uintptr_t SceneTimecode = 0x10;
            static constexpr std::uintptr_t SceneFramerate = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StringMetadata", 0x0, "MapProperty"},
            {"SceneTimecode", 0x10, "StructProperty"},
            {"SceneFramerate", 0x28, "StructProperty"},
        }};
    };

}
