/**
 * decamp dumper generated SDK
 * Package: /Script/CRDPostProcess
 */
#pragma once
#include "Basic.h"

// /Script/CRDPostProcess.PostProcessDeviceMessage
// Kind: ScriptStruct; super: none
struct FPostProcessDeviceMessage
{
public:
    TWeakObjectPtr<void> PostProcessDevice; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerStateMessage; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t EndState; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPostProcessDeviceMessage, PostProcessDevice) == 0, "Offset mismatch for FPostProcessDeviceMessage::PostProcessDevice");
static_assert(offsetof(FPostProcessDeviceMessage, PlayerStateMessage) == 8, "Offset mismatch for FPostProcessDeviceMessage::PlayerStateMessage");
static_assert(offsetof(FPostProcessDeviceMessage, EndState) == 16, "Offset mismatch for FPostProcessDeviceMessage::EndState");

// /Script/CRDPostProcess.PostProcessDeviceMessageRepl
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FPostProcessDeviceMessageRepl
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::int32_t MessageIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> PostProcessDevice; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerStateMessage; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t EndState; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPostProcessDeviceMessageRepl, MessageIndex) == 12, "Offset mismatch for FPostProcessDeviceMessageRepl::MessageIndex");
static_assert(offsetof(FPostProcessDeviceMessageRepl, PostProcessDevice) == 16, "Offset mismatch for FPostProcessDeviceMessageRepl::PostProcessDevice");
static_assert(offsetof(FPostProcessDeviceMessageRepl, PlayerStateMessage) == 24, "Offset mismatch for FPostProcessDeviceMessageRepl::PlayerStateMessage");
static_assert(offsetof(FPostProcessDeviceMessageRepl, EndState) == 32, "Offset mismatch for FPostProcessDeviceMessageRepl::EndState");

// /Script/CRDPostProcess.PostProcessDeviceMessageRingBuffer
// Kind: ScriptStruct; super: FastArraySerializer
struct FPostProcessDeviceMessageRingBuffer
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPostProcessDeviceMessageRingBuffer, Items) == 72, "Offset mismatch for FPostProcessDeviceMessageRingBuffer::Items");

// /Script/CRDPostProcess.CRDPostProcessDeviceComponent
// Kind: Class; super: ActorComponent
class UCRDPostProcessDeviceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* PostProcessComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* BlendInstigator; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCRDPostProcessDeviceComponent, PostProcessComponent) == 192, "Offset mismatch for UCRDPostProcessDeviceComponent::PostProcessComponent");
static_assert(offsetof(UCRDPostProcessDeviceComponent, BlendInstigator) == 200, "Offset mismatch for UCRDPostProcessDeviceComponent::BlendInstigator");

// /Script/CRDPostProcess.CRDPostProcessDeviceControllerComponent
// Kind: Class; super: ActorComponent
class UCRDPostProcessDeviceControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPostProcessDeviceMessageRecieved; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostProcessDeviceBlendFinished; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PostProcessDeviceMessageBatch[0x78]; // 0x00E0 (Size: 0x78, Type: StructProperty)
    TArray<void*> PostProcessDeviceMessageQueue; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCRDPostProcessDeviceControllerComponent, OnPostProcessDeviceMessageRecieved) == 192, "Offset mismatch for UCRDPostProcessDeviceControllerComponent::OnPostProcessDeviceMessageRecieved");
static_assert(offsetof(UCRDPostProcessDeviceControllerComponent, OnPostProcessDeviceBlendFinished) == 208, "Offset mismatch for UCRDPostProcessDeviceControllerComponent::OnPostProcessDeviceBlendFinished");
static_assert(offsetof(UCRDPostProcessDeviceControllerComponent, PostProcessDeviceMessageBatch) == 224, "Offset mismatch for UCRDPostProcessDeviceControllerComponent::PostProcessDeviceMessageBatch");
static_assert(offsetof(UCRDPostProcessDeviceControllerComponent, PostProcessDeviceMessageQueue) == 344, "Offset mismatch for UCRDPostProcessDeviceControllerComponent::PostProcessDeviceMessageQueue");

// /Script/CRDPostProcess.CRDPostProcessDevicePriorityControllerComponent
// Kind: Class; super: ActorComponent
class UCRDPostProcessDevicePriorityControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> CachedAppliedEffects; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCRDPostProcessDevicePriorityControllerComponent, CachedAppliedEffects) == 192, "Offset mismatch for UCRDPostProcessDevicePriorityControllerComponent::CachedAppliedEffects");
