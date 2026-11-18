#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AttachableWheelsRuntime
{
    struct AttachableWheel
    {
        static constexpr std::string_view Name = "AttachableWheel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t WheelMeshComponent = 0x278;
            static constexpr std::uintptr_t WheelOrientation = 0x280;
            static constexpr std::uintptr_t WheelDistance = 0x298;
            static constexpr std::uintptr_t AxleConstraint = 0x2A0;
            static constexpr std::uintptr_t AttachData = 0x2A8;
            static constexpr std::uintptr_t bAutoCreateAttachableWheelsComponent = 0x300;
            static constexpr std::uintptr_t bEnableWheelWheelCollision = 0x301;
            static constexpr std::uintptr_t bReplicateRuntimeData = 0x302;
            static constexpr std::uintptr_t RuntimeData = 0x304;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"WheelMeshComponent", 0x278, "ObjectProperty"},
            {"WheelOrientation", 0x280, "StructProperty"},
            {"WheelDistance", 0x298, "FloatProperty"},
            {"AxleConstraint", 0x2A0, "ObjectProperty"},
            {"AttachData", 0x2A8, "StructProperty"},
            {"bAutoCreateAttachableWheelsComponent", 0x300, "BoolProperty"},
            {"bEnableWheelWheelCollision", 0x301, "BoolProperty"},
            {"bReplicateRuntimeData", 0x302, "BoolProperty"},
            {"RuntimeData", 0x304, "StructProperty"},
        }};
    };

    struct AttachableWheelsComponent
    {
        static constexpr std::string_view Name = "AttachableWheelsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedWheels = 0xC8;
            static constexpr std::uintptr_t MaxChassisMassFraction = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttachedWheels", 0xC8, "SetProperty"},
            {"MaxChassisMassFraction", 0xD8, "FloatProperty"},
        }};
    };

}
