#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoBuildingCosmeticsRuntime
{
    struct JunoBuildingAccountItemDefBase
    {
        static constexpr std::string_view Name = "JunoBuildingAccountItemDefBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCosmeticItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoBuildingFrontendPreviewScale = 0x3F8;
            static constexpr std::uintptr_t JunoBuildingFrontendFramingCenterOffsetRatio = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JunoBuildingFrontendPreviewScale", 0x3F8, "FloatProperty"},
            {"JunoBuildingFrontendFramingCenterOffsetRatio", 0x400, "StructProperty"},
        }};
    };

    struct JunoBuildingCosmeticsSettings
    {
        static constexpr std::string_view Name = "JunoBuildingCosmeticsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoBuildingSetPreviewActorClass = 0x28;
            static constexpr std::uintptr_t JunoBuildingPropPreviewActorClass = 0x48;
            static constexpr std::uintptr_t JunoBuildingSetPreviewPrefabAssetClass = 0x68;
            static constexpr std::uintptr_t JunoBuildingPropPreviewPrefabAssetClass = 0x88;
            static constexpr std::uintptr_t BlueprintCategoryTag = 0xA8;
            static constexpr std::uintptr_t BuildingPartSubCategoryTag = 0xAC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"JunoBuildingSetPreviewActorClass", 0x28, "SoftClassProperty"},
            {"JunoBuildingPropPreviewActorClass", 0x48, "SoftClassProperty"},
            {"JunoBuildingSetPreviewPrefabAssetClass", 0x68, "SoftClassProperty"},
            {"JunoBuildingPropPreviewPrefabAssetClass", 0x88, "SoftClassProperty"},
            {"BlueprintCategoryTag", 0xA8, "StructProperty"},
            {"BuildingPartSubCategoryTag", 0xAC, "StructProperty"},
        }};
    };

    struct JunoBuildingItemPreviewActor
    {
        static constexpr std::string_view Name = "JunoBuildingItemPreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewOffPawnActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewActorComponent = 0x4C0;
            static constexpr std::uintptr_t ChildPreviewActor = 0x4C8;
            static constexpr std::uintptr_t PreviewStaticMeshComponent = 0x4D0;
            static constexpr std::uintptr_t PreviewSkelMeshComponent = 0x4D8;
            static constexpr std::uintptr_t DefaultPreviewActorClass = 0x4E0;
            static constexpr std::uintptr_t bAllowPivotLocationOffsetOnPreviewChildActor = 0x4E8;
            static constexpr std::uintptr_t LoadedItemPreviewAssets = 0x4F0;
            static constexpr std::uintptr_t GliderSpawnComponent = 0x500;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreviewActorComponent", 0x4C0, "ObjectProperty"},
            {"ChildPreviewActor", 0x4C8, "ObjectProperty"},
            {"PreviewStaticMeshComponent", 0x4D0, "ObjectProperty"},
            {"PreviewSkelMeshComponent", 0x4D8, "ObjectProperty"},
            {"DefaultPreviewActorClass", 0x4E0, "ClassProperty"},
            {"bAllowPivotLocationOffsetOnPreviewChildActor", 0x4E8, "BoolProperty"},
            {"LoadedItemPreviewAssets", 0x4F0, "ArrayProperty"},
            {"GliderSpawnComponent", 0x500, "ObjectProperty"},
        }};
    };

    struct JunoBuildingPreviewComponent
    {
        static constexpr std::string_view Name = "JunoBuildingPreviewComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoBuildingPreviewInterface
    {
        static constexpr std::string_view Name = "JunoBuildingPreviewInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildingPreviewPrefabAsset
    {
        static constexpr std::string_view Name = "JunoBuildingPreviewPrefabAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraFrameTargetBounds = 0x288;
            static constexpr std::uintptr_t ZoomedInBoundsScale = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraFrameTargetBounds", 0x288, "StructProperty"},
            {"ZoomedInBoundsScale", 0x2A8, "FloatProperty"},
        }};
    };

    struct JunoBuildingPreviewerSubsystem
    {
        static constexpr std::string_view Name = "JunoBuildingPreviewerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AsyncPreviewsStack = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AsyncPreviewsStack", 0x48, "ArrayProperty"},
        }};
    };

    struct JunoBuildingPropAccountItemDefinition
    {
        static constexpr std::string_view Name = "JunoBuildingPropAccountItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingAccountItemDefBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingActorClassToPreview = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BuildingActorClassToPreview", 0x410, "SoftClassProperty"},
        }};
    };

    struct JunoBuildingSetAccountItemDefinition
    {
        static constexpr std::string_view Name = "JunoBuildingSetAccountItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingAccountItemDefBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FoundationPiecesHeightToShow = 0x410;
            static constexpr std::uintptr_t BuildingActorClassToPreview = 0x418;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FoundationPiecesHeightToShow", 0x410, "FloatProperty"},
            {"BuildingActorClassToPreview", 0x418, "SoftClassProperty"},
        }};
    };

    struct JunoGuidedBuildingCosmeticInterface
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingCosmeticInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGuidedBuildingDisplayActor
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingDisplayActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DataArray = 0x280;
            static constexpr std::uintptr_t GuidedBuildingRecipe = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataArray", 0x280, "ArrayProperty"},
            {"GuidedBuildingRecipe", 0x290, "NameProperty"},
        }};
    };

}
