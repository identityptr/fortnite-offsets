#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiteUIKit
{
    struct LiteActionWidget
    {
        static constexpr std::string_view Name = "LiteActionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EnhancedInputAction = 0x308;
            static constexpr std::uintptr_t Key = 0x310;
            static constexpr std::uintptr_t OnInputMethodChanged = 0x320;
            static constexpr std::uintptr_t OnStart = 0x330;
            static constexpr std::uintptr_t OnProgress = 0x340;
            static constexpr std::uintptr_t OnComplete = 0x350;
            static constexpr std::uintptr_t OnCancel = 0x360;
            static constexpr std::uintptr_t OnKeyUpdated = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"EnhancedInputAction", 0x308, "ObjectProperty"},
            {"Key", 0x310, "ObjectProperty"},
            {"OnInputMethodChanged", 0x320, "MulticastInlineDelegateProperty"},
            {"OnStart", 0x330, "MulticastInlineDelegateProperty"},
            {"OnProgress", 0x340, "MulticastInlineDelegateProperty"},
            {"OnComplete", 0x350, "MulticastInlineDelegateProperty"},
            {"OnCancel", 0x360, "MulticastInlineDelegateProperty"},
            {"OnKeyUpdated", 0x370, "MulticastInlineDelegateProperty"},
        }};
    };

    struct LiteButtonBase
    {
        static constexpr std::string_view Name = "LiteButtonBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreStyleDefaults = 0x15D0;
            static constexpr std::uintptr_t LiteInputActionWidget = 0x15D8;
            static constexpr std::uintptr_t KBMHoveredSoundOverride = 0x15E0;
            static constexpr std::uintptr_t CachedAuthoredHoveredSound = 0x15E8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIgnoreStyleDefaults", 0x15D0, "BoolProperty"},
            {"LiteInputActionWidget", 0x15D8, "ObjectProperty"},
            {"KBMHoveredSoundOverride", 0x15E0, "ObjectProperty"},
            {"CachedAuthoredHoveredSound", 0x15E8, "ObjectProperty"},
        }};
    };

    struct LiteComboBoxKey
    {
        static constexpr std::string_view Name = "LiteComboBoxKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComboBoxKey";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMenuClosed = 0x1970;
            static constexpr std::uintptr_t MenuPlacement = 0x1980;
            static constexpr std::uintptr_t MenuNavigationRule = 0x1981;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnMenuClosed", 0x1970, "MulticastInlineDelegateProperty"},
            {"MenuPlacement", 0x1980, "ByteProperty"},
            {"MenuNavigationRule", 0x1981, "EnumProperty"},
        }};
    };

    struct LiteEmptyButtonStyle
    {
        static constexpr std::string_view Name = "LiteEmptyButtonStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonStyle";
        struct Offsets
        {
            static constexpr std::uintptr_t bSingleMaterial = 0x28;
            static constexpr std::uintptr_t SingleMaterialBrush = 0x30;
            static constexpr std::uintptr_t NormalBase = 0xE0;
            static constexpr std::uintptr_t NormalHovered = 0x190;
            static constexpr std::uintptr_t NormalPressed = 0x240;
            static constexpr std::uintptr_t SelectedBase = 0x2F0;
            static constexpr std::uintptr_t SelectedHovered = 0x3A0;
            static constexpr std::uintptr_t SelectedPressed = 0x450;
            static constexpr std::uintptr_t Disabled = 0x500;
            static constexpr std::uintptr_t ButtonPadding = 0x5B0;
            static constexpr std::uintptr_t CustomPadding = 0x5C0;
            static constexpr std::uintptr_t MinWidth = 0x5D0;
            static constexpr std::uintptr_t MinHeight = 0x5D4;
            static constexpr std::uintptr_t MaxWidth = 0x5D8;
            static constexpr std::uintptr_t MaxHeight = 0x5DC;
            static constexpr std::uintptr_t NormalTextStyle = 0x5E0;
            static constexpr std::uintptr_t NormalHoveredTextStyle = 0x5E8;
            static constexpr std::uintptr_t SelectedTextStyle = 0x5F0;
            static constexpr std::uintptr_t SelectedHoveredTextStyle = 0x5F8;
            static constexpr std::uintptr_t DisabledTextStyle = 0x600;
            static constexpr std::uintptr_t PressedSlateSound = 0x608;
            static constexpr std::uintptr_t ClickedSlateSound = 0x620;
            static constexpr std::uintptr_t SelectedPressedSlateSound = 0x638;
            static constexpr std::uintptr_t SelectedClickedSlateSound = 0x658;
            static constexpr std::uintptr_t LockedPressedSlateSound = 0x678;
            static constexpr std::uintptr_t LockedClickedSlateSound = 0x698;
            static constexpr std::uintptr_t HoveredSlateSound = 0x6B8;
            static constexpr std::uintptr_t SelectedHoveredSlateSound = 0x6D0;
            static constexpr std::uintptr_t LockedHoveredSlateSound = 0x6F0;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"bSingleMaterial", 0x28, "BoolProperty"},
            {"SingleMaterialBrush", 0x30, "StructProperty"},
            {"NormalBase", 0xE0, "StructProperty"},
            {"NormalHovered", 0x190, "StructProperty"},
            {"NormalPressed", 0x240, "StructProperty"},
            {"SelectedBase", 0x2F0, "StructProperty"},
            {"SelectedHovered", 0x3A0, "StructProperty"},
            {"SelectedPressed", 0x450, "StructProperty"},
            {"Disabled", 0x500, "StructProperty"},
            {"ButtonPadding", 0x5B0, "StructProperty"},
            {"CustomPadding", 0x5C0, "StructProperty"},
            {"MinWidth", 0x5D0, "IntProperty"},
            {"MinHeight", 0x5D4, "IntProperty"},
            {"MaxWidth", 0x5D8, "IntProperty"},
            {"MaxHeight", 0x5DC, "IntProperty"},
            {"NormalTextStyle", 0x5E0, "ClassProperty"},
            {"NormalHoveredTextStyle", 0x5E8, "ClassProperty"},
            {"SelectedTextStyle", 0x5F0, "ClassProperty"},
            {"SelectedHoveredTextStyle", 0x5F8, "ClassProperty"},
            {"DisabledTextStyle", 0x600, "ClassProperty"},
            {"PressedSlateSound", 0x608, "StructProperty"},
            {"ClickedSlateSound", 0x620, "StructProperty"},
            {"SelectedPressedSlateSound", 0x638, "StructProperty"},
            {"SelectedClickedSlateSound", 0x658, "StructProperty"},
            {"LockedPressedSlateSound", 0x678, "StructProperty"},
            {"LockedClickedSlateSound", 0x698, "StructProperty"},
            {"HoveredSlateSound", 0x6B8, "StructProperty"},
            {"SelectedHoveredSlateSound", 0x6D0, "StructProperty"},
            {"LockedHoveredSlateSound", 0x6F0, "StructProperty"},
        }};
    };

    struct LiteImageDownloadComponent
    {
        static constexpr std::string_view Name = "LiteImageDownloadComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnParameterDownloadStateChanged = 0x58;
            static constexpr std::uintptr_t ImageUrl = 0x68;
            static constexpr std::uintptr_t AdditionalTextureParameters = 0x78;
            static constexpr std::uintptr_t bAutoSetBrushOnDownload = 0x88;
            static constexpr std::uintptr_t DownloadedTexture = 0x90;
            static constexpr std::uintptr_t DownloadState = 0x98;
            static constexpr std::uintptr_t ImageReference = 0xA0;
            static constexpr std::uintptr_t ParameterDownloadSlots = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnParameterDownloadStateChanged", 0x58, "MulticastInlineDelegateProperty"},
            {"ImageUrl", 0x68, "StrProperty"},
            {"AdditionalTextureParameters", 0x78, "ArrayProperty"},
            {"bAutoSetBrushOnDownload", 0x88, "BoolProperty"},
            {"DownloadedTexture", 0x90, "ObjectProperty"},
            {"DownloadState", 0x98, "EnumProperty"},
            {"ImageReference", 0xA0, "StructProperty"},
            {"ParameterDownloadSlots", 0x110, "ArrayProperty"},
        }};
    };

    struct LiteInputFieldBase
    {
        static constexpr std::string_view Name = "LiteInputFieldBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiteButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EditableText = 0x1600;
            static constexpr std::uintptr_t Text = 0x1608;
            static constexpr std::uintptr_t HintText = 0x1618;
            static constexpr std::uintptr_t IsReadOnly = 0x1628;
            static constexpr std::uintptr_t IsPassword = 0x1629;
            static constexpr std::uintptr_t MaxTextCharacters = 0x162A;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"EditableText", 0x1600, "ObjectProperty"},
            {"Text", 0x1608, "TextProperty"},
            {"HintText", 0x1618, "TextProperty"},
            {"IsReadOnly", 0x1628, "BoolProperty"},
            {"IsPassword", 0x1629, "BoolProperty"},
            {"MaxTextCharacters", 0x162A, "UInt16Property"},
        }};
    };

    struct LiteLazyImage
    {
        static constexpr std::string_view Name = "LiteLazyImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Image";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDownloadStarted = 0x290;
            static constexpr std::uintptr_t OnDownloadFinished = 0x2A0;
            static constexpr std::uintptr_t bIsWaitingForImageDownload = 0x2B0;
            static constexpr std::uintptr_t bMatchDownloadImageSize = 0x2B1;
            static constexpr std::uintptr_t bSetBrushAfterDownload = 0x2B2;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnDownloadStarted", 0x290, "MulticastInlineDelegateProperty"},
            {"OnDownloadFinished", 0x2A0, "MulticastInlineDelegateProperty"},
            {"bIsWaitingForImageDownload", 0x2B0, "BoolProperty"},
            {"bMatchDownloadImageSize", 0x2B1, "BoolProperty"},
            {"bSetBrushAfterDownload", 0x2B2, "BoolProperty"},
        }};
    };

    struct LiteUIKitLayoutLibrary
    {
        static constexpr std::string_view Name = "LiteUIKitLayoutLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiteWrapBox
    {
        static constexpr std::string_view Name = "LiteWrapBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWrappedContentChanged = 0x180;
            static constexpr std::uintptr_t orientation = 0x190;
            static constexpr std::uintptr_t InnerSlotPadding = 0x198;
            static constexpr std::uintptr_t JustifyContent = 0x1A8;
            static constexpr std::uintptr_t AlignContent = 0x1A9;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnWrappedContentChanged", 0x180, "MulticastInlineDelegateProperty"},
            {"orientation", 0x190, "ByteProperty"},
            {"InnerSlotPadding", 0x198, "StructProperty"},
            {"JustifyContent", 0x1A8, "ByteProperty"},
            {"AlignContent", 0x1A9, "ByteProperty"},
        }};
    };

    struct LiteWrapBoxSlot
    {
        static constexpr std::string_view Name = "LiteWrapBoxSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PanelSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t Padding = 0x38;
            static constexpr std::uintptr_t UnwrappedLayout = 0x48;
            static constexpr std::uintptr_t WrappedLayout = 0x54;
            static constexpr std::uintptr_t WrapLayoutLessThan = 0x60;
            static constexpr std::uintptr_t Order = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Padding", 0x38, "StructProperty"},
            {"UnwrappedLayout", 0x48, "StructProperty"},
            {"WrappedLayout", 0x54, "StructProperty"},
            {"WrapLayoutLessThan", 0x60, "FloatProperty"},
            {"Order", 0x64, "IntProperty"},
        }};
    };

}
