#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Area51GunRuntime
{
    struct Area51LayerAnimInstance
    {
        static constexpr std::string_view Name = "Area51LayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemLayerAnimInstance_ChargedWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentJumpValue = 0x370;
            static constexpr std::uintptr_t CurrentOverheat = 0x378;
            static constexpr std::uintptr_t bLaserActive_Standing = 0x380;
            static constexpr std::uintptr_t bLaserActive_Crouching = 0x381;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentJumpValue", 0x370, "DoubleProperty"},
            {"CurrentOverheat", 0x378, "DoubleProperty"},
            {"bLaserActive_Standing", 0x380, "BoolProperty"},
            {"bLaserActive_Crouching", 0x381, "BoolProperty"},
        }};
    };

    struct Area51WeaponAnimInterface
    {
        static constexpr std::string_view Name = "Area51WeaponAnimInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChainLightningArc
    {
        static constexpr std::string_view Name = "ChainLightningArc";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StartLocation = 0x28;
            static constexpr std::uintptr_t EndLocation = 0x40;
            static constexpr std::uintptr_t StartNormal = 0x58;
            static constexpr std::uintptr_t EndNormal = 0x70;
            static constexpr std::uintptr_t PreviousTargetLocation = 0x88;
            static constexpr std::uintptr_t OwningComponent = 0xA0;
            static constexpr std::uintptr_t ChildArcs = 0xA8;
            static constexpr std::uintptr_t TargetActor = 0xB8;
            static constexpr std::uintptr_t ParentArc = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"StartLocation", 0x28, "StructProperty"},
            {"EndLocation", 0x40, "StructProperty"},
            {"StartNormal", 0x58, "StructProperty"},
            {"EndNormal", 0x70, "StructProperty"},
            {"PreviousTargetLocation", 0x88, "StructProperty"},
            {"OwningComponent", 0xA0, "WeakObjectProperty"},
            {"ChildArcs", 0xA8, "ArrayProperty"},
            {"TargetActor", 0xB8, "WeakObjectProperty"},
            {"ParentArc", 0xC0, "WeakObjectProperty"},
        }};
    };

    struct FortActorComponent_ChainLightning
    {
        static constexpr std::string_view Name = "FortActorComponent_ChainLightning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AddEquippedWeaponTagsToDamage = 0xC0;
            static constexpr std::uintptr_t ChainLightningTargetGE = 0xE8;
            static constexpr std::uintptr_t InitialTargetingUpdateRate = 0xF0;
            static constexpr std::uintptr_t InitialCosmeticArcEndpointRadiusMin = 0x118;
            static constexpr std::uintptr_t InitialCosmeticArcEndpointRadiusMax = 0x140;
            static constexpr std::uintptr_t InitialCosmeticArcMaxLength = 0x168;
            static constexpr std::uintptr_t InitialCosmeticArcStartpointRadius = 0x190;
            static constexpr std::uintptr_t InitialCosmeticArcAnglePrecision = 0x1B8;
            static constexpr std::uintptr_t InitialCosmeticArcTraceHeightMax = 0x1E0;
            static constexpr std::uintptr_t InitialCosmeticArcTraceHeightMin = 0x208;
            static constexpr std::uintptr_t ServerChainTickRate = 0x230;
            static constexpr std::uintptr_t ClientChainTickRate = 0x258;
            static constexpr std::uintptr_t NDCUpdateRate = 0x280;
            static constexpr std::uintptr_t MaxInitialTargets = 0x2A8;
            static constexpr std::uintptr_t ClientSideArcDamage = 0x2D0;
            static constexpr std::uintptr_t TickDamageOnArcAttachment = 0x2F8;
            static constexpr std::uintptr_t ComponentTraceLength = 0x320;
            static constexpr std::uintptr_t MaxNumComponentTraces = 0x348;
            static constexpr std::uintptr_t MaxNumChainsLOSPerTick = 0x370;
            static constexpr std::uintptr_t ArcLayerConfigs = 0x398;
            static constexpr std::uintptr_t InitialTargetingPreset = 0x3A8;
            static constexpr std::uintptr_t ArcTargetingPreset = 0x3B0;
            static constexpr std::uintptr_t LineOfSightCollisionChannel = 0x3B8;
            static constexpr std::uintptr_t LineOfSightImpactBackoffDistance = 0x3C0;
            static constexpr std::uintptr_t ArcLightningFxDataChannel = 0x3E8;
            static constexpr std::uintptr_t TargetingInstigator = 0x3F0;
            static constexpr std::uintptr_t ActiveChains = 0x3F8;
            static constexpr std::uintptr_t ActiveArcData = 0x408;
            static constexpr std::uintptr_t bLightningActive = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"AddEquippedWeaponTagsToDamage", 0xC0, "StructProperty"},
            {"ChainLightningTargetGE", 0xE8, "ClassProperty"},
            {"InitialTargetingUpdateRate", 0xF0, "StructProperty"},
            {"InitialCosmeticArcEndpointRadiusMin", 0x118, "StructProperty"},
            {"InitialCosmeticArcEndpointRadiusMax", 0x140, "StructProperty"},
            {"InitialCosmeticArcMaxLength", 0x168, "StructProperty"},
            {"InitialCosmeticArcStartpointRadius", 0x190, "StructProperty"},
            {"InitialCosmeticArcAnglePrecision", 0x1B8, "StructProperty"},
            {"InitialCosmeticArcTraceHeightMax", 0x1E0, "StructProperty"},
            {"InitialCosmeticArcTraceHeightMin", 0x208, "StructProperty"},
            {"ServerChainTickRate", 0x230, "StructProperty"},
            {"ClientChainTickRate", 0x258, "StructProperty"},
            {"NDCUpdateRate", 0x280, "StructProperty"},
            {"MaxInitialTargets", 0x2A8, "StructProperty"},
            {"ClientSideArcDamage", 0x2D0, "StructProperty"},
            {"TickDamageOnArcAttachment", 0x2F8, "StructProperty"},
            {"ComponentTraceLength", 0x320, "StructProperty"},
            {"MaxNumComponentTraces", 0x348, "StructProperty"},
            {"MaxNumChainsLOSPerTick", 0x370, "StructProperty"},
            {"ArcLayerConfigs", 0x398, "ArrayProperty"},
            {"InitialTargetingPreset", 0x3A8, "ObjectProperty"},
            {"ArcTargetingPreset", 0x3B0, "ObjectProperty"},
            {"LineOfSightCollisionChannel", 0x3B8, "ByteProperty"},
            {"LineOfSightImpactBackoffDistance", 0x3C0, "StructProperty"},
            {"ArcLightningFxDataChannel", 0x3E8, "ObjectProperty"},
            {"TargetingInstigator", 0x3F0, "WeakObjectProperty"},
            {"ActiveChains", 0x3F8, "ArrayProperty"},
            {"ActiveArcData", 0x408, "ArrayProperty"},
            {"bLightningActive", 0x478, "BoolProperty"},
        }};
    };

    struct TargetingSelectionTask_AOE_Area51Gun
    {
        static constexpr std::string_view Name = "TargetingSelectionTask_AOE_Area51Gun";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSelectionTask_AOE";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeType = 0x28;
            static constexpr std::uintptr_t CollisionChannel = 0x29;
            static constexpr std::uintptr_t CollisionProfileName = 0x2C;
            static constexpr std::uintptr_t CollisionObjectTypes = 0x30;
            static constexpr std::uintptr_t DefaultSourceOffset = 0x40;
            static constexpr std::uintptr_t DefaultSourceRotationOffset = 0x58;
            static constexpr std::uintptr_t bIgnoreInstigatorActor = 0x70;
            static constexpr std::uintptr_t bIgnoreSourceActor = 0x70;
            static constexpr std::uintptr_t bTraceComplex = 0x70;
            static constexpr std::uintptr_t bUseRelativeOffset = 0x70;
            static constexpr std::uintptr_t HalfExtentX = 0x78;
            static constexpr std::uintptr_t HalfExtentY = 0xA0;
            static constexpr std::uintptr_t HalfExtentZ = 0xC8;
            static constexpr std::uintptr_t Radius = 0xF0;
            static constexpr std::uintptr_t HalfHeight = 0x118;
            static constexpr std::uintptr_t ComponentTag = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ShapeType", 0x28, "EnumProperty"},
            {"CollisionChannel", 0x29, "ByteProperty"},
            {"CollisionProfileName", 0x2C, "StructProperty"},
            {"CollisionObjectTypes", 0x30, "ArrayProperty"},
            {"DefaultSourceOffset", 0x40, "StructProperty"},
            {"DefaultSourceRotationOffset", 0x58, "StructProperty"},
            {"bIgnoreInstigatorActor", 0x70, "BoolProperty"},
            {"bIgnoreSourceActor", 0x70, "BoolProperty"},
            {"bTraceComplex", 0x70, "BoolProperty"},
            {"bUseRelativeOffset", 0x70, "BoolProperty"},
            {"HalfExtentX", 0x78, "StructProperty"},
            {"HalfExtentY", 0xA0, "StructProperty"},
            {"HalfExtentZ", 0xC8, "StructProperty"},
            {"Radius", 0xF0, "StructProperty"},
            {"HalfHeight", 0x118, "StructProperty"},
            {"ComponentTag", 0x140, "NameProperty"},
        }};
    };

}
