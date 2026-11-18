#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreatorProfileRuntime
{
    struct CreatorProfileBlueprintFunctionLibrary
    {
        static constexpr std::string_view Name = "CreatorProfileBlueprintFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayspaceComponent_CreatorProfile
    {
        static constexpr std::string_view Name = "FortPlayspaceComponent_CreatorProfile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCreatorSocialInfoUpdated = 0x118;
            static constexpr std::uintptr_t CachedPlayerController = 0x138;
            static constexpr std::uintptr_t UpdatedCreatorSocialInfoStrings = 0x140;
            static constexpr std::uintptr_t HasCreatorSocialInfoFetched = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnCreatorSocialInfoUpdated", 0x118, "MulticastInlineDelegateProperty"},
            {"CachedPlayerController", 0x138, "WeakObjectProperty"},
            {"UpdatedCreatorSocialInfoStrings", 0x140, "ArrayProperty"},
            {"HasCreatorSocialInfoFetched", 0x150, "BoolProperty"},
        }};
    };

}
