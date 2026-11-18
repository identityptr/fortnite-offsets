#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ItemizationCoreRuntime
{
    struct ControllerComponent_ItemizationInventory
    {
        static constexpr std::string_view Name = "ControllerComponent_ItemizationInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInventoryComponentDestroyed = 0xC0;
            static constexpr std::uintptr_t VerseInventoryClass = 0xD0;
            static constexpr std::uintptr_t InventoryClass = 0xD8;
            static constexpr std::uintptr_t InventorySetupData = 0xE0;
            static constexpr std::uintptr_t RootInventory = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnInventoryComponentDestroyed", 0xC0, "MulticastInlineDelegateProperty"},
            {"VerseInventoryClass", 0xD0, "ClassProperty"},
            {"InventoryClass", 0xD8, "ClassProperty"},
            {"InventorySetupData", 0xE0, "SoftObjectProperty"},
            {"RootInventory", 0x100, "WeakObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetRootInventory",
            "OnRep_Inventory",
        }};
    };

    struct Inventory
    {
        static constexpr std::string_view Name = "Inventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EquippedItems = 0x28;
            static constexpr std::uintptr_t PreviouslyEquippedItems = 0x38;
            static constexpr std::uintptr_t Owner = 0x50;
            static constexpr std::uintptr_t InventoryReplicator = 0x58;
            static constexpr std::uintptr_t VerseInventoryInternal = 0x60;
            static constexpr std::uintptr_t PropertyInterfaceList = 0x68;
            static constexpr std::uintptr_t TotalSlotCount = 0xC8;
            static constexpr std::uintptr_t InventorySubType = 0xD4;
            static constexpr std::uintptr_t ItemEntryData = 0xD8;
            static constexpr std::uintptr_t ChildInventoryList = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"EquippedItems", 0x28, "ArrayProperty"},
            {"PreviouslyEquippedItems", 0x38, "ArrayProperty"},
            {"Owner", 0x50, "ObjectProperty"},
            {"InventoryReplicator", 0x58, "ObjectProperty"},
            {"VerseInventoryInternal", 0x60, "WeakObjectProperty"},
            {"PropertyInterfaceList", 0x68, "StructProperty"},
            {"TotalSlotCount", 0xC8, "Int64Property"},
            {"InventorySubType", 0xD4, "StructProperty"},
            {"ItemEntryData", 0xD8, "StructProperty"},
            {"ChildInventoryList", 0x230, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "OnRep_EquippedItems",
            "OnRep_ItemData",
            "OnRep_Owner",
            "OnRep_PropertyInterfaceList",
            "OnRep_TotalSlotCount",
            "OnRep_VerseInventory",
            "Server_DropItem",
            "Server_EquipItem",
            "Server_UnequipItem",
            "Server_UseItem",
        }};
    };

    struct InventoryConfigurationAsset
    {
        static constexpr std::string_view Name = "InventoryConfigurationAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t InventorySetup = 0x28;
            static constexpr std::uintptr_t DEBUG_InventorySetup = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InventorySetup", 0x28, "ClassProperty"},
            {"DEBUG_InventorySetup", 0x30, "ObjectProperty"},
        }};
    };

    struct InventoryProperties
    {
        static constexpr std::string_view Name = "InventoryProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryName = 0x0;
            static constexpr std::uintptr_t InventoryDisplayName = 0x10;
            static constexpr std::uintptr_t InventoryDescription = 0x20;
            static constexpr std::uintptr_t PickupPriority = 0x30;
            static constexpr std::uintptr_t TotalSlotsOverride = 0x38;
            static constexpr std::uintptr_t InventoryClass = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InventoryName", 0x0, "StrProperty"},
            {"InventoryDisplayName", 0x10, "TextProperty"},
            {"InventoryDescription", 0x20, "TextProperty"},
            {"PickupPriority", 0x30, "Int64Property"},
            {"TotalSlotsOverride", 0x38, "Int64Property"},
            {"InventoryClass", 0x40, "SoftClassProperty"},
        }};
    };

    struct InventoryReplicator
    {
        static constexpr std::string_view Name = "InventoryReplicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RootInventory = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RootInventory", 0x278, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnPossessedPawnChanged",
        }};
    };

    struct InventorySetupDataBase
    {
        static constexpr std::string_view Name = "InventorySetupDataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InventorySetupDataNativeBasic
    {
        static constexpr std::string_view Name = "InventorySetupDataNativeBasic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InventorySetupDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryList = 0x28;
            static constexpr std::uintptr_t StartingItemList = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InventoryList", 0x28, "ArrayProperty"},
            {"StartingItemList", 0x38, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetAllowedEntityClasses",
            "GetAllowedInventoryClasses",
        }};
    };

    struct InventoryStartingItem
    {
        static constexpr std::string_view Name = "InventoryStartingItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x0;
            static constexpr std::uintptr_t EntityClass = 0x20;
            static constexpr std::uintptr_t Amount = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemDefinition", 0x0, "SoftObjectProperty"},
            {"EntityClass", 0x20, "SoftClassProperty"},
            {"Amount", 0x40, "Int64Property"},
        }};
    };

    struct ItemAbilityBinding
    {
        static constexpr std::string_view Name = "ItemAbilityBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputAction = 0x0;
            static constexpr std::uintptr_t ActiveState = 0x20;
            static constexpr std::uintptr_t Costs = 0x28;
            static constexpr std::uintptr_t Cooldowns = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputAction", 0x0, "SoftObjectProperty"},
            {"ActiveState", 0x20, "EnumProperty"},
            {"Costs", 0x28, "ArrayProperty"},
            {"Cooldowns", 0x38, "ArrayProperty"},
        }};
    };

    struct ItemAbilityConfigurationAsset
    {
        static constexpr std::string_view Name = "ItemAbilityConfigurationAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayAbilityClass = 0x28;
            static constexpr std::uintptr_t GameplayTags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameplayAbilityClass", 0x28, "ClassProperty"},
            {"GameplayTags", 0x30, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Construct",
        }};
    };

    struct ItemAbilityCooldown
    {
        static constexpr std::string_view Name = "ItemAbilityCooldown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyOnStart = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bApplyOnStart", 0x28, "BoolProperty"},
        }};
    };

    struct ItemAbilityCooldownState
    {
        static constexpr std::string_view Name = "ItemAbilityCooldownState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsActive = 0x0;
            static constexpr std::uintptr_t Progress = 0x4;
            static constexpr std::uintptr_t PredictedTimeLeft = 0x8;
            static constexpr std::uintptr_t PredictedProgressPerSecond = 0xC;
            static constexpr std::uintptr_t TimeLastUpdated = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsActive", 0x0, "BoolProperty"},
            {"Progress", 0x4, "FloatProperty"},
            {"PredictedTimeLeft", 0x8, "FloatProperty"},
            {"PredictedProgressPerSecond", 0xC, "FloatProperty"},
            {"TimeLastUpdated", 0x10, "DoubleProperty"},
        }};
    };

    struct ItemAbilityCooldownTime
    {
        static constexpr std::string_view Name = "ItemAbilityCooldownTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemAbilityCooldown";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownTime = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CooldownTime", 0x30, "FloatProperty"},
        }};
    };

    struct ItemAbilityCooldownVelocityBased
    {
        static constexpr std::string_view Name = "ItemAbilityCooldownVelocityBased";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemAbilityCooldown";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownTimeIfStationary = 0x30;
            static constexpr std::uintptr_t CooldownTimeScaleFactorIfMoving = 0x34;
            static constexpr std::uintptr_t CooldownTimeIsResetToZeroWhenMoving = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CooldownTimeIfStationary", 0x30, "FloatProperty"},
            {"CooldownTimeScaleFactorIfMoving", 0x34, "FloatProperty"},
            {"CooldownTimeIsResetToZeroWhenMoving", 0x38, "BoolProperty"},
        }};
    };

    struct ItemAbilityCost
    {
        static constexpr std::string_view Name = "ItemAbilityCost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemAbilityCostItem
    {
        static constexpr std::string_view Name = "ItemAbilityCostItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemAbilityCost";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x28;
            static constexpr std::uintptr_t NumConsumed = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemDefinition", 0x28, "SoftObjectProperty"},
            {"NumConsumed", 0x48, "Int64Property"},
        }};
    };

    struct ItemAbilityEffectAsset
    {
        static constexpr std::string_view Name = "ItemAbilityEffectAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayEffectClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayEffectClass", 0x28, "ClassProperty"},
        }};
    };

    struct ItemAggregatedData
    {
        static constexpr std::string_view Name = "ItemAggregatedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemAttachment
    {
        static constexpr std::string_view Name = "ItemAttachment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x278;
            static constexpr std::uintptr_t AttachmentData = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Mesh", 0x278, "ObjectProperty"},
            {"AttachmentData", 0x280, "ObjectProperty"},
        }};
    };

    struct ItemAttachmentDefinition
    {
        static constexpr std::string_view Name = "ItemAttachmentDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachmentVisibility = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachmentVisibility", 0x28, "EnumProperty"},
        }};
    };

    struct ItemComponentBase
    {
        static constexpr std::string_view Name = "ItemComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemComponentContainer
    {
        static constexpr std::string_view Name = "ItemComponentContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemComponentData
    {
        static constexpr std::string_view Name = "ItemComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemComponentDataList
    {
        static constexpr std::string_view Name = "ItemComponentDataList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataList = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataList", 0x0, "ArrayProperty"},
        }};
    };

    struct ItemComponentData_Ability
    {
        static constexpr std::string_view Name = "ItemComponentData_Ability";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityList = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AbilityList", 0x0, "ArrayProperty"},
        }};
    };

    struct ItemComponentData_Attach
    {
        static constexpr std::string_view Name = "ItemComponentData_Attach";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t Attachments = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Attachments", 0x0, "ArrayProperty"},
        }};
    };

    struct ItemComponentData_Entity
    {
        static constexpr std::string_view Name = "ItemComponentData_Entity";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t Entity = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entity", 0x0, "ObjectProperty"},
        }};
    };

    struct ItemComponentData_GameplayEffects
    {
        static constexpr std::string_view Name = "ItemComponentData_GameplayEffects";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayEffects = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayEffects", 0x0, "ArrayProperty"},
        }};
    };

    struct ItemComponentData_Icon
    {
        static constexpr std::string_view Name = "ItemComponentData_Icon";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t Icon = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Icon", 0x0, "SoftObjectProperty"},
        }};
    };

    struct ItemComponentData_InventoryItemLimitByTag
    {
        static constexpr std::string_view Name = "ItemComponentData_InventoryItemLimitByTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t LimitAmount = 0x0;
            static constexpr std::uintptr_t LimitTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LimitAmount", 0x0, "StructProperty"},
            {"LimitTag", 0x28, "StructProperty"},
        }};
    };

    struct ItemComponentData_MaxStackSize
    {
        static constexpr std::string_view Name = "ItemComponentData_MaxStackSize";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxStackSize = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxStackSize", 0x0, "StructProperty"},
        }};
    };

    struct ItemComponentData_OwnedGameplayTags
    {
        static constexpr std::string_view Name = "ItemComponentData_OwnedGameplayTags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0x0, "StructProperty"},
        }};
    };

    struct ItemComponentData_SlotSize
    {
        static constexpr std::string_view Name = "ItemComponentData_SlotSize";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotSize = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlotSize", 0x0, "ByteProperty"},
        }};
    };

    struct ItemComponentData_StackSize
    {
        static constexpr std::string_view Name = "ItemComponentData_StackSize";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t StackSize = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StackSize", 0x0, "Int64Property"},
        }};
    };

    struct ItemComponentData_SuppressEntityOperations
    {
        static constexpr std::string_view Name = "ItemComponentData_SuppressEntityOperations";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsWriteSuppressed = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsWriteSuppressed", 0x0, "BoolProperty"},
        }};
    };

    struct ItemComponentData_Tags
    {
        static constexpr std::string_view Name = "ItemComponentData_Tags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemTags = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemTags", 0x0, "StructProperty"},
        }};
    };

    struct ItemComponentData_Traits
    {
        static constexpr std::string_view Name = "ItemComponentData_Traits";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t Traits = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Traits", 0x0, "StructProperty"},
        }};
    };

    struct ItemComponentData_WasLoadedFromSave
    {
        static constexpr std::string_view Name = "ItemComponentData_WasLoadedFromSave";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ItemComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t bWasLoadedFromSave = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bWasLoadedFromSave", 0x0, "BoolProperty"},
        }};
    };

    struct ItemDefinitionBase
    {
        static constexpr std::string_view Name = "ItemDefinitionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "McpItemDefinitionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemName = 0x38;
            static constexpr std::uintptr_t ItemDescription = 0x48;
            static constexpr std::uintptr_t ItemShortDescription = 0x58;
            static constexpr std::uintptr_t DataList = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ItemName", 0x38, "TextProperty"},
            {"ItemDescription", 0x48, "TextProperty"},
            {"ItemShortDescription", 0x58, "TextProperty"},
            {"DataList", 0x68, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "GetDisallowedStructs",
            "GetDisplayName",
            "GetEditorOnlyAllowedStructs",
            "GetItemData",
            "GetItemDescription",
            "GetItemRichDescription",
            "GetItemShortDescription",
            "OnRep_DataList",
            "RemoveItemData",
            "SetItemData",
        }};
    };

    struct ItemEntityClassMapping
    {
        static constexpr std::string_view Name = "ItemEntityClassMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x0;
            static constexpr std::uintptr_t EntityClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemDefinition", 0x0, "StrProperty"},
            {"EntityClass", 0x10, "StrProperty"},
        }};
    };

    struct ItemEntityClassSubsystem
    {
        static constexpr std::string_view Name = "ItemEntityClassSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x30, "ArrayProperty"},
        }};
    };

    struct ItemEntry
    {
        static constexpr std::string_view Name = "ItemEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x10;
            static constexpr std::uintptr_t ItemEntryID = 0x18;
            static constexpr std::uintptr_t ItemData = 0x28;
            static constexpr std::uintptr_t RemovedDataTypes = 0x70;
            static constexpr std::uintptr_t SlotNumber = 0x80;
            static constexpr std::uintptr_t ParentObject = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemDefinition", 0x10, "ObjectProperty"},
            {"ItemEntryID", 0x18, "StructProperty"},
            {"ItemData", 0x28, "StructProperty"},
            {"RemovedDataTypes", 0x70, "ArrayProperty"},
            {"SlotNumber", 0x80, "IntProperty"},
            {"ParentObject", 0x8C, "WeakObjectProperty"},
        }};
    };

    struct ItemEntryList
    {
        static constexpr std::string_view Name = "ItemEntryList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemList = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemList", 0x48, "ArrayProperty"},
        }};
    };

    struct ItemID
    {
        static constexpr std::string_view Name = "ItemID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Guid";
        struct Offsets
        {
            static constexpr std::uintptr_t A = 0x0;
            static constexpr std::uintptr_t B = 0x4;
            static constexpr std::uintptr_t C = 0x8;
            static constexpr std::uintptr_t D = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"A", 0x0, "IntProperty"},
            {"B", 0x4, "IntProperty"},
            {"C", 0x8, "IntProperty"},
            {"D", 0xC, "IntProperty"},
        }};
    };

    struct ItemMeshAttachmentDefinition
    {
        static constexpr std::string_view Name = "ItemMeshAttachmentDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemAttachmentDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachToSocketName = 0x30;
            static constexpr std::uintptr_t OffsetLocation = 0x38;
            static constexpr std::uintptr_t OffsetRotation = 0x50;
            static constexpr std::uintptr_t MeshScale = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AttachToSocketName", 0x30, "NameProperty"},
            {"OffsetLocation", 0x38, "StructProperty"},
            {"OffsetRotation", 0x50, "StructProperty"},
            {"MeshScale", 0x68, "StructProperty"},
        }};
    };

    struct ItemSkeletalMeshAttachmentDefinition
    {
        static constexpr std::string_view Name = "ItemSkeletalMeshAttachmentDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemMeshAttachmentDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x80;
            static constexpr std::uintptr_t Animation = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Mesh", 0x80, "SoftObjectProperty"},
            {"Animation", 0xA0, "SoftObjectProperty"},
        }};
    };

    struct ItemSlotChangeEvent
    {
        static constexpr std::string_view Name = "ItemSlotChangeEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemStaticMeshAttachmentDefinition
    {
        static constexpr std::string_view Name = "ItemStaticMeshAttachmentDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemMeshAttachmentDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mesh", 0x80, "SoftObjectProperty"},
        }};
    };

    struct ItemizationConfigurationAsset
    {
        static constexpr std::string_view Name = "ItemizationConfigurationAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerInventorySetup = 0x28;
            static constexpr std::uintptr_t AIInventorySetup = 0x48;
            static constexpr std::uintptr_t bIsAlwaysExposedToVerse = 0x68;
            static constexpr std::uintptr_t bEnableCustomUI = 0x69;
            static constexpr std::uintptr_t HUDWidgetClass = 0x70;
            static constexpr std::uintptr_t InventoryScreenWidgetClass = 0x90;
            static constexpr std::uintptr_t InputMappingContexts = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PlayerInventorySetup", 0x28, "SoftObjectProperty"},
            {"AIInventorySetup", 0x48, "SoftObjectProperty"},
            {"bIsAlwaysExposedToVerse", 0x68, "BoolProperty"},
            {"bEnableCustomUI", 0x69, "BoolProperty"},
            {"HUDWidgetClass", 0x70, "SoftClassProperty"},
            {"InventoryScreenWidgetClass", 0x90, "SoftClassProperty"},
            {"InputMappingContexts", 0xB0, "ArrayProperty"},
        }};
    };

    struct ItemizationCoreCheatManager
    {
        static constexpr std::string_view Name = "ItemizationCoreCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseDebugLibrary = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerseDebugLibrary", 0x28, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "DumpItemDefinitionToItemEntityClassMappings",
            "FindItemEntityClass",
            "InventoryAddTestItemWithInventory",
            "InventoryAddTestStackableVerseItem",
            "InventoryAddTestVerseItem",
            "InventoryAddToItem",
            "InventoryDropItem",
            "InventoryEquipItem",
            "InventoryMoveAmountOfItem",
            "InventoryMoveItem",
            "InventoryRemoveAllItemsUsingVerse",
            "InventoryRemoveFromItem",
            "InventorySetItemSlot",
            "InventoryUseItem",
        }};
    };

    struct ItemizationCoreSubsystem
    {
        static constexpr std::string_view Name = "ItemizationCoreSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryList = 0x68;
            static constexpr std::uintptr_t ItemEntryIDToInventoryMap = 0x78;
            static constexpr std::uintptr_t Components = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InventoryList", 0x68, "ArrayProperty"},
            {"ItemEntryIDToInventoryMap", 0x78, "MapProperty"},
            {"Components", 0x98, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnInventoryComponentDestroyed",
        }};
    };

    struct ItemizationFunctionLibrary
    {
        static constexpr std::string_view Name = "ItemizationFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "GetItemAmount",
            "GetItemBySlotNumber",
            "GetItemCount",
            "GetItemData",
            "GetItemDefinition",
            "GetItemSlotNumber",
            "GetItemSlotsRemaining",
            "GetItemSlotsTotalCount",
            "GetItemSlotsUsed",
            "GetItems",
            "HasItemEntry",
            "RemoveItemData",
            "ResetItemData",
            "SetItemData",
        }};
    };

    struct ItemizationSubsystemComponent
    {
        static constexpr std::string_view Name = "ItemizationSubsystemComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemizationSubsystemComponent_Attach
    {
        static constexpr std::string_view Name = "ItemizationSubsystemComponent_Attach";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemizationSubsystemComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct KeyedPropertyInterface
    {
        static constexpr std::string_view Name = "KeyedPropertyInterface";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x10;
            static constexpr std::uintptr_t VersePropertyInterface = 0x18;
            static constexpr std::uintptr_t ItemID = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Key", 0x10, "Int64Property"},
            {"VersePropertyInterface", 0x18, "WeakObjectProperty"},
            {"ItemID", 0x20, "StructProperty"},
        }};
    };

    struct KeyedPropertyInterfaceList
    {
        static constexpr std::string_view Name = "KeyedPropertyInterfaceList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t KeyedPropertyInterfaces = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KeyedPropertyInterfaces", 0x48, "ArrayProperty"},
        }};
    };

    struct VerseItemizationSubsystem
    {
        static constexpr std::string_view Name = "VerseItemizationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
