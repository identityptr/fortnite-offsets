#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ThermiteGameplayRuntime
{
    struct ThermiteNativeComponent
    {
        static constexpr std::string_view Name = "ThermiteNativeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasBloomed = 0xC0;
            static constexpr std::uintptr_t OnBloomStart = 0xC8;
            static constexpr std::uintptr_t OnThermiteEnd = 0xD8;
            static constexpr std::uintptr_t OnDamageApplied = 0xE8;
            static constexpr std::uintptr_t EnvironmentDamageGE = 0xF8;
            static constexpr std::uintptr_t ThermiteDamageGE = 0x100;
            static constexpr std::uintptr_t ThermiteVehicleDamageGE = 0x108;
            static constexpr std::uintptr_t ThermiteExplosionGE = 0x110;
            static constexpr std::uintptr_t ThermiteConcentratedExplosionGE = 0x118;
            static constexpr std::uintptr_t ThermiteKnockbackGE = 0x120;
            static constexpr std::uintptr_t ThermiteGameplayEffectLevel = 0x128;
            static constexpr std::uintptr_t EnvironmentDamageTargetingPreset = 0x130;
            static constexpr std::uintptr_t BloomDamageTargetingPreset = 0x138;
            static constexpr std::uintptr_t ExplosionTargetingPreset = 0x140;
            static constexpr std::uintptr_t InitialBloomDelay = 0x148;
            static constexpr std::uintptr_t EnvironmentDamageTickRate = 0x170;
            static constexpr std::uintptr_t ThermiteDuration = 0x198;
            static constexpr std::uintptr_t DangerRadius = 0x1C0;
            static constexpr std::uintptr_t BloomDamageTickRate = 0x1E8;
            static constexpr std::uintptr_t DamageLocationOffset = 0x210;
            static constexpr std::uintptr_t bShouldKnockback = 0x238;
            static constexpr std::uintptr_t PostHideLifeSpan = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"bHasBloomed", 0xC0, "BoolProperty"},
            {"OnBloomStart", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnThermiteEnd", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnDamageApplied", 0xE8, "MulticastInlineDelegateProperty"},
            {"EnvironmentDamageGE", 0xF8, "ClassProperty"},
            {"ThermiteDamageGE", 0x100, "ClassProperty"},
            {"ThermiteVehicleDamageGE", 0x108, "ClassProperty"},
            {"ThermiteExplosionGE", 0x110, "ClassProperty"},
            {"ThermiteConcentratedExplosionGE", 0x118, "ClassProperty"},
            {"ThermiteKnockbackGE", 0x120, "ClassProperty"},
            {"ThermiteGameplayEffectLevel", 0x128, "IntProperty"},
            {"EnvironmentDamageTargetingPreset", 0x130, "ObjectProperty"},
            {"BloomDamageTargetingPreset", 0x138, "ObjectProperty"},
            {"ExplosionTargetingPreset", 0x140, "ObjectProperty"},
            {"InitialBloomDelay", 0x148, "StructProperty"},
            {"EnvironmentDamageTickRate", 0x170, "StructProperty"},
            {"ThermiteDuration", 0x198, "StructProperty"},
            {"DangerRadius", 0x1C0, "StructProperty"},
            {"BloomDamageTickRate", 0x1E8, "StructProperty"},
            {"DamageLocationOffset", 0x210, "StructProperty"},
            {"bShouldKnockback", 0x238, "StructProperty"},
            {"PostHideLifeSpan", 0x260, "StructProperty"},
        }};
    };

}
