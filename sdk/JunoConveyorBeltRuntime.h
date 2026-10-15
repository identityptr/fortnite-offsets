/**
 * decamp dumper generated SDK
 * Package: /Script/JunoConveyorBeltRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JunoConveyorBeltRuntime.JunoItemSlottableCustomVerbData
// Kind: ScriptStruct; super: none
struct FJunoItemSlottableCustomVerbData
{
public:
    std::uint8_t CustomVerbTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint32_t Amount; // 0x0004 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FJunoItemSlottableCustomVerbData, CustomVerbTag) == 0, "Offset mismatch for FJunoItemSlottableCustomVerbData::CustomVerbTag");
static_assert(offsetof(FJunoItemSlottableCustomVerbData, Amount) == 4, "Offset mismatch for FJunoItemSlottableCustomVerbData::Amount");

// /Script/JunoConveyorBeltRuntime.JunoWorldConditionHasConveyorBeltSpace
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FJunoWorldConditionHasConveyorBeltSpace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ConveyorBeltActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    float RequiredAvailabilityFraction; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoWorldConditionHasConveyorBeltSpace, ConveyorBeltActorRef) == 16, "Offset mismatch for FJunoWorldConditionHasConveyorBeltSpace::ConveyorBeltActorRef");
static_assert(offsetof(FJunoWorldConditionHasConveyorBeltSpace, RequiredAvailabilityFraction) == 24, "Offset mismatch for FJunoWorldConditionHasConveyorBeltSpace::RequiredAvailabilityFraction");

// /Script/JunoConveyorBeltRuntime.JunoConveyorBelt
// Kind: Class; super: Actor
class UJunoConveyorBelt
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bShouldCloseLoop; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0271
    float ItemSpacing; // 0x0274 (Size: 0x4, Type: FloatProperty)
    float BeltSpeed; // 0x0278 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x027C
    TArray<void*> HiddenIndexRanges; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    void* SplineMeshComponentClass; // 0x0290 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ItemSlotActors; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* SplineComponent; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* FirstMesh; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    float SplineLength; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x8]; // 0x02BC
    float ItemSlotDistance; // 0x02C4 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Slots; // 0x02C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsRunning; // 0x02D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x02D9
    TArray<void*> HiddenDistanceRanges; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    double StartTime; // 0x02F0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UJunoConveyorBelt, bShouldCloseLoop) == 624, "Offset mismatch for UJunoConveyorBelt::bShouldCloseLoop");
static_assert(offsetof(UJunoConveyorBelt, ItemSpacing) == 628, "Offset mismatch for UJunoConveyorBelt::ItemSpacing");
static_assert(offsetof(UJunoConveyorBelt, BeltSpeed) == 632, "Offset mismatch for UJunoConveyorBelt::BeltSpeed");
static_assert(offsetof(UJunoConveyorBelt, HiddenIndexRanges) == 640, "Offset mismatch for UJunoConveyorBelt::HiddenIndexRanges");
static_assert(offsetof(UJunoConveyorBelt, SplineMeshComponentClass) == 656, "Offset mismatch for UJunoConveyorBelt::SplineMeshComponentClass");
static_assert(offsetof(UJunoConveyorBelt, ItemSlotActors) == 664, "Offset mismatch for UJunoConveyorBelt::ItemSlotActors");
static_assert(offsetof(UJunoConveyorBelt, SplineComponent) == 680, "Offset mismatch for UJunoConveyorBelt::SplineComponent");
static_assert(offsetof(UJunoConveyorBelt, FirstMesh) == 688, "Offset mismatch for UJunoConveyorBelt::FirstMesh");
static_assert(offsetof(UJunoConveyorBelt, SplineLength) == 696, "Offset mismatch for UJunoConveyorBelt::SplineLength");
static_assert(offsetof(UJunoConveyorBelt, ItemSlotDistance) == 708, "Offset mismatch for UJunoConveyorBelt::ItemSlotDistance");
static_assert(offsetof(UJunoConveyorBelt, Slots) == 712, "Offset mismatch for UJunoConveyorBelt::Slots");
static_assert(offsetof(UJunoConveyorBelt, bIsRunning) == 728, "Offset mismatch for UJunoConveyorBelt::bIsRunning");
static_assert(offsetof(UJunoConveyorBelt, HiddenDistanceRanges) == 736, "Offset mismatch for UJunoConveyorBelt::HiddenDistanceRanges");
static_assert(offsetof(UJunoConveyorBelt, StartTime) == 752, "Offset mismatch for UJunoConveyorBelt::StartTime");

// /Script/JunoConveyorBeltRuntime.JunoConveyorBeltHopperComponent
// Kind: Class; super: GameFrameworkComponent
class UJunoConveyorBeltHopperComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* InventoryComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemQuery[0x48]; // 0x00C8 (Size: 0x48, Type: StructProperty)
    TWeakObjectPtr<void> Belt; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t HopperType; // 0x0118 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJunoConveyorBeltHopperComponent, InventoryComponent) == 192, "Offset mismatch for UJunoConveyorBeltHopperComponent::InventoryComponent");
static_assert(offsetof(UJunoConveyorBeltHopperComponent, ItemQuery) == 200, "Offset mismatch for UJunoConveyorBeltHopperComponent::ItemQuery");
static_assert(offsetof(UJunoConveyorBeltHopperComponent, Belt) == 272, "Offset mismatch for UJunoConveyorBeltHopperComponent::Belt");
static_assert(offsetof(UJunoConveyorBeltHopperComponent, HopperType) == 280, "Offset mismatch for UJunoConveyorBeltHopperComponent::HopperType");

// /Script/JunoConveyorBeltRuntime.JunoItemSlottable
// Kind: Class; super: Actor
class UJunoItemSlottable
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t ItemQuery[0x48]; // 0x0278 (Size: 0x48, Type: StructProperty)
    std::uint8_t CustomVerbDesription[0x8]; // 0x02C0 (Size: 0x8, Type: StructProperty)
    void* SkeletalMeshComponent; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SlottedItem[0xA0]; // 0x02D0 (Size: 0xA0, Type: StructProperty)
    std::uint8_t SavedTransform[0x1]; // 0x0370 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoItemSlottable, ItemQuery) == 632, "Offset mismatch for UJunoItemSlottable::ItemQuery");
static_assert(offsetof(UJunoItemSlottable, CustomVerbDesription) == 704, "Offset mismatch for UJunoItemSlottable::CustomVerbDesription");
static_assert(offsetof(UJunoItemSlottable, SkeletalMeshComponent) == 712, "Offset mismatch for UJunoItemSlottable::SkeletalMeshComponent");
static_assert(offsetof(UJunoItemSlottable, SlottedItem) == 720, "Offset mismatch for UJunoItemSlottable::SlottedItem");
static_assert(offsetof(UJunoItemSlottable, SavedTransform) == 880, "Offset mismatch for UJunoItemSlottable::SavedTransform");
