/**
 * decamp dumper generated SDK
 * Package: /Script/AIDebuggerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AIDebuggerRuntime.AIDebuggerCheatManager
// Kind: Class; super: ChildCheatManager
class UAIDebuggerCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIDebuggerRuntime.AIDebuggerRendererComponent
// Kind: Class; super: PrimitiveComponent
class UAIDebuggerRendererComponent
{
public:
    std::uint8_t Pad_0000[0x618]; // 0x0000
    void* NavMeshMaterial; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    float NavLinkLineThickness; // 0x0620 (Size: 0x4, Type: FloatProperty)
    float NavLinkMaxDrawDistance; // 0x0624 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAIDebuggerRendererComponent, NavMeshMaterial) == 1560, "Offset mismatch for UAIDebuggerRendererComponent::NavMeshMaterial");
static_assert(offsetof(UAIDebuggerRendererComponent, NavLinkLineThickness) == 1568, "Offset mismatch for UAIDebuggerRendererComponent::NavLinkLineThickness");
static_assert(offsetof(UAIDebuggerRendererComponent, NavLinkMaxDrawDistance) == 1572, "Offset mismatch for UAIDebuggerRendererComponent::NavLinkMaxDrawDistance");

// /Script/AIDebuggerRuntime.FortControllerComponent_AIDebugger
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_AIDebugger
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* OwnerPC; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* NavMeshRendererComponentClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DefaultEnabledVisualizers; // 0x00D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D9
    std::int32_t DefaultNavDataIndexToDisplay; // 0x00DC (Size: 0x4, Type: IntProperty)
    std::uint8_t EnabledVisualizers; // 0x00E0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NumNavMeshes; // 0x00E1 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortControllerComponent_AIDebugger, OwnerPC) == 200, "Offset mismatch for UFortControllerComponent_AIDebugger::OwnerPC");
static_assert(offsetof(UFortControllerComponent_AIDebugger, NavMeshRendererComponentClass) == 208, "Offset mismatch for UFortControllerComponent_AIDebugger::NavMeshRendererComponentClass");
static_assert(offsetof(UFortControllerComponent_AIDebugger, DefaultEnabledVisualizers) == 216, "Offset mismatch for UFortControllerComponent_AIDebugger::DefaultEnabledVisualizers");
static_assert(offsetof(UFortControllerComponent_AIDebugger, DefaultNavDataIndexToDisplay) == 220, "Offset mismatch for UFortControllerComponent_AIDebugger::DefaultNavDataIndexToDisplay");
static_assert(offsetof(UFortControllerComponent_AIDebugger, EnabledVisualizers) == 224, "Offset mismatch for UFortControllerComponent_AIDebugger::EnabledVisualizers");
static_assert(offsetof(UFortControllerComponent_AIDebugger, NumNavMeshes) == 225, "Offset mismatch for UFortControllerComponent_AIDebugger::NumNavMeshes");
