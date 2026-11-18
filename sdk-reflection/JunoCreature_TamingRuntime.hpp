#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoCreature_TamingRuntime
{
    struct JunoAnimalProcessorComponent
    {
        static constexpr std::string_view Name = "JunoAnimalProcessorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultFriendshipModifiers = 0xC0;
            static constexpr std::uintptr_t AnimalProcessorConfigRegistryType = 0xC8;
            static constexpr std::uintptr_t UnassignedCraftingTags = 0xD0;
            static constexpr std::uintptr_t AssignedAnimalDescriptorTag = 0xF0;
            static constexpr std::uintptr_t AssignedFriendshipStateTag = 0xF8;
            static constexpr std::uintptr_t CurrentCraftingSpeedModifier = 0xFC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DefaultFriendshipModifiers", 0xC0, "ObjectProperty"},
            {"AnimalProcessorConfigRegistryType", 0xC8, "StructProperty"},
            {"UnassignedCraftingTags", 0xD0, "StructProperty"},
            {"AssignedAnimalDescriptorTag", 0xF0, "StructProperty"},
            {"AssignedFriendshipStateTag", 0xF8, "StructProperty"},
            {"CurrentCraftingSpeedModifier", 0xFC, "FloatProperty"},
        }};
    };

    struct JunoAnimalProcessorFriendshipModifierMappings
    {
        static constexpr std::string_view Name = "JunoAnimalProcessorFriendshipModifierMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t FriendshipModifierMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FriendshipModifierMap", 0x28, "MapProperty"},
        }};
    };

    struct JunoAnimalProcessorWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoAnimalProcessorWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoBarnAssignmentMenuInitData
    {
        static constexpr std::string_view Name = "JunoBarnAssignmentMenuInitData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BarnActor = 0x28;
            static constexpr std::uintptr_t AnimalActor = 0x30;
            static constexpr std::uintptr_t BarnAssignmentMode = 0x38;
            static constexpr std::uintptr_t UniqueAIIdentifier = 0x3C;
            static constexpr std::uintptr_t ExistingName = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BarnActor", 0x28, "WeakObjectProperty"},
            {"AnimalActor", 0x30, "WeakObjectProperty"},
            {"BarnAssignmentMode", 0x38, "EnumProperty"},
            {"UniqueAIIdentifier", 0x3C, "StructProperty"},
            {"ExistingName", 0x40, "TextProperty"},
        }};
    };

    struct JunoControllerComponent_Taming
    {
        static constexpr std::string_view Name = "JunoControllerComponent_Taming";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FollowingAnimalAIDescriptorTag = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FollowingAnimalAIDescriptorTag", 0x110, "StructProperty"},
        }};
    };

}
