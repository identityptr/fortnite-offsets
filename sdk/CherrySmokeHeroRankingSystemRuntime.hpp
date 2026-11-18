#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CherrySmokeHeroRankingSystemRuntime
{
    struct CherrySmokeHeroRankingAnalyticsComponent
    {
        static constexpr std::string_view Name = "CherrySmokeHeroRankingAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct CherrySmokeHeroRankingCheatManager
    {
        static constexpr std::string_view Name = "CherrySmokeHeroRankingCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CherrySmokeHeroRankingGlobalManager
    {
        static constexpr std::string_view Name = "CherrySmokeHeroRankingGlobalManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PerTeamRuntimeRankData = 0xD0;
            static constexpr std::uintptr_t Ranks = 0x130;
            static constexpr std::uintptr_t HeroRankingManagerComponentClass = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PerTeamRuntimeRankData", 0xD0, "StructProperty"},
            {"Ranks", 0x130, "ArrayProperty"},
            {"HeroRankingManagerComponentClass", 0x140, "ClassProperty"},
        }};
    };

    struct CherrySmokeHeroRankingManager
    {
        static constexpr std::string_view Name = "CherrySmokeHeroRankingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFrameworkComponent_ContextualReactions";
        struct Offsets
        {
            static constexpr std::uintptr_t OnHeroRankChangedEvent = 0x158;
            static constexpr std::uintptr_t OnHeroPointsChangedEvent = 0x168;
            static constexpr std::uintptr_t OnHeroPointsEarnedEvent = 0x178;
            static constexpr std::uintptr_t OnMultiplierChangedEvent = 0x188;
            static constexpr std::uintptr_t OnMultiplierEndedEvent = 0x198;
            static constexpr std::uintptr_t MaxMultiplier = 0x1A8;
            static constexpr std::uintptr_t ActiveMultiplier = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OnHeroRankChangedEvent", 0x158, "MulticastInlineDelegateProperty"},
            {"OnHeroPointsChangedEvent", 0x168, "MulticastInlineDelegateProperty"},
            {"OnHeroPointsEarnedEvent", 0x178, "MulticastInlineDelegateProperty"},
            {"OnMultiplierChangedEvent", 0x188, "MulticastInlineDelegateProperty"},
            {"OnMultiplierEndedEvent", 0x198, "MulticastInlineDelegateProperty"},
            {"MaxMultiplier", 0x1A8, "StructProperty"},
            {"ActiveMultiplier", 0x1D0, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_HeroRankingDiscoverables
    {
        static constexpr std::string_view Name = "FortQueryGenerator_HeroRankingDiscoverables";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct FortQueryTest_HeroRank
    {
        static constexpr std::string_view Name = "FortQueryTest_HeroRank";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextPlayer = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextPlayer", 0x1F8, "ClassProperty"},
        }};
    };

    struct HeroRankingUnlockableInterface
    {
        static constexpr std::string_view Name = "HeroRankingUnlockableInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
