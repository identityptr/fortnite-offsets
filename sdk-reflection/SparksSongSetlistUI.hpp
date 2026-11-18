#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksSongSetlistUI
{
    struct SparksSetlistItemVM
    {
        static constexpr std::string_view Name = "SparksSetlistItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSongItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t AddedByPlayer = 0xF0;
            static constexpr std::uintptr_t bIsBlankItem = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AddedByPlayer", 0xF0, "SoftObjectProperty"},
            {"bIsBlankItem", 0x110, "BoolProperty"},
        }};
    };

    struct SparksSetlistVM
    {
        static constexpr std::string_view Name = "SparksSetlistVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SetlistItems = 0x68;
            static constexpr std::uintptr_t LockerConfig = 0x80;
            static constexpr std::uintptr_t ItemClass = 0x88;
            static constexpr std::uintptr_t OwningController = 0x90;
            static constexpr std::uintptr_t SparksCustomSetlist = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SetlistItems", 0x68, "ArrayProperty"},
            {"LockerConfig", 0x80, "ObjectProperty"},
            {"ItemClass", 0x88, "ClassProperty"},
            {"OwningController", 0x90, "WeakObjectProperty"},
            {"SparksCustomSetlist", 0x98, "WeakObjectProperty"},
        }};
    };

    struct SparksSongEntry
    {
        static constexpr std::string_view Name = "SparksSongEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClickEvent = 0x330;
            static constexpr std::uintptr_t MinWidth = 0x334;
            static constexpr std::uintptr_t MinHeight = 0x338;
            static constexpr std::uintptr_t MaxWidth = 0x33C;
            static constexpr std::uintptr_t MaxHeight = 0x340;
            static constexpr std::uintptr_t Style = 0x348;
            static constexpr std::uintptr_t bHideInputAction = 0x350;
            static constexpr std::uintptr_t PressedSlateSoundOverride = 0x358;
            static constexpr std::uintptr_t ClickedSlateSoundOverride = 0x370;
            static constexpr std::uintptr_t HoveredSlateSoundOverride = 0x388;
            static constexpr std::uintptr_t SelectedPressedSlateSoundOverride = 0x3A0;
            static constexpr std::uintptr_t SelectedClickedSlateSoundOverride = 0x3B8;
            static constexpr std::uintptr_t SelectedHoveredSlateSoundOverride = 0x3D0;
            static constexpr std::uintptr_t LockedPressedSlateSoundOverride = 0x3E8;
            static constexpr std::uintptr_t LockedClickedSlateSoundOverride = 0x400;
            static constexpr std::uintptr_t LockedHoveredSlateSoundOverride = 0x418;
            static constexpr std::uintptr_t bApplyAlphaOnDisable = 0x430;
            static constexpr std::uintptr_t bDisplayInputActionWhenNotInteractable = 0x430;
            static constexpr std::uintptr_t bInteractableWhenSelected = 0x430;
            static constexpr std::uintptr_t bLocked = 0x430;
            static constexpr std::uintptr_t bSelectable = 0x430;
            static constexpr std::uintptr_t bShouldSelectUponReceivingFocus = 0x430;
            static constexpr std::uintptr_t bToggleable = 0x430;
            static constexpr std::uintptr_t bTriggerClickedAfterSelection = 0x430;
            static constexpr std::uintptr_t bHideInputActionWithKeyboard = 0x431;
            static constexpr std::uintptr_t bRequiresHold = 0x431;
            static constexpr std::uintptr_t bShouldUseFallbackDefaultInputAction = 0x431;
            static constexpr std::uintptr_t HoldData = 0x438;
            static constexpr std::uintptr_t bSimulateHoverOnTouchInput = 0x440;
            static constexpr std::uintptr_t ClickMethod = 0x443;
            static constexpr std::uintptr_t TouchMethod = 0x444;
            static constexpr std::uintptr_t PressMethod = 0x445;
            static constexpr std::uintptr_t InputPriority = 0x448;
            static constexpr std::uintptr_t TriggeringInputAction = 0x450;
            static constexpr std::uintptr_t TriggeringEnhancedInputAction = 0x460;
            static constexpr std::uintptr_t bNavigateToNextWidgetOnDisable = 0x478;
            static constexpr std::uintptr_t OnSelectedChangedBase = 0x480;
            static constexpr std::uintptr_t OnButtonBaseClicked = 0x490;
            static constexpr std::uintptr_t OnButtonBaseDoubleClicked = 0x4A0;
            static constexpr std::uintptr_t OnButtonBaseHovered = 0x4B0;
            static constexpr std::uintptr_t OnButtonBaseUnhovered = 0x4C0;
            static constexpr std::uintptr_t OnButtonBaseFocused = 0x4D0;
            static constexpr std::uintptr_t OnButtonBaseUnfocused = 0x4E0;
            static constexpr std::uintptr_t OnButtonBaseLockClicked = 0x4F0;
            static constexpr std::uintptr_t OnButtonBaseLockDoubleClicked = 0x500;
            static constexpr std::uintptr_t OnButtonBaseSelected = 0x510;
            static constexpr std::uintptr_t OnButtonBaseUnselected = 0x520;
            static constexpr std::uintptr_t OnButtonBaseDragDetected = 0x530;
            static constexpr std::uintptr_t OnButtonBaseDragEnter = 0x540;
            static constexpr std::uintptr_t OnButtonBaseDragLeave = 0x550;
            static constexpr std::uintptr_t OnButtonBaseDragOver = 0x560;
            static constexpr std::uintptr_t OnButtonBaseDrop = 0x570;
            static constexpr std::uintptr_t bIsPersistentBinding = 0x5B8;
            static constexpr std::uintptr_t InputModeOverride = 0x5B9;
            static constexpr std::uintptr_t SingleMaterialStyleMID = 0x5E0;
            static constexpr std::uintptr_t NormalStyle = 0x5F0;
            static constexpr std::uintptr_t SelectedStyle = 0x980;
            static constexpr std::uintptr_t DisabledStyle = 0xD10;
            static constexpr std::uintptr_t LockedStyle = 0x10A0;
            static constexpr std::uintptr_t bStopDoubleClickPropagation = 0x1430;
            static constexpr std::uintptr_t InputActionWidget = 0x15C8;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"ClickEvent", 0x330, "StructProperty"},
            {"MinWidth", 0x334, "IntProperty"},
            {"MinHeight", 0x338, "IntProperty"},
            {"MaxWidth", 0x33C, "IntProperty"},
            {"MaxHeight", 0x340, "IntProperty"},
            {"Style", 0x348, "ClassProperty"},
            {"bHideInputAction", 0x350, "BoolProperty"},
            {"PressedSlateSoundOverride", 0x358, "StructProperty"},
            {"ClickedSlateSoundOverride", 0x370, "StructProperty"},
            {"HoveredSlateSoundOverride", 0x388, "StructProperty"},
            {"SelectedPressedSlateSoundOverride", 0x3A0, "StructProperty"},
            {"SelectedClickedSlateSoundOverride", 0x3B8, "StructProperty"},
            {"SelectedHoveredSlateSoundOverride", 0x3D0, "StructProperty"},
            {"LockedPressedSlateSoundOverride", 0x3E8, "StructProperty"},
            {"LockedClickedSlateSoundOverride", 0x400, "StructProperty"},
            {"LockedHoveredSlateSoundOverride", 0x418, "StructProperty"},
            {"bApplyAlphaOnDisable", 0x430, "BoolProperty"},
            {"bDisplayInputActionWhenNotInteractable", 0x430, "BoolProperty"},
            {"bInteractableWhenSelected", 0x430, "BoolProperty"},
            {"bLocked", 0x430, "BoolProperty"},
            {"bSelectable", 0x430, "BoolProperty"},
            {"bShouldSelectUponReceivingFocus", 0x430, "BoolProperty"},
            {"bToggleable", 0x430, "BoolProperty"},
            {"bTriggerClickedAfterSelection", 0x430, "BoolProperty"},
            {"bHideInputActionWithKeyboard", 0x431, "BoolProperty"},
            {"bRequiresHold", 0x431, "BoolProperty"},
            {"bShouldUseFallbackDefaultInputAction", 0x431, "BoolProperty"},
            {"HoldData", 0x438, "ClassProperty"},
            {"bSimulateHoverOnTouchInput", 0x440, "BoolProperty"},
            {"ClickMethod", 0x443, "ByteProperty"},
            {"TouchMethod", 0x444, "ByteProperty"},
            {"PressMethod", 0x445, "ByteProperty"},
            {"InputPriority", 0x448, "IntProperty"},
            {"TriggeringInputAction", 0x450, "StructProperty"},
            {"TriggeringEnhancedInputAction", 0x460, "ObjectProperty"},
            {"bNavigateToNextWidgetOnDisable", 0x478, "BoolProperty"},
            {"OnSelectedChangedBase", 0x480, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseClicked", 0x490, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDoubleClicked", 0x4A0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseHovered", 0x4B0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnhovered", 0x4C0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseFocused", 0x4D0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnfocused", 0x4E0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockClicked", 0x4F0, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseLockDoubleClicked", 0x500, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseSelected", 0x510, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseUnselected", 0x520, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragDetected", 0x530, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragEnter", 0x540, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragLeave", 0x550, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDragOver", 0x560, "MulticastInlineDelegateProperty"},
            {"OnButtonBaseDrop", 0x570, "MulticastInlineDelegateProperty"},
            {"bIsPersistentBinding", 0x5B8, "BoolProperty"},
            {"InputModeOverride", 0x5B9, "EnumProperty"},
            {"SingleMaterialStyleMID", 0x5E0, "ObjectProperty"},
            {"NormalStyle", 0x5F0, "StructProperty"},
            {"SelectedStyle", 0x980, "StructProperty"},
            {"DisabledStyle", 0xD10, "StructProperty"},
            {"LockedStyle", 0x10A0, "StructProperty"},
            {"bStopDoubleClickPropagation", 0x1430, "BoolProperty"},
            {"InputActionWidget", 0x15C8, "ObjectProperty"},
        }};
    };

}
