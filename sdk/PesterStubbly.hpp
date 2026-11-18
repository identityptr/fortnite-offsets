#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PesterStubbly
{
    struct PesterStubblyAccountItemDefinitionOverrideManager
    {
        static constexpr std::string_view Name = "PesterStubblyAccountItemDefinitionOverrideManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterOverride = 0x30;
            static constexpr std::uintptr_t CharacterOverrideCache = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CharacterOverride", 0x30, "SoftObjectProperty"},
            {"CharacterOverrideCache", 0x50, "ObjectProperty"},
        }};
    };

    struct PesterStubblyCharacter
    {
        static constexpr std::string_view Name = "PesterStubblyCharacter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanCharacter";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilitySet = 0x61D8;
            static constexpr std::uintptr_t AnimInstance = 0x61E0;
            static constexpr std::uintptr_t MotionWarpingComponent = 0x61E8;
            static constexpr std::uintptr_t ConfigurationClass = 0x61F0;
            static constexpr std::uintptr_t DefaultMappingContext = 0x61F8;
            static constexpr std::uintptr_t DiveAction = 0x6200;
            static constexpr std::uintptr_t GrabAction = 0x6208;
            static constexpr std::uintptr_t JumpButtonDiveIconOverrideTag = 0x6210;
            static constexpr std::uintptr_t MovementComponent = 0x6240;
            static constexpr std::uintptr_t JiggleComponent = 0x6248;
            static constexpr std::uintptr_t StateMachine = 0x6268;
            static constexpr std::uintptr_t BeanStreamManager = 0x6270;
            static constexpr std::uintptr_t bPressedDive = 0x6278;
            static constexpr std::uintptr_t BeanCameraModeOverrideComponent = 0x62A8;
            static constexpr std::uintptr_t ParticleSystemsComponent = 0x62B0;
            static constexpr std::uintptr_t GrabComponent = 0x62B8;
            static constexpr std::uintptr_t BeingGrabbedComponent = 0x62C0;
            static constexpr std::uintptr_t GrabFeatureEnabledTag = 0x62C8;
            static constexpr std::uintptr_t bPressingGrab = 0x62CC;
            static constexpr std::uintptr_t MantleComponent = 0x62D0;
            static constexpr std::uintptr_t bWantsToMantle = 0x62D8;
            static constexpr std::uintptr_t RagdollComponent = 0x62E8;
            static constexpr std::uintptr_t RagdollPhysicsConstraint = 0x62F0;
            static constexpr std::uintptr_t RagdollRootCapsule = 0x62F8;
            static constexpr std::uintptr_t CapsuleUnscaledHalfHeight = 0x6300;
            static constexpr std::uintptr_t CollisionManagerComponent = 0x6308;
            static constexpr std::uintptr_t PushedInteractionSelection = 0x6348;
            static constexpr std::uintptr_t MantleAnimationMontage = 0x6380;
            static constexpr std::uintptr_t GetupAnimationMontage_Front = 0x63A0;
            static constexpr std::uintptr_t GetupAnimationMontage_Left = 0x63C0;
            static constexpr std::uintptr_t GetupAnimationMontage_Right = 0x63E0;
            static constexpr std::uintptr_t GetupAnimationMontage_Back = 0x6400;
            static constexpr std::uintptr_t LandStaggerAnimationMontage = 0x6420;
            static constexpr std::uintptr_t LandStaggerAnimationMontageAlt = 0x6440;
            static constexpr std::uintptr_t BackpackAllowList = 0x6460;
            static constexpr std::uintptr_t bCharacterCosmeticsVisibility = 0x6480;
            static constexpr std::uintptr_t bBackpackCosmeticsVisibility = 0x6481;
            static constexpr std::uintptr_t IdleBreakBlockingTags = 0x6488;
            static constexpr std::uintptr_t bEnableInventoryMode = 0x64A8;
            static constexpr std::uintptr_t RetargetSourceMesh = 0x64B0;
        };

        inline static constexpr std::array<PropertyInfo, 40> Properties{{
            {"AbilitySet", 0x61D8, "ObjectProperty"},
            {"AnimInstance", 0x61E0, "ObjectProperty"},
            {"MotionWarpingComponent", 0x61E8, "ObjectProperty"},
            {"ConfigurationClass", 0x61F0, "ClassProperty"},
            {"DefaultMappingContext", 0x61F8, "ObjectProperty"},
            {"DiveAction", 0x6200, "ObjectProperty"},
            {"GrabAction", 0x6208, "ObjectProperty"},
            {"JumpButtonDiveIconOverrideTag", 0x6210, "StructProperty"},
            {"MovementComponent", 0x6240, "ObjectProperty"},
            {"JiggleComponent", 0x6248, "ObjectProperty"},
            {"StateMachine", 0x6268, "ObjectProperty"},
            {"BeanStreamManager", 0x6270, "ObjectProperty"},
            {"bPressedDive", 0x6278, "BoolProperty"},
            {"BeanCameraModeOverrideComponent", 0x62A8, "ObjectProperty"},
            {"ParticleSystemsComponent", 0x62B0, "ObjectProperty"},
            {"GrabComponent", 0x62B8, "ObjectProperty"},
            {"BeingGrabbedComponent", 0x62C0, "ObjectProperty"},
            {"GrabFeatureEnabledTag", 0x62C8, "StructProperty"},
            {"bPressingGrab", 0x62CC, "BoolProperty"},
            {"MantleComponent", 0x62D0, "ObjectProperty"},
            {"bWantsToMantle", 0x62D8, "BoolProperty"},
            {"RagdollComponent", 0x62E8, "ObjectProperty"},
            {"RagdollPhysicsConstraint", 0x62F0, "ObjectProperty"},
            {"RagdollRootCapsule", 0x62F8, "ObjectProperty"},
            {"CapsuleUnscaledHalfHeight", 0x6300, "FloatProperty"},
            {"CollisionManagerComponent", 0x6308, "ObjectProperty"},
            {"PushedInteractionSelection", 0x6348, "ObjectProperty"},
            {"MantleAnimationMontage", 0x6380, "SoftObjectProperty"},
            {"GetupAnimationMontage_Front", 0x63A0, "SoftObjectProperty"},
            {"GetupAnimationMontage_Left", 0x63C0, "SoftObjectProperty"},
            {"GetupAnimationMontage_Right", 0x63E0, "SoftObjectProperty"},
            {"GetupAnimationMontage_Back", 0x6400, "SoftObjectProperty"},
            {"LandStaggerAnimationMontage", 0x6420, "SoftObjectProperty"},
            {"LandStaggerAnimationMontageAlt", 0x6440, "SoftObjectProperty"},
            {"BackpackAllowList", 0x6460, "SoftObjectProperty"},
            {"bCharacterCosmeticsVisibility", 0x6480, "BoolProperty"},
            {"bBackpackCosmeticsVisibility", 0x6481, "BoolProperty"},
            {"IdleBreakBlockingTags", 0x6488, "StructProperty"},
            {"bEnableInventoryMode", 0x64A8, "BoolProperty"},
            {"RetargetSourceMesh", 0x64B0, "ObjectProperty"},
        }};
    };

}
