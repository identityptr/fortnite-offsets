#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseFortniteUI
{
    struct VerseFortnitePlayspaceHUDController
    {
        static constexpr std::string_view Name = "VerseFortnitePlayspaceHUDController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseFortnitePlayspaceExtensionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientVisibilityOverrides = 0x38;
            static constexpr std::uintptr_t VisibilityData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClientVisibilityOverrides", 0x38, "MapProperty"},
            {"VisibilityData", 0x48, "StructProperty"},
        }};
    };

    struct VerseFortniteUIActivableWidgetBase
    {
        static constexpr std::string_view Name = "VerseFortniteUIActivableWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MainSlot = 0x4A8;
            static constexpr std::uintptr_t UIFrameworkPlayerComponent = 0x4B0;
            static constexpr std::uintptr_t ProxyActivatableWidget = 0x4BC;
            static constexpr std::uintptr_t MainMenuInputRowHandle = 0x4C8;
            static constexpr std::uintptr_t HudToDeactivateOnInitialization = 0x4D8;
            static constexpr std::uintptr_t UIMappingPriority = 0x4E8;
            static constexpr std::uintptr_t UIInputMappingContext = 0x4F0;
            static constexpr std::uintptr_t CachedMainSlotContent = 0x510;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MainSlot", 0x4A8, "ObjectProperty"},
            {"UIFrameworkPlayerComponent", 0x4B0, "WeakObjectProperty"},
            {"ProxyActivatableWidget", 0x4BC, "WeakObjectProperty"},
            {"MainMenuInputRowHandle", 0x4C8, "StructProperty"},
            {"HudToDeactivateOnInitialization", 0x4D8, "ArrayProperty"},
            {"UIMappingPriority", 0x4E8, "IntProperty"},
            {"UIInputMappingContext", 0x4F0, "SoftObjectProperty"},
            {"CachedMainSlotContent", 0x510, "WeakObjectProperty"},
        }};
    };

    struct VerseFortniteUIAllowedConversionLibrary
    {
        static constexpr std::string_view Name = "VerseFortniteUIAllowedConversionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseFortniteUIConversionLibrary
    {
        static constexpr std::string_view Name = "VerseFortniteUIConversionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseFortniteUIAllowedConversionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseFortniteUIFrameworkButton_Base
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkButton_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0xE0;
            static constexpr std::uintptr_t Message = 0xF0;
            static constexpr std::uintptr_t TriggeringInputAction = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Text", 0xE0, "TextProperty"},
            {"Message", 0xF0, "StructProperty"},
            {"TriggeringInputAction", 0x120, "SoftObjectProperty"},
        }};
    };

    struct VerseFortniteUIFrameworkButton_Loud
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkButton_Loud";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseFortniteUIFrameworkButton_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0xE0;
            static constexpr std::uintptr_t Message = 0xF0;
            static constexpr std::uintptr_t TriggeringInputAction = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Text", 0xE0, "TextProperty"},
            {"Message", 0xF0, "StructProperty"},
            {"TriggeringInputAction", 0x120, "SoftObjectProperty"},
        }};
    };

    struct VerseFortniteUIFrameworkButton_Quiet
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkButton_Quiet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseFortniteUIFrameworkButton_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0xE0;
            static constexpr std::uintptr_t Message = 0xF0;
            static constexpr std::uintptr_t TriggeringInputAction = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Text", 0xE0, "TextProperty"},
            {"Message", 0xF0, "StructProperty"},
            {"TriggeringInputAction", 0x120, "SoftObjectProperty"},
        }};
    };

    struct VerseFortniteUIFrameworkButton_Regular
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkButton_Regular";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseFortniteUIFrameworkButton_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0xE0;
            static constexpr std::uintptr_t Message = 0xF0;
            static constexpr std::uintptr_t TriggeringInputAction = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Text", 0xE0, "TextProperty"},
            {"Message", 0xF0, "StructProperty"},
            {"TriggeringInputAction", 0x120, "SoftObjectProperty"},
        }};
    };

    struct VerseFortniteUIFrameworkEditableText
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkEditableText";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseFortniteUIFrameworkText_Base";
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
    };

    struct VerseFortniteUIFrameworkEditableTextBox
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkEditableTextBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseFortniteUIFrameworkText_Base";
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
    };

    struct VerseFortniteUIFrameworkSlider
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0xE0;
            static constexpr std::uintptr_t MinValue = 0xEC;
            static constexpr std::uintptr_t MaxValue = 0xF0;
            static constexpr std::uintptr_t StepSize = 0xF4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Value", 0xE0, "StructProperty"},
            {"MinValue", 0xEC, "FloatProperty"},
            {"MaxValue", 0xF0, "FloatProperty"},
            {"StepSize", 0xF4, "FloatProperty"},
        }};
    };

    struct VerseFortniteUIFrameworkTextBlock
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkTextBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkTextBlock";
        struct Offsets
        {
            static constexpr std::uintptr_t ShadowOffset = 0x140;
            static constexpr std::uintptr_t ShadowColor = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShadowOffset", 0x140, "StructProperty"},
            {"ShadowColor", 0x148, "StructProperty"},
        }};
    };

    struct VerseFortniteUIFrameworkText_Base
    {
        static constexpr std::string_view Name = "VerseFortniteUIFrameworkText_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkTextBase";
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
    };

    struct VerseFortniteUINamedSlot
    {
        static constexpr std::string_view Name = "VerseFortniteUINamedSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NamedSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};
    };

    struct VerseFortniteUIOverlay
    {
        static constexpr std::string_view Name = "VerseFortniteUIOverlay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Overlay";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Slots", 0x168, "ArrayProperty"},
        }};
    };

    struct VerseFortniteUIOverlaySlot
    {
        static constexpr std::string_view Name = "VerseFortniteUIOverlaySlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OverlaySlot";
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
    };

    struct VerseFortniteUIPresenter
    {
        static constexpr std::string_view Name = "VerseFortniteUIPresenter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkGameViewportPresenter";
        struct Offsets
        {
            static constexpr std::uintptr_t Pending = 0x38;
            static constexpr std::uintptr_t Created = 0x48;
            static constexpr std::uintptr_t PlayerGameViewport = 0x58;
            static constexpr std::uintptr_t ContentGameViewport = 0x60;
            static constexpr std::uintptr_t PopupContainer = 0x68;
            static constexpr std::uintptr_t WidgetForDynamicUI = 0x78;
            static constexpr std::uintptr_t ActionDomainForDynamicUI = 0x98;
            static constexpr std::uintptr_t ProxyActivatableWidget = 0xB8;
            static constexpr std::uintptr_t VerseUIScene = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Pending", 0x38, "ArrayProperty"},
            {"Created", 0x48, "ArrayProperty"},
            {"PlayerGameViewport", 0x58, "ObjectProperty"},
            {"ContentGameViewport", 0x60, "ObjectProperty"},
            {"PopupContainer", 0x68, "ObjectProperty"},
            {"WidgetForDynamicUI", 0x78, "SoftClassProperty"},
            {"ActionDomainForDynamicUI", 0x98, "SoftObjectProperty"},
            {"ProxyActivatableWidget", 0xB8, "ObjectProperty"},
            {"VerseUIScene", 0xC0, "ObjectProperty"},
        }};
    };

    struct VerseFortniteUIProxyActivatableWidget
    {
        static constexpr std::string_view Name = "VerseFortniteUIProxyActivatableWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MainActivatableWidget = 0x4A8;
            static constexpr std::uintptr_t CachedMainSlotContent = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MainActivatableWidget", 0x4A8, "WeakObjectProperty"},
            {"CachedMainSlotContent", 0x4B0, "WeakObjectProperty"},
        }};
    };

    struct VerseFortniteWidgetViewmodel
    {
        static constexpr std::string_view Name = "VerseFortniteWidgetViewmodel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
