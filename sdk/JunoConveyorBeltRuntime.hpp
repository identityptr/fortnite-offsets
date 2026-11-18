#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoConveyorBeltRuntime
{
    struct JunoConveyorBelt
    {
        static constexpr std::string_view Name = "JunoConveyorBelt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldCloseLoop = 0x278;
            static constexpr std::uintptr_t ItemSpacing = 0x27C;
            static constexpr std::uintptr_t BeltSpeed = 0x280;
            static constexpr std::uintptr_t HiddenIndexRanges = 0x288;
            static constexpr std::uintptr_t SplineMeshComponentClass = 0x298;
            static constexpr std::uintptr_t ItemSlotActors = 0x2A0;
            static constexpr std::uintptr_t SplineComponent = 0x2B0;
            static constexpr std::uintptr_t FirstMesh = 0x2B8;
            static constexpr std::uintptr_t SplineLength = 0x2C0;
            static constexpr std::uintptr_t ItemSlotDistance = 0x2CC;
            static constexpr std::uintptr_t Slots = 0x2D0;
            static constexpr std::uintptr_t bIsRunning = 0x2E0;
            static constexpr std::uintptr_t HiddenDistanceRanges = 0x2E8;
            static constexpr std::uintptr_t StartTime = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bShouldCloseLoop", 0x278, "BoolProperty"},
            {"ItemSpacing", 0x27C, "FloatProperty"},
            {"BeltSpeed", 0x280, "FloatProperty"},
            {"HiddenIndexRanges", 0x288, "ArrayProperty"},
            {"SplineMeshComponentClass", 0x298, "ClassProperty"},
            {"ItemSlotActors", 0x2A0, "ArrayProperty"},
            {"SplineComponent", 0x2B0, "ObjectProperty"},
            {"FirstMesh", 0x2B8, "ObjectProperty"},
            {"SplineLength", 0x2C0, "FloatProperty"},
            {"ItemSlotDistance", 0x2CC, "FloatProperty"},
            {"Slots", 0x2D0, "ArrayProperty"},
            {"bIsRunning", 0x2E0, "BoolProperty"},
            {"HiddenDistanceRanges", 0x2E8, "ArrayProperty"},
            {"StartTime", 0x2F8, "DoubleProperty"},
        }};
    };

    struct JunoConveyorBeltHopperComponent
    {
        static constexpr std::string_view Name = "JunoConveyorBeltHopperComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryComponent = 0xC0;
            static constexpr std::uintptr_t ItemQuery = 0xC8;
            static constexpr std::uintptr_t Belt = 0x110;
            static constexpr std::uintptr_t HopperType = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InventoryComponent", 0xC0, "ObjectProperty"},
            {"ItemQuery", 0xC8, "StructProperty"},
            {"Belt", 0x110, "WeakObjectProperty"},
            {"HopperType", 0x118, "EnumProperty"},
        }};
    };

    struct JunoItemSlottable
    {
        static constexpr std::string_view Name = "JunoItemSlottable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemQuery = 0x280;
            static constexpr std::uintptr_t CustomVerbDesription = 0x2C8;
            static constexpr std::uintptr_t SkeletalMeshComponent = 0x2D0;
            static constexpr std::uintptr_t SlottedItem = 0x2D8;
            static constexpr std::uintptr_t SavedTransform = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ItemQuery", 0x280, "StructProperty"},
            {"CustomVerbDesription", 0x2C8, "StructProperty"},
            {"SkeletalMeshComponent", 0x2D0, "ObjectProperty"},
            {"SlottedItem", 0x2D8, "StructProperty"},
            {"SavedTransform", 0x370, "StructProperty"},
        }};
    };

}
