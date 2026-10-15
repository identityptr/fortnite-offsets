/**
 * decamp dumper generated SDK
 * Package: /Script/Configurable
 */
#pragma once
#include "Basic.h"

// /Script/Configurable.ConfigurablePtr
// Kind: ScriptStruct; super: none
struct FConfigurablePtr
{
public:
    void* ConfigurableInstance; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ConfigurableData; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FConfigurablePtr, ConfigurableInstance) == 0, "Offset mismatch for FConfigurablePtr::ConfigurableInstance");
static_assert(offsetof(FConfigurablePtr, ConfigurableData) == 8, "Offset mismatch for FConfigurablePtr::ConfigurableData");

// /Script/Configurable.ConfigurableSoftPtr
// Kind: ScriptStruct; super: none
struct FConfigurableSoftPtr
{
public:
    std::uint8_t SoftConfigInstance[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    void* ConfigurableData; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RequiredPlugins; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConfigurableSoftPtr, SoftConfigInstance) == 0, "Offset mismatch for FConfigurableSoftPtr::SoftConfigInstance");
static_assert(offsetof(FConfigurableSoftPtr, ConfigurableData) == 32, "Offset mismatch for FConfigurableSoftPtr::ConfigurableData");
static_assert(offsetof(FConfigurableSoftPtr, RequiredPlugins) == 40, "Offset mismatch for FConfigurableSoftPtr::RequiredPlugins");

// /Script/Configurable.ConfigurableSoftPtrRoot
// Kind: ScriptStruct; super: ConfigurableSoftPtr
struct FConfigurableSoftPtrRoot
{
public:
    std::uint8_t SoftConfigInstance[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    void* ConfigurableData; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RequiredPlugins; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConfigurableSoftPtrRoot, SoftConfigInstance) == 0, "Offset mismatch for FConfigurableSoftPtrRoot::SoftConfigInstance");
static_assert(offsetof(FConfigurableSoftPtrRoot, ConfigurableData) == 32, "Offset mismatch for FConfigurableSoftPtrRoot::ConfigurableData");
static_assert(offsetof(FConfigurableSoftPtrRoot, RequiredPlugins) == 40, "Offset mismatch for FConfigurableSoftPtrRoot::RequiredPlugins");

// /Script/Configurable.Configurable
// Kind: Class; super: DataAsset
class UConfigurable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Configurable.ConfigurableSettings
// Kind: Class; super: DeveloperSettings
class UConfigurableSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> AllowedObjectTypes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedStructTypes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConfigurableSettings, AllowedObjectTypes) == 48, "Offset mismatch for UConfigurableSettings::AllowedObjectTypes");
static_assert(offsetof(UConfigurableSettings, AllowedStructTypes) == 64, "Offset mismatch for UConfigurableSettings::AllowedStructTypes");

// /Script/Configurable.TestConfigData
// Kind: Class; super: Object
class UTestConfigData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t Value; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    FString Name; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UTestConfigData, Value) == 40, "Offset mismatch for UTestConfigData::Value");
static_assert(offsetof(UTestConfigData, Name) == 48, "Offset mismatch for UTestConfigData::Name");

// /Script/Configurable.TestConfigDataPtr
// Kind: Class; super: Object
class UTestConfigDataPtr
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Configurable[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTestConfigDataPtr, Configurable) == 40, "Offset mismatch for UTestConfigDataPtr::Configurable");

// /Script/Configurable.TestConfigDataSoftPtr
// Kind: Class; super: Object
class UTestConfigDataSoftPtr
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Configurable[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTestConfigDataSoftPtr, Configurable) == 40, "Offset mismatch for UTestConfigDataSoftPtr::Configurable");

// /Script/Configurable.TestConfigDataSoftPtrRoot
// Kind: Class; super: Object
class UTestConfigDataSoftPtrRoot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Configurable[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTestConfigDataSoftPtrRoot, Configurable) == 40, "Offset mismatch for UTestConfigDataSoftPtrRoot::Configurable");

// /Script/Configurable.TestConfigurable
// Kind: Class; super: Configurable
class UTestConfigurable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Configurable.TestConfigurableNoData
// Kind: Class; super: Configurable
class UTestConfigurableNoData
{
public:
    std::uint8_t Opaque[1];
};
