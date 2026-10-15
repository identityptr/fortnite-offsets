/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticItemFlowgraphRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticItemFlowgraphRuntime.GliderFlowCommonData
// Kind: ScriptStruct; super: none
struct FGliderFlowCommonData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticItemFlowgraphRuntime.CosmeticItemStep_GliderLoadAssets
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_GliderLoadAssets
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_GliderLoadAssets, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_GliderLoadAssets::FlowgraphKey");

// /Script/CosmeticItemFlowgraphRuntime.CosmeticItemStep_GliderPostLoad
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_GliderPostLoad
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_GliderPostLoad, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_GliderPostLoad::FlowgraphKey");

// /Script/CosmeticItemFlowgraphRuntime.CosmeticItemStep_GliderPreamble
// Kind: Class; super: FortCosmeticStep
class UCosmeticItemStep_GliderPreamble
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticItemStep_GliderPreamble, FlowgraphKey) == 88, "Offset mismatch for UCosmeticItemStep_GliderPreamble::FlowgraphKey");
