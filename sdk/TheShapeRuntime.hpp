#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TheShapeRuntime
{
    struct FortGameFrameworkComponent_PlayspaceContextualReactions
    {
        static constexpr std::string_view Name = "FortGameFrameworkComponent_PlayspaceContextualReactions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFrameworkComponent_ContextualReactions";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactionsDataRegistry = 0xD8;
            static constexpr std::uintptr_t AnalyticFlushFrequencyInSeconds = 0x108;
            static constexpr std::uintptr_t bApplyReactionToParticipants = 0x10C;
            static constexpr std::uintptr_t LoadedDataTable = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ReactionsDataRegistry", 0xD8, "StructProperty"},
            {"AnalyticFlushFrequencyInSeconds", 0x108, "FloatProperty"},
            {"bApplyReactionToParticipants", 0x10C, "BoolProperty"},
            {"LoadedDataTable", 0x150, "ObjectProperty"},
        }};
    };

    struct TheShapeGameplayVolume
    {
        static constexpr std::string_view Name = "TheShapeGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t RelevantPlayer = 0x340;
            static constexpr std::uintptr_t NextLookAtPlayerServerTimestamp = 0x348;
            static constexpr std::uintptr_t PlayerRelevancyMaxTime = 0x350;
            static constexpr std::uintptr_t ChangingRelevantPlayerRotationFaceSpeed = 0x378;
            static constexpr std::uintptr_t ChangingRelevantPlayerRotationPupilSpeed = 0x3A0;
            static constexpr std::uintptr_t FollowRelevantPlayerFaceSpeed = 0x3C8;
            static constexpr std::uintptr_t FollowRelevantPlayerPupilSpeed = 0x3F0;
            static constexpr std::uintptr_t AngularDistanceToStartFollowing = 0x418;
            static constexpr std::uintptr_t AngularDistanceToStopFollowing = 0x440;
            static constexpr std::uintptr_t MaxPitchAllowedOnSnapDown = 0x468;
            static constexpr std::uintptr_t MinPitchAllowedOnSnapDown = 0x490;
            static constexpr std::uintptr_t FollowRelevantPlayerFrequency = 0x4B8;
            static constexpr std::uintptr_t CheckDistanceToFollowFrequency = 0x4E0;
            static constexpr std::uintptr_t ReactionsDuration = 0x508;
            static constexpr std::uintptr_t IndividualReactionsCooldown = 0x530;
            static constexpr std::uintptr_t LatestReactionsTime = 0x540;
            static constexpr std::uintptr_t ActorLocalCenter = 0x550;
            static constexpr std::uintptr_t PlayersInPOITag = 0x568;
            static constexpr std::uintptr_t ReactionsMaterials = 0x570;
            static constexpr std::uintptr_t RescuedDataLayer = 0x580;
            static constexpr std::uintptr_t StyleTag = 0x5A0;
            static constexpr std::uintptr_t RescuedShapeActivating = 0x5A4;
            static constexpr std::uintptr_t BuildingMesh = 0x5C0;
            static constexpr std::uintptr_t WaitForPlayspaceRouterAsyncAction = 0x730;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"RelevantPlayer", 0x340, "ObjectProperty"},
            {"NextLookAtPlayerServerTimestamp", 0x348, "DoubleProperty"},
            {"PlayerRelevancyMaxTime", 0x350, "StructProperty"},
            {"ChangingRelevantPlayerRotationFaceSpeed", 0x378, "StructProperty"},
            {"ChangingRelevantPlayerRotationPupilSpeed", 0x3A0, "StructProperty"},
            {"FollowRelevantPlayerFaceSpeed", 0x3C8, "StructProperty"},
            {"FollowRelevantPlayerPupilSpeed", 0x3F0, "StructProperty"},
            {"AngularDistanceToStartFollowing", 0x418, "StructProperty"},
            {"AngularDistanceToStopFollowing", 0x440, "StructProperty"},
            {"MaxPitchAllowedOnSnapDown", 0x468, "StructProperty"},
            {"MinPitchAllowedOnSnapDown", 0x490, "StructProperty"},
            {"FollowRelevantPlayerFrequency", 0x4B8, "StructProperty"},
            {"CheckDistanceToFollowFrequency", 0x4E0, "StructProperty"},
            {"ReactionsDuration", 0x508, "StructProperty"},
            {"IndividualReactionsCooldown", 0x530, "MapProperty"},
            {"LatestReactionsTime", 0x540, "MapProperty"},
            {"ActorLocalCenter", 0x550, "StructProperty"},
            {"PlayersInPOITag", 0x568, "StructProperty"},
            {"ReactionsMaterials", 0x570, "MapProperty"},
            {"RescuedDataLayer", 0x580, "SoftObjectProperty"},
            {"StyleTag", 0x5A0, "StructProperty"},
            {"RescuedShapeActivating", 0x5A4, "BoolProperty"},
            {"BuildingMesh", 0x5C0, "ObjectProperty"},
            {"WaitForPlayspaceRouterAsyncAction", 0x730, "ObjectProperty"},
        }};
    };

    struct TheShapePrioritizerConfig
    {
        static constexpr std::string_view Name = "TheShapePrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SphereNetObjectPrioritizerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerRadius = 0x28;
            static constexpr std::uintptr_t OuterRadius = 0x2C;
            static constexpr std::uintptr_t InnerPriority = 0x30;
            static constexpr std::uintptr_t OuterPriority = 0x34;
            static constexpr std::uintptr_t OutsidePriority = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InnerRadius", 0x28, "FloatProperty"},
            {"OuterRadius", 0x2C, "FloatProperty"},
            {"InnerPriority", 0x30, "FloatProperty"},
            {"OuterPriority", 0x34, "FloatProperty"},
            {"OutsidePriority", 0x38, "FloatProperty"},
        }};
    };

}
