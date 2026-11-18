#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EnergyRuntime
{
    struct FortComponent_Energy
    {
        static constexpr std::string_view Name = "FortComponent_Energy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEnergyCompletelyDrained = 0xC0;
            static constexpr std::uintptr_t OnEnergyRechargeComplete = 0xD0;
            static constexpr std::uintptr_t OnCurrentEnergyChanged = 0xE0;
            static constexpr std::uintptr_t MaxEnergyAttribute = 0xF8;
            static constexpr std::uintptr_t MaxEnergy = 0x130;
            static constexpr std::uintptr_t RechargeDisabledQuery = 0x160;
            static constexpr std::uintptr_t EnergyUseDisabledQuery = 0x1B8;
            static constexpr std::uintptr_t BeginRechargeTimerHandle = 0x200;
            static constexpr std::uintptr_t EnergyTypeIdentifierTagContainer = 0x210;
            static constexpr std::uintptr_t CurrentEnergy = 0x230;
            static constexpr std::uintptr_t CachedMaxEnergy = 0x234;
            static constexpr std::uintptr_t CachedMaxEnergyFromScalableFloat = 0x238;
            static constexpr std::uintptr_t NetEnergyDeltaPerSecond = 0x23C;
            static constexpr std::uintptr_t MinEnergyForUsing = 0x248;
            static constexpr std::uintptr_t RechargeAmountPerSecondAttribute = 0x270;
            static constexpr std::uintptr_t RechargeAmountPerSecond = 0x2A8;
            static constexpr std::uintptr_t RechargeDelayInSeconds = 0x2D0;
            static constexpr std::uintptr_t RechargePercentageLimit = 0x2F8;
            static constexpr std::uintptr_t EnergyUsageMultiplierAttribute = 0x320;
            static constexpr std::uintptr_t EnergyUsageMultiplier = 0x358;
            static constexpr std::uintptr_t bRemoveEnergyUsersWhenEmpty = 0x380;
            static constexpr std::uintptr_t ActiveEnergyChannels = 0x388;
            static constexpr std::uintptr_t NewActiveEnergyChannels = 0x398;
            static constexpr std::uintptr_t EnergyRegenOverrides = 0x3A8;
            static constexpr std::uintptr_t OnEnergyChunkAdded = 0x3B8;
            static constexpr std::uintptr_t OnEnergyRechargeBegun = 0x3C8;
            static constexpr std::uintptr_t OnEnergyRechargeInterrupted = 0x3D8;
            static constexpr std::uintptr_t OnEnergyReachedMax = 0x3E8;
            static constexpr std::uintptr_t OnEnergyReachedMinForUsing = 0x3F8;
            static constexpr std::uintptr_t bAllowEditEnergyUsageMultiplierScalableFloat = 0x408;
            static constexpr std::uintptr_t bAllowEditMaxEnergyScalableFloat = 0x408;
            static constexpr std::uintptr_t bAllowEditRechargeAmountPerSecondScalableFloat = 0x408;
            static constexpr std::uintptr_t bAttributesInitialized = 0x408;
            static constexpr std::uintptr_t bIsRecharging = 0x408;
            static constexpr std::uintptr_t bIsUsingEnergy = 0x408;
            static constexpr std::uintptr_t bRechargingEnabled = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"OnEnergyCompletelyDrained", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnEnergyRechargeComplete", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnCurrentEnergyChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"MaxEnergyAttribute", 0xF8, "StructProperty"},
            {"MaxEnergy", 0x130, "StructProperty"},
            {"RechargeDisabledQuery", 0x160, "StructProperty"},
            {"EnergyUseDisabledQuery", 0x1B8, "StructProperty"},
            {"BeginRechargeTimerHandle", 0x200, "StructProperty"},
            {"EnergyTypeIdentifierTagContainer", 0x210, "StructProperty"},
            {"CurrentEnergy", 0x230, "FloatProperty"},
            {"CachedMaxEnergy", 0x234, "FloatProperty"},
            {"CachedMaxEnergyFromScalableFloat", 0x238, "FloatProperty"},
            {"NetEnergyDeltaPerSecond", 0x23C, "FloatProperty"},
            {"MinEnergyForUsing", 0x248, "StructProperty"},
            {"RechargeAmountPerSecondAttribute", 0x270, "StructProperty"},
            {"RechargeAmountPerSecond", 0x2A8, "StructProperty"},
            {"RechargeDelayInSeconds", 0x2D0, "StructProperty"},
            {"RechargePercentageLimit", 0x2F8, "StructProperty"},
            {"EnergyUsageMultiplierAttribute", 0x320, "StructProperty"},
            {"EnergyUsageMultiplier", 0x358, "StructProperty"},
            {"bRemoveEnergyUsersWhenEmpty", 0x380, "BoolProperty"},
            {"ActiveEnergyChannels", 0x388, "ArrayProperty"},
            {"NewActiveEnergyChannels", 0x398, "ArrayProperty"},
            {"EnergyRegenOverrides", 0x3A8, "ArrayProperty"},
            {"OnEnergyChunkAdded", 0x3B8, "MulticastInlineDelegateProperty"},
            {"OnEnergyRechargeBegun", 0x3C8, "MulticastInlineDelegateProperty"},
            {"OnEnergyRechargeInterrupted", 0x3D8, "MulticastInlineDelegateProperty"},
            {"OnEnergyReachedMax", 0x3E8, "MulticastInlineDelegateProperty"},
            {"OnEnergyReachedMinForUsing", 0x3F8, "MulticastInlineDelegateProperty"},
            {"bAllowEditEnergyUsageMultiplierScalableFloat", 0x408, "BoolProperty"},
            {"bAllowEditMaxEnergyScalableFloat", 0x408, "BoolProperty"},
            {"bAllowEditRechargeAmountPerSecondScalableFloat", 0x408, "BoolProperty"},
            {"bAttributesInitialized", 0x408, "BoolProperty"},
            {"bIsRecharging", 0x408, "BoolProperty"},
            {"bIsUsingEnergy", 0x408, "BoolProperty"},
            {"bRechargingEnabled", 0x408, "BoolProperty"},
        }};
    };

    struct FortEnergyAttrSet
    {
        static constexpr std::string_view Name = "FortEnergyAttrSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxEnergy = 0x48;
            static constexpr std::uintptr_t RechargeAmountPerSecond = 0x70;
            static constexpr std::uintptr_t EnergyUsageMultiplier = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxEnergy", 0x48, "StructProperty"},
            {"RechargeAmountPerSecond", 0x70, "StructProperty"},
            {"EnergyUsageMultiplier", 0x98, "StructProperty"},
        }};
    };

}
