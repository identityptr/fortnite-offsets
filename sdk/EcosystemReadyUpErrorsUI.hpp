#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EcosystemReadyUpErrorsUI
{
    struct BaseDownloadErrorUI
    {
        static constexpr std::string_view Name = "BaseDownloadErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct BaseMatchmakingGroupErrorUI
    {
        static constexpr std::string_view Name = "BaseMatchmakingGroupErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct BaseRegionErrorUI
    {
        static constexpr std::string_view Name = "BaseRegionErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct BaseRequiresDownloadErrorUI
    {
        static constexpr std::string_view Name = "BaseRequiresDownloadErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct BaseTournamentLockErrorUI
    {
        static constexpr std::string_view Name = "BaseTournamentLockErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct CannotUseWhileLookingForPartyUI
    {
        static constexpr std::string_view Name = "CannotUseWhileLookingForPartyUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct CannotUseWhileUsingPartySignalUI
    {
        static constexpr std::string_view Name = "CannotUseWhileUsingPartySignalUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct ContentGatedUI
    {
        static constexpr std::string_view Name = "ContentGatedUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct CrossplayReadyUpErrorUI
    {
        static constexpr std::string_view Name = "CrossplayReadyUpErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct EULAErrorUI
    {
        static constexpr std::string_view Name = "EULAErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t TitleOverride = 0xE8;
            static constexpr std::uintptr_t EulaModal = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TitleOverride", 0xE8, "TextProperty"},
            {"EulaModal", 0xF8, "SoftClassProperty"},
        }};
    };

    struct FetchingIslandUI
    {
        static constexpr std::string_view Name = "FetchingIslandUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct GeneralBanUI
    {
        static constexpr std::string_view Name = "GeneralBanUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TimedErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct IneligibleEventErrorUI
    {
        static constexpr std::string_view Name = "IneligibleEventErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct IsDownloadQueuedUI
    {
        static constexpr std::string_view Name = "IsDownloadQueuedUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct IsDownloadingUI
    {
        static constexpr std::string_view Name = "IsDownloadingUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct IsLoadingBuiltInGFPsUI
    {
        static constexpr std::string_view Name = "IsLoadingBuiltInGFPsUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct IsPreDownloadingUI
    {
        static constexpr std::string_view Name = "IsPreDownloadingUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct LocalPartyMemberSittingOutUI
    {
        static constexpr std::string_view Name = "LocalPartyMemberSittingOutUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct NotAvailableInSplitScreenErrorUI
    {
        static constexpr std::string_view Name = "NotAvailableInSplitScreenErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct NotEnoughPartyMembersUI
    {
        static constexpr std::string_view Name = "NotEnoughPartyMembersUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct NotEnoughPlayersForPrivateUI
    {
        static constexpr std::string_view Name = "NotEnoughPlayersForPrivateUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct PlayersNotQualifiedErrorUI
    {
        static constexpr std::string_view Name = "PlayersNotQualifiedErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct QuestErrorUI
    {
        static constexpr std::string_view Name = "QuestErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct RequiresInstallUI
    {
        static constexpr std::string_view Name = "RequiresInstallUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseRequiresDownloadErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct RequiresPreDownloadUI
    {
        static constexpr std::string_view Name = "RequiresPreDownloadUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct RequiresUpdateUI
    {
        static constexpr std::string_view Name = "RequiresUpdateUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseRequiresDownloadErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct STWGeneralErrorUI
    {
        static constexpr std::string_view Name = "STWGeneralErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t CampaignModal = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CampaignModal", 0xE8, "SoftClassProperty"},
        }};
    };

    struct STWRequiresFrontendErrorUI
    {
        static constexpr std::string_view Name = "STWRequiresFrontendErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct TimedErrorUI
    {
        static constexpr std::string_view Name = "TimedErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct TooManyPartyMembersForFillUI
    {
        static constexpr std::string_view Name = "TooManyPartyMembersForFillUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct TooManyPartyMembersUI
    {
        static constexpr std::string_view Name = "TooManyPartyMembersUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct TooManySplitscreenMembersUI
    {
        static constexpr std::string_view Name = "TooManySplitscreenMembersUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct TournamentLockedByAccountErrorUI
    {
        static constexpr std::string_view Name = "TournamentLockedByAccountErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseTournamentLockErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct TournamentLockedByRegionUI
    {
        static constexpr std::string_view Name = "TournamentLockedByRegionUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseTournamentLockErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct TournamentLockedByTeamErrorUI
    {
        static constexpr std::string_view Name = "TournamentLockedByTeamErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseTournamentLockErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct TournamentRequiresMFAErrorUI
    {
        static constexpr std::string_view Name = "TournamentRequiresMFAErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ReadyUpErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t MfaModalClass = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MfaModalClass", 0xE8, "SoftClassProperty"},
        }};
    };

    struct UnusableRegionUI
    {
        static constexpr std::string_view Name = "UnusableRegionUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseRegionErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

    struct WorldOwnerMustBePartyLeaderErrorUI
    {
        static constexpr std::string_view Name = "WorldOwnerMustBePartyLeaderErrorUI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseMatchmakingGroupErrorUI";
        struct Offsets
        {
            static constexpr std::uintptr_t ErrorMessage = 0x28;
            static constexpr std::uintptr_t Icon = 0x40;
            static constexpr std::uintptr_t PlayButtonTextOverride = 0x48;
            static constexpr std::uintptr_t PlayButtonSubtitle = 0x58;
            static constexpr std::uintptr_t SecondaryButtonTextOverride = 0x68;
            static constexpr std::uintptr_t bImpliesReadyUp = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ErrorMessage", 0x28, "StructProperty"},
            {"Icon", 0x40, "ObjectProperty"},
            {"PlayButtonTextOverride", 0x48, "TextProperty"},
            {"PlayButtonSubtitle", 0x58, "TextProperty"},
            {"SecondaryButtonTextOverride", 0x68, "TextProperty"},
            {"bImpliesReadyUp", 0x78, "BoolProperty"},
        }};
    };

}
