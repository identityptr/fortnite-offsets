/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
// Kind: WidgetBlueprintGeneratedClass; super: MusicEventSubsystemDebugWidget
class UB_MusicEventDebugWidget_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* EventInstances; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* EventClocks; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Background; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    FString AssetFilter; // 0x0328 (Size: 0x10, Type: StrProperty)
    TArray<void*> Instances; // 0x0338 (Size: 0x10, Type: ArrayProperty)
    std::int32_t FontSize; // 0x0348 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x034C
    TArray<void*> Clocks; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    void* HighestPriRunningClock; // 0x0360 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UB_MusicEventDebugWidget_C, UberGraphFrame) == 776, "Offset mismatch for UB_MusicEventDebugWidget_C::UberGraphFrame");
static_assert(offsetof(UB_MusicEventDebugWidget_C, EventInstances) == 784, "Offset mismatch for UB_MusicEventDebugWidget_C::EventInstances");
static_assert(offsetof(UB_MusicEventDebugWidget_C, EventClocks) == 792, "Offset mismatch for UB_MusicEventDebugWidget_C::EventClocks");
static_assert(offsetof(UB_MusicEventDebugWidget_C, Background) == 800, "Offset mismatch for UB_MusicEventDebugWidget_C::Background");
static_assert(offsetof(UB_MusicEventDebugWidget_C, AssetFilter) == 808, "Offset mismatch for UB_MusicEventDebugWidget_C::AssetFilter");
static_assert(offsetof(UB_MusicEventDebugWidget_C, Instances) == 824, "Offset mismatch for UB_MusicEventDebugWidget_C::Instances");
static_assert(offsetof(UB_MusicEventDebugWidget_C, FontSize) == 840, "Offset mismatch for UB_MusicEventDebugWidget_C::FontSize");
static_assert(offsetof(UB_MusicEventDebugWidget_C, Clocks) == 848, "Offset mismatch for UB_MusicEventDebugWidget_C::Clocks");
static_assert(offsetof(UB_MusicEventDebugWidget_C, HighestPriRunningClock) == 864, "Offset mismatch for UB_MusicEventDebugWidget_C::HighestPriRunningClock");
