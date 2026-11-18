#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BuilderTool
{
    struct BuilderTool
    {
        static constexpr std::string_view Name = "BuilderTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInteractionStarted = 0x1A70;
            static constexpr std::uintptr_t OnInteractionStopped = 0x1A80;
            static constexpr std::uintptr_t InputMappingContext = 0x1A90;
            static constexpr std::uintptr_t InputMappingPriority = 0x1A98;
            static constexpr std::uintptr_t UnEquipInputAction = 0x1AA0;
            static constexpr std::uintptr_t ActivatedTags = 0x1AA8;
            static constexpr std::uintptr_t Behaviors = 0x1AC8;
            static constexpr std::uintptr_t ActiveBehavior = 0x1AD8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnInteractionStarted", 0x1A70, "MulticastInlineDelegateProperty"},
            {"OnInteractionStopped", 0x1A80, "MulticastInlineDelegateProperty"},
            {"InputMappingContext", 0x1A90, "ObjectProperty"},
            {"InputMappingPriority", 0x1A98, "IntProperty"},
            {"UnEquipInputAction", 0x1AA0, "ObjectProperty"},
            {"ActivatedTags", 0x1AA8, "StructProperty"},
            {"Behaviors", 0x1AC8, "ArrayProperty"},
            {"ActiveBehavior", 0x1AD8, "ObjectProperty"},
        }};
    };

    struct BuilderToolBehavior
    {
        static constexpr std::string_view Name = "BuilderToolBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInteractionStart = 0xC0;
            static constexpr std::uintptr_t OnInteractionTrigger = 0xD0;
            static constexpr std::uintptr_t OnInteractionEnd = 0xE0;
            static constexpr std::uintptr_t OnInteractionExit = 0xF0;
            static constexpr std::uintptr_t bShouldAddToParent = 0x100;
            static constexpr std::uintptr_t Priority = 0x104;
            static constexpr std::uintptr_t ConfigData = 0x108;
            static constexpr std::uintptr_t ActivatedTags = 0x118;
            static constexpr std::uintptr_t InputMappingContext = 0x138;
            static constexpr std::uintptr_t InputMappingPriority = 0x140;
            static constexpr std::uintptr_t TriggerInputAction = 0x148;
            static constexpr std::uintptr_t ExitInputAction = 0x150;
            static constexpr std::uintptr_t StartInteractionAbility = 0x168;
            static constexpr std::uintptr_t EndInteractionAbility = 0x170;
            static constexpr std::uintptr_t FailAbility = 0x178;
            static constexpr std::uintptr_t ExitAbility = 0x180;
            static constexpr std::uintptr_t SupportedClasses = 0x188;
            static constexpr std::uintptr_t SupportedBehaviorTags = 0x1A8;
            static constexpr std::uintptr_t bSupportsNonActorInteraction = 0x1C8;
            static constexpr std::uintptr_t SelectedActors = 0x1D0;
            static constexpr std::uintptr_t SelectionGUID = 0x1E0;
            static constexpr std::uintptr_t CurrentBehaviorTag = 0x1F0;
            static constexpr std::uintptr_t ClientPredictedActors = 0x1F8;
            static constexpr std::uintptr_t ServerSpawnedSelections = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"OnInteractionStart", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnInteractionTrigger", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnInteractionEnd", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnInteractionExit", 0xF0, "MulticastInlineDelegateProperty"},
            {"bShouldAddToParent", 0x100, "BoolProperty"},
            {"Priority", 0x104, "IntProperty"},
            {"ConfigData", 0x108, "StructProperty"},
            {"ActivatedTags", 0x118, "StructProperty"},
            {"InputMappingContext", 0x138, "ObjectProperty"},
            {"InputMappingPriority", 0x140, "IntProperty"},
            {"TriggerInputAction", 0x148, "ObjectProperty"},
            {"ExitInputAction", 0x150, "ObjectProperty"},
            {"StartInteractionAbility", 0x168, "ClassProperty"},
            {"EndInteractionAbility", 0x170, "ClassProperty"},
            {"FailAbility", 0x178, "ClassProperty"},
            {"ExitAbility", 0x180, "ClassProperty"},
            {"SupportedClasses", 0x188, "StructProperty"},
            {"SupportedBehaviorTags", 0x1A8, "StructProperty"},
            {"bSupportsNonActorInteraction", 0x1C8, "BoolProperty"},
            {"SelectedActors", 0x1D0, "ArrayProperty"},
            {"SelectionGUID", 0x1E0, "StructProperty"},
            {"CurrentBehaviorTag", 0x1F0, "StructProperty"},
            {"ClientPredictedActors", 0x1F8, "ArrayProperty"},
            {"ServerSpawnedSelections", 0x208, "ArrayProperty"},
        }};
    };

    struct BuilderToolItemDefinition
    {
        static constexpr std::string_view Name = "BuilderToolItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWorldItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemType = 0x98;
            static constexpr std::uintptr_t PrimaryAssetIdItemTypeOverride = 0x99;
            static constexpr std::uintptr_t bShouldDisplayQuantity = 0x9A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemType", 0x98, "EnumProperty"},
            {"PrimaryAssetIdItemTypeOverride", 0x99, "EnumProperty"},
            {"bShouldDisplayQuantity", 0x9A, "BoolProperty"},
        }};
    };

    struct BuilderToolPlayerComponent
    {
        static constexpr std::string_view Name = "BuilderToolPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BuilderToolWeaponItemDefinition = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BuilderToolWeaponItemDefinition", 0xC8, "ObjectProperty"},
        }};
    };

    struct BuilderToolSelectedActorInterface
    {
        static constexpr std::string_view Name = "BuilderToolSelectedActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
