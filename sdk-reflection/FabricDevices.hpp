#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FabricDevices
{
    struct FabricDeviceComponent
    {
        static constexpr std::string_view Name = "FabricDeviceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricDeviceComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bListenToMusicManagerEvents = 0x100;
            static constexpr std::uintptr_t OnTempoChangedDelegate = 0x108;
            static constexpr std::uintptr_t OnSpeedChangedDelegate = 0x118;
            static constexpr std::uintptr_t OnKeyChangedDelegate = 0x128;
            static constexpr std::uintptr_t OnModeChangedDelegate = 0x138;
            static constexpr std::uintptr_t OnTimeSignatureChangedDelegate = 0x148;
            static constexpr std::uintptr_t SpeakerManager = 0x158;
            static constexpr std::uintptr_t MetaSoundManager = 0x160;
            static constexpr std::uintptr_t MusicManager = 0x168;
            static constexpr std::uintptr_t MusicClock = 0x170;
            static constexpr std::uintptr_t MusicTempometer = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bListenToMusicManagerEvents", 0x100, "BoolProperty"},
            {"OnTempoChangedDelegate", 0x108, "MulticastInlineDelegateProperty"},
            {"OnSpeedChangedDelegate", 0x118, "MulticastInlineDelegateProperty"},
            {"OnKeyChangedDelegate", 0x128, "MulticastInlineDelegateProperty"},
            {"OnModeChangedDelegate", 0x138, "MulticastInlineDelegateProperty"},
            {"OnTimeSignatureChangedDelegate", 0x148, "MulticastInlineDelegateProperty"},
            {"SpeakerManager", 0x158, "WeakObjectProperty"},
            {"MetaSoundManager", 0x160, "WeakObjectProperty"},
            {"MusicManager", 0x168, "WeakObjectProperty"},
            {"MusicClock", 0x170, "WeakObjectProperty"},
            {"MusicTempometer", 0x178, "WeakObjectProperty"},
        }};
    };

}
