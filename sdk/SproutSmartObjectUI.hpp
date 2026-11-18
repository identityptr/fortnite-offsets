#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutSmartObjectUI
{
    struct FortAutomationRpcManager_SproutSmartObjectUI
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_SproutSmartObjectUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutChatWheelCustomSubWheel_ItemRequests
    {
        static constexpr std::string_view Name = "SproutChatWheelCustomSubWheel_ItemRequests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutChatWheelCustomSubWheel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutChatWheelEntryViewModel_ItemRequest
    {
        static constexpr std::string_view Name = "SproutChatWheelEntryViewModel_ItemRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutChatWheelEntryViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectUIViewModel = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SmartObjectUIViewModel", 0x1A0, "ObjectProperty"},
        }};
    };

    struct SproutSmartObjectUITraitViewModel
    {
        static constexpr std::string_view Name = "SproutSmartObjectUITraitViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutSmartObjectUIVariationViewModel
    {
        static constexpr std::string_view Name = "SproutSmartObjectUIVariationViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentVariation = 0x80;
            static constexpr std::uintptr_t ChildVariations = 0x88;
            static constexpr std::uintptr_t InitialVariationTag = 0x98;
            static constexpr std::uintptr_t TypeTag = 0x1C8;
            static constexpr std::uintptr_t VariationTag = 0x1CC;
            static constexpr std::uintptr_t DisplayName = 0x1D0;
            static constexpr std::uintptr_t PreviewIcon = 0x1E0;
            static constexpr std::uintptr_t ItemDefinition = 0x200;
            static constexpr std::uintptr_t Traits = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ParentVariation", 0x80, "WeakObjectProperty"},
            {"ChildVariations", 0x88, "ArrayProperty"},
            {"InitialVariationTag", 0x98, "StructProperty"},
            {"TypeTag", 0x1C8, "StructProperty"},
            {"VariationTag", 0x1CC, "StructProperty"},
            {"DisplayName", 0x1D0, "TextProperty"},
            {"PreviewIcon", 0x1E0, "SoftObjectProperty"},
            {"ItemDefinition", 0x200, "SoftObjectProperty"},
            {"Traits", 0x220, "ArrayProperty"},
        }};
    };

    struct SproutSmartObjectUIViewModel
    {
        static constexpr std::string_view Name = "SproutSmartObjectUIViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Variations = 0x78;
            static constexpr std::uintptr_t CurrentVariation = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Variations", 0x78, "ArrayProperty"},
            {"CurrentVariation", 0x88, "WeakObjectProperty"},
        }};
    };

}
