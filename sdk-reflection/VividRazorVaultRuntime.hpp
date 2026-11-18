#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VividRazorVaultRuntime
{
    struct VividRazorVaultDoor
    {
        static constexpr std::string_view Name = "VividRazorVaultDoor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t RootMesh = 0x940;
            static constexpr std::uintptr_t bDoorOpened = 0x948;
            static constexpr std::uintptr_t WeakPointHitNS = 0x950;
            static constexpr std::uintptr_t WeakPointDeathCue = 0x958;
            static constexpr std::uintptr_t WeakPointConfigs = 0x960;
            static constexpr std::uintptr_t WeakPointMaxHealth = 0x970;
            static constexpr std::uintptr_t WeakPointFuzzyDamageRange = 0x998;
            static constexpr std::uintptr_t MantisWeaponDamageGameplayTag = 0x9C0;
            static constexpr std::uintptr_t WeakPointFuzzyDamageMantisWeaponRange = 0x9C8;
            static constexpr std::uintptr_t WeakPointFuzzyDamageMantisViewDirectionCheckDistance = 0x9F0;
            static constexpr std::uintptr_t DoorBoneName = 0x9F4;
            static constexpr std::uintptr_t DoorShapeName = 0x9F8;
            static constexpr std::uintptr_t WeakPoints = 0xA00;
            static constexpr std::uintptr_t Generation = 0xA10;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"RootMesh", 0x940, "ObjectProperty"},
            {"bDoorOpened", 0x948, "BoolProperty"},
            {"WeakPointHitNS", 0x950, "ObjectProperty"},
            {"WeakPointDeathCue", 0x958, "StructProperty"},
            {"WeakPointConfigs", 0x960, "ArrayProperty"},
            {"WeakPointMaxHealth", 0x970, "StructProperty"},
            {"WeakPointFuzzyDamageRange", 0x998, "StructProperty"},
            {"MantisWeaponDamageGameplayTag", 0x9C0, "StructProperty"},
            {"WeakPointFuzzyDamageMantisWeaponRange", 0x9C8, "StructProperty"},
            {"WeakPointFuzzyDamageMantisViewDirectionCheckDistance", 0x9F0, "FloatProperty"},
            {"DoorBoneName", 0x9F4, "NameProperty"},
            {"DoorShapeName", 0x9F8, "NameProperty"},
            {"WeakPoints", 0xA00, "ArrayProperty"},
            {"Generation", 0xA10, "IntProperty"},
        }};
    };

}
