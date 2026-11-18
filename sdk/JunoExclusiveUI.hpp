#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoExclusiveUI
{
    struct JunoAbilitiesBarViewModel
    {
        static constexpr std::string_view Name = "JunoAbilitiesBarViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySlots = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AbilitySlots", 0x78, "ArrayProperty"},
        }};
    };

    struct JunoAbilitySlotViewModel
    {
        static constexpr std::string_view Name = "JunoAbilitySlotViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownTimeRemaining = 0x68;
            static constexpr std::uintptr_t CooldownPercentageComplete = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CooldownTimeRemaining", 0x68, "FloatProperty"},
            {"CooldownPercentageComplete", 0x6C, "FloatProperty"},
        }};
    };

    struct JunoAbilitySlotsContentComponent
    {
        static constexpr std::string_view Name = "JunoAbilitySlotsContentComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHudWidgetContentComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ContentWidgetClass = 0x78;
            static constexpr std::uintptr_t AbilitySelectorTagQuery = 0x98;
            static constexpr std::uintptr_t ContentWidget = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ContentWidgetClass", 0x78, "SoftClassProperty"},
            {"AbilitySelectorTagQuery", 0x98, "StructProperty"},
            {"ContentWidget", 0xE0, "ObjectProperty"},
        }};
    };

    struct JunoAbilitySlotsInsertableInterface
    {
        static constexpr std::string_view Name = "JunoAbilitySlotsInsertableInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoChannelDisplayWidget
    {
        static constexpr std::string_view Name = "JunoChannelDisplayWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelIndex = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelIndex", 0x330, "IntProperty"},
        }};
    };

    struct JunoFocalPointRequirementEntryViewModel
    {
        static constexpr std::string_view Name = "JunoFocalPointRequirementEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DataRequirementName = 0x68;
            static constexpr std::uintptr_t DataRequirementDescription = 0x78;
            static constexpr std::uintptr_t DataRequirementAssetIcon = 0x88;
            static constexpr std::uintptr_t bDataRequirementMet = 0xA8;
            static constexpr std::uintptr_t DataRequirementCount = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DataRequirementName", 0x68, "TextProperty"},
            {"DataRequirementDescription", 0x78, "TextProperty"},
            {"DataRequirementAssetIcon", 0x88, "SoftObjectProperty"},
            {"bDataRequirementMet", 0xA8, "BoolProperty"},
            {"DataRequirementCount", 0xAC, "IntProperty"},
        }};
    };

    struct JunoFocalPointsRequirementsViewModel
    {
        static constexpr std::string_view Name = "JunoFocalPointsRequirementsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalPointsDataRegistryName = 0x68;
            static constexpr std::uintptr_t RequirementEntries = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FocalPointsDataRegistryName", 0x68, "NameProperty"},
            {"RequirementEntries", 0x70, "ArrayProperty"},
        }};
    };

    struct JunoInventoryGroupContentComponent
    {
        static constexpr std::string_view Name = "JunoInventoryGroupContentComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileHudWidgetContentComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ContentWidgetClass = 0x78;
            static constexpr std::uintptr_t ContentWidget = 0x98;
            static constexpr std::uintptr_t InventoryGroupTag = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ContentWidgetClass", 0x78, "SoftClassProperty"},
            {"ContentWidget", 0x98, "ObjectProperty"},
            {"InventoryGroupTag", 0xA0, "StructProperty"},
        }};
    };

    struct JunoInventoryGroupVMInsertableInterface
    {
        static constexpr std::string_view Name = "JunoInventoryGroupVMInsertableInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoRoleAttributesViewModel
    {
        static constexpr std::string_view Name = "JunoRoleAttributesViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoUserGeneratedTextErrorModalHandler
    {
        static constexpr std::string_view Name = "JunoUserGeneratedTextErrorModalHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorModalScene = 0x330;
            static constexpr std::uintptr_t ConfirmButtonText = 0x338;
            static constexpr std::uintptr_t ConfirmAction = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ErrorModalScene", 0x330, "ObjectProperty"},
            {"ConfirmButtonText", 0x338, "TextProperty"},
            {"ConfirmAction", 0x348, "StructProperty"},
        }};
    };

    struct JunoVillageTypeRequirementsEntryViewModel
    {
        static constexpr std::string_view Name = "JunoVillageTypeRequirementsEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BiomeTag = 0x68;
            static constexpr std::uintptr_t PerWorldLimit = 0x88;
            static constexpr std::uintptr_t RequirementName = 0x90;
            static constexpr std::uintptr_t RequirementDescription = 0xA0;
            static constexpr std::uintptr_t RequirementIcon = 0xB0;
            static constexpr std::uintptr_t bRequirementMet = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BiomeTag", 0x68, "StructProperty"},
            {"PerWorldLimit", 0x88, "IntProperty"},
            {"RequirementName", 0x90, "TextProperty"},
            {"RequirementDescription", 0xA0, "TextProperty"},
            {"RequirementIcon", 0xB0, "SoftObjectProperty"},
            {"bRequirementMet", 0xD0, "BoolProperty"},
        }};
    };

    struct JunoVillageTypeRequirementsViewModel
    {
        static constexpr std::string_view Name = "JunoVillageTypeRequirementsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RequirementEntries = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequirementEntries", 0x68, "ArrayProperty"},
        }};
    };

}
