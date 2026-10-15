/**
 * decamp dumper generated SDK
 * Package: /Script/ThemedTemplatesCore
 */
#pragma once
#include "Basic.h"

// /Script/ThemedTemplatesCore.FortCoreTemplateConfig
// Kind: Class; super: DataAsset
class UFortCoreTemplateConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CTAButtonRegular; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* CTAButtonLoud; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* CTAButtonQuiet; // 0x0038 (Size: 0x8, Type: ClassProperty)
    void* ButtonGeneric; // 0x0040 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortCoreTemplateConfig, CTAButtonRegular) == 40, "Offset mismatch for UFortCoreTemplateConfig::CTAButtonRegular");
static_assert(offsetof(UFortCoreTemplateConfig, CTAButtonLoud) == 48, "Offset mismatch for UFortCoreTemplateConfig::CTAButtonLoud");
static_assert(offsetof(UFortCoreTemplateConfig, CTAButtonQuiet) == 56, "Offset mismatch for UFortCoreTemplateConfig::CTAButtonQuiet");
static_assert(offsetof(UFortCoreTemplateConfig, ButtonGeneric) == 64, "Offset mismatch for UFortCoreTemplateConfig::ButtonGeneric");

// /Script/ThemedTemplatesCore.FortCoreTemplateConfigVM
// Kind: Class; super: FortPerUserViewModel
class UFortCoreTemplateConfigVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* CoreTemplateConfig; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCoreTemplateConfigVM, CoreTemplateConfig) == 120, "Offset mismatch for UFortCoreTemplateConfigVM::CoreTemplateConfig");
