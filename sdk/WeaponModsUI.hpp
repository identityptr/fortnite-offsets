#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WeaponModsUI
{
    struct AthenaEquippedItemInfoWeaponMods
    {
        static constexpr std::string_view Name = "AthenaEquippedItemInfoWeaponMods";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct AthenaInventoryGroupWeaponMods
    {
        static constexpr std::string_view Name = "AthenaInventoryGroupWeaponMods";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaInventoryGroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentInventoryPanel = 0x330;
            static constexpr std::uintptr_t ItemTileView = 0x338;
            static constexpr std::uintptr_t FilteredItemTypes = 0x340;
            static constexpr std::uintptr_t DefaultNumEntries = 0x350;
            static constexpr std::uintptr_t InventoryContentSortType = 0x354;
            static constexpr std::uintptr_t SupportedEmptyDefinitionOverrideTypes = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ParentInventoryPanel", 0x330, "WeakObjectProperty"},
            {"ItemTileView", 0x338, "ObjectProperty"},
            {"FilteredItemTypes", 0x340, "ArrayProperty"},
            {"DefaultNumEntries", 0x350, "IntProperty"},
            {"InventoryContentSortType", 0x354, "EnumProperty"},
            {"SupportedEmptyDefinitionOverrideTypes", 0x358, "ArrayProperty"},
        }};
    };

    struct AthenaInventoryItemInfoWeaponMods
    {
        static constexpr std::string_view Name = "AthenaInventoryItemInfoWeaponMods";
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

    struct AthenaInventoryItemInfoWeaponModsConfigurator
    {
        static constexpr std::string_view Name = "AthenaInventoryItemInfoWeaponModsConfigurator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaInventoryItemInfoWeaponMods";
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

    struct AthenaLastKillerWeaponModsInfo
    {
        static constexpr std::string_view Name = "AthenaLastKillerWeaponModsInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct AthenaMarkerDetailsExtensionWeaponMods
    {
        static constexpr std::string_view Name = "AthenaMarkerDetailsExtensionWeaponMods";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaMarkerDetailsExtension";
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

    struct AthenaPickupIndicatorWeaponMods
    {
        static constexpr std::string_view Name = "AthenaPickupIndicatorWeaponMods";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInteractContextInfoWidget";
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

    struct AthenaQuickBarSlotWeaponModsIndicator
    {
        static constexpr std::string_view Name = "AthenaQuickBarSlotWeaponModsIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaQuickBarSlotExtensionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Image_ModOptic = 0x338;
            static constexpr std::uintptr_t Image_ModMag = 0x340;
            static constexpr std::uintptr_t Image_ModUnderbarrel = 0x348;
            static constexpr std::uintptr_t Image_ModBarrel = 0x350;
            static constexpr std::uintptr_t Image_ScopeIcon = 0x358;
            static constexpr std::uintptr_t EmptyModSlotBrush = 0x360;
            static constexpr std::uintptr_t FilledModSlotBrush = 0x410;
            static constexpr std::uintptr_t ModSlotWidgets = 0x4C0;
            static constexpr std::uintptr_t WeaponModSlotOpticTag = 0x4D0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Image_ModOptic", 0x338, "ObjectProperty"},
            {"Image_ModMag", 0x340, "ObjectProperty"},
            {"Image_ModUnderbarrel", 0x348, "ObjectProperty"},
            {"Image_ModBarrel", 0x350, "ObjectProperty"},
            {"Image_ScopeIcon", 0x358, "ObjectProperty"},
            {"EmptyModSlotBrush", 0x360, "StructProperty"},
            {"FilledModSlotBrush", 0x410, "StructProperty"},
            {"ModSlotWidgets", 0x4C0, "MapProperty"},
            {"WeaponModSlotOpticTag", 0x4D0, "StructProperty"},
        }};
    };

    struct FortGameSettingRegistryExtension_WeaponModsUI
    {
        static constexpr std::string_view Name = "FortGameSettingRegistryExtension_WeaponModsUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameSettingRegistryExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupBase = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MarkupBase", 0x28, "ObjectProperty"},
        }};
    };

    struct FortPickupInteractOverrideComponent_ModdableWeapons
    {
        static constexpr std::string_view Name = "FortPickupInteractOverrideComponent_ModdableWeapons";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupInteractOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAttemptSecondInteractDelegate = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnAttemptSecondInteractDelegate", 0xE0, "MulticastInlineDelegateProperty"},
        }};
    };

}
