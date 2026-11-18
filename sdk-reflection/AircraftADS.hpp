#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AircraftADS
{
    struct FortControllerComponent_AircraftADS
    {
        static constexpr std::string_view Name = "FortControllerComponent_AircraftADS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnADSCameraActivation = 0xC8;
            static constexpr std::uintptr_t OnADSCameraDeactivation = 0xD8;
            static constexpr std::uintptr_t AircraftCameraEnabled = 0xE8;
            static constexpr std::uintptr_t ADSCooldown = 0x118;
            static constexpr std::uintptr_t CameraModeTag = 0x148;
            static constexpr std::uintptr_t ZoomInCameraModeClass = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnADSCameraActivation", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnADSCameraDeactivation", 0xD8, "MulticastInlineDelegateProperty"},
            {"AircraftCameraEnabled", 0xE8, "StructProperty"},
            {"ADSCooldown", 0x118, "StructProperty"},
            {"CameraModeTag", 0x148, "StructProperty"},
            {"ZoomInCameraModeClass", 0x150, "ClassProperty"},
        }};
    };

}
