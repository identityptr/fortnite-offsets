#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WidgetTransitioning
{
    struct TransitionableCommonActivatableWidget
    {
        static constexpr std::string_view Name = "TransitionableCommonActivatableWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialTransitionStatus = 0x4F8;
            static constexpr std::uintptr_t HiddenVisibility = 0x4F9;
            static constexpr std::uintptr_t WidgetTransitioner = 0x500;
            static constexpr std::uintptr_t bActivateOnShow = 0x508;
            static constexpr std::uintptr_t DefaultTransitionIn = 0x510;
            static constexpr std::uintptr_t DefaultTransitionOut = 0x518;
            static constexpr std::uintptr_t AnimationHintContainer = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InitialTransitionStatus", 0x4F8, "EnumProperty"},
            {"HiddenVisibility", 0x4F9, "EnumProperty"},
            {"WidgetTransitioner", 0x500, "ObjectProperty"},
            {"bActivateOnShow", 0x508, "BoolProperty"},
            {"DefaultTransitionIn", 0x510, "ObjectProperty"},
            {"DefaultTransitionOut", 0x518, "ObjectProperty"},
            {"AnimationHintContainer", 0x520, "StructProperty"},
        }};
    };

    struct TransitionableUserWidget
    {
        static constexpr std::string_view Name = "TransitionableUserWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialTransitionStatus = 0x388;
            static constexpr std::uintptr_t HiddenVisibility = 0x389;
            static constexpr std::uintptr_t bAlwaysReverseInterruptedAnimations = 0x38A;
            static constexpr std::uintptr_t WidgetTransitioner = 0x390;
            static constexpr std::uintptr_t DefaultTransitionIn = 0x398;
            static constexpr std::uintptr_t DefaultTransitionOut = 0x3A0;
            static constexpr std::uintptr_t AnimationHintContainer = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InitialTransitionStatus", 0x388, "EnumProperty"},
            {"HiddenVisibility", 0x389, "EnumProperty"},
            {"bAlwaysReverseInterruptedAnimations", 0x38A, "BoolProperty"},
            {"WidgetTransitioner", 0x390, "ObjectProperty"},
            {"DefaultTransitionIn", 0x398, "ObjectProperty"},
            {"DefaultTransitionOut", 0x3A0, "ObjectProperty"},
            {"AnimationHintContainer", 0x3A8, "StructProperty"},
        }};
    };

    struct UIAnimationController
    {
        static constexpr std::string_view Name = "UIAnimationController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UIAnimationControllerEntry
    {
        static constexpr std::string_view Name = "UIAnimationControllerEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationController = 0x28;
            static constexpr std::uintptr_t bIsInverted = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnimationController", 0x28, "ObjectProperty"},
            {"bIsInverted", 0x30, "BoolProperty"},
        }};
    };

    struct UITimelineAnimationController
    {
        static constexpr std::string_view Name = "UITimelineAnimationController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIAnimationController";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetTarget = 0x38;
            static constexpr std::uintptr_t Animation = 0x40;
            static constexpr std::uintptr_t ActiveAnimationHandle = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WidgetTarget", 0x38, "ObjectProperty"},
            {"Animation", 0x40, "ObjectProperty"},
            {"ActiveAnimationHandle", 0x48, "StructProperty"},
        }};
    };

    struct WidgetTransitioner
    {
        static constexpr std::string_view Name = "WidgetTransitioner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTransitionerStatusChanged = 0x28;
            static constexpr std::uintptr_t TargetWidget = 0x38;
            static constexpr std::uintptr_t HiddenVisibility = 0x40;
            static constexpr std::uintptr_t ShownVisibility = 0x41;
            static constexpr std::uintptr_t TransitionerStatus = 0x42;
            static constexpr std::uintptr_t DefaultTransitionIn = 0x48;
            static constexpr std::uintptr_t DefaultTransitionOut = 0x50;
            static constexpr std::uintptr_t HintedTransitionsIn = 0x58;
            static constexpr std::uintptr_t HintedTransitionsOut = 0x68;
            static constexpr std::uintptr_t ActiveEntry = 0x78;
            static constexpr std::uintptr_t bIsInitialized = 0x80;
            static constexpr std::uintptr_t bAlwaysReverseInterruptedAnimations = 0x81;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnTransitionerStatusChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"TargetWidget", 0x38, "ObjectProperty"},
            {"HiddenVisibility", 0x40, "EnumProperty"},
            {"ShownVisibility", 0x41, "EnumProperty"},
            {"TransitionerStatus", 0x42, "EnumProperty"},
            {"DefaultTransitionIn", 0x48, "ObjectProperty"},
            {"DefaultTransitionOut", 0x50, "ObjectProperty"},
            {"HintedTransitionsIn", 0x58, "MapProperty"},
            {"HintedTransitionsOut", 0x68, "MapProperty"},
            {"ActiveEntry", 0x78, "ObjectProperty"},
            {"bIsInitialized", 0x80, "BoolProperty"},
            {"bAlwaysReverseInterruptedAnimations", 0x81, "BoolProperty"},
        }};
    };

}
