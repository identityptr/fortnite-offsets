#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GiantPawnCoreRuntime
{
    struct FortGameStateComponent_GiantPawnBlockerVolumes
    {
        static constexpr std::string_view Name = "FortGameStateComponent_GiantPawnBlockerVolumes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockerVolumeClass = 0xC0;
            static constexpr std::uintptr_t BlockerVolumeTable = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlockerVolumeClass", 0xC0, "ClassProperty"},
            {"BlockerVolumeTable", 0xC8, "ObjectProperty"},
        }};
    };

    struct FortGameStateComponent_GiantPawnMode
    {
        static constexpr std::string_view Name = "FortGameStateComponent_GiantPawnMode";
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

    struct FortGiantPawnFunctionLibrary
    {
        static constexpr std::string_view Name = "FortGiantPawnFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGiantPlayerPawn
    {
        static constexpr std::string_view Name = "FortGiantPlayerPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortStandInPlayerPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryItemsToRemoveWhileGiant = 0x61D8;
            static constexpr std::uintptr_t bUsesCharacterParts = 0x61E8;
            static constexpr std::uintptr_t bDedicatedServerAlwaysTickPoseAndRefreshBones = 0x61E9;
            static constexpr std::uintptr_t bEquipWeaponOnControllerChange = 0x61E9;
            static constexpr std::uintptr_t DefaultWeapon = 0x61F0;
            static constexpr std::uintptr_t WeaponItemCopy = 0x61F8;
            static constexpr std::uintptr_t GiantAbilitySet = 0x6290;
            static constexpr std::uintptr_t GiantAbilitySetHandle = 0x6298;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"InventoryItemsToRemoveWhileGiant", 0x61D8, "ArrayProperty"},
            {"bUsesCharacterParts", 0x61E8, "BoolProperty"},
            {"bDedicatedServerAlwaysTickPoseAndRefreshBones", 0x61E9, "BoolProperty"},
            {"bEquipWeaponOnControllerChange", 0x61E9, "BoolProperty"},
            {"DefaultWeapon", 0x61F0, "ObjectProperty"},
            {"WeaponItemCopy", 0x61F8, "StructProperty"},
            {"GiantAbilitySet", 0x6290, "ObjectProperty"},
            {"GiantAbilitySetHandle", 0x6298, "StructProperty"},
        }};
    };

    struct FortMovementMode_GiantWalking
    {
        static constexpr std::string_view Name = "FortMovementMode_GiantWalking";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxMoveIterations = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxMoveIterations", 0x1B8, "StructProperty"},
        }};
    };

    struct FortMovementMode_GiantWalkingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_GiantWalkingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct GiantGroupDestructionManager
    {
        static constexpr std::string_view Name = "GiantGroupDestructionManager";
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

    struct GiantPawnDestructionComponent
    {
        static constexpr std::string_view Name = "GiantPawnDestructionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxBuildingCountToPredictDestroyPerFrame = 0xC0;
            static constexpr std::uintptr_t MaxBuildingCountToSimplePredictDestroyPerFrame = 0xF0;
            static constexpr std::uintptr_t AsyncDeathTag = 0x120;
            static constexpr std::uintptr_t bSetDamageDealt = 0x124;
            static constexpr std::uintptr_t bDoNeighborProcessing = 0x125;
            static constexpr std::uintptr_t BuildingEntriesWaitingForDestroy = 0x128;
            static constexpr std::uintptr_t PredictedDestroyedBuildingEntries = 0x138;
            static constexpr std::uintptr_t SimplePredictDeathBuildingEntries = 0x148;
            static constexpr std::uintptr_t BuildingEntriesWaitingForSimpleDestroy = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MaxBuildingCountToPredictDestroyPerFrame", 0xC0, "StructProperty"},
            {"MaxBuildingCountToSimplePredictDestroyPerFrame", 0xF0, "StructProperty"},
            {"AsyncDeathTag", 0x120, "StructProperty"},
            {"bSetDamageDealt", 0x124, "BoolProperty"},
            {"bDoNeighborProcessing", 0x125, "BoolProperty"},
            {"BuildingEntriesWaitingForDestroy", 0x128, "ArrayProperty"},
            {"PredictedDestroyedBuildingEntries", 0x138, "ArrayProperty"},
            {"SimplePredictDeathBuildingEntries", 0x148, "ArrayProperty"},
            {"BuildingEntriesWaitingForSimpleDestroy", 0x158, "ArrayProperty"},
        }};
    };

}
