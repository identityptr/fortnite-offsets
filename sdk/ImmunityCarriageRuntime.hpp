#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ImmunityCarriageRuntime
{
    struct FortAthenaMutator_ImmunityCarriage
    {
        static constexpr std::string_view Name = "FortAthenaMutator_ImmunityCarriage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator_GameModeBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ReviveInProgressTag = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReviveInProgressTag", 0x410, "StructProperty"},
        }};
    };

    struct FortAthenaVehicleSpawner_ImmunityCarriage
    {
        static constexpr std::string_view Name = "FortAthenaVehicleSpawner_ImmunityCarriage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleSpawner";
        struct Offsets
        {
            static constexpr std::uintptr_t DrivableChance = 0x310;
            static constexpr std::uintptr_t StaticFortVehicleItemDef = 0x338;
            static constexpr std::uintptr_t CachedStaticFortVehicleItemDef = 0x358;
            static constexpr std::uintptr_t bIsStaticVehicleItemDefCached = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DrivableChance", 0x310, "StructProperty"},
            {"StaticFortVehicleItemDef", 0x338, "SoftObjectProperty"},
            {"CachedStaticFortVehicleItemDef", 0x358, "ObjectProperty"},
            {"bIsStaticVehicleItemDefCached", 0x360, "BoolProperty"},
        }};
    };

    struct ImmunityCarriageFunctionLibrary
    {
        static constexpr std::string_view Name = "ImmunityCarriageFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ImmunityCarriageWorldSubsystem
    {
        static constexpr std::string_view Name = "ImmunityCarriageWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingSpawners = 0x38;
            static constexpr std::uintptr_t DrivableChance = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PendingSpawners", 0x38, "ArrayProperty"},
            {"DrivableChance", 0x48, "StructProperty"},
        }};
    };

    struct ImmunityCarriage_InteractionComponent
    {
        static constexpr std::string_view Name = "ImmunityCarriage_InteractionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowInteract = 0xD8;
            static constexpr std::uintptr_t OnPlayerPawnResurrected = 0x120;
            static constexpr std::uintptr_t OnResurrectionStarted = 0x130;
            static constexpr std::uintptr_t OnResurrectionCompleted = 0x140;
            static constexpr std::uintptr_t OnBeginCooldown = 0x150;
            static constexpr std::uintptr_t OnEndCooldown = 0x160;
            static constexpr std::uintptr_t OnSpawnMachineStateChanged = 0x170;
            static constexpr std::uintptr_t OnBeginLongUse = 0x180;
            static constexpr std::uintptr_t OnInterruptLongUse = 0x190;
            static constexpr std::uintptr_t OnSafeZoneStatusChangedEvent = 0x1A0;
            static constexpr std::uintptr_t SecondContextOverrideWidget = 0x1B0;
            static constexpr std::uintptr_t InitiatingPlayer = 0x1B8;
            static constexpr std::uintptr_t ResurrectLocation = 0x1C0;
            static constexpr std::uintptr_t PlayerIdsForResurrection = 0x1C8;
            static constexpr std::uintptr_t InstigatorPC = 0x1D8;
            static constexpr std::uintptr_t DynamicInteractionOptions = 0x1E0;
            static constexpr std::uintptr_t ActiveDynamicInteractionOptions = 0x200;
            static constexpr std::uintptr_t InteractSoundCueLoop = 0x220;
            static constexpr std::uintptr_t DescriptiveInformationText = 0x228;
            static constexpr std::uintptr_t RebootSquadText = 0x238;
            static constexpr std::uintptr_t RebootingText = 0x248;
            static constexpr std::uintptr_t RechargingText = 0x258;
            static constexpr std::uintptr_t RebootSquadMembersText = 0x268;
            static constexpr std::uintptr_t RebootSquadMembersTextFormat = 0x278;
            static constexpr std::uintptr_t FreeRebootSquadMembersTextFormat = 0x288;
            static constexpr std::uintptr_t BuySquadRebootText = 0x298;
            static constexpr std::uintptr_t NoBuybackRebootSquadMembersTextFormat = 0x2A8;
            static constexpr std::uintptr_t RebootCardRequiredText = 0x2B8;
            static constexpr std::uintptr_t NotEnoughResoucesText = 0x2C8;
            static constexpr std::uintptr_t FreeRebootCardLockedText = 0x2D8;
            static constexpr std::uintptr_t FreeRebootCardOnCooldownText = 0x2E8;
            static constexpr std::uintptr_t NotEnoughResoucesForFullSquadText = 0x2F8;
            static constexpr std::uintptr_t NotEnabledForPlayerText = 0x308;
            static constexpr std::uintptr_t VanInUseText = 0x318;
            static constexpr std::uintptr_t TeamStartedRebootText = 0x328;
            static constexpr std::uintptr_t RebootInteractTime = 0x338;
            static constexpr std::uintptr_t BuyRebootCardInteractSuccessPlayerGameplayCueTag = 0x364;
            static constexpr std::uintptr_t BuyRebootCardInteractSuccessGameplayCueTag = 0x368;
            static constexpr std::uintptr_t EndCue = 0x36C;
            static constexpr std::uintptr_t ResurrectionMaxHeight = 0x370;
            static constexpr std::uintptr_t ResurrectionHeightOffset = 0x398;
            static constexpr std::uintptr_t ResurrectionStartDelay = 0x3C0;
            static constexpr std::uintptr_t ResurrectionNextPlayerDelay = 0x3E8;
            static constexpr std::uintptr_t CooldownLengthRow = 0x410;
            static constexpr std::uintptr_t DelayBeforeCooldown = 0x438;
            static constexpr std::uintptr_t DelayBeforeSkydiveCheck = 0x43C;
            static constexpr std::uintptr_t HeightCheckForSkydive = 0x440;
            static constexpr std::uintptr_t HandleIntoGameState = 0x444;
            static constexpr std::uintptr_t SpawnMachineState = 0x448;
            static constexpr std::uintptr_t ActiveTeam = 0x449;
            static constexpr std::uintptr_t bIsLocallyBeingInteractedWith = 0x44A;
            static constexpr std::uintptr_t bIsInsideSafeZone = 0x44B;
            static constexpr std::uintptr_t IsBuyingRebootCardsEnabledOverride = 0x44C;
            static constexpr std::uintptr_t CanPlayerAffordRebootCardsOverride = 0x458;
            static constexpr std::uintptr_t GetCurrencyItemDefinitionOverride = 0x464;
            static constexpr std::uintptr_t GetRebootCardCostOverride = 0x470;
            static constexpr std::uintptr_t CanBuyExpiredRebootCardsOverride = 0x47C;
            static constexpr std::uintptr_t OnSpawnMachineLinkedToRebootComponent = 0x488;
            static constexpr std::uintptr_t OnPlayerPaidForRebootCards = 0x498;
            static constexpr std::uintptr_t GetCooldownLengthOverride = 0x4A8;
            static constexpr std::uintptr_t GetNotEnoughResourcesTextOverride = 0x4B4;
        };

        inline static constexpr std::array<PropertyInfo, 61> Properties{{
            {"bAllowInteract", 0xD8, "BoolProperty"},
            {"OnPlayerPawnResurrected", 0x120, "MulticastInlineDelegateProperty"},
            {"OnResurrectionStarted", 0x130, "MulticastInlineDelegateProperty"},
            {"OnResurrectionCompleted", 0x140, "MulticastInlineDelegateProperty"},
            {"OnBeginCooldown", 0x150, "MulticastInlineDelegateProperty"},
            {"OnEndCooldown", 0x160, "MulticastInlineDelegateProperty"},
            {"OnSpawnMachineStateChanged", 0x170, "MulticastInlineDelegateProperty"},
            {"OnBeginLongUse", 0x180, "MulticastInlineDelegateProperty"},
            {"OnInterruptLongUse", 0x190, "MulticastInlineDelegateProperty"},
            {"OnSafeZoneStatusChangedEvent", 0x1A0, "MulticastInlineDelegateProperty"},
            {"SecondContextOverrideWidget", 0x1B0, "ClassProperty"},
            {"InitiatingPlayer", 0x1B8, "ObjectProperty"},
            {"ResurrectLocation", 0x1C0, "ObjectProperty"},
            {"PlayerIdsForResurrection", 0x1C8, "ArrayProperty"},
            {"InstigatorPC", 0x1D8, "WeakObjectProperty"},
            {"DynamicInteractionOptions", 0x1E0, "StructProperty"},
            {"ActiveDynamicInteractionOptions", 0x200, "StructProperty"},
            {"InteractSoundCueLoop", 0x220, "ObjectProperty"},
            {"DescriptiveInformationText", 0x228, "TextProperty"},
            {"RebootSquadText", 0x238, "TextProperty"},
            {"RebootingText", 0x248, "TextProperty"},
            {"RechargingText", 0x258, "TextProperty"},
            {"RebootSquadMembersText", 0x268, "TextProperty"},
            {"RebootSquadMembersTextFormat", 0x278, "TextProperty"},
            {"FreeRebootSquadMembersTextFormat", 0x288, "TextProperty"},
            {"BuySquadRebootText", 0x298, "TextProperty"},
            {"NoBuybackRebootSquadMembersTextFormat", 0x2A8, "TextProperty"},
            {"RebootCardRequiredText", 0x2B8, "TextProperty"},
            {"NotEnoughResoucesText", 0x2C8, "TextProperty"},
            {"FreeRebootCardLockedText", 0x2D8, "TextProperty"},
            {"FreeRebootCardOnCooldownText", 0x2E8, "TextProperty"},
            {"NotEnoughResoucesForFullSquadText", 0x2F8, "TextProperty"},
            {"NotEnabledForPlayerText", 0x308, "TextProperty"},
            {"VanInUseText", 0x318, "TextProperty"},
            {"TeamStartedRebootText", 0x328, "TextProperty"},
            {"RebootInteractTime", 0x338, "StructProperty"},
            {"BuyRebootCardInteractSuccessPlayerGameplayCueTag", 0x364, "StructProperty"},
            {"BuyRebootCardInteractSuccessGameplayCueTag", 0x368, "StructProperty"},
            {"EndCue", 0x36C, "StructProperty"},
            {"ResurrectionMaxHeight", 0x370, "StructProperty"},
            {"ResurrectionHeightOffset", 0x398, "StructProperty"},
            {"ResurrectionStartDelay", 0x3C0, "StructProperty"},
            {"ResurrectionNextPlayerDelay", 0x3E8, "StructProperty"},
            {"CooldownLengthRow", 0x410, "StructProperty"},
            {"DelayBeforeCooldown", 0x438, "FloatProperty"},
            {"DelayBeforeSkydiveCheck", 0x43C, "FloatProperty"},
            {"HeightCheckForSkydive", 0x440, "FloatProperty"},
            {"HandleIntoGameState", 0x444, "IntProperty"},
            {"SpawnMachineState", 0x448, "EnumProperty"},
            {"ActiveTeam", 0x449, "ByteProperty"},
            {"bIsLocallyBeingInteractedWith", 0x44A, "BoolProperty"},
            {"bIsInsideSafeZone", 0x44B, "BoolProperty"},
            {"IsBuyingRebootCardsEnabledOverride", 0x44C, "DelegateProperty"},
            {"CanPlayerAffordRebootCardsOverride", 0x458, "DelegateProperty"},
            {"GetCurrencyItemDefinitionOverride", 0x464, "DelegateProperty"},
            {"GetRebootCardCostOverride", 0x470, "DelegateProperty"},
            {"CanBuyExpiredRebootCardsOverride", 0x47C, "DelegateProperty"},
            {"OnSpawnMachineLinkedToRebootComponent", 0x488, "MulticastInlineDelegateProperty"},
            {"OnPlayerPaidForRebootCards", 0x498, "MulticastInlineDelegateProperty"},
            {"GetCooldownLengthOverride", 0x4A8, "DelegateProperty"},
            {"GetNotEnoughResourcesTextOverride", 0x4B4, "DelegateProperty"},
        }};
    };

    struct ImmunityCarriage_PawnResurrectionInterface
    {
        static constexpr std::string_view Name = "ImmunityCarriage_PawnResurrectionInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
