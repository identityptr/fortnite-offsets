/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteVersion
 */
#pragma once
#include "Basic.h"

// /Script/FortniteVersion.FortReleaseVersion
// Kind: ScriptStruct; super: none
struct FFortReleaseVersion
{
public:
    FName VersionName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortReleaseVersion, VersionName) == 0, "Offset mismatch for FFortReleaseVersion::VersionName");

// /Script/FortniteVersion.FortReleaseVersionRange
// Kind: ScriptStruct; super: none
struct FFortReleaseVersionRange
{
public:
    std::uint8_t InclusiveMin[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExclusiveMax[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t VersionMax[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortReleaseVersionRange, InclusiveMin) == 0, "Offset mismatch for FFortReleaseVersionRange::InclusiveMin");
static_assert(offsetof(FFortReleaseVersionRange, ExclusiveMax) == 4, "Offset mismatch for FFortReleaseVersionRange::ExclusiveMax");
static_assert(offsetof(FFortReleaseVersionRange, VersionMax) == 8, "Offset mismatch for FFortReleaseVersionRange::VersionMax");
