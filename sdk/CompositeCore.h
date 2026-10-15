/**
 * decamp dumper generated SDK
 * Package: /Script/CompositeCore
 */
#pragma once
#include "Basic.h"

// /Script/CompositeCore.CompositeCorePluginSettings
// Kind: Class; super: DeveloperSettings
class UCompositeCorePluginSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bApplyPreExposure; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    TArray<void*> DisabledPrimitiveClasses; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedComponentClasses; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SceneViewExtensionPriority; // 0x0058 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCompositeCorePluginSettings, bApplyPreExposure) == 48, "Offset mismatch for UCompositeCorePluginSettings::bApplyPreExposure");
static_assert(offsetof(UCompositeCorePluginSettings, DisabledPrimitiveClasses) == 56, "Offset mismatch for UCompositeCorePluginSettings::DisabledPrimitiveClasses");
static_assert(offsetof(UCompositeCorePluginSettings, AllowedComponentClasses) == 72, "Offset mismatch for UCompositeCorePluginSettings::AllowedComponentClasses");
static_assert(offsetof(UCompositeCorePluginSettings, SceneViewExtensionPriority) == 88, "Offset mismatch for UCompositeCorePluginSettings::SceneViewExtensionPriority");

// /Script/CompositeCore.CompositeCoreSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UCompositeCoreSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CompositeCore.HoldoutCompositeComponent
// Kind: Class; super: SceneComponent
class UHoldoutCompositeComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0240 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHoldoutCompositeComponent, bIsEnabled) == 576, "Offset mismatch for UHoldoutCompositeComponent::bIsEnabled");
