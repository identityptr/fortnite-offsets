/**
 * decamp dumper generated SDK
 * Package: /Script/NNERuntimeORT
 */
#pragma once
#include "Basic.h"

// /Script/NNERuntimeORT.ThreadingOptions
// Kind: ScriptStruct; super: none
struct FThreadingOptions
{
public:
    std::uint8_t bUseGlobalThreadPool; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t IntraOpNumThreads; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t InterOpNumThreads; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t ExecutionMode; // 0x000C (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FThreadingOptions, bUseGlobalThreadPool) == 0, "Offset mismatch for FThreadingOptions::bUseGlobalThreadPool");
static_assert(offsetof(FThreadingOptions, IntraOpNumThreads) == 4, "Offset mismatch for FThreadingOptions::IntraOpNumThreads");
static_assert(offsetof(FThreadingOptions, InterOpNumThreads) == 8, "Offset mismatch for FThreadingOptions::InterOpNumThreads");
static_assert(offsetof(FThreadingOptions, ExecutionMode) == 12, "Offset mismatch for FThreadingOptions::ExecutionMode");

// /Script/NNERuntimeORT.NNERuntimeORTCpu
// Kind: Class; super: Object
class UNNERuntimeORTCpu
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NNERuntimeORT.NNERuntimeORTDmlProxy
// Kind: Class; super: Object
class UNNERuntimeORTDmlProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NNERuntimeORT.NNERuntimeORTDml_GPU
// Kind: Class; super: NNERuntimeORTDmlProxy
class UNNERuntimeORTDml_GPU
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NNERuntimeORT.NNERuntimeORTDml_GPU_RDG
// Kind: Class; super: NNERuntimeORTDmlProxy
class UNNERuntimeORTDml_GPU_RDG
{
public:
    std::uint8_t Opaque[1];
};


// /Script/NNERuntimeORT.NNERuntimeORTSettings
// Kind: Class; super: DeveloperSettings
class UNNERuntimeORTSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EditorThreadingOptions[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t GameThreadingOptions[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNNERuntimeORTSettings, EditorThreadingOptions) == 48, "Offset mismatch for UNNERuntimeORTSettings::EditorThreadingOptions");
static_assert(offsetof(UNNERuntimeORTSettings, GameThreadingOptions) == 64, "Offset mismatch for UNNERuntimeORTSettings::GameThreadingOptions");
