#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SlateIM
{
    struct SlateIMBorderParams
    {
        static constexpr std::string_view Name = "SlateIMBorderParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t orientation = 0x0;
            static constexpr std::uintptr_t bAbsorbMouse = 0x1;
            static constexpr std::uintptr_t ContentPadding = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"orientation", 0x0, "ByteProperty"},
            {"bAbsorbMouse", 0x1, "BoolProperty"},
            {"ContentPadding", 0x4, "StructProperty"},
        }};
    };

    struct SlateIMButtonParams
    {
        static constexpr std::string_view Name = "SlateIMButtonParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
        }};
    };

    struct SlateIMCheckBoxParams
    {
        static constexpr std::string_view Name = "SlateIMCheckBoxParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Label", 0x0, "StrProperty"},
        }};
    };

    struct SlateIMCollapsiblePanelParams
    {
        static constexpr std::string_view Name = "SlateIMCollapsiblePanelParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bFillSlot = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bFillSlot", 0x0, "BoolProperty"},
        }};
    };

    struct SlateIMComboBoxParams
    {
        static constexpr std::string_view Name = "SlateIMComboBoxParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bForceRefresh = 0x0;
            static constexpr std::uintptr_t bSearchable = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bForceRefresh", 0x0, "BoolProperty"},
            {"bSearchable", 0x1, "BoolProperty"},
        }};
    };

    struct SlateIMEditableTextParams
    {
        static constexpr std::string_view Name = "SlateIMEditableTextParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t HintText = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HintText", 0x0, "StrProperty"},
        }};
    };

    struct SlateIMGraphLinePointsParams
    {
        static constexpr std::string_view Name = "SlateIMGraphLinePointsParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t XViewRange = 0x0;
            static constexpr std::uintptr_t YViewRange = 0x20;
            static constexpr std::uintptr_t LineColor = 0x40;
            static constexpr std::uintptr_t LineThickness = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"XViewRange", 0x0, "StructProperty"},
            {"YViewRange", 0x20, "StructProperty"},
            {"LineColor", 0x40, "StructProperty"},
            {"LineThickness", 0x50, "FloatProperty"},
        }};
    };

    struct SlateIMGraphLineValuesParams
    {
        static constexpr std::string_view Name = "SlateIMGraphLineValuesParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewRange = 0x0;
            static constexpr std::uintptr_t LineColor = 0x20;
            static constexpr std::uintptr_t LineThickness = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ViewRange", 0x0, "StructProperty"},
            {"LineColor", 0x20, "StructProperty"},
            {"LineThickness", 0x30, "FloatProperty"},
        }};
    };

    struct SlateIMIcon
    {
        static constexpr std::string_view Name = "SlateIMIcon";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StyleSetName = 0x0;
            static constexpr std::uintptr_t StyleName = 0x4;
            static constexpr std::uintptr_t SmallStyleName = 0x8;
            static constexpr std::uintptr_t StatusOverlayStyleName = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StyleSetName", 0x0, "NameProperty"},
            {"StyleName", 0x4, "NameProperty"},
            {"SmallStyleName", 0x8, "NameProperty"},
            {"StatusOverlayStyleName", 0xC, "NameProperty"},
        }};
    };

    struct SlateIMImageParams
    {
        static constexpr std::string_view Name = "SlateIMImageParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x0;
            static constexpr std::uintptr_t DesiredSize = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ColorAndOpacity", 0x0, "StructProperty"},
            {"DesiredSize", 0x18, "StructProperty"},
        }};
    };

    struct SlateIMMenuButtonParams
    {
        static constexpr std::string_view Name = "SlateIMMenuButtonParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ToolTipText = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ToolTipText", 0x0, "StrProperty"},
        }};
    };

    struct SlateIMModalDialogParams
    {
        static constexpr std::string_view Name = "SlateIMModalDialogParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Category = 0x0;
            static constexpr std::uintptr_t Title = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Category", 0x0, "EnumProperty"},
            {"Title", 0x8, "StrProperty"},
        }};
    };

    struct SlateIMPopUpParams
    {
        static constexpr std::string_view Name = "SlateIMPopUpParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t orientation = 0x0;
            static constexpr std::uintptr_t bAbsorbMouse = 0x1;
            static constexpr std::uintptr_t ContentPadding = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"orientation", 0x0, "ByteProperty"},
            {"bAbsorbMouse", 0x1, "BoolProperty"},
            {"ContentPadding", 0x4, "StructProperty"},
        }};
    };

    struct SlateIMProgressBarParams
    {
        static constexpr std::string_view Name = "SlateIMProgressBarParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SlateIMScrollBoxParams
    {
        static constexpr std::string_view Name = "SlateIMScrollBoxParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t orientation = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"orientation", 0x0, "ByteProperty"},
        }};
    };

    struct SlateIMSelectionListParams
    {
        static constexpr std::string_view Name = "SlateIMSelectionListParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bForceRefresh = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bForceRefresh", 0x0, "BoolProperty"},
        }};
    };

    struct SlateIMSliderParams
    {
        static constexpr std::string_view Name = "SlateIMSliderParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x4;
            static constexpr std::uintptr_t Step = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"min", 0x0, "FloatProperty"},
            {"max", 0x4, "FloatProperty"},
            {"Step", 0x8, "FloatProperty"},
        }};
    };

    struct SlateIMSpinBoxDoubleParams
    {
        static constexpr std::string_view Name = "SlateIMSpinBoxDoubleParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "OptionalProperty"},
            {"max", 0x10, "OptionalProperty"},
        }};
    };

    struct SlateIMSpinBoxFloatParams
    {
        static constexpr std::string_view Name = "SlateIMSpinBoxFloatParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "OptionalProperty"},
            {"max", 0x8, "OptionalProperty"},
        }};
    };

    struct SlateIMSpinBoxInt32Params
    {
        static constexpr std::string_view Name = "SlateIMSpinBoxInt32Params";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x0;
            static constexpr std::uintptr_t max = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x0, "OptionalProperty"},
            {"max", 0x8, "OptionalProperty"},
        }};
    };

    struct SlateIMTabParams
    {
        static constexpr std::string_view Name = "SlateIMTabParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TabIcon = 0x0;
            static constexpr std::uintptr_t TabTitle = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TabIcon", 0x0, "StructProperty"},
            {"TabTitle", 0x10, "TextProperty"},
        }};
    };

    struct SlateIMTableColumnParams
    {
        static constexpr std::string_view Name = "SlateIMTableColumnParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Label = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Label", 0x0, "StrProperty"},
        }};
    };

    struct SlateIMTableParams
    {
        static constexpr std::string_view Name = "SlateIMTableParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionMode = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectionMode", 0x0, "ByteProperty"},
        }};
    };

    struct SlateIMTableRowChildrenParams
    {
        static constexpr std::string_view Name = "SlateIMTableRowChildrenParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentRowId = 0x0;
            static constexpr std::uintptr_t bDefaultExpanded = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParentRowId", 0x0, "IntProperty"},
            {"bDefaultExpanded", 0x4, "BoolProperty"},
        }};
    };

    struct SlateIMTextParams
    {
        static constexpr std::string_view Name = "SlateIMTextParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Color = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Color", 0x0, "StructProperty"},
        }};
    };

    struct SlateIMViewportParams
    {
        static constexpr std::string_view Name = "SlateIMViewportParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Layout = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Layout", 0x0, "StructProperty"},
        }};
    };

    struct SlateIMViewportRootLayout
    {
        static constexpr std::string_view Name = "SlateIMViewportRootLayout";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Anchors = 0x0;
            static constexpr std::uintptr_t Offset = 0x20;
            static constexpr std::uintptr_t Alignment = 0x28;
            static constexpr std::uintptr_t Size = 0x30;
            static constexpr std::uintptr_t ZOrder = 0x3C;
            static constexpr std::uintptr_t Scale = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Anchors", 0x0, "StructProperty"},
            {"Offset", 0x20, "StructProperty"},
            {"Alignment", 0x28, "StructProperty"},
            {"Size", 0x30, "OptionalProperty"},
            {"ZOrder", 0x3C, "IntProperty"},
            {"Scale", 0x40, "FloatProperty"},
        }};
    };

    struct SlateIMWindowParams
    {
        static constexpr std::string_view Name = "SlateIMWindowParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WindowTitle = 0x0;
            static constexpr std::uintptr_t WindowSize = 0x10;
            static constexpr std::uintptr_t bShouldReopen = 0x18;
            static constexpr std::uintptr_t bAlwaysOnTop = 0x19;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WindowTitle", 0x0, "StrProperty"},
            {"WindowSize", 0x10, "StructProperty"},
            {"bShouldReopen", 0x18, "BoolProperty"},
            {"bAlwaysOnTop", 0x19, "BoolProperty"},
        }};
    };

}
