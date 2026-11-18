#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMCalibrationUI
{
    struct CalibrationProcessVM
    {
        static constexpr std::string_view Name = "CalibrationProcessVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStageCompletion = 0x68;
            static constexpr std::uintptr_t CachedCalibrationComponent = 0x78;
            static constexpr std::uintptr_t MusicClockComponent = 0x80;
            static constexpr std::uintptr_t MinAudioCalibrationMs = 0x88;
            static constexpr std::uintptr_t MaxAudioCalibrationMs = 0x8C;
            static constexpr std::uintptr_t MinVideoCalibrationMs = 0x90;
            static constexpr std::uintptr_t MaxVideoCalibrationMs = 0x94;
            static constexpr std::uintptr_t FractionToDiscard = 0x98;
            static constexpr std::uintptr_t AudioAccuracyMs = 0x9C;
            static constexpr std::uintptr_t VideoAccuracyMs = 0xA0;
            static constexpr std::uintptr_t InaccuracyMultiplier = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnStageCompletion", 0x68, "MulticastInlineDelegateProperty"},
            {"CachedCalibrationComponent", 0x78, "WeakObjectProperty"},
            {"MusicClockComponent", 0x80, "WeakObjectProperty"},
            {"MinAudioCalibrationMs", 0x88, "FloatProperty"},
            {"MaxAudioCalibrationMs", 0x8C, "FloatProperty"},
            {"MinVideoCalibrationMs", 0x90, "FloatProperty"},
            {"MaxVideoCalibrationMs", 0x94, "FloatProperty"},
            {"FractionToDiscard", 0x98, "FloatProperty"},
            {"AudioAccuracyMs", 0x9C, "FloatProperty"},
            {"VideoAccuracyMs", 0xA0, "FloatProperty"},
            {"InaccuracyMultiplier", 0xA4, "FloatProperty"},
        }};
    };

    struct CalibrationProfileVM
    {
        static constexpr std::string_view Name = "CalibrationProfileVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasUsedCalibrationProfileFeature = 0x68;
            static constexpr std::uintptr_t ActiveProfileIndex = 0x6C;
            static constexpr std::uintptr_t CalibrationComponent = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bHasUsedCalibrationProfileFeature", 0x68, "BoolProperty"},
            {"ActiveProfileIndex", 0x6C, "IntProperty"},
            {"CalibrationComponent", 0x70, "ObjectProperty"},
        }};
    };

    struct FMCalibrationScreenWidgetBase
    {
        static constexpr std::string_view Name = "FMCalibrationScreenWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableCalibrometerCheat = 0x4A0;
            static constexpr std::uintptr_t LastInputTimestamp = 0x4A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnableCalibrometerCheat", 0x4A0, "BoolProperty"},
            {"LastInputTimestamp", 0x4A8, "DoubleProperty"},
        }};
    };

}
