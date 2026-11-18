#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EditableComputeGraph
{
    struct EditableComputeGraph
    {
        static constexpr std::string_view Name = "EditableComputeGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ComputeGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t KernelInvocations = 0x28;
            static constexpr std::uintptr_t DataInterfaces = 0x38;
            static constexpr std::uintptr_t GraphEdges = 0x48;
            static constexpr std::uintptr_t Bindings = 0x58;
            static constexpr std::uintptr_t DataInterfaceToBinding = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"KernelInvocations", 0x28, "ArrayProperty"},
            {"DataInterfaces", 0x38, "ArrayProperty"},
            {"GraphEdges", 0x48, "ArrayProperty"},
            {"Bindings", 0x58, "ArrayProperty"},
            {"DataInterfaceToBinding", 0x68, "ArrayProperty"},
        }};
    };

}
