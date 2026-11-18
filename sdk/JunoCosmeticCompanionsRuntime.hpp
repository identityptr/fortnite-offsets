#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoCosmeticCompanionsRuntime
{
    struct JunoCosmeticCompanionItemDefinitionOverrideExtension
    {
        static constexpr std::string_view Name = "JunoCosmeticCompanionItemDefinitionOverrideExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAccountItemDefinitionOverrideExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCosmeticCompanionItemOverrideDefinition
    {
        static constexpr std::string_view Name = "JunoCosmeticCompanionItemOverrideDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAccountItemOverrideDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseCosmeticCompanionItemDefinition = 0xC8;
            static constexpr std::uintptr_t BaseCosmeticComapnionAssetId = 0xE8;
            static constexpr std::uintptr_t InteractionSceneAsset = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BaseCosmeticCompanionItemDefinition", 0xC8, "SoftObjectProperty"},
            {"BaseCosmeticComapnionAssetId", 0xE8, "StructProperty"},
            {"InteractionSceneAsset", 0xF0, "SoftObjectProperty"},
        }};
    };

}
