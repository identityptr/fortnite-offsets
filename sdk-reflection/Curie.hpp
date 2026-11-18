#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Curie
{
    struct CurieComponent
    {
        static constexpr std::string_view Name = "CurieComponent";
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

    struct CurieContainerHandle
    {
        static constexpr std::string_view Name = "CurieContainerHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CurieEffectContainer
    {
        static constexpr std::string_view Name = "CurieEffectContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetFilter = 0x0;
            static constexpr std::uintptr_t GameplayEffect = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetFilter", 0x0, "StructProperty"},
            {"GameplayEffect", 0x48, "ClassProperty"},
        }};
    };

    struct CurieElementAllocationHandler
    {
        static constexpr std::string_view Name = "CurieElementAllocationHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CurieElementAttachConditionHandler
    {
        static constexpr std::string_view Name = "CurieElementAttachConditionHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HandlerPriority = 0x28;
            static constexpr std::uintptr_t ElementTag = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"HandlerPriority", 0x28, "EnumProperty"},
            {"ElementTag", 0x2C, "StructProperty"},
        }};
    };

    struct CurieElementAttachConditionHandlersContainer
    {
        static constexpr std::string_view Name = "CurieElementAttachConditionHandlersContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Handlers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handlers", 0x0, "ArrayProperty"},
        }};
    };

    struct CurieElementAttachHandler
    {
        static constexpr std::string_view Name = "CurieElementAttachHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CurieElementGameplayEffectOwner";
        struct Offsets
        {
            static constexpr std::uintptr_t HandlerPriority = 0x28;
            static constexpr std::uintptr_t HandlerBehavior = 0x29;
            static constexpr std::uintptr_t ElementTag = 0x2C;
            static constexpr std::uintptr_t OnBeginAttachmentEffects = 0x30;
            static constexpr std::uintptr_t OngoingAttachmentEffects = 0x40;
            static constexpr std::uintptr_t OnEndAttachmentEffects = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HandlerPriority", 0x28, "EnumProperty"},
            {"HandlerBehavior", 0x29, "EnumProperty"},
            {"ElementTag", 0x2C, "StructProperty"},
            {"OnBeginAttachmentEffects", 0x30, "ArrayProperty"},
            {"OngoingAttachmentEffects", 0x40, "ArrayProperty"},
            {"OnEndAttachmentEffects", 0x50, "ArrayProperty"},
        }};
    };

    struct CurieElementAttachHandlersContainer
    {
        static constexpr std::string_view Name = "CurieElementAttachHandlersContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Handlers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handlers", 0x0, "ArrayProperty"},
        }};
    };

    struct CurieElementDefinitionBase
    {
        static constexpr std::string_view Name = "CurieElementDefinitionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementAllocationHandler = 0x8;
            static constexpr std::uintptr_t ElementAttachHandlers = 0x10;
            static constexpr std::uintptr_t ElementAttachConditionHandler = 0x20;
            static constexpr std::uintptr_t ElementInteractHandlers = 0x28;
            static constexpr std::uintptr_t ElementMaterialInteractHandlers = 0x38;
            static constexpr std::uintptr_t ElementContainerInteractHandlers = 0x48;
            static constexpr std::uintptr_t ElementalImmunities = 0x58;
            static constexpr std::uintptr_t bIsEnabled = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ElementAllocationHandler", 0x8, "ClassProperty"},
            {"ElementAttachHandlers", 0x10, "ArrayProperty"},
            {"ElementAttachConditionHandler", 0x20, "ClassProperty"},
            {"ElementInteractHandlers", 0x28, "ArrayProperty"},
            {"ElementMaterialInteractHandlers", 0x38, "ArrayProperty"},
            {"ElementContainerInteractHandlers", 0x48, "ArrayProperty"},
            {"ElementalImmunities", 0x58, "StructProperty"},
            {"bIsEnabled", 0x78, "BoolProperty"},
        }};
    };

    struct CurieElementGameplayEffectOwner
    {
        static constexpr std::string_view Name = "CurieElementGameplayEffectOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CurieElementHandle
    {
        static constexpr std::string_view Name = "CurieElementHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CurieElementInteractWithContainerHandler
    {
        static constexpr std::string_view Name = "CurieElementInteractWithContainerHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CurieElementGameplayEffectOwner";
        struct Offsets
        {
            static constexpr std::uintptr_t HandlerPriority = 0x28;
            static constexpr std::uintptr_t HandlerBehavior = 0x29;
            static constexpr std::uintptr_t ElementTag = 0x2C;
            static constexpr std::uintptr_t OnInstantInteractionEffects = 0x30;
            static constexpr std::uintptr_t OnBeginInteractionEffects = 0x40;
            static constexpr std::uintptr_t OngoingInteractionEffects = 0x50;
            static constexpr std::uintptr_t OnEndInteractionEffects = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"HandlerPriority", 0x28, "EnumProperty"},
            {"HandlerBehavior", 0x29, "EnumProperty"},
            {"ElementTag", 0x2C, "StructProperty"},
            {"OnInstantInteractionEffects", 0x30, "ArrayProperty"},
            {"OnBeginInteractionEffects", 0x40, "ArrayProperty"},
            {"OngoingInteractionEffects", 0x50, "ArrayProperty"},
            {"OnEndInteractionEffects", 0x60, "ArrayProperty"},
        }};
    };

    struct CurieElementInteractWithContainerHandlersContainer
    {
        static constexpr std::string_view Name = "CurieElementInteractWithContainerHandlersContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Handlers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handlers", 0x0, "ArrayProperty"},
        }};
    };

    struct CurieElementInteractWithElementHandler
    {
        static constexpr std::string_view Name = "CurieElementInteractWithElementHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HandlerPriority = 0x28;
            static constexpr std::uintptr_t HandlerBehavior = 0x29;
            static constexpr std::uintptr_t ElementTag = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HandlerPriority", 0x28, "EnumProperty"},
            {"HandlerBehavior", 0x29, "EnumProperty"},
            {"ElementTag", 0x2C, "StructProperty"},
        }};
    };

    struct CurieElementInteractWithElementHandlersContainer
    {
        static constexpr std::string_view Name = "CurieElementInteractWithElementHandlersContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Handlers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handlers", 0x0, "ArrayProperty"},
        }};
    };

    struct CurieElementInteractWithMaterialHandler
    {
        static constexpr std::string_view Name = "CurieElementInteractWithMaterialHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t HandlerPriority = 0x28;
            static constexpr std::uintptr_t HandlerBehavior = 0x29;
            static constexpr std::uintptr_t ElementTag = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HandlerPriority", 0x28, "EnumProperty"},
            {"HandlerBehavior", 0x29, "EnumProperty"},
            {"ElementTag", 0x2C, "StructProperty"},
        }};
    };

    struct CurieElementInteractWithMaterialHandlersContainer
    {
        static constexpr std::string_view Name = "CurieElementInteractWithMaterialHandlersContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Handlers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Handlers", 0x0, "ArrayProperty"},
        }};
    };

    struct CurieElementPairKey
    {
        static constexpr std::string_view Name = "CurieElementPairKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CurieEntityStateBehavior
    {
        static constexpr std::string_view Name = "CurieEntityStateBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CurieElementGameplayEffectOwner";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredAttachedElements = 0x28;
            static constexpr std::uintptr_t RequiredInteractingElements = 0x48;
            static constexpr std::uintptr_t AllowedAttachmentEntityTypes = 0x68;
            static constexpr std::uintptr_t OnBeginEffects = 0x88;
            static constexpr std::uintptr_t OngoingEffects = 0x98;
            static constexpr std::uintptr_t OnEndEffects = 0xA8;
            static constexpr std::uintptr_t bShouldDetach = 0xB8;
            static constexpr std::uintptr_t bSkipExecuteAttachDetach = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RequiredAttachedElements", 0x28, "StructProperty"},
            {"RequiredInteractingElements", 0x48, "StructProperty"},
            {"AllowedAttachmentEntityTypes", 0x68, "StructProperty"},
            {"OnBeginEffects", 0x88, "ArrayProperty"},
            {"OngoingEffects", 0x98, "ArrayProperty"},
            {"OnEndEffects", 0xA8, "ArrayProperty"},
            {"bShouldDetach", 0xB8, "BoolProperty"},
            {"bSkipExecuteAttachDetach", 0xB8, "BoolProperty"},
        }};
    };

    struct CurieEntityStateDefinitionBase
    {
        static constexpr std::string_view Name = "CurieEntityStateDefinitionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateBehaviorClass = 0x8;
            static constexpr std::uintptr_t bIsEnabled = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StateBehaviorClass", 0x8, "ClassProperty"},
            {"bIsEnabled", 0x10, "BoolProperty"},
        }};
    };

    struct CurieGlobals
    {
        static constexpr std::string_view Name = "CurieGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableCurie = 0x28;
            static constexpr std::uintptr_t CurieGlobalsClassName = 0x30;
            static constexpr std::uintptr_t RegisteredCurieManager = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableCurie", 0x28, "BoolProperty"},
            {"CurieGlobalsClassName", 0x30, "StructProperty"},
            {"RegisteredCurieManager", 0x48, "ObjectProperty"},
        }};
    };

    struct CurieInteractHandle
    {
        static constexpr std::string_view Name = "CurieInteractHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CurieInteractParamsHandle
    {
        static constexpr std::string_view Name = "CurieInteractParamsHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CurieInterface
    {
        static constexpr std::string_view Name = "CurieInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "OnCurieContainerAcquired_BP",
            "OnCurieContainerReleased_BP",
            "OnCurieContainerReparented_BP",
            "OnCurieElementAttached_BP",
            "OnCurieElementDetached_BP",
            "OnCurieElementInteractBegun_BP",
            "OnCurieElementInteractEnded_BP",
            "OnCurieElementInteract_BP",
            "OnCurieStateAttached_BP",
            "OnCurieStateDetached_BP",
        }};
    };

    struct CurieManager
    {
        static constexpr std::string_view Name = "CurieManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurieComponentClass = 0xC0;
            static constexpr std::uintptr_t CurieManagerRegistryName = 0xC8;
            static constexpr std::uintptr_t MaterialDataRegistryName = 0xCC;
            static constexpr std::uintptr_t ElementDataRegistryName = 0xD0;
            static constexpr std::uintptr_t EntityStateDataRegistryName = 0xD4;
            static constexpr std::uintptr_t ElementAllocationHandlers = 0x170;
            static constexpr std::uintptr_t ElementAttachmentHandlers = 0x180;
            static constexpr std::uintptr_t ElementAttachmentConditionHandlers = 0x190;
            static constexpr std::uintptr_t ElementInteractWithElementHandlers = 0x1A0;
            static constexpr std::uintptr_t ElementInteractWithMaterialHandlers = 0x1B0;
            static constexpr std::uintptr_t ElementInteractWithContainerHandlers = 0x1C0;
            static constexpr std::uintptr_t CurieManagerComponents = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CurieComponentClass", 0xC0, "ClassProperty"},
            {"CurieManagerRegistryName", 0xC8, "NameProperty"},
            {"MaterialDataRegistryName", 0xCC, "NameProperty"},
            {"ElementDataRegistryName", 0xD0, "NameProperty"},
            {"EntityStateDataRegistryName", 0xD4, "NameProperty"},
            {"ElementAllocationHandlers", 0x170, "MapProperty"},
            {"ElementAttachmentHandlers", 0x180, "MapProperty"},
            {"ElementAttachmentConditionHandlers", 0x190, "MapProperty"},
            {"ElementInteractWithElementHandlers", 0x1A0, "MapProperty"},
            {"ElementInteractWithMaterialHandlers", 0x1B0, "MapProperty"},
            {"ElementInteractWithContainerHandlers", 0x1C0, "MapProperty"},
            {"CurieManagerComponents", 0x1D0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "BindDelegateForCurieElementAttached",
            "BindDelegateForCurieElementBeginInteract",
            "BindDelegateForCurieElementDetached",
            "BindDelegateForCurieElementEndInteract",
            "BindDelegateForCurieElementInteract",
            "BindDelegateForCurieStateAttached",
            "BindDelegateForCurieStateDetached",
            "HandleContainerOwnerDestroyed",
            "UnbindDelegateForCurieElementAttached",
            "UnbindDelegateForCurieElementBeginInteract",
            "UnbindDelegateForCurieElementDetached",
            "UnbindDelegateForCurieElementEndInteract",
            "UnbindDelegateForCurieElementInteract",
            "UnbindDelegateForCurieStateAttached",
            "UnbindDelegateForCurieStateDetached",
        }};
    };

    struct CurieManagerComponent
    {
        static constexpr std::string_view Name = "CurieManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedConfig", 0x28, "ObjectProperty"},
        }};
    };

    struct CurieManagerComponentConfig
    {
        static constexpr std::string_view Name = "CurieManagerComponentConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigName = 0x30;
            static constexpr std::uintptr_t ConfigTag = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConfigName", 0x30, "NameProperty"},
            {"ConfigTag", 0x34, "StructProperty"},
        }};
    };

    struct CurieManagerComponentEntry
    {
        static constexpr std::string_view Name = "CurieManagerComponentEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsActive = 0x8;
            static constexpr std::uintptr_t Priority = 0x9;
            static constexpr std::uintptr_t ManagerType = 0x10;
            static constexpr std::uintptr_t Config = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsActive", 0x8, "BoolProperty"},
            {"Priority", 0x9, "EnumProperty"},
            {"ManagerType", 0x10, "ClassProperty"},
            {"Config", 0x18, "ObjectProperty"},
        }};
    };

    struct CurieManagerComponentInterface
    {
        static constexpr std::string_view Name = "CurieManagerComponentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CurieMaterialDefinitionBase
    {
        static constexpr std::string_view Name = "CurieMaterialDefinitionBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementalImmunities = 0x8;
            static constexpr std::uintptr_t ElementAttachmentImmunities = 0x28;
            static constexpr std::uintptr_t ElementsAllowedWhenCannotBeDamaged = 0x48;
            static constexpr std::uintptr_t MaterialProperties = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ElementalImmunities", 0x8, "StructProperty"},
            {"ElementAttachmentImmunities", 0x28, "StructProperty"},
            {"ElementsAllowedWhenCannotBeDamaged", 0x48, "StructProperty"},
            {"MaterialProperties", 0x68, "StructProperty"},
        }};
    };

    struct CurieStateHandle
    {
        static constexpr std::string_view Name = "CurieStateHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
