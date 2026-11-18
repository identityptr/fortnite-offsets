#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNE_VolumeRuntime
{
    struct FNE_Volume
    {
        static constexpr std::string_view Name = "FNE_Volume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceSetEvent = 0x278;
            static constexpr std::uintptr_t PlayspaceClassTemplate = 0x2A0;
            static constexpr std::uintptr_t PlayspaceCreationType = 0x2C0;
            static constexpr std::uintptr_t PlayspaceClass = 0x2C8;
            static constexpr std::uintptr_t bDestroyPlayspaceOnEndPlay = 0x2D0;
            static constexpr std::uintptr_t bSpawnPlayspaceAtGameplayVolumeLocation = 0x2D1;
            static constexpr std::uintptr_t Playspace = 0x2D8;
            static constexpr std::uintptr_t VolumeTags = 0x2E0;
            static constexpr std::uintptr_t BoundsComponent = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PlayspaceSetEvent", 0x278, "MulticastInlineDelegateProperty"},
            {"PlayspaceClassTemplate", 0x2A0, "SoftClassProperty"},
            {"PlayspaceCreationType", 0x2C0, "EnumProperty"},
            {"PlayspaceClass", 0x2C8, "ClassProperty"},
            {"bDestroyPlayspaceOnEndPlay", 0x2D0, "BoolProperty"},
            {"bSpawnPlayspaceAtGameplayVolumeLocation", 0x2D1, "BoolProperty"},
            {"Playspace", 0x2D8, "ObjectProperty"},
            {"VolumeTags", 0x2E0, "StructProperty"},
            {"BoundsComponent", 0x300, "ObjectProperty"},
        }};
    };

    struct FNE_VolumeComponent
    {
        static constexpr std::string_view Name = "FNE_VolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerStateBeginOverlap = 0x290;
            static constexpr std::uintptr_t OnPlayerStateEndOverlap = 0x2A0;
            static constexpr std::uintptr_t OnOtherActorBeginOverlap = 0x2B0;
            static constexpr std::uintptr_t OnOtherActorEndOverlap = 0x2C0;
            static constexpr std::uintptr_t bEnableOverlap = 0x2D0;
            static constexpr std::uintptr_t FNEVolumeShapeMap = 0x2D8;
            static constexpr std::uintptr_t SpatialGameplayActorTracker = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnPlayerStateBeginOverlap", 0x290, "MulticastInlineDelegateProperty"},
            {"OnPlayerStateEndOverlap", 0x2A0, "MulticastInlineDelegateProperty"},
            {"OnOtherActorBeginOverlap", 0x2B0, "MulticastInlineDelegateProperty"},
            {"OnOtherActorEndOverlap", 0x2C0, "MulticastInlineDelegateProperty"},
            {"bEnableOverlap", 0x2D0, "BoolProperty"},
            {"FNEVolumeShapeMap", 0x2D8, "MapProperty"},
            {"SpatialGameplayActorTracker", 0x2E8, "ObjectProperty"},
        }};
    };

    struct FNE_VolumeOverlapComponent
    {
        static constexpr std::string_view Name = "FNE_VolumeOverlapComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerStateBeginOverlap = 0x6A8;
            static constexpr std::uintptr_t OnPlayerStateEndOverlap = 0x6B8;
            static constexpr std::uintptr_t OnOtherActorBeginOverlap = 0x6C8;
            static constexpr std::uintptr_t OnOtherActorEndOverlap = 0x6D8;
            static constexpr std::uintptr_t EnableOverlapBehavior = 0x6E8;
            static constexpr std::uintptr_t FNEVolumeShapeMap = 0x6F0;
            static constexpr std::uintptr_t SceneQueryShape = 0x700;
            static constexpr std::uintptr_t SceneQueryObjectTypes = 0x708;
            static constexpr std::uintptr_t CachedMinigame = 0x738;
            static constexpr std::uintptr_t TrackedActors = 0x740;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnPlayerStateBeginOverlap", 0x6A8, "MulticastInlineDelegateProperty"},
            {"OnPlayerStateEndOverlap", 0x6B8, "MulticastInlineDelegateProperty"},
            {"OnOtherActorBeginOverlap", 0x6C8, "MulticastInlineDelegateProperty"},
            {"OnOtherActorEndOverlap", 0x6D8, "MulticastInlineDelegateProperty"},
            {"EnableOverlapBehavior", 0x6E8, "EnumProperty"},
            {"FNEVolumeShapeMap", 0x6F0, "MapProperty"},
            {"SceneQueryShape", 0x700, "EnumProperty"},
            {"SceneQueryObjectTypes", 0x708, "ArrayProperty"},
            {"CachedMinigame", 0x738, "WeakObjectProperty"},
            {"TrackedActors", 0x740, "SetProperty"},
        }};
    };

}
