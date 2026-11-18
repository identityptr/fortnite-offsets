#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MediaPlate
{
    struct MediaPlate
    {
        static constexpr std::string_view Name = "MediaPlate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaPlateComponent = 0x278;
            static constexpr std::uintptr_t StaticMeshComponent = 0x280;
            static constexpr std::uintptr_t bEnableHoldoutComposite = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MediaPlateComponent", 0x278, "ObjectProperty"},
            {"StaticMeshComponent", 0x280, "ObjectProperty"},
            {"bEnableHoldoutComposite", 0x288, "BoolProperty"},
        }};
    };

    struct MediaPlateAssetUserData
    {
        static constexpr std::string_view Name = "MediaPlateAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MediaPlateComponent
    {
        static constexpr std::string_view Name = "MediaPlateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bPlayOnOpen = 0xC8;
            static constexpr std::uintptr_t bAutoPlay = 0xC9;
            static constexpr std::uintptr_t bEnableAudio = 0xCA;
            static constexpr std::uintptr_t StartTime = 0xCC;
            static constexpr std::uintptr_t SoundComponent = 0xD0;
            static constexpr std::uintptr_t StaticMeshComponent = 0xD8;
            static constexpr std::uintptr_t Letterboxes = 0xE0;
            static constexpr std::uintptr_t MediaPlateResource = 0xF0;
            static constexpr std::uintptr_t PlaylistIndex = 0x148;
            static constexpr std::uintptr_t CacheSettings = 0x14C;
            static constexpr std::uintptr_t bIsMediaPlatePlaying = 0x154;
            static constexpr std::uintptr_t bPlayOnlyWhenVisible = 0x168;
            static constexpr std::uintptr_t bLoop = 0x169;
            static constexpr std::uintptr_t VisibleMipsTilesCalculations = 0x16A;
            static constexpr std::uintptr_t MipMapBias = 0x16C;
            static constexpr std::uintptr_t bIsAspectRatioAuto = 0x170;
            static constexpr std::uintptr_t bEnableMipMapUpscaling = 0x171;
            static constexpr std::uintptr_t MipLevelToUpscale = 0x174;
            static constexpr std::uintptr_t bAdaptivePoleMipUpscaling = 0x178;
            static constexpr std::uintptr_t LetterboxAspectRatio = 0x17C;
            static constexpr std::uintptr_t MeshRange = 0x188;
            static constexpr std::uintptr_t MediaTextures = 0x198;
            static constexpr std::uintptr_t MediaTextureSettings = 0x1A8;
            static constexpr std::uintptr_t MediaPlayer = 0x1B0;
            static constexpr std::uintptr_t ExternalMediaSource = 0x1B8;
            static constexpr std::uintptr_t ActivePlaylist = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"bPlayOnOpen", 0xC8, "BoolProperty"},
            {"bAutoPlay", 0xC9, "BoolProperty"},
            {"bEnableAudio", 0xCA, "BoolProperty"},
            {"StartTime", 0xCC, "FloatProperty"},
            {"SoundComponent", 0xD0, "ObjectProperty"},
            {"StaticMeshComponent", 0xD8, "ObjectProperty"},
            {"Letterboxes", 0xE0, "ArrayProperty"},
            {"MediaPlateResource", 0xF0, "StructProperty"},
            {"PlaylistIndex", 0x148, "IntProperty"},
            {"CacheSettings", 0x14C, "StructProperty"},
            {"bIsMediaPlatePlaying", 0x154, "BoolProperty"},
            {"bPlayOnlyWhenVisible", 0x168, "BoolProperty"},
            {"bLoop", 0x169, "BoolProperty"},
            {"VisibleMipsTilesCalculations", 0x16A, "EnumProperty"},
            {"MipMapBias", 0x16C, "FloatProperty"},
            {"bIsAspectRatioAuto", 0x170, "BoolProperty"},
            {"bEnableMipMapUpscaling", 0x171, "BoolProperty"},
            {"MipLevelToUpscale", 0x174, "IntProperty"},
            {"bAdaptivePoleMipUpscaling", 0x178, "BoolProperty"},
            {"LetterboxAspectRatio", 0x17C, "FloatProperty"},
            {"MeshRange", 0x188, "StructProperty"},
            {"MediaTextures", 0x198, "ArrayProperty"},
            {"MediaTextureSettings", 0x1A8, "StructProperty"},
            {"MediaPlayer", 0x1B0, "ObjectProperty"},
            {"ExternalMediaSource", 0x1B8, "ObjectProperty"},
            {"ActivePlaylist", 0x1C0, "ObjectProperty"},
        }};
    };

}
