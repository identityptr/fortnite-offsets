#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ItemProcessor
{
    struct ItemProcessorComponent
    {
        static constexpr std::string_view Name = "ItemProcessorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnProcessComplete = 0xC0;
            static constexpr std::uintptr_t ItemProcessorData = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnProcessComplete", 0xC0, "MulticastInlineDelegateProperty"},
            {"ItemProcessorData", 0xD0, "StructProperty"},
        }};
    };

}
