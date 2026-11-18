#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VictoryCrownsRuntime
{
    struct FortCheatManager_VictoryCrowns
    {
        static constexpr std::string_view Name = "FortCheatManager_VictoryCrowns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortControllerComponent_VictoryCrowns
    {
        static constexpr std::string_view Name = "FortControllerComponent_VictoryCrowns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnVictoryCrownStatusChanged = 0xD0;
            static constexpr std::uintptr_t CrownInventoryItemClass = 0x110;
            static constexpr std::uintptr_t bWonCrownInMatch = 0x130;
            static constexpr std::uintptr_t bWonRoyalRoyale = 0x131;
            static constexpr std::uintptr_t VictoryCrownAccountItemDefinition = 0x138;
            static constexpr std::uintptr_t RoyalRoyaleEmoteItemDefinition = 0x140;
            static constexpr std::uintptr_t VictoryCrownPlaylistData = 0x160;
            static constexpr std::uintptr_t RoyalRoyaleVerbTag = 0x168;
            static constexpr std::uintptr_t VictoryCrownAccountData = 0x16C;
            static constexpr std::uintptr_t InitialGrantDelay = 0x180;
            static constexpr std::uintptr_t bKillFeedBroadcastReady = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnVictoryCrownStatusChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"CrownInventoryItemClass", 0x110, "SoftObjectProperty"},
            {"bWonCrownInMatch", 0x130, "BoolProperty"},
            {"bWonRoyalRoyale", 0x131, "BoolProperty"},
            {"VictoryCrownAccountItemDefinition", 0x138, "ObjectProperty"},
            {"RoyalRoyaleEmoteItemDefinition", 0x140, "SoftObjectProperty"},
            {"VictoryCrownPlaylistData", 0x160, "ObjectProperty"},
            {"RoyalRoyaleVerbTag", 0x168, "StructProperty"},
            {"VictoryCrownAccountData", 0x16C, "StructProperty"},
            {"InitialGrantDelay", 0x180, "StructProperty"},
            {"bKillFeedBroadcastReady", 0x1D8, "BoolProperty"},
        }};
    };

    struct FortGameStateComponent_VictoryCrowns
    {
        static constexpr std::string_view Name = "FortGameStateComponent_VictoryCrowns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CrownBearerPlayerStates = 0xC0;
            static constexpr std::uintptr_t KillFeedFormat_Dropped = 0xE0;
            static constexpr std::uintptr_t KillFeedFormat_PickedUp = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CrownBearerPlayerStates", 0xC0, "ArrayProperty"},
            {"KillFeedFormat_Dropped", 0xE0, "TextProperty"},
            {"KillFeedFormat_PickedUp", 0xF0, "TextProperty"},
        }};
    };

    struct FortPlayerStateComponent_VictoryCrowns
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_VictoryCrowns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasWonRoyalRoyale = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHasWonRoyalRoyale", 0xC0, "BoolProperty"},
        }};
    };

    struct FortVictoryCrownViewModel
    {
        static constexpr std::string_view Name = "FortVictoryCrownViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BestowedCount = 0x68;
            static constexpr std::uintptr_t bHasWonRoyalRoyale = 0x6C;
            static constexpr std::uintptr_t BoundVictoryCrownsComponent = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BestowedCount", 0x68, "IntProperty"},
            {"bHasWonRoyalRoyale", 0x6C, "BoolProperty"},
            {"BoundVictoryCrownsComponent", 0x70, "WeakObjectProperty"},
        }};
    };

    struct VictoryCrownPersistenceProvider
    {
        static constexpr std::string_view Name = "VictoryCrownPersistenceProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VictoryCrownPersistenceProviderSubsystem
    {
        static constexpr std::string_view Name = "VictoryCrownPersistenceProviderSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredProvider = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredProvider", 0x38, "InterfaceProperty"},
        }};
    };

}
