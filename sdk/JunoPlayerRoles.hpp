#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoPlayerRoles
{
    struct JunoEscalationsAILootModifier
    {
        static constexpr std::string_view Name = "JunoEscalationsAILootModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct JunoEscalationsCheatManager
    {
        static constexpr std::string_view Name = "JunoEscalationsCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoEscalationsControllerComponent
    {
        static constexpr std::string_view Name = "JunoEscalationsControllerComponent";
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

    struct JunoEscalationsLibrary
    {
        static constexpr std::string_view Name = "JunoEscalationsLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGameStateComponent_Escalations
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Escalations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EscalationTag = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EscalationTag", 0xC0, "StructProperty"},
        }};
    };

    struct JunoGameStateComponent_Levels
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Levels";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct JunoGameStateComponent_Points
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Points";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct JunoGameStateComponent_Roles
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Roles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct JunoGameStateComponent_RolesUIData
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_RolesUIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoGameStateComponent_DataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RoleUIDataRegistryType = 0xD8;
            static constexpr std::uintptr_t AbilityUIDataRegistryType = 0xDC;
            static constexpr std::uintptr_t RoleCategoryUIDataRegistryType = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RoleUIDataRegistryType", 0xD8, "StructProperty"},
            {"AbilityUIDataRegistryType", 0xDC, "StructProperty"},
            {"RoleCategoryUIDataRegistryType", 0xE0, "StructProperty"},
        }};
    };

    struct JunoGameStateComponent_Skills
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Skills";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct JunoLevelsAnalytics
    {
        static constexpr std::string_view Name = "JunoLevelsAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoLevelsCheatManager
    {
        static constexpr std::string_view Name = "JunoLevelsCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoLevelsControllerComponent
    {
        static constexpr std::string_view Name = "JunoLevelsControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerLevelChangedEvent = 0xC8;
            static constexpr std::uintptr_t OnPlayerXPChangedEvent = 0xD8;
            static constexpr std::uintptr_t OnPlayerUnspentSkillPointsChangedEvent = 0xE8;
            static constexpr std::uintptr_t OnPlayerGainedXPLevelsSkillPointsEvent = 0xF8;
            static constexpr std::uintptr_t OnPlayerLeveledUpEvent = 0x108;
            static constexpr std::uintptr_t JunoLevelsSettings = 0x118;
            static constexpr std::uintptr_t AllRoleLevels = 0x128;
            static constexpr std::uintptr_t WaitForPlayerPersistence = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnPlayerLevelChangedEvent", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnPlayerXPChangedEvent", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnPlayerUnspentSkillPointsChangedEvent", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnPlayerGainedXPLevelsSkillPointsEvent", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnPlayerLeveledUpEvent", 0x108, "MulticastInlineDelegateProperty"},
            {"JunoLevelsSettings", 0x118, "StructProperty"},
            {"AllRoleLevels", 0x128, "ArrayProperty"},
            {"WaitForPlayerPersistence", 0x150, "ObjectProperty"},
        }};
    };

    struct JunoLevelsLibrary
    {
        static constexpr std::string_view Name = "JunoLevelsLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayerRolesPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoPlayerRolesPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAddWorldPersistenceFeature = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAddWorldPersistenceFeature", 0x118, "BoolProperty"},
        }};
    };

    struct JunoPlayerRolesPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerRolesPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPlayerRolesWorldPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerRolesWorldPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPointsCheatManager
    {
        static constexpr std::string_view Name = "JunoPointsCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPointsControllerComponent
    {
        static constexpr std::string_view Name = "JunoPointsControllerComponent";
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

    struct JunoPointsLibrary
    {
        static constexpr std::string_view Name = "JunoPointsLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPointsPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoPointsPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct JunoPointsStateComponent
    {
        static constexpr std::string_view Name = "JunoPointsStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoPlayerPointsBalanceChanged = 0xC0;
            static constexpr std::uintptr_t PointsBalance = 0xD0;
            static constexpr std::uintptr_t WaitForPlayerPersistence = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnJunoPlayerPointsBalanceChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"PointsBalance", 0xD0, "StructProperty"},
            {"WaitForPlayerPersistence", 0xD8, "ObjectProperty"},
        }};
    };

    struct JunoPointsWorldPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPointsWorldPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoRoleAttributeSet
    {
        static constexpr std::string_view Name = "JunoRoleAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t RoleEnergy = 0x48;
            static constexpr std::uintptr_t MaxRoleEnergy = 0x70;
            static constexpr std::uintptr_t XPMultiplier = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RoleEnergy", 0x48, "StructProperty"},
            {"MaxRoleEnergy", 0x70, "StructProperty"},
            {"XPMultiplier", 0x98, "StructProperty"},
        }};
    };

    struct JunoRolesCheatManager
    {
        static constexpr std::string_view Name = "JunoRolesCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoRolesControllerComponent
    {
        static constexpr std::string_view Name = "JunoRolesControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoRoleChangedEvent = 0xC8;
            static constexpr std::uintptr_t PrimaryAbilityTriggerTag = 0xD8;
            static constexpr std::uintptr_t SecondaryAbilityTriggerTag = 0xDC;
            static constexpr std::uintptr_t UltimateAbilityTriggerTag = 0xE0;
            static constexpr std::uintptr_t DodgeAbilityTriggerTag = 0xE4;
            static constexpr std::uintptr_t RoleTag = 0xE8;
            static constexpr std::uintptr_t PendingRoleAbilitySet = 0x128;
            static constexpr std::uintptr_t WaitForPlayerPersistence = 0x130;
            static constexpr std::uintptr_t NumRoleAbilities = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnJunoRoleChangedEvent", 0xC8, "MulticastInlineDelegateProperty"},
            {"PrimaryAbilityTriggerTag", 0xD8, "StructProperty"},
            {"SecondaryAbilityTriggerTag", 0xDC, "StructProperty"},
            {"UltimateAbilityTriggerTag", 0xE0, "StructProperty"},
            {"DodgeAbilityTriggerTag", 0xE4, "StructProperty"},
            {"RoleTag", 0xE8, "StructProperty"},
            {"PendingRoleAbilitySet", 0x128, "ObjectProperty"},
            {"WaitForPlayerPersistence", 0x130, "ObjectProperty"},
            {"NumRoleAbilities", 0x138, "IntProperty"},
        }};
    };

    struct JunoRolesLibrary
    {
        static constexpr std::string_view Name = "JunoRolesLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSkillsAnalytics
    {
        static constexpr std::string_view Name = "JunoSkillsAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSkillsCheatManager
    {
        static constexpr std::string_view Name = "JunoSkillsCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSkillsControllerComponent
    {
        static constexpr std::string_view Name = "JunoSkillsControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoSkillsChangedEvent = 0xC8;
            static constexpr std::uintptr_t AllSkills = 0xD8;
            static constexpr std::uintptr_t WaitForPlayerPersistence = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnJunoSkillsChangedEvent", 0xC8, "MulticastInlineDelegateProperty"},
            {"AllSkills", 0xD8, "ArrayProperty"},
            {"WaitForPlayerPersistence", 0x100, "ObjectProperty"},
        }};
    };

    struct JunoSkillsLibrary
    {
        static constexpr std::string_view Name = "JunoSkillsLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoVerbProcessor_RoleAbilityTriggered
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_RoleAbilityTriggered";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_RoleChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_RoleChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_RoleProgressChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_RoleProgressChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_RoleSkillChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_RoleSkillChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

}
