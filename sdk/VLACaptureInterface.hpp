#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VLACaptureInterface
{
    struct VLACaptureInterfaceSubsystem
    {
        static constexpr std::string_view Name = "VLACaptureInterfaceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnVLACaptureStateChanged = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnVLACaptureStateChanged", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

}
