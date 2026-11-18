#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoMistRavenItems
{
    struct JunoAbility_ActivateMistRavenItemsHover
    {
        static constexpr std::string_view Name = "JunoAbility_ActivateMistRavenItemsHover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t StashedRunes = 0xB40;
            static constexpr std::uintptr_t EquippedRunes = 0xB50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StashedRunes", 0xB40, "ArrayProperty"},
            {"EquippedRunes", 0xB50, "ArrayProperty"},
        }};
    };

    struct JunoMistRavenItemsHoverAttributeSet
    {
        static constexpr std::string_view Name = "JunoMistRavenItemsHoverAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxLateralSpeed = 0x48;
            static constexpr std::uintptr_t MaxAscendSpeed = 0x70;
            static constexpr std::uintptr_t HorizontalMovementForce = 0x98;
            static constexpr std::uintptr_t AscendForce = 0xC0;
            static constexpr std::uintptr_t DescendForce = 0xE8;
            static constexpr std::uintptr_t HorizontalBrakingForce = 0x110;
            static constexpr std::uintptr_t DirectionChangeBonus = 0x138;
            static constexpr std::uintptr_t ZBrakingForce = 0x160;
            static constexpr std::uintptr_t SprintMultiplier = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MaxLateralSpeed", 0x48, "StructProperty"},
            {"MaxAscendSpeed", 0x70, "StructProperty"},
            {"HorizontalMovementForce", 0x98, "StructProperty"},
            {"AscendForce", 0xC0, "StructProperty"},
            {"DescendForce", 0xE8, "StructProperty"},
            {"HorizontalBrakingForce", 0x110, "StructProperty"},
            {"DirectionChangeBonus", 0x138, "StructProperty"},
            {"ZBrakingForce", 0x160, "StructProperty"},
            {"SprintMultiplier", 0x188, "StructProperty"},
        }};
    };

    struct JunoMovementMode_ExtMistRavenItemsHover
    {
        static constexpr std::string_view Name = "JunoMovementMode_ExtMistRavenItemsHover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtHover";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxLateralSpeedAttribute = 0xAF0;
            static constexpr std::uintptr_t MaxAscendSpeedAttribute = 0xB28;
            static constexpr std::uintptr_t HorizonalMovementForceAttribute = 0xB60;
            static constexpr std::uintptr_t AscendForceAttribute = 0xB98;
            static constexpr std::uintptr_t DescendForceAttribute = 0xBD0;
            static constexpr std::uintptr_t HorizontalBrakingForceAttribute = 0xC08;
            static constexpr std::uintptr_t DirectionChangeBonusAttribute = 0xC40;
            static constexpr std::uintptr_t ZBrakingForceAttribute = 0xC78;
            static constexpr std::uintptr_t SprintMultiplierAttribute = 0xCB0;
            static constexpr std::uintptr_t DescendAction = 0xCE8;
            static constexpr std::uintptr_t SprintEnergyComponentQuery = 0xCF0;
            static constexpr std::uintptr_t SprintEnergyConsumeRate = 0xD38;
            static constexpr std::uintptr_t SprintEnergyUseTag = 0xD60;
            static constexpr std::uintptr_t SprintCueTag = 0xD64;
            static constexpr std::uintptr_t SprintBlockTags = 0xD68;
            static constexpr std::uintptr_t SprintEffect = 0xD88;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"MaxLateralSpeedAttribute", 0xAF0, "StructProperty"},
            {"MaxAscendSpeedAttribute", 0xB28, "StructProperty"},
            {"HorizonalMovementForceAttribute", 0xB60, "StructProperty"},
            {"AscendForceAttribute", 0xB98, "StructProperty"},
            {"DescendForceAttribute", 0xBD0, "StructProperty"},
            {"HorizontalBrakingForceAttribute", 0xC08, "StructProperty"},
            {"DirectionChangeBonusAttribute", 0xC40, "StructProperty"},
            {"ZBrakingForceAttribute", 0xC78, "StructProperty"},
            {"SprintMultiplierAttribute", 0xCB0, "StructProperty"},
            {"DescendAction", 0xCE8, "ObjectProperty"},
            {"SprintEnergyComponentQuery", 0xCF0, "StructProperty"},
            {"SprintEnergyConsumeRate", 0xD38, "StructProperty"},
            {"SprintEnergyUseTag", 0xD60, "StructProperty"},
            {"SprintCueTag", 0xD64, "StructProperty"},
            {"SprintBlockTags", 0xD68, "StructProperty"},
            {"SprintEffect", 0xD88, "ClassProperty"},
        }};
    };

    struct JunoMovementMode_MistRavenItemsHoverRuntimeData
    {
        static constexpr std::string_view Name = "JunoMovementMode_MistRavenItemsHoverRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_HoverRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t bLocalSprinting = 0x78;
            static constexpr std::uintptr_t bSprinting = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bLocalSprinting", 0x78, "BoolProperty"},
            {"bSprinting", 0x78, "BoolProperty"},
        }};
    };

}
