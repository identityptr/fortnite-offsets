/**
 * decamp dumper generated SDK
 * Package: /Script/VerseInput
 */
#pragma once
#include "Basic.h"

// /Script/VerseInput.VerseAvailableInputDevices
// Kind: ScriptStruct; super: none
struct FVerseAvailableInputDevices
{
public:
    std::uint8_t Gamepad; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Keyboard; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Mouse; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Touch; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVerseAvailableInputDevices, Gamepad) == 0, "Offset mismatch for FVerseAvailableInputDevices::Gamepad");
static_assert(offsetof(FVerseAvailableInputDevices, Keyboard) == 1, "Offset mismatch for FVerseAvailableInputDevices::Keyboard");
static_assert(offsetof(FVerseAvailableInputDevices, Mouse) == 2, "Offset mismatch for FVerseAvailableInputDevices::Mouse");
static_assert(offsetof(FVerseAvailableInputDevices, Touch) == 3, "Offset mismatch for FVerseAvailableInputDevices::Touch");

// /Script/VerseInput.VerseInputBoundInputActionData
// Kind: ScriptStruct; super: none
struct FVerseInputBoundInputActionData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseInput.VerseReplicatedInputBindingData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FVerseReplicatedInputBindingData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* BoundAction; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t BoundEventTypesInt; // 0x0018 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FVerseReplicatedInputBindingData, BoundAction) == 16, "Offset mismatch for FVerseReplicatedInputBindingData::BoundAction");
static_assert(offsetof(FVerseReplicatedInputBindingData, BoundEventTypesInt) == 24, "Offset mismatch for FVerseReplicatedInputBindingData::BoundEventTypesInt");

// /Script/VerseInput.VerseReplicatedInputBindingDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FVerseReplicatedInputBindingDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseReplicatedInputBindingDataArray, Entries) == 72, "Offset mismatch for FVerseReplicatedInputBindingDataArray::Entries");
static_assert(offsetof(FVerseReplicatedInputBindingDataArray, Owner) == 88, "Offset mismatch for FVerseReplicatedInputBindingDataArray::Owner");

// /Script/VerseInput.VerseReplicatedInputEntry
// Kind: ScriptStruct; super: none
struct FVerseReplicatedInputEntry
{
public:
    std::uint8_t InputValue[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float ElapsedTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TriggerEvent; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVerseReplicatedInputEntry, InputValue) == 0, "Offset mismatch for FVerseReplicatedInputEntry::InputValue");
static_assert(offsetof(FVerseReplicatedInputEntry, ElapsedTime) == 24, "Offset mismatch for FVerseReplicatedInputEntry::ElapsedTime");
static_assert(offsetof(FVerseReplicatedInputEntry, TriggerEvent) == 28, "Offset mismatch for FVerseReplicatedInputEntry::TriggerEvent");

// /Script/VerseInput.VerseViewportSnapshot
// Kind: ScriptStruct; super: none
struct FVerseViewportSnapshot
{
public:
    std::uint8_t ViewOrigin[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t ViewRotationRow0[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t ViewRotationRow1[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t ViewRotationRow2[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    std::uint8_t ViewRotationRow3[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t ProjectionRow0[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ProjectionRow1[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ProjectionRow2[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ProjectionRow3[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t ConstrainedViewRectMin[0x8]; // 0x0120 (Size: 0x8, Type: StructProperty)
    std::uint8_t ConstrainedViewRectMax[0x8]; // 0x0128 (Size: 0x8, Type: StructProperty)
    float DPIScale; // 0x0130 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVerseViewportSnapshot, ViewOrigin) == 0, "Offset mismatch for FVerseViewportSnapshot::ViewOrigin");
static_assert(offsetof(FVerseViewportSnapshot, ViewRotationRow0) == 32, "Offset mismatch for FVerseViewportSnapshot::ViewRotationRow0");
static_assert(offsetof(FVerseViewportSnapshot, ViewRotationRow1) == 64, "Offset mismatch for FVerseViewportSnapshot::ViewRotationRow1");
static_assert(offsetof(FVerseViewportSnapshot, ViewRotationRow2) == 96, "Offset mismatch for FVerseViewportSnapshot::ViewRotationRow2");
static_assert(offsetof(FVerseViewportSnapshot, ViewRotationRow3) == 128, "Offset mismatch for FVerseViewportSnapshot::ViewRotationRow3");
static_assert(offsetof(FVerseViewportSnapshot, ProjectionRow0) == 160, "Offset mismatch for FVerseViewportSnapshot::ProjectionRow0");
static_assert(offsetof(FVerseViewportSnapshot, ProjectionRow1) == 192, "Offset mismatch for FVerseViewportSnapshot::ProjectionRow1");
static_assert(offsetof(FVerseViewportSnapshot, ProjectionRow2) == 224, "Offset mismatch for FVerseViewportSnapshot::ProjectionRow2");
static_assert(offsetof(FVerseViewportSnapshot, ProjectionRow3) == 256, "Offset mismatch for FVerseViewportSnapshot::ProjectionRow3");
static_assert(offsetof(FVerseViewportSnapshot, ConstrainedViewRectMin) == 288, "Offset mismatch for FVerseViewportSnapshot::ConstrainedViewRectMin");
static_assert(offsetof(FVerseViewportSnapshot, ConstrainedViewRectMax) == 296, "Offset mismatch for FVerseViewportSnapshot::ConstrainedViewRectMax");
static_assert(offsetof(FVerseViewportSnapshot, DPIScale) == 304, "Offset mismatch for FVerseViewportSnapshot::DPIScale");

// /Script/VerseInput.InputModifierPinchDelta
// Kind: Class; super: InputModifier
class UInputModifierPinchDelta
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bCachePinchOrigin; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInputModifierPinchDelta, bCachePinchOrigin) == 72, "Offset mismatch for UInputModifierPinchDelta::bCachePinchOrigin");

// /Script/VerseInput.InputModifierScreenSpaceMousePosition
// Kind: Class; super: InputModifier
class UInputModifierScreenSpaceMousePosition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseInput.VerseInputEventsBase
// Kind: Class; super: Object
class UVerseInputEventsBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* AssociatedInputAction; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseInputEventsBase, AssociatedInputAction) == 40, "Offset mismatch for UVerseInputEventsBase::AssociatedInputAction");

// /Script/VerseInput.VerseReplicatedInputDataComponent
// Kind: Class; super: ActorComponent
class UVerseReplicatedInputDataComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnVerseInputActionsBoundInVerseChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> InputMappings; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RemovedInputMappingPriorities; // 0x00E8 (Size: 0x10, Type: MapProperty)
    void* InputComponent; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> InputEventMap; // 0x0100 (Size: 0x10, Type: MapProperty)
    std::uint8_t ActionsPendingBindingUpdate[0x10]; // 0x0110 (Size: 0x10, Type: SetProperty)
    std::uint8_t InputActionBindingData[0x60]; // 0x0120 (Size: 0x60, Type: StructProperty)
    TMap<void*, void*> ClientInputActionBindingHandles; // 0x0180 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerseReplicatedInputDataComponent, OnVerseInputActionsBoundInVerseChanged) == 200, "Offset mismatch for UVerseReplicatedInputDataComponent::OnVerseInputActionsBoundInVerseChanged");
static_assert(offsetof(UVerseReplicatedInputDataComponent, InputMappings) == 216, "Offset mismatch for UVerseReplicatedInputDataComponent::InputMappings");
static_assert(offsetof(UVerseReplicatedInputDataComponent, RemovedInputMappingPriorities) == 232, "Offset mismatch for UVerseReplicatedInputDataComponent::RemovedInputMappingPriorities");
static_assert(offsetof(UVerseReplicatedInputDataComponent, InputComponent) == 248, "Offset mismatch for UVerseReplicatedInputDataComponent::InputComponent");
static_assert(offsetof(UVerseReplicatedInputDataComponent, InputEventMap) == 256, "Offset mismatch for UVerseReplicatedInputDataComponent::InputEventMap");
static_assert(offsetof(UVerseReplicatedInputDataComponent, ActionsPendingBindingUpdate) == 272, "Offset mismatch for UVerseReplicatedInputDataComponent::ActionsPendingBindingUpdate");
static_assert(offsetof(UVerseReplicatedInputDataComponent, InputActionBindingData) == 288, "Offset mismatch for UVerseReplicatedInputDataComponent::InputActionBindingData");
static_assert(offsetof(UVerseReplicatedInputDataComponent, ClientInputActionBindingHandles) == 384, "Offset mismatch for UVerseReplicatedInputDataComponent::ClientInputActionBindingHandles");

// /Script/VerseInput.VerseViewportReplicationComponent
// Kind: Class; super: ActorComponent
class UVerseViewportReplicationComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Snapshot[0x140]; // 0x00C0 (Size: 0x140, Type: StructProperty)
    std::uint8_t bHasServerSnapshot; // 0x0200 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVerseViewportReplicationComponent, Snapshot) == 192, "Offset mismatch for UVerseViewportReplicationComponent::Snapshot");
static_assert(offsetof(UVerseViewportReplicationComponent, bHasServerSnapshot) == 512, "Offset mismatch for UVerseViewportReplicationComponent::bHasServerSnapshot");
