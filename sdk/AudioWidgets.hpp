#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioWidgets
{
    struct AudioFrequencyRadialSlider
    {
        static constexpr std::string_view Name = "AudioFrequencyRadialSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioRadialSlider";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x168;
            static constexpr std::uintptr_t ValueDelegate = 0x16C;
            static constexpr std::uintptr_t WidgetLayout = 0x178;
            static constexpr std::uintptr_t CenterBackgroundColor = 0x17C;
            static constexpr std::uintptr_t SliderProgressColor = 0x18C;
            static constexpr std::uintptr_t SliderBarColor = 0x19C;
            static constexpr std::uintptr_t HandStartEndRatio = 0x1B0;
            static constexpr std::uintptr_t UnitsText = 0x1C0;
            static constexpr std::uintptr_t TextLabelBackgroundColor = 0x1D0;
            static constexpr std::uintptr_t ShowLabelOnlyOnHover = 0x1E0;
            static constexpr std::uintptr_t ShowUnitsText = 0x1E1;
            static constexpr std::uintptr_t IsUnitsTextReadOnly = 0x1E2;
            static constexpr std::uintptr_t IsValueTextReadOnly = 0x1E3;
            static constexpr std::uintptr_t SliderThickness = 0x1E4;
            static constexpr std::uintptr_t OutputRange = 0x1E8;
            static constexpr std::uintptr_t OnValueChanged = 0x1F8;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x208;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Value", 0x168, "FloatProperty"},
            {"ValueDelegate", 0x16C, "DelegateProperty"},
            {"WidgetLayout", 0x178, "ByteProperty"},
            {"CenterBackgroundColor", 0x17C, "StructProperty"},
            {"SliderProgressColor", 0x18C, "StructProperty"},
            {"SliderBarColor", 0x19C, "StructProperty"},
            {"HandStartEndRatio", 0x1B0, "StructProperty"},
            {"UnitsText", 0x1C0, "TextProperty"},
            {"TextLabelBackgroundColor", 0x1D0, "StructProperty"},
            {"ShowLabelOnlyOnHover", 0x1E0, "BoolProperty"},
            {"ShowUnitsText", 0x1E1, "BoolProperty"},
            {"IsUnitsTextReadOnly", 0x1E2, "BoolProperty"},
            {"IsValueTextReadOnly", 0x1E3, "BoolProperty"},
            {"SliderThickness", 0x1E4, "FloatProperty"},
            {"OutputRange", 0x1E8, "StructProperty"},
            {"OnValueChanged", 0x1F8, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureBegin", 0x208, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x218, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AudioFrequencySlider
    {
        static constexpr std::string_view Name = "AudioFrequencySlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSliderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputRange = 0x8B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OutputRange", 0x8B0, "StructProperty"},
        }};
    };

    struct AudioMaterialButton
    {
        static constexpr std::string_view Name = "AudioMaterialButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x168;
            static constexpr std::uintptr_t OnButtonPressedChangedEvent = 0x1F0;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x200;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x210;
            static constexpr std::uintptr_t bIsPressed = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WidgetStyle", 0x168, "StructProperty"},
            {"OnButtonPressedChangedEvent", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureBegin", 0x200, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x210, "MulticastInlineDelegateProperty"},
            {"bIsPressed", 0x220, "BoolProperty"},
        }};
    };

    struct AudioMaterialButtonWidgetStyle
    {
        static constexpr std::string_view Name = "AudioMaterialButtonWidgetStyle";
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

    struct AudioMaterialEnvelope
    {
        static constexpr std::string_view Name = "AudioMaterialEnvelope";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x168;
            static constexpr std::uintptr_t EnvelopeSettings = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WidgetStyle", 0x168, "StructProperty"},
            {"EnvelopeSettings", 0x1B0, "StructProperty"},
        }};
    };

    struct AudioMaterialKnob
    {
        static constexpr std::string_view Name = "AudioMaterialKnob";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x170;
            static constexpr std::uintptr_t OnKnobValueChanged = 0x330;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x340;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x350;
            static constexpr std::uintptr_t Value = 0x360;
            static constexpr std::uintptr_t TuneSpeed = 0x364;
            static constexpr std::uintptr_t FineTuneSpeed = 0x368;
            static constexpr std::uintptr_t bLocked = 0x36C;
            static constexpr std::uintptr_t bMouseUsesStep = 0x36D;
            static constexpr std::uintptr_t StepSize = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"WidgetStyle", 0x170, "StructProperty"},
            {"OnKnobValueChanged", 0x330, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureBegin", 0x340, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x350, "MulticastInlineDelegateProperty"},
            {"Value", 0x360, "FloatProperty"},
            {"TuneSpeed", 0x364, "FloatProperty"},
            {"FineTuneSpeed", 0x368, "FloatProperty"},
            {"bLocked", 0x36C, "BoolProperty"},
            {"bMouseUsesStep", 0x36D, "BoolProperty"},
            {"StepSize", 0x370, "FloatProperty"},
        }};
    };

    struct AudioMaterialKnobWidgetStyle
    {
        static constexpr std::string_view Name = "AudioMaterialKnobWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t KnobStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KnobStyle", 0x30, "StructProperty"},
        }};
    };

    struct AudioMaterialMeter
    {
        static constexpr std::string_view Name = "AudioMaterialMeter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x168;
            static constexpr std::uintptr_t orientation = 0x250;
            static constexpr std::uintptr_t MeterChannelInfoDelegate = 0x254;
            static constexpr std::uintptr_t MeterChannelInfo = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WidgetStyle", 0x168, "StructProperty"},
            {"orientation", 0x250, "ByteProperty"},
            {"MeterChannelInfoDelegate", 0x254, "DelegateProperty"},
            {"MeterChannelInfo", 0x270, "ArrayProperty"},
        }};
    };

    struct AudioMaterialMeterWidgetStyle
    {
        static constexpr std::string_view Name = "AudioMaterialMeterWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MeterStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeterStyle", 0x30, "StructProperty"},
        }};
    };

    struct AudioMaterialSlider
    {
        static constexpr std::string_view Name = "AudioMaterialSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t WidgetStyle = 0x170;
            static constexpr std::uintptr_t OnValueChanged = 0x2C0;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x2D0;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x2E0;
            static constexpr std::uintptr_t Value = 0x2F0;
            static constexpr std::uintptr_t orientation = 0x2F4;
            static constexpr std::uintptr_t TuneSpeed = 0x2F8;
            static constexpr std::uintptr_t FineTuneSpeed = 0x2FC;
            static constexpr std::uintptr_t bLocked = 0x300;
            static constexpr std::uintptr_t bMouseUsesStep = 0x301;
            static constexpr std::uintptr_t StepSize = 0x304;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"WidgetStyle", 0x170, "StructProperty"},
            {"OnValueChanged", 0x2C0, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureBegin", 0x2D0, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x2E0, "MulticastInlineDelegateProperty"},
            {"Value", 0x2F0, "FloatProperty"},
            {"orientation", 0x2F4, "ByteProperty"},
            {"TuneSpeed", 0x2F8, "FloatProperty"},
            {"FineTuneSpeed", 0x2FC, "FloatProperty"},
            {"bLocked", 0x300, "BoolProperty"},
            {"bMouseUsesStep", 0x301, "BoolProperty"},
            {"StepSize", 0x304, "FloatProperty"},
        }};
    };

    struct AudioMaterialSliderWidgetStyle
    {
        static constexpr std::string_view Name = "AudioMaterialSliderWidgetStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateWidgetStyleContainerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SliderStyle = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SliderStyle", 0x30, "StructProperty"},
        }};
    };

    struct AudioMeter
    {
        static constexpr std::string_view Name = "AudioMeter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t MeterChannelInfo = 0x168;
            static constexpr std::uintptr_t MeterChannelInfoDelegate = 0x178;
            static constexpr std::uintptr_t WidgetStyle = 0x190;
            static constexpr std::uintptr_t orientation = 0x670;
            static constexpr std::uintptr_t BackgroundColor = 0x674;
            static constexpr std::uintptr_t MeterBackgroundColor = 0x684;
            static constexpr std::uintptr_t MeterValueColor = 0x694;
            static constexpr std::uintptr_t MeterPeakColor = 0x6A4;
            static constexpr std::uintptr_t MeterClippingColor = 0x6B4;
            static constexpr std::uintptr_t MeterScaleColor = 0x6C4;
            static constexpr std::uintptr_t MeterScaleLabelColor = 0x6D4;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MeterChannelInfo", 0x168, "ArrayProperty"},
            {"MeterChannelInfoDelegate", 0x178, "DelegateProperty"},
            {"WidgetStyle", 0x190, "StructProperty"},
            {"orientation", 0x670, "ByteProperty"},
            {"BackgroundColor", 0x674, "StructProperty"},
            {"MeterBackgroundColor", 0x684, "StructProperty"},
            {"MeterValueColor", 0x694, "StructProperty"},
            {"MeterPeakColor", 0x6A4, "StructProperty"},
            {"MeterClippingColor", 0x6B4, "StructProperty"},
            {"MeterScaleColor", 0x6C4, "StructProperty"},
            {"MeterScaleLabelColor", 0x6D4, "StructProperty"},
        }};
    };

    struct AudioOscilloscope
    {
        static constexpr std::string_view Name = "AudioOscilloscope";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t OscilloscopeStyle = 0x170;
            static constexpr std::uintptr_t AudioBus = 0x5B0;
            static constexpr std::uintptr_t MaxTimeWindowMs = 0x5B8;
            static constexpr std::uintptr_t TimeWindowMs = 0x5BC;
            static constexpr std::uintptr_t AnalysisPeriodMs = 0x5C0;
            static constexpr std::uintptr_t bShowTimeGrid = 0x5C4;
            static constexpr std::uintptr_t TimeGridLabelsUnit = 0x5C5;
            static constexpr std::uintptr_t bShowAmplitudeGrid = 0x5C6;
            static constexpr std::uintptr_t bShowAmplitudeLabels = 0x5C7;
            static constexpr std::uintptr_t AmplitudeGridLabelsUnit = 0x5C8;
            static constexpr std::uintptr_t TriggerMode = 0x5C9;
            static constexpr std::uintptr_t TriggerThreshold = 0x5CC;
            static constexpr std::uintptr_t PanelLayoutType = 0x5D0;
            static constexpr std::uintptr_t ChannelToAnalyze = 0x5D4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OscilloscopeStyle", 0x170, "StructProperty"},
            {"AudioBus", 0x5B0, "ObjectProperty"},
            {"MaxTimeWindowMs", 0x5B8, "FloatProperty"},
            {"TimeWindowMs", 0x5BC, "FloatProperty"},
            {"AnalysisPeriodMs", 0x5C0, "FloatProperty"},
            {"bShowTimeGrid", 0x5C4, "BoolProperty"},
            {"TimeGridLabelsUnit", 0x5C5, "EnumProperty"},
            {"bShowAmplitudeGrid", 0x5C6, "BoolProperty"},
            {"bShowAmplitudeLabels", 0x5C7, "BoolProperty"},
            {"AmplitudeGridLabelsUnit", 0x5C8, "EnumProperty"},
            {"TriggerMode", 0x5C9, "EnumProperty"},
            {"TriggerThreshold", 0x5CC, "FloatProperty"},
            {"PanelLayoutType", 0x5D0, "EnumProperty"},
            {"ChannelToAnalyze", 0x5D4, "IntProperty"},
        }};
    };

    struct AudioRadialSlider
    {
        static constexpr std::string_view Name = "AudioRadialSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x168;
            static constexpr std::uintptr_t ValueDelegate = 0x16C;
            static constexpr std::uintptr_t WidgetLayout = 0x178;
            static constexpr std::uintptr_t CenterBackgroundColor = 0x17C;
            static constexpr std::uintptr_t SliderProgressColor = 0x18C;
            static constexpr std::uintptr_t SliderBarColor = 0x19C;
            static constexpr std::uintptr_t HandStartEndRatio = 0x1B0;
            static constexpr std::uintptr_t UnitsText = 0x1C0;
            static constexpr std::uintptr_t TextLabelBackgroundColor = 0x1D0;
            static constexpr std::uintptr_t ShowLabelOnlyOnHover = 0x1E0;
            static constexpr std::uintptr_t ShowUnitsText = 0x1E1;
            static constexpr std::uintptr_t IsUnitsTextReadOnly = 0x1E2;
            static constexpr std::uintptr_t IsValueTextReadOnly = 0x1E3;
            static constexpr std::uintptr_t SliderThickness = 0x1E4;
            static constexpr std::uintptr_t OutputRange = 0x1E8;
            static constexpr std::uintptr_t OnValueChanged = 0x1F8;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x208;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Value", 0x168, "FloatProperty"},
            {"ValueDelegate", 0x16C, "DelegateProperty"},
            {"WidgetLayout", 0x178, "ByteProperty"},
            {"CenterBackgroundColor", 0x17C, "StructProperty"},
            {"SliderProgressColor", 0x18C, "StructProperty"},
            {"SliderBarColor", 0x19C, "StructProperty"},
            {"HandStartEndRatio", 0x1B0, "StructProperty"},
            {"UnitsText", 0x1C0, "TextProperty"},
            {"TextLabelBackgroundColor", 0x1D0, "StructProperty"},
            {"ShowLabelOnlyOnHover", 0x1E0, "BoolProperty"},
            {"ShowUnitsText", 0x1E1, "BoolProperty"},
            {"IsUnitsTextReadOnly", 0x1E2, "BoolProperty"},
            {"IsValueTextReadOnly", 0x1E3, "BoolProperty"},
            {"SliderThickness", 0x1E4, "FloatProperty"},
            {"OutputRange", 0x1E8, "StructProperty"},
            {"OnValueChanged", 0x1F8, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureBegin", 0x208, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x218, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AudioSlider
    {
        static constexpr std::string_view Name = "AudioSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSliderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LinToOutputCurve = 0x8B0;
            static constexpr std::uintptr_t OutputToLinCurve = 0x8B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinToOutputCurve", 0x8B0, "WeakObjectProperty"},
            {"OutputToLinCurve", 0x8B8, "WeakObjectProperty"},
        }};
    };

    struct AudioSliderBase
    {
        static constexpr std::string_view Name = "AudioSliderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x168;
            static constexpr std::uintptr_t UnitsText = 0x170;
            static constexpr std::uintptr_t TextLabelBackgroundColor = 0x180;
            static constexpr std::uintptr_t TextLabelBackgroundColorDelegate = 0x190;
            static constexpr std::uintptr_t ShowLabelOnlyOnHover = 0x19C;
            static constexpr std::uintptr_t ShowUnitsText = 0x19D;
            static constexpr std::uintptr_t IsUnitsTextReadOnly = 0x19E;
            static constexpr std::uintptr_t IsValueTextReadOnly = 0x19F;
            static constexpr std::uintptr_t ValueDelegate = 0x1A0;
            static constexpr std::uintptr_t SliderBackgroundColor = 0x1AC;
            static constexpr std::uintptr_t SliderBackgroundColorDelegate = 0x1BC;
            static constexpr std::uintptr_t SliderBarColor = 0x1C8;
            static constexpr std::uintptr_t SliderBarColorDelegate = 0x1D8;
            static constexpr std::uintptr_t SliderThumbColor = 0x1E4;
            static constexpr std::uintptr_t SliderThumbColorDelegate = 0x1F4;
            static constexpr std::uintptr_t WidgetBackgroundColor = 0x200;
            static constexpr std::uintptr_t WidgetBackgroundColorDelegate = 0x210;
            static constexpr std::uintptr_t orientation = 0x21C;
            static constexpr std::uintptr_t OnValueChanged = 0x220;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x230;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"Value", 0x168, "FloatProperty"},
            {"UnitsText", 0x170, "TextProperty"},
            {"TextLabelBackgroundColor", 0x180, "StructProperty"},
            {"TextLabelBackgroundColorDelegate", 0x190, "DelegateProperty"},
            {"ShowLabelOnlyOnHover", 0x19C, "BoolProperty"},
            {"ShowUnitsText", 0x19D, "BoolProperty"},
            {"IsUnitsTextReadOnly", 0x19E, "BoolProperty"},
            {"IsValueTextReadOnly", 0x19F, "BoolProperty"},
            {"ValueDelegate", 0x1A0, "DelegateProperty"},
            {"SliderBackgroundColor", 0x1AC, "StructProperty"},
            {"SliderBackgroundColorDelegate", 0x1BC, "DelegateProperty"},
            {"SliderBarColor", 0x1C8, "StructProperty"},
            {"SliderBarColorDelegate", 0x1D8, "DelegateProperty"},
            {"SliderThumbColor", 0x1E4, "StructProperty"},
            {"SliderThumbColorDelegate", 0x1F4, "DelegateProperty"},
            {"WidgetBackgroundColor", 0x200, "StructProperty"},
            {"WidgetBackgroundColorDelegate", 0x210, "DelegateProperty"},
            {"orientation", 0x21C, "ByteProperty"},
            {"OnValueChanged", 0x220, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureBegin", 0x230, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x240, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AudioVectorscope
    {
        static constexpr std::string_view Name = "AudioVectorscope";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t VectorscopeStyle = 0x170;
            static constexpr std::uintptr_t AudioBus = 0x300;
            static constexpr std::uintptr_t bShowGrid = 0x308;
            static constexpr std::uintptr_t GridDivisions = 0x30C;
            static constexpr std::uintptr_t MaxDisplayPersistenceMs = 0x310;
            static constexpr std::uintptr_t DisplayPersistenceMs = 0x314;
            static constexpr std::uintptr_t Scale = 0x318;
            static constexpr std::uintptr_t PanelLayoutType = 0x31C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VectorscopeStyle", 0x170, "StructProperty"},
            {"AudioBus", 0x300, "ObjectProperty"},
            {"bShowGrid", 0x308, "BoolProperty"},
            {"GridDivisions", 0x30C, "IntProperty"},
            {"MaxDisplayPersistenceMs", 0x310, "FloatProperty"},
            {"DisplayPersistenceMs", 0x314, "FloatProperty"},
            {"Scale", 0x318, "FloatProperty"},
            {"PanelLayoutType", 0x31C, "EnumProperty"},
        }};
    };

    struct AudioVolumeRadialSlider
    {
        static constexpr std::string_view Name = "AudioVolumeRadialSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioRadialSlider";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x168;
            static constexpr std::uintptr_t ValueDelegate = 0x16C;
            static constexpr std::uintptr_t WidgetLayout = 0x178;
            static constexpr std::uintptr_t CenterBackgroundColor = 0x17C;
            static constexpr std::uintptr_t SliderProgressColor = 0x18C;
            static constexpr std::uintptr_t SliderBarColor = 0x19C;
            static constexpr std::uintptr_t HandStartEndRatio = 0x1B0;
            static constexpr std::uintptr_t UnitsText = 0x1C0;
            static constexpr std::uintptr_t TextLabelBackgroundColor = 0x1D0;
            static constexpr std::uintptr_t ShowLabelOnlyOnHover = 0x1E0;
            static constexpr std::uintptr_t ShowUnitsText = 0x1E1;
            static constexpr std::uintptr_t IsUnitsTextReadOnly = 0x1E2;
            static constexpr std::uintptr_t IsValueTextReadOnly = 0x1E3;
            static constexpr std::uintptr_t SliderThickness = 0x1E4;
            static constexpr std::uintptr_t OutputRange = 0x1E8;
            static constexpr std::uintptr_t OnValueChanged = 0x1F8;
            static constexpr std::uintptr_t OnMouseCaptureBegin = 0x208;
            static constexpr std::uintptr_t OnMouseCaptureEnd = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Value", 0x168, "FloatProperty"},
            {"ValueDelegate", 0x16C, "DelegateProperty"},
            {"WidgetLayout", 0x178, "ByteProperty"},
            {"CenterBackgroundColor", 0x17C, "StructProperty"},
            {"SliderProgressColor", 0x18C, "StructProperty"},
            {"SliderBarColor", 0x19C, "StructProperty"},
            {"HandStartEndRatio", 0x1B0, "StructProperty"},
            {"UnitsText", 0x1C0, "TextProperty"},
            {"TextLabelBackgroundColor", 0x1D0, "StructProperty"},
            {"ShowLabelOnlyOnHover", 0x1E0, "BoolProperty"},
            {"ShowUnitsText", 0x1E1, "BoolProperty"},
            {"IsUnitsTextReadOnly", 0x1E2, "BoolProperty"},
            {"IsValueTextReadOnly", 0x1E3, "BoolProperty"},
            {"SliderThickness", 0x1E4, "FloatProperty"},
            {"OutputRange", 0x1E8, "StructProperty"},
            {"OnValueChanged", 0x1F8, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureBegin", 0x208, "MulticastInlineDelegateProperty"},
            {"OnMouseCaptureEnd", 0x218, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AudioVolumeSlider
    {
        static constexpr std::string_view Name = "AudioVolumeSlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioSlider";
        struct Offsets
        {
            static constexpr std::uintptr_t LinToOutputCurve = 0x8B0;
            static constexpr std::uintptr_t OutputToLinCurve = 0x8B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinToOutputCurve", 0x8B0, "WeakObjectProperty"},
            {"OutputToLinCurve", 0x8B8, "WeakObjectProperty"},
        }};
    };

}
