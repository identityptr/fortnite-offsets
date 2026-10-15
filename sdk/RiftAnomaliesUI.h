/**
 * decamp dumper generated SDK
 * Package: /Script/RiftAnomaliesUI
 */
#pragma once
#include "Basic.h"

// /Script/RiftAnomaliesUI.OnRiftAnomaliesHelper
// Kind: ScriptStruct; super: none
struct FOnRiftAnomaliesHelper
{
public:
    TSoftObjectPtr<void> VM_MatchModifiersRef; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FOnRiftAnomaliesHelper, VM_MatchModifiersRef) == 0, "Offset mismatch for FOnRiftAnomaliesHelper::VM_MatchModifiersRef");

// /Script/RiftAnomaliesUI.RiftAnomaliesViewModel
// Kind: Class; super: FortPerUserViewModel
class URiftAnomaliesViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* Incoming_RiftAnomaliesData; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* Active_RiftAnomaliesData; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* Ended_RiftAnomaliesData; // 0x0088 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URiftAnomaliesViewModel, Incoming_RiftAnomaliesData) == 120, "Offset mismatch for URiftAnomaliesViewModel::Incoming_RiftAnomaliesData");
static_assert(offsetof(URiftAnomaliesViewModel, Active_RiftAnomaliesData) == 128, "Offset mismatch for URiftAnomaliesViewModel::Active_RiftAnomaliesData");
static_assert(offsetof(URiftAnomaliesViewModel, Ended_RiftAnomaliesData) == 136, "Offset mismatch for URiftAnomaliesViewModel::Ended_RiftAnomaliesData");
