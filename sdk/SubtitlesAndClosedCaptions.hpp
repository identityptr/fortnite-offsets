#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SubtitlesAndClosedCaptions
{
    struct ActiveSubtitleAssetData
    {
        static constexpr std::string_view Name = "ActiveSubtitleAssetData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Subtitle = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Subtitle", 0x0, "StructProperty"},
        }};
    };

    struct MovieSceneSubtitleSection
    {
        static constexpr std::string_view Name = "MovieSceneSubtitleSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleAsset = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubtitleAsset", 0x148, "ObjectProperty"},
        }};
    };

    struct MovieSceneSubtitlesSystem
    {
        static constexpr std::string_view Name = "MovieSceneSubtitlesSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneEntitySystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Linker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Linker", 0x28, "ObjectProperty"},
        }};
    };

    struct MovieSceneSubtitlesTrack
    {
        static constexpr std::string_view Name = "MovieSceneSubtitlesTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleSections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubtitleSections", 0xF8, "ArrayProperty"},
        }};
    };

    struct SubtitleDataComponent
    {
        static constexpr std::string_view Name = "SubtitleDataComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleSection = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubtitleSection", 0x0, "ObjectProperty"},
        }};
    };

    struct SubtitleWidget
    {
        static constexpr std::string_view Name = "SubtitleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogSubtitleBlock = 0x318;
            static constexpr std::uintptr_t CaptionSubtitleBlock = 0x320;
            static constexpr std::uintptr_t DescriptionSubtitleBlock = 0x328;
            static constexpr std::uintptr_t DialogBorder = 0x330;
            static constexpr std::uintptr_t CaptionBorder = 0x338;
            static constexpr std::uintptr_t DescriptionBorder = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DialogSubtitleBlock", 0x318, "ObjectProperty"},
            {"CaptionSubtitleBlock", 0x320, "ObjectProperty"},
            {"DescriptionSubtitleBlock", 0x328, "ObjectProperty"},
            {"DialogBorder", 0x330, "ObjectProperty"},
            {"CaptionBorder", 0x338, "ObjectProperty"},
            {"DescriptionBorder", 0x340, "ObjectProperty"},
        }};
    };

    struct SubtitlesAudioSubsystem
    {
        static constexpr std::string_view Name = "SubtitlesAudioSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SubtitlesBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "SubtitlesBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "IsSubtitleActive",
            "QueueSingleSubtitle",
            "QueueSubtitle",
            "QueueSubtitlesFromAsset",
            "ReplaceSubtitleWidget",
            "StopAllSubtitles",
            "StopSubtitle",
            "StopSubtitlesInAsset",
        }};
    };

    struct SubtitlesSettings
    {
        static constexpr std::string_view Name = "SubtitlesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleWidgetToUse = 0x40;
            static constexpr std::uintptr_t SubtitleWidgetToUseDefault = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubtitleWidgetToUse", 0x40, "SoftClassProperty"},
            {"SubtitleWidgetToUseDefault", 0x60, "SoftClassProperty"},
        }};
    };

    struct SubtitlesSubsystem
    {
        static constexpr std::string_view Name = "SubtitlesSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SubtitleFontInfo = 0x38;
            static constexpr std::uintptr_t ActiveSubtitles = 0x48;
            static constexpr std::uintptr_t DelayedSubtitles = 0x58;
            static constexpr std::uintptr_t ViewportWidget = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SubtitleFontInfo", 0x38, "MapProperty"},
            {"ActiveSubtitles", 0x48, "ArrayProperty"},
            {"DelayedSubtitles", 0x58, "ArrayProperty"},
            {"ViewportWidget", 0x68, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "MakeDelayedSubtitleActive",
            "RemoveActiveSubtitle",
        }};
    };

}
