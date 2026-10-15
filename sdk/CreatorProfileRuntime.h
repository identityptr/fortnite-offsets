/**
 * decamp dumper generated SDK
 * Package: /Script/CreatorProfileRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreatorProfileRuntime.CreatorProfileBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCreatorProfileBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CreatorProfileRuntime.FortPlayspaceComponent_CreatorProfile
// Kind: Class; super: FortPlayspaceComponent
class UFortPlayspaceComponent_CreatorProfile
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    FMulticastInlineDelegate OnCreatorSocialInfoUpdated; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0128
    TWeakObjectPtr<void> CachedPlayerController; // 0x0138 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> UpdatedCreatorSocialInfoStrings; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t HasCreatorSocialInfoFetched; // 0x0150 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPlayspaceComponent_CreatorProfile, OnCreatorSocialInfoUpdated) == 280, "Offset mismatch for UFortPlayspaceComponent_CreatorProfile::OnCreatorSocialInfoUpdated");
static_assert(offsetof(UFortPlayspaceComponent_CreatorProfile, CachedPlayerController) == 312, "Offset mismatch for UFortPlayspaceComponent_CreatorProfile::CachedPlayerController");
static_assert(offsetof(UFortPlayspaceComponent_CreatorProfile, UpdatedCreatorSocialInfoStrings) == 320, "Offset mismatch for UFortPlayspaceComponent_CreatorProfile::UpdatedCreatorSocialInfoStrings");
static_assert(offsetof(UFortPlayspaceComponent_CreatorProfile, HasCreatorSocialInfoFetched) == 336, "Offset mismatch for UFortPlayspaceComponent_CreatorProfile::HasCreatorSocialInfoFetched");
