/**
 * decamp dumper generated SDK
 * Package: /Script/WildEstate_RenderingManagerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WildEstate_RenderingManagerRuntime.GameFeatureAction_RegisterWildEstateRendering
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_RegisterWildEstateRendering
{
public:
    std::uint8_t Opaque[1];
};


// /Script/WildEstate_RenderingManagerRuntime.WildEstateRenderingSubsystem
// Kind: Class; super: EngineSubsystem
class UWildEstateRenderingSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EnableSubsystemCreation[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t bActivateOnStart; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    TArray<void*> ActorClasses; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProcessInstancedStaticMeshComponents; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoAddBuildingActorClass; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoDisableBuildActorAllowHighlight; // 0x0072 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bProcessWildEstateSpecificContent; // 0x0073 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWildEstateContentCustomRenderDepthSettingToUse; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableBPMapsFilter; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0076
    TArray<void*> BPMapsToProcess; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialsNotToProcess; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DynamicDestructionMatOverridePtr[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> DynamicDestructionSystemOverridePtr; // 0x00B8 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UWildEstateRenderingSubsystem, EnableSubsystemCreation) == 48, "Offset mismatch for UWildEstateRenderingSubsystem::EnableSubsystemCreation");
static_assert(offsetof(UWildEstateRenderingSubsystem, bActivateOnStart) == 88, "Offset mismatch for UWildEstateRenderingSubsystem::bActivateOnStart");
static_assert(offsetof(UWildEstateRenderingSubsystem, ActorClasses) == 96, "Offset mismatch for UWildEstateRenderingSubsystem::ActorClasses");
static_assert(offsetof(UWildEstateRenderingSubsystem, bProcessInstancedStaticMeshComponents) == 112, "Offset mismatch for UWildEstateRenderingSubsystem::bProcessInstancedStaticMeshComponents");
static_assert(offsetof(UWildEstateRenderingSubsystem, bAutoAddBuildingActorClass) == 113, "Offset mismatch for UWildEstateRenderingSubsystem::bAutoAddBuildingActorClass");
static_assert(offsetof(UWildEstateRenderingSubsystem, bAutoDisableBuildActorAllowHighlight) == 114, "Offset mismatch for UWildEstateRenderingSubsystem::bAutoDisableBuildActorAllowHighlight");
static_assert(offsetof(UWildEstateRenderingSubsystem, bProcessWildEstateSpecificContent) == 115, "Offset mismatch for UWildEstateRenderingSubsystem::bProcessWildEstateSpecificContent");
static_assert(offsetof(UWildEstateRenderingSubsystem, bWildEstateContentCustomRenderDepthSettingToUse) == 116, "Offset mismatch for UWildEstateRenderingSubsystem::bWildEstateContentCustomRenderDepthSettingToUse");
static_assert(offsetof(UWildEstateRenderingSubsystem, bEnableBPMapsFilter) == 117, "Offset mismatch for UWildEstateRenderingSubsystem::bEnableBPMapsFilter");
static_assert(offsetof(UWildEstateRenderingSubsystem, BPMapsToProcess) == 120, "Offset mismatch for UWildEstateRenderingSubsystem::BPMapsToProcess");
static_assert(offsetof(UWildEstateRenderingSubsystem, MaterialsNotToProcess) == 136, "Offset mismatch for UWildEstateRenderingSubsystem::MaterialsNotToProcess");
static_assert(offsetof(UWildEstateRenderingSubsystem, DynamicDestructionMatOverridePtr) == 152, "Offset mismatch for UWildEstateRenderingSubsystem::DynamicDestructionMatOverridePtr");
static_assert(offsetof(UWildEstateRenderingSubsystem, DynamicDestructionSystemOverridePtr) == 184, "Offset mismatch for UWildEstateRenderingSubsystem::DynamicDestructionSystemOverridePtr");
