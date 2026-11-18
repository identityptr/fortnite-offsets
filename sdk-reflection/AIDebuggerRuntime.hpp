#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AIDebuggerRuntime
{
    struct AIDebuggerCheatManager
    {
        static constexpr std::string_view Name = "AIDebuggerCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIDebuggerRendererComponent
    {
        static constexpr std::string_view Name = "AIDebuggerRendererComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NavMeshMaterial = 0x640;
            static constexpr std::uintptr_t NavLinkLineThickness = 0x648;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NavMeshMaterial", 0x640, "ObjectProperty"},
            {"NavLinkLineThickness", 0x648, "FloatProperty"},
        }};
    };

    struct FortControllerComponent_AIDebugger
    {
        static constexpr std::string_view Name = "FortControllerComponent_AIDebugger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerPC = 0xC8;
            static constexpr std::uintptr_t NavMeshRendererComponentClass = 0xD0;
            static constexpr std::uintptr_t DefaultEnabledVisualizers = 0xD8;
            static constexpr std::uintptr_t DefaultNavDataIndexToDisplay = 0xDC;
            static constexpr std::uintptr_t EnabledVisualizers = 0xE0;
            static constexpr std::uintptr_t NumNavMeshes = 0xE1;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OwnerPC", 0xC8, "ObjectProperty"},
            {"NavMeshRendererComponentClass", 0xD0, "ClassProperty"},
            {"DefaultEnabledVisualizers", 0xD8, "ByteProperty"},
            {"DefaultNavDataIndexToDisplay", 0xDC, "IntProperty"},
            {"EnabledVisualizers", 0xE0, "ByteProperty"},
            {"NumNavMeshes", 0xE1, "ByteProperty"},
        }};
    };

}
