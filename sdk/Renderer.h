/**
 * decamp dumper generated SDK
 * Package: /Script/Renderer
 */
#pragma once
#include "Basic.h"

// /Script/Renderer.SparseVolumeTextureViewer
// Kind: Class; super: Info
class USparseVolumeTextureViewer
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SparseVolumeTextureViewerComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparseVolumeTextureViewer, SparseVolumeTextureViewerComponent) == 624, "Offset mismatch for USparseVolumeTextureViewer::SparseVolumeTextureViewerComponent");

// /Script/Renderer.SparseVolumeTextureViewerComponent
// Kind: Class; super: PrimitiveComponent
class USparseVolumeTextureViewerComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* SparseVolumeTexturePreview; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    float Frame; // 0x0578 (Size: 0x4, Type: FloatProperty)
    float FrameRate; // 0x057C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyPerFrameTransforms; // 0x0580 (Size: 0x1, Type: BoolProperty)
    // 0x0580 BoolProperty bBlockingStreamingRequests (shared storage)
    // 0x0580 BoolProperty bLooping (shared storage)
    // 0x0580 BoolProperty bPivotAtCentroid (shared storage)
    // 0x0580 BoolProperty bPlaying (shared storage)
    // 0x0580 BoolProperty bReversePlayback (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0581
    float VoxelSize; // 0x0584 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviewAttribute; // 0x0588 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0589
    std::int32_t MipLevel; // 0x058C (Size: 0x4, Type: IntProperty)
    float Extinction; // 0x0590 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USparseVolumeTextureViewerComponent, SparseVolumeTexturePreview) == 1392, "Offset mismatch for USparseVolumeTextureViewerComponent::SparseVolumeTexturePreview");
static_assert(offsetof(USparseVolumeTextureViewerComponent, Frame) == 1400, "Offset mismatch for USparseVolumeTextureViewerComponent::Frame");
static_assert(offsetof(USparseVolumeTextureViewerComponent, FrameRate) == 1404, "Offset mismatch for USparseVolumeTextureViewerComponent::FrameRate");
static_assert(offsetof(USparseVolumeTextureViewerComponent, bApplyPerFrameTransforms) == 1408, "Offset mismatch for USparseVolumeTextureViewerComponent::bApplyPerFrameTransforms");
static_assert(offsetof(USparseVolumeTextureViewerComponent, VoxelSize) == 1412, "Offset mismatch for USparseVolumeTextureViewerComponent::VoxelSize");
static_assert(offsetof(USparseVolumeTextureViewerComponent, PreviewAttribute) == 1416, "Offset mismatch for USparseVolumeTextureViewerComponent::PreviewAttribute");
static_assert(offsetof(USparseVolumeTextureViewerComponent, MipLevel) == 1420, "Offset mismatch for USparseVolumeTextureViewerComponent::MipLevel");
static_assert(offsetof(USparseVolumeTextureViewerComponent, Extinction) == 1424, "Offset mismatch for USparseVolumeTextureViewerComponent::Extinction");
