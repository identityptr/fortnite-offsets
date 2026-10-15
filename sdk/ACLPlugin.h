/**
 * decamp dumper generated SDK
 * Package: /Script/ACLPlugin
 */
#pragma once
#include "Basic.h"

// /Script/ACLPlugin.AnimBoneCompressionCodec_ACL
// Kind: Class; super: AnimBoneCompressionCodec_ACLBase
class UAnimBoneCompressionCodec_ACL
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Description; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAnimBoneCompressionCodec_ACL, Description) == 40, "Offset mismatch for UAnimBoneCompressionCodec_ACL::Description");

// /Script/ACLPlugin.AnimBoneCompressionCodec_ACLBase
// Kind: Class; super: AnimBoneCompressionCodec
class UAnimBoneCompressionCodec_ACLBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Description; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAnimBoneCompressionCodec_ACLBase, Description) == 40, "Offset mismatch for UAnimBoneCompressionCodec_ACLBase::Description");

// /Script/ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// Kind: Class; super: AnimBoneCompressionCodec_ACLBase
class UAnimBoneCompressionCodec_ACLCustom
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Description; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAnimBoneCompressionCodec_ACLCustom, Description) == 40, "Offset mismatch for UAnimBoneCompressionCodec_ACLCustom::Description");

// /Script/ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
// Kind: Class; super: AnimBoneCompressionCodec_ACLBase
class UAnimBoneCompressionCodec_ACLDatabase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* DatabaseAsset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnimBoneCompressionCodec_ACLDatabase, DatabaseAsset) == 56, "Offset mismatch for UAnimBoneCompressionCodec_ACLDatabase::DatabaseAsset");

// /Script/ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// Kind: Class; super: AnimBoneCompressionCodec_ACLBase
class UAnimBoneCompressionCodec_ACLSafe
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Description; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAnimBoneCompressionCodec_ACLSafe, Description) == 40, "Offset mismatch for UAnimBoneCompressionCodec_ACLSafe::Description");

// /Script/ACLPlugin.AnimCurveCompressionCodec_ACL
// Kind: Class; super: AnimCurveCompressionCodec
class UAnimCurveCompressionCodec_ACL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ACLPlugin.AnimationCompressionLibraryDatabase
// Kind: Class; super: Object
class UAnimationCompressionLibraryDatabase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CookedCompressedBytes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CookedAnimSequenceMappings; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0xD8]; // 0x0048
    std::uint32_t MaxStreamRequestSizeKB; // 0x0120 (Size: 0x4, Type: UInt32Property)
    std::uint8_t DefaultVisualFidelity; // 0x0124 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedCompressedBytes) == 40, "Offset mismatch for UAnimationCompressionLibraryDatabase::CookedCompressedBytes");
static_assert(offsetof(UAnimationCompressionLibraryDatabase, CookedAnimSequenceMappings) == 56, "Offset mismatch for UAnimationCompressionLibraryDatabase::CookedAnimSequenceMappings");
static_assert(offsetof(UAnimationCompressionLibraryDatabase, MaxStreamRequestSizeKB) == 288, "Offset mismatch for UAnimationCompressionLibraryDatabase::MaxStreamRequestSizeKB");
static_assert(offsetof(UAnimationCompressionLibraryDatabase, DefaultVisualFidelity) == 292, "Offset mismatch for UAnimationCompressionLibraryDatabase::DefaultVisualFidelity");
