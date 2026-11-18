#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MemorySnapshot
{
    struct TakeAssetSnapshot
    {
        static constexpr std::string_view Name = "TakeAssetSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetInstanceId = 0x0;
            static constexpr std::uintptr_t TraceFlags = 0x10;
            static constexpr std::uintptr_t HostAddress = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetInstanceId", 0x0, "StructProperty"},
            {"TraceFlags", 0x10, "UInt32Property"},
            {"HostAddress", 0x18, "StrProperty"},
        }};
    };

}
