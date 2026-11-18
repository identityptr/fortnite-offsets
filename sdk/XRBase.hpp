#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::XRBase
{
    struct AsyncTask_LoadXRDeviceVisComponent
    {
        static constexpr std::string_view Name = "AsyncTask_LoadXRDeviceVisComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnModelLoaded = 0x30;
            static constexpr std::uintptr_t OnLoadFailure = 0x40;
            static constexpr std::uintptr_t SpawnedComponent = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnModelLoaded", 0x30, "MulticastInlineDelegateProperty"},
            {"OnLoadFailure", 0x40, "MulticastInlineDelegateProperty"},
            {"SpawnedComponent", 0x58, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddDeviceVisualizationComponentAsync",
            "AddNamedDeviceVisualizationComponentAsync",
        }};
    };

    struct HeadMountedDisplayFunctionLibrary
    {
        static constexpr std::string_view Name = "HeadMountedDisplayFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 46> FunctionNames{{
            "BreakKey",
            "CalibrateExternalTrackingToHMD",
            "ClearXRTimedInputActionDelegate",
            "ConnectRemoteXRDevice",
            "DisconnectRemoteXRDevice",
            "EnableHMD",
            "EnumerateTrackedDevices",
            "GetControllerTransformForTime2",
            "GetCurrentInteractionProfile",
            "GetDevicePose",
            "GetDeviceWorldPose",
            "GetHMDData",
            "GetHMDDeviceName",
            "GetHMDWornState",
            "GetHandTrackingState",
            "GetMotionControllerState",
            "GetNumOfTrackingSensors",
            "GetOrientationAndPosition",
            "GetPixelDensity",
            "GetPlayAreaBounds",
            "GetPlayAreaRect",
            "GetTrackingOrigin",
            "GetTrackingOriginTransform",
            "GetTrackingSensorParameters",
            "GetTrackingToWorldTransform",
            "GetVRFocusState",
            "GetVersionString",
            "GetWorldToMetersScale",
            "GetXRSecondaryScreenPercentage",
            "GetXRSystemFlags",
            "HasValidTrackingPosition",
            "IsDeviceTracking",
            "IsHeadMountedDisplayConnected",
            "IsHeadMountedDisplayEnabled",
            "IsSpectatorScreenModeControllable",
            "ResetOrientationAndPosition",
            "SetClippingPlanes",
            "SetHMDColorScaleAndBias",
            "SetSpectatorScreenMode",
            "SetSpectatorScreenModeTexturePlusEyeLayout",
            "SetSpectatorScreenTexture",
            "SetTrackingOrigin",
            "SetWorldToMetersScale",
            "SetXRDisconnectDelegate",
            "SetXRTimedInputActionDelegate",
            "UpdateExternalTrackingHMDPosition",
        }};
    };

    struct MotionTrackedDeviceFunctionLibrary
    {
        static constexpr std::string_view Name = "MotionTrackedDeviceFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 18> FunctionNames{{
            "DisableMotionTrackingForComponent",
            "DisableMotionTrackingOfAllControllers",
            "DisableMotionTrackingOfControllersForPlayer",
            "DisableMotionTrackingOfDevice",
            "DisableMotionTrackingOfSource",
            "EnableMotionTrackingForComponent",
            "EnableMotionTrackingOfDevice",
            "EnableMotionTrackingOfSource",
            "EnumerateMotionSources",
            "GetActiveTrackingSystemName",
            "GetMaximumMotionTrackedControllerCount",
            "GetMotionTrackingEnabledControllerCount",
            "IsMotionSourceTracking",
            "IsMotionTrackedDeviceCountManagementNecessary",
            "IsMotionTrackingEnabledForComponent",
            "IsMotionTrackingEnabledForDevice",
            "IsMotionTrackingEnabledForSource",
            "SetIsControllerMotionTrackingEnabledByDefault",
        }};
    };

    struct VRNotificationsComponent
    {
        static constexpr std::string_view Name = "VRNotificationsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate = 0xC0;
            static constexpr std::uintptr_t HMDTrackingInitializedDelegate = 0xD0;
            static constexpr std::uintptr_t HMDRecenteredDelegate = 0xE0;
            static constexpr std::uintptr_t HMDLostDelegate = 0xF0;
            static constexpr std::uintptr_t HMDReconnectedDelegate = 0x100;
            static constexpr std::uintptr_t HMDConnectCanceledDelegate = 0x110;
            static constexpr std::uintptr_t HMDPutOnHeadDelegate = 0x120;
            static constexpr std::uintptr_t HMDRemovedFromHeadDelegate = 0x130;
            static constexpr std::uintptr_t VRControllerRecenteredDelegate = 0x140;
            static constexpr std::uintptr_t XRTrackingOriginChangedDelegate = 0x150;
            static constexpr std::uintptr_t XRPlayAreaChangedDelegate = 0x160;
            static constexpr std::uintptr_t XRInteractionProfileChangedDelegate = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"HMDTrackingInitializedDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"HMDRecenteredDelegate", 0xE0, "MulticastInlineDelegateProperty"},
            {"HMDLostDelegate", 0xF0, "MulticastInlineDelegateProperty"},
            {"HMDReconnectedDelegate", 0x100, "MulticastInlineDelegateProperty"},
            {"HMDConnectCanceledDelegate", 0x110, "MulticastInlineDelegateProperty"},
            {"HMDPutOnHeadDelegate", 0x120, "MulticastInlineDelegateProperty"},
            {"HMDRemovedFromHeadDelegate", 0x130, "MulticastInlineDelegateProperty"},
            {"VRControllerRecenteredDelegate", 0x140, "MulticastInlineDelegateProperty"},
            {"XRTrackingOriginChangedDelegate", 0x150, "MulticastInlineDelegateProperty"},
            {"XRPlayAreaChangedDelegate", 0x160, "MulticastInlineDelegateProperty"},
            {"XRInteractionProfileChangedDelegate", 0x170, "MulticastInlineDelegateProperty"},
        }};
    };

    struct XRAssetFunctionLibrary
    {
        static constexpr std::string_view Name = "XRAssetFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddDeviceVisualizationComponentBlocking",
            "AddNamedDeviceVisualizationComponentBlocking",
        }};
    };

    struct XRDeviceVisualizationComponent
    {
        static constexpr std::string_view Name = "XRDeviceVisualizationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsVisualizationActive = 0x6A0;
            static constexpr std::uintptr_t DisplayModelSource = 0x6A4;
            static constexpr std::uintptr_t CustomDisplayMesh = 0x6A8;
            static constexpr std::uintptr_t DisplayMeshMaterialOverrides = 0x6B0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsVisualizationActive", 0x6A0, "BoolProperty"},
            {"DisplayModelSource", 0x6A4, "NameProperty"},
            {"CustomDisplayMesh", 0x6A8, "ObjectProperty"},
            {"DisplayMeshMaterialOverrides", 0x6B0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "SetCustomDisplayMesh",
            "SetDisplayModelSource",
            "SetIsRenderingActive",
            "SetIsVisualizationActive",
        }};
    };

    struct XRLoadingScreenFunctionLibrary
    {
        static constexpr std::string_view Name = "XRLoadingScreenFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "AddLoadingScreenSplash",
            "ClearLoadingScreenSplashes",
            "HideLoadingScreen",
            "SetLoadingScreen",
            "ShowLoadingScreen",
        }};
    };

}
