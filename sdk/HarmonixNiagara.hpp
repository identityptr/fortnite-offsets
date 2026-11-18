#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HarmonixNiagara
{
    struct NiagaraDataInterfaceMusicClock
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMusicClock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceWithPerInstanceDataType";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicClockActor = 0x58;
            static constexpr std::uintptr_t DefaultMusicClockProvider = 0x78;
            static constexpr std::uintptr_t MusicClockProviderObjectOrClassBinding = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MusicClockActor", 0x58, "SoftObjectProperty"},
            {"DefaultMusicClockProvider", 0x78, "ObjectProperty"},
            {"MusicClockProviderObjectOrClassBinding", 0x80, "StructProperty"},
        }};
    };

    struct NiagaraDataInterfaceMusicClockActorProvider
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMusicClockActorProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceMusicClockProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicClockActor = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MusicClockActor", 0x30, "SoftObjectProperty"},
        }};
    };

    struct NiagaraDataInterfaceMusicClockAttachmentProvider
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMusicClockAttachmentProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterfaceMusicClockProvider";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceMusicClockProvider
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMusicClockProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceMusicClockProviderInterface
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMusicClockProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceMusicClockSelector
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMusicClockSelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceMusicClockSelectorInterface
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMusicClockSelectorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NiagaraDataInterfaceMusicClockSubsystem
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceMusicClockSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t MusicClockSelectorMap = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MusicClockSelectorMap", 0x30, "MapProperty"},
        }};
    };

    struct NiagaraDataInterfaceWithPerInstanceDataType
    {
        static constexpr std::string_view Name = "NiagaraDataInterfaceWithPerInstanceDataType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NiagaraDataInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
