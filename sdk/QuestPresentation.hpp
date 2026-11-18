#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::QuestPresentation
{
    struct QuestViewExtensionData_HasQuestPresentation
    {
        static constexpr std::string_view Name = "QuestViewExtensionData_HasQuestPresentation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "QuestViewExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryIDs = 0x8;
            static constexpr std::uintptr_t bShowToast = 0x18;
            static constexpr std::uintptr_t bPinnable = 0x19;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CategoryIDs", 0x8, "ArrayProperty"},
            {"bShowToast", 0x18, "BoolProperty"},
            {"bPinnable", 0x19, "BoolProperty"},
        }};
    };

}
