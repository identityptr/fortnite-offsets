#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PCGEntityFrameworkInterop
{
    struct PCGAddVerseStaticMeshComponent
    {
        static constexpr std::string_view Name = "PCGAddVerseStaticMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t RootEntity = 0xA8;
            static constexpr std::uintptr_t StaticMeshSelector = 0xC8;
            static constexpr std::uintptr_t bMuteOnEmptyStaticMesh = 0xF8;
            static constexpr std::uintptr_t bCollidable = 0xF9;
            static constexpr std::uintptr_t bQueryable = 0xFA;
            static constexpr std::uintptr_t bVisible = 0xFB;
            static constexpr std::uintptr_t bHiddenInGame = 0xFC;
            static constexpr std::uintptr_t bCastShadow = 0xFD;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0xFE;
            static constexpr std::uintptr_t bCastHiddenShadow = 0xFF;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x100;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x101;
            static constexpr std::uintptr_t bReceivesDecals = 0x102;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x108;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"RootEntity", 0xA8, "SoftObjectProperty"},
            {"StaticMeshSelector", 0xC8, "StructProperty"},
            {"bMuteOnEmptyStaticMesh", 0xF8, "BoolProperty"},
            {"bCollidable", 0xF9, "BoolProperty"},
            {"bQueryable", 0xFA, "BoolProperty"},
            {"bVisible", 0xFB, "BoolProperty"},
            {"bHiddenInGame", 0xFC, "BoolProperty"},
            {"bCastShadow", 0xFD, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0xFE, "BoolProperty"},
            {"bCastHiddenShadow", 0xFF, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x100, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x101, "BoolProperty"},
            {"bReceivesDecals", 0x102, "BoolProperty"},
            {"TranslucencySortPriority", 0x108, "Int64Property"},
            {"bNeverDistanceCull", 0x110, "BoolProperty"},
        }};
    };

    struct PCGCreateVerseEntity
    {
        static constexpr std::string_view Name = "PCGCreateVerseEntity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t RootEntity = 0xA8;
            static constexpr std::uintptr_t EntityClass = 0xC8;
            static constexpr std::uintptr_t EntityLabel = 0xE8;
            static constexpr std::uintptr_t EntityPivot = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RootEntity", 0xA8, "SoftObjectProperty"},
            {"EntityClass", 0xC8, "SoftClassProperty"},
            {"EntityLabel", 0xE8, "StrProperty"},
            {"EntityPivot", 0x100, "StructProperty"},
        }};
    };

    struct PCGDataFromEntitySettings
    {
        static constexpr std::string_view Name = "PCGDataFromEntitySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DataSource = 0xA8;
            static constexpr std::uintptr_t Mode = 0xA9;
            static constexpr std::uintptr_t Tags = 0xB0;
            static constexpr std::uintptr_t ComponentClass = 0xC0;
            static constexpr std::uintptr_t bMustOverlapSelf = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DataSource", 0xA8, "EnumProperty"},
            {"Mode", 0xA9, "EnumProperty"},
            {"Tags", 0xB0, "StructProperty"},
            {"ComponentClass", 0xC0, "ClassProperty"},
            {"bMustOverlapSelf", 0xC8, "BoolProperty"},
        }};
    };

    struct PCGManagedEntities
    {
        static constexpr std::string_view Name = "PCGManagedEntities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGManagedResource";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedEntities = 0x38;
            static constexpr std::uintptr_t RootEntity = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GeneratedEntities", 0x38, "ArrayProperty"},
            {"RootEntity", 0x48, "SoftObjectProperty"},
        }};
    };

}
