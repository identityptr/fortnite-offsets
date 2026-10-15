/**
 * decamp dumper generated SDK
 * Package: /Script/PolarisMotd
 */
#pragma once
#include "Basic.h"

// /Script/PolarisMotd.PolarisMotdImageDisplayGroup
// Kind: ScriptStruct; super: none
struct FPolarisMotdImageDisplayGroup
{
public:
    std::uint8_t Header[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Body[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    FString ImageUrl; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::int32_t ImageWidth; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t ImageHeight; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPolarisMotdImageDisplayGroup, Header) == 0, "Offset mismatch for FPolarisMotdImageDisplayGroup::Header");
static_assert(offsetof(FPolarisMotdImageDisplayGroup, Body) == 16, "Offset mismatch for FPolarisMotdImageDisplayGroup::Body");
static_assert(offsetof(FPolarisMotdImageDisplayGroup, ImageUrl) == 32, "Offset mismatch for FPolarisMotdImageDisplayGroup::ImageUrl");
static_assert(offsetof(FPolarisMotdImageDisplayGroup, ImageWidth) == 48, "Offset mismatch for FPolarisMotdImageDisplayGroup::ImageWidth");
static_assert(offsetof(FPolarisMotdImageDisplayGroup, ImageHeight) == 52, "Offset mismatch for FPolarisMotdImageDisplayGroup::ImageHeight");
