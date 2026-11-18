#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Component
{
    struct CollisionQueryActorConvertor
    {
        static constexpr std::string_view Name = "CollisionQueryActorConvertor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DecalProxyActor
    {
        static constexpr std::string_view Name = "DecalProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DecalComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DecalComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct DirectionalLightProxyActor
    {
        static constexpr std::string_view Name = "DirectionalLightProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LightProxyActor";
        struct Offsets
        {
            static constexpr std::uintptr_t LightComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LightComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct ForwardsSelectionToTypedElement
    {
        static constexpr std::string_view Name = "ForwardsSelectionToTypedElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LightProxyActor
    {
        static constexpr std::string_view Name = "LightProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LightComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LightComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct ParticleSystemProxyActor
    {
        static constexpr std::string_view Name = "ParticleSystemProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t NiagaraComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NiagaraComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct PhysicsEntityComponent_Implementation
    {
        static constexpr std::string_view Name = "PhysicsEntityComponent_Implementation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyInstance = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BodyInstance", 0x28, "StructProperty"},
        }};
    };

    struct PointLightProxyActor
    {
        static constexpr std::string_view Name = "PointLightProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LightProxyActor";
        struct Offsets
        {
            static constexpr std::uintptr_t LightComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LightComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct RectLightProxyActor
    {
        static constexpr std::string_view Name = "RectLightProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LightProxyActor";
        struct Offsets
        {
            static constexpr std::uintptr_t LightComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LightComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct SoundProxyActor
    {
        static constexpr std::string_view Name = "SoundProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AudioComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct SphereLightProxyActor
    {
        static constexpr std::string_view Name = "SphereLightProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LightProxyActor";
        struct Offsets
        {
            static constexpr std::uintptr_t LightComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LightComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct SpotLightProxyActor
    {
        static constexpr std::string_view Name = "SpotLightProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LightProxyActor";
        struct Offsets
        {
            static constexpr std::uintptr_t LightComponent = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LightComponent", 0x280, "ObjectProperty"},
        }};
    };

    struct TextDisplayProxyActor
    {
        static constexpr std::string_view Name = "TextDisplayProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TextRenderComponent = 0x298;
            static constexpr std::uintptr_t TextMaterialInstanceDynamic = 0x2D0;
            static constexpr std::uintptr_t Font = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TextRenderComponent", 0x298, "ObjectProperty"},
            {"TextMaterialInstanceDynamic", 0x2D0, "ObjectProperty"},
            {"Font", 0x2D8, "ObjectProperty"},
        }};
    };

    struct VerseRepMovementNetSerializerConfig
    {
        static constexpr std::string_view Name = "VerseRepMovementNetSerializerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NetSerializerConfig";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
