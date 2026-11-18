#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CRD_LimeAssembleRuntime
{
    struct AtomGeometryAssemblyComponent
    {
        static constexpr std::string_view Name = "AtomGeometryAssemblyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBeginAssembleDelegate = 0xC0;
            static constexpr std::uintptr_t OnBeginDisassembleDelegate = 0xD0;
            static constexpr std::uintptr_t OnFullyAssembledDelegate = 0xE0;
            static constexpr std::uintptr_t OnFullyDisassembledDelegate = 0xF0;
            static constexpr std::uintptr_t OnResumeAssembleDelegate = 0x100;
            static constexpr std::uintptr_t OnResumeDisassembleDelegate = 0x110;
            static constexpr std::uintptr_t OnStopDelegate = 0x120;
            static constexpr std::uintptr_t AssemblyEventFlags = 0x130;
            static constexpr std::uintptr_t AssemblyState = 0x134;
            static constexpr std::uintptr_t AssemblyCollision = 0x140;
            static constexpr std::uintptr_t MarshalledRange = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnBeginAssembleDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnBeginDisassembleDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnFullyAssembledDelegate", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnFullyDisassembledDelegate", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnResumeAssembleDelegate", 0x100, "MulticastInlineDelegateProperty"},
            {"OnResumeDisassembleDelegate", 0x110, "MulticastInlineDelegateProperty"},
            {"OnStopDelegate", 0x120, "MulticastInlineDelegateProperty"},
            {"AssemblyEventFlags", 0x130, "EnumProperty"},
            {"AssemblyState", 0x134, "StructProperty"},
            {"AssemblyCollision", 0x140, "StructProperty"},
            {"MarshalledRange", 0x148, "StructProperty"},
        }};
    };

    struct LimeAssembleBlueprintLibrary
    {
        static constexpr std::string_view Name = "LimeAssembleBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LimeAssembleComponent
    {
        static constexpr std::string_view Name = "LimeAssembleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorAddedDelegate = 0xC0;
            static constexpr std::uintptr_t TargetActorRemovedDelegate = 0xD0;
            static constexpr std::uintptr_t TargetActors = 0xE0;
            static constexpr std::uintptr_t ContextActor = 0xF0;
            static constexpr std::uintptr_t IgnoredActorTags = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TargetActorAddedDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"TargetActorRemovedDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"TargetActors", 0xE0, "ArrayProperty"},
            {"ContextActor", 0xF0, "ObjectProperty"},
            {"IgnoredActorTags", 0xF8, "StructProperty"},
        }};
    };

    struct LimeAssembleContextActorComponent
    {
        static constexpr std::string_view Name = "LimeAssembleContextActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorsChangedDelegate = 0xC0;
            static constexpr std::uintptr_t BeginAssembleDelegate = 0xD0;
            static constexpr std::uintptr_t BeginDisassembleDelegate = 0xE0;
            static constexpr std::uintptr_t FullyAssembledDelegate = 0xF0;
            static constexpr std::uintptr_t FullyDisassembledDelegate = 0x100;
            static constexpr std::uintptr_t BoundsChangedDelegate = 0x110;
            static constexpr std::uintptr_t bNormalizeAssembly = 0x120;
            static constexpr std::uintptr_t TargetActors = 0x128;
            static constexpr std::uintptr_t Bounds = 0x138;
            static constexpr std::uintptr_t LastEvent = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"TargetActorsChangedDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"BeginAssembleDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"BeginDisassembleDelegate", 0xE0, "MulticastInlineDelegateProperty"},
            {"FullyAssembledDelegate", 0xF0, "MulticastInlineDelegateProperty"},
            {"FullyDisassembledDelegate", 0x100, "MulticastInlineDelegateProperty"},
            {"BoundsChangedDelegate", 0x110, "MulticastInlineDelegateProperty"},
            {"bNormalizeAssembly", 0x120, "BoolProperty"},
            {"TargetActors", 0x128, "ArrayProperty"},
            {"Bounds", 0x138, "StructProperty"},
            {"LastEvent", 0x170, "EnumProperty"},
        }};
    };

    struct LimeGeometryAssemblyComponent
    {
        static constexpr std::string_view Name = "LimeGeometryAssemblyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AtomGeometryAssemblyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageImmunityEffectClass = 0x198;
            static constexpr std::uintptr_t PreviewActor = 0x1A0;
            static constexpr std::uintptr_t bWantsPreviewActorVisible = 0x1A8;
            static constexpr std::uintptr_t bIsPreviewActorVisible = 0x1A9;
            static constexpr std::uintptr_t DamageImmunityHandle = 0x1AC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DamageImmunityEffectClass", 0x198, "ClassProperty"},
            {"PreviewActor", 0x1A0, "ObjectProperty"},
            {"bWantsPreviewActorVisible", 0x1A8, "BoolProperty"},
            {"bIsPreviewActorVisible", 0x1A9, "BoolProperty"},
            {"DamageImmunityHandle", 0x1AC, "StructProperty"},
        }};
    };

    struct LimeGeometryAssemblyComponent_BrickRain
    {
        static constexpr std::string_view Name = "LimeGeometryAssemblyComponent_BrickRain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LimeGeometryAssemblyComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TotalGeometryCount = 0x1C0;
            static constexpr std::uintptr_t GeometryAssemblyRate = 0x1C4;
            static constexpr std::uintptr_t SingleGeometryDuration = 0x1C8;
            static constexpr std::uintptr_t DisassembledZDistance = 0x1CC;
            static constexpr std::uintptr_t DisassembledZDistanceRandomRatio = 0x1D0;
            static constexpr std::uintptr_t DisassembledRotationAmount = 0x1D4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TotalGeometryCount", 0x1C0, "IntProperty"},
            {"GeometryAssemblyRate", 0x1C4, "FloatProperty"},
            {"SingleGeometryDuration", 0x1C8, "FloatProperty"},
            {"DisassembledZDistance", 0x1CC, "FloatProperty"},
            {"DisassembledZDistanceRandomRatio", 0x1D0, "FloatProperty"},
            {"DisassembledRotationAmount", 0x1D4, "FloatProperty"},
        }};
    };

}
