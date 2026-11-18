#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Renderer
{
    struct SparseVolumeTextureViewer
    {
        static constexpr std::string_view Name = "SparseVolumeTextureViewer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t SparseVolumeTextureViewerComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SparseVolumeTextureViewerComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct SparseVolumeTextureViewerComponent
    {
        static constexpr std::string_view Name = "SparseVolumeTextureViewerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SparseVolumeTexturePreview = 0x560;
            static constexpr std::uintptr_t Frame = 0x568;
            static constexpr std::uintptr_t FrameRate = 0x56C;
            static constexpr std::uintptr_t bApplyPerFrameTransforms = 0x570;
            static constexpr std::uintptr_t bBlockingStreamingRequests = 0x570;
            static constexpr std::uintptr_t bLooping = 0x570;
            static constexpr std::uintptr_t bPivotAtCentroid = 0x570;
            static constexpr std::uintptr_t bPlaying = 0x570;
            static constexpr std::uintptr_t bReversePlayback = 0x570;
            static constexpr std::uintptr_t VoxelSize = 0x574;
            static constexpr std::uintptr_t PreviewAttribute = 0x578;
            static constexpr std::uintptr_t MipLevel = 0x57C;
            static constexpr std::uintptr_t Extinction = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SparseVolumeTexturePreview", 0x560, "ObjectProperty"},
            {"Frame", 0x568, "FloatProperty"},
            {"FrameRate", 0x56C, "FloatProperty"},
            {"bApplyPerFrameTransforms", 0x570, "BoolProperty"},
            {"bBlockingStreamingRequests", 0x570, "BoolProperty"},
            {"bLooping", 0x570, "BoolProperty"},
            {"bPivotAtCentroid", 0x570, "BoolProperty"},
            {"bPlaying", 0x570, "BoolProperty"},
            {"bReversePlayback", 0x570, "BoolProperty"},
            {"VoxelSize", 0x574, "FloatProperty"},
            {"PreviewAttribute", 0x578, "ByteProperty"},
            {"MipLevel", 0x57C, "IntProperty"},
            {"Extinction", 0x580, "FloatProperty"},
        }};
    };

}
