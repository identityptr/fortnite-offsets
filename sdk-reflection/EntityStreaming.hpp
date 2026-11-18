#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntityStreaming
{
    struct EntityStreamingAssetUserData
    {
        static constexpr std::string_view Name = "EntityStreamingAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamingCells = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StreamingCells", 0x30, "ArrayProperty"},
        }};
    };

    struct EntityStreamingAssetUserDataEntity
    {
        static constexpr std::string_view Name = "EntityStreamingAssetUserDataEntity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityStreamingAssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamingCells = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StreamingCells", 0x30, "ArrayProperty"},
        }};
    };

    struct EntityStreamingCell
    {
        static constexpr std::string_view Name = "EntityStreamingCell";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0x0;
            static constexpr std::uintptr_t Bounds = 0x10;
            static constexpr std::uintptr_t bIsSpatial = 0x48;
            static constexpr std::uintptr_t StreamingDistance = 0x50;
            static constexpr std::uintptr_t Assets = 0x58;
            static constexpr std::uintptr_t UnreferencedAssets = 0x68;
            static constexpr std::uintptr_t Dependents = 0x78;
            static constexpr std::uintptr_t Prerequisites = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Guid", 0x0, "StructProperty"},
            {"Bounds", 0x10, "StructProperty"},
            {"bIsSpatial", 0x48, "BoolProperty"},
            {"StreamingDistance", 0x50, "DoubleProperty"},
            {"Assets", 0x58, "ArrayProperty"},
            {"UnreferencedAssets", 0x68, "ArrayProperty"},
            {"Dependents", 0x78, "ArrayProperty"},
            {"Prerequisites", 0x88, "ArrayProperty"},
        }};
    };

    struct EntityStreamingCellAsset
    {
        static constexpr std::string_view Name = "EntityStreamingCellAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Entities = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entities", 0x28, "ArrayProperty"},
        }};
    };

    struct EntityStreamingSubsystem
    {
        static constexpr std::string_view Name = "EntityStreamingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
