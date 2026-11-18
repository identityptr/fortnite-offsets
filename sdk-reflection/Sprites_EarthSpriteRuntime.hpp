#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Sprites_EarthSpriteRuntime
{
    struct EarthSpriteExchangeItem_Service
    {
        static constexpr std::string_view Name = "EarthSpriteExchangeItem_Service";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_DataDrivenService";
        struct Offsets
        {
            static constexpr std::uintptr_t RequirementMatchPolicy = 0x190;
            static constexpr std::uintptr_t Requirements = 0x198;
            static constexpr std::uintptr_t EffectRecipientConfigs = 0x1A8;
            static constexpr std::uintptr_t ServiceGameplayTag = 0x1B8;
            static constexpr std::uintptr_t AnalyticsEventName = 0x1C0;
            static constexpr std::uintptr_t VisibilityPolicy = 0x1D0;
            static constexpr std::uintptr_t bPricingEnabled = 0x1D1;
            static constexpr std::uintptr_t PricingKey = 0x1D4;
            static constexpr std::uintptr_t PricingColumn = 0x1D8;
            static constexpr std::uintptr_t LimitedStockCount = 0x1E0;
            static constexpr std::uintptr_t ServiceBriefConfigCollection = 0x208;
            static constexpr std::uintptr_t ServiceBriefCollectionKeyOveride = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RequirementMatchPolicy", 0x190, "EnumProperty"},
            {"Requirements", 0x198, "ArrayProperty"},
            {"EffectRecipientConfigs", 0x1A8, "ArrayProperty"},
            {"ServiceGameplayTag", 0x1B8, "StructProperty"},
            {"AnalyticsEventName", 0x1C0, "StrProperty"},
            {"VisibilityPolicy", 0x1D0, "EnumProperty"},
            {"bPricingEnabled", 0x1D1, "BoolProperty"},
            {"PricingKey", 0x1D4, "NameProperty"},
            {"PricingColumn", 0x1D8, "IntProperty"},
            {"LimitedStockCount", 0x1E0, "StructProperty"},
            {"ServiceBriefConfigCollection", 0x208, "ObjectProperty"},
            {"ServiceBriefCollectionKeyOveride", 0x210, "NameProperty"},
        }};
    };

    struct EarthSpriteSelectorSubsystem
    {
        static constexpr std::string_view Name = "EarthSpriteSelectorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortControllerRequirement_EarthSprite_NoTag
    {
        static constexpr std::string_view Name = "FortControllerRequirement_EarthSprite_NoTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct SpriteEarthCreatureAnimInstance
    {
        static constexpr std::string_view Name = "SpriteEarthCreatureAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIdleBreak = 0x260;
            static constexpr std::uintptr_t Pitch = 0x264;
            static constexpr std::uintptr_t Yaw = 0x268;
            static constexpr std::uintptr_t bTransitionIdleBreakToIdle = 0x26C;
            static constexpr std::uintptr_t IdleBreakRelevancyData = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIdleBreak", 0x260, "BoolProperty"},
            {"Pitch", 0x264, "FloatProperty"},
            {"Yaw", 0x268, "FloatProperty"},
            {"bTransitionIdleBreakToIdle", 0x26C, "BoolProperty"},
            {"IdleBreakRelevancyData", 0x270, "StructProperty"},
        }};
    };

    struct SpriteEarthCreatureInterface
    {
        static constexpr std::string_view Name = "SpriteEarthCreatureInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
