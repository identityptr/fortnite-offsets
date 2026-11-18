#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DragonCartDoorsRuntime
{
    struct DragonCartDoorPushComponent
    {
        static constexpr std::string_view Name = "DragonCartDoorPushComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActorTargeted = 0xC0;
            static constexpr std::uintptr_t PushPointSceneComp = 0xD0;
            static constexpr std::uintptr_t bUseSourceActor = 0xD8;
            static constexpr std::uintptr_t ImpulseTargetingPreset = 0xE0;
            static constexpr std::uintptr_t AsyncTargetingHandle = 0xE8;
            static constexpr std::uintptr_t NextTargetingTimerHandle = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnActorTargeted", 0xC0, "MulticastInlineDelegateProperty"},
            {"PushPointSceneComp", 0xD0, "ObjectProperty"},
            {"bUseSourceActor", 0xD8, "BoolProperty"},
            {"ImpulseTargetingPreset", 0xE0, "ObjectProperty"},
            {"AsyncTargetingHandle", 0xE8, "StructProperty"},
            {"NextTargetingTimerHandle", 0xF0, "StructProperty"},
        }};
    };

}
