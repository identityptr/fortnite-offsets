#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WildEstate_RenderingManagerRuntime
{
    struct GameFeatureAction_RegisterWildEstateRendering
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterWildEstateRendering";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WildEstateRenderingSubsystem
    {
        static constexpr std::string_view Name = "WildEstateRenderingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableSubsystemCreation = 0x30;
            static constexpr std::uintptr_t bActivateOnStart = 0x58;
            static constexpr std::uintptr_t ActorClasses = 0x60;
            static constexpr std::uintptr_t bProcessInstancedStaticMeshComponents = 0x70;
            static constexpr std::uintptr_t bAutoAddBuildingActorClass = 0x71;
            static constexpr std::uintptr_t bAutoDisableBuildActorAllowHighlight = 0x72;
            static constexpr std::uintptr_t bProcessWildEstateSpecificContent = 0x73;
            static constexpr std::uintptr_t bWildEstateContentCustomRenderDepthSettingToUse = 0x74;
            static constexpr std::uintptr_t bEnableBPMapsFilter = 0x75;
            static constexpr std::uintptr_t BPMapsToProcess = 0x78;
            static constexpr std::uintptr_t MaterialsNotToProcess = 0x88;
            static constexpr std::uintptr_t DynamicDestructionMatOverridePtr = 0x98;
            static constexpr std::uintptr_t DynamicDestructionSystemOverridePtr = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"EnableSubsystemCreation", 0x30, "StructProperty"},
            {"bActivateOnStart", 0x58, "BoolProperty"},
            {"ActorClasses", 0x60, "ArrayProperty"},
            {"bProcessInstancedStaticMeshComponents", 0x70, "BoolProperty"},
            {"bAutoAddBuildingActorClass", 0x71, "BoolProperty"},
            {"bAutoDisableBuildActorAllowHighlight", 0x72, "BoolProperty"},
            {"bProcessWildEstateSpecificContent", 0x73, "BoolProperty"},
            {"bWildEstateContentCustomRenderDepthSettingToUse", 0x74, "BoolProperty"},
            {"bEnableBPMapsFilter", 0x75, "BoolProperty"},
            {"BPMapsToProcess", 0x78, "ArrayProperty"},
            {"MaterialsNotToProcess", 0x88, "ArrayProperty"},
            {"DynamicDestructionMatOverridePtr", 0x98, "SoftObjectProperty"},
            {"DynamicDestructionSystemOverridePtr", 0xB8, "SoftObjectProperty"},
        }};
    };

}
