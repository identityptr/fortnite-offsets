#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNE_LiveEditToolsRuntime
{
    struct CreativeMoveToolPreviewEntity
    {
        static constexpr std::string_view Name = "CreativeMoveToolPreviewEntity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CreativeMoveToolBlueprintPreview";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewObject = 0x950;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviewObject", 0x950, "ObjectProperty"},
        }};
    };

    struct DeleteEntities
    {
        static constexpr std::string_view Name = "DeleteEntities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeleteObjects";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayForDeleteTime = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DelayForDeleteTime", 0x148, "FloatProperty"},
        }};
    };

    struct LSRThumbnailGeneratorEntities
    {
        static constexpr std::string_view Name = "LSRThumbnailGeneratorEntities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelSaveRecordThumbnailGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedEntities = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnedEntities", 0x170, "ArrayProperty"},
        }};
    };

    struct LevelRecordSpawnerEntities
    {
        static constexpr std::string_view Name = "LevelRecordSpawnerEntities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelRecordSpawner";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedEntities = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnedEntities", 0x3C0, "ArrayProperty"},
        }};
    };

    struct LevelSaveRecordEntities
    {
        static constexpr std::string_view Name = "LevelSaveRecordEntities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelSaveRecord";
        struct Offsets
        {
            static constexpr std::uintptr_t LastEntityRecordID = 0x3D8;
            static constexpr std::uintptr_t EntityTemplateRecords = 0x3E0;
            static constexpr std::uintptr_t EntityInstanceRecords = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LastEntityRecordID", 0x3D8, "UInt64Property"},
            {"EntityTemplateRecords", 0x3E0, "MapProperty"},
            {"EntityInstanceRecords", 0x3F0, "ArrayProperty"},
        }};
    };

    struct MoveEntitiesFreely
    {
        static constexpr std::string_view Name = "MoveEntitiesFreely";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MoveObjectsFreely";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningEntityInteractionMode = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningEntityInteractionMode", 0x148, "ObjectProperty"},
        }};
    };

    struct PhoneToolEntityInteractionMode
    {
        static constexpr std::string_view Name = "PhoneToolEntityInteractionMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ObjectInteractionMode";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayForMultiSelectHighlightTH = 0x418;
            static constexpr std::uintptr_t MoveEntitiesFreelyInteractionBehavior = 0x428;
            static constexpr std::uintptr_t NewlyPlacedEntities = 0x440;
            static constexpr std::uintptr_t ActiveBoundBehaviorReplicateToRemoteClients = 0x450;
            static constexpr std::uintptr_t PlacementModeEntitiesReplicateToRemoteClients = 0x458;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DelayForMultiSelectHighlightTH", 0x418, "StructProperty"},
            {"MoveEntitiesFreelyInteractionBehavior", 0x428, "ObjectProperty"},
            {"NewlyPlacedEntities", 0x440, "ArrayProperty"},
            {"ActiveBoundBehaviorReplicateToRemoteClients", 0x450, "ObjectProperty"},
            {"PlacementModeEntitiesReplicateToRemoteClients", 0x458, "ArrayProperty"},
        }};
    };

    struct UEFNEntityInteractionTargetDetection
    {
        static constexpr std::string_view Name = "UEFNEntityInteractionTargetDetection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionTargetDetection";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedObjectInteractionMode = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedObjectInteractionMode", 0x28, "WeakObjectProperty"},
        }};
    };

    struct UEFNEntityInteractionTargetEvaluator
    {
        static constexpr std::string_view Name = "UEFNEntityInteractionTargetEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractionTargetEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedObjectInteractionMode = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedObjectInteractionMode", 0x28, "WeakObjectProperty"},
        }};
    };

}
