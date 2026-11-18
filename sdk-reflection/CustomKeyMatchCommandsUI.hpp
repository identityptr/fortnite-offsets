#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomKeyMatchCommandsUI
{
    struct CustomKeyMatchCommandsPanel
    {
        static constexpr std::string_view Name = "CustomKeyMatchCommandsPanel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingsPanel";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTextFilterCleared = 0x6B8;
            static constexpr std::uintptr_t ResetInputActionRow = 0x6C8;
            static constexpr std::uintptr_t RunCommandInputActionRow = 0x6D8;
            static constexpr std::uintptr_t Overlay_Details = 0x6F8;
            static constexpr std::uintptr_t Overlay_EmptyList = 0x700;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnTextFilterCleared", 0x6B8, "MulticastInlineDelegateProperty"},
            {"ResetInputActionRow", 0x6C8, "StructProperty"},
            {"RunCommandInputActionRow", 0x6D8, "StructProperty"},
            {"Overlay_Details", 0x6F8, "ObjectProperty"},
            {"Overlay_EmptyList", 0x700, "ObjectProperty"},
        }};
    };

    struct FortSettingEditCondition_CKM_Enable
    {
        static constexpr std::string_view Name = "FortSettingEditCondition_CKM_Enable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSettingEditCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t DataTable = 0x40;
            static constexpr std::uintptr_t LoadedDataTable = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataTable", 0x40, "SoftObjectProperty"},
            {"LoadedDataTable", 0x60, "ObjectProperty"},
        }};
    };

}
