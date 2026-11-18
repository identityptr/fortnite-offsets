#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DeluluRuntime
{
    struct Delulu_AnalyticsComponent
    {
        static constexpr std::string_view Name = "Delulu_AnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GamePhaseUpdatedEventHandle = 0xC0;
            static constexpr std::uintptr_t CachedAdHocMutator = 0xDC;
            static constexpr std::uintptr_t IsMutatorEventBound = 0xE4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GamePhaseUpdatedEventHandle", 0xC0, "StructProperty"},
            {"CachedAdHocMutator", 0xDC, "WeakObjectProperty"},
            {"IsMutatorEventBound", 0xE4, "BoolProperty"},
        }};
    };

    struct FortAthenaMutator_DeluluDBNO
    {
        static constexpr std::string_view Name = "FortAthenaMutator_DeluluDBNO";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowSoloDBNO = 0x2E8;
            static constexpr std::uintptr_t AllowInterrogation = 0x310;
            static constexpr std::uintptr_t AllowLastManStanding = 0x338;
            static constexpr std::uintptr_t AllowAnyoneToRevive = 0x360;
            static constexpr std::uintptr_t AllowRespawning = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AllowSoloDBNO", 0x2E8, "StructProperty"},
            {"AllowInterrogation", 0x310, "StructProperty"},
            {"AllowLastManStanding", 0x338, "StructProperty"},
            {"AllowAnyoneToRevive", 0x360, "StructProperty"},
            {"AllowRespawning", 0x388, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_DeluluSquadInfo
    {
        static constexpr std::string_view Name = "FortAthenaMutator_DeluluSquadInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t AlwaysDisplaySquadInfo = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AlwaysDisplaySquadInfo", 0x2E8, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_DeluluWinCondition
    {
        static constexpr std::string_view Name = "FortAthenaMutator_DeluluWinCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct FortControllerComponent_DeluluGiveUp
    {
        static constexpr std::string_view Name = "FortControllerComponent_DeluluGiveUp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct FortGameStateComponent_RandomWinCondition
    {
        static constexpr std::string_view Name = "FortGameStateComponent_RandomWinCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentWinConditionPlayersRemaining = 0xC0;
            static constexpr std::uintptr_t WinConditionPlayersRemaining = 0xC8;
            static constexpr std::uintptr_t WinConditionPlayersRemainingWeights = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurrentWinConditionPlayersRemaining", 0xC0, "IntProperty"},
            {"WinConditionPlayersRemaining", 0xC8, "StructProperty"},
            {"WinConditionPlayersRemainingWeights", 0xF0, "StructProperty"},
        }};
    };

    struct UFortGameStateComponent_DeluluPlacementInfo
    {
        static constexpr std::string_view Name = "UFortGameStateComponent_DeluluPlacementInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_BattleRoyalePlacementInfo";
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

}
