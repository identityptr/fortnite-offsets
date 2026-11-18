#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VividRazorCoreGameplayRuntime
{
    struct VividRazorPlayspace
    {
        static constexpr std::string_view Name = "VividRazorPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyInactivePlayspaceUserAdded = 0x538;
            static constexpr std::uintptr_t NotifyInactivePlayspaceUserRemoved = 0x560;
            static constexpr std::uintptr_t InactivePlayspaceUsers = 0x588;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x600;
            static constexpr std::uintptr_t UserAcceptanceType = 0x603;
            static constexpr std::uintptr_t MatchmakingSettings = 0x608;
            static constexpr std::uintptr_t ReplicatedStateClass = 0x630;
            static constexpr std::uintptr_t ReplicatedState = 0x638;
            static constexpr std::uintptr_t EventRouter = 0x640;
            static constexpr std::uintptr_t bShouldCreateEventRouter = 0x648;
            static constexpr std::uintptr_t InactivePendingUsers = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"NotifyInactivePlayspaceUserAdded", 0x538, "MulticastInlineDelegateProperty"},
            {"NotifyInactivePlayspaceUserRemoved", 0x560, "MulticastInlineDelegateProperty"},
            {"InactivePlayspaceUsers", 0x588, "StructProperty"},
            {"bSubscribeToMeshNetwork", 0x600, "BoolProperty"},
            {"UserAcceptanceType", 0x603, "EnumProperty"},
            {"MatchmakingSettings", 0x608, "StructProperty"},
            {"ReplicatedStateClass", 0x630, "ClassProperty"},
            {"ReplicatedState", 0x638, "ObjectProperty"},
            {"EventRouter", 0x640, "ObjectProperty"},
            {"bShouldCreateEventRouter", 0x648, "BoolProperty"},
            {"InactivePendingUsers", 0x650, "ArrayProperty"},
        }};
    };

}
