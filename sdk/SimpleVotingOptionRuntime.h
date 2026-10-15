/**
 * decamp dumper generated SDK
 * Package: /Script/SimpleVotingOptionRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SimpleVotingOptionRuntime.PlayspaceComponent_VotingDevice
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_VotingDevice
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    FMulticastInlineDelegate OnDeviceRegistered; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDeviceUnregistered; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TSet<void*> RegisteredVotingDevices; // 0x0138 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UPlayspaceComponent_VotingDevice, OnDeviceRegistered) == 280, "Offset mismatch for UPlayspaceComponent_VotingDevice::OnDeviceRegistered");
static_assert(offsetof(UPlayspaceComponent_VotingDevice, OnDeviceUnregistered) == 296, "Offset mismatch for UPlayspaceComponent_VotingDevice::OnDeviceUnregistered");
static_assert(offsetof(UPlayspaceComponent_VotingDevice, RegisteredVotingDevices) == 312, "Offset mismatch for UPlayspaceComponent_VotingDevice::RegisteredVotingDevices");

// /Script/SimpleVotingOptionRuntime.VotingDeviceBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UVotingDeviceBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SimpleVotingOptionRuntime.VotingGroupViewModel
// Kind: Class; super: MVVMViewModelBase
class UVotingGroupViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsCurrentlyTied; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t CurrentVoteCount; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t TimeLimit; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsVoteActive; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    TArray<void*> VotingOptions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PollQuestion[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    FText VoteDescription; // 0x0098 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UVotingGroupViewModel, bIsCurrentlyTied) == 104, "Offset mismatch for UVotingGroupViewModel::bIsCurrentlyTied");
static_assert(offsetof(UVotingGroupViewModel, CurrentVoteCount) == 108, "Offset mismatch for UVotingGroupViewModel::CurrentVoteCount");
static_assert(offsetof(UVotingGroupViewModel, TimeLimit) == 112, "Offset mismatch for UVotingGroupViewModel::TimeLimit");
static_assert(offsetof(UVotingGroupViewModel, bIsVoteActive) == 116, "Offset mismatch for UVotingGroupViewModel::bIsVoteActive");
static_assert(offsetof(UVotingGroupViewModel, VotingOptions) == 120, "Offset mismatch for UVotingGroupViewModel::VotingOptions");
static_assert(offsetof(UVotingGroupViewModel, PollQuestion) == 136, "Offset mismatch for UVotingGroupViewModel::PollQuestion");
static_assert(offsetof(UVotingGroupViewModel, VoteDescription) == 152, "Offset mismatch for UVotingGroupViewModel::VoteDescription");

// /Script/SimpleVotingOptionRuntime.VotingOptionViewModel
// Kind: Class; super: MVVMViewModelBase
class UVotingOptionViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t VotingOptionText[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t VoteCount; // 0x0078 (Size: 0x4, Type: IntProperty)
    float Percentage; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsWinner; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerSelectedVote; // 0x0081 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVotingOptionViewModel, VotingOptionText) == 104, "Offset mismatch for UVotingOptionViewModel::VotingOptionText");
static_assert(offsetof(UVotingOptionViewModel, VoteCount) == 120, "Offset mismatch for UVotingOptionViewModel::VoteCount");
static_assert(offsetof(UVotingOptionViewModel, Percentage) == 124, "Offset mismatch for UVotingOptionViewModel::Percentage");
static_assert(offsetof(UVotingOptionViewModel, bIsWinner) == 128, "Offset mismatch for UVotingOptionViewModel::bIsWinner");
static_assert(offsetof(UVotingOptionViewModel, bPlayerSelectedVote) == 129, "Offset mismatch for UVotingOptionViewModel::bPlayerSelectedVote");
