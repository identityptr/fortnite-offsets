#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_ModalDialogUI
{
    struct CreativeModalDialogAllowedConversionFunction
    {
        static constexpr std::string_view Name = "CreativeModalDialogAllowedConversionFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CreativeModalDialogConversionFunction
    {
        static constexpr std::string_view Name = "CreativeModalDialogConversionFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CreativeModalDialogAllowedConversionFunction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CreativeModalDialogViewmodel
    {
        static constexpr std::string_view Name = "CreativeModalDialogViewmodel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Title = 0x68;
            static constexpr std::uintptr_t Body = 0x78;
            static constexpr std::uintptr_t TextStyleSet = 0x88;
            static constexpr std::uintptr_t Button01_MainText = 0x90;
            static constexpr std::uintptr_t Button02_MainText = 0xA0;
            static constexpr std::uintptr_t Button03_MainText = 0xB0;
            static constexpr std::uintptr_t Button04_MainText = 0xC0;
            static constexpr std::uintptr_t Button05_MainText = 0xD0;
            static constexpr std::uintptr_t Button06_MainText = 0xE0;
            static constexpr std::uintptr_t Button07_MainText = 0xF0;
            static constexpr std::uintptr_t Button08_MainText = 0x100;
            static constexpr std::uintptr_t Button09_MainText = 0x110;
            static constexpr std::uintptr_t Button10_MainText = 0x120;
            static constexpr std::uintptr_t Button11_MainText = 0x130;
            static constexpr std::uintptr_t Button12_MainText = 0x140;
            static constexpr std::uintptr_t Button01_SubText = 0x150;
            static constexpr std::uintptr_t Button02_SubText = 0x160;
            static constexpr std::uintptr_t Button03_SubText = 0x170;
            static constexpr std::uintptr_t Button04_SubText = 0x180;
            static constexpr std::uintptr_t Button05_SubText = 0x190;
            static constexpr std::uintptr_t Button06_SubText = 0x1A0;
            static constexpr std::uintptr_t Button07_SubText = 0x1B0;
            static constexpr std::uintptr_t Button08_SubText = 0x1C0;
            static constexpr std::uintptr_t Button09_SubText = 0x1D0;
            static constexpr std::uintptr_t Button10_SubText = 0x1E0;
            static constexpr std::uintptr_t Button11_SubText = 0x1F0;
            static constexpr std::uintptr_t Button12_SubText = 0x200;
            static constexpr std::uintptr_t Art01_Image = 0x210;
            static constexpr std::uintptr_t Art02_Image = 0x218;
            static constexpr std::uintptr_t Art01_Material = 0x220;
            static constexpr std::uintptr_t Art02_Material = 0x228;
            static constexpr std::uintptr_t ContentAlignment = 0x230;
            static constexpr std::uintptr_t bShowBackground = 0x231;
            static constexpr std::uintptr_t DialogBackgroundAlpha = 0x234;
            static constexpr std::uintptr_t TimerOption = 0x238;
            static constexpr std::uintptr_t Timeout = 0x23C;
            static constexpr std::uintptr_t RemainingTimeForTimeout = 0x240;
            static constexpr std::uintptr_t Progress = 0x244;
            static constexpr std::uintptr_t NumberOfButtons = 0x248;
            static constexpr std::uintptr_t BackActionBoundButton = 0x250;
            static constexpr std::uintptr_t Response = 0x251;
            static constexpr std::uintptr_t Button01_Visibility = 0x252;
            static constexpr std::uintptr_t Button02_Visibility = 0x253;
            static constexpr std::uintptr_t Button03_Visibility = 0x254;
            static constexpr std::uintptr_t Button04_Visibility = 0x255;
            static constexpr std::uintptr_t Button05_Visibility = 0x256;
            static constexpr std::uintptr_t Button06_Visibility = 0x257;
            static constexpr std::uintptr_t Button07_Visibility = 0x258;
            static constexpr std::uintptr_t Button08_Visibility = 0x259;
            static constexpr std::uintptr_t Button09_Visibility = 0x25A;
            static constexpr std::uintptr_t Button10_Visibility = 0x25B;
            static constexpr std::uintptr_t Button11_Visibility = 0x25C;
            static constexpr std::uintptr_t Button12_Visibility = 0x25D;
            static constexpr std::uintptr_t HoveredSound = 0x260;
            static constexpr std::uintptr_t PressedSound = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 55> Properties{{
            {"Title", 0x68, "TextProperty"},
            {"Body", 0x78, "TextProperty"},
            {"TextStyleSet", 0x88, "ObjectProperty"},
            {"Button01_MainText", 0x90, "TextProperty"},
            {"Button02_MainText", 0xA0, "TextProperty"},
            {"Button03_MainText", 0xB0, "TextProperty"},
            {"Button04_MainText", 0xC0, "TextProperty"},
            {"Button05_MainText", 0xD0, "TextProperty"},
            {"Button06_MainText", 0xE0, "TextProperty"},
            {"Button07_MainText", 0xF0, "TextProperty"},
            {"Button08_MainText", 0x100, "TextProperty"},
            {"Button09_MainText", 0x110, "TextProperty"},
            {"Button10_MainText", 0x120, "TextProperty"},
            {"Button11_MainText", 0x130, "TextProperty"},
            {"Button12_MainText", 0x140, "TextProperty"},
            {"Button01_SubText", 0x150, "TextProperty"},
            {"Button02_SubText", 0x160, "TextProperty"},
            {"Button03_SubText", 0x170, "TextProperty"},
            {"Button04_SubText", 0x180, "TextProperty"},
            {"Button05_SubText", 0x190, "TextProperty"},
            {"Button06_SubText", 0x1A0, "TextProperty"},
            {"Button07_SubText", 0x1B0, "TextProperty"},
            {"Button08_SubText", 0x1C0, "TextProperty"},
            {"Button09_SubText", 0x1D0, "TextProperty"},
            {"Button10_SubText", 0x1E0, "TextProperty"},
            {"Button11_SubText", 0x1F0, "TextProperty"},
            {"Button12_SubText", 0x200, "TextProperty"},
            {"Art01_Image", 0x210, "ObjectProperty"},
            {"Art02_Image", 0x218, "ObjectProperty"},
            {"Art01_Material", 0x220, "ObjectProperty"},
            {"Art02_Material", 0x228, "ObjectProperty"},
            {"ContentAlignment", 0x230, "EnumProperty"},
            {"bShowBackground", 0x231, "BoolProperty"},
            {"DialogBackgroundAlpha", 0x234, "FloatProperty"},
            {"TimerOption", 0x238, "EnumProperty"},
            {"Timeout", 0x23C, "FloatProperty"},
            {"RemainingTimeForTimeout", 0x240, "FloatProperty"},
            {"Progress", 0x244, "FloatProperty"},
            {"NumberOfButtons", 0x248, "Int64Property"},
            {"BackActionBoundButton", 0x250, "EnumProperty"},
            {"Response", 0x251, "EnumProperty"},
            {"Button01_Visibility", 0x252, "EnumProperty"},
            {"Button02_Visibility", 0x253, "EnumProperty"},
            {"Button03_Visibility", 0x254, "EnumProperty"},
            {"Button04_Visibility", 0x255, "EnumProperty"},
            {"Button05_Visibility", 0x256, "EnumProperty"},
            {"Button06_Visibility", 0x257, "EnumProperty"},
            {"Button07_Visibility", 0x258, "EnumProperty"},
            {"Button08_Visibility", 0x259, "EnumProperty"},
            {"Button09_Visibility", 0x25A, "EnumProperty"},
            {"Button10_Visibility", 0x25B, "EnumProperty"},
            {"Button11_Visibility", 0x25C, "EnumProperty"},
            {"Button12_Visibility", 0x25D, "EnumProperty"},
            {"HoveredSound", 0x260, "ObjectProperty"},
            {"PressedSound", 0x268, "ObjectProperty"},
        }};
    };

    struct CreativeModalDialogWidget
    {
        static constexpr std::string_view Name = "CreativeModalDialogWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MainMenuInputRowHandle = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MainMenuInputRowHandle", 0x4A0, "StructProperty"},
        }};
    };

}
