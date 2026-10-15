/**
 * decamp dumper generated SDK
 * Package: /Script/AuroraFortniteRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AuroraFortniteRuntime.AuroraFortnitePlayerControllerComponent
// Kind: Class; super: AuroraPlayerControllerComponent
class UAuroraFortnitePlayerControllerComponent
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    void* PurchaseImplementationClass; // 0x0138 (Size: 0x8, Type: ClassProperty)
    std::uint8_t OwnedEntitlementQuantities[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAuroraFortnitePlayerControllerComponent, PurchaseImplementationClass) == 312, "Offset mismatch for UAuroraFortnitePlayerControllerComponent::PurchaseImplementationClass");
static_assert(offsetof(UAuroraFortnitePlayerControllerComponent, OwnedEntitlementQuantities) == 320, "Offset mismatch for UAuroraFortnitePlayerControllerComponent::OwnedEntitlementQuantities");

// /Script/AuroraFortniteRuntime.CustomDebugCommand_AuroraDisplayStoreUI
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_AuroraDisplayStoreUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_AuroraDisplayStoreUI, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_AuroraDisplayStoreUI::CommandName");
static_assert(offsetof(UCustomDebugCommand_AuroraDisplayStoreUI, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_AuroraDisplayStoreUI::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_AuroraDisplayStoreUI, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_AuroraDisplayStoreUI::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_AuroraDisplayStoreUI, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_AuroraDisplayStoreUI::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_AuroraDisplayStoreUI, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_AuroraDisplayStoreUI::UserInterface");
static_assert(offsetof(UCustomDebugCommand_AuroraDisplayStoreUI, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_AuroraDisplayStoreUI::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_AuroraDisplayStoreUI, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_AuroraDisplayStoreUI::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_AuroraDisplayStoreUI, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_AuroraDisplayStoreUI::CommandState");

// /Script/AuroraFortniteRuntime.CustomDebugCommand_AuroraForceClawbackAll
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_AuroraForceClawbackAll
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_AuroraForceClawbackAll, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_AuroraForceClawbackAll::CommandName");
static_assert(offsetof(UCustomDebugCommand_AuroraForceClawbackAll, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_AuroraForceClawbackAll::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_AuroraForceClawbackAll, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_AuroraForceClawbackAll::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_AuroraForceClawbackAll, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_AuroraForceClawbackAll::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_AuroraForceClawbackAll, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_AuroraForceClawbackAll::UserInterface");
static_assert(offsetof(UCustomDebugCommand_AuroraForceClawbackAll, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_AuroraForceClawbackAll::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_AuroraForceClawbackAll, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_AuroraForceClawbackAll::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_AuroraForceClawbackAll, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_AuroraForceClawbackAll::CommandState");

// /Script/AuroraFortniteRuntime.CustomDebugCommand_AuroraGrantAllEntitlement
// Kind: Class; super: CustomDebugCommand_AuroraGrantEntitlement
class UCustomDebugCommand_AuroraGrantAllEntitlement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_AuroraGrantAllEntitlement, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_AuroraGrantAllEntitlement::CommandName");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantAllEntitlement, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_AuroraGrantAllEntitlement::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantAllEntitlement, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_AuroraGrantAllEntitlement::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantAllEntitlement, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_AuroraGrantAllEntitlement::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantAllEntitlement, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_AuroraGrantAllEntitlement::UserInterface");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantAllEntitlement, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_AuroraGrantAllEntitlement::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantAllEntitlement, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_AuroraGrantAllEntitlement::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantAllEntitlement, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_AuroraGrantAllEntitlement::CommandState");

// /Script/AuroraFortniteRuntime.CustomDebugCommand_AuroraGrantEntitlement
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_AuroraGrantEntitlement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_AuroraGrantEntitlement, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_AuroraGrantEntitlement::CommandName");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantEntitlement, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_AuroraGrantEntitlement::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantEntitlement, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_AuroraGrantEntitlement::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantEntitlement, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_AuroraGrantEntitlement::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantEntitlement, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_AuroraGrantEntitlement::UserInterface");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantEntitlement, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_AuroraGrantEntitlement::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantEntitlement, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_AuroraGrantEntitlement::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantEntitlement, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_AuroraGrantEntitlement::CommandState");

// /Script/AuroraFortniteRuntime.CustomDebugCommand_AuroraGrantOneEntitlement
// Kind: Class; super: CustomDebugCommand_AuroraGrantEntitlement
class UCustomDebugCommand_AuroraGrantOneEntitlement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_AuroraGrantOneEntitlement, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_AuroraGrantOneEntitlement::CommandName");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantOneEntitlement, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_AuroraGrantOneEntitlement::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantOneEntitlement, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_AuroraGrantOneEntitlement::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantOneEntitlement, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_AuroraGrantOneEntitlement::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantOneEntitlement, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_AuroraGrantOneEntitlement::UserInterface");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantOneEntitlement, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_AuroraGrantOneEntitlement::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantOneEntitlement, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_AuroraGrantOneEntitlement::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_AuroraGrantOneEntitlement, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_AuroraGrantOneEntitlement::CommandState");

// /Script/AuroraFortniteRuntime.CustomDebugCommand_AuroraPrintOwnedEntitlements
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_AuroraPrintOwnedEntitlements
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_AuroraPrintOwnedEntitlements, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_AuroraPrintOwnedEntitlements::CommandName");
static_assert(offsetof(UCustomDebugCommand_AuroraPrintOwnedEntitlements, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_AuroraPrintOwnedEntitlements::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_AuroraPrintOwnedEntitlements, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_AuroraPrintOwnedEntitlements::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_AuroraPrintOwnedEntitlements, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_AuroraPrintOwnedEntitlements::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_AuroraPrintOwnedEntitlements, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_AuroraPrintOwnedEntitlements::UserInterface");
static_assert(offsetof(UCustomDebugCommand_AuroraPrintOwnedEntitlements, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_AuroraPrintOwnedEntitlements::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_AuroraPrintOwnedEntitlements, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_AuroraPrintOwnedEntitlements::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_AuroraPrintOwnedEntitlements, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_AuroraPrintOwnedEntitlements::CommandState");

// /Script/AuroraFortniteRuntime.CustomDebugCommand_AuroraPurchasesAlwaysFail
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_AuroraPurchasesAlwaysFail
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bAlwaysFailPurchases; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomDebugCommand_AuroraPurchasesAlwaysFail, bAlwaysFailPurchases) == 224, "Offset mismatch for UCustomDebugCommand_AuroraPurchasesAlwaysFail::bAlwaysFailPurchases");
