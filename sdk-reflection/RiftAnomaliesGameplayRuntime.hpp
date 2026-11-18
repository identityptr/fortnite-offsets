#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RiftAnomaliesGameplayRuntime
{
    struct FortRiftAnomaliesData
    {
        static constexpr std::string_view Name = "FortRiftAnomaliesData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RAName = 0x28;
            static constexpr std::uintptr_t RADescription = 0x38;
            static constexpr std::uintptr_t RAShortDescription = 0x48;
            static constexpr std::uintptr_t RAEndedMessage = 0x58;
            static constexpr std::uintptr_t RAMarkerSound = 0x68;
            static constexpr std::uintptr_t RATriggerSound = 0x88;
            static constexpr std::uintptr_t RAEndSound = 0xA8;
            static constexpr std::uintptr_t AnomalyAbilitySet = 0xC8;
            static constexpr std::uintptr_t ApplicationEffectRules = 0xE8;
            static constexpr std::uintptr_t RiftAnomalyTypeConfig = 0xE9;
            static constexpr std::uintptr_t RABehaviorType = 0xEA;
            static constexpr std::uintptr_t bUseEQS = 0xEB;
            static constexpr std::uintptr_t EQSToUSe = 0xF0;
            static constexpr std::uintptr_t bHideActiveRiftAnomalyWidget = 0x110;
            static constexpr std::uintptr_t MaterialIcon = 0x118;
            static constexpr std::uintptr_t TextureIcon = 0x138;
            static constexpr std::uintptr_t PersistentRiftAnomalieClass = 0x158;
            static constexpr std::uintptr_t SpawnRuleClass = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"RAName", 0x28, "TextProperty"},
            {"RADescription", 0x38, "TextProperty"},
            {"RAShortDescription", 0x48, "TextProperty"},
            {"RAEndedMessage", 0x58, "TextProperty"},
            {"RAMarkerSound", 0x68, "SoftObjectProperty"},
            {"RATriggerSound", 0x88, "SoftObjectProperty"},
            {"RAEndSound", 0xA8, "SoftObjectProperty"},
            {"AnomalyAbilitySet", 0xC8, "SoftObjectProperty"},
            {"ApplicationEffectRules", 0xE8, "EnumProperty"},
            {"RiftAnomalyTypeConfig", 0xE9, "EnumProperty"},
            {"RABehaviorType", 0xEA, "EnumProperty"},
            {"bUseEQS", 0xEB, "BoolProperty"},
            {"EQSToUSe", 0xF0, "SoftObjectProperty"},
            {"bHideActiveRiftAnomalyWidget", 0x110, "BoolProperty"},
            {"MaterialIcon", 0x118, "SoftObjectProperty"},
            {"TextureIcon", 0x138, "SoftObjectProperty"},
            {"PersistentRiftAnomalieClass", 0x158, "SoftClassProperty"},
            {"SpawnRuleClass", 0x178, "ClassProperty"},
        }};
    };

    struct FortRiftAnomaliesManager
    {
        static constexpr std::string_view Name = "FortRiftAnomaliesManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnClearAnomaly = 0xC0;
            static constexpr std::uintptr_t OnRiftAnomalySpawnAnticipation = 0xD0;
            static constexpr std::uintptr_t OnRiftAnomalyActivated = 0xE0;
            static constexpr std::uintptr_t OnRiftAnomalyEndedWithNotification = 0xF0;
            static constexpr std::uintptr_t CurrentRetryingAnomaly = 0x100;
            static constexpr std::uintptr_t CurrentRetriesRemaining = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnClearAnomaly", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnRiftAnomalySpawnAnticipation", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnRiftAnomalyActivated", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnRiftAnomalyEndedWithNotification", 0xF0, "MulticastInlineDelegateProperty"},
            {"CurrentRetryingAnomaly", 0x100, "SoftObjectProperty"},
            {"CurrentRetriesRemaining", 0x120, "IntProperty"},
        }};
    };

    struct RASpawnRules
    {
        static constexpr std::string_view Name = "RASpawnRules";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxRetries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxRetries", 0x28, "StructProperty"},
        }};
    };

    struct RA_CheatManagerExtension
    {
        static constexpr std::string_view Name = "RA_CheatManagerExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RiftAnomaliesActorBase
    {
        static constexpr std::string_view Name = "RiftAnomaliesActorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RiftAnomalyData = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RiftAnomalyData", 0x278, "ObjectProperty"},
        }};
    };

}
