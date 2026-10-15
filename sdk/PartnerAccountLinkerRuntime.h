/**
 * decamp dumper generated SDK
 * Package: /Script/PartnerAccountLinkerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PartnerAccountLinkerRuntime.PartnerAccountLinkComponent
// Kind: Class; super: ActorComponent
class UPartnerAccountLinkComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnAccountLinkStatus; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailed; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPartnerAccountLinkComponent, OnAccountLinkStatus) == 192, "Offset mismatch for UPartnerAccountLinkComponent::OnAccountLinkStatus");
static_assert(offsetof(UPartnerAccountLinkComponent, OnFailed) == 208, "Offset mismatch for UPartnerAccountLinkComponent::OnFailed");
