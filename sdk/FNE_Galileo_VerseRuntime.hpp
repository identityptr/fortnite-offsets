#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNE_Galileo_VerseRuntime
{
    struct AkitaForcePowerFunctionLibrary
    {
        static constexpr std::string_view Name = "AkitaForcePowerFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AkitaLightsaberFunctionLibrary
    {
        static constexpr std::string_view Name = "AkitaLightsaberFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LightsaberBladeConfigComponent
    {
        static constexpr std::string_view Name = "LightsaberBladeConfigComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParamsChanged = 0xC0;
            static constexpr std::uintptr_t MaterialParams = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaterialParamsChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"MaterialParams", 0xD0, "StructProperty"},
        }};
    };

}
