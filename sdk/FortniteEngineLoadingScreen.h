/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteEngineLoadingScreen
 */
#pragma once
#include "Basic.h"

// /Script/FortniteEngineLoadingScreen.FortniteUserInterfaceSettings
// Kind: Class; super: DeveloperSettings
class UFortniteUserInterfaceSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t WidthScaleCurve[0x48]; // 0x0030 (Size: 0x48, Type: StructProperty)
    std::uint8_t HeightScaleCurve[0x48]; // 0x0078 (Size: 0x48, Type: StructProperty)
    std::uint8_t WidthScaleCurve_iOS_InGame[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t HeightScaleCurve_iOS_InGame[0x48]; // 0x0108 (Size: 0x48, Type: StructProperty)
    std::uint8_t WidthScaleCurve_iOS_FrontEnd[0x48]; // 0x0150 (Size: 0x48, Type: StructProperty)
    std::uint8_t HeightScaleCurve_iOS_FrontEnd[0x48]; // 0x0198 (Size: 0x48, Type: StructProperty)
    std::uint8_t WidthScaleCurve_Android_InGame[0x48]; // 0x01E0 (Size: 0x48, Type: StructProperty)
    std::uint8_t HeightScaleCurve_Android_InGame[0x48]; // 0x0228 (Size: 0x48, Type: StructProperty)
    std::uint8_t WidthScaleCurve_Android_FrontEnd[0x48]; // 0x0270 (Size: 0x48, Type: StructProperty)
    std::uint8_t HeightScaleCurve_Android_FrontEnd[0x1]; // 0x02B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve) == 48, "Offset mismatch for UFortniteUserInterfaceSettings::WidthScaleCurve");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve) == 120, "Offset mismatch for UFortniteUserInterfaceSettings::HeightScaleCurve");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_iOS_InGame) == 192, "Offset mismatch for UFortniteUserInterfaceSettings::WidthScaleCurve_iOS_InGame");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_iOS_InGame) == 264, "Offset mismatch for UFortniteUserInterfaceSettings::HeightScaleCurve_iOS_InGame");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_iOS_FrontEnd) == 336, "Offset mismatch for UFortniteUserInterfaceSettings::WidthScaleCurve_iOS_FrontEnd");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_iOS_FrontEnd) == 408, "Offset mismatch for UFortniteUserInterfaceSettings::HeightScaleCurve_iOS_FrontEnd");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_Android_InGame) == 480, "Offset mismatch for UFortniteUserInterfaceSettings::WidthScaleCurve_Android_InGame");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_Android_InGame) == 552, "Offset mismatch for UFortniteUserInterfaceSettings::HeightScaleCurve_Android_InGame");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_Android_FrontEnd) == 624, "Offset mismatch for UFortniteUserInterfaceSettings::WidthScaleCurve_Android_FrontEnd");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_Android_FrontEnd) == 696, "Offset mismatch for UFortniteUserInterfaceSettings::HeightScaleCurve_Android_FrontEnd");
