/**
 * decamp dumper generated SDK
 * Package: /Script/FeralCorgiUIRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FeralCorgiUIRuntime.FeralCorgiPurchaseModal
// Kind: Class; super: CommonActivatableWidget
class UFeralCorgiPurchaseModal
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* IntroModalInputComp; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AcceptActionBinding[0x10]; // 0x04B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PrimaryContentSetup[0x1]; // 0x04C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFeralCorgiPurchaseModal, IntroModalInputComp) == 1192, "Offset mismatch for UFeralCorgiPurchaseModal::IntroModalInputComp");
static_assert(offsetof(UFeralCorgiPurchaseModal, AcceptActionBinding) == 1200, "Offset mismatch for UFeralCorgiPurchaseModal::AcceptActionBinding");
static_assert(offsetof(UFeralCorgiPurchaseModal, PrimaryContentSetup) == 1216, "Offset mismatch for UFeralCorgiPurchaseModal::PrimaryContentSetup");
