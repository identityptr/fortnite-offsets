#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UMG
{
    struct AnchorData
    {
        static constexpr std::string_view Name = "AnchorData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Offsets_ = 0x0;
            static constexpr std::uintptr_t Anchors = 0x10;
            static constexpr std::uintptr_t Alignment = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Offsets", 0x0, "StructProperty"},
            {"Anchors", 0x10, "StructProperty"},
            {"Alignment", 0x30, "StructProperty"},
        }};
    };

    struct AnimationEventBinding
    {
        static constexpr std::string_view Name = "AnimationEventBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t Delegate = 0x8;
            static constexpr std::uintptr_t AnimationEvent = 0x14;
            static constexpr std::uintptr_t UserTag = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Animation", 0x0, "ObjectProperty"},
            {"Delegate", 0x8, "DelegateProperty"},
            {"AnimationEvent", 0x14, "EnumProperty"},
            {"UserTag", 0x18, "NameProperty"},
        }};
    };

    struct AsyncTaskDownloadImage
    {
        static constexpr std::string_view Name = "AsyncTaskDownloadImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFail = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFail", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "DownloadImage",
        }};
    };

    struct AudioWidgetSubsystem
    {
        static constexpr std::string_view Name = "AudioWidgetSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BackgroundBlur
    {
        static constexpr std::string_view Name = "BackgroundBlur";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x180;
            static constexpr std::uintptr_t HorizontalAlignment = 0x190;
            static constexpr std::uintptr_t VerticalAlignment = 0x191;
            static constexpr std::uintptr_t bApplyAlphaToBlur = 0x192;
            static constexpr std::uintptr_t BlurStrength = 0x194;
            static constexpr std::uintptr_t bOverrideAutoRadiusCalculation = 0x198;
            static constexpr std::uintptr_t BlurRadius = 0x19C;
            static constexpr std::uintptr_t CornerRadius = 0x1A0;
            static constexpr std::uintptr_t LowQualityFallbackBrush = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Padding", 0x180, "StructProperty"},
            {"HorizontalAlignment", 0x190, "ByteProperty"},
            {"VerticalAlignment", 0x191, "ByteProperty"},
            {"bApplyAlphaToBlur", 0x192, "BoolProperty"},
            {"BlurStrength", 0x194, "FloatProperty"},
            {"bOverrideAutoRadiusCalculation", 0x198, "BoolProperty"},
            {"BlurRadius", 0x19C, "IntProperty"},
            {"CornerRadius", 0x1A0, "StructProperty"},
            {"LowQualityFallbackBrush", 0x1C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "SetApplyAlphaToBlur",
            "SetBlurRadius",
            "SetBlurStrength",
            "SetCornerRadius",
            "SetHorizontalAlignment",
            "SetLowQualityFallbackBrush",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct BackgroundBlurSlot
    {
        static constexpr std::string_view Name = "BackgroundBlurSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t HorizontalAlignment = 0x48;
            static constexpr std::uintptr_t VerticalAlignment = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"HorizontalAlignment", 0x48, "ByteProperty"},
            {"VerticalAlignment", 0x49, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct BlueprintWidgetAnimationDelegateBinding
    {
        static constexpr std::string_view Name = "BlueprintWidgetAnimationDelegateBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Action = 0x0;
            static constexpr std::uintptr_t AnimationToBind = 0x4;
            static constexpr std::uintptr_t FunctionNameToBind = 0x8;
            static constexpr std::uintptr_t UserTag = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Action", 0x0, "EnumProperty"},
            {"AnimationToBind", 0x4, "NameProperty"},
            {"FunctionNameToBind", 0x8, "NameProperty"},
            {"UserTag", 0xC, "NameProperty"},
        }};
    };

    struct BoolBinding
    {
        static constexpr std::string_view Name = "BoolBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetValue",
        }};
    };

    struct Border
    {
        static constexpr std::string_view Name = "Border";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalAlignment = 0x180;
            static constexpr std::uintptr_t VerticalAlignment = 0x181;
            static constexpr std::uintptr_t bShowEffectWhenDisabled = 0x182;
            static constexpr std::uintptr_t ContentColorAndOpacity = 0x184;
            static constexpr std::uintptr_t ContentColorAndOpacityDelegate = 0x194;
            static constexpr std::uintptr_t Padding = 0x1A0;
            static constexpr std::uintptr_t Background = 0x1B0;
            static constexpr std::uintptr_t BackgroundDelegate = 0x260;
            static constexpr std::uintptr_t BrushColor = 0x26C;
            static constexpr std::uintptr_t BrushColorDelegate = 0x27C;
            static constexpr std::uintptr_t DesiredSizeScale = 0x288;
            static constexpr std::uintptr_t bFlipForRightToLeftFlowDirection = 0x298;
            static constexpr std::uintptr_t OnMouseButtonDownEvent = 0x29C;
            static constexpr std::uintptr_t OnMouseButtonUpEvent = 0x2A8;
            static constexpr std::uintptr_t OnMouseMoveEvent = 0x2B4;
            static constexpr std::uintptr_t OnMouseDoubleClickEvent = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"HorizontalAlignment", 0x180, "ByteProperty"},
            {"VerticalAlignment", 0x181, "ByteProperty"},
            {"bShowEffectWhenDisabled", 0x182, "BoolProperty"},
            {"ContentColorAndOpacity", 0x184, "StructProperty"},
            {"ContentColorAndOpacityDelegate", 0x194, "DelegateProperty"},
            {"Padding", 0x1A0, "StructProperty"},
            {"Background", 0x1B0, "StructProperty"},
            {"BackgroundDelegate", 0x260, "DelegateProperty"},
            {"BrushColor", 0x26C, "StructProperty"},
            {"BrushColorDelegate", 0x27C, "DelegateProperty"},
            {"DesiredSizeScale", 0x288, "StructProperty"},
            {"bFlipForRightToLeftFlowDirection", 0x298, "BoolProperty"},
            {"OnMouseButtonDownEvent", 0x29C, "DelegateProperty"},
            {"OnMouseButtonUpEvent", 0x2A8, "DelegateProperty"},
            {"OnMouseMoveEvent", 0x2B4, "DelegateProperty"},
            {"OnMouseDoubleClickEvent", 0x2C0, "DelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "GetDynamicMaterial",
            "SetBrush",
            "SetBrushColor",
            "SetBrushFromAsset",
            "SetBrushFromMaterial",
            "SetBrushFromTexture",
            "SetContentColorAndOpacity",
            "SetDesiredSizeScale",
            "SetHorizontalAlignment",
            "SetPadding",
            "SetShowEffectWhenDisabled",
            "SetVerticalAlignment",
        }};
    };

    struct BorderSlot
    {
        static constexpr std::string_view Name = "BorderSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t HorizontalAlignment = 0x48;
            static constexpr std::uintptr_t VerticalAlignment = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"HorizontalAlignment", 0x48, "ByteProperty"},
            {"VerticalAlignment", 0x49, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct BrushBinding
    {
        static constexpr std::string_view Name = "BrushBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetValue",
        }};
    };

    struct ButtonSlot
    {
        static constexpr std::string_view Name = "ButtonSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t HorizontalAlignment = 0x48;
            static constexpr std::uintptr_t VerticalAlignment = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"HorizontalAlignment", 0x48, "ByteProperty"},
            {"VerticalAlignment", 0x49, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct CanvasPanel
    {
        static constexpr std::string_view Name = "CanvasPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AddChildToCanvas",
        }};
    };

    struct CanvasPanelSlot
    {
        static constexpr std::string_view Name = "CanvasPanelSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t LayoutData = 0x38;
            static constexpr std::uintptr_t bAutoSize = 0x78;
            static constexpr std::uintptr_t ZOrder = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LayoutData", 0x38, "StructProperty"},
            {"bAutoSize", 0x78, "BoolProperty"},
            {"ZOrder", 0x7C, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "GetAlignment",
            "GetAnchors",
            "GetAutoSize",
            "GetLayout",
            "GetOffsets",
            "GetPosition",
            "GetSize",
            "GetZOrder",
            "SetAlignment",
            "SetAnchors",
            "SetAutoSize",
            "SetLayout",
            "SetMaximum",
            "SetMinimum",
            "SetOffsets",
            "SetPosition",
            "SetSize",
            "SetZOrder",
        }};
    };

    struct CheckBox
    {
        static constexpr std::string_view Name = "CheckBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckedState = 0x180;
            static constexpr std::uintptr_t CheckedStateDelegate = 0x184;
            static constexpr std::uintptr_t WidgetStyle = 0x190;
            static constexpr std::uintptr_t HorizontalAlignment = 0xAE0;
            static constexpr std::uintptr_t ClickMethod = 0xAE1;
            static constexpr std::uintptr_t TouchMethod = 0xAE2;
            static constexpr std::uintptr_t PressMethod = 0xAE3;
            static constexpr std::uintptr_t IsFocusable = 0xAE4;
            static constexpr std::uintptr_t OnCheckStateChanged = 0xAE8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CheckedState", 0x180, "EnumProperty"},
            {"CheckedStateDelegate", 0x184, "DelegateProperty"},
            {"WidgetStyle", 0x190, "StructProperty"},
            {"HorizontalAlignment", 0xAE0, "ByteProperty"},
            {"ClickMethod", 0xAE1, "ByteProperty"},
            {"TouchMethod", 0xAE2, "ByteProperty"},
            {"PressMethod", 0xAE3, "ByteProperty"},
            {"IsFocusable", 0xAE4, "BoolProperty"},
            {"OnCheckStateChanged", 0xAE8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetCheckedState",
            "IsChecked",
            "IsPressed",
            "SetCheckedState",
            "SetClickMethod",
            "SetIsChecked",
            "SetPressMethod",
            "SetTouchMethod",
        }};
    };

    struct CheckedStateBinding
    {
        static constexpr std::string_view Name = "CheckedStateBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetValue",
        }};
    };

    struct CircularThrobber
    {
        static constexpr std::string_view Name = "CircularThrobber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfPieces = 0x168;
            static constexpr std::uintptr_t Period = 0x16C;
            static constexpr std::uintptr_t Radius = 0x170;
            static constexpr std::uintptr_t Image = 0x180;
            static constexpr std::uintptr_t bEnableRadius = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NumberOfPieces", 0x168, "IntProperty"},
            {"Period", 0x16C, "FloatProperty"},
            {"Radius", 0x170, "FloatProperty"},
            {"Image", 0x180, "StructProperty"},
            {"bEnableRadius", 0x230, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetNumberOfPieces",
            "SetPeriod",
            "SetRadius",
        }};
    };

    struct ColorBinding
    {
        static constexpr std::string_view Name = "ColorBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetLinearValue",
            "GetSlateValue",
        }};
    };

    struct ComboBox
    {
        static constexpr std::string_view Name = "ComboBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t ScrollBarStyle = 0x170;
            static constexpr std::uintptr_t Items = 0x7C0;
            static constexpr std::uintptr_t OnGenerateWidgetEvent = 0x7D0;
            static constexpr std::uintptr_t bIsFocusable = 0x7DC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ScrollBarStyle", 0x170, "StructProperty"},
            {"Items", 0x7C0, "ArrayProperty"},
            {"OnGenerateWidgetEvent", 0x7D0, "DelegateProperty"},
            {"bIsFocusable", 0x7DC, "BoolProperty"},
        }};
    };

    struct ComboBoxKey
    {
        static constexpr std::string_view Name = "ComboBoxKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Options = 0x168;
            static constexpr std::uintptr_t SelectedOption = 0x178;
            static constexpr std::uintptr_t WidgetStyle = 0x180;
            static constexpr std::uintptr_t ItemStyle = 0x740;
            static constexpr std::uintptr_t ScrollBarStyle = 0x1290;
            static constexpr std::uintptr_t ForegroundColor = 0x18E0;
            static constexpr std::uintptr_t ContentPadding = 0x18F4;
            static constexpr std::uintptr_t MaxListHeight = 0x1904;
            static constexpr std::uintptr_t bHasDownArrow = 0x1908;
            static constexpr std::uintptr_t bEnableGamepadNavigationMode = 0x1909;
            static constexpr std::uintptr_t bIsFocusable = 0x190A;
            static constexpr std::uintptr_t OnGenerateContentWidget = 0x190C;
            static constexpr std::uintptr_t OnGenerateItemWidget = 0x1918;
            static constexpr std::uintptr_t OnSelectionChanged = 0x1928;
            static constexpr std::uintptr_t OnOpening = 0x1938;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Options", 0x168, "ArrayProperty"},
            {"SelectedOption", 0x178, "NameProperty"},
            {"WidgetStyle", 0x180, "StructProperty"},
            {"ItemStyle", 0x740, "StructProperty"},
            {"ScrollBarStyle", 0x1290, "StructProperty"},
            {"ForegroundColor", 0x18E0, "StructProperty"},
            {"ContentPadding", 0x18F4, "StructProperty"},
            {"MaxListHeight", 0x1904, "FloatProperty"},
            {"bHasDownArrow", 0x1908, "BoolProperty"},
            {"bEnableGamepadNavigationMode", 0x1909, "BoolProperty"},
            {"bIsFocusable", 0x190A, "BoolProperty"},
            {"OnGenerateContentWidget", 0x190C, "DelegateProperty"},
            {"OnGenerateItemWidget", 0x1918, "DelegateProperty"},
            {"OnSelectionChanged", 0x1928, "MulticastInlineDelegateProperty"},
            {"OnOpening", 0x1938, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "AddOption",
            "ClearOptions",
            "ClearSelection",
            "GetSelectedOption",
            "IsOpen",
            "RemoveOption",
            "SetSelectedOption",
        }};
    };

    struct ComboBoxString
    {
        static constexpr std::string_view Name = "ComboBoxString";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultOptions = 0x168;
            static constexpr std::uintptr_t SelectedOption = 0x178;
            static constexpr std::uintptr_t WidgetStyle = 0x190;
            static constexpr std::uintptr_t ItemStyle = 0x750;
            static constexpr std::uintptr_t ScrollBarStyle = 0x12A0;
            static constexpr std::uintptr_t ContentPadding = 0x18F0;
            static constexpr std::uintptr_t MaxListHeight = 0x1900;
            static constexpr std::uintptr_t HasDownArrow = 0x1904;
            static constexpr std::uintptr_t EnableGamepadNavigationMode = 0x1905;
            static constexpr std::uintptr_t Font = 0x1908;
            static constexpr std::uintptr_t ForegroundColor = 0x1960;
            static constexpr std::uintptr_t bIsFocusable = 0x1974;
            static constexpr std::uintptr_t OnGenerateWidgetEvent = 0x1978;
            static constexpr std::uintptr_t OnSelectionChanged = 0x1988;
            static constexpr std::uintptr_t OnOpening = 0x1998;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"DefaultOptions", 0x168, "ArrayProperty"},
            {"SelectedOption", 0x178, "StrProperty"},
            {"WidgetStyle", 0x190, "StructProperty"},
            {"ItemStyle", 0x750, "StructProperty"},
            {"ScrollBarStyle", 0x12A0, "StructProperty"},
            {"ContentPadding", 0x18F0, "StructProperty"},
            {"MaxListHeight", 0x1900, "FloatProperty"},
            {"HasDownArrow", 0x1904, "BoolProperty"},
            {"EnableGamepadNavigationMode", 0x1905, "BoolProperty"},
            {"Font", 0x1908, "StructProperty"},
            {"ForegroundColor", 0x1960, "StructProperty"},
            {"bIsFocusable", 0x1974, "BoolProperty"},
            {"OnGenerateWidgetEvent", 0x1978, "DelegateProperty"},
            {"OnSelectionChanged", 0x1988, "MulticastInlineDelegateProperty"},
            {"OnOpening", 0x1998, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 13> FunctionNames{{
            "AddOption",
            "ClearOptions",
            "ClearSelection",
            "FindOptionIndex",
            "GetOptionAtIndex",
            "GetOptionCount",
            "GetSelectedIndex",
            "GetSelectedOption",
            "IsOpen",
            "RefreshOptions",
            "RemoveOption",
            "SetSelectedIndex",
            "SetSelectedOption",
        }};
    };

    struct ContentWidget
    {
        static constexpr std::string_view Name = "ContentWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetContent",
            "GetContentSlot",
            "SetContent",
        }};
    };

    struct ContextDataWidgetExtension
    {
        static constexpr std::string_view Name = "ContextDataWidgetExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidgetExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextData = 0x28;
            static constexpr std::uintptr_t ContextWidget = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ContextData", 0x28, "ArrayProperty"},
            {"ContextWidget", 0x38, "ObjectProperty"},
        }};
    };

    struct DelegateRuntimeBinding
    {
        static constexpr std::string_view Name = "DelegateRuntimeBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectName = 0x0;
            static constexpr std::uintptr_t PropertyName = 0x10;
            static constexpr std::uintptr_t FunctionName = 0x14;
            static constexpr std::uintptr_t SourcePath = 0x18;
            static constexpr std::uintptr_t Kind = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ObjectName", 0x0, "StrProperty"},
            {"PropertyName", 0x10, "NameProperty"},
            {"FunctionName", 0x14, "NameProperty"},
            {"SourcePath", 0x18, "StructProperty"},
            {"Kind", 0x50, "EnumProperty"},
        }};
    };

    struct DragDropOperation
    {
        static constexpr std::string_view Name = "DragDropOperation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x28;
            static constexpr std::uintptr_t Payload = 0x38;
            static constexpr std::uintptr_t DefaultDragVisual = 0x40;
            static constexpr std::uintptr_t Pivot = 0x48;
            static constexpr std::uintptr_t Offset = 0x50;
            static constexpr std::uintptr_t OnDrop = 0x60;
            static constexpr std::uintptr_t OnDragCancelled = 0x70;
            static constexpr std::uintptr_t OnDragged = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Tag", 0x28, "StrProperty"},
            {"Payload", 0x38, "ObjectProperty"},
            {"DefaultDragVisual", 0x40, "ObjectProperty"},
            {"Pivot", 0x48, "EnumProperty"},
            {"Offset", 0x50, "StructProperty"},
            {"OnDrop", 0x60, "MulticastInlineDelegateProperty"},
            {"OnDragCancelled", 0x70, "MulticastInlineDelegateProperty"},
            {"OnDragged", 0x80, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "DragCancelled",
            "Dragged",
            "Drop",
        }};
    };

    struct DynamicEntryBox
    {
        static constexpr std::string_view Name = "DynamicEntryBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicEntryBoxBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryWidgetClass = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryWidgetClass", 0x208, "ClassProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BP_CreateEntry",
            "BP_CreateEntryOfClass",
            "RemoveEntry",
            "Reset",
        }};
    };

    struct DynamicEntryBoxBase
    {
        static constexpr std::string_view Name = "DynamicEntryBoxBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t EntrySpacing = 0x168;
            static constexpr std::uintptr_t SpacingPattern = 0x178;
            static constexpr std::uintptr_t EntryBoxType = 0x188;
            static constexpr std::uintptr_t EntrySizeRule = 0x18C;
            static constexpr std::uintptr_t EntryHorizontalAlignment = 0x194;
            static constexpr std::uintptr_t EntryVerticalAlignment = 0x195;
            static constexpr std::uintptr_t MaxElementSize = 0x198;
            static constexpr std::uintptr_t RadialBoxSettings = 0x19C;
            static constexpr std::uintptr_t EntryWidgetPool = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"EntrySpacing", 0x168, "StructProperty"},
            {"SpacingPattern", 0x178, "ArrayProperty"},
            {"EntryBoxType", 0x188, "EnumProperty"},
            {"EntrySizeRule", 0x18C, "StructProperty"},
            {"EntryHorizontalAlignment", 0x194, "ByteProperty"},
            {"EntryVerticalAlignment", 0x195, "ByteProperty"},
            {"MaxElementSize", 0x198, "IntProperty"},
            {"RadialBoxSettings", 0x19C, "StructProperty"},
            {"EntryWidgetPool", 0x1C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetAllEntries",
            "GetNumEntries",
            "SetEntrySpacing",
            "SetRadialSettings",
        }};
    };

    struct DynamicPropertyPath
    {
        static constexpr std::string_view Name = "DynamicPropertyPath";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CachedPropertyPath";
        struct Offsets
        {
            static constexpr std::uintptr_t Segments = 0x0;
            static constexpr std::uintptr_t CachedFunction = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Segments", 0x0, "ArrayProperty"},
            {"CachedFunction", 0x18, "ObjectProperty"},
        }};
    };

    struct EditableText
    {
        static constexpr std::string_view Name = "EditableText";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x168;
            static constexpr std::uintptr_t TextDelegate = 0x178;
            static constexpr std::uintptr_t HintText = 0x188;
            static constexpr std::uintptr_t HintTextDelegate = 0x198;
            static constexpr std::uintptr_t WidgetStyle = 0x1B0;
            static constexpr std::uintptr_t IsReadOnly = 0x470;
            static constexpr std::uintptr_t IsPassword = 0x471;
            static constexpr std::uintptr_t MinimumDesiredWidth = 0x474;
            static constexpr std::uintptr_t IsCaretMovedWhenGainFocus = 0x478;
            static constexpr std::uintptr_t SelectAllTextWhenFocused = 0x479;
            static constexpr std::uintptr_t RevertTextOnEscape = 0x47A;
            static constexpr std::uintptr_t ClearKeyboardFocusOnCommit = 0x47B;
            static constexpr std::uintptr_t SelectAllTextOnCommit = 0x47C;
            static constexpr std::uintptr_t AllowContextMenu = 0x47D;
            static constexpr std::uintptr_t KeyboardType = 0x47E;
            static constexpr std::uintptr_t VirtualKeyboardOptions = 0x47F;
            static constexpr std::uintptr_t VirtualKeyboardTrigger = 0x480;
            static constexpr std::uintptr_t VirtualKeyboardDismissAction = 0x481;
            static constexpr std::uintptr_t Justification = 0x482;
            static constexpr std::uintptr_t OverflowPolicy = 0x483;
            static constexpr std::uintptr_t ShapedTextOptions = 0x484;
            static constexpr std::uintptr_t OnTextChanged = 0x488;
            static constexpr std::uintptr_t OnTextCommitted = 0x498;
            static constexpr std::uintptr_t OnTextSelectionChanged = 0x4A8;
            static constexpr std::uintptr_t EnableIntegratedKeyboard = 0x4C8;
            static constexpr std::uintptr_t FontFacesLoadingPaintPolicy = 0x4E0;
            static constexpr std::uintptr_t OnAllFontFacesFinishLoading = 0x4E1;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"Text", 0x168, "TextProperty"},
            {"TextDelegate", 0x178, "DelegateProperty"},
            {"HintText", 0x188, "TextProperty"},
            {"HintTextDelegate", 0x198, "DelegateProperty"},
            {"WidgetStyle", 0x1B0, "StructProperty"},
            {"IsReadOnly", 0x470, "BoolProperty"},
            {"IsPassword", 0x471, "BoolProperty"},
            {"MinimumDesiredWidth", 0x474, "FloatProperty"},
            {"IsCaretMovedWhenGainFocus", 0x478, "BoolProperty"},
            {"SelectAllTextWhenFocused", 0x479, "BoolProperty"},
            {"RevertTextOnEscape", 0x47A, "BoolProperty"},
            {"ClearKeyboardFocusOnCommit", 0x47B, "BoolProperty"},
            {"SelectAllTextOnCommit", 0x47C, "BoolProperty"},
            {"AllowContextMenu", 0x47D, "BoolProperty"},
            {"KeyboardType", 0x47E, "ByteProperty"},
            {"VirtualKeyboardOptions", 0x47F, "StructProperty"},
            {"VirtualKeyboardTrigger", 0x480, "EnumProperty"},
            {"VirtualKeyboardDismissAction", 0x481, "EnumProperty"},
            {"Justification", 0x482, "ByteProperty"},
            {"OverflowPolicy", 0x483, "EnumProperty"},
            {"ShapedTextOptions", 0x484, "StructProperty"},
            {"OnTextChanged", 0x488, "MulticastInlineDelegateProperty"},
            {"OnTextCommitted", 0x498, "MulticastInlineDelegateProperty"},
            {"OnTextSelectionChanged", 0x4A8, "MulticastInlineDelegateProperty"},
            {"EnableIntegratedKeyboard", 0x4C8, "BoolProperty"},
            {"FontFacesLoadingPaintPolicy", 0x4E0, "EnumProperty"},
            {"OnAllFontFacesFinishLoading", 0x4E1, "MulticastSparseDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 19> FunctionNames{{
            "GetFont",
            "GetHintColorAndOpacity",
            "GetHintText",
            "GetJustification",
            "GetSelectedBackgroundColor",
            "GetText",
            "SetFont",
            "SetFontMaterial",
            "SetFontOutlineMaterial",
            "SetHintColorAndOpacity",
            "SetHintText",
            "SetIsPassword",
            "SetIsReadOnly",
            "SetJustification",
            "SetMinimumDesiredWidth",
            "SetSelectedBackgroundColor",
            "SetText",
            "SetTextOverflowPolicy",
            "ToggleVirtualKeyboard",
        }};
    };

    struct EditableTextBox
    {
        static constexpr std::string_view Name = "EditableTextBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x168;
            static constexpr std::uintptr_t TextDelegate = 0x178;
            static constexpr std::uintptr_t WidgetStyle = 0x190;
            static constexpr std::uintptr_t HintText = 0xE10;
            static constexpr std::uintptr_t HintTextDelegate = 0xE20;
            static constexpr std::uintptr_t IsReadOnly = 0xE2C;
            static constexpr std::uintptr_t IsPassword = 0xE2D;
            static constexpr std::uintptr_t MinimumDesiredWidth = 0xE30;
            static constexpr std::uintptr_t IsCaretMovedWhenGainFocus = 0xE34;
            static constexpr std::uintptr_t SelectAllTextWhenFocused = 0xE35;
            static constexpr std::uintptr_t RevertTextOnEscape = 0xE36;
            static constexpr std::uintptr_t ClearKeyboardFocusOnCommit = 0xE37;
            static constexpr std::uintptr_t SelectAllTextOnCommit = 0xE38;
            static constexpr std::uintptr_t AllowContextMenu = 0xE39;
            static constexpr std::uintptr_t KeyboardType = 0xE3A;
            static constexpr std::uintptr_t VirtualKeyboardOptions = 0xE3B;
            static constexpr std::uintptr_t VirtualKeyboardTrigger = 0xE3C;
            static constexpr std::uintptr_t VirtualKeyboardDismissAction = 0xE3D;
            static constexpr std::uintptr_t Justification = 0xE3E;
            static constexpr std::uintptr_t OverflowPolicy = 0xE3F;
            static constexpr std::uintptr_t ShapedTextOptions = 0xE40;
            static constexpr std::uintptr_t OnTextChanged = 0xE48;
            static constexpr std::uintptr_t OnTextCommitted = 0xE58;
            static constexpr std::uintptr_t FontFacesLoadingPaintPolicy = 0xE90;
            static constexpr std::uintptr_t OnAllFontFacesFinishLoading = 0xE91;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"Text", 0x168, "TextProperty"},
            {"TextDelegate", 0x178, "DelegateProperty"},
            {"WidgetStyle", 0x190, "StructProperty"},
            {"HintText", 0xE10, "TextProperty"},
            {"HintTextDelegate", 0xE20, "DelegateProperty"},
            {"IsReadOnly", 0xE2C, "BoolProperty"},
            {"IsPassword", 0xE2D, "BoolProperty"},
            {"MinimumDesiredWidth", 0xE30, "FloatProperty"},
            {"IsCaretMovedWhenGainFocus", 0xE34, "BoolProperty"},
            {"SelectAllTextWhenFocused", 0xE35, "BoolProperty"},
            {"RevertTextOnEscape", 0xE36, "BoolProperty"},
            {"ClearKeyboardFocusOnCommit", 0xE37, "BoolProperty"},
            {"SelectAllTextOnCommit", 0xE38, "BoolProperty"},
            {"AllowContextMenu", 0xE39, "BoolProperty"},
            {"KeyboardType", 0xE3A, "ByteProperty"},
            {"VirtualKeyboardOptions", 0xE3B, "StructProperty"},
            {"VirtualKeyboardTrigger", 0xE3C, "EnumProperty"},
            {"VirtualKeyboardDismissAction", 0xE3D, "EnumProperty"},
            {"Justification", 0xE3E, "ByteProperty"},
            {"OverflowPolicy", 0xE3F, "EnumProperty"},
            {"ShapedTextOptions", 0xE40, "StructProperty"},
            {"OnTextChanged", 0xE48, "MulticastInlineDelegateProperty"},
            {"OnTextCommitted", 0xE58, "MulticastInlineDelegateProperty"},
            {"FontFacesLoadingPaintPolicy", 0xE90, "EnumProperty"},
            {"OnAllFontFacesFinishLoading", 0xE91, "MulticastSparseDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "ClearError",
            "GetText",
            "HasError",
            "SetError",
            "SetForegroundColor",
            "SetHintText",
            "SetIsPassword",
            "SetIsReadOnly",
            "SetJustification",
            "SetText",
            "SetTextOverflowPolicy",
        }};
    };

    struct EventReply
    {
        static constexpr std::string_view Name = "EventReply";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExpandableArea
    {
        static constexpr std::string_view Name = "ExpandableArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x170;
            static constexpr std::uintptr_t BorderBrush = 0x2F0;
            static constexpr std::uintptr_t BorderColor = 0x3A0;
            static constexpr std::uintptr_t bIsExpanded = 0x3B4;
            static constexpr std::uintptr_t MaxHeight = 0x3B8;
            static constexpr std::uintptr_t HeaderPadding = 0x3BC;
            static constexpr std::uintptr_t AreaPadding = 0x3CC;
            static constexpr std::uintptr_t OnExpansionChanged = 0x3E0;
            static constexpr std::uintptr_t HeaderContent = 0x3F0;
            static constexpr std::uintptr_t BodyContent = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Style", 0x170, "StructProperty"},
            {"BorderBrush", 0x2F0, "StructProperty"},
            {"BorderColor", 0x3A0, "StructProperty"},
            {"bIsExpanded", 0x3B4, "BoolProperty"},
            {"MaxHeight", 0x3B8, "FloatProperty"},
            {"HeaderPadding", 0x3BC, "StructProperty"},
            {"AreaPadding", 0x3CC, "StructProperty"},
            {"OnExpansionChanged", 0x3E0, "MulticastInlineDelegateProperty"},
            {"HeaderContent", 0x3F0, "ObjectProperty"},
            {"BodyContent", 0x3F8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetIsExpanded",
            "SetIsExpanded",
            "SetIsExpanded_Animated",
        }};
    };

    struct FieldNotifyDataAsset
    {
        static constexpr std::string_view Name = "FieldNotifyDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BroadcastAllFieldValuesChanged",
            "K2_BroadcastFieldValueChanged",
        }};
    };

    struct FloatBinding
    {
        static constexpr std::string_view Name = "FloatBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetValue",
        }};
    };

    struct GameViewportSubsystem
    {
        static constexpr std::string_view Name = "GameViewportSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "AddWidget",
            "AddWidgetForPlayer",
            "GetWidgetSlot",
            "IsWidgetAdded",
            "RemoveWidget",
            "SetWidgetSlot",
            "SetWidgetSlotDesiredSize",
            "SetWidgetSlotPosition",
        }};
    };

    struct GameViewportWidgetSlot
    {
        static constexpr std::string_view Name = "GameViewportWidgetSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Anchors = 0x0;
            static constexpr std::uintptr_t Offsets_ = 0x20;
            static constexpr std::uintptr_t Alignment = 0x30;
            static constexpr std::uintptr_t ZOrder = 0x40;
            static constexpr std::uintptr_t bAutoRemoveOnWorldRemoved = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Anchors", 0x0, "StructProperty"},
            {"Offsets", 0x20, "StructProperty"},
            {"Alignment", 0x30, "StructProperty"},
            {"ZOrder", 0x40, "IntProperty"},
            {"bAutoRemoveOnWorldRemoved", 0x44, "BoolProperty"},
        }};
    };

    struct GridPanel
    {
        static constexpr std::string_view Name = "GridPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColumnFill = 0x180;
            static constexpr std::uintptr_t RowFill = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ColumnFill", 0x180, "ArrayProperty"},
            {"RowFill", 0x190, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddChildToGrid",
            "ClearFill",
            "SetColumnFill",
            "SetRowFill",
        }};
    };

    struct GridSlot
    {
        static constexpr std::string_view Name = "GridSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t HorizontalAlignment = 0x48;
            static constexpr std::uintptr_t VerticalAlignment = 0x49;
            static constexpr std::uintptr_t Row = 0x4C;
            static constexpr std::uintptr_t RowSpan = 0x50;
            static constexpr std::uintptr_t Column = 0x54;
            static constexpr std::uintptr_t ColumnSpan = 0x58;
            static constexpr std::uintptr_t Layer = 0x5C;
            static constexpr std::uintptr_t Nudge = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"HorizontalAlignment", 0x48, "ByteProperty"},
            {"VerticalAlignment", 0x49, "ByteProperty"},
            {"Row", 0x4C, "IntProperty"},
            {"RowSpan", 0x50, "IntProperty"},
            {"Column", 0x54, "IntProperty"},
            {"ColumnSpan", 0x58, "IntProperty"},
            {"Layer", 0x5C, "IntProperty"},
            {"Nudge", 0x60, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "SetColumn",
            "SetColumnSpan",
            "SetHorizontalAlignment",
            "SetLayer",
            "SetNudge",
            "SetPadding",
            "SetRow",
            "SetRowSpan",
            "SetVerticalAlignment",
        }};
    };

    struct HorizontalBox
    {
        static constexpr std::string_view Name = "HorizontalBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AddChildToHorizontalBox",
        }};
    };

    struct HorizontalBoxSlot
    {
        static constexpr std::string_view Name = "HorizontalBoxSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x40;
            static constexpr std::uintptr_t Padding = 0x48;
            static constexpr std::uintptr_t HorizontalAlignment = 0x58;
            static constexpr std::uintptr_t VerticalAlignment = 0x59;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Size", 0x40, "StructProperty"},
            {"Padding", 0x48, "StructProperty"},
            {"HorizontalAlignment", 0x58, "ByteProperty"},
            {"VerticalAlignment", 0x59, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetSize",
            "SetVerticalAlignment",
        }};
    };

    struct Image
    {
        static constexpr std::string_view Name = "Image";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Brush = 0x170;
            static constexpr std::uintptr_t BrushDelegate = 0x220;
            static constexpr std::uintptr_t ColorAndOpacity = 0x22C;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x23C;
            static constexpr std::uintptr_t bFlipForRightToLeftFlowDirection = 0x248;
            static constexpr std::uintptr_t OnMouseButtonDownEvent = 0x24C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Brush", 0x170, "StructProperty"},
            {"BrushDelegate", 0x220, "DelegateProperty"},
            {"ColorAndOpacity", 0x22C, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x23C, "DelegateProperty"},
            {"bFlipForRightToLeftFlowDirection", 0x248, "BoolProperty"},
            {"OnMouseButtonDownEvent", 0x24C, "DelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "GetDynamicMaterial",
            "SetBrush",
            "SetBrushFromAsset",
            "SetBrushFromAtlasInterface",
            "SetBrushFromMaterial",
            "SetBrushFromSoftMaterial",
            "SetBrushFromSoftTexture",
            "SetBrushFromTexture",
            "SetBrushFromTextureDynamic",
            "SetBrushResourceObject",
            "SetBrushTintColor",
            "SetColorAndOpacity",
            "SetDesiredSizeOverride",
            "SetOpacity",
        }};
    };

    struct InputKeySelector
    {
        static constexpr std::string_view Name = "InputKeySelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x170;
            static constexpr std::uintptr_t TextStyle = 0x500;
            static constexpr std::uintptr_t SelectedKey = 0x7E0;
            static constexpr std::uintptr_t Margin = 0x800;
            static constexpr std::uintptr_t KeySelectionText = 0x810;
            static constexpr std::uintptr_t NoKeySpecifiedText = 0x820;
            static constexpr std::uintptr_t bAllowModifierKeys = 0x830;
            static constexpr std::uintptr_t bAllowGamepadKeys = 0x831;
            static constexpr std::uintptr_t EscapeKeys = 0x838;
            static constexpr std::uintptr_t OnKeySelected = 0x848;
            static constexpr std::uintptr_t OnIsSelectingKeyChanged = 0x858;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"WidgetStyle", 0x170, "StructProperty"},
            {"TextStyle", 0x500, "StructProperty"},
            {"SelectedKey", 0x7E0, "StructProperty"},
            {"Margin", 0x800, "StructProperty"},
            {"KeySelectionText", 0x810, "TextProperty"},
            {"NoKeySpecifiedText", 0x820, "TextProperty"},
            {"bAllowModifierKeys", 0x830, "BoolProperty"},
            {"bAllowGamepadKeys", 0x831, "BoolProperty"},
            {"EscapeKeys", 0x838, "ArrayProperty"},
            {"OnKeySelected", 0x848, "MulticastInlineDelegateProperty"},
            {"OnIsSelectingKeyChanged", 0x858, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetIsSelectingKey",
            "SetAllowGamepadKeys",
            "SetAllowModifierKeys",
            "SetEscapeKeys",
            "SetKeySelectionText",
            "SetNoKeySpecifiedText",
            "SetSelectedKey",
            "SetTextBlockVisibility",
        }};
    };

    struct Int32Binding
    {
        static constexpr std::string_view Name = "Int32Binding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetValue",
        }};
    };

    struct InvalidationBox
    {
        static constexpr std::string_view Name = "InvalidationBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanCache = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCanCache", 0x180, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetCanCache",
            "InvalidateCache",
            "SetCanCache",
        }};
    };

    struct ListEntryEventExtension
    {
        static constexpr std::string_view Name = "ListEntryEventExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidgetExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ListView
    {
        static constexpr std::string_view Name = "ListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListViewBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x460;
            static constexpr std::uintptr_t ScrollBarStyle = 0x520;
            static constexpr std::uintptr_t bEnableShadowBrush = 0xB70;
            static constexpr std::uintptr_t ShadowBrushStyle = 0xB80;
            static constexpr std::uintptr_t orientation = 0xE70;
            static constexpr std::uintptr_t ScrollBarPosition = 0xE71;
            static constexpr std::uintptr_t SelectionMode = 0xE72;
            static constexpr std::uintptr_t ConsumeMouseWheel = 0xE73;
            static constexpr std::uintptr_t bClearSelectionOnClick = 0xE74;
            static constexpr std::uintptr_t bIsFocusable = 0xE75;
            static constexpr std::uintptr_t bClearScrollVelocityOnSelection = 0xE76;
            static constexpr std::uintptr_t bReturnFocusToSelection = 0xE77;
            static constexpr std::uintptr_t bEnableProximateEntryNavigation = 0xE78;
            static constexpr std::uintptr_t ScrollIntoViewAlignment = 0xE79;
            static constexpr std::uintptr_t ListItems = 0xE80;
            static constexpr std::uintptr_t HorizontalEntrySpacing = 0xEA0;
            static constexpr std::uintptr_t VerticalEntrySpacing = 0xEA4;
            static constexpr std::uintptr_t ScrollBarPadding = 0xEA8;
            static constexpr std::uintptr_t BP_OnEntryInitialized = 0xEB8;
            static constexpr std::uintptr_t BP_OnItemClicked = 0xEC8;
            static constexpr std::uintptr_t BP_OnItemDoubleClicked = 0xED8;
            static constexpr std::uintptr_t BP_OnItemDragDetected = 0xEE8;
            static constexpr std::uintptr_t BP_OnItemDragEnter = 0xEF8;
            static constexpr std::uintptr_t BP_OnItemDragLeave = 0xF08;
            static constexpr std::uintptr_t BP_OnItemAcceptDrop = 0xF18;
            static constexpr std::uintptr_t BP_OnItemDragCancelled = 0xF28;
            static constexpr std::uintptr_t BP_OnListViewDraggingStateChanged = 0xF38;
            static constexpr std::uintptr_t BP_OnItemIsHoveredChanged = 0xF48;
            static constexpr std::uintptr_t BP_OnItemSelectionChanged = 0xF58;
            static constexpr std::uintptr_t BP_OnItemScrolledIntoView = 0xF68;
            static constexpr std::uintptr_t BP_OnListViewScrolled = 0xF78;
            static constexpr std::uintptr_t BP_OnListViewFinishedScrolling = 0xF88;
            static constexpr std::uintptr_t BP_OnListViewTouchStart = 0xF98;
            static constexpr std::uintptr_t BP_OnListViewTouchMove = 0xFA8;
            static constexpr std::uintptr_t BP_OnListViewTouchEnd = 0xFB8;
            static constexpr std::uintptr_t BP_OnIsItemSelectableOrNavigable = 0xFC8;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"WidgetStyle", 0x460, "StructProperty"},
            {"ScrollBarStyle", 0x520, "StructProperty"},
            {"bEnableShadowBrush", 0xB70, "BoolProperty"},
            {"ShadowBrushStyle", 0xB80, "StructProperty"},
            {"orientation", 0xE70, "ByteProperty"},
            {"ScrollBarPosition", 0xE71, "ByteProperty"},
            {"SelectionMode", 0xE72, "ByteProperty"},
            {"ConsumeMouseWheel", 0xE73, "EnumProperty"},
            {"bClearSelectionOnClick", 0xE74, "BoolProperty"},
            {"bIsFocusable", 0xE75, "BoolProperty"},
            {"bClearScrollVelocityOnSelection", 0xE76, "BoolProperty"},
            {"bReturnFocusToSelection", 0xE77, "BoolProperty"},
            {"bEnableProximateEntryNavigation", 0xE78, "BoolProperty"},
            {"ScrollIntoViewAlignment", 0xE79, "EnumProperty"},
            {"ListItems", 0xE80, "ArrayProperty"},
            {"HorizontalEntrySpacing", 0xEA0, "FloatProperty"},
            {"VerticalEntrySpacing", 0xEA4, "FloatProperty"},
            {"ScrollBarPadding", 0xEA8, "StructProperty"},
            {"BP_OnEntryInitialized", 0xEB8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemClicked", 0xEC8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDoubleClicked", 0xED8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDragDetected", 0xEE8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDragEnter", 0xEF8, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDragLeave", 0xF08, "MulticastInlineDelegateProperty"},
            {"BP_OnItemAcceptDrop", 0xF18, "MulticastInlineDelegateProperty"},
            {"BP_OnItemDragCancelled", 0xF28, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewDraggingStateChanged", 0xF38, "MulticastInlineDelegateProperty"},
            {"BP_OnItemIsHoveredChanged", 0xF48, "MulticastInlineDelegateProperty"},
            {"BP_OnItemSelectionChanged", 0xF58, "MulticastInlineDelegateProperty"},
            {"BP_OnItemScrolledIntoView", 0xF68, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewScrolled", 0xF78, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewFinishedScrolling", 0xF88, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewTouchStart", 0xF98, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewTouchMove", 0xFA8, "MulticastInlineDelegateProperty"},
            {"BP_OnListViewTouchEnd", 0xFB8, "MulticastInlineDelegateProperty"},
            {"BP_OnIsItemSelectableOrNavigable", 0xFC8, "DelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 36> FunctionNames{{
            "AddItem",
            "AddItemAt",
            "AddItems",
            "AddItemsAt",
            "BP_CancelScrollIntoView",
            "BP_ClearSelection",
            "BP_GetNumItemsSelected",
            "BP_GetSelectedItem",
            "BP_GetSelectedItems",
            "BP_IsItemVisible",
            "BP_NavigateToItem",
            "BP_ScrollItemIntoView",
            "BP_SetItemSelection",
            "BP_SetListItems",
            "BP_SetSelectedItem",
            "ClearListItems",
            "GetHorizontalEntrySpacing",
            "GetIndexForItem",
            "GetItemAt",
            "GetListItems",
            "GetNumItems",
            "GetScrollBarPadding",
            "GetVerticalEntrySpacing",
            "IsRefreshPending",
            "NavigateToIndex",
            "OnListItemEndPlayed",
            "OnListItemOuterEndPlayed",
            "RemoveItem",
            "RemoveItems",
            "ScrollIndexIntoView",
            "SetEnableProximateEntryNavigation",
            "SetReturnFocusToSelection",
            "SetScrollBarPadding",
            "SetScrollIntoViewAlignment",
            "SetSelectedIndex",
            "SetSelectionMode",
        }};
    };

    struct ListViewBase
    {
        static constexpr std::string_view Name = "ListViewBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnEntryGenerated = 0x168;
            static constexpr std::uintptr_t BP_OnEntriesGenerated = 0x178;
            static constexpr std::uintptr_t EntryWidgetClass = 0x198;
            static constexpr std::uintptr_t bPaintSelectedEntriesOnTop = 0x1A0;
            static constexpr std::uintptr_t bPaintHoveredEntriesOnTop = 0x1A1;
            static constexpr std::uintptr_t bEnableScrolling = 0x1A2;
            static constexpr std::uintptr_t WheelScrollMultiplier = 0x1A4;
            static constexpr std::uintptr_t bEnableScrollAnimation = 0x1A8;
            static constexpr std::uintptr_t ScrollingAnimationInterpolationSpeed = 0x1AC;
            static constexpr std::uintptr_t bInEnableTouchAnimatedScrolling = 0x1B0;
            static constexpr std::uintptr_t AllowOverscroll = 0x1B1;
            static constexpr std::uintptr_t bEnableRightClickScrolling = 0x1B2;
            static constexpr std::uintptr_t bEnableTouchScrolling = 0x1B3;
            static constexpr std::uintptr_t bIsPointerScrollingEnabled = 0x1B4;
            static constexpr std::uintptr_t bIsGamepadScrollingEnabled = 0x1B5;
            static constexpr std::uintptr_t bEnableFixedLineOffset = 0x1B6;
            static constexpr std::uintptr_t FixedLineScrollOffset = 0x1B8;
            static constexpr std::uintptr_t bAllowDragging = 0x1BC;
            static constexpr std::uintptr_t bAllowDragDrop = 0x1BD;
            static constexpr std::uintptr_t DragDropVisualPivot = 0x1BE;
            static constexpr std::uintptr_t DragDropVisualOffset = 0x1C0;
            static constexpr std::uintptr_t DragDropVisualEntryClass = 0x1D0;
            static constexpr std::uintptr_t DragDropOperationClass = 0x1D8;
            static constexpr std::uintptr_t DragVisualWidget = 0x1E0;
            static constexpr std::uintptr_t bIsDragging = 0x1E8;
            static constexpr std::uintptr_t bSelectItemOnNavigation = 0x1E9;
            static constexpr std::uintptr_t bAllowKeepPreselectedItems = 0x1EA;
            static constexpr std::uintptr_t BP_OnEntryReleased = 0x1F0;
            static constexpr std::uintptr_t EntryWidgetPool = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"BP_OnEntryGenerated", 0x168, "MulticastInlineDelegateProperty"},
            {"BP_OnEntriesGenerated", 0x178, "MulticastInlineDelegateProperty"},
            {"EntryWidgetClass", 0x198, "ClassProperty"},
            {"bPaintSelectedEntriesOnTop", 0x1A0, "BoolProperty"},
            {"bPaintHoveredEntriesOnTop", 0x1A1, "BoolProperty"},
            {"bEnableScrolling", 0x1A2, "BoolProperty"},
            {"WheelScrollMultiplier", 0x1A4, "FloatProperty"},
            {"bEnableScrollAnimation", 0x1A8, "BoolProperty"},
            {"ScrollingAnimationInterpolationSpeed", 0x1AC, "FloatProperty"},
            {"bInEnableTouchAnimatedScrolling", 0x1B0, "BoolProperty"},
            {"AllowOverscroll", 0x1B1, "BoolProperty"},
            {"bEnableRightClickScrolling", 0x1B2, "BoolProperty"},
            {"bEnableTouchScrolling", 0x1B3, "BoolProperty"},
            {"bIsPointerScrollingEnabled", 0x1B4, "BoolProperty"},
            {"bIsGamepadScrollingEnabled", 0x1B5, "BoolProperty"},
            {"bEnableFixedLineOffset", 0x1B6, "BoolProperty"},
            {"FixedLineScrollOffset", 0x1B8, "FloatProperty"},
            {"bAllowDragging", 0x1BC, "BoolProperty"},
            {"bAllowDragDrop", 0x1BD, "BoolProperty"},
            {"DragDropVisualPivot", 0x1BE, "EnumProperty"},
            {"DragDropVisualOffset", 0x1C0, "StructProperty"},
            {"DragDropVisualEntryClass", 0x1D0, "ClassProperty"},
            {"DragDropOperationClass", 0x1D8, "ClassProperty"},
            {"DragVisualWidget", 0x1E0, "ObjectProperty"},
            {"bIsDragging", 0x1E8, "BoolProperty"},
            {"bSelectItemOnNavigation", 0x1E9, "BoolProperty"},
            {"bAllowKeepPreselectedItems", 0x1EA, "BoolProperty"},
            {"BP_OnEntryReleased", 0x1F0, "MulticastInlineDelegateProperty"},
            {"EntryWidgetPool", 0x200, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "CancelListViewDragDrop",
            "CreateDragDropOperation",
            "EndInertialScrolling",
            "GetDisplayedEntryWidgets",
            "GetIsDraggingListItem",
            "GetOverscroll",
            "GetScrollOffset",
            "GetScrollbarVisibility",
            "RegenerateAllEntries",
            "RequestRefresh",
            "ScrollToBottom",
            "ScrollToTop",
            "SetAllowOverScroll",
            "SetEnableScrolling",
            "SetIsGamepadScrollingEnabled",
            "SetIsPointerScrollingEnabled",
            "SetIsTouchScrollingEnabled",
            "SetScrollOffset",
            "SetScrollbarVisibility",
            "SetWheelScrollMultiplier",
        }};
    };

    struct ListViewDesignerPreviewItem
    {
        static constexpr std::string_view Name = "ListViewDesignerPreviewItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MenuAnchor
    {
        static constexpr std::string_view Name = "MenuAnchor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MenuClass = 0x180;
            static constexpr std::uintptr_t OnGetMenuContentEvent = 0x188;
            static constexpr std::uintptr_t OnGetUserMenuContentEvent = 0x194;
            static constexpr std::uintptr_t Placement = 0x1A0;
            static constexpr std::uintptr_t bFitInWindow = 0x1A1;
            static constexpr std::uintptr_t ShouldDeferPaintingAfterWindowContent = 0x1A2;
            static constexpr std::uintptr_t UseApplicationMenuStack = 0x1A3;
            static constexpr std::uintptr_t ShowMenuBackground = 0x1A4;
            static constexpr std::uintptr_t OnMenuOpenChanged = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MenuClass", 0x180, "ClassProperty"},
            {"OnGetMenuContentEvent", 0x188, "DelegateProperty"},
            {"OnGetUserMenuContentEvent", 0x194, "DelegateProperty"},
            {"Placement", 0x1A0, "ByteProperty"},
            {"bFitInWindow", 0x1A1, "BoolProperty"},
            {"ShouldDeferPaintingAfterWindowContent", 0x1A2, "BoolProperty"},
            {"UseApplicationMenuStack", 0x1A3, "BoolProperty"},
            {"ShowMenuBackground", 0x1A4, "BoolProperty"},
            {"OnMenuOpenChanged", 0x1A8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "Close",
            "FitInWindow",
            "GetMenuPosition",
            "HasOpenSubMenus",
            "IsOpen",
            "Open",
            "SetPlacement",
            "ShouldOpenDueToClick",
            "ToggleOpen",
        }};
    };

    struct MouseCursorBinding
    {
        static constexpr std::string_view Name = "MouseCursorBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetValue",
        }};
    };

    struct MouseHoverComponent
    {
        static constexpr std::string_view Name = "MouseHoverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsHovered = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsHovered", 0x58, "BoolProperty"},
        }};
    };

    struct MovieScene2DTransformMask
    {
        static constexpr std::string_view Name = "MovieScene2DTransformMask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mask = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mask", 0x0, "UInt32Property"},
        }};
    };

    struct MovieScene2DTransformPropertySystem
    {
        static constexpr std::string_view Name = "MovieScene2DTransformPropertySystem";
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

    struct MovieScene2DTransformSection
    {
        static constexpr std::string_view Name = "MovieScene2DTransformSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformMask = 0x148;
            static constexpr std::uintptr_t Translation = 0x150;
            static constexpr std::uintptr_t Rotation = 0x2F0;
            static constexpr std::uintptr_t Scale = 0x3C0;
            static constexpr std::uintptr_t Shear = 0x560;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TransformMask", 0x148, "StructProperty"},
            {"Translation", 0x150, "StructProperty"},
            {"Rotation", 0x2F0, "StructProperty"},
            {"Scale", 0x3C0, "StructProperty"},
            {"Shear", 0x560, "StructProperty"},
        }};
    };

    struct MovieScene2DTransformTrack
    {
        static constexpr std::string_view Name = "MovieScene2DTransformTrack";
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

    struct MovieSceneMarginPropertySystem
    {
        static constexpr std::string_view Name = "MovieSceneMarginPropertySystem";
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

    struct MovieSceneMarginSection
    {
        static constexpr std::string_view Name = "MovieSceneMarginSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t TopCurve = 0x148;
            static constexpr std::uintptr_t LeftCurve = 0x218;
            static constexpr std::uintptr_t RightCurve = 0x2E8;
            static constexpr std::uintptr_t BottomCurve = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TopCurve", 0x148, "StructProperty"},
            {"LeftCurve", 0x218, "StructProperty"},
            {"RightCurve", 0x2E8, "StructProperty"},
            {"BottomCurve", 0x3B8, "StructProperty"},
        }};
    };

    struct MovieSceneMarginTrack
    {
        static constexpr std::string_view Name = "MovieSceneMarginTrack";
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

    struct MovieSceneWidgetMaterialSystem
    {
        static constexpr std::string_view Name = "MovieSceneWidgetMaterialSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneWidgetMaterialTrack
    {
        static constexpr std::string_view Name = "MovieSceneWidgetMaterialTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneMaterialTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushPropertyNamePath = 0x120;
            static constexpr std::uintptr_t TrackName = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BrushPropertyNamePath", 0x120, "ArrayProperty"},
            {"TrackName", 0x130, "NameProperty"},
        }};
    };

    struct MultiLineEditableText
    {
        static constexpr std::string_view Name = "MultiLineEditableText";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextLayoutWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x190;
            static constexpr std::uintptr_t HintText = 0x1A0;
            static constexpr std::uintptr_t HintTextDelegate = 0x1B0;
            static constexpr std::uintptr_t WidgetStyle = 0x1C0;
            static constexpr std::uintptr_t bIsReadOnly = 0x4A0;
            static constexpr std::uintptr_t SelectAllTextWhenFocused = 0x4A1;
            static constexpr std::uintptr_t ClearTextSelectionOnFocusLoss = 0x4A2;
            static constexpr std::uintptr_t RevertTextOnEscape = 0x4A3;
            static constexpr std::uintptr_t ClearKeyboardFocusOnCommit = 0x4A4;
            static constexpr std::uintptr_t AllowContextMenu = 0x4A5;
            static constexpr std::uintptr_t VirtualKeyboardOptions = 0x4A6;
            static constexpr std::uintptr_t VirtualKeyboardDismissAction = 0x4A7;
            static constexpr std::uintptr_t OnTextChanged = 0x4A8;
            static constexpr std::uintptr_t OnTextCommitted = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Text", 0x190, "TextProperty"},
            {"HintText", 0x1A0, "TextProperty"},
            {"HintTextDelegate", 0x1B0, "DelegateProperty"},
            {"WidgetStyle", 0x1C0, "StructProperty"},
            {"bIsReadOnly", 0x4A0, "BoolProperty"},
            {"SelectAllTextWhenFocused", 0x4A1, "BoolProperty"},
            {"ClearTextSelectionOnFocusLoss", 0x4A2, "BoolProperty"},
            {"RevertTextOnEscape", 0x4A3, "BoolProperty"},
            {"ClearKeyboardFocusOnCommit", 0x4A4, "BoolProperty"},
            {"AllowContextMenu", 0x4A5, "BoolProperty"},
            {"VirtualKeyboardOptions", 0x4A6, "StructProperty"},
            {"VirtualKeyboardDismissAction", 0x4A7, "EnumProperty"},
            {"OnTextChanged", 0x4A8, "MulticastInlineDelegateProperty"},
            {"OnTextCommitted", 0x4B8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "GetFont",
            "GetHintText",
            "GetText",
            "SetFont",
            "SetFontMaterial",
            "SetFontOutlineMaterial",
            "SetHintText",
            "SetIsReadOnly",
            "SetText",
            "SetWidgetStyle",
        }};
    };

    struct MultiLineEditableTextBox
    {
        static constexpr std::string_view Name = "MultiLineEditableTextBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextLayoutWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x190;
            static constexpr std::uintptr_t HintText = 0x1A0;
            static constexpr std::uintptr_t HintTextDelegate = 0x1B0;
            static constexpr std::uintptr_t WidgetStyle = 0x1C0;
            static constexpr std::uintptr_t bIsReadOnly = 0xE40;
            static constexpr std::uintptr_t AllowContextMenu = 0xE41;
            static constexpr std::uintptr_t VirtualKeyboardOptions = 0xE42;
            static constexpr std::uintptr_t VirtualKeyboardDismissAction = 0xE43;
            static constexpr std::uintptr_t OnTextChanged = 0xE48;
            static constexpr std::uintptr_t OnTextCommitted = 0xE58;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Text", 0x190, "TextProperty"},
            {"HintText", 0x1A0, "TextProperty"},
            {"HintTextDelegate", 0x1B0, "DelegateProperty"},
            {"WidgetStyle", 0x1C0, "StructProperty"},
            {"bIsReadOnly", 0xE40, "BoolProperty"},
            {"AllowContextMenu", 0xE41, "BoolProperty"},
            {"VirtualKeyboardOptions", 0xE42, "StructProperty"},
            {"VirtualKeyboardDismissAction", 0xE43, "EnumProperty"},
            {"OnTextChanged", 0xE48, "MulticastInlineDelegateProperty"},
            {"OnTextCommitted", 0xE58, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetHintText",
            "GetText",
            "SetError",
            "SetForegroundColor",
            "SetHintText",
            "SetIsReadOnly",
            "SetText",
            "SetTextStyle",
        }};
    };

    struct NamedSlot
    {
        static constexpr std::string_view Name = "NamedSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};
    };

    struct NamedSlotBinding
    {
        static constexpr std::string_view Name = "NamedSlotBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Content = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Content", 0x8, "ObjectProperty"},
        }};
    };

    struct NamedSlotInterface
    {
        static constexpr std::string_view Name = "NamedSlotInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NativeWidgetHost
    {
        static constexpr std::string_view Name = "NativeWidgetHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0x30;
            static constexpr std::uintptr_t bIsEnabledDelegate = 0x38;
            static constexpr std::uintptr_t ToolTipTextDelegate = 0x44;
            static constexpr std::uintptr_t ToolTipText = 0x50;
            static constexpr std::uintptr_t ToolTipWidget = 0x60;
            static constexpr std::uintptr_t ToolTipWidgetDelegate = 0x68;
            static constexpr std::uintptr_t VisibilityDelegate = 0x74;
            static constexpr std::uintptr_t RenderTransform = 0x80;
            static constexpr std::uintptr_t RenderTransformPivot = 0xB8;
            static constexpr std::uintptr_t FlowDirectionPreference = 0xC8;
            static constexpr std::uintptr_t bCreatedByConstructionScript = 0xC9;
            static constexpr std::uintptr_t bIsEnabled = 0xC9;
            static constexpr std::uintptr_t bIsVariable = 0xC9;
            static constexpr std::uintptr_t bIsVolatile = 0xC9;
            static constexpr std::uintptr_t bOverride_Cursor = 0xC9;
            static constexpr std::uintptr_t bWrappedByComponent = 0xCA;
            static constexpr std::uintptr_t Cursor = 0xCB;
            static constexpr std::uintptr_t Clipping = 0xCC;
            static constexpr std::uintptr_t Visibility = 0xCD;
            static constexpr std::uintptr_t PixelSnapping = 0xCE;
            static constexpr std::uintptr_t RenderOpacity = 0xD0;
            static constexpr std::uintptr_t AccessibleWidgetData = 0xD8;
            static constexpr std::uintptr_t Navigation = 0xE0;
            static constexpr std::uintptr_t NativeBindings = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"Slot", 0x30, "ObjectProperty"},
            {"bIsEnabledDelegate", 0x38, "DelegateProperty"},
            {"ToolTipTextDelegate", 0x44, "DelegateProperty"},
            {"ToolTipText", 0x50, "TextProperty"},
            {"ToolTipWidget", 0x60, "ObjectProperty"},
            {"ToolTipWidgetDelegate", 0x68, "DelegateProperty"},
            {"VisibilityDelegate", 0x74, "DelegateProperty"},
            {"RenderTransform", 0x80, "StructProperty"},
            {"RenderTransformPivot", 0xB8, "StructProperty"},
            {"FlowDirectionPreference", 0xC8, "EnumProperty"},
            {"bCreatedByConstructionScript", 0xC9, "BoolProperty"},
            {"bIsEnabled", 0xC9, "BoolProperty"},
            {"bIsVariable", 0xC9, "BoolProperty"},
            {"bIsVolatile", 0xC9, "BoolProperty"},
            {"bOverride_Cursor", 0xC9, "BoolProperty"},
            {"bWrappedByComponent", 0xCA, "BoolProperty"},
            {"Cursor", 0xCB, "ByteProperty"},
            {"Clipping", 0xCC, "EnumProperty"},
            {"Visibility", 0xCD, "EnumProperty"},
            {"PixelSnapping", 0xCE, "EnumProperty"},
            {"RenderOpacity", 0xD0, "FloatProperty"},
            {"AccessibleWidgetData", 0xD8, "ObjectProperty"},
            {"Navigation", 0xE0, "ObjectProperty"},
            {"NativeBindings", 0x138, "ArrayProperty"},
        }};
    };

    struct NavigationUIComponent
    {
        static constexpr std::string_view Name = "NavigationUIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNavigationEntered = 0x58;
            static constexpr std::uintptr_t OnNavigationExited = 0x5C;
            static constexpr std::uintptr_t OnNavigationEnteredDelegate = 0x60;
            static constexpr std::uintptr_t OnNavigationExitedDelegate = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnNavigationEntered", 0x58, "NameProperty"},
            {"OnNavigationExited", 0x5C, "NameProperty"},
            {"OnNavigationEnteredDelegate", 0x60, "MulticastInlineDelegateProperty"},
            {"OnNavigationExitedDelegate", 0x70, "MulticastInlineDelegateProperty"},
        }};
    };

    struct Overlay
    {
        static constexpr std::string_view Name = "Overlay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddChildToOverlay",
            "ReplaceOverlayChildAt",
        }};
    };

    struct OverlaySlot
    {
        static constexpr std::string_view Name = "OverlaySlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x40;
            static constexpr std::uintptr_t HorizontalAlignment = 0x50;
            static constexpr std::uintptr_t VerticalAlignment = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x40, "StructProperty"},
            {"HorizontalAlignment", 0x50, "ByteProperty"},
            {"VerticalAlignment", 0x51, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct PaintContext
    {
        static constexpr std::string_view Name = "PaintContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PanelSlot
    {
        static constexpr std::string_view Name = "PanelSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Visual";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x28;
            static constexpr std::uintptr_t Content = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Parent", 0x28, "ObjectProperty"},
            {"Content", 0x30, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetContent",
        }};
    };

    struct PanelWidget
    {
        static constexpr std::string_view Name = "PanelWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "AddChild",
            "ClearChildren",
            "GetAllChildren",
            "GetChildAt",
            "GetChildIndex",
            "GetChildrenCount",
            "HasAnyChildren",
            "HasChild",
            "RemoveChild",
            "RemoveChildAt",
        }};
    };

    struct PostBufferBlurUpdater
    {
        static constexpr std::string_view Name = "PostBufferBlurUpdater";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlatePostBufferProcessorUpdater";
        struct Offsets
        {
            static constexpr std::uintptr_t GaussianBlurStrength = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GaussianBlurStrength", 0x30, "FloatProperty"},
        }};
    };

    struct PostBufferUpdate
    {
        static constexpr std::string_view Name = "PostBufferUpdate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t bUpdateOnlyPaintArea = 0x168;
            static constexpr std::uintptr_t bPerformDefaultPostBufferUpdate = 0x169;
            static constexpr std::uintptr_t BuffersToUpdate = 0x170;
            static constexpr std::uintptr_t UpdateBufferInfos = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUpdateOnlyPaintArea", 0x168, "BoolProperty"},
            {"bPerformDefaultPostBufferUpdate", 0x169, "BoolProperty"},
            {"BuffersToUpdate", 0x170, "ArrayProperty"},
            {"UpdateBufferInfos", 0x180, "ArrayProperty"},
        }};
    };

    struct ProgressBar
    {
        static constexpr std::string_view Name = "ProgressBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x170;
            static constexpr std::uintptr_t Percent = 0x3A0;
            static constexpr std::uintptr_t BarFillType = 0x3A4;
            static constexpr std::uintptr_t BarFillStyle = 0x3A5;
            static constexpr std::uintptr_t bIsMarquee = 0x3A6;
            static constexpr std::uintptr_t BorderPadding = 0x3A8;
            static constexpr std::uintptr_t PercentDelegate = 0x3B8;
            static constexpr std::uintptr_t FillColorAndOpacity = 0x3C4;
            static constexpr std::uintptr_t FillColorAndOpacityDelegate = 0x3D4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"WidgetStyle", 0x170, "StructProperty"},
            {"Percent", 0x3A0, "FloatProperty"},
            {"BarFillType", 0x3A4, "ByteProperty"},
            {"BarFillStyle", 0x3A5, "ByteProperty"},
            {"bIsMarquee", 0x3A6, "BoolProperty"},
            {"BorderPadding", 0x3A8, "StructProperty"},
            {"PercentDelegate", 0x3B8, "DelegateProperty"},
            {"FillColorAndOpacity", 0x3C4, "StructProperty"},
            {"FillColorAndOpacityDelegate", 0x3D4, "DelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetFillColorAndOpacity",
            "SetIsMarquee",
            "SetPercent",
        }};
    };

    struct PropertyBinding
    {
        static constexpr std::string_view Name = "PropertyBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};
    };

    struct QueuedWidgetAnimationTransition
    {
        static constexpr std::string_view Name = "QueuedWidgetAnimationTransition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetAnimation = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetAnimation", 0x0, "ObjectProperty"},
        }};
    };

    struct RadialBoxSettings
    {
        static constexpr std::string_view Name = "RadialBoxSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartingAngle = 0x0;
            static constexpr std::uintptr_t bDistributeItemsEvenly = 0x4;
            static constexpr std::uintptr_t bClockwiseOrder = 0x5;
            static constexpr std::uintptr_t AngleBetweenItems = 0x8;
            static constexpr std::uintptr_t SectorCentralAngle = 0xC;
            static constexpr std::uintptr_t MarginSize = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StartingAngle", 0x0, "FloatProperty"},
            {"bDistributeItemsEvenly", 0x4, "BoolProperty"},
            {"bClockwiseOrder", 0x5, "BoolProperty"},
            {"AngleBetweenItems", 0x8, "FloatProperty"},
            {"SectorCentralAngle", 0xC, "FloatProperty"},
            {"MarginSize", 0x10, "FloatProperty"},
        }};
    };

    struct RetainerBox
    {
        static constexpr std::string_view Name = "RetainerBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bRetainRender = 0x180;
            static constexpr std::uintptr_t RenderOnInvalidation = 0x181;
            static constexpr std::uintptr_t RenderOnPhase = 0x182;
            static constexpr std::uintptr_t Phase = 0x184;
            static constexpr std::uintptr_t PhaseCount = 0x188;
            static constexpr std::uintptr_t EffectMaterial = 0x190;
            static constexpr std::uintptr_t TextureParameter = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bRetainRender", 0x180, "BoolProperty"},
            {"RenderOnInvalidation", 0x181, "BoolProperty"},
            {"RenderOnPhase", 0x182, "BoolProperty"},
            {"Phase", 0x184, "IntProperty"},
            {"PhaseCount", 0x188, "IntProperty"},
            {"EffectMaterial", 0x190, "ObjectProperty"},
            {"TextureParameter", 0x198, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetEffectMaterial",
            "RequestRender",
            "SetEffectMaterial",
            "SetRenderingPhase",
            "SetRetainRendering",
            "SetTextureParameter",
        }};
    };

    struct RichImageRow
    {
        static constexpr std::string_view Name = "RichImageRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Brush = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Brush", 0x10, "StructProperty"},
        }};
    };

    struct RichTextBlock
    {
        static constexpr std::string_view Name = "RichTextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextLayoutWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x190;
            static constexpr std::uintptr_t TextStyleSet = 0x1A0;
            static constexpr std::uintptr_t DecoratorClasses = 0x1A8;
            static constexpr std::uintptr_t DefaultTextStyleOverride = 0x1C0;
            static constexpr std::uintptr_t MinDesiredWidth = 0x4A0;
            static constexpr std::uintptr_t bOverrideDefaultStyle = 0x4A4;
            static constexpr std::uintptr_t TextTransformPolicy = 0x4A5;
            static constexpr std::uintptr_t TextOverflowPolicy = 0x4A6;
            static constexpr std::uintptr_t DefaultTextStyle = 0x4B0;
            static constexpr std::uintptr_t InstanceDecorators = 0x790;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Text", 0x190, "TextProperty"},
            {"TextStyleSet", 0x1A0, "ObjectProperty"},
            {"DecoratorClasses", 0x1A8, "ArrayProperty"},
            {"DefaultTextStyleOverride", 0x1C0, "StructProperty"},
            {"MinDesiredWidth", 0x4A0, "FloatProperty"},
            {"bOverrideDefaultStyle", 0x4A4, "BoolProperty"},
            {"TextTransformPolicy", 0x4A5, "EnumProperty"},
            {"TextOverflowPolicy", 0x4A6, "EnumProperty"},
            {"DefaultTextStyle", 0x4B0, "StructProperty"},
            {"InstanceDecorators", 0x790, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "ClearAllDefaultStyleOverrides",
            "GetDecoratorByClass",
            "GetDefaultDynamicMaterial",
            "GetText",
            "GetTextStyleSet",
            "RefreshTextLayout",
            "SetAutoWrapText",
            "SetDecorators",
            "SetDefaultColorAndOpacity",
            "SetDefaultFont",
            "SetDefaultMaterial",
            "SetDefaultShadowColorAndOpacity",
            "SetDefaultShadowOffset",
            "SetDefaultStrikeBrush",
            "SetDefaultTextStyle",
            "SetMinDesiredWidth",
            "SetText",
            "SetTextOverflowPolicy",
            "SetTextStyleSet",
            "SetTextTransformPolicy",
        }};
    };

    struct RichTextBlockDecorator
    {
        static constexpr std::string_view Name = "RichTextBlockDecorator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RichTextBlockImageDecorator
    {
        static constexpr std::string_view Name = "RichTextBlockImageDecorator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RichTextBlockDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t ImageSet = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ImageSet", 0x28, "ObjectProperty"},
        }};
    };

    struct RichTextStyleRow
    {
        static constexpr std::string_view Name = "RichTextStyleRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TextStyle = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TextStyle", 0x10, "StructProperty"},
        }};
    };

    struct SafeZone
    {
        static constexpr std::string_view Name = "SafeZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PadLeft = 0x180;
            static constexpr std::uintptr_t PadRight = 0x181;
            static constexpr std::uintptr_t PadTop = 0x182;
            static constexpr std::uintptr_t PadBottom = 0x183;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PadLeft", 0x180, "BoolProperty"},
            {"PadRight", 0x181, "BoolProperty"},
            {"PadTop", 0x182, "BoolProperty"},
            {"PadBottom", 0x183, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSidesToPad",
        }};
    };

    struct SafeZoneSlot
    {
        static constexpr std::string_view Name = "SafeZoneSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTitleSafe = 0x38;
            static constexpr std::uintptr_t SafeAreaScale = 0x3C;
            static constexpr std::uintptr_t HAlign = 0x4C;
            static constexpr std::uintptr_t VAlign = 0x4D;
            static constexpr std::uintptr_t Padding = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsTitleSafe", 0x38, "BoolProperty"},
            {"SafeAreaScale", 0x3C, "StructProperty"},
            {"HAlign", 0x4C, "ByteProperty"},
            {"VAlign", 0x4D, "ByteProperty"},
            {"Padding", 0x50, "StructProperty"},
        }};
    };

    struct ScaleBox
    {
        static constexpr std::string_view Name = "ScaleBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Stretch = 0x180;
            static constexpr std::uintptr_t StretchDirection = 0x181;
            static constexpr std::uintptr_t UserSpecifiedScale = 0x184;
            static constexpr std::uintptr_t IgnoreInheritedScale = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Stretch", 0x180, "ByteProperty"},
            {"StretchDirection", 0x181, "ByteProperty"},
            {"UserSpecifiedScale", 0x184, "FloatProperty"},
            {"IgnoreInheritedScale", 0x188, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "SetIgnoreInheritedScale",
            "SetStretch",
            "SetStretchDirection",
            "SetUserSpecifiedScale",
        }};
    };

    struct ScaleBoxComponent
    {
        static constexpr std::string_view Name = "ScaleBoxComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalAlignment = 0x58;
            static constexpr std::uintptr_t VerticalAlignment = 0x59;
            static constexpr std::uintptr_t Stretch = 0x5A;
            static constexpr std::uintptr_t StretchDirection = 0x5B;
            static constexpr std::uintptr_t UserSpecifiedScale = 0x5C;
            static constexpr std::uintptr_t IgnoreInheritedScale = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HorizontalAlignment", 0x58, "ByteProperty"},
            {"VerticalAlignment", 0x59, "ByteProperty"},
            {"Stretch", 0x5A, "ByteProperty"},
            {"StretchDirection", 0x5B, "ByteProperty"},
            {"UserSpecifiedScale", 0x5C, "FloatProperty"},
            {"IgnoreInheritedScale", 0x60, "BoolProperty"},
        }};
    };

    struct ScaleBoxSlot
    {
        static constexpr std::string_view Name = "ScaleBoxSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalAlignment = 0x38;
            static constexpr std::uintptr_t VerticalAlignment = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HorizontalAlignment", 0x38, "ByteProperty"},
            {"VerticalAlignment", 0x39, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct ScrollBar
    {
        static constexpr std::string_view Name = "ScrollBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x170;
            static constexpr std::uintptr_t bAlwaysShowScrollbar = 0x7C0;
            static constexpr std::uintptr_t bAlwaysShowScrollbarTrack = 0x7C1;
            static constexpr std::uintptr_t orientation = 0x7C2;
            static constexpr std::uintptr_t Thickness = 0x7C8;
            static constexpr std::uintptr_t Padding = 0x7D8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WidgetStyle", 0x170, "StructProperty"},
            {"bAlwaysShowScrollbar", 0x7C0, "BoolProperty"},
            {"bAlwaysShowScrollbarTrack", 0x7C1, "BoolProperty"},
            {"orientation", 0x7C2, "ByteProperty"},
            {"Thickness", 0x7C8, "StructProperty"},
            {"Padding", 0x7D8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetState",
        }};
    };

    struct ScrollBox
    {
        static constexpr std::string_view Name = "ScrollBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ScrollAnimationInterpolationSpeed = 0x180;
            static constexpr std::uintptr_t bEnableTouchScrolling = 0x184;
            static constexpr std::uintptr_t bConsumePointerInput = 0x185;
            static constexpr std::uintptr_t AnalogMouseWheelKey = 0x188;
            static constexpr std::uintptr_t bIsFocusable = 0x1A0;
            static constexpr std::uintptr_t WidgetStyle = 0x1B0;
            static constexpr std::uintptr_t WidgetBarStyle = 0x4A0;
            static constexpr std::uintptr_t orientation = 0xAF0;
            static constexpr std::uintptr_t ScrollBarVisibility = 0xAF1;
            static constexpr std::uintptr_t ConsumeMouseWheel = 0xAF2;
            static constexpr std::uintptr_t ScrollbarThickness = 0xAF8;
            static constexpr std::uintptr_t ScrollBarPadding = 0xB08;
            static constexpr std::uintptr_t AlwaysShowScrollbar = 0xB18;
            static constexpr std::uintptr_t AlwaysShowScrollbarTrack = 0xB19;
            static constexpr std::uintptr_t AllowOverscroll = 0xB1A;
            static constexpr std::uintptr_t BackPadScrolling = 0xB1B;
            static constexpr std::uintptr_t FrontPadScrolling = 0xB1C;
            static constexpr std::uintptr_t bAnimateWheelScrolling = 0xB1D;
            static constexpr std::uintptr_t NavigationDestination = 0xB1E;
            static constexpr std::uintptr_t NavigationScrollPadding = 0xB20;
            static constexpr std::uintptr_t ScrollWhenFocusChanges = 0xB24;
            static constexpr std::uintptr_t bAllowRightClickDragScrolling = 0xB25;
            static constexpr std::uintptr_t WheelScrollMultiplier = 0xB28;
            static constexpr std::uintptr_t OnUserScrolled = 0xB30;
            static constexpr std::uintptr_t OnScrollBarVisibilityChanged = 0xB40;
            static constexpr std::uintptr_t OnFocusReceived = 0xB50;
            static constexpr std::uintptr_t OnFocusLost = 0xB60;
            static constexpr std::uintptr_t OnFocusUpdated = 0xB70;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"ScrollAnimationInterpolationSpeed", 0x180, "FloatProperty"},
            {"bEnableTouchScrolling", 0x184, "BoolProperty"},
            {"bConsumePointerInput", 0x185, "BoolProperty"},
            {"AnalogMouseWheelKey", 0x188, "StructProperty"},
            {"bIsFocusable", 0x1A0, "BoolProperty"},
            {"WidgetStyle", 0x1B0, "StructProperty"},
            {"WidgetBarStyle", 0x4A0, "StructProperty"},
            {"orientation", 0xAF0, "ByteProperty"},
            {"ScrollBarVisibility", 0xAF1, "EnumProperty"},
            {"ConsumeMouseWheel", 0xAF2, "EnumProperty"},
            {"ScrollbarThickness", 0xAF8, "StructProperty"},
            {"ScrollBarPadding", 0xB08, "StructProperty"},
            {"AlwaysShowScrollbar", 0xB18, "BoolProperty"},
            {"AlwaysShowScrollbarTrack", 0xB19, "BoolProperty"},
            {"AllowOverscroll", 0xB1A, "BoolProperty"},
            {"BackPadScrolling", 0xB1B, "BoolProperty"},
            {"FrontPadScrolling", 0xB1C, "BoolProperty"},
            {"bAnimateWheelScrolling", 0xB1D, "BoolProperty"},
            {"NavigationDestination", 0xB1E, "EnumProperty"},
            {"NavigationScrollPadding", 0xB20, "FloatProperty"},
            {"ScrollWhenFocusChanges", 0xB24, "EnumProperty"},
            {"bAllowRightClickDragScrolling", 0xB25, "BoolProperty"},
            {"WheelScrollMultiplier", 0xB28, "FloatProperty"},
            {"OnUserScrolled", 0xB30, "MulticastInlineDelegateProperty"},
            {"OnScrollBarVisibilityChanged", 0xB40, "MulticastInlineDelegateProperty"},
            {"OnFocusReceived", 0xB50, "MulticastInlineDelegateProperty"},
            {"OnFocusLost", 0xB60, "MulticastInlineDelegateProperty"},
            {"OnFocusUpdated", 0xB70, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 31> FunctionNames{{
            "EndInertialScrolling",
            "GetAnalogMouseWheelKey",
            "GetConsumePointerInput",
            "GetIsFocusable",
            "GetIsScrolling",
            "GetOverscrollOffset",
            "GetOverscrollPercentage",
            "GetScrollOffset",
            "GetScrollOffsetOfEnd",
            "GetViewFraction",
            "GetViewOffsetFraction",
            "ScrollToEnd",
            "ScrollToStart",
            "ScrollWidgetIntoView",
            "SetAllowOverScroll",
            "SetAlwaysShowScrollbar",
            "SetAnalogMouseWheelKey",
            "SetAnimateWheelScrolling",
            "SetConsumeMouseWheel",
            "SetConsumePointerInput",
            "SetIsFocusable",
            "SetIsTouchScrollingEnabled",
            "SetNavigationDestination",
            "SetOrientation",
            "SetScrollAnimationInterpolationSpeed",
            "SetScrollBarPadding",
            "SetScrollOffset",
            "SetScrollWhenFocusChanges",
            "SetScrollbarThickness",
            "SetScrollbarVisibility",
            "SetWheelScrollMultiplier",
        }};
    };

    struct ScrollBoxSlot
    {
        static constexpr std::string_view Name = "ScrollBoxSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x38;
            static constexpr std::uintptr_t Padding = 0x40;
            static constexpr std::uintptr_t HorizontalAlignment = 0x50;
            static constexpr std::uintptr_t VerticalAlignment = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Size", 0x38, "StructProperty"},
            {"Padding", 0x40, "StructProperty"},
            {"HorizontalAlignment", 0x50, "ByteProperty"},
            {"VerticalAlignment", 0x51, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct SequenceTickManagerWidgetData
    {
        static constexpr std::string_view Name = "SequenceTickManagerWidgetData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ShapedTextOptions
    {
        static constexpr std::string_view Name = "ShapedTextOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverride_TextFlowDirection = 0x0;
            static constexpr std::uintptr_t bOverride_TextShapingMethod = 0x0;
            static constexpr std::uintptr_t TextShapingMethod = 0x1;
            static constexpr std::uintptr_t TextFlowDirection = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bOverride_TextFlowDirection", 0x0, "BoolProperty"},
            {"bOverride_TextShapingMethod", 0x0, "BoolProperty"},
            {"TextShapingMethod", 0x1, "EnumProperty"},
            {"TextFlowDirection", 0x2, "EnumProperty"},
        }};
    };

    struct SizeBox
    {
        static constexpr std::string_view Name = "SizeBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidthOverride = 0x190;
            static constexpr std::uintptr_t HeightOverride = 0x194;
            static constexpr std::uintptr_t MinDesiredWidth = 0x198;
            static constexpr std::uintptr_t MinDesiredHeight = 0x19C;
            static constexpr std::uintptr_t MaxDesiredWidth = 0x1A0;
            static constexpr std::uintptr_t MaxDesiredHeight = 0x1A4;
            static constexpr std::uintptr_t MinAspectRatio = 0x1A8;
            static constexpr std::uintptr_t MaxAspectRatio = 0x1AC;
            static constexpr std::uintptr_t bOverride_HeightOverride = 0x1B0;
            static constexpr std::uintptr_t bOverride_MaxAspectRatio = 0x1B0;
            static constexpr std::uintptr_t bOverride_MaxDesiredHeight = 0x1B0;
            static constexpr std::uintptr_t bOverride_MaxDesiredWidth = 0x1B0;
            static constexpr std::uintptr_t bOverride_MinAspectRatio = 0x1B0;
            static constexpr std::uintptr_t bOverride_MinDesiredHeight = 0x1B0;
            static constexpr std::uintptr_t bOverride_MinDesiredWidth = 0x1B0;
            static constexpr std::uintptr_t bOverride_WidthOverride = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"WidthOverride", 0x190, "FloatProperty"},
            {"HeightOverride", 0x194, "FloatProperty"},
            {"MinDesiredWidth", 0x198, "FloatProperty"},
            {"MinDesiredHeight", 0x19C, "FloatProperty"},
            {"MaxDesiredWidth", 0x1A0, "FloatProperty"},
            {"MaxDesiredHeight", 0x1A4, "FloatProperty"},
            {"MinAspectRatio", 0x1A8, "FloatProperty"},
            {"MaxAspectRatio", 0x1AC, "FloatProperty"},
            {"bOverride_HeightOverride", 0x1B0, "BoolProperty"},
            {"bOverride_MaxAspectRatio", 0x1B0, "BoolProperty"},
            {"bOverride_MaxDesiredHeight", 0x1B0, "BoolProperty"},
            {"bOverride_MaxDesiredWidth", 0x1B0, "BoolProperty"},
            {"bOverride_MinAspectRatio", 0x1B0, "BoolProperty"},
            {"bOverride_MinDesiredHeight", 0x1B0, "BoolProperty"},
            {"bOverride_MinDesiredWidth", 0x1B0, "BoolProperty"},
            {"bOverride_WidthOverride", 0x1B0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "ClearHeightOverride",
            "ClearMaxAspectRatio",
            "ClearMaxDesiredHeight",
            "ClearMaxDesiredWidth",
            "ClearMinAspectRatio",
            "ClearMinDesiredHeight",
            "ClearMinDesiredWidth",
            "ClearWidthOverride",
            "SetHeightOverride",
            "SetMaxAspectRatio",
            "SetMaxDesiredHeight",
            "SetMaxDesiredWidth",
            "SetMinAspectRatio",
            "SetMinDesiredHeight",
            "SetMinDesiredWidth",
            "SetWidthOverride",
        }};
    };

    struct SizeBoxComponent
    {
        static constexpr std::string_view Name = "SizeBoxComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x58;
            static constexpr std::uintptr_t HorizontalAlignment = 0x68;
            static constexpr std::uintptr_t VerticalAlignment = 0x69;
            static constexpr std::uintptr_t WidthOverride = 0x6C;
            static constexpr std::uintptr_t HeightOverride = 0x70;
            static constexpr std::uintptr_t MinDesiredWidth = 0x74;
            static constexpr std::uintptr_t MinDesiredHeight = 0x78;
            static constexpr std::uintptr_t MaxDesiredWidth = 0x7C;
            static constexpr std::uintptr_t MaxDesiredHeight = 0x80;
            static constexpr std::uintptr_t MinAspectRatio = 0x84;
            static constexpr std::uintptr_t MaxAspectRatio = 0x88;
            static constexpr std::uintptr_t bOverride_HeightOverride = 0x8C;
            static constexpr std::uintptr_t bOverride_MaxAspectRatio = 0x8C;
            static constexpr std::uintptr_t bOverride_MaxDesiredHeight = 0x8C;
            static constexpr std::uintptr_t bOverride_MaxDesiredWidth = 0x8C;
            static constexpr std::uintptr_t bOverride_MinAspectRatio = 0x8C;
            static constexpr std::uintptr_t bOverride_MinDesiredHeight = 0x8C;
            static constexpr std::uintptr_t bOverride_MinDesiredWidth = 0x8C;
            static constexpr std::uintptr_t bOverride_WidthOverride = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"Padding", 0x58, "StructProperty"},
            {"HorizontalAlignment", 0x68, "ByteProperty"},
            {"VerticalAlignment", 0x69, "ByteProperty"},
            {"WidthOverride", 0x6C, "FloatProperty"},
            {"HeightOverride", 0x70, "FloatProperty"},
            {"MinDesiredWidth", 0x74, "FloatProperty"},
            {"MinDesiredHeight", 0x78, "FloatProperty"},
            {"MaxDesiredWidth", 0x7C, "FloatProperty"},
            {"MaxDesiredHeight", 0x80, "FloatProperty"},
            {"MinAspectRatio", 0x84, "FloatProperty"},
            {"MaxAspectRatio", 0x88, "FloatProperty"},
            {"bOverride_HeightOverride", 0x8C, "BoolProperty"},
            {"bOverride_MaxAspectRatio", 0x8C, "BoolProperty"},
            {"bOverride_MaxDesiredHeight", 0x8C, "BoolProperty"},
            {"bOverride_MaxDesiredWidth", 0x8C, "BoolProperty"},
            {"bOverride_MinAspectRatio", 0x8C, "BoolProperty"},
            {"bOverride_MinDesiredHeight", 0x8C, "BoolProperty"},
            {"bOverride_MinDesiredWidth", 0x8C, "BoolProperty"},
            {"bOverride_WidthOverride", 0x8C, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "ClearHeightOverride",
            "ClearMaxAspectRatio",
            "ClearMaxDesiredHeight",
            "ClearMaxDesiredWidth",
            "ClearMinAspectRatio",
            "ClearMinDesiredHeight",
            "ClearMinDesiredWidth",
            "ClearWidthOverride",
        }};
    };

    struct SizeBoxSlot
    {
        static constexpr std::string_view Name = "SizeBoxSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t HorizontalAlignment = 0x58;
            static constexpr std::uintptr_t VerticalAlignment = 0x59;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"HorizontalAlignment", 0x58, "ByteProperty"},
            {"VerticalAlignment", 0x59, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct SlateAccessibleWidgetData
    {
        static constexpr std::string_view Name = "SlateAccessibleWidgetData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanChildrenBeAccessible = 0x28;
            static constexpr std::uintptr_t AccessibleBehavior = 0x29;
            static constexpr std::uintptr_t AccessibleSummaryBehavior = 0x2A;
            static constexpr std::uintptr_t AccessibleText = 0x30;
            static constexpr std::uintptr_t AccessibleTextDelegate = 0x40;
            static constexpr std::uintptr_t AccessibleSummaryText = 0x50;
            static constexpr std::uintptr_t AccessibleSummaryTextDelegate = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bCanChildrenBeAccessible", 0x28, "BoolProperty"},
            {"AccessibleBehavior", 0x29, "EnumProperty"},
            {"AccessibleSummaryBehavior", 0x2A, "EnumProperty"},
            {"AccessibleText", 0x30, "TextProperty"},
            {"AccessibleTextDelegate", 0x40, "DelegateProperty"},
            {"AccessibleSummaryText", 0x50, "TextProperty"},
            {"AccessibleSummaryTextDelegate", 0x60, "DelegateProperty"},
        }};
    };

    struct SlateBlueprintLibrary
    {
        static constexpr std::string_view Name = "SlateBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 21> FunctionNames{{
            "AbsoluteToLocal",
            "AbsoluteToViewport",
            "EqualEqual_SlateBrush",
            "GetAbsoluteSize",
            "GetFocusEventCause",
            "GetLocalSize",
            "GetLocalTopLeft",
            "IsUnderLocation",
            "LocalToAbsolute",
            "LocalToViewport",
            "Scalar_AbsoluteToLocal",
            "Scalar_LocalToAbsolute",
            "ScreenToViewport",
            "ScreenToWidgetAbsolute",
            "ScreenToWidgetLocal",
            "TransformScalarAbsoluteToLocal",
            "TransformScalarLocalToAbsolute",
            "TransformVectorAbsoluteToLocal",
            "TransformVectorLocalToAbsolute",
            "Vector_AbsoluteToLocal",
            "Vector_LocalToAbsolute",
        }};
    };

    struct SlateChildSize
    {
        static constexpr std::string_view Name = "SlateChildSize";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t SizeRule = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Value", 0x0, "FloatProperty"},
            {"SizeRule", 0x4, "ByteProperty"},
        }};
    };

    struct SlateMeshVertex
    {
        static constexpr std::string_view Name = "SlateMeshVertex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Position = 0x0;
            static constexpr std::uintptr_t Color = 0x8;
            static constexpr std::uintptr_t UV0 = 0xC;
            static constexpr std::uintptr_t UV1 = 0x14;
            static constexpr std::uintptr_t UV2 = 0x1C;
            static constexpr std::uintptr_t UV3 = 0x24;
            static constexpr std::uintptr_t UV4 = 0x2C;
            static constexpr std::uintptr_t UV5 = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Position", 0x0, "StructProperty"},
            {"Color", 0x8, "StructProperty"},
            {"UV0", 0xC, "StructProperty"},
            {"UV1", 0x14, "StructProperty"},
            {"UV2", 0x1C, "StructProperty"},
            {"UV3", 0x24, "StructProperty"},
            {"UV4", 0x2C, "StructProperty"},
            {"UV5", 0x34, "StructProperty"},
        }};
    };

    struct SlatePostBufferProcessorUpdater
    {
        static constexpr std::string_view Name = "SlatePostBufferProcessorUpdater";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bSkipBufferUpdate = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSkipBufferUpdate", 0x28, "BoolProperty"},
        }};
    };

    struct SlatePostBufferUpdateInfo
    {
        static constexpr std::string_view Name = "SlatePostBufferUpdateInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BufferToUpdate = 0x0;
            static constexpr std::uintptr_t PostParamUpdater = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BufferToUpdate", 0x0, "EnumProperty"},
            {"PostParamUpdater", 0x8, "ObjectProperty"},
        }};
    };

    struct SlateVectorArtData
    {
        static constexpr std::string_view Name = "SlateVectorArtData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VertexData = 0x28;
            static constexpr std::uintptr_t IndexData = 0x38;
            static constexpr std::uintptr_t Material = 0x48;
            static constexpr std::uintptr_t ExtentMin = 0x50;
            static constexpr std::uintptr_t ExtentMax = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VertexData", 0x28, "ArrayProperty"},
            {"IndexData", 0x38, "ArrayProperty"},
            {"Material", 0x48, "ObjectProperty"},
            {"ExtentMin", 0x50, "StructProperty"},
            {"ExtentMax", 0x60, "StructProperty"},
        }};
    };

    struct Slider
    {
        static constexpr std::string_view Name = "Slider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x168;
            static constexpr std::uintptr_t ValueDelegate = 0x16C;
            static constexpr std::uintptr_t MinValue = 0x178;
            static constexpr std::uintptr_t MaxValue = 0x17C;
            static constexpr std::uintptr_t WidgetStyle = 0x180;
            static constexpr std::uintptr_t orientation = 0x5C0;
            static constexpr std::uintptr_t SliderBarColor = 0x5C4;
            static constexpr std::uintptr_t SliderHandleColor = 0x5D4;
            static constexpr std::uintptr_t IndentHandle = 0x5E4;
            static constexpr std::uintptr_t Locked = 0x5E5;
            static constexpr std::uintptr_t MouseUsesStep = 0x5E6;
            static constexpr std::uintptr_t RequiresControllerLock = 0x5E7;
            static constexpr std::uintptr_t StepSize = 0x5E8;
            static constexpr std::uintptr_t IsFocusable = 0x5EC;
            static constexpr std::uintptr_t bPreventThrottling = 0x5ED;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x5F0;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x600;
            static constexpr std::uintptr_t OnControllerCaptureBegin = 0x610;
            static constexpr std::uintptr_t OnControllerCaptureEnd = 0x620;
            static constexpr std::uintptr_t OnValueChanged = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"Value", 0x168, "FloatProperty"},
            {"ValueDelegate", 0x16C, "DelegateProperty"},
            {"MinValue", 0x178, "FloatProperty"},
            {"MaxValue", 0x17C, "FloatProperty"},
            {"WidgetStyle", 0x180, "StructProperty"},
            {"orientation", 0x5C0, "ByteProperty"},
            {"SliderBarColor", 0x5C4, "StructProperty"},
            {"SliderHandleColor", 0x5D4, "StructProperty"},
            {"IndentHandle", 0x5E4, "BoolProperty"},
            {"Locked", 0x5E5, "BoolProperty"},
            {"MouseUsesStep", 0x5E6, "BoolProperty"},
            {"RequiresControllerLock", 0x5E7, "BoolProperty"},
            {"StepSize", 0x5E8, "FloatProperty"},
            {"IsFocusable", 0x5EC, "BoolProperty"},
            {"bPreventThrottling", 0x5ED, "BoolProperty"},
            {"OnMouseCaptureBegin", 0x5F0, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x600, "MulticastInlineDelegateProperty"},
            {"OnControllerCaptureBegin", 0x610, "MulticastInlineDelegateProperty"},
            {"OnControllerCaptureEnd", 0x620, "MulticastInlineDelegateProperty"},
            {"OnValueChanged", 0x630, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "GetNormalizedValue",
            "GetValue",
            "SetIndentHandle",
            "SetLocked",
            "SetMaxValue",
            "SetMinValue",
            "SetSliderBarColor",
            "SetSliderHandleColor",
            "SetStepSize",
            "SetValue",
        }};
    };

    struct Spacer
    {
        static constexpr std::string_view Name = "Spacer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Size", 0x168, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSize",
        }};
    };

    struct SpinBox
    {
        static constexpr std::string_view Name = "SpinBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x168;
            static constexpr std::uintptr_t ValueDelegate = 0x16C;
            static constexpr std::uintptr_t WidgetStyle = 0x180;
            static constexpr std::uintptr_t MinFractionalDigits = 0x6A0;
            static constexpr std::uintptr_t MaxFractionalDigits = 0x6A4;
            static constexpr std::uintptr_t bAlwaysUsesDeltaSnap = 0x6A8;
            static constexpr std::uintptr_t bEnableSlider = 0x6A9;
            static constexpr std::uintptr_t Delta = 0x6AC;
            static constexpr std::uintptr_t SliderExponent = 0x6B0;
            static constexpr std::uintptr_t Font = 0x6B8;
            static constexpr std::uintptr_t Justification = 0x710;
            static constexpr std::uintptr_t MinDesiredWidth = 0x714;
            static constexpr std::uintptr_t KeyboardType = 0x718;
            static constexpr std::uintptr_t VirtualKeyboardDismissAction = 0x719;
            static constexpr std::uintptr_t ClearKeyboardFocusOnCommit = 0x71A;
            static constexpr std::uintptr_t SelectAllTextOnCommit = 0x71B;
            static constexpr std::uintptr_t ForegroundColor = 0x71C;
            static constexpr std::uintptr_t OnValueChanged = 0x730;
            static constexpr std::uintptr_t OnValueCommitted = 0x740;
            static constexpr std::uintptr_t OnBeginSliderMovement = 0x750;
            static constexpr std::uintptr_t OnEndSliderMovement = 0x760;
            static constexpr std::uintptr_t bOverride_MaxSliderValue = 0x770;
            static constexpr std::uintptr_t bOverride_MaxValue = 0x770;
            static constexpr std::uintptr_t bOverride_MinSliderValue = 0x770;
            static constexpr std::uintptr_t bOverride_MinValue = 0x770;
            static constexpr std::uintptr_t MinValue = 0x774;
            static constexpr std::uintptr_t MaxValue = 0x778;
            static constexpr std::uintptr_t MinSliderValue = 0x77C;
            static constexpr std::uintptr_t MaxSliderValue = 0x780;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"Value", 0x168, "FloatProperty"},
            {"ValueDelegate", 0x16C, "DelegateProperty"},
            {"WidgetStyle", 0x180, "StructProperty"},
            {"MinFractionalDigits", 0x6A0, "IntProperty"},
            {"MaxFractionalDigits", 0x6A4, "IntProperty"},
            {"bAlwaysUsesDeltaSnap", 0x6A8, "BoolProperty"},
            {"bEnableSlider", 0x6A9, "BoolProperty"},
            {"Delta", 0x6AC, "FloatProperty"},
            {"SliderExponent", 0x6B0, "FloatProperty"},
            {"Font", 0x6B8, "StructProperty"},
            {"Justification", 0x710, "ByteProperty"},
            {"MinDesiredWidth", 0x714, "FloatProperty"},
            {"KeyboardType", 0x718, "ByteProperty"},
            {"VirtualKeyboardDismissAction", 0x719, "EnumProperty"},
            {"ClearKeyboardFocusOnCommit", 0x71A, "BoolProperty"},
            {"SelectAllTextOnCommit", 0x71B, "BoolProperty"},
            {"ForegroundColor", 0x71C, "StructProperty"},
            {"OnValueChanged", 0x730, "MulticastInlineDelegateProperty"},
            {"OnValueCommitted", 0x740, "MulticastInlineDelegateProperty"},
            {"OnBeginSliderMovement", 0x750, "MulticastInlineDelegateProperty"},
            {"OnEndSliderMovement", 0x760, "MulticastInlineDelegateProperty"},
            {"bOverride_MaxSliderValue", 0x770, "BoolProperty"},
            {"bOverride_MaxValue", 0x770, "BoolProperty"},
            {"bOverride_MinSliderValue", 0x770, "BoolProperty"},
            {"bOverride_MinValue", 0x770, "BoolProperty"},
            {"MinValue", 0x774, "FloatProperty"},
            {"MaxValue", 0x778, "FloatProperty"},
            {"MinSliderValue", 0x77C, "FloatProperty"},
            {"MaxSliderValue", 0x780, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 23> FunctionNames{{
            "ClearMaxSliderValue",
            "ClearMaxValue",
            "ClearMinSliderValue",
            "ClearMinValue",
            "GetAlwaysUsesDeltaSnap",
            "GetDelta",
            "GetMaxFractionalDigits",
            "GetMaxSliderValue",
            "GetMaxValue",
            "GetMinFractionalDigits",
            "GetMinSliderValue",
            "GetMinValue",
            "GetValue",
            "SetAlwaysUsesDeltaSnap",
            "SetDelta",
            "SetForegroundColor",
            "SetMaxFractionalDigits",
            "SetMaxSliderValue",
            "SetMaxValue",
            "SetMinFractionalDigits",
            "SetMinSliderValue",
            "SetMinValue",
            "SetValue",
        }};
    };

    struct StackBox
    {
        static constexpr std::string_view Name = "StackBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t orientation = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"orientation", 0x180, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddChildToStackBox",
            "ReplaceStackBoxChildAt",
        }};
    };

    struct StackBoxSlot
    {
        static constexpr std::string_view Name = "StackBoxSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t Size = 0x48;
            static constexpr std::uintptr_t HorizontalAlignment = 0x50;
            static constexpr std::uintptr_t VerticalAlignment = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"Size", 0x48, "StructProperty"},
            {"HorizontalAlignment", 0x50, "ByteProperty"},
            {"VerticalAlignment", 0x51, "ByteProperty"},
        }};
    };

    struct TextBinding
    {
        static constexpr std::string_view Name = "TextBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetStringValue",
            "GetTextValue",
        }};
    };

    struct TextBlock
    {
        static constexpr std::string_view Name = "TextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextLayoutWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x190;
            static constexpr std::uintptr_t TextDelegate = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacity = 0x1AC;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1C0;
            static constexpr std::uintptr_t MinDesiredWidth = 0x1CC;
            static constexpr std::uintptr_t Font = 0x1D0;
            static constexpr std::uintptr_t StrikeBrush = 0x230;
            static constexpr std::uintptr_t ShadowOffset = 0x2E0;
            static constexpr std::uintptr_t ShadowColorAndOpacity = 0x2F0;
            static constexpr std::uintptr_t ShadowColorAndOpacityDelegate = 0x300;
            static constexpr std::uintptr_t bWrapWithInvalidationPanel = 0x30C;
            static constexpr std::uintptr_t TextTransformPolicy = 0x30D;
            static constexpr std::uintptr_t TextOverflowPolicy = 0x30E;
            static constexpr std::uintptr_t bSimpleTextMode = 0x30F;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Text", 0x190, "TextProperty"},
            {"TextDelegate", 0x1A0, "DelegateProperty"},
            {"ColorAndOpacity", 0x1AC, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1C0, "DelegateProperty"},
            {"MinDesiredWidth", 0x1CC, "FloatProperty"},
            {"Font", 0x1D0, "StructProperty"},
            {"StrikeBrush", 0x230, "StructProperty"},
            {"ShadowOffset", 0x2E0, "StructProperty"},
            {"ShadowColorAndOpacity", 0x2F0, "StructProperty"},
            {"ShadowColorAndOpacityDelegate", 0x300, "DelegateProperty"},
            {"bWrapWithInvalidationPanel", 0x30C, "BoolProperty"},
            {"TextTransformPolicy", 0x30D, "EnumProperty"},
            {"TextOverflowPolicy", 0x30E, "EnumProperty"},
            {"bSimpleTextMode", 0x30F, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "GetDynamicFontMaterial",
            "GetDynamicOutlineMaterial",
            "GetFontSize",
            "GetText",
            "SetAutoWrapText",
            "SetColorAndOpacity",
            "SetFont",
            "SetFontMaterial",
            "SetFontOutlineMaterial",
            "SetFontSize",
            "SetMinDesiredWidth",
            "SetOpacity",
            "SetShadowColorAndOpacity",
            "SetShadowOffset",
            "SetStrikeBrush",
            "SetText",
            "SetTextOverflowPolicy",
            "SetTextTransformPolicy",
        }};
    };

    struct TextLayoutWidget
    {
        static constexpr std::string_view Name = "TextLayoutWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapedTextOptions = 0x168;
            static constexpr std::uintptr_t OnAllFontFacesFinishLoading = 0x16B;
            static constexpr std::uintptr_t Justification = 0x16C;
            static constexpr std::uintptr_t WrappingPolicy = 0x16D;
            static constexpr std::uintptr_t AutoWrapText = 0x16E;
            static constexpr std::uintptr_t ApplyLineHeightToBottomLine = 0x16F;
            static constexpr std::uintptr_t FontFacesLoadingPaintPolicy = 0x170;
            static constexpr std::uintptr_t WrapTextAt = 0x174;
            static constexpr std::uintptr_t Margin = 0x178;
            static constexpr std::uintptr_t LineHeightPercentage = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ShapedTextOptions", 0x168, "StructProperty"},
            {"OnAllFontFacesFinishLoading", 0x16B, "MulticastSparseDelegateProperty"},
            {"Justification", 0x16C, "ByteProperty"},
            {"WrappingPolicy", 0x16D, "EnumProperty"},
            {"AutoWrapText", 0x16E, "BoolProperty"},
            {"ApplyLineHeightToBottomLine", 0x16F, "BoolProperty"},
            {"FontFacesLoadingPaintPolicy", 0x170, "EnumProperty"},
            {"WrapTextAt", 0x174, "FloatProperty"},
            {"Margin", 0x178, "StructProperty"},
            {"LineHeightPercentage", 0x188, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetJustification",
        }};
    };

    struct Throbber
    {
        static constexpr std::string_view Name = "Throbber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfPieces = 0x168;
            static constexpr std::uintptr_t bAnimateHorizontally = 0x16C;
            static constexpr std::uintptr_t bAnimateVertically = 0x16D;
            static constexpr std::uintptr_t bAnimateOpacity = 0x16E;
            static constexpr std::uintptr_t Image = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NumberOfPieces", 0x168, "IntProperty"},
            {"bAnimateHorizontally", 0x16C, "BoolProperty"},
            {"bAnimateVertically", 0x16D, "BoolProperty"},
            {"bAnimateOpacity", 0x16E, "BoolProperty"},
            {"Image", 0x170, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "SetAnimateHorizontally",
            "SetAnimateOpacity",
            "SetAnimateVertically",
            "SetNumberOfPieces",
        }};
    };

    struct TileView
    {
        static constexpr std::string_view Name = "TileView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListView";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryHeight = 0xFE0;
            static constexpr std::uintptr_t EntryWidth = 0xFE4;
            static constexpr std::uintptr_t TileAlignment = 0xFE8;
            static constexpr std::uintptr_t bOverrideNumItemsPerLine = 0xFE9;
            static constexpr std::uintptr_t NumItemsPerLine = 0xFEC;
            static constexpr std::uintptr_t bWrapHorizontalNavigation = 0xFF0;
            static constexpr std::uintptr_t ScrollbarDisabledVisibility = 0xFF1;
            static constexpr std::uintptr_t bEntrySizeIncludesEntrySpacing = 0x1008;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EntryHeight", 0xFE0, "FloatProperty"},
            {"EntryWidth", 0xFE4, "FloatProperty"},
            {"TileAlignment", 0xFE8, "EnumProperty"},
            {"bOverrideNumItemsPerLine", 0xFE9, "BoolProperty"},
            {"NumItemsPerLine", 0xFEC, "IntProperty"},
            {"bWrapHorizontalNavigation", 0xFF0, "BoolProperty"},
            {"ScrollbarDisabledVisibility", 0xFF1, "EnumProperty"},
            {"bEntrySizeIncludesEntrySpacing", 0x1008, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "BP_SetTileAlignment",
            "ClearNumItemsPerLineOverride",
            "GetEntryHeight",
            "GetEntryWidth",
            "IsAligned",
            "SetEntryHeight",
            "SetEntryWidth",
            "SetNumItemsPerLine",
        }};
    };

    struct TreeView
    {
        static constexpr std::string_view Name = "TreeView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListView";
        struct Offsets
        {
            static constexpr std::uintptr_t BP_OnGetItemChildren = 0xFF0;
            static constexpr std::uintptr_t BP_OnItemExpansionChanged = 0x1000;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BP_OnGetItemChildren", 0xFF0, "DelegateProperty"},
            {"BP_OnItemExpansionChanged", 0x1000, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "CollapseAll",
            "ExpandAll",
            "SetItemExpansion",
        }};
    };

    struct UIComponent
    {
        static constexpr std::string_view Name = "UIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x30, "WeakObjectProperty"},
        }};
    };

    struct UIComponentContainer
    {
        static constexpr std::string_view Name = "UIComponentContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Components = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Components", 0x28, "ArrayProperty"},
        }};
    };

    struct UIComponentTarget
    {
        static constexpr std::string_view Name = "UIComponentTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetName = 0x0;
            static constexpr std::uintptr_t Component = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetName", 0x0, "NameProperty"},
            {"Component", 0x8, "ObjectProperty"},
        }};
    };

    struct UIComponentUserWidgetExtension
    {
        static constexpr std::string_view Name = "UIComponentUserWidgetExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidgetExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentContainer = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentContainer", 0x28, "ObjectProperty"},
        }};
    };

    struct UIComponentWidgetBlueprintGeneratedClassExtension
    {
        static constexpr std::string_view Name = "UIComponentWidgetBlueprintGeneratedClassExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetBlueprintGeneratedClassExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentContainer = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentContainer", 0x28, "ObjectProperty"},
        }};
    };

    struct UMGSequencePlayer
    {
        static constexpr std::string_view Name = "UMGSequencePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetUserTag",
            "SetUserTag",
        }};
    };

    struct UMGSequenceTickManager
    {
        static constexpr std::string_view Name = "UMGSequenceTickManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakUserWidgetData = 0x28;
            static constexpr std::uintptr_t PendingUserWidgets = 0x38;
            static constexpr std::uintptr_t Linker = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WeakUserWidgetData", 0x28, "MapProperty"},
            {"PendingUserWidgets", 0x38, "ArrayProperty"},
            {"Linker", 0x48, "ObjectProperty"},
        }};
    };

    struct UMGWidgetLifetimeEvent
    {
        static constexpr std::string_view Name = "UMGWidgetLifetimeEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Seq = 0x0;
            static constexpr std::uintptr_t TimeSeconds = 0x8;
            static constexpr std::uintptr_t FrameCounter = 0x10;
            static constexpr std::uintptr_t EventType = 0x18;
            static constexpr std::uintptr_t WidgetName = 0x20;
            static constexpr std::uintptr_t ClassName = 0x30;
            static constexpr std::uintptr_t PathName = 0x40;
            static constexpr std::uintptr_t ObjectID = 0x50;
            static constexpr std::uintptr_t PlayerIndex = 0x60;
            static constexpr std::uintptr_t PlatformUserId = 0x64;
            static constexpr std::uintptr_t PIEInstance = 0x68;
            static constexpr std::uintptr_t Detail = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Seq", 0x0, "Int64Property"},
            {"TimeSeconds", 0x8, "DoubleProperty"},
            {"FrameCounter", 0x10, "Int64Property"},
            {"EventType", 0x18, "EnumProperty"},
            {"WidgetName", 0x20, "StrProperty"},
            {"ClassName", 0x30, "StrProperty"},
            {"PathName", 0x40, "StrProperty"},
            {"ObjectID", 0x50, "StrProperty"},
            {"PlayerIndex", 0x60, "IntProperty"},
            {"PlatformUserId", 0x64, "IntProperty"},
            {"PIEInstance", 0x68, "IntProperty"},
            {"Detail", 0x70, "StrProperty"},
        }};
    };

    struct UMGWidgetLifetimeLogStatus
    {
        static constexpr std::string_view Name = "UMGWidgetLifetimeLogStatus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bRecording = 0x0;
            static constexpr std::uintptr_t bCapturingInvalidations = 0x1;
            static constexpr std::uintptr_t RecordCount = 0x4;
            static constexpr std::uintptr_t DroppedCount = 0x8;
            static constexpr std::uintptr_t FirstTimeSeconds = 0x10;
            static constexpr std::uintptr_t LastTimeSeconds = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bRecording", 0x0, "BoolProperty"},
            {"bCapturingInvalidations", 0x1, "BoolProperty"},
            {"RecordCount", 0x4, "IntProperty"},
            {"DroppedCount", 0x8, "IntProperty"},
            {"FirstTimeSeconds", 0x10, "DoubleProperty"},
            {"LastTimeSeconds", 0x18, "DoubleProperty"},
        }};
    };

    struct UniformGridPanel
    {
        static constexpr std::string_view Name = "UniformGridPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotPadding = 0x180;
            static constexpr std::uintptr_t MinDesiredSlotWidth = 0x190;
            static constexpr std::uintptr_t MinDesiredSlotHeight = 0x194;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlotPadding", 0x180, "StructProperty"},
            {"MinDesiredSlotWidth", 0x190, "FloatProperty"},
            {"MinDesiredSlotHeight", 0x194, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddChildToUniformGrid",
            "SetMinDesiredSlotHeight",
            "SetMinDesiredSlotWidth",
            "SetSlotPadding",
        }};
    };

    struct UniformGridSlot
    {
        static constexpr std::string_view Name = "UniformGridSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalAlignment = 0x38;
            static constexpr std::uintptr_t VerticalAlignment = 0x39;
            static constexpr std::uintptr_t Row = 0x3C;
            static constexpr std::uintptr_t Column = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HorizontalAlignment", 0x38, "ByteProperty"},
            {"VerticalAlignment", 0x39, "ByteProperty"},
            {"Row", 0x3C, "IntProperty"},
            {"Column", 0x40, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "SetColumn",
            "SetHorizontalAlignment",
            "SetRow",
            "SetVerticalAlignment",
        }};
    };

    struct UserListEntry
    {
        static constexpr std::string_view Name = "UserListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "BP_OnEndEntryDropOperation",
            "BP_OnEntryDragOverChanged",
            "BP_OnEntryDragged",
            "BP_OnEntryDropped",
            "BP_OnEntryReleased",
            "BP_OnItemExpansionChanged",
            "BP_OnItemSelectionChanged",
            "BP_OnUpdateEntryDropIndicator",
            "BP_ShouldScrollDescendantFocusToAlignment",
        }};
    };

    struct UserListEntryLibrary
    {
        static constexpr std::string_view Name = "UserListEntryLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetOwningListView",
            "IsListItemExpanded",
            "IsListItemSelected",
        }};
    };

    struct UserObjectListEntry
    {
        static constexpr std::string_view Name = "UserObjectListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserListEntry";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnListItemObjectSet",
        }};
    };

    struct UserObjectListEntryLibrary
    {
        static constexpr std::string_view Name = "UserObjectListEntryLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetListItemIndex",
            "GetListItemObject",
            "IsFirstWidget",
            "IsLastWidget",
        }};
    };

    struct UserWidget
    {
        static constexpr std::string_view Name = "UserWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 105> FunctionNames{{
            "AddExtension",
            "AddToPlayerScreen",
            "AddToViewport",
            "BindToAnimationEvent",
            "BindToAnimationFinished",
            "BindToAnimationStarted",
            "CancelLatentActions",
            "Construct",
            "Destruct",
            "FlushAnimations",
            "GetAlignmentInViewport",
            "GetAnchorsInViewport",
            "GetAnimationCurrentTime",
            "GetExtension",
            "GetExtensions",
            "GetIsVisible",
            "GetOrAddExtension",
            "GetOwningPlayerCameraManager",
            "GetOwningPlayerPawn",
            "IsAnimationPlaying",
            "IsAnimationPlayingForward",
            "IsAnyAnimationPlaying",
            "IsInteractable",
            "IsListeningForInputAction",
            "IsPlayingAnimation",
            "ListenForInputAction",
            "OnAddedToFocusPath",
            "OnAnalogValueChanged",
            "OnAnimationFinished",
            "OnAnimationStarted",
            "OnDragCancelled",
            "OnDragDetected",
            "OnDragEnter",
            "OnDragLeave",
            "OnDragOver",
            "OnDrop",
            "OnFocusLost",
            "OnFocusReceived",
            "OnInitialized",
            "OnKeyChar",
            "OnKeyDown",
            "OnKeyUp",
            "OnMotionDetected",
            "OnMouseButtonDoubleClick",
            "OnMouseButtonDown",
            "OnMouseButtonUp",
            "OnMouseCaptureLost",
            "OnMouseEnter",
            "OnMouseLeave",
            "OnMouseMove",
            "OnMouseWheel",
            "OnPaint",
            "OnPreviewKeyDown",
            "OnPreviewMouseButtonDown",
            "OnRemovedFromFocusPath",
            "OnTouchEnded",
            "OnTouchFirstMove",
            "OnTouchForceChanged",
            "OnTouchGesture",
            "OnTouchMoved",
            "OnTouchStarted",
            "PauseAnimation",
            "PlayAnimation",
            "PlayAnimationForward",
            "PlayAnimationReverse",
            "PlayAnimationTimeRange",
            "PlaySound",
            "PreConstruct",
            "QueuePauseAnimation",
            "QueuePlayAnimation",
            "QueuePlayAnimationForward",
            "QueuePlayAnimationReverse",
            "QueuePlayAnimationTimeRange",
            "QueueStopAllAnimations",
            "QueueStopAnimation",
            "RegisterInputComponent",
            "RemoveExtension",
            "RemoveExtensions",
            "RemoveFromViewport",
            "ReverseAnimation",
            "SetAlignmentInViewport",
            "SetAnchorsInViewport",
            "SetAnimationCurrentTime",
            "SetColorAndOpacity",
            "SetDesiredFocusWidget",
            "SetDesiredSizeInViewport",
            "SetForegroundColor",
            "SetInputActionBlocking",
            "SetInputActionPriority",
            "SetNumLoopsToPlay",
            "SetOwningPlayer",
            "SetPadding",
            "SetPlaybackSpeed",
            "SetPositionInViewport",
            "StopAllAnimations",
            "StopAnimation",
            "StopAnimationsAndLatentActions",
            "StopListeningForAllInputActions",
            "StopListeningForInputAction",
            "Tick",
            "UnbindAllFromAnimationFinished",
            "UnbindAllFromAnimationStarted",
            "UnbindFromAnimationFinished",
            "UnbindFromAnimationStarted",
            "UnregisterInputComponent",
        }};
    };

    struct UserWidgetBlueprint
    {
        static constexpr std::string_view Name = "UserWidgetBlueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Blueprint";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentClass = 0x58;
            static constexpr std::uintptr_t BlueprintType = 0x60;
            static constexpr std::uintptr_t bHasBeenRegenerated = 0x61;
            static constexpr std::uintptr_t bIsRegeneratingOnLoad = 0x61;
            static constexpr std::uintptr_t bRecompileOnLoad = 0x61;
            static constexpr std::uintptr_t BlueprintSystemVersion = 0x64;
            static constexpr std::uintptr_t SimpleConstructionScript = 0x68;
            static constexpr std::uintptr_t ComponentTemplates = 0x70;
            static constexpr std::uintptr_t Timelines = 0x80;
            static constexpr std::uintptr_t ComponentClassOverrides = 0x90;
            static constexpr std::uintptr_t InheritableComponentHandler = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ParentClass", 0x58, "ClassProperty"},
            {"BlueprintType", 0x60, "ByteProperty"},
            {"bHasBeenRegenerated", 0x61, "BoolProperty"},
            {"bIsRegeneratingOnLoad", 0x61, "BoolProperty"},
            {"bRecompileOnLoad", 0x61, "BoolProperty"},
            {"BlueprintSystemVersion", 0x64, "IntProperty"},
            {"SimpleConstructionScript", 0x68, "ObjectProperty"},
            {"ComponentTemplates", 0x70, "ArrayProperty"},
            {"Timelines", 0x80, "ArrayProperty"},
            {"ComponentClassOverrides", 0x90, "ArrayProperty"},
            {"InheritableComponentHandler", 0xA0, "ObjectProperty"},
        }};
    };

    struct UserWidgetExtension
    {
        static constexpr std::string_view Name = "UserWidgetExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UserWidgetFunctionLibrary
    {
        static constexpr std::string_view Name = "UserWidgetFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "Conv_UMGSequencePlayer",
            "GetOuterUserWidget",
        }};
    };

    struct UserWidgetPool
    {
        static constexpr std::string_view Name = "UserWidgetPool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveWidgets = 0x0;
            static constexpr std::uintptr_t InactiveWidgets = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveWidgets", 0x0, "ArrayProperty"},
            {"InactiveWidgets", 0x10, "ArrayProperty"},
        }};
    };

    struct UserWidgetVariantContext
    {
        static constexpr std::string_view Name = "UserWidgetVariantContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t World = 0x0;
            static constexpr std::uintptr_t LocalPlayer = 0x8;
            static constexpr std::uintptr_t OuterWidget = 0x10;
            static constexpr std::uintptr_t Payload = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"World", 0x0, "WeakObjectProperty"},
            {"LocalPlayer", 0x8, "WeakObjectProperty"},
            {"OuterWidget", 0x10, "WeakObjectProperty"},
            {"Payload", 0x18, "StructProperty"},
        }};
    };

    struct UserWidgetVariantResolver
    {
        static constexpr std::string_view Name = "UserWidgetVariantResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ResolveVariantClass",
        }};
    };

    struct UserWidgetVariantStatics
    {
        static constexpr std::string_view Name = "UserWidgetVariantStatics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateWidgetWithVariantContext",
        }};
    };

    struct UserWidgetVariantSubsystem
    {
        static constexpr std::string_view Name = "UserWidgetVariantSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerticalBox
    {
        static constexpr std::string_view Name = "VerticalBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AddChildToVerticalBox",
        }};
    };

    struct VerticalBoxSlot
    {
        static constexpr std::string_view Name = "VerticalBoxSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Size = 0x38;
            static constexpr std::uintptr_t Padding = 0x40;
            static constexpr std::uintptr_t HorizontalAlignment = 0x50;
            static constexpr std::uintptr_t VerticalAlignment = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Size", 0x38, "StructProperty"},
            {"Padding", 0x40, "StructProperty"},
            {"HorizontalAlignment", 0x50, "ByteProperty"},
            {"VerticalAlignment", 0x51, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetSize",
            "SetVerticalAlignment",
        }};
    };

    struct Viewport
    {
        static constexpr std::string_view Name = "Viewport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BackgroundColor = 0x180;
            static constexpr std::uintptr_t bIsEditorPreview = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BackgroundColor", 0x180, "StructProperty"},
            {"bIsEditorPreview", 0x190, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "GetViewLocation",
            "GetViewProjectionMatrix",
            "GetViewRotation",
            "GetViewportWorld",
            "SetEnableAdvancedFeatures",
            "SetLightIntensity",
            "SetShowFlag",
            "SetSkyIntensity",
            "SetViewLocation",
            "SetViewRotation",
            "Spawn",
        }};
    };

    struct VisibilityBinding
    {
        static constexpr std::string_view Name = "VisibilityBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetValue",
        }};
    };

    struct Visual
    {
        static constexpr std::string_view Name = "Visual";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Widget
    {
        static constexpr std::string_view Name = "Widget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Visual";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0x30;
            static constexpr std::uintptr_t bIsEnabledDelegate = 0x38;
            static constexpr std::uintptr_t ToolTipTextDelegate = 0x44;
            static constexpr std::uintptr_t ToolTipText = 0x50;
            static constexpr std::uintptr_t ToolTipWidget = 0x60;
            static constexpr std::uintptr_t ToolTipWidgetDelegate = 0x68;
            static constexpr std::uintptr_t VisibilityDelegate = 0x74;
            static constexpr std::uintptr_t RenderTransform = 0x80;
            static constexpr std::uintptr_t RenderTransformPivot = 0xB8;
            static constexpr std::uintptr_t FlowDirectionPreference = 0xC8;
            static constexpr std::uintptr_t bCreatedByConstructionScript = 0xC9;
            static constexpr std::uintptr_t bIsEnabled = 0xC9;
            static constexpr std::uintptr_t bIsVariable = 0xC9;
            static constexpr std::uintptr_t bIsVolatile = 0xC9;
            static constexpr std::uintptr_t bOverride_Cursor = 0xC9;
            static constexpr std::uintptr_t bWrappedByComponent = 0xCA;
            static constexpr std::uintptr_t Cursor = 0xCB;
            static constexpr std::uintptr_t Clipping = 0xCC;
            static constexpr std::uintptr_t Visibility = 0xCD;
            static constexpr std::uintptr_t PixelSnapping = 0xCE;
            static constexpr std::uintptr_t RenderOpacity = 0xD0;
            static constexpr std::uintptr_t AccessibleWidgetData = 0xD8;
            static constexpr std::uintptr_t Navigation = 0xE0;
            static constexpr std::uintptr_t NativeBindings = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"Slot", 0x30, "ObjectProperty"},
            {"bIsEnabledDelegate", 0x38, "DelegateProperty"},
            {"ToolTipTextDelegate", 0x44, "DelegateProperty"},
            {"ToolTipText", 0x50, "TextProperty"},
            {"ToolTipWidget", 0x60, "ObjectProperty"},
            {"ToolTipWidgetDelegate", 0x68, "DelegateProperty"},
            {"VisibilityDelegate", 0x74, "DelegateProperty"},
            {"RenderTransform", 0x80, "StructProperty"},
            {"RenderTransformPivot", 0xB8, "StructProperty"},
            {"FlowDirectionPreference", 0xC8, "EnumProperty"},
            {"bCreatedByConstructionScript", 0xC9, "BoolProperty"},
            {"bIsEnabled", 0xC9, "BoolProperty"},
            {"bIsVariable", 0xC9, "BoolProperty"},
            {"bIsVolatile", 0xC9, "BoolProperty"},
            {"bOverride_Cursor", 0xC9, "BoolProperty"},
            {"bWrappedByComponent", 0xCA, "BoolProperty"},
            {"Cursor", 0xCB, "ByteProperty"},
            {"Clipping", 0xCC, "EnumProperty"},
            {"Visibility", 0xCD, "EnumProperty"},
            {"PixelSnapping", 0xCE, "EnumProperty"},
            {"RenderOpacity", 0xD0, "FloatProperty"},
            {"AccessibleWidgetData", 0xD8, "ObjectProperty"},
            {"Navigation", 0xE0, "ObjectProperty"},
            {"NativeBindings", 0x138, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 57> FunctionNames{{
            "ForceLayoutPrepass",
            "ForceVolatile",
            "GetAccessibleSummaryText",
            "GetAccessibleText",
            "GetCachedGeometry",
            "GetClipping",
            "GetDesiredSize",
            "GetGameInstance",
            "GetIsEnabled",
            "GetOwningLocalPlayer",
            "GetOwningPlayer",
            "GetPaintSpaceGeometry",
            "GetParent",
            "GetRenderOpacity",
            "GetRenderTransformAngle",
            "GetTickSpaceGeometry",
            "GetVisibility",
            "HasAnyUserFocus",
            "HasFocusedDescendants",
            "HasKeyboardFocus",
            "HasMouseCapture",
            "HasMouseCaptureByUser",
            "HasUserFocus",
            "HasUserFocusedDescendants",
            "InvalidateLayoutAndVolatility",
            "IsHovered",
            "IsInViewport",
            "IsRendered",
            "IsVisible",
            "K2_AddFieldValueChangedDelegate",
            "K2_BroadcastFieldValueChanged",
            "K2_RemoveFieldValueChangedDelegate",
            "RemoveFromParent",
            "ResetCursor",
            "SetAllNavigationRules",
            "SetClipping",
            "SetCursor",
            "SetFocus",
            "SetIsEnabled",
            "SetKeyboardFocus",
            "SetNavigationRule",
            "SetNavigationRuleBase",
            "SetNavigationRuleCustom",
            "SetNavigationRuleCustomBoundary",
            "SetNavigationRuleExplicit",
            "SetRenderOpacity",
            "SetRenderScale",
            "SetRenderShear",
            "SetRenderTransform",
            "SetRenderTransformAngle",
            "SetRenderTransformPivot",
            "SetRenderTranslation",
            "SetToolTip",
            "SetToolTipText",
            "SetUserFocus",
            "SetVisibility",
            "SupportsKeyboardFocus",
        }};
    };

    struct WidgetAnimation
    {
        static constexpr std::string_view Name = "WidgetAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSequence";
        struct Offsets
        {
            static constexpr std::uintptr_t MovieScene = 0x68;
            static constexpr std::uintptr_t AnimationBindings = 0x70;
            static constexpr std::uintptr_t bLegacyFinishOnStop = 0x80;
            static constexpr std::uintptr_t DisplayLabel = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MovieScene", 0x68, "ObjectProperty"},
            {"AnimationBindings", 0x70, "ArrayProperty"},
            {"bLegacyFinishOnStop", 0x80, "BoolProperty"},
            {"DisplayLabel", 0x88, "StrProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "BindToAnimationFinished",
            "BindToAnimationStarted",
            "GetEndTime",
            "GetStartTime",
            "UnbindAllFromAnimationFinished",
            "UnbindAllFromAnimationStarted",
            "UnbindFromAnimationFinished",
            "UnbindFromAnimationStarted",
        }};
    };

    struct WidgetAnimationBinding
    {
        static constexpr std::string_view Name = "WidgetAnimationBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x0;
            static constexpr std::uintptr_t SlotWidgetName = 0x4;
            static constexpr std::uintptr_t AnimationGuid = 0x8;
            static constexpr std::uintptr_t bIsRootWidget = 0x18;
            static constexpr std::uintptr_t DynamicBinding = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WidgetName", 0x0, "NameProperty"},
            {"SlotWidgetName", 0x4, "NameProperty"},
            {"AnimationGuid", 0x8, "StructProperty"},
            {"bIsRootWidget", 0x18, "BoolProperty"},
            {"DynamicBinding", 0x20, "StructProperty"},
        }};
    };

    struct WidgetAnimationDelegateBinding
    {
        static constexpr std::string_view Name = "WidgetAnimationDelegateBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicBlueprintBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetAnimationDelegateBindings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WidgetAnimationDelegateBindings", 0x28, "ArrayProperty"},
        }};
    };

    struct WidgetAnimationHandle
    {
        static constexpr std::string_view Name = "WidgetAnimationHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetAnimationHandleFunctionLibrary
    {
        static constexpr std::string_view Name = "WidgetAnimationHandleFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetUserTag",
            "SetUserTag",
        }};
    };

    struct WidgetAnimationPlayCallbackProxy
    {
        static constexpr std::string_view Name = "WidgetAnimationPlayCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Finished = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Finished", 0x28, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "CreatePlayAnimationProxyObject",
            "CreatePlayAnimationTimeRangeProxyObject",
            "NewPlayAnimationProxyObject",
            "NewPlayAnimationTimeRangeProxyObject",
        }};
    };

    struct WidgetAnimationTeardownTestWidget
    {
        static constexpr std::string_view Name = "WidgetAnimationTeardownTestWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};
    };

    struct WidgetBinaryStateRegistration
    {
        static constexpr std::string_view Name = "WidgetBinaryStateRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetBinding
    {
        static constexpr std::string_view Name = "WidgetBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceObject = 0x28;
            static constexpr std::uintptr_t SourcePath = 0x30;
            static constexpr std::uintptr_t DestinationProperty = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceObject", 0x28, "WeakObjectProperty"},
            {"SourcePath", 0x30, "StructProperty"},
            {"DestinationProperty", 0x68, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetValue",
        }};
    };

    struct WidgetBlueprintGeneratedClass
    {
        static constexpr std::string_view Name = "WidgetBlueprintGeneratedClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintGeneratedClass";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetTree = 0x278;
            static constexpr std::uintptr_t Extensions = 0x280;
            static constexpr std::uintptr_t bCanCallInitializedWithoutPlayerContext = 0x290;
            static constexpr std::uintptr_t bClassRequiresNativeTick = 0x290;
            static constexpr std::uintptr_t bWidgetTreeContainsSubstitutableArchetypes = 0x290;
            static constexpr std::uintptr_t Bindings = 0x298;
            static constexpr std::uintptr_t Animations = 0x2A8;
            static constexpr std::uintptr_t NamedSlots = 0x2B8;
            static constexpr std::uintptr_t AvailableNamedSlots = 0x2C8;
            static constexpr std::uintptr_t InstanceNamedSlots = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"WidgetTree", 0x278, "ObjectProperty"},
            {"Extensions", 0x280, "ArrayProperty"},
            {"bCanCallInitializedWithoutPlayerContext", 0x290, "BoolProperty"},
            {"bClassRequiresNativeTick", 0x290, "BoolProperty"},
            {"bWidgetTreeContainsSubstitutableArchetypes", 0x290, "BoolProperty"},
            {"Bindings", 0x298, "ArrayProperty"},
            {"Animations", 0x2A8, "ArrayProperty"},
            {"NamedSlots", 0x2B8, "ArrayProperty"},
            {"AvailableNamedSlots", 0x2C8, "ArrayProperty"},
            {"InstanceNamedSlots", 0x2D8, "ArrayProperty"},
        }};
    };

    struct WidgetBlueprintGeneratedClassExtension
    {
        static constexpr std::string_view Name = "WidgetBlueprintGeneratedClassExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetBlueprintLibrary
    {
        static constexpr std::string_view Name = "WidgetBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 55> FunctionNames{{
            "CancelDragDrop",
            "CaptureJoystick",
            "CaptureMouse",
            "ClearUserFocus",
            "Create",
            "CreateDragDropOperation",
            "DetectDrag",
            "DetectDragIfPressed",
            "DismissAllMenus",
            "DrawBox",
            "DrawLine",
            "DrawLines",
            "DrawSpline",
            "DrawText",
            "DrawTextFormatted",
            "EndDragDrop",
            "GetAllWidgetsOfClass",
            "GetAllWidgetsWithInterface",
            "GetBrushResource",
            "GetBrushResourceAsMaterial",
            "GetBrushResourceAsTexture2D",
            "GetDragDroppingContent",
            "GetDynamicMaterial",
            "GetInputEventFromCharacterEvent",
            "GetInputEventFromKeyEvent",
            "GetInputEventFromNavigationEvent",
            "GetInputEventFromPointerEvent",
            "GetKeyEventFromAnalogInputEvent",
            "GetSafeZonePadding",
            "GetSafeZonePaddingInUnits",
            "Handled",
            "IsDragDropping",
            "LockMouse",
            "MakeBrushFromAsset",
            "MakeBrushFromMaterial",
            "MakeBrushFromTexture",
            "NoResourceBrush",
            "ReleaseJoystickCapture",
            "ReleaseMouseCapture",
            "RestorePreviousWindowTitleBarState",
            "SetBrushResourceToMaterial",
            "SetBrushResourceToTexture",
            "SetColorVisionDeficiencyType",
            "SetFocusToGameViewport",
            "SetHardwareCursor",
            "SetInputMode_GameAndUIEx",
            "SetInputMode_GameOnly",
            "SetInputMode_UIOnlyEx",
            "SetMousePosition",
            "SetUserFocus",
            "SetWindowTitleBarCloseButtonActive",
            "SetWindowTitleBarOnCloseClickedDelegate",
            "SetWindowTitleBarState",
            "Unhandled",
            "UnlockMouse",
        }};
    };

    struct WidgetCheckedStateRegistration
    {
        static constexpr std::string_view Name = "WidgetCheckedStateRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetEnumStateRegistration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetChild
    {
        static constexpr std::string_view Name = "WidgetChild";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetName = 0x0;
            static constexpr std::uintptr_t WidgetPtr = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WidgetName", 0x0, "NameProperty"},
            {"WidgetPtr", 0x4, "WeakObjectProperty"},
        }};
    };

    struct WidgetComponent
    {
        static constexpr std::string_view Name = "WidgetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Space = 0x5D8;
            static constexpr std::uintptr_t TimingPolicy = 0x5D9;
            static constexpr std::uintptr_t WidgetClass = 0x5E0;
            static constexpr std::uintptr_t DrawSize = 0x5E8;
            static constexpr std::uintptr_t RenderTargetPixelsPerCentimeter = 0x5F0;
            static constexpr std::uintptr_t SlateLayoutScale = 0x5F4;
            static constexpr std::uintptr_t bManuallyRedraw = 0x5F8;
            static constexpr std::uintptr_t bRedrawRequested = 0x5F9;
            static constexpr std::uintptr_t RedrawTime = 0x5FC;
            static constexpr std::uintptr_t CurrentDrawSize = 0x608;
            static constexpr std::uintptr_t bUseInvalidationInWorldSpace = 0x610;
            static constexpr std::uintptr_t bDrawAtDesiredSize = 0x611;
            static constexpr std::uintptr_t Pivot = 0x618;
            static constexpr std::uintptr_t bReceiveHardwareInput = 0x628;
            static constexpr std::uintptr_t bWindowFocusable = 0x629;
            static constexpr std::uintptr_t WindowVisibility = 0x62A;
            static constexpr std::uintptr_t bApplyGammaCorrection = 0x62B;
            static constexpr std::uintptr_t OwnerPlayer = 0x630;
            static constexpr std::uintptr_t BackgroundColor = 0x638;
            static constexpr std::uintptr_t TintColorAndOpacity = 0x648;
            static constexpr std::uintptr_t OpacityFromTexture = 0x658;
            static constexpr std::uintptr_t BlendMode = 0x65C;
            static constexpr std::uintptr_t bOverrideRenderTargetFormat = 0x65D;
            static constexpr std::uintptr_t RenderTargetFormatOverride = 0x65E;
            static constexpr std::uintptr_t bIsTwoSided = 0x65F;
            static constexpr std::uintptr_t bOutputDepthAndVelocity = 0x660;
            static constexpr std::uintptr_t bWriteDepthPrepass = 0x661;
            static constexpr std::uintptr_t DepthPrepassOpacityThreshold = 0x664;
            static constexpr std::uintptr_t TickWhenOffscreen = 0x668;
            static constexpr std::uintptr_t BodySetup = 0x670;
            static constexpr std::uintptr_t TranslucentMaterial = 0x678;
            static constexpr std::uintptr_t TranslucentMaterial_OneSided = 0x680;
            static constexpr std::uintptr_t TranslucentMaterial_OutputDepthAndVelocity = 0x688;
            static constexpr std::uintptr_t TranslucentMaterial_OutputDepthAndVelocity_OneSided = 0x690;
            static constexpr std::uintptr_t OpaqueMaterial = 0x698;
            static constexpr std::uintptr_t OpaqueMaterial_OneSided = 0x6A0;
            static constexpr std::uintptr_t MaskedMaterial = 0x6A8;
            static constexpr std::uintptr_t MaskedMaterial_OneSided = 0x6B0;
            static constexpr std::uintptr_t DepthPrepassMaterialInstance = 0x6B8;
            static constexpr std::uintptr_t RenderTarget = 0x6C0;
            static constexpr std::uintptr_t MaterialInstance = 0x6C8;
            static constexpr std::uintptr_t bAddedToScreen = 0x6D0;
            static constexpr std::uintptr_t bEditTimeUsable = 0x6D1;
            static constexpr std::uintptr_t SharedLayerName = 0x6D4;
            static constexpr std::uintptr_t LayerZOrder = 0x6D8;
            static constexpr std::uintptr_t GeometryMode = 0x6DC;
            static constexpr std::uintptr_t CylinderArcAngle = 0x6E0;
            static constexpr std::uintptr_t TickMode = 0x6E8;
            static constexpr std::uintptr_t Widget = 0x718;
        };

        inline static constexpr std::array<PropertyInfo, 49> Properties{{
            {"Space", 0x5D8, "EnumProperty"},
            {"TimingPolicy", 0x5D9, "EnumProperty"},
            {"WidgetClass", 0x5E0, "ClassProperty"},
            {"DrawSize", 0x5E8, "StructProperty"},
            {"RenderTargetPixelsPerCentimeter", 0x5F0, "FloatProperty"},
            {"SlateLayoutScale", 0x5F4, "FloatProperty"},
            {"bManuallyRedraw", 0x5F8, "BoolProperty"},
            {"bRedrawRequested", 0x5F9, "BoolProperty"},
            {"RedrawTime", 0x5FC, "FloatProperty"},
            {"CurrentDrawSize", 0x608, "StructProperty"},
            {"bUseInvalidationInWorldSpace", 0x610, "BoolProperty"},
            {"bDrawAtDesiredSize", 0x611, "BoolProperty"},
            {"Pivot", 0x618, "StructProperty"},
            {"bReceiveHardwareInput", 0x628, "BoolProperty"},
            {"bWindowFocusable", 0x629, "BoolProperty"},
            {"WindowVisibility", 0x62A, "EnumProperty"},
            {"bApplyGammaCorrection", 0x62B, "BoolProperty"},
            {"OwnerPlayer", 0x630, "ObjectProperty"},
            {"BackgroundColor", 0x638, "StructProperty"},
            {"TintColorAndOpacity", 0x648, "StructProperty"},
            {"OpacityFromTexture", 0x658, "FloatProperty"},
            {"BlendMode", 0x65C, "EnumProperty"},
            {"bOverrideRenderTargetFormat", 0x65D, "BoolProperty"},
            {"RenderTargetFormatOverride", 0x65E, "ByteProperty"},
            {"bIsTwoSided", 0x65F, "BoolProperty"},
            {"bOutputDepthAndVelocity", 0x660, "BoolProperty"},
            {"bWriteDepthPrepass", 0x661, "BoolProperty"},
            {"DepthPrepassOpacityThreshold", 0x664, "FloatProperty"},
            {"TickWhenOffscreen", 0x668, "BoolProperty"},
            {"BodySetup", 0x670, "ObjectProperty"},
            {"TranslucentMaterial", 0x678, "ObjectProperty"},
            {"TranslucentMaterial_OneSided", 0x680, "ObjectProperty"},
            {"TranslucentMaterial_OutputDepthAndVelocity", 0x688, "ObjectProperty"},
            {"TranslucentMaterial_OutputDepthAndVelocity_OneSided", 0x690, "ObjectProperty"},
            {"OpaqueMaterial", 0x698, "ObjectProperty"},
            {"OpaqueMaterial_OneSided", 0x6A0, "ObjectProperty"},
            {"MaskedMaterial", 0x6A8, "ObjectProperty"},
            {"MaskedMaterial_OneSided", 0x6B0, "ObjectProperty"},
            {"DepthPrepassMaterialInstance", 0x6B8, "ObjectProperty"},
            {"RenderTarget", 0x6C0, "ObjectProperty"},
            {"MaterialInstance", 0x6C8, "ObjectProperty"},
            {"bAddedToScreen", 0x6D0, "BoolProperty"},
            {"bEditTimeUsable", 0x6D1, "BoolProperty"},
            {"SharedLayerName", 0x6D4, "NameProperty"},
            {"LayerZOrder", 0x6D8, "IntProperty"},
            {"GeometryMode", 0x6DC, "EnumProperty"},
            {"CylinderArcAngle", 0x6E0, "DoubleProperty"},
            {"TickMode", 0x6E8, "EnumProperty"},
            {"Widget", 0x718, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 46> FunctionNames{{
            "GetCurrentDrawSize",
            "GetCylinderArcAngle",
            "GetDrawAtDesiredSize",
            "GetDrawSize",
            "GetGeometryMode",
            "GetManuallyRedraw",
            "GetMaterialInstance",
            "GetOutputDepthAndVelocity",
            "GetOwnerPlayer",
            "GetPivot",
            "GetRedrawTime",
            "GetRenderTarget",
            "GetRenderTargetPixelsPerCentimeter",
            "GetSlateLayoutScale",
            "GetTickWhenOffscreen",
            "GetTwoSided",
            "GetUserWidgetObject",
            "GetWidget",
            "GetWidgetSpace",
            "GetWindowFocusable",
            "GetWindowVisiblility",
            "IsWidgetVisible",
            "RequestRedraw",
            "RequestRenderUpdate",
            "SetBackgroundColor",
            "SetCylinderArcAngle",
            "SetDepthPrepassOpacityThreshold",
            "SetDrawAtDesiredSize",
            "SetDrawSize",
            "SetGeometryMode",
            "SetManuallyRedraw",
            "SetOutputDepthAndVelocity",
            "SetOwnerPlayer",
            "SetPivot",
            "SetRedrawTime",
            "SetRenderTargetPixelsPerCentimeter",
            "SetSlateLayoutScale",
            "SetTickMode",
            "SetTickWhenOffscreen",
            "SetTintColorAndOpacity",
            "SetTwoSided",
            "SetWidget",
            "SetWidgetSpace",
            "SetWindowFocusable",
            "SetWindowVisibility",
            "SetWriteDepthPrepass",
        }};
    };

    struct WidgetComponentInstanceData
    {
        static constexpr std::string_view Name = "WidgetComponentInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SceneComponentInstanceData";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedInstanceComponents = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachedInstanceComponents", 0x68, "MapProperty"},
        }};
    };

    struct WidgetDesignTimeInfo
    {
        static constexpr std::string_view Name = "WidgetDesignTimeInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewSize = 0x0;
            static constexpr std::uintptr_t bIsPortrait = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviewSize", 0x0, "StructProperty"},
            {"bIsPortrait", 0x10, "BoolProperty"},
        }};
    };

    struct WidgetDisabledStateRegistration
    {
        static constexpr std::string_view Name = "WidgetDisabledStateRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetBinaryStateRegistration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetEnumStateRegistration
    {
        static constexpr std::string_view Name = "WidgetEnumStateRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetEventField
    {
        static constexpr std::string_view Name = "WidgetEventField";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetFieldNotificationExtension
    {
        static constexpr std::string_view Name = "WidgetFieldNotificationExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidgetExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetHoveredStateRegistration
    {
        static constexpr std::string_view Name = "WidgetHoveredStateRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetBinaryStateRegistration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetInteractionComponent
    {
        static constexpr std::string_view Name = "WidgetInteractionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnHoveredWidgetChanged = 0x240;
            static constexpr std::uintptr_t VirtualUserIndex = 0x260;
            static constexpr std::uintptr_t PointerIndex = 0x264;
            static constexpr std::uintptr_t TraceChannel = 0x268;
            static constexpr std::uintptr_t InteractionDistance = 0x26C;
            static constexpr std::uintptr_t InteractionSource = 0x270;
            static constexpr std::uintptr_t bEnableHitTesting = 0x271;
            static constexpr std::uintptr_t bShowDebug = 0x272;
            static constexpr std::uintptr_t DebugSphereLineThickness = 0x274;
            static constexpr std::uintptr_t DebugLineThickness = 0x278;
            static constexpr std::uintptr_t DebugColor = 0x27C;
            static constexpr std::uintptr_t CustomHitResult = 0x2C8;
            static constexpr std::uintptr_t LocalHitLocation = 0x3C0;
            static constexpr std::uintptr_t LastLocalHitLocation = 0x3D0;
            static constexpr std::uintptr_t HoveredWidgetComponent = 0x3E0;
            static constexpr std::uintptr_t WeakHoveredWidgetComponent = 0x3E8;
            static constexpr std::uintptr_t LastHitResult = 0x3F0;
            static constexpr std::uintptr_t bIsHoveredWidgetInteractable = 0x4E8;
            static constexpr std::uintptr_t bIsHoveredWidgetFocusable = 0x4E9;
            static constexpr std::uintptr_t bIsHoveredWidgetHitTestVisible = 0x4EA;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"OnHoveredWidgetChanged", 0x240, "MulticastInlineDelegateProperty"},
            {"VirtualUserIndex", 0x260, "IntProperty"},
            {"PointerIndex", 0x264, "IntProperty"},
            {"TraceChannel", 0x268, "ByteProperty"},
            {"InteractionDistance", 0x26C, "FloatProperty"},
            {"InteractionSource", 0x270, "EnumProperty"},
            {"bEnableHitTesting", 0x271, "BoolProperty"},
            {"bShowDebug", 0x272, "BoolProperty"},
            {"DebugSphereLineThickness", 0x274, "FloatProperty"},
            {"DebugLineThickness", 0x278, "FloatProperty"},
            {"DebugColor", 0x27C, "StructProperty"},
            {"CustomHitResult", 0x2C8, "StructProperty"},
            {"LocalHitLocation", 0x3C0, "StructProperty"},
            {"LastLocalHitLocation", 0x3D0, "StructProperty"},
            {"HoveredWidgetComponent", 0x3E0, "ObjectProperty"},
            {"WeakHoveredWidgetComponent", 0x3E8, "WeakObjectProperty"},
            {"LastHitResult", 0x3F0, "StructProperty"},
            {"bIsHoveredWidgetInteractable", 0x4E8, "BoolProperty"},
            {"bIsHoveredWidgetFocusable", 0x4E9, "BoolProperty"},
            {"bIsHoveredWidgetHitTestVisible", 0x4EA, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "Get2DHitLocation",
            "GetHoveredWidgetComponent",
            "GetLastHitResult",
            "IsOverFocusableWidget",
            "IsOverHitTestVisibleWidget",
            "IsOverInteractableWidget",
            "PressAndReleaseKey",
            "PressKey",
            "PressPointerKey",
            "ReleaseKey",
            "ReleasePointerKey",
            "ScrollWheel",
            "SendKeyChar",
            "SetCustomHitResult",
            "SetFocus",
        }};
    };

    struct WidgetLayoutLibrary
    {
        static constexpr std::string_view Name = "WidgetLayoutLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 24> FunctionNames{{
            "GetDesignTimeInfo",
            "GetMousePositionOnPlatform",
            "GetMousePositionOnViewport",
            "GetMousePositionScaledByDPI",
            "GetPlayerScreenWidgetGeometry",
            "GetViewportScale",
            "GetViewportSize",
            "GetViewportWidgetGeometry",
            "ProjectWorldLocationToWidgetPosition",
            "RemoveAllWidgets",
            "SlotAsBorderSlot",
            "SlotAsCanvasSlot",
            "SlotAsGridSlot",
            "SlotAsHorizontalBoxSlot",
            "SlotAsOverlaySlot",
            "SlotAsSafeBoxSlot",
            "SlotAsScaleBoxSlot",
            "SlotAsScrollBoxSlot",
            "SlotAsSizeBoxSlot",
            "SlotAsStackBoxSlot",
            "SlotAsUniformGridSlot",
            "SlotAsVerticalBoxSlot",
            "SlotAsWidgetSwitcherSlot",
            "SlotAsWrapBoxSlot",
        }};
    };

    struct WidgetNavigation
    {
        static constexpr std::string_view Name = "WidgetNavigation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Up = 0x28;
            static constexpr std::uintptr_t Down = 0x44;
            static constexpr std::uintptr_t Left = 0x60;
            static constexpr std::uintptr_t Right = 0x7C;
            static constexpr std::uintptr_t Next = 0x98;
            static constexpr std::uintptr_t Previous = 0xB4;
            static constexpr std::uintptr_t RoutingPolicy = 0xD0;
            static constexpr std::uintptr_t NavigationMethod = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Up", 0x28, "StructProperty"},
            {"Down", 0x44, "StructProperty"},
            {"Left", 0x60, "StructProperty"},
            {"Right", 0x7C, "StructProperty"},
            {"Next", 0x98, "StructProperty"},
            {"Previous", 0xB4, "StructProperty"},
            {"RoutingPolicy", 0xD0, "EnumProperty"},
            {"NavigationMethod", 0xD8, "StructProperty"},
        }};
    };

    struct WidgetNavigationData
    {
        static constexpr std::string_view Name = "WidgetNavigationData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rule = 0x0;
            static constexpr std::uintptr_t WidgetToFocus = 0x4;
            static constexpr std::uintptr_t Widget = 0x8;
            static constexpr std::uintptr_t CustomDelegate = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Rule", 0x0, "EnumProperty"},
            {"WidgetToFocus", 0x4, "NameProperty"},
            {"Widget", 0x8, "WeakObjectProperty"},
            {"CustomDelegate", 0x10, "DelegateProperty"},
        }};
    };

    struct WidgetPressedStateRegistration
    {
        static constexpr std::string_view Name = "WidgetPressedStateRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetBinaryStateRegistration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetSelectedStateRegistration
    {
        static constexpr std::string_view Name = "WidgetSelectedStateRegistration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetBinaryStateRegistration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetStateBitfield
    {
        static constexpr std::string_view Name = "WidgetStateBitfield";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetStateSettings
    {
        static constexpr std::string_view Name = "WidgetStateSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WidgetSwitcher
    {
        static constexpr std::string_view Name = "WidgetSwitcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveWidgetIndex = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveWidgetIndex", 0x180, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetActiveWidget",
            "GetActiveWidgetIndex",
            "GetNumWidgets",
            "GetWidgetAtIndex",
            "SetActiveWidget",
            "SetActiveWidgetIndex",
        }};
    };

    struct WidgetSwitcherSlot
    {
        static constexpr std::string_view Name = "WidgetSwitcherSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x40;
            static constexpr std::uintptr_t HorizontalAlignment = 0x50;
            static constexpr std::uintptr_t VerticalAlignment = 0x51;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x40, "StructProperty"},
            {"HorizontalAlignment", 0x50, "ByteProperty"},
            {"VerticalAlignment", 0x51, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct WidgetTransform
    {
        static constexpr std::string_view Name = "WidgetTransform";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Translation = 0x0;
            static constexpr std::uintptr_t Scale = 0x10;
            static constexpr std::uintptr_t Shear = 0x20;
            static constexpr std::uintptr_t Angle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Translation", 0x0, "StructProperty"},
            {"Scale", 0x10, "StructProperty"},
            {"Shear", 0x20, "StructProperty"},
            {"Angle", 0x30, "FloatProperty"},
        }};
    };

    struct WidgetTree
    {
        static constexpr std::string_view Name = "WidgetTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RootWidget = 0x30;
            static constexpr std::uintptr_t NamedSlotBindings = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RootWidget", 0x30, "ObjectProperty"},
            {"NamedSlotBindings", 0x38, "MapProperty"},
        }};
    };

    struct WindowTitleBarArea
    {
        static constexpr std::string_view Name = "WindowTitleBarArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bWindowButtonsEnabled = 0x180;
            static constexpr std::uintptr_t bDoubleClickTogglesFullscreen = 0x181;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bWindowButtonsEnabled", 0x180, "BoolProperty"},
            {"bDoubleClickTogglesFullscreen", 0x181, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct WindowTitleBarAreaSlot
    {
        static constexpr std::string_view Name = "WindowTitleBarAreaSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t HorizontalAlignment = 0x48;
            static constexpr std::uintptr_t VerticalAlignment = 0x49;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"HorizontalAlignment", 0x48, "ByteProperty"},
            {"VerticalAlignment", 0x49, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "SetHorizontalAlignment",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct WrapBox
    {
        static constexpr std::string_view Name = "WrapBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerSlotPadding = 0x180;
            static constexpr std::uintptr_t WrapSize = 0x190;
            static constexpr std::uintptr_t bExplicitWrapSize = 0x194;
            static constexpr std::uintptr_t HorizontalAlignment = 0x195;
            static constexpr std::uintptr_t orientation = 0x196;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InnerSlotPadding", 0x180, "StructProperty"},
            {"WrapSize", 0x190, "FloatProperty"},
            {"bExplicitWrapSize", 0x194, "BoolProperty"},
            {"HorizontalAlignment", 0x195, "ByteProperty"},
            {"orientation", 0x196, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "AddChildToWrapBox",
            "SetHorizontalAlignment",
            "SetInnerSlotPadding",
        }};
    };

    struct WrapBoxSlot
    {
        static constexpr std::string_view Name = "WrapBoxSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t FillSpanWhenLessThan = 0x48;
            static constexpr std::uintptr_t HorizontalAlignment = 0x4C;
            static constexpr std::uintptr_t VerticalAlignment = 0x4D;
            static constexpr std::uintptr_t bFillEmptySpace = 0x4E;
            static constexpr std::uintptr_t bForceNewLine = 0x4F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"FillSpanWhenLessThan", 0x48, "FloatProperty"},
            {"HorizontalAlignment", 0x4C, "ByteProperty"},
            {"VerticalAlignment", 0x4D, "ByteProperty"},
            {"bFillEmptySpace", 0x4E, "BoolProperty"},
            {"bForceNewLine", 0x4F, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "SetFillEmptySpace",
            "SetFillSpanWhenLessThan",
            "SetHorizontalAlignment",
            "SetNewLine",
            "SetPadding",
            "SetVerticalAlignment",
        }};
    };

    struct button
    {
        static constexpr std::string_view Name = "button";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContentWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x180;
            static constexpr std::uintptr_t ColorAndOpacity = 0x510;
            static constexpr std::uintptr_t BackgroundColor = 0x520;
            static constexpr std::uintptr_t ClickMethod = 0x530;
            static constexpr std::uintptr_t TouchMethod = 0x531;
            static constexpr std::uintptr_t PressMethod = 0x532;
            static constexpr std::uintptr_t IsFocusable = 0x533;
            static constexpr std::uintptr_t OnClicked = 0x538;
            static constexpr std::uintptr_t OnPressed = 0x548;
            static constexpr std::uintptr_t OnReleased = 0x558;
            static constexpr std::uintptr_t OnHovered = 0x568;
            static constexpr std::uintptr_t OnUnhovered = 0x578;
            static constexpr std::uintptr_t bAllowDragDrop = 0x608;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"WidgetStyle", 0x180, "StructProperty"},
            {"ColorAndOpacity", 0x510, "StructProperty"},
            {"BackgroundColor", 0x520, "StructProperty"},
            {"ClickMethod", 0x530, "ByteProperty"},
            {"TouchMethod", 0x531, "ByteProperty"},
            {"PressMethod", 0x532, "ByteProperty"},
            {"IsFocusable", 0x533, "BoolProperty"},
            {"OnClicked", 0x538, "MulticastInlineDelegateProperty"},
            {"OnPressed", 0x548, "MulticastInlineDelegateProperty"},
            {"OnReleased", 0x558, "MulticastInlineDelegateProperty"},
            {"OnHovered", 0x568, "MulticastInlineDelegateProperty"},
            {"OnUnhovered", 0x578, "MulticastInlineDelegateProperty"},
            {"bAllowDragDrop", 0x608, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "IsPressed",
            "SetAllowDragDrop",
            "SetBackgroundColor",
            "SetClickMethod",
            "SetColorAndOpacity",
            "SetPressMethod",
            "SetStyle",
            "SetTouchMethod",
        }};
    };

}
