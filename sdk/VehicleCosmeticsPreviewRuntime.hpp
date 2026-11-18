#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VehicleCosmeticsPreviewRuntime
{
    struct FortItemVehiclePreviewActor
    {
        static constexpr std::string_view Name = "FortItemVehiclePreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewMultiAngleActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ZoomedOutVehicleCameraComponent = 0x5F0;
            static constexpr std::uintptr_t ZoomedInVehicleCameraComponent = 0x5F8;
            static constexpr std::uintptr_t ZoomedOutWheelCameraComponent = 0x600;
            static constexpr std::uintptr_t ZoomedInWheelCameraComponent = 0x608;
            static constexpr std::uintptr_t ZoomedOutMacaronCameraComponent = 0x610;
            static constexpr std::uintptr_t ZoomedInMacaronCameraComponent = 0x618;
            static constexpr std::uintptr_t ZoomedOutZestCameraComponent = 0x620;
            static constexpr std::uintptr_t ZoomedInZestCameraComponent = 0x628;
            static constexpr std::uintptr_t ZoomedOutBoostCameraComponent = 0x630;
            static constexpr std::uintptr_t ZoomedInBoostCameraComponent = 0x638;
            static constexpr std::uintptr_t ZoomedOutDriftTrailCameraComponent = 0x640;
            static constexpr std::uintptr_t ZoomedInDriftTrailCameraComponent = 0x648;
            static constexpr std::uintptr_t bUseSingleConfiguredCamera = 0x650;
            static constexpr std::uintptr_t FrameSettingHeightOffset = 0x654;
            static constexpr std::uintptr_t FrameSettingExpansionOffset = 0x658;
            static constexpr std::uintptr_t FrameSettingBoundingBehavior = 0x65C;
            static constexpr std::uintptr_t FrameSettingZoomInBoundsScale = 0x660;
            static constexpr std::uintptr_t bOverrideTargetBounds = 0x664;
            static constexpr std::uintptr_t OverrideTargetBounds = 0x668;
            static constexpr std::uintptr_t PreviewVehicleActorComponent = 0x688;
            static constexpr std::uintptr_t PreviewVehicleActor = 0x690;
            static constexpr std::uintptr_t ItemTypesToHideWhenLoading = 0x698;
            static constexpr std::uintptr_t ItemTypesToNeverHideWhenLoading = 0x6B8;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ZoomedOutVehicleCameraComponent", 0x5F0, "ObjectProperty"},
            {"ZoomedInVehicleCameraComponent", 0x5F8, "ObjectProperty"},
            {"ZoomedOutWheelCameraComponent", 0x600, "ObjectProperty"},
            {"ZoomedInWheelCameraComponent", 0x608, "ObjectProperty"},
            {"ZoomedOutMacaronCameraComponent", 0x610, "ObjectProperty"},
            {"ZoomedInMacaronCameraComponent", 0x618, "ObjectProperty"},
            {"ZoomedOutZestCameraComponent", 0x620, "ObjectProperty"},
            {"ZoomedInZestCameraComponent", 0x628, "ObjectProperty"},
            {"ZoomedOutBoostCameraComponent", 0x630, "ObjectProperty"},
            {"ZoomedInBoostCameraComponent", 0x638, "ObjectProperty"},
            {"ZoomedOutDriftTrailCameraComponent", 0x640, "ObjectProperty"},
            {"ZoomedInDriftTrailCameraComponent", 0x648, "ObjectProperty"},
            {"bUseSingleConfiguredCamera", 0x650, "BoolProperty"},
            {"FrameSettingHeightOffset", 0x654, "FloatProperty"},
            {"FrameSettingExpansionOffset", 0x658, "FloatProperty"},
            {"FrameSettingBoundingBehavior", 0x65C, "EnumProperty"},
            {"FrameSettingZoomInBoundsScale", 0x660, "FloatProperty"},
            {"bOverrideTargetBounds", 0x664, "BoolProperty"},
            {"OverrideTargetBounds", 0x668, "StructProperty"},
            {"PreviewVehicleActorComponent", 0x688, "ObjectProperty"},
            {"PreviewVehicleActor", 0x690, "ObjectProperty"},
            {"ItemTypesToHideWhenLoading", 0x698, "StructProperty"},
            {"ItemTypesToNeverHideWhenLoading", 0x6B8, "StructProperty"},
        }};
    };

    struct FortVehicleCosmeticsLevelPreviewActor
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsLevelPreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyAssetData = 0x2D8;
            static constexpr std::uintptr_t BoosterAssetData = 0x398;
            static constexpr std::uintptr_t DriftTrailAssetData = 0x440;
            static constexpr std::uintptr_t MacaronAssetData = 0x4E8;
            static constexpr std::uintptr_t SkinAssetData = 0x590;
            static constexpr std::uintptr_t WheelAssetData = 0x648;
            static constexpr std::uintptr_t ZestAssetData = 0x6F0;
            static constexpr std::uintptr_t BodyAsset = 0x798;
            static constexpr std::uintptr_t BoosterAsset = 0x7A0;
            static constexpr std::uintptr_t DriftTrailAsset = 0x7A8;
            static constexpr std::uintptr_t SkinAsset = 0x7B0;
            static constexpr std::uintptr_t WheelAsset = 0x7B8;
            static constexpr std::uintptr_t BodyCosmeticVariants = 0x7C0;
            static constexpr std::uintptr_t BoosterCosmeticVariants = 0x7D0;
            static constexpr std::uintptr_t DriftTrailCosmeticVariants = 0x7E0;
            static constexpr std::uintptr_t SkinCosmeticVariants = 0x7F0;
            static constexpr std::uintptr_t WheelCosmeticVariants = 0x800;
            static constexpr std::uintptr_t CosmeticsPreviewActor = 0x810;
            static constexpr std::uintptr_t bEnableBoost = 0x818;
            static constexpr std::uintptr_t bEnableDriftTrail = 0x818;
            static constexpr std::uintptr_t bForceFrontEndPreview = 0x818;
            static constexpr std::uintptr_t bEnableWheelSpin = 0x819;
            static constexpr std::uintptr_t WheelSpinSpeed = 0x81C;
            static constexpr std::uintptr_t WheelSteeringAngle = 0x820;
            static constexpr std::uintptr_t WheelSpinAngle = 0x824;
            static constexpr std::uintptr_t bEnableAsynchronousLoading = 0x828;
            static constexpr std::uintptr_t BodyAssetTierTag = 0x82C;
            static constexpr std::uintptr_t BoosterAssetTierTag = 0x830;
            static constexpr std::uintptr_t DriftTrailAssetTierTag = 0x834;
            static constexpr std::uintptr_t SkinAssetTierTag = 0x838;
            static constexpr std::uintptr_t WheelAssetTierTag = 0x83C;
            static constexpr std::uintptr_t BodyColor = 0x840;
            static constexpr std::uintptr_t GlowColor = 0x850;
            static constexpr std::uintptr_t BodyPaintName = 0x860;
            static constexpr std::uintptr_t BoosterPaintName = 0x870;
            static constexpr std::uintptr_t DriftTrailPaintName = 0x880;
            static constexpr std::uintptr_t SkinColor = 0x890;
            static constexpr std::uintptr_t SkinName = 0x8A0;
            static constexpr std::uintptr_t SkinPaintName = 0x8B0;
            static constexpr std::uintptr_t WheelPaintName = 0x8C0;
            static constexpr std::uintptr_t bCreateBodyPaintedVariants = 0x8D0;
            static constexpr std::uintptr_t bCreateSkinPaintedVariants = 0x8D0;
            static constexpr std::uintptr_t bCreateWheelPaintedVariants = 0x8D0;
            static constexpr std::uintptr_t PaintedVariantCollections = 0x8D8;
            static constexpr std::uintptr_t PreviewActorVersion = 0x920;
        };

        inline static constexpr std::array<PropertyInfo, 45> Properties{{
            {"BodyAssetData", 0x2D8, "StructProperty"},
            {"BoosterAssetData", 0x398, "StructProperty"},
            {"DriftTrailAssetData", 0x440, "StructProperty"},
            {"MacaronAssetData", 0x4E8, "StructProperty"},
            {"SkinAssetData", 0x590, "StructProperty"},
            {"WheelAssetData", 0x648, "StructProperty"},
            {"ZestAssetData", 0x6F0, "StructProperty"},
            {"BodyAsset", 0x798, "ObjectProperty"},
            {"BoosterAsset", 0x7A0, "ObjectProperty"},
            {"DriftTrailAsset", 0x7A8, "ObjectProperty"},
            {"SkinAsset", 0x7B0, "ObjectProperty"},
            {"WheelAsset", 0x7B8, "ObjectProperty"},
            {"BodyCosmeticVariants", 0x7C0, "ArrayProperty"},
            {"BoosterCosmeticVariants", 0x7D0, "ArrayProperty"},
            {"DriftTrailCosmeticVariants", 0x7E0, "ArrayProperty"},
            {"SkinCosmeticVariants", 0x7F0, "ArrayProperty"},
            {"WheelCosmeticVariants", 0x800, "ArrayProperty"},
            {"CosmeticsPreviewActor", 0x810, "ObjectProperty"},
            {"bEnableBoost", 0x818, "BoolProperty"},
            {"bEnableDriftTrail", 0x818, "BoolProperty"},
            {"bForceFrontEndPreview", 0x818, "BoolProperty"},
            {"bEnableWheelSpin", 0x819, "BoolProperty"},
            {"WheelSpinSpeed", 0x81C, "FloatProperty"},
            {"WheelSteeringAngle", 0x820, "FloatProperty"},
            {"WheelSpinAngle", 0x824, "FloatProperty"},
            {"bEnableAsynchronousLoading", 0x828, "BoolProperty"},
            {"BodyAssetTierTag", 0x82C, "StructProperty"},
            {"BoosterAssetTierTag", 0x830, "StructProperty"},
            {"DriftTrailAssetTierTag", 0x834, "StructProperty"},
            {"SkinAssetTierTag", 0x838, "StructProperty"},
            {"WheelAssetTierTag", 0x83C, "StructProperty"},
            {"BodyColor", 0x840, "StructProperty"},
            {"GlowColor", 0x850, "StructProperty"},
            {"BodyPaintName", 0x860, "StrProperty"},
            {"BoosterPaintName", 0x870, "StrProperty"},
            {"DriftTrailPaintName", 0x880, "StrProperty"},
            {"SkinColor", 0x890, "StructProperty"},
            {"SkinName", 0x8A0, "StrProperty"},
            {"SkinPaintName", 0x8B0, "StrProperty"},
            {"WheelPaintName", 0x8C0, "StrProperty"},
            {"bCreateBodyPaintedVariants", 0x8D0, "BoolProperty"},
            {"bCreateSkinPaintedVariants", 0x8D0, "BoolProperty"},
            {"bCreateWheelPaintedVariants", 0x8D0, "BoolProperty"},
            {"PaintedVariantCollections", 0x8D8, "ArrayProperty"},
            {"PreviewActorVersion", 0x920, "EnumProperty"},
        }};
    };

    struct VehicleAudioMotorModelUpdater_Preview
    {
        static constexpr std::string_view Name = "VehicleAudioMotorModelUpdater_Preview";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleAudioMotorModelUpdater_Default";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleCosmeticsPreviewVehicle
    {
        static constexpr std::string_view Name = "VehicleCosmeticsPreviewVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicle";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldWheelSpin = 0x2161;
            static constexpr std::uintptr_t FakeWheelSpinSpeed = 0x2164;
            static constexpr std::uintptr_t FakeWheelSteeringAngle = 0x2168;
            static constexpr std::uintptr_t FakeWheelSpinAngle = 0x216C;
            static constexpr std::uintptr_t bUseAbsoluteWheelSpin = 0x2170;
            static constexpr std::uintptr_t NumAllowedVehicleCosmeticChanges = 0x21BC;
            static constexpr std::uintptr_t AudioParams = 0x21C0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bShouldWheelSpin", 0x2161, "BoolProperty"},
            {"FakeWheelSpinSpeed", 0x2164, "FloatProperty"},
            {"FakeWheelSteeringAngle", 0x2168, "FloatProperty"},
            {"FakeWheelSpinAngle", 0x216C, "FloatProperty"},
            {"bUseAbsoluteWheelSpin", 0x2170, "BoolProperty"},
            {"NumAllowedVehicleCosmeticChanges", 0x21BC, "IntProperty"},
            {"AudioParams", 0x21C0, "StructProperty"},
        }};
    };

}
