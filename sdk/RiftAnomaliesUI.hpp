#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RiftAnomaliesUI
{
    struct RiftAnomaliesViewModel
    {
        static constexpr std::string_view Name = "RiftAnomaliesViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Incoming_RiftAnomaliesData = 0x78;
            static constexpr std::uintptr_t Active_RiftAnomaliesData = 0x80;
            static constexpr std::uintptr_t Ended_RiftAnomaliesData = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Incoming_RiftAnomaliesData", 0x78, "ObjectProperty"},
            {"Active_RiftAnomaliesData", 0x80, "ObjectProperty"},
            {"Ended_RiftAnomaliesData", 0x88, "ObjectProperty"},
        }};
    };

}
