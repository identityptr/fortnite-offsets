/**
 * decamp dumper generated SDK
 * Package: /Script/StreamlineBlueprint
 */
#pragma once
#include "Basic.h"

// /Script/StreamlineBlueprint.StreamlineFeatureRequirements
// Kind: ScriptStruct; super: none
struct FStreamlineFeatureRequirements
{
public:
    std::uint8_t Support; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Requirements; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t RequiredOperatingSystemVersion[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t DetectedOperatingSystemVersion[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t RequiredDriverVersion[0xC]; // 0x001C (Size: 0xC, Type: StructProperty)
    std::uint8_t DetectedDriverVersion[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStreamlineFeatureRequirements, Support) == 0, "Offset mismatch for FStreamlineFeatureRequirements::Support");
static_assert(offsetof(FStreamlineFeatureRequirements, Requirements) == 1, "Offset mismatch for FStreamlineFeatureRequirements::Requirements");
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredOperatingSystemVersion) == 4, "Offset mismatch for FStreamlineFeatureRequirements::RequiredOperatingSystemVersion");
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedOperatingSystemVersion) == 16, "Offset mismatch for FStreamlineFeatureRequirements::DetectedOperatingSystemVersion");
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredDriverVersion) == 28, "Offset mismatch for FStreamlineFeatureRequirements::RequiredDriverVersion");
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedDriverVersion) == 40, "Offset mismatch for FStreamlineFeatureRequirements::DetectedDriverVersion");

// /Script/StreamlineBlueprint.StreamlineVersion
// Kind: ScriptStruct; super: none
struct FStreamlineVersion
{
public:
    std::int32_t Major; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Minor; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Build; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStreamlineVersion, Major) == 0, "Offset mismatch for FStreamlineVersion::Major");
static_assert(offsetof(FStreamlineVersion, Minor) == 4, "Offset mismatch for FStreamlineVersion::Minor");
static_assert(offsetof(FStreamlineVersion, Build) == 8, "Offset mismatch for FStreamlineVersion::Build");

// /Script/StreamlineBlueprint.StreamlineLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UStreamlineLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
// Kind: Class; super: BlueprintFunctionLibrary
class UStreamlineLibraryDLSSG
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StreamlineBlueprint.StreamlineLibraryReflex
// Kind: Class; super: BlueprintFunctionLibrary
class UStreamlineLibraryReflex
{
public:
    std::uint8_t Opaque[1];
};
