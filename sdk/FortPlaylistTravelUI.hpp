#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortPlaylistTravelUI
{
    struct FortPlaylistTravelEntryViewModel
    {
        static constexpr std::string_view Name = "FortPlaylistTravelEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GameTravelUIDataRegistryType = 0x78;
            static constexpr std::uintptr_t PrivacyOverride = 0xC1;
            static constexpr std::uintptr_t ActivityViewModel = 0xC8;
            static constexpr std::uintptr_t CanInitiateGameTravel = 0xD0;
            static constexpr std::uintptr_t GameTravelLockedReason = 0xD1;
            static constexpr std::uintptr_t bFullScreenLoading = 0xD2;
            static constexpr std::uintptr_t SmallPreviewImage = 0xD8;
            static constexpr std::uintptr_t PreviewImage = 0xF8;
            static constexpr std::uintptr_t TravelingBackgroundImage = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"GameTravelUIDataRegistryType", 0x78, "StructProperty"},
            {"PrivacyOverride", 0xC1, "EnumProperty"},
            {"ActivityViewModel", 0xC8, "ObjectProperty"},
            {"CanInitiateGameTravel", 0xD0, "BoolProperty"},
            {"GameTravelLockedReason", 0xD1, "EnumProperty"},
            {"bFullScreenLoading", 0xD2, "BoolProperty"},
            {"SmallPreviewImage", 0xD8, "SoftObjectProperty"},
            {"PreviewImage", 0xF8, "SoftObjectProperty"},
            {"TravelingBackgroundImage", 0x118, "SoftObjectProperty"},
        }};
    };

    struct FortPlaylistTravelUIComponent
    {
        static constexpr std::string_view Name = "FortPlaylistTravelUIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFortWidgetsCreatedInDynamicUI = 0xC0;
            static constexpr std::uintptr_t CurrentUIDirector = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnFortWidgetsCreatedInDynamicUI", 0xC0, "MulticastInlineDelegateProperty"},
            {"CurrentUIDirector", 0xD0, "ObjectProperty"},
        }};
    };

    struct FortPlaylistTravelUIFunctionLibrary
    {
        static constexpr std::string_view Name = "FortPlaylistTravelUIFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlaylistTravelUIModalSelectionContext
    {
        static constexpr std::string_view Name = "FortPlaylistTravelUIModalSelectionContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x28;
            static constexpr std::uintptr_t Description = 0x38;
            static constexpr std::uintptr_t Choices = 0x48;
            static constexpr std::uintptr_t TouchCloseDelegate = 0x58;
            static constexpr std::uintptr_t InitObject = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Title", 0x28, "TextProperty"},
            {"Description", 0x38, "TextProperty"},
            {"Choices", 0x48, "ArrayProperty"},
            {"TouchCloseDelegate", 0x58, "MulticastInlineDelegateProperty"},
            {"InitObject", 0x68, "ObjectProperty"},
        }};
    };

    struct FortPlaylistTravelUISelectionModal
    {
        static constexpr std::string_view Name = "FortPlaylistTravelUISelectionModal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectionButtonClass = 0x4A0;
            static constexpr std::uintptr_t Button_TouchClose = 0x4A8;
            static constexpr std::uintptr_t SelectionContext = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SelectionButtonClass", 0x4A0, "ClassProperty"},
            {"Button_TouchClose", 0x4A8, "ObjectProperty"},
            {"SelectionContext", 0x4B0, "ObjectProperty"},
        }};
    };

    struct FortPlaylistTravelViewModel
    {
        static constexpr std::string_view Name = "FortPlaylistTravelViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsDownloading = 0x78;
            static constexpr std::uintptr_t GameTravelUIDataRegistryType = 0x7C;
            static constexpr std::uintptr_t GameTravelPrepTime = 0xB4;
            static constexpr std::uintptr_t GameTravelEntries = 0xC0;
            static constexpr std::uintptr_t CurrentGameTravelDestinationViewModel = 0xD0;
            static constexpr std::uintptr_t GameTravelEntryViewModelClass = 0xD8;
            static constexpr std::uintptr_t bIsSquadTravel = 0xE0;
            static constexpr std::uintptr_t bIsOwningPlayerInitiating = 0xE1;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsDownloading", 0x78, "BoolProperty"},
            {"GameTravelUIDataRegistryType", 0x7C, "StructProperty"},
            {"GameTravelPrepTime", 0xB4, "FloatProperty"},
            {"GameTravelEntries", 0xC0, "ArrayProperty"},
            {"CurrentGameTravelDestinationViewModel", 0xD0, "ObjectProperty"},
            {"GameTravelEntryViewModelClass", 0xD8, "ClassProperty"},
            {"bIsSquadTravel", 0xE0, "BoolProperty"},
            {"bIsOwningPlayerInitiating", 0xE1, "BoolProperty"},
        }};
    };

}
