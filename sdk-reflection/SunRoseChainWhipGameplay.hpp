#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SunRoseChainWhipGameplay
{
    struct Chains_SunRose_Sharp_Wep_AnimInstance
    {
        static constexpr std::string_view Name = "Chains_SunRose_Sharp_Wep_AnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomCharacterPartAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AttackRange = 0x640;
            static constexpr std::uintptr_t ActiveTechniqueIndex = 0x644;
            static constexpr std::uintptr_t bIsTechniqueActive = 0x648;
            static constexpr std::uintptr_t bHasIsTargetingTag = 0x649;
            static constexpr std::uintptr_t PawnVelocitySpeed = 0x64C;
            static constexpr std::uintptr_t PawnVelocitySpeedCutoff = 0x650;
            static constexpr std::uintptr_t bIsAttack_01 = 0x654;
            static constexpr std::uintptr_t bIsAttack_02 = 0x655;
            static constexpr std::uintptr_t bIsAttack_03 = 0x656;
            static constexpr std::uintptr_t bIsAllowPhysics = 0x657;
            static constexpr std::uintptr_t bIsMantisDone = 0x658;
            static constexpr std::uintptr_t bIsUpperBodyAttack_01 = 0x659;
            static constexpr std::uintptr_t bIsUpperBodyAttack_02 = 0x65A;
            static constexpr std::uintptr_t XMoveRight = 0x65C;
            static constexpr std::uintptr_t XMoveLeft = 0x660;
            static constexpr std::uintptr_t YMoveFwd = 0x664;
            static constexpr std::uintptr_t bIs700Distance = 0x668;
            static constexpr std::uintptr_t bIs1200Distance = 0x669;
            static constexpr std::uintptr_t bIsTurnOffPhysics = 0x66A;
            static constexpr std::uintptr_t AttackRange700 = 0x66C;
            static constexpr std::uintptr_t AttackRange1200 = 0x670;
            static constexpr std::uintptr_t AttackRange1500 = 0x674;
            static constexpr std::uintptr_t IsTargetingTag = 0x678;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"AttackRange", 0x640, "FloatProperty"},
            {"ActiveTechniqueIndex", 0x644, "IntProperty"},
            {"bIsTechniqueActive", 0x648, "BoolProperty"},
            {"bHasIsTargetingTag", 0x649, "BoolProperty"},
            {"PawnVelocitySpeed", 0x64C, "FloatProperty"},
            {"PawnVelocitySpeedCutoff", 0x650, "FloatProperty"},
            {"bIsAttack_01", 0x654, "BoolProperty"},
            {"bIsAttack_02", 0x655, "BoolProperty"},
            {"bIsAttack_03", 0x656, "BoolProperty"},
            {"bIsAllowPhysics", 0x657, "BoolProperty"},
            {"bIsMantisDone", 0x658, "BoolProperty"},
            {"bIsUpperBodyAttack_01", 0x659, "BoolProperty"},
            {"bIsUpperBodyAttack_02", 0x65A, "BoolProperty"},
            {"XMoveRight", 0x65C, "FloatProperty"},
            {"XMoveLeft", 0x660, "FloatProperty"},
            {"YMoveFwd", 0x664, "FloatProperty"},
            {"bIs700Distance", 0x668, "BoolProperty"},
            {"bIs1200Distance", 0x669, "BoolProperty"},
            {"bIsTurnOffPhysics", 0x66A, "BoolProperty"},
            {"AttackRange700", 0x66C, "FloatProperty"},
            {"AttackRange1200", 0x670, "FloatProperty"},
            {"AttackRange1500", 0x674, "FloatProperty"},
            {"IsTargetingTag", 0x678, "StructProperty"},
        }};
    };

    struct Hades_Player_LayerAnimInstance
    {
        static constexpr std::string_view Name = "Hades_Player_LayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsMotorcycle = 0x1180;
            static constexpr std::uintptr_t bIsHookshot = 0x1181;
            static constexpr std::uintptr_t bIsTechniqueActive = 0x1182;
            static constexpr std::uintptr_t bIsHadesAO = 0x1183;
            static constexpr std::uintptr_t bIsUpperBodyReplacement = 0x1184;
            static constexpr std::uintptr_t MotorcycleTag = 0x1188;
            static constexpr std::uintptr_t HookshotTag = 0x118C;
            static constexpr std::uintptr_t DisableGrindRailUpperBodyCorrectTag = 0x1190;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsMotorcycle", 0x1180, "BoolProperty"},
            {"bIsHookshot", 0x1181, "BoolProperty"},
            {"bIsTechniqueActive", 0x1182, "BoolProperty"},
            {"bIsHadesAO", 0x1183, "BoolProperty"},
            {"bIsUpperBodyReplacement", 0x1184, "BoolProperty"},
            {"MotorcycleTag", 0x1188, "StructProperty"},
            {"HookshotTag", 0x118C, "StructProperty"},
            {"DisableGrindRailUpperBodyCorrectTag", 0x1190, "StructProperty"},
        }};
    };

    struct TargetingSelectionTask_SunRoseChainWhip
    {
        static constexpr std::string_view Name = "TargetingSelectionTask_SunRoseChainWhip";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSelectionTask_Trace";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceType = 0x28;
            static constexpr std::uintptr_t TraceChannel = 0x29;
            static constexpr std::uintptr_t CollisionProfileName = 0x2C;
            static constexpr std::uintptr_t DefaultSweptTraceRadius = 0x30;
            static constexpr std::uintptr_t DefaultSweptTraceCapsuleHalfHeight = 0x58;
            static constexpr std::uintptr_t DefaultSweptTraceBoxHalfExtentX = 0x80;
            static constexpr std::uintptr_t DefaultSweptTraceBoxHalfExtentY = 0xA8;
            static constexpr std::uintptr_t DefaultSweptTraceBoxHalfExtentZ = 0xD0;
            static constexpr std::uintptr_t DefaultSweptTraceRotation = 0xF8;
            static constexpr std::uintptr_t DefaultTraceLength = 0x110;
            static constexpr std::uintptr_t DefaultSourceOffset = 0x138;
            static constexpr std::uintptr_t ExplicitTraceDirection = 0x150;
            static constexpr std::uintptr_t bComplexTrace = 0x168;
            static constexpr std::uintptr_t bIgnoreInstigatorActor = 0x168;
            static constexpr std::uintptr_t bIgnoreSourceActor = 0x168;
            static constexpr std::uintptr_t bMultiTrace = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"TraceType", 0x28, "EnumProperty"},
            {"TraceChannel", 0x29, "ByteProperty"},
            {"CollisionProfileName", 0x2C, "StructProperty"},
            {"DefaultSweptTraceRadius", 0x30, "StructProperty"},
            {"DefaultSweptTraceCapsuleHalfHeight", 0x58, "StructProperty"},
            {"DefaultSweptTraceBoxHalfExtentX", 0x80, "StructProperty"},
            {"DefaultSweptTraceBoxHalfExtentY", 0xA8, "StructProperty"},
            {"DefaultSweptTraceBoxHalfExtentZ", 0xD0, "StructProperty"},
            {"DefaultSweptTraceRotation", 0xF8, "StructProperty"},
            {"DefaultTraceLength", 0x110, "StructProperty"},
            {"DefaultSourceOffset", 0x138, "StructProperty"},
            {"ExplicitTraceDirection", 0x150, "StructProperty"},
            {"bComplexTrace", 0x168, "BoolProperty"},
            {"bIgnoreInstigatorActor", 0x168, "BoolProperty"},
            {"bIgnoreSourceActor", 0x168, "BoolProperty"},
            {"bMultiTrace", 0x168, "BoolProperty"},
        }};
    };

    struct TargetingSelectionTask_SunRoseChainWhip_Melee
    {
        static constexpr std::string_view Name = "TargetingSelectionTask_SunRoseChainWhip_Melee";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSelectionTask_SunRoseChainWhip";
        struct Offsets
        {
            static constexpr std::uintptr_t YawOffsetDegrees = 0x170;
            static constexpr std::uintptr_t SourceLocationRelativeOffset = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"YawOffsetDegrees", 0x170, "FloatProperty"},
            {"SourceLocationRelativeOffset", 0x178, "StructProperty"},
        }};
    };

}
