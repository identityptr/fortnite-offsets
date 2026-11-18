#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UIStateTree
{
    struct UIStateTreeAsyncLoader
    {
        static constexpr std::string_view Name = "UIStateTreeAsyncLoader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PathsToLoad = 0x28;
            static constexpr std::uintptr_t bHasNewlyCompletedRequests = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PathsToLoad", 0x28, "ArrayProperty"},
            {"bHasNewlyCompletedRequests", 0x48, "BoolProperty"},
        }};
    };

    struct UIStateTreeBacktrackRegistry
    {
        static constexpr std::string_view Name = "UIStateTreeBacktrackRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BacktrackPaths = 0x28;
            static constexpr std::uintptr_t CachedSourceState = 0x38;
            static constexpr std::uintptr_t Manager = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BacktrackPaths", 0x28, "MapProperty"},
            {"CachedSourceState", 0x38, "StructProperty"},
            {"Manager", 0x40, "ObjectProperty"},
        }};
    };

    struct UIStateTreeBlueprintLibrary
    {
        static constexpr std::string_view Name = "UIStateTreeBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UIStateTreeCheatManager
    {
        static constexpr std::string_view Name = "UIStateTreeCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UIStateTreeContext
    {
        static constexpr std::string_view Name = "UIStateTreeContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UIStateTreeManager = 0x38;
            static constexpr std::uintptr_t WidgetCache = 0x40;
            static constexpr std::uintptr_t AsyncLoader = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UIStateTreeManager", 0x38, "ObjectProperty"},
            {"WidgetCache", 0x40, "ObjectProperty"},
            {"AsyncLoader", 0x48, "ObjectProperty"},
        }};
    };

    struct UIStateTreeExternalDataContext
    {
        static constexpr std::string_view Name = "UIStateTreeExternalDataContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UIStateTreeManager
    {
        static constexpr std::string_view Name = "UIStateTreeManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ParametersChangedDynamic = 0x38;
            static constexpr std::uintptr_t AsyncLoader = 0x58;
            static constexpr std::uintptr_t CommonParameters = 0x60;
            static constexpr std::uintptr_t EmptyParameters = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParametersChangedDynamic", 0x38, "MulticastInlineDelegateProperty"},
            {"AsyncLoader", 0x58, "ObjectProperty"},
            {"CommonParameters", 0x60, "StructProperty"},
            {"EmptyParameters", 0x70, "StructProperty"},
        }};
    };

    struct UIStateTreeManagerEntry
    {
        static constexpr std::string_view Name = "UIStateTreeManagerEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeAsset = 0x28;
            static constexpr std::uintptr_t BacktrackRegistry = 0x30;
            static constexpr std::uintptr_t StateTreeInstanceData = 0x38;
            static constexpr std::uintptr_t StateTreeParameters = 0x48;
            static constexpr std::uintptr_t StateTreeManagerPlayer = 0x58;
            static constexpr std::uintptr_t ExternalDataContext = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StateTreeAsset", 0x28, "ObjectProperty"},
            {"BacktrackRegistry", 0x30, "ObjectProperty"},
            {"StateTreeInstanceData", 0x38, "StructProperty"},
            {"StateTreeParameters", 0x48, "StructProperty"},
            {"StateTreeManagerPlayer", 0x58, "ObjectProperty"},
            {"ExternalDataContext", 0x60, "InterfaceProperty"},
        }};
    };

    struct UIStateTreeManagerPlayer
    {
        static constexpr std::string_view Name = "UIStateTreeManagerPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveTreeEntries = 0x28;
            static constexpr std::uintptr_t InactiveTreeEntries = 0x38;
            static constexpr std::uintptr_t TransitionEventQueue = 0x48;
            static constexpr std::uintptr_t RecentAnimationHintRecords = 0x58;
            static constexpr std::uintptr_t StateTreeContext = 0x68;
            static constexpr std::uintptr_t PlayerSpecificParameters = 0x70;
            static constexpr std::uintptr_t CombinedPlayerParameters = 0x80;
            static constexpr std::uintptr_t PlayerCombinedAnimationHints = 0x90;
            static constexpr std::uintptr_t bArePlayerCombinedAnimationHintsValid = 0xB0;
            static constexpr std::uintptr_t StateTreeManager = 0xB8;
            static constexpr std::uintptr_t bNeedsUpdate = 0xC0;
            static constexpr std::uintptr_t bHasUpdatedParameters = 0xC1;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ActiveTreeEntries", 0x28, "MapProperty"},
            {"InactiveTreeEntries", 0x38, "MapProperty"},
            {"TransitionEventQueue", 0x48, "ArrayProperty"},
            {"RecentAnimationHintRecords", 0x58, "ArrayProperty"},
            {"StateTreeContext", 0x68, "ObjectProperty"},
            {"PlayerSpecificParameters", 0x70, "StructProperty"},
            {"CombinedPlayerParameters", 0x80, "StructProperty"},
            {"PlayerCombinedAnimationHints", 0x90, "StructProperty"},
            {"bArePlayerCombinedAnimationHintsValid", 0xB0, "BoolProperty"},
            {"StateTreeManager", 0xB8, "ObjectProperty"},
            {"bNeedsUpdate", 0xC0, "BoolProperty"},
            {"bHasUpdatedParameters", 0xC1, "BoolProperty"},
        }};
    };

    struct UIStateTreeSchema
    {
        static constexpr std::string_view Name = "UIStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct UIStateTreeWidgetCache
    {
        static constexpr std::string_view Name = "UIStateTreeWidgetCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheEntries = 0x28;
            static constexpr std::uintptr_t Context = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CacheEntries", 0x28, "MapProperty"},
            {"Context", 0x38, "ObjectProperty"},
        }};
    };

}
