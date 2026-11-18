#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimProVocalsLyricsUI
{
    struct PilgrimProVocalsLyricWidgetBase
    {
        static constexpr std::string_view Name = "PilgrimProVocalsLyricWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TalkieFont = 0x308;
            static constexpr std::uintptr_t LyricFont = 0x360;
            static constexpr std::uintptr_t StandardColors = 0x3B8;
            static constexpr std::uintptr_t OverdriveColors = 0x3F4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TalkieFont", 0x308, "StructProperty"},
            {"LyricFont", 0x360, "StructProperty"},
            {"StandardColors", 0x3B8, "StructProperty"},
            {"OverdriveColors", 0x3F4, "StructProperty"},
        }};
    };

    struct PilgrimProVocalsLyricsViewWidgetBase
    {
        static constexpr std::string_view Name = "PilgrimProVocalsLyricsViewWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SongData = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SongData", 0x330, "ObjectProperty"},
        }};
    };

    struct PilgrimProVocalsScrollingLyricWidget
    {
        static constexpr std::string_view Name = "PilgrimProVocalsScrollingLyricWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimProVocalsLyricWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TalkieFont = 0x308;
            static constexpr std::uintptr_t LyricFont = 0x360;
            static constexpr std::uintptr_t StandardColors = 0x3B8;
            static constexpr std::uintptr_t OverdriveColors = 0x3F4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TalkieFont", 0x308, "StructProperty"},
            {"LyricFont", 0x360, "StructProperty"},
            {"StandardColors", 0x3B8, "StructProperty"},
            {"OverdriveColors", 0x3F4, "StructProperty"},
        }};
    };

    struct PilgrimProVocalsScrollingLyricsViewWidget
    {
        static constexpr std::string_view Name = "PilgrimProVocalsScrollingLyricsViewWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimProVocalsLyricsViewWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LyricTemplate = 0x338;
            static constexpr std::uintptr_t OverdriveDeploySectionBrush = 0x340;
            static constexpr std::uintptr_t LyricWidgets = 0x3F8;
            static constexpr std::uintptr_t LyricPool = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LyricTemplate", 0x338, "ClassProperty"},
            {"OverdriveDeploySectionBrush", 0x340, "StructProperty"},
            {"LyricWidgets", 0x3F8, "MapProperty"},
            {"LyricPool", 0x408, "ArrayProperty"},
        }};
    };

    struct PilgrimProVocalsStaticLyricsViewWidget
    {
        static constexpr std::string_view Name = "PilgrimProVocalsStaticLyricsViewWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimProVocalsLyricsViewWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CountInBrush = 0x340;
            static constexpr std::uintptr_t CountInProgressParameter = 0x3F0;
            static constexpr std::uintptr_t CountInLyricGapPx = 0x3F4;
            static constexpr std::uintptr_t PhraseRowGapPx = 0x3F8;
            static constexpr std::uintptr_t SungToTalkieSeamNudgePx = 0x3FC;
            static constexpr std::uintptr_t TalkieToSungSeamNudgePx = 0x400;
            static constexpr std::uintptr_t FutureLyricFontSize = 0x404;
            static constexpr std::uintptr_t SungFont = 0x408;
            static constexpr std::uintptr_t TalkieFont = 0x460;
            static constexpr std::uintptr_t StandardColors = 0x4B8;
            static constexpr std::uintptr_t OverdriveColors = 0x4F4;
            static constexpr std::uintptr_t LyricsFontMaterial = 0x530;
            static constexpr std::uintptr_t SweepFractionParameter = 0x538;
            static constexpr std::uintptr_t PastColorParameter = 0x53C;
            static constexpr std::uintptr_t CurrentColorParameter = 0x540;
            static constexpr std::uintptr_t PhraseAdvanceDurationSeconds = 0x544;
            static constexpr std::uintptr_t PhraseAdvanceColorCurve = 0x548;
            static constexpr std::uintptr_t PhraseAdvanceSizeCurve = 0x550;
            static constexpr std::uintptr_t PhraseAdvanceYOffsetCurve = 0x558;
            static constexpr std::uintptr_t PhraseAdvanceFadeOutDurationSeconds = 0x560;
            static constexpr std::uintptr_t PhraseAdvanceFadeOutCurve = 0x568;
            static constexpr std::uintptr_t CountInMID = 0x580;
            static constexpr std::uintptr_t SegMIDs = 0x588;
            static constexpr std::uintptr_t RetiringSegMIDs = 0x598;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"CountInBrush", 0x340, "StructProperty"},
            {"CountInProgressParameter", 0x3F0, "NameProperty"},
            {"CountInLyricGapPx", 0x3F4, "FloatProperty"},
            {"PhraseRowGapPx", 0x3F8, "FloatProperty"},
            {"SungToTalkieSeamNudgePx", 0x3FC, "FloatProperty"},
            {"TalkieToSungSeamNudgePx", 0x400, "FloatProperty"},
            {"FutureLyricFontSize", 0x404, "FloatProperty"},
            {"SungFont", 0x408, "StructProperty"},
            {"TalkieFont", 0x460, "StructProperty"},
            {"StandardColors", 0x4B8, "StructProperty"},
            {"OverdriveColors", 0x4F4, "StructProperty"},
            {"LyricsFontMaterial", 0x530, "ObjectProperty"},
            {"SweepFractionParameter", 0x538, "NameProperty"},
            {"PastColorParameter", 0x53C, "NameProperty"},
            {"CurrentColorParameter", 0x540, "NameProperty"},
            {"PhraseAdvanceDurationSeconds", 0x544, "FloatProperty"},
            {"PhraseAdvanceColorCurve", 0x548, "ObjectProperty"},
            {"PhraseAdvanceSizeCurve", 0x550, "ObjectProperty"},
            {"PhraseAdvanceYOffsetCurve", 0x558, "ObjectProperty"},
            {"PhraseAdvanceFadeOutDurationSeconds", 0x560, "FloatProperty"},
            {"PhraseAdvanceFadeOutCurve", 0x568, "ObjectProperty"},
            {"CountInMID", 0x580, "ObjectProperty"},
            {"SegMIDs", 0x588, "ArrayProperty"},
            {"RetiringSegMIDs", 0x598, "ArrayProperty"},
        }};
    };

}
