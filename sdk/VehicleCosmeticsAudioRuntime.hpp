#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VehicleCosmeticsAudioRuntime
{
    struct VehicleCosmeticsAudioReceiverComponent
    {
        static constexpr std::string_view Name = "VehicleCosmeticsAudioReceiverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnVehicleAudioCosmeticsStructUpdated = 0xC0;
            static constexpr std::uintptr_t OnVehicleAudioCosmeticsFailed = 0xD0;
            static constexpr std::uintptr_t OnVehicleAudioCosmeticsDataReady = 0xE0;
            static constexpr std::uintptr_t CachedCosmeticDataTable = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnVehicleAudioCosmeticsStructUpdated", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnVehicleAudioCosmeticsFailed", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnVehicleAudioCosmeticsDataReady", 0xE0, "MulticastInlineDelegateProperty"},
            {"CachedCosmeticDataTable", 0xF0, "SoftObjectProperty"},
        }};
    };

}
