#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseFortniteAI
{
    struct AIActionTaskInterfaceProxy
    {
        static constexpr std::string_view Name = "AIActionTaskInterfaceProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIActionsHandlerComponent
    {
        static constexpr std::string_view Name = "AIActionsHandlerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct AIAnimationComponentData
    {
        static constexpr std::string_view Name = "AIAnimationComponentData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayAnimGameplayAbility = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayAnimGameplayAbility", 0x28, "ClassProperty"},
        }};
    };

    struct AIComponentData
    {
        static constexpr std::string_view Name = "AIComponentData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIPerceptionComponentData
    {
        static constexpr std::string_view Name = "AIPerceptionComponentData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BehaviorTreeVerseInjection
    {
        static constexpr std::string_view Name = "BehaviorTreeVerseInjection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectionTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectionTag", 0x28, "StructProperty"},
        }};
    };

    struct CosmeticDownloadCandidateComponentNPC
    {
        static constexpr std::string_view Name = "CosmeticDownloadCandidateComponentNPC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CosmeticDownloadCandidateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortAIComponent_RandomCustomization
    {
        static constexpr std::string_view Name = "FortAIComponent_RandomCustomization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterRandomSeed = 0xD0;
            static constexpr std::uintptr_t ChosenCharacter = 0xD8;
            static constexpr std::uintptr_t ChosenCharacterParts = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CharacterRandomSeed", 0xD0, "IntProperty"},
            {"ChosenCharacter", 0xD8, "StructProperty"},
            {"ChosenCharacterParts", 0x108, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_Verse
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_Verse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_ScriptBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NPCBehaviorScriptInstance = 0x30;
            static constexpr std::uintptr_t NPCBehaviorScriptOverride = 0x38;
            static constexpr std::uintptr_t NPCPrefab = 0x40;
            static constexpr std::uintptr_t bReplicateEntity = 0x60;
            static constexpr std::uintptr_t EnableVerseForNPC = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NPCBehaviorScriptInstance", 0x30, "ObjectProperty"},
            {"NPCBehaviorScriptOverride", 0x38, "ObjectProperty"},
            {"NPCPrefab", 0x40, "SoftClassProperty"},
            {"bReplicateEntity", 0x60, "BoolProperty"},
            {"EnableVerseForNPC", 0x68, "StructProperty"},
        }};
    };

    struct FortControllerComponent_Verse
    {
        static constexpr std::string_view Name = "FortControllerComponent_Verse";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortGameFeatureAction_SetDefaultCharacterDefinition
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_SetDefaultCharacterDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultNPCCharacterDefinition = 0x28;
            static constexpr std::uintptr_t PreviousNPCCharacterDefinition = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultNPCCharacterDefinition", 0x28, "SoftObjectProperty"},
            {"PreviousNPCCharacterDefinition", 0x48, "SoftObjectProperty"},
        }};
    };

    struct FortNavigationFilter_DriveToAction
    {
        static constexpr std::string_view Name = "FortNavigationFilter_DriveToAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationQueryFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortPawnComponent_AICompanionProxy
    {
        static constexpr std::string_view Name = "FortPawnComponent_AICompanionProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAnticsEnabled = 0xD9;
            static constexpr std::uintptr_t CosmeticComponent = 0xE0;
            static constexpr std::uintptr_t ReactionProxyAsset = 0xF0;
            static constexpr std::uintptr_t ReactionTags = 0xF8;
            static constexpr std::uintptr_t ReactionMontage = 0x110;
            static constexpr std::uintptr_t AnimSequenceToPlay = 0x150;
            static constexpr std::uintptr_t BlendInTime = 0x198;
            static constexpr std::uintptr_t BlendOutTime = 0x19C;
            static constexpr std::uintptr_t bAboutToStop = 0x1A0;
            static constexpr std::uintptr_t StopAnimationTriggerDistance = 0x1A4;
            static constexpr std::uintptr_t CosmeticLoadout = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bAnticsEnabled", 0xD9, "BoolProperty"},
            {"CosmeticComponent", 0xE0, "ObjectProperty"},
            {"ReactionProxyAsset", 0xF0, "ObjectProperty"},
            {"ReactionTags", 0xF8, "MapProperty"},
            {"ReactionMontage", 0x110, "SoftObjectProperty"},
            {"AnimSequenceToPlay", 0x150, "SoftObjectProperty"},
            {"BlendInTime", 0x198, "FloatProperty"},
            {"BlendOutTime", 0x19C, "FloatProperty"},
            {"bAboutToStop", 0x1A0, "BoolProperty"},
            {"StopAnimationTriggerDistance", 0x1A4, "FloatProperty"},
            {"CosmeticLoadout", 0x1A8, "StructProperty"},
        }};
    };

    struct FortPawnComponent_Scale
    {
        static constexpr std::string_view Name = "FortPawnComponent_Scale";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ScaleParams = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScaleParams", 0xC8, "StructProperty"},
        }};
    };

    struct GameFeatureAction_RegisterModifier
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifiersInfo = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModifiersInfo", 0x28, "ArrayProperty"},
        }};
    };

    struct GameplayAbility_PlayAnim
    {
        static constexpr std::string_view Name = "GameplayAbility_PlayAnim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityTags = 0xA8;
            static constexpr std::uintptr_t bReplicateInputDirectly = 0xC8;
            static constexpr std::uintptr_t RemoteInstanceEnded = 0xC9;
            static constexpr std::uintptr_t ReplicationPolicy = 0xCE;
            static constexpr std::uintptr_t InstancingPolicy = 0xCF;
            static constexpr std::uintptr_t bServerRespectsRemoteAbilityCancellation = 0xD0;
            static constexpr std::uintptr_t bRetriggerInstancedAbility = 0xD1;
            static constexpr std::uintptr_t CurrentActivationInfo = 0xD4;
            static constexpr std::uintptr_t CurrentEventData = 0xE8;
            static constexpr std::uintptr_t NetExecutionPolicy = 0x1A8;
            static constexpr std::uintptr_t NetSecurityPolicy = 0x1A9;
            static constexpr std::uintptr_t CostGameplayEffectClass = 0x1B0;
            static constexpr std::uintptr_t AbilityTriggers = 0x1B8;
            static constexpr std::uintptr_t CooldownGameplayEffectClass = 0x1C8;
            static constexpr std::uintptr_t CancelAbilitiesWithTag = 0x1D0;
            static constexpr std::uintptr_t BlockAbilitiesWithTag = 0x1F0;
            static constexpr std::uintptr_t ActivationOwnedTags = 0x210;
            static constexpr std::uintptr_t ActivationRequiredTags = 0x230;
            static constexpr std::uintptr_t ActivationBlockedTags = 0x250;
            static constexpr std::uintptr_t SourceRequiredTags = 0x270;
            static constexpr std::uintptr_t SourceBlockedTags = 0x290;
            static constexpr std::uintptr_t TargetRequiredTags = 0x2B0;
            static constexpr std::uintptr_t TargetBlockedTags = 0x2D0;
            static constexpr std::uintptr_t ActiveTasks = 0x310;
            static constexpr std::uintptr_t CurrentMontage = 0x330;
            static constexpr std::uintptr_t bIsActive = 0x368;
            static constexpr std::uintptr_t bIsAbilityEnding = 0x369;
            static constexpr std::uintptr_t bIsCancelable = 0x36A;
            static constexpr std::uintptr_t bIsBlockingOtherAbilities = 0x36B;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"AbilityTags", 0xA8, "StructProperty"},
            {"bReplicateInputDirectly", 0xC8, "BoolProperty"},
            {"RemoteInstanceEnded", 0xC9, "BoolProperty"},
            {"ReplicationPolicy", 0xCE, "ByteProperty"},
            {"InstancingPolicy", 0xCF, "ByteProperty"},
            {"bServerRespectsRemoteAbilityCancellation", 0xD0, "BoolProperty"},
            {"bRetriggerInstancedAbility", 0xD1, "BoolProperty"},
            {"CurrentActivationInfo", 0xD4, "StructProperty"},
            {"CurrentEventData", 0xE8, "StructProperty"},
            {"NetExecutionPolicy", 0x1A8, "ByteProperty"},
            {"NetSecurityPolicy", 0x1A9, "ByteProperty"},
            {"CostGameplayEffectClass", 0x1B0, "ClassProperty"},
            {"AbilityTriggers", 0x1B8, "ArrayProperty"},
            {"CooldownGameplayEffectClass", 0x1C8, "ClassProperty"},
            {"CancelAbilitiesWithTag", 0x1D0, "StructProperty"},
            {"BlockAbilitiesWithTag", 0x1F0, "StructProperty"},
            {"ActivationOwnedTags", 0x210, "StructProperty"},
            {"ActivationRequiredTags", 0x230, "StructProperty"},
            {"ActivationBlockedTags", 0x250, "StructProperty"},
            {"SourceRequiredTags", 0x270, "StructProperty"},
            {"SourceBlockedTags", 0x290, "StructProperty"},
            {"TargetRequiredTags", 0x2B0, "StructProperty"},
            {"TargetBlockedTags", 0x2D0, "StructProperty"},
            {"ActiveTasks", 0x310, "ArrayProperty"},
            {"CurrentMontage", 0x330, "ObjectProperty"},
            {"bIsActive", 0x368, "BoolProperty"},
            {"bIsAbilityEnding", 0x369, "BoolProperty"},
            {"bIsCancelable", 0x36A, "BoolProperty"},
            {"bIsBlockingOtherAbilities", 0x36B, "BoolProperty"},
        }};
    };

    struct GuardPerceptionComponentData
    {
        static constexpr std::string_view Name = "GuardPerceptionComponentData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIPerceptionComponentData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InjectedActionScript
    {
        static constexpr std::string_view Name = "InjectedActionScript";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InjectedBehaviorScriptBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InjectedBehaviorScriptBase
    {
        static constexpr std::string_view Name = "InjectedBehaviorScriptBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCBehaviorScriptBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InjectedConditionScript
    {
        static constexpr std::string_view Name = "InjectedConditionScript";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InjectedBehaviorScriptBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LoadAndCreateComponentListAsync
    {
        static constexpr std::string_view Name = "LoadAndCreateComponentListAsync";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LoadNPCCharacterDefinitionAsyncBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinished = 0x98;
            static constexpr std::uintptr_t ComponentsList = 0xA8;
            static constexpr std::uintptr_t bStoredForPreview = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnFinished", 0x98, "MulticastInlineDelegateProperty"},
            {"ComponentsList", 0xA8, "WeakObjectProperty"},
            {"bStoredForPreview", 0xB0, "BoolProperty"},
        }};
    };

    struct LoadNPCCharacterDefinitionAsync
    {
        static constexpr std::string_view Name = "LoadNPCCharacterDefinitionAsync";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LoadNPCCharacterDefinitionAsyncBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLoaded = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnLoaded", 0x98, "MulticastInlineDelegateProperty"},
        }};
    };

    struct LoadNPCCharacterDefinitionAsyncBase
    {
        static constexpr std::string_view Name = "LoadNPCCharacterDefinitionAsyncBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadedCharacterDefinition = 0x30;
            static constexpr std::uintptr_t ContextObject = 0x38;
            static constexpr std::uintptr_t StoredAdditionalModifiers = 0x40;
            static constexpr std::uintptr_t StoredCharacterDefinition = 0x50;
            static constexpr std::uintptr_t LoadedObjects = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LoadedCharacterDefinition", 0x30, "WeakObjectProperty"},
            {"ContextObject", 0x38, "ObjectProperty"},
            {"StoredAdditionalModifiers", 0x40, "ArrayProperty"},
            {"StoredCharacterDefinition", 0x50, "SoftObjectProperty"},
            {"LoadedObjects", 0x70, "ArrayProperty"},
        }};
    };

    struct NPCBehaviorScript
    {
        static constexpr std::string_view Name = "NPCBehaviorScript";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCBehaviorScriptBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NPCBehaviorScriptBase
    {
        static constexpr std::string_view Name = "NPCBehaviorScriptBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NPCBehaviorScriptComponent
    {
        static constexpr std::string_view Name = "NPCBehaviorScriptComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NPCBehaviorScript = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NPCBehaviorScript", 0x158, "ObjectProperty"},
        }};
    };

    struct NPCCharacterDefinition
    {
        static constexpr std::string_view Name = "NPCCharacterDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIPawnCustomizationDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCharacterModifierModified = 0x138;
            static constexpr std::uintptr_t OnCharacterTypeModified = 0x148;
            static constexpr std::uintptr_t Type = 0x158;
            static constexpr std::uintptr_t Behavior = 0x160;
            static constexpr std::uintptr_t Modifiers = 0x168;
            static constexpr std::uintptr_t bRetargetFacialAnimation = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnCharacterModifierModified", 0x138, "MulticastInlineDelegateProperty"},
            {"OnCharacterTypeModified", 0x148, "MulticastInlineDelegateProperty"},
            {"Type", 0x158, "ObjectProperty"},
            {"Behavior", 0x160, "ObjectProperty"},
            {"Modifiers", 0x168, "ArrayProperty"},
            {"bRetargetFacialAnimation", 0x178, "BoolProperty"},
        }};
    };

    struct NPCCharacterDefinitionComponent
    {
        static constexpr std::string_view Name = "NPCCharacterDefinitionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NPCCharacterDefinition = 0x158;
            static constexpr std::uintptr_t DefaultNPCCharacterDefinition = 0x178;
            static constexpr std::uintptr_t NPCCharacterModifiers = 0x198;
            static constexpr std::uintptr_t RequiredTag = 0x1A8;
            static constexpr std::uintptr_t ForbiddenTags = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NPCCharacterDefinition", 0x158, "SoftObjectProperty"},
            {"DefaultNPCCharacterDefinition", 0x178, "SoftObjectProperty"},
            {"NPCCharacterModifiers", 0x198, "ArrayProperty"},
            {"RequiredTag", 0x1A8, "StructProperty"},
            {"ForbiddenTags", 0x1B0, "StructProperty"},
        }};
    };

    struct NPCCharacterModifier
    {
        static constexpr std::string_view Name = "NPCCharacterModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NPCCharacterModifier_Behavior
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Behavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NPCCharacterModifier_Bots
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Bots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bGenerateRandomName = 0x28;
            static constexpr std::uintptr_t bUseFixedName = 0x29;
            static constexpr std::uintptr_t FixedBotName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bGenerateRandomName", 0x28, "BoolProperty"},
            {"bUseFixedName", 0x29, "BoolProperty"},
            {"FixedBotName", 0x30, "StrProperty"},
        }};
    };

    struct NPCCharacterModifier_CosmeticSpawn
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_CosmeticSpawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterLook = 0x30;
            static constexpr std::uintptr_t CharacterCosmetic = 0x38;
            static constexpr std::uintptr_t CharacterVariantChannels = 0x58;
            static constexpr std::uintptr_t CharacterCosmeticAssetId = 0x68;
            static constexpr std::uintptr_t SidekickCosmetic = 0x78;
            static constexpr std::uintptr_t CompanionCosmeticAssetId = 0x98;
            static constexpr std::uintptr_t CompanionVariantChannels = 0xA8;
            static constexpr std::uintptr_t CharacterBlueprint = 0xB8;
            static constexpr std::uintptr_t CharacterMovement = 0xD8;
            static constexpr std::uintptr_t AnimPreset = 0xE0;
            static constexpr std::uintptr_t IKRetargeter = 0x100;
            static constexpr std::uintptr_t bRetargetFacialAnimation = 0x120;
            static constexpr std::uintptr_t RandomCharacterParts = 0x128;
            static constexpr std::uintptr_t CharacterCosmeticAssetIdDataTable = 0x138;
            static constexpr std::uintptr_t ExcludedCharacterCosmeticContextTags = 0x158;
            static constexpr std::uintptr_t AICompanionProxyToApply = 0x178;
            static constexpr std::uintptr_t bSupportAnimPreset = 0x198;
            static constexpr std::uintptr_t bSupportCharacterMovement = 0x198;
            static constexpr std::uintptr_t bSupportCustomCharacter = 0x198;
            static constexpr std::uintptr_t bSupportFortniteCharacter = 0x198;
            static constexpr std::uintptr_t bSupportFortniteCompanion = 0x198;
            static constexpr std::uintptr_t bSupportRandomizeCharacterParts = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"CharacterLook", 0x30, "EnumProperty"},
            {"CharacterCosmetic", 0x38, "SoftObjectProperty"},
            {"CharacterVariantChannels", 0x58, "ArrayProperty"},
            {"CharacterCosmeticAssetId", 0x68, "StrProperty"},
            {"SidekickCosmetic", 0x78, "SoftObjectProperty"},
            {"CompanionCosmeticAssetId", 0x98, "StrProperty"},
            {"CompanionVariantChannels", 0xA8, "ArrayProperty"},
            {"CharacterBlueprint", 0xB8, "SoftClassProperty"},
            {"CharacterMovement", 0xD8, "EnumProperty"},
            {"AnimPreset", 0xE0, "SoftClassProperty"},
            {"IKRetargeter", 0x100, "SoftObjectProperty"},
            {"bRetargetFacialAnimation", 0x120, "BoolProperty"},
            {"RandomCharacterParts", 0x128, "ArrayProperty"},
            {"CharacterCosmeticAssetIdDataTable", 0x138, "SoftObjectProperty"},
            {"ExcludedCharacterCosmeticContextTags", 0x158, "StructProperty"},
            {"AICompanionProxyToApply", 0x178, "SoftClassProperty"},
            {"bSupportAnimPreset", 0x198, "BoolProperty"},
            {"bSupportCharacterMovement", 0x198, "BoolProperty"},
            {"bSupportCustomCharacter", 0x198, "BoolProperty"},
            {"bSupportFortniteCharacter", 0x198, "BoolProperty"},
            {"bSupportFortniteCompanion", 0x198, "BoolProperty"},
            {"bSupportRandomizeCharacterParts", 0x198, "BoolProperty"},
        }};
    };

    struct NPCCharacterModifier_Effects
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Effects";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NPCCharacterModifier_Emotes
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Emotes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Emotes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Emotes", 0x28, "ArrayProperty"},
        }};
    };

    struct NPCCharacterModifier_Group
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Group";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanBeLeader = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCanBeLeader", 0x28, "BoolProperty"},
        }};
    };

    struct NPCCharacterModifier_GuardPerception
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_GuardPerception";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableDamage = 0x28;
            static constexpr std::uintptr_t bEnableHearing = 0x28;
            static constexpr std::uintptr_t bEnableSight = 0x28;
            static constexpr std::uintptr_t bEnableTouch = 0x28;
            static constexpr std::uintptr_t bOverrideDamageSettings = 0x28;
            static constexpr std::uintptr_t bOverrideHearingSettings = 0x28;
            static constexpr std::uintptr_t bOverrideSightSettings = 0x28;
            static constexpr std::uintptr_t bOverrideTouchSettings = 0x28;
            static constexpr std::uintptr_t SightPerceptionSettings = 0x30;
            static constexpr std::uintptr_t HearingPerceptionSettings = 0x50;
            static constexpr std::uintptr_t TouchPerceptionSettings = 0x70;
            static constexpr std::uintptr_t DamagePerceptionSettings = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bEnableDamage", 0x28, "BoolProperty"},
            {"bEnableHearing", 0x28, "BoolProperty"},
            {"bEnableSight", 0x28, "BoolProperty"},
            {"bEnableTouch", 0x28, "BoolProperty"},
            {"bOverrideDamageSettings", 0x28, "BoolProperty"},
            {"bOverrideHearingSettings", 0x28, "BoolProperty"},
            {"bOverrideSightSettings", 0x28, "BoolProperty"},
            {"bOverrideTouchSettings", 0x28, "BoolProperty"},
            {"SightPerceptionSettings", 0x30, "ObjectProperty"},
            {"HearingPerceptionSettings", 0x50, "ObjectProperty"},
            {"TouchPerceptionSettings", 0x70, "ObjectProperty"},
            {"DamagePerceptionSettings", 0x90, "ObjectProperty"},
        }};
    };

    struct NPCCharacterModifier_Inventory
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Inventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x28;
            static constexpr std::uintptr_t SupportedItemTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Items", 0x28, "ArrayProperty"},
            {"SupportedItemTags", 0x38, "StructProperty"},
        }};
    };

    struct NPCCharacterModifier_Movement
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Movement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t WalkSpeed = 0x28;
            static constexpr std::uintptr_t RunSpeed = 0x2C;
            static constexpr std::uintptr_t SprintSpeed = 0x30;
            static constexpr std::uintptr_t Acceleration = 0x34;
            static constexpr std::uintptr_t Deceleration = 0x38;
            static constexpr std::uintptr_t bOverrideFortniteLimits = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WalkSpeed", 0x28, "FloatProperty"},
            {"RunSpeed", 0x2C, "FloatProperty"},
            {"SprintSpeed", 0x30, "FloatProperty"},
            {"Acceleration", 0x34, "FloatProperty"},
            {"Deceleration", 0x38, "FloatProperty"},
            {"bOverrideFortniteLimits", 0x3C, "BoolProperty"},
        }};
    };

    struct NPCCharacterModifier_Navigation
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Navigation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideGenerationRadii = 0x28;
            static constexpr std::uintptr_t GenerationRadius = 0x2C;
            static constexpr std::uintptr_t GenerationRemovalRadius = 0x30;
            static constexpr std::uintptr_t bAlwaysGenerateNavigation = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bOverrideGenerationRadii", 0x28, "BoolProperty"},
            {"GenerationRadius", 0x2C, "FloatProperty"},
            {"GenerationRemovalRadius", 0x30, "FloatProperty"},
            {"bAlwaysGenerateNavigation", 0x34, "BoolProperty"},
        }};
    };

    struct NPCCharacterModifier_PatrolPath
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_PatrolPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t PatrolPathGroup = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PatrolPathGroup", 0x28, "EnumProperty"},
        }};
    };

    struct NPCCharacterModifier_Perception
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Perception";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableDamage = 0x28;
            static constexpr std::uintptr_t bEnableHearing = 0x28;
            static constexpr std::uintptr_t bEnableSight = 0x28;
            static constexpr std::uintptr_t bEnableTouch = 0x28;
            static constexpr std::uintptr_t bOverrideDamageSettings = 0x28;
            static constexpr std::uintptr_t bOverrideHearingSettings = 0x28;
            static constexpr std::uintptr_t bOverrideSightSettings = 0x28;
            static constexpr std::uintptr_t bOverrideTouchSettings = 0x28;
            static constexpr std::uintptr_t SightPerceptionSettings = 0x30;
            static constexpr std::uintptr_t HearingPerceptionSettings = 0x38;
            static constexpr std::uintptr_t TouchPerceptionSettings = 0x40;
            static constexpr std::uintptr_t DamagePerceptionSettings = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bEnableDamage", 0x28, "BoolProperty"},
            {"bEnableHearing", 0x28, "BoolProperty"},
            {"bEnableSight", 0x28, "BoolProperty"},
            {"bEnableTouch", 0x28, "BoolProperty"},
            {"bOverrideDamageSettings", 0x28, "BoolProperty"},
            {"bOverrideHearingSettings", 0x28, "BoolProperty"},
            {"bOverrideSightSettings", 0x28, "BoolProperty"},
            {"bOverrideTouchSettings", 0x28, "BoolProperty"},
            {"SightPerceptionSettings", 0x30, "ObjectProperty"},
            {"HearingPerceptionSettings", 0x38, "ObjectProperty"},
            {"TouchPerceptionSettings", 0x40, "ObjectProperty"},
            {"DamagePerceptionSettings", 0x48, "ObjectProperty"},
        }};
    };

    struct NPCCharacterModifier_Physics
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Physics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bCollidesWithPawn = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCollidesWithPawn", 0x28, "BoolProperty"},
        }};
    };

    struct NPCCharacterModifier_Scale
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Scale";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Scale = 0x28;
            static constexpr std::uintptr_t bScaleLocomotionAnimations = 0x2C;
            static constexpr std::uintptr_t bSupportModifyLocomotion = 0x2C;
            static constexpr std::uintptr_t bSupportModifyScale = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Scale", 0x28, "FloatProperty"},
            {"bScaleLocomotionAnimations", 0x2C, "BoolProperty"},
            {"bSupportModifyLocomotion", 0x2C, "BoolProperty"},
            {"bSupportModifyScale", 0x2C, "BoolProperty"},
        }};
    };

    struct NPCCharacterModifier_Sequencer
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Sequencer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueIdentifier = 0x28;
            static constexpr std::uintptr_t HashedUniqueIdentifier = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UniqueIdentifier", 0x28, "StrProperty"},
            {"HashedUniqueIdentifier", 0x38, "UInt32Property"},
        }};
    };

    struct NPCCharacterModifier_Team
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_Team";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamOption = 0x28;
            static constexpr std::uintptr_t TeamIndex = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TeamOption", 0x28, "EnumProperty"},
            {"TeamIndex", 0x2C, "UInt32Property"},
        }};
    };

    struct NPCCharacterModifier_UI
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_UI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
            static constexpr std::uintptr_t ShortDescription = 0x38;
            static constexpr std::uintptr_t Description = 0x48;
            static constexpr std::uintptr_t Icon = 0x58;
            static constexpr std::uintptr_t ShowNamePlate = 0x60;
            static constexpr std::uintptr_t ShowArrow = 0x61;
            static constexpr std::uintptr_t ShowIconMinimap = 0x62;
            static constexpr std::uintptr_t bSupportModifyIndicators = 0x63;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DisplayName", 0x28, "TextProperty"},
            {"ShortDescription", 0x38, "TextProperty"},
            {"Description", 0x48, "TextProperty"},
            {"Icon", 0x58, "ObjectProperty"},
            {"ShowNamePlate", 0x60, "EnumProperty"},
            {"ShowArrow", 0x61, "EnumProperty"},
            {"ShowIconMinimap", 0x62, "EnumProperty"},
            {"bSupportModifyIndicators", 0x63, "BoolProperty"},
        }};
    };

    struct NPCCharacterModifier_VerseBehavior
    {
        static constexpr std::string_view Name = "NPCCharacterModifier_VerseBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterModifier_Behavior";
        struct Offsets
        {
            static constexpr std::uintptr_t NPCBehaviorScript = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NPCBehaviorScript", 0x28, "ObjectProperty"},
        }};
    };

    struct NPCCharacterType
    {
        static constexpr std::string_view Name = "NPCCharacterType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterDefinitionTag = 0x28;
            static constexpr std::uintptr_t NavMeshTag = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CharacterDefinitionTag", 0x28, "StructProperty"},
            {"NavMeshTag", 0x2C, "NameProperty"},
        }};
    };

    struct NPCCharacterType_Custom
    {
        static constexpr std::string_view Name = "NPCCharacterType_Custom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterType";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCosmetics = 0x30;
            static constexpr std::uintptr_t AISpawnerData = 0x50;
            static constexpr std::uintptr_t PlayerSpawnerData = 0x70;
            static constexpr std::uintptr_t CharacterBlueprintDefaultAnimClass = 0x90;
            static constexpr std::uintptr_t CharacterDefinitionThumbnail = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DefaultCosmetics", 0x30, "SoftObjectProperty"},
            {"AISpawnerData", 0x50, "SoftClassProperty"},
            {"PlayerSpawnerData", 0x70, "SoftClassProperty"},
            {"CharacterBlueprintDefaultAnimClass", 0x90, "ClassProperty"},
            {"CharacterDefinitionThumbnail", 0x98, "SoftObjectProperty"},
        }};
    };

    struct NPCCharacterType_FromPreset
    {
        static constexpr std::string_view Name = "NPCCharacterType_FromPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterType";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedAI = 0x30;
            static constexpr std::uintptr_t SelectedPreset = 0x40;
            static constexpr std::uintptr_t Presets = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SelectedAI", 0x30, "StrProperty"},
            {"SelectedPreset", 0x40, "StructProperty"},
            {"Presets", 0xA0, "ArrayProperty"},
        }};
    };

    struct NPCCharacterType_Participant
    {
        static constexpr std::string_view Name = "NPCCharacterType_Participant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterType";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnerData = 0x30;
            static constexpr std::uintptr_t CharacterDefinitionThumbnail = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnerData", 0x30, "SoftClassProperty"},
            {"CharacterDefinitionThumbnail", 0x50, "SoftObjectProperty"},
        }};
    };

    struct NPCCharacterType_Randomize
    {
        static constexpr std::string_view Name = "NPCCharacterType_Randomize";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NPCCharacterType";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterDefinitions = 0x30;
            static constexpr std::uintptr_t CharacterDefinitionThumbnail = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CharacterDefinitions", 0x30, "ArrayProperty"},
            {"CharacterDefinitionThumbnail", 0x40, "SoftObjectProperty"},
        }};
    };

    struct NPCIndicatorComponent
    {
        static constexpr std::string_view Name = "NPCIndicatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AllyIndicators = 0xC0;
            static constexpr std::uintptr_t HostileIndicators = 0xC1;
            static constexpr std::uintptr_t NeutralIndicators = 0xC2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AllyIndicators", 0xC0, "EnumProperty"},
            {"HostileIndicators", 0xC1, "EnumProperty"},
            {"NeutralIndicators", 0xC2, "EnumProperty"},
        }};
    };

    struct ParticipantDefinitionComponent
    {
        static constexpr std::string_view Name = "ParticipantDefinitionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ParticipantDefinition = 0x158;
            static constexpr std::uintptr_t RequiredTag = 0x178;
            static constexpr std::uintptr_t NavMeshTag = 0x17C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ParticipantDefinition", 0x158, "SoftObjectProperty"},
            {"RequiredTag", 0x178, "StructProperty"},
            {"NavMeshTag", 0x17C, "NameProperty"},
        }};
    };

    struct PersonaUsageBlockingSubsystem
    {
        static constexpr std::string_view Name = "PersonaUsageBlockingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayAnimationGlobals
    {
        static constexpr std::string_view Name = "PlayAnimationGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseAIPerceptionStimuliSourceComponent
    {
        static constexpr std::string_view Name = "VerseAIPerceptionStimuliSourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIPerceptionStimuliSourceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsConsideredAsThreateningObjectForBots = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsConsideredAsThreateningObjectForBots", 0xD8, "BoolProperty"},
        }};
    };

}
