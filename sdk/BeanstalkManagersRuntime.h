/**
 * decamp dumper generated SDK
 * Package: /Script/BeanstalkManagersRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BeanstalkManagersRuntime.BeanstalkAccountItemDefinitionOverride
// Kind: ScriptStruct; super: none
struct FBeanstalkAccountItemDefinitionOverride
{
public:
    void* AccountItemDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBeanstalkAccountItemDefinitionOverride, AccountItemDefinition) == 0, "Offset mismatch for FBeanstalkAccountItemDefinitionOverride::AccountItemDefinition");

// /Script/BeanstalkManagersRuntime.BeanstalkAccountItemDefinitionOverrideManager
// Kind: Class; super: Object
class UBeanstalkAccountItemDefinitionOverrideManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t BeanCosmetics[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    void* BeanCosmeticsDataCache; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> OverrideCache; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBeanstalkAccountItemDefinitionOverrideManager, BeanCosmetics) == 48, "Offset mismatch for UBeanstalkAccountItemDefinitionOverrideManager::BeanCosmetics");
static_assert(offsetof(UBeanstalkAccountItemDefinitionOverrideManager, BeanCosmeticsDataCache) == 80, "Offset mismatch for UBeanstalkAccountItemDefinitionOverrideManager::BeanCosmeticsDataCache");
static_assert(offsetof(UBeanstalkAccountItemDefinitionOverrideManager, OverrideCache) == 88, "Offset mismatch for UBeanstalkAccountItemDefinitionOverrideManager::OverrideCache");
