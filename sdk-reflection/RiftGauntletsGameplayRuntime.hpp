#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RiftGauntletsGameplayRuntime
{
    struct FortCameraModifier_RiftGauntlets
    {
        static constexpr std::string_view Name = "FortCameraModifier_RiftGauntlets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModifier_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t bNativeDash = 0x80;
            static constexpr std::uintptr_t bNativeModifyCameraOffset = 0x81;
            static constexpr std::uintptr_t bNativeModifyCameraLag = 0x82;
            static constexpr std::uintptr_t bNativeModifyCameraFOV = 0x83;
            static constexpr std::uintptr_t NativeCameraOffsetTargetInterpSpeed = 0x84;
            static constexpr std::uintptr_t NativeCameraLagMagnitude = 0x88;
            static constexpr std::uintptr_t NativeCameraLagInterpSpeed = 0x8C;
            static constexpr std::uintptr_t NativeTargetFOV_Dash = 0x90;
            static constexpr std::uintptr_t NativeTargetFOV_Hover = 0x94;
            static constexpr std::uintptr_t NativeInterpSpeedFOV_Dash = 0x98;
            static constexpr std::uintptr_t NativeInterpSpeedFOV_Hover = 0x9C;
            static constexpr std::uintptr_t NativeCameraOffsetTarget = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bNativeDash", 0x80, "BoolProperty"},
            {"bNativeModifyCameraOffset", 0x81, "BoolProperty"},
            {"bNativeModifyCameraLag", 0x82, "BoolProperty"},
            {"bNativeModifyCameraFOV", 0x83, "BoolProperty"},
            {"NativeCameraOffsetTargetInterpSpeed", 0x84, "FloatProperty"},
            {"NativeCameraLagMagnitude", 0x88, "FloatProperty"},
            {"NativeCameraLagInterpSpeed", 0x8C, "FloatProperty"},
            {"NativeTargetFOV_Dash", 0x90, "FloatProperty"},
            {"NativeTargetFOV_Hover", 0x94, "FloatProperty"},
            {"NativeInterpSpeedFOV_Dash", 0x98, "FloatProperty"},
            {"NativeInterpSpeedFOV_Hover", 0x9C, "FloatProperty"},
            {"NativeCameraOffsetTarget", 0xA0, "StructProperty"},
        }};
    };

    struct FortPawnComponent_RiftGauntlets
    {
        static constexpr std::string_view Name = "FortPawnComponent_RiftGauntlets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HeightAboveWorldCheckInterval = 0xC8;
            static constexpr std::uintptr_t HeightAboveWorldCheckTraceLength = 0xF8;
            static constexpr std::uintptr_t DistanceThreshold_HeightAboveWorld = 0x128;
            static constexpr std::uintptr_t VelocityClampZ_HeightAboveWorld = 0x158;
            static constexpr std::uintptr_t BuildGridMaxHeightOffset = 0x188;
            static constexpr std::uintptr_t VelocityClampZ_AboveBuildGrid = 0x1B8;
            static constexpr std::uintptr_t CurrentHeightAboveWorld = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"HeightAboveWorldCheckInterval", 0xC8, "StructProperty"},
            {"HeightAboveWorldCheckTraceLength", 0xF8, "StructProperty"},
            {"DistanceThreshold_HeightAboveWorld", 0x128, "StructProperty"},
            {"VelocityClampZ_HeightAboveWorld", 0x158, "StructProperty"},
            {"BuildGridMaxHeightOffset", 0x188, "StructProperty"},
            {"VelocityClampZ_AboveBuildGrid", 0x1B8, "StructProperty"},
            {"CurrentHeightAboveWorld", 0x1E8, "FloatProperty"},
        }};
    };

    struct RiftGauntletsLayerAnimInstance
    {
        static constexpr std::string_view Name = "RiftGauntletsLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t RootRotation = 0x1180;
            static constexpr std::uintptr_t MoveAngle = 0x1184;
            static constexpr std::uintptr_t bPerformRootRotation = 0x1188;
            static constexpr std::uintptr_t bPerformDashBlendSpace = 0x1189;
            static constexpr std::uintptr_t RootRotationMax = 0x1190;
            static constexpr std::uintptr_t RootRotationMin = 0x11C0;
            static constexpr std::uintptr_t DashMontage_Flipped = 0x11F0;
            static constexpr std::uintptr_t DashMontage = 0x1210;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RootRotation", 0x1180, "FloatProperty"},
            {"MoveAngle", 0x1184, "FloatProperty"},
            {"bPerformRootRotation", 0x1188, "BoolProperty"},
            {"bPerformDashBlendSpace", 0x1189, "BoolProperty"},
            {"RootRotationMax", 0x1190, "StructProperty"},
            {"RootRotationMin", 0x11C0, "StructProperty"},
            {"DashMontage_Flipped", 0x11F0, "SoftObjectProperty"},
            {"DashMontage", 0x1210, "SoftObjectProperty"},
        }};
    };

}
