#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SubtitlesWidgets
{
    struct FortMediaSubtitlesPlayer
    {
        static constexpr std::string_view Name = "FortMediaSubtitlesPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceSubtitles = 0x30;
            static constexpr std::uintptr_t CurrentSubtitleData = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourceSubtitles", 0x30, "ObjectProperty"},
            {"CurrentSubtitleData", 0xA0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "BindToMediaPlayer",
            "OnSeekCompleted",
            "Play",
            "SetSubtitles",
            "Stop",
        }};
    };

    struct FortSubtitleWidget
    {
        static constexpr std::string_view Name = "FortSubtitleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SubtitleWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t Format = 0x348;
            static constexpr std::uintptr_t Options = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Format", 0x348, "StructProperty"},
            {"Options", 0x350, "ObjectProperty"},
        }};
    };

    struct GameFeatureAction_ReplaceSubtitleWidget
    {
        static constexpr std::string_view Name = "GameFeatureAction_ReplaceSubtitleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleWidget = 0x28;
            static constexpr std::uintptr_t Priority = 0x48;
            static constexpr std::uintptr_t LoadedWidget = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SubtitleWidget", 0x28, "SoftClassProperty"},
            {"Priority", 0x48, "UInt32Property"},
            {"LoadedWidget", 0x50, "ClassProperty"},
        }};
    };

    struct SubtitleDisplay
    {
        static constexpr std::string_view Name = "SubtitleDisplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t Format = 0x168;
            static constexpr std::uintptr_t Options = 0x170;
            static constexpr std::uintptr_t WrapTextAt = 0x178;
            static constexpr std::uintptr_t bPreviewMode = 0x17C;
            static constexpr std::uintptr_t PreviewText = 0x180;
            static constexpr std::uintptr_t GeneratedStyle = 0x190;
            static constexpr std::uintptr_t GeneratedBackgroundBorder = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Format", 0x168, "StructProperty"},
            {"Options", 0x170, "ObjectProperty"},
            {"WrapTextAt", 0x178, "FloatProperty"},
            {"bPreviewMode", 0x17C, "BoolProperty"},
            {"PreviewText", 0x180, "TextProperty"},
            {"GeneratedStyle", 0x190, "StructProperty"},
            {"GeneratedBackgroundBorder", 0x470, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "HasSubtitles",
        }};
    };

    struct SubtitleDisplayNative
    {
        static constexpr std::string_view Name = "SubtitleDisplayNative";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Options = 0x30;
            static constexpr std::uintptr_t GeneratedStyle = 0x40;
            static constexpr std::uintptr_t GeneratedBackgroundBorder = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Options", 0x30, "ObjectProperty"},
            {"GeneratedStyle", 0x40, "StructProperty"},
            {"GeneratedBackgroundBorder", 0x320, "StructProperty"},
        }};
    };

    struct SubtitleDisplayOptions
    {
        static constexpr std::string_view Name = "SubtitleDisplayOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Font = 0x28;
            static constexpr std::uintptr_t DisplayTextSizes = 0x80;
            static constexpr std::uintptr_t DisplayTextColors = 0x94;
            static constexpr std::uintptr_t DisplayBorderSize = 0xB4;
            static constexpr std::uintptr_t DisplayBackgroundOpacity = 0xC0;
            static constexpr std::uintptr_t BackgroundBrush = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Font", 0x28, "StructProperty"},
            {"DisplayTextSizes", 0x80, "IntProperty"},
            {"DisplayTextColors", 0x94, "StructProperty"},
            {"DisplayBorderSize", 0xB4, "FloatProperty"},
            {"DisplayBackgroundOpacity", 0xC0, "FloatProperty"},
            {"BackgroundBrush", 0xE0, "StructProperty"},
        }};
    };

    struct SubtitleDisplaySubsystem
    {
        static constexpr std::string_view Name = "SubtitleDisplaySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleFormat = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubtitleFormat", 0x48, "StructProperty"},
        }};
    };

    struct SubtitleFormat
    {
        static constexpr std::string_view Name = "SubtitleFormat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleTextSize = 0x0;
            static constexpr std::uintptr_t SubtitleTextColor = 0x1;
            static constexpr std::uintptr_t SubtitleTextBorder = 0x2;
            static constexpr std::uintptr_t SubtitleBackgroundOpacity = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SubtitleTextSize", 0x0, "EnumProperty"},
            {"SubtitleTextColor", 0x1, "EnumProperty"},
            {"SubtitleTextBorder", 0x2, "EnumProperty"},
            {"SubtitleBackgroundOpacity", 0x3, "EnumProperty"},
        }};
    };

    struct SubtitleWidgetPriorityData
    {
        static constexpr std::string_view Name = "SubtitleWidgetPriorityData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleWidget = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubtitleWidget", 0x0, "ClassProperty"},
        }};
    };

    struct SubtitleWidgetPrioritySubsystem
    {
        static constexpr std::string_view Name = "SubtitleWidgetPrioritySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleWidgetData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubtitleWidgetData", 0x38, "ArrayProperty"},
        }};
    };

}
