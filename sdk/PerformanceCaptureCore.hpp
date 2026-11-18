#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PerformanceCaptureCore
{
    struct CaptureCharacter
    {
        static constexpr std::string_view Name = "CaptureCharacter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkeletalMeshActor";
        struct Offsets
        {
            static constexpr std::uintptr_t RetargetComponent = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RetargetComponent", 0x2B8, "ObjectProperty"},
        }};
    };

    struct CapturePerformer
    {
        static constexpr std::string_view Name = "CapturePerformer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkeletalMeshActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectName = 0x2B8;
            static constexpr std::uintptr_t bForceAllMeshesToFollowLeader = 0x2BC;
            static constexpr std::uintptr_t bEvaluateAnimation = 0x2BD;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SubjectName", 0x2B8, "StructProperty"},
            {"bForceAllMeshesToFollowLeader", 0x2BC, "BoolProperty"},
            {"bEvaluateAnimation", 0x2BD, "BoolProperty"},
        }};
    };

    struct PerformerComponent
    {
        static constexpr std::string_view Name = "PerformerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectName = 0xC0;
            static constexpr std::uintptr_t ControlledSkeletalMesh = 0xC8;
            static constexpr std::uintptr_t bEvaluateAnimation = 0xF0;
            static constexpr std::uintptr_t bForceOtherMeshesToFollowControlledMesh = 0xF1;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SubjectName", 0xC0, "StructProperty"},
            {"ControlledSkeletalMesh", 0xC8, "StructProperty"},
            {"bEvaluateAnimation", 0xF0, "BoolProperty"},
            {"bForceOtherMeshesToFollowControlledMesh", 0xF1, "BoolProperty"},
        }};
    };

    struct RetargetAnimInstance
    {
        static constexpr std::string_view Name = "RetargetAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RetargetNode = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RetargetNode", 0x260, "StructProperty"},
        }};
    };

    struct RetargetComponent
    {
        static constexpr std::string_view Name = "RetargetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceSkeletalMeshComponent = 0xC0;
            static constexpr std::uintptr_t ControlledSkeletalMeshComponent = 0xE8;
            static constexpr std::uintptr_t bForceOtherMeshesToFollowControlledMesh = 0x110;
            static constexpr std::uintptr_t RetargetAsset = 0x118;
            static constexpr std::uintptr_t CustomRetargetProfile = 0x120;
            static constexpr std::uintptr_t SourcePerformer = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SourceSkeletalMeshComponent", 0xC0, "StructProperty"},
            {"ControlledSkeletalMeshComponent", 0xE8, "StructProperty"},
            {"bForceOtherMeshesToFollowControlledMesh", 0x110, "BoolProperty"},
            {"RetargetAsset", 0x118, "ObjectProperty"},
            {"CustomRetargetProfile", 0x120, "StructProperty"},
            {"SourcePerformer", 0x1F8, "SoftObjectProperty"},
        }};
    };

}
