#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutCanvas
{
    struct SproutCanvasComponent
    {
        static constexpr std::string_view Name = "SproutCanvasComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CanvasSize = 0x240;
            static constexpr std::uintptr_t CanvasDesign = 0x248;
            static constexpr std::uintptr_t CanvasDesignOwner = 0x278;
            static constexpr std::uintptr_t CanvasInstanceClass = 0x280;
            static constexpr std::uintptr_t CanvasInstance = 0x288;
            static constexpr std::uintptr_t CanvasEditor = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CanvasSize", 0x240, "StructProperty"},
            {"CanvasDesign", 0x248, "StructProperty"},
            {"CanvasDesignOwner", 0x278, "WeakObjectProperty"},
            {"CanvasInstanceClass", 0x280, "ClassProperty"},
            {"CanvasInstance", 0x288, "ObjectProperty"},
            {"CanvasEditor", 0x290, "WeakObjectProperty"},
        }};
    };

    struct SproutCanvasInstance
    {
        static constexpr std::string_view Name = "SproutCanvasInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RelativeTransform = 0x30;
            static constexpr std::uintptr_t CanvasPrimitiveComponent = 0x90;
            static constexpr std::uintptr_t ComponentClass = 0x98;
            static constexpr std::uintptr_t ComponentPool = 0xA0;
            static constexpr std::uintptr_t Elements = 0xB0;
            static constexpr std::uintptr_t ElementPadding = 0xC0;
            static constexpr std::uintptr_t bHiddenInGame = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RelativeTransform", 0x30, "StructProperty"},
            {"CanvasPrimitiveComponent", 0x90, "WeakObjectProperty"},
            {"ComponentClass", 0x98, "ClassProperty"},
            {"ComponentPool", 0xA0, "ArrayProperty"},
            {"Elements", 0xB0, "ArrayProperty"},
            {"ElementPadding", 0xC0, "FloatProperty"},
            {"bHiddenInGame", 0xC4, "BoolProperty"},
        }};
    };

    struct SproutCanvasPlayerComponent
    {
        static constexpr std::string_view Name = "SproutCanvasPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEditingStart = 0xC0;
            static constexpr std::uintptr_t OnApplyEdit = 0xD0;
            static constexpr std::uintptr_t OnEditingEnd = 0xE0;
            static constexpr std::uintptr_t InputMappingContext = 0xF0;
            static constexpr std::uintptr_t InputMappingPriority = 0xF8;
            static constexpr std::uintptr_t ToggleCanvasColorInputAction = 0x100;
            static constexpr std::uintptr_t ToggleElementMeshInputAction = 0x108;
            static constexpr std::uintptr_t ToggleElementColorInputAction = 0x110;
            static constexpr std::uintptr_t MoveElementInputAction = 0x118;
            static constexpr std::uintptr_t RotateElementInputAction = 0x120;
            static constexpr std::uintptr_t SetElementInputAction = 0x128;
            static constexpr std::uintptr_t ApplyEditInputAction = 0x130;
            static constexpr std::uintptr_t StopEditInputAction = 0x138;
            static constexpr std::uintptr_t StartEditAbility = 0x150;
            static constexpr std::uintptr_t StopEditAbility = 0x158;
            static constexpr std::uintptr_t FailAbility = 0x160;
            static constexpr std::uintptr_t SavedDesigns = 0x168;
            static constexpr std::uintptr_t EditorPalette = 0x178;
            static constexpr std::uintptr_t EditorSelection = 0x1A0;
            static constexpr std::uintptr_t PreviewActorClass = 0x220;
            static constexpr std::uintptr_t PreviewActor = 0x228;
            static constexpr std::uintptr_t ElementPreviewComponent = 0x230;
            static constexpr std::uintptr_t CanvasPreviewComponent = 0x238;
            static constexpr std::uintptr_t PreviewDesign = 0x240;
            static constexpr std::uintptr_t PreviewInstanceClass = 0x270;
            static constexpr std::uintptr_t PreviewInstance = 0x278;
            static constexpr std::uintptr_t CanvasComponentToEdit = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"OnEditingStart", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnApplyEdit", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnEditingEnd", 0xE0, "MulticastInlineDelegateProperty"},
            {"InputMappingContext", 0xF0, "ObjectProperty"},
            {"InputMappingPriority", 0xF8, "IntProperty"},
            {"ToggleCanvasColorInputAction", 0x100, "ObjectProperty"},
            {"ToggleElementMeshInputAction", 0x108, "ObjectProperty"},
            {"ToggleElementColorInputAction", 0x110, "ObjectProperty"},
            {"MoveElementInputAction", 0x118, "ObjectProperty"},
            {"RotateElementInputAction", 0x120, "ObjectProperty"},
            {"SetElementInputAction", 0x128, "ObjectProperty"},
            {"ApplyEditInputAction", 0x130, "ObjectProperty"},
            {"StopEditInputAction", 0x138, "ObjectProperty"},
            {"StartEditAbility", 0x150, "ClassProperty"},
            {"StopEditAbility", 0x158, "ClassProperty"},
            {"FailAbility", 0x160, "ClassProperty"},
            {"SavedDesigns", 0x168, "ArrayProperty"},
            {"EditorPalette", 0x178, "StructProperty"},
            {"EditorSelection", 0x1A0, "StructProperty"},
            {"PreviewActorClass", 0x220, "ClassProperty"},
            {"PreviewActor", 0x228, "ObjectProperty"},
            {"ElementPreviewComponent", 0x230, "WeakObjectProperty"},
            {"CanvasPreviewComponent", 0x238, "WeakObjectProperty"},
            {"PreviewDesign", 0x240, "StructProperty"},
            {"PreviewInstanceClass", 0x270, "ClassProperty"},
            {"PreviewInstance", 0x278, "ObjectProperty"},
            {"CanvasComponentToEdit", 0x280, "WeakObjectProperty"},
        }};
    };

}
