#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BeastGirlRuntime
{
    struct BeastGirlStandInPawn
    {
        static constexpr std::string_view Name = "BeastGirlStandInPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortStandInPlayerPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPossessedByController = 0x61D8;
            static constexpr std::uintptr_t OnPawnPhysicalHit = 0x61E8;
            static constexpr std::uintptr_t HolsterId = 0x61F8;
            static constexpr std::uintptr_t InventoryItemsToRemove = 0x6200;
            static constexpr std::uintptr_t DefaultWeaponDefinition = 0x6210;
            static constexpr std::uintptr_t HF_OutOfHealthImmediateHeal = 0x6218;
            static constexpr std::uintptr_t HF_OutOfHealthImmediateShield = 0x6240;
            static constexpr std::uintptr_t ReplicatedTransformationData = 0x6268;
            static constexpr std::uintptr_t CharacterParts = 0x6270;
            static constexpr std::uintptr_t OptOutTransformationAnimations = 0x6280;
            static constexpr std::uintptr_t WeakenedTransformationAnimations = 0x6290;
            static constexpr std::uintptr_t SpriteTag = 0x62A0;
            static constexpr std::uintptr_t bHadSpriteEquipped = 0x62A4;
            static constexpr std::uintptr_t CachedPreviousHealth = 0x62CC;
            static constexpr std::uintptr_t PrimaryWeaponActiveTag = 0x62D0;
            static constexpr std::uintptr_t SecondaryWeaponActiveTag = 0x62D4;
            static constexpr std::uintptr_t SprintActiveTag = 0x62D8;
            static constexpr std::uintptr_t AttachedBaseForTransformation = 0x62DC;
            static constexpr std::uintptr_t DefaultWeaponInstance = 0x62E4;
            static constexpr std::uintptr_t bIsTransformingInto = 0x62EC;
            static constexpr std::uintptr_t PawnAbilitySet = 0x62F0;
            static constexpr std::uintptr_t BeastGirlActiveDurationTag = 0x62F8;
            static constexpr std::uintptr_t BeastGirlTempCharacter = 0x6300;
            static constexpr std::uintptr_t CachedCharacter = 0x6308;
            static constexpr std::uintptr_t AbilitySetHandle = 0x6310;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"OnPossessedByController", 0x61D8, "MulticastInlineDelegateProperty"},
            {"OnPawnPhysicalHit", 0x61E8, "MulticastInlineDelegateProperty"},
            {"HolsterId", 0x61F8, "NameProperty"},
            {"InventoryItemsToRemove", 0x6200, "ArrayProperty"},
            {"DefaultWeaponDefinition", 0x6210, "ObjectProperty"},
            {"HF_OutOfHealthImmediateHeal", 0x6218, "StructProperty"},
            {"HF_OutOfHealthImmediateShield", 0x6240, "StructProperty"},
            {"ReplicatedTransformationData", 0x6268, "StructProperty"},
            {"CharacterParts", 0x6270, "ArrayProperty"},
            {"OptOutTransformationAnimations", 0x6280, "StructProperty"},
            {"WeakenedTransformationAnimations", 0x6290, "StructProperty"},
            {"SpriteTag", 0x62A0, "StructProperty"},
            {"bHadSpriteEquipped", 0x62A4, "BoolProperty"},
            {"CachedPreviousHealth", 0x62CC, "FloatProperty"},
            {"PrimaryWeaponActiveTag", 0x62D0, "StructProperty"},
            {"SecondaryWeaponActiveTag", 0x62D4, "StructProperty"},
            {"SprintActiveTag", 0x62D8, "StructProperty"},
            {"AttachedBaseForTransformation", 0x62DC, "WeakObjectProperty"},
            {"DefaultWeaponInstance", 0x62E4, "WeakObjectProperty"},
            {"bIsTransformingInto", 0x62EC, "BoolProperty"},
            {"PawnAbilitySet", 0x62F0, "ObjectProperty"},
            {"BeastGirlActiveDurationTag", 0x62F8, "StructProperty"},
            {"BeastGirlTempCharacter", 0x6300, "ObjectProperty"},
            {"CachedCharacter", 0x6308, "ObjectProperty"},
            {"AbilitySetHandle", 0x6310, "StructProperty"},
        }};
    };

    struct BeastGirlTransformationManager
    {
        static constexpr std::string_view Name = "BeastGirlTransformationManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HF_RevertTransformFinishHealthToAdd = 0x128;
            static constexpr std::uintptr_t HF_RevertTransformFinishShieldToAdd = 0x150;
            static constexpr std::uintptr_t HF_MinimumBeastHealth = 0x178;
            static constexpr std::uintptr_t ReverseTransformationAbility = 0x1A0;
            static constexpr std::uintptr_t OptOutTransformationAbility = 0x1C0;
            static constexpr std::uintptr_t SpawnedBeastGirlPawn = 0x1E0;
            static constexpr std::uintptr_t ConsumableItemDefinition = 0x1E8;
            static constexpr std::uintptr_t bOptingOut = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"HF_RevertTransformFinishHealthToAdd", 0x128, "StructProperty"},
            {"HF_RevertTransformFinishShieldToAdd", 0x150, "StructProperty"},
            {"HF_MinimumBeastHealth", 0x178, "StructProperty"},
            {"ReverseTransformationAbility", 0x1A0, "ClassProperty"},
            {"OptOutTransformationAbility", 0x1C0, "ClassProperty"},
            {"SpawnedBeastGirlPawn", 0x1E0, "ObjectProperty"},
            {"ConsumableItemDefinition", 0x1E8, "ObjectProperty"},
            {"bOptingOut", 0x1F0, "BoolProperty"},
        }};
    };

    struct BeastLayerAnimInstance
    {
        static constexpr std::string_view Name = "BeastLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t DivePitchAdjustmentRotator = 0x1180;
            static constexpr std::uintptr_t IdleCorrectiveAlpha = 0x1198;
            static constexpr std::uintptr_t HipOffsetVertical = 0x11A0;
            static constexpr std::uintptr_t bDiveAbilityLanded = 0x11A8;
            static constexpr std::uintptr_t bDiveAbilityActive = 0x11A9;
            static constexpr std::uintptr_t bPlayJumpStart = 0x11AA;
            static constexpr std::uintptr_t bAllowLandingAdditive = 0x11AB;
            static constexpr std::uintptr_t bBlendLowerBodyCorrective = 0x11AC;
            static constexpr std::uintptr_t bDiveState_Loop = 0x11AD;
            static constexpr std::uintptr_t bLandingAdditiveAllowLowerBody = 0x11AE;
            static constexpr std::uintptr_t bTransformAllowLowerBody = 0x11AF;
            static constexpr std::uintptr_t bSnapLowerBodyCorrective = 0x11B0;
            static constexpr std::uintptr_t bDiveState_Land = 0x11B1;
            static constexpr std::uintptr_t bDiveState_Transition = 0x11B2;
            static constexpr std::uintptr_t bDiveState_Inactive = 0x11B3;
            static constexpr std::uintptr_t bEnterTransformState = 0x11B4;
            static constexpr std::uintptr_t bDiveState_EnterChargeState = 0x11B5;
            static constexpr std::uintptr_t bDiveState_Roar_AllowLowerBody = 0x11B6;
            static constexpr std::uintptr_t bLowerBodyCorrective_BlendOff = 0x11B7;
            static constexpr std::uintptr_t bAllowAdditiveIdleLoop = 0x11B8;
            static constexpr std::uintptr_t bAllowLowerbodyLandingOverride = 0x11B9;
            static constexpr std::uintptr_t bTransformExitActive = 0x11BA;
            static constexpr std::uintptr_t bTransformExitManual = 0x11BB;
            static constexpr std::uintptr_t DiveActiveTagName = 0x11BC;
            static constexpr std::uintptr_t FromAirTagName = 0x11C0;
            static constexpr std::uintptr_t FromGroundTagName = 0x11C4;
            static constexpr std::uintptr_t BeastGirlTransformBackFastStartCLMAnimSequence = 0x11C8;
            static constexpr std::uintptr_t BeastGirltransformBackStartCLMAnimSequence = 0x11D0;
            static constexpr std::uintptr_t BeastGirltransformBackInWaterStartCLMAnimSequence = 0x11D8;
            static constexpr std::uintptr_t CheerTransformPart2CMLAnimSequence = 0x11E0;
            static constexpr std::uintptr_t CheerTransformPart2InWaterCMLAnimSequence = 0x11E8;
            static constexpr std::uintptr_t bDiveState_Charge = 0x11F0;
            static constexpr std::uintptr_t bDiveState_Launch = 0x11F0;
            static constexpr std::uintptr_t bIsPlayingMantis = 0x11F0;
            static constexpr std::uintptr_t bIsPlayingMantisInAir = 0x11F0;
            static constexpr std::uintptr_t bWantsToTurn = 0x11F0;
            static constexpr std::uintptr_t bWasFalling = 0x11F0;
            static constexpr std::uintptr_t bWasPlayingMantis = 0x11F0;
            static constexpr std::uintptr_t bShouldCloseGate = 0x11F1;
            static constexpr std::uintptr_t bPlayingEndTransformAnimation = 0x11F2;
            static constexpr std::uintptr_t DivePitchAdjustment = 0x11F4;
        };

        inline static constexpr std::array<PropertyInfo, 41> Properties{{
            {"DivePitchAdjustmentRotator", 0x1180, "StructProperty"},
            {"IdleCorrectiveAlpha", 0x1198, "DoubleProperty"},
            {"HipOffsetVertical", 0x11A0, "DoubleProperty"},
            {"bDiveAbilityLanded", 0x11A8, "BoolProperty"},
            {"bDiveAbilityActive", 0x11A9, "BoolProperty"},
            {"bPlayJumpStart", 0x11AA, "BoolProperty"},
            {"bAllowLandingAdditive", 0x11AB, "BoolProperty"},
            {"bBlendLowerBodyCorrective", 0x11AC, "BoolProperty"},
            {"bDiveState_Loop", 0x11AD, "BoolProperty"},
            {"bLandingAdditiveAllowLowerBody", 0x11AE, "BoolProperty"},
            {"bTransformAllowLowerBody", 0x11AF, "BoolProperty"},
            {"bSnapLowerBodyCorrective", 0x11B0, "BoolProperty"},
            {"bDiveState_Land", 0x11B1, "BoolProperty"},
            {"bDiveState_Transition", 0x11B2, "BoolProperty"},
            {"bDiveState_Inactive", 0x11B3, "BoolProperty"},
            {"bEnterTransformState", 0x11B4, "BoolProperty"},
            {"bDiveState_EnterChargeState", 0x11B5, "BoolProperty"},
            {"bDiveState_Roar_AllowLowerBody", 0x11B6, "BoolProperty"},
            {"bLowerBodyCorrective_BlendOff", 0x11B7, "BoolProperty"},
            {"bAllowAdditiveIdleLoop", 0x11B8, "BoolProperty"},
            {"bAllowLowerbodyLandingOverride", 0x11B9, "BoolProperty"},
            {"bTransformExitActive", 0x11BA, "BoolProperty"},
            {"bTransformExitManual", 0x11BB, "BoolProperty"},
            {"DiveActiveTagName", 0x11BC, "StructProperty"},
            {"FromAirTagName", 0x11C0, "StructProperty"},
            {"FromGroundTagName", 0x11C4, "StructProperty"},
            {"BeastGirlTransformBackFastStartCLMAnimSequence", 0x11C8, "ObjectProperty"},
            {"BeastGirltransformBackStartCLMAnimSequence", 0x11D0, "ObjectProperty"},
            {"BeastGirltransformBackInWaterStartCLMAnimSequence", 0x11D8, "ObjectProperty"},
            {"CheerTransformPart2CMLAnimSequence", 0x11E0, "ObjectProperty"},
            {"CheerTransformPart2InWaterCMLAnimSequence", 0x11E8, "ObjectProperty"},
            {"bDiveState_Charge", 0x11F0, "BoolProperty"},
            {"bDiveState_Launch", 0x11F0, "BoolProperty"},
            {"bIsPlayingMantis", 0x11F0, "BoolProperty"},
            {"bIsPlayingMantisInAir", 0x11F0, "BoolProperty"},
            {"bWantsToTurn", 0x11F0, "BoolProperty"},
            {"bWasFalling", 0x11F0, "BoolProperty"},
            {"bWasPlayingMantis", 0x11F0, "BoolProperty"},
            {"bShouldCloseGate", 0x11F1, "BoolProperty"},
            {"bPlayingEndTransformAnimation", 0x11F2, "BoolProperty"},
            {"DivePitchAdjustment", 0x11F4, "FloatProperty"},
        }};
    };

    struct BeastPlayerAnimationInterface
    {
        static constexpr std::string_view Name = "BeastPlayerAnimationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
