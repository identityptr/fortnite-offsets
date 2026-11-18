#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_GameStreamRuntime
{
    struct CreativeGameStreamDeviceComponent
    {
        static constexpr std::string_view Name = "CreativeGameStreamDeviceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTriggered = 0xC0;
            static constexpr std::uintptr_t MinigameLogicComponent = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnTriggered", 0xC0, "MulticastSparseDelegateProperty"},
            {"MinigameLogicComponent", 0xC4, "WeakObjectProperty"},
        }};
    };

    struct CreativeGameStreamDeviceCoordinatorComponent
    {
        static constexpr std::string_view Name = "CreativeGameStreamDeviceCoordinatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EndGameCreativeGameStreamDeviceComponentQueue = 0xC0;
            static constexpr std::uintptr_t Minigame = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EndGameCreativeGameStreamDeviceComponentQueue", 0xC0, "ArrayProperty"},
            {"Minigame", 0xD0, "WeakObjectProperty"},
        }};
    };

}
