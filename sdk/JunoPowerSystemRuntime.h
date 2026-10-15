/**
 * decamp dumper generated SDK
 * Package: /Script/JunoPowerSystemRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoPowerSystemRuntime.ConsumerChannelPowerInfo
// Kind: ScriptStruct; super: none
struct FConsumerChannelPowerInfo
{
public:
    std::uint8_t Channel[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float Power; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FConsumerChannelPowerInfo, Channel) == 0, "Offset mismatch for FConsumerChannelPowerInfo::Channel");
static_assert(offsetof(FConsumerChannelPowerInfo, Power) == 4, "Offset mismatch for FConsumerChannelPowerInfo::Power");

// /Script/JunoPowerSystemRuntime.JunoPowerBank
// Kind: Class; super: JunoBuildingActor
class UJunoPowerBank
{
public:
    std::uint8_t Pad_0000[0xC18]; // 0x0000
    void* InventoryComponent; // 0x0C18 (Size: 0x8, Type: ObjectProperty)
    void* PowerManager; // 0x0C20 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPowerBank, InventoryComponent) == 3096, "Offset mismatch for UJunoPowerBank::InventoryComponent");
static_assert(offsetof(UJunoPowerBank, PowerManager) == 3104, "Offset mismatch for UJunoPowerBank::PowerManager");

// /Script/JunoPowerSystemRuntime.JunoPowerCenter
// Kind: Class; super: JunoBuildingActor
class UJunoPowerCenter
{
public:
    std::uint8_t Pad_0000[0xC18]; // 0x0000
    FMulticastInlineDelegate OnMaxPowerCapacityChanged; // 0x0C18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float PowerConsumed; // 0x0C28 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0C2C
    void* InventoryComponent; // 0x0C30 (Size: 0x8, Type: ObjectProperty)
    void* PowerItemDef; // 0x0C38 (Size: 0x8, Type: ObjectProperty)
    void* PowerManager; // 0x0C40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentPowerItemGUID[0x1]; // 0x0C48 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPowerCenter, OnMaxPowerCapacityChanged) == 3096, "Offset mismatch for UJunoPowerCenter::OnMaxPowerCapacityChanged");
static_assert(offsetof(UJunoPowerCenter, PowerConsumed) == 3112, "Offset mismatch for UJunoPowerCenter::PowerConsumed");
static_assert(offsetof(UJunoPowerCenter, InventoryComponent) == 3120, "Offset mismatch for UJunoPowerCenter::InventoryComponent");
static_assert(offsetof(UJunoPowerCenter, PowerItemDef) == 3128, "Offset mismatch for UJunoPowerCenter::PowerItemDef");
static_assert(offsetof(UJunoPowerCenter, PowerManager) == 3136, "Offset mismatch for UJunoPowerCenter::PowerManager");
static_assert(offsetof(UJunoPowerCenter, CurrentPowerItemGUID) == 3144, "Offset mismatch for UJunoPowerCenter::CurrentPowerItemGUID");

// /Script/JunoPowerSystemRuntime.JunoPowerConsumerComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoPowerConsumerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t PowerRequired_Curve[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    float PowerRequired; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    std::uint8_t ConsumptionInterval[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConsumerChannelTags[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> PowerManager; // 0x0120 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoPowerConsumerComponent, PowerRequired_Curve) == 192, "Offset mismatch for UJunoPowerConsumerComponent::PowerRequired_Curve");
static_assert(offsetof(UJunoPowerConsumerComponent, PowerRequired) == 208, "Offset mismatch for UJunoPowerConsumerComponent::PowerRequired");
static_assert(offsetof(UJunoPowerConsumerComponent, ConsumptionInterval) == 216, "Offset mismatch for UJunoPowerConsumerComponent::ConsumptionInterval");
static_assert(offsetof(UJunoPowerConsumerComponent, ConsumerChannelTags) == 256, "Offset mismatch for UJunoPowerConsumerComponent::ConsumerChannelTags");
static_assert(offsetof(UJunoPowerConsumerComponent, PowerManager) == 288, "Offset mismatch for UJunoPowerConsumerComponent::PowerManager");

// /Script/JunoPowerSystemRuntime.JunoPowerManagerComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoPowerManagerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    FMulticastInlineDelegate OnStartConsumingPowerEvent; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartConsumingPowerFailedEvent; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStopConsumingPowerEvent; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> AttachedPowerCenters; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AttachedPowerBanks; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConsumerChannelPowers; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> CurrentPowerCenter; // 0x0138 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t InfinitePowerSourceSet[0x10]; // 0x0140 (Size: 0x10, Type: SetProperty)
    std::uint8_t bHasInfinitePower; // 0x0150 (Size: 0x1, Type: BoolProperty)
    // 0x0150 BoolProperty bIsConsumingPower (shared storage)
    std::uint8_t Pad_0001[0xB]; // 0x0151
    std::uint8_t bIsNoPowerAudioQueued; // 0x015C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPowerManagerComponent, OnStartConsumingPowerEvent) == 216, "Offset mismatch for UJunoPowerManagerComponent::OnStartConsumingPowerEvent");
static_assert(offsetof(UJunoPowerManagerComponent, OnStartConsumingPowerFailedEvent) == 232, "Offset mismatch for UJunoPowerManagerComponent::OnStartConsumingPowerFailedEvent");
static_assert(offsetof(UJunoPowerManagerComponent, OnStopConsumingPowerEvent) == 248, "Offset mismatch for UJunoPowerManagerComponent::OnStopConsumingPowerEvent");
static_assert(offsetof(UJunoPowerManagerComponent, AttachedPowerCenters) == 264, "Offset mismatch for UJunoPowerManagerComponent::AttachedPowerCenters");
static_assert(offsetof(UJunoPowerManagerComponent, AttachedPowerBanks) == 280, "Offset mismatch for UJunoPowerManagerComponent::AttachedPowerBanks");
static_assert(offsetof(UJunoPowerManagerComponent, ConsumerChannelPowers) == 296, "Offset mismatch for UJunoPowerManagerComponent::ConsumerChannelPowers");
static_assert(offsetof(UJunoPowerManagerComponent, CurrentPowerCenter) == 312, "Offset mismatch for UJunoPowerManagerComponent::CurrentPowerCenter");
static_assert(offsetof(UJunoPowerManagerComponent, InfinitePowerSourceSet) == 320, "Offset mismatch for UJunoPowerManagerComponent::InfinitePowerSourceSet");
static_assert(offsetof(UJunoPowerManagerComponent, bHasInfinitePower) == 336, "Offset mismatch for UJunoPowerManagerComponent::bHasInfinitePower");
static_assert(offsetof(UJunoPowerManagerComponent, bIsNoPowerAudioQueued) == 348, "Offset mismatch for UJunoPowerManagerComponent::bIsNoPowerAudioQueued");

// /Script/JunoPowerSystemRuntime.JunoPowerSystemLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoPowerSystemLibrary
{
public:
    std::uint8_t Opaque[1];
};
