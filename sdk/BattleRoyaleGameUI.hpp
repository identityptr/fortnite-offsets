#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BattleRoyaleGameUI
{
    struct BattleRoyaleGameUISubsystem
    {
        static constexpr std::string_view Name = "BattleRoyaleGameUISubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSquadListPlacementCVarChanged = 0x30;
            static constexpr std::uintptr_t OnNewHudEnabledCVarChanged = 0x40;
            static constexpr std::uintptr_t OnNewQuickbarEnabledCVarChanged = 0x50;
            static constexpr std::uintptr_t OnKillFeedPlacementCVarChanged = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnSquadListPlacementCVarChanged", 0x30, "MulticastInlineDelegateProperty"},
            {"OnNewHudEnabledCVarChanged", 0x40, "MulticastInlineDelegateProperty"},
            {"OnNewQuickbarEnabledCVarChanged", 0x50, "MulticastInlineDelegateProperty"},
            {"OnKillFeedPlacementCVarChanged", 0x60, "MulticastInlineDelegateProperty"},
        }};
    };

    struct BattleRoyaleQuickbarViewModel
    {
        static constexpr std::string_view Name = "BattleRoyaleQuickbarViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSwitchModeUnboundMessageEnabled = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsSwitchModeUnboundMessageEnabled", 0x78, "BoolProperty"},
        }};
    };

    struct InstituteChirpEquippedItemViewModel
    {
        static constexpr std::string_view Name = "InstituteChirpEquippedItemViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HUDEquippedItemViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDurabilityViewModel = 0x68;
            static constexpr std::uintptr_t ItemCooldownViewmodel = 0x70;
            static constexpr std::uintptr_t TrackedAttributes = 0x78;
            static constexpr std::uintptr_t ItemIcon = 0x88;
            static constexpr std::uintptr_t AmmoIcon = 0xA8;
            static constexpr std::uintptr_t AmmoCount = 0xF8;
            static constexpr std::uintptr_t AmmoSurplus = 0xFC;
            static constexpr std::uintptr_t bIsCountPercentage = 0x10C;
            static constexpr std::uintptr_t bShowAmmoSurplus = 0x10D;
            static constexpr std::uintptr_t bShowAmmoCount = 0x10E;
            static constexpr std::uintptr_t bShowAmmoCountSplit = 0x10F;
            static constexpr std::uintptr_t bShowAmmoIcon = 0x110;
            static constexpr std::uintptr_t bHideEverything = 0x111;
            static constexpr std::uintptr_t bIsOutOfAmmo = 0x112;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"ItemDurabilityViewModel", 0x68, "ObjectProperty"},
            {"ItemCooldownViewmodel", 0x70, "ObjectProperty"},
            {"TrackedAttributes", 0x78, "ArrayProperty"},
            {"ItemIcon", 0x88, "SoftObjectProperty"},
            {"AmmoIcon", 0xA8, "SoftObjectProperty"},
            {"AmmoCount", 0xF8, "IntProperty"},
            {"AmmoSurplus", 0xFC, "IntProperty"},
            {"bIsCountPercentage", 0x10C, "BoolProperty"},
            {"bShowAmmoSurplus", 0x10D, "BoolProperty"},
            {"bShowAmmoCount", 0x10E, "BoolProperty"},
            {"bShowAmmoCountSplit", 0x10F, "BoolProperty"},
            {"bShowAmmoIcon", 0x110, "BoolProperty"},
            {"bHideEverything", 0x111, "BoolProperty"},
            {"bIsOutOfAmmo", 0x112, "BoolProperty"},
        }};
    };

    struct InstituteChirpGadgetFuelViewModel
    {
        static constexpr std::string_view Name = "InstituteChirpGadgetFuelViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FortFuelGadgetVisualType = 0x68;
            static constexpr std::uintptr_t FuelChargeCount = 0x6C;
            static constexpr std::uintptr_t FuelPercentage = 0x70;
            static constexpr std::uintptr_t Item = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FortFuelGadgetVisualType", 0x68, "EnumProperty"},
            {"FuelChargeCount", 0x6C, "FloatProperty"},
            {"FuelPercentage", 0x70, "FloatProperty"},
            {"Item", 0x74, "WeakObjectProperty"},
        }};
    };

    struct InstituteChirpQuickbarSlotViewModel
    {
        static constexpr std::string_view Name = "InstituteChirpQuickbarSlotViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HUDQuickbarSlotViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t FuelViewModel = 0x90;
            static constexpr std::uintptr_t QuickBarType = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FuelViewModel", 0x90, "ObjectProperty"},
            {"QuickBarType", 0x98, "EnumProperty"},
        }};
    };

    struct QuickbarGizmoSlotVM
    {
        static constexpr std::string_view Name = "QuickbarGizmoSlotVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotIndex = 0x78;
            static constexpr std::uintptr_t bIsVisible = 0x7C;
            static constexpr std::uintptr_t bIsSwapped = 0x7D;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlotIndex", 0x78, "IntProperty"},
            {"bIsVisible", 0x7C, "BoolProperty"},
            {"bIsSwapped", 0x7D, "BoolProperty"},
        }};
    };

}
