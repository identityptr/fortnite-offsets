#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpireBossRuntime
{
    struct MajorSpire
    {
        static constexpr std::string_view Name = "MajorSpire";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t InherentAbilitySets = 0x6D8;
            static constexpr std::uintptr_t DamageStatHandle = 0x700;
            static constexpr std::uintptr_t bAllowRidingOnActor = 0x710;
            static constexpr std::uintptr_t OnProximityPulseDelegate = 0x718;
            static constexpr std::uintptr_t OnProximityPrePulseDelegate = 0x728;
            static constexpr std::uintptr_t OnProximityEffectsAppliedDelegate = 0x738;
            static constexpr std::uintptr_t OnDeliverableAbilityInfoAppliedToTouchingActor = 0x748;
            static constexpr std::uintptr_t OnDeliverableAbilityInfoChangedForExitingTouchActor = 0x758;
            static constexpr std::uintptr_t OnDidDamage = 0x768;
            static constexpr std::uintptr_t bIgnoreInstigatorCollision = 0x778;
            static constexpr std::uintptr_t bAddOwnerVelocity = 0x779;
            static constexpr std::uintptr_t AbilitySourceLevel = 0x77C;
            static constexpr std::uintptr_t DeliverableAbilityInfo = 0x780;
            static constexpr std::uintptr_t bApplyDefaultEnabledAbilityBucketsOnInit = 0x830;
            static constexpr std::uintptr_t bBlockMarking = 0x830;
            static constexpr std::uintptr_t bCanBeMarked = 0x830;
            static constexpr std::uintptr_t bShowInteractKeybind = 0x830;
            static constexpr std::uintptr_t bUseSimpleActorTouchSetupForAbilityBuckets = 0x830;
            static constexpr std::uintptr_t MarkerDisplay = 0x838;
            static constexpr std::uintptr_t MarkerPositionOffset = 0x8E8;
            static constexpr std::uintptr_t RegisteredTouchComponent = 0x900;
            static constexpr std::uintptr_t AnalyticsTags = 0x910;
            static constexpr std::uintptr_t PostProcessOverlapBlendWeight = 0x930;
            static constexpr std::uintptr_t CustomInteractionWidget = 0x938;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"InherentAbilitySets", 0x6D8, "ObjectProperty"},
            {"DamageStatHandle", 0x700, "StructProperty"},
            {"bAllowRidingOnActor", 0x710, "BoolProperty"},
            {"OnProximityPulseDelegate", 0x718, "MulticastInlineDelegateProperty"},
            {"OnProximityPrePulseDelegate", 0x728, "MulticastInlineDelegateProperty"},
            {"OnProximityEffectsAppliedDelegate", 0x738, "MulticastInlineDelegateProperty"},
            {"OnDeliverableAbilityInfoAppliedToTouchingActor", 0x748, "MulticastInlineDelegateProperty"},
            {"OnDeliverableAbilityInfoChangedForExitingTouchActor", 0x758, "MulticastInlineDelegateProperty"},
            {"OnDidDamage", 0x768, "MulticastInlineDelegateProperty"},
            {"bIgnoreInstigatorCollision", 0x778, "BoolProperty"},
            {"bAddOwnerVelocity", 0x779, "BoolProperty"},
            {"AbilitySourceLevel", 0x77C, "IntProperty"},
            {"DeliverableAbilityInfo", 0x780, "StructProperty"},
            {"bApplyDefaultEnabledAbilityBucketsOnInit", 0x830, "BoolProperty"},
            {"bBlockMarking", 0x830, "BoolProperty"},
            {"bCanBeMarked", 0x830, "BoolProperty"},
            {"bShowInteractKeybind", 0x830, "BoolProperty"},
            {"bUseSimpleActorTouchSetupForAbilityBuckets", 0x830, "BoolProperty"},
            {"MarkerDisplay", 0x838, "StructProperty"},
            {"MarkerPositionOffset", 0x8E8, "StructProperty"},
            {"RegisteredTouchComponent", 0x900, "ObjectProperty"},
            {"AnalyticsTags", 0x910, "StructProperty"},
            {"PostProcessOverlapBlendWeight", 0x930, "FloatProperty"},
            {"CustomInteractionWidget", 0x938, "ObjectProperty"},
        }};
    };

    struct MajorSpireGameplayComponent
    {
        static constexpr std::string_view Name = "MajorSpireGameplayComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateChangedEvent = 0xC0;
            static constexpr std::uintptr_t OnStateTransitionedEvent = 0xD0;
            static constexpr std::uintptr_t CurrentState = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnStateChangedEvent", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnStateTransitionedEvent", 0xD0, "MulticastInlineDelegateProperty"},
            {"CurrentState", 0xE0, "StructProperty"},
        }};
    };

    struct SpireBossAnimInstance
    {
        static constexpr std::string_view Name = "SpireBossAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BeamKnockbackDirection = 0x4A0;
            static constexpr std::uintptr_t ShardPitchAngle = 0x4B8;
            static constexpr std::uintptr_t WindupBeamYaw = 0x4BC;
            static constexpr std::uintptr_t CurrentBeamYaw = 0x4C0;
            static constexpr std::uintptr_t CurrentBeamPitch = 0x4C4;
            static constexpr std::uintptr_t MaskLookDirection = 0x4C8;
            static constexpr std::uintptr_t bBeamAttackLoopActive = 0x4D0;
            static constexpr std::uintptr_t bBeamSweepActive = 0x4D1;
            static constexpr std::uintptr_t BeamAdditivePitchAlpha = 0x4D4;
            static constexpr std::uintptr_t BeamPitchAOAlpha = 0x4D8;
            static constexpr std::uintptr_t bAppendageFrontLeft = 0x4DC;
            static constexpr std::uintptr_t bAppendageFrontRight = 0x4DD;
            static constexpr std::uintptr_t bAppendageBack = 0x4DE;
            static constexpr std::uintptr_t bAppendageSlamActive = 0x4DF;
            static constexpr std::uintptr_t bEnableProceduralAdjustments = 0x4E0;
            static constexpr std::uintptr_t bApplyBeamAdditive = 0x4E1;
            static constexpr std::uintptr_t bHasPlayedAdditive = 0x4E2;
            static constexpr std::uintptr_t HorizontalKnockbackDistance = 0x4E4;
            static constexpr std::uintptr_t VerticalKnockbackDistance = 0x4E8;
            static constexpr std::uintptr_t MaskBeamInterpSpeed = 0x4EC;
            static constexpr std::uintptr_t BeamSweepTag = 0x4F0;
            static constexpr std::uintptr_t AppendageSlamTag = 0x4F4;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"BeamKnockbackDirection", 0x4A0, "StructProperty"},
            {"ShardPitchAngle", 0x4B8, "FloatProperty"},
            {"WindupBeamYaw", 0x4BC, "FloatProperty"},
            {"CurrentBeamYaw", 0x4C0, "FloatProperty"},
            {"CurrentBeamPitch", 0x4C4, "FloatProperty"},
            {"MaskLookDirection", 0x4C8, "DoubleProperty"},
            {"bBeamAttackLoopActive", 0x4D0, "BoolProperty"},
            {"bBeamSweepActive", 0x4D1, "BoolProperty"},
            {"BeamAdditivePitchAlpha", 0x4D4, "FloatProperty"},
            {"BeamPitchAOAlpha", 0x4D8, "FloatProperty"},
            {"bAppendageFrontLeft", 0x4DC, "BoolProperty"},
            {"bAppendageFrontRight", 0x4DD, "BoolProperty"},
            {"bAppendageBack", 0x4DE, "BoolProperty"},
            {"bAppendageSlamActive", 0x4DF, "BoolProperty"},
            {"bEnableProceduralAdjustments", 0x4E0, "BoolProperty"},
            {"bApplyBeamAdditive", 0x4E1, "BoolProperty"},
            {"bHasPlayedAdditive", 0x4E2, "BoolProperty"},
            {"HorizontalKnockbackDistance", 0x4E4, "FloatProperty"},
            {"VerticalKnockbackDistance", 0x4E8, "FloatProperty"},
            {"MaskBeamInterpSpeed", 0x4EC, "FloatProperty"},
            {"BeamSweepTag", 0x4F0, "StructProperty"},
            {"AppendageSlamTag", 0x4F4, "StructProperty"},
        }};
    };

    struct SpireBossAnimationInterface
    {
        static constexpr std::string_view Name = "SpireBossAnimationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpiresAnalyticsComponent
    {
        static constexpr std::string_view Name = "SpiresAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsMajorSpire = 0xC0;
            static constexpr std::uintptr_t bHasBeenDamaged = 0xC1;
            static constexpr std::uintptr_t SpireLocation = 0xC8;
            static constexpr std::uintptr_t SpireFirstDamagedTime = 0xE0;
            static constexpr std::uintptr_t SpireDestroyedTime = 0xE4;
            static constexpr std::uintptr_t SpireDamageReceived = 0xE8;
            static constexpr std::uintptr_t SpireDamageDealtToPlayers = 0xEC;
            static constexpr std::uintptr_t NumGuardsSpawned = 0xF0;
            static constexpr std::uintptr_t NumGuardsEliminated = 0xF4;
            static constexpr std::uintptr_t SpireWeakspotHits = 0xF8;
            static constexpr std::uintptr_t DestroyerPlayerAccountID = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bIsMajorSpire", 0xC0, "BoolProperty"},
            {"bHasBeenDamaged", 0xC1, "BoolProperty"},
            {"SpireLocation", 0xC8, "StructProperty"},
            {"SpireFirstDamagedTime", 0xE0, "FloatProperty"},
            {"SpireDestroyedTime", 0xE4, "FloatProperty"},
            {"SpireDamageReceived", 0xE8, "FloatProperty"},
            {"SpireDamageDealtToPlayers", 0xEC, "FloatProperty"},
            {"NumGuardsSpawned", 0xF0, "IntProperty"},
            {"NumGuardsEliminated", 0xF4, "IntProperty"},
            {"SpireWeakspotHits", 0xF8, "IntProperty"},
            {"DestroyerPlayerAccountID", 0x100, "StrProperty"},
        }};
    };

}
