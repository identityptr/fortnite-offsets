#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WeaponModsCodeRuntime
{
    struct FortModStation_WeaponUICapture
    {
        static constexpr std::string_view Name = "FortModStation_WeaponUICapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PSOPrecachingCheckMaxRetries = 0x278;
            static constexpr std::uintptr_t MeshComponentPtr = 0x27C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PSOPrecachingCheckMaxRetries", 0x278, "ByteProperty"},
            {"MeshComponentPtr", 0x27C, "WeakObjectProperty"},
        }};
    };

    struct FortPickupInteractOverrideComponent_WeaponMods
    {
        static constexpr std::string_view Name = "FortPickupInteractOverrideComponent_WeaponMods";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupInteractOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Priority = 0xC0;
            static constexpr std::uintptr_t ContextOverrideWidget = 0xC8;
            static constexpr std::uintptr_t SecondContextOverrideWidget = 0xD0;
            static constexpr std::uintptr_t bContextOverrideWidgetApplied = 0xD8;
            static constexpr std::uintptr_t bRemoveContextOverrideWidgetsImmediately = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Priority", 0xC0, "IntProperty"},
            {"ContextOverrideWidget", 0xC8, "ClassProperty"},
            {"SecondContextOverrideWidget", 0xD0, "ClassProperty"},
            {"bContextOverrideWidgetApplied", 0xD8, "BoolProperty"},
            {"bRemoveContextOverrideWidgetsImmediately", 0xD9, "BoolProperty"},
        }};
    };

    struct FortWeaponModManagementComponent
    {
        static constexpr std::string_view Name = "FortWeaponModManagementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWeaponModSlotsChanged = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnWeaponModSlotsChanged", 0xC8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortWeaponModStationBase
    {
        static constexpr std::string_view Name = "FortWeaponModStationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkerDisplay = 0xB48;
            static constexpr std::uintptr_t MarkerPositionOffset = 0xBF8;
            static constexpr std::uintptr_t OnForceEndInteractionDelegate = 0xC10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MarkerDisplay", 0xB48, "StructProperty"},
            {"MarkerPositionOffset", 0xBF8, "StructProperty"},
            {"OnForceEndInteractionDelegate", 0xC10, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortWeaponModStationComponent
    {
        static constexpr std::string_view Name = "FortWeaponModStationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLocalModPurchaseStarted = 0xC8;
            static constexpr std::uintptr_t OnStartInteractWithWorkbenchActor = 0xD8;
            static constexpr std::uintptr_t OnStopInteractWithWorkbenchActor = 0xE8;
            static constexpr std::uintptr_t CurrentInteractingWeaponModStation = 0xF8;
            static constexpr std::uintptr_t ModStationHotfixEnabled = 0x100;
            static constexpr std::uintptr_t RemoveModCost = 0x128;
            static constexpr std::uintptr_t CancelInteractDistance = 0x150;
            static constexpr std::uintptr_t DefaultIronSightMod = 0x178;
            static constexpr std::uintptr_t DefaultMagazineMod = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnLocalModPurchaseStarted", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnStartInteractWithWorkbenchActor", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnStopInteractWithWorkbenchActor", 0xE8, "MulticastInlineDelegateProperty"},
            {"CurrentInteractingWeaponModStation", 0xF8, "ObjectProperty"},
            {"ModStationHotfixEnabled", 0x100, "StructProperty"},
            {"RemoveModCost", 0x128, "StructProperty"},
            {"CancelInteractDistance", 0x150, "StructProperty"},
            {"DefaultIronSightMod", 0x178, "ObjectProperty"},
            {"DefaultMagazineMod", 0x180, "ObjectProperty"},
        }};
    };

    struct FortWeaponModStationSharedDataComponent
    {
        static constexpr std::string_view Name = "FortWeaponModStationSharedDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ModCostData = 0xC0;
            static constexpr std::uintptr_t ModSlotPurchaseLists = 0xC8;
            static constexpr std::uintptr_t ModCostMap = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ModCostData", 0xC0, "ObjectProperty"},
            {"ModSlotPurchaseLists", 0xC8, "MapProperty"},
            {"ModCostMap", 0xD8, "MapProperty"},
        }};
    };

}
