#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMediaOptions
{
    struct EpicGlobalMediaOptions
    {
        static constexpr std::string_view Name = "EpicGlobalMediaOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VUIDListToAttemptRedirectToQuicksilverEntryPoint = 0x28;
            static constexpr std::uintptr_t RolloutPercentageToRedirectToQuicksilverEntryPoint = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VUIDListToAttemptRedirectToQuicksilverEntryPoint", 0x28, "ArrayProperty"},
            {"RolloutPercentageToRedirectToQuicksilverEntryPoint", 0x38, "FloatProperty"},
        }};
    };

    struct EpicMediaOptions
    {
        static constexpr std::string_view Name = "EpicMediaOptions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameRate = 0x4;
            static constexpr std::uintptr_t MaxResolutionForMediaStreaming = 0x8;
            static constexpr std::uintptr_t MaxElectraVerticalResolutionOf60fpsVideos = 0xC;
            static constexpr std::uintptr_t MaxElectraVerticalResolutionOfWindowsSWD = 0x10;
            static constexpr std::uintptr_t bElectraLiveUseConservativePresentationOffset = 0x14;
            static constexpr std::uintptr_t bElectraUseDedicatedMediaSegmentDownloadThreads = 0x15;
            static constexpr std::uintptr_t ElectraLivePresentationOffset = 0x18;
            static constexpr std::uintptr_t ElectraLiveAudioPresentationOffset = 0x20;
            static constexpr std::uintptr_t bDisableBlastURLStreamSource = 0x28;
            static constexpr std::uintptr_t bIsCN = 0x29;
            static constexpr std::uintptr_t VideoEVMap = 0x30;
            static constexpr std::uintptr_t CDNDistribution = 0x40;
            static constexpr std::uintptr_t VODHostNames = 0x50;
            static constexpr std::uintptr_t VODHostNamesCN = 0x60;
            static constexpr std::uintptr_t LiveHostNames = 0x70;
            static constexpr std::uintptr_t LiveHostNamesCN = 0x80;
            static constexpr std::uintptr_t VODHostNamesDev = 0x90;
            static constexpr std::uintptr_t LiveHostNamesDev = 0xA0;
            static constexpr std::uintptr_t VODHostNamesHF = 0xB0;
            static constexpr std::uintptr_t LiveHostNamesHF = 0xC0;
            static constexpr std::uintptr_t VODHostNamesCNHF = 0xD0;
            static constexpr std::uintptr_t LiveHostNamesCNHF = 0xE0;
            static constexpr std::uintptr_t bUseQuicksilverEntryPoint = 0xF0;
            static constexpr std::uintptr_t bUseSegmentCaching = 0x108;
            static constexpr std::uintptr_t bForceSegmentCaching = 0x109;
            static constexpr std::uintptr_t MetadataRequestTimeout = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"FrameRate", 0x4, "IntProperty"},
            {"MaxResolutionForMediaStreaming", 0x8, "IntProperty"},
            {"MaxElectraVerticalResolutionOf60fpsVideos", 0xC, "IntProperty"},
            {"MaxElectraVerticalResolutionOfWindowsSWD", 0x10, "IntProperty"},
            {"bElectraLiveUseConservativePresentationOffset", 0x14, "BoolProperty"},
            {"bElectraUseDedicatedMediaSegmentDownloadThreads", 0x15, "BoolProperty"},
            {"ElectraLivePresentationOffset", 0x18, "DoubleProperty"},
            {"ElectraLiveAudioPresentationOffset", 0x20, "DoubleProperty"},
            {"bDisableBlastURLStreamSource", 0x28, "BoolProperty"},
            {"bIsCN", 0x29, "BoolProperty"},
            {"VideoEVMap", 0x30, "ArrayProperty"},
            {"CDNDistribution", 0x40, "ArrayProperty"},
            {"VODHostNames", 0x50, "ArrayProperty"},
            {"VODHostNamesCN", 0x60, "ArrayProperty"},
            {"LiveHostNames", 0x70, "ArrayProperty"},
            {"LiveHostNamesCN", 0x80, "ArrayProperty"},
            {"VODHostNamesDev", 0x90, "ArrayProperty"},
            {"LiveHostNamesDev", 0xA0, "ArrayProperty"},
            {"VODHostNamesHF", 0xB0, "ArrayProperty"},
            {"LiveHostNamesHF", 0xC0, "ArrayProperty"},
            {"VODHostNamesCNHF", 0xD0, "ArrayProperty"},
            {"LiveHostNamesCNHF", 0xE0, "ArrayProperty"},
            {"bUseQuicksilverEntryPoint", 0xF0, "BoolProperty"},
            {"bUseSegmentCaching", 0x108, "BoolProperty"},
            {"bForceSegmentCaching", 0x109, "BoolProperty"},
            {"MetadataRequestTimeout", 0x10C, "FloatProperty"},
        }};
    };

}
