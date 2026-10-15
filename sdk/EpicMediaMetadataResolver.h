/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaMetadataResolver
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver
// Kind: Class; super: Object
class UEpicMediaMetadataResolver
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate MetadataResultExt; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CDNHostNames; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0040
    std::uint8_t MediaOptions[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEpicMediaMetadataResolver, MetadataResultExt) == 40, "Offset mismatch for UEpicMediaMetadataResolver::MetadataResultExt");
static_assert(offsetof(UEpicMediaMetadataResolver, CDNHostNames) == 56, "Offset mismatch for UEpicMediaMetadataResolver::CDNHostNames");
static_assert(offsetof(UEpicMediaMetadataResolver, MediaOptions) == 80, "Offset mismatch for UEpicMediaMetadataResolver::MediaOptions");
