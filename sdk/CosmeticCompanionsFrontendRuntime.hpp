#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticCompanionsFrontendRuntime
{
    struct FortPlayerCompanionFrontendComponent
    {
        static constexpr std::string_view Name = "FortPlayerCompanionFrontendComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerCompanionClass = 0xC0;
            static constexpr std::uintptr_t PlayerCompanion = 0xE0;
            static constexpr std::uintptr_t CompanionItemDefinition = 0xE8;
            static constexpr std::uintptr_t BackgroundOffsets = 0xF0;
            static constexpr std::uintptr_t Offsets_ = 0x100;
            static constexpr std::uintptr_t ItemDefAdditionalOffset = 0x110;
            static constexpr std::uintptr_t PreviewWithPawnContextTag = 0x128;
            static constexpr std::uintptr_t HologramMaterial = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PlayerCompanionClass", 0xC0, "SoftClassProperty"},
            {"PlayerCompanion", 0xE0, "ObjectProperty"},
            {"CompanionItemDefinition", 0xE8, "ObjectProperty"},
            {"BackgroundOffsets", 0xF0, "ArrayProperty"},
            {"Offsets", 0x100, "ArrayProperty"},
            {"ItemDefAdditionalOffset", 0x110, "StructProperty"},
            {"PreviewWithPawnContextTag", 0x128, "StructProperty"},
            {"HologramMaterial", 0x1B8, "ObjectProperty"},
        }};
    };

    struct FortPlayerCompanionPedestalAdjustComponent
    {
        static constexpr std::string_view Name = "FortPlayerCompanionPedestalAdjustComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryGroupPedestalIndexes = 0xC0;
            static constexpr std::uintptr_t BackgroundGroupPedestalIndexes = 0xE0;
            static constexpr std::uintptr_t ExtraDistanceToMoveForCompanion = 0x100;
            static constexpr std::uintptr_t PedestalPadOffset = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PrimaryGroupPedestalIndexes", 0xC0, "StructProperty"},
            {"BackgroundGroupPedestalIndexes", 0xE0, "StructProperty"},
            {"ExtraDistanceToMoveForCompanion", 0x100, "FloatProperty"},
            {"PedestalPadOffset", 0x108, "StructProperty"},
        }};
    };

}
