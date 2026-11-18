#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CommonInput
{
    struct CommonInputActionDomain
    {
        static constexpr std::string_view Name = "CommonInputActionDomain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Behavior = 0x28;
            static constexpr std::uintptr_t InnerBehavior = 0x2C;
            static constexpr std::uintptr_t bUseActionDomainDesiredInputConfig = 0x30;
            static constexpr std::uintptr_t InputMode = 0x31;
            static constexpr std::uintptr_t MouseCaptureMode = 0x32;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Behavior", 0x28, "EnumProperty"},
            {"InnerBehavior", 0x2C, "EnumProperty"},
            {"bUseActionDomainDesiredInputConfig", 0x30, "BoolProperty"},
            {"InputMode", 0x31, "EnumProperty"},
            {"MouseCaptureMode", 0x32, "EnumProperty"},
        }};
    };

    struct CommonInputActionDomainTable
    {
        static constexpr std::string_view Name = "CommonInputActionDomainTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionDomains = 0x28;
            static constexpr std::uintptr_t InputMode = 0x38;
            static constexpr std::uintptr_t MouseCaptureMode = 0x39;
            static constexpr std::uintptr_t bHideCursorDuringViewportCapture = 0x3A;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActionDomains", 0x28, "ArrayProperty"},
            {"InputMode", 0x38, "EnumProperty"},
            {"MouseCaptureMode", 0x39, "EnumProperty"},
            {"bHideCursorDuringViewportCapture", 0x3A, "BoolProperty"},
        }};
    };

    struct CommonInputBaseControllerData
    {
        static constexpr std::string_view Name = "CommonInputBaseControllerData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputType = 0x28;
            static constexpr std::uintptr_t GamepadName = 0x2C;
            static constexpr std::uintptr_t GamepadDisplayName = 0x30;
            static constexpr std::uintptr_t GamepadCategory = 0x40;
            static constexpr std::uintptr_t GamepadPlatformName = 0x50;
            static constexpr std::uintptr_t GamepadHardwareIdMapping = 0x60;
            static constexpr std::uintptr_t ControllerTexture = 0x70;
            static constexpr std::uintptr_t ControllerButtonMaskTexture = 0x90;
            static constexpr std::uintptr_t InputBrushDataMap = 0xB0;
            static constexpr std::uintptr_t InputBrushKeySets = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"InputType", 0x28, "EnumProperty"},
            {"GamepadName", 0x2C, "NameProperty"},
            {"GamepadDisplayName", 0x30, "TextProperty"},
            {"GamepadCategory", 0x40, "TextProperty"},
            {"GamepadPlatformName", 0x50, "TextProperty"},
            {"GamepadHardwareIdMapping", 0x60, "ArrayProperty"},
            {"ControllerTexture", 0x70, "SoftObjectProperty"},
            {"ControllerButtonMaskTexture", 0x90, "SoftObjectProperty"},
            {"InputBrushDataMap", 0xB0, "ArrayProperty"},
            {"InputBrushKeySets", 0xC0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetRegisteredGamepads",
        }};
    };

    struct CommonInputKeyBrushConfiguration
    {
        static constexpr std::string_view Name = "CommonInputKeyBrushConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t KeyBrush = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"KeyBrush", 0x20, "StructProperty"},
        }};
    };

    struct CommonInputKeySetBrushConfiguration
    {
        static constexpr std::string_view Name = "CommonInputKeySetBrushConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Keys = 0x0;
            static constexpr std::uintptr_t KeyBrush = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Keys", 0x0, "ArrayProperty"},
            {"KeyBrush", 0x10, "StructProperty"},
        }};
    };

    struct CommonInputPlatformBaseData
    {
        static constexpr std::string_view Name = "CommonInputPlatformBaseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultInputType = 0x8;
            static constexpr std::uintptr_t bSupportsMouseAndKeyboard = 0x9;
            static constexpr std::uintptr_t bSupportsGamepad = 0xA;
            static constexpr std::uintptr_t DefaultGamepadName = 0xC;
            static constexpr std::uintptr_t bCanChangeGamepadType = 0x10;
            static constexpr std::uintptr_t bSupportsTouch = 0x11;
            static constexpr std::uintptr_t ControllerData = 0x18;
            static constexpr std::uintptr_t ControllerDataClasses = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DefaultInputType", 0x8, "EnumProperty"},
            {"bSupportsMouseAndKeyboard", 0x9, "BoolProperty"},
            {"bSupportsGamepad", 0xA, "BoolProperty"},
            {"DefaultGamepadName", 0xC, "NameProperty"},
            {"bCanChangeGamepadType", 0x10, "BoolProperty"},
            {"bSupportsTouch", 0x11, "BoolProperty"},
            {"ControllerData", 0x18, "ArrayProperty"},
            {"ControllerDataClasses", 0x28, "ArrayProperty"},
        }};
    };

    struct CommonInputPlatformSettings
    {
        static constexpr std::string_view Name = "CommonInputPlatformSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlatformSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultInputType = 0x40;
            static constexpr std::uintptr_t bSupportsMouseAndKeyboard = 0x41;
            static constexpr std::uintptr_t bSupportsTouch = 0x42;
            static constexpr std::uintptr_t bSupportsGamepad = 0x43;
            static constexpr std::uintptr_t DefaultGamepadName = 0x44;
            static constexpr std::uintptr_t bCanChangeGamepadType = 0x48;
            static constexpr std::uintptr_t ControllerData = 0x50;
            static constexpr std::uintptr_t ControllerDataClasses = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DefaultInputType", 0x40, "EnumProperty"},
            {"bSupportsMouseAndKeyboard", 0x41, "BoolProperty"},
            {"bSupportsTouch", 0x42, "BoolProperty"},
            {"bSupportsGamepad", 0x43, "BoolProperty"},
            {"DefaultGamepadName", 0x44, "NameProperty"},
            {"bCanChangeGamepadType", 0x48, "BoolProperty"},
            {"ControllerData", 0x50, "ArrayProperty"},
            {"ControllerDataClasses", 0x60, "ArrayProperty"},
        }};
    };

    struct CommonInputSettings
    {
        static constexpr std::string_view Name = "CommonInputSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t InputData = 0x30;
            static constexpr std::uintptr_t PlatformInput = 0x50;
            static constexpr std::uintptr_t CommonInputPlatformData = 0x60;
            static constexpr std::uintptr_t bEnableInputMethodThrashingProtection = 0x70;
            static constexpr std::uintptr_t InputMethodThrashingLimit = 0x74;
            static constexpr std::uintptr_t InputMethodThrashingWindowInSeconds = 0x78;
            static constexpr std::uintptr_t InputMethodThrashingCooldownInSeconds = 0x80;
            static constexpr std::uintptr_t bAllowOutOfFocusDeviceInput = 0x88;
            static constexpr std::uintptr_t bEnableDefaultInputConfig = 0x89;
            static constexpr std::uintptr_t bEnableEnhancedInputSupport = 0x8A;
            static constexpr std::uintptr_t bEnableAutomaticGamepadTypeDetection = 0x8B;
            static constexpr std::uintptr_t ActionDomainTable = 0x90;
            static constexpr std::uintptr_t PlatformNameUpgrades = 0xB0;
            static constexpr std::uintptr_t InputDataClass = 0xC8;
            static constexpr std::uintptr_t ActionDomainTablePtr = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"InputData", 0x30, "SoftClassProperty"},
            {"PlatformInput", 0x50, "StructProperty"},
            {"CommonInputPlatformData", 0x60, "MapProperty"},
            {"bEnableInputMethodThrashingProtection", 0x70, "BoolProperty"},
            {"InputMethodThrashingLimit", 0x74, "IntProperty"},
            {"InputMethodThrashingWindowInSeconds", 0x78, "DoubleProperty"},
            {"InputMethodThrashingCooldownInSeconds", 0x80, "DoubleProperty"},
            {"bAllowOutOfFocusDeviceInput", 0x88, "BoolProperty"},
            {"bEnableDefaultInputConfig", 0x89, "BoolProperty"},
            {"bEnableEnhancedInputSupport", 0x8A, "BoolProperty"},
            {"bEnableAutomaticGamepadTypeDetection", 0x8B, "BoolProperty"},
            {"ActionDomainTable", 0x90, "SoftObjectProperty"},
            {"PlatformNameUpgrades", 0xB0, "MapProperty"},
            {"InputDataClass", 0xC8, "ClassProperty"},
            {"ActionDomainTablePtr", 0xD0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsEnhancedInputSupportEnabled",
        }};
    };

    struct CommonInputSubsystem
    {
        static constexpr std::string_view Name = "CommonInputSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInputMethodChanged = 0x90;
            static constexpr std::uintptr_t NumberOfInputMethodChangesRecently = 0xA0;
            static constexpr std::uintptr_t LastInputMethodChangeTime = 0xA8;
            static constexpr std::uintptr_t LastTimeInputMethodThrashingBegan = 0xB0;
            static constexpr std::uintptr_t RawInputType = 0xB8;
            static constexpr std::uintptr_t CurrentInputType = 0xB9;
            static constexpr std::uintptr_t GamepadInputType = 0xBC;
            static constexpr std::uintptr_t bInputMethodLockedByThrashing = 0xC0;
            static constexpr std::uintptr_t CurrentInputLocks = 0xC8;
            static constexpr std::uintptr_t ActionDomainTable = 0xE0;
            static constexpr std::uintptr_t bIsGamepadSimulatedClick = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnInputMethodChanged", 0x90, "MulticastInlineDelegateProperty"},
            {"NumberOfInputMethodChangesRecently", 0xA0, "IntProperty"},
            {"LastInputMethodChangeTime", 0xA8, "DoubleProperty"},
            {"LastTimeInputMethodThrashingBegan", 0xB0, "DoubleProperty"},
            {"RawInputType", 0xB8, "EnumProperty"},
            {"CurrentInputType", 0xB9, "EnumProperty"},
            {"GamepadInputType", 0xBC, "NameProperty"},
            {"bInputMethodLockedByThrashing", 0xC0, "BoolProperty"},
            {"CurrentInputLocks", 0xC8, "MapProperty"},
            {"ActionDomainTable", 0xE0, "ObjectProperty"},
            {"bIsGamepadSimulatedClick", 0xE8, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "BroadcastInputMethodChanged",
            "GetCurrentGamepadName",
            "GetCurrentInputType",
            "GetDefaultInputType",
            "HandleControlMappingsRebuilt",
            "IsInputMethodActive",
            "IsUsingPointerInput",
            "SetCurrentInputType",
            "SetGamepadInputType",
            "ShouldShowInputKeys",
        }};
    };

    struct CommonUIHoldData
    {
        static constexpr std::string_view Name = "CommonUIHoldData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyboardAndMouse = 0x28;
            static constexpr std::uintptr_t Gamepad = 0x30;
            static constexpr std::uintptr_t Touch = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"KeyboardAndMouse", 0x28, "StructProperty"},
            {"Gamepad", 0x30, "StructProperty"},
            {"Touch", 0x38, "StructProperty"},
        }};
    };

    struct CommonUIInputData
    {
        static constexpr std::string_view Name = "CommonUIInputData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultClickAction = 0x28;
            static constexpr std::uintptr_t DefaultBackAction = 0x38;
            static constexpr std::uintptr_t DefaultHoldData = 0x48;
            static constexpr std::uintptr_t EnhancedInputClickAction = 0x68;
            static constexpr std::uintptr_t EnhancedInputBackAction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DefaultClickAction", 0x28, "StructProperty"},
            {"DefaultBackAction", 0x38, "StructProperty"},
            {"DefaultHoldData", 0x48, "SoftClassProperty"},
            {"EnhancedInputClickAction", 0x68, "ObjectProperty"},
            {"EnhancedInputBackAction", 0x70, "ObjectProperty"},
        }};
    };

    struct InputDeviceIdentifierPair
    {
        static constexpr std::string_view Name = "InputDeviceIdentifierPair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputDeviceName = 0x0;
            static constexpr std::uintptr_t HardwareDeviceIdentifier = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InputDeviceName", 0x0, "NameProperty"},
            {"HardwareDeviceIdentifier", 0x8, "StrProperty"},
        }};
    };

    struct InputHoldData
    {
        static constexpr std::string_view Name = "InputHoldData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t HoldTime = 0x0;
            static constexpr std::uintptr_t HoldRollbackTime = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HoldTime", 0x0, "FloatProperty"},
            {"HoldRollbackTime", 0x4, "FloatProperty"},
        }};
    };

}
