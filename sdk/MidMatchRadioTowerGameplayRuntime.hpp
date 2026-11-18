#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MidMatchRadioTowerGameplayRuntime
{
    struct BuildingGameplayActorRadioTower
    {
        static constexpr std::string_view Name = "BuildingGameplayActorRadioTower";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkLinkedRadioTowerTerminal = 0x940;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MarkLinkedRadioTowerTerminal", 0x940, "StructProperty"},
        }};
    };

    struct RadioTowerTerminal
    {
        static constexpr std::string_view Name = "RadioTowerTerminal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxInteractHalfAngle = 0x940;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxInteractHalfAngle", 0x940, "FloatProperty"},
        }};
    };

    struct RemoveFoliageBoxComponent
    {
        static constexpr std::string_view Name = "RemoveFoliageBoxComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BoxComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxExtent = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoxExtent", 0x580, "StructProperty"},
        }};
    };

}
