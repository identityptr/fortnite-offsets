#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CinematicCamera
{
    struct CameraFilmbackSettings
    {
        static constexpr std::string_view Name = "CameraFilmbackSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SensorWidth = 0x0;
            static constexpr std::uintptr_t SensorHeight = 0x4;
            static constexpr std::uintptr_t SensorHorizontalOffset = 0x8;
            static constexpr std::uintptr_t SensorVerticalOffset = 0xC;
            static constexpr std::uintptr_t SensorAspectRatio = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SensorWidth", 0x0, "FloatProperty"},
            {"SensorHeight", 0x4, "FloatProperty"},
            {"SensorHorizontalOffset", 0x8, "FloatProperty"},
            {"SensorVerticalOffset", 0xC, "FloatProperty"},
            {"SensorAspectRatio", 0x10, "FloatProperty"},
        }};
    };

    struct CameraFocusSettings
    {
        static constexpr std::string_view Name = "CameraFocusSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FocusMethod = 0x0;
            static constexpr std::uintptr_t ManualFocusDistance = 0x4;
            static constexpr std::uintptr_t TrackingFocusSettings = 0x8;
            static constexpr std::uintptr_t bSmoothFocusChanges = 0x48;
            static constexpr std::uintptr_t FocusSmoothingInterpSpeed = 0x4C;
            static constexpr std::uintptr_t FocusOffset = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FocusMethod", 0x0, "EnumProperty"},
            {"ManualFocusDistance", 0x4, "FloatProperty"},
            {"TrackingFocusSettings", 0x8, "StructProperty"},
            {"bSmoothFocusChanges", 0x48, "BoolProperty"},
            {"FocusSmoothingInterpSpeed", 0x4C, "FloatProperty"},
            {"FocusOffset", 0x50, "FloatProperty"},
        }};
    };

    struct CameraLensSettings
    {
        static constexpr std::string_view Name = "CameraLensSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MinFocalLength = 0x0;
            static constexpr std::uintptr_t MaxFocalLength = 0x4;
            static constexpr std::uintptr_t MinFStop = 0x8;
            static constexpr std::uintptr_t MaxFStop = 0xC;
            static constexpr std::uintptr_t MinimumFocusDistance = 0x10;
            static constexpr std::uintptr_t SqueezeFactor = 0x14;
            static constexpr std::uintptr_t DiaphragmBladeCount = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MinFocalLength", 0x0, "FloatProperty"},
            {"MaxFocalLength", 0x4, "FloatProperty"},
            {"MinFStop", 0x8, "FloatProperty"},
            {"MaxFStop", 0xC, "FloatProperty"},
            {"MinimumFocusDistance", 0x10, "FloatProperty"},
            {"SqueezeFactor", 0x14, "FloatProperty"},
            {"DiaphragmBladeCount", 0x18, "IntProperty"},
        }};
    };

    struct CameraLookatTrackingSettings
    {
        static constexpr std::string_view Name = "CameraLookatTrackingSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bDrawDebugLookAtTrackingPosition = 0x0;
            static constexpr std::uintptr_t bEnableLookAtTracking = 0x0;
            static constexpr std::uintptr_t LookAtTrackingInterpSpeed = 0x4;
            static constexpr std::uintptr_t ActorToTrack = 0x28;
            static constexpr std::uintptr_t RelativeOffset = 0x48;
            static constexpr std::uintptr_t bAllowRoll = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bDrawDebugLookAtTrackingPosition", 0x0, "BoolProperty"},
            {"bEnableLookAtTracking", 0x0, "BoolProperty"},
            {"LookAtTrackingInterpSpeed", 0x4, "FloatProperty"},
            {"ActorToTrack", 0x28, "SoftObjectProperty"},
            {"RelativeOffset", 0x48, "StructProperty"},
            {"bAllowRoll", 0x60, "BoolProperty"},
        }};
    };

    struct CameraRig_Crane
    {
        static constexpr std::string_view Name = "CameraRig_Crane";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CranePitch = 0x278;
            static constexpr std::uintptr_t CraneYaw = 0x27C;
            static constexpr std::uintptr_t CraneArmLength = 0x280;
            static constexpr std::uintptr_t bLockMountPitch = 0x284;
            static constexpr std::uintptr_t bLockMountYaw = 0x285;
            static constexpr std::uintptr_t TransformComponent = 0x288;
            static constexpr std::uintptr_t CraneYawControl = 0x290;
            static constexpr std::uintptr_t CranePitchControl = 0x298;
            static constexpr std::uintptr_t CraneCameraMount = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CranePitch", 0x278, "FloatProperty"},
            {"CraneYaw", 0x27C, "FloatProperty"},
            {"CraneArmLength", 0x280, "FloatProperty"},
            {"bLockMountPitch", 0x284, "BoolProperty"},
            {"bLockMountYaw", 0x285, "BoolProperty"},
            {"TransformComponent", 0x288, "ObjectProperty"},
            {"CraneYawControl", 0x290, "ObjectProperty"},
            {"CranePitchControl", 0x298, "ObjectProperty"},
            {"CraneCameraMount", 0x2A0, "ObjectProperty"},
        }};
    };

    struct CameraRig_Rail
    {
        static constexpr std::string_view Name = "CameraRig_Rail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentPositionOnRail = 0x278;
            static constexpr std::uintptr_t bLockOrientationToRail = 0x27C;
            static constexpr std::uintptr_t TransformComponent = 0x280;
            static constexpr std::uintptr_t RailSplineComponent = 0x288;
            static constexpr std::uintptr_t RailCameraMount = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CurrentPositionOnRail", 0x278, "FloatProperty"},
            {"bLockOrientationToRail", 0x27C, "BoolProperty"},
            {"TransformComponent", 0x280, "ObjectProperty"},
            {"RailSplineComponent", 0x288, "ObjectProperty"},
            {"RailCameraMount", 0x290, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetRailSplineComponent",
        }};
    };

    struct CameraTrackingFocusSettings
    {
        static constexpr std::string_view Name = "CameraTrackingFocusSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorToTrack = 0x0;
            static constexpr std::uintptr_t RelativeOffset = 0x20;
            static constexpr std::uintptr_t bDrawDebugTrackingFocusPoint = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorToTrack", 0x0, "SoftObjectProperty"},
            {"RelativeOffset", 0x20, "StructProperty"},
            {"bDrawDebugTrackingFocusPoint", 0x38, "BoolProperty"},
        }};
    };

    struct CineCameraActor
    {
        static constexpr std::string_view Name = "CineCameraActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraActor";
        struct Offsets
        {
            static constexpr std::uintptr_t LookatTrackingSettings = 0xA58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LookatTrackingSettings", 0xA58, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetCineCameraComponent",
        }};
    };

    struct CineCameraComponent
    {
        static constexpr std::string_view Name = "CineCameraComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FilmbackSettings = 0xAD0;
            static constexpr std::uintptr_t Filmback = 0xAE4;
            static constexpr std::uintptr_t LensSettings = 0xAF8;
            static constexpr std::uintptr_t FocusSettings = 0xB18;
            static constexpr std::uintptr_t CropSettings = 0xB70;
            static constexpr std::uintptr_t CurrentFocalLength = 0xB74;
            static constexpr std::uintptr_t CurrentAperture = 0xB78;
            static constexpr std::uintptr_t CurrentFocusDistance = 0xB7C;
            static constexpr std::uintptr_t ExposureMethod = 0xB80;
            static constexpr std::uintptr_t bOverride_CustomNearClippingPlane = 0xB84;
            static constexpr std::uintptr_t CustomNearClippingPlane = 0xB88;
            static constexpr std::uintptr_t FilmbackPresets = 0xB98;
            static constexpr std::uintptr_t LensPresets = 0xBA8;
            static constexpr std::uintptr_t DefaultFilmbackPresetName = 0xBB8;
            static constexpr std::uintptr_t DefaultFilmbackPreset = 0xBC8;
            static constexpr std::uintptr_t DefaultLensPresetName = 0xBD8;
            static constexpr std::uintptr_t DefaultLensFocalLength = 0xBE8;
            static constexpr std::uintptr_t DefaultLensFStop = 0xBEC;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"FilmbackSettings", 0xAD0, "StructProperty"},
            {"Filmback", 0xAE4, "StructProperty"},
            {"LensSettings", 0xAF8, "StructProperty"},
            {"FocusSettings", 0xB18, "StructProperty"},
            {"CropSettings", 0xB70, "StructProperty"},
            {"CurrentFocalLength", 0xB74, "FloatProperty"},
            {"CurrentAperture", 0xB78, "FloatProperty"},
            {"CurrentFocusDistance", 0xB7C, "FloatProperty"},
            {"ExposureMethod", 0xB80, "EnumProperty"},
            {"bOverride_CustomNearClippingPlane", 0xB84, "BoolProperty"},
            {"CustomNearClippingPlane", 0xB88, "FloatProperty"},
            {"FilmbackPresets", 0xB98, "ArrayProperty"},
            {"LensPresets", 0xBA8, "ArrayProperty"},
            {"DefaultFilmbackPresetName", 0xBB8, "StrProperty"},
            {"DefaultFilmbackPreset", 0xBC8, "StrProperty"},
            {"DefaultLensPresetName", 0xBD8, "StrProperty"},
            {"DefaultLensFocalLength", 0xBE8, "FloatProperty"},
            {"DefaultLensFStop", 0xBEC, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "GetCropPresetName",
            "GetDefaultFilmbackPresetName",
            "GetFilmbackPresetName",
            "GetFilmbackPresetsCopy",
            "GetHorizontalFieldOfView",
            "GetHorizontalProjectionOffset",
            "GetLensPresetName",
            "GetLensPresetsCopy",
            "GetVerticalFieldOfView",
            "GetVerticalProjectionOffset",
            "SetCropPresetByName",
            "SetCropSettings",
            "SetCurrentAperture",
            "SetCurrentFocalLength",
            "SetCustomNearClippingPlane",
            "SetFilmback",
            "SetFilmbackPresetByName",
            "SetFocusSettings",
            "SetLensPresetByName",
            "SetLensSettings",
        }};
    };

    struct CineCameraSettings
    {
        static constexpr std::string_view Name = "CineCameraSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultLensPresetName = 0x30;
            static constexpr std::uintptr_t DefaultLensFocalLength = 0x40;
            static constexpr std::uintptr_t DefaultLensFStop = 0x44;
            static constexpr std::uintptr_t LensPresets = 0x48;
            static constexpr std::uintptr_t DefaultFilmbackPreset = 0x58;
            static constexpr std::uintptr_t FilmbackPresets = 0x68;
            static constexpr std::uintptr_t DefaultCropPresetName = 0x78;
            static constexpr std::uintptr_t CropPresets = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DefaultLensPresetName", 0x30, "StrProperty"},
            {"DefaultLensFocalLength", 0x40, "FloatProperty"},
            {"DefaultLensFStop", 0x44, "FloatProperty"},
            {"LensPresets", 0x48, "ArrayProperty"},
            {"DefaultFilmbackPreset", 0x58, "StrProperty"},
            {"FilmbackPresets", 0x68, "ArrayProperty"},
            {"DefaultCropPresetName", 0x78, "StrProperty"},
            {"CropPresets", 0x88, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "GetCineCameraSettings",
            "GetCropPresetByName",
            "GetCropPresetNames",
            "GetFilmbackPresetByName",
            "GetFilmbackPresetNames",
            "GetLensPresetByName",
            "GetLensPresetNames",
            "SetCropPresets",
            "SetDefaultCropPresetName",
            "SetDefaultFilmbackPreset",
            "SetDefaultLensFStop",
            "SetDefaultLensFocalLength",
            "SetDefaultLensPresetName",
            "SetFilmbackPresets",
            "SetLensPresets",
        }};
    };

    struct NamedFilmbackPreset
    {
        static constexpr std::string_view Name = "NamedFilmbackPreset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t DisplayName = 0x10;
            static constexpr std::uintptr_t FilmbackSettings = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"DisplayName", 0x10, "TextProperty"},
            {"FilmbackSettings", 0x20, "StructProperty"},
        }};
    };

    struct NamedLensPreset
    {
        static constexpr std::string_view Name = "NamedLensPreset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t LensSettings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"LensSettings", 0x10, "StructProperty"},
        }};
    };

    struct NamedPlateCropPreset
    {
        static constexpr std::string_view Name = "NamedPlateCropPreset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t CropSettings = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"CropSettings", 0x10, "StructProperty"},
        }};
    };

    struct PlateCropSettings
    {
        static constexpr std::string_view Name = "PlateCropSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AspectRatio = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AspectRatio", 0x0, "FloatProperty"},
        }};
    };

}
