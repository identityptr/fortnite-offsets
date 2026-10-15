/**
 * decamp dumper generated SDK
 * Package: /Script/CommChannelsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CommChannelsRuntime.CommChannelChannelView
// Kind: ScriptStruct; super: none
struct FCommChannelChannelView
{
public:
    std::uint8_t ChannelInput; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCommChannelChannelView, ChannelInput) == 0, "Offset mismatch for FCommChannelChannelView::ChannelInput");
static_assert(offsetof(FCommChannelChannelView, Value) == 4, "Offset mismatch for FCommChannelChannelView::Value");

// /Script/CommChannelsRuntime.CommChannelMessage
// Kind: ScriptStruct; super: none
struct FCommChannelMessage
{
public:
    std::uint8_t InputType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float DeltaTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCommChannelMessage, InputType) == 0, "Offset mismatch for FCommChannelMessage::InputType");
static_assert(offsetof(FCommChannelMessage, DeltaTime) == 4, "Offset mismatch for FCommChannelMessage::DeltaTime");

// /Script/CommChannelsRuntime.CommChannelNetworkView
// Kind: ScriptStruct; super: none
struct FCommChannelNetworkView
{
public:
    TArray<void*> Channels; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Nodes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCommChannelNetworkView, Channels) == 0, "Offset mismatch for FCommChannelNetworkView::Channels");
static_assert(offsetof(FCommChannelNetworkView, Nodes) == 16, "Offset mismatch for FCommChannelNetworkView::Nodes");

// /Script/CommChannelsRuntime.CommChannelNode
// Kind: ScriptStruct; super: none
struct FCommChannelNode
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TWeakObjectPtr<void> OwningObject; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FCommChannelNode, OwningObject) == 104, "Offset mismatch for FCommChannelNode::OwningObject");

// /Script/CommChannelsRuntime.CommChannelNodeView
// Kind: ScriptStruct; super: none
struct FCommChannelNodeView
{
public:
    TWeakObjectPtr<void> OwningObject; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> SubscribedChannels; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCommChannelNodeView, OwningObject) == 0, "Offset mismatch for FCommChannelNodeView::OwningObject");
static_assert(offsetof(FCommChannelNodeView, SubscribedChannels) == 8, "Offset mismatch for FCommChannelNodeView::SubscribedChannels");
