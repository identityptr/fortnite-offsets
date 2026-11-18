#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PilgrimProVocalsUI
{
    struct PilgrimProVocalsAccuracyVM
    {
        static constexpr std::string_view Name = "PilgrimProVocalsAccuracyVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionRatingText = 0x90;
            static constexpr std::uintptr_t SectionRatingType = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SectionRatingText", 0x90, "TextProperty"},
            {"SectionRatingType", 0xA0, "EnumProperty"},
        }};
    };

    struct PilgrimProVocalsNoteTubeVM
    {
        static constexpr std::string_view Name = "PilgrimProVocalsNoteTubeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t NoteTubeSdfFill = 0x90;
            static constexpr std::uintptr_t NoteTubeThicknessPixels = 0x94;
            static constexpr std::uintptr_t NoteTubeMarginThickness = 0x98;
            static constexpr std::uintptr_t NoteTubeBodyIntensity = 0x9C;
            static constexpr std::uintptr_t NoteTubeGlowIntensity = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NoteTubeSdfFill", 0x90, "FloatProperty"},
            {"NoteTubeThicknessPixels", 0x94, "FloatProperty"},
            {"NoteTubeMarginThickness", 0x98, "FloatProperty"},
            {"NoteTubeBodyIntensity", 0x9C, "FloatProperty"},
            {"NoteTubeGlowIntensity", 0xA0, "FloatProperty"},
        }};
    };

    struct PilgrimProVocalsNoteTubesWidget
    {
        static constexpr std::string_view Name = "PilgrimProVocalsNoteTubesWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t NoteTubeMaterial = 0x168;
            static constexpr std::uintptr_t DynamicNoteTubeMaterial = 0x170;
            static constexpr std::uintptr_t SongData = 0x178;
            static constexpr std::uintptr_t NoteTubeSdfFill = 0x190;
            static constexpr std::uintptr_t NoteTubeSdfFillParameterName = 0x194;
            static constexpr std::uintptr_t NoteTubeBodyIntensity = 0x198;
            static constexpr std::uintptr_t NoteTubeBodyIntensityParameterName = 0x19C;
            static constexpr std::uintptr_t NoteTubeGlowIntensity = 0x1A0;
            static constexpr std::uintptr_t NoteTubeGlowIntensityParameterName = 0x1A4;
            static constexpr std::uintptr_t WidgetSizeParameterName = 0x1A8;
            static constexpr std::uintptr_t WidgetMatrixParameterName = 0x1AC;
            static constexpr std::uintptr_t WidgetTranslationParameterName = 0x1B0;
            static constexpr std::uintptr_t WidgetColorAndOpacityTintParameterName = 0x1B4;
            static constexpr std::uintptr_t WidgetForegroundColorParameterName = 0x1B8;
            static constexpr std::uintptr_t WidgetSubduedForegroundColorParameterName = 0x1BC;
            static constexpr std::uintptr_t TalkieThicknessOverride = 0x1C0;
            static constexpr std::uintptr_t TalkieVerticalCenter = 0x1C4;
            static constexpr std::uintptr_t TalkieFrontThresholdMargin = 0x1C8;
            static constexpr std::uintptr_t TalkieEndThresholdMargin = 0x1CC;
            static constexpr std::uintptr_t TalkieLeftMargin = 0x1D0;
            static constexpr std::uintptr_t TalkieTopMargin = 0x1D4;
            static constexpr std::uintptr_t TalkieRightMargin = 0x1D8;
            static constexpr std::uintptr_t TalkieBottomMargin = 0x1DC;
            static constexpr std::uintptr_t TalkieLeftTexCoord = 0x1E0;
            static constexpr std::uintptr_t TalkieTopTexCoord = 0x1E4;
            static constexpr std::uintptr_t TalkieRightTexCoord = 0x1E8;
            static constexpr std::uintptr_t TalkieBottomTexCoord = 0x1EC;
            static constexpr std::uintptr_t NoteTubeThicknessOverride = 0x1F0;
            static constexpr std::uintptr_t NoteTubeFrontThresholdMarginThicknessFraction = 0x1F4;
            static constexpr std::uintptr_t NoteTubeEndThresholdMarginThicknessFraction = 0x1F8;
            static constexpr std::uintptr_t NoteTubeFrontCapMarginThicknessFraction = 0x1FC;
            static constexpr std::uintptr_t NoteTubeEndCapMarginThicknessFraction = 0x200;
            static constexpr std::uintptr_t NoteTubeFrontCapTexCoord = 0x204;
            static constexpr std::uintptr_t NoteTubeEndCapTexCoord = 0x208;
            static constexpr std::uintptr_t NoteTubeTransitionStartMarginThicknessFraction = 0x20C;
            static constexpr std::uintptr_t NoteTubeTransitionEndMarginThicknessFraction = 0x210;
            static constexpr std::uintptr_t NowBarOffsetSeconds = 0x214;
            static constexpr std::uintptr_t ViewWidthSeconds = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"NoteTubeMaterial", 0x168, "ObjectProperty"},
            {"DynamicNoteTubeMaterial", 0x170, "ObjectProperty"},
            {"SongData", 0x178, "ObjectProperty"},
            {"NoteTubeSdfFill", 0x190, "FloatProperty"},
            {"NoteTubeSdfFillParameterName", 0x194, "NameProperty"},
            {"NoteTubeBodyIntensity", 0x198, "FloatProperty"},
            {"NoteTubeBodyIntensityParameterName", 0x19C, "NameProperty"},
            {"NoteTubeGlowIntensity", 0x1A0, "FloatProperty"},
            {"NoteTubeGlowIntensityParameterName", 0x1A4, "NameProperty"},
            {"WidgetSizeParameterName", 0x1A8, "NameProperty"},
            {"WidgetMatrixParameterName", 0x1AC, "NameProperty"},
            {"WidgetTranslationParameterName", 0x1B0, "NameProperty"},
            {"WidgetColorAndOpacityTintParameterName", 0x1B4, "NameProperty"},
            {"WidgetForegroundColorParameterName", 0x1B8, "NameProperty"},
            {"WidgetSubduedForegroundColorParameterName", 0x1BC, "NameProperty"},
            {"TalkieThicknessOverride", 0x1C0, "FloatProperty"},
            {"TalkieVerticalCenter", 0x1C4, "FloatProperty"},
            {"TalkieFrontThresholdMargin", 0x1C8, "FloatProperty"},
            {"TalkieEndThresholdMargin", 0x1CC, "FloatProperty"},
            {"TalkieLeftMargin", 0x1D0, "FloatProperty"},
            {"TalkieTopMargin", 0x1D4, "FloatProperty"},
            {"TalkieRightMargin", 0x1D8, "FloatProperty"},
            {"TalkieBottomMargin", 0x1DC, "FloatProperty"},
            {"TalkieLeftTexCoord", 0x1E0, "FloatProperty"},
            {"TalkieTopTexCoord", 0x1E4, "FloatProperty"},
            {"TalkieRightTexCoord", 0x1E8, "FloatProperty"},
            {"TalkieBottomTexCoord", 0x1EC, "FloatProperty"},
            {"NoteTubeThicknessOverride", 0x1F0, "FloatProperty"},
            {"NoteTubeFrontThresholdMarginThicknessFraction", 0x1F4, "FloatProperty"},
            {"NoteTubeEndThresholdMarginThicknessFraction", 0x1F8, "FloatProperty"},
            {"NoteTubeFrontCapMarginThicknessFraction", 0x1FC, "FloatProperty"},
            {"NoteTubeEndCapMarginThicknessFraction", 0x200, "FloatProperty"},
            {"NoteTubeFrontCapTexCoord", 0x204, "FloatProperty"},
            {"NoteTubeEndCapTexCoord", 0x208, "FloatProperty"},
            {"NoteTubeTransitionStartMarginThicknessFraction", 0x20C, "FloatProperty"},
            {"NoteTubeTransitionEndMarginThicknessFraction", 0x210, "FloatProperty"},
            {"NowBarOffsetSeconds", 0x214, "FloatProperty"},
            {"ViewWidthSeconds", 0x218, "FloatProperty"},
        }};
    };

    struct PilgrimProVocalsNowBarConfig
    {
        static constexpr std::string_view Name = "PilgrimProVocalsNowBarConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureActionSingletonAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t AspectEntries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AspectEntries", 0x28, "ArrayProperty"},
        }};
    };

    struct PilgrimProVocalsOverdriveVM
    {
        static constexpr std::string_view Name = "PilgrimProVocalsOverdriveVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsOverdriveReady = 0x90;
            static constexpr std::uintptr_t bIsOverdriveActive = 0x91;
            static constexpr std::uintptr_t bIsOverdriveReadyAndActivateable = 0x92;
            static constexpr std::uintptr_t VisualOverdrive = 0x94;
            static constexpr std::uintptr_t CachedEvaluator = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsOverdriveReady", 0x90, "BoolProperty"},
            {"bIsOverdriveActive", 0x91, "BoolProperty"},
            {"bIsOverdriveReadyAndActivateable", 0x92, "BoolProperty"},
            {"VisualOverdrive", 0x94, "FloatProperty"},
            {"CachedEvaluator", 0x98, "ObjectProperty"},
        }};
    };

    struct PilgrimProVocalsParticlesWidget
    {
        static constexpr std::string_view Name = "PilgrimProVocalsParticlesWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t EmitterOrigin = 0x310;
            static constexpr std::uintptr_t NiagaraSystem = 0x340;
            static constexpr std::uintptr_t NiagaraComponent = 0x348;
            static constexpr std::uintptr_t ParticleMaterial = 0x360;
            static constexpr std::uintptr_t NormalizedAngle = 0x368;
            static constexpr std::uintptr_t NormalizedYPos = 0x36C;
            static constexpr std::uintptr_t PitchIndicatorOpacity = 0x370;
            static constexpr std::uintptr_t NormalizedUserPerformance = 0x374;
            static constexpr std::uintptr_t TimeWindowSeconds = 0x378;
            static constexpr std::uintptr_t SlateToWorldScale = 0x380;
            static constexpr std::uintptr_t WorldToSlateScale = 0x384;
            static constexpr std::uintptr_t bHasSingingTarget = 0x388;
            static constexpr std::uintptr_t bIsSingingTargetNotePerfectly = 0x389;
            static constexpr std::uintptr_t bIsUserSingingTalkie = 0x38A;
            static constexpr std::uintptr_t bIsSingingInOverdrivePhrase = 0x38B;
            static constexpr std::uintptr_t bIsInOverdrive = 0x38C;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"EmitterOrigin", 0x310, "StructProperty"},
            {"NiagaraSystem", 0x340, "ObjectProperty"},
            {"NiagaraComponent", 0x348, "ObjectProperty"},
            {"ParticleMaterial", 0x360, "ObjectProperty"},
            {"NormalizedAngle", 0x368, "FloatProperty"},
            {"NormalizedYPos", 0x36C, "FloatProperty"},
            {"PitchIndicatorOpacity", 0x370, "FloatProperty"},
            {"NormalizedUserPerformance", 0x374, "FloatProperty"},
            {"TimeWindowSeconds", 0x378, "FloatProperty"},
            {"SlateToWorldScale", 0x380, "FloatProperty"},
            {"WorldToSlateScale", 0x384, "FloatProperty"},
            {"bHasSingingTarget", 0x388, "BoolProperty"},
            {"bIsSingingTargetNotePerfectly", 0x389, "BoolProperty"},
            {"bIsUserSingingTalkie", 0x38A, "BoolProperty"},
            {"bIsSingingInOverdrivePhrase", 0x38B, "BoolProperty"},
            {"bIsInOverdrive", 0x38C, "BoolProperty"},
        }};
    };

    struct PilgrimProVocalsPitchIndicatorVM
    {
        static constexpr std::string_view Name = "PilgrimProVocalsPitchIndicatorVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t NormalizedAngle = 0x90;
            static constexpr std::uintptr_t NormalizedYPos = 0x94;
            static constexpr std::uintptr_t Opacity = 0x98;
            static constexpr std::uintptr_t NormalizedUserPerformance = 0x9C;
            static constexpr std::uintptr_t bHasSingingTarget = 0xA0;
            static constexpr std::uintptr_t bIsSingingTargetNotePerfectly = 0xA1;
            static constexpr std::uintptr_t bIsUserSingingTalkie = 0xA2;
            static constexpr std::uintptr_t bIsSingingInOverdrivePhrase = 0xA3;
            static constexpr std::uintptr_t LastPitchPerformance = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"NormalizedAngle", 0x90, "FloatProperty"},
            {"NormalizedYPos", 0x94, "FloatProperty"},
            {"Opacity", 0x98, "FloatProperty"},
            {"NormalizedUserPerformance", 0x9C, "FloatProperty"},
            {"bHasSingingTarget", 0xA0, "BoolProperty"},
            {"bIsSingingTargetNotePerfectly", 0xA1, "BoolProperty"},
            {"bIsUserSingingTalkie", 0xA2, "BoolProperty"},
            {"bIsSingingInOverdrivePhrase", 0xA3, "BoolProperty"},
            {"LastPitchPerformance", 0xB4, "StructProperty"},
        }};
    };

    struct PilgrimProVocalsPlayerScoreVM
    {
        static constexpr std::string_view Name = "PilgrimProVocalsPlayerScoreVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasFullCombo = 0x90;
            static constexpr std::uintptr_t bHasPerfectCombo = 0x91;
            static constexpr std::uintptr_t CachedEvaluator = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bHasFullCombo", 0x90, "BoolProperty"},
            {"bHasPerfectCombo", 0x91, "BoolProperty"},
            {"CachedEvaluator", 0x98, "ObjectProperty"},
        }};
    };

    struct PilgrimProVocalsSectionsWidget
    {
        static constexpr std::string_view Name = "PilgrimProVocalsSectionsWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionLineBrush = 0x170;
            static constexpr std::uintptr_t SongData = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SectionLineBrush", 0x170, "StructProperty"},
            {"SongData", 0x230, "ObjectProperty"},
        }};
    };

    struct PilgrimProVocalsVM
    {
        static constexpr std::string_view Name = "PilgrimProVocalsVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PilgrimEventDrivenVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SongData = 0x90;
            static constexpr std::uintptr_t ViewStartTimeSeconds = 0x98;
            static constexpr std::uintptr_t SongPositionSeconds = 0x9C;
            static constexpr std::uintptr_t LyricsInViewStartIndex = 0xA0;
            static constexpr std::uintptr_t LyricsInViewEndIndex = 0xA4;
            static constexpr std::uintptr_t CurrentLyricIndex = 0xA8;
            static constexpr std::uintptr_t bIsOverdriveReady = 0xAC;
            static constexpr std::uintptr_t bIsOverdriveActive = 0xAD;
            static constexpr std::uintptr_t bIsVoiceActivatedODEnabled = 0xAE;
            static constexpr std::uintptr_t TimeWindowSeconds = 0xB0;
            static constexpr std::uintptr_t NowBarScreenPercentage = 0xB4;
            static constexpr std::uintptr_t NowBarTranslationX = 0xB8;
            static constexpr std::uintptr_t NowBarTranslationVector = 0xC0;
            static constexpr std::uintptr_t NowBarOffsetSeconds = 0xD0;
            static constexpr std::uintptr_t StaticModeEnabled = 0xD4;
            static constexpr std::uintptr_t FadeWidthFraction = 0xD8;
            static constexpr std::uintptr_t StaticLyricsWidgetWidth = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"SongData", 0x90, "ObjectProperty"},
            {"ViewStartTimeSeconds", 0x98, "FloatProperty"},
            {"SongPositionSeconds", 0x9C, "FloatProperty"},
            {"LyricsInViewStartIndex", 0xA0, "IntProperty"},
            {"LyricsInViewEndIndex", 0xA4, "IntProperty"},
            {"CurrentLyricIndex", 0xA8, "IntProperty"},
            {"bIsOverdriveReady", 0xAC, "BoolProperty"},
            {"bIsOverdriveActive", 0xAD, "BoolProperty"},
            {"bIsVoiceActivatedODEnabled", 0xAE, "BoolProperty"},
            {"TimeWindowSeconds", 0xB0, "FloatProperty"},
            {"NowBarScreenPercentage", 0xB4, "FloatProperty"},
            {"NowBarTranslationX", 0xB8, "FloatProperty"},
            {"NowBarTranslationVector", 0xC0, "StructProperty"},
            {"NowBarOffsetSeconds", 0xD0, "FloatProperty"},
            {"StaticModeEnabled", 0xD4, "BoolProperty"},
            {"FadeWidthFraction", 0xD8, "FloatProperty"},
            {"StaticLyricsWidgetWidth", 0xDC, "FloatProperty"},
        }};
    };

}
