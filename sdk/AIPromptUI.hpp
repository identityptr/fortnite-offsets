#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AIPromptUI
{
    struct PersonaPermissionButtonVM
    {
        static constexpr std::string_view Name = "PersonaPermissionButtonVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIKitDialogButtonViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x68;
            static constexpr std::uintptr_t ActionType = 0x78;
            static constexpr std::uintptr_t DataTable = 0x80;
            static constexpr std::uintptr_t InputAction = 0xA0;
            static constexpr std::uintptr_t bAutoDeactivate = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Text", 0x68, "TextProperty"},
            {"ActionType", 0x78, "EnumProperty"},
            {"DataTable", 0x80, "SoftObjectProperty"},
            {"InputAction", 0xA0, "NameProperty"},
            {"bAutoDeactivate", 0xA4, "BoolProperty"},
        }};
    };

    struct PersonaPermissionVM
    {
        static constexpr std::string_view Name = "PersonaPermissionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnConsentRequestedInProgressEvent = 0x78;
            static constexpr std::uintptr_t OnConsentRequestedSuccessEvent = 0x88;
            static constexpr std::uintptr_t OnConsentRequestedFailureEvent = 0x98;
            static constexpr std::uintptr_t OnPermissionGranted = 0xA8;
            static constexpr std::uintptr_t Title = 0xC0;
            static constexpr std::uintptr_t Description = 0xD0;
            static constexpr std::uintptr_t DescriptionParentalControl = 0xE0;
            static constexpr std::uintptr_t DescriptionCabined = 0xF0;
            static constexpr std::uintptr_t RequestText = 0x100;
            static constexpr std::uintptr_t PINText = 0x110;
            static constexpr std::uintptr_t Back = 0x120;
            static constexpr std::uintptr_t ConsentRequestInProgressText = 0x130;
            static constexpr std::uintptr_t ConsentRequestSuccessText = 0x140;
            static constexpr std::uintptr_t ConsentRequestFailureText = 0x150;
            static constexpr std::uintptr_t Buttons = 0x160;
            static constexpr std::uintptr_t PINModalHelper = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"OnConsentRequestedInProgressEvent", 0x78, "MulticastInlineDelegateProperty"},
            {"OnConsentRequestedSuccessEvent", 0x88, "MulticastInlineDelegateProperty"},
            {"OnConsentRequestedFailureEvent", 0x98, "MulticastInlineDelegateProperty"},
            {"OnPermissionGranted", 0xA8, "MulticastInlineDelegateProperty"},
            {"Title", 0xC0, "TextProperty"},
            {"Description", 0xD0, "TextProperty"},
            {"DescriptionParentalControl", 0xE0, "TextProperty"},
            {"DescriptionCabined", 0xF0, "TextProperty"},
            {"RequestText", 0x100, "TextProperty"},
            {"PINText", 0x110, "TextProperty"},
            {"Back", 0x120, "TextProperty"},
            {"ConsentRequestInProgressText", 0x130, "TextProperty"},
            {"ConsentRequestSuccessText", 0x140, "TextProperty"},
            {"ConsentRequestFailureText", 0x150, "TextProperty"},
            {"Buttons", 0x160, "ArrayProperty"},
            {"PINModalHelper", 0x178, "ObjectProperty"},
        }};
    };

}
