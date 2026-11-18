#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WildEstateRuntime
{
    struct VoidSlideLayerAnimInstance
    {
        static constexpr std::string_view Name = "VoidSlideLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t SeatIndex = 0x5F0;
            static constexpr std::uintptr_t bIsSeat01SpawnProp = 0x5F4;
            static constexpr std::uintptr_t bIsSeat03SpawnProp = 0x5F5;
            static constexpr std::uintptr_t bIsSeat04SpawnProp = 0x5F6;
            static constexpr std::uintptr_t bSeatSwapped = 0x5F7;
            static constexpr std::uintptr_t TriggerTimeRemaining = 0x5F8;
            static constexpr std::uintptr_t bTriggerIdleBreak = 0x600;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SeatIndex", 0x5F0, "IntProperty"},
            {"bIsSeat01SpawnProp", 0x5F4, "BoolProperty"},
            {"bIsSeat03SpawnProp", 0x5F5, "BoolProperty"},
            {"bIsSeat04SpawnProp", 0x5F6, "BoolProperty"},
            {"bSeatSwapped", 0x5F7, "BoolProperty"},
            {"TriggerTimeRemaining", 0x5F8, "DoubleProperty"},
            {"bTriggerIdleBreak", 0x600, "BoolProperty"},
        }};
    };

    struct VoidSlidePlayerComponentInterface
    {
        static constexpr std::string_view Name = "VoidSlidePlayerComponentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
