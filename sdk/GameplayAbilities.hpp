#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayAbilities
{
    struct AbilitiesGameplayEffectComponent
    {
        static constexpr std::string_view Name = "AbilitiesGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GrantAbilityConfigs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GrantAbilityConfigs", 0x28, "ArrayProperty"},
        }};
    };

    struct AbilityAsync
    {
        static constexpr std::string_view Name = "AbilityAsync";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "EndAction",
        }};
    };

    struct AbilityAsync_WaitAttributeChanged
    {
        static constexpr std::string_view Name = "AbilityAsync_WaitAttributeChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityAsync";
        struct Offsets
        {
            static constexpr std::uintptr_t Changed = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Changed", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitForAttributeChanged",
        }};
    };

    struct AbilityAsync_WaitGameplayEffectApplied
    {
        static constexpr std::string_view Name = "AbilityAsync_WaitGameplayEffectApplied";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityAsync";
        struct Offsets
        {
            static constexpr std::uintptr_t OnApplied = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnApplied", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayEffectAppliedToActor",
        }};
    };

    struct AbilityAsync_WaitGameplayEvent
    {
        static constexpr std::string_view Name = "AbilityAsync_WaitGameplayEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityAsync";
        struct Offsets
        {
            static constexpr std::uintptr_t EventReceived = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventReceived", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayEventToActor",
        }};
    };

    struct AbilityAsync_WaitGameplayTag
    {
        static constexpr std::string_view Name = "AbilityAsync_WaitGameplayTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityAsync";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AbilityAsync_WaitGameplayTagAdded
    {
        static constexpr std::string_view Name = "AbilityAsync_WaitGameplayTagAdded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityAsync_WaitGameplayTag";
        struct Offsets
        {
            static constexpr std::uintptr_t Added = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Added", 0x50, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayTagAddToActor",
        }};
    };

    struct AbilityAsync_WaitGameplayTagCountChanged
    {
        static constexpr std::string_view Name = "AbilityAsync_WaitGameplayTagCountChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityAsync";
        struct Offsets
        {
            static constexpr std::uintptr_t TagCountChanged = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagCountChanged", 0x48, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayTagCountChangedOnActor",
        }};
    };

    struct AbilityAsync_WaitGameplayTagQuery
    {
        static constexpr std::string_view Name = "AbilityAsync_WaitGameplayTagQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityAsync";
        struct Offsets
        {
            static constexpr std::uintptr_t Triggered = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Triggered", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayTagQueryOnActor",
        }};
    };

    struct AbilityAsync_WaitGameplayTagRemoved
    {
        static constexpr std::string_view Name = "AbilityAsync_WaitGameplayTagRemoved";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityAsync_WaitGameplayTag";
        struct Offsets
        {
            static constexpr std::uintptr_t Removed = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Removed", 0x50, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayTagRemoveFromActor",
        }};
    };

    struct AbilityEndedData
    {
        static constexpr std::string_view Name = "AbilityEndedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityThatEnded = 0x0;
            static constexpr std::uintptr_t AbilitySpecHandle = 0x8;
            static constexpr std::uintptr_t bReplicateEndAbility = 0x20;
            static constexpr std::uintptr_t bWasCancelled = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AbilityThatEnded", 0x0, "ObjectProperty"},
            {"AbilitySpecHandle", 0x8, "StructProperty"},
            {"bReplicateEndAbility", 0x20, "BoolProperty"},
            {"bWasCancelled", 0x21, "BoolProperty"},
        }};
    };

    struct AbilitySystemBlueprintLibrary
    {
        static constexpr std::string_view Name = "AbilitySystemBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 111> FunctionNames{{
            "AbilityTargetDataFromActor",
            "AbilityTargetDataFromActorArray",
            "AbilityTargetDataFromHitResult",
            "AbilityTargetDataFromLocations",
            "AddAssetTag",
            "AddAssetTags",
            "AddGameplayTags",
            "AddGrantedTag",
            "AddGrantedTags",
            "AddLinkedGameplayEffect",
            "AddLinkedGameplayEffectSpec",
            "AddLooseGameplayTags",
            "AppendTargetDataHandle",
            "AssignSetByCallerMagnitude",
            "AssignTagSetByCallerMagnitude",
            "BindEventWrapperToAnyOfGameplayTagContainerChanged",
            "BindEventWrapperToAnyOfGameplayTagsChanged",
            "BindEventWrapperToGameplayTagChanged",
            "BreakGameplayCueParameters",
            "CloneSpecHandle",
            "Conv_ScalableFloatToDouble",
            "Conv_ScalableFloatToFloat",
            "DoesGameplayCueMeetTagRequirements",
            "DoesTargetDataContainActor",
            "EffectContextAddHitResult",
            "EffectContextGetEffectCauser",
            "EffectContextGetHitResult",
            "EffectContextGetInstigatorActor",
            "EffectContextGetOrigin",
            "EffectContextGetOriginalInstigatorActor",
            "EffectContextGetSourceObject",
            "EffectContextHasHitResult",
            "EffectContextIsInstigatorLocallyControlled",
            "EffectContextIsValid",
            "EffectContextSetOrigin",
            "EqualEqual_ActiveGameplayEffectHandle",
            "EqualEqual_GameplayAbilitySpecHandle",
            "EqualEqual_GameplayAttributeGameplayAttribute",
            "EvaluateAttributeValueWithTags",
            "EvaluateAttributeValueWithTagsAndBase",
            "FilterTargetData",
            "ForwardGameplayCueToTarget",
            "GetAbilitySystemComponent",
            "GetAbilitySystemComponentFromActiveGameplayEffectHandle",
            "GetActiveGameplayEffectDebugString",
            "GetActiveGameplayEffectExpectedEndTime",
            "GetActiveGameplayEffectRemainingDuration",
            "GetActiveGameplayEffectStackCount",
            "GetActiveGameplayEffectStackLimitCount",
            "GetActiveGameplayEffectStartTime",
            "GetActiveGameplayEffectTotalDuration",
            "GetActorByIndex",
            "GetActorCount",
            "GetActorsFromTargetData",
            "GetAllActorsFromTargetData",
            "GetAllLinkedGameplayEffectSpecHandles",
            "GetAssetTags",
            "GetDataCountFromTargetData",
            "GetDebugStringFromGameplayAttribute",
            "GetDurationPolicyFromGameplayEffectSpecHandle",
            "GetEffectContext",
            "GetFloatAttribute",
            "GetFloatAttributeBase",
            "GetFloatAttributeBaseFromAbilitySystemComponent",
            "GetFloatAttributeFromAbilitySystemComponent",
            "GetGameplayAbilityFromSpecHandle",
            "GetGameplayCueDirection",
            "GetGameplayCueEndLocationAndNormal",
            "GetGameplayEffectAssetTags",
            "GetGameplayEffectFromActiveEffectHandle",
            "GetGameplayEffectFromSpecHandle",
            "GetGameplayEffectGrantedTags",
            "GetGameplayEffectUIData",
            "GetGrantedTags",
            "GetHitResult",
            "GetHitResultFromTargetData",
            "GetInstigatorActor",
            "GetInstigatorTransform",
            "GetModifiedAttributeMagnitude",
            "GetOrigin",
            "GetTargetDataEndPoint",
            "GetTargetDataEndPointTransform",
            "GetTargetDataOrigin",
            "HasAnyAbilitiesWithAssetTag",
            "HasHitResult",
            "IsActiveGameplayEffectHandleActive",
            "IsActiveGameplayEffectHandleValid",
            "IsDurationGameplayEffectSpecHandle",
            "IsGameplayAbilityActive",
            "IsInstigatorLocallyControlled",
            "IsInstigatorLocallyControlledPlayer",
            "IsValid",
            "MakeFilterHandle",
            "MakeGameplayCueParameters",
            "MakeSpecHandle",
            "MakeSpecHandleByClass",
            "NotEqual_ActiveGameplayEffectHandle",
            "NotEqual_GameplayAbilitySpecHandle",
            "NotEqual_GameplayAttributeGameplayAttribute",
            "RemoveGameplayTags",
            "RemoveLooseGameplayTags",
            "SendGameplayEventToActor",
            "SetDuration",
            "SetStackCount",
            "SetStackCountToMax",
            "TargetDataHasActor",
            "TargetDataHasEndPoint",
            "TargetDataHasHitResult",
            "TargetDataHasOrigin",
            "UnbindAllGameplayTagChangedEventWrappersForHandle",
            "UnbindGameplayTagChangedEventWrapperForHandle",
        }};
    };

    struct AbilitySystemCheatManagerExtension
    {
        static constexpr std::string_view Name = "AbilitySystemCheatManagerExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "AbilityActivate",
            "AbilityCancel",
            "AbilityGrant",
            "AbilityListGranted",
            "EffectApply",
            "EffectListActive",
            "EffectRemove",
        }};
    };

    struct AbilitySystemComponent
    {
        static constexpr std::string_view Name = "AbilitySystemComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTasksComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultStartingData = 0x158;
            static constexpr std::uintptr_t AffectedAnimInstanceTag = 0x168;
            static constexpr std::uintptr_t OutgoingDuration = 0x2D0;
            static constexpr std::uintptr_t IncomingDuration = 0x2D4;
            static constexpr std::uintptr_t ClientDebugStrings = 0x2F8;
            static constexpr std::uintptr_t ServerDebugStrings = 0x308;
            static constexpr std::uintptr_t UserAbilityActivationInhibited = 0x380;
            static constexpr std::uintptr_t ReplicationProxyEnabled = 0x381;
            static constexpr std::uintptr_t bSuppressGrantAbility = 0x382;
            static constexpr std::uintptr_t bSuppressGameplayCues = 0x383;
            static constexpr std::uintptr_t SpawnedTargetActors = 0x388;
            static constexpr std::uintptr_t OwnerActor = 0x3C0;
            static constexpr std::uintptr_t AvatarActor = 0x3C8;
            static constexpr std::uintptr_t ActivatableAbilities = 0x3E0;
            static constexpr std::uintptr_t AllReplicatedInstancedAbilities = 0x470;
            static constexpr std::uintptr_t RepAnimMontageInfo = 0x6B8;
            static constexpr std::uintptr_t bCachedIsNetSimulated = 0x6F0;
            static constexpr std::uintptr_t bPendingMontageRep = 0x6F1;
            static constexpr std::uintptr_t LocalAnimMontageInfo = 0x6F8;
            static constexpr std::uintptr_t ActiveGameplayEffects = 0x740;
            static constexpr std::uintptr_t ActiveGameplayCues = 0x840;
            static constexpr std::uintptr_t MinimalReplicationGameplayCues = 0x8A8;
            static constexpr std::uintptr_t GameplayTagCountContainer = 0x980;
            static constexpr std::uintptr_t BlockedAbilityBindings = 0xA08;
            static constexpr std::uintptr_t MinimalReplicationTags = 0xA18;
            static constexpr std::uintptr_t SpawnedAttributes = 0xA40;
            static constexpr std::uintptr_t ReplicatedLooseTags = 0xA68;
            static constexpr std::uintptr_t ReplicatedPredictionKeyMap = 0xA98;
            static constexpr std::uintptr_t NextActiveGameplayEffectHandleCounter = 0xB00;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"DefaultStartingData", 0x158, "ArrayProperty"},
            {"AffectedAnimInstanceTag", 0x168, "NameProperty"},
            {"OutgoingDuration", 0x2D0, "FloatProperty"},
            {"IncomingDuration", 0x2D4, "FloatProperty"},
            {"ClientDebugStrings", 0x2F8, "ArrayProperty"},
            {"ServerDebugStrings", 0x308, "ArrayProperty"},
            {"UserAbilityActivationInhibited", 0x380, "BoolProperty"},
            {"ReplicationProxyEnabled", 0x381, "BoolProperty"},
            {"bSuppressGrantAbility", 0x382, "BoolProperty"},
            {"bSuppressGameplayCues", 0x383, "BoolProperty"},
            {"SpawnedTargetActors", 0x388, "ArrayProperty"},
            {"OwnerActor", 0x3C0, "ObjectProperty"},
            {"AvatarActor", 0x3C8, "ObjectProperty"},
            {"ActivatableAbilities", 0x3E0, "StructProperty"},
            {"AllReplicatedInstancedAbilities", 0x470, "ArrayProperty"},
            {"RepAnimMontageInfo", 0x6B8, "StructProperty"},
            {"bCachedIsNetSimulated", 0x6F0, "BoolProperty"},
            {"bPendingMontageRep", 0x6F1, "BoolProperty"},
            {"LocalAnimMontageInfo", 0x6F8, "StructProperty"},
            {"ActiveGameplayEffects", 0x740, "StructProperty"},
            {"ActiveGameplayCues", 0x840, "StructProperty"},
            {"MinimalReplicationGameplayCues", 0x8A8, "StructProperty"},
            {"GameplayTagCountContainer", 0x980, "StructProperty"},
            {"BlockedAbilityBindings", 0xA08, "ArrayProperty"},
            {"MinimalReplicationTags", 0xA18, "StructProperty"},
            {"SpawnedAttributes", 0xA40, "ArrayProperty"},
            {"ReplicatedLooseTags", 0xA68, "StructProperty"},
            {"ReplicatedPredictionKeyMap", 0xA98, "StructProperty"},
            {"NextActiveGameplayEffectHandleCounter", 0xB00, "UInt32Property"},
        }};

        inline static constexpr std::array<std::string_view, 91> FunctionNames{{
            "AreAbilityTagsBlocked",
            "BP_ApplyGameplayEffectSpecToSelf",
            "BP_ApplyGameplayEffectSpecToTarget",
            "BP_ApplyGameplayEffectToSelf",
            "BP_ApplyGameplayEffectToTarget",
            "ClearAbility",
            "ClearAllAbilities",
            "ClearAllAbilitiesWithInputID",
            "ClientActivateAbilityFailed",
            "ClientActivateAbilitySucceed",
            "ClientActivateAbilitySucceedWithEventData",
            "ClientCancelAbility",
            "ClientEndAbility",
            "ClientPrintDebug_Response",
            "ClientSetReplicatedEvent",
            "ClientTryActivateAbility",
            "FindAllAbilitiesMatchingQuery",
            "FindAllAbilitiesWithInputID",
            "FindAllAbilitiesWithTags",
            "GetActiveEffects",
            "GetActiveEffectsWithAllTags",
            "GetAllAbilities",
            "GetAllAttributes",
            "GetAttributeSet",
            "GetGameplayAttributeValue",
            "GetGameplayEffectCount",
            "GetGameplayEffectCount_IfLoaded",
            "GetGameplayEffectMagnitude",
            "GetGameplayTagCount",
            "GetUserAbilityActivationInhibited",
            "InputCancel",
            "InputConfirm",
            "IsGameplayCueActive",
            "K2_GiveAbility",
            "K2_GiveAbilityAndActivateOnce",
            "K2_InitStats",
            "MakeEffectContext",
            "MakeOutgoingSpec",
            "NetMulticast_InvokeGameplayCueAdded",
            "NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec",
            "NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams",
            "NetMulticast_InvokeGameplayCueAdded_WithParams",
            "NetMulticast_InvokeGameplayCueExecuted",
            "NetMulticast_InvokeGameplayCueExecuted_FromSpec",
            "NetMulticast_InvokeGameplayCueExecuted_WithParams",
            "NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams",
            "NetMulticast_InvokeGameplayCuesExecuted",
            "NetMulticast_InvokeGameplayCuesExecuted_WithParams",
            "OnAvatarActorDestroyed",
            "OnOwnerActorDestroyed",
            "OnRep_ActivateAbilities",
            "OnRep_ClientDebugString",
            "OnRep_OwningActor",
            "OnRep_ReplicatedAnimMontage",
            "OnRep_ServerDebugString",
            "OnRep_SpawnedAttributes",
            "OnSpawnedAttributesEndPlayed",
            "PressInputID",
            "ReleaseInputID",
            "RemoveActiveEffectsWithAppliedTags",
            "RemoveActiveEffectsWithGrantedTags",
            "RemoveActiveEffectsWithSourceTags",
            "RemoveActiveEffectsWithTags",
            "RemoveActiveGameplayEffect",
            "RemoveActiveGameplayEffectBySourceEffect",
            "ServerAbilityRPCBatch",
            "ServerCancelAbility",
            "ServerCurrentMontageJumpToSectionName",
            "ServerCurrentMontageSetNextSectionName",
            "ServerCurrentMontageSetPlayRate",
            "ServerEndAbility",
            "ServerPrintDebug_Request",
            "ServerPrintDebug_RequestWithStrings",
            "ServerSetInputPressed",
            "ServerSetInputReleased",
            "ServerSetReplicatedEvent",
            "ServerSetReplicatedEventWithPayload",
            "ServerSetReplicatedTargetData",
            "ServerSetReplicatedTargetDataCancelled",
            "ServerTryActivateAbility",
            "ServerTryActivateAbilityWithEventData",
            "SetActiveGameplayEffectLevel",
            "SetActiveGameplayEffectLevelUsingQuery",
            "SetUserAbilityActivationInhibited",
            "TargetCancel",
            "TargetConfirm",
            "TryActivateAbilitiesByTag",
            "TryActivateAbility",
            "TryActivateAbilityByClass",
            "UpdateActiveGameplayEffectSetByCallerMagnitude",
            "UpdateActiveGameplayEffectSetByCallerMagnitudes",
        }};
    };

    struct AbilitySystemDebugHUD
    {
        static constexpr std::string_view Name = "AbilitySystemDebugHUD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HUD";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerOwner = 0x278;
            static constexpr std::uintptr_t bLostFocusPaused = 0x280;
            static constexpr std::uintptr_t bShowDebugInfo = 0x280;
            static constexpr std::uintptr_t bShowHUD = 0x280;
            static constexpr std::uintptr_t CurrentTargetIndex = 0x284;
            static constexpr std::uintptr_t bEnableDebugTextShadow = 0x288;
            static constexpr std::uintptr_t bShowHitBoxDebugInfo = 0x288;
            static constexpr std::uintptr_t bShowOverlays = 0x288;
            static constexpr std::uintptr_t PostRenderedActors = 0x290;
            static constexpr std::uintptr_t DebugDisplay = 0x2A8;
            static constexpr std::uintptr_t ToggledDebugCategories = 0x2B8;
            static constexpr std::uintptr_t canvas = 0x2C8;
            static constexpr std::uintptr_t DebugCanvas = 0x2D0;
            static constexpr std::uintptr_t DebugTextList = 0x2D8;
            static constexpr std::uintptr_t ShowDebugTargetDesiredClass = 0x2E8;
            static constexpr std::uintptr_t ShowDebugTargetActor = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"PlayerOwner", 0x278, "ObjectProperty"},
            {"bLostFocusPaused", 0x280, "BoolProperty"},
            {"bShowDebugInfo", 0x280, "BoolProperty"},
            {"bShowHUD", 0x280, "BoolProperty"},
            {"CurrentTargetIndex", 0x284, "IntProperty"},
            {"bEnableDebugTextShadow", 0x288, "BoolProperty"},
            {"bShowHitBoxDebugInfo", 0x288, "BoolProperty"},
            {"bShowOverlays", 0x288, "BoolProperty"},
            {"PostRenderedActors", 0x290, "ArrayProperty"},
            {"DebugDisplay", 0x2A8, "ArrayProperty"},
            {"ToggledDebugCategories", 0x2B8, "ArrayProperty"},
            {"canvas", 0x2C8, "ObjectProperty"},
            {"DebugCanvas", 0x2D0, "ObjectProperty"},
            {"DebugTextList", 0x2D8, "ArrayProperty"},
            {"ShowDebugTargetDesiredClass", 0x2E8, "ClassProperty"},
            {"ShowDebugTargetActor", 0x2F0, "ObjectProperty"},
        }};
    };

    struct AbilitySystemDebugHUDExtension
    {
        static constexpr std::string_view Name = "AbilitySystemDebugHUDExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AbilitySystemDebugHUDExtension_Attributes
    {
        static constexpr std::string_view Name = "AbilitySystemDebugHUDExtension_Attributes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilitySystemDebugHUDExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AbilitySystemDebugHUDExtension_BlockedAbilityTags
    {
        static constexpr std::string_view Name = "AbilitySystemDebugHUDExtension_BlockedAbilityTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilitySystemDebugHUDExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AbilitySystemDebugHUDExtension_Tags
    {
        static constexpr std::string_view Name = "AbilitySystemDebugHUDExtension_Tags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilitySystemDebugHUDExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AbilitySystemGlobals
    {
        static constexpr std::string_view Name = "AbilitySystemGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySystemGlobalsClassName = 0x28;
            static constexpr std::uintptr_t ActivateFailIsDeadTag = 0x6C;
            static constexpr std::uintptr_t ActivateFailIsDeadName = 0x70;
            static constexpr std::uintptr_t ActivateFailCooldownTag = 0x74;
            static constexpr std::uintptr_t ActivateFailCooldownName = 0x78;
            static constexpr std::uintptr_t ActivateFailCostTag = 0x7C;
            static constexpr std::uintptr_t ActivateFailCostName = 0x80;
            static constexpr std::uintptr_t ActivateFailTagsBlockedTag = 0x84;
            static constexpr std::uintptr_t ActivateFailTagsBlockedName = 0x88;
            static constexpr std::uintptr_t ActivateFailTagsMissingTag = 0x8C;
            static constexpr std::uintptr_t ActivateFailTagsMissingName = 0x90;
            static constexpr std::uintptr_t ActivateFailNetworkingTag = 0x94;
            static constexpr std::uintptr_t ActivateFailNetworkingName = 0x98;
            static constexpr std::uintptr_t MinimalReplicationTagCountBits = 0x9C;
            static constexpr std::uintptr_t TargetDataStructCache = 0xA0;
            static constexpr std::uintptr_t EffectContextStructCache = 0xC0;
            static constexpr std::uintptr_t bAllowGameplayModEvaluationChannels = 0xE0;
            static constexpr std::uintptr_t DefaultGameplayModEvaluationChannel = 0xE1;
            static constexpr std::uintptr_t GameplayModEvaluationChannelAliases = 0xE4;
            static constexpr std::uintptr_t GlobalCurveTableName = 0x110;
            static constexpr std::uintptr_t GlobalCurveTable = 0x128;
            static constexpr std::uintptr_t GlobalAttributeMetaDataTableName = 0x130;
            static constexpr std::uintptr_t GlobalAttributeMetaDataTable = 0x148;
            static constexpr std::uintptr_t GlobalAttributeSetDefaultsTableName = 0x150;
            static constexpr std::uintptr_t GlobalAttributeSetDefaultsTableNames = 0x168;
            static constexpr std::uintptr_t GlobalAttributeDefaultsTables = 0x178;
            static constexpr std::uintptr_t GlobalGameplayCueManagerClass = 0x188;
            static constexpr std::uintptr_t GlobalGameplayCueManagerName = 0x1A0;
            static constexpr std::uintptr_t GameplayCueNotifyPaths = 0x1B8;
            static constexpr std::uintptr_t GameplayTagResponseTableName = 0x1C8;
            static constexpr std::uintptr_t GameplayTagResponseTable = 0x1E0;
            static constexpr std::uintptr_t PredictTargetGameplayEffects = 0x1E9;
            static constexpr std::uintptr_t ReplicateActivationOwnedTags = 0x1EA;
            static constexpr std::uintptr_t GlobalGameplayCueManager = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"AbilitySystemGlobalsClassName", 0x28, "StructProperty"},
            {"ActivateFailIsDeadTag", 0x6C, "StructProperty"},
            {"ActivateFailIsDeadName", 0x70, "NameProperty"},
            {"ActivateFailCooldownTag", 0x74, "StructProperty"},
            {"ActivateFailCooldownName", 0x78, "NameProperty"},
            {"ActivateFailCostTag", 0x7C, "StructProperty"},
            {"ActivateFailCostName", 0x80, "NameProperty"},
            {"ActivateFailTagsBlockedTag", 0x84, "StructProperty"},
            {"ActivateFailTagsBlockedName", 0x88, "NameProperty"},
            {"ActivateFailTagsMissingTag", 0x8C, "StructProperty"},
            {"ActivateFailTagsMissingName", 0x90, "NameProperty"},
            {"ActivateFailNetworkingTag", 0x94, "StructProperty"},
            {"ActivateFailNetworkingName", 0x98, "NameProperty"},
            {"MinimalReplicationTagCountBits", 0x9C, "IntProperty"},
            {"TargetDataStructCache", 0xA0, "StructProperty"},
            {"EffectContextStructCache", 0xC0, "StructProperty"},
            {"bAllowGameplayModEvaluationChannels", 0xE0, "BoolProperty"},
            {"DefaultGameplayModEvaluationChannel", 0xE1, "EnumProperty"},
            {"GameplayModEvaluationChannelAliases", 0xE4, "NameProperty"},
            {"GlobalCurveTableName", 0x110, "StructProperty"},
            {"GlobalCurveTable", 0x128, "ObjectProperty"},
            {"GlobalAttributeMetaDataTableName", 0x130, "StructProperty"},
            {"GlobalAttributeMetaDataTable", 0x148, "ObjectProperty"},
            {"GlobalAttributeSetDefaultsTableName", 0x150, "StructProperty"},
            {"GlobalAttributeSetDefaultsTableNames", 0x168, "ArrayProperty"},
            {"GlobalAttributeDefaultsTables", 0x178, "ArrayProperty"},
            {"GlobalGameplayCueManagerClass", 0x188, "StructProperty"},
            {"GlobalGameplayCueManagerName", 0x1A0, "StructProperty"},
            {"GameplayCueNotifyPaths", 0x1B8, "ArrayProperty"},
            {"GameplayTagResponseTableName", 0x1C8, "StructProperty"},
            {"GameplayTagResponseTable", 0x1E0, "ObjectProperty"},
            {"PredictTargetGameplayEffects", 0x1E9, "BoolProperty"},
            {"ReplicateActivationOwnedTags", 0x1EA, "BoolProperty"},
            {"GlobalGameplayCueManager", 0x1F0, "ObjectProperty"},
        }};
    };

    struct AbilitySystemInterface
    {
        static constexpr std::string_view Name = "AbilitySystemInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AbilitySystemReplicationProxyInterface
    {
        static constexpr std::string_view Name = "AbilitySystemReplicationProxyInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AbilitySystemTestAttributeSet
    {
        static constexpr std::string_view Name = "AbilitySystemTestAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxHealth = 0x30;
            static constexpr std::uintptr_t Health = 0x34;
            static constexpr std::uintptr_t Mana = 0x38;
            static constexpr std::uintptr_t MaxMana = 0x48;
            static constexpr std::uintptr_t Damage = 0x4C;
            static constexpr std::uintptr_t SpellDamage = 0x50;
            static constexpr std::uintptr_t PhysicalDamage = 0x54;
            static constexpr std::uintptr_t CritChance = 0x58;
            static constexpr std::uintptr_t CritMultiplier = 0x5C;
            static constexpr std::uintptr_t ArmorDamageReduction = 0x60;
            static constexpr std::uintptr_t DodgeChance = 0x64;
            static constexpr std::uintptr_t LifeSteal = 0x68;
            static constexpr std::uintptr_t Strength = 0x6C;
            static constexpr std::uintptr_t StackingAttribute1 = 0x70;
            static constexpr std::uintptr_t StackingAttribute2 = 0x74;
            static constexpr std::uintptr_t NoStackAttribute = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"MaxHealth", 0x30, "FloatProperty"},
            {"Health", 0x34, "FloatProperty"},
            {"Mana", 0x38, "StructProperty"},
            {"MaxMana", 0x48, "FloatProperty"},
            {"Damage", 0x4C, "FloatProperty"},
            {"SpellDamage", 0x50, "FloatProperty"},
            {"PhysicalDamage", 0x54, "FloatProperty"},
            {"CritChance", 0x58, "FloatProperty"},
            {"CritMultiplier", 0x5C, "FloatProperty"},
            {"ArmorDamageReduction", 0x60, "FloatProperty"},
            {"DodgeChance", 0x64, "FloatProperty"},
            {"LifeSteal", 0x68, "FloatProperty"},
            {"Strength", 0x6C, "FloatProperty"},
            {"StackingAttribute1", 0x70, "FloatProperty"},
            {"StackingAttribute2", 0x74, "FloatProperty"},
            {"NoStackAttribute", 0x78, "FloatProperty"},
        }};
    };

    struct AbilitySystemTestPawn
    {
        static constexpr std::string_view Name = "AbilitySystemTestPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DefaultPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySystemComponent = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AbilitySystemComponent", 0x338, "ObjectProperty"},
        }};
    };

    struct AbilityTask
    {
        static constexpr std::string_view Name = "AbilityTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTask";
        struct Offsets
        {
            static constexpr std::uintptr_t ability = 0x60;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ability", 0x60, "ObjectProperty"},
            {"AbilitySystemComponent", 0x68, "WeakObjectProperty"},
        }};
    };

    struct AbilityTaskDebugMessage
    {
        static constexpr std::string_view Name = "AbilityTaskDebugMessage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FromTask = 0x0;
            static constexpr std::uintptr_t Message = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FromTask", 0x0, "ObjectProperty"},
            {"Message", 0x8, "StrProperty"},
        }};
    };

    struct AbilityTask_ApplyRootMotionConstantForce
    {
        static constexpr std::string_view Name = "AbilityTask_ApplyRootMotionConstantForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_ApplyRootMotion_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinish = 0xB0;
            static constexpr std::uintptr_t WorldDirection = 0xC0;
            static constexpr std::uintptr_t Strength = 0xD8;
            static constexpr std::uintptr_t duration = 0xDC;
            static constexpr std::uintptr_t bIsAdditive = 0xE0;
            static constexpr std::uintptr_t StrengthOverTime = 0xE8;
            static constexpr std::uintptr_t bEnableGravity = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnFinish", 0xB0, "MulticastInlineDelegateProperty"},
            {"WorldDirection", 0xC0, "StructProperty"},
            {"Strength", 0xD8, "FloatProperty"},
            {"duration", 0xDC, "FloatProperty"},
            {"bIsAdditive", 0xE0, "BoolProperty"},
            {"StrengthOverTime", 0xE8, "ObjectProperty"},
            {"bEnableGravity", 0xF0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ApplyRootMotionConstantForce",
        }};
    };

    struct AbilityTask_ApplyRootMotionJumpForce
    {
        static constexpr std::string_view Name = "AbilityTask_ApplyRootMotionJumpForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_ApplyRootMotion_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinish = 0xB0;
            static constexpr std::uintptr_t OnLanded = 0xC0;
            static constexpr std::uintptr_t Rotation = 0xD0;
            static constexpr std::uintptr_t Distance = 0xE8;
            static constexpr std::uintptr_t Height = 0xEC;
            static constexpr std::uintptr_t duration = 0xF0;
            static constexpr std::uintptr_t MinimumLandedTriggerTime = 0xF4;
            static constexpr std::uintptr_t bFinishOnLanded = 0xF8;
            static constexpr std::uintptr_t PathOffsetCurve = 0x100;
            static constexpr std::uintptr_t TimeMappingCurve = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnFinish", 0xB0, "MulticastInlineDelegateProperty"},
            {"OnLanded", 0xC0, "MulticastInlineDelegateProperty"},
            {"Rotation", 0xD0, "StructProperty"},
            {"Distance", 0xE8, "FloatProperty"},
            {"Height", 0xEC, "FloatProperty"},
            {"duration", 0xF0, "FloatProperty"},
            {"MinimumLandedTriggerTime", 0xF4, "FloatProperty"},
            {"bFinishOnLanded", 0xF8, "BoolProperty"},
            {"PathOffsetCurve", 0x100, "ObjectProperty"},
            {"TimeMappingCurve", 0x108, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ApplyRootMotionJumpForce",
            "Finish",
            "OnLandedCallback",
        }};
    };

    struct AbilityTask_ApplyRootMotionMoveToActorForce
    {
        static constexpr std::string_view Name = "AbilityTask_ApplyRootMotionMoveToActorForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_ApplyRootMotion_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinished = 0xB0;
            static constexpr std::uintptr_t StartLocation = 0xC8;
            static constexpr std::uintptr_t TargetLocation = 0xE0;
            static constexpr std::uintptr_t TargetActor = 0xF8;
            static constexpr std::uintptr_t TargetComponent = 0x100;
            static constexpr std::uintptr_t TargetComponentRelativeLocation = 0x108;
            static constexpr std::uintptr_t TargetLocationOffset = 0x120;
            static constexpr std::uintptr_t OffsetAlignment = 0x138;
            static constexpr std::uintptr_t duration = 0x13C;
            static constexpr std::uintptr_t bDisableDestinationReachedInterrupt = 0x140;
            static constexpr std::uintptr_t ReachedDestinationDistance = 0x144;
            static constexpr std::uintptr_t bSetNewMovementMode = 0x148;
            static constexpr std::uintptr_t NewMovementMode = 0x149;
            static constexpr std::uintptr_t bRestrictSpeedToExpected = 0x14A;
            static constexpr std::uintptr_t PathOffsetCurve = 0x150;
            static constexpr std::uintptr_t TimeMappingCurve = 0x158;
            static constexpr std::uintptr_t TargetLerpSpeedHorizontalCurve = 0x160;
            static constexpr std::uintptr_t TargetLerpSpeedVerticalCurve = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"OnFinished", 0xB0, "MulticastInlineDelegateProperty"},
            {"StartLocation", 0xC8, "StructProperty"},
            {"TargetLocation", 0xE0, "StructProperty"},
            {"TargetActor", 0xF8, "ObjectProperty"},
            {"TargetComponent", 0x100, "ObjectProperty"},
            {"TargetComponentRelativeLocation", 0x108, "StructProperty"},
            {"TargetLocationOffset", 0x120, "StructProperty"},
            {"OffsetAlignment", 0x138, "EnumProperty"},
            {"duration", 0x13C, "FloatProperty"},
            {"bDisableDestinationReachedInterrupt", 0x140, "BoolProperty"},
            {"ReachedDestinationDistance", 0x144, "FloatProperty"},
            {"bSetNewMovementMode", 0x148, "BoolProperty"},
            {"NewMovementMode", 0x149, "ByteProperty"},
            {"bRestrictSpeedToExpected", 0x14A, "BoolProperty"},
            {"PathOffsetCurve", 0x150, "ObjectProperty"},
            {"TimeMappingCurve", 0x158, "ObjectProperty"},
            {"TargetLerpSpeedHorizontalCurve", 0x160, "ObjectProperty"},
            {"TargetLerpSpeedVerticalCurve", 0x168, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "ApplyRootMotionMoveToActorForce",
            "ApplyRootMotionMoveToComponentForce",
            "ApplyRootMotionMoveToTargetDataActorForce",
            "OnRep_TargetLocation",
            "OnTargetActorSwapped",
        }};
    };

    struct AbilityTask_ApplyRootMotionMoveToForce
    {
        static constexpr std::string_view Name = "AbilityTask_ApplyRootMotionMoveToForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_ApplyRootMotion_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTimedOut = 0xB0;
            static constexpr std::uintptr_t OnTimedOutAndDestinationReached = 0xC0;
            static constexpr std::uintptr_t StartLocation = 0xD0;
            static constexpr std::uintptr_t TargetLocation = 0xE8;
            static constexpr std::uintptr_t duration = 0x100;
            static constexpr std::uintptr_t bSetNewMovementMode = 0x104;
            static constexpr std::uintptr_t NewMovementMode = 0x105;
            static constexpr std::uintptr_t bRestrictSpeedToExpected = 0x106;
            static constexpr std::uintptr_t PathOffsetCurve = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnTimedOut", 0xB0, "MulticastInlineDelegateProperty"},
            {"OnTimedOutAndDestinationReached", 0xC0, "MulticastInlineDelegateProperty"},
            {"StartLocation", 0xD0, "StructProperty"},
            {"TargetLocation", 0xE8, "StructProperty"},
            {"duration", 0x100, "FloatProperty"},
            {"bSetNewMovementMode", 0x104, "BoolProperty"},
            {"NewMovementMode", 0x105, "ByteProperty"},
            {"bRestrictSpeedToExpected", 0x106, "BoolProperty"},
            {"PathOffsetCurve", 0x108, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ApplyRootMotionMoveToForce",
        }};
    };

    struct AbilityTask_ApplyRootMotionRadialForce
    {
        static constexpr std::string_view Name = "AbilityTask_ApplyRootMotionRadialForce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_ApplyRootMotion_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinish = 0xB0;
            static constexpr std::uintptr_t Location = 0xC0;
            static constexpr std::uintptr_t LocationActor = 0xD8;
            static constexpr std::uintptr_t Strength = 0xE0;
            static constexpr std::uintptr_t duration = 0xE4;
            static constexpr std::uintptr_t Radius = 0xE8;
            static constexpr std::uintptr_t bIsPush = 0xEC;
            static constexpr std::uintptr_t bIsAdditive = 0xED;
            static constexpr std::uintptr_t bNoZForce = 0xEE;
            static constexpr std::uintptr_t StrengthDistanceFalloff = 0xF0;
            static constexpr std::uintptr_t StrengthOverTime = 0xF8;
            static constexpr std::uintptr_t bUseFixedWorldDirection = 0x100;
            static constexpr std::uintptr_t FixedWorldDirection = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OnFinish", 0xB0, "MulticastInlineDelegateProperty"},
            {"Location", 0xC0, "StructProperty"},
            {"LocationActor", 0xD8, "ObjectProperty"},
            {"Strength", 0xE0, "FloatProperty"},
            {"duration", 0xE4, "FloatProperty"},
            {"Radius", 0xE8, "FloatProperty"},
            {"bIsPush", 0xEC, "BoolProperty"},
            {"bIsAdditive", 0xED, "BoolProperty"},
            {"bNoZForce", 0xEE, "BoolProperty"},
            {"StrengthDistanceFalloff", 0xF0, "ObjectProperty"},
            {"StrengthOverTime", 0xF8, "ObjectProperty"},
            {"bUseFixedWorldDirection", 0x100, "BoolProperty"},
            {"FixedWorldDirection", 0x108, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ApplyRootMotionRadialForce",
        }};
    };

    struct AbilityTask_ApplyRootMotion_Base
    {
        static constexpr std::string_view Name = "AbilityTask_ApplyRootMotion_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t ForceName = 0x78;
            static constexpr std::uintptr_t FinishVelocityMode = 0x7C;
            static constexpr std::uintptr_t FinishSetVelocity = 0x80;
            static constexpr std::uintptr_t FinishClampVelocity = 0x98;
            static constexpr std::uintptr_t MovementComponent = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ForceName", 0x78, "NameProperty"},
            {"FinishVelocityMode", 0x7C, "EnumProperty"},
            {"FinishSetVelocity", 0x80, "StructProperty"},
            {"FinishClampVelocity", 0x98, "FloatProperty"},
            {"MovementComponent", 0x9C, "WeakObjectProperty"},
        }};
    };

    struct AbilityTask_MoveToLocation
    {
        static constexpr std::string_view Name = "AbilityTask_MoveToLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTargetLocationReached = 0x78;
            static constexpr std::uintptr_t StartLocation = 0x90;
            static constexpr std::uintptr_t TargetLocation = 0xA8;
            static constexpr std::uintptr_t DurationOfMovement = 0xC0;
            static constexpr std::uintptr_t LerpCurve = 0xD0;
            static constexpr std::uintptr_t LerpCurveVector = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnTargetLocationReached", 0x78, "MulticastInlineDelegateProperty"},
            {"StartLocation", 0x90, "StructProperty"},
            {"TargetLocation", 0xA8, "StructProperty"},
            {"DurationOfMovement", 0xC0, "FloatProperty"},
            {"LerpCurve", 0xD0, "ObjectProperty"},
            {"LerpCurveVector", 0xD8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "MoveToLocation",
        }};
    };

    struct AbilityTask_NetworkSyncPoint
    {
        static constexpr std::string_view Name = "AbilityTask_NetworkSyncPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSync = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnSync", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnSignalCallback",
            "WaitNetSync",
        }};
    };

    struct AbilityTask_PlayAnimAndWait
    {
        static constexpr std::string_view Name = "AbilityTask_PlayAnimAndWait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCompleted = 0x78;
            static constexpr std::uintptr_t OnBlendOut = 0x88;
            static constexpr std::uintptr_t OnBlendIn = 0x98;
            static constexpr std::uintptr_t OnInterrupted = 0xA8;
            static constexpr std::uintptr_t OnCancelled = 0xB8;
            static constexpr std::uintptr_t AnimSequenceToPlay = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnCompleted", 0x78, "MulticastInlineDelegateProperty"},
            {"OnBlendOut", 0x88, "MulticastInlineDelegateProperty"},
            {"OnBlendIn", 0x98, "MulticastInlineDelegateProperty"},
            {"OnInterrupted", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnCancelled", 0xB8, "MulticastInlineDelegateProperty"},
            {"AnimSequenceToPlay", 0x100, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "CreatePlayAnimAndWaitProxy",
            "OnMontageBlendedIn",
            "OnMontageBlendingOut",
            "OnMontageEnded",
            "OnMontageInterrupted",
        }};
    };

    struct AbilityTask_PlayMontageAndWait
    {
        static constexpr std::string_view Name = "AbilityTask_PlayMontageAndWait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCompleted = 0x78;
            static constexpr std::uintptr_t OnBlendedIn = 0x88;
            static constexpr std::uintptr_t OnBlendOut = 0x98;
            static constexpr std::uintptr_t OnInterrupted = 0xA8;
            static constexpr std::uintptr_t OnCancelled = 0xB8;
            static constexpr std::uintptr_t MontageToPlay = 0x100;
            static constexpr std::uintptr_t Rate = 0x108;
            static constexpr std::uintptr_t StartSection = 0x10C;
            static constexpr std::uintptr_t AnimRootMotionTranslationScale = 0x110;
            static constexpr std::uintptr_t StartTimeSeconds = 0x114;
            static constexpr std::uintptr_t bStopWhenAbilityEnds = 0x118;
            static constexpr std::uintptr_t bAllowInterruptAfterBlendOut = 0x119;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnCompleted", 0x78, "MulticastInlineDelegateProperty"},
            {"OnBlendedIn", 0x88, "MulticastInlineDelegateProperty"},
            {"OnBlendOut", 0x98, "MulticastInlineDelegateProperty"},
            {"OnInterrupted", 0xA8, "MulticastInlineDelegateProperty"},
            {"OnCancelled", 0xB8, "MulticastInlineDelegateProperty"},
            {"MontageToPlay", 0x100, "ObjectProperty"},
            {"Rate", 0x108, "FloatProperty"},
            {"StartSection", 0x10C, "NameProperty"},
            {"AnimRootMotionTranslationScale", 0x110, "FloatProperty"},
            {"StartTimeSeconds", 0x114, "FloatProperty"},
            {"bStopWhenAbilityEnds", 0x118, "BoolProperty"},
            {"bAllowInterruptAfterBlendOut", 0x119, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "CreatePlayMontageAndWaitProxy",
            "OnGameplayAbilityCancelled",
            "OnMontageBlendedIn",
            "OnMontageBlendingOut",
            "OnMontageEnded",
        }};
    };

    struct AbilityTask_Repeat
    {
        static constexpr std::string_view Name = "AbilityTask_Repeat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPerformAction = 0x78;
            static constexpr std::uintptr_t OnFinished = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnPerformAction", 0x78, "MulticastInlineDelegateProperty"},
            {"OnFinished", 0x88, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "RepeatAction",
        }};
    };

    struct AbilityTask_SpawnActor
    {
        static constexpr std::string_view Name = "AbilityTask_SpawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t Success = 0x78;
            static constexpr std::uintptr_t DidNotSpawn = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Success", 0x78, "MulticastInlineDelegateProperty"},
            {"DidNotSpawn", 0x88, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BeginSpawningActor",
            "FinishSpawningActor",
            "SpawnActor",
        }};
    };

    struct AbilityTask_StartAbilityState
    {
        static constexpr std::string_view Name = "AbilityTask_StartAbilityState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateEnded = 0x78;
            static constexpr std::uintptr_t OnStateInterrupted = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStateEnded", 0x78, "MulticastInlineDelegateProperty"},
            {"OnStateInterrupted", 0x88, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "StartAbilityState",
        }};
    };

    struct AbilityTask_VisualizeTargeting
    {
        static constexpr std::string_view Name = "AbilityTask_VisualizeTargeting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeElapsed = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeElapsed", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BeginSpawningActor",
            "FinishSpawningActor",
            "VisualizeTargeting",
            "VisualizeTargetingUsingActor",
        }};
    };

    struct AbilityTask_WaitAbilityActivate
    {
        static constexpr std::string_view Name = "AbilityTask_WaitAbilityActivate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActivate = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnActivate", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "OnAbilityActivate",
            "WaitForAbilityActivate",
            "WaitForAbilityActivateWithTagRequirements",
            "WaitForAbilityActivate_Query",
        }};
    };

    struct AbilityTask_WaitAbilityCommit
    {
        static constexpr std::string_view Name = "AbilityTask_WaitAbilityCommit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCommit = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnCommit", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnAbilityCommit",
            "WaitForAbilityCommit",
            "WaitForAbilityCommit_Query",
        }};
    };

    struct AbilityTask_WaitAttributeChange
    {
        static constexpr std::string_view Name = "AbilityTask_WaitAttributeChange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnChange = 0x78;
            static constexpr std::uintptr_t ExternalOwner = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnChange", 0x78, "MulticastInlineDelegateProperty"},
            {"ExternalOwner", 0xE0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "WaitForAttributeChange",
            "WaitForAttributeChangeWithComparison",
        }};
    };

    struct AbilityTask_WaitAttributeChangeRatioThreshold
    {
        static constexpr std::string_view Name = "AbilityTask_WaitAttributeChangeRatioThreshold";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnChange = 0x78;
            static constexpr std::uintptr_t ExternalOwner = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnChange", 0x78, "MulticastInlineDelegateProperty"},
            {"ExternalOwner", 0x138, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitForAttributeChangeRatioThreshold",
        }};
    };

    struct AbilityTask_WaitAttributeChangeThreshold
    {
        static constexpr std::string_view Name = "AbilityTask_WaitAttributeChangeThreshold";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnChange = 0x78;
            static constexpr std::uintptr_t ExternalOwner = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnChange", 0x78, "MulticastInlineDelegateProperty"},
            {"ExternalOwner", 0xE0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitForAttributeChangeThreshold",
        }};
    };

    struct AbilityTask_WaitCancel
    {
        static constexpr std::string_view Name = "AbilityTask_WaitCancel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCancel = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnCancel", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnCancelCallback",
            "OnLocalCancelCallback",
            "WaitCancel",
        }};
    };

    struct AbilityTask_WaitConfirm
    {
        static constexpr std::string_view Name = "AbilityTask_WaitConfirm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnConfirm = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnConfirm", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnConfirmCallback",
            "WaitConfirm",
        }};
    };

    struct AbilityTask_WaitConfirmCancel
    {
        static constexpr std::string_view Name = "AbilityTask_WaitConfirmCancel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnConfirm = 0x78;
            static constexpr std::uintptr_t OnCancel = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnConfirm", 0x78, "MulticastInlineDelegateProperty"},
            {"OnCancel", 0x88, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "OnCancelCallback",
            "OnConfirmCallback",
            "OnLocalCancelCallback",
            "OnLocalConfirmCallback",
            "WaitConfirmCancel",
        }};
    };

    struct AbilityTask_WaitDelay
    {
        static constexpr std::string_view Name = "AbilityTask_WaitDelay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFinish = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnFinish", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitDelay",
        }};
    };

    struct AbilityTask_WaitGameplayEffectApplied
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayEffectApplied";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalOwner = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExternalOwner", 0x3D0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnApplyGameplayEffectCallback",
        }};
    };

    struct AbilityTask_WaitGameplayEffectApplied_Self
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayEffectApplied_Self";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_WaitGameplayEffectApplied";
        struct Offsets
        {
            static constexpr std::uintptr_t OnApplied = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnApplied", 0x3E8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "WaitGameplayEffectAppliedToSelf",
            "WaitGameplayEffectAppliedToSelf_Query",
        }};
    };

    struct AbilityTask_WaitGameplayEffectApplied_Target
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayEffectApplied_Target";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_WaitGameplayEffectApplied";
        struct Offsets
        {
            static constexpr std::uintptr_t OnApplied = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnApplied", 0x3E8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "WaitGameplayEffectAppliedToTarget",
            "WaitGameplayEffectAppliedToTarget_Query",
        }};
    };

    struct AbilityTask_WaitGameplayEffectBlockedImmunity
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayEffectBlockedImmunity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t bLocked = 0x78;
            static constexpr std::uintptr_t ExternalOwner = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bLocked", 0x78, "MulticastInlineDelegateProperty"},
            {"ExternalOwner", 0x1A0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayEffectBlockedByImmunity",
        }};
    };

    struct AbilityTask_WaitGameplayEffectRemoved
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayEffectRemoved";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRemoved = 0x78;
            static constexpr std::uintptr_t InvalidHandle = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnRemoved", 0x78, "MulticastInlineDelegateProperty"},
            {"InvalidHandle", 0x88, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnGameplayEffectRemoved",
            "WaitForGameplayEffectRemoved",
        }};
    };

    struct AbilityTask_WaitGameplayEffectStackChange
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayEffectStackChange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnChange = 0x78;
            static constexpr std::uintptr_t InvalidHandle = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnChange", 0x78, "MulticastInlineDelegateProperty"},
            {"InvalidHandle", 0x88, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnGameplayEffectStackChange",
            "WaitForGameplayEffectStackChange",
        }};
    };

    struct AbilityTask_WaitGameplayEvent
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t EventReceived = 0x78;
            static constexpr std::uintptr_t OptionalExternalTarget = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EventReceived", 0x78, "MulticastInlineDelegateProperty"},
            {"OptionalExternalTarget", 0x90, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayEvent",
        }};
    };

    struct AbilityTask_WaitGameplayTag
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionalExternalTarget = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OptionalExternalTarget", 0x80, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GameplayTagCallback",
        }};
    };

    struct AbilityTask_WaitGameplayTagAdded
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayTagAdded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_WaitGameplayTag";
        struct Offsets
        {
            static constexpr std::uintptr_t Added = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Added", 0x98, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayTagAdd",
        }};
    };

    struct AbilityTask_WaitGameplayTagCountChanged
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayTagCountChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t TagCountChanged = 0x78;
            static constexpr std::uintptr_t OptionalExternalTarget = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TagCountChanged", 0x78, "MulticastInlineDelegateProperty"},
            {"OptionalExternalTarget", 0x90, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayTagCountChange",
        }};
    };

    struct AbilityTask_WaitGameplayTagQuery
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayTagQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t Triggered = 0xF8;
            static constexpr std::uintptr_t OptionalExternalTarget = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Triggered", 0xF8, "MulticastInlineDelegateProperty"},
            {"OptionalExternalTarget", 0x108, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "UpdateTargetTags",
            "WaitGameplayTagQuery",
        }};
    };

    struct AbilityTask_WaitGameplayTagRemoved
    {
        static constexpr std::string_view Name = "AbilityTask_WaitGameplayTagRemoved";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask_WaitGameplayTag";
        struct Offsets
        {
            static constexpr std::uintptr_t Removed = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Removed", 0x98, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WaitGameplayTagRemove",
        }};
    };

    struct AbilityTask_WaitInputPress
    {
        static constexpr std::string_view Name = "AbilityTask_WaitInputPress";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPress = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnPress", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnPressCallback",
            "WaitInputPress",
        }};
    };

    struct AbilityTask_WaitInputRelease
    {
        static constexpr std::string_view Name = "AbilityTask_WaitInputRelease";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRelease = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnRelease", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnReleaseCallback",
            "WaitInputRelease",
        }};
    };

    struct AbilityTask_WaitMovementModeChange
    {
        static constexpr std::string_view Name = "AbilityTask_WaitMovementModeChange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnChange = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnChange", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CreateWaitMovementModeChange",
            "OnMovementModeChange",
        }};
    };

    struct AbilityTask_WaitOverlap
    {
        static constexpr std::string_view Name = "AbilityTask_WaitOverlap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnOverlap = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnOverlap", 0x78, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnHitCallback",
            "WaitForOverlap",
        }};
    };

    struct AbilityTask_WaitTargetData
    {
        static constexpr std::string_view Name = "AbilityTask_WaitTargetData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidData = 0x78;
            static constexpr std::uintptr_t Cancelled = 0x88;
            static constexpr std::uintptr_t TargetClass = 0x98;
            static constexpr std::uintptr_t TargetActor = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ValidData", 0x78, "MulticastInlineDelegateProperty"},
            {"Cancelled", 0x88, "MulticastInlineDelegateProperty"},
            {"TargetClass", 0x98, "ClassProperty"},
            {"TargetActor", 0xA0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "BeginSpawningActor",
            "FinishSpawningActor",
            "OnTargetDataCancelledCallback",
            "OnTargetDataReadyCallback",
            "OnTargetDataReplicatedCallback",
            "OnTargetDataReplicatedCancelledCallback",
            "WaitTargetData",
            "WaitTargetDataUsingActor",
        }};
    };

    struct AbilityTask_WaitVelocityChange
    {
        static constexpr std::string_view Name = "AbilityTask_WaitVelocityChange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnVelocityChage = 0x78;
            static constexpr std::uintptr_t CachedMovementComponent = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnVelocityChage", 0x78, "MulticastInlineDelegateProperty"},
            {"CachedMovementComponent", 0x88, "WeakObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateWaitVelocityChange",
        }};
    };

    struct AbilityTriggerData
    {
        static constexpr std::string_view Name = "AbilityTriggerData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TriggerTag = 0x0;
            static constexpr std::uintptr_t TriggerSource = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TriggerTag", 0x0, "StructProperty"},
            {"TriggerSource", 0x4, "ByteProperty"},
        }};
    };

    struct ActiveGameplayCue
    {
        static constexpr std::string_view Name = "ActiveGameplayCue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCueTag = 0xC;
            static constexpr std::uintptr_t PredictionKey = 0x10;
            static constexpr std::uintptr_t Parameters = 0x20;
            static constexpr std::uintptr_t bPredictivelyRemoved = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GameplayCueTag", 0xC, "StructProperty"},
            {"PredictionKey", 0x10, "StructProperty"},
            {"Parameters", 0x20, "StructProperty"},
            {"bPredictivelyRemoved", 0xF0, "BoolProperty"},
        }};
    };

    struct ActiveGameplayCueContainer
    {
        static constexpr std::string_view Name = "ActiveGameplayCueContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCues = 0x48;
            static constexpr std::uintptr_t Owner = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameplayCues", 0x48, "ArrayProperty"},
            {"Owner", 0x60, "ObjectProperty"},
        }};
    };

    struct ActiveGameplayEffect
    {
        static constexpr std::string_view Name = "ActiveGameplayEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Handle = 0xC;
            static constexpr std::uintptr_t Spec = 0x20;
            static constexpr std::uintptr_t PredictionKey = 0x1F0;
            static constexpr std::uintptr_t GrantedAbilityHandles = 0x200;
            static constexpr std::uintptr_t StartServerWorldTime = 0x210;
            static constexpr std::uintptr_t CachedStartServerWorldTime = 0x214;
            static constexpr std::uintptr_t StartWorldTime = 0x218;
            static constexpr std::uintptr_t bIsInhibited = 0x21C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Handle", 0xC, "StructProperty"},
            {"Spec", 0x20, "StructProperty"},
            {"PredictionKey", 0x1F0, "StructProperty"},
            {"GrantedAbilityHandles", 0x200, "ArrayProperty"},
            {"StartServerWorldTime", 0x210, "FloatProperty"},
            {"CachedStartServerWorldTime", 0x214, "FloatProperty"},
            {"StartWorldTime", 0x218, "FloatProperty"},
            {"bIsInhibited", 0x21C, "BoolProperty"},
        }};
    };

    struct ActiveGameplayEffectHandle
    {
        static constexpr std::string_view Name = "ActiveGameplayEffectHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "OwnerUniqueHandleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bPassedFiltersAndWasExecuted = 0xC;
            static constexpr std::uintptr_t Handle = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bPassedFiltersAndWasExecuted", 0xC, "BoolProperty"},
            {"Handle", 0x10, "IntProperty"},
        }};
    };

    struct ActiveGameplayEffectQuery
    {
        static constexpr std::string_view Name = "ActiveGameplayEffectQuery";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ActiveGameplayEffectsContainer
    {
        static constexpr std::string_view Name = "ActiveGameplayEffectsContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayEffects_Internal = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayEffects_Internal", 0x70, "ArrayProperty"},
        }};
    };

    struct AdditionalEffectsGameplayEffectComponent
    {
        static constexpr std::string_view Name = "AdditionalEffectsGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnApplicationCopyDataFromOriginalSpec = 0x28;
            static constexpr std::uintptr_t OnApplicationGameplayEffects = 0x30;
            static constexpr std::uintptr_t OnCompleteAlways = 0x40;
            static constexpr std::uintptr_t OnCompleteNormal = 0x50;
            static constexpr std::uintptr_t OnCompletePrematurely = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bOnApplicationCopyDataFromOriginalSpec", 0x28, "BoolProperty"},
            {"OnApplicationGameplayEffects", 0x30, "ArrayProperty"},
            {"OnCompleteAlways", 0x40, "ArrayProperty"},
            {"OnCompleteNormal", 0x50, "ArrayProperty"},
            {"OnCompletePrematurely", 0x60, "ArrayProperty"},
        }};
    };

    struct AnimNotify_GameplayCue
    {
        static constexpr std::string_view Name = "AnimNotify_GameplayCue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCue = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayCue", 0x38, "StructProperty"},
        }};
    };

    struct AnimNotify_GameplayCueState
    {
        static constexpr std::string_view Name = "AnimNotify_GameplayCueState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayCue", 0x30, "StructProperty"},
        }};
    };

    struct AssetTagsGameplayEffectComponent
    {
        static constexpr std::string_view Name = "AssetTagsGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InheritableAssetTags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InheritableAssetTags", 0x28, "StructProperty"},
        }};
    };

    struct AttributeBasedFloat
    {
        static constexpr std::string_view Name = "AttributeBasedFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Coefficient = 0x0;
            static constexpr std::uintptr_t PreMultiplyAdditiveValue = 0x28;
            static constexpr std::uintptr_t PostMultiplyAdditiveValue = 0x50;
            static constexpr std::uintptr_t BackingAttribute = 0x78;
            static constexpr std::uintptr_t AttributeCurve = 0xB8;
            static constexpr std::uintptr_t AttributeCalculationType = 0xC8;
            static constexpr std::uintptr_t FinalChannel = 0xC9;
            static constexpr std::uintptr_t SourceTagFilter = 0xD0;
            static constexpr std::uintptr_t TargetTagFilter = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Coefficient", 0x0, "StructProperty"},
            {"PreMultiplyAdditiveValue", 0x28, "StructProperty"},
            {"PostMultiplyAdditiveValue", 0x50, "StructProperty"},
            {"BackingAttribute", 0x78, "StructProperty"},
            {"AttributeCurve", 0xB8, "StructProperty"},
            {"AttributeCalculationType", 0xC8, "EnumProperty"},
            {"FinalChannel", 0xC9, "EnumProperty"},
            {"SourceTagFilter", 0xD0, "StructProperty"},
            {"TargetTagFilter", 0xF0, "StructProperty"},
        }};
    };

    struct AttributeDefaults
    {
        static constexpr std::string_view Name = "AttributeDefaults";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Attributes = 0x0;
            static constexpr std::uintptr_t DefaultStartingTable = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Attributes", 0x0, "ClassProperty"},
            {"DefaultStartingTable", 0x8, "ObjectProperty"},
        }};
    };

    struct AttributeMetaData
    {
        static constexpr std::string_view Name = "AttributeMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseValue = 0x8;
            static constexpr std::uintptr_t MinValue = 0xC;
            static constexpr std::uintptr_t MaxValue = 0x10;
            static constexpr std::uintptr_t DerivedAttributeInfo = 0x18;
            static constexpr std::uintptr_t bCanStack = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BaseValue", 0x8, "FloatProperty"},
            {"MinValue", 0xC, "FloatProperty"},
            {"MaxValue", 0x10, "FloatProperty"},
            {"DerivedAttributeInfo", 0x18, "StrProperty"},
            {"bCanStack", 0x28, "BoolProperty"},
        }};
    };

    struct AttributeSet
    {
        static constexpr std::string_view Name = "AttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlockAbilityTagsGameplayEffectComponent
    {
        static constexpr std::string_view Name = "BlockAbilityTagsGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InheritableBlockedAbilityTagsContainer = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InheritableBlockedAbilityTagsContainer", 0x28, "StructProperty"},
        }};
    };

    struct CancelAbilityTagsGameplayEffectComponent
    {
        static constexpr std::string_view Name = "CancelAbilityTagsGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentMode = 0x28;
            static constexpr std::uintptr_t InheritableCancelAbilitiesWithTagsContainer = 0x30;
            static constexpr std::uintptr_t InheritableCancelAbilitiesWithoutTagsContainer = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ComponentMode", 0x28, "EnumProperty"},
            {"InheritableCancelAbilitiesWithTagsContainer", 0x30, "StructProperty"},
            {"InheritableCancelAbilitiesWithoutTagsContainer", 0x90, "StructProperty"},
        }};
    };

    struct ChanceToApplyGameplayEffectComponent
    {
        static constexpr std::string_view Name = "ChanceToApplyGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ChanceToApplyToTarget = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChanceToApplyToTarget", 0x28, "StructProperty"},
        }};
    };

    struct ConditionalGameplayEffect
    {
        static constexpr std::string_view Name = "ConditionalGameplayEffect";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EffectClass = 0x0;
            static constexpr std::uintptr_t RequiredSourceTags = 0x8;
            static constexpr std::uintptr_t RemovalPolicy = 0x28;
            static constexpr std::uintptr_t StackCountToRemove = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EffectClass", 0x0, "ClassProperty"},
            {"RequiredSourceTags", 0x8, "StructProperty"},
            {"RemovalPolicy", 0x28, "EnumProperty"},
            {"StackCountToRemove", 0x2C, "IntProperty"},
        }};
    };

    struct CustomCalculationBasedFloat
    {
        static constexpr std::string_view Name = "CustomCalculationBasedFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CalculationClassMagnitude = 0x0;
            static constexpr std::uintptr_t Coefficient = 0x8;
            static constexpr std::uintptr_t PreMultiplyAdditiveValue = 0x30;
            static constexpr std::uintptr_t PostMultiplyAdditiveValue = 0x58;
            static constexpr std::uintptr_t FinalLookupCurve = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CalculationClassMagnitude", 0x0, "ClassProperty"},
            {"Coefficient", 0x8, "StructProperty"},
            {"PreMultiplyAdditiveValue", 0x30, "StructProperty"},
            {"PostMultiplyAdditiveValue", 0x58, "StructProperty"},
            {"FinalLookupCurve", 0x80, "StructProperty"},
        }};
    };

    struct CustomCanApplyGameplayEffectComponent
    {
        static constexpr std::string_view Name = "CustomCanApplyGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ApplicationRequirements = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ApplicationRequirements", 0x28, "ArrayProperty"},
        }};
    };

    struct GameplayAbilitiesDeveloperSettings
    {
        static constexpr std::string_view Name = "GameplayAbilitiesDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySystemGlobalsClassName = 0x30;
            static constexpr std::uintptr_t bUseDebugTargetFromHud = 0x48;
            static constexpr std::uintptr_t GlobalAttributeSetDefaultsTableNames = 0x50;
            static constexpr std::uintptr_t GlobalAttributeMetaDataTableName = 0x60;
            static constexpr std::uintptr_t GlobalGameplayCueManagerClass = 0x78;
            static constexpr std::uintptr_t GlobalGameplayCueManagerName = 0x90;
            static constexpr std::uintptr_t GameplayCueNotifyPaths = 0xA8;
            static constexpr std::uintptr_t GlobalCurveTableName = 0xB8;
            static constexpr std::uintptr_t PredictTargetGameplayEffects = 0xD0;
            static constexpr std::uintptr_t ReplicateActivationOwnedTags = 0xD1;
            static constexpr std::uintptr_t ActivateFailCanActivateAbilityTag = 0xD4;
            static constexpr std::uintptr_t ActivateFailCooldownTag = 0xD8;
            static constexpr std::uintptr_t ActivateFailCostTag = 0xDC;
            static constexpr std::uintptr_t ActivateFailNetworkingTag = 0xE0;
            static constexpr std::uintptr_t ActivateFailTagsBlockedTag = 0xE4;
            static constexpr std::uintptr_t ActivateFailTagsMissingTag = 0xE8;
            static constexpr std::uintptr_t GameplayTagResponseTableName = 0xF0;
            static constexpr std::uintptr_t bAllowGameplayModEvaluationChannels = 0x108;
            static constexpr std::uintptr_t DefaultGameplayModEvaluationChannel = 0x109;
            static constexpr std::uintptr_t GameplayModEvaluationChannelAliases = 0x10C;
            static constexpr std::uintptr_t MinimalReplicationTagCountBits = 0x134;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"AbilitySystemGlobalsClassName", 0x30, "StructProperty"},
            {"bUseDebugTargetFromHud", 0x48, "BoolProperty"},
            {"GlobalAttributeSetDefaultsTableNames", 0x50, "ArrayProperty"},
            {"GlobalAttributeMetaDataTableName", 0x60, "StructProperty"},
            {"GlobalGameplayCueManagerClass", 0x78, "StructProperty"},
            {"GlobalGameplayCueManagerName", 0x90, "StructProperty"},
            {"GameplayCueNotifyPaths", 0xA8, "ArrayProperty"},
            {"GlobalCurveTableName", 0xB8, "StructProperty"},
            {"PredictTargetGameplayEffects", 0xD0, "BoolProperty"},
            {"ReplicateActivationOwnedTags", 0xD1, "BoolProperty"},
            {"ActivateFailCanActivateAbilityTag", 0xD4, "StructProperty"},
            {"ActivateFailCooldownTag", 0xD8, "StructProperty"},
            {"ActivateFailCostTag", 0xDC, "StructProperty"},
            {"ActivateFailNetworkingTag", 0xE0, "StructProperty"},
            {"ActivateFailTagsBlockedTag", 0xE4, "StructProperty"},
            {"ActivateFailTagsMissingTag", 0xE8, "StructProperty"},
            {"GameplayTagResponseTableName", 0xF0, "StructProperty"},
            {"bAllowGameplayModEvaluationChannels", 0x108, "BoolProperty"},
            {"DefaultGameplayModEvaluationChannel", 0x109, "EnumProperty"},
            {"GameplayModEvaluationChannelAliases", 0x10C, "NameProperty"},
            {"MinimalReplicationTagCountBits", 0x134, "IntProperty"},
        }};
    };

    struct GameplayAbilitiesEditorDeveloperSettings
    {
        static constexpr std::string_view Name = "GameplayAbilitiesEditorDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettingsBackedByCVars";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreCooldowns = 0x30;
            static constexpr std::uintptr_t bIgnoreCosts = 0x31;
            static constexpr std::uintptr_t AbilitySystemGlobalScaler = 0x34;
            static constexpr std::uintptr_t DebugDrawMaxDistance = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIgnoreCooldowns", 0x30, "BoolProperty"},
            {"bIgnoreCosts", 0x31, "BoolProperty"},
            {"AbilitySystemGlobalScaler", 0x34, "FloatProperty"},
            {"DebugDrawMaxDistance", 0x38, "FloatProperty"},
        }};
    };

    struct GameplayAbility
    {
        static constexpr std::string_view Name = "GameplayAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
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

        inline static constexpr std::array<std::string_view, 57> FunctionNames{{
            "BP_ApplyGameplayEffectToOwner",
            "BP_ApplyGameplayEffectToTarget",
            "BP_EditSpecValues",
            "BP_RemoveGameplayEffectFromOwnerWithAssetTags",
            "BP_RemoveGameplayEffectFromOwnerWithGrantedTags",
            "BP_RemoveGameplayEffectFromOwnerWithHandle",
            "CancelTaskByInstanceName",
            "ConfirmTaskByInstanceName",
            "EndAbilityState",
            "EndTaskByInstanceName",
            "GetAbilityLevel",
            "GetAbilityLevel_BP",
            "GetAbilitySystemComponentFromActorInfo",
            "GetActorInfo",
            "GetAvatarActorFromActorInfo",
            "GetContextFromOwner",
            "GetCooldownTimeRemaining",
            "GetCurrentMontage",
            "GetCurrentSourceObject",
            "GetGrantedByEffectContext",
            "GetOwningActorFromActorInfo",
            "GetOwningComponentFromActorInfo",
            "GetSourceObject_BP",
            "InvalidateClientPredictionKey",
            "IsLocallyControlled",
            "K2_ActivateAbility",
            "K2_ActivateAbilityFromEvent",
            "K2_AddGameplayCue",
            "K2_AddGameplayCueWithParams",
            "K2_ApplyGameplayEffectSpecToOwner",
            "K2_ApplyGameplayEffectSpecToTarget",
            "K2_CanActivateAbility",
            "K2_CancelAbility",
            "K2_CheckAbilityCooldown",
            "K2_CheckAbilityCost",
            "K2_CommitAbility",
            "K2_CommitAbilityCooldown",
            "K2_CommitAbilityCost",
            "K2_CommitExecute",
            "K2_EndAbility",
            "K2_EndAbilityLocally",
            "K2_ExecuteGameplayCue",
            "K2_ExecuteGameplayCueWithParams",
            "K2_HasAuthority",
            "K2_OnEndAbility",
            "K2_RemoveGameplayCue",
            "K2_ShouldAbilityRespondToEvent",
            "MakeOutgoingGameplayEffectSpec",
            "MakeTargetLocationInfoFromOwnerActor",
            "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent",
            "MontageJumpToSection",
            "MontageSetNextSectionName",
            "MontageStop",
            "RemoveGrantedByEffect",
            "SendGameplayEvent",
            "SetCanBeCanceled",
            "SetShouldBlockOtherAbilities",
        }};
    };

    struct GameplayAbilityActivationInfo
    {
        static constexpr std::string_view Name = "GameplayAbilityActivationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationMode = 0x0;
            static constexpr std::uintptr_t bCanBeEndedByOtherInstance = 0x1;
            static constexpr std::uintptr_t PredictionKeyWhenActivated = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActivationMode", 0x0, "ByteProperty"},
            {"bCanBeEndedByOtherInstance", 0x1, "BoolProperty"},
            {"PredictionKeyWhenActivated", 0x4, "StructProperty"},
        }};
    };

    struct GameplayAbilityActorInfo
    {
        static constexpr std::string_view Name = "GameplayAbilityActorInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerActor = 0x8;
            static constexpr std::uintptr_t AvatarActor = 0x10;
            static constexpr std::uintptr_t PlayerController = 0x18;
            static constexpr std::uintptr_t AbilitySystemComponent = 0x20;
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x28;
            static constexpr std::uintptr_t AnimInstance = 0x30;
            static constexpr std::uintptr_t MovementComponent = 0x38;
            static constexpr std::uintptr_t AffectedAnimInstanceTag = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OwnerActor", 0x8, "WeakObjectProperty"},
            {"AvatarActor", 0x10, "WeakObjectProperty"},
            {"PlayerController", 0x18, "WeakObjectProperty"},
            {"AbilitySystemComponent", 0x20, "WeakObjectProperty"},
            {"SkeletalMeshComponent", 0x28, "WeakObjectProperty"},
            {"AnimInstance", 0x30, "WeakObjectProperty"},
            {"MovementComponent", 0x38, "WeakObjectProperty"},
            {"AffectedAnimInstanceTag", 0x40, "NameProperty"},
        }};
    };

    struct GameplayAbilityBindInfo
    {
        static constexpr std::string_view Name = "GameplayAbilityBindInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Command = 0x0;
            static constexpr std::uintptr_t GameplayAbilityClass = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Command", 0x0, "ByteProperty"},
            {"GameplayAbilityClass", 0x8, "ClassProperty"},
        }};
    };

    struct GameplayAbilityBlueprint
    {
        static constexpr std::string_view Name = "GameplayAbilityBlueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Blueprint";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentClass = 0x58;
            static constexpr std::uintptr_t BlueprintType = 0x60;
            static constexpr std::uintptr_t bHasBeenRegenerated = 0x61;
            static constexpr std::uintptr_t bIsRegeneratingOnLoad = 0x61;
            static constexpr std::uintptr_t bRecompileOnLoad = 0x61;
            static constexpr std::uintptr_t BlueprintSystemVersion = 0x64;
            static constexpr std::uintptr_t SimpleConstructionScript = 0x68;
            static constexpr std::uintptr_t ComponentTemplates = 0x70;
            static constexpr std::uintptr_t Timelines = 0x80;
            static constexpr std::uintptr_t ComponentClassOverrides = 0x90;
            static constexpr std::uintptr_t InheritableComponentHandler = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ParentClass", 0x58, "ClassProperty"},
            {"BlueprintType", 0x60, "ByteProperty"},
            {"bHasBeenRegenerated", 0x61, "BoolProperty"},
            {"bIsRegeneratingOnLoad", 0x61, "BoolProperty"},
            {"bRecompileOnLoad", 0x61, "BoolProperty"},
            {"BlueprintSystemVersion", 0x64, "IntProperty"},
            {"SimpleConstructionScript", 0x68, "ObjectProperty"},
            {"ComponentTemplates", 0x70, "ArrayProperty"},
            {"Timelines", 0x80, "ArrayProperty"},
            {"ComponentClassOverrides", 0x90, "ArrayProperty"},
            {"InheritableComponentHandler", 0xA0, "ObjectProperty"},
        }};
    };

    struct GameplayAbilityLocalAnimMontage
    {
        static constexpr std::string_view Name = "GameplayAbilityLocalAnimMontage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimMontage = 0x0;
            static constexpr std::uintptr_t PlayInstanceId = 0x8;
            static constexpr std::uintptr_t PredictionKey = 0xC;
            static constexpr std::uintptr_t AnimatingAbility = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AnimMontage", 0x0, "ObjectProperty"},
            {"PlayInstanceId", 0x8, "ByteProperty"},
            {"PredictionKey", 0xC, "StructProperty"},
            {"AnimatingAbility", 0x1C, "WeakObjectProperty"},
        }};
    };

    struct GameplayAbilityRepAnimMontage
    {
        static constexpr std::string_view Name = "GameplayAbilityRepAnimMontage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t SlotName = 0x8;
            static constexpr std::uintptr_t PlayRate = 0xC;
            static constexpr std::uintptr_t Position = 0x10;
            static constexpr std::uintptr_t BlendTime = 0x14;
            static constexpr std::uintptr_t BlendOutTime = 0x18;
            static constexpr std::uintptr_t PlayCount = 0x1C;
            static constexpr std::uintptr_t NextSectionID = 0x20;
            static constexpr std::uintptr_t PlayInstanceId = 0x21;
            static constexpr std::uintptr_t IsStopped = 0x22;
            static constexpr std::uintptr_t SkipPositionCorrection = 0x22;
            static constexpr std::uintptr_t bRepPosition = 0x22;
            static constexpr std::uintptr_t bSkipPlayRate = 0x22;
            static constexpr std::uintptr_t PredictionKey = 0x24;
            static constexpr std::uintptr_t SectionIdToPlay = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Animation", 0x0, "ObjectProperty"},
            {"SlotName", 0x8, "NameProperty"},
            {"PlayRate", 0xC, "FloatProperty"},
            {"Position", 0x10, "FloatProperty"},
            {"BlendTime", 0x14, "FloatProperty"},
            {"BlendOutTime", 0x18, "FloatProperty"},
            {"PlayCount", 0x1C, "FloatProperty"},
            {"NextSectionID", 0x20, "ByteProperty"},
            {"PlayInstanceId", 0x21, "ByteProperty"},
            {"IsStopped", 0x22, "BoolProperty"},
            {"SkipPositionCorrection", 0x22, "BoolProperty"},
            {"bRepPosition", 0x22, "BoolProperty"},
            {"bSkipPlayRate", 0x22, "BoolProperty"},
            {"PredictionKey", 0x24, "StructProperty"},
            {"SectionIdToPlay", 0x34, "ByteProperty"},
        }};
    };

    struct GameplayAbilityRepAnimMontageNetSerializerConfig
    {
        static constexpr std::string_view Name = "GameplayAbilityRepAnimMontageNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayAbilitySet
    {
        static constexpr std::string_view Name = "GameplayAbilitySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Abilities = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Abilities", 0x28, "ArrayProperty"},
        }};
    };

    struct GameplayAbilitySpec
    {
        static constexpr std::string_view Name = "GameplayAbilitySpec";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Handle = 0x10;
            static constexpr std::uintptr_t ability = 0x28;
            static constexpr std::uintptr_t Level = 0x30;
            static constexpr std::uintptr_t InputID = 0x34;
            static constexpr std::uintptr_t SourceObject = 0x38;
            static constexpr std::uintptr_t ActiveCount = 0x40;
            static constexpr std::uintptr_t InputPressed = 0x41;
            static constexpr std::uintptr_t PendingRemove = 0x41;
            static constexpr std::uintptr_t RemoveAfterActivation = 0x41;
            static constexpr std::uintptr_t bActivateOnce = 0x41;
            static constexpr std::uintptr_t ActivationInfo = 0x58;
            static constexpr std::uintptr_t DynamicAbilityTags = 0x70;
            static constexpr std::uintptr_t DynamicAbilityTriggers = 0x90;
            static constexpr std::uintptr_t NonReplicatedInstances = 0xA0;
            static constexpr std::uintptr_t ReplicatedInstances = 0xB0;
            static constexpr std::uintptr_t GameplayEffectHandle = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Handle", 0x10, "StructProperty"},
            {"ability", 0x28, "ObjectProperty"},
            {"Level", 0x30, "IntProperty"},
            {"InputID", 0x34, "IntProperty"},
            {"SourceObject", 0x38, "WeakObjectProperty"},
            {"ActiveCount", 0x40, "ByteProperty"},
            {"InputPressed", 0x41, "BoolProperty"},
            {"PendingRemove", 0x41, "BoolProperty"},
            {"RemoveAfterActivation", 0x41, "BoolProperty"},
            {"bActivateOnce", 0x41, "BoolProperty"},
            {"ActivationInfo", 0x58, "StructProperty"},
            {"DynamicAbilityTags", 0x70, "StructProperty"},
            {"DynamicAbilityTriggers", 0x90, "ArrayProperty"},
            {"NonReplicatedInstances", 0xA0, "ArrayProperty"},
            {"ReplicatedInstances", 0xB0, "ArrayProperty"},
            {"GameplayEffectHandle", 0xC0, "StructProperty"},
        }};
    };

    struct GameplayAbilitySpecConfig
    {
        static constexpr std::string_view Name = "GameplayAbilitySpecConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ability = 0x0;
            static constexpr std::uintptr_t LevelScalableFloat = 0x8;
            static constexpr std::uintptr_t InputID = 0x30;
            static constexpr std::uintptr_t RemovalPolicy = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ability", 0x0, "ClassProperty"},
            {"LevelScalableFloat", 0x8, "StructProperty"},
            {"InputID", 0x30, "IntProperty"},
            {"RemovalPolicy", 0x34, "EnumProperty"},
        }};
    };

    struct GameplayAbilitySpecContainer
    {
        static constexpr std::string_view Name = "GameplayAbilitySpecContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x48;
            static constexpr std::uintptr_t Owner = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Items", 0x48, "ArrayProperty"},
            {"Owner", 0x58, "ObjectProperty"},
        }};
    };

    struct GameplayAbilitySpecDef
    {
        static constexpr std::string_view Name = "GameplayAbilitySpecDef";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ability = 0x0;
            static constexpr std::uintptr_t LevelScalableFloat = 0x8;
            static constexpr std::uintptr_t InputID = 0x30;
            static constexpr std::uintptr_t RemovalPolicy = 0x34;
            static constexpr std::uintptr_t SourceObject = 0x38;
            static constexpr std::uintptr_t AssignedHandle = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ability", 0x0, "ClassProperty"},
            {"LevelScalableFloat", 0x8, "StructProperty"},
            {"InputID", 0x30, "IntProperty"},
            {"RemovalPolicy", 0x34, "EnumProperty"},
            {"SourceObject", 0x38, "WeakObjectProperty"},
            {"AssignedHandle", 0x50, "StructProperty"},
        }};
    };

    struct GameplayAbilitySpecHandle
    {
        static constexpr std::string_view Name = "GameplayAbilitySpecHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GloballyUniqueHandleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Handle = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handle", 0x10, "IntProperty"},
        }};
    };

    struct GameplayAbilitySpecHandleAndPredictionKey
    {
        static constexpr std::string_view Name = "GameplayAbilitySpecHandleAndPredictionKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityHandle = 0x0;
            static constexpr std::uintptr_t PredictionKeyAtCreation = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AbilityHandle", 0x0, "StructProperty"},
            {"PredictionKeyAtCreation", 0x18, "IntProperty"},
        }};
    };

    struct GameplayAbilityTargetActor
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldProduceTargetDataOnServer = 0x278;
            static constexpr std::uintptr_t StartLocation = 0x280;
            static constexpr std::uintptr_t PrimaryPC = 0x340;
            static constexpr std::uintptr_t OwningAbility = 0x348;
            static constexpr std::uintptr_t bDestroyOnConfirmation = 0x350;
            static constexpr std::uintptr_t SourceActor = 0x358;
            static constexpr std::uintptr_t ReticleParams = 0x360;
            static constexpr std::uintptr_t ReticleClass = 0x378;
            static constexpr std::uintptr_t Filter = 0x380;
            static constexpr std::uintptr_t bDebug = 0x390;
            static constexpr std::uintptr_t GenericDelegateBoundASC = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ShouldProduceTargetDataOnServer", 0x278, "BoolProperty"},
            {"StartLocation", 0x280, "StructProperty"},
            {"PrimaryPC", 0x340, "ObjectProperty"},
            {"OwningAbility", 0x348, "ObjectProperty"},
            {"bDestroyOnConfirmation", 0x350, "BoolProperty"},
            {"SourceActor", 0x358, "ObjectProperty"},
            {"ReticleParams", 0x360, "StructProperty"},
            {"ReticleClass", 0x378, "ClassProperty"},
            {"Filter", 0x380, "StructProperty"},
            {"bDebug", 0x390, "BoolProperty"},
            {"GenericDelegateBoundASC", 0x3A8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CancelTargeting",
            "ConfirmTargeting",
        }};
    };

    struct GameplayAbilityTargetActor_ActorPlacement
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetActor_ActorPlacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayAbilityTargetActor_GroundTrace";
        struct Offsets
        {
            static constexpr std::uintptr_t PlacedActorClass = 0x3F0;
            static constexpr std::uintptr_t PlacedActorMaterial = 0x3F8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlacedActorClass", 0x3F0, "ClassProperty"},
            {"PlacedActorMaterial", 0x3F8, "ObjectProperty"},
        }};
    };

    struct GameplayAbilityTargetActor_GroundTrace
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetActor_GroundTrace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayAbilityTargetActor_Trace";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionRadius = 0x3D0;
            static constexpr std::uintptr_t CollisionHeight = 0x3D4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollisionRadius", 0x3D0, "FloatProperty"},
            {"CollisionHeight", 0x3D4, "FloatProperty"},
        }};
    };

    struct GameplayAbilityTargetActor_Radius
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetActor_Radius";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayAbilityTargetActor";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Radius", 0x3B0, "FloatProperty"},
        }};
    };

    struct GameplayAbilityTargetActor_SingleLineTrace
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetActor_SingleLineTrace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayAbilityTargetActor_Trace";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxRange = 0x3B0;
            static constexpr std::uintptr_t TraceProfile = 0x3B4;
            static constexpr std::uintptr_t bTraceAffectsAimPitch = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxRange", 0x3B0, "FloatProperty"},
            {"TraceProfile", 0x3B4, "StructProperty"},
            {"bTraceAffectsAimPitch", 0x3B8, "BoolProperty"},
        }};
    };

    struct GameplayAbilityTargetActor_Trace
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetActor_Trace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayAbilityTargetActor";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxRange = 0x3B0;
            static constexpr std::uintptr_t TraceProfile = 0x3B4;
            static constexpr std::uintptr_t bTraceAffectsAimPitch = 0x3B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxRange", 0x3B0, "FloatProperty"},
            {"TraceProfile", 0x3B4, "StructProperty"},
            {"bTraceAffectsAimPitch", 0x3B8, "BoolProperty"},
        }};
    };

    struct GameplayAbilityTargetData
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayAbilityTargetDataHandle
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetDataHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayAbilityTargetData_ActorArray
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetData_ActorArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayAbilityTargetData";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceLocation = 0x10;
            static constexpr std::uintptr_t TargetActorArray = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourceLocation", 0x10, "StructProperty"},
            {"TargetActorArray", 0xA0, "ArrayProperty"},
        }};
    };

    struct GameplayAbilityTargetData_LocationInfo
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetData_LocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayAbilityTargetData";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceLocation = 0x10;
            static constexpr std::uintptr_t TargetLocation = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourceLocation", 0x10, "StructProperty"},
            {"TargetLocation", 0xA0, "StructProperty"},
        }};
    };

    struct GameplayAbilityTargetData_SingleTargetHit
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetData_SingleTargetHit";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "GameplayAbilityTargetData";
        struct Offsets
        {
            static constexpr std::uintptr_t HitResult = 0x8;
            static constexpr std::uintptr_t bHitReplaced = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HitResult", 0x8, "StructProperty"},
            {"bHitReplaced", 0x100, "BoolProperty"},
        }};
    };

    struct GameplayAbilityTargetingLocationInfo
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetingLocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceActor = 0x8;
            static constexpr std::uintptr_t SourceComponent = 0x10;
            static constexpr std::uintptr_t SourceAbility = 0x18;
            static constexpr std::uintptr_t LiteralTransform = 0x20;
            static constexpr std::uintptr_t SourceSocketName = 0x80;
            static constexpr std::uintptr_t LocationType = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SourceActor", 0x8, "ObjectProperty"},
            {"SourceComponent", 0x10, "ObjectProperty"},
            {"SourceAbility", 0x18, "ObjectProperty"},
            {"LiteralTransform", 0x20, "StructProperty"},
            {"SourceSocketName", 0x80, "NameProperty"},
            {"LocationType", 0x84, "ByteProperty"},
        }};
    };

    struct GameplayAbilityTargetingLocationInfoNetSerializerConfig
    {
        static constexpr std::string_view Name = "GameplayAbilityTargetingLocationInfoNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayAbilityWorldReticle
    {
        static constexpr std::string_view Name = "GameplayAbilityWorldReticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Parameters = 0x278;
            static constexpr std::uintptr_t bFaceOwnerFlat = 0x290;
            static constexpr std::uintptr_t bSnapToTargetedActor = 0x291;
            static constexpr std::uintptr_t bIsTargetValid = 0x292;
            static constexpr std::uintptr_t bIsTargetAnActor = 0x293;
            static constexpr std::uintptr_t PrimaryPC = 0x298;
            static constexpr std::uintptr_t TargetingActor = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Parameters", 0x278, "StructProperty"},
            {"bFaceOwnerFlat", 0x290, "BoolProperty"},
            {"bSnapToTargetedActor", 0x291, "BoolProperty"},
            {"bIsTargetValid", 0x292, "BoolProperty"},
            {"bIsTargetAnActor", 0x293, "BoolProperty"},
            {"PrimaryPC", 0x298, "ObjectProperty"},
            {"TargetingActor", 0x2A0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "FaceTowardSource",
            "OnParametersInitialized",
            "OnTargetingAnActor",
            "OnValidTargetChanged",
            "SetReticleMaterialParamFloat",
            "SetReticleMaterialParamVector",
        }};
    };

    struct GameplayAbilityWorldReticle_ActorVisualization
    {
        static constexpr std::string_view Name = "GameplayAbilityWorldReticle_ActorVisualization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayAbilityWorldReticle";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionComponent = 0x2A8;
            static constexpr std::uintptr_t VisualizationComponents = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollisionComponent", 0x2A8, "ObjectProperty"},
            {"VisualizationComponents", 0x2B0, "ArrayProperty"},
        }};
    };

    struct GameplayAbility_CharacterJump
    {
        static constexpr std::string_view Name = "GameplayAbility_CharacterJump";
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

    struct GameplayAbility_Montage
    {
        static constexpr std::string_view Name = "GameplayAbility_Montage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t MontageToPlay = 0x380;
            static constexpr std::uintptr_t PlayRate = 0x388;
            static constexpr std::uintptr_t SectionName = 0x38C;
            static constexpr std::uintptr_t GameplayEffectClassesWhileAnimating = 0x390;
            static constexpr std::uintptr_t GameplayEffectsWhileAnimating = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MontageToPlay", 0x380, "ObjectProperty"},
            {"PlayRate", 0x388, "FloatProperty"},
            {"SectionName", 0x38C, "NameProperty"},
            {"GameplayEffectClassesWhileAnimating", 0x390, "ArrayProperty"},
            {"GameplayEffectsWhileAnimating", 0x3A0, "ArrayProperty"},
        }};
    };

    struct GameplayAttribute
    {
        static constexpr std::string_view Name = "GameplayAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeName = 0x0;
            static constexpr std::uintptr_t Attribute = 0x10;
            static constexpr std::uintptr_t AttributeOwner = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AttributeName", 0x0, "StrProperty"},
            {"Attribute", 0x10, "FieldPathProperty"},
            {"AttributeOwner", 0x30, "ObjectProperty"},
        }};
    };

    struct GameplayAttributeData
    {
        static constexpr std::string_view Name = "GameplayAttributeData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseValue = 0x8;
            static constexpr std::uintptr_t CurrentValue = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseValue", 0x8, "FloatProperty"},
            {"CurrentValue", 0xC, "FloatProperty"},
        }};
    };

    struct GameplayCueFunctionLibrary
    {
        static constexpr std::string_view Name = "GameplayCueFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "AddGameplayCueOnActor",
            "ExecuteGameplayCueOnActor",
            "MakeGameplayCueParametersFromHitResult",
            "RemoveGameplayCueOnActor",
        }};
    };

    struct GameplayCueInterface
    {
        static constexpr std::string_view Name = "GameplayCueInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BlueprintCustomHandler",
            "ForwardGameplayCueToParent",
        }};
    };

    struct GameplayCueManager
    {
        static constexpr std::string_view Name = "GameplayCueManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RuntimeGameplayCueObjectLibrary = 0x40;
            static constexpr std::uintptr_t EditorGameplayCueObjectLibrary = 0x90;
            static constexpr std::uintptr_t LoadedGameplayCueNotifyClasses = 0x198;
            static constexpr std::uintptr_t GameplayCueClassesForPreallocation = 0x1A8;
            static constexpr std::uintptr_t PendingExecuteCues = 0x1B8;
            static constexpr std::uintptr_t GameplayCueSendContextCount = 0x1C8;
            static constexpr std::uintptr_t PreallocationInfoList_Internal = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RuntimeGameplayCueObjectLibrary", 0x40, "StructProperty"},
            {"EditorGameplayCueObjectLibrary", 0x90, "StructProperty"},
            {"LoadedGameplayCueNotifyClasses", 0x198, "ArrayProperty"},
            {"GameplayCueClassesForPreallocation", 0x1A8, "ArrayProperty"},
            {"PendingExecuteCues", 0x1B8, "ArrayProperty"},
            {"GameplayCueSendContextCount", 0x1C8, "IntProperty"},
            {"PreallocationInfoList_Internal", 0x1D0, "ArrayProperty"},
        }};
    };

    struct GameplayCueNotifyActorArray
    {
        static constexpr std::string_view Name = "GameplayCueNotifyActorArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actors = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Actors", 0x0, "ArrayProperty"},
        }};
    };

    struct GameplayCueNotifyData
    {
        static constexpr std::string_view Name = "GameplayCueNotifyData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCueTag = 0x0;
            static constexpr std::uintptr_t GameplayCueNotifyObj = 0x8;
            static constexpr std::uintptr_t LoadedGameplayCueClass = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameplayCueTag", 0x0, "StructProperty"},
            {"GameplayCueNotifyObj", 0x8, "StructProperty"},
            {"LoadedGameplayCueClass", 0x20, "ClassProperty"},
        }};
    };

    struct GameplayCueNotify_Actor
    {
        static constexpr std::string_view Name = "GameplayCueNotify_Actor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoDestroyOnRemove = 0x278;
            static constexpr std::uintptr_t AutoDestroyDelay = 0x27C;
            static constexpr std::uintptr_t WarnIfTimelineIsStillRunning = 0x280;
            static constexpr std::uintptr_t WarnIfLatentActionIsStillRunning = 0x281;
            static constexpr std::uintptr_t GameplayCueTag = 0x284;
            static constexpr std::uintptr_t GameplayCueName = 0x288;
            static constexpr std::uintptr_t bAutoAttachToOwner = 0x28C;
            static constexpr std::uintptr_t IsOverride = 0x28D;
            static constexpr std::uintptr_t bUniqueInstancePerInstigator = 0x28E;
            static constexpr std::uintptr_t bUniqueInstancePerSourceObject = 0x28F;
            static constexpr std::uintptr_t bAllowMultipleOnActiveEvents = 0x290;
            static constexpr std::uintptr_t bAllowMultipleWhileActiveEvents = 0x291;
            static constexpr std::uintptr_t NumPreallocatedInstances = 0x294;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bAutoDestroyOnRemove", 0x278, "BoolProperty"},
            {"AutoDestroyDelay", 0x27C, "FloatProperty"},
            {"WarnIfTimelineIsStillRunning", 0x280, "BoolProperty"},
            {"WarnIfLatentActionIsStillRunning", 0x281, "BoolProperty"},
            {"GameplayCueTag", 0x284, "StructProperty"},
            {"GameplayCueName", 0x288, "NameProperty"},
            {"bAutoAttachToOwner", 0x28C, "BoolProperty"},
            {"IsOverride", 0x28D, "BoolProperty"},
            {"bUniqueInstancePerInstigator", 0x28E, "BoolProperty"},
            {"bUniqueInstancePerSourceObject", 0x28F, "BoolProperty"},
            {"bAllowMultipleOnActiveEvents", 0x290, "BoolProperty"},
            {"bAllowMultipleWhileActiveEvents", 0x291, "BoolProperty"},
            {"NumPreallocatedInstances", 0x294, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "K2_EndGameplayCue",
            "K2_HandleGameplayCue",
            "OnActive",
            "OnExecute",
            "OnOwnerDestroyed",
            "OnRemove",
            "WhileActive",
        }};
    };

    struct GameplayCueNotify_Burst
    {
        static constexpr std::string_view Name = "GameplayCueNotify_Burst";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Static";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSpawnCondition = 0x38;
            static constexpr std::uintptr_t DefaultPlacementInfo = 0x70;
            static constexpr std::uintptr_t BurstEffects = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultSpawnCondition", 0x38, "StructProperty"},
            {"DefaultPlacementInfo", 0x70, "StructProperty"},
            {"BurstEffects", 0xB0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnBurst",
        }};
    };

    struct GameplayCueNotify_BurstEffects
    {
        static constexpr std::string_view Name = "GameplayCueNotify_BurstEffects";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BurstParticles = 0x0;
            static constexpr std::uintptr_t BurstSounds = 0x10;
            static constexpr std::uintptr_t BurstCameraShake = 0x20;
            static constexpr std::uintptr_t BurstCameraLensEffect = 0xB8;
            static constexpr std::uintptr_t BurstForceFeedback = 0x148;
            static constexpr std::uintptr_t BurstDevicePropertyEffect = 0x1E0;
            static constexpr std::uintptr_t BurstDecal = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BurstParticles", 0x0, "ArrayProperty"},
            {"BurstSounds", 0x10, "ArrayProperty"},
            {"BurstCameraShake", 0x20, "StructProperty"},
            {"BurstCameraLensEffect", 0xB8, "StructProperty"},
            {"BurstForceFeedback", 0x148, "StructProperty"},
            {"BurstDevicePropertyEffect", 0x1E0, "StructProperty"},
            {"BurstDecal", 0x1F0, "StructProperty"},
        }};
    };

    struct GameplayCueNotify_BurstLatent
    {
        static constexpr std::string_view Name = "GameplayCueNotify_BurstLatent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSpawnCondition = 0x2C8;
            static constexpr std::uintptr_t DefaultPlacementInfo = 0x300;
            static constexpr std::uintptr_t BurstEffects = 0x340;
            static constexpr std::uintptr_t BurstSpawnResults = 0x5D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultSpawnCondition", 0x2C8, "StructProperty"},
            {"DefaultPlacementInfo", 0x300, "StructProperty"},
            {"BurstEffects", 0x340, "StructProperty"},
            {"BurstSpawnResults", 0x5D8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnBurst",
        }};
    };

    struct GameplayCueNotify_CameraLensEffectInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_CameraLensEffectInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnConditionOverride = 0x0;
            static constexpr std::uintptr_t PlacementInfoOverride = 0x38;
            static constexpr std::uintptr_t CameraLensEffect = 0x78;
            static constexpr std::uintptr_t bOverridePlacementInfo = 0x80;
            static constexpr std::uintptr_t bOverrideSpawnCondition = 0x80;
            static constexpr std::uintptr_t bPlayInWorld = 0x80;
            static constexpr std::uintptr_t WorldInnerRadius = 0x84;
            static constexpr std::uintptr_t WorldOuterRadius = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SpawnConditionOverride", 0x0, "StructProperty"},
            {"PlacementInfoOverride", 0x38, "StructProperty"},
            {"CameraLensEffect", 0x78, "ClassProperty"},
            {"bOverridePlacementInfo", 0x80, "BoolProperty"},
            {"bOverrideSpawnCondition", 0x80, "BoolProperty"},
            {"bPlayInWorld", 0x80, "BoolProperty"},
            {"WorldInnerRadius", 0x84, "FloatProperty"},
            {"WorldOuterRadius", 0x88, "FloatProperty"},
        }};
    };

    struct GameplayCueNotify_CameraShakeInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_CameraShakeInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnConditionOverride = 0x0;
            static constexpr std::uintptr_t PlacementInfoOverride = 0x38;
            static constexpr std::uintptr_t CameraShake = 0x78;
            static constexpr std::uintptr_t ShakeScale = 0x80;
            static constexpr std::uintptr_t Playspace = 0x84;
            static constexpr std::uintptr_t bOverridePlacementInfo = 0x88;
            static constexpr std::uintptr_t bOverrideSpawnCondition = 0x88;
            static constexpr std::uintptr_t bPlayInWorld = 0x88;
            static constexpr std::uintptr_t WorldInnerRadius = 0x8C;
            static constexpr std::uintptr_t WorldOuterRadius = 0x90;
            static constexpr std::uintptr_t WorldFalloffExponent = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SpawnConditionOverride", 0x0, "StructProperty"},
            {"PlacementInfoOverride", 0x38, "StructProperty"},
            {"CameraShake", 0x78, "ClassProperty"},
            {"ShakeScale", 0x80, "FloatProperty"},
            {"Playspace", 0x84, "EnumProperty"},
            {"bOverridePlacementInfo", 0x88, "BoolProperty"},
            {"bOverrideSpawnCondition", 0x88, "BoolProperty"},
            {"bPlayInWorld", 0x88, "BoolProperty"},
            {"WorldInnerRadius", 0x8C, "FloatProperty"},
            {"WorldOuterRadius", 0x90, "FloatProperty"},
            {"WorldFalloffExponent", 0x94, "FloatProperty"},
        }};
    };

    struct GameplayCueNotify_DecalInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_DecalInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnConditionOverride = 0x0;
            static constexpr std::uintptr_t PlacementInfoOverride = 0x38;
            static constexpr std::uintptr_t DecalMaterial = 0x78;
            static constexpr std::uintptr_t DecalSize = 0x80;
            static constexpr std::uintptr_t bOverrideFadeOut = 0x98;
            static constexpr std::uintptr_t bOverridePlacementInfo = 0x98;
            static constexpr std::uintptr_t bOverrideSpawnCondition = 0x98;
            static constexpr std::uintptr_t FadeOutStartDelay = 0x9C;
            static constexpr std::uintptr_t FadeOutDuration = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SpawnConditionOverride", 0x0, "StructProperty"},
            {"PlacementInfoOverride", 0x38, "StructProperty"},
            {"DecalMaterial", 0x78, "ObjectProperty"},
            {"DecalSize", 0x80, "StructProperty"},
            {"bOverrideFadeOut", 0x98, "BoolProperty"},
            {"bOverridePlacementInfo", 0x98, "BoolProperty"},
            {"bOverrideSpawnCondition", 0x98, "BoolProperty"},
            {"FadeOutStartDelay", 0x9C, "FloatProperty"},
            {"FadeOutDuration", 0xA0, "FloatProperty"},
        }};
    };

    struct GameplayCueNotify_ForceFeedbackInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_ForceFeedbackInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnConditionOverride = 0x0;
            static constexpr std::uintptr_t PlacementInfoOverride = 0x38;
            static constexpr std::uintptr_t ForceFeedbackEffect = 0x78;
            static constexpr std::uintptr_t ForceFeedbackTag = 0x80;
            static constexpr std::uintptr_t bIsLooping = 0x84;
            static constexpr std::uintptr_t bOverridePlacementInfo = 0x84;
            static constexpr std::uintptr_t bOverrideSpawnCondition = 0x84;
            static constexpr std::uintptr_t bPlayInWorld = 0x84;
            static constexpr std::uintptr_t WorldIntensity = 0x88;
            static constexpr std::uintptr_t WorldAttenuation = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SpawnConditionOverride", 0x0, "StructProperty"},
            {"PlacementInfoOverride", 0x38, "StructProperty"},
            {"ForceFeedbackEffect", 0x78, "ObjectProperty"},
            {"ForceFeedbackTag", 0x80, "NameProperty"},
            {"bIsLooping", 0x84, "BoolProperty"},
            {"bOverridePlacementInfo", 0x84, "BoolProperty"},
            {"bOverrideSpawnCondition", 0x84, "BoolProperty"},
            {"bPlayInWorld", 0x84, "BoolProperty"},
            {"WorldIntensity", 0x88, "FloatProperty"},
            {"WorldAttenuation", 0x90, "ObjectProperty"},
        }};
    };

    struct GameplayCueNotify_HitImpact
    {
        static constexpr std::string_view Name = "GameplayCueNotify_HitImpact";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Static";
        struct Offsets
        {
            static constexpr std::uintptr_t Sound = 0x38;
            static constexpr std::uintptr_t ParticleSystem = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sound", 0x38, "ObjectProperty"},
            {"ParticleSystem", 0x40, "ObjectProperty"},
        }};
    };

    struct GameplayCueNotify_InputDevicePropertyInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_InputDevicePropertyInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceProperties = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeviceProperties", 0x0, "ArrayProperty"},
        }};
    };

    struct GameplayCueNotify_Looping
    {
        static constexpr std::string_view Name = "GameplayCueNotify_Looping";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSpawnCondition = 0x2C8;
            static constexpr std::uintptr_t DefaultPlacementInfo = 0x300;
            static constexpr std::uintptr_t ApplicationEffects = 0x340;
            static constexpr std::uintptr_t ApplicationSpawnResults = 0x5D8;
            static constexpr std::uintptr_t LoopingEffects = 0x630;
            static constexpr std::uintptr_t LoopingSpawnResults = 0x820;
            static constexpr std::uintptr_t RecurringEffects = 0x878;
            static constexpr std::uintptr_t RecurringSpawnResults = 0xB10;
            static constexpr std::uintptr_t RemovalEffects = 0xB68;
            static constexpr std::uintptr_t RemovalSpawnResults = 0xE00;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DefaultSpawnCondition", 0x2C8, "StructProperty"},
            {"DefaultPlacementInfo", 0x300, "StructProperty"},
            {"ApplicationEffects", 0x340, "StructProperty"},
            {"ApplicationSpawnResults", 0x5D8, "StructProperty"},
            {"LoopingEffects", 0x630, "StructProperty"},
            {"LoopingSpawnResults", 0x820, "StructProperty"},
            {"RecurringEffects", 0x878, "StructProperty"},
            {"RecurringSpawnResults", 0xB10, "StructProperty"},
            {"RemovalEffects", 0xB68, "StructProperty"},
            {"RemovalSpawnResults", 0xE00, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "OnApplication",
            "OnLoopingStart",
            "OnRecurring",
            "OnRemoval",
        }};
    };

    struct GameplayCueNotify_LoopingEffects
    {
        static constexpr std::string_view Name = "GameplayCueNotify_LoopingEffects";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LoopingParticles = 0x0;
            static constexpr std::uintptr_t LoopingSounds = 0x10;
            static constexpr std::uintptr_t LoopingCameraShake = 0x20;
            static constexpr std::uintptr_t LoopingCameraLensEffect = 0xB8;
            static constexpr std::uintptr_t LoopingForceFeedback = 0x148;
            static constexpr std::uintptr_t LoopingInputDevicePropertyEffect = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LoopingParticles", 0x0, "ArrayProperty"},
            {"LoopingSounds", 0x10, "ArrayProperty"},
            {"LoopingCameraShake", 0x20, "StructProperty"},
            {"LoopingCameraLensEffect", 0xB8, "StructProperty"},
            {"LoopingForceFeedback", 0x148, "StructProperty"},
            {"LoopingInputDevicePropertyEffect", 0x1E0, "StructProperty"},
        }};
    };

    struct GameplayCueNotify_ParticleInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_ParticleInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnConditionOverride = 0x0;
            static constexpr std::uintptr_t PlacementInfoOverride = 0x38;
            static constexpr std::uintptr_t NiagaraSystem = 0x78;
            static constexpr std::uintptr_t bCastShadow = 0x80;
            static constexpr std::uintptr_t bOverridePlacementInfo = 0x80;
            static constexpr std::uintptr_t bOverrideSpawnCondition = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SpawnConditionOverride", 0x0, "StructProperty"},
            {"PlacementInfoOverride", 0x38, "StructProperty"},
            {"NiagaraSystem", 0x78, "ObjectProperty"},
            {"bCastShadow", 0x80, "BoolProperty"},
            {"bOverridePlacementInfo", 0x80, "BoolProperty"},
            {"bOverrideSpawnCondition", 0x80, "BoolProperty"},
        }};
    };

    struct GameplayCueNotify_PlacementInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_PlacementInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SocketName = 0x0;
            static constexpr std::uintptr_t AttachPolicy = 0x4;
            static constexpr std::uintptr_t AttachmentRule = 0x5;
            static constexpr std::uintptr_t bOverrideRotation = 0x8;
            static constexpr std::uintptr_t bOverrideScale = 0x8;
            static constexpr std::uintptr_t RotationOverride = 0x10;
            static constexpr std::uintptr_t ScaleOverride = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SocketName", 0x0, "NameProperty"},
            {"AttachPolicy", 0x4, "EnumProperty"},
            {"AttachmentRule", 0x5, "EnumProperty"},
            {"bOverrideRotation", 0x8, "BoolProperty"},
            {"bOverrideScale", 0x8, "BoolProperty"},
            {"RotationOverride", 0x10, "StructProperty"},
            {"ScaleOverride", 0x28, "StructProperty"},
        }};
    };

    struct GameplayCueNotify_SoundInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_SoundInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnConditionOverride = 0x0;
            static constexpr std::uintptr_t PlacementInfoOverride = 0x38;
            static constexpr std::uintptr_t Sound = 0x78;
            static constexpr std::uintptr_t SoundCue = 0x80;
            static constexpr std::uintptr_t LoopingFadeOutDuration = 0x88;
            static constexpr std::uintptr_t LoopingFadeVolumeLevel = 0x8C;
            static constexpr std::uintptr_t SoundParameterInterfaceInfo = 0x90;
            static constexpr std::uintptr_t bOverridePlacementInfo = 0x94;
            static constexpr std::uintptr_t bOverrideSpawnCondition = 0x94;
            static constexpr std::uintptr_t bUseSoundParameterInterface = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"SpawnConditionOverride", 0x0, "StructProperty"},
            {"PlacementInfoOverride", 0x38, "StructProperty"},
            {"Sound", 0x78, "ObjectProperty"},
            {"SoundCue", 0x80, "ObjectProperty"},
            {"LoopingFadeOutDuration", 0x88, "FloatProperty"},
            {"LoopingFadeVolumeLevel", 0x8C, "FloatProperty"},
            {"SoundParameterInterfaceInfo", 0x90, "StructProperty"},
            {"bOverridePlacementInfo", 0x94, "BoolProperty"},
            {"bOverrideSpawnCondition", 0x94, "BoolProperty"},
            {"bUseSoundParameterInterface", 0x94, "BoolProperty"},
        }};
    };

    struct GameplayCueNotify_SoundParameterInterfaceInfo
    {
        static constexpr std::string_view Name = "GameplayCueNotify_SoundParameterInterfaceInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StopTriggerName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StopTriggerName", 0x0, "NameProperty"},
        }};
    };

    struct GameplayCueNotify_SpawnCondition
    {
        static constexpr std::string_view Name = "GameplayCueNotify_SpawnCondition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocallyControlledSource = 0x0;
            static constexpr std::uintptr_t LocallyControlledPolicy = 0x1;
            static constexpr std::uintptr_t ChanceToPlay = 0x4;
            static constexpr std::uintptr_t AllowedSurfaceTypes = 0x8;
            static constexpr std::uintptr_t RejectedSurfaceTypes = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LocallyControlledSource", 0x0, "EnumProperty"},
            {"LocallyControlledPolicy", 0x1, "EnumProperty"},
            {"ChanceToPlay", 0x4, "FloatProperty"},
            {"AllowedSurfaceTypes", 0x8, "ArrayProperty"},
            {"RejectedSurfaceTypes", 0x20, "ArrayProperty"},
        }};
    };

    struct GameplayCueNotify_SpawnResult
    {
        static constexpr std::string_view Name = "GameplayCueNotify_SpawnResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FxSystemComponents = 0x0;
            static constexpr std::uintptr_t AudioComponents = 0x10;
            static constexpr std::uintptr_t CameraShakes = 0x20;
            static constexpr std::uintptr_t CameraLensEffects = 0x30;
            static constexpr std::uintptr_t ForceFeedbackComponent = 0x40;
            static constexpr std::uintptr_t ForceFeedbackTargetPC = 0x48;
            static constexpr std::uintptr_t DecalComponent = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FxSystemComponents", 0x0, "ArrayProperty"},
            {"AudioComponents", 0x10, "ArrayProperty"},
            {"CameraShakes", 0x20, "ArrayProperty"},
            {"CameraLensEffects", 0x30, "ArrayProperty"},
            {"ForceFeedbackComponent", 0x40, "ObjectProperty"},
            {"ForceFeedbackTargetPC", 0x48, "ObjectProperty"},
            {"DecalComponent", 0x50, "ObjectProperty"},
        }};
    };

    struct GameplayCueNotify_Static
    {
        static constexpr std::string_view Name = "GameplayCueNotify_Static";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCueTag = 0x28;
            static constexpr std::uintptr_t GameplayCueName = 0x2C;
            static constexpr std::uintptr_t IsOverride = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameplayCueTag", 0x28, "StructProperty"},
            {"GameplayCueName", 0x2C, "NameProperty"},
            {"IsOverride", 0x30, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "K2_HandleGameplayCue",
            "OnActive",
            "OnExecute",
            "OnRemove",
            "WhileActive",
        }};
    };

    struct GameplayCueNotify_UnitTest
    {
        static constexpr std::string_view Name = "GameplayCueNotify_UnitTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueNotify_Static";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCueTag = 0x28;
            static constexpr std::uintptr_t GameplayCueName = 0x2C;
            static constexpr std::uintptr_t IsOverride = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameplayCueTag", 0x28, "StructProperty"},
            {"GameplayCueName", 0x2C, "NameProperty"},
            {"IsOverride", 0x30, "BoolProperty"},
        }};
    };

    struct GameplayCueObjectLibrary
    {
        static constexpr std::string_view Name = "GameplayCueObjectLibrary";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Paths = 0x0;
            static constexpr std::uintptr_t ActorObjectLibrary = 0x30;
            static constexpr std::uintptr_t StaticObjectLibrary = 0x38;
            static constexpr std::uintptr_t CueSet = 0x40;
            static constexpr std::uintptr_t bShouldSyncScan = 0x4C;
            static constexpr std::uintptr_t bShouldAsyncLoad = 0x4D;
            static constexpr std::uintptr_t bShouldSyncLoad = 0x4E;
            static constexpr std::uintptr_t bHasBeenInitialized = 0x4F;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Paths", 0x0, "ArrayProperty"},
            {"ActorObjectLibrary", 0x30, "ObjectProperty"},
            {"StaticObjectLibrary", 0x38, "ObjectProperty"},
            {"CueSet", 0x40, "ObjectProperty"},
            {"bShouldSyncScan", 0x4C, "BoolProperty"},
            {"bShouldAsyncLoad", 0x4D, "BoolProperty"},
            {"bShouldSyncLoad", 0x4E, "BoolProperty"},
            {"bHasBeenInitialized", 0x4F, "BoolProperty"},
        }};
    };

    struct GameplayCueParameters
    {
        static constexpr std::string_view Name = "GameplayCueParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NormalizedMagnitude = 0x0;
            static constexpr std::uintptr_t RawMagnitude = 0x4;
            static constexpr std::uintptr_t EffectContext = 0x8;
            static constexpr std::uintptr_t MatchedTagName = 0x20;
            static constexpr std::uintptr_t OriginalTag = 0x24;
            static constexpr std::uintptr_t AggregatedSourceTags = 0x28;
            static constexpr std::uintptr_t AggregatedTargetTags = 0x48;
            static constexpr std::uintptr_t Location = 0x68;
            static constexpr std::uintptr_t Normal = 0x80;
            static constexpr std::uintptr_t Instigator = 0x98;
            static constexpr std::uintptr_t EffectCauser = 0xA0;
            static constexpr std::uintptr_t SourceObject = 0xA8;
            static constexpr std::uintptr_t PhysicalMaterial = 0xB0;
            static constexpr std::uintptr_t GameplayEffectLevel = 0xB8;
            static constexpr std::uintptr_t AbilityLevel = 0xBC;
            static constexpr std::uintptr_t TargetAttachComponent = 0xC0;
            static constexpr std::uintptr_t bReplicateLocationWhenUsingMinimalRepProxy = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"NormalizedMagnitude", 0x0, "FloatProperty"},
            {"RawMagnitude", 0x4, "FloatProperty"},
            {"EffectContext", 0x8, "StructProperty"},
            {"MatchedTagName", 0x20, "StructProperty"},
            {"OriginalTag", 0x24, "StructProperty"},
            {"AggregatedSourceTags", 0x28, "StructProperty"},
            {"AggregatedTargetTags", 0x48, "StructProperty"},
            {"Location", 0x68, "StructProperty"},
            {"Normal", 0x80, "StructProperty"},
            {"Instigator", 0x98, "WeakObjectProperty"},
            {"EffectCauser", 0xA0, "WeakObjectProperty"},
            {"SourceObject", 0xA8, "WeakObjectProperty"},
            {"PhysicalMaterial", 0xB0, "WeakObjectProperty"},
            {"GameplayEffectLevel", 0xB8, "IntProperty"},
            {"AbilityLevel", 0xBC, "IntProperty"},
            {"TargetAttachComponent", 0xC0, "WeakObjectProperty"},
            {"bReplicateLocationWhenUsingMinimalRepProxy", 0xC8, "BoolProperty"},
        }};
    };

    struct GameplayCuePendingExecute
    {
        static constexpr std::string_view Name = "GameplayCuePendingExecute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PredictionKey = 0x18;
            static constexpr std::uintptr_t PayLoadType = 0x28;
            static constexpr std::uintptr_t OwningComponent = 0x30;
            static constexpr std::uintptr_t FromSpec = 0x38;
            static constexpr std::uintptr_t CueParameters = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PredictionKey", 0x18, "StructProperty"},
            {"PayLoadType", 0x28, "EnumProperty"},
            {"OwningComponent", 0x30, "ObjectProperty"},
            {"FromSpec", 0x38, "StructProperty"},
            {"CueParameters", 0xB0, "StructProperty"},
        }};
    };

    struct GameplayCueSet
    {
        static constexpr std::string_view Name = "GameplayCueSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCueData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayCueData", 0x28, "ArrayProperty"},
        }};
    };

    struct GameplayCueTag
    {
        static constexpr std::string_view Name = "GameplayCueTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayCueTag = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayCueTag", 0x0, "StructProperty"},
        }};
    };

    struct GameplayCueTranslationLink
    {
        static constexpr std::string_view Name = "GameplayCueTranslationLink";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RulesCDO = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RulesCDO", 0x0, "ObjectProperty"},
        }};
    };

    struct GameplayCueTranslationManager
    {
        static constexpr std::string_view Name = "GameplayCueTranslationManager";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TranslationLUT = 0x0;
            static constexpr std::uintptr_t TranslationNameToIndexMap = 0x10;
            static constexpr std::uintptr_t TagManager = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TranslationLUT", 0x0, "ArrayProperty"},
            {"TranslationNameToIndexMap", 0x10, "MapProperty"},
            {"TagManager", 0x20, "ObjectProperty"},
        }};
    };

    struct GameplayCueTranslator
    {
        static constexpr std::string_view Name = "GameplayCueTranslator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayCueTranslatorNode
    {
        static constexpr std::string_view Name = "GameplayCueTranslatorNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Links = 0x0;
            static constexpr std::uintptr_t CachedIndex = 0x10;
            static constexpr std::uintptr_t CachedGameplayTag = 0x14;
            static constexpr std::uintptr_t CachedGameplayTagName = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Links", 0x0, "ArrayProperty"},
            {"CachedIndex", 0x10, "StructProperty"},
            {"CachedGameplayTag", 0x14, "StructProperty"},
            {"CachedGameplayTagName", 0x18, "NameProperty"},
        }};
    };

    struct GameplayCueTranslatorNodeIndex
    {
        static constexpr std::string_view Name = "GameplayCueTranslatorNodeIndex";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0x0, "IntProperty"},
        }};
    };

    struct GameplayCueTranslator_Test
    {
        static constexpr std::string_view Name = "GameplayCueTranslator_Test";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayCueTranslator";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEffect
    {
        static constexpr std::string_view Name = "GameplayEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DurationPolicy = 0x30;
            static constexpr std::uintptr_t DurationMagnitude = 0x38;
            static constexpr std::uintptr_t MaxDurationMagnitude = 0x210;
            static constexpr std::uintptr_t Period = 0x3E8;
            static constexpr std::uintptr_t bExecutePeriodicEffectOnApplication = 0x410;
            static constexpr std::uintptr_t PeriodicInhibitionPolicy = 0x411;
            static constexpr std::uintptr_t Modifiers = 0x418;
            static constexpr std::uintptr_t Executions = 0x428;
            static constexpr std::uintptr_t ChanceToApplyToTarget = 0x438;
            static constexpr std::uintptr_t ApplicationRequirements = 0x460;
            static constexpr std::uintptr_t ConditionalGameplayEffects = 0x470;
            static constexpr std::uintptr_t OverflowEffects = 0x480;
            static constexpr std::uintptr_t bDenyOverflowApplication = 0x490;
            static constexpr std::uintptr_t bClearStackOnOverflow = 0x491;
            static constexpr std::uintptr_t PrematureExpirationEffectClasses = 0x498;
            static constexpr std::uintptr_t RoutineExpirationEffectClasses = 0x4A8;
            static constexpr std::uintptr_t bRequireModifierSuccessToTriggerCues = 0x4B8;
            static constexpr std::uintptr_t bSuppressStackingCues = 0x4B9;
            static constexpr std::uintptr_t GameplayCues = 0x4C0;
            static constexpr std::uintptr_t UIData = 0x4D0;
            static constexpr std::uintptr_t InheritableGameplayEffectTags = 0x4D8;
            static constexpr std::uintptr_t InheritableOwnedTagsContainer = 0x538;
            static constexpr std::uintptr_t InheritableBlockedAbilityTagsContainer = 0x598;
            static constexpr std::uintptr_t OngoingTagRequirements = 0x5F8;
            static constexpr std::uintptr_t ApplicationTagRequirements = 0x680;
            static constexpr std::uintptr_t RemovalTagRequirements = 0x708;
            static constexpr std::uintptr_t RemoveGameplayEffectsWithTags = 0x790;
            static constexpr std::uintptr_t GrantedApplicationImmunityTags = 0x7F0;
            static constexpr std::uintptr_t GrantedApplicationImmunityQuery = 0x878;
            static constexpr std::uintptr_t RemoveGameplayEffectQuery = 0xA18;
            static constexpr std::uintptr_t StackingType = 0xBB1;
            static constexpr std::uintptr_t StackLimitCount = 0xBB4;
            static constexpr std::uintptr_t StackDurationRefreshPolicy = 0xBB8;
            static constexpr std::uintptr_t StackPeriodResetPolicy = 0xBB9;
            static constexpr std::uintptr_t StackExpirationPolicy = 0xBBA;
            static constexpr std::uintptr_t bFactorInStackCount = 0xBBB;
            static constexpr std::uintptr_t GrantedAbilities = 0xBC0;
            static constexpr std::uintptr_t GEComponents = 0xC30;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"DurationPolicy", 0x30, "EnumProperty"},
            {"DurationMagnitude", 0x38, "StructProperty"},
            {"MaxDurationMagnitude", 0x210, "StructProperty"},
            {"Period", 0x3E8, "StructProperty"},
            {"bExecutePeriodicEffectOnApplication", 0x410, "BoolProperty"},
            {"PeriodicInhibitionPolicy", 0x411, "EnumProperty"},
            {"Modifiers", 0x418, "ArrayProperty"},
            {"Executions", 0x428, "ArrayProperty"},
            {"ChanceToApplyToTarget", 0x438, "StructProperty"},
            {"ApplicationRequirements", 0x460, "ArrayProperty"},
            {"ConditionalGameplayEffects", 0x470, "ArrayProperty"},
            {"OverflowEffects", 0x480, "ArrayProperty"},
            {"bDenyOverflowApplication", 0x490, "BoolProperty"},
            {"bClearStackOnOverflow", 0x491, "BoolProperty"},
            {"PrematureExpirationEffectClasses", 0x498, "ArrayProperty"},
            {"RoutineExpirationEffectClasses", 0x4A8, "ArrayProperty"},
            {"bRequireModifierSuccessToTriggerCues", 0x4B8, "BoolProperty"},
            {"bSuppressStackingCues", 0x4B9, "BoolProperty"},
            {"GameplayCues", 0x4C0, "ArrayProperty"},
            {"UIData", 0x4D0, "ObjectProperty"},
            {"InheritableGameplayEffectTags", 0x4D8, "StructProperty"},
            {"InheritableOwnedTagsContainer", 0x538, "StructProperty"},
            {"InheritableBlockedAbilityTagsContainer", 0x598, "StructProperty"},
            {"OngoingTagRequirements", 0x5F8, "StructProperty"},
            {"ApplicationTagRequirements", 0x680, "StructProperty"},
            {"RemovalTagRequirements", 0x708, "StructProperty"},
            {"RemoveGameplayEffectsWithTags", 0x790, "StructProperty"},
            {"GrantedApplicationImmunityTags", 0x7F0, "StructProperty"},
            {"GrantedApplicationImmunityQuery", 0x878, "StructProperty"},
            {"RemoveGameplayEffectQuery", 0xA18, "StructProperty"},
            {"StackingType", 0xBB1, "EnumProperty"},
            {"StackLimitCount", 0xBB4, "IntProperty"},
            {"StackDurationRefreshPolicy", 0xBB8, "EnumProperty"},
            {"StackPeriodResetPolicy", 0xBB9, "EnumProperty"},
            {"StackExpirationPolicy", 0xBBA, "EnumProperty"},
            {"bFactorInStackCount", 0xBBB, "BoolProperty"},
            {"GrantedAbilities", 0xBC0, "ArrayProperty"},
            {"GEComponents", 0xC30, "ArrayProperty"},
        }};
    };

    struct GameplayEffectAttributeCaptureDefinition
    {
        static constexpr std::string_view Name = "GameplayEffectAttributeCaptureDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeToCapture = 0x0;
            static constexpr std::uintptr_t AttributeSource = 0x38;
            static constexpr std::uintptr_t bSnapshot = 0x39;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AttributeToCapture", 0x0, "StructProperty"},
            {"AttributeSource", 0x38, "EnumProperty"},
            {"bSnapshot", 0x39, "BoolProperty"},
        }};
    };

    struct GameplayEffectAttributeCaptureSpec
    {
        static constexpr std::string_view Name = "GameplayEffectAttributeCaptureSpec";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BackingDefinition = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BackingDefinition", 0x0, "StructProperty"},
        }};
    };

    struct GameplayEffectAttributeCaptureSpecContainer
    {
        static constexpr std::string_view Name = "GameplayEffectAttributeCaptureSpecContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceAttributes = 0x0;
            static constexpr std::uintptr_t TargetAttributes = 0x10;
            static constexpr std::uintptr_t bHasNonSnapshottedAttributes = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceAttributes", 0x0, "ArrayProperty"},
            {"TargetAttributes", 0x10, "ArrayProperty"},
            {"bHasNonSnapshottedAttributes", 0x20, "BoolProperty"},
        }};
    };

    struct GameplayEffectCalculation
    {
        static constexpr std::string_view Name = "GameplayEffectCalculation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RelevantAttributesToCapture = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RelevantAttributesToCapture", 0x28, "ArrayProperty"},
        }};
    };

    struct GameplayEffectComponent
    {
        static constexpr std::string_view Name = "GameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEffectContext
    {
        static constexpr std::string_view Name = "GameplayEffectContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Instigator = 0x8;
            static constexpr std::uintptr_t EffectCauser = 0x10;
            static constexpr std::uintptr_t AbilityCDO = 0x18;
            static constexpr std::uintptr_t AbilityInstanceNotReplicated = 0x20;
            static constexpr std::uintptr_t AbilityLevel = 0x28;
            static constexpr std::uintptr_t SourceObject = 0x2C;
            static constexpr std::uintptr_t InstigatorAbilitySystemComponent = 0x34;
            static constexpr std::uintptr_t Actors = 0x40;
            static constexpr std::uintptr_t WorldOrigin = 0x60;
            static constexpr std::uintptr_t bHasWorldOrigin = 0x78;
            static constexpr std::uintptr_t bReplicateEffectCauser = 0x78;
            static constexpr std::uintptr_t bReplicateInstigator = 0x78;
            static constexpr std::uintptr_t bReplicateSourceObject = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"Instigator", 0x8, "WeakObjectProperty"},
            {"EffectCauser", 0x10, "WeakObjectProperty"},
            {"AbilityCDO", 0x18, "WeakObjectProperty"},
            {"AbilityInstanceNotReplicated", 0x20, "WeakObjectProperty"},
            {"AbilityLevel", 0x28, "IntProperty"},
            {"SourceObject", 0x2C, "WeakObjectProperty"},
            {"InstigatorAbilitySystemComponent", 0x34, "WeakObjectProperty"},
            {"Actors", 0x40, "ArrayProperty"},
            {"WorldOrigin", 0x60, "StructProperty"},
            {"bHasWorldOrigin", 0x78, "BoolProperty"},
            {"bReplicateEffectCauser", 0x78, "BoolProperty"},
            {"bReplicateInstigator", 0x78, "BoolProperty"},
            {"bReplicateSourceObject", 0x78, "BoolProperty"},
        }};
    };

    struct GameplayEffectContextHandle
    {
        static constexpr std::string_view Name = "GameplayEffectContextHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEffectContextHandleNetSerializerConfig
    {
        static constexpr std::string_view Name = "GameplayEffectContextHandleNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PolymorphicStructNetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEffectContextNetSerializerConfig
    {
        static constexpr std::string_view Name = "GameplayEffectContextNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEffectCue
    {
        static constexpr std::string_view Name = "GameplayEffectCue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MagnitudeAttribute = 0x0;
            static constexpr std::uintptr_t MinLevel = 0x38;
            static constexpr std::uintptr_t MaxLevel = 0x3C;
            static constexpr std::uintptr_t GameplayCueTags = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MagnitudeAttribute", 0x0, "StructProperty"},
            {"MinLevel", 0x38, "FloatProperty"},
            {"MaxLevel", 0x3C, "FloatProperty"},
            {"GameplayCueTags", 0x40, "StructProperty"},
        }};
    };

    struct GameplayEffectCustomApplicationRequirement
    {
        static constexpr std::string_view Name = "GameplayEffectCustomApplicationRequirement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CanApplyGameplayEffect",
        }};
    };

    struct GameplayEffectCustomExecutionOutput
    {
        static constexpr std::string_view Name = "GameplayEffectCustomExecutionOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OutputModifiers = 0x0;
            static constexpr std::uintptr_t bHandledGameplayCuesManually = 0x10;
            static constexpr std::uintptr_t bHandledStackCountManually = 0x10;
            static constexpr std::uintptr_t bTriggerConditionalGameplayEffects = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OutputModifiers", 0x0, "ArrayProperty"},
            {"bHandledGameplayCuesManually", 0x10, "BoolProperty"},
            {"bHandledStackCountManually", 0x10, "BoolProperty"},
            {"bTriggerConditionalGameplayEffects", 0x10, "BoolProperty"},
        }};
    };

    struct GameplayEffectCustomExecutionParameters
    {
        static constexpr std::string_view Name = "GameplayEffectCustomExecutionParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEffectExecutionCalculation
    {
        static constexpr std::string_view Name = "GameplayEffectExecutionCalculation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectCalculation";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresPassedInTags = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRequiresPassedInTags", 0x38, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Execute",
        }};
    };

    struct GameplayEffectExecutionDefinition
    {
        static constexpr std::string_view Name = "GameplayEffectExecutionDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CalculationClass = 0x0;
            static constexpr std::uintptr_t PassedInTags = 0x8;
            static constexpr std::uintptr_t CalculationModifiers = 0x28;
            static constexpr std::uintptr_t ConditionalGameplayEffects = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CalculationClass", 0x0, "ClassProperty"},
            {"PassedInTags", 0x8, "StructProperty"},
            {"CalculationModifiers", 0x28, "ArrayProperty"},
            {"ConditionalGameplayEffects", 0x38, "ArrayProperty"},
        }};
    };

    struct GameplayEffectExecutionScopedModifierInfo
    {
        static constexpr std::string_view Name = "GameplayEffectExecutionScopedModifierInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CapturedAttribute = 0x0;
            static constexpr std::uintptr_t TransientAggregatorIdentifier = 0x40;
            static constexpr std::uintptr_t AggregatorType = 0x44;
            static constexpr std::uintptr_t ModifierOp = 0x45;
            static constexpr std::uintptr_t ModifierMagnitude = 0x48;
            static constexpr std::uintptr_t EvaluationChannelSettings = 0x220;
            static constexpr std::uintptr_t SourceTags = 0x228;
            static constexpr std::uintptr_t TargetTags = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CapturedAttribute", 0x0, "StructProperty"},
            {"TransientAggregatorIdentifier", 0x40, "StructProperty"},
            {"AggregatorType", 0x44, "EnumProperty"},
            {"ModifierOp", 0x45, "ByteProperty"},
            {"ModifierMagnitude", 0x48, "StructProperty"},
            {"EvaluationChannelSettings", 0x220, "StructProperty"},
            {"SourceTags", 0x228, "StructProperty"},
            {"TargetTags", 0x2B0, "StructProperty"},
        }};
    };

    struct GameplayEffectModifiedAttribute
    {
        static constexpr std::string_view Name = "GameplayEffectModifiedAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Attribute = 0x0;
            static constexpr std::uintptr_t TotalMagnitude = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Attribute", 0x0, "StructProperty"},
            {"TotalMagnitude", 0x38, "FloatProperty"},
        }};
    };

    struct GameplayEffectModifierMagnitude
    {
        static constexpr std::string_view Name = "GameplayEffectModifierMagnitude";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MagnitudeCalculationType = 0x0;
            static constexpr std::uintptr_t ScalableFloatMagnitude = 0x8;
            static constexpr std::uintptr_t AttributeBasedMagnitude = 0x30;
            static constexpr std::uintptr_t CustomMagnitude = 0x140;
            static constexpr std::uintptr_t SetByCallerMagnitude = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MagnitudeCalculationType", 0x0, "EnumProperty"},
            {"ScalableFloatMagnitude", 0x8, "StructProperty"},
            {"AttributeBasedMagnitude", 0x30, "StructProperty"},
            {"CustomMagnitude", 0x140, "StructProperty"},
            {"SetByCallerMagnitude", 0x1D0, "StructProperty"},
        }};
    };

    struct GameplayEffectQuery
    {
        static constexpr std::string_view Name = "GameplayEffectQuery";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomMatchDelegate_BP = 0x10;
            static constexpr std::uintptr_t OwningTagQuery = 0x20;
            static constexpr std::uintptr_t EffectTagQuery = 0x68;
            static constexpr std::uintptr_t SourceTagQuery = 0xB0;
            static constexpr std::uintptr_t SourceAggregateTagQuery = 0xF8;
            static constexpr std::uintptr_t ModifyingAttribute = 0x140;
            static constexpr std::uintptr_t EffectSource = 0x178;
            static constexpr std::uintptr_t EffectDefinition = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CustomMatchDelegate_BP", 0x10, "DelegateProperty"},
            {"OwningTagQuery", 0x20, "StructProperty"},
            {"EffectTagQuery", 0x68, "StructProperty"},
            {"SourceTagQuery", 0xB0, "StructProperty"},
            {"SourceAggregateTagQuery", 0xF8, "StructProperty"},
            {"ModifyingAttribute", 0x140, "StructProperty"},
            {"EffectSource", 0x178, "ObjectProperty"},
            {"EffectDefinition", 0x180, "ClassProperty"},
        }};
    };

    struct GameplayEffectRemovalInfo
    {
        static constexpr std::string_view Name = "GameplayEffectRemovalInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bPrematureRemoval = 0x0;
            static constexpr std::uintptr_t bPredictionRejected = 0x1;
            static constexpr std::uintptr_t StackCount = 0x4;
            static constexpr std::uintptr_t EffectContext = 0x8;
            static constexpr std::uintptr_t OwningASC = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bPrematureRemoval", 0x0, "BoolProperty"},
            {"bPredictionRejected", 0x1, "BoolProperty"},
            {"StackCount", 0x4, "IntProperty"},
            {"EffectContext", 0x8, "StructProperty"},
            {"OwningASC", 0x20, "ObjectProperty"},
        }};
    };

    struct GameplayEffectSpec
    {
        static constexpr std::string_view Name = "GameplayEffectSpec";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Def = 0x0;
            static constexpr std::uintptr_t ModifiedAttributes = 0x8;
            static constexpr std::uintptr_t CapturedRelevantAttributes = 0x18;
            static constexpr std::uintptr_t duration = 0x50;
            static constexpr std::uintptr_t Period = 0x54;
            static constexpr std::uintptr_t CapturedSourceTags = 0x58;
            static constexpr std::uintptr_t CapturedTargetTags = 0xC0;
            static constexpr std::uintptr_t DynamicGrantedTags = 0x128;
            static constexpr std::uintptr_t DynamicAssetTags = 0x148;
            static constexpr std::uintptr_t Modifiers = 0x168;
            static constexpr std::uintptr_t StackCount = 0x178;
            static constexpr std::uintptr_t bCompletedSourceAttributeCapture = 0x17C;
            static constexpr std::uintptr_t bCompletedTargetAttributeCapture = 0x17C;
            static constexpr std::uintptr_t bDurationLocked = 0x17C;
            static constexpr std::uintptr_t GrantedAbilitySpecs = 0x180;
            static constexpr std::uintptr_t EffectContext = 0x1B0;
            static constexpr std::uintptr_t Level = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"Def", 0x0, "ObjectProperty"},
            {"ModifiedAttributes", 0x8, "ArrayProperty"},
            {"CapturedRelevantAttributes", 0x18, "StructProperty"},
            {"duration", 0x50, "FloatProperty"},
            {"Period", 0x54, "FloatProperty"},
            {"CapturedSourceTags", 0x58, "StructProperty"},
            {"CapturedTargetTags", 0xC0, "StructProperty"},
            {"DynamicGrantedTags", 0x128, "StructProperty"},
            {"DynamicAssetTags", 0x148, "StructProperty"},
            {"Modifiers", 0x168, "ArrayProperty"},
            {"StackCount", 0x178, "IntProperty"},
            {"bCompletedSourceAttributeCapture", 0x17C, "BoolProperty"},
            {"bCompletedTargetAttributeCapture", 0x17C, "BoolProperty"},
            {"bDurationLocked", 0x17C, "BoolProperty"},
            {"GrantedAbilitySpecs", 0x180, "ArrayProperty"},
            {"EffectContext", 0x1B0, "StructProperty"},
            {"Level", 0x1C8, "FloatProperty"},
        }};
    };

    struct GameplayEffectSpecForRPC
    {
        static constexpr std::string_view Name = "GameplayEffectSpecForRPC";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Def = 0x0;
            static constexpr std::uintptr_t ModifiedAttributes = 0x8;
            static constexpr std::uintptr_t EffectContext = 0x18;
            static constexpr std::uintptr_t AggregatedSourceTags = 0x30;
            static constexpr std::uintptr_t AggregatedTargetTags = 0x50;
            static constexpr std::uintptr_t Level = 0x70;
            static constexpr std::uintptr_t AbilityLevel = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Def", 0x0, "ObjectProperty"},
            {"ModifiedAttributes", 0x8, "ArrayProperty"},
            {"EffectContext", 0x18, "StructProperty"},
            {"AggregatedSourceTags", 0x30, "StructProperty"},
            {"AggregatedTargetTags", 0x50, "StructProperty"},
            {"Level", 0x70, "FloatProperty"},
            {"AbilityLevel", 0x74, "FloatProperty"},
        }};
    };

    struct GameplayEffectSpecHandle
    {
        static constexpr std::string_view Name = "GameplayEffectSpecHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEffectUIData
    {
        static constexpr std::string_view Name = "GameplayEffectUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEffectUIData_TextOnly
    {
        static constexpr std::string_view Name = "GameplayEffectUIData_TextOnly";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectUIData";
        struct Offsets
        {
            static constexpr std::uintptr_t Description = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Description", 0x28, "TextProperty"},
        }};
    };

    struct GameplayEffectVersion
    {
        static constexpr std::string_view Name = "GameplayEffectVersion";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEventData
    {
        static constexpr std::string_view Name = "GameplayEventData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventTag = 0x0;
            static constexpr std::uintptr_t Instigator = 0x8;
            static constexpr std::uintptr_t Target = 0x10;
            static constexpr std::uintptr_t OptionalObject = 0x18;
            static constexpr std::uintptr_t OptionalObject2 = 0x20;
            static constexpr std::uintptr_t ContextHandle = 0x28;
            static constexpr std::uintptr_t InstigatorTags = 0x40;
            static constexpr std::uintptr_t TargetTags = 0x60;
            static constexpr std::uintptr_t EventMagnitude = 0x80;
            static constexpr std::uintptr_t TargetData = 0x88;
            static constexpr std::uintptr_t InstancedEventData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"EventTag", 0x0, "StructProperty"},
            {"Instigator", 0x8, "ObjectProperty"},
            {"Target", 0x10, "ObjectProperty"},
            {"OptionalObject", 0x18, "ObjectProperty"},
            {"OptionalObject2", 0x20, "ObjectProperty"},
            {"ContextHandle", 0x28, "StructProperty"},
            {"InstigatorTags", 0x40, "StructProperty"},
            {"TargetTags", 0x60, "StructProperty"},
            {"EventMagnitude", 0x80, "FloatProperty"},
            {"TargetData", 0x88, "StructProperty"},
            {"InstancedEventData", 0xB0, "StructProperty"},
        }};
    };

    struct GameplayModEvaluationChannelSettings
    {
        static constexpr std::string_view Name = "GameplayModEvaluationChannelSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Channel = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Channel", 0x0, "EnumProperty"},
        }};
    };

    struct GameplayModMagnitudeCalculation
    {
        static constexpr std::string_view Name = "GameplayModMagnitudeCalculation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectCalculation";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowNonNetAuthorityDependencyRegistration = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAllowNonNetAuthorityDependencyRegistration", 0x38, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "CalculateBaseMagnitude",
            "GetSetByCallerMagnitudeByName",
            "GetSetByCallerMagnitudeByTag",
            "GetSourceActorTags",
            "GetSourceAggregatedTags",
            "GetSourceSpecTags",
            "GetTargetActorTags",
            "GetTargetAggregatedTags",
            "GetTargetSpecTags",
            "K2_GetCapturedAttributeMagnitude",
        }};
    };

    struct GameplayModifierEvaluatedData
    {
        static constexpr std::string_view Name = "GameplayModifierEvaluatedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Attribute = 0x0;
            static constexpr std::uintptr_t ModifierOp = 0x38;
            static constexpr std::uintptr_t Magnitude = 0x3C;
            static constexpr std::uintptr_t Handle = 0x40;
            static constexpr std::uintptr_t IsValid = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Attribute", 0x0, "StructProperty"},
            {"ModifierOp", 0x38, "ByteProperty"},
            {"Magnitude", 0x3C, "FloatProperty"},
            {"Handle", 0x40, "StructProperty"},
            {"IsValid", 0x54, "BoolProperty"},
        }};
    };

    struct GameplayModifierInfo
    {
        static constexpr std::string_view Name = "GameplayModifierInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Attribute = 0x0;
            static constexpr std::uintptr_t ModifierOp = 0x38;
            static constexpr std::uintptr_t ModifierMagnitude = 0x40;
            static constexpr std::uintptr_t EvaluationChannelSettings = 0x218;
            static constexpr std::uintptr_t SourceTags = 0x220;
            static constexpr std::uintptr_t TargetTags = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Attribute", 0x0, "StructProperty"},
            {"ModifierOp", 0x38, "ByteProperty"},
            {"ModifierMagnitude", 0x40, "StructProperty"},
            {"EvaluationChannelSettings", 0x218, "StructProperty"},
            {"SourceTags", 0x220, "StructProperty"},
            {"TargetTags", 0x2A8, "StructProperty"},
        }};
    };

    struct GameplayTagBlueprintPropertyMap
    {
        static constexpr std::string_view Name = "GameplayTagBlueprintPropertyMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyMappings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyMappings", 0x10, "ArrayProperty"},
        }};
    };

    struct GameplayTagBlueprintPropertyMapping
    {
        static constexpr std::string_view Name = "GameplayTagBlueprintPropertyMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TagToMap = 0x0;
            static constexpr std::uintptr_t PropertyToEdit = 0x8;
            static constexpr std::uintptr_t PropertyName = 0x28;
            static constexpr std::uintptr_t PropertyGuid = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TagToMap", 0x0, "StructProperty"},
            {"PropertyToEdit", 0x8, "FieldPathProperty"},
            {"PropertyName", 0x28, "NameProperty"},
            {"PropertyGuid", 0x2C, "StructProperty"},
        }};
    };

    struct GameplayTagChangedEventWrapperSpecHandle
    {
        static constexpr std::string_view Name = "GameplayTagChangedEventWrapperSpecHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayTagCountContainer
    {
        static constexpr std::string_view Name = "GameplayTagCountContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x68, "ObjectProperty"},
        }};
    };

    struct GameplayTagCountContainerNetSerializerConfig
    {
        static constexpr std::string_view Name = "GameplayTagCountContainerNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayTagCountItem
    {
        static constexpr std::string_view Name = "GameplayTagCountItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x0;
            static constexpr std::uintptr_t Count = 0x4;
            static constexpr std::uintptr_t ReplicationState = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tag", 0x0, "StructProperty"},
            {"Count", 0x4, "IntProperty"},
            {"ReplicationState", 0x8, "EnumProperty"},
        }};
    };

    struct GameplayTagReponsePair
    {
        static constexpr std::string_view Name = "GameplayTagReponsePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x0;
            static constexpr std::uintptr_t ResponseGameplayEffect = 0x8;
            static constexpr std::uintptr_t ResponseGameplayEffects = 0x10;
            static constexpr std::uintptr_t SoftCountCap = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Tag", 0x0, "StructProperty"},
            {"ResponseGameplayEffect", 0x8, "ClassProperty"},
            {"ResponseGameplayEffects", 0x10, "ArrayProperty"},
            {"SoftCountCap", 0x20, "IntProperty"},
        }};
    };

    struct GameplayTagReponseTable
    {
        static constexpr std::string_view Name = "GameplayTagReponseTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x28, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "TagResponseEvent",
        }};
    };

    struct GameplayTagRequirements
    {
        static constexpr std::string_view Name = "GameplayTagRequirements";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequireTags = 0x0;
            static constexpr std::uintptr_t IgnoreTags = 0x20;
            static constexpr std::uintptr_t TagQuery = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RequireTags", 0x0, "StructProperty"},
            {"IgnoreTags", 0x20, "StructProperty"},
            {"TagQuery", 0x40, "StructProperty"},
        }};
    };

    struct GameplayTagResponseTableEntry
    {
        static constexpr std::string_view Name = "GameplayTagResponseTableEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Positive = 0x0;
            static constexpr std::uintptr_t Negative = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Positive", 0x0, "StructProperty"},
            {"Negative", 0x28, "StructProperty"},
        }};
    };

    struct GameplayTargetDataFilter
    {
        static constexpr std::string_view Name = "GameplayTargetDataFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SelfActor = 0x8;
            static constexpr std::uintptr_t RequiredActorClass = 0x10;
            static constexpr std::uintptr_t SelfFilter = 0x18;
            static constexpr std::uintptr_t bReverseFilter = 0x19;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SelfActor", 0x8, "ObjectProperty"},
            {"RequiredActorClass", 0x10, "ClassProperty"},
            {"SelfFilter", 0x18, "ByteProperty"},
            {"bReverseFilter", 0x19, "BoolProperty"},
        }};
    };

    struct GameplayTargetDataFilterHandle
    {
        static constexpr std::string_view Name = "GameplayTargetDataFilterHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ImmunityGameplayEffectComponent
    {
        static constexpr std::string_view Name = "ImmunityGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ImmunityQueries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ImmunityQueries", 0x28, "ArrayProperty"},
        }};
    };

    struct InheritedTagContainer
    {
        static constexpr std::string_view Name = "InheritedTagContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CombinedTags = 0x0;
            static constexpr std::uintptr_t Added = 0x20;
            static constexpr std::uintptr_t Removed = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CombinedTags", 0x0, "StructProperty"},
            {"Added", 0x20, "StructProperty"},
            {"Removed", 0x40, "StructProperty"},
        }};
    };

    struct MinimalGameplayCueReplicationProxy
    {
        static constexpr std::string_view Name = "MinimalGameplayCueReplicationProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x2B0, "ObjectProperty"},
        }};
    };

    struct MinimalGameplayCueReplicationProxyForNetSerializer
    {
        static constexpr std::string_view Name = "MinimalGameplayCueReplicationProxyForNetSerializer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x0;
            static constexpr std::uintptr_t Locations = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tags", 0x0, "ArrayProperty"},
            {"Locations", 0x10, "ArrayProperty"},
        }};
    };

    struct MinimalGameplayCueReplicationProxyNetSerializerConfig
    {
        static constexpr std::string_view Name = "MinimalGameplayCueReplicationProxyNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MinimalReplicationTagCountMap
    {
        static constexpr std::string_view Name = "MinimalReplicationTagCountMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x10, "ObjectProperty"},
        }};
    };

    struct MinimalReplicationTagCountMapForNetSerializer
    {
        static constexpr std::string_view Name = "MinimalReplicationTagCountMapForNetSerializer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x0, "ArrayProperty"},
        }};
    };

    struct MinimalReplicationTagCountMapNetSerializerConfig
    {
        static constexpr std::string_view Name = "MinimalReplicationTagCountMapNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ModifierSpec
    {
        static constexpr std::string_view Name = "ModifierSpec";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluatedMagnitude = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EvaluatedMagnitude", 0x0, "FloatProperty"},
        }};
    };

    struct MovieSceneGameplayCueChannel
    {
        static constexpr std::string_view Name = "MovieSceneGameplayCueChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyTimes = 0x50;
            static constexpr std::uintptr_t KeyValues = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"KeyTimes", 0x50, "ArrayProperty"},
            {"KeyValues", 0x60, "ArrayProperty"},
        }};
    };

    struct MovieSceneGameplayCueKey
    {
        static constexpr std::string_view Name = "MovieSceneGameplayCueKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Cue = 0x0;
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t Normal = 0x20;
            static constexpr std::uintptr_t AttachSocketName = 0x38;
            static constexpr std::uintptr_t NormalizedMagnitude = 0x3C;
            static constexpr std::uintptr_t Instigator = 0x40;
            static constexpr std::uintptr_t EffectCauser = 0x58;
            static constexpr std::uintptr_t PhysicalMaterial = 0x70;
            static constexpr std::uintptr_t GameplayEffectLevel = 0x78;
            static constexpr std::uintptr_t AbilityLevel = 0x7C;
            static constexpr std::uintptr_t bAttachToBinding = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Cue", 0x0, "StructProperty"},
            {"Location", 0x8, "StructProperty"},
            {"Normal", 0x20, "StructProperty"},
            {"AttachSocketName", 0x38, "NameProperty"},
            {"NormalizedMagnitude", 0x3C, "FloatProperty"},
            {"Instigator", 0x40, "StructProperty"},
            {"EffectCauser", 0x58, "StructProperty"},
            {"PhysicalMaterial", 0x70, "ObjectProperty"},
            {"GameplayEffectLevel", 0x78, "IntProperty"},
            {"AbilityLevel", 0x7C, "IntProperty"},
            {"bAttachToBinding", 0x80, "BoolProperty"},
        }};
    };

    struct MovieSceneGameplayCueSection
    {
        static constexpr std::string_view Name = "MovieSceneGameplayCueSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneHookSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Cue = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Cue", 0x158, "StructProperty"},
        }};
    };

    struct MovieSceneGameplayCueTrack
    {
        static constexpr std::string_view Name = "MovieSceneGameplayCueTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSequencerTrackHandler",
        }};
    };

    struct MovieSceneGameplayCueTriggerSection
    {
        static constexpr std::string_view Name = "MovieSceneGameplayCueTriggerSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneHookSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Channel = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Channel", 0x158, "StructProperty"},
        }};
    };

    struct NetGameplayTagCountContainerStateForNetSerialize
    {
        static constexpr std::string_view Name = "NetGameplayTagCountContainerStateForNetSerialize";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TagStates = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagStates", 0x0, "ArrayProperty"},
        }};
    };

    struct NetSerializeScriptStructCache
    {
        static constexpr std::string_view Name = "NetSerializeScriptStructCache";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ScriptStructs = 0x0;
            static constexpr std::uintptr_t BaseStructType = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScriptStructs", 0x0, "ArrayProperty"},
            {"BaseStructType", 0x10, "ObjectProperty"},
        }};
    };

    struct PreallocationInfo
    {
        static constexpr std::string_view Name = "PreallocationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreallocatedInstances = 0x0;
            static constexpr std::uintptr_t ClassesNeedingPreallocation = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreallocatedInstances", 0x0, "MapProperty"},
            {"ClassesNeedingPreallocation", 0x10, "ArrayProperty"},
        }};
    };

    struct PredictionKey
    {
        static constexpr std::string_view Name = "PredictionKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Current = 0x0;
            static constexpr std::uintptr_t base = 0x2;
            static constexpr std::uintptr_t bIsServerInitiated = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Current", 0x0, "Int16Property"},
            {"base", 0x2, "Int16Property"},
            {"bIsServerInitiated", 0x4, "BoolProperty"},
        }};
    };

    struct PredictionKeyNetSerializerConfig
    {
        static constexpr std::string_view Name = "PredictionKeyNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RemoveOtherGameplayEffectComponent
    {
        static constexpr std::string_view Name = "RemoveOtherGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RemoveGameplayEffectQueries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RemoveGameplayEffectQueries", 0x28, "ArrayProperty"},
        }};
    };

    struct ReplicatedPredictionKeyItem
    {
        static constexpr std::string_view Name = "ReplicatedPredictionKeyItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t PredictionKey = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PredictionKey", 0xC, "StructProperty"},
        }};
    };

    struct ReplicatedPredictionKeyMap
    {
        static constexpr std::string_view Name = "ReplicatedPredictionKeyMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t PredictionKeys = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PredictionKeys", 0x48, "ArrayProperty"},
        }};
    };

    struct ScalableFloat
    {
        static constexpr std::string_view Name = "ScalableFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
            static constexpr std::uintptr_t Curve = 0x8;
            static constexpr std::uintptr_t RegistryType = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Value", 0x0, "FloatProperty"},
            {"Curve", 0x8, "StructProperty"},
            {"RegistryType", 0x18, "StructProperty"},
        }};
    };

    struct ServerAbilityRPCBatch
    {
        static constexpr std::string_view Name = "ServerAbilityRPCBatch";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySpecHandle = 0x0;
            static constexpr std::uintptr_t PredictionKey = 0x18;
            static constexpr std::uintptr_t TargetData = 0x28;
            static constexpr std::uintptr_t InputPressed = 0x50;
            static constexpr std::uintptr_t Ended = 0x51;
            static constexpr std::uintptr_t Started = 0x52;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AbilitySpecHandle", 0x0, "StructProperty"},
            {"PredictionKey", 0x18, "StructProperty"},
            {"TargetData", 0x28, "StructProperty"},
            {"InputPressed", 0x50, "BoolProperty"},
            {"Ended", 0x51, "BoolProperty"},
            {"Started", 0x52, "BoolProperty"},
        }};
    };

    struct SetByCallerFloat
    {
        static constexpr std::string_view Name = "SetByCallerFloat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataName = 0x0;
            static constexpr std::uintptr_t DataTag = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataName", 0x0, "NameProperty"},
            {"DataTag", 0x4, "StructProperty"},
        }};
    };

    struct TagContainerAggregator
    {
        static constexpr std::string_view Name = "TagContainerAggregator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CapturedActorTags = 0x0;
            static constexpr std::uintptr_t CapturedSpecTags = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CapturedActorTags", 0x0, "StructProperty"},
            {"CapturedSpecTags", 0x20, "StructProperty"},
        }};
    };

    struct TargetTagRequirementsGameplayEffectComponent
    {
        static constexpr std::string_view Name = "TargetTagRequirementsGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ApplicationTagRequirements = 0x28;
            static constexpr std::uintptr_t OngoingTagRequirements = 0xB0;
            static constexpr std::uintptr_t RemovalTagRequirements = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ApplicationTagRequirements", 0x28, "StructProperty"},
            {"OngoingTagRequirements", 0xB0, "StructProperty"},
            {"RemovalTagRequirements", 0x138, "StructProperty"},
        }};
    };

    struct TargetTagsGameplayEffectComponent
    {
        static constexpr std::string_view Name = "TargetTagsGameplayEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayEffectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InheritableGrantedTagsContainer = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InheritableGrantedTagsContainer", 0x28, "StructProperty"},
        }};
    };

    struct TickableAttributeSetInterface
    {
        static constexpr std::string_view Name = "TickableAttributeSetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WorldReticleParameters
    {
        static constexpr std::string_view Name = "WorldReticleParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AOEScale = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AOEScale", 0x0, "StructProperty"},
        }};
    };

}
