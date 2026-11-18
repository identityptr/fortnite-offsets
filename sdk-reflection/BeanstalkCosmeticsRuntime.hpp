#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BeanstalkCosmeticsRuntime
{
    struct BeanAccountItemDefinitionOverride
    {
        static constexpr std::string_view Name = "BeanAccountItemDefinitionOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BeanAthenaCharacterItemDefinitionOverride
    {
        static constexpr std::string_view Name = "BeanAthenaCharacterItemDefinitionOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanAccountItemDefinitionOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseAthenaCharacterItemDefinition = 0x28;
            static constexpr std::uintptr_t BeanAthenaCharacterItemDefinitionOverride = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseAthenaCharacterItemDefinition", 0x28, "SoftObjectProperty"},
            {"BeanAthenaCharacterItemDefinitionOverride", 0x48, "SoftObjectProperty"},
        }};
    };

    struct BeanCosmeticItemDefinitionBase
    {
        static constexpr std::string_view Name = "BeanCosmeticItemDefinitionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticItemAdditionalData";
        struct Offsets
        {
            static constexpr std::uintptr_t Body_Pattern = 0x28;
            static constexpr std::uintptr_t BodyFaceplateColorIndex = 0x48;
            static constexpr std::uintptr_t BodyFaceplateMaterialTypeIndex = 0x4C;
            static constexpr std::uintptr_t BodyEyesColorIndex = 0x50;
            static constexpr std::uintptr_t BodyEyesMaterialTypeIndex = 0x54;
            static constexpr std::uintptr_t bEyelashes = 0x58;
            static constexpr std::uintptr_t EyelashesColorIndex = 0x5C;
            static constexpr std::uintptr_t EyelashesMaterialTypeIndex = 0x60;
            static constexpr std::uintptr_t bGlasses = 0x64;
            static constexpr std::uintptr_t GlassesFrameColorIndex = 0x68;
            static constexpr std::uintptr_t GlassesFrameMaterialTypeIndex = 0x6C;
            static constexpr std::uintptr_t bGlassesLenses = 0x70;
            static constexpr std::uintptr_t GlassesLensesColorIndex = 0x74;
            static constexpr std::uintptr_t GlassesLensesMaterialTypeIndex = 0x78;
            static constexpr std::uintptr_t HeadCostumeMainColorIndex = 0x7C;
            static constexpr std::uintptr_t HeadCostumeMainMaterialTypeIndex = 0x80;
            static constexpr std::uintptr_t bHeadCostumeMainClothingPattern = 0x84;
            static constexpr std::uintptr_t HeadCostumeSecondaryColorIndex = 0x88;
            static constexpr std::uintptr_t HeadCostumeSecondaryMaterialTypeIndex = 0x8C;
            static constexpr std::uintptr_t bHeadCostumeSecondaryClothingPattern = 0x90;
            static constexpr std::uintptr_t HeadCostumeAccentColorIndex = 0x94;
            static constexpr std::uintptr_t HeadCostumeAccentMaterialTypeIndex = 0x98;
            static constexpr std::uintptr_t bHeadCostumeAccentClothingPattern = 0x9C;
            static constexpr std::uintptr_t BodyMainColorIndex = 0xA0;
            static constexpr std::uintptr_t BodyMainMaterialTypeIndex = 0xA4;
            static constexpr std::uintptr_t BodySecondaryColorIndex = 0xA8;
            static constexpr std::uintptr_t BodySecondaryMaterialTypeIndex = 0xAC;
            static constexpr std::uintptr_t CostumePatternAtlasTextureSlot = 0xB0;
            static constexpr std::uintptr_t HeadCostumePatternAtlasTextureSlot = 0xB4;
            static constexpr std::uintptr_t CostumeMainColorIndex = 0xB8;
            static constexpr std::uintptr_t CostumeMainMaterialTypeIndex = 0xBC;
            static constexpr std::uintptr_t bCostumeMainClothingPattern = 0xC0;
            static constexpr std::uintptr_t CostumeSecondaryColorIndex = 0xC4;
            static constexpr std::uintptr_t CostumeSecondaryMaterialTypeIndex = 0xC8;
            static constexpr std::uintptr_t bCostumeSecondaryClothingPattern = 0xCC;
            static constexpr std::uintptr_t CostumeAccentColorIndex = 0xD0;
            static constexpr std::uintptr_t CostumeAccentMaterialTypeIndex = 0xD4;
            static constexpr std::uintptr_t bCostumeAccentClothingPattern = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"Body_Pattern", 0x28, "SoftObjectProperty"},
            {"BodyFaceplateColorIndex", 0x48, "IntProperty"},
            {"BodyFaceplateMaterialTypeIndex", 0x4C, "IntProperty"},
            {"BodyEyesColorIndex", 0x50, "IntProperty"},
            {"BodyEyesMaterialTypeIndex", 0x54, "IntProperty"},
            {"bEyelashes", 0x58, "BoolProperty"},
            {"EyelashesColorIndex", 0x5C, "IntProperty"},
            {"EyelashesMaterialTypeIndex", 0x60, "IntProperty"},
            {"bGlasses", 0x64, "BoolProperty"},
            {"GlassesFrameColorIndex", 0x68, "IntProperty"},
            {"GlassesFrameMaterialTypeIndex", 0x6C, "IntProperty"},
            {"bGlassesLenses", 0x70, "BoolProperty"},
            {"GlassesLensesColorIndex", 0x74, "IntProperty"},
            {"GlassesLensesMaterialTypeIndex", 0x78, "IntProperty"},
            {"HeadCostumeMainColorIndex", 0x7C, "IntProperty"},
            {"HeadCostumeMainMaterialTypeIndex", 0x80, "IntProperty"},
            {"bHeadCostumeMainClothingPattern", 0x84, "BoolProperty"},
            {"HeadCostumeSecondaryColorIndex", 0x88, "IntProperty"},
            {"HeadCostumeSecondaryMaterialTypeIndex", 0x8C, "IntProperty"},
            {"bHeadCostumeSecondaryClothingPattern", 0x90, "BoolProperty"},
            {"HeadCostumeAccentColorIndex", 0x94, "IntProperty"},
            {"HeadCostumeAccentMaterialTypeIndex", 0x98, "IntProperty"},
            {"bHeadCostumeAccentClothingPattern", 0x9C, "BoolProperty"},
            {"BodyMainColorIndex", 0xA0, "IntProperty"},
            {"BodyMainMaterialTypeIndex", 0xA4, "IntProperty"},
            {"BodySecondaryColorIndex", 0xA8, "IntProperty"},
            {"BodySecondaryMaterialTypeIndex", 0xAC, "IntProperty"},
            {"CostumePatternAtlasTextureSlot", 0xB0, "IntProperty"},
            {"HeadCostumePatternAtlasTextureSlot", 0xB4, "IntProperty"},
            {"CostumeMainColorIndex", 0xB8, "IntProperty"},
            {"CostumeMainMaterialTypeIndex", 0xBC, "IntProperty"},
            {"bCostumeMainClothingPattern", 0xC0, "BoolProperty"},
            {"CostumeSecondaryColorIndex", 0xC4, "IntProperty"},
            {"CostumeSecondaryMaterialTypeIndex", 0xC8, "IntProperty"},
            {"bCostumeSecondaryClothingPattern", 0xCC, "BoolProperty"},
            {"CostumeAccentColorIndex", 0xD0, "IntProperty"},
            {"CostumeAccentMaterialTypeIndex", 0xD4, "IntProperty"},
            {"bCostumeAccentClothingPattern", 0xD8, "BoolProperty"},
        }};
    };

    struct BeanCosmeticsData
    {
        static constexpr std::string_view Name = "BeanCosmeticsData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t HeroType = 0x28;
            static constexpr std::uintptr_t BulkCosmeticsPlaceholderCID = 0x30;
            static constexpr std::uintptr_t CharacterCosmeticsMap = 0x50;
            static constexpr std::uintptr_t EmoteLookupMap = 0x58;
            static constexpr std::uintptr_t DefaultCharacterCosmetics = 0x60;
            static constexpr std::uintptr_t EmptyHandsPickaxeDef = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HeroType", 0x28, "ObjectProperty"},
            {"BulkCosmeticsPlaceholderCID", 0x30, "SoftObjectProperty"},
            {"CharacterCosmeticsMap", 0x50, "ObjectProperty"},
            {"EmoteLookupMap", 0x58, "ObjectProperty"},
            {"DefaultCharacterCosmetics", 0x60, "ArrayProperty"},
            {"EmptyHandsPickaxeDef", 0x70, "ObjectProperty"},
        }};
    };

    struct BeanFortPlayerMannequin
    {
        static constexpr std::string_view Name = "BeanFortPlayerMannequin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerMannequin";
        struct Offsets
        {
            static constexpr std::uintptr_t AthenaCharacter = 0x3B0;
            static constexpr std::uintptr_t AthenaBackBling = 0x3B8;
            static constexpr std::uintptr_t ExtraPart = 0x3C0;
            static constexpr std::uintptr_t MannequinLightingChannels = 0x3E8;
            static constexpr std::uintptr_t MannequinBoundsScale = 0x3EC;
            static constexpr std::uintptr_t bIsMannequinVisible = 0x3F0;
            static constexpr std::uintptr_t bMannequinCastsHiddenShadow = 0x3F1;
            static constexpr std::uintptr_t AppliedCosmeticParts = 0x3F8;
            static constexpr std::uintptr_t CharacterPartList = 0x408;
            static constexpr std::uintptr_t SoftCharacterPartList = 0x450;
            static constexpr std::uintptr_t BackupCharacterPartList = 0x570;
            static constexpr std::uintptr_t OverrideVariants = 0x6C8;
            static constexpr std::uintptr_t ColorSwatches = 0x6D8;
            static constexpr std::uintptr_t WeaponSkeletalMesh = 0x6E8;
            static constexpr std::uintptr_t WeaponAttachSocket = 0x6F0;
            static constexpr std::uintptr_t WeaponSkeletalMeshComponent = 0x6F8;
            static constexpr std::uintptr_t CosmeticDataComponent = 0x700;
            static constexpr std::uintptr_t MannequinPartSkeletalMeshComponents = 0x708;
            static constexpr std::uintptr_t MannequinPartChaosClothComponents = 0x750;
            static constexpr std::uintptr_t MorphTargets = 0x798;
            static constexpr std::uintptr_t CosmeticApplicatorComponent = 0x7A8;
            static constexpr std::uintptr_t ContextualAnimSceneActorComponent = 0x7B0;
            static constexpr std::uintptr_t bInitialized = 0x7B8;
            static constexpr std::uintptr_t bLimitTick = 0x7B9;
            static constexpr std::uintptr_t bHighPriorityRBAN = 0x7BA;
            static constexpr std::uintptr_t bAutoRegisterMannequinWithBudgetAllocator = 0x7BB;
            static constexpr std::uintptr_t bAutoCalculateMannequinSignificance = 0x7BC;
            static constexpr std::uintptr_t CustomizationAssetLoader = 0x7C0;
            static constexpr std::uintptr_t LoadingMode = 0x7C8;
            static constexpr std::uintptr_t OnMaterialsUpdated = 0x838;
            static constexpr std::uintptr_t UsageContext = 0x848;
            static constexpr std::uintptr_t PartModifiers = 0x850;
            static constexpr std::uintptr_t PlaceholderPartsList = 0x8A0;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"AthenaCharacter", 0x3B0, "ObjectProperty"},
            {"AthenaBackBling", 0x3B8, "ObjectProperty"},
            {"ExtraPart", 0x3C0, "ObjectProperty"},
            {"MannequinLightingChannels", 0x3E8, "StructProperty"},
            {"MannequinBoundsScale", 0x3EC, "FloatProperty"},
            {"bIsMannequinVisible", 0x3F0, "BoolProperty"},
            {"bMannequinCastsHiddenShadow", 0x3F1, "BoolProperty"},
            {"AppliedCosmeticParts", 0x3F8, "ArrayProperty"},
            {"CharacterPartList", 0x408, "ObjectProperty"},
            {"SoftCharacterPartList", 0x450, "SoftObjectProperty"},
            {"BackupCharacterPartList", 0x570, "SoftObjectProperty"},
            {"OverrideVariants", 0x6C8, "ArrayProperty"},
            {"ColorSwatches", 0x6D8, "ObjectProperty"},
            {"WeaponSkeletalMesh", 0x6E8, "ObjectProperty"},
            {"WeaponAttachSocket", 0x6F0, "NameProperty"},
            {"WeaponSkeletalMeshComponent", 0x6F8, "ObjectProperty"},
            {"CosmeticDataComponent", 0x700, "ObjectProperty"},
            {"MannequinPartSkeletalMeshComponents", 0x708, "ObjectProperty"},
            {"MannequinPartChaosClothComponents", 0x750, "ObjectProperty"},
            {"MorphTargets", 0x798, "ArrayProperty"},
            {"CosmeticApplicatorComponent", 0x7A8, "ObjectProperty"},
            {"ContextualAnimSceneActorComponent", 0x7B0, "ObjectProperty"},
            {"bInitialized", 0x7B8, "BoolProperty"},
            {"bLimitTick", 0x7B9, "BoolProperty"},
            {"bHighPriorityRBAN", 0x7BA, "BoolProperty"},
            {"bAutoRegisterMannequinWithBudgetAllocator", 0x7BB, "BoolProperty"},
            {"bAutoCalculateMannequinSignificance", 0x7BC, "BoolProperty"},
            {"CustomizationAssetLoader", 0x7C0, "ObjectProperty"},
            {"LoadingMode", 0x7C8, "EnumProperty"},
            {"OnMaterialsUpdated", 0x838, "MulticastInlineDelegateProperty"},
            {"UsageContext", 0x848, "EnumProperty"},
            {"PartModifiers", 0x850, "ObjectProperty"},
            {"PlaceholderPartsList", 0x8A0, "ObjectProperty"},
        }};
    };

    struct FortAthenaMutator_BeanBRCosmeticsOverride
    {
        static constexpr std::string_view Name = "FortAthenaMutator_BeanBRCosmeticsOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_CosmeticLoadoutOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticsData = 0x2F8;
            static constexpr std::uintptr_t CosmeticsDataCache = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CosmeticsData", 0x2F8, "SoftObjectProperty"},
            {"CosmeticsDataCache", 0x318, "ObjectProperty"},
        }};
    };

    struct FortCosmeticStep_ApplyBeanCD
    {
        static constexpr std::string_view Name = "FortCosmeticStep_ApplyBeanCD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t BeanPartQuery = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BeanPartQuery", 0x80, "StructProperty"},
        }};
    };

    struct FortCosmeticStep_BeanRemoveBackpack
    {
        static constexpr std::string_view Name = "FortCosmeticStep_BeanRemoveBackpack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

}
