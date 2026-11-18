#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StoreSelectionUI
{
    struct FortStoreSelectionData
    {
        static constexpr std::string_view Name = "FortStoreSelectionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t StoreSelectionScreenClass = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StoreSelectionScreenClass", 0x448, "SoftClassProperty"},
        }};
    };

    struct FortStoreSelectionOptionEntry
    {
        static constexpr std::string_view Name = "FortStoreSelectionOptionEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t Image_Icon = 0x1620;
            static constexpr std::uintptr_t Text_Description = 0x1628;
            static constexpr std::uintptr_t Text_Price = 0x1630;
            static constexpr std::uintptr_t RichText_Label = 0x1638;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Image_Icon", 0x1620, "ObjectProperty"},
            {"Text_Description", 0x1628, "ObjectProperty"},
            {"Text_Price", 0x1630, "ObjectProperty"},
            {"RichText_Label", 0x1638, "ObjectProperty"},
        }};
    };

    struct FortStoreSelectionScreen
    {
        static constexpr std::string_view Name = "FortStoreSelectionScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatablePanelLegacy";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryBoxButtonGroup = 0x568;
            static constexpr std::uintptr_t StoreOffer = 0x570;
            static constexpr std::uintptr_t StoreOfferLoadGuard = 0x578;
            static constexpr std::uintptr_t Text_Header = 0x580;
            static constexpr std::uintptr_t DynamicEntryBox_Options = 0x588;
            static constexpr std::uintptr_t Button_Continue = 0x590;
            static constexpr std::uintptr_t Button_Cancel = 0x598;
            static constexpr std::uintptr_t RichText_InitiallySelectedHint = 0x5A0;
            static constexpr std::uintptr_t PurchaseChoiceOwner = 0x5A8;
            static constexpr std::uintptr_t StoreOptions = 0x5B8;
            static constexpr std::uintptr_t SoftDisplayAsset = 0x5C8;
            static constexpr std::uintptr_t ItemData = 0x5E8;
            static constexpr std::uintptr_t OptionalLabels = 0x8C0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"EntryBoxButtonGroup", 0x568, "ObjectProperty"},
            {"StoreOffer", 0x570, "ObjectProperty"},
            {"StoreOfferLoadGuard", 0x578, "ObjectProperty"},
            {"Text_Header", 0x580, "ObjectProperty"},
            {"DynamicEntryBox_Options", 0x588, "ObjectProperty"},
            {"Button_Continue", 0x590, "ObjectProperty"},
            {"Button_Cancel", 0x598, "ObjectProperty"},
            {"RichText_InitiallySelectedHint", 0x5A0, "ObjectProperty"},
            {"PurchaseChoiceOwner", 0x5A8, "InterfaceProperty"},
            {"StoreOptions", 0x5B8, "ArrayProperty"},
            {"SoftDisplayAsset", 0x5C8, "SoftObjectProperty"},
            {"ItemData", 0x5E8, "StructProperty"},
            {"OptionalLabels", 0x8C0, "TextProperty"},
        }};
    };

}
