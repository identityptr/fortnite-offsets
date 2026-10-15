/**
 * decamp dumper generated SDK
 * Package: /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph
 */
#pragma once
#include "Basic.h"

// /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWB_AudioAnalysis_FloatGraph_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* Value; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* ProgressBar; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Label; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* CanvasPanel; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Position[0x10]; // 0x0330 (Size: 0x10, Type: StructProperty)
    std::uint8_t Size[0x10]; // 0x0340 (Size: 0x10, Type: StructProperty)
    std::uint8_t calculated; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0351
    std::uint8_t Parameter[0x4]; // 0x0354 (Size: 0x4, Type: NameProperty)
    TArray<void*> Points; // 0x0358 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumPoints; // 0x0368 (Size: 0x4, Type: IntProperty)
    std::uint8_t Color[0x10]; // 0x036C (Size: 0x10, Type: StructProperty)
    std::int32_t VectorIndex; // 0x037C (Size: 0x4, Type: IntProperty)
    void* Collection; // 0x0380 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, UberGraphFrame) == 776, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::UberGraphFrame");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Value) == 784, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::Value");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, ProgressBar) == 792, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::ProgressBar");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Label) == 800, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::Label");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, CanvasPanel) == 808, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::CanvasPanel");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Position) == 816, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::Position");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Size) == 832, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::Size");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, calculated) == 848, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::calculated");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Parameter) == 852, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::Parameter");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Points) == 856, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::Points");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, NumPoints) == 872, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::NumPoints");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Color) == 876, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::Color");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, VectorIndex) == 892, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::VectorIndex");
static_assert(offsetof(UWB_AudioAnalysis_FloatGraph_C, Collection) == 896, "Offset mismatch for UWB_AudioAnalysis_FloatGraph_C::Collection");
