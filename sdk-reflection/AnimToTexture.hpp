#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AnimToTexture
{
    struct AnimToTextureDataAsset
    {
        static constexpr std::string_view Name = "AnimToTextureDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMesh = 0x28;
            static constexpr std::uintptr_t SkeletalLODIndex = 0x48;
            static constexpr std::uintptr_t StaticMesh = 0x50;
            static constexpr std::uintptr_t StaticLODIndex = 0x70;
            static constexpr std::uintptr_t UVChannel = 0x74;
            static constexpr std::uintptr_t NumDriverTriangles = 0x78;
            static constexpr std::uintptr_t Sigma = 0x7C;
            static constexpr std::uintptr_t MaxHeight = 0x80;
            static constexpr std::uintptr_t MaxWidth = 0x84;
            static constexpr std::uintptr_t bEnforcePowerOfTwo = 0x88;
            static constexpr std::uintptr_t Precision = 0x89;
            static constexpr std::uintptr_t Mode = 0x8A;
            static constexpr std::uintptr_t VertexPositionTexture = 0x90;
            static constexpr std::uintptr_t VertexNormalTexture = 0xB0;
            static constexpr std::uintptr_t BonePositionTexture = 0xD0;
            static constexpr std::uintptr_t BoneRotationTexture = 0xF0;
            static constexpr std::uintptr_t BoneWeightTexture = 0x110;
            static constexpr std::uintptr_t RootTransform = 0x130;
            static constexpr std::uintptr_t AttachToSocket = 0x190;
            static constexpr std::uintptr_t SampleRate = 0x194;
            static constexpr std::uintptr_t AnimSequences = 0x198;
            static constexpr std::uintptr_t bAutoPlay = 0x1A8;
            static constexpr std::uintptr_t AnimationIndex = 0x1AC;
            static constexpr std::uintptr_t Frame = 0x1B0;
            static constexpr std::uintptr_t NumBoneInfluences = 0x1B4;
            static constexpr std::uintptr_t NumFrames = 0x1B8;
            static constexpr std::uintptr_t NumBones = 0x1BC;
            static constexpr std::uintptr_t VertexRowsPerFrame = 0x1C0;
            static constexpr std::uintptr_t VertexMinBBox = 0x1C4;
            static constexpr std::uintptr_t VertexSizeBBox = 0x1D0;
            static constexpr std::uintptr_t BoneWeightRowsPerFrame = 0x1DC;
            static constexpr std::uintptr_t BoneRowsPerFrame = 0x1E0;
            static constexpr std::uintptr_t BoneMinBBox = 0x1E4;
            static constexpr std::uintptr_t BoneSizeBBox = 0x1F0;
            static constexpr std::uintptr_t Animations = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 35> Properties{{
            {"SkeletalMesh", 0x28, "SoftObjectProperty"},
            {"SkeletalLODIndex", 0x48, "IntProperty"},
            {"StaticMesh", 0x50, "SoftObjectProperty"},
            {"StaticLODIndex", 0x70, "IntProperty"},
            {"UVChannel", 0x74, "IntProperty"},
            {"NumDriverTriangles", 0x78, "IntProperty"},
            {"Sigma", 0x7C, "FloatProperty"},
            {"MaxHeight", 0x80, "IntProperty"},
            {"MaxWidth", 0x84, "IntProperty"},
            {"bEnforcePowerOfTwo", 0x88, "BoolProperty"},
            {"Precision", 0x89, "EnumProperty"},
            {"Mode", 0x8A, "EnumProperty"},
            {"VertexPositionTexture", 0x90, "SoftObjectProperty"},
            {"VertexNormalTexture", 0xB0, "SoftObjectProperty"},
            {"BonePositionTexture", 0xD0, "SoftObjectProperty"},
            {"BoneRotationTexture", 0xF0, "SoftObjectProperty"},
            {"BoneWeightTexture", 0x110, "SoftObjectProperty"},
            {"RootTransform", 0x130, "StructProperty"},
            {"AttachToSocket", 0x190, "NameProperty"},
            {"SampleRate", 0x194, "FloatProperty"},
            {"AnimSequences", 0x198, "ArrayProperty"},
            {"bAutoPlay", 0x1A8, "BoolProperty"},
            {"AnimationIndex", 0x1AC, "IntProperty"},
            {"Frame", 0x1B0, "IntProperty"},
            {"NumBoneInfluences", 0x1B4, "EnumProperty"},
            {"NumFrames", 0x1B8, "IntProperty"},
            {"NumBones", 0x1BC, "IntProperty"},
            {"VertexRowsPerFrame", 0x1C0, "IntProperty"},
            {"VertexMinBBox", 0x1C4, "StructProperty"},
            {"VertexSizeBBox", 0x1D0, "StructProperty"},
            {"BoneWeightRowsPerFrame", 0x1DC, "IntProperty"},
            {"BoneRowsPerFrame", 0x1E0, "IntProperty"},
            {"BoneMinBBox", 0x1E4, "StructProperty"},
            {"BoneSizeBBox", 0x1F0, "StructProperty"},
            {"Animations", 0x200, "ArrayProperty"},
        }};
    };

    struct AnimToTextureInstancePlaybackLibrary
    {
        static constexpr std::string_view Name = "AnimToTextureInstancePlaybackLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
