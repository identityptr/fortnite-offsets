#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiveLinkHubMessaging
{
    struct LiveLinkHubCustomTimeStep
    {
        static constexpr std::string_view Name = "LiveLinkHubCustomTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkCustomTimeStep";
        struct Offsets
        {
            static constexpr std::uintptr_t LiveLinkDataRate = 0x30;
            static constexpr std::uintptr_t SubjectKey = 0x38;
            static constexpr std::uintptr_t bLockStepMode = 0x4C;
            static constexpr std::uintptr_t FrameRateDivider = 0x50;
            static constexpr std::uintptr_t TimeoutInSeconds = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LiveLinkDataRate", 0x30, "StructProperty"},
            {"SubjectKey", 0x38, "StructProperty"},
            {"bLockStepMode", 0x4C, "BoolProperty"},
            {"FrameRateDivider", 0x50, "UInt32Property"},
            {"TimeoutInSeconds", 0x58, "DoubleProperty"},
        }};
    };

    struct LiveLinkHubMessageBusSourceFactory
    {
        static constexpr std::string_view Name = "LiveLinkHubMessageBusSourceFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkMessageBusSourceFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LiveLinkHubMessageBusSourceSettings
    {
        static constexpr std::string_view Name = "LiveLinkHubMessageBusSourceSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkMessageBusSourceSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableFrameResequencing = 0xB8;
            static constexpr std::uintptr_t ResequencerMaxBufferSize = 0xBC;
            static constexpr std::uintptr_t ResequencerMaxWaitTimeSeconds = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableFrameResequencing", 0xB8, "BoolProperty"},
            {"ResequencerMaxBufferSize", 0xBC, "IntProperty"},
            {"ResequencerMaxWaitTimeSeconds", 0xC0, "FloatProperty"},
        }};
    };

    struct LiveLinkHubMessagingSettings
    {
        static constexpr std::string_view Name = "LiveLinkHubMessagingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowReceivingFromUnreal = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAllowReceivingFromUnreal", 0x28, "BoolProperty"},
        }};
    };

    struct LiveLinkHubTimecodeCustomTimeStep
    {
        static constexpr std::string_view Name = "LiveLinkHubTimecodeCustomTimeStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TimecodeCustomTimeStep";
        struct Offsets
        {
            static constexpr std::uintptr_t bErrorIfFrameAreNotConsecutive = 0x28;
            static constexpr std::uintptr_t bErrorIfTimecodeProviderChanged = 0x29;
            static constexpr std::uintptr_t MaxDeltaTime = 0x2C;
            static constexpr std::uintptr_t bIgnoreSubframes = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bErrorIfFrameAreNotConsecutive", 0x28, "BoolProperty"},
            {"bErrorIfTimecodeProviderChanged", 0x29, "BoolProperty"},
            {"MaxDeltaTime", 0x2C, "FloatProperty"},
            {"bIgnoreSubframes", 0x30, "BoolProperty"},
        }};
    };

}
