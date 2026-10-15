/**
 * decamp dumper generated SDK
 * Package: /Script/Learning
 */
#pragma once
#include "Basic.h"

// /Script/Learning.LearningNeuralNetworkData
// Kind: Class; super: Object
class ULearningNeuralNetworkData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t InputSize; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t OutputSize; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t CompatibilityHash; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t ContentHash; // 0x0034 (Size: 0x4, Type: IntProperty)
    TArray<void*> FileData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::int32_t UpdateNumber; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    void* ModelData; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULearningNeuralNetworkData, InputSize) == 40, "Offset mismatch for ULearningNeuralNetworkData::InputSize");
static_assert(offsetof(ULearningNeuralNetworkData, OutputSize) == 44, "Offset mismatch for ULearningNeuralNetworkData::OutputSize");
static_assert(offsetof(ULearningNeuralNetworkData, CompatibilityHash) == 48, "Offset mismatch for ULearningNeuralNetworkData::CompatibilityHash");
static_assert(offsetof(ULearningNeuralNetworkData, ContentHash) == 52, "Offset mismatch for ULearningNeuralNetworkData::ContentHash");
static_assert(offsetof(ULearningNeuralNetworkData, FileData) == 56, "Offset mismatch for ULearningNeuralNetworkData::FileData");
static_assert(offsetof(ULearningNeuralNetworkData, UpdateNumber) == 72, "Offset mismatch for ULearningNeuralNetworkData::UpdateNumber");
static_assert(offsetof(ULearningNeuralNetworkData, ModelData) == 80, "Offset mismatch for ULearningNeuralNetworkData::ModelData");
