/**
 * decamp dumper generated SDK
 * Package: /Script/PolarisCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PolarisCoreRuntime.PolarisChannelConfigData
// Kind: ScriptStruct; super: none
struct FPolarisChannelConfigData
{
public:
    FString ProductId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ChannelId; // 0x0010 (Size: 0x10, Type: StrProperty)
    TArray<void*> DefaultProductTags; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RequestDependencies; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    float InitializationTimeout; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPolarisChannelConfigData, ProductId) == 0, "Offset mismatch for FPolarisChannelConfigData::ProductId");
static_assert(offsetof(FPolarisChannelConfigData, ChannelId) == 16, "Offset mismatch for FPolarisChannelConfigData::ChannelId");
static_assert(offsetof(FPolarisChannelConfigData, DefaultProductTags) == 32, "Offset mismatch for FPolarisChannelConfigData::DefaultProductTags");
static_assert(offsetof(FPolarisChannelConfigData, RequestDependencies) == 48, "Offset mismatch for FPolarisChannelConfigData::RequestDependencies");
static_assert(offsetof(FPolarisChannelConfigData, InitializationTimeout) == 64, "Offset mismatch for FPolarisChannelConfigData::InitializationTimeout");

// /Script/PolarisCoreRuntime.PolarisChannel
// Kind: Class; super: Object
class UPolarisChannel
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> WeakLocalPlayer; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0040
    std::uint8_t ChannelConfigData[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPolarisChannel, WeakLocalPlayer) == 56, "Offset mismatch for UPolarisChannel::WeakLocalPlayer");
static_assert(offsetof(UPolarisChannel, ChannelConfigData) == 96, "Offset mismatch for UPolarisChannel::ChannelConfigData");

// /Script/PolarisCoreRuntime.PolarisRequestDependency
// Kind: Class; super: Object
class UPolarisRequestDependency
{
public:
    std::uint8_t Opaque[1];
};
