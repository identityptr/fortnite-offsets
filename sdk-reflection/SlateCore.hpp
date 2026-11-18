#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SlateCore
{
    struct AnalogInputEvent
    {
        static constexpr std::string_view Name = "AnalogInputEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "KeyEvent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ButtonStyle
    {
        static constexpr std::string_view Name = "ButtonStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t Normal = 0x10;
            static constexpr std::uintptr_t Hovered = 0xC0;
            static constexpr std::uintptr_t Pressed = 0x170;
            static constexpr std::uintptr_t Disabled = 0x220;
            static constexpr std::uintptr_t NormalForeground = 0x2D0;
            static constexpr std::uintptr_t HoveredForeground = 0x2E4;
            static constexpr std::uintptr_t PressedForeground = 0x2F8;
            static constexpr std::uintptr_t DisabledForeground = 0x30C;
            static constexpr std::uintptr_t NormalPadding = 0x320;
            static constexpr std::uintptr_t PressedPadding = 0x330;
            static constexpr std::uintptr_t PressedSlateSound = 0x340;
            static constexpr std::uintptr_t ClickedSlateSound = 0x358;
            static constexpr std::uintptr_t HoveredSlateSound = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Normal", 0x10, "StructProperty"},
            {"Hovered", 0xC0, "StructProperty"},
            {"Pressed", 0x170, "StructProperty"},
            {"Disabled", 0x220, "StructProperty"},
            {"NormalForeground", 0x2D0, "StructProperty"},
            {"HoveredForeground", 0x2E4, "StructProperty"},
            {"PressedForeground", 0x2F8, "StructProperty"},
            {"DisabledForeground", 0x30C, "StructProperty"},
            {"NormalPadding", 0x320, "StructProperty"},
            {"PressedPadding", 0x330, "StructProperty"},
            {"PressedSlateSound", 0x340, "StructProperty"},
            {"ClickedSlateSound", 0x358, "StructProperty"},
            {"HoveredSlateSound", 0x370, "StructProperty"},
        }};
    };

    struct CaptureLostEvent
    {
        static constexpr std::string_view Name = "CaptureLostEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CharacterEvent
    {
        static constexpr std::string_view Name = "CharacterEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InputEvent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CheckBoxStyle
    {
        static constexpr std::string_view Name = "CheckBoxStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckBoxType = 0x8;
            static constexpr std::uintptr_t UncheckedImage = 0x10;
            static constexpr std::uintptr_t UncheckedHoveredImage = 0xC0;
            static constexpr std::uintptr_t UncheckedPressedImage = 0x170;
            static constexpr std::uintptr_t CheckedImage = 0x220;
            static constexpr std::uintptr_t CheckedHoveredImage = 0x2D0;
            static constexpr std::uintptr_t CheckedPressedImage = 0x380;
            static constexpr std::uintptr_t UndeterminedImage = 0x430;
            static constexpr std::uintptr_t UndeterminedHoveredImage = 0x4E0;
            static constexpr std::uintptr_t UndeterminedPressedImage = 0x590;
            static constexpr std::uintptr_t Padding = 0x640;
            static constexpr std::uintptr_t BackgroundImage = 0x650;
            static constexpr std::uintptr_t BackgroundHoveredImage = 0x700;
            static constexpr std::uintptr_t BackgroundPressedImage = 0x7B0;
            static constexpr std::uintptr_t ForegroundColor = 0x860;
            static constexpr std::uintptr_t HoveredForeground = 0x874;
            static constexpr std::uintptr_t PressedForeground = 0x888;
            static constexpr std::uintptr_t CheckedForeground = 0x89C;
            static constexpr std::uintptr_t CheckedHoveredForeground = 0x8B0;
            static constexpr std::uintptr_t CheckedPressedForeground = 0x8C4;
            static constexpr std::uintptr_t UndeterminedForeground = 0x8D8;
            static constexpr std::uintptr_t BorderBackgroundColor = 0x8EC;
            static constexpr std::uintptr_t CheckedSlateSound = 0x900;
            static constexpr std::uintptr_t UncheckedSlateSound = 0x918;
            static constexpr std::uintptr_t HoveredSlateSound = 0x930;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"CheckBoxType", 0x8, "ByteProperty"},
            {"UncheckedImage", 0x10, "StructProperty"},
            {"UncheckedHoveredImage", 0xC0, "StructProperty"},
            {"UncheckedPressedImage", 0x170, "StructProperty"},
            {"CheckedImage", 0x220, "StructProperty"},
            {"CheckedHoveredImage", 0x2D0, "StructProperty"},
            {"CheckedPressedImage", 0x380, "StructProperty"},
            {"UndeterminedImage", 0x430, "StructProperty"},
            {"UndeterminedHoveredImage", 0x4E0, "StructProperty"},
            {"UndeterminedPressedImage", 0x590, "StructProperty"},
            {"Padding", 0x640, "StructProperty"},
            {"BackgroundImage", 0x650, "StructProperty"},
            {"BackgroundHoveredImage", 0x700, "StructProperty"},
            {"BackgroundPressedImage", 0x7B0, "StructProperty"},
            {"ForegroundColor", 0x860, "StructProperty"},
            {"HoveredForeground", 0x874, "StructProperty"},
            {"PressedForeground", 0x888, "StructProperty"},
            {"CheckedForeground", 0x89C, "StructProperty"},
            {"CheckedHoveredForeground", 0x8B0, "StructProperty"},
            {"CheckedPressedForeground", 0x8C4, "StructProperty"},
            {"UndeterminedForeground", 0x8D8, "StructProperty"},
            {"BorderBackgroundColor", 0x8EC, "StructProperty"},
            {"CheckedSlateSound", 0x900, "StructProperty"},
            {"UncheckedSlateSound", 0x918, "StructProperty"},
            {"HoveredSlateSound", 0x930, "StructProperty"},
        }};
    };

    struct ComboBoxStyle
    {
        static constexpr std::string_view Name = "ComboBoxStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t ComboButtonStyle = 0x10;
            static constexpr std::uintptr_t PressedSlateSound = 0x570;
            static constexpr std::uintptr_t SelectionChangeSlateSound = 0x588;
            static constexpr std::uintptr_t ContentPadding = 0x5A0;
            static constexpr std::uintptr_t MenuRowPadding = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ComboButtonStyle", 0x10, "StructProperty"},
            {"PressedSlateSound", 0x570, "StructProperty"},
            {"SelectionChangeSlateSound", 0x588, "StructProperty"},
            {"ContentPadding", 0x5A0, "StructProperty"},
            {"MenuRowPadding", 0x5B0, "StructProperty"},
        }};
    };

    struct ComboButtonStyle
    {
        static constexpr std::string_view Name = "ComboButtonStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t ButtonStyle = 0x10;
            static constexpr std::uintptr_t DownArrowImage = 0x3A0;
            static constexpr std::uintptr_t ShadowOffset = 0x450;
            static constexpr std::uintptr_t ShadowColorAndOpacity = 0x458;
            static constexpr std::uintptr_t MenuBorderBrush = 0x470;
            static constexpr std::uintptr_t MenuBorderPadding = 0x520;
            static constexpr std::uintptr_t ContentPadding = 0x530;
            static constexpr std::uintptr_t DownArrowPadding = 0x540;
            static constexpr std::uintptr_t DownArrowAlign = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ButtonStyle", 0x10, "StructProperty"},
            {"DownArrowImage", 0x3A0, "StructProperty"},
            {"ShadowOffset", 0x450, "StructProperty"},
            {"ShadowColorAndOpacity", 0x458, "StructProperty"},
            {"MenuBorderBrush", 0x470, "StructProperty"},
            {"MenuBorderPadding", 0x520, "StructProperty"},
            {"ContentPadding", 0x530, "StructProperty"},
            {"DownArrowPadding", 0x540, "StructProperty"},
            {"DownArrowAlign", 0x550, "ByteProperty"},
        }};
    };

    struct CompositeFallbackFont
    {
        static constexpr std::string_view Name = "CompositeFallbackFont";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Typeface = 0x0;
            static constexpr std::uintptr_t ScalingFactor = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Typeface", 0x0, "StructProperty"},
            {"ScalingFactor", 0x10, "FloatProperty"},
        }};
    };

    struct CompositeFont
    {
        static constexpr std::string_view Name = "CompositeFont";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTypeface = 0x0;
            static constexpr std::uintptr_t FallbackTypeface = 0x10;
            static constexpr std::uintptr_t SubTypefaces = 0x28;
            static constexpr std::uintptr_t bEnableAscentDescentOverride = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultTypeface", 0x0, "StructProperty"},
            {"FallbackTypeface", 0x10, "StructProperty"},
            {"SubTypefaces", 0x28, "ArrayProperty"},
            {"bEnableAscentDescentOverride", 0x38, "BoolProperty"},
        }};
    };

    struct CompositeSubFont
    {
        static constexpr std::string_view Name = "CompositeSubFont";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CompositeFallbackFont";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterRanges = 0x18;
            static constexpr std::uintptr_t Cultures = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CharacterRanges", 0x18, "ArrayProperty"},
            {"Cultures", 0x28, "StrProperty"},
        }};
    };

    struct DeprecateSlateVector2D
    {
        static constexpr std::string_view Name = "DeprecateSlateVector2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Vector2f";
        struct Offsets
        {
            static constexpr std::uintptr_t X = 0x0;
            static constexpr std::uintptr_t Y = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"X", 0x0, "FloatProperty"},
            {"Y", 0x4, "FloatProperty"},
        }};
    };

    struct DockTabStyle
    {
        static constexpr std::string_view Name = "DockTabStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseButtonStyle = 0x10;
            static constexpr std::uintptr_t NormalBrush = 0x3A0;
            static constexpr std::uintptr_t ColorOverlayTabBrush = 0x450;
            static constexpr std::uintptr_t ColorOverlayIconBrush = 0x500;
            static constexpr std::uintptr_t ForegroundBrush = 0x5B0;
            static constexpr std::uintptr_t HoveredBrush = 0x660;
            static constexpr std::uintptr_t ContentAreaBrush = 0x710;
            static constexpr std::uintptr_t TabWellBrush = 0x7C0;
            static constexpr std::uintptr_t TabTextStyle = 0x870;
            static constexpr std::uintptr_t TabPadding = 0xB50;
            static constexpr std::uintptr_t IconSize = 0xB60;
            static constexpr std::uintptr_t OverlapWidth = 0xB68;
            static constexpr std::uintptr_t FlashColor = 0xB6C;
            static constexpr std::uintptr_t NormalForegroundColor = 0xB80;
            static constexpr std::uintptr_t HoveredForegroundColor = 0xB94;
            static constexpr std::uintptr_t ActiveForegroundColor = 0xBA8;
            static constexpr std::uintptr_t ForegroundForegroundColor = 0xBBC;
            static constexpr std::uintptr_t IconBorderPadding = 0xBD0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CloseButtonStyle", 0x10, "StructProperty"},
            {"NormalBrush", 0x3A0, "StructProperty"},
            {"ColorOverlayTabBrush", 0x450, "StructProperty"},
            {"ColorOverlayIconBrush", 0x500, "StructProperty"},
            {"ForegroundBrush", 0x5B0, "StructProperty"},
            {"HoveredBrush", 0x660, "StructProperty"},
            {"ContentAreaBrush", 0x710, "StructProperty"},
            {"TabWellBrush", 0x7C0, "StructProperty"},
            {"TabTextStyle", 0x870, "StructProperty"},
            {"TabPadding", 0xB50, "StructProperty"},
            {"IconSize", 0xB60, "StructProperty"},
            {"OverlapWidth", 0xB68, "FloatProperty"},
            {"FlashColor", 0xB6C, "StructProperty"},
            {"NormalForegroundColor", 0xB80, "StructProperty"},
            {"HoveredForegroundColor", 0xB94, "StructProperty"},
            {"ActiveForegroundColor", 0xBA8, "StructProperty"},
            {"ForegroundForegroundColor", 0xBBC, "StructProperty"},
            {"IconBorderPadding", 0xBD0, "FloatProperty"},
        }};
    };

    struct EditableTextBoxStyle
    {
        static constexpr std::string_view Name = "EditableTextBoxStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t BackgroundImageNormal = 0x10;
            static constexpr std::uintptr_t BackgroundImageHovered = 0xC0;
            static constexpr std::uintptr_t BackgroundImageFocused = 0x170;
            static constexpr std::uintptr_t BackgroundImageReadOnly = 0x220;
            static constexpr std::uintptr_t Padding = 0x2D0;
            static constexpr std::uintptr_t TextStyle = 0x2E0;
            static constexpr std::uintptr_t ForegroundColor = 0x5C0;
            static constexpr std::uintptr_t BackgroundColor = 0x5D4;
            static constexpr std::uintptr_t ReadOnlyForegroundColor = 0x5E8;
            static constexpr std::uintptr_t FocusedForegroundColor = 0x5FC;
            static constexpr std::uintptr_t HScrollBarPadding = 0x610;
            static constexpr std::uintptr_t VScrollBarPadding = 0x620;
            static constexpr std::uintptr_t ScrollBarStyle = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"BackgroundImageNormal", 0x10, "StructProperty"},
            {"BackgroundImageHovered", 0xC0, "StructProperty"},
            {"BackgroundImageFocused", 0x170, "StructProperty"},
            {"BackgroundImageReadOnly", 0x220, "StructProperty"},
            {"Padding", 0x2D0, "StructProperty"},
            {"TextStyle", 0x2E0, "StructProperty"},
            {"ForegroundColor", 0x5C0, "StructProperty"},
            {"BackgroundColor", 0x5D4, "StructProperty"},
            {"ReadOnlyForegroundColor", 0x5E8, "StructProperty"},
            {"FocusedForegroundColor", 0x5FC, "StructProperty"},
            {"HScrollBarPadding", 0x610, "StructProperty"},
            {"VScrollBarPadding", 0x620, "StructProperty"},
            {"ScrollBarStyle", 0x630, "StructProperty"},
        }};
    };

    struct EditableTextStyle
    {
        static constexpr std::string_view Name = "EditableTextStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t Font = 0x8;
            static constexpr std::uintptr_t ColorAndOpacity = 0x60;
            static constexpr std::uintptr_t HintColorAndOpacity = 0x74;
            static constexpr std::uintptr_t BackgroundImageSelected = 0x90;
            static constexpr std::uintptr_t SelectedBackgroundColor = 0x140;
            static constexpr std::uintptr_t BackgroundImageComposing = 0x160;
            static constexpr std::uintptr_t CaretImage = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Font", 0x8, "StructProperty"},
            {"ColorAndOpacity", 0x60, "StructProperty"},
            {"HintColorAndOpacity", 0x74, "StructProperty"},
            {"BackgroundImageSelected", 0x90, "StructProperty"},
            {"SelectedBackgroundColor", 0x140, "StructProperty"},
            {"BackgroundImageComposing", 0x160, "StructProperty"},
            {"CaretImage", 0x210, "StructProperty"},
        }};
    };

    struct ExpandableAreaStyle
    {
        static constexpr std::string_view Name = "ExpandableAreaStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t CollapsedImage = 0x10;
            static constexpr std::uintptr_t ExpandedImage = 0xC0;
            static constexpr std::uintptr_t RolloutAnimationSeconds = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CollapsedImage", 0x10, "StructProperty"},
            {"ExpandedImage", 0xC0, "StructProperty"},
            {"RolloutAnimationSeconds", 0x170, "FloatProperty"},
        }};
    };

    struct FocusEvent
    {
        static constexpr std::string_view Name = "FocusEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FontBulkData
    {
        static constexpr std::string_view Name = "FontBulkData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FontData
    {
        static constexpr std::string_view Name = "FontData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FontFilename = 0x0;
            static constexpr std::uintptr_t Hinting = 0x14;
            static constexpr std::uintptr_t LoadingPolicy = 0x15;
            static constexpr std::uintptr_t SubFaceIndex = 0x18;
            static constexpr std::uintptr_t FontFaceAsset = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FontFilename", 0x0, "StrProperty"},
            {"Hinting", 0x14, "EnumProperty"},
            {"LoadingPolicy", 0x15, "EnumProperty"},
            {"SubFaceIndex", 0x18, "IntProperty"},
            {"FontFaceAsset", 0x20, "ObjectProperty"},
        }};
    };

    struct FontFaceInterface
    {
        static constexpr std::string_view Name = "FontFaceInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FontOutlineSettings
    {
        static constexpr std::string_view Name = "FontOutlineSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OutlineSize = 0x0;
            static constexpr std::uintptr_t bMiteredCorners = 0x4;
            static constexpr std::uintptr_t bSeparateFillAlpha = 0x5;
            static constexpr std::uintptr_t bApplyOutlineToDropShadows = 0x6;
            static constexpr std::uintptr_t OutlineMaterial = 0x8;
            static constexpr std::uintptr_t OutlineColor = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OutlineSize", 0x0, "IntProperty"},
            {"bMiteredCorners", 0x4, "BoolProperty"},
            {"bSeparateFillAlpha", 0x5, "BoolProperty"},
            {"bApplyOutlineToDropShadows", 0x6, "BoolProperty"},
            {"OutlineMaterial", 0x8, "ObjectProperty"},
            {"OutlineColor", 0x10, "StructProperty"},
        }};
    };

    struct FontProviderInterface
    {
        static constexpr std::string_view Name = "FontProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FontSdfSettings
    {
        static constexpr std::string_view Name = "FontSdfSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BasePpem = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BasePpem", 0x0, "IntProperty"},
        }};
    };

    struct Geometry
    {
        static constexpr std::string_view Name = "Geometry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HeaderRowStyle
    {
        static constexpr std::string_view Name = "HeaderRowStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t ColumnStyle = 0x10;
            static constexpr std::uintptr_t LastColumnStyle = 0x650;
            static constexpr std::uintptr_t ColumnSplitterStyle = 0xC90;
            static constexpr std::uintptr_t SplitterHandleSize = 0xE00;
            static constexpr std::uintptr_t BackgroundBrush = 0xE10;
            static constexpr std::uintptr_t ForegroundColor = 0xEC0;
            static constexpr std::uintptr_t HorizontalSeparatorBrush = 0xEE0;
            static constexpr std::uintptr_t HorizontalSeparatorThickness = 0xF90;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ColumnStyle", 0x10, "StructProperty"},
            {"LastColumnStyle", 0x650, "StructProperty"},
            {"ColumnSplitterStyle", 0xC90, "StructProperty"},
            {"SplitterHandleSize", 0xE00, "FloatProperty"},
            {"BackgroundBrush", 0xE10, "StructProperty"},
            {"ForegroundColor", 0xEC0, "StructProperty"},
            {"HorizontalSeparatorBrush", 0xEE0, "StructProperty"},
            {"HorizontalSeparatorThickness", 0xF90, "FloatProperty"},
        }};
    };

    struct HyperlinkStyle
    {
        static constexpr std::string_view Name = "HyperlinkStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t UnderlineStyle = 0x10;
            static constexpr std::uintptr_t TextStyle = 0x3A0;
            static constexpr std::uintptr_t Padding = 0x680;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UnderlineStyle", 0x10, "StructProperty"},
            {"TextStyle", 0x3A0, "StructProperty"},
            {"Padding", 0x680, "StructProperty"},
        }};
    };

    struct InlineEditableTextBlockStyle
    {
        static constexpr std::string_view Name = "InlineEditableTextBlockStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t EditableTextBoxStyle = 0x10;
            static constexpr std::uintptr_t TextStyle = 0xC90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EditableTextBoxStyle", 0x10, "StructProperty"},
            {"TextStyle", 0xC90, "StructProperty"},
        }};
    };

    struct InlineTextImageStyle
    {
        static constexpr std::string_view Name = "InlineTextImageStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t Image = 0x10;
            static constexpr std::uintptr_t Baseline = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Image", 0x10, "StructProperty"},
            {"Baseline", 0xC0, "Int16Property"},
        }};
    };

    struct InputEvent
    {
        static constexpr std::string_view Name = "InputEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct KeyEvent
    {
        static constexpr std::string_view Name = "KeyEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InputEvent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Margin
    {
        static constexpr std::string_view Name = "Margin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Top = 0x4;
            static constexpr std::uintptr_t Right = 0x8;
            static constexpr std::uintptr_t Bottom = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Left", 0x0, "FloatProperty"},
            {"Top", 0x4, "FloatProperty"},
            {"Right", 0x8, "FloatProperty"},
            {"Bottom", 0xC, "FloatProperty"},
        }};
    };

    struct MotionEvent
    {
        static constexpr std::string_view Name = "MotionEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InputEvent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavigationEvent
    {
        static constexpr std::string_view Name = "NavigationEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InputEvent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavigationMethod
    {
        static constexpr std::string_view Name = "NavigationMethod";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavigationMethodOrthogonal
    {
        static constexpr std::string_view Name = "NavigationMethodOrthogonal";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NavigationMethod";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavigationMethodProximity
    {
        static constexpr std::string_view Name = "NavigationMethodProximity";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NavigationMethod";
        struct Offsets
        {
            static constexpr std::uintptr_t AlignmentFactor = 0x28;
            static constexpr std::uintptr_t SearchAngleDegrees = 0x2C;
            static constexpr std::uintptr_t OverlapThreshold = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AlignmentFactor", 0x28, "FloatProperty"},
            {"SearchAngleDegrees", 0x2C, "FloatProperty"},
            {"OverlapThreshold", 0x30, "FloatProperty"},
        }};
    };

    struct PointerEvent
    {
        static constexpr std::string_view Name = "PointerEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "InputEvent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ProgressBarStyle
    {
        static constexpr std::string_view Name = "ProgressBarStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t BackgroundImage = 0x10;
            static constexpr std::uintptr_t FillImage = 0xC0;
            static constexpr std::uintptr_t MarqueeImage = 0x170;
            static constexpr std::uintptr_t EnableFillAnimation = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BackgroundImage", 0x10, "StructProperty"},
            {"FillImage", 0xC0, "StructProperty"},
            {"MarqueeImage", 0x170, "StructProperty"},
            {"EnableFillAnimation", 0x220, "BoolProperty"},
        }};
    };

    struct ScrollBarStyle
    {
        static constexpr std::string_view Name = "ScrollBarStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalBackgroundImage = 0x10;
            static constexpr std::uintptr_t VerticalBackgroundImage = 0xC0;
            static constexpr std::uintptr_t VerticalTopSlotImage = 0x170;
            static constexpr std::uintptr_t HorizontalTopSlotImage = 0x220;
            static constexpr std::uintptr_t VerticalBottomSlotImage = 0x2D0;
            static constexpr std::uintptr_t HorizontalBottomSlotImage = 0x380;
            static constexpr std::uintptr_t NormalThumbImage = 0x430;
            static constexpr std::uintptr_t HoveredThumbImage = 0x4E0;
            static constexpr std::uintptr_t DraggedThumbImage = 0x590;
            static constexpr std::uintptr_t Thickness = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"HorizontalBackgroundImage", 0x10, "StructProperty"},
            {"VerticalBackgroundImage", 0xC0, "StructProperty"},
            {"VerticalTopSlotImage", 0x170, "StructProperty"},
            {"HorizontalTopSlotImage", 0x220, "StructProperty"},
            {"VerticalBottomSlotImage", 0x2D0, "StructProperty"},
            {"HorizontalBottomSlotImage", 0x380, "StructProperty"},
            {"NormalThumbImage", 0x430, "StructProperty"},
            {"HoveredThumbImage", 0x4E0, "StructProperty"},
            {"DraggedThumbImage", 0x590, "StructProperty"},
            {"Thickness", 0x640, "FloatProperty"},
        }};
    };

    struct ScrollBorderStyle
    {
        static constexpr std::string_view Name = "ScrollBorderStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t TopShadowBrush = 0x10;
            static constexpr std::uintptr_t BottomShadowBrush = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TopShadowBrush", 0x10, "StructProperty"},
            {"BottomShadowBrush", 0xC0, "StructProperty"},
        }};
    };

    struct ScrollBoxStyle
    {
        static constexpr std::string_view Name = "ScrollBoxStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t BarThickness = 0x8;
            static constexpr std::uintptr_t TopShadowBrush = 0x10;
            static constexpr std::uintptr_t BottomShadowBrush = 0xC0;
            static constexpr std::uintptr_t LeftShadowBrush = 0x170;
            static constexpr std::uintptr_t RightShadowBrush = 0x220;
            static constexpr std::uintptr_t HorizontalScrolledContentPadding = 0x2D0;
            static constexpr std::uintptr_t VerticalScrolledContentPadding = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BarThickness", 0x8, "FloatProperty"},
            {"TopShadowBrush", 0x10, "StructProperty"},
            {"BottomShadowBrush", 0xC0, "StructProperty"},
            {"LeftShadowBrush", 0x170, "StructProperty"},
            {"RightShadowBrush", 0x220, "StructProperty"},
            {"HorizontalScrolledContentPadding", 0x2D0, "StructProperty"},
            {"VerticalScrolledContentPadding", 0x2E0, "StructProperty"},
        }};
    };

    struct SearchBoxStyle
    {
        static constexpr std::string_view Name = "SearchBoxStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t TextBoxStyle = 0x10;
            static constexpr std::uintptr_t ActiveFontInfo = 0xC90;
            static constexpr std::uintptr_t UpArrowImage = 0xCF0;
            static constexpr std::uintptr_t DownArrowImage = 0xDA0;
            static constexpr std::uintptr_t GlassImage = 0xE50;
            static constexpr std::uintptr_t ClearImage = 0xF00;
            static constexpr std::uintptr_t ImagePadding = 0xFB0;
            static constexpr std::uintptr_t ImageSizeOverride = 0xFC0;
            static constexpr std::uintptr_t bLeftAlignButtons = 0xFD8;
            static constexpr std::uintptr_t bLeftAlignSearchResultButtons = 0xFD9;
            static constexpr std::uintptr_t bLeftAlignGlassImageAndClearButton = 0xFDA;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TextBoxStyle", 0x10, "StructProperty"},
            {"ActiveFontInfo", 0xC90, "StructProperty"},
            {"UpArrowImage", 0xCF0, "StructProperty"},
            {"DownArrowImage", 0xDA0, "StructProperty"},
            {"GlassImage", 0xE50, "StructProperty"},
            {"ClearImage", 0xF00, "StructProperty"},
            {"ImagePadding", 0xFB0, "StructProperty"},
            {"ImageSizeOverride", 0xFC0, "OptionalProperty"},
            {"bLeftAlignButtons", 0xFD8, "BoolProperty"},
            {"bLeftAlignSearchResultButtons", 0xFD9, "BoolProperty"},
            {"bLeftAlignGlassImageAndClearButton", 0xFDA, "BoolProperty"},
        }};
    };

    struct SegmentedControlStyle
    {
        static constexpr std::string_view Name = "SegmentedControlStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlStyle = 0x10;
            static constexpr std::uintptr_t FirstControlStyle = 0x960;
            static constexpr std::uintptr_t LastControlStyle = 0x12B0;
            static constexpr std::uintptr_t BackgroundBrush = 0x1C00;
            static constexpr std::uintptr_t UniformPadding = 0x1CB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ControlStyle", 0x10, "StructProperty"},
            {"FirstControlStyle", 0x960, "StructProperty"},
            {"LastControlStyle", 0x12B0, "StructProperty"},
            {"BackgroundBrush", 0x1C00, "StructProperty"},
            {"UniformPadding", 0x1CB0, "StructProperty"},
        }};
    };

    struct SlateBrush
    {
        static constexpr std::string_view Name = "SlateBrush";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TintColor = 0x8;
            static constexpr std::uintptr_t DrawAs = 0x1C;
            static constexpr std::uintptr_t Tiling = 0x1D;
            static constexpr std::uintptr_t Mirroring = 0x1E;
            static constexpr std::uintptr_t ImageType = 0x1F;
            static constexpr std::uintptr_t ImageSize = 0x20;
            static constexpr std::uintptr_t Margin = 0x28;
            static constexpr std::uintptr_t ResourceObject = 0x38;
            static constexpr std::uintptr_t OutlineSettings = 0x40;
            static constexpr std::uintptr_t UVRegion = 0x80;
            static constexpr std::uintptr_t bHasUObject = 0x94;
            static constexpr std::uintptr_t bIsDynamicallyLoaded = 0x94;
            static constexpr std::uintptr_t ResourceName = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"TintColor", 0x8, "StructProperty"},
            {"DrawAs", 0x1C, "ByteProperty"},
            {"Tiling", 0x1D, "ByteProperty"},
            {"Mirroring", 0x1E, "ByteProperty"},
            {"ImageType", 0x1F, "ByteProperty"},
            {"ImageSize", 0x20, "StructProperty"},
            {"Margin", 0x28, "StructProperty"},
            {"ResourceObject", 0x38, "ObjectProperty"},
            {"OutlineSettings", 0x40, "StructProperty"},
            {"UVRegion", 0x80, "StructProperty"},
            {"bHasUObject", 0x94, "BoolProperty"},
            {"bIsDynamicallyLoaded", 0x94, "BoolProperty"},
            {"ResourceName", 0xA8, "NameProperty"},
        }};
    };

    struct SlateBrushOutlineSettings
    {
        static constexpr std::string_view Name = "SlateBrushOutlineSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CornerRadii = 0x0;
            static constexpr std::uintptr_t Color = 0x20;
            static constexpr std::uintptr_t Width = 0x34;
            static constexpr std::uintptr_t RoundingType = 0x38;
            static constexpr std::uintptr_t bUseBrushTransparency = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CornerRadii", 0x0, "StructProperty"},
            {"Color", 0x20, "StructProperty"},
            {"Width", 0x34, "FloatProperty"},
            {"RoundingType", 0x38, "ByteProperty"},
            {"bUseBrushTransparency", 0x39, "BoolProperty"},
        }};
    };

    struct SlateColor
    {
        static constexpr std::string_view Name = "SlateColor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpecifiedColor = 0x0;
            static constexpr std::uintptr_t ColorUseRule = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpecifiedColor", 0x0, "StructProperty"},
            {"ColorUseRule", 0x10, "EnumProperty"},
        }};
    };

    struct SlateFontInfo
    {
        static constexpr std::string_view Name = "SlateFontInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FontObject = 0x0;
            static constexpr std::uintptr_t FontMaterial = 0x8;
            static constexpr std::uintptr_t OutlineSettings = 0x10;
            static constexpr std::uintptr_t TypefaceFontName = 0x40;
            static constexpr std::uintptr_t Size = 0x44;
            static constexpr std::uintptr_t LetterSpacing = 0x48;
            static constexpr std::uintptr_t SkewAmount = 0x4C;
            static constexpr std::uintptr_t bForceMonospaced = 0x51;
            static constexpr std::uintptr_t bMaterialIsStencil = 0x52;
            static constexpr std::uintptr_t MonospacedWidth = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"FontObject", 0x0, "ObjectProperty"},
            {"FontMaterial", 0x8, "ObjectProperty"},
            {"OutlineSettings", 0x10, "StructProperty"},
            {"TypefaceFontName", 0x40, "NameProperty"},
            {"Size", 0x44, "FloatProperty"},
            {"LetterSpacing", 0x48, "IntProperty"},
            {"SkewAmount", 0x4C, "FloatProperty"},
            {"bForceMonospaced", 0x51, "BoolProperty"},
            {"bMaterialIsStencil", 0x52, "BoolProperty"},
            {"MonospacedWidth", 0x54, "FloatProperty"},
        }};
    };

    struct SlateSound
    {
        static constexpr std::string_view Name = "SlateSound";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceObject = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResourceObject", 0x0, "ObjectProperty"},
        }};
    };

    struct SlateThemeManager
    {
        static constexpr std::string_view Name = "SlateThemeManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentThemeId = 0x28;
            static constexpr std::uintptr_t ActiveColors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentThemeId", 0x28, "StructProperty"},
            {"ActiveColors", 0x38, "StructProperty"},
        }};
    };

    struct SlateTypes
    {
        static constexpr std::string_view Name = "SlateTypes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SlateWidgetStyle
    {
        static constexpr std::string_view Name = "SlateWidgetStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SlateWidgetStyleAsset
    {
        static constexpr std::string_view Name = "SlateWidgetStyleAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomStyle = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomStyle", 0x28, "ObjectProperty"},
        }};
    };

    struct SlateWidgetStyleContainerBase
    {
        static constexpr std::string_view Name = "SlateWidgetStyleContainerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SlateWidgetStyleContainerInterface
    {
        static constexpr std::string_view Name = "SlateWidgetStyleContainerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SliderStyle
    {
        static constexpr std::string_view Name = "SliderStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t NormalBarImage = 0x10;
            static constexpr std::uintptr_t HoveredBarImage = 0xC0;
            static constexpr std::uintptr_t DisabledBarImage = 0x170;
            static constexpr std::uintptr_t NormalThumbImage = 0x220;
            static constexpr std::uintptr_t HoveredThumbImage = 0x2D0;
            static constexpr std::uintptr_t DisabledThumbImage = 0x380;
            static constexpr std::uintptr_t BarThickness = 0x430;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NormalBarImage", 0x10, "StructProperty"},
            {"HoveredBarImage", 0xC0, "StructProperty"},
            {"DisabledBarImage", 0x170, "StructProperty"},
            {"NormalThumbImage", 0x220, "StructProperty"},
            {"HoveredThumbImage", 0x2D0, "StructProperty"},
            {"DisabledThumbImage", 0x380, "StructProperty"},
            {"BarThickness", 0x430, "FloatProperty"},
        }};
    };

    struct SpinBoxStyle
    {
        static constexpr std::string_view Name = "SpinBoxStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t BackgroundBrush = 0x10;
            static constexpr std::uintptr_t ActiveBackgroundBrush = 0xC0;
            static constexpr std::uintptr_t HoveredBackgroundBrush = 0x170;
            static constexpr std::uintptr_t ActiveFillBrush = 0x220;
            static constexpr std::uintptr_t HoveredFillBrush = 0x2D0;
            static constexpr std::uintptr_t InactiveFillBrush = 0x380;
            static constexpr std::uintptr_t ArrowsImage = 0x430;
            static constexpr std::uintptr_t ForegroundColor = 0x4E0;
            static constexpr std::uintptr_t TextPadding = 0x4F4;
            static constexpr std::uintptr_t InsetPadding = 0x504;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BackgroundBrush", 0x10, "StructProperty"},
            {"ActiveBackgroundBrush", 0xC0, "StructProperty"},
            {"HoveredBackgroundBrush", 0x170, "StructProperty"},
            {"ActiveFillBrush", 0x220, "StructProperty"},
            {"HoveredFillBrush", 0x2D0, "StructProperty"},
            {"InactiveFillBrush", 0x380, "StructProperty"},
            {"ArrowsImage", 0x430, "StructProperty"},
            {"ForegroundColor", 0x4E0, "StructProperty"},
            {"TextPadding", 0x4F4, "StructProperty"},
            {"InsetPadding", 0x504, "StructProperty"},
        }};
    };

    struct SplitterStyle
    {
        static constexpr std::string_view Name = "SplitterStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t HandleNormalBrush = 0x10;
            static constexpr std::uintptr_t HandleHighlightBrush = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HandleNormalBrush", 0x10, "StructProperty"},
            {"HandleHighlightBrush", 0xC0, "StructProperty"},
        }};
    };

    struct StyleColorList
    {
        static constexpr std::string_view Name = "StyleColorList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleColors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StyleColors", 0x0, "StructProperty"},
        }};
    };

    struct StyleTheme
    {
        static constexpr std::string_view Name = "StyleTheme";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TableColumnHeaderStyle
    {
        static constexpr std::string_view Name = "TableColumnHeaderStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t SortPrimaryAscendingImage = 0x10;
            static constexpr std::uintptr_t SortPrimaryDescendingImage = 0xC0;
            static constexpr std::uintptr_t SortSecondaryAscendingImage = 0x170;
            static constexpr std::uintptr_t SortSecondaryDescendingImage = 0x220;
            static constexpr std::uintptr_t NormalBrush = 0x2D0;
            static constexpr std::uintptr_t HoveredBrush = 0x380;
            static constexpr std::uintptr_t MenuDropdownImage = 0x430;
            static constexpr std::uintptr_t MenuDropdownNormalBorderBrush = 0x4E0;
            static constexpr std::uintptr_t MenuDropdownHoveredBorderBrush = 0x590;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SortPrimaryAscendingImage", 0x10, "StructProperty"},
            {"SortPrimaryDescendingImage", 0xC0, "StructProperty"},
            {"SortSecondaryAscendingImage", 0x170, "StructProperty"},
            {"SortSecondaryDescendingImage", 0x220, "StructProperty"},
            {"NormalBrush", 0x2D0, "StructProperty"},
            {"HoveredBrush", 0x380, "StructProperty"},
            {"MenuDropdownImage", 0x430, "StructProperty"},
            {"MenuDropdownNormalBorderBrush", 0x4E0, "StructProperty"},
            {"MenuDropdownHoveredBorderBrush", 0x590, "StructProperty"},
        }};
    };

    struct TableRowStyle
    {
        static constexpr std::string_view Name = "TableRowStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectorFocusedBrush = 0x10;
            static constexpr std::uintptr_t ActiveHoveredBrush = 0xC0;
            static constexpr std::uintptr_t ActiveBrush = 0x170;
            static constexpr std::uintptr_t InactiveHoveredBrush = 0x220;
            static constexpr std::uintptr_t InactiveBrush = 0x2D0;
            static constexpr std::uintptr_t bUseParentRowBrush = 0x380;
            static constexpr std::uintptr_t ParentRowBackgroundBrush = 0x390;
            static constexpr std::uintptr_t ParentRowBackgroundHoveredBrush = 0x440;
            static constexpr std::uintptr_t EvenRowBackgroundHoveredBrush = 0x4F0;
            static constexpr std::uintptr_t EvenRowBackgroundBrush = 0x5A0;
            static constexpr std::uintptr_t OddRowBackgroundHoveredBrush = 0x650;
            static constexpr std::uintptr_t OddRowBackgroundBrush = 0x700;
            static constexpr std::uintptr_t TextColor = 0x7B0;
            static constexpr std::uintptr_t SelectedTextColor = 0x7C4;
            static constexpr std::uintptr_t DropIndicator_Above = 0x7E0;
            static constexpr std::uintptr_t DropIndicator_Onto = 0x890;
            static constexpr std::uintptr_t DropIndicator_Below = 0x940;
            static constexpr std::uintptr_t ActiveHighlightedBrush = 0x9F0;
            static constexpr std::uintptr_t InactiveHighlightedBrush = 0xAA0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"SelectorFocusedBrush", 0x10, "StructProperty"},
            {"ActiveHoveredBrush", 0xC0, "StructProperty"},
            {"ActiveBrush", 0x170, "StructProperty"},
            {"InactiveHoveredBrush", 0x220, "StructProperty"},
            {"InactiveBrush", 0x2D0, "StructProperty"},
            {"bUseParentRowBrush", 0x380, "BoolProperty"},
            {"ParentRowBackgroundBrush", 0x390, "StructProperty"},
            {"ParentRowBackgroundHoveredBrush", 0x440, "StructProperty"},
            {"EvenRowBackgroundHoveredBrush", 0x4F0, "StructProperty"},
            {"EvenRowBackgroundBrush", 0x5A0, "StructProperty"},
            {"OddRowBackgroundHoveredBrush", 0x650, "StructProperty"},
            {"OddRowBackgroundBrush", 0x700, "StructProperty"},
            {"TextColor", 0x7B0, "StructProperty"},
            {"SelectedTextColor", 0x7C4, "StructProperty"},
            {"DropIndicator_Above", 0x7E0, "StructProperty"},
            {"DropIndicator_Onto", 0x890, "StructProperty"},
            {"DropIndicator_Below", 0x940, "StructProperty"},
            {"ActiveHighlightedBrush", 0x9F0, "StructProperty"},
            {"InactiveHighlightedBrush", 0xAA0, "StructProperty"},
        }};
    };

    struct TableViewStyle
    {
        static constexpr std::string_view Name = "TableViewStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t BackgroundBrush = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BackgroundBrush", 0x10, "StructProperty"},
        }};
    };

    struct TextBlockStyle
    {
        static constexpr std::string_view Name = "TextBlockStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t Font = 0x8;
            static constexpr std::uintptr_t ColorAndOpacity = 0x60;
            static constexpr std::uintptr_t ShadowOffset = 0x74;
            static constexpr std::uintptr_t ShadowColorAndOpacity = 0x7C;
            static constexpr std::uintptr_t SelectedBackgroundColor = 0x8C;
            static constexpr std::uintptr_t HighlightColor = 0xA0;
            static constexpr std::uintptr_t HighlightShape = 0xC0;
            static constexpr std::uintptr_t StrikeBrush = 0x170;
            static constexpr std::uintptr_t UnderlineBrush = 0x220;
            static constexpr std::uintptr_t TransformPolicy = 0x2D0;
            static constexpr std::uintptr_t OverflowPolicy = 0x2D1;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Font", 0x8, "StructProperty"},
            {"ColorAndOpacity", 0x60, "StructProperty"},
            {"ShadowOffset", 0x74, "StructProperty"},
            {"ShadowColorAndOpacity", 0x7C, "StructProperty"},
            {"SelectedBackgroundColor", 0x8C, "StructProperty"},
            {"HighlightColor", 0xA0, "StructProperty"},
            {"HighlightShape", 0xC0, "StructProperty"},
            {"StrikeBrush", 0x170, "StructProperty"},
            {"UnderlineBrush", 0x220, "StructProperty"},
            {"TransformPolicy", 0x2D0, "EnumProperty"},
            {"OverflowPolicy", 0x2D1, "EnumProperty"},
        }};
    };

    struct ToolBarStyle
    {
        static constexpr std::string_view Name = "ToolBarStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t BackgroundBrush = 0x10;
            static constexpr std::uintptr_t ExpandBrush = 0xC0;
            static constexpr std::uintptr_t SeparatorBrush = 0x170;
            static constexpr std::uintptr_t LabelStyle = 0x220;
            static constexpr std::uintptr_t EditableTextStyle = 0x500;
            static constexpr std::uintptr_t ToggleButton = 0x1180;
            static constexpr std::uintptr_t ComboButtonStyle = 0x1AD0;
            static constexpr std::uintptr_t SettingsButtonStyle = 0x2030;
            static constexpr std::uintptr_t SettingsComboButton = 0x23C0;
            static constexpr std::uintptr_t SettingsToggleButton = 0x2920;
            static constexpr std::uintptr_t ButtonStyle = 0x3270;
            static constexpr std::uintptr_t LabelPadding = 0x3600;
            static constexpr std::uintptr_t UniformBlockWidth = 0x3610;
            static constexpr std::uintptr_t UniformBlockHeight = 0x3614;
            static constexpr std::uintptr_t NumColumns = 0x3618;
            static constexpr std::uintptr_t IconPadding = 0x361C;
            static constexpr std::uintptr_t SeparatorPadding = 0x362C;
            static constexpr std::uintptr_t SeparatorThickness = 0x363C;
            static constexpr std::uintptr_t ComboButtonPadding = 0x3640;
            static constexpr std::uintptr_t ButtonPadding = 0x3650;
            static constexpr std::uintptr_t CheckBoxPadding = 0x3660;
            static constexpr std::uintptr_t BlockPadding = 0x3670;
            static constexpr std::uintptr_t IndentedBlockPadding = 0x3680;
            static constexpr std::uintptr_t BlockHovered = 0x3690;
            static constexpr std::uintptr_t BackgroundPadding = 0x3740;
            static constexpr std::uintptr_t WrapButtonStyle = 0x3750;
            static constexpr std::uintptr_t WrapButtonPadding = 0x3E90;
            static constexpr std::uintptr_t WrapButtonIndex = 0x3EA0;
            static constexpr std::uintptr_t bAllowWrapButton = 0x3EA4;
            static constexpr std::uintptr_t bAllowWrappingDefault = 0x3EA5;
            static constexpr std::uintptr_t IconSize = 0x3EA8;
            static constexpr std::uintptr_t bShowLabels = 0x3EB0;
            static constexpr std::uintptr_t ButtonContentMaxWidth = 0x3EB4;
            static constexpr std::uintptr_t ButtonTextMinWidth = 0x3EB8;
            static constexpr std::uintptr_t ButtonTextMaxWidth = 0x3EBC;
            static constexpr std::uintptr_t ButtonContentFillWidth = 0x3EC0;
            static constexpr std::uintptr_t ComboContentMinWidth = 0x3EC4;
            static constexpr std::uintptr_t ComboContentMaxWidth = 0x3EC8;
            static constexpr std::uintptr_t ComboContentHorizontalAlignment = 0x3ECC;
            static constexpr std::uintptr_t IconPaddingWithVisibleLabel = 0x3ED0;
            static constexpr std::uintptr_t IconPaddingWithCollapsedLabel = 0x3EE0;
            static constexpr std::uintptr_t VerticalAlignmentOverride = 0x3EF0;
            static constexpr std::uintptr_t RaisedChildrenRightPadding = 0x3EF4;
        };

        inline static constexpr std::array<PropertyInfo, 43> Properties{{
            {"BackgroundBrush", 0x10, "StructProperty"},
            {"ExpandBrush", 0xC0, "StructProperty"},
            {"SeparatorBrush", 0x170, "StructProperty"},
            {"LabelStyle", 0x220, "StructProperty"},
            {"EditableTextStyle", 0x500, "StructProperty"},
            {"ToggleButton", 0x1180, "StructProperty"},
            {"ComboButtonStyle", 0x1AD0, "StructProperty"},
            {"SettingsButtonStyle", 0x2030, "StructProperty"},
            {"SettingsComboButton", 0x23C0, "StructProperty"},
            {"SettingsToggleButton", 0x2920, "StructProperty"},
            {"ButtonStyle", 0x3270, "StructProperty"},
            {"LabelPadding", 0x3600, "StructProperty"},
            {"UniformBlockWidth", 0x3610, "FloatProperty"},
            {"UniformBlockHeight", 0x3614, "FloatProperty"},
            {"NumColumns", 0x3618, "IntProperty"},
            {"IconPadding", 0x361C, "StructProperty"},
            {"SeparatorPadding", 0x362C, "StructProperty"},
            {"SeparatorThickness", 0x363C, "FloatProperty"},
            {"ComboButtonPadding", 0x3640, "StructProperty"},
            {"ButtonPadding", 0x3650, "StructProperty"},
            {"CheckBoxPadding", 0x3660, "StructProperty"},
            {"BlockPadding", 0x3670, "StructProperty"},
            {"IndentedBlockPadding", 0x3680, "StructProperty"},
            {"BlockHovered", 0x3690, "StructProperty"},
            {"BackgroundPadding", 0x3740, "StructProperty"},
            {"WrapButtonStyle", 0x3750, "StructProperty"},
            {"WrapButtonPadding", 0x3E90, "StructProperty"},
            {"WrapButtonIndex", 0x3EA0, "IntProperty"},
            {"bAllowWrapButton", 0x3EA4, "BoolProperty"},
            {"bAllowWrappingDefault", 0x3EA5, "BoolProperty"},
            {"IconSize", 0x3EA8, "StructProperty"},
            {"bShowLabels", 0x3EB0, "BoolProperty"},
            {"ButtonContentMaxWidth", 0x3EB4, "FloatProperty"},
            {"ButtonTextMinWidth", 0x3EB8, "FloatProperty"},
            {"ButtonTextMaxWidth", 0x3EBC, "FloatProperty"},
            {"ButtonContentFillWidth", 0x3EC0, "FloatProperty"},
            {"ComboContentMinWidth", 0x3EC4, "FloatProperty"},
            {"ComboContentMaxWidth", 0x3EC8, "FloatProperty"},
            {"ComboContentHorizontalAlignment", 0x3ECC, "ByteProperty"},
            {"IconPaddingWithVisibleLabel", 0x3ED0, "StructProperty"},
            {"IconPaddingWithCollapsedLabel", 0x3EE0, "StructProperty"},
            {"VerticalAlignmentOverride", 0x3EF0, "OptionalProperty"},
            {"RaisedChildrenRightPadding", 0x3EF4, "FloatProperty"},
        }};
    };

    struct Typeface
    {
        static constexpr std::string_view Name = "Typeface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Fonts = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Fonts", 0x0, "ArrayProperty"},
        }};
    };

    struct TypefaceEntry
    {
        static constexpr std::string_view Name = "TypefaceEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Font = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Font", 0x8, "StructProperty"},
        }};
    };

    struct VolumeControlStyle
    {
        static constexpr std::string_view Name = "VolumeControlStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t SliderStyle = 0x10;
            static constexpr std::uintptr_t HighVolumeImage = 0x450;
            static constexpr std::uintptr_t MidVolumeImage = 0x500;
            static constexpr std::uintptr_t LowVolumeImage = 0x5B0;
            static constexpr std::uintptr_t NoVolumeImage = 0x660;
            static constexpr std::uintptr_t MutedImage = 0x710;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SliderStyle", 0x10, "StructProperty"},
            {"HighVolumeImage", 0x450, "StructProperty"},
            {"MidVolumeImage", 0x500, "StructProperty"},
            {"LowVolumeImage", 0x5B0, "StructProperty"},
            {"NoVolumeImage", 0x660, "StructProperty"},
            {"MutedImage", 0x710, "StructProperty"},
        }};
    };

    struct WindowStyle
    {
        static constexpr std::string_view Name = "WindowStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SlateWidgetStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimizeButtonStyle = 0x10;
            static constexpr std::uintptr_t MaximizeButtonStyle = 0x3A0;
            static constexpr std::uintptr_t RestoreButtonStyle = 0x730;
            static constexpr std::uintptr_t EnterFullscreenButtonStyle = 0xAC0;
            static constexpr std::uintptr_t ExitFullscreenButtonStyle = 0xE50;
            static constexpr std::uintptr_t CloseButtonStyle = 0x11E0;
            static constexpr std::uintptr_t TitleTextStyle = 0x1570;
            static constexpr std::uintptr_t ActiveTitleBrush = 0x1850;
            static constexpr std::uintptr_t InactiveTitleBrush = 0x1900;
            static constexpr std::uintptr_t FlashTitleBrush = 0x19B0;
            static constexpr std::uintptr_t BackgroundColor = 0x1A60;
            static constexpr std::uintptr_t OutlineBrush = 0x1A80;
            static constexpr std::uintptr_t OutlineColor = 0x1B30;
            static constexpr std::uintptr_t BorderBrush = 0x1B50;
            static constexpr std::uintptr_t BorderColor = 0x1C00;
            static constexpr std::uintptr_t BackgroundBrush = 0x1C20;
            static constexpr std::uintptr_t ChildBackgroundBrush = 0x1CD0;
            static constexpr std::uintptr_t WindowCornerRadius = 0x1D80;
            static constexpr std::uintptr_t BorderPadding = 0x1D84;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"MinimizeButtonStyle", 0x10, "StructProperty"},
            {"MaximizeButtonStyle", 0x3A0, "StructProperty"},
            {"RestoreButtonStyle", 0x730, "StructProperty"},
            {"EnterFullscreenButtonStyle", 0xAC0, "StructProperty"},
            {"ExitFullscreenButtonStyle", 0xE50, "StructProperty"},
            {"CloseButtonStyle", 0x11E0, "StructProperty"},
            {"TitleTextStyle", 0x1570, "StructProperty"},
            {"ActiveTitleBrush", 0x1850, "StructProperty"},
            {"InactiveTitleBrush", 0x1900, "StructProperty"},
            {"FlashTitleBrush", 0x19B0, "StructProperty"},
            {"BackgroundColor", 0x1A60, "StructProperty"},
            {"OutlineBrush", 0x1A80, "StructProperty"},
            {"OutlineColor", 0x1B30, "StructProperty"},
            {"BorderBrush", 0x1B50, "StructProperty"},
            {"BorderColor", 0x1C00, "StructProperty"},
            {"BackgroundBrush", 0x1C20, "StructProperty"},
            {"ChildBackgroundBrush", 0x1CD0, "StructProperty"},
            {"WindowCornerRadius", 0x1D80, "IntProperty"},
            {"BorderPadding", 0x1D84, "StructProperty"},
        }};
    };

    struct WrapButtonStyle
    {
        static constexpr std::string_view Name = "WrapButtonStyle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x0;
            static constexpr std::uintptr_t WrapButtonIndex = 0x10;
            static constexpr std::uintptr_t ExpandBrush = 0x20;
            static constexpr std::uintptr_t bHasDownArrow = 0xD0;
            static constexpr std::uintptr_t ComboButtonStyle = 0xE0;
            static constexpr std::uintptr_t bIncludeSeparator = 0x650;
            static constexpr std::uintptr_t SeparatorBrush = 0x660;
            static constexpr std::uintptr_t SeparatorThickness = 0x720;
            static constexpr std::uintptr_t SeparatorPadding = 0x728;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Padding", 0x0, "StructProperty"},
            {"WrapButtonIndex", 0x10, "IntProperty"},
            {"ExpandBrush", 0x20, "StructProperty"},
            {"bHasDownArrow", 0xD0, "BoolProperty"},
            {"ComboButtonStyle", 0xE0, "OptionalProperty"},
            {"bIncludeSeparator", 0x650, "BoolProperty"},
            {"SeparatorBrush", 0x660, "OptionalProperty"},
            {"SeparatorThickness", 0x720, "OptionalProperty"},
            {"SeparatorPadding", 0x728, "OptionalProperty"},
        }};
    };

}
