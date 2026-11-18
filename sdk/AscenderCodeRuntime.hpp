#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AscenderCodeRuntime
{
    struct FortAscenderZipline
    {
        static constexpr std::string_view Name = "FortAscenderZipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSplineZipline";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAscenderSetupComplete = 0xC28;
            static constexpr std::uintptr_t SplineTopAttachPointName = 0xC38;
            static constexpr std::uintptr_t bAutoFindSplineEndLocation = 0xC3C;
            static constexpr std::uintptr_t SplineOffsetFromGround = 0xC40;
            static constexpr std::uintptr_t CableOffsetFromSplineEnd = 0xC44;
            static constexpr std::uintptr_t SplineLength = 0xC48;
            static constexpr std::uintptr_t SplineStaticMesh = 0xC50;
            static constexpr std::uintptr_t MeshForwardAxis = 0xC58;
            static constexpr std::uintptr_t bHandleReturning = 0xC59;
            static constexpr std::uintptr_t HandleReturnSpeed = 0xC5C;
            static constexpr std::uintptr_t bCableDropping = 0xC60;
            static constexpr std::uintptr_t CableDropSpeed = 0xC64;
            static constexpr std::uintptr_t bLockPawnRotationWhileUsing = 0xC68;
            static constexpr std::uintptr_t bApplyHolsterWhileUsing = 0xC69;
            static constexpr std::uintptr_t YawRotationOffsetWhileUsingHandle = 0xC6C;
            static constexpr std::uintptr_t YawRotationOffsetWhileSlidingDown = 0xC70;
            static constexpr std::uintptr_t CancelAbilitiesWithTags = 0xC78;
            static constexpr std::uintptr_t bUseComplexSplineCollision = 0xC98;
            static constexpr std::uintptr_t SimpleSplineCollisionRadius = 0xC9C;
            static constexpr std::uintptr_t SimpleSplineCollisionHeightExtension = 0xCA0;
            static constexpr std::uintptr_t ReachedTopLaunchAngle = 0xCA4;
            static constexpr std::uintptr_t DescendMinDistanceFromBottom = 0xCA8;
            static constexpr std::uintptr_t AscendReachedEndHorizontalLaunchSpeed = 0xCD0;
            static constexpr std::uintptr_t AscendReachedEndVerticalLaunchSpeed = 0xCF8;
            static constexpr std::uintptr_t AscendMMEReachedEndHorizontalLaunchSpeed = 0xD20;
            static constexpr std::uintptr_t AscendMMEReachedEndVerticalLaunchSpeed = 0xD48;
            static constexpr std::uintptr_t AscendJumpedOffHorizontalLaunchSpeed = 0xD70;
            static constexpr std::uintptr_t AscendJumpedOffVerticalLaunchSpeed = 0xD98;
            static constexpr std::uintptr_t DescendReachedEndHorizontalLaunchSpeed = 0xDC0;
            static constexpr std::uintptr_t DescendReachedEndVerticalLaunchSpeed = 0xDE8;
            static constexpr std::uintptr_t DescendJumpedOffHorizontalLaunchSpeed = 0xE10;
            static constexpr std::uintptr_t DescendJumpedOffVerticalLaunchSpeed = 0xE38;
            static constexpr std::uintptr_t HandleActorHitPlayerHorizontalLaunchSpeed = 0xE60;
            static constexpr std::uintptr_t HandleActorHitPlayerVerticalLaunchSpeed = 0xE88;
            static constexpr std::uintptr_t HandleDestroyBuildingsOverlapExtents = 0xEB0;
            static constexpr std::uintptr_t PlayerDestroyBuildingsOverlapExtents = 0xEC8;
            static constexpr std::uintptr_t bUseBakedEndLocation = 0xEE0;
            static constexpr std::uintptr_t BakedEndLocation = 0xEE8;
            static constexpr std::uintptr_t InitialSplineEndLocation = 0xF00;
            static constexpr std::uintptr_t CurrentSplineEndLocation = 0xF18;
            static constexpr std::uintptr_t TargetSplineEndLocation = 0xF30;
            static constexpr std::uintptr_t CurrentHandleLocation = 0xF48;
            static constexpr std::uintptr_t CurrentInteractComponent = 0xF60;
            static constexpr std::uintptr_t PawnUsingHandle = 0xF68;
            static constexpr std::uintptr_t PreviousPawnUsingHandle = 0xF70;
            static constexpr std::uintptr_t SplineMesh = 0xF78;
            static constexpr std::uintptr_t SimpleSplineMeshCollision = 0xF80;
            static constexpr std::uintptr_t FloorActor = 0xF88;
            static constexpr std::uintptr_t RotationLockedPawns = 0xF90;
            static constexpr std::uintptr_t LinkToActorComponent = 0xFE0;
            static constexpr std::uintptr_t ZiplineLinkComponent = 0xFE8;
        };

        inline static constexpr std::array<PropertyInfo, 51> Properties{{
            {"OnAscenderSetupComplete", 0xC28, "MulticastInlineDelegateProperty"},
            {"SplineTopAttachPointName", 0xC38, "NameProperty"},
            {"bAutoFindSplineEndLocation", 0xC3C, "BoolProperty"},
            {"SplineOffsetFromGround", 0xC40, "FloatProperty"},
            {"CableOffsetFromSplineEnd", 0xC44, "FloatProperty"},
            {"SplineLength", 0xC48, "FloatProperty"},
            {"SplineStaticMesh", 0xC50, "ObjectProperty"},
            {"MeshForwardAxis", 0xC58, "ByteProperty"},
            {"bHandleReturning", 0xC59, "BoolProperty"},
            {"HandleReturnSpeed", 0xC5C, "FloatProperty"},
            {"bCableDropping", 0xC60, "BoolProperty"},
            {"CableDropSpeed", 0xC64, "FloatProperty"},
            {"bLockPawnRotationWhileUsing", 0xC68, "BoolProperty"},
            {"bApplyHolsterWhileUsing", 0xC69, "BoolProperty"},
            {"YawRotationOffsetWhileUsingHandle", 0xC6C, "FloatProperty"},
            {"YawRotationOffsetWhileSlidingDown", 0xC70, "FloatProperty"},
            {"CancelAbilitiesWithTags", 0xC78, "StructProperty"},
            {"bUseComplexSplineCollision", 0xC98, "BoolProperty"},
            {"SimpleSplineCollisionRadius", 0xC9C, "FloatProperty"},
            {"SimpleSplineCollisionHeightExtension", 0xCA0, "FloatProperty"},
            {"ReachedTopLaunchAngle", 0xCA4, "FloatProperty"},
            {"DescendMinDistanceFromBottom", 0xCA8, "StructProperty"},
            {"AscendReachedEndHorizontalLaunchSpeed", 0xCD0, "StructProperty"},
            {"AscendReachedEndVerticalLaunchSpeed", 0xCF8, "StructProperty"},
            {"AscendMMEReachedEndHorizontalLaunchSpeed", 0xD20, "StructProperty"},
            {"AscendMMEReachedEndVerticalLaunchSpeed", 0xD48, "StructProperty"},
            {"AscendJumpedOffHorizontalLaunchSpeed", 0xD70, "StructProperty"},
            {"AscendJumpedOffVerticalLaunchSpeed", 0xD98, "StructProperty"},
            {"DescendReachedEndHorizontalLaunchSpeed", 0xDC0, "StructProperty"},
            {"DescendReachedEndVerticalLaunchSpeed", 0xDE8, "StructProperty"},
            {"DescendJumpedOffHorizontalLaunchSpeed", 0xE10, "StructProperty"},
            {"DescendJumpedOffVerticalLaunchSpeed", 0xE38, "StructProperty"},
            {"HandleActorHitPlayerHorizontalLaunchSpeed", 0xE60, "StructProperty"},
            {"HandleActorHitPlayerVerticalLaunchSpeed", 0xE88, "StructProperty"},
            {"HandleDestroyBuildingsOverlapExtents", 0xEB0, "StructProperty"},
            {"PlayerDestroyBuildingsOverlapExtents", 0xEC8, "StructProperty"},
            {"bUseBakedEndLocation", 0xEE0, "BoolProperty"},
            {"BakedEndLocation", 0xEE8, "StructProperty"},
            {"InitialSplineEndLocation", 0xF00, "StructProperty"},
            {"CurrentSplineEndLocation", 0xF18, "StructProperty"},
            {"TargetSplineEndLocation", 0xF30, "StructProperty"},
            {"CurrentHandleLocation", 0xF48, "StructProperty"},
            {"CurrentInteractComponent", 0xF60, "WeakObjectProperty"},
            {"PawnUsingHandle", 0xF68, "WeakObjectProperty"},
            {"PreviousPawnUsingHandle", 0xF70, "WeakObjectProperty"},
            {"SplineMesh", 0xF78, "ObjectProperty"},
            {"SimpleSplineMeshCollision", 0xF80, "ObjectProperty"},
            {"FloorActor", 0xF88, "WeakObjectProperty"},
            {"RotationLockedPawns", 0xF90, "ArrayProperty"},
            {"LinkToActorComponent", 0xFE0, "ObjectProperty"},
            {"ZiplineLinkComponent", 0xFE8, "ObjectProperty"},
        }};
    };

    struct FortCheatManager_AscenderZipline
    {
        static constexpr std::string_view Name = "FortCheatManager_AscenderZipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPawnComponent_AscenderMontageProvider
    {
        static constexpr std::string_view Name = "FortPawnComponent_AscenderMontageProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t M_Ascending = 0xC0;
            static constexpr std::uintptr_t M_Descending = 0xC8;
            static constexpr std::uintptr_t F_Ascending = 0xD0;
            static constexpr std::uintptr_t F_Descending = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"M_Ascending", 0xC0, "ObjectProperty"},
            {"M_Descending", 0xC8, "ObjectProperty"},
            {"F_Ascending", 0xD0, "ObjectProperty"},
            {"F_Descending", 0xD8, "ObjectProperty"},
        }};
    };

}
