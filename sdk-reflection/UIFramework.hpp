#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UIFramework
{
    struct UIFrameworkButton
    {
        static constexpr std::string_view Name = "UIFrameworkButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0x128;
            static constexpr std::uintptr_t TriggeringInputAction = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slot", 0x128, "StructProperty"},
            {"TriggeringInputAction", 0x180, "SoftObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "GetContent",
            "HandleClick",
            "HandleHighlight",
            "HandleHover",
            "HandleUnhighlight",
            "HandleUnhover",
            "OnRep_Slot",
            "OnRep_TriggeringInputAction",
            "ServerClick",
            "ServerHighlight",
            "ServerUnhighlight",
            "SetContent",
        }};
    };

    struct UIFrameworkButtonWidget
    {
        static constexpr std::string_view Name = "UIFrameworkButtonWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "button";
        struct Offsets
        {
            static constexpr std::uintptr_t TriggeringInputAction = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TriggeringInputAction", 0x650, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "HandleButtonClicked",
        }};
    };

    struct UIFrameworkCanvasBox
    {
        static constexpr std::string_view Name = "UIFrameworkCanvasBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedSlotList = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedSlotList", 0xE0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddWidget",
            "RemoveWidget",
        }};
    };

    struct UIFrameworkCanvasBoxSlot
    {
        static constexpr std::string_view Name = "UIFrameworkCanvasBoxSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSlotBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Anchors = 0x28;
            static constexpr std::uintptr_t Offsets_ = 0x48;
            static constexpr std::uintptr_t Alignment = 0x58;
            static constexpr std::uintptr_t ZOrder = 0x68;
            static constexpr std::uintptr_t bSizeToContent = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Anchors", 0x28, "StructProperty"},
            {"Offsets", 0x48, "StructProperty"},
            {"Alignment", 0x58, "StructProperty"},
            {"ZOrder", 0x68, "IntProperty"},
            {"bSizeToContent", 0x6C, "BoolProperty"},
        }};
    };

    struct UIFrameworkCanvasBoxSlotList
    {
        static constexpr std::string_view Name = "UIFrameworkCanvasBoxSlotList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x48;
            static constexpr std::uintptr_t Owner = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slots", 0x48, "ArrayProperty"},
            {"Owner", 0x58, "ObjectProperty"},
        }};
    };

    struct UIFrameworkClickEventArgument
    {
        static constexpr std::string_view Name = "UIFrameworkClickEventArgument";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSimpleEventArgument";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x0;
            static constexpr std::uintptr_t Sender = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerController", 0x0, "ObjectProperty"},
            {"Sender", 0x8, "ObjectProperty"},
        }};
    };

    struct UIFrameworkColorBlock
    {
        static constexpr std::string_view Name = "UIFrameworkColorBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Color = 0xE0;
            static constexpr std::uintptr_t DesiredSize = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Color", 0xE0, "StructProperty"},
            {"DesiredSize", 0xF0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetColor",
            "GetDesiredSize",
            "OnRep_Color",
            "OnRep_DesiredSize",
            "SetColor",
            "SetDesiredSize",
        }};
    };

    struct UIFrameworkCustomButtonWidget
    {
        static constexpr std::string_view Name = "UIFrameworkCustomButtonWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkButtonWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalDefaultUMGWidget = 0x6A0;
            static constexpr std::uintptr_t DefaultContentWidgetClass = 0x6A8;
            static constexpr std::uintptr_t OnButtonClicked = 0x6D8;
            static constexpr std::uintptr_t OnButtonHighlight = 0x6E8;
            static constexpr std::uintptr_t OnButtonUnhighlight = 0x6F8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LocalDefaultUMGWidget", 0x6A0, "ObjectProperty"},
            {"DefaultContentWidgetClass", 0x6A8, "SoftClassProperty"},
            {"OnButtonClicked", 0x6D8, "MulticastInlineDelegateProperty"},
            {"OnButtonHighlight", 0x6E8, "MulticastInlineDelegateProperty"},
            {"OnButtonUnhighlight", 0x6F8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "HandleButtonClick",
            "HandleButtonHighlight",
            "HandleButtonHover",
            "HandleButtonUnhighlight",
            "HandleButtonUnhover",
        }};
    };

    struct UIFrameworkGameLayerSlot
    {
        static constexpr std::string_view Name = "UIFrameworkGameLayerSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSlotBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ZOrder = 0x28;
            static constexpr std::uintptr_t InputMode = 0x2C;
            static constexpr std::uintptr_t Type = 0x2D;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ZOrder", 0x28, "IntProperty"},
            {"InputMode", 0x2C, "EnumProperty"},
            {"Type", 0x2D, "EnumProperty"},
        }};
    };

    struct UIFrameworkGameLayerSlotList
    {
        static constexpr std::string_view Name = "UIFrameworkGameLayerSlotList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x48;
            static constexpr std::uintptr_t Owner = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entries", 0x48, "ArrayProperty"},
            {"Owner", 0x58, "ObjectProperty"},
        }};
    };

    struct UIFrameworkGameViewportPresenter
    {
        static constexpr std::string_view Name = "UIFrameworkGameViewportPresenter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkPresenter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UIFrameworkHighlightEventArgument
    {
        static constexpr std::string_view Name = "UIFrameworkHighlightEventArgument";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSimpleEventArgument";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x0;
            static constexpr std::uintptr_t Sender = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerController", 0x0, "ObjectProperty"},
            {"Sender", 0x8, "ObjectProperty"},
        }};
    };

    struct UIFrameworkImageBlock
    {
        static constexpr std::string_view Name = "UIFrameworkImageBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0xE0;
            static constexpr std::uintptr_t bWaitForResourceToBeLoaded = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Data", 0xE0, "StructProperty"},
            {"bWaitForResourceToBeLoaded", 0x120, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "GeResourceObject",
            "GetDesiredSize",
            "GetTiling",
            "GetTint",
            "OnRep_Data",
            "SetDesiredSize",
            "SetMaterial",
            "SetTexture",
            "SetTiling",
            "SetTint",
        }};
    };

    struct UIFrameworkImageBlockData
    {
        static constexpr std::string_view Name = "UIFrameworkImageBlockData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tint = 0x0;
            static constexpr std::uintptr_t ResourceObject = 0x10;
            static constexpr std::uintptr_t DesiredSize = 0x30;
            static constexpr std::uintptr_t Tiling = 0x38;
            static constexpr std::uintptr_t bUseTextureSize = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Tint", 0x0, "StructProperty"},
            {"ResourceObject", 0x10, "SoftObjectProperty"},
            {"DesiredSize", 0x30, "StructProperty"},
            {"Tiling", 0x38, "ByteProperty"},
            {"bUseTextureSize", 0x39, "BoolProperty"},
        }};
    };

    struct UIFrameworkLocalSettings
    {
        static constexpr std::string_view Name = "UIFrameworkLocalSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorResource = 0x30;
            static constexpr std::uintptr_t LoadingResource = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ErrorResource", 0x30, "SoftObjectProperty"},
            {"LoadingResource", 0x50, "SoftObjectProperty"},
        }};
    };

    struct UIFrameworkOverlay
    {
        static constexpr std::string_view Name = "UIFrameworkOverlay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedSlotList = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedSlotList", 0xE0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddWidget",
            "RemoveWidget",
        }};
    };

    struct UIFrameworkOverlaySlot
    {
        static constexpr std::string_view Name = "UIFrameworkOverlaySlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSlotBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x28;
            static constexpr std::uintptr_t HorizontalAlignment = 0x38;
            static constexpr std::uintptr_t VerticalAlignment = 0x39;
            static constexpr std::uintptr_t Index = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Padding", 0x28, "StructProperty"},
            {"HorizontalAlignment", 0x38, "ByteProperty"},
            {"VerticalAlignment", 0x39, "ByteProperty"},
            {"Index", 0x3C, "IntProperty"},
        }};
    };

    struct UIFrameworkOverlaySlotList
    {
        static constexpr std::string_view Name = "UIFrameworkOverlaySlotList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x48;
            static constexpr std::uintptr_t Owner = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slots", 0x48, "ArrayProperty"},
            {"Owner", 0x58, "ObjectProperty"},
        }};
    };

    struct UIFrameworkParentWidget
    {
        static constexpr std::string_view Name = "UIFrameworkParentWidget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Parent", 0x0, "ObjectProperty"},
        }};
    };

    struct UIFrameworkPlayerComponent
    {
        static constexpr std::string_view Name = "UIFrameworkPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RootList = 0xC8;
            static constexpr std::uintptr_t WidgetTree = 0x128;
            static constexpr std::uintptr_t Presenter = 0x1F8;
            static constexpr std::uintptr_t NetReplicationPending = 0x200;
            static constexpr std::uintptr_t AddPending = 0x210;
            static constexpr std::uintptr_t WidgetToFocus = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RootList", 0xC8, "StructProperty"},
            {"WidgetTree", 0x128, "StructProperty"},
            {"Presenter", 0x1F8, "ObjectProperty"},
            {"NetReplicationPending", 0x200, "SetProperty"},
            {"AddPending", 0x210, "SetProperty"},
            {"WidgetToFocus", 0x238, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddWidget",
            "OnRep_WidgetToFocus",
            "RemoveWidget",
            "ServerRemoveWidgetRootFromTree",
        }};
    };

    struct UIFrameworkPresenter
    {
        static constexpr std::string_view Name = "UIFrameworkPresenter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UIFrameworkSafeZoneBox
    {
        static constexpr std::string_view Name = "UIFrameworkSafeZoneBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Slot = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slot", 0xE0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetContent",
            "SetContent",
        }};
    };

    struct UIFrameworkSimpleEventArgument
    {
        static constexpr std::string_view Name = "UIFrameworkSimpleEventArgument";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x0;
            static constexpr std::uintptr_t Sender = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerController", 0x0, "ObjectProperty"},
            {"Sender", 0x8, "ObjectProperty"},
        }};
    };

    struct UIFrameworkSimpleSlot
    {
        static constexpr std::string_view Name = "UIFrameworkSimpleSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSlotBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x28;
            static constexpr std::uintptr_t HorizontalAlignment = 0x38;
            static constexpr std::uintptr_t VerticalAlignment = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Padding", 0x28, "StructProperty"},
            {"HorizontalAlignment", 0x38, "ByteProperty"},
            {"VerticalAlignment", 0x39, "ByteProperty"},
        }};
    };

    struct UIFrameworkSlotBase
    {
        static constexpr std::string_view Name = "UIFrameworkSlotBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Widget = 0x10;
            static constexpr std::uintptr_t WidgetId = 0x18;
            static constexpr std::uintptr_t LocalPreviousWidgetId = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Widget", 0x10, "ObjectProperty"},
            {"WidgetId", 0x18, "StructProperty"},
            {"LocalPreviousWidgetId", 0x20, "StructProperty"},
        }};
    };

    struct UIFrameworkStackBox
    {
        static constexpr std::string_view Name = "UIFrameworkStackBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t orientation = 0xE0;
            static constexpr std::uintptr_t ReplicatedSlotList = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"orientation", 0xE0, "ByteProperty"},
            {"ReplicatedSlotList", 0xE8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "AddWidget",
            "OnRep_Orientation",
            "RemoveWidget",
        }};
    };

    struct UIFrameworkStackBoxSlot
    {
        static constexpr std::string_view Name = "UIFrameworkStackBoxSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSlotBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalAlignment = 0x28;
            static constexpr std::uintptr_t VerticalAlignment = 0x29;
            static constexpr std::uintptr_t Padding = 0x2C;
            static constexpr std::uintptr_t Size = 0x3C;
            static constexpr std::uintptr_t Index = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HorizontalAlignment", 0x28, "ByteProperty"},
            {"VerticalAlignment", 0x29, "ByteProperty"},
            {"Padding", 0x2C, "StructProperty"},
            {"Size", 0x3C, "StructProperty"},
            {"Index", 0x44, "IntProperty"},
        }};
    };

    struct UIFrameworkStackBoxSlotList
    {
        static constexpr std::string_view Name = "UIFrameworkStackBoxSlotList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x48;
            static constexpr std::uintptr_t Owner = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slots", 0x48, "ArrayProperty"},
            {"Owner", 0x58, "ObjectProperty"},
        }};
    };

    struct UIFrameworkTextBase
    {
        static constexpr std::string_view Name = "UIFrameworkTextBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0xE0;
            static constexpr std::uintptr_t Message = 0xF0;
            static constexpr std::uintptr_t TextColor = 0x120;
            static constexpr std::uintptr_t TextSize = 0x130;
            static constexpr std::uintptr_t AutoWrap = 0x134;
            static constexpr std::uintptr_t WrapWidth = 0x138;
            static constexpr std::uintptr_t WrappingPolicy = 0x13C;
            static constexpr std::uintptr_t Justification = 0x13D;
            static constexpr std::uintptr_t OverflowPolicy = 0x13E;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Text", 0xE0, "TextProperty"},
            {"Message", 0xF0, "StructProperty"},
            {"TextColor", 0x120, "StructProperty"},
            {"TextSize", 0x130, "FloatProperty"},
            {"AutoWrap", 0x134, "BoolProperty"},
            {"WrapWidth", 0x138, "FloatProperty"},
            {"WrappingPolicy", 0x13C, "EnumProperty"},
            {"Justification", 0x13D, "ByteProperty"},
            {"OverflowPolicy", 0x13E, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 23> FunctionNames{{
            "GetAutoWrap",
            "GetJustification",
            "GetOverflowPolicy",
            "GetText",
            "GetTextColor",
            "GetTextSize",
            "GetWrapWidth",
            "GetWrappingPolicy",
            "OnRep_AutoWrap",
            "OnRep_Justification",
            "OnRep_Message",
            "OnRep_OverflowPolicy",
            "OnRep_TextColor",
            "OnRep_TextSize",
            "OnRep_WrapWidth",
            "OnRep_WrappingPolicy",
            "SetAutoWrap",
            "SetJustification",
            "SetOverflowPolicy",
            "SetTextColor",
            "SetTextSize",
            "SetWrapWidth",
            "SetWrappingPolicy",
        }};
    };

    struct UIFrameworkTextBlock
    {
        static constexpr std::string_view Name = "UIFrameworkTextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkTextBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ShadowOffset = 0x140;
            static constexpr std::uintptr_t ShadowColor = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShadowOffset", 0x140, "StructProperty"},
            {"ShadowColor", 0x148, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetShadowColor",
            "GetShadowOffset",
            "OnRep_ShadowColor",
            "OnRep_ShadowOffset",
            "SetShadowColor",
            "SetShadowOffset",
        }};
    };

    struct UIFrameworkTouchActionWrapperWidget
    {
        static constexpr std::string_view Name = "UIFrameworkTouchActionWrapperWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkButtonWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TriggeringInputAction = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TriggeringInputAction", 0x650, "ObjectProperty"},
        }};
    };

    struct UIFrameworkUnhighlightEventArgument
    {
        static constexpr std::string_view Name = "UIFrameworkUnhighlightEventArgument";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSimpleEventArgument";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x0;
            static constexpr std::uintptr_t Sender = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerController", 0x0, "ObjectProperty"},
            {"Sender", 0x8, "ObjectProperty"},
        }};
    };

    struct UIFrameworkUserWidget
    {
        static constexpr std::string_view Name = "UIFrameworkUserWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedNamedSlotList = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedNamedSlotList", 0xE0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetNamedSlot",
            "SetNamedSlot",
            "SetWidgetClass",
        }};
    };

    struct UIFrameworkUserWidgetNamedSlot
    {
        static constexpr std::string_view Name = "UIFrameworkUserWidgetNamedSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "UIFrameworkSlotBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlotName", 0x28, "NameProperty"},
        }};
    };

    struct UIFrameworkUserWidgetNamedSlotList
    {
        static constexpr std::string_view Name = "UIFrameworkUserWidgetNamedSlotList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x48;
            static constexpr std::uintptr_t Owner = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Slots", 0x48, "ArrayProperty"},
            {"Owner", 0x58, "ObjectProperty"},
        }};
    };

    struct UIFrameworkWidget
    {
        static constexpr std::string_view Name = "UIFrameworkWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x68;
            static constexpr std::uintptr_t Visibility = 0x69;
            static constexpr std::uintptr_t bIsHitTestVisible = 0x6A;
            static constexpr std::uintptr_t RenderOpacity = 0x70;
            static constexpr std::uintptr_t WidgetClass = 0x78;
            static constexpr std::uintptr_t ID = 0x98;
            static constexpr std::uintptr_t AuthorityWrapper = 0xA0;
            static constexpr std::uintptr_t AuthorityParent = 0xB8;
            static constexpr std::uintptr_t LocalUMGWidget = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bIsEnabled", 0x68, "BoolProperty"},
            {"Visibility", 0x69, "EnumProperty"},
            {"bIsHitTestVisible", 0x6A, "BoolProperty"},
            {"RenderOpacity", 0x70, "DoubleProperty"},
            {"WidgetClass", 0x78, "SoftClassProperty"},
            {"ID", 0x98, "StructProperty"},
            {"AuthorityWrapper", 0xA0, "InterfaceProperty"},
            {"AuthorityParent", 0xB8, "StructProperty"},
            {"LocalUMGWidget", 0xC8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnRep_IsEnabled",
            "OnRep_RenderOpacity",
            "OnRep_Visibility",
        }};
    };

    struct UIFrameworkWidgetId
    {
        static constexpr std::string_view Name = "UIFrameworkWidgetId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Key", 0x0, "Int64Property"},
        }};
    };

    struct UIFrameworkWidgetOwner
    {
        static constexpr std::string_view Name = "UIFrameworkWidgetOwner";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerController = 0x0;
            static constexpr std::uintptr_t GameInstance = 0x8;
            static constexpr std::uintptr_t World = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlayerController", 0x0, "ObjectProperty"},
            {"GameInstance", 0x8, "ObjectProperty"},
            {"World", 0x10, "ObjectProperty"},
        }};
    };

    struct UIFrameworkWidgetToFocus
    {
        static constexpr std::string_view Name = "UIFrameworkWidgetToFocus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t ReplicationCounter = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ID", 0x0, "StructProperty"},
            {"ReplicationCounter", 0x8, "IntProperty"},
        }};
    };

    struct UIFrameworkWidgetTree
    {
        static constexpr std::string_view Name = "UIFrameworkWidgetTree";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x90;
            static constexpr std::uintptr_t ReplicatedOwner = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entries", 0x90, "ArrayProperty"},
            {"ReplicatedOwner", 0xA0, "ObjectProperty"},
        }};
    };

    struct UIFrameworkWidgetTreeEntry
    {
        static constexpr std::string_view Name = "UIFrameworkWidgetTreeEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x10;
            static constexpr std::uintptr_t Child = 0x18;
            static constexpr std::uintptr_t ParentId = 0x20;
            static constexpr std::uintptr_t ChildId = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Parent", 0x10, "ObjectProperty"},
            {"Child", 0x18, "ObjectProperty"},
            {"ParentId", 0x20, "StructProperty"},
            {"ChildId", 0x28, "StructProperty"},
        }};
    };

    struct UIFrameworkWidgetWrapperInterface
    {
        static constexpr std::string_view Name = "UIFrameworkWidgetWrapperInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
