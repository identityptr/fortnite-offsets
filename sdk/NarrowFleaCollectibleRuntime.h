/**
 * decamp dumper generated SDK
 * Package: /Script/NarrowFleaCollectibleRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NarrowFleaCollectibleRuntime.CollectibleRingBurstRequest_Net
// Kind: ScriptStruct; super: none
struct FCollectibleRingBurstRequest_Net
{
public:
    TWeakObjectPtr<void> Instigator; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint32_t BurstId; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* RingConfig; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t StartLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnUpAxis[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float StartTimestamp; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Lifetime; // 0x004C (Size: 0x4, Type: FloatProperty)
    float InitialSpeed; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float Gravity; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float LaunchAngleDegrees; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float SpreadHalfAngleDegrees; // 0x005C (Size: 0x4, Type: FloatProperty)
    float SpawnRadius; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float OverlapRadius; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CollectionArmDelay; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RingCount; // 0x006C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    std::int32_t RandomSeed; // 0x0070 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCollectibleRingBurstRequest_Net, Instigator) == 0, "Offset mismatch for FCollectibleRingBurstRequest_Net::Instigator");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, BurstId) == 8, "Offset mismatch for FCollectibleRingBurstRequest_Net::BurstId");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, RingConfig) == 16, "Offset mismatch for FCollectibleRingBurstRequest_Net::RingConfig");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, StartLocation) == 24, "Offset mismatch for FCollectibleRingBurstRequest_Net::StartLocation");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, SpawnUpAxis) == 48, "Offset mismatch for FCollectibleRingBurstRequest_Net::SpawnUpAxis");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, StartTimestamp) == 72, "Offset mismatch for FCollectibleRingBurstRequest_Net::StartTimestamp");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, Lifetime) == 76, "Offset mismatch for FCollectibleRingBurstRequest_Net::Lifetime");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, InitialSpeed) == 80, "Offset mismatch for FCollectibleRingBurstRequest_Net::InitialSpeed");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, Gravity) == 84, "Offset mismatch for FCollectibleRingBurstRequest_Net::Gravity");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, LaunchAngleDegrees) == 88, "Offset mismatch for FCollectibleRingBurstRequest_Net::LaunchAngleDegrees");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, SpreadHalfAngleDegrees) == 92, "Offset mismatch for FCollectibleRingBurstRequest_Net::SpreadHalfAngleDegrees");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, SpawnRadius) == 96, "Offset mismatch for FCollectibleRingBurstRequest_Net::SpawnRadius");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, OverlapRadius) == 100, "Offset mismatch for FCollectibleRingBurstRequest_Net::OverlapRadius");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, CollectionArmDelay) == 104, "Offset mismatch for FCollectibleRingBurstRequest_Net::CollectionArmDelay");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, RingCount) == 108, "Offset mismatch for FCollectibleRingBurstRequest_Net::RingCount");
static_assert(offsetof(FCollectibleRingBurstRequest_Net, RandomSeed) == 112, "Offset mismatch for FCollectibleRingBurstRequest_Net::RandomSeed");

// /Script/NarrowFleaCollectibleRuntime.FortCollectibleRingLayer
// Kind: ScriptStruct; super: none
struct FFortCollectibleRingLayer
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Mesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MaterialOverrides; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyOffset; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0021
    std::uint8_t Offset[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t bFollowRingSpin; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortCollectibleRingLayer, bEnabled) == 0, "Offset mismatch for FFortCollectibleRingLayer::bEnabled");
static_assert(offsetof(FFortCollectibleRingLayer, Mesh) == 8, "Offset mismatch for FFortCollectibleRingLayer::Mesh");
static_assert(offsetof(FFortCollectibleRingLayer, MaterialOverrides) == 16, "Offset mismatch for FFortCollectibleRingLayer::MaterialOverrides");
static_assert(offsetof(FFortCollectibleRingLayer, bApplyOffset) == 32, "Offset mismatch for FFortCollectibleRingLayer::bApplyOffset");
static_assert(offsetof(FFortCollectibleRingLayer, Offset) == 48, "Offset mismatch for FFortCollectibleRingLayer::Offset");
static_assert(offsetof(FFortCollectibleRingLayer, bFollowRingSpin) == 144, "Offset mismatch for FFortCollectibleRingLayer::bFollowRingSpin");

// /Script/NarrowFleaCollectibleRuntime.FortCollectibleRingBurst
// Kind: Class; super: Actor
class UFortCollectibleRingBurst
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t Burst[0x78]; // 0x0270 (Size: 0x78, Type: StructProperty)
    std::uint32_t LiveRingMask; // 0x02E8 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UFortCollectibleRingBurst, Burst) == 624, "Offset mismatch for UFortCollectibleRingBurst::Burst");
static_assert(offsetof(UFortCollectibleRingBurst, LiveRingMask) == 744, "Offset mismatch for UFortCollectibleRingBurst::LiveRingMask");

// /Script/NarrowFleaCollectibleRuntime.FortCollectibleRingConfig
// Kind: Class; super: Object
class UFortCollectibleRingConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RingLayers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* SpawnSound; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* SparkleSystem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseMeshSparkle; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSparkleFollowsRingSpin; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004A
    std::uint8_t CollectGameplayCueTag[0x4]; // 0x004C (Size: 0x4, Type: StructProperty)
    std::uint8_t CollectGameplayEventTag[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    std::uint8_t InitialSpeed[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t Gravity[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    float SpinRate; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00AC
    std::uint8_t LaunchAngle[0x28]; // 0x00B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpreadHalfAngle[0x28]; // 0x00D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnRadius[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverlapRadius[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t CollectionArmDelay[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    float SparkleStartDelay; // 0x0178 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x017C
    std::uint8_t Lifetime[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    float BlinkDuration; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    float BlinkInterval; // 0x01AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBlinkViaCustomData; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TargetFilter; // 0x01B1 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortCollectibleRingConfig, RingLayers) == 40, "Offset mismatch for UFortCollectibleRingConfig::RingLayers");
static_assert(offsetof(UFortCollectibleRingConfig, SpawnSound) == 56, "Offset mismatch for UFortCollectibleRingConfig::SpawnSound");
static_assert(offsetof(UFortCollectibleRingConfig, SparkleSystem) == 64, "Offset mismatch for UFortCollectibleRingConfig::SparkleSystem");
static_assert(offsetof(UFortCollectibleRingConfig, bUseMeshSparkle) == 72, "Offset mismatch for UFortCollectibleRingConfig::bUseMeshSparkle");
static_assert(offsetof(UFortCollectibleRingConfig, bSparkleFollowsRingSpin) == 73, "Offset mismatch for UFortCollectibleRingConfig::bSparkleFollowsRingSpin");
static_assert(offsetof(UFortCollectibleRingConfig, CollectGameplayCueTag) == 76, "Offset mismatch for UFortCollectibleRingConfig::CollectGameplayCueTag");
static_assert(offsetof(UFortCollectibleRingConfig, CollectGameplayEventTag) == 80, "Offset mismatch for UFortCollectibleRingConfig::CollectGameplayEventTag");
static_assert(offsetof(UFortCollectibleRingConfig, InitialSpeed) == 88, "Offset mismatch for UFortCollectibleRingConfig::InitialSpeed");
static_assert(offsetof(UFortCollectibleRingConfig, Gravity) == 128, "Offset mismatch for UFortCollectibleRingConfig::Gravity");
static_assert(offsetof(UFortCollectibleRingConfig, SpinRate) == 168, "Offset mismatch for UFortCollectibleRingConfig::SpinRate");
static_assert(offsetof(UFortCollectibleRingConfig, LaunchAngle) == 176, "Offset mismatch for UFortCollectibleRingConfig::LaunchAngle");
static_assert(offsetof(UFortCollectibleRingConfig, SpreadHalfAngle) == 216, "Offset mismatch for UFortCollectibleRingConfig::SpreadHalfAngle");
static_assert(offsetof(UFortCollectibleRingConfig, SpawnRadius) == 256, "Offset mismatch for UFortCollectibleRingConfig::SpawnRadius");
static_assert(offsetof(UFortCollectibleRingConfig, OverlapRadius) == 296, "Offset mismatch for UFortCollectibleRingConfig::OverlapRadius");
static_assert(offsetof(UFortCollectibleRingConfig, CollectionArmDelay) == 336, "Offset mismatch for UFortCollectibleRingConfig::CollectionArmDelay");
static_assert(offsetof(UFortCollectibleRingConfig, SparkleStartDelay) == 376, "Offset mismatch for UFortCollectibleRingConfig::SparkleStartDelay");
static_assert(offsetof(UFortCollectibleRingConfig, Lifetime) == 384, "Offset mismatch for UFortCollectibleRingConfig::Lifetime");
static_assert(offsetof(UFortCollectibleRingConfig, BlinkDuration) == 424, "Offset mismatch for UFortCollectibleRingConfig::BlinkDuration");
static_assert(offsetof(UFortCollectibleRingConfig, BlinkInterval) == 428, "Offset mismatch for UFortCollectibleRingConfig::BlinkInterval");
static_assert(offsetof(UFortCollectibleRingConfig, bBlinkViaCustomData) == 432, "Offset mismatch for UFortCollectibleRingConfig::bBlinkViaCustomData");
static_assert(offsetof(UFortCollectibleRingConfig, TargetFilter) == 433, "Offset mismatch for UFortCollectibleRingConfig::TargetFilter");

// /Script/NarrowFleaCollectibleRuntime.FortCollectibleRingLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortCollectibleRingLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NarrowFleaCollectibleRuntime.FortCollectibleRingManager
// Kind: Class; super: Info
class UFortCollectibleRingManager
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    TArray<void*> RingRenderComponents; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCollectibleRingManager, RingRenderComponents) == 640, "Offset mismatch for UFortCollectibleRingManager::RingRenderComponents");

// /Script/NarrowFleaCollectibleRuntime.FortCollectibleRingWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UFortCollectibleRingWorldSubsystem
{
public:
    std::uint8_t Opaque[1];
};
