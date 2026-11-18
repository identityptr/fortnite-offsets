#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AndroidPermission
{
    struct AndroidPermissionCallbackProxy
    {
        static constexpr std::string_view Name = "AndroidPermissionCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPermissionsGrantedDynamicDelegate = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnPermissionsGrantedDynamicDelegate", 0x28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AndroidPermissionFunctionLibrary
    {
        static constexpr std::string_view Name = "AndroidPermissionFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
