/**
 * decamp dumper generated SDK
 * Package: /Script/VehicleCosmeticsAudioRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VehicleCosmeticsAudioRuntime.VehicleCosmeticsAudioReceiverComponent
// Kind: Class; super: ActorComponent
class UVehicleCosmeticsAudioReceiverComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnVehicleAudioCosmeticsStructUpdated; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleAudioCosmeticsFailed; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleAudioCosmeticsDataReady; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TSoftObjectPtr<void> CachedCosmeticDataTable; // 0x00F0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UVehicleCosmeticsAudioReceiverComponent, OnVehicleAudioCosmeticsStructUpdated) == 192, "Offset mismatch for UVehicleCosmeticsAudioReceiverComponent::OnVehicleAudioCosmeticsStructUpdated");
static_assert(offsetof(UVehicleCosmeticsAudioReceiverComponent, OnVehicleAudioCosmeticsFailed) == 208, "Offset mismatch for UVehicleCosmeticsAudioReceiverComponent::OnVehicleAudioCosmeticsFailed");
static_assert(offsetof(UVehicleCosmeticsAudioReceiverComponent, OnVehicleAudioCosmeticsDataReady) == 224, "Offset mismatch for UVehicleCosmeticsAudioReceiverComponent::OnVehicleAudioCosmeticsDataReady");
static_assert(offsetof(UVehicleCosmeticsAudioReceiverComponent, CachedCosmeticDataTable) == 240, "Offset mismatch for UVehicleCosmeticsAudioReceiverComponent::CachedCosmeticDataTable");
