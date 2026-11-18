#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::QuestUI
{
    struct QuestPanelDebugListItem
    {
        static constexpr std::string_view Name = "QuestPanelDebugListItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestPanelDebugListItem_Bundle
    {
        static constexpr std::string_view Name = "QuestPanelDebugListItem_Bundle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestPanelDebugListItem";
        struct Offsets
        {
            static constexpr std::uintptr_t BundleDefinition = 0x98;
            static constexpr std::uintptr_t BundleDisplayData = 0xA0;
            static constexpr std::uintptr_t OwningSchedule = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BundleDefinition", 0x98, "ObjectProperty"},
            {"BundleDisplayData", 0xA0, "ObjectProperty"},
            {"OwningSchedule", 0xB8, "ObjectProperty"},
        }};
    };

    struct QuestPanelDebugListItem_Category
    {
        static constexpr std::string_view Name = "QuestPanelDebugListItem_Category";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestPanelDebugListItem";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryData = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CategoryData", 0x98, "ObjectProperty"},
        }};
    };

    struct QuestPanelDebugListItem_Quest
    {
        static constexpr std::string_view Name = "QuestPanelDebugListItem_Quest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestPanelDebugListItem";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinition = 0x98;
            static constexpr std::uintptr_t QuestDisplayData = 0xA0;
            static constexpr std::uintptr_t CachedQuestView = 0xA8;
            static constexpr std::uintptr_t OwningBundle = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"QuestDefinition", 0x98, "ObjectProperty"},
            {"QuestDisplayData", 0xA0, "ObjectProperty"},
            {"CachedQuestView", 0xA8, "StructProperty"},
            {"OwningBundle", 0xB8, "ObjectProperty"},
        }};
    };

    struct QuestPanelDebugListItem_Schedule
    {
        static constexpr std::string_view Name = "QuestPanelDebugListItem_Schedule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestPanelDebugListItem";
        struct Offsets
        {
            static constexpr std::uintptr_t ScheduleDefinition = 0x98;
            static constexpr std::uintptr_t ScheduleDisplayData = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScheduleDefinition", 0x98, "ObjectProperty"},
            {"ScheduleDisplayData", 0xA0, "ObjectProperty"},
        }};
    };

    struct QuestPanelDebugOrganizationNode
    {
        static constexpr std::string_view Name = "QuestPanelDebugOrganizationNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentNode = 0x48;
            static constexpr std::uintptr_t ChildNodes = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ParentNode", 0x48, "ObjectProperty"},
            {"ChildNodes", 0x50, "ArrayProperty"},
        }};
    };

    struct QuestPanelDebugTool
    {
        static constexpr std::string_view Name = "QuestPanelDebugTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ListView_Entries = 0x4A0;
            static constexpr std::uintptr_t RootOrganizationNode = 0x5E8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ListView_Entries", 0x4A0, "ObjectProperty"},
            {"RootOrganizationNode", 0x5E8, "ObjectProperty"},
        }};
    };

    struct QuestPanelDebugToolListEntry
    {
        static constexpr std::string_view Name = "QuestPanelDebugToolListEntry";
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

    struct QuestPanelDebugToolOrganizationEntry
    {
        static constexpr std::string_view Name = "QuestPanelDebugToolOrganizationEntry";
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

    struct QuestPanelDebugToolOrganizationListView
    {
        static constexpr std::string_view Name = "QuestPanelDebugToolOrganizationListView";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ListView";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCheckedTagsChanged = 0xFE0;
            static constexpr std::uintptr_t RootNode = 0xFF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnCheckedTagsChanged", 0xFE0, "MulticastInlineDelegateProperty"},
            {"RootNode", 0xFF0, "ObjectProperty"},
        }};
    };

    struct QuestPanelDebugToolViewModel
    {
        static constexpr std::string_view Name = "QuestPanelDebugToolViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedQuestView = 0x80;
            static constexpr std::uintptr_t bHasQuestView = 0x90;
            static constexpr std::uintptr_t QuestDefinition = 0x98;
            static constexpr std::uintptr_t QuestDisplayData = 0xA0;
            static constexpr std::uintptr_t QuestListItemId = 0xA8;
            static constexpr std::uintptr_t QuestDisplayName = 0xB8;
            static constexpr std::uintptr_t QuestAchievedCount = 0xC8;
            static constexpr std::uintptr_t QuestRequiredCount = 0xCC;
            static constexpr std::uintptr_t QuestState = 0xD0;
            static constexpr std::uintptr_t ProductCompatibilityQueryText = 0xD8;
            static constexpr std::uintptr_t AdditionalQueryTagText = 0xE8;
            static constexpr std::uintptr_t bQueryPassesForActivePlaylist = 0xF8;
            static constexpr std::uintptr_t bHasBundleView = 0x110;
            static constexpr std::uintptr_t BundleDefinition = 0x118;
            static constexpr std::uintptr_t BundleDisplayData = 0x120;
            static constexpr std::uintptr_t BundleListItemId = 0x128;
            static constexpr std::uintptr_t BundleAchievedCount = 0x138;
            static constexpr std::uintptr_t BundleRequiredCount = 0x13C;
            static constexpr std::uintptr_t BundleState = 0x140;
            static constexpr std::uintptr_t BundleEntryData = 0x168;
            static constexpr std::uintptr_t GoalCardDisplayData = 0x178;
            static constexpr std::uintptr_t bSkipAddToGoalBundles = 0x1C8;
            static constexpr std::uintptr_t bHasScheduleView = 0x1E0;
            static constexpr std::uintptr_t ScheduleDefinition = 0x1E8;
            static constexpr std::uintptr_t ScheduleDisplayData = 0x1F0;
            static constexpr std::uintptr_t ScheduleListItemId = 0x1F8;
            static constexpr std::uintptr_t ScheduleEntries = 0x208;
            static constexpr std::uintptr_t EventName = 0x218;
            static constexpr std::uintptr_t bEventFound = 0x228;
            static constexpr std::uintptr_t EventStart = 0x230;
            static constexpr std::uintptr_t EventEnd = 0x238;
            static constexpr std::uintptr_t PrimaryUnlockTime = 0x240;
            static constexpr std::uintptr_t PrimaryUnlockTimeState = 0x248;
            static constexpr std::uintptr_t PrimaryExpirationTime = 0x250;
            static constexpr std::uintptr_t PrimaryExpirationTimeState = 0x258;
            static constexpr std::uintptr_t CategoryDebugData = 0x270;
            static constexpr std::uintptr_t CategoryOrganizationData = 0x2A8;
            static constexpr std::uintptr_t QuestTags = 0x2B8;
            static constexpr std::uintptr_t BundleTags = 0x2D8;
            static constexpr std::uintptr_t bSkippedOrganization = 0x2F8;
            static constexpr std::uintptr_t CategoryList = 0x300;
            static constexpr std::uintptr_t CategoryPlacementIssues = 0x310;
            static constexpr std::uintptr_t bAvailableInActiveProduct = 0x320;
            static constexpr std::uintptr_t ActiveProductTag = 0x324;
            static constexpr std::uintptr_t bIsContentVisible = 0x328;
            static constexpr std::uintptr_t VisibilityReasonText = 0x330;
            static constexpr std::uintptr_t bHasBuildData = 0x340;
            static constexpr std::uintptr_t BuildActiveVersion = 0x348;
            static constexpr std::uintptr_t AssetReleaseVersion = 0x378;
            static constexpr std::uintptr_t AssetSunsetVersion = 0x388;
            static constexpr std::uintptr_t bResidesInPlugin = 0x398;
            static constexpr std::uintptr_t PluginName = 0x3A0;
            static constexpr std::uintptr_t PluginReleaseVersion = 0x3B0;
            static constexpr std::uintptr_t PluginSunsetVersion = 0x3C0;
            static constexpr std::uintptr_t VersionWarning = 0x3D0;
            static constexpr std::uintptr_t BackendData = 0x3E0;
            static constexpr std::uintptr_t bQuestDataInitialized = 0x450;
            static constexpr std::uintptr_t bPrimaryAssetHasView = 0x451;
            static constexpr std::uintptr_t PrimaryAssetListItemId = 0x458;
            static constexpr std::uintptr_t PrimaryDefinition = 0x468;
            static constexpr std::uintptr_t PrimaryDisplayData = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"CachedQuestView", 0x80, "StructProperty"},
            {"bHasQuestView", 0x90, "BoolProperty"},
            {"QuestDefinition", 0x98, "ObjectProperty"},
            {"QuestDisplayData", 0xA0, "ObjectProperty"},
            {"QuestListItemId", 0xA8, "StrProperty"},
            {"QuestDisplayName", 0xB8, "TextProperty"},
            {"QuestAchievedCount", 0xC8, "IntProperty"},
            {"QuestRequiredCount", 0xCC, "IntProperty"},
            {"QuestState", 0xD0, "EnumProperty"},
            {"ProductCompatibilityQueryText", 0xD8, "TextProperty"},
            {"AdditionalQueryTagText", 0xE8, "TextProperty"},
            {"bQueryPassesForActivePlaylist", 0xF8, "BoolProperty"},
            {"bHasBundleView", 0x110, "BoolProperty"},
            {"BundleDefinition", 0x118, "ObjectProperty"},
            {"BundleDisplayData", 0x120, "ObjectProperty"},
            {"BundleListItemId", 0x128, "StrProperty"},
            {"BundleAchievedCount", 0x138, "IntProperty"},
            {"BundleRequiredCount", 0x13C, "IntProperty"},
            {"BundleState", 0x140, "EnumProperty"},
            {"BundleEntryData", 0x168, "ArrayProperty"},
            {"GoalCardDisplayData", 0x178, "StructProperty"},
            {"bSkipAddToGoalBundles", 0x1C8, "BoolProperty"},
            {"bHasScheduleView", 0x1E0, "BoolProperty"},
            {"ScheduleDefinition", 0x1E8, "ObjectProperty"},
            {"ScheduleDisplayData", 0x1F0, "ObjectProperty"},
            {"ScheduleListItemId", 0x1F8, "StrProperty"},
            {"ScheduleEntries", 0x208, "ArrayProperty"},
            {"EventName", 0x218, "StrProperty"},
            {"bEventFound", 0x228, "BoolProperty"},
            {"EventStart", 0x230, "StructProperty"},
            {"EventEnd", 0x238, "StructProperty"},
            {"PrimaryUnlockTime", 0x240, "StructProperty"},
            {"PrimaryUnlockTimeState", 0x248, "EnumProperty"},
            {"PrimaryExpirationTime", 0x250, "StructProperty"},
            {"PrimaryExpirationTimeState", 0x258, "EnumProperty"},
            {"CategoryDebugData", 0x270, "StructProperty"},
            {"CategoryOrganizationData", 0x2A8, "StructProperty"},
            {"QuestTags", 0x2B8, "StructProperty"},
            {"BundleTags", 0x2D8, "StructProperty"},
            {"bSkippedOrganization", 0x2F8, "BoolProperty"},
            {"CategoryList", 0x300, "ArrayProperty"},
            {"CategoryPlacementIssues", 0x310, "ArrayProperty"},
            {"bAvailableInActiveProduct", 0x320, "BoolProperty"},
            {"ActiveProductTag", 0x324, "StructProperty"},
            {"bIsContentVisible", 0x328, "BoolProperty"},
            {"VisibilityReasonText", 0x330, "TextProperty"},
            {"bHasBuildData", 0x340, "BoolProperty"},
            {"BuildActiveVersion", 0x348, "StructProperty"},
            {"AssetReleaseVersion", 0x378, "TextProperty"},
            {"AssetSunsetVersion", 0x388, "TextProperty"},
            {"bResidesInPlugin", 0x398, "BoolProperty"},
            {"PluginName", 0x3A0, "StrProperty"},
            {"PluginReleaseVersion", 0x3B0, "TextProperty"},
            {"PluginSunsetVersion", 0x3C0, "TextProperty"},
            {"VersionWarning", 0x3D0, "TextProperty"},
            {"BackendData", 0x3E0, "StructProperty"},
            {"bQuestDataInitialized", 0x450, "BoolProperty"},
            {"bPrimaryAssetHasView", 0x451, "BoolProperty"},
            {"PrimaryAssetListItemId", 0x458, "StrProperty"},
            {"PrimaryDefinition", 0x468, "ObjectProperty"},
            {"PrimaryDisplayData", 0x470, "ObjectProperty"},
        }};
    };

    struct QuestPanelDebugToolWidgetBase
    {
        static constexpr std::string_view Name = "QuestPanelDebugToolWidgetBase";
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

    struct QuestUIBaseContentVM
    {
        static constexpr std::string_view Name = "QuestUIBaseContentVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bContentEnabled = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bContentEnabled", 0xA8, "BoolProperty"},
        }};
    };

    struct QuestUIBaseVM
    {
        static constexpr std::string_view Name = "QuestUIBaseVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Extensions = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Extensions", 0x98, "ArrayProperty"},
        }};
    };

    struct QuestUIBucketVM
    {
        static constexpr std::string_view Name = "QuestUIBucketVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0xB0;
            static constexpr std::uintptr_t Icon = 0xC0;
            static constexpr std::uintptr_t OrderedContentVMs = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DisplayName", 0xB0, "TextProperty"},
            {"Icon", 0xC0, "SoftObjectProperty"},
            {"OrderedContentVMs", 0xE0, "ArrayProperty"},
        }};
    };

    struct QuestUICategoryVM
    {
        static constexpr std::string_view Name = "QuestUICategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryIcon = 0xD8;
            static constexpr std::uintptr_t CategoryRewardVMs = 0xF8;
            static constexpr std::uintptr_t bHasCosmeticRewards = 0x108;
            static constexpr std::uintptr_t bHasCinematicRewards = 0x109;
            static constexpr std::uintptr_t bIsCategoryTracked = 0x10A;
            static constexpr std::uintptr_t bHasNewContent = 0x10B;
            static constexpr std::uintptr_t bHasExpirationTime = 0x10C;
            static constexpr std::uintptr_t ExpirationTime = 0x110;
            static constexpr std::uintptr_t ExpirationDisplayMode = 0x118;
            static constexpr std::uintptr_t CustomExpirationText = 0x120;
            static constexpr std::uintptr_t bAllowsMap = 0x130;
            static constexpr std::uintptr_t CustomMapWidget = 0x138;
            static constexpr std::uintptr_t bPropagateCustomMapWidgetForAllContent = 0x158;
            static constexpr std::uintptr_t CustomMapBackground = 0x160;
            static constexpr std::uintptr_t DebugCategoryID = 0x180;
            static constexpr std::uintptr_t OrderedContentVMs = 0x190;
            static constexpr std::uintptr_t CategoryRuntimeProvider = 0x1B8;
            static constexpr std::uintptr_t MapIconClass = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CategoryIcon", 0xD8, "SoftObjectProperty"},
            {"CategoryRewardVMs", 0xF8, "ArrayProperty"},
            {"bHasCosmeticRewards", 0x108, "BoolProperty"},
            {"bHasCinematicRewards", 0x109, "BoolProperty"},
            {"bIsCategoryTracked", 0x10A, "BoolProperty"},
            {"bHasNewContent", 0x10B, "BoolProperty"},
            {"bHasExpirationTime", 0x10C, "BoolProperty"},
            {"ExpirationTime", 0x110, "StructProperty"},
            {"ExpirationDisplayMode", 0x118, "EnumProperty"},
            {"CustomExpirationText", 0x120, "TextProperty"},
            {"bAllowsMap", 0x130, "BoolProperty"},
            {"CustomMapWidget", 0x138, "SoftClassProperty"},
            {"bPropagateCustomMapWidgetForAllContent", 0x158, "BoolProperty"},
            {"CustomMapBackground", 0x160, "SoftObjectProperty"},
            {"DebugCategoryID", 0x180, "StrProperty"},
            {"OrderedContentVMs", 0x190, "ArrayProperty"},
            {"CategoryRuntimeProvider", 0x1B8, "InterfaceProperty"},
            {"MapIconClass", 0x1C8, "ClassProperty"},
        }};
    };

    struct QuestUICompatibilityVM
    {
        static constexpr std::string_view Name = "QuestUICompatibilityVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x120;
            static constexpr std::uintptr_t DebugWarning = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DisplayName", 0x120, "TextProperty"},
            {"DebugWarning", 0x130, "TextProperty"},
        }};
    };

    struct QuestUICustomCategoryVM
    {
        static constexpr std::string_view Name = "QuestUICustomCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUICategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryIcon = 0xD8;
            static constexpr std::uintptr_t CategoryRewardVMs = 0xF8;
            static constexpr std::uintptr_t bHasCosmeticRewards = 0x108;
            static constexpr std::uintptr_t bHasCinematicRewards = 0x109;
            static constexpr std::uintptr_t bIsCategoryTracked = 0x10A;
            static constexpr std::uintptr_t bHasNewContent = 0x10B;
            static constexpr std::uintptr_t bHasExpirationTime = 0x10C;
            static constexpr std::uintptr_t ExpirationTime = 0x110;
            static constexpr std::uintptr_t ExpirationDisplayMode = 0x118;
            static constexpr std::uintptr_t CustomExpirationText = 0x120;
            static constexpr std::uintptr_t bAllowsMap = 0x130;
            static constexpr std::uintptr_t CustomMapWidget = 0x138;
            static constexpr std::uintptr_t bPropagateCustomMapWidgetForAllContent = 0x158;
            static constexpr std::uintptr_t CustomMapBackground = 0x160;
            static constexpr std::uintptr_t DebugCategoryID = 0x180;
            static constexpr std::uintptr_t OrderedContentVMs = 0x190;
            static constexpr std::uintptr_t CategoryRuntimeProvider = 0x1B8;
            static constexpr std::uintptr_t MapIconClass = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CategoryIcon", 0xD8, "SoftObjectProperty"},
            {"CategoryRewardVMs", 0xF8, "ArrayProperty"},
            {"bHasCosmeticRewards", 0x108, "BoolProperty"},
            {"bHasCinematicRewards", 0x109, "BoolProperty"},
            {"bIsCategoryTracked", 0x10A, "BoolProperty"},
            {"bHasNewContent", 0x10B, "BoolProperty"},
            {"bHasExpirationTime", 0x10C, "BoolProperty"},
            {"ExpirationTime", 0x110, "StructProperty"},
            {"ExpirationDisplayMode", 0x118, "EnumProperty"},
            {"CustomExpirationText", 0x120, "TextProperty"},
            {"bAllowsMap", 0x130, "BoolProperty"},
            {"CustomMapWidget", 0x138, "SoftClassProperty"},
            {"bPropagateCustomMapWidgetForAllContent", 0x158, "BoolProperty"},
            {"CustomMapBackground", 0x160, "SoftObjectProperty"},
            {"DebugCategoryID", 0x180, "StrProperty"},
            {"OrderedContentVMs", 0x190, "ArrayProperty"},
            {"CategoryRuntimeProvider", 0x1B8, "InterfaceProperty"},
            {"MapIconClass", 0x1C8, "ClassProperty"},
        }};
    };

    struct QuestUICustomEntryVM
    {
        static constexpr std::string_view Name = "QuestUICustomEntryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t OnIsDiscoveredChanged = 0xB0;
            static constexpr std::uintptr_t DisplayName = 0xC0;
            static constexpr std::uintptr_t Description = 0xD0;
            static constexpr std::uintptr_t SmallIcon = 0xE0;
            static constexpr std::uintptr_t LargeIcon = 0x100;
            static constexpr std::uintptr_t bIsDiscovered = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnIsDiscoveredChanged", 0xB0, "MulticastInlineDelegateProperty"},
            {"DisplayName", 0xC0, "TextProperty"},
            {"Description", 0xD0, "TextProperty"},
            {"SmallIcon", 0xE0, "SoftObjectProperty"},
            {"LargeIcon", 0x100, "SoftObjectProperty"},
            {"bIsDiscovered", 0x120, "BoolProperty"},
        }};
    };

    struct QuestUICustomRowVM
    {
        static constexpr std::string_view Name = "QuestUICustomRowVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t OrderedContentVMs = 0xB0;
            static constexpr std::uintptr_t CustomEntryWidgetOverride = 0xC0;
            static constexpr std::uintptr_t SelectionWidgetOverride = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OrderedContentVMs", 0xB0, "ArrayProperty"},
            {"CustomEntryWidgetOverride", 0xC0, "ClassProperty"},
            {"SelectionWidgetOverride", 0xC8, "SoftClassProperty"},
        }};
    };

    struct QuestUIDailyPunchCardVM
    {
        static constexpr std::string_view Name = "QuestUIDailyPunchCardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIPunchCardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderText = 0xC8;
            static constexpr std::uintptr_t SubHeaderText = 0xD8;
            static constexpr std::uintptr_t orientation = 0xE8;
            static constexpr std::uintptr_t CustomMapWidget = 0xF0;
            static constexpr std::uintptr_t CustomMapBackground = 0x110;
            static constexpr std::uintptr_t MapData = 0x130;
            static constexpr std::uintptr_t bHasNewContent = 0x180;
            static constexpr std::uintptr_t OrderedContentVMs = 0x188;
            static constexpr std::uintptr_t DebugBundleID = 0x198;
            static constexpr std::uintptr_t bHasExpirationTime = 0x1BC;
            static constexpr std::uintptr_t ExpirationTime = 0x1C0;
            static constexpr std::uintptr_t ExpirationDisplayMode = 0x1C8;
            static constexpr std::uintptr_t BackgroundIcon = 0x1D0;
            static constexpr std::uintptr_t bAllowInspectItems = 0x1F0;
            static constexpr std::uintptr_t ExternalLinkVM = 0x1F8;
            static constexpr std::uintptr_t ProgressDisplayMode = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"HeaderText", 0xC8, "TextProperty"},
            {"SubHeaderText", 0xD8, "TextProperty"},
            {"orientation", 0xE8, "EnumProperty"},
            {"CustomMapWidget", 0xF0, "SoftClassProperty"},
            {"CustomMapBackground", 0x110, "SoftObjectProperty"},
            {"MapData", 0x130, "StructProperty"},
            {"bHasNewContent", 0x180, "BoolProperty"},
            {"OrderedContentVMs", 0x188, "ArrayProperty"},
            {"DebugBundleID", 0x198, "StrProperty"},
            {"bHasExpirationTime", 0x1BC, "BoolProperty"},
            {"ExpirationTime", 0x1C0, "StructProperty"},
            {"ExpirationDisplayMode", 0x1C8, "EnumProperty"},
            {"BackgroundIcon", 0x1D0, "SoftObjectProperty"},
            {"bAllowInspectItems", 0x1F0, "BoolProperty"},
            {"ExternalLinkVM", 0x1F8, "ObjectProperty"},
            {"ProgressDisplayMode", 0x200, "EnumProperty"},
        }};
    };

    struct QuestUIExtensionBase
    {
        static constexpr std::string_view Name = "QuestUIExtensionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestUIExternalLinkVM
    {
        static constexpr std::string_view Name = "QuestUIExternalLinkVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLinkAvailable = 0xB0;
            static constexpr std::uintptr_t InputAction = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsLinkAvailable", 0xB0, "BoolProperty"},
            {"InputAction", 0xB8, "StructProperty"},
        }};
    };

    struct QuestUIHeaderVM
    {
        static constexpr std::string_view Name = "QuestUIHeaderVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderRuntimeProvider = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HeaderRuntimeProvider", 0xE0, "InterfaceProperty"},
        }};
    };

    struct QuestUIHorizontalPunchCardExtension
    {
        static constexpr std::string_view Name = "QuestUIHorizontalPunchCardExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIExtensionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceIndex = 0x68;
            static constexpr std::uintptr_t SequenceState = 0x6C;
            static constexpr std::uintptr_t SequenceProgressPercent = 0x70;
            static constexpr std::uintptr_t CustomGoalIcon = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SequenceIndex", 0x68, "IntProperty"},
            {"SequenceState", 0x6C, "EnumProperty"},
            {"SequenceProgressPercent", 0x70, "FloatProperty"},
            {"CustomGoalIcon", 0x78, "SoftObjectProperty"},
        }};
    };

    struct QuestUIHorizontalPunchCardVM
    {
        static constexpr std::string_view Name = "QuestUIHorizontalPunchCardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIPunchCardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderText = 0xC8;
            static constexpr std::uintptr_t SubHeaderText = 0xD8;
            static constexpr std::uintptr_t orientation = 0xE8;
            static constexpr std::uintptr_t CustomMapWidget = 0xF0;
            static constexpr std::uintptr_t CustomMapBackground = 0x110;
            static constexpr std::uintptr_t MapData = 0x130;
            static constexpr std::uintptr_t bHasNewContent = 0x180;
            static constexpr std::uintptr_t OrderedContentVMs = 0x188;
            static constexpr std::uintptr_t DebugBundleID = 0x198;
            static constexpr std::uintptr_t bHasExpirationTime = 0x1BC;
            static constexpr std::uintptr_t ExpirationTime = 0x1C0;
            static constexpr std::uintptr_t ExpirationDisplayMode = 0x1C8;
            static constexpr std::uintptr_t BackgroundIcon = 0x1D0;
            static constexpr std::uintptr_t bAllowInspectItems = 0x1F0;
            static constexpr std::uintptr_t ExternalLinkVM = 0x1F8;
            static constexpr std::uintptr_t ProgressDisplayMode = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"HeaderText", 0xC8, "TextProperty"},
            {"SubHeaderText", 0xD8, "TextProperty"},
            {"orientation", 0xE8, "EnumProperty"},
            {"CustomMapWidget", 0xF0, "SoftClassProperty"},
            {"CustomMapBackground", 0x110, "SoftObjectProperty"},
            {"MapData", 0x130, "StructProperty"},
            {"bHasNewContent", 0x180, "BoolProperty"},
            {"OrderedContentVMs", 0x188, "ArrayProperty"},
            {"DebugBundleID", 0x198, "StrProperty"},
            {"bHasExpirationTime", 0x1BC, "BoolProperty"},
            {"ExpirationTime", 0x1C0, "StructProperty"},
            {"ExpirationDisplayMode", 0x1C8, "EnumProperty"},
            {"BackgroundIcon", 0x1D0, "SoftObjectProperty"},
            {"bAllowInspectItems", 0x1F0, "BoolProperty"},
            {"ExternalLinkVM", 0x1F8, "ObjectProperty"},
            {"ProgressDisplayMode", 0x200, "EnumProperty"},
        }};
    };

    struct QuestUILockedQuestVM
    {
        static constexpr std::string_view Name = "QuestUILockedQuestVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t LockedQuestData = 0xC0;
            static constexpr std::uintptr_t RewardVMs = 0x278;
            static constexpr std::uintptr_t DebugSourceID = 0x288;
            static constexpr std::uintptr_t DebugRepresentedID = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LockedQuestData", 0xC0, "StructProperty"},
            {"RewardVMs", 0x278, "ArrayProperty"},
            {"DebugSourceID", 0x288, "StrProperty"},
            {"DebugRepresentedID", 0x298, "StrProperty"},
        }};
    };

    struct QuestUIMap
    {
        static constexpr std::string_view Name = "QuestUIMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaFullScreenMapBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedQuestView = 0x5F8;
            static constexpr std::uintptr_t CustomMapIcons = 0x628;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedQuestView", 0x5F8, "StructProperty"},
            {"CustomMapIcons", 0x628, "MapProperty"},
        }};
    };

    struct QuestUIMessageVM
    {
        static constexpr std::string_view Name = "QuestUIMessageVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageType = 0xB0;
            static constexpr std::uintptr_t CustomMessage = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MessageType", 0xB0, "EnumProperty"},
            {"CustomMessage", 0xB8, "TextProperty"},
        }};
    };

    struct QuestUIObjectiveVM
    {
        static constexpr std::string_view Name = "QuestUIObjectiveVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t AchievedCount = 0x78;
            static constexpr std::uintptr_t CachedQuestView = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AchievedCount", 0x78, "IntProperty"},
            {"CachedQuestView", 0x80, "StructProperty"},
        }};
    };

    struct QuestUIPlayerVM
    {
        static constexpr std::string_view Name = "QuestUIPlayerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseVM";
        struct Offsets
        {
            static constexpr std::uintptr_t OrderedProductVMs = 0x110;
            static constexpr std::uintptr_t TrackerVM = 0x120;
            static constexpr std::uintptr_t bHasNewContent = 0x128;
            static constexpr std::uintptr_t DebugPlaylistInfoText = 0x130;
            static constexpr std::uintptr_t bDebugPlaylistInfoIsWarning = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OrderedProductVMs", 0x110, "ArrayProperty"},
            {"TrackerVM", 0x120, "ObjectProperty"},
            {"bHasNewContent", 0x128, "BoolProperty"},
            {"DebugPlaylistInfoText", 0x130, "TextProperty"},
            {"bDebugPlaylistInfoIsWarning", 0x140, "BoolProperty"},
        }};
    };

    struct QuestUIProductVM
    {
        static constexpr std::string_view Name = "QuestUIProductVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductName = 0xC0;
            static constexpr std::uintptr_t ProductGroupTag = 0xD0;
            static constexpr std::uintptr_t ProductIcon = 0xD8;
            static constexpr std::uintptr_t ProductInstallState = 0xF8;
            static constexpr std::uintptr_t OrderedBucketVMs = 0x100;
            static constexpr std::uintptr_t OnProductCategoriesChanged = 0x110;
            static constexpr std::uintptr_t BucketGroupData = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ProductName", 0xC0, "TextProperty"},
            {"ProductGroupTag", 0xD0, "StructProperty"},
            {"ProductIcon", 0xD8, "SoftObjectProperty"},
            {"ProductInstallState", 0xF8, "EnumProperty"},
            {"OrderedBucketVMs", 0x100, "ArrayProperty"},
            {"OnProductCategoriesChanged", 0x110, "MulticastInlineDelegateProperty"},
            {"BucketGroupData", 0x140, "ObjectProperty"},
        }};
    };

    struct QuestUIPunchCardVM
    {
        static constexpr std::string_view Name = "QuestUIPunchCardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t HeaderText = 0xC8;
            static constexpr std::uintptr_t SubHeaderText = 0xD8;
            static constexpr std::uintptr_t orientation = 0xE8;
            static constexpr std::uintptr_t CustomMapWidget = 0xF0;
            static constexpr std::uintptr_t CustomMapBackground = 0x110;
            static constexpr std::uintptr_t MapData = 0x130;
            static constexpr std::uintptr_t bHasNewContent = 0x180;
            static constexpr std::uintptr_t OrderedContentVMs = 0x188;
            static constexpr std::uintptr_t DebugBundleID = 0x198;
            static constexpr std::uintptr_t bHasExpirationTime = 0x1BC;
            static constexpr std::uintptr_t ExpirationTime = 0x1C0;
            static constexpr std::uintptr_t ExpirationDisplayMode = 0x1C8;
            static constexpr std::uintptr_t BackgroundIcon = 0x1D0;
            static constexpr std::uintptr_t bAllowInspectItems = 0x1F0;
            static constexpr std::uintptr_t ExternalLinkVM = 0x1F8;
            static constexpr std::uintptr_t ProgressDisplayMode = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"HeaderText", 0xC8, "TextProperty"},
            {"SubHeaderText", 0xD8, "TextProperty"},
            {"orientation", 0xE8, "EnumProperty"},
            {"CustomMapWidget", 0xF0, "SoftClassProperty"},
            {"CustomMapBackground", 0x110, "SoftObjectProperty"},
            {"MapData", 0x130, "StructProperty"},
            {"bHasNewContent", 0x180, "BoolProperty"},
            {"OrderedContentVMs", 0x188, "ArrayProperty"},
            {"DebugBundleID", 0x198, "StrProperty"},
            {"bHasExpirationTime", 0x1BC, "BoolProperty"},
            {"ExpirationTime", 0x1C0, "StructProperty"},
            {"ExpirationDisplayMode", 0x1C8, "EnumProperty"},
            {"BackgroundIcon", 0x1D0, "SoftObjectProperty"},
            {"bAllowInspectItems", 0x1F0, "BoolProperty"},
            {"ExternalLinkVM", 0x1F8, "ObjectProperty"},
            {"ProgressDisplayMode", 0x200, "EnumProperty"},
        }};
    };

    struct QuestUIQuestVM
    {
        static constexpr std::string_view Name = "QuestUIQuestVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedQuestView = 0xD8;
            static constexpr std::uintptr_t QuestName = 0x100;
            static constexpr std::uintptr_t FlavorText = 0x110;
            static constexpr std::uintptr_t AchievedCount = 0x120;
            static constexpr std::uintptr_t RequiredCount = 0x124;
            static constexpr std::uintptr_t QuestProgressStyle = 0x128;
            static constexpr std::uintptr_t CustomBadge = 0x130;
            static constexpr std::uintptr_t StageValue = 0x150;
            static constexpr std::uintptr_t StageMax = 0x154;
            static constexpr std::uintptr_t RewardVMs = 0x158;
            static constexpr std::uintptr_t QuestGiverIcon = 0x168;
            static constexpr std::uintptr_t OnlineLinkId = 0x1C8;
            static constexpr std::uintptr_t DiscoveryLinkTreatmentType = 0x1E0;
            static constexpr std::uintptr_t MapData = 0x1E8;
            static constexpr std::uintptr_t bHasExpirationTime = 0x238;
            static constexpr std::uintptr_t ExpirationTime = 0x240;
            static constexpr std::uintptr_t CustomMapWidget = 0x248;
            static constexpr std::uintptr_t PunchCardSettings = 0x268;
            static constexpr std::uintptr_t ExternalLinkVM = 0x300;
            static constexpr std::uintptr_t SharedQuestType = 0x308;
            static constexpr std::uintptr_t bIsNew = 0x309;
            static constexpr std::uintptr_t bIsTracked = 0x30A;
            static constexpr std::uintptr_t TrackIndex = 0x30C;
            static constexpr std::uintptr_t bIsPinned = 0x310;
            static constexpr std::uintptr_t bIsIslandQuest = 0x311;
            static constexpr std::uintptr_t DropPlacement = 0x312;
            static constexpr std::uintptr_t bIsInMovingMode = 0x313;
            static constexpr std::uintptr_t PinIndex = 0x314;
            static constexpr std::uintptr_t DebugQuestID = 0x318;
            static constexpr std::uintptr_t ObjectiveViewModels = 0x328;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"CachedQuestView", 0xD8, "StructProperty"},
            {"QuestName", 0x100, "TextProperty"},
            {"FlavorText", 0x110, "TextProperty"},
            {"AchievedCount", 0x120, "IntProperty"},
            {"RequiredCount", 0x124, "IntProperty"},
            {"QuestProgressStyle", 0x128, "EnumProperty"},
            {"CustomBadge", 0x130, "SoftObjectProperty"},
            {"StageValue", 0x150, "IntProperty"},
            {"StageMax", 0x154, "IntProperty"},
            {"RewardVMs", 0x158, "ArrayProperty"},
            {"QuestGiverIcon", 0x168, "SoftObjectProperty"},
            {"OnlineLinkId", 0x1C8, "StructProperty"},
            {"DiscoveryLinkTreatmentType", 0x1E0, "EnumProperty"},
            {"MapData", 0x1E8, "StructProperty"},
            {"bHasExpirationTime", 0x238, "BoolProperty"},
            {"ExpirationTime", 0x240, "StructProperty"},
            {"CustomMapWidget", 0x248, "SoftClassProperty"},
            {"PunchCardSettings", 0x268, "StructProperty"},
            {"ExternalLinkVM", 0x300, "ObjectProperty"},
            {"SharedQuestType", 0x308, "EnumProperty"},
            {"bIsNew", 0x309, "BoolProperty"},
            {"bIsTracked", 0x30A, "BoolProperty"},
            {"TrackIndex", 0x30C, "IntProperty"},
            {"bIsPinned", 0x310, "BoolProperty"},
            {"bIsIslandQuest", 0x311, "BoolProperty"},
            {"DropPlacement", 0x312, "EnumProperty"},
            {"bIsInMovingMode", 0x313, "BoolProperty"},
            {"PinIndex", 0x314, "IntProperty"},
            {"DebugQuestID", 0x318, "StrProperty"},
            {"ObjectiveViewModels", 0x328, "ArrayProperty"},
        }};
    };

    struct QuestUIRewardCinematicVM
    {
        static constexpr std::string_view Name = "QuestUIRewardCinematicVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIRewardVM";
        struct Offsets
        {
            static constexpr std::uintptr_t VUID = 0x190;
            static constexpr std::uintptr_t bIsWatched = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VUID", 0x190, "StrProperty"},
            {"bIsWatched", 0x1A0, "BoolProperty"},
        }};
    };

    struct QuestUIRewardMountObserver
    {
        static constexpr std::string_view Name = "QuestUIRewardMountObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestUIRewardProvider
    {
        static constexpr std::string_view Name = "QuestUIRewardProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestUIRewardVM
    {
        static constexpr std::string_view Name = "QuestUIRewardVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsRewardContentAvailable = 0xB1;
            static constexpr std::uintptr_t bIsCosmetic = 0xB2;
            static constexpr std::uintptr_t bIsSeasonalXP = 0xB3;
            static constexpr std::uintptr_t Title = 0xB8;
            static constexpr std::uintptr_t Description = 0xC8;
            static constexpr std::uintptr_t CategoryName = 0xD8;
            static constexpr std::uintptr_t CompatibleProducts = 0xE8;
            static constexpr std::uintptr_t SmallPreviewImage = 0xF8;
            static constexpr std::uintptr_t LargePreviewImage = 0x118;
            static constexpr std::uintptr_t LargePreviewWidgetClass = 0x138;
            static constexpr std::uintptr_t CustomRewardData = 0x158;
            static constexpr std::uintptr_t Quantity = 0x168;
            static constexpr std::uintptr_t ItemType = 0x16C;
            static constexpr std::uintptr_t ItemTemplateId = 0x170;
            static constexpr std::uintptr_t RequiredToken = 0x180;
            static constexpr std::uintptr_t TempItemDetailsVM = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bIsRewardContentAvailable", 0xB1, "BoolProperty"},
            {"bIsCosmetic", 0xB2, "BoolProperty"},
            {"bIsSeasonalXP", 0xB3, "BoolProperty"},
            {"Title", 0xB8, "TextProperty"},
            {"Description", 0xC8, "TextProperty"},
            {"CategoryName", 0xD8, "TextProperty"},
            {"CompatibleProducts", 0xE8, "SetProperty"},
            {"SmallPreviewImage", 0xF8, "SoftObjectProperty"},
            {"LargePreviewImage", 0x118, "SoftObjectProperty"},
            {"LargePreviewWidgetClass", 0x138, "SoftClassProperty"},
            {"CustomRewardData", 0x158, "StructProperty"},
            {"Quantity", 0x168, "IntProperty"},
            {"ItemType", 0x16C, "EnumProperty"},
            {"ItemTemplateId", 0x170, "StrProperty"},
            {"RequiredToken", 0x180, "StructProperty"},
            {"TempItemDetailsVM", 0x188, "ObjectProperty"},
        }};
    };

    struct QuestUIRowWidget
    {
        static constexpr std::string_view Name = "QuestUIRowWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnColumnSelected = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnColumnSelected", 0x308, "MulticastInlineDelegateProperty"},
        }};
    };

    struct QuestUIScreen
    {
        static constexpr std::string_view Name = "QuestUIScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t OnQuestModalDeactivated = 0x4C8;
            static constexpr std::uintptr_t MapTabInfo = 0x4D8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnQuestModalDeactivated", 0x4C8, "MulticastInlineDelegateProperty"},
            {"MapTabInfo", 0x4D8, "StructProperty"},
        }};
    };

    struct QuestUISeasonPassLinkVM
    {
        static constexpr std::string_view Name = "QuestUISeasonPassLinkVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIExternalLinkVM";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsLinkAvailable = 0xB0;
            static constexpr std::uintptr_t InputAction = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsLinkAvailable", 0xB0, "BoolProperty"},
            {"InputAction", 0xB8, "StructProperty"},
        }};
    };

    struct QuestUISpacerVM
    {
        static constexpr std::string_view Name = "QuestUISpacerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUIBaseContentVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SpacerSize = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpacerSize", 0xB0, "EnumProperty"},
        }};
    };

    struct QuestUITrackerVM
    {
        static constexpr std::string_view Name = "QuestUITrackerVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUICategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryIcon = 0xD8;
            static constexpr std::uintptr_t CategoryRewardVMs = 0xF8;
            static constexpr std::uintptr_t bHasCosmeticRewards = 0x108;
            static constexpr std::uintptr_t bHasCinematicRewards = 0x109;
            static constexpr std::uintptr_t bIsCategoryTracked = 0x10A;
            static constexpr std::uintptr_t bHasNewContent = 0x10B;
            static constexpr std::uintptr_t bHasExpirationTime = 0x10C;
            static constexpr std::uintptr_t ExpirationTime = 0x110;
            static constexpr std::uintptr_t ExpirationDisplayMode = 0x118;
            static constexpr std::uintptr_t CustomExpirationText = 0x120;
            static constexpr std::uintptr_t bAllowsMap = 0x130;
            static constexpr std::uintptr_t CustomMapWidget = 0x138;
            static constexpr std::uintptr_t bPropagateCustomMapWidgetForAllContent = 0x158;
            static constexpr std::uintptr_t CustomMapBackground = 0x160;
            static constexpr std::uintptr_t DebugCategoryID = 0x180;
            static constexpr std::uintptr_t OrderedContentVMs = 0x190;
            static constexpr std::uintptr_t CategoryRuntimeProvider = 0x1B8;
            static constexpr std::uintptr_t MapIconClass = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CategoryIcon", 0xD8, "SoftObjectProperty"},
            {"CategoryRewardVMs", 0xF8, "ArrayProperty"},
            {"bHasCosmeticRewards", 0x108, "BoolProperty"},
            {"bHasCinematicRewards", 0x109, "BoolProperty"},
            {"bIsCategoryTracked", 0x10A, "BoolProperty"},
            {"bHasNewContent", 0x10B, "BoolProperty"},
            {"bHasExpirationTime", 0x10C, "BoolProperty"},
            {"ExpirationTime", 0x110, "StructProperty"},
            {"ExpirationDisplayMode", 0x118, "EnumProperty"},
            {"CustomExpirationText", 0x120, "TextProperty"},
            {"bAllowsMap", 0x130, "BoolProperty"},
            {"CustomMapWidget", 0x138, "SoftClassProperty"},
            {"bPropagateCustomMapWidgetForAllContent", 0x158, "BoolProperty"},
            {"CustomMapBackground", 0x160, "SoftObjectProperty"},
            {"DebugCategoryID", 0x180, "StrProperty"},
            {"OrderedContentVMs", 0x190, "ArrayProperty"},
            {"CategoryRuntimeProvider", 0x1B8, "InterfaceProperty"},
            {"MapIconClass", 0x1C8, "ClassProperty"},
        }};
    };

    struct QuestUIVerseCategoryVM
    {
        static constexpr std::string_view Name = "QuestUIVerseCategoryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUICategoryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryIcon = 0xD8;
            static constexpr std::uintptr_t CategoryRewardVMs = 0xF8;
            static constexpr std::uintptr_t bHasCosmeticRewards = 0x108;
            static constexpr std::uintptr_t bHasCinematicRewards = 0x109;
            static constexpr std::uintptr_t bIsCategoryTracked = 0x10A;
            static constexpr std::uintptr_t bHasNewContent = 0x10B;
            static constexpr std::uintptr_t bHasExpirationTime = 0x10C;
            static constexpr std::uintptr_t ExpirationTime = 0x110;
            static constexpr std::uintptr_t ExpirationDisplayMode = 0x118;
            static constexpr std::uintptr_t CustomExpirationText = 0x120;
            static constexpr std::uintptr_t bAllowsMap = 0x130;
            static constexpr std::uintptr_t CustomMapWidget = 0x138;
            static constexpr std::uintptr_t bPropagateCustomMapWidgetForAllContent = 0x158;
            static constexpr std::uintptr_t CustomMapBackground = 0x160;
            static constexpr std::uintptr_t DebugCategoryID = 0x180;
            static constexpr std::uintptr_t OrderedContentVMs = 0x190;
            static constexpr std::uintptr_t CategoryRuntimeProvider = 0x1B8;
            static constexpr std::uintptr_t MapIconClass = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CategoryIcon", 0xD8, "SoftObjectProperty"},
            {"CategoryRewardVMs", 0xF8, "ArrayProperty"},
            {"bHasCosmeticRewards", 0x108, "BoolProperty"},
            {"bHasCinematicRewards", 0x109, "BoolProperty"},
            {"bIsCategoryTracked", 0x10A, "BoolProperty"},
            {"bHasNewContent", 0x10B, "BoolProperty"},
            {"bHasExpirationTime", 0x10C, "BoolProperty"},
            {"ExpirationTime", 0x110, "StructProperty"},
            {"ExpirationDisplayMode", 0x118, "EnumProperty"},
            {"CustomExpirationText", 0x120, "TextProperty"},
            {"bAllowsMap", 0x130, "BoolProperty"},
            {"CustomMapWidget", 0x138, "SoftClassProperty"},
            {"bPropagateCustomMapWidgetForAllContent", 0x158, "BoolProperty"},
            {"CustomMapBackground", 0x160, "SoftObjectProperty"},
            {"DebugCategoryID", 0x180, "StrProperty"},
            {"OrderedContentVMs", 0x190, "ArrayProperty"},
            {"CategoryRuntimeProvider", 0x1B8, "InterfaceProperty"},
            {"MapIconClass", 0x1C8, "ClassProperty"},
        }};
    };

    struct QuestUIViewModelSubsystem
    {
        static constexpr std::string_view Name = "QuestUIViewModelSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeManagerMap = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TypeManagerMap", 0x30, "MapProperty"},
        }};
    };

    struct QuestUIViewModelTypeManager
    {
        static constexpr std::string_view Name = "QuestUIViewModelTypeManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ContentMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContentMap", 0x28, "MapProperty"},
        }};
    };

}
