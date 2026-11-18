#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AshtonGameplayRuntime
{
    struct AshtonShieldLayerAnimInstance
    {
        static constexpr std::string_view Name = "AshtonShieldLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BallisticShieldItemLayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsShieldHit = 0x12B0;
            static constexpr std::uintptr_t ShieldHitAlpha = 0x12B4;
            static constexpr std::uintptr_t UnusableTagName = 0x12B8;
            static constexpr std::uintptr_t ShieldChargeTagName = 0x12BC;
            static constexpr std::uintptr_t AshtonShieldThrowAnimAssetFortWeaponAnimSet = 0x12C0;
            static constexpr std::uintptr_t AshtonShieldAnimAssetFortWeaponAnimSet = 0x12C8;
            static constexpr std::uintptr_t DefaultNoWeaponProxyTable = 0x12D0;
            static constexpr std::uintptr_t PlayerAnimAssetsOverride = 0x12D8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsShieldHit", 0x12B0, "BoolProperty"},
            {"ShieldHitAlpha", 0x12B4, "FloatProperty"},
            {"UnusableTagName", 0x12B8, "StructProperty"},
            {"ShieldChargeTagName", 0x12BC, "StructProperty"},
            {"AshtonShieldThrowAnimAssetFortWeaponAnimSet", 0x12C0, "ObjectProperty"},
            {"AshtonShieldAnimAssetFortWeaponAnimSet", 0x12C8, "ObjectProperty"},
            {"DefaultNoWeaponProxyTable", 0x12D0, "ObjectProperty"},
            {"PlayerAnimAssetsOverride", 0x12D8, "StructProperty"},
        }};
    };

    struct AshtonShieldWeaponInterface
    {
        static constexpr std::string_view Name = "AshtonShieldWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
