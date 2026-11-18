#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ScoutDroneUI
{
    struct DronePickUpIndicatorComponent
    {
        static constexpr std::string_view Name = "DronePickUpIndicatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemIndicatorType = 0xC0;
            static constexpr std::uintptr_t DbnoIndicatorType = 0xC8;
            static constexpr std::uintptr_t IndicatorPool = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemIndicatorType", 0xC0, "ClassProperty"},
            {"DbnoIndicatorType", 0xC8, "ClassProperty"},
            {"IndicatorPool", 0xD0, "StructProperty"},
        }};
    };

    struct FortMobileActionButtonBehaviorExtension_ScoutDroneUse
    {
        static constexpr std::string_view Name = "FortMobileActionButtonBehaviorExtension_ScoutDroneUse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehaviorExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextTagToCheck = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextTagToCheck", 0x90, "StructProperty"},
        }};
    };

    struct FortMobileButtonBehaviorComponent_ScoutDronePickupItems
    {
        static constexpr std::string_view Name = "FortMobileButtonBehaviorComponent_ScoutDronePickupItems";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileButtonBehaviorComponent_Visibility";
        struct Offsets
        {
            static constexpr std::uintptr_t HoldingItemsTags = 0x58;
            static constexpr std::uintptr_t InteractionComponent = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HoldingItemsTags", 0x58, "StructProperty"},
            {"InteractionComponent", 0x78, "WeakObjectProperty"},
        }};
    };

    struct ScoutDroneHUD
    {
        static constexpr std::string_view Name = "ScoutDroneHUD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeToConfirmTargetCache = 0x308;
            static constexpr std::uintptr_t InitialHealth = 0x30C;
            static constexpr std::uintptr_t WarningRange = 0x310;
            static constexpr std::uintptr_t SignalLossRange = 0x338;
            static constexpr std::uintptr_t UpdateSignalInterval = 0x360;
            static constexpr std::uintptr_t MarkAbilityTag = 0x388;
            static constexpr std::uintptr_t DismissAbilityTag = 0x38C;
            static constexpr std::uintptr_t InteractAbilityTag = 0x390;
            static constexpr std::uintptr_t PickUpAbilityTag = 0x394;
            static constexpr std::uintptr_t PickUpTargetsChangedTag = 0x398;
            static constexpr std::uintptr_t SpeedBoostAbilityTag = 0x39C;
            static constexpr std::uintptr_t Overlay_Health = 0x3A0;
            static constexpr std::uintptr_t Overlay_EnergyLevel = 0x3A8;
            static constexpr std::uintptr_t Overlay_Reticle = 0x3B0;
            static constexpr std::uintptr_t Overlay_TetheringIndicator = 0x3B8;
            static constexpr std::uintptr_t MaxHealthCache = 0x3C0;
            static constexpr std::uintptr_t MaxEnergyCache = 0x3C4;
            static constexpr std::uintptr_t SignalDataTimerHandle = 0x410;
            static constexpr std::uintptr_t HUDIdentifiers = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TimeToConfirmTargetCache", 0x308, "FloatProperty"},
            {"InitialHealth", 0x30C, "FloatProperty"},
            {"WarningRange", 0x310, "StructProperty"},
            {"SignalLossRange", 0x338, "StructProperty"},
            {"UpdateSignalInterval", 0x360, "StructProperty"},
            {"MarkAbilityTag", 0x388, "StructProperty"},
            {"DismissAbilityTag", 0x38C, "StructProperty"},
            {"InteractAbilityTag", 0x390, "StructProperty"},
            {"PickUpAbilityTag", 0x394, "StructProperty"},
            {"PickUpTargetsChangedTag", 0x398, "StructProperty"},
            {"SpeedBoostAbilityTag", 0x39C, "StructProperty"},
            {"Overlay_Health", 0x3A0, "ObjectProperty"},
            {"Overlay_EnergyLevel", 0x3A8, "ObjectProperty"},
            {"Overlay_Reticle", 0x3B0, "ObjectProperty"},
            {"Overlay_TetheringIndicator", 0x3B8, "ObjectProperty"},
            {"MaxHealthCache", 0x3C0, "FloatProperty"},
            {"MaxEnergyCache", 0x3C4, "FloatProperty"},
            {"SignalDataTimerHandle", 0x410, "StructProperty"},
            {"HUDIdentifiers", 0x420, "ArrayProperty"},
        }};
    };

    struct ScoutDroneTetherIndicator
    {
        static constexpr std::string_view Name = "ScoutDroneTetherIndicator";
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

    struct ScoutDroneUIDirector
    {
        static constexpr std::string_view Name = "ScoutDroneUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t HUDTagsToHide = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HUDTagsToHide", 0x2A8, "StructProperty"},
        }};
    };

}
