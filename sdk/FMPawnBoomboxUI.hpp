#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMPawnBoomboxUI
{
    struct BoomboxEmoteWheelOverlay
    {
        static constexpr std::string_view Name = "BoomboxEmoteWheelOverlay";
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

    struct PawnBoomboxUIManager
    {
        static constexpr std::string_view Name = "PawnBoomboxUIManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneToAdd = 0xC0;
            static constexpr std::uintptr_t BoomboxPlayingTag = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SceneToAdd", 0xC0, "ObjectProperty"},
            {"BoomboxPlayingTag", 0xCC, "StructProperty"},
        }};
    };

    struct PawnBoomboxVM
    {
        static constexpr std::string_view Name = "PawnBoomboxVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsPlaying = 0x78;
            static constexpr std::uintptr_t bIsLocalPlayerBoomboxPlaying = 0x79;
            static constexpr std::uintptr_t bDoesBoomboxUserHaveActiveSong = 0x7A;
            static constexpr std::uintptr_t SongArtist = 0x80;
            static constexpr std::uintptr_t SongTitle = 0x90;
            static constexpr std::uintptr_t bOwnerHasBoomboxPlayingTag = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsPlaying", 0x78, "BoolProperty"},
            {"bIsLocalPlayerBoomboxPlaying", 0x79, "BoolProperty"},
            {"bDoesBoomboxUserHaveActiveSong", 0x7A, "BoolProperty"},
            {"SongArtist", 0x80, "TextProperty"},
            {"SongTitle", 0x90, "TextProperty"},
            {"bOwnerHasBoomboxPlayingTag", 0xA0, "BoolProperty"},
        }};
    };

}
