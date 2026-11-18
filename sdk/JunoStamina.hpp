#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoStamina
{
    struct JunoStaminaAttributeSet
    {
        static constexpr std::string_view Name = "JunoStaminaAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxStamina = 0x48;
            static constexpr std::uintptr_t MinimumStaminaForUsing = 0x58;
            static constexpr std::uintptr_t StaminaRechargeAmountPerSecond = 0x68;
            static constexpr std::uintptr_t StaminaRechargeDelaySeconds = 0x78;
            static constexpr std::uintptr_t StaminaRechargePercentageLimit = 0x88;
            static constexpr std::uintptr_t StaminaUsageMultiplier = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MaxStamina", 0x48, "StructProperty"},
            {"MinimumStaminaForUsing", 0x58, "StructProperty"},
            {"StaminaRechargeAmountPerSecond", 0x68, "StructProperty"},
            {"StaminaRechargeDelaySeconds", 0x78, "StructProperty"},
            {"StaminaRechargePercentageLimit", 0x88, "StructProperty"},
            {"StaminaUsageMultiplier", 0x98, "StructProperty"},
        }};
    };

    struct JunoStaminaComponent
    {
        static constexpr std::string_view Name = "JunoStaminaComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStaminaCompletelyDrained = 0xC0;
            static constexpr std::uintptr_t OnStaminaRechargeComplete = 0xD0;
            static constexpr std::uintptr_t OnCurrentStaminaChanged = 0xE0;
            static constexpr std::uintptr_t LowStaminaGameplayEffectClass = 0xF0;
            static constexpr std::uintptr_t RechargeDisabledQuery = 0x100;
            static constexpr std::uintptr_t StaminaUseDisabledQuery = 0x158;
            static constexpr std::uintptr_t CurrentStamina = 0x1A0;
            static constexpr std::uintptr_t CachedMaxStamina = 0x1A4;
            static constexpr std::uintptr_t NetStaminaDeltaPerSecond = 0x1A8;
            static constexpr std::uintptr_t MaxStaminaAttribute = 0x1B0;
            static constexpr std::uintptr_t MinStaminaForUsingAttribute = 0x1E8;
            static constexpr std::uintptr_t RechargeAmountPerSecondAttribute = 0x220;
            static constexpr std::uintptr_t RechargeDelayInSecondsAttribute = 0x258;
            static constexpr std::uintptr_t RechargePercentageLimitAttribute = 0x290;
            static constexpr std::uintptr_t StaminaUsageMultiplierAttribute = 0x2C8;
            static constexpr std::uintptr_t MaxStaminaSeed = 0x300;
            static constexpr std::uintptr_t MinStaminaForUsingSeed = 0x328;
            static constexpr std::uintptr_t RechargeAmountPerSecondSeed = 0x350;
            static constexpr std::uintptr_t RechargeDelayInSecondsSeed = 0x378;
            static constexpr std::uintptr_t RechargePercentageLimitSeed = 0x3A0;
            static constexpr std::uintptr_t StaminaUsageMultiplierSeed = 0x3C8;
            static constexpr std::uintptr_t AttributeDefaultsCurveTable = 0x3F0;
            static constexpr std::uintptr_t bRemoveStaminaUsersWhenEmpty = 0x3F8;
            static constexpr std::uintptr_t ActiveStaminaChannels = 0x400;
            static constexpr std::uintptr_t NewActiveStaminaChannels = 0x410;
            static constexpr std::uintptr_t OnStaminaChunkAdded = 0x420;
            static constexpr std::uintptr_t OnStaminaRechargeBegun = 0x430;
            static constexpr std::uintptr_t OnStaminaRechargeInterrupted = 0x440;
            static constexpr std::uintptr_t OnStaminaReachedMax = 0x450;
            static constexpr std::uintptr_t OnStaminaReachedMinForUsing = 0x460;
            static constexpr std::uintptr_t bAllStaminaUsageIsFree = 0x470;
            static constexpr std::uintptr_t bIsRecharging = 0x470;
            static constexpr std::uintptr_t bIsStaminaUsageBlocked = 0x470;
            static constexpr std::uintptr_t bIsUsingStamina = 0x470;
            static constexpr std::uintptr_t bIsWaitingToRecharge = 0x470;
            static constexpr std::uintptr_t bRechargingEnabled = 0x470;
            static constexpr std::uintptr_t TimeUntilRechargeInSeconds = 0x474;
        };

        inline static constexpr std::array<PropertyInfo, 37> Properties{{
            {"OnStaminaCompletelyDrained", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnStaminaRechargeComplete", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnCurrentStaminaChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"LowStaminaGameplayEffectClass", 0xF0, "ClassProperty"},
            {"RechargeDisabledQuery", 0x100, "StructProperty"},
            {"StaminaUseDisabledQuery", 0x158, "StructProperty"},
            {"CurrentStamina", 0x1A0, "FloatProperty"},
            {"CachedMaxStamina", 0x1A4, "FloatProperty"},
            {"NetStaminaDeltaPerSecond", 0x1A8, "FloatProperty"},
            {"MaxStaminaAttribute", 0x1B0, "StructProperty"},
            {"MinStaminaForUsingAttribute", 0x1E8, "StructProperty"},
            {"RechargeAmountPerSecondAttribute", 0x220, "StructProperty"},
            {"RechargeDelayInSecondsAttribute", 0x258, "StructProperty"},
            {"RechargePercentageLimitAttribute", 0x290, "StructProperty"},
            {"StaminaUsageMultiplierAttribute", 0x2C8, "StructProperty"},
            {"MaxStaminaSeed", 0x300, "StructProperty"},
            {"MinStaminaForUsingSeed", 0x328, "StructProperty"},
            {"RechargeAmountPerSecondSeed", 0x350, "StructProperty"},
            {"RechargeDelayInSecondsSeed", 0x378, "StructProperty"},
            {"RechargePercentageLimitSeed", 0x3A0, "StructProperty"},
            {"StaminaUsageMultiplierSeed", 0x3C8, "StructProperty"},
            {"AttributeDefaultsCurveTable", 0x3F0, "ObjectProperty"},
            {"bRemoveStaminaUsersWhenEmpty", 0x3F8, "BoolProperty"},
            {"ActiveStaminaChannels", 0x400, "ArrayProperty"},
            {"NewActiveStaminaChannels", 0x410, "ArrayProperty"},
            {"OnStaminaChunkAdded", 0x420, "MulticastInlineDelegateProperty"},
            {"OnStaminaRechargeBegun", 0x430, "MulticastInlineDelegateProperty"},
            {"OnStaminaRechargeInterrupted", 0x440, "MulticastInlineDelegateProperty"},
            {"OnStaminaReachedMax", 0x450, "MulticastInlineDelegateProperty"},
            {"OnStaminaReachedMinForUsing", 0x460, "MulticastInlineDelegateProperty"},
            {"bAllStaminaUsageIsFree", 0x470, "BoolProperty"},
            {"bIsRecharging", 0x470, "BoolProperty"},
            {"bIsStaminaUsageBlocked", 0x470, "BoolProperty"},
            {"bIsUsingStamina", 0x470, "BoolProperty"},
            {"bIsWaitingToRecharge", 0x470, "BoolProperty"},
            {"bRechargingEnabled", 0x470, "BoolProperty"},
            {"TimeUntilRechargeInSeconds", 0x474, "FloatProperty"},
        }};
    };

}
