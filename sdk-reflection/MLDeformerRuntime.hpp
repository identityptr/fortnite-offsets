#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MLDeformerRuntime
{
    struct FortMLDeformerComponent
    {
        static constexpr std::string_view Name = "FortMLDeformerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MLDeformerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestedMLDeformerAsset = 0xF8;
            static constexpr std::uintptr_t RequestedMeshDeformerAsset = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RequestedMLDeformerAsset", 0xF8, "ObjectProperty"},
            {"RequestedMeshDeformerAsset", 0x100, "ObjectProperty"},
        }};
    };

    struct MLDeformerAssetMapping
    {
        static constexpr std::string_view Name = "MLDeformerAssetMapping";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterItemDefinitionToMLDeformerAssetMappingKeys = 0x28;
            static constexpr std::uintptr_t CharacterItemDefinitionToMLDeformerAssetMappingValues = 0x38;
            static constexpr std::uintptr_t CharacterPartToMLDeformerAssetMappingKeys = 0x48;
            static constexpr std::uintptr_t CharacterPartToMLDeformerAssetMappingValues = 0x58;
            static constexpr std::uintptr_t MLDeformerToMeshDeformerAssetMap = 0x68;
            static constexpr std::uintptr_t CharacterItemDefinitionToMLDeformerAssetMap = 0x78;
            static constexpr std::uintptr_t CharacterPartToMLDeformerAssetMap = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CharacterItemDefinitionToMLDeformerAssetMappingKeys", 0x28, "ArrayProperty"},
            {"CharacterItemDefinitionToMLDeformerAssetMappingValues", 0x38, "ArrayProperty"},
            {"CharacterPartToMLDeformerAssetMappingKeys", 0x48, "ArrayProperty"},
            {"CharacterPartToMLDeformerAssetMappingValues", 0x58, "ArrayProperty"},
            {"MLDeformerToMeshDeformerAssetMap", 0x68, "MapProperty"},
            {"CharacterItemDefinitionToMLDeformerAssetMap", 0x78, "MapProperty"},
            {"CharacterPartToMLDeformerAssetMap", 0x88, "MapProperty"},
        }};
    };

    struct MLDeformerComponentManager
    {
        static constexpr std::string_view Name = "MLDeformerComponentManager";
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

    struct MLDeformerGameFeatureData
    {
        static constexpr std::string_view Name = "MLDeformerGameFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisableWhenOwnerIsNotViewTarget = 0x448;
            static constexpr std::uintptr_t bShouldRampUpWeightWhenEnabled = 0x449;
            static constexpr std::uintptr_t WeightIncreasePerSecond = 0x44C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bDisableWhenOwnerIsNotViewTarget", 0x448, "BoolProperty"},
            {"bShouldRampUpWeightWhenEnabled", 0x449, "BoolProperty"},
            {"WeightIncreasePerSecond", 0x44C, "FloatProperty"},
        }};
    };

}
