/**
 * decamp dumper generated SDK
 * Package: /Script/EntityInteract
 */
#pragma once
#include "Basic.h"

// /Script/EntityInteract.EntityInteractLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UEntityInteractLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityInteract.EntityInteractProxyActor
// Kind: Class; super: Actor
class UEntityInteractProxyActor
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    std::uint8_t InteractText[0x10]; // 0x0298 (Size: 0x10, Type: TextProperty)
    std::uint8_t CannotInteractText[0x10]; // 0x02A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t CoolDownTimerHandle[0x8]; // 0x02B8 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> PerControllerOverriddenInteractDurationPlayerComponents; // 0x02C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PerControllerCooldownTimerHandlePlayerComponents; // 0x02D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> InteractingControllers; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> CachedInteractComponent; // 0x02F0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x02F8
    float ForwardInteractOffset; // 0x0308 (Size: 0x4, Type: FloatProperty)
    float RightInteractOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInteractEnabled; // 0x0310 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEntityInteractProxyActor, InteractText) == 664, "Offset mismatch for UEntityInteractProxyActor::InteractText");
static_assert(offsetof(UEntityInteractProxyActor, CannotInteractText) == 680, "Offset mismatch for UEntityInteractProxyActor::CannotInteractText");
static_assert(offsetof(UEntityInteractProxyActor, CoolDownTimerHandle) == 696, "Offset mismatch for UEntityInteractProxyActor::CoolDownTimerHandle");
static_assert(offsetof(UEntityInteractProxyActor, PerControllerOverriddenInteractDurationPlayerComponents) == 704, "Offset mismatch for UEntityInteractProxyActor::PerControllerOverriddenInteractDurationPlayerComponents");
static_assert(offsetof(UEntityInteractProxyActor, PerControllerCooldownTimerHandlePlayerComponents) == 720, "Offset mismatch for UEntityInteractProxyActor::PerControllerCooldownTimerHandlePlayerComponents");
static_assert(offsetof(UEntityInteractProxyActor, InteractingControllers) == 736, "Offset mismatch for UEntityInteractProxyActor::InteractingControllers");
static_assert(offsetof(UEntityInteractProxyActor, CachedInteractComponent) == 752, "Offset mismatch for UEntityInteractProxyActor::CachedInteractComponent");
static_assert(offsetof(UEntityInteractProxyActor, ForwardInteractOffset) == 776, "Offset mismatch for UEntityInteractProxyActor::ForwardInteractOffset");
static_assert(offsetof(UEntityInteractProxyActor, RightInteractOffset) == 780, "Offset mismatch for UEntityInteractProxyActor::RightInteractOffset");
static_assert(offsetof(UEntityInteractProxyActor, bInteractEnabled) == 784, "Offset mismatch for UEntityInteractProxyActor::bInteractEnabled");

// /Script/EntityInteract.FortAthenaMutator_EntityInteract
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_EntityInteract
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_EntityInteract, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_EntityInteract::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_EntityInteract, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_EntityInteract::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_EntityInteract, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_EntityInteract::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_EntityInteract, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_EntityInteract::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_EntityInteract, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_EntityInteract::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_EntityInteract, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_EntityInteract::bOnlyRunOnGameThread");
