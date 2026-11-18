#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DamageLandingCode
{
    struct FortAnimNotify_AllowMovementPostLanding
    {
        static constexpr std::string_view Name = "FortAnimNotify_AllowMovementPostLanding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortControllerComponent_DamageLanding
    {
        static constexpr std::string_view Name = "FortControllerComponent_DamageLanding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageLandingLogicClass = 0xC8;
            static constexpr std::uintptr_t RagdollLogicClass = 0xD0;
            static constexpr std::uintptr_t RagdollInitialSpeed = 0xD8;
            static constexpr std::uintptr_t DamageLandingDisabledTag = 0x100;
            static constexpr std::uintptr_t UseDamageLandingDisabledTag = 0x108;
            static constexpr std::uintptr_t EnableDamageLanding = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DamageLandingLogicClass", 0xC8, "ClassProperty"},
            {"RagdollLogicClass", 0xD0, "ClassProperty"},
            {"RagdollInitialSpeed", 0xD8, "StructProperty"},
            {"DamageLandingDisabledTag", 0x100, "StructProperty"},
            {"UseDamageLandingDisabledTag", 0x108, "StructProperty"},
            {"EnableDamageLanding", 0x130, "StructProperty"},
        }};
    };

    struct FortMovementMode_DamageLandingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_DamageLandingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortMovementMode_ExtDamageLanding
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtDamageLanding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t HolsterId = 0x1C0;
            static constexpr std::uintptr_t MovementToStopStaggerTags = 0x1C8;
            static constexpr std::uintptr_t StaggerConfiguration = 0x1E8;
            static constexpr std::uintptr_t DamageLandingDisabledTag = 0x200;
            static constexpr std::uintptr_t UseDamageLandingDisabledTag = 0x208;
            static constexpr std::uintptr_t bPlayAnimOnUnholsterWeapon = 0x230;
            static constexpr std::uintptr_t LandingGameplayCueTag = 0x234;
            static constexpr std::uintptr_t PreventHolsterTag = 0x238;
            static constexpr std::uintptr_t FallDamageImmunityTags = 0x240;
            static constexpr std::uintptr_t WaitToLandAllowedMovementTags = 0x260;
            static constexpr std::uintptr_t ImpactAllowedMovementTags = 0x280;
            static constexpr std::uintptr_t UseFatalDamageOnStaggerConfig = 0x2A0;
            static constexpr std::uintptr_t PredictedDamageReduction = 0x2C8;
            static constexpr std::uintptr_t GEFallDamageOverrideFallDamageList = 0x2F0;
            static constexpr std::uintptr_t GEFallDamageOverrideFallDamageIndex = 0x300;
            static constexpr std::uintptr_t StaminaReductionForStaggerEnabled = 0x328;
            static constexpr std::uintptr_t UseShieldDamageOnFatalHit = 0x350;
            static constexpr std::uintptr_t ShieldDamageCostOnFatalHit = 0x378;
            static constexpr std::uintptr_t ShouldReduceAllShieldOnFatalHit = 0x3A0;
            static constexpr std::uintptr_t GEShieldDamageList = 0x3C8;
            static constexpr std::uintptr_t GEShieldDamageIndex = 0x3D8;
            static constexpr std::uintptr_t GEShieldDamageTag = 0x400;
            static constexpr std::uintptr_t RagdollOnImpactEnabled = 0x408;
            static constexpr std::uintptr_t RagdollOnLandingEnabled = 0x430;
            static constexpr std::uintptr_t AllowToRagdollOnImpactDueFatalDamage = 0x458;
            static constexpr std::uintptr_t AllowRagdollTag = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"HolsterId", 0x1C0, "NameProperty"},
            {"MovementToStopStaggerTags", 0x1C8, "StructProperty"},
            {"StaggerConfiguration", 0x1E8, "ArrayProperty"},
            {"DamageLandingDisabledTag", 0x200, "StructProperty"},
            {"UseDamageLandingDisabledTag", 0x208, "StructProperty"},
            {"bPlayAnimOnUnholsterWeapon", 0x230, "BoolProperty"},
            {"LandingGameplayCueTag", 0x234, "StructProperty"},
            {"PreventHolsterTag", 0x238, "StructProperty"},
            {"FallDamageImmunityTags", 0x240, "StructProperty"},
            {"WaitToLandAllowedMovementTags", 0x260, "StructProperty"},
            {"ImpactAllowedMovementTags", 0x280, "StructProperty"},
            {"UseFatalDamageOnStaggerConfig", 0x2A0, "StructProperty"},
            {"PredictedDamageReduction", 0x2C8, "StructProperty"},
            {"GEFallDamageOverrideFallDamageList", 0x2F0, "ArrayProperty"},
            {"GEFallDamageOverrideFallDamageIndex", 0x300, "StructProperty"},
            {"StaminaReductionForStaggerEnabled", 0x328, "StructProperty"},
            {"UseShieldDamageOnFatalHit", 0x350, "StructProperty"},
            {"ShieldDamageCostOnFatalHit", 0x378, "StructProperty"},
            {"ShouldReduceAllShieldOnFatalHit", 0x3A0, "StructProperty"},
            {"GEShieldDamageList", 0x3C8, "ArrayProperty"},
            {"GEShieldDamageIndex", 0x3D8, "StructProperty"},
            {"GEShieldDamageTag", 0x400, "StructProperty"},
            {"RagdollOnImpactEnabled", 0x408, "StructProperty"},
            {"RagdollOnLandingEnabled", 0x430, "StructProperty"},
            {"AllowToRagdollOnImpactDueFatalDamage", 0x458, "StructProperty"},
            {"AllowRagdollTag", 0x480, "StructProperty"},
        }};
    };

}
