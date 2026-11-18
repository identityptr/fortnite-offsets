#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeDebugMenuRuntime
{
    struct FortControllerComponent_CreativeDebugger
    {
        static constexpr std::string_view Name = "FortControllerComponent_CreativeDebugger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DebuggerEnabledByDataRegistry = 0xD0;
            static constexpr std::uintptr_t VerseDebugDrawEnabledByDataRegistry = 0xF8;
            static constexpr std::uintptr_t NavigationMeshEnabledByDataRegistry = 0x120;
            static constexpr std::uintptr_t NavigationPathsEnabledByDataRegistry = 0x148;
            static constexpr std::uintptr_t GhostModeEnabledByDataRegistry = 0x170;
            static constexpr std::uintptr_t InvincibilityEnabledByDataRegistry = 0x198;
            static constexpr std::uintptr_t FastIterationEnabledByDataRegistry = 0x1C0;
            static constexpr std::uintptr_t AIDebuggerClass = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DebuggerEnabledByDataRegistry", 0xD0, "StructProperty"},
            {"VerseDebugDrawEnabledByDataRegistry", 0xF8, "StructProperty"},
            {"NavigationMeshEnabledByDataRegistry", 0x120, "StructProperty"},
            {"NavigationPathsEnabledByDataRegistry", 0x148, "StructProperty"},
            {"GhostModeEnabledByDataRegistry", 0x170, "StructProperty"},
            {"InvincibilityEnabledByDataRegistry", 0x198, "StructProperty"},
            {"FastIterationEnabledByDataRegistry", 0x1C0, "StructProperty"},
            {"AIDebuggerClass", 0x1E8, "ClassProperty"},
        }};
    };

}
