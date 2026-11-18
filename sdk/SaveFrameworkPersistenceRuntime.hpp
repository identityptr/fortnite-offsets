#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SaveFrameworkPersistenceRuntime
{
    struct FortPlayerStateComponent_SaveFrameworkPersistence
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_SaveFrameworkPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerPersistenceStatusChanged = 0xC0;
            static constexpr std::uintptr_t OnPlayerPersistenceAvailable = 0xD0;
            static constexpr std::uintptr_t OnPlayerPersistenceWiped = 0xE0;
            static constexpr std::uintptr_t PersistenceParams = 0xF0;
            static constexpr std::uintptr_t PersistenceDataRoot = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnPlayerPersistenceStatusChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnPlayerPersistenceAvailable", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnPlayerPersistenceWiped", 0xE0, "MulticastInlineDelegateProperty"},
            {"PersistenceParams", 0xF0, "StructProperty"},
            {"PersistenceDataRoot", 0x118, "StructProperty"},
        }};
    };

}
