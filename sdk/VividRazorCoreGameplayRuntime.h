/**
 * decamp dumper generated SDK
 * Package: /Script/VividRazorCoreGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VividRazorCoreGameplayRuntime.VividRazorPlayspace
// Kind: Class; super: FortPlayspace
class UVividRazorPlayspace
{
public:
    std::uint8_t Pad_0000[0x528]; // 0x0000
    FMulticastInlineDelegate NotifyInactivePlayspaceUserAdded; // 0x0528 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0538
    FMulticastInlineDelegate NotifyInactivePlayspaceUserRemoved; // 0x0550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0560
    std::uint8_t InactivePlayspaceUsers[0x78]; // 0x0578 (Size: 0x78, Type: StructProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x05F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x05F1
    std::uint8_t UserAcceptanceType; // 0x05F3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x4]; // 0x05F4
    std::uint8_t MatchmakingSettings[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    void* ReplicatedStateClass; // 0x0620 (Size: 0x8, Type: ClassProperty)
    void* ReplicatedState; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* EventRouter; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldCreateEventRouter; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0639
    TArray<void*> InactivePendingUsers; // 0x0640 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVividRazorPlayspace, NotifyInactivePlayspaceUserAdded) == 1320, "Offset mismatch for UVividRazorPlayspace::NotifyInactivePlayspaceUserAdded");
static_assert(offsetof(UVividRazorPlayspace, NotifyInactivePlayspaceUserRemoved) == 1360, "Offset mismatch for UVividRazorPlayspace::NotifyInactivePlayspaceUserRemoved");
static_assert(offsetof(UVividRazorPlayspace, InactivePlayspaceUsers) == 1400, "Offset mismatch for UVividRazorPlayspace::InactivePlayspaceUsers");
static_assert(offsetof(UVividRazorPlayspace, bSubscribeToMeshNetwork) == 1520, "Offset mismatch for UVividRazorPlayspace::bSubscribeToMeshNetwork");
static_assert(offsetof(UVividRazorPlayspace, UserAcceptanceType) == 1523, "Offset mismatch for UVividRazorPlayspace::UserAcceptanceType");
static_assert(offsetof(UVividRazorPlayspace, MatchmakingSettings) == 1528, "Offset mismatch for UVividRazorPlayspace::MatchmakingSettings");
static_assert(offsetof(UVividRazorPlayspace, ReplicatedStateClass) == 1568, "Offset mismatch for UVividRazorPlayspace::ReplicatedStateClass");
static_assert(offsetof(UVividRazorPlayspace, ReplicatedState) == 1576, "Offset mismatch for UVividRazorPlayspace::ReplicatedState");
static_assert(offsetof(UVividRazorPlayspace, EventRouter) == 1584, "Offset mismatch for UVividRazorPlayspace::EventRouter");
static_assert(offsetof(UVividRazorPlayspace, bShouldCreateEventRouter) == 1592, "Offset mismatch for UVividRazorPlayspace::bShouldCreateEventRouter");
static_assert(offsetof(UVividRazorPlayspace, InactivePendingUsers) == 1600, "Offset mismatch for UVividRazorPlayspace::InactivePendingUsers");
