#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SproutBuilding
{
    struct SproutBuilderTool
    {
        static constexpr std::string_view Name = "SproutBuilderTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuilderTool";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingData = 0x1AF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputMappingData", 0x1AF0, "ObjectProperty"},
        }};
    };

    struct SproutBuilderToolPlayerComponent
    {
        static constexpr std::string_view Name = "SproutBuilderToolPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuilderToolPlayerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BuilderToolWeaponItemDefinition = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BuilderToolWeaponItemDefinition", 0xC8, "ObjectProperty"},
        }};
    };

    struct SproutBuildingBehavior
    {
        static constexpr std::string_view Name = "SproutBuildingBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedBuildManifest = 0x338;
            static constexpr std::uintptr_t RotateInputAction = 0x390;
            static constexpr std::uintptr_t NudgeInputAction = 0x398;
            static constexpr std::uintptr_t ToggleNudgeInputAction = 0x3A0;
            static constexpr std::uintptr_t AdjacencyInputAction = 0x3A8;
            static constexpr std::uintptr_t SnapToggleInputAction = 0x3B0;
            static constexpr std::uintptr_t ToggleNudgeAxisInputAction = 0x3B8;
            static constexpr std::uintptr_t ResetNudgeInputAction = 0x3C0;
            static constexpr std::uintptr_t EditModeInputAction = 0x3C8;
            static constexpr std::uintptr_t OffGridRotationStep = 0x3D0;
            static constexpr std::uintptr_t MaxSelectionDistance = 0x3D8;
            static constexpr std::uintptr_t MaxSelectionDistanceZ = 0x3DC;
            static constexpr std::uintptr_t MaxConnectivityDistance = 0x3E0;
            static constexpr std::uintptr_t DefaultGridOffsetLimit = 0x3F8;
            static constexpr std::uintptr_t PenetrationTolerance = 0x408;
            static constexpr std::uintptr_t SFX = 0x420;
            static constexpr std::uintptr_t OverlappableClasses = 0x468;
            static constexpr std::uintptr_t PlacementSupportingClasses = 0x488;
            static constexpr std::uintptr_t SupportedOverlappableClasses = 0x4A8;
            static constexpr std::uintptr_t Overrides = 0x4C8;
            static constexpr std::uintptr_t bEnableAdjacency = 0x820;
            static constexpr std::uintptr_t bEnableSnapPlacement = 0x821;
            static constexpr std::uintptr_t bEnableVerticalAxisNudge = 0x822;
            static constexpr std::uintptr_t OnToggleSnapping = 0x828;
            static constexpr std::uintptr_t OnSmoothingChanged = 0x838;
            static constexpr std::uintptr_t OnPlacementTypeChanged = 0x848;
            static constexpr std::uintptr_t CachedBuildingStateContext = 0x878;
            static constexpr std::uintptr_t OnBuildingStateContextChanged = 0x8B8;
            static constexpr std::uintptr_t LastTriggerRequestedTimestamp = 0x8C8;
            static constexpr std::uintptr_t LastTriggerTimestamp = 0x8D0;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"SavedBuildManifest", 0x338, "StructProperty"},
            {"RotateInputAction", 0x390, "ObjectProperty"},
            {"NudgeInputAction", 0x398, "ObjectProperty"},
            {"ToggleNudgeInputAction", 0x3A0, "ObjectProperty"},
            {"AdjacencyInputAction", 0x3A8, "ObjectProperty"},
            {"SnapToggleInputAction", 0x3B0, "ObjectProperty"},
            {"ToggleNudgeAxisInputAction", 0x3B8, "ObjectProperty"},
            {"ResetNudgeInputAction", 0x3C0, "ObjectProperty"},
            {"EditModeInputAction", 0x3C8, "ObjectProperty"},
            {"OffGridRotationStep", 0x3D0, "DoubleProperty"},
            {"MaxSelectionDistance", 0x3D8, "FloatProperty"},
            {"MaxSelectionDistanceZ", 0x3DC, "FloatProperty"},
            {"MaxConnectivityDistance", 0x3E0, "StructProperty"},
            {"DefaultGridOffsetLimit", 0x3F8, "StructProperty"},
            {"PenetrationTolerance", 0x408, "StructProperty"},
            {"SFX", 0x420, "StructProperty"},
            {"OverlappableClasses", 0x468, "StructProperty"},
            {"PlacementSupportingClasses", 0x488, "StructProperty"},
            {"SupportedOverlappableClasses", 0x4A8, "StructProperty"},
            {"Overrides", 0x4C8, "StructProperty"},
            {"bEnableAdjacency", 0x820, "BoolProperty"},
            {"bEnableSnapPlacement", 0x821, "BoolProperty"},
            {"bEnableVerticalAxisNudge", 0x822, "BoolProperty"},
            {"OnToggleSnapping", 0x828, "MulticastInlineDelegateProperty"},
            {"OnSmoothingChanged", 0x838, "MulticastInlineDelegateProperty"},
            {"OnPlacementTypeChanged", 0x848, "MulticastInlineDelegateProperty"},
            {"CachedBuildingStateContext", 0x878, "StructProperty"},
            {"OnBuildingStateContextChanged", 0x8B8, "MulticastInlineDelegateProperty"},
            {"LastTriggerRequestedTimestamp", 0x8C8, "DoubleProperty"},
            {"LastTriggerTimestamp", 0x8D0, "DoubleProperty"},
        }};
    };

    struct SproutBuildingBlueprintPersistenceAssetType
    {
        static constexpr std::string_view Name = "SproutBuildingBlueprintPersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBlueprintPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutBuildingCheatManager
    {
        static constexpr std::string_view Name = "SproutBuildingCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SproutBuildingItemDefinition
    {
        static constexpr std::string_view Name = "SproutBuildingItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SproutCoreBuildingItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemType = 0x98;
            static constexpr std::uintptr_t PrimaryAssetIdItemTypeOverride = 0x99;
            static constexpr std::uintptr_t bShouldDisplayQuantity = 0x9A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemType", 0x98, "EnumProperty"},
            {"PrimaryAssetIdItemTypeOverride", 0x99, "EnumProperty"},
            {"bShouldDisplayQuantity", 0x9A, "BoolProperty"},
        }};
    };

    struct SproutControllerComponent_BuildingAnalytics
    {
        static constexpr std::string_view Name = "SproutControllerComponent_BuildingAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DecorationSession = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DecorationSession", 0xC8, "StructProperty"},
        }};
    };

}
