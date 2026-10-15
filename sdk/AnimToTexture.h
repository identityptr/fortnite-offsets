/**
 * decamp dumper generated SDK
 * Package: /Script/AnimToTexture
 */
#pragma once
#include "Basic.h"

// /Script/AnimToTexture.AnimToTextureAnimInfo
// Kind: ScriptStruct; super: none
struct FAnimToTextureAnimInfo
{
public:
    std::int32_t StartFrame; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrame; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimToTextureAnimInfo, StartFrame) == 0, "Offset mismatch for FAnimToTextureAnimInfo::StartFrame");
static_assert(offsetof(FAnimToTextureAnimInfo, EndFrame) == 4, "Offset mismatch for FAnimToTextureAnimInfo::EndFrame");

// /Script/AnimToTexture.AnimToTextureAnimSequenceInfo
// Kind: ScriptStruct; super: none
struct FAnimToTextureAnimSequenceInfo
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* AnimSequence; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseCustomRange; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::int32_t StartFrame; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrame; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimToTextureAnimSequenceInfo, bEnabled) == 0, "Offset mismatch for FAnimToTextureAnimSequenceInfo::bEnabled");
static_assert(offsetof(FAnimToTextureAnimSequenceInfo, AnimSequence) == 8, "Offset mismatch for FAnimToTextureAnimSequenceInfo::AnimSequence");
static_assert(offsetof(FAnimToTextureAnimSequenceInfo, bUseCustomRange) == 16, "Offset mismatch for FAnimToTextureAnimSequenceInfo::bUseCustomRange");
static_assert(offsetof(FAnimToTextureAnimSequenceInfo, StartFrame) == 20, "Offset mismatch for FAnimToTextureAnimSequenceInfo::StartFrame");
static_assert(offsetof(FAnimToTextureAnimSequenceInfo, EndFrame) == 24, "Offset mismatch for FAnimToTextureAnimSequenceInfo::EndFrame");

// /Script/AnimToTexture.AnimToTextureAutoPlayData
// Kind: ScriptStruct; super: none
struct FAnimToTextureAutoPlayData
{
public:
    float TimeOffset; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float PlayRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StartFrame; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float EndFrame; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimToTextureAutoPlayData, TimeOffset) == 0, "Offset mismatch for FAnimToTextureAutoPlayData::TimeOffset");
static_assert(offsetof(FAnimToTextureAutoPlayData, PlayRate) == 4, "Offset mismatch for FAnimToTextureAutoPlayData::PlayRate");
static_assert(offsetof(FAnimToTextureAutoPlayData, StartFrame) == 8, "Offset mismatch for FAnimToTextureAutoPlayData::StartFrame");
static_assert(offsetof(FAnimToTextureAutoPlayData, EndFrame) == 12, "Offset mismatch for FAnimToTextureAutoPlayData::EndFrame");

// /Script/AnimToTexture.AnimToTextureFrameData
// Kind: ScriptStruct; super: none
struct FAnimToTextureFrameData
{
public:
    float Frame; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float PrevFrame; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimToTextureFrameData, Frame) == 0, "Offset mismatch for FAnimToTextureFrameData::Frame");
static_assert(offsetof(FAnimToTextureFrameData, PrevFrame) == 4, "Offset mismatch for FAnimToTextureFrameData::PrevFrame");

// /Script/AnimToTexture.AnimToTextureDataAsset
// Kind: Class; super: PrimaryDataAsset
class UAnimToTextureDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SkeletalMesh[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t SkeletalLODIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t StaticMesh[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t StaticLODIndex; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t UVChannel; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t NumDriverTriangles; // 0x0078 (Size: 0x4, Type: IntProperty)
    float Sigma; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxHeight; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxWidth; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnforcePowerOfTwo; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Precision; // 0x0089 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Mode; // 0x008A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x5]; // 0x008B
    std::uint8_t VertexPositionTexture[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t VertexNormalTexture[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BonePositionTexture[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BoneRotationTexture[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BoneWeightTexture[0x20]; // 0x0110 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RootTransform[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    std::uint8_t AttachToSocket[0x4]; // 0x0190 (Size: 0x4, Type: NameProperty)
    float SampleRate; // 0x0194 (Size: 0x4, Type: FloatProperty)
    TArray<void*> AnimSequences; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoPlay; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01A9
    std::int32_t AnimationIndex; // 0x01AC (Size: 0x4, Type: IntProperty)
    std::int32_t Frame; // 0x01B0 (Size: 0x4, Type: IntProperty)
    std::uint8_t NumBoneInfluences; // 0x01B4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01B5
    std::int32_t NumFrames; // 0x01B8 (Size: 0x4, Type: IntProperty)
    std::int32_t NumBones; // 0x01BC (Size: 0x4, Type: IntProperty)
    std::int32_t VertexRowsPerFrame; // 0x01C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t VertexMinBBox[0xC]; // 0x01C4 (Size: 0xC, Type: StructProperty)
    std::uint8_t VertexSizeBBox[0xC]; // 0x01D0 (Size: 0xC, Type: StructProperty)
    std::int32_t BoneWeightRowsPerFrame; // 0x01DC (Size: 0x4, Type: IntProperty)
    std::int32_t BoneRowsPerFrame; // 0x01E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t BoneMinBBox[0xC]; // 0x01E4 (Size: 0xC, Type: StructProperty)
    std::uint8_t BoneSizeBBox[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    TArray<void*> Animations; // 0x0200 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAnimToTextureDataAsset, SkeletalMesh) == 40, "Offset mismatch for UAnimToTextureDataAsset::SkeletalMesh");
static_assert(offsetof(UAnimToTextureDataAsset, SkeletalLODIndex) == 72, "Offset mismatch for UAnimToTextureDataAsset::SkeletalLODIndex");
static_assert(offsetof(UAnimToTextureDataAsset, StaticMesh) == 80, "Offset mismatch for UAnimToTextureDataAsset::StaticMesh");
static_assert(offsetof(UAnimToTextureDataAsset, StaticLODIndex) == 112, "Offset mismatch for UAnimToTextureDataAsset::StaticLODIndex");
static_assert(offsetof(UAnimToTextureDataAsset, UVChannel) == 116, "Offset mismatch for UAnimToTextureDataAsset::UVChannel");
static_assert(offsetof(UAnimToTextureDataAsset, NumDriverTriangles) == 120, "Offset mismatch for UAnimToTextureDataAsset::NumDriverTriangles");
static_assert(offsetof(UAnimToTextureDataAsset, Sigma) == 124, "Offset mismatch for UAnimToTextureDataAsset::Sigma");
static_assert(offsetof(UAnimToTextureDataAsset, MaxHeight) == 128, "Offset mismatch for UAnimToTextureDataAsset::MaxHeight");
static_assert(offsetof(UAnimToTextureDataAsset, MaxWidth) == 132, "Offset mismatch for UAnimToTextureDataAsset::MaxWidth");
static_assert(offsetof(UAnimToTextureDataAsset, bEnforcePowerOfTwo) == 136, "Offset mismatch for UAnimToTextureDataAsset::bEnforcePowerOfTwo");
static_assert(offsetof(UAnimToTextureDataAsset, Precision) == 137, "Offset mismatch for UAnimToTextureDataAsset::Precision");
static_assert(offsetof(UAnimToTextureDataAsset, Mode) == 138, "Offset mismatch for UAnimToTextureDataAsset::Mode");
static_assert(offsetof(UAnimToTextureDataAsset, VertexPositionTexture) == 144, "Offset mismatch for UAnimToTextureDataAsset::VertexPositionTexture");
static_assert(offsetof(UAnimToTextureDataAsset, VertexNormalTexture) == 176, "Offset mismatch for UAnimToTextureDataAsset::VertexNormalTexture");
static_assert(offsetof(UAnimToTextureDataAsset, BonePositionTexture) == 208, "Offset mismatch for UAnimToTextureDataAsset::BonePositionTexture");
static_assert(offsetof(UAnimToTextureDataAsset, BoneRotationTexture) == 240, "Offset mismatch for UAnimToTextureDataAsset::BoneRotationTexture");
static_assert(offsetof(UAnimToTextureDataAsset, BoneWeightTexture) == 272, "Offset mismatch for UAnimToTextureDataAsset::BoneWeightTexture");
static_assert(offsetof(UAnimToTextureDataAsset, RootTransform) == 304, "Offset mismatch for UAnimToTextureDataAsset::RootTransform");
static_assert(offsetof(UAnimToTextureDataAsset, AttachToSocket) == 400, "Offset mismatch for UAnimToTextureDataAsset::AttachToSocket");
static_assert(offsetof(UAnimToTextureDataAsset, SampleRate) == 404, "Offset mismatch for UAnimToTextureDataAsset::SampleRate");
static_assert(offsetof(UAnimToTextureDataAsset, AnimSequences) == 408, "Offset mismatch for UAnimToTextureDataAsset::AnimSequences");
static_assert(offsetof(UAnimToTextureDataAsset, bAutoPlay) == 424, "Offset mismatch for UAnimToTextureDataAsset::bAutoPlay");
static_assert(offsetof(UAnimToTextureDataAsset, AnimationIndex) == 428, "Offset mismatch for UAnimToTextureDataAsset::AnimationIndex");
static_assert(offsetof(UAnimToTextureDataAsset, Frame) == 432, "Offset mismatch for UAnimToTextureDataAsset::Frame");
static_assert(offsetof(UAnimToTextureDataAsset, NumBoneInfluences) == 436, "Offset mismatch for UAnimToTextureDataAsset::NumBoneInfluences");
static_assert(offsetof(UAnimToTextureDataAsset, NumFrames) == 440, "Offset mismatch for UAnimToTextureDataAsset::NumFrames");
static_assert(offsetof(UAnimToTextureDataAsset, NumBones) == 444, "Offset mismatch for UAnimToTextureDataAsset::NumBones");
static_assert(offsetof(UAnimToTextureDataAsset, VertexRowsPerFrame) == 448, "Offset mismatch for UAnimToTextureDataAsset::VertexRowsPerFrame");
static_assert(offsetof(UAnimToTextureDataAsset, VertexMinBBox) == 452, "Offset mismatch for UAnimToTextureDataAsset::VertexMinBBox");
static_assert(offsetof(UAnimToTextureDataAsset, VertexSizeBBox) == 464, "Offset mismatch for UAnimToTextureDataAsset::VertexSizeBBox");
static_assert(offsetof(UAnimToTextureDataAsset, BoneWeightRowsPerFrame) == 476, "Offset mismatch for UAnimToTextureDataAsset::BoneWeightRowsPerFrame");
static_assert(offsetof(UAnimToTextureDataAsset, BoneRowsPerFrame) == 480, "Offset mismatch for UAnimToTextureDataAsset::BoneRowsPerFrame");
static_assert(offsetof(UAnimToTextureDataAsset, BoneMinBBox) == 484, "Offset mismatch for UAnimToTextureDataAsset::BoneMinBBox");
static_assert(offsetof(UAnimToTextureDataAsset, BoneSizeBBox) == 496, "Offset mismatch for UAnimToTextureDataAsset::BoneSizeBBox");
static_assert(offsetof(UAnimToTextureDataAsset, Animations) == 512, "Offset mismatch for UAnimToTextureDataAsset::Animations");

// /Script/AnimToTexture.AnimToTextureInstancePlaybackLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAnimToTextureInstancePlaybackLibrary
{
public:
    std::uint8_t Opaque[1];
};
