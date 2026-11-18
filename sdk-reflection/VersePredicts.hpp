#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VersePredicts
{
    struct VersePredictsClientConnection
    {
        static constexpr std::string_view Name = "VersePredictsClientConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RawNodeID = 0x284;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RawNodeID", 0x284, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "Client_ReceiveDataFromServer",
            "OnRep_NodeID",
            "Server_OnClientConnectionReady",
            "Server_ReportRuntimeError",
        }};
    };

}
