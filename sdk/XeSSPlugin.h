/**
 * decamp dumper generated SDK
 * Package: /Script/XeSSPlugin
 */
#pragma once
#include "Basic.h"

// /Script/XeSSPlugin.XeSSSettings
// Kind: Class; super: DeveloperSettings
class UXeSSSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bEnableXeSSInEditorViewports; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    FString DebugDataDumpPath; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UXeSSSettings, bEnableXeSSInEditorViewports) == 48, "Offset mismatch for UXeSSSettings::bEnableXeSSInEditorViewports");
static_assert(offsetof(UXeSSSettings, DebugDataDumpPath) == 56, "Offset mismatch for UXeSSSettings::DebugDataDumpPath");
