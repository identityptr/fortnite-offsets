#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FieldNotification
{
    struct FieldNotificationId
    {
        static constexpr std::string_view Name = "FieldNotificationId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FieldName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FieldName", 0x0, "NameProperty"},
        }};
    };

    struct NotifyFieldValueChanged
    {
        static constexpr std::string_view Name = "NotifyFieldValueChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
