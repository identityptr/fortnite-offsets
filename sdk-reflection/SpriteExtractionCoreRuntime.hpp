#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpriteExtractionCoreRuntime
{
    struct FortExtractableSpriteDefinition
    {
        static constexpr std::string_view Name = "FortExtractableSpriteDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ExtractableItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t PossibleAugments = 0x4D8;
            static constexpr std::uintptr_t LevelUpExpCurve = 0x4E8;
            static constexpr std::uintptr_t RelicPointsOnExtraction = 0x510;
            static constexpr std::uintptr_t ParentExtractableDefinition = 0x520;
            static constexpr std::uintptr_t DexNumber = 0x540;
            static constexpr std::uintptr_t ExtractableType = 0x544;
            static constexpr std::uintptr_t ItemToGrant = 0x548;
            static constexpr std::uintptr_t AcquisitionType = 0x568;
            static constexpr std::uintptr_t CustomProjectile = 0x570;
            static constexpr std::uintptr_t EquippedActiveAbilitySet = 0x590;
            static constexpr std::uintptr_t AIEventTableRow = 0x5B0;
            static constexpr std::uintptr_t AcquisitionHintText = 0x5C0;
            static constexpr std::uintptr_t bIsSecret = 0x5D0;
            static constexpr std::uintptr_t ExtractRewardLootTier = 0x5D4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"PossibleAugments", 0x4D8, "ArrayProperty"},
            {"LevelUpExpCurve", 0x4E8, "StructProperty"},
            {"RelicPointsOnExtraction", 0x510, "StructProperty"},
            {"ParentExtractableDefinition", 0x520, "SoftObjectProperty"},
            {"DexNumber", 0x540, "IntProperty"},
            {"ExtractableType", 0x544, "EnumProperty"},
            {"ItemToGrant", 0x548, "SoftObjectProperty"},
            {"AcquisitionType", 0x568, "EnumProperty"},
            {"CustomProjectile", 0x570, "SoftClassProperty"},
            {"EquippedActiveAbilitySet", 0x590, "SoftObjectProperty"},
            {"AIEventTableRow", 0x5B0, "StructProperty"},
            {"AcquisitionHintText", 0x5C0, "TextProperty"},
            {"bIsSecret", 0x5D0, "BoolProperty"},
            {"ExtractRewardLootTier", 0x5D4, "NameProperty"},
        }};
    };

}
