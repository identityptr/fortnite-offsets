#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PhotoModeRuntime
{
    struct ControllerComp_PhotoCamera
    {
        static constexpr std::string_view Name = "ControllerComp_PhotoCamera";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DrawCameraInputAction = 0xC0;
            static constexpr std::uintptr_t CloseCameraInputAction = 0xC8;
            static constexpr std::uintptr_t CameraItem = 0xD0;
            static constexpr std::uintptr_t bDisableEquipAnimation = 0xD8;
            static constexpr std::uintptr_t DrawBlockingTags = 0xE0;
            static constexpr std::uintptr_t EnhancedInputDataCamera = 0x100;
            static constexpr std::uintptr_t CachedWeapon = 0x150;
            static constexpr std::uintptr_t CameraWeapon = 0x158;
            static constexpr std::uintptr_t PhotoConfig = 0x160;
            static constexpr std::uintptr_t EnhancedInputComponent = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"DrawCameraInputAction", 0xC0, "ObjectProperty"},
            {"CloseCameraInputAction", 0xC8, "ObjectProperty"},
            {"CameraItem", 0xD0, "ObjectProperty"},
            {"bDisableEquipAnimation", 0xD8, "BoolProperty"},
            {"DrawBlockingTags", 0xE0, "StructProperty"},
            {"EnhancedInputDataCamera", 0x100, "StructProperty"},
            {"CachedWeapon", 0x150, "ObjectProperty"},
            {"CameraWeapon", 0x158, "ObjectProperty"},
            {"PhotoConfig", 0x160, "ObjectProperty"},
            {"EnhancedInputComponent", 0x168, "ObjectProperty"},
        }};
    };

    struct PhotoBlueprintLibrary
    {
        static constexpr std::string_view Name = "PhotoBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PhotoConfig
    {
        static constexpr std::string_view Name = "PhotoConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t orientation = 0x28;
            static constexpr std::uintptr_t Tags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"orientation", 0x28, "EnumProperty"},
            {"Tags", 0x30, "StructProperty"},
        }};
    };

    struct PhotoFacingDataAsset
    {
        static constexpr std::string_view Name = "PhotoFacingDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t FacingData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FacingData", 0x28, "MapProperty"},
        }};
    };

    struct PhotoFilterAsset
    {
        static constexpr std::string_view Name = "PhotoFilterAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x28;
            static constexpr std::uintptr_t PPFXMaterial = 0x30;
            static constexpr std::uintptr_t PhotoMaterial = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tag", 0x28, "StructProperty"},
            {"PPFXMaterial", 0x30, "SoftObjectProperty"},
            {"PhotoMaterial", 0x50, "SoftObjectProperty"},
        }};
    };

    struct PhotoFrameAsset
    {
        static constexpr std::string_view Name = "PhotoFrameAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Tag = 0x28;
            static constexpr std::uintptr_t FrameWidget = 0x30;
            static constexpr std::uintptr_t Thumbnail = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Tag", 0x28, "StructProperty"},
            {"FrameWidget", 0x30, "ClassProperty"},
            {"Thumbnail", 0x38, "ObjectProperty"},
        }};
    };

    struct PhotoHandlerComponent
    {
        static constexpr std::string_view Name = "PhotoHandlerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnScreenshotReady = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnScreenshotReady", 0xC0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PhotoPortrayableComponent
    {
        static constexpr std::string_view Name = "PhotoPortrayableComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEnterInOtherCameraFrustumDelegate = 0xC0;
            static constexpr std::uintptr_t OnExitOtherCameraFrustumDelegate = 0xD0;
            static constexpr std::uintptr_t AlertIconWidgetClass = 0xE8;
            static constexpr std::uintptr_t AlertIconWidget = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnEnterInOtherCameraFrustumDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnExitOtherCameraFrustumDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"AlertIconWidgetClass", 0xE8, "ClassProperty"},
            {"AlertIconWidget", 0xF0, "ObjectProperty"},
        }};
    };

    struct PhotoStoragePlayerStateComponent
    {
        static constexpr std::string_view Name = "PhotoStoragePlayerStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPhotoDatabaseUpdated = 0xC0;
            static constexpr std::uintptr_t Photos = 0xD0;
            static constexpr std::uintptr_t MaxNumPhotos = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnPhotoDatabaseUpdated", 0xC0, "MulticastInlineDelegateProperty"},
            {"Photos", 0xD0, "MapProperty"},
            {"MaxNumPhotos", 0xE0, "IntProperty"},
        }};
    };

}
