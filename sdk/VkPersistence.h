/**
 * decamp dumper generated SDK
 * Package: /Script/VkPersistence
 */
#pragma once
#include "Basic.h"

// /Script/VkPersistence.VkPersistenceVersion
// Kind: ScriptStruct; super: none
struct FVkPersistenceVersion
{
public:
    std::int32_t Version; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString Name; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVkPersistenceVersion, Version) == 0, "Offset mismatch for FVkPersistenceVersion::Version");
static_assert(offsetof(FVkPersistenceVersion, Name) == 8, "Offset mismatch for FVkPersistenceVersion::Name");

// /Script/VkPersistence.VkPersistence
// Kind: Class; super: Object
class UVkPersistence
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VkPersistence.VkPersistenceManager
// Kind: Class; super: Object
class UVkPersistenceManager
{
public:
    std::uint8_t Opaque[1];
};
