/**
 * decamp dumper generated SDK
 * Package: /Script/LaserGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LaserGameplayRuntime.LaserGridConnectionArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FLaserGridConnectionArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLaserGridConnectionArray, Entries) == 72, "Offset mismatch for FLaserGridConnectionArray::Entries");

// /Script/LaserGameplayRuntime.LaserGridConnectionEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FLaserGridConnectionEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t OutletConnection[0x2]; // 0x000C (Size: 0x2, Type: StructProperty)
    std::uint8_t State; // 0x000E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x000F
    void* LaserCapsuleComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FLaserGridConnectionEntry, OutletConnection) == 12, "Offset mismatch for FLaserGridConnectionEntry::OutletConnection");
static_assert(offsetof(FLaserGridConnectionEntry, State) == 14, "Offset mismatch for FLaserGridConnectionEntry::State");
static_assert(offsetof(FLaserGridConnectionEntry, LaserCapsuleComponent) == 16, "Offset mismatch for FLaserGridConnectionEntry::LaserCapsuleComponent");

// /Script/LaserGameplayRuntime.LaserGridOutletArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FLaserGridOutletArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLaserGridOutletArray, Entries) == 72, "Offset mismatch for FLaserGridOutletArray::Entries");

// /Script/LaserGameplayRuntime.LaserGridOutletEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FLaserGridOutletEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t InstanceIndex; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t State; // 0x000D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLaserGridOutletEntry, InstanceIndex) == 12, "Offset mismatch for FLaserGridOutletEntry::InstanceIndex");
static_assert(offsetof(FLaserGridOutletEntry, State) == 13, "Offset mismatch for FLaserGridOutletEntry::State");

// /Script/LaserGameplayRuntime.LaserGridPattern
// Kind: ScriptStruct; super: none
struct FLaserGridPattern
{
public:
    TArray<void*> OutletConnections; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float duration; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLaserGridPattern, OutletConnections) == 0, "Offset mismatch for FLaserGridPattern::OutletConnections");
static_assert(offsetof(FLaserGridPattern, duration) == 16, "Offset mismatch for FLaserGridPattern::duration");

// /Script/LaserGameplayRuntime.LaserOutletConnection
// Kind: ScriptStruct; super: none
struct FLaserOutletConnection
{
public:
    std::uint8_t PrimaryOutletIndex; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SecondaryOutletIndex; // 0x0001 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FLaserOutletConnection, PrimaryOutletIndex) == 0, "Offset mismatch for FLaserOutletConnection::PrimaryOutletIndex");
static_assert(offsetof(FLaserOutletConnection, SecondaryOutletIndex) == 1, "Offset mismatch for FLaserOutletConnection::SecondaryOutletIndex");

// /Script/LaserGameplayRuntime.BuildingGameplayActorLaserGrid
// Kind: Class; super: BuildingGameplayActor
class UBuildingGameplayActorLaserGrid
{
public:
    std::uint8_t Pad_0000[0x920]; // 0x0000
    FMulticastInlineDelegate OnLaserGridTriggered; // 0x0920 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLaserGridOutletDestroyed; // 0x0930 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> LaserGridPatterns; // 0x0940 (Size: 0x10, Type: ArrayProperty)
    float LaserPatternChangeWarningTime; // 0x0950 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0954
    TMap<void*, void*> LaserOutletToBuildingAttachmentMap; // 0x0958 (Size: 0x10, Type: MapProperty)
    std::uint8_t IgnoreActorTags[0x20]; // 0x0968 (Size: 0x20, Type: StructProperty)
    void* LaserCapsuleComponentClass; // 0x0988 (Size: 0x8, Type: ClassProperty)
    std::uint8_t LaserCapsuleCollisionRotationOffset[0x18]; // 0x0990 (Size: 0x18, Type: StructProperty)
    std::int32_t LaserCustomDataIndexForRandomizedVisuals; // 0x09A8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x09AC
    std::uint8_t LaserGridConnections[0x58]; // 0x09B0 (Size: 0x58, Type: StructProperty)
    TArray<void*> LocalLaserGridConnections; // 0x0A08 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0A18
    std::uint8_t LaserConnectionOffset[0x60]; // 0x0A20 (Size: 0x60, Type: StructProperty)
    std::uint8_t LaserOutletConnectionOffset[0x18]; // 0x0A80 (Size: 0x18, Type: StructProperty)
    void* SoundOutletTransitionOn; // 0x0A98 (Size: 0x8, Type: ObjectProperty)
    void* SoundLaserTransitionPrimaryOutlet; // 0x0AA0 (Size: 0x8, Type: ObjectProperty)
    void* SoundLaserTransitionSecondaryOutlet; // 0x0AA8 (Size: 0x8, Type: ObjectProperty)
    void* SoundLaserTransition; // 0x0AB0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t OutletMaterialCustomDataIndex_EmissiveEnabled; // 0x0AB8 (Size: 0x4, Type: IntProperty)
    std::int32_t OutletMaterialCustomDataIndex_DisableEmissivePulse; // 0x0ABC (Size: 0x4, Type: IntProperty)
    std::int32_t OutletMaterialCustomDataIndex_AnimTimestamp; // 0x0AC0 (Size: 0x4, Type: IntProperty)
    std::int32_t OutletMaterialCustomDataIndex_AnimTimestampDuration; // 0x0AC4 (Size: 0x4, Type: IntProperty)
    float MaterialCosineWavePeriod; // 0x0AC8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0ACC
    std::uint8_t OutletMaterialTransitionOffTimestampOffset[0x10]; // 0x0AD0 (Size: 0x10, Type: StructProperty)
    std::int32_t LaserMaterialCustomDataIndex_PulseEnabled; // 0x0AE0 (Size: 0x4, Type: IntProperty)
    std::int32_t LaserMaterialCustomDataIndex_RandomFlickeringSpeed; // 0x0AE4 (Size: 0x4, Type: IntProperty)
    std::int32_t LaserMaterialCustomDataIndex_AnimTimestamp; // 0x0AE8 (Size: 0x4, Type: IntProperty)
    std::int32_t LaserMaterialCustomDataIndex_PulseTimeOffset; // 0x0AEC (Size: 0x4, Type: IntProperty)
    std::uint8_t LaserMaterialRandomFlickeringSpeed[0x10]; // 0x0AF0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LaserGridOutlets[0x60]; // 0x0B00 (Size: 0x60, Type: StructProperty)
    void* HISMComponentOutlet; // 0x0B60 (Size: 0x8, Type: ObjectProperty)
    void* HISMComponentLaser; // 0x0B68 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnabled; // 0x0B70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0B71
    std::int32_t LaserGridPatternIndex; // 0x0B74 (Size: 0x4, Type: IntProperty)
    std::uint8_t LaserPatternTimerHandle[0x1]; // 0x0B78 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBuildingGameplayActorLaserGrid, OnLaserGridTriggered) == 2336, "Offset mismatch for UBuildingGameplayActorLaserGrid::OnLaserGridTriggered");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, OnLaserGridOutletDestroyed) == 2352, "Offset mismatch for UBuildingGameplayActorLaserGrid::OnLaserGridOutletDestroyed");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserGridPatterns) == 2368, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserGridPatterns");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserPatternChangeWarningTime) == 2384, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserPatternChangeWarningTime");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserOutletToBuildingAttachmentMap) == 2392, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserOutletToBuildingAttachmentMap");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, IgnoreActorTags) == 2408, "Offset mismatch for UBuildingGameplayActorLaserGrid::IgnoreActorTags");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserCapsuleComponentClass) == 2440, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserCapsuleComponentClass");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserCapsuleCollisionRotationOffset) == 2448, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserCapsuleCollisionRotationOffset");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserCustomDataIndexForRandomizedVisuals) == 2472, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserCustomDataIndexForRandomizedVisuals");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserGridConnections) == 2480, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserGridConnections");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LocalLaserGridConnections) == 2568, "Offset mismatch for UBuildingGameplayActorLaserGrid::LocalLaserGridConnections");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserConnectionOffset) == 2592, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserConnectionOffset");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserOutletConnectionOffset) == 2688, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserOutletConnectionOffset");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, SoundOutletTransitionOn) == 2712, "Offset mismatch for UBuildingGameplayActorLaserGrid::SoundOutletTransitionOn");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, SoundLaserTransitionPrimaryOutlet) == 2720, "Offset mismatch for UBuildingGameplayActorLaserGrid::SoundLaserTransitionPrimaryOutlet");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, SoundLaserTransitionSecondaryOutlet) == 2728, "Offset mismatch for UBuildingGameplayActorLaserGrid::SoundLaserTransitionSecondaryOutlet");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, SoundLaserTransition) == 2736, "Offset mismatch for UBuildingGameplayActorLaserGrid::SoundLaserTransition");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, OutletMaterialCustomDataIndex_EmissiveEnabled) == 2744, "Offset mismatch for UBuildingGameplayActorLaserGrid::OutletMaterialCustomDataIndex_EmissiveEnabled");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, OutletMaterialCustomDataIndex_DisableEmissivePulse) == 2748, "Offset mismatch for UBuildingGameplayActorLaserGrid::OutletMaterialCustomDataIndex_DisableEmissivePulse");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, OutletMaterialCustomDataIndex_AnimTimestamp) == 2752, "Offset mismatch for UBuildingGameplayActorLaserGrid::OutletMaterialCustomDataIndex_AnimTimestamp");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, OutletMaterialCustomDataIndex_AnimTimestampDuration) == 2756, "Offset mismatch for UBuildingGameplayActorLaserGrid::OutletMaterialCustomDataIndex_AnimTimestampDuration");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, MaterialCosineWavePeriod) == 2760, "Offset mismatch for UBuildingGameplayActorLaserGrid::MaterialCosineWavePeriod");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, OutletMaterialTransitionOffTimestampOffset) == 2768, "Offset mismatch for UBuildingGameplayActorLaserGrid::OutletMaterialTransitionOffTimestampOffset");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserMaterialCustomDataIndex_PulseEnabled) == 2784, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserMaterialCustomDataIndex_PulseEnabled");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserMaterialCustomDataIndex_RandomFlickeringSpeed) == 2788, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserMaterialCustomDataIndex_RandomFlickeringSpeed");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserMaterialCustomDataIndex_AnimTimestamp) == 2792, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserMaterialCustomDataIndex_AnimTimestamp");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserMaterialCustomDataIndex_PulseTimeOffset) == 2796, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserMaterialCustomDataIndex_PulseTimeOffset");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserMaterialRandomFlickeringSpeed) == 2800, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserMaterialRandomFlickeringSpeed");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserGridOutlets) == 2816, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserGridOutlets");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, HISMComponentOutlet) == 2912, "Offset mismatch for UBuildingGameplayActorLaserGrid::HISMComponentOutlet");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, HISMComponentLaser) == 2920, "Offset mismatch for UBuildingGameplayActorLaserGrid::HISMComponentLaser");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, bEnabled) == 2928, "Offset mismatch for UBuildingGameplayActorLaserGrid::bEnabled");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserGridPatternIndex) == 2932, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserGridPatternIndex");
static_assert(offsetof(UBuildingGameplayActorLaserGrid, LaserPatternTimerHandle) == 2936, "Offset mismatch for UBuildingGameplayActorLaserGrid::LaserPatternTimerHandle");

// /Script/LaserGameplayRuntime.LaserCapsuleComponent
// Kind: Class; super: CapsuleComponent
class ULaserCapsuleComponent
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    std::uint8_t CollisionWhenEnabled; // 0x05A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CollisionWhenDisabled; // 0x05A1 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(ULaserCapsuleComponent, CollisionWhenEnabled) == 1440, "Offset mismatch for ULaserCapsuleComponent::CollisionWhenEnabled");
static_assert(offsetof(ULaserCapsuleComponent, CollisionWhenDisabled) == 1441, "Offset mismatch for ULaserCapsuleComponent::CollisionWhenDisabled");

// /Script/LaserGameplayRuntime.LaserGridEditorComponent
// Kind: Class; super: ActorComponent
class ULaserGridEditorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t VisualizeLaserGridPatternIndex; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bVisualizeOutletIndex; // 0x00C4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULaserGridEditorComponent, VisualizeLaserGridPatternIndex) == 192, "Offset mismatch for ULaserGridEditorComponent::VisualizeLaserGridPatternIndex");
static_assert(offsetof(ULaserGridEditorComponent, bVisualizeOutletIndex) == 196, "Offset mismatch for ULaserGridEditorComponent::bVisualizeOutletIndex");
