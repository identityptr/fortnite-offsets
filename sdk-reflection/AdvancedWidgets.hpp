#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AdvancedWidgets
{
    struct RadialSlider
    {
        static constexpr std::string_view Name = "RadialSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x168;
            static constexpr std::uintptr_t ValueDelegate = 0x16C;
            static constexpr std::uintptr_t bUseCustomDefaultValue = 0x178;
            static constexpr std::uintptr_t CustomDefaultValue = 0x17C;
            static constexpr std::uintptr_t SliderRange = 0x180;
            static constexpr std::uintptr_t ValueTags = 0x1C8;
            static constexpr std::uintptr_t SliderHandleStartAngle = 0x1D8;
            static constexpr std::uintptr_t SliderHandleEndAngle = 0x1DC;
            static constexpr std::uintptr_t AngularOffset = 0x1E0;
            static constexpr std::uintptr_t HandStartEndRatio = 0x1E8;
            static constexpr std::uintptr_t WidgetStyle = 0x200;
            static constexpr std::uintptr_t SliderBarColor = 0x640;
            static constexpr std::uintptr_t SliderProgressColor = 0x650;
            static constexpr std::uintptr_t SliderHandleColor = 0x660;
            static constexpr std::uintptr_t CenterBackgroundColor = 0x670;
            static constexpr std::uintptr_t Locked = 0x680;
            static constexpr std::uintptr_t MouseUsesStep = 0x681;
            static constexpr std::uintptr_t RequiresControllerLock = 0x682;
            static constexpr std::uintptr_t StepSize = 0x684;
            static constexpr std::uintptr_t IsFocusable = 0x688;
            static constexpr std::uintptr_t UseVerticalDrag = 0x689;
            static constexpr std::uintptr_t ShowSliderHandle = 0x68A;
            static constexpr std::uintptr_t ShowSliderHand = 0x68B;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x690;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x6A0;
            static constexpr std::uintptr_t OnControllerCaptureBegin = 0x6B0;
            static constexpr std::uintptr_t OnControllerCaptureEnd = 0x6C0;
            static constexpr std::uintptr_t OnValueChanged = 0x6D0;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"Value", 0x168, "FloatProperty"},
            {"ValueDelegate", 0x16C, "DelegateProperty"},
            {"bUseCustomDefaultValue", 0x178, "BoolProperty"},
            {"CustomDefaultValue", 0x17C, "FloatProperty"},
            {"SliderRange", 0x180, "StructProperty"},
            {"ValueTags", 0x1C8, "ArrayProperty"},
            {"SliderHandleStartAngle", 0x1D8, "FloatProperty"},
            {"SliderHandleEndAngle", 0x1DC, "FloatProperty"},
            {"AngularOffset", 0x1E0, "FloatProperty"},
            {"HandStartEndRatio", 0x1E8, "StructProperty"},
            {"WidgetStyle", 0x200, "StructProperty"},
            {"SliderBarColor", 0x640, "StructProperty"},
            {"SliderProgressColor", 0x650, "StructProperty"},
            {"SliderHandleColor", 0x660, "StructProperty"},
            {"CenterBackgroundColor", 0x670, "StructProperty"},
            {"Locked", 0x680, "BoolProperty"},
            {"MouseUsesStep", 0x681, "BoolProperty"},
            {"RequiresControllerLock", 0x682, "BoolProperty"},
            {"StepSize", 0x684, "FloatProperty"},
            {"IsFocusable", 0x688, "BoolProperty"},
            {"UseVerticalDrag", 0x689, "BoolProperty"},
            {"ShowSliderHandle", 0x68A, "BoolProperty"},
            {"ShowSliderHand", 0x68B, "BoolProperty"},
            {"OnMouseCaptureBegin", 0x690, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x6A0, "MulticastInlineDelegateProperty"},
            {"OnControllerCaptureBegin", 0x6B0, "MulticastInlineDelegateProperty"},
            {"OnControllerCaptureEnd", 0x6C0, "MulticastInlineDelegateProperty"},
            {"OnValueChanged", 0x6D0, "MulticastInlineDelegateProperty"},
        }};
    };

}
