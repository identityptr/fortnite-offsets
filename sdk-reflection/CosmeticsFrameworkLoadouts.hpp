#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkLoadouts
{
    struct BasicCosmeticLoadoutContext
    {
        static constexpr std::string_view Name = "BasicCosmeticLoadoutContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticBackendLoadout
    {
        static constexpr std::string_view Name = "CosmeticBackendLoadout";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemID = 0x0;
            static constexpr std::uintptr_t PresetId = 0x10;
            static constexpr std::uintptr_t PresetIndex = 0x20;
            static constexpr std::uintptr_t CreationTime = 0x28;
            static constexpr std::uintptr_t Slots = 0x30;
            static constexpr std::uintptr_t UserTags = 0x40;
            static constexpr std::uintptr_t DisplayName = 0x60;
            static constexpr std::uintptr_t FavoriteStatus = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ItemID", 0x0, "StrProperty"},
            {"PresetId", 0x10, "StrProperty"},
            {"PresetIndex", 0x20, "IntProperty"},
            {"CreationTime", 0x28, "StructProperty"},
            {"Slots", 0x30, "ArrayProperty"},
            {"UserTags", 0x40, "StructProperty"},
            {"DisplayName", 0x60, "StrProperty"},
            {"FavoriteStatus", 0x70, "StrProperty"},
        }};
    };

    struct CosmeticBackendLoadoutGroup
    {
        static constexpr std::string_view Name = "CosmeticBackendLoadoutGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x0;
            static constexpr std::uintptr_t ResolvedSlots = 0x10;
            static constexpr std::uintptr_t ShuffleType = 0x20;
            static constexpr std::uintptr_t FavoriteStatus = 0x30;
            static constexpr std::uintptr_t DisplayName = 0x40;
            static constexpr std::uintptr_t ItemID = 0x50;
            static constexpr std::uintptr_t LinkedPresetId = 0x60;
            static constexpr std::uintptr_t PresetId = 0x70;
            static constexpr std::uintptr_t PresetIndex = 0x80;
            static constexpr std::uintptr_t CreationTime = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Slots", 0x0, "MapProperty"},
            {"ResolvedSlots", 0x10, "MapProperty"},
            {"ShuffleType", 0x20, "StrProperty"},
            {"FavoriteStatus", 0x30, "StrProperty"},
            {"DisplayName", 0x40, "StrProperty"},
            {"ItemID", 0x50, "StrProperty"},
            {"LinkedPresetId", 0x60, "StrProperty"},
            {"PresetId", 0x70, "StrProperty"},
            {"PresetIndex", 0x80, "IntProperty"},
            {"CreationTime", 0x88, "StructProperty"},
        }};
    };

    struct CosmeticBackendLoadoutGroupSlot
    {
        static constexpr std::string_view Name = "CosmeticBackendLoadoutGroupSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkedPresetId = 0x0;
            static constexpr std::uintptr_t Slots = 0x10;
            static constexpr std::uintptr_t ResolvedSlots = 0x20;
            static constexpr std::uintptr_t ShuffleType = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LinkedPresetId", 0x0, "StrProperty"},
            {"Slots", 0x10, "ArrayProperty"},
            {"ResolvedSlots", 0x20, "ArrayProperty"},
            {"ShuffleType", 0x30, "StrProperty"},
        }};
    };

    struct CosmeticBackendLoadoutSlot
    {
        static constexpr std::string_view Name = "CosmeticBackendLoadoutSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotTemplate = 0x0;
            static constexpr std::uintptr_t EquippedItem = 0x8;
            static constexpr std::uintptr_t ResolvedEquippedItem = 0x10;
            static constexpr std::uintptr_t InstanceID = 0x18;
            static constexpr std::uintptr_t ResolvedInstanceId = 0x28;
            static constexpr std::uintptr_t CustomizationInfo = 0x38;
            static constexpr std::uintptr_t ResolvedCustomizationInfo = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SlotTemplate", 0x0, "StructProperty"},
            {"EquippedItem", 0x8, "StructProperty"},
            {"ResolvedEquippedItem", 0x10, "StructProperty"},
            {"InstanceID", 0x18, "StrProperty"},
            {"ResolvedInstanceId", 0x28, "StrProperty"},
            {"CustomizationInfo", 0x38, "ArrayProperty"},
            {"ResolvedCustomizationInfo", 0x48, "ArrayProperty"},
        }};
    };

    struct CosmeticCustomizableItemDefinition
    {
        static constexpr std::string_view Name = "CosmeticCustomizableItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticCustomizationInfo
    {
        static constexpr std::string_view Name = "CosmeticCustomizationInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelTag = 0x0;
            static constexpr std::uintptr_t VariantTag = 0x4;
            static constexpr std::uintptr_t AdditionalData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChannelTag", 0x0, "StructProperty"},
            {"VariantTag", 0x4, "StructProperty"},
            {"AdditionalData", 0x8, "StrProperty"},
        }};
    };

    struct CosmeticLoadout
    {
        static constexpr std::string_view Name = "CosmeticLoadout";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomHash = 0x0;
            static constexpr std::uintptr_t Slots = 0x8;
            static constexpr std::uintptr_t DesiredSlots = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RandomHash", 0x0, "OptionalProperty"},
            {"Slots", 0x8, "ArrayProperty"},
            {"DesiredSlots", 0x18, "ArrayProperty"},
        }};
    };

    struct CosmeticLoadoutActiveArchetype
    {
        static constexpr std::string_view Name = "CosmeticLoadoutActiveArchetype";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ArchetypeGroupTag = 0x0;
            static constexpr std::uintptr_t ArchetypeTag = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ArchetypeGroupTag", 0x0, "StructProperty"},
            {"ArchetypeTag", 0x4, "StructProperty"},
        }};
    };

    struct CosmeticLoadoutArchetype
    {
        static constexpr std::string_view Name = "CosmeticLoadoutArchetype";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x28;
            static constexpr std::uintptr_t Icon = 0x38;
            static constexpr std::uintptr_t bIsArchetypeActivatable = 0x58;
            static constexpr std::uintptr_t ArchetypeGroupTag = 0x5C;
            static constexpr std::uintptr_t DefaultSchemas = 0x60;
            static constexpr std::uintptr_t RuntimeSchemas = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisplayName", 0x28, "TextProperty"},
            {"Icon", 0x38, "SoftObjectProperty"},
            {"bIsArchetypeActivatable", 0x58, "BoolProperty"},
            {"ArchetypeGroupTag", 0x5C, "StructProperty"},
            {"DefaultSchemas", 0x60, "ArrayProperty"},
            {"RuntimeSchemas", 0x70, "ArrayProperty"},
        }};
    };

    struct CosmeticLoadoutContext
    {
        static constexpr std::string_view Name = "CosmeticLoadoutContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticLoadoutInstanceItemInterface
    {
        static constexpr std::string_view Name = "CosmeticLoadoutInstanceItemInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticLoadoutItemDefinition
    {
        static constexpr std::string_view Name = "CosmeticLoadoutItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticLoadoutSchema
    {
        static constexpr std::string_view Name = "CosmeticLoadoutSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t ArchetypeTag = 0x60;
            static constexpr std::uintptr_t bIsSchemaActivatable = 0x64;
            static constexpr std::uintptr_t Slots = 0x68;
            static constexpr std::uintptr_t LockerServiceSettings = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisplayName", 0x30, "TextProperty"},
            {"Icon", 0x40, "SoftObjectProperty"},
            {"ArchetypeTag", 0x60, "StructProperty"},
            {"bIsSchemaActivatable", 0x64, "BoolProperty"},
            {"Slots", 0x68, "ArrayProperty"},
            {"LockerServiceSettings", 0x78, "StructProperty"},
        }};
    };

    struct CosmeticLoadoutSlot
    {
        static constexpr std::string_view Name = "CosmeticLoadoutSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotTemplate = 0x0;
            static constexpr std::uintptr_t EquippedItemDefinitionId = 0x8;
            static constexpr std::uintptr_t EquippedItemDefinitionObject = 0x10;
            static constexpr std::uintptr_t PendingEquippedItemDefinitionId = 0x18;
            static constexpr std::uintptr_t CustomizationInfo = 0x20;
            static constexpr std::uintptr_t EquippedItemInstance = 0x30;
            static constexpr std::uintptr_t EquippedItemInstanceId = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SlotTemplate", 0x0, "ObjectProperty"},
            {"EquippedItemDefinitionId", 0x8, "StructProperty"},
            {"EquippedItemDefinitionObject", 0x10, "ObjectProperty"},
            {"PendingEquippedItemDefinitionId", 0x18, "StructProperty"},
            {"CustomizationInfo", 0x20, "ArrayProperty"},
            {"EquippedItemInstance", 0x30, "ObjectProperty"},
            {"EquippedItemInstanceId", 0x38, "StrProperty"},
        }};
    };

    struct CosmeticLoadoutSlotDownloadInfo
    {
        static constexpr std::string_view Name = "CosmeticLoadoutSlotDownloadInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinitionAssetPath = 0x0;
            static constexpr std::uintptr_t SlotTag = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemDefinitionAssetPath", 0x0, "StructProperty"},
            {"SlotTag", 0x18, "StructProperty"},
        }};
    };

    struct CosmeticLoadoutSlotRequirements
    {
        static constexpr std::string_view Name = "CosmeticLoadoutSlotRequirements";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredTags = 0x0;
            static constexpr std::uintptr_t DeniedTags = 0x20;
            static constexpr std::uintptr_t AllowedItemTypes = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RequiredTags", 0x0, "StructProperty"},
            {"DeniedTags", 0x20, "StructProperty"},
            {"AllowedItemTypes", 0x40, "ArrayProperty"},
        }};
    };

    struct CosmeticLoadoutSlotTemplate
    {
        static constexpr std::string_view Name = "CosmeticLoadoutSlotTemplate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotTag = 0x30;
            static constexpr std::uintptr_t MetaTags = 0x38;
            static constexpr std::uintptr_t Requirements = 0x58;
            static constexpr std::uintptr_t ShortName = 0xA8;
            static constexpr std::uintptr_t DefaultCosmeticItemId = 0xB8;
            static constexpr std::uintptr_t bAlwaysUseDefaultCosmeticItemId = 0xC0;
            static constexpr std::uintptr_t bIsEquippable = 0xC1;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SlotTag", 0x30, "StructProperty"},
            {"MetaTags", 0x38, "StructProperty"},
            {"Requirements", 0x58, "StructProperty"},
            {"ShortName", 0xA8, "StrProperty"},
            {"DefaultCosmeticItemId", 0xB8, "StructProperty"},
            {"bAlwaysUseDefaultCosmeticItemId", 0xC0, "BoolProperty"},
            {"bIsEquippable", 0xC1, "BoolProperty"},
        }};
    };

    struct CosmeticLoadoutSubsystem
    {
        static constexpr std::string_view Name = "CosmeticLoadoutSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LockerServiceLoadoutSettings
    {
        static constexpr std::string_view Name = "LockerServiceLoadoutSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxPresetCount = 0x0;
            static constexpr std::uintptr_t bEnablePreset = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxPresetCount", 0x0, "IntProperty"},
            {"bEnablePreset", 0x4, "BoolProperty"},
        }};
    };

}
