#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpriteExtractionFrontendUI
{
    struct ExtractableFTUEViewModel
    {
        static constexpr std::string_view Name = "ExtractableFTUEViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowFTUE = 0x78;
            static constexpr std::uintptr_t AllStarters = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShowFTUE", 0x78, "BoolProperty"},
            {"AllStarters", 0x80, "ArrayProperty"},
        }};
    };

    struct ExtractableItemPreviewActor
    {
        static constexpr std::string_view Name = "ExtractableItemPreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x294;
            static constexpr std::uintptr_t OffsetAngleDegrees = 0x298;
            static constexpr std::uintptr_t MultiItem_ItemHeight = 0x29C;
            static constexpr std::uintptr_t MultiItem_ItemWidth = 0x2A0;
            static constexpr std::uintptr_t MultiItem_ZOffsetFromPedestal = 0x2A4;
            static constexpr std::uintptr_t SkeletalMeshComponents = 0x2A8;
            static constexpr std::uintptr_t StaticMeshComponents = 0x2B8;
            static constexpr std::uintptr_t AuraNiagaraComponents = 0x2C8;
            static constexpr std::uintptr_t UniqueNiagaraComponents = 0x2D8;
            static constexpr std::uintptr_t SoundLibraryComponent = 0x2E8;
            static constexpr std::uintptr_t ItemHeight = 0x2F0;
            static constexpr std::uintptr_t ItemWidth = 0x2F4;
            static constexpr std::uintptr_t ZOffsetFromPedestal = 0x2F8;
            static constexpr std::uintptr_t PreviewMeshMarginScale = 0x2FC;
            static constexpr std::uintptr_t InitialRotation = 0x300;
            static constexpr std::uintptr_t NavAnim_Duration = 0x318;
            static constexpr std::uintptr_t NavAnim_TimeStep = 0x31C;
            static constexpr std::uintptr_t NavAnim_EasingCurve = 0x320;
            static constexpr std::uintptr_t ItemDefinitions = 0x328;
            static constexpr std::uintptr_t ActorBounds = 0x338;
            static constexpr std::uintptr_t MaterialInstances = 0x348;
            static constexpr std::uintptr_t ActiveSoundLibraries = 0x370;
            static constexpr std::uintptr_t AuraNiagaraSystem = 0x380;
            static constexpr std::uintptr_t ActiveIdleAnimations = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"Radius", 0x294, "FloatProperty"},
            {"OffsetAngleDegrees", 0x298, "FloatProperty"},
            {"MultiItem_ItemHeight", 0x29C, "FloatProperty"},
            {"MultiItem_ItemWidth", 0x2A0, "FloatProperty"},
            {"MultiItem_ZOffsetFromPedestal", 0x2A4, "FloatProperty"},
            {"SkeletalMeshComponents", 0x2A8, "ArrayProperty"},
            {"StaticMeshComponents", 0x2B8, "ArrayProperty"},
            {"AuraNiagaraComponents", 0x2C8, "ArrayProperty"},
            {"UniqueNiagaraComponents", 0x2D8, "ArrayProperty"},
            {"SoundLibraryComponent", 0x2E8, "ObjectProperty"},
            {"ItemHeight", 0x2F0, "FloatProperty"},
            {"ItemWidth", 0x2F4, "FloatProperty"},
            {"ZOffsetFromPedestal", 0x2F8, "FloatProperty"},
            {"PreviewMeshMarginScale", 0x2FC, "FloatProperty"},
            {"InitialRotation", 0x300, "StructProperty"},
            {"NavAnim_Duration", 0x318, "FloatProperty"},
            {"NavAnim_TimeStep", 0x31C, "FloatProperty"},
            {"NavAnim_EasingCurve", 0x320, "ObjectProperty"},
            {"ItemDefinitions", 0x328, "ArrayProperty"},
            {"ActorBounds", 0x338, "ArrayProperty"},
            {"MaterialInstances", 0x348, "ArrayProperty"},
            {"ActiveSoundLibraries", 0x370, "ArrayProperty"},
            {"AuraNiagaraSystem", 0x380, "ObjectProperty"},
            {"ActiveIdleAnimations", 0x388, "ArrayProperty"},
        }};
    };

    struct ExtractableItemPreviewOffPawnActor
    {
        static constexpr std::string_view Name = "ExtractableItemPreviewOffPawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewOffPawnActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewActorComponent = 0x4C0;
            static constexpr std::uintptr_t ChildPreviewActor = 0x4C8;
            static constexpr std::uintptr_t PreviewStaticMeshComponent = 0x4D0;
            static constexpr std::uintptr_t PreviewSkelMeshComponent = 0x4D8;
            static constexpr std::uintptr_t DefaultPreviewActorClass = 0x4E0;
            static constexpr std::uintptr_t bAllowPivotLocationOffsetOnPreviewChildActor = 0x4E8;
            static constexpr std::uintptr_t LoadedItemPreviewAssets = 0x4F0;
            static constexpr std::uintptr_t GliderSpawnComponent = 0x500;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreviewActorComponent", 0x4C0, "ObjectProperty"},
            {"ChildPreviewActor", 0x4C8, "ObjectProperty"},
            {"PreviewStaticMeshComponent", 0x4D0, "ObjectProperty"},
            {"PreviewSkelMeshComponent", 0x4D8, "ObjectProperty"},
            {"DefaultPreviewActorClass", 0x4E0, "ClassProperty"},
            {"bAllowPivotLocationOffsetOnPreviewChildActor", 0x4E8, "BoolProperty"},
            {"LoadedItemPreviewAssets", 0x4F0, "ArrayProperty"},
            {"GliderSpawnComponent", 0x500, "ObjectProperty"},
        }};
    };

    struct ExtractableItemPreviewWidget
    {
        static constexpr std::string_view Name = "ExtractableItemPreviewWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPreviewWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalItemVMs = 0x8E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AdditionalItemVMs", 0x8E0, "ArrayProperty"},
        }};
    };

    struct ExtractionFriendVM
    {
        static constexpr std::string_view Name = "ExtractionFriendVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x78;
            static constexpr std::uintptr_t AvatarTexture = 0x88;
            static constexpr std::uintptr_t ProgressValue = 0x90;
            static constexpr std::uintptr_t Placement = 0x94;
            static constexpr std::uintptr_t bIsLocalPlayer = 0x98;
            static constexpr std::uintptr_t PlayerAvatar = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisplayName", 0x78, "TextProperty"},
            {"AvatarTexture", 0x88, "ObjectProperty"},
            {"ProgressValue", 0x90, "IntProperty"},
            {"Placement", 0x94, "IntProperty"},
            {"bIsLocalPlayer", 0x98, "BoolProperty"},
            {"PlayerAvatar", 0xA0, "ObjectProperty"},
        }};
    };

    struct ExtractionFriendsProgressionVM
    {
        static constexpr std::string_view Name = "ExtractionFriendsProgressionVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FriendVMs = 0x68;
            static constexpr std::uintptr_t LocalPlayerVM = 0x78;
            static constexpr std::uintptr_t MaxFriendsDisplayed = 0x80;
            static constexpr std::uintptr_t LeaderboardGameId = 0x88;
            static constexpr std::uintptr_t LeaderboardEventId = 0x98;
            static constexpr std::uintptr_t LeaderboardWindowId = 0xA8;
            static constexpr std::uintptr_t LeaderboardTrackedStat = 0xB8;
            static constexpr std::uintptr_t RequestingPlayer = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FriendVMs", 0x68, "ArrayProperty"},
            {"LocalPlayerVM", 0x78, "ObjectProperty"},
            {"MaxFriendsDisplayed", 0x80, "IntProperty"},
            {"LeaderboardGameId", 0x88, "StrProperty"},
            {"LeaderboardEventId", 0x98, "StrProperty"},
            {"LeaderboardWindowId", 0xA8, "StrProperty"},
            {"LeaderboardTrackedStat", 0xB8, "StrProperty"},
            {"RequestingPlayer", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct ExtractionProgressionScreen
    {
        static constexpr std::string_view Name = "ExtractionProgressionScreen";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonActivatableWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t NextBundleDate = 0x4A0;
            static constexpr std::uintptr_t TrackedMasteryTokenName = 0x4A8;
            static constexpr std::uintptr_t ProgressionScheduleTemplateId = 0x4B8;
            static constexpr std::uintptr_t CachedPunchCardVMs = 0x4D0;
            static constexpr std::uintptr_t CachedChallengeBundles = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NextBundleDate", 0x4A0, "StructProperty"},
            {"TrackedMasteryTokenName", 0x4A8, "StrProperty"},
            {"ProgressionScheduleTemplateId", 0x4B8, "StrProperty"},
            {"CachedPunchCardVMs", 0x4D0, "ArrayProperty"},
            {"CachedChallengeBundles", 0x4E0, "ArrayProperty"},
        }};
    };

}
