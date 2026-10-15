/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeDebugMenuRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_CreativeDebugger
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t DebuggerEnabledByDataRegistry[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t VerseDebugDrawEnabledByDataRegistry[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationMeshEnabledByDataRegistry[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavigationPathsEnabledByDataRegistry[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t GhostModeEnabledByDataRegistry[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t InvincibilityEnabledByDataRegistry[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t FastIterationEnabledByDataRegistry[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    void* AIDebuggerClass; // 0x01E8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortControllerComponent_CreativeDebugger, DebuggerEnabledByDataRegistry) == 208, "Offset mismatch for UFortControllerComponent_CreativeDebugger::DebuggerEnabledByDataRegistry");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, VerseDebugDrawEnabledByDataRegistry) == 248, "Offset mismatch for UFortControllerComponent_CreativeDebugger::VerseDebugDrawEnabledByDataRegistry");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, NavigationMeshEnabledByDataRegistry) == 288, "Offset mismatch for UFortControllerComponent_CreativeDebugger::NavigationMeshEnabledByDataRegistry");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, NavigationPathsEnabledByDataRegistry) == 328, "Offset mismatch for UFortControllerComponent_CreativeDebugger::NavigationPathsEnabledByDataRegistry");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, GhostModeEnabledByDataRegistry) == 368, "Offset mismatch for UFortControllerComponent_CreativeDebugger::GhostModeEnabledByDataRegistry");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, InvincibilityEnabledByDataRegistry) == 408, "Offset mismatch for UFortControllerComponent_CreativeDebugger::InvincibilityEnabledByDataRegistry");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, FastIterationEnabledByDataRegistry) == 448, "Offset mismatch for UFortControllerComponent_CreativeDebugger::FastIterationEnabledByDataRegistry");
static_assert(offsetof(UFortControllerComponent_CreativeDebugger, AIDebuggerClass) == 488, "Offset mismatch for UFortControllerComponent_CreativeDebugger::AIDebuggerClass");
