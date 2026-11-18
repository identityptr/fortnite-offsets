#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarUI
{
    struct DelMarActionWidget
    {
        static constexpr std::string_view Name = "DelMarActionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Widget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInputMethodChanged = 0x168;
            static constexpr std::uintptr_t ProgressMaterialBrush = 0x180;
            static constexpr std::uintptr_t ProgressMaterialParam = 0x230;
            static constexpr std::uintptr_t IconRimBrush = 0x240;
            static constexpr std::uintptr_t InputActions = 0x2F0;
            static constexpr std::uintptr_t EnhancedInputAction = 0x300;
            static constexpr std::uintptr_t ProgressDynamicMaterial = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnInputMethodChanged", 0x168, "MulticastInlineDelegateProperty"},
            {"ProgressMaterialBrush", 0x180, "StructProperty"},
            {"ProgressMaterialParam", 0x230, "NameProperty"},
            {"IconRimBrush", 0x240, "StructProperty"},
            {"InputActions", 0x2F0, "ArrayProperty"},
            {"EnhancedInputAction", 0x300, "ObjectProperty"},
            {"ProgressDynamicMaterial", 0x310, "ObjectProperty"},
        }};
    };

    struct DelMarAttachedWidgetActor
    {
        static constexpr std::string_view Name = "DelMarAttachedWidgetActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DriftFollowDampening = 0x278;
            static constexpr std::uintptr_t WallFollowDampening = 0x27C;
            static constexpr std::uintptr_t RotateDampeningRate = 0x280;
            static constexpr std::uintptr_t ViewPlayerState = 0x284;
            static constexpr std::uintptr_t AttachedTarget = 0x28C;
            static constexpr std::uintptr_t AttachedVehicle = 0x294;
            static constexpr std::uintptr_t CameraManager = 0x29C;
            static constexpr std::uintptr_t AttachmentBaseComponent = 0x2A8;
            static constexpr std::uintptr_t SpeedometerWidget = 0x2B0;
            static constexpr std::uintptr_t DriftBoostWidget = 0x2B8;
            static constexpr std::uintptr_t UnderthrustWidget = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"DriftFollowDampening", 0x278, "FloatProperty"},
            {"WallFollowDampening", 0x27C, "FloatProperty"},
            {"RotateDampeningRate", 0x280, "FloatProperty"},
            {"ViewPlayerState", 0x284, "WeakObjectProperty"},
            {"AttachedTarget", 0x28C, "WeakObjectProperty"},
            {"AttachedVehicle", 0x294, "WeakObjectProperty"},
            {"CameraManager", 0x29C, "WeakObjectProperty"},
            {"AttachmentBaseComponent", 0x2A8, "ObjectProperty"},
            {"SpeedometerWidget", 0x2B0, "ObjectProperty"},
            {"DriftBoostWidget", 0x2B8, "ObjectProperty"},
            {"UnderthrustWidget", 0x2C0, "ObjectProperty"},
        }};
    };

    struct DelMarAttachedWidgetComponent
    {
        static constexpr std::string_view Name = "DelMarAttachedWidgetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedWidgetActorsClass = 0xC0;
            static constexpr std::uintptr_t AttachedWidgetActors = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AttachedWidgetActorsClass", 0xC0, "ArrayProperty"},
            {"AttachedWidgetActors", 0xD0, "ArrayProperty"},
        }};
    };

    struct DelMarBladeMenuContainer
    {
        static constexpr std::string_view Name = "DelMarBladeMenuContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DualBladeMenu = 0x520;
            static constexpr std::uintptr_t CloseBladeMenuTriggerTag = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DualBladeMenu", 0x520, "ObjectProperty"},
            {"CloseBladeMenuTriggerTag", 0x528, "StructProperty"},
        }};
    };

    struct DelMarBladeMenuTriggerUIStateComponent
    {
        static constexpr std::string_view Name = "DelMarBladeMenuTriggerUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configuration = 0x48;
            static constexpr std::uintptr_t HUDContext = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Configuration", 0x48, "ObjectProperty"},
            {"HUDContext", 0x50, "ObjectProperty"},
        }};
    };

    struct DelMarBladeMenuTriggerUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "DelMarBladeMenuTriggerUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t BladeMenuTriggerTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BladeMenuTriggerTag", 0x28, "StructProperty"},
        }};
    };

    struct DelMarBoundActionBar
    {
        static constexpr std::string_view Name = "DelMarBoundActionBar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonBoundActionBar";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionButtonClass = 0x208;
            static constexpr std::uintptr_t bDisplayOwningPlayerActionsOnly = 0x210;
            static constexpr std::uintptr_t bIgnoreDuplicateActions = 0x211;
            static constexpr std::uintptr_t OnActionBarUpdated = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActionButtonClass", 0x208, "ClassProperty"},
            {"bDisplayOwningPlayerActionsOnly", 0x210, "BoolProperty"},
            {"bIgnoreDuplicateActions", 0x211, "BoolProperty"},
            {"OnActionBarUpdated", 0x218, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarBoundActionButton
    {
        static constexpr std::string_view Name = "DelMarBoundActionButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonButtonBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text = 0x15D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Text", 0x15D8, "TextProperty"},
        }};
    };

    struct DelMarCheckpointTimer
    {
        static constexpr std::string_view Name = "DelMarCheckpointTimer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Text_LapCount = 0x520;
            static constexpr std::uintptr_t Text_CheckpointIndex = 0x528;
            static constexpr std::uintptr_t Text_Timestamp = 0x530;
            static constexpr std::uintptr_t Text_LapTimestamp = 0x538;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Text_LapCount", 0x520, "ObjectProperty"},
            {"Text_CheckpointIndex", 0x528, "ObjectProperty"},
            {"Text_Timestamp", 0x530, "ObjectProperty"},
            {"Text_LapTimestamp", 0x538, "ObjectProperty"},
        }};
    };

    struct DelMarCheckpointTrackerEntryWidget
    {
        static constexpr std::string_view Name = "DelMarCheckpointTrackerEntryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimTransitionIn = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimTransitionIn", 0x3A8, "ObjectProperty"},
        }};
    };

    struct DelMarCheckpointTrackerWidget
    {
        static constexpr std::string_view Name = "DelMarCheckpointTrackerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckpointTrackerEntryClass = 0x3A8;
            static constexpr std::uintptr_t NumDesignerPreviewEntries = 0x3B0;
            static constexpr std::uintptr_t EntrySpacing = 0x3B4;
            static constexpr std::uintptr_t MaxEntriesToDisplay = 0x3B8;
            static constexpr std::uintptr_t CheckpointEntryOverlay = 0x3C0;
            static constexpr std::uintptr_t EdgeFadeRetainerBox = 0x3C8;
            static constexpr std::uintptr_t TrackerSizeBox = 0x3D0;
            static constexpr std::uintptr_t DisplayedCheckpointTrackerEntries = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CheckpointTrackerEntryClass", 0x3A8, "ClassProperty"},
            {"NumDesignerPreviewEntries", 0x3B0, "IntProperty"},
            {"EntrySpacing", 0x3B4, "FloatProperty"},
            {"MaxEntriesToDisplay", 0x3B8, "IntProperty"},
            {"CheckpointEntryOverlay", 0x3C0, "ObjectProperty"},
            {"EdgeFadeRetainerBox", 0x3C8, "ObjectProperty"},
            {"TrackerSizeBox", 0x3D0, "ObjectProperty"},
            {"DisplayedCheckpointTrackerEntries", 0x3D8, "ArrayProperty"},
        }};
    };

    struct DelMarCountdownTimerWidget
    {
        static constexpr std::string_view Name = "DelMarCountdownTimerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TextBlock_RemainingTime = 0x3A8;
            static constexpr std::uintptr_t InitialCoundownTime = 0x3B0;
            static constexpr std::uintptr_t OnCountdownTimeChanged = 0x3B8;
            static constexpr std::uintptr_t OnCountdownTimeSet = 0x3C8;
            static constexpr std::uintptr_t OnCountdownTimeEnded = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TextBlock_RemainingTime", 0x3A8, "ObjectProperty"},
            {"InitialCoundownTime", 0x3B0, "DoubleProperty"},
            {"OnCountdownTimeChanged", 0x3B8, "MulticastInlineDelegateProperty"},
            {"OnCountdownTimeSet", 0x3C8, "MulticastInlineDelegateProperty"},
            {"OnCountdownTimeEnded", 0x3D8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarCreativeUIDirector
    {
        static constexpr std::string_view Name = "DelMarCreativeUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedDelMarVehicle = 0x2A8;
            static constexpr std::uintptr_t CreativeDelMarUI = 0x2B0;
            static constexpr std::uintptr_t VehicleInAirTag = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedDelMarVehicle", 0x2A8, "ObjectProperty"},
            {"CreativeDelMarUI", 0x2B0, "ObjectProperty"},
            {"VehicleInAirTag", 0x2B8, "StructProperty"},
        }};
    };

    struct DelMarDebugCountdown
    {
        static constexpr std::string_view Name = "DelMarDebugCountdown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CountdownText = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CountdownText", 0x520, "ObjectProperty"},
        }};
    };

    struct DelMarDebugGameplayTrackEntry
    {
        static constexpr std::string_view Name = "DelMarDebugGameplayTrackEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarDebugTrackEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTrackListScene = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayTrackListScene", 0x320, "ObjectProperty"},
        }};
    };

    struct DelMarDebugPointWidget
    {
        static constexpr std::string_view Name = "DelMarDebugPointWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPointsString = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerPointsString", 0x3A8, "StrProperty"},
        }};
    };

    struct DelMarDebugRubberbandingWidget
    {
        static constexpr std::string_view Name = "DelMarDebugRubberbandingWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bRubberbandingEnabled = 0x3A8;
            static constexpr std::uintptr_t PackDistance = 0x3AC;
            static constexpr std::uintptr_t MinPackDistance = 0x3B0;
            static constexpr std::uintptr_t MaxPackDistance = 0x3B4;
            static constexpr std::uintptr_t DistanceToPack = 0x3B8;
            static constexpr std::uintptr_t MinDistanceFromPack = 0x3BC;
            static constexpr std::uintptr_t MaxDistanceFromPack = 0x3C0;
            static constexpr std::uintptr_t MinSpeed = 0x3C4;
            static constexpr std::uintptr_t StableSpeed = 0x3C8;
            static constexpr std::uintptr_t AppliedBonusSpeed = 0x3CC;
            static constexpr std::uintptr_t DistanceToPackRatio = 0x3D0;
            static constexpr std::uintptr_t MaxBonusSpeedAtPosition = 0x3D4;
            static constexpr std::uintptr_t MaxSpeedAtPosition = 0x3D8;
            static constexpr std::uintptr_t MaxAllowedBonusSpeed = 0x3DC;
            static constexpr std::uintptr_t BonusSpeedGainedPerSecond = 0x3E0;
            static constexpr std::uintptr_t BonusSpeedLostPerSecond = 0x3E4;
            static constexpr std::uintptr_t MMRUsed = 0x3E8;
            static constexpr std::uintptr_t MaxBonusSpeedScalar = 0x3EC;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"bRubberbandingEnabled", 0x3A8, "BoolProperty"},
            {"PackDistance", 0x3AC, "FloatProperty"},
            {"MinPackDistance", 0x3B0, "FloatProperty"},
            {"MaxPackDistance", 0x3B4, "FloatProperty"},
            {"DistanceToPack", 0x3B8, "FloatProperty"},
            {"MinDistanceFromPack", 0x3BC, "FloatProperty"},
            {"MaxDistanceFromPack", 0x3C0, "FloatProperty"},
            {"MinSpeed", 0x3C4, "FloatProperty"},
            {"StableSpeed", 0x3C8, "FloatProperty"},
            {"AppliedBonusSpeed", 0x3CC, "FloatProperty"},
            {"DistanceToPackRatio", 0x3D0, "FloatProperty"},
            {"MaxBonusSpeedAtPosition", 0x3D4, "FloatProperty"},
            {"MaxSpeedAtPosition", 0x3D8, "FloatProperty"},
            {"MaxAllowedBonusSpeed", 0x3DC, "FloatProperty"},
            {"BonusSpeedGainedPerSecond", 0x3E0, "FloatProperty"},
            {"BonusSpeedLostPerSecond", 0x3E4, "FloatProperty"},
            {"MMRUsed", 0x3E8, "IntProperty"},
            {"MaxBonusSpeedScalar", 0x3EC, "FloatProperty"},
        }};
    };

    struct DelMarDebugTrackEntry
    {
        static constexpr std::string_view Name = "DelMarDebugTrackEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackNameText = 0x310;
            static constexpr std::uintptr_t LevelDataAsset = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TrackNameText", 0x310, "ObjectProperty"},
            {"LevelDataAsset", 0x318, "WeakObjectProperty"},
        }};
    };

    struct DelMarDebugTrackList
    {
        static constexpr std::string_view Name = "DelMarDebugTrackList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackView = 0x520;
            static constexpr std::uintptr_t bOnlyReturnAllowedLevels = 0x528;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TrackView", 0x520, "ObjectProperty"},
            {"bOnlyReturnAllowedLevels", 0x528, "BoolProperty"},
        }};
    };

    struct DelMarDebugVehicleHealthWidget
    {
        static constexpr std::string_view Name = "DelMarDebugVehicleHealthWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentHealth = 0x3A8;
            static constexpr std::uintptr_t MaxHealth = 0x3AC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentHealth", 0x3A8, "FloatProperty"},
            {"MaxHealth", 0x3AC, "FloatProperty"},
        }};
    };

    struct DelMarDebugVehicleWidget
    {
        static constexpr std::string_view Name = "DelMarDebugVehicleWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseTargetSpeed = 0x3A8;
            static constexpr std::uintptr_t FinalTargetSpeed = 0x3AC;
            static constexpr std::uintptr_t OversteerPercentage = 0x3B0;
            static constexpr std::uintptr_t bHasValidDraftingTarget = 0x3B4;
            static constexpr std::uintptr_t DraftingState = 0x3B5;
            static constexpr std::uintptr_t DraftingBonusSpeed = 0x3B8;
            static constexpr std::uintptr_t DraftingTargetDegrees = 0x3BC;
            static constexpr std::uintptr_t DraftingCurrentBonusSpeedPercentage = 0x3C0;
            static constexpr std::uintptr_t DraftingMaxBonusSpeedPercentage = 0x3C4;
            static constexpr std::uintptr_t SecondsInDrift = 0x3C8;
            static constexpr std::uintptr_t AccumulatedWaitingPeriodSeconds = 0x3CC;
            static constexpr std::uintptr_t DriftBoostBonusSpeed = 0x3D0;
            static constexpr std::uintptr_t DriftBoostDuration = 0x3D4;
            static constexpr std::uintptr_t DriftBoostDurationSecondsLeft = 0x3D8;
            static constexpr std::uintptr_t PotentialDriftBoostBonusSpeed = 0x3DC;
            static constexpr std::uintptr_t PotentialDriftBoostDuration = 0x3E0;
            static constexpr std::uintptr_t QueuedDriftBoostBonusSpeed = 0x3E4;
            static constexpr std::uintptr_t StartlineBonusSpeed = 0x3E8;
            static constexpr std::uintptr_t TurboBonusSpeed = 0x3EC;
            static constexpr std::uintptr_t TurboZoneBonusSpeed = 0x3F0;
            static constexpr std::uintptr_t TurboSecondsRemaining = 0x3F4;
            static constexpr std::uintptr_t TurboCharges = 0x3F8;
            static constexpr std::uintptr_t WorldBonusSpeed = 0x3FC;
            static constexpr std::uintptr_t TotalBonusSpeed = 0x400;
            static constexpr std::uintptr_t TerrainData = 0x404;
            static constexpr std::uintptr_t NumWheelWorldContacts = 0x41C;
            static constexpr std::uintptr_t AverageWheelWorldContactNormal = 0x420;
            static constexpr std::uintptr_t MinimumLandingSpeed = 0x438;
            static constexpr std::uintptr_t BaseForwardSpeed = 0x43C;
            static constexpr std::uintptr_t StableSpeed = 0x440;
            static constexpr std::uintptr_t UpwardSpeed = 0x444;
            static constexpr std::uintptr_t VehicleSpeed = 0x448;
            static constexpr std::uintptr_t bInvertedSteeringActive = 0x44C;
            static constexpr std::uintptr_t MaxForwardSpeed = 0x450;
            static constexpr std::uintptr_t SecondsSinceTerrainPenalty = 0x454;
            static constexpr std::uintptr_t KickflipActivationCharges = 0x458;
            static constexpr std::uintptr_t bStrafeDisabled = 0x45C;
            static constexpr std::uintptr_t bCanActivateStrafe = 0x45D;
            static constexpr std::uintptr_t StrafeCooldownSeconds = 0x460;
            static constexpr std::uintptr_t StrafeCooldownPercentage = 0x464;
            static constexpr std::uintptr_t VehicleMass = 0x468;
        };

        inline static constexpr std::array<PropertyInfo, 41> Properties{{
            {"BaseTargetSpeed", 0x3A8, "FloatProperty"},
            {"FinalTargetSpeed", 0x3AC, "FloatProperty"},
            {"OversteerPercentage", 0x3B0, "FloatProperty"},
            {"bHasValidDraftingTarget", 0x3B4, "BoolProperty"},
            {"DraftingState", 0x3B5, "EnumProperty"},
            {"DraftingBonusSpeed", 0x3B8, "FloatProperty"},
            {"DraftingTargetDegrees", 0x3BC, "FloatProperty"},
            {"DraftingCurrentBonusSpeedPercentage", 0x3C0, "FloatProperty"},
            {"DraftingMaxBonusSpeedPercentage", 0x3C4, "FloatProperty"},
            {"SecondsInDrift", 0x3C8, "FloatProperty"},
            {"AccumulatedWaitingPeriodSeconds", 0x3CC, "FloatProperty"},
            {"DriftBoostBonusSpeed", 0x3D0, "FloatProperty"},
            {"DriftBoostDuration", 0x3D4, "FloatProperty"},
            {"DriftBoostDurationSecondsLeft", 0x3D8, "FloatProperty"},
            {"PotentialDriftBoostBonusSpeed", 0x3DC, "FloatProperty"},
            {"PotentialDriftBoostDuration", 0x3E0, "FloatProperty"},
            {"QueuedDriftBoostBonusSpeed", 0x3E4, "FloatProperty"},
            {"StartlineBonusSpeed", 0x3E8, "FloatProperty"},
            {"TurboBonusSpeed", 0x3EC, "FloatProperty"},
            {"TurboZoneBonusSpeed", 0x3F0, "FloatProperty"},
            {"TurboSecondsRemaining", 0x3F4, "FloatProperty"},
            {"TurboCharges", 0x3F8, "FloatProperty"},
            {"WorldBonusSpeed", 0x3FC, "FloatProperty"},
            {"TotalBonusSpeed", 0x400, "FloatProperty"},
            {"TerrainData", 0x404, "StructProperty"},
            {"NumWheelWorldContacts", 0x41C, "IntProperty"},
            {"AverageWheelWorldContactNormal", 0x420, "StructProperty"},
            {"MinimumLandingSpeed", 0x438, "FloatProperty"},
            {"BaseForwardSpeed", 0x43C, "FloatProperty"},
            {"StableSpeed", 0x440, "FloatProperty"},
            {"UpwardSpeed", 0x444, "FloatProperty"},
            {"VehicleSpeed", 0x448, "FloatProperty"},
            {"bInvertedSteeringActive", 0x44C, "BoolProperty"},
            {"MaxForwardSpeed", 0x450, "FloatProperty"},
            {"SecondsSinceTerrainPenalty", 0x454, "FloatProperty"},
            {"KickflipActivationCharges", 0x458, "IntProperty"},
            {"bStrafeDisabled", 0x45C, "BoolProperty"},
            {"bCanActivateStrafe", 0x45D, "BoolProperty"},
            {"StrafeCooldownSeconds", 0x460, "FloatProperty"},
            {"StrafeCooldownPercentage", 0x464, "FloatProperty"},
            {"VehicleMass", 0x468, "FloatProperty"},
        }};
    };

    struct DelMarDialogBase
    {
        static constexpr std::string_view Name = "DelMarDialogBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBackHandler = 0x330;
            static constexpr std::uintptr_t bIsBackActionDisplayedInActionBar = 0x331;
            static constexpr std::uintptr_t OverrideBackActionDisplayName = 0x338;
            static constexpr std::uintptr_t bAutoActivate = 0x348;
            static constexpr std::uintptr_t bSupportsActivationFocus = 0x349;
            static constexpr std::uintptr_t bIsModal = 0x34A;
            static constexpr std::uintptr_t bAutoRestoreFocus = 0x34B;
            static constexpr std::uintptr_t bOverrideActionDomain = 0x34C;
            static constexpr std::uintptr_t InputMapping = 0x350;
            static constexpr std::uintptr_t InputMappingPriority = 0x358;
            static constexpr std::uintptr_t InputModeTagsToAdd = 0x360;
            static constexpr std::uintptr_t InputModeTagsToRemove = 0x380;
            static constexpr std::uintptr_t ActionDomainOverride = 0x3A0;
            static constexpr std::uintptr_t BP_OnWidgetActivated = 0x3C0;
            static constexpr std::uintptr_t BP_OnWidgetDeactivated = 0x3D0;
            static constexpr std::uintptr_t bIsActive = 0x3E0;
            static constexpr std::uintptr_t VisibilityBoundWidgets = 0x3E8;
            static constexpr std::uintptr_t bSetVisibilityOnActivated = 0x498;
            static constexpr std::uintptr_t ActivatedVisibility = 0x499;
            static constexpr std::uintptr_t bSetVisibilityOnDeactivated = 0x49A;
            static constexpr std::uintptr_t DeactivatedVisibility = 0x49B;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsBackHandler", 0x330, "BoolProperty"},
            {"bIsBackActionDisplayedInActionBar", 0x331, "BoolProperty"},
            {"OverrideBackActionDisplayName", 0x338, "TextProperty"},
            {"bAutoActivate", 0x348, "BoolProperty"},
            {"bSupportsActivationFocus", 0x349, "BoolProperty"},
            {"bIsModal", 0x34A, "BoolProperty"},
            {"bAutoRestoreFocus", 0x34B, "BoolProperty"},
            {"bOverrideActionDomain", 0x34C, "BoolProperty"},
            {"InputMapping", 0x350, "ObjectProperty"},
            {"InputMappingPriority", 0x358, "IntProperty"},
            {"InputModeTagsToAdd", 0x360, "StructProperty"},
            {"InputModeTagsToRemove", 0x380, "StructProperty"},
            {"ActionDomainOverride", 0x3A0, "SoftObjectProperty"},
            {"BP_OnWidgetActivated", 0x3C0, "MulticastInlineDelegateProperty"},
            {"BP_OnWidgetDeactivated", 0x3D0, "MulticastInlineDelegateProperty"},
            {"bIsActive", 0x3E0, "BoolProperty"},
            {"VisibilityBoundWidgets", 0x3E8, "ArrayProperty"},
            {"bSetVisibilityOnActivated", 0x498, "BoolProperty"},
            {"ActivatedVisibility", 0x499, "EnumProperty"},
            {"bSetVisibilityOnDeactivated", 0x49A, "BoolProperty"},
            {"DeactivatedVisibility", 0x49B, "EnumProperty"},
        }};
    };

    struct DelMarDialogHelper
    {
        static constexpr std::string_view Name = "DelMarDialogHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogMapping = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DialogMapping", 0x28, "MapProperty"},
        }};
    };

    struct DelMarDriverCameraWidget
    {
        static constexpr std::string_view Name = "DelMarDriverCameraWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultIntercomAnimation = 0x3A8;
            static constexpr std::uintptr_t ReactiveDriverCamera_Persistent = 0x3B0;
            static constexpr std::uintptr_t ReactiveWidgetOutroDelay = 0x3B8;
            static constexpr std::uintptr_t ReactiveWidgetMaxActiveTime = 0x3BC;
            static constexpr std::uintptr_t MainChannelAnimationTagTable = 0x3C0;
            static constexpr std::uintptr_t ReactiveAnimationTable = 0x3D0;
            static constexpr std::uintptr_t AnimationNameTable = 0x3E0;
            static constexpr std::uintptr_t IntercomSequenceHandle = 0x3F0;
            static constexpr std::uintptr_t ReactiveSequenceHandle = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DefaultIntercomAnimation", 0x3A8, "ObjectProperty"},
            {"ReactiveDriverCamera_Persistent", 0x3B0, "ObjectProperty"},
            {"ReactiveWidgetOutroDelay", 0x3B8, "FloatProperty"},
            {"ReactiveWidgetMaxActiveTime", 0x3BC, "FloatProperty"},
            {"MainChannelAnimationTagTable", 0x3C0, "MapProperty"},
            {"ReactiveAnimationTable", 0x3D0, "MapProperty"},
            {"AnimationNameTable", 0x3E0, "MapProperty"},
            {"IntercomSequenceHandle", 0x3F0, "StructProperty"},
            {"ReactiveSequenceHandle", 0x400, "StructProperty"},
        }};
    };

    struct DelMarEmotePickerContainer
    {
        static constexpr std::string_view Name = "DelMarEmotePickerContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CloseEmotePickerTriggerTag = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CloseEmotePickerTriggerTag", 0x520, "StructProperty"},
        }};
    };

    struct DelMarEmotePickerTriggerUIStateComponent
    {
        static constexpr std::string_view Name = "DelMarEmotePickerTriggerUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configuration = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Configuration", 0x48, "ObjectProperty"},
        }};
    };

    struct DelMarEmotePickerTriggerUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "DelMarEmotePickerTriggerUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t EmotePickerOpenTriggerTag = 0x28;
            static constexpr std::uintptr_t PickerData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EmotePickerOpenTriggerTag", 0x28, "StructProperty"},
            {"PickerData", 0x30, "ObjectProperty"},
        }};
    };

    struct DelMarExpandableHudWidget
    {
        static constexpr std::string_view Name = "DelMarExpandableHudWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NavigateEntriesBindingImage = 0x3A8;
            static constexpr std::uintptr_t ExpandableHudWidgetEntryClass = 0x3C8;
            static constexpr std::uintptr_t NumDesignerPreviewEntries = 0x3D0;
            static constexpr std::uintptr_t EntrySpacing = 0x3D4;
            static constexpr std::uintptr_t bExpanded = 0x3D8;
            static constexpr std::uintptr_t bNavigationEnabled = 0x3D9;
            static constexpr std::uintptr_t NavigateEntriesGamepadTexture = 0x3E0;
            static constexpr std::uintptr_t NavigateEntriesPCTexture = 0x3E8;
            static constexpr std::uintptr_t PlayerPreferences = 0x3F0;
            static constexpr std::uintptr_t EntryOverlay = 0x3F8;
            static constexpr std::uintptr_t EdgeFadeRetainerBox = 0x400;
            static constexpr std::uintptr_t ContentSizeBox = 0x408;
            static constexpr std::uintptr_t OnExpandToggled = 0x410;
            static constexpr std::uintptr_t OnNavigationEnabledChanged = 0x420;
            static constexpr std::uintptr_t OnExpandableChanged = 0x430;
            static constexpr std::uintptr_t DisplayedHudWidgetEntries = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"NavigateEntriesBindingImage", 0x3A8, "ObjectProperty"},
            {"ExpandableHudWidgetEntryClass", 0x3C8, "ClassProperty"},
            {"NumDesignerPreviewEntries", 0x3D0, "IntProperty"},
            {"EntrySpacing", 0x3D4, "FloatProperty"},
            {"bExpanded", 0x3D8, "BoolProperty"},
            {"bNavigationEnabled", 0x3D9, "BoolProperty"},
            {"NavigateEntriesGamepadTexture", 0x3E0, "ObjectProperty"},
            {"NavigateEntriesPCTexture", 0x3E8, "ObjectProperty"},
            {"PlayerPreferences", 0x3F0, "ObjectProperty"},
            {"EntryOverlay", 0x3F8, "ObjectProperty"},
            {"EdgeFadeRetainerBox", 0x400, "ObjectProperty"},
            {"ContentSizeBox", 0x408, "ObjectProperty"},
            {"OnExpandToggled", 0x410, "MulticastInlineDelegateProperty"},
            {"OnNavigationEnabledChanged", 0x420, "MulticastInlineDelegateProperty"},
            {"OnExpandableChanged", 0x430, "MulticastInlineDelegateProperty"},
            {"DisplayedHudWidgetEntries", 0x440, "ArrayProperty"},
        }};
    };

    struct DelMarGameplayContextUpdaterUIStateComponent
    {
        static constexpr std::string_view Name = "DelMarGameplayContextUpdaterUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GameStateToUITagMap = 0x48;
            static constexpr std::uintptr_t CurrentRacerState = 0x58;
            static constexpr std::uintptr_t CurrentGameState = 0x5C;
            static constexpr std::uintptr_t CurrentRaceMode = 0x60;
            static constexpr std::uintptr_t OwnerPlayerState = 0x64;
            static constexpr std::uintptr_t SpectatedPlayerState = 0x6C;
            static constexpr std::uintptr_t OwnerPlayerController = 0x74;
            static constexpr std::uintptr_t CachedPreferences = 0x7C;
            static constexpr std::uintptr_t LevelManager = 0x84;
            static constexpr std::uintptr_t CachedVehicle = 0x8C;
            static constexpr std::uintptr_t ChatManager = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"GameStateToUITagMap", 0x48, "MapProperty"},
            {"CurrentRacerState", 0x58, "StructProperty"},
            {"CurrentGameState", 0x5C, "StructProperty"},
            {"CurrentRaceMode", 0x60, "StructProperty"},
            {"OwnerPlayerState", 0x64, "WeakObjectProperty"},
            {"SpectatedPlayerState", 0x6C, "WeakObjectProperty"},
            {"OwnerPlayerController", 0x74, "WeakObjectProperty"},
            {"CachedPreferences", 0x7C, "WeakObjectProperty"},
            {"LevelManager", 0x84, "WeakObjectProperty"},
            {"CachedVehicle", 0x8C, "WeakObjectProperty"},
            {"ChatManager", 0x94, "WeakObjectProperty"},
        }};
    };

    struct DelMarGameplayContextUpdaterUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "DelMarGameplayContextUpdaterUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarGlobalLeaderboardEntryViewModel
    {
        static constexpr std::string_view Name = "DelMarGlobalLeaderboardEntryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerAccountId = 0x78;
            static constexpr std::uintptr_t PlayerName = 0x88;
            static constexpr std::uintptr_t RunDuration = 0x98;
            static constexpr std::uintptr_t Rank = 0xA0;
            static constexpr std::uintptr_t bIsLocalPlayer = 0xA8;
            static constexpr std::uintptr_t GlobalLeaderboardEntry = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PlayerAccountId", 0x78, "StrProperty"},
            {"PlayerName", 0x88, "StrProperty"},
            {"RunDuration", 0x98, "DoubleProperty"},
            {"Rank", 0xA0, "Int64Property"},
            {"bIsLocalPlayer", 0xA8, "BoolProperty"},
            {"GlobalLeaderboardEntry", 0xB0, "StructProperty"},
        }};
    };

    struct DelMarIdleMonitorUIStateComponent
    {
        static constexpr std::string_view Name = "DelMarIdleMonitorUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configuration = 0x48;
            static constexpr std::uintptr_t CachedRequestComponent = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Configuration", 0x48, "ObjectProperty"},
            {"CachedRequestComponent", 0x50, "ObjectProperty"},
        }};
    };

    struct DelMarIdleMonitorUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "DelMarIdleMonitorUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivityCheckPeriod = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActivityCheckPeriod", 0x28, "FloatProperty"},
        }};
    };

    struct DelMarInputActionRichTextBlockDecorator
    {
        static constexpr std::string_view Name = "DelMarInputActionRichTextBlockDecorator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RichTextBlockDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t InputAction = 0x28;
            static constexpr std::uintptr_t DisplayName = 0x30;
            static constexpr std::uintptr_t Key = 0x40;
            static constexpr std::uintptr_t Icon = 0x60;
            static constexpr std::uintptr_t OwnerWidget = 0x110;
            static constexpr std::uintptr_t OwningLocalPlayer = 0x118;
            static constexpr std::uintptr_t CommonInputSubsystem = 0x120;
            static constexpr std::uintptr_t EnhancedInputSubsystem = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"InputAction", 0x28, "ObjectProperty"},
            {"DisplayName", 0x30, "TextProperty"},
            {"Key", 0x40, "StructProperty"},
            {"Icon", 0x60, "StructProperty"},
            {"OwnerWidget", 0x110, "ObjectProperty"},
            {"OwningLocalPlayer", 0x118, "WeakObjectProperty"},
            {"CommonInputSubsystem", 0x120, "WeakObjectProperty"},
            {"EnhancedInputSubsystem", 0x128, "WeakObjectProperty"},
        }};
    };

    struct DelMarInputConfigWidgetBase
    {
        static constexpr std::string_view Name = "DelMarInputConfigWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredInputConfig = 0x4A0;
            static constexpr std::uintptr_t bFlushPlayerInputWhenActivating = 0x4A6;
            static constexpr std::uintptr_t bFlushPlayerInputWhenDeactivating = 0x4A7;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DesiredInputConfig", 0x4A0, "StructProperty"},
            {"bFlushPlayerInputWhenActivating", 0x4A6, "BoolProperty"},
            {"bFlushPlayerInputWhenDeactivating", 0x4A7, "BoolProperty"},
        }};
    };

    struct DelMarInteractionIndicatorContainer
    {
        static constexpr std::string_view Name = "DelMarInteractionIndicatorContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleIndicators = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VehicleIndicators", 0x370, "ObjectProperty"},
        }};
    };

    struct DelMarListView
    {
        static constexpr std::string_view Name = "DelMarListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonListView";
        struct Offsets
        {
            static constexpr std::uintptr_t bTreatNavigationAsScrolling = 0xFF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bTreatNavigationAsScrolling", 0xFF0, "BoolProperty"},
        }};
    };

    struct DelMarListViewModel
    {
        static constexpr std::string_view Name = "DelMarListViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Elements = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Elements", 0x68, "ArrayProperty"},
        }};
    };

    struct DelMarLoadingScreenHelper
    {
        static constexpr std::string_view Name = "DelMarLoadingScreenHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BackgroundDesiredSize = 0x28;
            static constexpr std::uintptr_t CustomLoadingWidget = 0x38;
            static constexpr std::uintptr_t ZoneConfig = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BackgroundDesiredSize", 0x28, "StructProperty"},
            {"CustomLoadingWidget", 0x38, "SoftClassProperty"},
            {"ZoneConfig", 0x58, "StructProperty"},
        }};
    };

    struct DelMarLoadingScreenViewModel
    {
        static constexpr std::string_view Name = "DelMarLoadingScreenViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidTrackData = 0x78;
            static constexpr std::uintptr_t MapName = 0x80;
            static constexpr std::uintptr_t MapCreator = 0x90;
            static constexpr std::uintptr_t MapDescription = 0xA0;
            static constexpr std::uintptr_t RaceMode = 0xB0;
            static constexpr std::uintptr_t LoadingBackgroundImage = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bHasValidTrackData", 0x78, "BoolProperty"},
            {"MapName", 0x80, "TextProperty"},
            {"MapCreator", 0x90, "TextProperty"},
            {"MapDescription", 0xA0, "TextProperty"},
            {"RaceMode", 0xB0, "StructProperty"},
            {"LoadingBackgroundImage", 0xB8, "SoftObjectProperty"},
        }};
    };

    struct DelMarLoadingScreenWidget
    {
        static constexpr std::string_view Name = "DelMarLoadingScreenWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadingScreenTips = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LoadingScreenTips", 0x338, "ArrayProperty"},
        }};
    };

    struct DelMarLocalPlayerSettingsViewModel
    {
        static constexpr std::string_view Name = "DelMarLocalPlayerSettingsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseIconOnlyPlayerNameplates = 0x78;
            static constexpr std::uintptr_t CachedPreferences = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseIconOnlyPlayerNameplates", 0x78, "BoolProperty"},
            {"CachedPreferences", 0x7C, "WeakObjectProperty"},
        }};
    };

    struct DelMarMatchEventViewModel
    {
        static constexpr std::string_view Name = "DelMarMatchEventViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMatchEventOccured = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnMatchEventOccured", 0x78, "MulticastInlineDelegateProperty"},
        }};
    };

    struct DelMarPlayerIndicatorWidget
    {
        static constexpr std::string_view Name = "DelMarPlayerIndicatorWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AvatarSizeBox = 0x310;
            static constexpr std::uintptr_t AvatarLazyImage = 0x318;
            static constexpr std::uintptr_t PlayerNameSizeBox = 0x320;
            static constexpr std::uintptr_t UpArrowImage = 0x328;
            static constexpr std::uintptr_t DownArrowImage = 0x330;
            static constexpr std::uintptr_t BackgroundOverlay = 0x338;
            static constexpr std::uintptr_t BehindAvatarSizeBoxWidth = 0x344;
            static constexpr std::uintptr_t AheadAvatarSizeBoxWidth = 0x348;
            static constexpr std::uintptr_t bBehindAvatarImageIsExpanded = 0x34C;
            static constexpr std::uintptr_t bAheadAvatarImageIsExpanded = 0x34D;
            static constexpr std::uintptr_t BehindPlayerNameSizeBoxMaxWidth = 0x350;
            static constexpr std::uintptr_t AheadPlayerNameSizeBoxMaxWidth = 0x354;
            static constexpr std::uintptr_t BehindBackgroundOverlaySlotPadding = 0x358;
            static constexpr std::uintptr_t AheadBackgroundOverlaySlotPadding = 0x35C;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"AvatarSizeBox", 0x310, "ObjectProperty"},
            {"AvatarLazyImage", 0x318, "ObjectProperty"},
            {"PlayerNameSizeBox", 0x320, "ObjectProperty"},
            {"UpArrowImage", 0x328, "ObjectProperty"},
            {"DownArrowImage", 0x330, "ObjectProperty"},
            {"BackgroundOverlay", 0x338, "ObjectProperty"},
            {"BehindAvatarSizeBoxWidth", 0x344, "FloatProperty"},
            {"AheadAvatarSizeBoxWidth", 0x348, "FloatProperty"},
            {"bBehindAvatarImageIsExpanded", 0x34C, "BoolProperty"},
            {"bAheadAvatarImageIsExpanded", 0x34D, "BoolProperty"},
            {"BehindPlayerNameSizeBoxMaxWidth", 0x350, "FloatProperty"},
            {"AheadPlayerNameSizeBoxMaxWidth", 0x354, "FloatProperty"},
            {"BehindBackgroundOverlaySlotPadding", 0x358, "FloatProperty"},
            {"AheadBackgroundOverlaySlotPadding", 0x35C, "FloatProperty"},
        }};
    };

    struct DelMarPlayerIndicatorsContainer
    {
        static constexpr std::string_view Name = "DelMarPlayerIndicatorsContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t IndicatorCanvas = 0x3A8;
            static constexpr std::uintptr_t IndicatorWidgetClass = 0x3B0;
            static constexpr std::uintptr_t IndicatorOffset = 0x3B8;
            static constexpr std::uintptr_t RearVerticalHintThreshold = 0x3D0;
            static constexpr std::uintptr_t RearIndicatorMaxDistance = 0x3D4;
            static constexpr std::uintptr_t RearIndicatorMinDistance = 0x3D8;
            static constexpr std::uintptr_t RearIndicatorRangeWidth = 0x3DC;
            static constexpr std::uintptr_t RearIndicatorRangeDegree = 0x3E0;
            static constexpr std::uintptr_t ForwardIndicatorMaxDistance = 0x3E4;
            static constexpr std::uintptr_t IndicatorAnchors = 0x3E8;
            static constexpr std::uintptr_t IndicatorAlignment = 0x408;
            static constexpr std::uintptr_t RearIndicatorSize = 0x418;
            static constexpr std::uintptr_t RearDistanceScaleCurve = 0x428;
            static constexpr std::uintptr_t RearDistanceOpacityCurve = 0x430;
            static constexpr std::uintptr_t ForwardDistanceScaleCurve = 0x438;
            static constexpr std::uintptr_t ForwardDistanceOpacityCurve = 0x440;
            static constexpr std::uintptr_t MaxRearIndicators = 0x448;
            static constexpr std::uintptr_t MaxForwardIndicators = 0x44C;
            static constexpr std::uintptr_t VehicleManager = 0x450;
            static constexpr std::uintptr_t ViewingVehicle = 0x458;
            static constexpr std::uintptr_t ViewingPlayerState = 0x460;
            static constexpr std::uintptr_t IndicatorsData = 0x468;
            static constexpr std::uintptr_t IndicatorWidgets = 0x478;
            static constexpr std::uintptr_t IndicatorPool = 0x488;
            static constexpr std::uintptr_t PositionalTrackerComponent = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"IndicatorCanvas", 0x3A8, "ObjectProperty"},
            {"IndicatorWidgetClass", 0x3B0, "ClassProperty"},
            {"IndicatorOffset", 0x3B8, "StructProperty"},
            {"RearVerticalHintThreshold", 0x3D0, "FloatProperty"},
            {"RearIndicatorMaxDistance", 0x3D4, "FloatProperty"},
            {"RearIndicatorMinDistance", 0x3D8, "FloatProperty"},
            {"RearIndicatorRangeWidth", 0x3DC, "FloatProperty"},
            {"RearIndicatorRangeDegree", 0x3E0, "FloatProperty"},
            {"ForwardIndicatorMaxDistance", 0x3E4, "FloatProperty"},
            {"IndicatorAnchors", 0x3E8, "StructProperty"},
            {"IndicatorAlignment", 0x408, "StructProperty"},
            {"RearIndicatorSize", 0x418, "StructProperty"},
            {"RearDistanceScaleCurve", 0x428, "ObjectProperty"},
            {"RearDistanceOpacityCurve", 0x430, "ObjectProperty"},
            {"ForwardDistanceScaleCurve", 0x438, "ObjectProperty"},
            {"ForwardDistanceOpacityCurve", 0x440, "ObjectProperty"},
            {"MaxRearIndicators", 0x448, "IntProperty"},
            {"MaxForwardIndicators", 0x44C, "IntProperty"},
            {"VehicleManager", 0x450, "WeakObjectProperty"},
            {"ViewingVehicle", 0x458, "WeakObjectProperty"},
            {"ViewingPlayerState", 0x460, "WeakObjectProperty"},
            {"IndicatorsData", 0x468, "ArrayProperty"},
            {"IndicatorWidgets", 0x478, "MapProperty"},
            {"IndicatorPool", 0x488, "ArrayProperty"},
            {"PositionalTrackerComponent", 0x498, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerRaceStateViewModel
    {
        static constexpr std::string_view Name = "DelMarPlayerRaceStateViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidData = 0x78;
            static constexpr std::uintptr_t CurrentLap = 0x7C;
            static constexpr std::uintptr_t bHasCompletedRace = 0x80;
            static constexpr std::uintptr_t RaceCompletionTime = 0x88;
            static constexpr std::uintptr_t SpectatorCount = 0x90;
            static constexpr std::uintptr_t CurrentPlacement = 0x94;
            static constexpr std::uintptr_t CurrentPlacementByBestRun = 0x98;
            static constexpr std::uintptr_t CurrentRunStartTimestamp = 0xA0;
            static constexpr std::uintptr_t LastCompletedSectionIndex = 0xA8;
            static constexpr std::uintptr_t bIsNewBestRun = 0xAC;
            static constexpr std::uintptr_t bRunActive = 0xAD;
            static constexpr std::uintptr_t bIsSubsequentRun = 0xAE;
            static constexpr std::uintptr_t bIsSpectator = 0xAF;
            static constexpr std::uintptr_t CurrentRunRecord = 0xB0;
            static constexpr std::uintptr_t BestRunRecord = 0xB8;
            static constexpr std::uintptr_t PreviousBestRunRecord = 0xC0;
            static constexpr std::uintptr_t MatchRunRecords = 0xC8;
            static constexpr std::uintptr_t PersonalBestLeaderboardEntry = 0xD8;
            static constexpr std::uintptr_t NewPersonalBestLeaderboardEntry = 0xE0;
            static constexpr std::uintptr_t Vehicle = 0xE8;
            static constexpr std::uintptr_t PreviousRacerState = 0xF0;
            static constexpr std::uintptr_t RacerState = 0xF4;
            static constexpr std::uintptr_t RaceManager = 0xF8;
            static constexpr std::uintptr_t PlayerState = 0x100;
            static constexpr std::uintptr_t PositionalTrackerComponent = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"bHasValidData", 0x78, "BoolProperty"},
            {"CurrentLap", 0x7C, "IntProperty"},
            {"bHasCompletedRace", 0x80, "BoolProperty"},
            {"RaceCompletionTime", 0x88, "StructProperty"},
            {"SpectatorCount", 0x90, "IntProperty"},
            {"CurrentPlacement", 0x94, "IntProperty"},
            {"CurrentPlacementByBestRun", 0x98, "IntProperty"},
            {"CurrentRunStartTimestamp", 0xA0, "DoubleProperty"},
            {"LastCompletedSectionIndex", 0xA8, "IntProperty"},
            {"bIsNewBestRun", 0xAC, "BoolProperty"},
            {"bRunActive", 0xAD, "BoolProperty"},
            {"bIsSubsequentRun", 0xAE, "BoolProperty"},
            {"bIsSpectator", 0xAF, "BoolProperty"},
            {"CurrentRunRecord", 0xB0, "ObjectProperty"},
            {"BestRunRecord", 0xB8, "ObjectProperty"},
            {"PreviousBestRunRecord", 0xC0, "ObjectProperty"},
            {"MatchRunRecords", 0xC8, "ArrayProperty"},
            {"PersonalBestLeaderboardEntry", 0xD8, "ObjectProperty"},
            {"NewPersonalBestLeaderboardEntry", 0xE0, "ObjectProperty"},
            {"Vehicle", 0xE8, "ObjectProperty"},
            {"PreviousRacerState", 0xF0, "StructProperty"},
            {"RacerState", 0xF4, "StructProperty"},
            {"RaceManager", 0xF8, "WeakObjectProperty"},
            {"PlayerState", 0x100, "WeakObjectProperty"},
            {"PositionalTrackerComponent", 0x108, "WeakObjectProperty"},
        }};
    };

    struct DelMarPlayerViewModel
    {
        static constexpr std::string_view Name = "DelMarPlayerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x78;
            static constexpr std::uintptr_t AvatarLargeImage = 0x88;
            static constexpr std::uintptr_t AvatarSmallImage = 0xA8;
            static constexpr std::uintptr_t AvatarBackgroundColor = 0xC8;
            static constexpr std::uintptr_t AvatarHighlightColor = 0xCC;
            static constexpr std::uintptr_t DriverCameraRT = 0xD0;
            static constexpr std::uintptr_t PlayerRaceState = 0xD8;
            static constexpr std::uintptr_t PlayerState = 0xE0;
            static constexpr std::uintptr_t RaceManager = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DisplayName", 0x78, "TextProperty"},
            {"AvatarLargeImage", 0x88, "SoftObjectProperty"},
            {"AvatarSmallImage", 0xA8, "SoftObjectProperty"},
            {"AvatarBackgroundColor", 0xC8, "StructProperty"},
            {"AvatarHighlightColor", 0xCC, "StructProperty"},
            {"DriverCameraRT", 0xD0, "ObjectProperty"},
            {"PlayerRaceState", 0xD8, "ObjectProperty"},
            {"PlayerState", 0xE0, "WeakObjectProperty"},
            {"RaceManager", 0xE8, "WeakObjectProperty"},
        }};
    };

    struct DelMarPositionalTrackerEntryWidget
    {
        static constexpr std::string_view Name = "DelMarPositionalTrackerEntryWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDisplayedPlayerSet = 0x3A8;
            static constexpr std::uintptr_t OnNavigationEnabledChanged = 0x3B8;
            static constexpr std::uintptr_t AnimIsTargetPlayer = 0x3C8;
            static constexpr std::uintptr_t bTargetPlayer = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnDisplayedPlayerSet", 0x3A8, "MulticastInlineDelegateProperty"},
            {"OnNavigationEnabledChanged", 0x3B8, "MulticastInlineDelegateProperty"},
            {"AnimIsTargetPlayer", 0x3C8, "ObjectProperty"},
            {"bTargetPlayer", 0x3D0, "BoolProperty"},
        }};
    };

    struct DelMarPositionalTrackerWidget
    {
        static constexpr std::string_view Name = "DelMarPositionalTrackerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarExpandableHudWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t MinPlayersToStart = 0x460;
            static constexpr std::uintptr_t DisplayedPlayers = 0x468;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinPlayersToStart", 0x460, "IntProperty"},
            {"DisplayedPlayers", 0x468, "ArrayProperty"},
        }};
    };

    struct DelMarPostRaceLeaderboard
    {
        static constexpr std::string_view Name = "DelMarPostRaceLeaderboard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FilterDataTableRow = 0x520;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FilterDataTableRow", 0x520, "StructProperty"},
        }};
    };

    struct DelMarPostRaceRankedRecap
    {
        static constexpr std::string_view Name = "DelMarPostRaceRankedRecap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBackHandler = 0x330;
            static constexpr std::uintptr_t bIsBackActionDisplayedInActionBar = 0x331;
            static constexpr std::uintptr_t OverrideBackActionDisplayName = 0x338;
            static constexpr std::uintptr_t bAutoActivate = 0x348;
            static constexpr std::uintptr_t bSupportsActivationFocus = 0x349;
            static constexpr std::uintptr_t bIsModal = 0x34A;
            static constexpr std::uintptr_t bAutoRestoreFocus = 0x34B;
            static constexpr std::uintptr_t bOverrideActionDomain = 0x34C;
            static constexpr std::uintptr_t InputMapping = 0x350;
            static constexpr std::uintptr_t InputMappingPriority = 0x358;
            static constexpr std::uintptr_t InputModeTagsToAdd = 0x360;
            static constexpr std::uintptr_t InputModeTagsToRemove = 0x380;
            static constexpr std::uintptr_t ActionDomainOverride = 0x3A0;
            static constexpr std::uintptr_t BP_OnWidgetActivated = 0x3C0;
            static constexpr std::uintptr_t BP_OnWidgetDeactivated = 0x3D0;
            static constexpr std::uintptr_t bIsActive = 0x3E0;
            static constexpr std::uintptr_t VisibilityBoundWidgets = 0x3E8;
            static constexpr std::uintptr_t bSetVisibilityOnActivated = 0x498;
            static constexpr std::uintptr_t ActivatedVisibility = 0x499;
            static constexpr std::uintptr_t bSetVisibilityOnDeactivated = 0x49A;
            static constexpr std::uintptr_t DeactivatedVisibility = 0x49B;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bIsBackHandler", 0x330, "BoolProperty"},
            {"bIsBackActionDisplayedInActionBar", 0x331, "BoolProperty"},
            {"OverrideBackActionDisplayName", 0x338, "TextProperty"},
            {"bAutoActivate", 0x348, "BoolProperty"},
            {"bSupportsActivationFocus", 0x349, "BoolProperty"},
            {"bIsModal", 0x34A, "BoolProperty"},
            {"bAutoRestoreFocus", 0x34B, "BoolProperty"},
            {"bOverrideActionDomain", 0x34C, "BoolProperty"},
            {"InputMapping", 0x350, "ObjectProperty"},
            {"InputMappingPriority", 0x358, "IntProperty"},
            {"InputModeTagsToAdd", 0x360, "StructProperty"},
            {"InputModeTagsToRemove", 0x380, "StructProperty"},
            {"ActionDomainOverride", 0x3A0, "SoftObjectProperty"},
            {"BP_OnWidgetActivated", 0x3C0, "MulticastInlineDelegateProperty"},
            {"BP_OnWidgetDeactivated", 0x3D0, "MulticastInlineDelegateProperty"},
            {"bIsActive", 0x3E0, "BoolProperty"},
            {"VisibilityBoundWidgets", 0x3E8, "ArrayProperty"},
            {"bSetVisibilityOnActivated", 0x498, "BoolProperty"},
            {"ActivatedVisibility", 0x499, "EnumProperty"},
            {"bSetVisibilityOnDeactivated", 0x49A, "BoolProperty"},
            {"DeactivatedVisibility", 0x49B, "EnumProperty"},
        }};
    };

    struct DelMarPostRaceScreen
    {
        static constexpr std::string_view Name = "DelMarPostRaceScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarScreenBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TabNavLeftDataTableRow = 0x520;
            static constexpr std::uintptr_t TabNavRightDataTableRow = 0x530;
            static constexpr std::uintptr_t ReadyUpDataTableRow = 0x540;
            static constexpr std::uintptr_t SpectateDataTableRow = 0x550;
            static constexpr std::uintptr_t ResetRunDataTableRow = 0x560;
            static constexpr std::uintptr_t ReturnToLobbyDataTableRow = 0x570;
            static constexpr std::uintptr_t OpenQuestBrowserDataTableRow = 0x580;
            static constexpr std::uintptr_t ToggleQuestBrowserInputAction = 0x590;
            static constexpr std::uintptr_t QuestBrowserAllowedRaceModes = 0x598;
            static constexpr std::uintptr_t ButtonGroup_PostMatchNavigation = 0x5A8;
            static constexpr std::uintptr_t CachedRaceManager = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TabNavLeftDataTableRow", 0x520, "StructProperty"},
            {"TabNavRightDataTableRow", 0x530, "StructProperty"},
            {"ReadyUpDataTableRow", 0x540, "StructProperty"},
            {"SpectateDataTableRow", 0x550, "StructProperty"},
            {"ResetRunDataTableRow", 0x560, "StructProperty"},
            {"ReturnToLobbyDataTableRow", 0x570, "StructProperty"},
            {"OpenQuestBrowserDataTableRow", 0x580, "StructProperty"},
            {"ToggleQuestBrowserInputAction", 0x590, "ObjectProperty"},
            {"QuestBrowserAllowedRaceModes", 0x598, "ArrayProperty"},
            {"ButtonGroup_PostMatchNavigation", 0x5A8, "ObjectProperty"},
            {"CachedRaceManager", 0x5B0, "WeakObjectProperty"},
        }};
    };

    struct DelMarPostRaceVoteWidget
    {
        static constexpr std::string_view Name = "DelMarPostRaceVoteWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialTransitionStatus = 0x388;
            static constexpr std::uintptr_t HiddenVisibility = 0x389;
            static constexpr std::uintptr_t bAlwaysReverseInterruptedAnimations = 0x38A;
            static constexpr std::uintptr_t WidgetTransitioner = 0x390;
            static constexpr std::uintptr_t NormalTransitionIn = 0x398;
            static constexpr std::uintptr_t NormalTransitionOut = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InitialTransitionStatus", 0x388, "EnumProperty"},
            {"HiddenVisibility", 0x389, "EnumProperty"},
            {"bAlwaysReverseInterruptedAnimations", 0x38A, "BoolProperty"},
            {"WidgetTransitioner", 0x390, "ObjectProperty"},
            {"NormalTransitionIn", 0x398, "ObjectProperty"},
            {"NormalTransitionOut", 0x3A0, "ObjectProperty"},
        }};
    };

    struct DelMarQuestScreenContainer
    {
        static constexpr std::string_view Name = "DelMarQuestScreenContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedRaceGameplayStates = 0x3A8;
            static constexpr std::uintptr_t AllowedRacerStates = 0x3C8;
            static constexpr std::uintptr_t AllowedRaceModes = 0x3E8;
            static constexpr std::uintptr_t PreRaceInputRaceStates = 0x408;
            static constexpr std::uintptr_t RaceGameplayState = 0x428;
            static constexpr std::uintptr_t RaceMode = 0x42C;
            static constexpr std::uintptr_t RacerState = 0x430;
            static constexpr std::uintptr_t AthenaScreenContainer = 0x438;
            static constexpr std::uintptr_t OnQuestListActivate = 0x440;
            static constexpr std::uintptr_t OnQuestListDeactivate = 0x450;
            static constexpr std::uintptr_t bAthenaScreenContainerVisible = 0x460;
            static constexpr std::uintptr_t LastOnVisibleTimeSeconds = 0x468;
            static constexpr std::uintptr_t LastOnVisibleRaceState = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"AllowedRaceGameplayStates", 0x3A8, "StructProperty"},
            {"AllowedRacerStates", 0x3C8, "StructProperty"},
            {"AllowedRaceModes", 0x3E8, "StructProperty"},
            {"PreRaceInputRaceStates", 0x408, "StructProperty"},
            {"RaceGameplayState", 0x428, "StructProperty"},
            {"RaceMode", 0x42C, "StructProperty"},
            {"RacerState", 0x430, "StructProperty"},
            {"AthenaScreenContainer", 0x438, "ObjectProperty"},
            {"OnQuestListActivate", 0x440, "MulticastInlineDelegateProperty"},
            {"OnQuestListDeactivate", 0x450, "MulticastInlineDelegateProperty"},
            {"bAthenaScreenContainerVisible", 0x460, "BoolProperty"},
            {"LastOnVisibleTimeSeconds", 0x468, "DoubleProperty"},
            {"LastOnVisibleRaceState", 0x470, "StructProperty"},
        }};
    };

    struct DelMarRaceViewModel
    {
        static constexpr std::string_view Name = "DelMarRaceViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TotalLaps = 0x78;
            static constexpr std::uintptr_t TotalPlayers = 0x7C;
            static constexpr std::uintptr_t TotalReadyPlayers = 0x80;
            static constexpr std::uintptr_t TotalLoadedPlayers = 0x84;
            static constexpr std::uintptr_t TotalJoiningPlayers = 0x88;
            static constexpr std::uintptr_t TotalPlacements = 0x8C;
            static constexpr std::uintptr_t MapName = 0x90;
            static constexpr std::uintptr_t MapCreator = 0xA0;
            static constexpr std::uintptr_t MapDescription = 0xB0;
            static constexpr std::uintptr_t RaceMode = 0xC0;
            static constexpr std::uintptr_t DelMarGameplayState = 0xC4;
            static constexpr std::uintptr_t LoadingBackgroundImage = 0xC8;
            static constexpr std::uintptr_t TimeUntilRaceStart = 0xE8;
            static constexpr std::uintptr_t RaceEndTimestamp = 0xF0;
            static constexpr std::uintptr_t MatchTimeLimitSeconds = 0xF8;
            static constexpr std::uintptr_t bIsOvertime = 0xFC;
            static constexpr std::uintptr_t TimeUntilTrackChange = 0x100;
            static constexpr std::uintptr_t FirstPlayerFinishedServerTimestamp = 0x108;
            static constexpr std::uintptr_t FirstPlayerFinishedRaceEndServerTimestamp = 0x110;
            static constexpr std::uintptr_t CurrentMatchmakingState = 0x118;
            static constexpr std::uintptr_t bIsRaceFinished = 0x119;
            static constexpr std::uintptr_t bIsRaceStarted = 0x11A;
            static constexpr std::uintptr_t MatchEventViewModel = 0x120;
            static constexpr std::uintptr_t TrackInfoViewModel = 0x128;
            static constexpr std::uintptr_t LocalPlayer = 0x130;
            static constexpr std::uintptr_t TargetPlayer = 0x138;
            static constexpr std::uintptr_t LastTargetPlayer = 0x140;
            static constexpr std::uintptr_t PositionPlayers = 0x148;
            static constexpr std::uintptr_t FinalPlacements = 0x158;
            static constexpr std::uintptr_t RacePlayers = 0x168;
            static constexpr std::uintptr_t TopLeaderboardEntries = 0x178;
            static constexpr std::uintptr_t FocusedLeaderboardEntries = 0x188;
            static constexpr std::uintptr_t FriendLeaderboardEntries = 0x198;
            static constexpr std::uintptr_t GameSessionId = 0x1A8;
            static constexpr std::uintptr_t IslandCode = 0x1B8;
            static constexpr std::uintptr_t RaceManager = 0x1C8;
            static constexpr std::uintptr_t LocalPlayerController = 0x1D0;
            static constexpr std::uintptr_t ViewTargetPlayerState = 0x1D8;
            static constexpr std::uintptr_t PositionalTrackerComponent = 0x1E0;
            static constexpr std::uintptr_t EmptyPlayerViewModel = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 40> Properties{{
            {"TotalLaps", 0x78, "IntProperty"},
            {"TotalPlayers", 0x7C, "IntProperty"},
            {"TotalReadyPlayers", 0x80, "IntProperty"},
            {"TotalLoadedPlayers", 0x84, "IntProperty"},
            {"TotalJoiningPlayers", 0x88, "IntProperty"},
            {"TotalPlacements", 0x8C, "IntProperty"},
            {"MapName", 0x90, "TextProperty"},
            {"MapCreator", 0xA0, "TextProperty"},
            {"MapDescription", 0xB0, "TextProperty"},
            {"RaceMode", 0xC0, "StructProperty"},
            {"DelMarGameplayState", 0xC4, "StructProperty"},
            {"LoadingBackgroundImage", 0xC8, "SoftObjectProperty"},
            {"TimeUntilRaceStart", 0xE8, "DoubleProperty"},
            {"RaceEndTimestamp", 0xF0, "DoubleProperty"},
            {"MatchTimeLimitSeconds", 0xF8, "IntProperty"},
            {"bIsOvertime", 0xFC, "BoolProperty"},
            {"TimeUntilTrackChange", 0x100, "DoubleProperty"},
            {"FirstPlayerFinishedServerTimestamp", 0x108, "DoubleProperty"},
            {"FirstPlayerFinishedRaceEndServerTimestamp", 0x110, "DoubleProperty"},
            {"CurrentMatchmakingState", 0x118, "ByteProperty"},
            {"bIsRaceFinished", 0x119, "BoolProperty"},
            {"bIsRaceStarted", 0x11A, "BoolProperty"},
            {"MatchEventViewModel", 0x120, "ObjectProperty"},
            {"TrackInfoViewModel", 0x128, "ObjectProperty"},
            {"LocalPlayer", 0x130, "ObjectProperty"},
            {"TargetPlayer", 0x138, "ObjectProperty"},
            {"LastTargetPlayer", 0x140, "ObjectProperty"},
            {"PositionPlayers", 0x148, "ArrayProperty"},
            {"FinalPlacements", 0x158, "ArrayProperty"},
            {"RacePlayers", 0x168, "MapProperty"},
            {"TopLeaderboardEntries", 0x178, "ArrayProperty"},
            {"FocusedLeaderboardEntries", 0x188, "ArrayProperty"},
            {"FriendLeaderboardEntries", 0x198, "ArrayProperty"},
            {"GameSessionId", 0x1A8, "StrProperty"},
            {"IslandCode", 0x1B8, "StrProperty"},
            {"RaceManager", 0x1C8, "WeakObjectProperty"},
            {"LocalPlayerController", 0x1D0, "WeakObjectProperty"},
            {"ViewTargetPlayerState", 0x1D8, "WeakObjectProperty"},
            {"PositionalTrackerComponent", 0x1E0, "WeakObjectProperty"},
            {"EmptyPlayerViewModel", 0x1E8, "ObjectProperty"},
        }};
    };

    struct DelMarRankedPlacementChangeVM
    {
        static constexpr std::string_view Name = "DelMarRankedPlacementChangeVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialPlacement = 0x68;
            static constexpr std::uintptr_t CurrentPlacement = 0x70;
            static constexpr std::uintptr_t PositionDelta = 0x78;
            static constexpr std::uintptr_t bIsDataValid = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InitialPlacement", 0x68, "ObjectProperty"},
            {"CurrentPlacement", 0x70, "ObjectProperty"},
            {"PositionDelta", 0x78, "IntProperty"},
            {"bIsDataValid", 0x7C, "BoolProperty"},
        }};
    };

    struct DelMarRankedPlacementVM
    {
        static constexpr std::string_view Name = "DelMarRankedPlacementVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsUnranked = 0x68;
            static constexpr std::uintptr_t TierIndex = 0x6C;
            static constexpr std::uintptr_t PlayerPosition = 0x70;
            static constexpr std::uintptr_t ProgressTowardNextTier = 0x74;
            static constexpr std::uintptr_t bIsDataValid = 0x78;
            static constexpr std::uintptr_t TierList = 0x80;
            static constexpr std::uintptr_t RankedDisplayData = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsUnranked", 0x68, "BoolProperty"},
            {"TierIndex", 0x6C, "IntProperty"},
            {"PlayerPosition", 0x70, "IntProperty"},
            {"ProgressTowardNextTier", 0x74, "FloatProperty"},
            {"bIsDataValid", 0x78, "BoolProperty"},
            {"TierList", 0x80, "ArrayProperty"},
            {"RankedDisplayData", 0x90, "ObjectProperty"},
        }};
    };

    struct DelMarRankedRecapVM
    {
        static constexpr std::string_view Name = "DelMarRankedRecapVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PlacementChange = 0x68;
            static constexpr std::uintptr_t ErrorState = 0x70;
            static constexpr std::uintptr_t OptionalErrorText = 0x78;
            static constexpr std::uintptr_t OwningLocalPlayer = 0x88;
            static constexpr std::uintptr_t OwningPlayerController = 0x90;
            static constexpr std::uintptr_t RankedDisplayData = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PlacementChange", 0x68, "ObjectProperty"},
            {"ErrorState", 0x70, "EnumProperty"},
            {"OptionalErrorText", 0x78, "StrProperty"},
            {"OwningLocalPlayer", 0x88, "WeakObjectProperty"},
            {"OwningPlayerController", 0x90, "WeakObjectProperty"},
            {"RankedDisplayData", 0x98, "ObjectProperty"},
        }};
    };

    struct DelMarRankedVMContextResolver
    {
        static constexpr std::string_view Name = "DelMarRankedVMContextResolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelContextResolver";
        struct Offsets
        {
            static constexpr std::uintptr_t RankedDisplayData = 0x28;
            static constexpr std::uintptr_t DevelopmentRankedKey = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RankedDisplayData", 0x28, "ObjectProperty"},
            {"DevelopmentRankedKey", 0x30, "StrProperty"},
        }};
    };

    struct DelMarReadyUpWidget
    {
        static constexpr std::string_view Name = "DelMarReadyUpWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorAndOpacity = 0x1A0;
            static constexpr std::uintptr_t ColorAndOpacityDelegate = 0x1B0;
            static constexpr std::uintptr_t ForegroundColor = 0x1BC;
            static constexpr std::uintptr_t ForegroundColorDelegate = 0x1D0;
            static constexpr std::uintptr_t OnVisibilityChanged = 0x1E0;
            static constexpr std::uintptr_t Padding = 0x220;
            static constexpr std::uintptr_t Priority = 0x230;
            static constexpr std::uintptr_t bAutomaticallyRegisterInputOnConstruction = 0x234;
            static constexpr std::uintptr_t bIsFocusable = 0x234;
            static constexpr std::uintptr_t bStopAction = 0x234;
            static constexpr std::uintptr_t QueuedWidgetAnimationTransitions = 0x238;
            static constexpr std::uintptr_t ActiveSequencePlayers = 0x248;
            static constexpr std::uintptr_t AnimationTickManager = 0x258;
            static constexpr std::uintptr_t StoppedSequencePlayers = 0x260;
            static constexpr std::uintptr_t NamedSlotBindings = 0x288;
            static constexpr std::uintptr_t Extensions = 0x298;
            static constexpr std::uintptr_t WidgetTree = 0x2A8;
            static constexpr std::uintptr_t bHasScriptImplementedPaint = 0x2B0;
            static constexpr std::uintptr_t bHasScriptImplementedTick = 0x2B0;
            static constexpr std::uintptr_t TickFrequency = 0x2C8;
            static constexpr std::uintptr_t DesiredFocusWidget = 0x2CC;
            static constexpr std::uintptr_t InputComponent = 0x2D8;
            static constexpr std::uintptr_t AnimationCallbacks = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"ColorAndOpacity", 0x1A0, "StructProperty"},
            {"ColorAndOpacityDelegate", 0x1B0, "DelegateProperty"},
            {"ForegroundColor", 0x1BC, "StructProperty"},
            {"ForegroundColorDelegate", 0x1D0, "DelegateProperty"},
            {"OnVisibilityChanged", 0x1E0, "MulticastInlineDelegateProperty"},
            {"Padding", 0x220, "StructProperty"},
            {"Priority", 0x230, "IntProperty"},
            {"bAutomaticallyRegisterInputOnConstruction", 0x234, "BoolProperty"},
            {"bIsFocusable", 0x234, "BoolProperty"},
            {"bStopAction", 0x234, "BoolProperty"},
            {"QueuedWidgetAnimationTransitions", 0x238, "ArrayProperty"},
            {"ActiveSequencePlayers", 0x248, "ArrayProperty"},
            {"AnimationTickManager", 0x258, "ObjectProperty"},
            {"StoppedSequencePlayers", 0x260, "ArrayProperty"},
            {"NamedSlotBindings", 0x288, "ArrayProperty"},
            {"Extensions", 0x298, "ArrayProperty"},
            {"WidgetTree", 0x2A8, "ObjectProperty"},
            {"bHasScriptImplementedPaint", 0x2B0, "BoolProperty"},
            {"bHasScriptImplementedTick", 0x2B0, "BoolProperty"},
            {"TickFrequency", 0x2C8, "EnumProperty"},
            {"DesiredFocusWidget", 0x2CC, "StructProperty"},
            {"InputComponent", 0x2D8, "ObjectProperty"},
            {"AnimationCallbacks", 0x2E0, "ArrayProperty"},
        }};
    };

    struct DelMarRichTextInputSwitcher
    {
        static constexpr std::string_view Name = "DelMarRichTextInputSwitcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseFormattedText = 0x308;
            static constexpr std::uintptr_t TextFormat = 0x310;
            static constexpr std::uintptr_t Args = 0x320;
            static constexpr std::uintptr_t TextKBM = 0x330;
            static constexpr std::uintptr_t TextGamepad = 0x340;
            static constexpr std::uintptr_t TextTouch = 0x350;
            static constexpr std::uintptr_t Widget_RichText = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bUseFormattedText", 0x308, "BoolProperty"},
            {"TextFormat", 0x310, "TextProperty"},
            {"Args", 0x320, "MapProperty"},
            {"TextKBM", 0x330, "TextProperty"},
            {"TextGamepad", 0x340, "TextProperty"},
            {"TextTouch", 0x350, "TextProperty"},
            {"Widget_RichText", 0x360, "ObjectProperty"},
        }};
    };

    struct DelMarRunRecordViewModel
    {
        static constexpr std::string_view Name = "DelMarRunRecordViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Record = 0x78;
            static constexpr std::uintptr_t RunRecordSectionData = 0x98;
            static constexpr std::uintptr_t bHasValidData = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Record", 0x78, "StructProperty"},
            {"RunRecordSectionData", 0x98, "ArrayProperty"},
            {"bHasValidData", 0xA8, "BoolProperty"},
        }};
    };

    struct DelMarScreenBase
    {
        static constexpr std::string_view Name = "DelMarScreenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialTransitionStatus = 0x4F8;
            static constexpr std::uintptr_t WidgetTransitioner = 0x500;
            static constexpr std::uintptr_t bActivateOnShow = 0x508;
            static constexpr std::uintptr_t NormalTransitionIn = 0x510;
            static constexpr std::uintptr_t NormalTransitionOut = 0x518;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InitialTransitionStatus", 0x4F8, "EnumProperty"},
            {"WidgetTransitioner", 0x500, "ObjectProperty"},
            {"bActivateOnShow", 0x508, "BoolProperty"},
            {"NormalTransitionIn", 0x510, "ObjectProperty"},
            {"NormalTransitionOut", 0x518, "ObjectProperty"},
        }};
    };

    struct DelMarSelectionListViewModel
    {
        static constexpr std::string_view Name = "DelMarSelectionListViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarListViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedIndex = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectedIndex", 0x78, "IntProperty"},
        }};
    };

    struct DelMarStartlineCountdownWidget
    {
        static constexpr std::string_view Name = "DelMarStartlineCountdownWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedDelMarVehicle = 0x3A8;
            static constexpr std::uintptr_t CurrentViewTarget = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedDelMarVehicle", 0x3A8, "WeakObjectProperty"},
            {"CurrentViewTarget", 0x3B0, "WeakObjectProperty"},
        }};
    };

    struct DelMarTouchActionButton
    {
        static constexpr std::string_view Name = "DelMarTouchActionButton";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTouchWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x3D0;
            static constexpr std::uintptr_t ButtonStateData = 0x3D8;
            static constexpr std::uintptr_t bHighlightActive = 0x3E8;
            static constexpr std::uintptr_t OnHighlightChanged = 0x3F0;
            static constexpr std::uintptr_t OnStateChanged = 0x400;
            static constexpr std::uintptr_t bIsUpdatingState = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"State", 0x3D0, "EnumProperty"},
            {"ButtonStateData", 0x3D8, "MapProperty"},
            {"bHighlightActive", 0x3E8, "BoolProperty"},
            {"OnHighlightChanged", 0x3F0, "MulticastInlineDelegateProperty"},
            {"OnStateChanged", 0x400, "MulticastInlineDelegateProperty"},
            {"bIsUpdatingState", 0x410, "BoolProperty"},
        }};
    };

    struct DelMarTouchRegion
    {
        static constexpr std::string_view Name = "DelMarTouchRegion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarTouchWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TouchActionButtons = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TouchActionButtons", 0x3D0, "ArrayProperty"},
        }};
    };

    struct DelMarTouchWidgetBase
    {
        static constexpr std::string_view Name = "DelMarTouchWidgetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InputActionsData = 0x3A8;
            static constexpr std::uintptr_t bTrackInputPastBounds = 0x3B8;
            static constexpr std::uintptr_t bTrackInputFromEnter = 0x3B9;
            static constexpr std::uintptr_t bIsInjectingInput = 0x3BA;
            static constexpr std::uintptr_t CurrentInputTrackingState = 0x3BB;
            static constexpr std::uintptr_t RequiredInputMode = 0x3BC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InputActionsData", 0x3A8, "ArrayProperty"},
            {"bTrackInputPastBounds", 0x3B8, "BoolProperty"},
            {"bTrackInputFromEnter", 0x3B9, "BoolProperty"},
            {"bIsInjectingInput", 0x3BA, "BoolProperty"},
            {"CurrentInputTrackingState", 0x3BB, "EnumProperty"},
            {"RequiredInputMode", 0x3BC, "EnumProperty"},
        }};
    };

    struct DelMarTrackInfoViewModel
    {
        static constexpr std::string_view Name = "DelMarTrackInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidTrackData = 0x78;
            static constexpr std::uintptr_t TrackName = 0x80;
            static constexpr std::uintptr_t TrackDescription = 0x90;
            static constexpr std::uintptr_t LoadingBackgroundImage = 0xA0;
            static constexpr std::uintptr_t CreatorName = 0xC0;
            static constexpr std::uintptr_t bIsEpicCreated = 0xD0;
            static constexpr std::uintptr_t bHasValidCreatorData = 0xD1;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bHasValidTrackData", 0x78, "BoolProperty"},
            {"TrackName", 0x80, "TextProperty"},
            {"TrackDescription", 0x90, "TextProperty"},
            {"LoadingBackgroundImage", 0xA0, "SoftObjectProperty"},
            {"CreatorName", 0xC0, "TextProperty"},
            {"bIsEpicCreated", 0xD0, "BoolProperty"},
            {"bHasValidCreatorData", 0xD1, "BoolProperty"},
        }};
    };

    struct DelMarTurboBonusZoneWidget
    {
        static constexpr std::string_view Name = "DelMarTurboBonusZoneWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedDelMarVehicle = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedDelMarVehicle", 0x3A8, "WeakObjectProperty"},
        }};
    };

    struct DelMarTutorialViewModel
    {
        static constexpr std::string_view Name = "DelMarTutorialViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SectionTitle = 0x78;
            static constexpr std::uintptr_t CurrentSection = 0x88;
            static constexpr std::uintptr_t TotalSections = 0x8C;
            static constexpr std::uintptr_t CurrentTutorialAnnouncementInputActions = 0x90;
            static constexpr std::uintptr_t CurrentTutorialHintInputActions = 0xA0;
            static constexpr std::uintptr_t FinishTargetTime = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SectionTitle", 0x78, "TextProperty"},
            {"CurrentSection", 0x88, "IntProperty"},
            {"TotalSections", 0x8C, "IntProperty"},
            {"CurrentTutorialAnnouncementInputActions", 0x90, "ArrayProperty"},
            {"CurrentTutorialHintInputActions", 0xA0, "ArrayProperty"},
            {"FinishTargetTime", 0xB0, "StructProperty"},
        }};
    };

    struct DelMarUICheatManager
    {
        static constexpr std::string_view Name = "DelMarUICheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t DriverCameraHiddenScene = 0x28;
            static constexpr std::uintptr_t PlayerIndicatorHiddenScene = 0x30;
            static constexpr std::uintptr_t PointsDebugWidgetVisibleScene = 0x38;
            static constexpr std::uintptr_t RubberbandingWidgetVisibleScene = 0x40;
            static constexpr std::uintptr_t StaticVehicleMeterHiddenScene = 0x48;
            static constexpr std::uintptr_t VehicleDebugVisibleScene = 0x50;
            static constexpr std::uintptr_t VehicleHealthDebugVisibleScene = 0x58;
            static constexpr std::uintptr_t CheckpointDebugWidgetScene = 0x60;
            static constexpr std::uintptr_t MapNameDebugWidgetScene = 0x68;
            static constexpr std::uintptr_t GameplayTrackList = 0x70;
            static constexpr std::uintptr_t bAttachedWidgetEnabled = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"DriverCameraHiddenScene", 0x28, "ObjectProperty"},
            {"PlayerIndicatorHiddenScene", 0x30, "ObjectProperty"},
            {"PointsDebugWidgetVisibleScene", 0x38, "ObjectProperty"},
            {"RubberbandingWidgetVisibleScene", 0x40, "ObjectProperty"},
            {"StaticVehicleMeterHiddenScene", 0x48, "ObjectProperty"},
            {"VehicleDebugVisibleScene", 0x50, "ObjectProperty"},
            {"VehicleHealthDebugVisibleScene", 0x58, "ObjectProperty"},
            {"CheckpointDebugWidgetScene", 0x60, "ObjectProperty"},
            {"MapNameDebugWidgetScene", 0x68, "ObjectProperty"},
            {"GameplayTrackList", 0x70, "ObjectProperty"},
            {"bAttachedWidgetEnabled", 0x78, "BoolProperty"},
        }};
    };

    struct DelMarUIDirector
    {
        static constexpr std::string_view Name = "DelMarUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DynamicUIDirectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DialogHelperClass = 0x2A8;
            static constexpr std::uintptr_t DialogHelper = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DialogHelperClass", 0x2A8, "ClassProperty"},
            {"DialogHelper", 0x2B8, "ObjectProperty"},
        }};
    };

    struct DelMarUIGlobals
    {
        static constexpr std::string_view Name = "DelMarUIGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarUserWidget
    {
        static constexpr std::string_view Name = "DelMarUserWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialTransitionStatus = 0x388;
            static constexpr std::uintptr_t HiddenVisibility = 0x389;
            static constexpr std::uintptr_t bAlwaysReverseInterruptedAnimations = 0x38A;
            static constexpr std::uintptr_t WidgetTransitioner = 0x390;
            static constexpr std::uintptr_t NormalTransitionIn = 0x398;
            static constexpr std::uintptr_t NormalTransitionOut = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"InitialTransitionStatus", 0x388, "EnumProperty"},
            {"HiddenVisibility", 0x389, "EnumProperty"},
            {"bAlwaysReverseInterruptedAnimations", 0x38A, "BoolProperty"},
            {"WidgetTransitioner", 0x390, "ObjectProperty"},
            {"NormalTransitionIn", 0x398, "ObjectProperty"},
            {"NormalTransitionOut", 0x3A0, "ObjectProperty"},
        }};
    };

    struct DelMarVehicleViewModel
    {
        static constexpr std::string_view Name = "DelMarVehicleViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidData = 0x78;
            static constexpr std::uintptr_t bIsTurboEnabled = 0x79;
            static constexpr std::uintptr_t bIsDrifting = 0x7C;
            static constexpr std::uintptr_t bIsDriftingRight = 0x7D;
            static constexpr std::uintptr_t bWheelsOnGround = 0x7E;
            static constexpr std::uintptr_t bAnyWheelsOnGround = 0x7F;
            static constexpr std::uintptr_t DriftRanges = 0x80;
            static constexpr std::uintptr_t DriftSlipAngleRatio = 0x90;
            static constexpr std::uintptr_t DriftSteerState = 0x94;
            static constexpr std::uintptr_t PotentialDriftBoostPercent = 0x98;
            static constexpr std::uintptr_t StartlineBoostBonus = 0x9C;
            static constexpr std::uintptr_t SpeedometerState = 0xA0;
            static constexpr std::uintptr_t CurrentSpeed = 0xA4;
            static constexpr std::uintptr_t NumTurboMaxCharges = 0xA8;
            static constexpr std::uintptr_t NumTurboCurrentCharges = 0xAC;
            static constexpr std::uintptr_t TurboBonusZoneState = 0xB0;
            static constexpr std::uintptr_t UnderthrustPercent = 0xB4;
            static constexpr std::uintptr_t MissedCheckpointDemoTimestamp = 0xB8;
            static constexpr std::uintptr_t ReturnToTrackDemoTimestamp = 0xC0;
            static constexpr std::uintptr_t bIsHeadingWrongWay = 0xC8;
            static constexpr std::uintptr_t bToggleThrottle = 0xC9;
            static constexpr std::uintptr_t ThrottleInputValue = 0xCC;
            static constexpr std::uintptr_t bDemolished = 0xD0;
            static constexpr std::uintptr_t DemolishActionPressedPercent = 0xD4;
            static constexpr std::uintptr_t bDemolishActionEnabled = 0xD8;
            static constexpr std::uintptr_t PlayerState = 0xDC;
            static constexpr std::uintptr_t CurrentVehicle = 0xE4;
            static constexpr std::uintptr_t GlobalInputDisabler = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"bHasValidData", 0x78, "BoolProperty"},
            {"bIsTurboEnabled", 0x79, "BoolProperty"},
            {"bIsDrifting", 0x7C, "BoolProperty"},
            {"bIsDriftingRight", 0x7D, "BoolProperty"},
            {"bWheelsOnGround", 0x7E, "BoolProperty"},
            {"bAnyWheelsOnGround", 0x7F, "BoolProperty"},
            {"DriftRanges", 0x80, "ArrayProperty"},
            {"DriftSlipAngleRatio", 0x90, "FloatProperty"},
            {"DriftSteerState", 0x94, "EnumProperty"},
            {"PotentialDriftBoostPercent", 0x98, "FloatProperty"},
            {"StartlineBoostBonus", 0x9C, "FloatProperty"},
            {"SpeedometerState", 0xA0, "EnumProperty"},
            {"CurrentSpeed", 0xA4, "FloatProperty"},
            {"NumTurboMaxCharges", 0xA8, "FloatProperty"},
            {"NumTurboCurrentCharges", 0xAC, "FloatProperty"},
            {"TurboBonusZoneState", 0xB0, "EnumProperty"},
            {"UnderthrustPercent", 0xB4, "FloatProperty"},
            {"MissedCheckpointDemoTimestamp", 0xB8, "DoubleProperty"},
            {"ReturnToTrackDemoTimestamp", 0xC0, "DoubleProperty"},
            {"bIsHeadingWrongWay", 0xC8, "BoolProperty"},
            {"bToggleThrottle", 0xC9, "BoolProperty"},
            {"ThrottleInputValue", 0xCC, "FloatProperty"},
            {"bDemolished", 0xD0, "BoolProperty"},
            {"DemolishActionPressedPercent", 0xD4, "FloatProperty"},
            {"bDemolishActionEnabled", 0xD8, "BoolProperty"},
            {"PlayerState", 0xDC, "WeakObjectProperty"},
            {"CurrentVehicle", 0xE4, "WeakObjectProperty"},
            {"GlobalInputDisabler", 0xEC, "WeakObjectProperty"},
        }};
    };

    struct DelMarViewModelBase
    {
        static constexpr std::string_view Name = "DelMarViewModelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarWidgetComponent
    {
        static constexpr std::string_view Name = "DelMarWidgetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WidgetComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftTopPadding = 0x760;
            static constexpr std::uintptr_t RightBottomPadding = 0x770;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LeftTopPadding", 0x760, "StructProperty"},
            {"RightBottomPadding", 0x770, "StructProperty"},
        }};
    };

}
