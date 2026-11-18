#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoElementalGameplay
{
    struct JunoEarthElementalAttributeSet
    {
        static constexpr std::string_view Name = "JunoEarthElementalAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoElementalAttributeSetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoCurrentEarthAffliction = 0x50;
            static constexpr std::uintptr_t JunoMaxEarthAffliction = 0x60;
            static constexpr std::uintptr_t JunoIncomingEarthAffliction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JunoCurrentEarthAffliction", 0x50, "StructProperty"},
            {"JunoMaxEarthAffliction", 0x60, "StructProperty"},
            {"JunoIncomingEarthAffliction", 0x70, "StructProperty"},
        }};
    };

    struct JunoElementalAttributeSetBase
    {
        static constexpr std::string_view Name = "JunoElementalAttributeSetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoElementalPawnComponent
    {
        static constexpr std::string_view Name = "JunoElementalPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct JunoFireElementalAttributeSet
    {
        static constexpr std::string_view Name = "JunoFireElementalAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoElementalAttributeSetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoCurrentFireAffliction = 0x50;
            static constexpr std::uintptr_t JunoMaxFireAffliction = 0x60;
            static constexpr std::uintptr_t JunoIncomingFireAffliction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JunoCurrentFireAffliction", 0x50, "StructProperty"},
            {"JunoMaxFireAffliction", 0x60, "StructProperty"},
            {"JunoIncomingFireAffliction", 0x70, "StructProperty"},
        }};
    };

    struct JunoIceElementalAttributeSet
    {
        static constexpr std::string_view Name = "JunoIceElementalAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoElementalAttributeSetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoCurrentIceAffliction = 0x50;
            static constexpr std::uintptr_t JunoMaxIceAffliction = 0x60;
            static constexpr std::uintptr_t JunoIncomingIceAffliction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JunoCurrentIceAffliction", 0x50, "StructProperty"},
            {"JunoMaxIceAffliction", 0x60, "StructProperty"},
            {"JunoIncomingIceAffliction", 0x70, "StructProperty"},
        }};
    };

    struct JunoLightningElementalAttributeSet
    {
        static constexpr std::string_view Name = "JunoLightningElementalAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoElementalAttributeSetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoCurrentLightningAffliction = 0x50;
            static constexpr std::uintptr_t JunoMaxLightningAffliction = 0x60;
            static constexpr std::uintptr_t JunoIncomingLightningAffliction = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JunoCurrentLightningAffliction", 0x50, "StructProperty"},
            {"JunoMaxLightningAffliction", 0x60, "StructProperty"},
            {"JunoIncomingLightningAffliction", 0x70, "StructProperty"},
        }};
    };

}
