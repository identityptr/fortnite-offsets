#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WeaponModStationUI
{
    struct AthenaWeaponModsWorkbenchModListEntry
    {
        static constexpr std::string_view Name = "AthenaWeaponModsWorkbenchModListEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryViewModel = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntryViewModel", 0x15D8, "ObjectProperty"},
        }};
    };

    struct AthenaWeaponModsWorkbenchModSelection
    {
        static constexpr std::string_view Name = "AthenaWeaponModsWorkbenchModSelection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ListView_ModChoices = 0x330;
            static constexpr std::uintptr_t PreviousListEntryInputAction = 0x338;
            static constexpr std::uintptr_t NextListEntryInputAction = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ListView_ModChoices", 0x330, "ObjectProperty"},
            {"PreviousListEntryInputAction", 0x338, "StructProperty"},
            {"NextListEntryInputAction", 0x348, "StructProperty"},
        }};
    };

    struct AthenaWeaponModsWorkbenchModTypeButton
    {
        static constexpr std::string_view Name = "AthenaWeaponModsWorkbenchModTypeButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ModTypeTag = 0x15D0;
            static constexpr std::uintptr_t DefaultModItemDef = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ModTypeTag", 0x15D0, "StructProperty"},
            {"DefaultModItemDef", 0x15D8, "ObjectProperty"},
        }};
    };

    struct AthenaWeaponModsWorkbenchModTypeTabs
    {
        static constexpr std::string_view Name = "AthenaWeaponModsWorkbenchModTypeTabs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousTabInputAction = 0x330;
            static constexpr std::uintptr_t NextTabInputAction = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviousTabInputAction", 0x330, "StructProperty"},
            {"NextTabInputAction", 0x340, "StructProperty"},
        }};
    };

    struct AthenaWeaponModsWorkbenchModal
    {
        static constexpr std::string_view Name = "AthenaWeaponModsWorkbenchModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockedInputActions = 0x4A8;
            static constexpr std::uintptr_t PrimaryContentSetup = 0x4B8;
            static constexpr std::uintptr_t WorkbenchModalInputComp = 0x4C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BlockedInputActions", 0x4A8, "ArrayProperty"},
            {"PrimaryContentSetup", 0x4B8, "StructProperty"},
            {"WorkbenchModalInputComp", 0x4C0, "ObjectProperty"},
        }};
    };

    struct WeaponModEntryViewModel
    {
        static constexpr std::string_view Name = "WeaponModEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ModItemDefinition = 0x68;
            static constexpr std::uintptr_t bIsEquippable = 0x70;
            static constexpr std::uintptr_t bIsEquipped = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModItemDefinition", 0x68, "ObjectProperty"},
            {"bIsEquippable", 0x70, "BoolProperty"},
            {"bIsEquipped", 0x71, "BoolProperty"},
        }};
    };

    struct WeaponModEquippedWeaponViewModel
    {
        static constexpr std::string_view Name = "WeaponModEquippedWeaponViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t EquippedWeapon = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EquippedWeapon", 0x78, "ObjectProperty"},
        }};
    };

    struct WeaponModSlotViewModel
    {
        static constexpr std::string_view Name = "WeaponModSlotViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedMod = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectedMod", 0x78, "ObjectProperty"},
        }};
    };

    struct WeaponModWorkbenchViewModel
    {
        static constexpr std::string_view Name = "WeaponModWorkbenchViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t WorkbenchState = 0x90;
            static constexpr std::uintptr_t ActiveModCategory = 0x94;
            static constexpr std::uintptr_t ModsForActiveCategory = 0x98;
            static constexpr std::uintptr_t EquippedWeaponVM = 0xA8;
            static constexpr std::uintptr_t SlotVM = 0xB0;
            static constexpr std::uintptr_t CurrentWeapon = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WorkbenchState", 0x90, "EnumProperty"},
            {"ActiveModCategory", 0x94, "StructProperty"},
            {"ModsForActiveCategory", 0x98, "ArrayProperty"},
            {"EquippedWeaponVM", 0xA8, "ObjectProperty"},
            {"SlotVM", 0xB0, "ObjectProperty"},
            {"CurrentWeapon", 0xB8, "ObjectProperty"},
        }};
    };

}
