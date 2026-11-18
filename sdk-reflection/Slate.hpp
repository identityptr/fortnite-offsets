#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Slate
{
    struct Anchors
    {
        static constexpr std::string_view Name = "Anchors";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Minimum = 0x0;
            static constexpr std::uintptr_t Maximum = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Minimum", 0x0, "StructProperty"},
            {"Maximum", 0x10, "StructProperty"},
        }};
    };

    struct ButtonWidgetStyle
    {
        static constexpr std::string_view Name = "ButtonWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ButtonStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ButtonStyle", 0x30, "StructProperty"},
        }};
    };

    struct CharRange
    {
        static constexpr std::string_view Name = "CharRange";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t First = 0x0;
            static constexpr std::uintptr_t Last = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"First", 0x0, "UInt16Property"},
            {"Last", 0x2, "UInt16Property"},
        }};
    };

    struct CharRangeList
    {
        static constexpr std::string_view Name = "CharRangeList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Ranges = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Ranges", 0x0, "ArrayProperty"},
        }};
    };

    struct CheckBoxWidgetStyle
    {
        static constexpr std::string_view Name = "CheckBoxWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckBoxStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CheckBoxStyle", 0x30, "StructProperty"},
        }};
    };

    struct ComboBoxWidgetStyle
    {
        static constexpr std::string_view Name = "ComboBoxWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ComboBoxStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComboBoxStyle", 0x30, "StructProperty"},
        }};
    };

    struct ComboButtonWidgetStyle
    {
        static constexpr std::string_view Name = "ComboButtonWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ComboButtonStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComboButtonStyle", 0x30, "StructProperty"},
        }};
    };

    struct CustomizedToolMenu
    {
        static constexpr std::string_view Name = "CustomizedToolMenu";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ToolMenuProfile";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryOrder = 0x98;
            static constexpr std::uintptr_t SectionOrder = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntryOrder", 0x98, "MapProperty"},
            {"SectionOrder", 0xA8, "ArrayProperty"},
        }};
    };

    struct CustomizedToolMenuEntry
    {
        static constexpr std::string_view Name = "CustomizedToolMenuEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Visibility = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Visibility", 0x0, "EnumProperty"},
        }};
    };

    struct CustomizedToolMenuNameArray
    {
        static constexpr std::string_view Name = "CustomizedToolMenuNameArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Names = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Names", 0x0, "ArrayProperty"},
        }};
    };

    struct CustomizedToolMenuSection
    {
        static constexpr std::string_view Name = "CustomizedToolMenuSection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Visibility = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Visibility", 0x0, "EnumProperty"},
        }};
    };

    struct EditableTextBoxWidgetStyle
    {
        static constexpr std::string_view Name = "EditableTextBoxWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EditableTextBoxStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EditableTextBoxStyle", 0x30, "StructProperty"},
        }};
    };

    struct EditableTextWidgetStyle
    {
        static constexpr std::string_view Name = "EditableTextWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EditableTextStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EditableTextStyle", 0x30, "StructProperty"},
        }};
    };

    struct InputChord
    {
        static constexpr std::string_view Name = "InputChord";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t bAlt = 0x18;
            static constexpr std::uintptr_t bCmd = 0x18;
            static constexpr std::uintptr_t bCtrl = 0x18;
            static constexpr std::uintptr_t bShift = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Key", 0x0, "StructProperty"},
            {"bAlt", 0x18, "BoolProperty"},
            {"bCmd", 0x18, "BoolProperty"},
            {"bCtrl", 0x18, "BoolProperty"},
            {"bShift", 0x18, "BoolProperty"},
        }};
    };

    struct InputPreprocessorRegistrationKey
    {
        static constexpr std::string_view Name = "InputPreprocessorRegistrationKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
            static constexpr std::uintptr_t Priority = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Type", 0x0, "EnumProperty"},
            {"Priority", 0x4, "IntProperty"},
        }};
    };

    struct ProgressWidgetStyle
    {
        static constexpr std::string_view Name = "ProgressWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProgressBarStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProgressBarStyle", 0x30, "StructProperty"},
        }};
    };

    struct ScrollBarWidgetStyle
    {
        static constexpr std::string_view Name = "ScrollBarWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ScrollBarStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScrollBarStyle", 0x30, "StructProperty"},
        }};
    };

    struct ScrollBoxWidgetStyle
    {
        static constexpr std::string_view Name = "ScrollBoxWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ScrollBoxStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScrollBoxStyle", 0x30, "StructProperty"},
        }};
    };

    struct SlateSettings
    {
        static constexpr std::string_view Name = "SlateSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bExplicitCanvasChildZOrder = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bExplicitCanvasChildZOrder", 0x28, "BoolProperty"},
        }};
    };

    struct SpinBoxWidgetStyle
    {
        static constexpr std::string_view Name = "SpinBoxWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SpinBoxStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpinBoxStyle", 0x30, "StructProperty"},
        }};
    };

    struct TextBlockWidgetStyle
    {
        static constexpr std::string_view Name = "TextBlockWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TextBlockStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TextBlockStyle", 0x30, "StructProperty"},
        }};
    };

    struct ToolMenuBase
    {
        static constexpr std::string_view Name = "ToolMenuBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ToolMenuProfile
    {
        static constexpr std::string_view Name = "ToolMenuProfile";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Entries = 0x8;
            static constexpr std::uintptr_t Sections = 0x18;
            static constexpr std::uintptr_t SuppressExtenders = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Entries", 0x8, "MapProperty"},
            {"Sections", 0x18, "MapProperty"},
            {"SuppressExtenders", 0x28, "ArrayProperty"},
        }};
    };

    struct VirtualKeyboardOptions
    {
        static constexpr std::string_view Name = "VirtualKeyboardOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableAutocorrect = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnableAutocorrect", 0x0, "BoolProperty"},
        }};
    };

}
