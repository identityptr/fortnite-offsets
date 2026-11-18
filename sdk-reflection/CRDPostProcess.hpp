#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRDPostProcess
{
    struct CRDPostProcessDeviceComponent
    {
        static constexpr std::string_view Name = "CRDPostProcessDeviceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PostProcessComponent = 0xC0;
            static constexpr std::uintptr_t BlendInstigator = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PostProcessComponent", 0xC0, "ObjectProperty"},
            {"BlendInstigator", 0xC8, "ObjectProperty"},
        }};
    };

    struct CRDPostProcessDeviceControllerComponent
    {
        static constexpr std::string_view Name = "CRDPostProcessDeviceControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPostProcessDeviceMessageRecieved = 0xC0;
            static constexpr std::uintptr_t OnPostProcessDeviceBlendFinished = 0xD0;
            static constexpr std::uintptr_t PostProcessDeviceMessageBatch = 0xE0;
            static constexpr std::uintptr_t PostProcessDeviceMessageQueue = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnPostProcessDeviceMessageRecieved", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPostProcessDeviceBlendFinished", 0xD0, "MulticastInlineDelegateProperty"},
            {"PostProcessDeviceMessageBatch", 0xE0, "StructProperty"},
            {"PostProcessDeviceMessageQueue", 0x158, "ArrayProperty"},
        }};
    };

    struct CRDPostProcessDevicePriorityControllerComponent
    {
        static constexpr std::string_view Name = "CRDPostProcessDevicePriorityControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAppliedEffects = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedAppliedEffects", 0xC0, "ArrayProperty"},
        }};
    };

}
