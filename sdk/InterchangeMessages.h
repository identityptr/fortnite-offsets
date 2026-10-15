/**
 * decamp dumper generated SDK
 * Package: /Script/InterchangeMessages
 */
#pragma once
#include "Basic.h"

// /Script/InterchangeMessages.InterchangeResultMeshError
// Kind: Class; super: InterchangeResultError
class UInterchangeResultMeshError
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FString MeshName; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultMeshError, MeshName) == 112, "Offset mismatch for UInterchangeResultMeshError::MeshName");

// /Script/InterchangeMessages.InterchangeResultMeshError_Generic
// Kind: Class; super: InterchangeResultMeshError
class UInterchangeResultMeshError_Generic
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FText Text; // 0x0080 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UInterchangeResultMeshError_Generic, Text) == 128, "Offset mismatch for UInterchangeResultMeshError_Generic::Text");

// /Script/InterchangeMessages.InterchangeResultMeshWarning
// Kind: Class; super: InterchangeResultWarning
class UInterchangeResultMeshWarning
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FString MeshName; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultMeshWarning, MeshName) == 112, "Offset mismatch for UInterchangeResultMeshWarning::MeshName");

// /Script/InterchangeMessages.InterchangeResultMeshWarning_Generic
// Kind: Class; super: InterchangeResultMeshWarning
class UInterchangeResultMeshWarning_Generic
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FText Text; // 0x0080 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UInterchangeResultMeshWarning_Generic, Text) == 128, "Offset mismatch for UInterchangeResultMeshWarning_Generic::Text");

// /Script/InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
// Kind: Class; super: InterchangeResultMeshWarning
class UInterchangeResultMeshWarning_TooManyUVs
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::int32_t ExcessUVs; // 0x0080 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UInterchangeResultMeshWarning_TooManyUVs, ExcessUVs) == 128, "Offset mismatch for UInterchangeResultMeshWarning_TooManyUVs::ExcessUVs");

// /Script/InterchangeMessages.InterchangeResultTextureDisplay
// Kind: Class; super: InterchangeResultDisplay_Generic
class UInterchangeResultTextureDisplay
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FString TextureName; // 0x0080 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultTextureDisplay, TextureName) == 128, "Offset mismatch for UInterchangeResultTextureDisplay::TextureName");

// /Script/InterchangeMessages.InterchangeResultTextureDisplay_TextureFileDoNotExist
// Kind: Class; super: InterchangeResultTextureDisplay
class UInterchangeResultTextureDisplay_TextureFileDoNotExist
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    FString MaterialName; // 0x0090 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultTextureDisplay_TextureFileDoNotExist, MaterialName) == 144, "Offset mismatch for UInterchangeResultTextureDisplay_TextureFileDoNotExist::MaterialName");

// /Script/InterchangeMessages.InterchangeResultTextureWarning
// Kind: Class; super: InterchangeResultWarning
class UInterchangeResultTextureWarning
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FString TextureName; // 0x0070 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UInterchangeResultTextureWarning, TextureName) == 112, "Offset mismatch for UInterchangeResultTextureWarning::TextureName");
