#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::IceRuntime
{
    struct FortCurieElementAttachConditionHandlerIce
    {
        static constexpr std::string_view Name = "FortCurieElementAttachConditionHandlerIce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieElementAttachConditionHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t ElementMagnitudeToIntensityCurve = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ElementMagnitudeToIntensityCurve", 0x30, "StructProperty"},
        }};
    };

    struct FortCurieElementAttachHandlerIce
    {
        static constexpr std::string_view Name = "FortCurieElementAttachHandlerIce";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieElementAttachHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t MinWaterContentOnDetach = 0x90;
            static constexpr std::uintptr_t ShatterDamageThreshold = 0x94;
            static constexpr std::uintptr_t AggregateDamagePerActor = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MinWaterContentOnDetach", 0x90, "FloatProperty"},
            {"ShatterDamageThreshold", 0x94, "FloatProperty"},
            {"AggregateDamagePerActor", 0x98, "MapProperty"},
        }};
    };

    struct FortCurieIceNativeFXHandler
    {
        static constexpr std::string_view Name = "FortCurieIceNativeFXHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieNativeFXHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedConfig", 0x28, "ObjectProperty"},
        }};
    };

    struct FortCurieIceNativeFXHandlerConfig
    {
        static constexpr std::string_view Name = "FortCurieIceNativeFXHandlerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieNativeFXHandlerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigName = 0x30;
            static constexpr std::uintptr_t ConfigTag = 0x34;
            static constexpr std::uintptr_t bNeedsAmbientAudio = 0x38;
            static constexpr std::uintptr_t bNeedsSignificanceTracking = 0x38;
            static constexpr std::uintptr_t bUseGlow = 0x38;
            static constexpr std::uintptr_t GlowPriority = 0x3C;
            static constexpr std::uintptr_t GlowMaterialIdx = 0x40;
            static constexpr std::uintptr_t GlowFadeInCurve = 0x48;
            static constexpr std::uintptr_t GlowFadeOutCurve = 0x90;
            static constexpr std::uintptr_t AmbientSound = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ConfigName", 0x30, "NameProperty"},
            {"ConfigTag", 0x34, "StructProperty"},
            {"bNeedsAmbientAudio", 0x38, "BoolProperty"},
            {"bNeedsSignificanceTracking", 0x38, "BoolProperty"},
            {"bUseGlow", 0x38, "BoolProperty"},
            {"GlowPriority", 0x3C, "IntProperty"},
            {"GlowMaterialIdx", 0x40, "FloatProperty"},
            {"GlowFadeInCurve", 0x48, "StructProperty"},
            {"GlowFadeOutCurve", 0x90, "StructProperty"},
            {"AmbientSound", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortCurieIcePropagationManager
    {
        static constexpr std::string_view Name = "FortCurieIcePropagationManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCurieManagerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InternalManagerConfig = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InternalManagerConfig", 0x30, "ObjectProperty"},
        }};
    };

    struct FortCurieIcePropagationManagerConfig
    {
        static constexpr std::string_view Name = "FortCurieIcePropagationManagerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CurieManagerComponentConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t IceBlockSeparation = 0x38;
            static constexpr std::uintptr_t IceBlockClass = 0x40;
            static constexpr std::uintptr_t PropagationRate = 0x48;
            static constexpr std::uintptr_t DefaultPropagationDepth = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"IceBlockSeparation", 0x38, "FloatProperty"},
            {"IceBlockClass", 0x40, "ClassProperty"},
            {"PropagationRate", 0x48, "FloatProperty"},
            {"DefaultPropagationDepth", 0x4C, "IntProperty"},
        }};
    };

    struct FortIceSkatesMovementControls
    {
        static constexpr std::string_view Name = "FortIceSkatesMovementControls";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementControls";
        struct Offsets
        {
            static constexpr std::uintptr_t TurnSpeed = 0x30;
            static constexpr std::uintptr_t Acceleration = 0x58;
            static constexpr std::uintptr_t UphillSlopeAcceleration = 0x80;
            static constexpr std::uintptr_t DownhillSlopeAcceleration = 0xA8;
            static constexpr std::uintptr_t MaxSlopeAngle = 0xD0;
            static constexpr std::uintptr_t MinSpeed = 0xF8;
            static constexpr std::uintptr_t TargetSpeed = 0x120;
            static constexpr std::uintptr_t MaxSpeed = 0x148;
            static constexpr std::uintptr_t AirDrag = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"TurnSpeed", 0x30, "StructProperty"},
            {"Acceleration", 0x58, "StructProperty"},
            {"UphillSlopeAcceleration", 0x80, "StructProperty"},
            {"DownhillSlopeAcceleration", 0xA8, "StructProperty"},
            {"MaxSlopeAngle", 0xD0, "StructProperty"},
            {"MinSpeed", 0xF8, "StructProperty"},
            {"TargetSpeed", 0x120, "StructProperty"},
            {"MaxSpeed", 0x148, "StructProperty"},
            {"AirDrag", 0x170, "StructProperty"},
        }};
    };

    struct IceGroundPath
    {
        static constexpr std::string_view Name = "IceGroundPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMesh = 0x278;
            static constexpr std::uintptr_t Material = 0x280;
            static constexpr std::uintptr_t ForwardAxis = 0x288;
            static constexpr std::uintptr_t SplinePoints = 0x290;
            static constexpr std::uintptr_t SplineOffset = 0x2A0;
            static constexpr std::uintptr_t SplineColliderExtentWidth = 0x2B8;
            static constexpr std::uintptr_t SplineColliderExtentHeight = 0x2BC;
            static constexpr std::uintptr_t LandscapeTraceBuffer = 0x2C0;
            static constexpr std::uintptr_t BoxColliderArray = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"StaticMesh", 0x278, "ObjectProperty"},
            {"Material", 0x280, "ObjectProperty"},
            {"ForwardAxis", 0x288, "ByteProperty"},
            {"SplinePoints", 0x290, "ArrayProperty"},
            {"SplineOffset", 0x2A0, "StructProperty"},
            {"SplineColliderExtentWidth", 0x2B8, "FloatProperty"},
            {"SplineColliderExtentHeight", 0x2BC, "FloatProperty"},
            {"LandscapeTraceBuffer", 0x2C0, "FloatProperty"},
            {"BoxColliderArray", 0x2C8, "ArrayProperty"},
        }};
    };

}
