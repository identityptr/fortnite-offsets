#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_FabricMIDIPlayerUI
{
    struct FabricCreativePropertyEditWidgetMidiSourceBase
    {
        static constexpr std::string_view Name = "FabricCreativePropertyEditWidgetMidiSourceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CreativePropertyEditWidgetUserOptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MidiSourceOptionValue = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MidiSourceOptionValue", 0x650, "StructProperty"},
        }};
    };

}
