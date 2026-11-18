#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteAIServer
{
    struct AIActionAimDownSight
    {
        static constexpr std::string_view Name = "AIActionAimDownSight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionAimDownSightData
    {
        static constexpr std::string_view Name = "AIActionAimDownSightData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIActionApplyGameplayEffect
    {
        static constexpr std::string_view Name = "AIActionApplyGameplayEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionApplyGameplayEffectData
    {
        static constexpr std::string_view Name = "AIActionApplyGameplayEffectData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayEffectClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GameplayEffectClass", 0x28, "ClassProperty"},
        }};
    };

    struct AIActionAxisAlignedRotation
    {
        static constexpr std::string_view Name = "AIActionAxisAlignedRotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionAxisAlignedRotationData
    {
        static constexpr std::string_view Name = "AIActionAxisAlignedRotationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t Direction = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Direction", 0x28, "EnumProperty"},
        }};
    };

    struct AIActionBase
    {
        static constexpr std::string_view Name = "AIActionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionBuild
    {
        static constexpr std::string_view Name = "AIActionBuild";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionBuildData
    {
        static constexpr std::string_view Name = "AIActionBuildData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
            static constexpr std::uintptr_t BuildingType = 0x2C;
            static constexpr std::uintptr_t GridCellOffsetForward = 0x2D;
            static constexpr std::uintptr_t GridCellOffsetHeight = 0x2E;
            static constexpr std::uintptr_t bCheckForMaterials = 0x2F;
            static constexpr std::uintptr_t bConsumesMaterials = 0x2F;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"duration", 0x28, "FloatProperty"},
            {"BuildingType", 0x2C, "EnumProperty"},
            {"GridCellOffsetForward", 0x2D, "Int8Property"},
            {"GridCellOffsetHeight", 0x2E, "Int8Property"},
            {"bCheckForMaterials", 0x2F, "BoolProperty"},
            {"bConsumesMaterials", 0x2F, "BoolProperty"},
        }};
    };

    struct AIActionCrouch
    {
        static constexpr std::string_view Name = "AIActionCrouch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionCrouchData
    {
        static constexpr std::string_view Name = "AIActionCrouchData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t bUncrouchOnStop = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUncrouchOnStop", 0x28, "BoolProperty"},
        }};
    };

    struct AIActionData
    {
        static constexpr std::string_view Name = "AIActionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIActionEditBuilding
    {
        static constexpr std::string_view Name = "AIActionEditBuilding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionEditBuildingData
    {
        static constexpr std::string_view Name = "AIActionEditBuildingData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t EditBuildingType = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EditBuildingType", 0x28, "EnumProperty"},
        }};
    };

    struct AIActionEquipBuildTool
    {
        static constexpr std::string_view Name = "AIActionEquipBuildTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionEquipBuildToolData
    {
        static constexpr std::string_view Name = "AIActionEquipBuildToolData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIActionEquipItem
    {
        static constexpr std::string_view Name = "AIActionEquipItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionEquipItemData
    {
        static constexpr std::string_view Name = "AIActionEquipItemData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemTag", 0x28, "StructProperty"},
        }};
    };

    struct AIActionFirePrimary
    {
        static constexpr std::string_view Name = "AIActionFirePrimary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionFirePrimaryData
    {
        static constexpr std::string_view Name = "AIActionFirePrimaryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"duration", 0x28, "FloatProperty"},
        }};
    };

    struct AIActionFocus
    {
        static constexpr std::string_view Name = "AIActionFocus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionFocusData
    {
        static constexpr std::string_view Name = "AIActionFocusData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
            static constexpr std::uintptr_t FocusLocationKeyName = 0x2C;
            static constexpr std::uintptr_t bSetControlRotation = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"duration", 0x28, "FloatProperty"},
            {"FocusLocationKeyName", 0x2C, "NameProperty"},
            {"bSetControlRotation", 0x30, "BoolProperty"},
        }};
    };

    struct AIActionJump
    {
        static constexpr std::string_view Name = "AIActionJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionJumpData
    {
        static constexpr std::string_view Name = "AIActionJumpData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t bCheckHeightInBuildCell = 0x28;
            static constexpr std::uintptr_t HeightBuildCellPercentageMin = 0x2C;
            static constexpr std::uintptr_t HeightBuildCellPercentageMax = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bCheckHeightInBuildCell", 0x28, "BoolProperty"},
            {"HeightBuildCellPercentageMin", 0x2C, "FloatProperty"},
            {"HeightBuildCellPercentageMax", 0x30, "FloatProperty"},
        }};
    };

    struct AIActionMove
    {
        static constexpr std::string_view Name = "AIActionMove";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionMoveData
    {
        static constexpr std::string_view Name = "AIActionMoveData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
            static constexpr std::uintptr_t Direction = 0x30;
            static constexpr std::uintptr_t bAutoSprintEnabled = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"duration", 0x28, "FloatProperty"},
            {"Direction", 0x30, "StructProperty"},
            {"bAutoSprintEnabled", 0x48, "BoolProperty"},
        }};
    };

    struct AIActionReleaseBuildTool
    {
        static constexpr std::string_view Name = "AIActionReleaseBuildTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionReleaseBuildToolData
    {
        static constexpr std::string_view Name = "AIActionReleaseBuildToolData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIActionRotation
    {
        static constexpr std::string_view Name = "AIActionRotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedRotationSpeed = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedRotationSpeed", 0x40, "StructProperty"},
        }};
    };

    struct AIActionRotationData
    {
        static constexpr std::string_view Name = "AIActionRotationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
            static constexpr std::uintptr_t duration = 0x28;
            static constexpr std::uintptr_t Rotation = 0x30;
            static constexpr std::uintptr_t ComputeSpeedBasedOnDuration = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"duration", 0x28, "FloatProperty"},
            {"Rotation", 0x30, "StructProperty"},
            {"ComputeSpeedBasedOnDuration", 0x48, "BoolProperty"},
        }};
    };

    struct AIActionSequencer_Sequence
    {
        static constexpr std::string_view Name = "AIActionSequencer_Sequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bSkillRatingRequired = 0x28;
            static constexpr std::uintptr_t MinSkillRating = 0x2C;
            static constexpr std::uintptr_t MaxSkillRating = 0x30;
            static constexpr std::uintptr_t MaterialsCountRequired = 0x34;
            static constexpr std::uintptr_t bBuildingGridFreeSpaceRequired = 0x38;
            static constexpr std::uintptr_t AboveFreeCellsNeededCount = 0x39;
            static constexpr std::uintptr_t Tracks = 0x40;
            static constexpr std::uintptr_t NextTrackHandle = 0x50;
            static constexpr std::uintptr_t NextActionHandle = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bSkillRatingRequired", 0x28, "BoolProperty"},
            {"MinSkillRating", 0x2C, "FloatProperty"},
            {"MaxSkillRating", 0x30, "FloatProperty"},
            {"MaterialsCountRequired", 0x34, "FloatProperty"},
            {"bBuildingGridFreeSpaceRequired", 0x38, "BoolProperty"},
            {"AboveFreeCellsNeededCount", 0x39, "Int8Property"},
            {"Tracks", 0x40, "ArrayProperty"},
            {"NextTrackHandle", 0x50, "UInt32Property"},
            {"NextActionHandle", 0x54, "UInt32Property"},
        }};
    };

    struct AIActionSlide
    {
        static constexpr std::string_view Name = "AIActionSlide";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionSlideData
    {
        static constexpr std::string_view Name = "AIActionSlideData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIActionTacticalSprint
    {
        static constexpr std::string_view Name = "AIActionTacticalSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionTacticalSprintData
    {
        static constexpr std::string_view Name = "AIActionTacticalSprintData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIActionUncrouch
    {
        static constexpr std::string_view Name = "AIActionUncrouch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x28;
            static constexpr std::uintptr_t CachedActionData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedOwnerController", 0x28, "WeakObjectProperty"},
            {"CachedActionData", 0x30, "WeakObjectProperty"},
        }};
    };

    struct AIActionUncrouchData
    {
        static constexpr std::string_view Name = "AIActionUncrouchData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIActionData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAICombatTokenTester
    {
        static constexpr std::string_view Name = "FortAICombatTokenTester";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Character";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenProviderData = 0x640;
            static constexpr std::uintptr_t TokenConsumerData = 0x678;
            static constexpr std::uintptr_t CombatTokenTesterDebugDrawComponent = 0x738;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TokenProviderData", 0x640, "StructProperty"},
            {"TokenConsumerData", 0x678, "StructProperty"},
            {"CombatTokenTesterDebugDrawComponent", 0x738, "ObjectProperty"},
        }};
    };

    struct FortAICombatTokenTesterDebugDrawComponent
    {
        static constexpr std::string_view Name = "FortAICombatTokenTesterDebugDrawComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_AimDownSight
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_AimDownSight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponKeyName = 0xA8;
            static constexpr std::uintptr_t ThrowableAttacksName = 0xAC;
            static constexpr std::uintptr_t TargetActorName = 0xB0;
            static constexpr std::uintptr_t UrgentMovementName = 0xB4;
            static constexpr std::uintptr_t bSkipTargetChecks = 0xB8;
            static constexpr std::uintptr_t CacheAimingDigestedSkillSet = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WeaponKeyName", 0xA8, "NameProperty"},
            {"ThrowableAttacksName", 0xAC, "NameProperty"},
            {"TargetActorName", 0xB0, "NameProperty"},
            {"UrgentMovementName", 0xB4, "NameProperty"},
            {"bSkipTargetChecks", 0xB8, "BoolProperty"},
            {"CacheAimingDigestedSkillSet", 0xC0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Ambush
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Ambush";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t LastKnownPositionName = 0x1B0;
            static constexpr std::uintptr_t DestinationKeyName = 0x1B4;
            static constexpr std::uintptr_t MoveToDestinationKeyName = 0x1B8;
            static constexpr std::uintptr_t AggressivenessName = 0x1BC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LastKnownPositionName", 0x1B0, "NameProperty"},
            {"DestinationKeyName", 0x1B4, "NameProperty"},
            {"MoveToDestinationKeyName", 0x1B8, "NameProperty"},
            {"AggressivenessName", 0x1BC, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_ApproachNearbyPawns
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_ApproachNearbyPawns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxApproaches = 0x1D0;
            static constexpr std::uintptr_t PerceptionConfiguration = 0x200;
            static constexpr std::uintptr_t EnableKeyName = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxApproaches", 0x1D0, "StructProperty"},
            {"PerceptionConfiguration", 0x200, "StructProperty"},
            {"EnableKeyName", 0x2C0, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Attack
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Attack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponKeyName = 0x1B4;
            static constexpr std::uintptr_t MoveToDestinationKeyName = 0x1B8;
            static constexpr std::uintptr_t TargetActorName = 0x1BC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WeaponKeyName", 0x1B4, "NameProperty"},
            {"MoveToDestinationKeyName", 0x1B8, "NameProperty"},
            {"TargetActorName", 0x1BC, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_AvoidThreat
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_AvoidThreat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t AvoidThreatKeyName = 0x1B0;
            static constexpr std::uintptr_t AvoidThreatMovementStateKeyName = 0x1B4;
            static constexpr std::uintptr_t AvoidThreatDestinationKeyName = 0x1B8;
            static constexpr std::uintptr_t CurrentThreatActorAvoiding = 0x1C8;
            static constexpr std::uintptr_t CacheEMDigestedSkillSet = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AvoidThreatKeyName", 0x1B0, "NameProperty"},
            {"AvoidThreatMovementStateKeyName", 0x1B4, "NameProperty"},
            {"AvoidThreatDestinationKeyName", 0x1B8, "NameProperty"},
            {"CurrentThreatActorAvoiding", 0x1C8, "ObjectProperty"},
            {"CacheEMDigestedSkillSet", 0x1D0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Bunker
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Bunker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildExecutionStatusKeyName = 0x1B0;
            static constexpr std::uintptr_t HealingStatusKeyName = 0x1B4;
            static constexpr std::uintptr_t DangerTags = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BuildExecutionStatusKeyName", 0x1B0, "NameProperty"},
            {"HealingStatusKeyName", 0x1B4, "NameProperty"},
            {"DangerTags", 0x1B8, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_CanMove
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_CanMove";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CanMoveKeyName = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CanMoveKeyName", 0xA8, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_CharacterLaunched
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_CharacterLaunched";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t bSteerInSameDirectionAsLaunchVelocity = 0xA8;
            static constexpr std::uintptr_t CharacterLaunchedExecutionStatusKeyName = 0xAC;
            static constexpr std::uintptr_t SteerDirectionKeyName = 0xB0;
            static constexpr std::uintptr_t LastLaunchVelocity = 0xB8;
            static constexpr std::uintptr_t CachedMovementSkillSet = 0xD0;
            static constexpr std::uintptr_t CachedBehaviorControlsRuntimeParameters = 0xD8;
            static constexpr std::uintptr_t LastZiplineTimestamp = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bSteerInSameDirectionAsLaunchVelocity", 0xA8, "BoolProperty"},
            {"CharacterLaunchedExecutionStatusKeyName", 0xAC, "NameProperty"},
            {"SteerDirectionKeyName", 0xB0, "NameProperty"},
            {"LastLaunchVelocity", 0xB8, "StructProperty"},
            {"CachedMovementSkillSet", 0xD0, "ObjectProperty"},
            {"CachedBehaviorControlsRuntimeParameters", 0xD8, "ObjectProperty"},
            {"LastZiplineTimestamp", 0xE0, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Conversation
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Conversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t IsInConversationStateName = 0xA8;
            static constexpr std::uintptr_t ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames = 0xB0;
            static constexpr std::uintptr_t ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames = 0xD0;
            static constexpr std::uintptr_t MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames = 0xF0;
            static constexpr std::uintptr_t bForceStopIfNoPlayerNearby = 0x110;
            static constexpr std::uintptr_t bSetControllerFocusOnParticipantFocus = 0x111;
            static constexpr std::uintptr_t HolsterWeaponOnConversationEnter = 0x118;
            static constexpr std::uintptr_t RequiredTagQueryToStopNearActor = 0x140;
            static constexpr std::uintptr_t RequiredSelfTagQueryToStopNearActor = 0x188;
            static constexpr std::uintptr_t ConversationTimeout = 0x1D0;
            static constexpr std::uintptr_t ConversationTimeoutWithOtherPlayerNearby = 0x1F8;
            static constexpr std::uintptr_t BanTimeAfterTimeout = 0x220;
            static constexpr std::uintptr_t ConversationRuntimeParameters = 0x248;
            static constexpr std::uintptr_t ActorToFocus = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"IsInConversationStateName", 0xA8, "NameProperty"},
            {"ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames", 0xB0, "ArrayProperty"},
            {"ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames", 0xD0, "ArrayProperty"},
            {"MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames", 0xF0, "ArrayProperty"},
            {"bForceStopIfNoPlayerNearby", 0x110, "BoolProperty"},
            {"bSetControllerFocusOnParticipantFocus", 0x111, "BoolProperty"},
            {"HolsterWeaponOnConversationEnter", 0x118, "StructProperty"},
            {"RequiredTagQueryToStopNearActor", 0x140, "StructProperty"},
            {"RequiredSelfTagQueryToStopNearActor", 0x188, "StructProperty"},
            {"ConversationTimeout", 0x1D0, "StructProperty"},
            {"ConversationTimeoutWithOtherPlayerNearby", 0x1F8, "StructProperty"},
            {"BanTimeAfterTimeout", 0x220, "StructProperty"},
            {"ConversationRuntimeParameters", 0x248, "ObjectProperty"},
            {"ActorToFocus", 0x250, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Converted
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Converted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldMoveTowardsConverterName = 0x1B0;
            static constexpr std::uintptr_t ShouldTeleportTowardsConverterName = 0x1B4;
            static constexpr std::uintptr_t ConvertedAllowPatrolAroundName = 0x1B8;
            static constexpr std::uintptr_t ConvertedAllowScanAroundWhenWaitingName = 0x1BC;
            static constexpr std::uintptr_t ConvertedDestinationName = 0x1C0;
            static constexpr std::uintptr_t CrouchExecutionStatusName = 0x1C4;
            static constexpr std::uintptr_t TeleportLocationProjectionExtent = 0x1C8;
            static constexpr std::uintptr_t MovingFromLosLocationProjectionExtent = 0x1E0;
            static constexpr std::uintptr_t AmountOfTimesNonHostilePawnNeedsToBeDamagedForTargeting = 0x1F8;
            static constexpr std::uintptr_t TimeToTrackDamagedActors = 0x220;
            static constexpr std::uintptr_t NearbyPlayerDistanceForTeleportTowardsConverter = 0x248;
            static constexpr std::uintptr_t PlayerFOVForNearbyPlayersVisibility = 0x270;
            static constexpr std::uintptr_t TeleportToConverterQueryTemplate = 0x298;
            static constexpr std::uintptr_t TeleportToConverterRunMode = 0x2A0;
            static constexpr std::uintptr_t AbilitiesToMimic = 0x2A8;
            static constexpr std::uintptr_t RequiredTagQueryToTargetConverterDamagedPawn = 0x2B8;
            static constexpr std::uintptr_t UpdateConvertedDestinationWhileUsingNavLinks = 0x300;
            static constexpr std::uintptr_t UseExecutionStatusForMoveTowardConverter = 0x318;
            static constexpr std::uintptr_t ConverterPawn = 0x358;
            static constexpr std::uintptr_t CachedAIBotConvertParameters = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"ShouldMoveTowardsConverterName", 0x1B0, "NameProperty"},
            {"ShouldTeleportTowardsConverterName", 0x1B4, "NameProperty"},
            {"ConvertedAllowPatrolAroundName", 0x1B8, "NameProperty"},
            {"ConvertedAllowScanAroundWhenWaitingName", 0x1BC, "NameProperty"},
            {"ConvertedDestinationName", 0x1C0, "NameProperty"},
            {"CrouchExecutionStatusName", 0x1C4, "NameProperty"},
            {"TeleportLocationProjectionExtent", 0x1C8, "StructProperty"},
            {"MovingFromLosLocationProjectionExtent", 0x1E0, "StructProperty"},
            {"AmountOfTimesNonHostilePawnNeedsToBeDamagedForTargeting", 0x1F8, "StructProperty"},
            {"TimeToTrackDamagedActors", 0x220, "StructProperty"},
            {"NearbyPlayerDistanceForTeleportTowardsConverter", 0x248, "StructProperty"},
            {"PlayerFOVForNearbyPlayersVisibility", 0x270, "StructProperty"},
            {"TeleportToConverterQueryTemplate", 0x298, "ObjectProperty"},
            {"TeleportToConverterRunMode", 0x2A0, "ByteProperty"},
            {"AbilitiesToMimic", 0x2A8, "ArrayProperty"},
            {"RequiredTagQueryToTargetConverterDamagedPawn", 0x2B8, "StructProperty"},
            {"UpdateConvertedDestinationWhileUsingNavLinks", 0x300, "StructProperty"},
            {"UseExecutionStatusForMoveTowardConverter", 0x318, "StructProperty"},
            {"ConverterPawn", 0x358, "ObjectProperty"},
            {"CachedAIBotConvertParameters", 0x360, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_DBNO
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_DBNO";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t DBNODestinationKeyName = 0x1B0;
            static constexpr std::uintptr_t bAllowReachSameFactionNPCs = 0x1B6;
            static constexpr std::uintptr_t bAllowReachSquadmates = 0x1B6;
            static constexpr std::uintptr_t SupportsGiveUp = 0x1B8;
            static constexpr std::uintptr_t AllyPawns = 0x1E8;
            static constexpr std::uintptr_t CachedCurrentDestination = 0x1F8;
            static constexpr std::uintptr_t DBNOSkillSet = 0x210;
            static constexpr std::uintptr_t CachedCoverComponent = 0x218;
            static constexpr std::uintptr_t DBNOBehaviorRuntimeParameters = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DBNODestinationKeyName", 0x1B0, "NameProperty"},
            {"bAllowReachSameFactionNPCs", 0x1B6, "BoolProperty"},
            {"bAllowReachSquadmates", 0x1B6, "BoolProperty"},
            {"SupportsGiveUp", 0x1B8, "StructProperty"},
            {"AllyPawns", 0x1E8, "ArrayProperty"},
            {"CachedCurrentDestination", 0x1F8, "StructProperty"},
            {"DBNOSkillSet", 0x210, "ObjectProperty"},
            {"CachedCoverComponent", 0x218, "ObjectProperty"},
            {"DBNOBehaviorRuntimeParameters", 0x220, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_DanceOnKill
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_DanceOnKill";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t LastKillPositionKeyName = 0xA8;
            static constexpr std::uintptr_t LastKillTimeKeyName = 0xAC;
            static constexpr std::uintptr_t LastKillWasABotKeyName = 0xB0;
            static constexpr std::uintptr_t PlayEmoteExecutionStatusKeyName = 0xB4;
            static constexpr std::uintptr_t CacheEmoteDigestedSkillSet = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LastKillPositionKeyName", 0xA8, "NameProperty"},
            {"LastKillTimeKeyName", 0xAC, "NameProperty"},
            {"LastKillWasABotKeyName", 0xB0, "NameProperty"},
            {"PlayEmoteExecutionStatusKeyName", 0xB4, "NameProperty"},
            {"CacheEmoteDigestedSkillSet", 0xC8, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_DangerDetection
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_DangerDetection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_TagQuery";
        struct Offsets
        {
            static constexpr std::uintptr_t DangerNavAreaClass = 0x118;
            static constexpr std::uintptr_t TimeToCheckForDangerAfterValidQuery = 0x120;
            static constexpr std::uintptr_t MaxRadiusToSearchForSafePlace = 0x124;
            static constexpr std::uintptr_t DangerZoneDetectedExecutionStatusName = 0x128;
            static constexpr std::uintptr_t DangerZoneDetectedSafeLocationKeyName = 0x12C;
            static constexpr std::uintptr_t CachedMovementSkillSet = 0x138;
            static constexpr std::uintptr_t CacheZoneManager = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DangerNavAreaClass", 0x118, "ClassProperty"},
            {"TimeToCheckForDangerAfterValidQuery", 0x120, "FloatProperty"},
            {"MaxRadiusToSearchForSafePlace", 0x124, "FloatProperty"},
            {"DangerZoneDetectedExecutionStatusName", 0x128, "NameProperty"},
            {"DangerZoneDetectedSafeLocationKeyName", 0x12C, "NameProperty"},
            {"CachedMovementSkillSet", 0x138, "ObjectProperty"},
            {"CacheZoneManager", 0x140, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_DefensiveBuilding
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_DefensiveBuilding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBuildingDigestedSkillSet = 0xB0;
            static constexpr std::uintptr_t CachedBuildingComponent = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedBuildingDigestedSkillSet", 0xB0, "ObjectProperty"},
            {"CachedBuildingComponent", 0xB8, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Disengagement
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Disengagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorKeyName = 0xA8;
            static constexpr std::uintptr_t DisengagementReasonKeyName = 0xAC;
            static constexpr std::uintptr_t TargetInterestEnabled = 0xB0;
            static constexpr std::uintptr_t TargetInterestInitialDuration = 0xD8;
            static constexpr std::uintptr_t TargetInterestOnDamageDuration = 0x100;
            static constexpr std::uintptr_t TargetInterestStartingMinDistance = 0x128;
            static constexpr std::uintptr_t TargetInterestOngoingMinDistance = 0x150;
            static constexpr std::uintptr_t TargetInterestCanBeTriggeredInsideLeash = 0x178;
            static constexpr std::uintptr_t TargetInterestStartingMinDistanceSqr = 0x1A0;
            static constexpr std::uintptr_t TargetInterestOngoingMinDistanceSqr = 0x1A4;
            static constexpr std::uintptr_t TargetReachabilityEnabled = 0x1B8;
            static constexpr std::uintptr_t TargetIsReachableKeyName = 0x1E0;
            static constexpr std::uintptr_t TargetReachabilityMaxDistance = 0x1E8;
            static constexpr std::uintptr_t TargetReachabilityMaxDistanceSqr = 0x210;
            static constexpr std::uintptr_t CachedLeashComponent = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"TargetActorKeyName", 0xA8, "NameProperty"},
            {"DisengagementReasonKeyName", 0xAC, "NameProperty"},
            {"TargetInterestEnabled", 0xB0, "StructProperty"},
            {"TargetInterestInitialDuration", 0xD8, "StructProperty"},
            {"TargetInterestOnDamageDuration", 0x100, "StructProperty"},
            {"TargetInterestStartingMinDistance", 0x128, "StructProperty"},
            {"TargetInterestOngoingMinDistance", 0x150, "StructProperty"},
            {"TargetInterestCanBeTriggeredInsideLeash", 0x178, "StructProperty"},
            {"TargetInterestStartingMinDistanceSqr", 0x1A0, "FloatProperty"},
            {"TargetInterestOngoingMinDistanceSqr", 0x1A4, "FloatProperty"},
            {"TargetReachabilityEnabled", 0x1B8, "StructProperty"},
            {"TargetIsReachableKeyName", 0x1E0, "NameProperty"},
            {"TargetReachabilityMaxDistance", 0x1E8, "StructProperty"},
            {"TargetReachabilityMaxDistanceSqr", 0x210, "FloatProperty"},
            {"CachedLeashComponent", 0x228, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Escalate
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Escalate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBotController = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedBotController", 0xA0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Escape
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Escape";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t EscapeTags = 0x1B0;
            static constexpr std::uintptr_t CooldownBetweenAggressivenessChanges = 0x1D0;
            static constexpr std::uintptr_t AggressivenessName = 0x1D4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EscapeTags", 0x1B0, "StructProperty"},
            {"CooldownBetweenAggressivenessChanges", 0x1D0, "FloatProperty"},
            {"AggressivenessName", 0x1D4, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_EvasiveManeuvers
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_EvasiveManeuvers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CrouchExecutionStatusName = 0x120;
            static constexpr std::uintptr_t JumpExecutionStatusName = 0x124;
            static constexpr std::uintptr_t JetpackStrafeExecutionStatusName = 0x128;
            static constexpr std::uintptr_t DodgeName = 0x12C;
            static constexpr std::uintptr_t DestinationKeyName = 0x130;
            static constexpr std::uintptr_t UrgentMoveKeyName = 0x134;
            static constexpr std::uintptr_t bDoCrouching = 0x144;
            static constexpr std::uintptr_t bDoDodging = 0x145;
            static constexpr std::uintptr_t bDoJumping = 0x146;
            static constexpr std::uintptr_t bDoJumpingDistanceCheck = 0x147;
            static constexpr std::uintptr_t bDoJetpackStrafing = 0x148;
            static constexpr std::uintptr_t bDoJetpackStrafingDistanceCheck = 0x149;
            static constexpr std::uintptr_t JetpackStrafingRequiredFuelPercent = 0x14C;
            static constexpr std::uintptr_t JetpackStrafeNavPadding = 0x150;
            static constexpr std::uintptr_t RequiredTagQuery = 0x158;
            static constexpr std::uintptr_t JetpackRequiredTagQuery = 0x1A0;
            static constexpr std::uintptr_t JumpRequiredTagQuery = 0x1E8;
            static constexpr std::uintptr_t ForcedPerkClass = 0x230;
            static constexpr std::uintptr_t CacheEMDigestedSkillSet = 0x238;
            static constexpr std::uintptr_t CachedPerksComponent = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"CrouchExecutionStatusName", 0x120, "NameProperty"},
            {"JumpExecutionStatusName", 0x124, "NameProperty"},
            {"JetpackStrafeExecutionStatusName", 0x128, "NameProperty"},
            {"DodgeName", 0x12C, "NameProperty"},
            {"DestinationKeyName", 0x130, "NameProperty"},
            {"UrgentMoveKeyName", 0x134, "NameProperty"},
            {"bDoCrouching", 0x144, "BoolProperty"},
            {"bDoDodging", 0x145, "BoolProperty"},
            {"bDoJumping", 0x146, "BoolProperty"},
            {"bDoJumpingDistanceCheck", 0x147, "BoolProperty"},
            {"bDoJetpackStrafing", 0x148, "BoolProperty"},
            {"bDoJetpackStrafingDistanceCheck", 0x149, "BoolProperty"},
            {"JetpackStrafingRequiredFuelPercent", 0x14C, "FloatProperty"},
            {"JetpackStrafeNavPadding", 0x150, "FloatProperty"},
            {"RequiredTagQuery", 0x158, "StructProperty"},
            {"JetpackRequiredTagQuery", 0x1A0, "StructProperty"},
            {"JumpRequiredTagQuery", 0x1E8, "StructProperty"},
            {"ForcedPerkClass", 0x230, "ClassProperty"},
            {"CacheEMDigestedSkillSet", 0x238, "ObjectProperty"},
            {"CachedPerksComponent", 0x240, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Flanking
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Flanking";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAIDirector = 0x1B0;
            static constexpr std::uintptr_t CachedRangeAttackDigestedSkillSet = 0x1B8;
            static constexpr std::uintptr_t FlankingExecutionStatusKeyName = 0x1C0;
            static constexpr std::uintptr_t FlankingMovementStateKeyName = 0x1C4;
            static constexpr std::uintptr_t FlankingDestinationKeyName = 0x1C8;
            static constexpr std::uintptr_t LocationsToEvaluate = 0x1D8;
            static constexpr std::uintptr_t BestLocations = 0x1E8;
            static constexpr std::uintptr_t ActorsInArea = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CachedAIDirector", 0x1B0, "ObjectProperty"},
            {"CachedRangeAttackDigestedSkillSet", 0x1B8, "ObjectProperty"},
            {"FlankingExecutionStatusKeyName", 0x1C0, "NameProperty"},
            {"FlankingMovementStateKeyName", 0x1C4, "NameProperty"},
            {"FlankingDestinationKeyName", 0x1C8, "NameProperty"},
            {"LocationsToEvaluate", 0x1D8, "ArrayProperty"},
            {"BestLocations", 0x1E8, "ArrayProperty"},
            {"ActorsInArea", 0x1F8, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Flee
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Flee";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDistanceFromTarget = 0x1B0;
            static constexpr std::uintptr_t MinValidDistanceForFleeLocation = 0x1B4;
            static constexpr std::uintptr_t FleeDistance = 0x1B8;
            static constexpr std::uintptr_t MaxDistanceFromTargetWhenFleeing = 0x1BC;
            static constexpr std::uintptr_t MinDistanceHysteresisWhenChangingTarget = 0x1C0;
            static constexpr std::uintptr_t FleeKeyName = 0x1C4;
            static constexpr std::uintptr_t FleeMovementStateKeyName = 0x1C8;
            static constexpr std::uintptr_t FleeDestinationKeyName = 0x1CC;
            static constexpr std::uintptr_t FleeActorKeyName = 0x1D0;
            static constexpr std::uintptr_t CurrentActorFleeingFrom = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"MinDistanceFromTarget", 0x1B0, "FloatProperty"},
            {"MinValidDistanceForFleeLocation", 0x1B4, "FloatProperty"},
            {"FleeDistance", 0x1B8, "FloatProperty"},
            {"MaxDistanceFromTargetWhenFleeing", 0x1BC, "FloatProperty"},
            {"MinDistanceHysteresisWhenChangingTarget", 0x1C0, "FloatProperty"},
            {"FleeKeyName", 0x1C4, "NameProperty"},
            {"FleeMovementStateKeyName", 0x1C8, "NameProperty"},
            {"FleeDestinationKeyName", 0x1CC, "NameProperty"},
            {"FleeActorKeyName", 0x1D0, "NameProperty"},
            {"CurrentActorFleeingFrom", 0x1E0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_FreeFalling
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_FreeFalling";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t DiveExecutionStatusKeyName = 0xA8;
            static constexpr std::uintptr_t DiveDestinationKeyName = 0xAC;
            static constexpr std::uintptr_t GlideExecutionStatusKeyName = 0xB0;
            static constexpr std::uintptr_t GlideDestinationKeyName = 0xB4;
            static constexpr std::uintptr_t JumpOffBusDestinationName = 0xB8;
            static constexpr std::uintptr_t AlertLevelName = 0xBC;
            static constexpr std::uintptr_t bRandomlySelectFreeFallingMode = 0xCC;
            static constexpr std::uintptr_t IdleWeight = 0xD0;
            static constexpr std::uintptr_t RandomWeight = 0xF8;
            static constexpr std::uintptr_t TowardNearestAllyWeight = 0x120;
            static constexpr std::uintptr_t FreeFallingMode = 0x148;
            static constexpr std::uintptr_t bIsAlerted = 0x149;
            static constexpr std::uintptr_t MaxOffsetRangeFromNearestAlly = 0x14C;
            static constexpr std::uintptr_t bGlideAllowed = 0x150;
            static constexpr std::uintptr_t bShouldRecomputeDestinationWhenTowardNearestAlly = 0x150;
            static constexpr std::uintptr_t bShouldSearchAllyInSquad = 0x150;
            static constexpr std::uintptr_t bShouldSearchAllyInTeam = 0x150;
            static constexpr std::uintptr_t SkyTubeDivingStuckTimeThreshold = 0x154;
            static constexpr std::uintptr_t NearestAlly = 0x178;
            static constexpr std::uintptr_t CachedLatestDestination = 0x180;
            static constexpr std::uintptr_t CacheMovementDigestedSkillSet = 0x198;
            static constexpr std::uintptr_t CachedSkyTube = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"DiveExecutionStatusKeyName", 0xA8, "NameProperty"},
            {"DiveDestinationKeyName", 0xAC, "NameProperty"},
            {"GlideExecutionStatusKeyName", 0xB0, "NameProperty"},
            {"GlideDestinationKeyName", 0xB4, "NameProperty"},
            {"JumpOffBusDestinationName", 0xB8, "NameProperty"},
            {"AlertLevelName", 0xBC, "NameProperty"},
            {"bRandomlySelectFreeFallingMode", 0xCC, "BoolProperty"},
            {"IdleWeight", 0xD0, "StructProperty"},
            {"RandomWeight", 0xF8, "StructProperty"},
            {"TowardNearestAllyWeight", 0x120, "StructProperty"},
            {"FreeFallingMode", 0x148, "EnumProperty"},
            {"bIsAlerted", 0x149, "BoolProperty"},
            {"MaxOffsetRangeFromNearestAlly", 0x14C, "FloatProperty"},
            {"bGlideAllowed", 0x150, "BoolProperty"},
            {"bShouldRecomputeDestinationWhenTowardNearestAlly", 0x150, "BoolProperty"},
            {"bShouldSearchAllyInSquad", 0x150, "BoolProperty"},
            {"bShouldSearchAllyInTeam", 0x150, "BoolProperty"},
            {"SkyTubeDivingStuckTimeThreshold", 0x154, "FloatProperty"},
            {"NearestAlly", 0x178, "ObjectProperty"},
            {"CachedLatestDestination", 0x180, "StructProperty"},
            {"CacheMovementDigestedSkillSet", 0x198, "ObjectProperty"},
            {"CachedSkyTube", 0x1B0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Ground
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Ground";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceTypeRaycastDir = 0xA8;
            static constexpr std::uintptr_t CachedBehaviorRuntimeParameters = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SurfaceTypeRaycastDir", 0xA8, "StructProperty"},
            {"CachedBehaviorRuntimeParameters", 0x130, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_HandleFocusing
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_HandleFocusing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorName = 0xA8;
            static constexpr std::uintptr_t InteractActorName = 0xAC;
            static constexpr std::uintptr_t InterlocutorName = 0xB0;
            static constexpr std::uintptr_t TargetLocationName = 0xB4;
            static constexpr std::uintptr_t FocusActorName = 0xB8;
            static constexpr std::uintptr_t FocalPointName = 0xBC;
            static constexpr std::uintptr_t WeaponFireName = 0xC0;
            static constexpr std::uintptr_t RangeAttackIsReadyToFireName = 0xC4;
            static constexpr std::uintptr_t WeaponTriggerMeleeName = 0xC8;
            static constexpr std::uintptr_t LastKnownPositionName = 0xCC;
            static constexpr std::uintptr_t TacticalSprintExecutionStatusName = 0xD0;
            static constexpr std::uintptr_t FocusingBehavior = 0xF0;
            static constexpr std::uintptr_t NoRangedWeaponFocusBehavior = 0x120;
            static constexpr std::uintptr_t bPrioritizeThreatOverCurrentTarget = 0x150;
            static constexpr std::uintptr_t bUseTargetActorKeyAsFocusTarget = 0x168;
            static constexpr std::uintptr_t bFocusOnTargetLocation = 0x180;
            static constexpr std::uintptr_t AmbushMaxLKPLookAtAngleDegree = 0x198;
            static constexpr std::uintptr_t bStopFocusingWhenMoving = 0x1B0;
            static constexpr std::uintptr_t ResumeFocusingWhenMovingDist = 0x1C8;
            static constexpr std::uintptr_t StopFocusingWhenMovingDist = 0x1E0;
            static constexpr std::uintptr_t BlockStopFocusingWhenActorWithinDistName = 0x1F8;
            static constexpr std::uintptr_t BlockStopFocusingWhenActorWithinDist = 0x200;
            static constexpr std::uintptr_t bAllowFocusGlancesWhileMoving = 0x218;
            static constexpr std::uintptr_t FocusGlanceWhileMovingStartDurationMin = 0x230;
            static constexpr std::uintptr_t FocusGlanceWhileMovingStartDurationMax = 0x248;
            static constexpr std::uintptr_t FocusGlanceWhileMovingStopDurationMin = 0x260;
            static constexpr std::uintptr_t FocusGlanceWhileMovingStopDurationMax = 0x278;
            static constexpr std::uintptr_t ResumeFocusWhenDamagedDurationMin = 0x290;
            static constexpr std::uintptr_t ResumeFocusWhenDamagedDurationMax = 0x2A8;
            static constexpr std::uintptr_t bResumeFocusWhileSliding = 0x2C0;
            static constexpr std::uintptr_t ClearFocusOnTacticalSprint = 0x2D8;
            static constexpr std::uintptr_t CacheAimingDigestedSkillSet = 0x2F0;
            static constexpr std::uintptr_t CacheMovementDigestedSkillSet = 0x2F8;
            static constexpr std::uintptr_t LastTargetedThreat = 0x300;
            static constexpr std::uintptr_t FocusActor = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 35> Properties{{
            {"TargetActorName", 0xA8, "NameProperty"},
            {"InteractActorName", 0xAC, "NameProperty"},
            {"InterlocutorName", 0xB0, "NameProperty"},
            {"TargetLocationName", 0xB4, "NameProperty"},
            {"FocusActorName", 0xB8, "NameProperty"},
            {"FocalPointName", 0xBC, "NameProperty"},
            {"WeaponFireName", 0xC0, "NameProperty"},
            {"RangeAttackIsReadyToFireName", 0xC4, "NameProperty"},
            {"WeaponTriggerMeleeName", 0xC8, "NameProperty"},
            {"LastKnownPositionName", 0xCC, "NameProperty"},
            {"TacticalSprintExecutionStatusName", 0xD0, "NameProperty"},
            {"FocusingBehavior", 0xF0, "StructProperty"},
            {"NoRangedWeaponFocusBehavior", 0x120, "StructProperty"},
            {"bPrioritizeThreatOverCurrentTarget", 0x150, "StructProperty"},
            {"bUseTargetActorKeyAsFocusTarget", 0x168, "StructProperty"},
            {"bFocusOnTargetLocation", 0x180, "StructProperty"},
            {"AmbushMaxLKPLookAtAngleDegree", 0x198, "StructProperty"},
            {"bStopFocusingWhenMoving", 0x1B0, "StructProperty"},
            {"ResumeFocusingWhenMovingDist", 0x1C8, "StructProperty"},
            {"StopFocusingWhenMovingDist", 0x1E0, "StructProperty"},
            {"BlockStopFocusingWhenActorWithinDistName", 0x1F8, "NameProperty"},
            {"BlockStopFocusingWhenActorWithinDist", 0x200, "StructProperty"},
            {"bAllowFocusGlancesWhileMoving", 0x218, "StructProperty"},
            {"FocusGlanceWhileMovingStartDurationMin", 0x230, "StructProperty"},
            {"FocusGlanceWhileMovingStartDurationMax", 0x248, "StructProperty"},
            {"FocusGlanceWhileMovingStopDurationMin", 0x260, "StructProperty"},
            {"FocusGlanceWhileMovingStopDurationMax", 0x278, "StructProperty"},
            {"ResumeFocusWhenDamagedDurationMin", 0x290, "StructProperty"},
            {"ResumeFocusWhenDamagedDurationMax", 0x2A8, "StructProperty"},
            {"bResumeFocusWhileSliding", 0x2C0, "StructProperty"},
            {"ClearFocusOnTacticalSprint", 0x2D8, "StructProperty"},
            {"CacheAimingDigestedSkillSet", 0x2F0, "ObjectProperty"},
            {"CacheMovementDigestedSkillSet", 0x2F8, "ObjectProperty"},
            {"LastTargetedThreat", 0x300, "ObjectProperty"},
            {"FocusActor", 0x310, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Harvest
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Harvest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectionNavigationQueryFilterClass = 0x200;
            static constexpr std::uintptr_t ValidNavigationQueryFilterClassOverride = 0x208;
            static constexpr std::uintptr_t MaximumTimeToHelpFromLastPlayerDamage = 0x210;
            static constexpr std::uintptr_t KeepTargetTimeOnWeaponTrigger = 0x238;
            static constexpr std::uintptr_t AmountOfTimesPlayerBuiltStructuresNeedToBeDamaged = 0x260;
            static constexpr std::uintptr_t TimeToTrackDamagedActors = 0x288;
            static constexpr std::uintptr_t MaxDistanceFromActorForFallbackNoHarvestBehaviour = 0x2B0;
            static constexpr std::uintptr_t ExtraExtentForPlayerHitChecks = 0x2D8;
            static constexpr std::uintptr_t GEsToApplyOnFallbackBehaviorTrigger = 0x300;
            static constexpr std::uintptr_t GEsToApplyOnCannotDamageBehaviorTrigger = 0x310;
            static constexpr std::uintptr_t HarvestTargetKeyName = 0x320;
            static constexpr std::uintptr_t HarvestTargetHitPointKeyName = 0x328;
            static constexpr std::uintptr_t HarvestDestinationKeyName = 0x330;
            static constexpr std::uintptr_t FallbackBehaviorKeyName = 0x338;
            static constexpr std::uintptr_t CannotDamageKeyName = 0x340;
            static constexpr std::uintptr_t WeaponTriggerMeleeKeyName = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ProjectionNavigationQueryFilterClass", 0x200, "ClassProperty"},
            {"ValidNavigationQueryFilterClassOverride", 0x208, "ClassProperty"},
            {"MaximumTimeToHelpFromLastPlayerDamage", 0x210, "StructProperty"},
            {"KeepTargetTimeOnWeaponTrigger", 0x238, "StructProperty"},
            {"AmountOfTimesPlayerBuiltStructuresNeedToBeDamaged", 0x260, "StructProperty"},
            {"TimeToTrackDamagedActors", 0x288, "StructProperty"},
            {"MaxDistanceFromActorForFallbackNoHarvestBehaviour", 0x2B0, "StructProperty"},
            {"ExtraExtentForPlayerHitChecks", 0x2D8, "StructProperty"},
            {"GEsToApplyOnFallbackBehaviorTrigger", 0x300, "ArrayProperty"},
            {"GEsToApplyOnCannotDamageBehaviorTrigger", 0x310, "ArrayProperty"},
            {"HarvestTargetKeyName", 0x320, "NameProperty"},
            {"HarvestTargetHitPointKeyName", 0x328, "NameProperty"},
            {"HarvestDestinationKeyName", 0x330, "NameProperty"},
            {"FallbackBehaviorKeyName", 0x338, "NameProperty"},
            {"CannotDamageKeyName", 0x340, "NameProperty"},
            {"WeaponTriggerMeleeKeyName", 0x348, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Heal
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Heal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t HealingObjectKeyName = 0xA8;
            static constexpr std::uintptr_t CanHealWhileMovingKeyName = 0xB0;
            static constexpr std::uintptr_t UnstuckExecutionStatusKeyName = 0xB8;
            static constexpr std::uintptr_t MovementItemExecutionStatusKeyName = 0xC0;
            static constexpr std::uintptr_t RequiredTagQuery = 0xD0;
            static constexpr std::uintptr_t bAllowEvaluationRetry = 0x118;
            static constexpr std::uintptr_t HealingSkillSet = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"HealingObjectKeyName", 0xA8, "NameProperty"},
            {"CanHealWhileMovingKeyName", 0xB0, "NameProperty"},
            {"UnstuckExecutionStatusKeyName", 0xB8, "NameProperty"},
            {"MovementItemExecutionStatusKeyName", 0xC0, "NameProperty"},
            {"RequiredTagQuery", 0xD0, "StructProperty"},
            {"bAllowEvaluationRetry", 0x118, "BoolProperty"},
            {"HealingSkillSet", 0x120, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_HitAndRun
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_HitAndRun";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t AttackDurationBeforeEvade = 0x1B0;
            static constexpr std::uintptr_t MeleeAttackMaxDistToEvade = 0x1D8;
            static constexpr std::uintptr_t ClampEvadeDistanceEnable = 0x200;
            static constexpr std::uintptr_t MinDistanceToEvade = 0x228;
            static constexpr std::uintptr_t MaxDistanceToEvade = 0x250;
            static constexpr std::uintptr_t EvadeKeyName = 0x278;
            static constexpr std::uintptr_t EvadeMovementStateKeyName = 0x27C;
            static constexpr std::uintptr_t EvadeDestinationKeyName = 0x280;
            static constexpr std::uintptr_t WeaponTriggerMeleeName = 0x284;
            static constexpr std::uintptr_t MeleeAttackMaxDistToEvadeSqr = 0x2A0;
            static constexpr std::uintptr_t MaxDistanceToEvadeSqr = 0x2A4;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"AttackDurationBeforeEvade", 0x1B0, "StructProperty"},
            {"MeleeAttackMaxDistToEvade", 0x1D8, "StructProperty"},
            {"ClampEvadeDistanceEnable", 0x200, "StructProperty"},
            {"MinDistanceToEvade", 0x228, "StructProperty"},
            {"MaxDistanceToEvade", 0x250, "StructProperty"},
            {"EvadeKeyName", 0x278, "NameProperty"},
            {"EvadeMovementStateKeyName", 0x27C, "NameProperty"},
            {"EvadeDestinationKeyName", 0x280, "NameProperty"},
            {"WeaponTriggerMeleeName", 0x284, "NameProperty"},
            {"MeleeAttackMaxDistToEvadeSqr", 0x2A0, "FloatProperty"},
            {"MaxDistanceToEvadeSqr", 0x2A4, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_HolsterWeapon
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_HolsterWeapon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionStatusesToCheckedNames = 0xA8;
            static constexpr std::uintptr_t BlockWeaponActionsKeyName = 0xC8;
            static constexpr std::uintptr_t HolsterEvenWithTarget = 0xD0;
            static constexpr std::uintptr_t CachedNPCBehaviorParameters = 0xE8;
            static constexpr std::uintptr_t CachedConvertParameters = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExecutionStatusesToCheckedNames", 0xA8, "ArrayProperty"},
            {"BlockWeaponActionsKeyName", 0xC8, "NameProperty"},
            {"HolsterEvenWithTarget", 0xD0, "StructProperty"},
            {"CachedNPCBehaviorParameters", 0xE8, "ObjectProperty"},
            {"CachedConvertParameters", 0xF0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Investigate
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Investigate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t LastKnownPositionName = 0x1B0;
            static constexpr std::uintptr_t DestinationKeyName = 0x1B4;
            static constexpr std::uintptr_t MoveToDestinationKeyName = 0x1B8;
            static constexpr std::uintptr_t AggressivenessName = 0x1BC;
            static constexpr std::uintptr_t CautiousKeyName = 0x1C0;
            static constexpr std::uintptr_t AlertLevelName = 0x1C4;
            static constexpr std::uintptr_t SearchQueryFilterClass = 0x1C8;
            static constexpr std::uintptr_t CacheAimingDigestedSkillSet = 0x1E0;
            static constexpr std::uintptr_t CacheAttackingDigestedSkillSet = 0x1E8;
            static constexpr std::uintptr_t CachedUnstuckSkillSet = 0x1F0;
            static constexpr std::uintptr_t InvestigatingSupportingActor = 0x240;
            static constexpr std::uintptr_t UnderminingBuildingActor = 0x248;
            static constexpr std::uintptr_t ExcludeReachingTarget = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"LastKnownPositionName", 0x1B0, "NameProperty"},
            {"DestinationKeyName", 0x1B4, "NameProperty"},
            {"MoveToDestinationKeyName", 0x1B8, "NameProperty"},
            {"AggressivenessName", 0x1BC, "NameProperty"},
            {"CautiousKeyName", 0x1C0, "NameProperty"},
            {"AlertLevelName", 0x1C4, "NameProperty"},
            {"SearchQueryFilterClass", 0x1C8, "ClassProperty"},
            {"CacheAimingDigestedSkillSet", 0x1E0, "ObjectProperty"},
            {"CacheAttackingDigestedSkillSet", 0x1E8, "ObjectProperty"},
            {"CachedUnstuckSkillSet", 0x1F0, "ObjectProperty"},
            {"InvestigatingSupportingActor", 0x240, "WeakObjectProperty"},
            {"UnderminingBuildingActor", 0x248, "ObjectProperty"},
            {"ExcludeReachingTarget", 0x250, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_JumpOffBus
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_JumpOffBus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpOffBusDestinationName = 0xA8;
            static constexpr std::uintptr_t CacheMovementDigestedSkillSet = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JumpOffBusDestinationName", 0xA8, "NameProperty"},
            {"CacheMovementDigestedSkillSet", 0xC8, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_MeleeAttack
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_MeleeAttack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Attack";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponTriggerMeleeName = 0x1CC;
            static constexpr std::uintptr_t ThrowableAttacksAllowedName = 0x1D0;
            static constexpr std::uintptr_t TraversalBlockMeleeAttackName = 0x1D4;
            static constexpr std::uintptr_t TargetContextReachableKeyName = 0x1D8;
            static constexpr std::uintptr_t TargetContextInsideLeashKeyName = 0x1DC;
            static constexpr std::uintptr_t AttackingSkillSet = 0x1F8;
            static constexpr std::uintptr_t ShouldValidateWeaponType = 0x200;
            static constexpr std::uintptr_t CheckMeleeHeightAligned = 0x218;
            static constexpr std::uintptr_t AddExtentsToMeleeAttackDistance = 0x230;
            static constexpr std::uintptr_t Use3DDistanceCheckForMeleeAttack = 0x248;
            static constexpr std::uintptr_t CheckCooldownOnEnter = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"WeaponTriggerMeleeName", 0x1CC, "NameProperty"},
            {"ThrowableAttacksAllowedName", 0x1D0, "NameProperty"},
            {"TraversalBlockMeleeAttackName", 0x1D4, "NameProperty"},
            {"TargetContextReachableKeyName", 0x1D8, "NameProperty"},
            {"TargetContextInsideLeashKeyName", 0x1DC, "NameProperty"},
            {"AttackingSkillSet", 0x1F8, "ObjectProperty"},
            {"ShouldValidateWeaponType", 0x200, "StructProperty"},
            {"CheckMeleeHeightAligned", 0x218, "StructProperty"},
            {"AddExtentsToMeleeAttackDistance", 0x230, "StructProperty"},
            {"Use3DDistanceCheckForMeleeAttack", 0x248, "StructProperty"},
            {"CheckCooldownOnEnter", 0x260, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_MoveAway
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_MoveAway";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSecondsToReactToBump = 0x220;
            static constexpr std::uintptr_t MaxSecondsToReactToBox = 0x248;
            static constexpr std::uintptr_t MinSecondsBetweenInstantReactions = 0x270;
            static constexpr std::uintptr_t FindAwayLocationFromPawnQueryTemplate = 0x298;
            static constexpr std::uintptr_t FindAwayLocationFromPawnRunMode = 0x2A0;
            static constexpr std::uintptr_t FindAwayLocationFromBoxQueryTemplate = 0x2A8;
            static constexpr std::uintptr_t FindAwayLocationFromBoxRunMode = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MaxSecondsToReactToBump", 0x220, "StructProperty"},
            {"MaxSecondsToReactToBox", 0x248, "StructProperty"},
            {"MinSecondsBetweenInstantReactions", 0x270, "StructProperty"},
            {"FindAwayLocationFromPawnQueryTemplate", 0x298, "ObjectProperty"},
            {"FindAwayLocationFromPawnRunMode", 0x2A0, "ByteProperty"},
            {"FindAwayLocationFromBoxQueryTemplate", 0x2A8, "ObjectProperty"},
            {"FindAwayLocationFromBoxRunMode", 0x2B0, "ByteProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Observe
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Observe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t AggressivenessName = 0xA8;
            static constexpr std::uintptr_t ObserveDestinationKeyName = 0xAC;
            static constexpr std::uintptr_t bContinueMovementOnStart = 0xB4;
            static constexpr std::uintptr_t MaxMovementDuration = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AggressivenessName", 0xA8, "NameProperty"},
            {"ObserveDestinationKeyName", 0xAC, "NameProperty"},
            {"bContinueMovementOnStart", 0xB4, "BoolProperty"},
            {"MaxMovementDuration", 0xB8, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_PathExists
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_PathExists";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t PathExistsKeyName = 0xA8;
            static constexpr std::uintptr_t GoalKeyName = 0xB0;
            static constexpr std::uintptr_t AcceptableRadius = 0xB4;
            static constexpr std::uintptr_t PartialPathMaxDistance = 0xB8;
            static constexpr std::uintptr_t FilterClass = 0xC0;
            static constexpr std::uintptr_t PathQueryType = 0xC8;
            static constexpr std::uintptr_t bProjectGoalLocation = 0xCC;
            static constexpr std::uintptr_t bReachTestIncludesAgentRadius = 0xCC;
            static constexpr std::uintptr_t bReachTestIncludesGoalRadius = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PathExistsKeyName", 0xA8, "NameProperty"},
            {"GoalKeyName", 0xB0, "NameProperty"},
            {"AcceptableRadius", 0xB4, "FloatProperty"},
            {"PartialPathMaxDistance", 0xB8, "FloatProperty"},
            {"FilterClass", 0xC0, "ClassProperty"},
            {"PathQueryType", 0xC8, "ByteProperty"},
            {"bProjectGoalLocation", 0xCC, "BoolProperty"},
            {"bReachTestIncludesAgentRadius", 0xCC, "BoolProperty"},
            {"bReachTestIncludesGoalRadius", 0xCC, "BoolProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_PatrolAround
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_PatrolAround";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t EQSRequest = 0x1B0;
            static constexpr std::uintptr_t NavigationQueryFilterClass = 0x1F8;
            static constexpr std::uintptr_t bFallbackToPointWithNoCustomNavigationQueryFilter = 0x200;
            static constexpr std::uintptr_t PatrolDestinationName = 0x204;
            static constexpr std::uintptr_t PatrolExecutionStatusName = 0x208;
            static constexpr std::uintptr_t PatrolMovementStateName = 0x20C;
            static constexpr std::uintptr_t BestTargetActorName = 0x210;
            static constexpr std::uintptr_t EnableKeyName = 0x214;
            static constexpr std::uintptr_t CacheAthenaGameMode = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"EQSRequest", 0x1B0, "StructProperty"},
            {"NavigationQueryFilterClass", 0x1F8, "ClassProperty"},
            {"bFallbackToPointWithNoCustomNavigationQueryFilter", 0x200, "BoolProperty"},
            {"PatrolDestinationName", 0x204, "NameProperty"},
            {"PatrolExecutionStatusName", 0x208, "NameProperty"},
            {"PatrolMovementStateName", 0x20C, "NameProperty"},
            {"BestTargetActorName", 0x210, "NameProperty"},
            {"EnableKeyName", 0x214, "NameProperty"},
            {"CacheAthenaGameMode", 0x220, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_PlayEmote
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_PlayEmote";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayEmoteExecutionStatusKeyName = 0x1B0;
            static constexpr std::uintptr_t PlayEmoteDestinationKeyName = 0x1B4;
            static constexpr std::uintptr_t ExcludeReachingTarget = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlayEmoteExecutionStatusKeyName", 0x1B0, "NameProperty"},
            {"PlayEmoteDestinationKeyName", 0x1B4, "NameProperty"},
            {"ExcludeReachingTarget", 0x1C0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_PropagateAwareness
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_PropagateAwareness";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldPropagateToAwareAllies = 0xA8;
            static constexpr std::uintptr_t AwarenessTagQuery = 0xC0;
            static constexpr std::uintptr_t AwarenessGameplayEffectClass = 0x108;
            static constexpr std::uintptr_t AwareAllyPawns = 0x110;
            static constexpr std::uintptr_t AlreadyTestedPawns = 0x120;
            static constexpr std::uintptr_t PropagateAwarenessSkillSet = 0x130;
            static constexpr std::uintptr_t BehaviorControlsRuntimeParameters = 0x138;
            static constexpr std::uintptr_t AffiliationRuntimeParameters = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ShouldPropagateToAwareAllies", 0xA8, "StructProperty"},
            {"AwarenessTagQuery", 0xC0, "StructProperty"},
            {"AwarenessGameplayEffectClass", 0x108, "ClassProperty"},
            {"AwareAllyPawns", 0x110, "ArrayProperty"},
            {"AlreadyTestedPawns", 0x120, "ArrayProperty"},
            {"PropagateAwarenessSkillSet", 0x130, "ObjectProperty"},
            {"BehaviorControlsRuntimeParameters", 0x138, "ObjectProperty"},
            {"AffiliationRuntimeParameters", 0x140, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_RangeAttack
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_RangeAttack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Attack";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponReloadName = 0x208;
            static constexpr std::uintptr_t WeaponFireName = 0x20C;
            static constexpr std::uintptr_t RangeAttackIsReadyToFireName = 0x210;
            static constexpr std::uintptr_t WeaponTargetingName = 0x214;
            static constexpr std::uintptr_t AggressivenessName = 0x218;
            static constexpr std::uintptr_t HasLoSOnThreatName = 0x21C;
            static constexpr std::uintptr_t UrgentMovementKeyName = 0x220;
            static constexpr std::uintptr_t IsManningTurretKeyName = 0x224;
            static constexpr std::uintptr_t BlockWeaponActionsKeyName = 0x228;
            static constexpr std::uintptr_t CancelWeaponAutoReloadKeyName = 0x22C;
            static constexpr std::uintptr_t ShouldEvaluatePositioning = 0x248;
            static constexpr std::uintptr_t bAlwaysAllowTargetingEvaluation = 0x260;
            static constexpr std::uintptr_t bSkipADSEvaluation = 0x261;
            static constexpr std::uintptr_t SkipADSEvaluation = 0x268;
            static constexpr std::uintptr_t RequireLineOfSight = 0x280;
            static constexpr std::uintptr_t bConsiderLoF = 0x298;
            static constexpr std::uintptr_t RequireLineOfFire = 0x2A0;
            static constexpr std::uintptr_t bShouldValidateRangedWeapon = 0x2B8;
            static constexpr std::uintptr_t RangeReachHysteresisRatio = 0x2BC;
            static constexpr std::uintptr_t ResetCanFireNextTimeOnEnter = 0x2C8;
            static constexpr std::uintptr_t CancelWeaponAutoReloadOnExit = 0x2E0;
            static constexpr std::uintptr_t CacheRangeAttackDigestedSkillSet = 0x330;
            static constexpr std::uintptr_t CacheAimingDigestedSkillSet = 0x338;
            static constexpr std::uintptr_t CachePerceptionDigestedSkillSet = 0x340;
            static constexpr std::uintptr_t CacheAttackingDigestedSkillSet = 0x348;
            static constexpr std::uintptr_t CacheZoneManager = 0x350;
            static constexpr std::uintptr_t CachedAIServiceCover = 0x358;
            static constexpr std::uintptr_t CachedSafeZoneComponent = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"WeaponReloadName", 0x208, "NameProperty"},
            {"WeaponFireName", 0x20C, "NameProperty"},
            {"RangeAttackIsReadyToFireName", 0x210, "NameProperty"},
            {"WeaponTargetingName", 0x214, "NameProperty"},
            {"AggressivenessName", 0x218, "NameProperty"},
            {"HasLoSOnThreatName", 0x21C, "NameProperty"},
            {"UrgentMovementKeyName", 0x220, "NameProperty"},
            {"IsManningTurretKeyName", 0x224, "NameProperty"},
            {"BlockWeaponActionsKeyName", 0x228, "NameProperty"},
            {"CancelWeaponAutoReloadKeyName", 0x22C, "NameProperty"},
            {"ShouldEvaluatePositioning", 0x248, "StructProperty"},
            {"bAlwaysAllowTargetingEvaluation", 0x260, "BoolProperty"},
            {"bSkipADSEvaluation", 0x261, "BoolProperty"},
            {"SkipADSEvaluation", 0x268, "StructProperty"},
            {"RequireLineOfSight", 0x280, "StructProperty"},
            {"bConsiderLoF", 0x298, "BoolProperty"},
            {"RequireLineOfFire", 0x2A0, "StructProperty"},
            {"bShouldValidateRangedWeapon", 0x2B8, "BoolProperty"},
            {"RangeReachHysteresisRatio", 0x2BC, "FloatProperty"},
            {"ResetCanFireNextTimeOnEnter", 0x2C8, "StructProperty"},
            {"CancelWeaponAutoReloadOnExit", 0x2E0, "StructProperty"},
            {"CacheRangeAttackDigestedSkillSet", 0x330, "ObjectProperty"},
            {"CacheAimingDigestedSkillSet", 0x338, "ObjectProperty"},
            {"CachePerceptionDigestedSkillSet", 0x340, "ObjectProperty"},
            {"CacheAttackingDigestedSkillSet", 0x348, "ObjectProperty"},
            {"CacheZoneManager", 0x350, "WeakObjectProperty"},
            {"CachedAIServiceCover", 0x358, "WeakObjectProperty"},
            {"CachedSafeZoneComponent", 0x360, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_ReachBeacon
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_ReachBeacon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t ReachBeaconStatusKeyName = 0x1B0;
            static constexpr std::uintptr_t ReachBeaconMovementStateKeyName = 0x1B4;
            static constexpr std::uintptr_t ReachBeaconTargetKeyName = 0x1B8;
            static constexpr std::uintptr_t CurrentBeacon = 0x1C4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ReachBeaconStatusKeyName", 0x1B0, "NameProperty"},
            {"ReachBeaconMovementStateKeyName", 0x1B4, "NameProperty"},
            {"ReachBeaconTargetKeyName", 0x1B8, "NameProperty"},
            {"CurrentBeacon", 0x1C4, "WeakObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_ReactToVerb
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_ReactToVerb";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheReactToVerbDigestedSkillSet = 0x230;
            static constexpr std::uintptr_t CanRunPreconditions = 0x290;
            static constexpr std::uintptr_t VerbReactionsMap = 0x2B8;
            static constexpr std::uintptr_t MinDistanceFromPlayerToReact = 0x2E8;
            static constexpr std::uintptr_t MinDistanceFromPlayerToReactForGroupEmotes = 0x310;
            static constexpr std::uintptr_t MaxReactionEmoteDuration = 0x338;
            static constexpr std::uintptr_t MaxReactionEmoteDurationForGroupEmotes = 0x360;
            static constexpr std::uintptr_t MaxReactionWaitTime = 0x388;
            static constexpr std::uintptr_t DelayBeforeRunningQueuedReaction = 0x3B0;
            static constexpr std::uintptr_t PerceptionConfiguration = 0x3E0;
            static constexpr std::uintptr_t bIsHighPriorityEvaluator = 0x4A0;
            static constexpr std::uintptr_t bEnableNPCReactionsPersistence = 0x4A1;
            static constexpr std::uintptr_t ReactToEmotes = 0x4A8;
            static constexpr std::uintptr_t MaxNPCsReactingToEmotes = 0x4D0;
            static constexpr std::uintptr_t LimitReactToGroupEmote = 0x4F8;
            static constexpr std::uintptr_t ReactToGroupEmoteIfClosestNPCWithinDistance = 0x520;
            static constexpr std::uintptr_t ReactToGroupEmoteDelaySecondsWhenPlayersNearby = 0x548;
            static constexpr std::uintptr_t MinDistanceOfPlayersFromPlayerToConsiderNearbyPlayer = 0x570;
            static constexpr std::uintptr_t ReactToGroupEmoteDelayRandomDeviation = 0x598;
            static constexpr std::uintptr_t ReactToGroupEmoteDelayForNumPlayersNearby = 0x5C0;
            static constexpr std::uintptr_t ReactToEmoteGameplayTag = 0x5E8;
            static constexpr std::uintptr_t ReactToEmoteRequiredTagQueryOnAI = 0x5F0;
            static constexpr std::uintptr_t ReactToVerbTargetActorKeyName = 0x638;
            static constexpr std::uintptr_t ReactToVerbShouldMoveKeyName = 0x640;
            static constexpr std::uintptr_t ReactToVerbShouldMoveReachDistanceKeyName = 0x648;
            static constexpr std::uintptr_t ExtraStructDataKeyName = 0x650;
            static constexpr std::uintptr_t ReactToVerbShouldJoinGroupEmoteKeyName = 0x658;
            static constexpr std::uintptr_t ShouldFollowTargetKeyName = 0x660;
            static constexpr std::uintptr_t TagQueryRequiredOnPlayerToMoveForReactToEmote = 0x668;
            static constexpr std::uintptr_t TagQueryRequiredOnPlayerToLookAtCameraForReactToEmote = 0x6B0;
            static constexpr std::uintptr_t CanRunPreconditionsQueryState = 0x700;
            static constexpr std::uintptr_t SaveControl = 0x758;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"CacheReactToVerbDigestedSkillSet", 0x230, "ObjectProperty"},
            {"CanRunPreconditions", 0x290, "StructProperty"},
            {"VerbReactionsMap", 0x2B8, "StructProperty"},
            {"MinDistanceFromPlayerToReact", 0x2E8, "StructProperty"},
            {"MinDistanceFromPlayerToReactForGroupEmotes", 0x310, "StructProperty"},
            {"MaxReactionEmoteDuration", 0x338, "StructProperty"},
            {"MaxReactionEmoteDurationForGroupEmotes", 0x360, "StructProperty"},
            {"MaxReactionWaitTime", 0x388, "StructProperty"},
            {"DelayBeforeRunningQueuedReaction", 0x3B0, "StructProperty"},
            {"PerceptionConfiguration", 0x3E0, "StructProperty"},
            {"bIsHighPriorityEvaluator", 0x4A0, "BoolProperty"},
            {"bEnableNPCReactionsPersistence", 0x4A1, "BoolProperty"},
            {"ReactToEmotes", 0x4A8, "StructProperty"},
            {"MaxNPCsReactingToEmotes", 0x4D0, "StructProperty"},
            {"LimitReactToGroupEmote", 0x4F8, "StructProperty"},
            {"ReactToGroupEmoteIfClosestNPCWithinDistance", 0x520, "StructProperty"},
            {"ReactToGroupEmoteDelaySecondsWhenPlayersNearby", 0x548, "StructProperty"},
            {"MinDistanceOfPlayersFromPlayerToConsiderNearbyPlayer", 0x570, "StructProperty"},
            {"ReactToGroupEmoteDelayRandomDeviation", 0x598, "StructProperty"},
            {"ReactToGroupEmoteDelayForNumPlayersNearby", 0x5C0, "StructProperty"},
            {"ReactToEmoteGameplayTag", 0x5E8, "StructProperty"},
            {"ReactToEmoteRequiredTagQueryOnAI", 0x5F0, "StructProperty"},
            {"ReactToVerbTargetActorKeyName", 0x638, "NameProperty"},
            {"ReactToVerbShouldMoveKeyName", 0x640, "NameProperty"},
            {"ReactToVerbShouldMoveReachDistanceKeyName", 0x648, "NameProperty"},
            {"ExtraStructDataKeyName", 0x650, "NameProperty"},
            {"ReactToVerbShouldJoinGroupEmoteKeyName", 0x658, "NameProperty"},
            {"ShouldFollowTargetKeyName", 0x660, "NameProperty"},
            {"TagQueryRequiredOnPlayerToMoveForReactToEmote", 0x668, "StructProperty"},
            {"TagQueryRequiredOnPlayerToLookAtCameraForReactToEmote", 0x6B0, "StructProperty"},
            {"CanRunPreconditionsQueryState", 0x700, "StructProperty"},
            {"SaveControl", 0x758, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_RecoverLineOfSight
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_RecoverLineOfSight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t RecoveringLineOfSightMaxDuration = 0x1B0;
            static constexpr std::uintptr_t ExecutionStatusToListenKeyNames = 0x1D8;
            static constexpr std::uintptr_t RecoverLineOfSightExecutionStatusKeyName = 0x1E8;
            static constexpr std::uintptr_t RecoverLineOfSightMovementStateKeyName = 0x1EC;
            static constexpr std::uintptr_t RecoverLineOfSightDestinationKeyName = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"RecoveringLineOfSightMaxDuration", 0x1B0, "StructProperty"},
            {"ExecutionStatusToListenKeyNames", 0x1D8, "ArrayProperty"},
            {"RecoverLineOfSightExecutionStatusKeyName", 0x1E8, "NameProperty"},
            {"RecoverLineOfSightMovementStateKeyName", 0x1EC, "NameProperty"},
            {"RecoverLineOfSightDestinationKeyName", 0x1F0, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_ReloadWeapon
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_ReloadWeapon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponKeyName = 0xA8;
            static constexpr std::uintptr_t bCanReloadWeaponsInInventory = 0xAE;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WeaponKeyName", 0xA8, "NameProperty"},
            {"bCanReloadWeaponsInInventory", 0xAE, "BoolProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Retreat
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Retreat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t RetreatDestinationName = 0x1B0;
            static constexpr std::uintptr_t CacheAttackingDigestedSkillSet = 0x1B8;
            static constexpr std::uintptr_t CachedCoverComponent = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RetreatDestinationName", 0x1B0, "NameProperty"},
            {"CacheAttackingDigestedSkillSet", 0x1B8, "ObjectProperty"},
            {"CachedCoverComponent", 0x1C0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Revive
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Revive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t LastReviveTargetExpiration = 0x1B0;
            static constexpr std::uintptr_t ReviveTargetKeyName = 0x1D8;
            static constexpr std::uintptr_t ReviveLastTargetKeyName = 0x1DC;
            static constexpr std::uintptr_t ReviveBehaviorRuntimeParameters = 0x1E0;
            static constexpr std::uintptr_t ReviveSkillSet = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LastReviveTargetExpiration", 0x1B0, "StructProperty"},
            {"ReviveTargetKeyName", 0x1D8, "NameProperty"},
            {"ReviveLastTargetKeyName", 0x1DC, "NameProperty"},
            {"ReviveBehaviorRuntimeParameters", 0x1E0, "ObjectProperty"},
            {"ReviveSkillSet", 0x200, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_SandTunnel
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_SandTunnel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_TagQuery";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpExecutionStatusName = 0xF8;
            static constexpr std::uintptr_t LootInteractionExecutionStatusName = 0xFC;
            static constexpr std::uintptr_t WeaponTriggerMeleeName = 0x100;
            static constexpr std::uintptr_t WeaponFireName = 0x104;
            static constexpr std::uintptr_t BuriedTagQuery = 0x110;
            static constexpr std::uintptr_t CacheMovementDigestedSkillSet = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"JumpExecutionStatusName", 0xF8, "NameProperty"},
            {"LootInteractionExecutionStatusName", 0xFC, "NameProperty"},
            {"WeaponTriggerMeleeName", 0x100, "NameProperty"},
            {"WeaponFireName", 0x104, "NameProperty"},
            {"BuriedTagQuery", 0x110, "StructProperty"},
            {"CacheMovementDigestedSkillSet", 0x158, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_SelectNextDynamicPOI
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_SelectNextDynamicPOI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicPOIExecutionStatusKeyName = 0x1B0;
            static constexpr std::uintptr_t DynamicPOILocationKeyName = 0x1B4;
            static constexpr std::uintptr_t CachedBRLogic = 0x1C0;
            static constexpr std::uintptr_t NextSearchTimerHandle = 0x200;
            static constexpr std::uintptr_t FailedBotPOIList = 0x210;
            static constexpr std::uintptr_t CachedSelectedBotPOIID = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DynamicPOIExecutionStatusKeyName", 0x1B0, "NameProperty"},
            {"DynamicPOILocationKeyName", 0x1B4, "NameProperty"},
            {"CachedBRLogic", 0x1C0, "ObjectProperty"},
            {"NextSearchTimerHandle", 0x200, "StructProperty"},
            {"FailedBotPOIList", 0x210, "ArrayProperty"},
            {"CachedSelectedBotPOIID", 0x220, "IntProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_SelectVehicle
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_SelectVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleDestinationKeyName = 0x1B0;
            static constexpr std::uintptr_t SelectVehicleMovementStateKeyName = 0x1B4;
            static constexpr std::uintptr_t SelectVehicleStatusKeyName = 0x1B8;
            static constexpr std::uintptr_t SelectedVehicleKeyName = 0x1BC;
            static constexpr std::uintptr_t Enabled = 0x1C8;
            static constexpr std::uintptr_t VehicleSearchRadius = 0x1F0;
            static constexpr std::uintptr_t bCanEnterOnlyWithHisConverter = 0x208;
            static constexpr std::uintptr_t bCanEnterOnlyWithGroupLeader = 0x220;
            static constexpr std::uintptr_t bCanEnterAsDriver = 0x238;
            static constexpr std::uintptr_t bCanEnterVehiclesInWater = 0x250;
            static constexpr std::uintptr_t bCanEnterOutOfFuelVehicles = 0x268;
            static constexpr std::uintptr_t bCanEnterWithPlayerDriver = 0x280;
            static constexpr std::uintptr_t bCanEnterWithPlayerOnAnySeat = 0x298;
            static constexpr std::uintptr_t bCanEnterOnlyMatchingPatrols = 0x2B0;
            static constexpr std::uintptr_t VehiclesFilterTagQuery = 0x2C8;
            static constexpr std::uintptr_t SeatsFilterTagQuery = 0x310;
            static constexpr std::uintptr_t OwnerFilterTagQuery = 0x358;
            static constexpr std::uintptr_t PatrolPathTagQuery = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"VehicleDestinationKeyName", 0x1B0, "NameProperty"},
            {"SelectVehicleMovementStateKeyName", 0x1B4, "NameProperty"},
            {"SelectVehicleStatusKeyName", 0x1B8, "NameProperty"},
            {"SelectedVehicleKeyName", 0x1BC, "NameProperty"},
            {"Enabled", 0x1C8, "StructProperty"},
            {"VehicleSearchRadius", 0x1F0, "StructProperty"},
            {"bCanEnterOnlyWithHisConverter", 0x208, "StructProperty"},
            {"bCanEnterOnlyWithGroupLeader", 0x220, "StructProperty"},
            {"bCanEnterAsDriver", 0x238, "StructProperty"},
            {"bCanEnterVehiclesInWater", 0x250, "StructProperty"},
            {"bCanEnterOutOfFuelVehicles", 0x268, "StructProperty"},
            {"bCanEnterWithPlayerDriver", 0x280, "StructProperty"},
            {"bCanEnterWithPlayerOnAnySeat", 0x298, "StructProperty"},
            {"bCanEnterOnlyMatchingPatrols", 0x2B0, "StructProperty"},
            {"VehiclesFilterTagQuery", 0x2C8, "StructProperty"},
            {"SeatsFilterTagQuery", 0x310, "StructProperty"},
            {"OwnerFilterTagQuery", 0x358, "StructProperty"},
            {"PatrolPathTagQuery", 0x3A0, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_SmartObjectCommand
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_SmartObjectCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectRuntimeParameters = 0x1B0;
            static constexpr std::uintptr_t SmartObjectSubsystem = 0x1B8;
            static constexpr std::uintptr_t RunningCommandData = 0x1C8;
            static constexpr std::uintptr_t CommandOnCooldown = 0x1D8;
            static constexpr std::uintptr_t EvaluationTag = 0x1EC;
            static constexpr std::uintptr_t bEvaluateSOValidityAfterChosen = 0x1F0;
            static constexpr std::uintptr_t bEnableEntryLocationsSupport = 0x1F1;
            static constexpr std::uintptr_t SingleCommandCooldown = 0x1F8;
            static constexpr std::uintptr_t OverridenFilterClassForEntryPoints = 0x220;
            static constexpr std::uintptr_t SmartObjectExecutionStatusKeyName = 0x228;
            static constexpr std::uintptr_t SmartObjectMovementStateKeyName = 0x22C;
            static constexpr std::uintptr_t SmartObjectDestinationKeyName = 0x230;
            static constexpr std::uintptr_t SmartObjectDestinationRotationKeyName = 0x234;
            static constexpr std::uintptr_t SmartObjectShouldMoveKeyName = 0x238;
            static constexpr std::uintptr_t SmartObjectUrgencyKeyName = 0x23C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"SmartObjectRuntimeParameters", 0x1B0, "ObjectProperty"},
            {"SmartObjectSubsystem", 0x1B8, "ObjectProperty"},
            {"RunningCommandData", 0x1C8, "StructProperty"},
            {"CommandOnCooldown", 0x1D8, "StructProperty"},
            {"EvaluationTag", 0x1EC, "StructProperty"},
            {"bEvaluateSOValidityAfterChosen", 0x1F0, "BoolProperty"},
            {"bEnableEntryLocationsSupport", 0x1F1, "BoolProperty"},
            {"SingleCommandCooldown", 0x1F8, "StructProperty"},
            {"OverridenFilterClassForEntryPoints", 0x220, "ClassProperty"},
            {"SmartObjectExecutionStatusKeyName", 0x228, "NameProperty"},
            {"SmartObjectMovementStateKeyName", 0x22C, "NameProperty"},
            {"SmartObjectDestinationKeyName", 0x230, "NameProperty"},
            {"SmartObjectDestinationRotationKeyName", 0x234, "NameProperty"},
            {"SmartObjectShouldMoveKeyName", 0x238, "NameProperty"},
            {"SmartObjectUrgencyKeyName", 0x23C, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_SmartObjectConverted
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_SmartObjectConverted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectRuntimeParameters = 0x1B0;
            static constexpr std::uintptr_t SmartObjectSubsystem = 0x1B8;
            static constexpr std::uintptr_t RunningData = 0x1C8;
            static constexpr std::uintptr_t EvaluationTag = 0x1D0;
            static constexpr std::uintptr_t bEvaluateSOValidityAfterChosen = 0x1D4;
            static constexpr std::uintptr_t bEnableEntryLocationsSupport = 0x1D5;
            static constexpr std::uintptr_t bIgnoreCooldowns = 0x1D6;
            static constexpr std::uintptr_t OverridenFilterClassForEntryPoints = 0x1D8;
            static constexpr std::uintptr_t SmartObjectExecutionStatusKeyName = 0x1E0;
            static constexpr std::uintptr_t SmartObjectMovementStateKeyName = 0x1E4;
            static constexpr std::uintptr_t SmartObjectDestinationKeyName = 0x1E8;
            static constexpr std::uintptr_t SmartObjectDestinationRotationKeyName = 0x1EC;
            static constexpr std::uintptr_t SmartObjectShouldMoveKeyName = 0x1F0;
            static constexpr std::uintptr_t SmartObjectUrgencyKeyName = 0x1F4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"SmartObjectRuntimeParameters", 0x1B0, "ObjectProperty"},
            {"SmartObjectSubsystem", 0x1B8, "ObjectProperty"},
            {"RunningData", 0x1C8, "StructProperty"},
            {"EvaluationTag", 0x1D0, "StructProperty"},
            {"bEvaluateSOValidityAfterChosen", 0x1D4, "BoolProperty"},
            {"bEnableEntryLocationsSupport", 0x1D5, "BoolProperty"},
            {"bIgnoreCooldowns", 0x1D6, "BoolProperty"},
            {"OverridenFilterClassForEntryPoints", 0x1D8, "ClassProperty"},
            {"SmartObjectExecutionStatusKeyName", 0x1E0, "NameProperty"},
            {"SmartObjectMovementStateKeyName", 0x1E4, "NameProperty"},
            {"SmartObjectDestinationKeyName", 0x1E8, "NameProperty"},
            {"SmartObjectDestinationRotationKeyName", 0x1EC, "NameProperty"},
            {"SmartObjectShouldMoveKeyName", 0x1F0, "NameProperty"},
            {"SmartObjectUrgencyKeyName", 0x1F4, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_SmartObjects
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_SmartObjects";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluationTag = 0x1B0;
            static constexpr std::uintptr_t bEvaluateSOValidityAfterChosen = 0x1B4;
            static constexpr std::uintptr_t bEnableEntryLocationsSupport = 0x1B5;
            static constexpr std::uintptr_t CanRunPrecondition = 0x1B8;
            static constexpr std::uintptr_t MaximumEntryLocationsChecksPerEvaluation = 0x1E0;
            static constexpr std::uintptr_t EntryLocationFailuresBlacklistedTime = 0x208;
            static constexpr std::uintptr_t DistanceToWeightCurveForSlotPicking = 0x230;
            static constexpr std::uintptr_t OverridenFilterClassForEntryPoints = 0x238;
            static constexpr std::uintptr_t ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames = 0x240;
            static constexpr std::uintptr_t SmartObjectExecutionStatusKeyName = 0x250;
            static constexpr std::uintptr_t SmartObjectMovementStateKeyName = 0x254;
            static constexpr std::uintptr_t SmartObjectDestinationKeyName = 0x258;
            static constexpr std::uintptr_t SmartObjectDestinationRotationKeyName = 0x25C;
            static constexpr std::uintptr_t SmartObjectShouldMoveKeyName = 0x260;
            static constexpr std::uintptr_t SmartObjectUrgencyKeyName = 0x264;
            static constexpr std::uintptr_t SmartObjectRuntimeParameters = 0x288;
            static constexpr std::uintptr_t SmartObjectSubsystem = 0x290;
            static constexpr std::uintptr_t CanRunPreconditionQueryState = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"EvaluationTag", 0x1B0, "StructProperty"},
            {"bEvaluateSOValidityAfterChosen", 0x1B4, "BoolProperty"},
            {"bEnableEntryLocationsSupport", 0x1B5, "BoolProperty"},
            {"CanRunPrecondition", 0x1B8, "StructProperty"},
            {"MaximumEntryLocationsChecksPerEvaluation", 0x1E0, "StructProperty"},
            {"EntryLocationFailuresBlacklistedTime", 0x208, "StructProperty"},
            {"DistanceToWeightCurveForSlotPicking", 0x230, "ObjectProperty"},
            {"OverridenFilterClassForEntryPoints", 0x238, "ClassProperty"},
            {"ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames", 0x240, "ArrayProperty"},
            {"SmartObjectExecutionStatusKeyName", 0x250, "NameProperty"},
            {"SmartObjectMovementStateKeyName", 0x254, "NameProperty"},
            {"SmartObjectDestinationKeyName", 0x258, "NameProperty"},
            {"SmartObjectDestinationRotationKeyName", 0x25C, "NameProperty"},
            {"SmartObjectShouldMoveKeyName", 0x260, "NameProperty"},
            {"SmartObjectUrgencyKeyName", 0x264, "NameProperty"},
            {"SmartObjectRuntimeParameters", 0x288, "ObjectProperty"},
            {"SmartObjectSubsystem", 0x290, "ObjectProperty"},
            {"CanRunPreconditionQueryState", 0x298, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Sprinting
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Sprinting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowSprintKeyName = 0xA8;
            static constexpr std::uintptr_t AllowSlideKeyName = 0xAC;
            static constexpr std::uintptr_t JumpExecutionStatusName = 0xB0;
            static constexpr std::uintptr_t TacticalSprintExecutionStatusName = 0xB4;
            static constexpr std::uintptr_t SlideExecutionStatusName = 0xB8;
            static constexpr std::uintptr_t UrgentMovementKeyName = 0xBC;
            static constexpr std::uintptr_t RangeAttackExecutionStatusName = 0xC0;
            static constexpr std::uintptr_t MeleeAttackExecutionStatusName = 0xC4;
            static constexpr std::uintptr_t ThrowableAttackExecutionStatusName = 0xC8;
            static constexpr std::uintptr_t HealingExecutionStatusName = 0xCC;
            static constexpr std::uintptr_t CanTacticalSprintJump = 0xD0;
            static constexpr std::uintptr_t bSprintOnlyInWater = 0xFC;
            static constexpr std::uintptr_t bSprintOnlyInUrgentMode = 0xFD;
            static constexpr std::uintptr_t MovementSkillSet = 0x100;
            static constexpr std::uintptr_t AimingSkillSet = 0x108;
            static constexpr std::uintptr_t TacticalSprintTriggerChance = 0x110;
            static constexpr std::uintptr_t TacticalSprintTriggerChanceInUrgentMovement = 0x114;
            static constexpr std::uintptr_t TacticalSprintJumpTriggerChance = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"AllowSprintKeyName", 0xA8, "NameProperty"},
            {"AllowSlideKeyName", 0xAC, "NameProperty"},
            {"JumpExecutionStatusName", 0xB0, "NameProperty"},
            {"TacticalSprintExecutionStatusName", 0xB4, "NameProperty"},
            {"SlideExecutionStatusName", 0xB8, "NameProperty"},
            {"UrgentMovementKeyName", 0xBC, "NameProperty"},
            {"RangeAttackExecutionStatusName", 0xC0, "NameProperty"},
            {"MeleeAttackExecutionStatusName", 0xC4, "NameProperty"},
            {"ThrowableAttackExecutionStatusName", 0xC8, "NameProperty"},
            {"HealingExecutionStatusName", 0xCC, "NameProperty"},
            {"CanTacticalSprintJump", 0xD0, "StructProperty"},
            {"bSprintOnlyInWater", 0xFC, "BoolProperty"},
            {"bSprintOnlyInUrgentMode", 0xFD, "BoolProperty"},
            {"MovementSkillSet", 0x100, "ObjectProperty"},
            {"AimingSkillSet", 0x108, "ObjectProperty"},
            {"TacticalSprintTriggerChance", 0x110, "FloatProperty"},
            {"TacticalSprintTriggerChanceInUrgentMovement", 0x114, "FloatProperty"},
            {"TacticalSprintJumpTriggerChance", 0x118, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_StealWall
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_StealWall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t StealWallBuildTypeName = 0xA8;
            static constexpr std::uintptr_t StealWallBuildGridCoordName = 0xAC;
            static constexpr std::uintptr_t TargetActorName = 0xB0;
            static constexpr std::uintptr_t CacheBuildingDigestedSkillSet = 0xC0;
            static constexpr std::uintptr_t CurrentBuildingTarget = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StealWallBuildTypeName", 0xA8, "NameProperty"},
            {"StealWallBuildGridCoordName", 0xAC, "NameProperty"},
            {"TargetActorName", 0xB0, "NameProperty"},
            {"CacheBuildingDigestedSkillSet", 0xC0, "ObjectProperty"},
            {"CurrentBuildingTarget", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_StepBack
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_StepBack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedRangeAttackDigestedSkillSet = 0x1B0;
            static constexpr std::uintptr_t CachedAIServiceCover = 0x1B8;
            static constexpr std::uintptr_t StepBackExecutionStatusKeyName = 0x1C8;
            static constexpr std::uintptr_t StepBackMovementStateKeyName = 0x1CC;
            static constexpr std::uintptr_t StepBackDestinationKeyName = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CachedRangeAttackDigestedSkillSet", 0x1B0, "ObjectProperty"},
            {"CachedAIServiceCover", 0x1B8, "WeakObjectProperty"},
            {"StepBackExecutionStatusKeyName", 0x1C8, "NameProperty"},
            {"StepBackMovementStateKeyName", 0x1CC, "NameProperty"},
            {"StepBackDestinationKeyName", 0x1D0, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Storm
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Storm";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t StormDestinationName = 0x1B0;
            static constexpr std::uintptr_t CacheAthenaGameMode = 0x1C0;
            static constexpr std::uintptr_t CachedBTComp = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StormDestinationName", 0x1B0, "NameProperty"},
            {"CacheAthenaGameMode", 0x1C0, "ObjectProperty"},
            {"CachedBTComp", 0x1C8, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_TagQuery
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_TagQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQuery = 0xA8;
            static constexpr std::uintptr_t CachedAbilitySystemComponent = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TagQuery", 0xA8, "StructProperty"},
            {"CachedAbilitySystemComponent", 0xF0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_TagQueryToBBKey
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_TagQueryToBBKey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_TagQuery";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkedBBKeyName = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LinkedBBKeyName", 0xF8, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_TakeCover
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_TakeCover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheRangeAttackDigestedSkillSet = 0x1B0;
            static constexpr std::uintptr_t CacheAimingDigestedSkillSet = 0x1B8;
            static constexpr std::uintptr_t CachedAIServiceCover = 0x1C0;
            static constexpr std::uintptr_t DestinationKeyName = 0x1C8;
            static constexpr std::uintptr_t MoveToDestinationKeyName = 0x1CC;
            static constexpr std::uintptr_t HealingStatusKeyName = 0x1D0;
            static constexpr std::uintptr_t WeaponFireName = 0x1D4;
            static constexpr std::uintptr_t TargetActorName = 0x1D8;
            static constexpr std::uintptr_t BunkerStatusKeyName = 0x1DC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CacheRangeAttackDigestedSkillSet", 0x1B0, "ObjectProperty"},
            {"CacheAimingDigestedSkillSet", 0x1B8, "ObjectProperty"},
            {"CachedAIServiceCover", 0x1C0, "WeakObjectProperty"},
            {"DestinationKeyName", 0x1C8, "NameProperty"},
            {"MoveToDestinationKeyName", 0x1CC, "NameProperty"},
            {"HealingStatusKeyName", 0x1D0, "NameProperty"},
            {"WeaponFireName", 0x1D4, "NameProperty"},
            {"TargetActorName", 0x1D8, "NameProperty"},
            {"BunkerStatusKeyName", 0x1DC, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_TargetContext
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_TargetContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenPositionTagQuery = 0xA8;
            static constexpr std::uintptr_t TargetContextReachableKeyName = 0xF0;
            static constexpr std::uintptr_t TargetContextReachableInStraightLineKeyName = 0xF4;
            static constexpr std::uintptr_t TargetContextInsideLeashKeyName = 0xF8;
            static constexpr std::uintptr_t TargetContextLeashExitTimeKeyName = 0xFC;
            static constexpr std::uintptr_t TargetActorName = 0x100;
            static constexpr std::uintptr_t LastRangedWeaponFireAbilityAgainstTimeKeyName = 0x104;
            static constexpr std::uintptr_t CachedLeashComponent = 0x108;
            static constexpr std::uintptr_t HorizontalProjectionForReachability = 0x110;
            static constexpr std::uintptr_t VerticalProjectionForReachability = 0x114;
            static constexpr std::uintptr_t TimeToConsiderUnreachable = 0x118;
            static constexpr std::uintptr_t bUseTargetNavAgentLocation = 0x130;
            static constexpr std::uintptr_t bTargetInterpenetrationTestEnabled = 0x131;
            static constexpr std::uintptr_t TargetContextInterpenetratedKeyName = 0x134;
            static constexpr std::uintptr_t TargetContextInAirForAimingKeyName = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"TokenPositionTagQuery", 0xA8, "StructProperty"},
            {"TargetContextReachableKeyName", 0xF0, "NameProperty"},
            {"TargetContextReachableInStraightLineKeyName", 0xF4, "NameProperty"},
            {"TargetContextInsideLeashKeyName", 0xF8, "NameProperty"},
            {"TargetContextLeashExitTimeKeyName", 0xFC, "NameProperty"},
            {"TargetActorName", 0x100, "NameProperty"},
            {"LastRangedWeaponFireAbilityAgainstTimeKeyName", 0x104, "NameProperty"},
            {"CachedLeashComponent", 0x108, "ObjectProperty"},
            {"HorizontalProjectionForReachability", 0x110, "FloatProperty"},
            {"VerticalProjectionForReachability", 0x114, "FloatProperty"},
            {"TimeToConsiderUnreachable", 0x118, "StructProperty"},
            {"bUseTargetNavAgentLocation", 0x130, "BoolProperty"},
            {"bTargetInterpenetrationTestEnabled", 0x131, "BoolProperty"},
            {"TargetContextInterpenetratedKeyName", 0x134, "NameProperty"},
            {"TargetContextInAirForAimingKeyName", 0x138, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_ThrowableAttack
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_ThrowableAttack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Attack";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponTriggerThrowableName = 0x1C8;
            static constexpr std::uintptr_t ThrowableAttackIsReadyToThrowName = 0x1CC;
            static constexpr std::uintptr_t AttackingSkillSet = 0x1D8;
            static constexpr std::uintptr_t RangeAttackSkillSet = 0x1E0;
            static constexpr std::uintptr_t AimingSkillSet = 0x1E8;
            static constexpr std::uintptr_t ChosenWeapon = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WeaponTriggerThrowableName", 0x1C8, "NameProperty"},
            {"ThrowableAttackIsReadyToThrowName", 0x1CC, "NameProperty"},
            {"AttackingSkillSet", 0x1D8, "ObjectProperty"},
            {"RangeAttackSkillSet", 0x1E0, "ObjectProperty"},
            {"AimingSkillSet", 0x1E8, "ObjectProperty"},
            {"ChosenWeapon", 0x1F0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_TokenPosition
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_TokenPosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryResultKeyName = 0x1A8;
            static constexpr std::uintptr_t EQSs = 0x1B0;
            static constexpr std::uintptr_t TokenPositionCooldown = 0x1C0;
            static constexpr std::uintptr_t TokenPositionCooldownVariation = 0x1C4;
            static constexpr std::uintptr_t NewTokenPositionCooldown = 0x1C8;
            static constexpr std::uintptr_t NewTokenPositionCooldownVariation = 0x1E0;
            static constexpr std::uintptr_t DistanceToleranceForReturningToPosition = 0x1F8;
            static constexpr std::uintptr_t CanAcquirePositionInEnter = 0x210;
            static constexpr std::uintptr_t DistanceForDestinationAsTarget = 0x228;
            static constexpr std::uintptr_t DestinationAsTargetOnceOnly = 0x240;
            static constexpr std::uintptr_t CanAddNewPositionToProvider = 0x258;
            static constexpr std::uintptr_t ShouldCheckIfPositionIsReachable = 0x270;
            static constexpr std::uintptr_t MarkPositionAsDeniedIfNoVisibilityOnTarget = 0x288;
            static constexpr std::uintptr_t AcceptableDistanceForReservation = 0x2A0;
            static constexpr std::uintptr_t GeneratedTokenPositionTagQuery = 0x2B8;
            static constexpr std::uintptr_t CachedTokenConsumerComponent = 0x348;
            static constexpr std::uintptr_t CachedTokenProviderComponent = 0x350;
            static constexpr std::uintptr_t RunningEQSRequestID = 0x358;
            static constexpr std::uintptr_t bPositionRequested = 0x35C;
            static constexpr std::uintptr_t bPositionAcquiredInEnter = 0x35D;
            static constexpr std::uintptr_t bMoveToTargetFinished = 0x35E;
            static constexpr std::uintptr_t PositionAcquiredFromQueryTimestamp = 0x360;
            static constexpr std::uintptr_t WeaponKeyName = 0x36C;
            static constexpr std::uintptr_t TargetActorName = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"QueryResultKeyName", 0x1A8, "NameProperty"},
            {"EQSs", 0x1B0, "ArrayProperty"},
            {"TokenPositionCooldown", 0x1C0, "FloatProperty"},
            {"TokenPositionCooldownVariation", 0x1C4, "FloatProperty"},
            {"NewTokenPositionCooldown", 0x1C8, "StructProperty"},
            {"NewTokenPositionCooldownVariation", 0x1E0, "StructProperty"},
            {"DistanceToleranceForReturningToPosition", 0x1F8, "StructProperty"},
            {"CanAcquirePositionInEnter", 0x210, "StructProperty"},
            {"DistanceForDestinationAsTarget", 0x228, "StructProperty"},
            {"DestinationAsTargetOnceOnly", 0x240, "StructProperty"},
            {"CanAddNewPositionToProvider", 0x258, "StructProperty"},
            {"ShouldCheckIfPositionIsReachable", 0x270, "StructProperty"},
            {"MarkPositionAsDeniedIfNoVisibilityOnTarget", 0x288, "StructProperty"},
            {"AcceptableDistanceForReservation", 0x2A0, "StructProperty"},
            {"GeneratedTokenPositionTagQuery", 0x2B8, "StructProperty"},
            {"CachedTokenConsumerComponent", 0x348, "ObjectProperty"},
            {"CachedTokenProviderComponent", 0x350, "WeakObjectProperty"},
            {"RunningEQSRequestID", 0x358, "IntProperty"},
            {"bPositionRequested", 0x35C, "BoolProperty"},
            {"bPositionAcquiredInEnter", 0x35D, "BoolProperty"},
            {"bMoveToTargetFinished", 0x35E, "BoolProperty"},
            {"PositionAcquiredFromQueryTimestamp", 0x360, "FloatProperty"},
            {"WeaponKeyName", 0x36C, "NameProperty"},
            {"TargetActorName", 0x370, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_TrapOnPathDetected
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_TrapOnPathDetected";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheAimingDigestedSkillSet = 0xA8;
            static constexpr std::uintptr_t TrapOnPathKeyName = 0xB0;
            static constexpr std::uintptr_t TrapActorOnPathKeyName = 0xB4;
            static constexpr std::uintptr_t TargetActorName = 0xB8;
            static constexpr std::uintptr_t AlertLevelName = 0xBC;
            static constexpr std::uintptr_t RangeAttackExecutionStatusName = 0xC0;
            static constexpr std::uintptr_t CurrentTrapTarget = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CacheAimingDigestedSkillSet", 0xA8, "ObjectProperty"},
            {"TrapOnPathKeyName", 0xB0, "NameProperty"},
            {"TrapActorOnPathKeyName", 0xB4, "NameProperty"},
            {"TargetActorName", 0xB8, "NameProperty"},
            {"AlertLevelName", 0xBC, "NameProperty"},
            {"RangeAttackExecutionStatusName", 0xC0, "NameProperty"},
            {"CurrentTrapTarget", 0xD0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_UseAugmentMovementItem
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_UseAugmentMovementItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementItemObjectKeyName = 0xA8;
            static constexpr std::uintptr_t UseSecondaryFireKeyName = 0xB0;
            static constexpr std::uintptr_t CanUseInputToDeactivateKeyName = 0xB8;
            static constexpr std::uintptr_t CanUseWhilePathFollowingKeyName = 0xC0;
            static constexpr std::uintptr_t HealingExecutionStatusKeyName = 0xC8;
            static constexpr std::uintptr_t CachedAIServicePlayerBots = 0xD0;
            static constexpr std::uintptr_t CachedPathFollowingComponent = 0xD8;
            static constexpr std::uintptr_t CachedMovementItemData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MovementItemObjectKeyName", 0xA8, "NameProperty"},
            {"UseSecondaryFireKeyName", 0xB0, "NameProperty"},
            {"CanUseInputToDeactivateKeyName", 0xB8, "NameProperty"},
            {"CanUseWhilePathFollowingKeyName", 0xC0, "NameProperty"},
            {"HealingExecutionStatusKeyName", 0xC8, "NameProperty"},
            {"CachedAIServicePlayerBots", 0xD0, "ObjectProperty"},
            {"CachedPathFollowingComponent", 0xD8, "ObjectProperty"},
            {"CachedMovementItemData", 0xE0, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_VehicleCombatNavigation
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_VehicleCombatNavigation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionDuration = 0x1B0;
            static constexpr std::uintptr_t ExecutionDurationDeviation = 0x1C8;
            static constexpr std::uintptr_t CooldownDuration = 0x1E0;
            static constexpr std::uintptr_t CooldownDurationDeviation = 0x1F8;
            static constexpr std::uintptr_t OddsToStart = 0x210;
            static constexpr std::uintptr_t OddsToStartWhenTargetMatchesOptionalTags = 0x228;
            static constexpr std::uintptr_t OddsToGoOnCooldown = 0x240;
            static constexpr std::uintptr_t OddsToGoOnCooldownWhenTargetMatchesOptionalTags = 0x258;
            static constexpr std::uintptr_t OptionalTargetTagsToMatch = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ExecutionDuration", 0x1B0, "StructProperty"},
            {"ExecutionDurationDeviation", 0x1C8, "StructProperty"},
            {"CooldownDuration", 0x1E0, "StructProperty"},
            {"CooldownDurationDeviation", 0x1F8, "StructProperty"},
            {"OddsToStart", 0x210, "StructProperty"},
            {"OddsToStartWhenTargetMatchesOptionalTags", 0x228, "StructProperty"},
            {"OddsToGoOnCooldown", 0x240, "StructProperty"},
            {"OddsToGoOnCooldownWhenTargetMatchesOptionalTags", 0x258, "StructProperty"},
            {"OptionalTargetTagsToMatch", 0x270, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_VehicleEscalate
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_VehicleEscalate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBotController = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedBotController", 0xA0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_VehicleLeaveSeat
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_VehicleLeaveSeat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t LeaveSeatStatusKeyName = 0xA8;
            static constexpr std::uintptr_t bLeaveSeatWhenPlayerInVehicle = 0xAE;
            static constexpr std::uintptr_t bLeaveSeatWhenConverterLeave = 0xAF;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LeaveSeatStatusKeyName", 0xA8, "NameProperty"},
            {"bLeaveSeatWhenPlayerInVehicle", 0xAE, "BoolProperty"},
            {"bLeaveSeatWhenConverterLeave", 0xAF, "BoolProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_VehicleSwitchSeat
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_VehicleSwitchSeat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t SwitchSeatStatusKeyName = 0xA8;
            static constexpr std::uintptr_t bSwitchToDriverSeatIfEmpty = 0xB0;
            static constexpr std::uintptr_t bSwitchToEmptyDriverSeat = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SwitchSeatStatusKeyName", 0xA8, "NameProperty"},
            {"bSwitchToDriverSeatIfEmpty", 0xB0, "StructProperty"},
            {"bSwitchToEmptyDriverSeat", 0xC8, "BoolProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_WaitForPassengers
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_WaitForPassengers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitForPassengersStatusKeyName = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaitForPassengersStatusKeyName", 0xA8, "NameProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Warmup
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Warmup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t WarmupPlayEmoteExecutionStatusKeyName = 0xA8;
            static constexpr std::uintptr_t WarmupLootAndShootExecutionStatusKeyName = 0xAC;
            static constexpr std::uintptr_t WarmupIdleExecutionStatusKeyName = 0xB0;
            static constexpr std::uintptr_t CacheWarmupDigestedSkillSet = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WarmupPlayEmoteExecutionStatusKeyName", 0xA8, "NameProperty"},
            {"WarmupLootAndShootExecutionStatusKeyName", 0xAC, "NameProperty"},
            {"WarmupIdleExecutionStatusKeyName", 0xB0, "NameProperty"},
            {"CacheWarmupDigestedSkillSet", 0xC0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_WeaponSelection
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_WeaponSelection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t ThrowableAttackIsReadyToThrowName = 0xA8;
            static constexpr std::uintptr_t WeaponKeyName = 0xAC;
            static constexpr std::uintptr_t TargetActorName = 0xB0;
            static constexpr std::uintptr_t IsManningTurretKeyName = 0xB4;
            static constexpr std::uintptr_t UseItemSelectNewWeaponKeyName = 0xB8;
            static constexpr std::uintptr_t CacheRangeAttackDigestedSkillSet = 0xD0;
            static constexpr std::uintptr_t CacheAttackingDigestedSkillSet = 0xD8;
            static constexpr std::uintptr_t CacheAimingDigestedSkillSet = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ThrowableAttackIsReadyToThrowName", 0xA8, "NameProperty"},
            {"WeaponKeyName", 0xAC, "NameProperty"},
            {"TargetActorName", 0xB0, "NameProperty"},
            {"IsManningTurretKeyName", 0xB4, "NameProperty"},
            {"UseItemSelectNewWeaponKeyName", 0xB8, "NameProperty"},
            {"CacheRangeAttackDigestedSkillSet", 0xD0, "ObjectProperty"},
            {"CacheAttackingDigestedSkillSet", 0xD8, "ObjectProperty"},
            {"CacheAimingDigestedSkillSet", 0xE0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Zipline
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Zipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentDestinationKeyName = 0x1B0;
            static constexpr std::uintptr_t ZiplineTargetKeyName = 0x1B4;
            static constexpr std::uintptr_t LastZiplineUsedName = 0x1B8;
            static constexpr std::uintptr_t ZiplineMoveExecutionStatusKeyName = 0x1BC;
            static constexpr std::uintptr_t ZiplineEntryLocationKeyName = 0x1C0;
            static constexpr std::uintptr_t ZiplineExitLocationKeyName = 0x1C4;
            static constexpr std::uintptr_t ZiplineLastUsageTimeName = 0x1C8;
            static constexpr std::uintptr_t ZiplineUsageExecutionStatusName = 0x1CC;
            static constexpr std::uintptr_t WaitTimeBetweenZiplineRandomChoices = 0x1D0;
            static constexpr std::uintptr_t ProbabilityToUseZipline = 0x1F8;
            static constexpr std::uintptr_t CachedSafeZoneComponent = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CurrentDestinationKeyName", 0x1B0, "NameProperty"},
            {"ZiplineTargetKeyName", 0x1B4, "NameProperty"},
            {"LastZiplineUsedName", 0x1B8, "NameProperty"},
            {"ZiplineMoveExecutionStatusKeyName", 0x1BC, "NameProperty"},
            {"ZiplineEntryLocationKeyName", 0x1C0, "NameProperty"},
            {"ZiplineExitLocationKeyName", 0x1C4, "NameProperty"},
            {"ZiplineLastUsageTimeName", 0x1C8, "NameProperty"},
            {"ZiplineUsageExecutionStatusName", 0x1CC, "NameProperty"},
            {"WaitTimeBetweenZiplineRandomChoices", 0x1D0, "StructProperty"},
            {"ProbabilityToUseZipline", 0x1F8, "StructProperty"},
            {"CachedSafeZoneComponent", 0x230, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_AbovePhysicsObject
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_AbovePhysicsObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerComp = 0x28;
            static constexpr std::uintptr_t CachedAIController = 0x30;
            static constexpr std::uintptr_t OverrideNavigationFilterClass = 0x38;
            static constexpr std::uintptr_t ExecutionStatusName = 0x58;
            static constexpr std::uintptr_t CachedLODSettingsInterface = 0x68;
            static constexpr std::uintptr_t KeyAccessValidator = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CachedOwnerComp", 0x28, "ObjectProperty"},
            {"CachedAIController", 0x30, "ObjectProperty"},
            {"OverrideNavigationFilterClass", 0x38, "ClassProperty"},
            {"ExecutionStatusName", 0x58, "NameProperty"},
            {"CachedLODSettingsInterface", 0x68, "InterfaceProperty"},
            {"KeyAccessValidator", 0x78, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_BlueprintBase
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_BlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bBlockWeaponActions = 0x30;
            static constexpr std::uintptr_t ItemActivationType = 0x31;
            static constexpr std::uintptr_t bGameplayAbilityEvaluator = 0x32;
            static constexpr std::uintptr_t GameplayAbilityEvaluatorModule = 0x38;
            static constexpr std::uintptr_t bCooldownEvaluator = 0x88;
            static constexpr std::uintptr_t Cooldowns = 0x90;
            static constexpr std::uintptr_t CooldownIdentifierTag = 0xA0;
            static constexpr std::uintptr_t Cooldown = 0xA8;
            static constexpr std::uintptr_t CooldownVariation = 0xD0;
            static constexpr std::uintptr_t CooldownType = 0xF8;
            static constexpr std::uintptr_t bDurationEvaluator = 0xF9;
            static constexpr std::uintptr_t duration = 0x100;
            static constexpr std::uintptr_t DurationVariation = 0x128;
            static constexpr std::uintptr_t bUseSkillLevelForDuration = 0x150;
            static constexpr std::uintptr_t bTokenEvaluator = 0x151;
            static constexpr std::uintptr_t bCheckGroupLeaderForTokens = 0x152;
            static constexpr std::uintptr_t TokenQuery = 0x158;
            static constexpr std::uintptr_t TokenTargetKeyName = 0x1A0;
            static constexpr std::uintptr_t bPositioningEvaluator = 0x1A4;
            static constexpr std::uintptr_t EQSRequest = 0x1A8;
            static constexpr std::uintptr_t bDeferPositioningEQS = 0x1F0;
            static constexpr std::uintptr_t bPausePositioningWhileExecuting = 0x1F1;
            static constexpr std::uintptr_t bAllowStayingOnSamePosition = 0x1F2;
            static constexpr std::uintptr_t bTestPositioningReachability = 0x1F3;
            static constexpr std::uintptr_t PositioningReachabilityRetryDelay = 0x1F4;
            static constexpr std::uintptr_t PositioningReachabilityNavFilter = 0x1F8;
            static constexpr std::uintptr_t PositioningDestinationKeyName = 0x200;
            static constexpr std::uintptr_t PositioningDefendSpotKeyName = 0x204;
            static constexpr std::uintptr_t PositioningActorKeyName = 0x208;
            static constexpr std::uintptr_t bIsTokenPositioning = 0x20C;
            static constexpr std::uintptr_t GeneratedTokenPositioningQuery = 0x210;
            static constexpr std::uintptr_t TokenPositioningTargetKeyName = 0x258;
            static constexpr std::uintptr_t bLeashEvaluator = 0x25C;
            static constexpr std::uintptr_t LeashRequirement = 0x25D;
            static constexpr std::uintptr_t bWorldConditionEvaluator = 0x25E;
            static constexpr std::uintptr_t StartingWorldConditions = 0x260;
            static constexpr std::uintptr_t OngoingWorldConditions = 0x288;
            static constexpr std::uintptr_t StartingWorldConditionTargetKeyName = 0x2B0;
            static constexpr std::uintptr_t OngoingWorldConditionTargetKeyName = 0x2B4;
            static constexpr std::uintptr_t StartingWorldConditionVectorKeyName = 0x2B8;
            static constexpr std::uintptr_t OngoingWorldConditionVectorKeyName = 0x2BC;
            static constexpr std::uintptr_t StartingWorldConditionGroupLeaderVectorKeyName = 0x2C0;
            static constexpr std::uintptr_t OngoingWorldConditionGroupLeaderVectorKeyName = 0x2C4;
            static constexpr std::uintptr_t bBlackboardConditionEvaluator = 0x2C8;
            static constexpr std::uintptr_t bEvaluateOnBlackboardKeyChange = 0x2C9;
            static constexpr std::uintptr_t StartingBlackboardConditionsPassMode = 0x2CA;
            static constexpr std::uintptr_t StartingBlackboardConditions = 0x2D0;
            static constexpr std::uintptr_t OngoingBlackboardConditionsPassMode = 0x2E0;
            static constexpr std::uintptr_t OngoingBlackboardConditions = 0x2E8;
            static constexpr std::uintptr_t bClearanceEvaluator = 0x2F8;
            static constexpr std::uintptr_t ClearanceData = 0x300;
            static constexpr std::uintptr_t bPublishOpportunityEvaluator = 0x318;
            static constexpr std::uintptr_t PublishedOpportunities = 0x320;
            static constexpr std::uintptr_t bListenForOpportunityEvaluator = 0x330;
            static constexpr std::uintptr_t ListenedOpportunityTags = 0x338;
            static constexpr std::uintptr_t OpportunityEvaluationDelay = 0x358;
            static constexpr std::uintptr_t OpportunityEvaluationDelayVariation = 0x380;
            static constexpr std::uintptr_t OpportunityLifespanMode = 0x3A8;
            static constexpr std::uintptr_t OpportunityWindowDuration = 0x3B0;
            static constexpr std::uintptr_t TickScheme = 0x3D8;
            static constexpr std::uintptr_t Interval = 0x3E0;
            static constexpr std::uintptr_t RandomVariation = 0x408;
            static constexpr std::uintptr_t bCanTickWhenLowerPriority = 0x430;
            static constexpr std::uintptr_t ListeningTagsToEvaluate = 0x438;
            static constexpr std::uintptr_t Context = 0x458;
            static constexpr std::uintptr_t StartingQueryState = 0x470;
            static constexpr std::uintptr_t OngoingQueryState = 0x4A0;
            static constexpr std::uintptr_t CachedTokenConsumerComponent = 0x4D0;
            static constexpr std::uintptr_t CachedGroupLeaderTokenConsumerComponent = 0x4D8;
            static constexpr std::uintptr_t CachedOwnerComponent = 0x4E0;
            static constexpr std::uintptr_t CachedController = 0x4E8;
            static constexpr std::uintptr_t CachedLeashComponent = 0x4F0;
            static constexpr std::uintptr_t ListeningBlackboardKeyNames = 0x520;
            static constexpr std::uintptr_t CachedTokenProviderComponent = 0x6B8;
        };

        inline static constexpr std::array<PropertyInfo, 74> Properties{{
            {"bBlockWeaponActions", 0x30, "BoolProperty"},
            {"ItemActivationType", 0x31, "EnumProperty"},
            {"bGameplayAbilityEvaluator", 0x32, "BoolProperty"},
            {"GameplayAbilityEvaluatorModule", 0x38, "StructProperty"},
            {"bCooldownEvaluator", 0x88, "BoolProperty"},
            {"Cooldowns", 0x90, "ArrayProperty"},
            {"CooldownIdentifierTag", 0xA0, "StructProperty"},
            {"Cooldown", 0xA8, "StructProperty"},
            {"CooldownVariation", 0xD0, "StructProperty"},
            {"CooldownType", 0xF8, "EnumProperty"},
            {"bDurationEvaluator", 0xF9, "BoolProperty"},
            {"duration", 0x100, "StructProperty"},
            {"DurationVariation", 0x128, "StructProperty"},
            {"bUseSkillLevelForDuration", 0x150, "BoolProperty"},
            {"bTokenEvaluator", 0x151, "BoolProperty"},
            {"bCheckGroupLeaderForTokens", 0x152, "BoolProperty"},
            {"TokenQuery", 0x158, "StructProperty"},
            {"TokenTargetKeyName", 0x1A0, "NameProperty"},
            {"bPositioningEvaluator", 0x1A4, "BoolProperty"},
            {"EQSRequest", 0x1A8, "StructProperty"},
            {"bDeferPositioningEQS", 0x1F0, "BoolProperty"},
            {"bPausePositioningWhileExecuting", 0x1F1, "BoolProperty"},
            {"bAllowStayingOnSamePosition", 0x1F2, "BoolProperty"},
            {"bTestPositioningReachability", 0x1F3, "BoolProperty"},
            {"PositioningReachabilityRetryDelay", 0x1F4, "FloatProperty"},
            {"PositioningReachabilityNavFilter", 0x1F8, "ClassProperty"},
            {"PositioningDestinationKeyName", 0x200, "NameProperty"},
            {"PositioningDefendSpotKeyName", 0x204, "NameProperty"},
            {"PositioningActorKeyName", 0x208, "NameProperty"},
            {"bIsTokenPositioning", 0x20C, "BoolProperty"},
            {"GeneratedTokenPositioningQuery", 0x210, "StructProperty"},
            {"TokenPositioningTargetKeyName", 0x258, "NameProperty"},
            {"bLeashEvaluator", 0x25C, "BoolProperty"},
            {"LeashRequirement", 0x25D, "EnumProperty"},
            {"bWorldConditionEvaluator", 0x25E, "BoolProperty"},
            {"StartingWorldConditions", 0x260, "StructProperty"},
            {"OngoingWorldConditions", 0x288, "StructProperty"},
            {"StartingWorldConditionTargetKeyName", 0x2B0, "NameProperty"},
            {"OngoingWorldConditionTargetKeyName", 0x2B4, "NameProperty"},
            {"StartingWorldConditionVectorKeyName", 0x2B8, "NameProperty"},
            {"OngoingWorldConditionVectorKeyName", 0x2BC, "NameProperty"},
            {"StartingWorldConditionGroupLeaderVectorKeyName", 0x2C0, "NameProperty"},
            {"OngoingWorldConditionGroupLeaderVectorKeyName", 0x2C4, "NameProperty"},
            {"bBlackboardConditionEvaluator", 0x2C8, "BoolProperty"},
            {"bEvaluateOnBlackboardKeyChange", 0x2C9, "BoolProperty"},
            {"StartingBlackboardConditionsPassMode", 0x2CA, "EnumProperty"},
            {"StartingBlackboardConditions", 0x2D0, "ArrayProperty"},
            {"OngoingBlackboardConditionsPassMode", 0x2E0, "EnumProperty"},
            {"OngoingBlackboardConditions", 0x2E8, "ArrayProperty"},
            {"bClearanceEvaluator", 0x2F8, "BoolProperty"},
            {"ClearanceData", 0x300, "StructProperty"},
            {"bPublishOpportunityEvaluator", 0x318, "BoolProperty"},
            {"PublishedOpportunities", 0x320, "ArrayProperty"},
            {"bListenForOpportunityEvaluator", 0x330, "BoolProperty"},
            {"ListenedOpportunityTags", 0x338, "StructProperty"},
            {"OpportunityEvaluationDelay", 0x358, "StructProperty"},
            {"OpportunityEvaluationDelayVariation", 0x380, "StructProperty"},
            {"OpportunityLifespanMode", 0x3A8, "EnumProperty"},
            {"OpportunityWindowDuration", 0x3B0, "StructProperty"},
            {"TickScheme", 0x3D8, "EnumProperty"},
            {"Interval", 0x3E0, "StructProperty"},
            {"RandomVariation", 0x408, "StructProperty"},
            {"bCanTickWhenLowerPriority", 0x430, "BoolProperty"},
            {"ListeningTagsToEvaluate", 0x438, "StructProperty"},
            {"Context", 0x458, "StructProperty"},
            {"StartingQueryState", 0x470, "StructProperty"},
            {"OngoingQueryState", 0x4A0, "StructProperty"},
            {"CachedTokenConsumerComponent", 0x4D0, "ObjectProperty"},
            {"CachedGroupLeaderTokenConsumerComponent", 0x4D8, "WeakObjectProperty"},
            {"CachedOwnerComponent", 0x4E0, "ObjectProperty"},
            {"CachedController", 0x4E8, "ObjectProperty"},
            {"CachedLeashComponent", 0x4F0, "ObjectProperty"},
            {"ListeningBlackboardKeyNames", 0x520, "ArrayProperty"},
            {"CachedTokenProviderComponent", 0x6B8, "WeakObjectProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_DormantUntilPhase
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_DormantUntilPhase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0xA0;
            static constexpr std::uintptr_t bDisabledInCreative = 0xC8;
            static constexpr std::uintptr_t RequiredGamePhaseStep = 0xC9;
            static constexpr std::uintptr_t DelayAfterPhase = 0xD0;
            static constexpr std::uintptr_t RandomDeviationAfterPhase = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsEnabled", 0xA0, "StructProperty"},
            {"bDisabledInCreative", 0xC8, "BoolProperty"},
            {"RequiredGamePhaseStep", 0xC9, "EnumProperty"},
            {"DelayAfterPhase", 0xD0, "StructProperty"},
            {"RandomDeviationAfterPhase", 0xF8, "StructProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_FleeEnvDanger
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_FleeEnvDanger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t MaximumCheckDistance = 0xA0;
            static constexpr std::uintptr_t AdditionalFleeDistance = 0xA4;
            static constexpr std::uintptr_t EnvironmentalDangerExecutionStatusName = 0xA8;
            static constexpr std::uintptr_t EnvironmentalDangerFleeDirectionFromKeyName = 0xAC;
            static constexpr std::uintptr_t EnvironmentalDangerFleeDirectionToKeyName = 0xB0;
            static constexpr std::uintptr_t EnvironmentalDangerFleeDistanceKeyName = 0xB4;
            static constexpr std::uintptr_t CachedController = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MaximumCheckDistance", 0xA0, "FloatProperty"},
            {"AdditionalFleeDistance", 0xA4, "FloatProperty"},
            {"EnvironmentalDangerExecutionStatusName", 0xA8, "NameProperty"},
            {"EnvironmentalDangerFleeDirectionFromKeyName", 0xAC, "NameProperty"},
            {"EnvironmentalDangerFleeDirectionToKeyName", 0xB0, "NameProperty"},
            {"EnvironmentalDangerFleeDistanceKeyName", 0xB4, "NameProperty"},
            {"CachedController", 0xC0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_FollowConvoy
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_FollowConvoy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t SkipSafeToReachLocationCheck = 0x1B0;
            static constexpr std::uintptr_t FollowConvoyStatusKeyName = 0x1C8;
            static constexpr std::uintptr_t FollowConvoyMovementStateKeyName = 0x1CC;
            static constexpr std::uintptr_t FollowConvoyDestinationKeyName = 0x1D0;
            static constexpr std::uintptr_t HasLeaderToFollowKeyName = 0x1D4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SkipSafeToReachLocationCheck", 0x1B0, "StructProperty"},
            {"FollowConvoyStatusKeyName", 0x1C8, "NameProperty"},
            {"FollowConvoyMovementStateKeyName", 0x1CC, "NameProperty"},
            {"FollowConvoyDestinationKeyName", 0x1D0, "NameProperty"},
            {"HasLeaderToFollowKeyName", 0x1D4, "NameProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_FollowGroupLeader
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_FollowGroupLeader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t bBotsSkipSafeToReachLocationCheck = 0x1B0;
            static constexpr std::uintptr_t FollowGroupLeaderStatusKeyName = 0x1C8;
            static constexpr std::uintptr_t FollowGroupLeaderMovementStateKeyName = 0x1CC;
            static constexpr std::uintptr_t FollowGroupLeaderDestinationKeyName = 0x1D0;
            static constexpr std::uintptr_t TooFarFromLeaderKeyName = 0x1D4;
            static constexpr std::uintptr_t HasLeaderToFollowKeyName = 0x1D8;
            static constexpr std::uintptr_t ShouldMoveToLeaderKeyName = 0x1DC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bBotsSkipSafeToReachLocationCheck", 0x1B0, "StructProperty"},
            {"FollowGroupLeaderStatusKeyName", 0x1C8, "NameProperty"},
            {"FollowGroupLeaderMovementStateKeyName", 0x1CC, "NameProperty"},
            {"FollowGroupLeaderDestinationKeyName", 0x1D0, "NameProperty"},
            {"TooFarFromLeaderKeyName", 0x1D4, "NameProperty"},
            {"HasLeaderToFollowKeyName", 0x1D8, "NameProperty"},
            {"ShouldMoveToLeaderKeyName", 0x1DC, "NameProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_Leash
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_Leash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalIsInsideLeashKeyName = 0xA0;
            static constexpr std::uintptr_t AIIsInsideLeashKeyName = 0xA4;
            static constexpr std::uintptr_t LeashCenterLocationKeyName = 0xA8;
            static constexpr std::uintptr_t CachedLeashComponent = 0xB8;
            static constexpr std::uintptr_t CachedAIGoalComponent = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GoalIsInsideLeashKeyName", 0xA0, "NameProperty"},
            {"AIIsInsideLeashKeyName", 0xA4, "NameProperty"},
            {"LeashCenterLocationKeyName", 0xA8, "NameProperty"},
            {"CachedLeashComponent", 0xB8, "ObjectProperty"},
            {"CachedAIGoalComponent", 0xC0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_LookAt
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_LookAt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnConfigurations = 0xA0;
            static constexpr std::uintptr_t SOConfigurations = 0xB0;
            static constexpr std::uintptr_t UtilityWeightBaseDistanceCurve = 0xC0;
            static constexpr std::uintptr_t UtilityWeightBaseDotCurve = 0xC8;
            static constexpr std::uintptr_t ExecutionStatusesToCheckForNonPendingNames = 0xD0;
            static constexpr std::uintptr_t bForceEvaluationOnNearbyPawnChange = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PawnConfigurations", 0xA0, "ArrayProperty"},
            {"SOConfigurations", 0xB0, "ArrayProperty"},
            {"UtilityWeightBaseDistanceCurve", 0xC0, "ObjectProperty"},
            {"UtilityWeightBaseDotCurve", 0xC8, "ObjectProperty"},
            {"ExecutionStatusesToCheckForNonPendingNames", 0xD0, "ArrayProperty"},
            {"bForceEvaluationOnNearbyPawnChange", 0xF0, "BoolProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_NearbyActorsPerception
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_NearbyActorsPerception";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t FoundNearbyActorKeyName = 0xA0;
            static constexpr std::uintptr_t MinimumUpdateInterval = 0xA8;
            static constexpr std::uintptr_t RequiredTypes = 0xD0;
            static constexpr std::uintptr_t MinimumDistanceToActors = 0xD8;
            static constexpr std::uintptr_t RequiredAttitudes = 0x100;
            static constexpr std::uintptr_t bRequireLoS = 0x110;
            static constexpr std::uintptr_t RequiredTagsQuery = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FoundNearbyActorKeyName", 0xA0, "NameProperty"},
            {"MinimumUpdateInterval", 0xA8, "StructProperty"},
            {"RequiredTypes", 0xD0, "IntProperty"},
            {"MinimumDistanceToActors", 0xD8, "StructProperty"},
            {"RequiredAttitudes", 0x100, "ArrayProperty"},
            {"bRequireLoS", 0x110, "BoolProperty"},
            {"RequiredTagsQuery", 0x118, "StructProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_SmartObjects
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_SmartObjects";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectRuntimeParameters = 0xA0;
            static constexpr std::uintptr_t SmartObjectSubsystem = 0xA8;
            static constexpr std::uintptr_t EvaluationTag = 0xB8;
            static constexpr std::uintptr_t bEvaluateSOValidityAfterChosen = 0xBC;
            static constexpr std::uintptr_t bEnableEntryLocationsSupport = 0xBD;
            static constexpr std::uintptr_t MaximumEntryLocationsChecksPerEvaluation = 0xC0;
            static constexpr std::uintptr_t EntryLocationFailuresBlacklistedTime = 0xE8;
            static constexpr std::uintptr_t DistanceToWeightCurveForSlotPicking = 0x110;
            static constexpr std::uintptr_t OverridenFilterClassForEntryPoints = 0x118;
            static constexpr std::uintptr_t ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames = 0x120;
            static constexpr std::uintptr_t SmartObjectExecutionStatusKeyName = 0x140;
            static constexpr std::uintptr_t SmartObjectMovementStateKeyName = 0x144;
            static constexpr std::uintptr_t SmartObjectDestinationKeyName = 0x148;
            static constexpr std::uintptr_t SmartObjectDestinationRotationKeyName = 0x14C;
            static constexpr std::uintptr_t SmartObjectShouldMoveKeyName = 0x150;
            static constexpr std::uintptr_t SmartObjectUrgencyKeyName = 0x154;
            static constexpr std::uintptr_t ForceDebugClosestSOTagsToRemoveOnPawn = 0x158;
            static constexpr std::uintptr_t bFirstTimeRunForceDebugClosestSO = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"SmartObjectRuntimeParameters", 0xA0, "ObjectProperty"},
            {"SmartObjectSubsystem", 0xA8, "ObjectProperty"},
            {"EvaluationTag", 0xB8, "StructProperty"},
            {"bEvaluateSOValidityAfterChosen", 0xBC, "BoolProperty"},
            {"bEnableEntryLocationsSupport", 0xBD, "BoolProperty"},
            {"MaximumEntryLocationsChecksPerEvaluation", 0xC0, "StructProperty"},
            {"EntryLocationFailuresBlacklistedTime", 0xE8, "StructProperty"},
            {"DistanceToWeightCurveForSlotPicking", 0x110, "ObjectProperty"},
            {"OverridenFilterClassForEntryPoints", 0x118, "ClassProperty"},
            {"ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames", 0x120, "ArrayProperty"},
            {"SmartObjectExecutionStatusKeyName", 0x140, "NameProperty"},
            {"SmartObjectMovementStateKeyName", 0x144, "NameProperty"},
            {"SmartObjectDestinationKeyName", 0x148, "NameProperty"},
            {"SmartObjectDestinationRotationKeyName", 0x14C, "NameProperty"},
            {"SmartObjectShouldMoveKeyName", 0x150, "NameProperty"},
            {"SmartObjectUrgencyKeyName", 0x154, "NameProperty"},
            {"ForceDebugClosestSOTagsToRemoveOnPawn", 0x158, "StructProperty"},
            {"bFirstTimeRunForceDebugClosestSO", 0x178, "BoolProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_SpeechBubble
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_SpeechBubble";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator_NearbyActorsPerception";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedSpeechBubbleComponent = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedSpeechBubbleComponent", 0x240, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIPlayActionComponent
    {
        static constexpr std::string_view Name = "FortAthenaAIPlayActionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0xC8;
            static constexpr std::uintptr_t Actions = 0xD0;
            static constexpr std::uintptr_t CachedOwnerController = 0xE0;
            static constexpr std::uintptr_t CachedActionsByData = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIsEnabled", 0xC8, "BoolProperty"},
            {"Actions", 0xD0, "ArrayProperty"},
            {"CachedOwnerController", 0xE0, "WeakObjectProperty"},
            {"CachedActionsByData", 0xE8, "MapProperty"},
        }};
    };

    struct FortAthenaAttachToActorStateTreeTask
    {
        static constexpr std::string_view Name = "FortAthenaAttachToActorStateTreeTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeTaskBlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x70;
            static constexpr std::uintptr_t TargetActor = 0x78;
            static constexpr std::uintptr_t AttachExecutionMode = 0x80;
            static constexpr std::uintptr_t bHandleAthenaMovComponent = 0x84;
            static constexpr std::uintptr_t bSetPhysicsToQueryOnlyWhileAttached = 0x85;
            static constexpr std::uintptr_t bTryToAttachToSkeletalMeshOnTargetActor = 0x86;
            static constexpr std::uintptr_t bChangeBaseToSkeletalMeshOnTargetActor = 0x87;
            static constexpr std::uintptr_t AttachmentLocationRule = 0x88;
            static constexpr std::uintptr_t AttachmentRotationRule = 0x89;
            static constexpr std::uintptr_t AttachmentScaleRule = 0x8A;
            static constexpr std::uintptr_t bWeldSimulatedBodiesOnAttach = 0x8B;
            static constexpr std::uintptr_t AttachmentSocketName = 0x8C;
            static constexpr std::uintptr_t DetachExecutionMode = 0x90;
            static constexpr std::uintptr_t bForceChangeBaseOnDetach = 0x94;
            static constexpr std::uintptr_t DetachmentLocationRule = 0x95;
            static constexpr std::uintptr_t DetachmentRotationRule = 0x96;
            static constexpr std::uintptr_t DetachmentScaleRule = 0x97;
            static constexpr std::uintptr_t bCallModifyOnDetach = 0x98;
            static constexpr std::uintptr_t bHandleLaunchCharacter = 0x99;
            static constexpr std::uintptr_t bHasHandledLaunchCharacter = 0x9A;
            static constexpr std::uintptr_t FortPawnActor = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"Actor", 0x70, "ObjectProperty"},
            {"TargetActor", 0x78, "ObjectProperty"},
            {"AttachExecutionMode", 0x80, "EnumProperty"},
            {"bHandleAthenaMovComponent", 0x84, "BoolProperty"},
            {"bSetPhysicsToQueryOnlyWhileAttached", 0x85, "BoolProperty"},
            {"bTryToAttachToSkeletalMeshOnTargetActor", 0x86, "BoolProperty"},
            {"bChangeBaseToSkeletalMeshOnTargetActor", 0x87, "BoolProperty"},
            {"AttachmentLocationRule", 0x88, "EnumProperty"},
            {"AttachmentRotationRule", 0x89, "EnumProperty"},
            {"AttachmentScaleRule", 0x8A, "EnumProperty"},
            {"bWeldSimulatedBodiesOnAttach", 0x8B, "BoolProperty"},
            {"AttachmentSocketName", 0x8C, "NameProperty"},
            {"DetachExecutionMode", 0x90, "EnumProperty"},
            {"bForceChangeBaseOnDetach", 0x94, "BoolProperty"},
            {"DetachmentLocationRule", 0x95, "EnumProperty"},
            {"DetachmentRotationRule", 0x96, "EnumProperty"},
            {"DetachmentScaleRule", 0x97, "EnumProperty"},
            {"bCallModifyOnDetach", 0x98, "BoolProperty"},
            {"bHandleLaunchCharacter", 0x99, "BoolProperty"},
            {"bHasHandledLaunchCharacter", 0x9A, "BoolProperty"},
            {"FortPawnActor", 0xA0, "ObjectProperty"},
        }};
    };

    struct FortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask
    {
        static constexpr std::string_view Name = "FortAthenaBPDynamicOptionsSmartObjectUIStateTreeTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeTaskBlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectActor = 0x70;
            static constexpr std::uintptr_t Actor = 0x78;
            static constexpr std::uintptr_t UIOptionsDataTable = 0x80;
            static constexpr std::uintptr_t UIOptions = 0xB0;
            static constexpr std::uintptr_t UIOptionsResult = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SmartObjectActor", 0x70, "ObjectProperty"},
            {"Actor", 0x78, "ObjectProperty"},
            {"UIOptionsDataTable", 0x80, "StructProperty"},
            {"UIOptions", 0xB0, "StructProperty"},
            {"UIOptionsResult", 0xC8, "StructProperty"},
        }};
    };

    struct FortAthenaBTContext_SuppressAutomaticAttackCheck
    {
        static constexpr std::string_view Name = "FortAthenaBTContext_SuppressAutomaticAttackCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTService_ContextOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t Enabled = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Enabled", 0x70, "StructProperty"},
        }};
    };

    struct FortAthenaBTDecorator_BehaviorControls
    {
        static constexpr std::string_view Name = "FortAthenaBTDecorator_BehaviorControls";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorTreeBranch = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BehaviorTreeBranch", 0x68, "EnumProperty"},
        }};
    };

    struct FortAthenaBTService_AIEvaluator
    {
        static constexpr std::string_view Name = "FortAthenaBTService_AIEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectionTag = 0x70;
            static constexpr std::uintptr_t AIEvaluatorClass = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InjectionTag", 0x70, "StructProperty"},
            {"AIEvaluatorClass", 0x78, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_ActorAttentionTracking
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ActorAttentionTracking";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t DisableService = 0x70;
            static constexpr std::uintptr_t UseAllPerceivedHostileActors = 0x88;
            static constexpr std::uintptr_t RequireSightOfPerceivedHostileActor = 0xA0;
            static constexpr std::uintptr_t ActorToCheck = 0xB8;
            static constexpr std::uintptr_t AttentionDurationThreshold = 0xD8;
            static constexpr std::uintptr_t IsOwnerAimedAt = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisableService", 0x70, "StructProperty"},
            {"UseAllPerceivedHostileActors", 0x88, "StructProperty"},
            {"RequireSightOfPerceivedHostileActor", 0xA0, "StructProperty"},
            {"ActorToCheck", 0xB8, "StructProperty"},
            {"AttentionDurationThreshold", 0xD8, "StructProperty"},
            {"IsOwnerAimedAt", 0xF0, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_AgentOffNavigationData
    {
        static constexpr std::string_view Name = "FortAthenaBTService_AgentOffNavigationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t AgentIsOffNavigationDataKeyName = 0x70;
            static constexpr std::uintptr_t AgentIsOffNavigationDataTimeKeyName = 0x74;
            static constexpr std::uintptr_t bEvaluateOnTick = 0x78;
            static constexpr std::uintptr_t TickInterval = 0x80;
            static constexpr std::uintptr_t bEvaluateOnMoveRequestFinished = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AgentIsOffNavigationDataKeyName", 0x70, "NameProperty"},
            {"AgentIsOffNavigationDataTimeKeyName", 0x74, "NameProperty"},
            {"bEvaluateOnTick", 0x78, "BoolProperty"},
            {"TickInterval", 0x80, "StructProperty"},
            {"bEvaluateOnMoveRequestFinished", 0xA8, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_AlertLevel
    {
        static constexpr std::string_view Name = "FortAthenaBTService_AlertLevel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t AlertLevelKeyName = 0x70;
            static constexpr std::uintptr_t LastKnownPositionKeyName = 0x74;
            static constexpr std::uintptr_t LastKnownPositionTypeKeyName = 0x78;
            static constexpr std::uintptr_t LastKnownPositionTimeKeyName = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AlertLevelKeyName", 0x70, "NameProperty"},
            {"LastKnownPositionKeyName", 0x74, "NameProperty"},
            {"LastKnownPositionTypeKeyName", 0x78, "NameProperty"},
            {"LastKnownPositionTimeKeyName", 0x7C, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_ApplyGameplayEffect
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ApplyGameplayEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayEffectClass = 0x70;
            static constexpr std::uintptr_t GameplayEffectLevel = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameplayEffectClass", 0x70, "StructProperty"},
            {"GameplayEffectLevel", 0x90, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_ApplyGameplayTags
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ApplyGameplayTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagsToApply = 0x70;
            static constexpr std::uintptr_t bReplicateTags = 0xA0;
            static constexpr std::uintptr_t RemoveTagsOnCeaseRelevant = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GameplayTagsToApply", 0x70, "StructProperty"},
            {"bReplicateTags", 0xA0, "StructProperty"},
            {"RemoveTagsOnCeaseRelevant", 0xB8, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_ApplyPatrolTags
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ApplyPatrolTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x60;
            static constexpr std::uintptr_t RandomDeviation = 0x64;
            static constexpr std::uintptr_t bCallTickOnSearchStart = 0x68;
            static constexpr std::uintptr_t bRestartTimerOnEachActivation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interval", 0x60, "FloatProperty"},
            {"RandomDeviation", 0x64, "FloatProperty"},
            {"bCallTickOnSearchStart", 0x68, "BoolProperty"},
            {"bRestartTimerOnEachActivation", 0x68, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_ApplySkillSet
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ApplySkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t SkillSetClass = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SkillSetClass", 0x70, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_BuildConstruction
    {
        static constexpr std::string_view Name = "FortAthenaBTService_BuildConstruction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t StealWallBuildName = 0x70;
            static constexpr std::uintptr_t StealWallBuildTypeName = 0x74;
            static constexpr std::uintptr_t StealWallBuildGridCoordName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StealWallBuildName", 0x70, "NameProperty"},
            {"StealWallBuildTypeName", 0x74, "NameProperty"},
            {"StealWallBuildGridCoordName", 0x78, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_Clamber
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Clamber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t ClamberExecutionStatusName = 0x70;
            static constexpr std::uintptr_t ClamberOriginLocationName = 0x74;
            static constexpr std::uintptr_t ClamberDestinationLocationName = 0x78;
            static constexpr std::uintptr_t ClamberAbilityStatusName = 0x7C;
            static constexpr std::uintptr_t JumpExecutionStatusName = 0x80;
            static constexpr std::uintptr_t CrouchExecutionStatusName = 0x84;
            static constexpr std::uintptr_t FirstJumpRetryMaxCount = 0x94;
            static constexpr std::uintptr_t ClamberAttemptRetryMaxCount = 0x98;
            static constexpr std::uintptr_t FirstJumpRetryDelay = 0x9C;
            static constexpr std::uintptr_t FirstJumpClamberMaxStartDelay = 0xA0;
            static constexpr std::uintptr_t ClamberRetryDelay = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ClamberExecutionStatusName", 0x70, "NameProperty"},
            {"ClamberOriginLocationName", 0x74, "NameProperty"},
            {"ClamberDestinationLocationName", 0x78, "NameProperty"},
            {"ClamberAbilityStatusName", 0x7C, "NameProperty"},
            {"JumpExecutionStatusName", 0x80, "NameProperty"},
            {"CrouchExecutionStatusName", 0x84, "NameProperty"},
            {"FirstJumpRetryMaxCount", 0x94, "UInt32Property"},
            {"ClamberAttemptRetryMaxCount", 0x98, "UInt32Property"},
            {"FirstJumpRetryDelay", 0x9C, "FloatProperty"},
            {"FirstJumpClamberMaxStartDelay", 0xA0, "FloatProperty"},
            {"ClamberRetryDelay", 0xA4, "FloatProperty"},
        }};
    };

    struct FortAthenaBTService_CopyActorLocation
    {
        static constexpr std::string_view Name = "FortAthenaBTService_CopyActorLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBlackboardKey = 0x70;
            static constexpr std::uintptr_t DestinationBlackboardKey = 0x98;
            static constexpr std::uintptr_t bCopyOnBecomeRelevant = 0xC0;
            static constexpr std::uintptr_t bCopyOnCeaseRelevant = 0xD8;
            static constexpr std::uintptr_t bCopyWhenSourceValueChange = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceBlackboardKey", 0x70, "StructProperty"},
            {"DestinationBlackboardKey", 0x98, "StructProperty"},
            {"bCopyOnBecomeRelevant", 0xC0, "StructProperty"},
            {"bCopyOnCeaseRelevant", 0xD8, "StructProperty"},
            {"bCopyWhenSourceValueChange", 0xF0, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_CopyBlackboardVariable
    {
        static constexpr std::string_view Name = "FortAthenaBTService_CopyBlackboardVariable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceBlackboardKey = 0x70;
            static constexpr std::uintptr_t DestinationBlackboardKey = 0x98;
            static constexpr std::uintptr_t bCopyOnBecomeRelevant = 0xC0;
            static constexpr std::uintptr_t bCopyOnCeaseRelevant = 0xC0;
            static constexpr std::uintptr_t bCopyWhenSourceValueChange = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SourceBlackboardKey", 0x70, "StructProperty"},
            {"DestinationBlackboardKey", 0x98, "StructProperty"},
            {"bCopyOnBecomeRelevant", 0xC0, "BoolProperty"},
            {"bCopyOnCeaseRelevant", 0xC0, "BoolProperty"},
            {"bCopyWhenSourceValueChange", 0xC0, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_Crouch
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Crouch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t CrouchExecutionStatusName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CrouchExecutionStatusName", 0x70, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_Escape
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Escape";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t EscapeKeyName = 0x70;
            static constexpr std::uintptr_t EscapeFromStormKeyName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EscapeKeyName", 0x70, "NameProperty"},
            {"EscapeFromStormKeyName", 0x78, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_HeightMap
    {
        static constexpr std::string_view Name = "FortAthenaBTService_HeightMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t HeightMapAverageFloorHeightKeyName = 0x70;
            static constexpr std::uintptr_t AverageFloorHeightRadius = 0x78;
            static constexpr std::uintptr_t AverageFloorHeightHeight = 0xA0;
            static constexpr std::uintptr_t AverageFloorHeightUseLowResolution = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HeightMapAverageFloorHeightKeyName", 0x70, "NameProperty"},
            {"AverageFloorHeightRadius", 0x78, "StructProperty"},
            {"AverageFloorHeightHeight", 0xA0, "StructProperty"},
            {"AverageFloorHeightUseLowResolution", 0xC8, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_Interact
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Interact";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractExecutionStatusKeySelector = 0x70;
            static constexpr std::uintptr_t InteractContextInfoKeySelector = 0x98;
            static constexpr std::uintptr_t InteractObjectKeySelector = 0xC0;
            static constexpr std::uintptr_t ExecutionStatusKeySelector = 0xE8;
            static constexpr std::uintptr_t MovementStateKeySelector = 0x110;
            static constexpr std::uintptr_t InteractionBeingAttempted = 0x138;
            static constexpr std::uintptr_t bRequireDistanceCheck = 0x139;
            static constexpr std::uintptr_t bRequireBlockedCheck = 0x13A;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"InteractExecutionStatusKeySelector", 0x70, "StructProperty"},
            {"InteractContextInfoKeySelector", 0x98, "StructProperty"},
            {"InteractObjectKeySelector", 0xC0, "StructProperty"},
            {"ExecutionStatusKeySelector", 0xE8, "StructProperty"},
            {"MovementStateKeySelector", 0x110, "StructProperty"},
            {"InteractionBeingAttempted", 0x138, "ByteProperty"},
            {"bRequireDistanceCheck", 0x139, "BoolProperty"},
            {"bRequireBlockedCheck", 0x13A, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_JetpackStrafe
    {
        static constexpr std::string_view Name = "FortAthenaBTService_JetpackStrafe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaBTService_Jump";
        struct Offsets
        {
            static constexpr std::uintptr_t JetpackStrafeExecutionStatusName = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JetpackStrafeExecutionStatusName", 0x88, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_Jump
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Jump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpExecutionStatusName = 0x70;
            static constexpr std::uintptr_t CrouchExecutionStatusName = 0x78;
            static constexpr std::uintptr_t JumpInputReleaseDelay = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JumpExecutionStatusName", 0x70, "NameProperty"},
            {"CrouchExecutionStatusName", 0x78, "NameProperty"},
            {"JumpInputReleaseDelay", 0x80, "FloatProperty"},
        }};
    };

    struct FortAthenaBTService_JumpOffBus
    {
        static constexpr std::string_view Name = "FortAthenaBTService_JumpOffBus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpOffBusExecutionStatusName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JumpOffBusExecutionStatusName", 0x70, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_LocationSynchronizerReservation
    {
        static constexpr std::string_view Name = "FortAthenaBTService_LocationSynchronizerReservation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationToReserveKey = 0x70;
            static constexpr std::uintptr_t LocationHardReservationBoundsRatio = 0x98;
            static constexpr std::uintptr_t LocationSoftReservationBoundsRatio = 0xB8;
            static constexpr std::uintptr_t HasLocationReservedKey = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LocationToReserveKey", 0x70, "StructProperty"},
            {"LocationHardReservationBoundsRatio", 0x98, "StructProperty"},
            {"LocationSoftReservationBoundsRatio", 0xB8, "StructProperty"},
            {"HasLocationReservedKey", 0xD8, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_ManageVehicleWeapon
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ManageVehicleWeapon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaBTService_ManageWeapon";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponFireName = 0x70;
            static constexpr std::uintptr_t WeaponTriggerMeleeName = 0x74;
            static constexpr std::uintptr_t WeaponTriggerThrowableName = 0x78;
            static constexpr std::uintptr_t WeaponReloadName = 0x7C;
            static constexpr std::uintptr_t WeaponName = 0x80;
            static constexpr std::uintptr_t WeaponTargetingName = 0x84;
            static constexpr std::uintptr_t TacticalSprintExecutionStatusName = 0x88;
            static constexpr std::uintptr_t HealingStatusKeyName = 0x8C;
            static constexpr std::uintptr_t BlockWeaponActionsKeyName = 0x90;
            static constexpr std::uintptr_t RangedWeaponCancelAutoReloadKeyName = 0x94;
            static constexpr std::uintptr_t AllowAttackingWhileSprinting = 0xB0;
            static constexpr std::uintptr_t bEndChargeOnFireStop = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"WeaponFireName", 0x70, "NameProperty"},
            {"WeaponTriggerMeleeName", 0x74, "NameProperty"},
            {"WeaponTriggerThrowableName", 0x78, "NameProperty"},
            {"WeaponReloadName", 0x7C, "NameProperty"},
            {"WeaponName", 0x80, "NameProperty"},
            {"WeaponTargetingName", 0x84, "NameProperty"},
            {"TacticalSprintExecutionStatusName", 0x88, "NameProperty"},
            {"HealingStatusKeyName", 0x8C, "NameProperty"},
            {"BlockWeaponActionsKeyName", 0x90, "NameProperty"},
            {"RangedWeaponCancelAutoReloadKeyName", 0x94, "NameProperty"},
            {"AllowAttackingWhileSprinting", 0xB0, "StructProperty"},
            {"bEndChargeOnFireStop", 0xC8, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_ManageWeapon
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ManageWeapon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponFireName = 0x70;
            static constexpr std::uintptr_t WeaponTriggerMeleeName = 0x74;
            static constexpr std::uintptr_t WeaponTriggerThrowableName = 0x78;
            static constexpr std::uintptr_t WeaponReloadName = 0x7C;
            static constexpr std::uintptr_t WeaponName = 0x80;
            static constexpr std::uintptr_t WeaponTargetingName = 0x84;
            static constexpr std::uintptr_t TacticalSprintExecutionStatusName = 0x88;
            static constexpr std::uintptr_t HealingStatusKeyName = 0x8C;
            static constexpr std::uintptr_t BlockWeaponActionsKeyName = 0x90;
            static constexpr std::uintptr_t RangedWeaponCancelAutoReloadKeyName = 0x94;
            static constexpr std::uintptr_t AllowAttackingWhileSprinting = 0xB0;
            static constexpr std::uintptr_t bEndChargeOnFireStop = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"WeaponFireName", 0x70, "NameProperty"},
            {"WeaponTriggerMeleeName", 0x74, "NameProperty"},
            {"WeaponTriggerThrowableName", 0x78, "NameProperty"},
            {"WeaponReloadName", 0x7C, "NameProperty"},
            {"WeaponName", 0x80, "NameProperty"},
            {"WeaponTargetingName", 0x84, "NameProperty"},
            {"TacticalSprintExecutionStatusName", 0x88, "NameProperty"},
            {"HealingStatusKeyName", 0x8C, "NameProperty"},
            {"BlockWeaponActionsKeyName", 0x90, "NameProperty"},
            {"RangedWeaponCancelAutoReloadKeyName", 0x94, "NameProperty"},
            {"AllowAttackingWhileSprinting", 0xB0, "StructProperty"},
            {"bEndChargeOnFireStop", 0xC8, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_ModifyTokenNumber
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ModifyTokenNumber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenTagQuery = 0x70;
            static constexpr std::uintptr_t NewTokenAmount = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TokenTagQuery", 0x70, "StructProperty"},
            {"NewTokenAmount", 0xB8, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_ModulateMovementStyleToDestination
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ModulateMovementStyleToDestination";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t DestinationBlackboardKey = 0x70;
            static constexpr std::uintptr_t CanSprint = 0x98;
            static constexpr std::uintptr_t SprintingDistance = 0xB0;
            static constexpr std::uintptr_t SprintingHysteresisDistance = 0xC8;
            static constexpr std::uintptr_t CanRun = 0xE0;
            static constexpr std::uintptr_t RunningDistance = 0xF8;
            static constexpr std::uintptr_t RunningHysteresisDistance = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DestinationBlackboardKey", 0x70, "StructProperty"},
            {"CanSprint", 0x98, "StructProperty"},
            {"SprintingDistance", 0xB0, "StructProperty"},
            {"SprintingHysteresisDistance", 0xC8, "StructProperty"},
            {"CanRun", 0xE0, "StructProperty"},
            {"RunningDistance", 0xF8, "StructProperty"},
            {"RunningHysteresisDistance", 0x110, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_ModulateSpeedOnDistance
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ModulateSpeedOnDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t TooFarFromLeaderKeyName = 0x70;
            static constexpr std::uintptr_t FollowGroupLeaderDestinationKeyName = 0x74;
            static constexpr std::uintptr_t TargetSpeed = 0x80;
            static constexpr std::uintptr_t MaxSpeed = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TooFarFromLeaderKeyName", 0x70, "NameProperty"},
            {"FollowGroupLeaderDestinationKeyName", 0x74, "NameProperty"},
            {"TargetSpeed", 0x80, "StructProperty"},
            {"MaxSpeed", 0x98, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
    {
        static constexpr std::string_view Name = "FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKeyA = 0x70;
            static constexpr std::uintptr_t BlackboardKeyB = 0x98;
            static constexpr std::uintptr_t MinDistance = 0xC0;
            static constexpr std::uintptr_t MaxDistance = 0xC4;
            static constexpr std::uintptr_t MinDistanceSpeed = 0xC8;
            static constexpr std::uintptr_t MaxDistanceSpeed = 0xCC;
            static constexpr std::uintptr_t bCalculateAs2D = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BlackboardKeyA", 0x70, "StructProperty"},
            {"BlackboardKeyB", 0x98, "StructProperty"},
            {"MinDistance", 0xC0, "FloatProperty"},
            {"MaxDistance", 0xC4, "FloatProperty"},
            {"MinDistanceSpeed", 0xC8, "FloatProperty"},
            {"MaxDistanceSpeed", 0xCC, "FloatProperty"},
            {"bCalculateAs2D", 0xD0, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_MovementListener
    {
        static constexpr std::string_view Name = "FortAthenaBTService_MovementListener";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementStateKeyName = 0x70;
            static constexpr std::uintptr_t IsStuckKeyName = 0x74;
            static constexpr std::uintptr_t bSuccessPartialAsFail = 0x78;
            static constexpr std::uintptr_t MaxFailCount = 0x80;
            static constexpr std::uintptr_t MaxDurationToFail = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MovementStateKeyName", 0x70, "NameProperty"},
            {"IsStuckKeyName", 0x74, "NameProperty"},
            {"bSuccessPartialAsFail", 0x78, "BoolProperty"},
            {"MaxFailCount", 0x80, "StructProperty"},
            {"MaxDurationToFail", 0xA8, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_MovementStyle
    {
        static constexpr std::string_view Name = "FortAthenaBTService_MovementStyle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementStyle = 0x70;
            static constexpr std::uintptr_t NewMovementStyle = 0x78;
            static constexpr std::uintptr_t TagCondition = 0xA8;
            static constexpr std::uintptr_t BlackboardCondition = 0xF0;
            static constexpr std::uintptr_t InvertBlackboardCondition = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MovementStyle", 0x70, "ByteProperty"},
            {"NewMovementStyle", 0x78, "StructProperty"},
            {"TagCondition", 0xA8, "StructProperty"},
            {"BlackboardCondition", 0xF0, "StructProperty"},
            {"InvertBlackboardCondition", 0x118, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_Patrolling
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Patrolling";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t PatrollingAppendDestinationKeyName = 0x70;
            static constexpr std::uintptr_t AcceptableRadius = 0x78;
            static constexpr std::uintptr_t FilterClass = 0x80;
            static constexpr std::uintptr_t bAllowPartialPath = 0x88;
            static constexpr std::uintptr_t bProjectGoalLocation = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PatrollingAppendDestinationKeyName", 0x70, "NameProperty"},
            {"AcceptableRadius", 0x78, "FloatProperty"},
            {"FilterClass", 0x80, "ClassProperty"},
            {"bAllowPartialPath", 0x88, "BoolProperty"},
            {"bProjectGoalLocation", 0x88, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_PauseVehicle
    {
        static constexpr std::string_view Name = "FortAthenaBTService_PauseVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x60;
            static constexpr std::uintptr_t RandomDeviation = 0x64;
            static constexpr std::uintptr_t bCallTickOnSearchStart = 0x68;
            static constexpr std::uintptr_t bRestartTimerOnEachActivation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interval", 0x60, "FloatProperty"},
            {"RandomDeviation", 0x64, "FloatProperty"},
            {"bCallTickOnSearchStart", 0x68, "BoolProperty"},
            {"bRestartTimerOnEachActivation", 0x68, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_PerceptionCheck
    {
        static constexpr std::string_view Name = "FortAthenaBTService_PerceptionCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t PerceptionTargetActorKey = 0x70;
            static constexpr std::uintptr_t PerceptionTargetActorIsBeingSeenKeyName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PerceptionTargetActorKey", 0x70, "StructProperty"},
            {"PerceptionTargetActorIsBeingSeenKeyName", 0x90, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_PickUpLoot
    {
        static constexpr std::string_view Name = "FortAthenaBTService_PickUpLoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t LootObjectKeyName = 0x70;
            static constexpr std::uintptr_t ExecutionStatusName = 0x74;
            static constexpr std::uintptr_t InteractionExecutionStatusName = 0x78;
            static constexpr std::uintptr_t InteractionContextInfoName = 0x7C;
            static constexpr std::uintptr_t MovementStateKeyName = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LootObjectKeyName", 0x70, "NameProperty"},
            {"ExecutionStatusName", 0x74, "NameProperty"},
            {"InteractionExecutionStatusName", 0x78, "NameProperty"},
            {"InteractionContextInfoName", 0x7C, "NameProperty"},
            {"MovementStateKeyName", 0x80, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_PropagatePatrolProgressToPassengers
    {
        static constexpr std::string_view Name = "FortAthenaBTService_PropagatePatrolProgressToPassengers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t PatrollingAppendDestinationKeyName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PatrollingAppendDestinationKeyName", 0x70, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_Revive
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Revive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t ReviveTargetKeyName = 0x70;
            static constexpr std::uintptr_t ExecutionStatusName = 0x74;
            static constexpr std::uintptr_t MoveToPathMovementStateName = 0x78;
            static constexpr std::uintptr_t InteractionExecutionStatusName = 0x7C;
            static constexpr std::uintptr_t InteractionContextInfoName = 0x80;
            static constexpr std::uintptr_t bDisableLeash = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ReviveTargetKeyName", 0x70, "NameProperty"},
            {"ExecutionStatusName", 0x74, "NameProperty"},
            {"MoveToPathMovementStateName", 0x78, "NameProperty"},
            {"InteractionExecutionStatusName", 0x7C, "NameProperty"},
            {"InteractionContextInfoName", 0x80, "NameProperty"},
            {"bDisableLeash", 0x84, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_SetAIFocus
    {
        static constexpr std::string_view Name = "FortAthenaBTService_SetAIFocus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService_DefaultFocus";
        struct Offsets
        {
            static constexpr std::uintptr_t FocusPriorityToSet = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FocusPriorityToSet", 0xA0, "EnumProperty"},
        }};
    };

    struct FortAthenaBTService_SetBlackboardBool
    {
        static constexpr std::string_view Name = "FortAthenaBTService_SetBlackboardBool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0x70;
            static constexpr std::uintptr_t bBlackboardValue = 0x98;
            static constexpr std::uintptr_t ExitAction = 0x99;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BlackboardKey", 0x70, "StructProperty"},
            {"bBlackboardValue", 0x98, "BoolProperty"},
            {"ExitAction", 0x99, "EnumProperty"},
        }};
    };

    struct FortAthenaBTService_SetExecutionStatus
    {
        static constexpr std::string_view Name = "FortAthenaBTService_SetExecutionStatus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bSetExecutionStatusOnBecomeRelevant = 0x98;
            static constexpr std::uintptr_t ExecutionStatus = 0x99;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bSetExecutionStatusOnBecomeRelevant", 0x98, "BoolProperty"},
            {"ExecutionStatus", 0x99, "EnumProperty"},
        }};
    };

    struct FortAthenaBTService_SetInTacticalAction
    {
        static constexpr std::string_view Name = "FortAthenaBTService_SetInTacticalAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldSetInTacticalAction = 0x70;
            static constexpr std::uintptr_t TacticalActionIdentifierTag = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ShouldSetInTacticalAction", 0x70, "StructProperty"},
            {"TacticalActionIdentifierTag", 0x88, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_Slide
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Slide";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t SlideExecutionStatusName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlideExecutionStatusName", 0x70, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_SmartObject
    {
        static constexpr std::string_view Name = "FortAthenaBTService_SmartObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectStatusKeyName = 0x70;
            static constexpr std::uintptr_t SmartObjectDestinationKeyName = 0x74;
            static constexpr std::uintptr_t EvaluationTag = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SmartObjectStatusKeyName", 0x70, "NameProperty"},
            {"SmartObjectDestinationKeyName", 0x74, "NameProperty"},
            {"EvaluationTag", 0x78, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_Sprinting
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Sprinting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t SprintExecutionStatusName = 0x90;
            static constexpr std::uintptr_t TacticalSprintExecutionStatusName = 0x94;
            static constexpr std::uintptr_t TacticalSprintOverridenName = 0x98;
            static constexpr std::uintptr_t EnableSprinting = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SprintExecutionStatusName", 0x90, "NameProperty"},
            {"TacticalSprintExecutionStatusName", 0x94, "NameProperty"},
            {"TacticalSprintOverridenName", 0x98, "NameProperty"},
            {"EnableSprinting", 0xA0, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_TokenQuery
    {
        static constexpr std::string_view Name = "FortAthenaBTService_TokenQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t EquippedItemTagAssociationDatas = 0x70;
            static constexpr std::uintptr_t ActivationTagQuery = 0x80;
            static constexpr std::uintptr_t DefaultTokenSystemTagQuery = 0xA0;
            static constexpr std::uintptr_t BecomeRelevantTokenAction = 0xC0;
            static constexpr std::uintptr_t CeaseRelevantTokenAction = 0xF0;
            static constexpr std::uintptr_t WeaponChangeTokenAction = 0x120;
            static constexpr std::uintptr_t TargetChangeTokenAction = 0x150;
            static constexpr std::uintptr_t TokenReleaseDelay = 0x180;
            static constexpr std::uintptr_t WeaponKeyName = 0x198;
            static constexpr std::uintptr_t TargetActorName = 0x19C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"EquippedItemTagAssociationDatas", 0x70, "ArrayProperty"},
            {"ActivationTagQuery", 0x80, "StructProperty"},
            {"DefaultTokenSystemTagQuery", 0xA0, "StructProperty"},
            {"BecomeRelevantTokenAction", 0xC0, "StructProperty"},
            {"CeaseRelevantTokenAction", 0xF0, "StructProperty"},
            {"WeaponChangeTokenAction", 0x120, "StructProperty"},
            {"TargetChangeTokenAction", 0x150, "StructProperty"},
            {"TokenReleaseDelay", 0x180, "StructProperty"},
            {"WeaponKeyName", 0x198, "NameProperty"},
            {"TargetActorName", 0x19C, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_UpdateTarget
    {
        static constexpr std::string_view Name = "FortAthenaBTService_UpdateTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x60;
            static constexpr std::uintptr_t RandomDeviation = 0x64;
            static constexpr std::uintptr_t bCallTickOnSearchStart = 0x68;
            static constexpr std::uintptr_t bRestartTimerOnEachActivation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interval", 0x60, "FloatProperty"},
            {"RandomDeviation", 0x64, "FloatProperty"},
            {"bCallTickOnSearchStart", 0x68, "BoolProperty"},
            {"bRestartTimerOnEachActivation", 0x68, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_UseItem
    {
        static constexpr std::string_view Name = "FortAthenaBTService_UseItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionObjectKeyName = 0x70;
            static constexpr std::uintptr_t ExecutionStatusKeyName = 0x74;
            static constexpr std::uintptr_t CanMoveWhileUsingItemKeyName = 0x78;
            static constexpr std::uintptr_t bUseAlternateMode = 0x80;
            static constexpr std::uintptr_t bCanUseInputToDeactivateKeyName = 0x98;
            static constexpr std::uintptr_t MaxEquipAttempts = 0xB0;
            static constexpr std::uintptr_t EquipRetryInterval = 0xB4;
            static constexpr std::uintptr_t EquipTimeout = 0xB8;
            static constexpr std::uintptr_t UseItemDelay = 0xBC;
            static constexpr std::uintptr_t MinWaitTimeBetweenUses = 0xC0;
            static constexpr std::uintptr_t MaxWaitTimeBetweenUses = 0xC4;
            static constexpr std::uintptr_t ItemUsageTimeout = 0xC8;
            static constexpr std::uintptr_t bCanOnlyUseMobileItems = 0xCC;
            static constexpr std::uintptr_t bBlockWeaponActions = 0xCD;
            static constexpr std::uintptr_t bValidateAbility = 0xCE;
            static constexpr std::uintptr_t bResetActionObjectKey = 0xCF;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"ActionObjectKeyName", 0x70, "NameProperty"},
            {"ExecutionStatusKeyName", 0x74, "NameProperty"},
            {"CanMoveWhileUsingItemKeyName", 0x78, "NameProperty"},
            {"bUseAlternateMode", 0x80, "StructProperty"},
            {"bCanUseInputToDeactivateKeyName", 0x98, "StructProperty"},
            {"MaxEquipAttempts", 0xB0, "IntProperty"},
            {"EquipRetryInterval", 0xB4, "FloatProperty"},
            {"EquipTimeout", 0xB8, "FloatProperty"},
            {"UseItemDelay", 0xBC, "FloatProperty"},
            {"MinWaitTimeBetweenUses", 0xC0, "FloatProperty"},
            {"MaxWaitTimeBetweenUses", 0xC4, "FloatProperty"},
            {"ItemUsageTimeout", 0xC8, "FloatProperty"},
            {"bCanOnlyUseMobileItems", 0xCC, "BoolProperty"},
            {"bBlockWeaponActions", 0xCD, "BoolProperty"},
            {"bValidateAbility", 0xCE, "BoolProperty"},
            {"bResetActionObjectKey", 0xCF, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_WaitForPassengers
    {
        static constexpr std::string_view Name = "FortAthenaBTService_WaitForPassengers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitForPassengersStatusKeyName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaitForPassengersStatusKeyName", 0x70, "NameProperty"},
        }};
    };

    struct FortAthenaBTService_WeaponPrimaryInputTacticalAction
    {
        static constexpr std::string_view Name = "FortAthenaBTService_WeaponPrimaryInputTacticalAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Enabled = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Enabled", 0x70, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_WorldCondition
    {
        static constexpr std::string_view Name = "FortAthenaBTService_WorldCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditions = 0x70;
            static constexpr std::uintptr_t ConditionsResultName = 0x98;
            static constexpr std::uintptr_t QueryState = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Conditions", 0x70, "StructProperty"},
            {"ConditionsResultName", 0x98, "NameProperty"},
            {"QueryState", 0xA0, "StructProperty"},
        }};
    };

    struct FortAthenaBTService_Zipline
    {
        static constexpr std::string_view Name = "FortAthenaBTService_Zipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t ZiplineTargetName = 0x70;
            static constexpr std::uintptr_t InteractionExecutionStatusName = 0x74;
            static constexpr std::uintptr_t InteractionContextInfoName = 0x78;
            static constexpr std::uintptr_t UsageExecutionStatusName = 0x7C;
            static constexpr std::uintptr_t ZiplineEntryLocationName = 0x80;
            static constexpr std::uintptr_t ZiplineExitLocationKeyName = 0x84;
            static constexpr std::uintptr_t MoveToPathMovementStateName = 0x88;
            static constexpr std::uintptr_t MoveExecutionStatusName = 0x8C;
            static constexpr std::uintptr_t FocalPointName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ZiplineTargetName", 0x70, "NameProperty"},
            {"InteractionExecutionStatusName", 0x74, "NameProperty"},
            {"InteractionContextInfoName", 0x78, "NameProperty"},
            {"UsageExecutionStatusName", 0x7C, "NameProperty"},
            {"ZiplineEntryLocationName", 0x80, "NameProperty"},
            {"ZiplineExitLocationKeyName", 0x84, "NameProperty"},
            {"MoveToPathMovementStateName", 0x88, "NameProperty"},
            {"MoveExecutionStatusName", 0x8C, "NameProperty"},
            {"FocalPointName", 0x90, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_ActivateVehicleBoost
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_ActivateVehicleBoost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bActivateBoost = 0x70;
            static constexpr std::uintptr_t BoostLength = 0x74;
            static constexpr std::uintptr_t bIgnoreMinimumDistanceLeft = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bActivateBoost", 0x70, "BoolProperty"},
            {"BoostLength", 0x74, "FloatProperty"},
            {"bIgnoreMinimumDistanceLeft", 0x78, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_BotAmbushPlayer
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_BotAmbushPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_Wait";
        struct Offsets
        {
            static constexpr std::uintptr_t FacingPrecision = 0xA0;
            static constexpr std::uintptr_t WeaponCooldown = 0xA4;
            static constexpr std::uintptr_t bClearBlackboardOnFinished = 0xA8;
            static constexpr std::uintptr_t TargetedPlayerKeySelector = 0xB0;
            static constexpr std::uintptr_t MaxLocationErrorKeySelector = 0xD8;
            static constexpr std::uintptr_t MinLocationErrorKeySelector = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FacingPrecision", 0xA0, "FloatProperty"},
            {"WeaponCooldown", 0xA4, "FloatProperty"},
            {"bClearBlackboardOnFinished", 0xA8, "BoolProperty"},
            {"TargetedPlayerKeySelector", 0xB0, "StructProperty"},
            {"MaxLocationErrorKeySelector", 0xD8, "StructProperty"},
            {"MinLocationErrorKeySelector", 0x100, "StructProperty"},
        }};
    };

    struct FortAthenaBTTask_BotMoveTo
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_BotMoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaBTTask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t NoSmashMoveGoalActorKeyName = 0x1C0;
            static constexpr std::uintptr_t bAllowRandomWobble = 0x1C6;
            static constexpr std::uintptr_t AllowRandomWobble = 0x1C8;
            static constexpr std::uintptr_t bIsUrgentMovement = 0x1E0;
            static constexpr std::uintptr_t IsUrgentMovement = 0x1E8;
            static constexpr std::uintptr_t IgnoreObstaclesOnPath = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NoSmashMoveGoalActorKeyName", 0x1C0, "NameProperty"},
            {"bAllowRandomWobble", 0x1C6, "BoolProperty"},
            {"AllowRandomWobble", 0x1C8, "StructProperty"},
            {"bIsUrgentMovement", 0x1E0, "BoolProperty"},
            {"IsUrgentMovement", 0x1E8, "StructProperty"},
            {"IgnoreObstaclesOnPath", 0x200, "StructProperty"},
        }};
    };

    struct FortAthenaBTTask_BotUnstuckTeleport
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_BotUnstuckTeleport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EQSRequest = 0x70;
            static constexpr std::uintptr_t CanReachDestinationKeyName = 0xB8;
            static constexpr std::uintptr_t TeleportExecutionStatusKeyName = 0xBC;
            static constexpr std::uintptr_t LastPartialPathTimeKeyName = 0xC0;
            static constexpr std::uintptr_t LastPartialPathCountKeyName = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EQSRequest", 0x70, "StructProperty"},
            {"CanReachDestinationKeyName", 0xB8, "NameProperty"},
            {"TeleportExecutionStatusKeyName", 0xBC, "NameProperty"},
            {"LastPartialPathTimeKeyName", 0xC0, "NameProperty"},
            {"LastPartialPathCountKeyName", 0xC4, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_BotWait
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_BotWait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_Wait";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitCompleteKeySelector = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WaitCompleteKeySelector", 0xA0, "StructProperty"},
        }};
    };

    struct FortAthenaBTTask_Build
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Build";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionStatusKeyName = 0x70;
            static constexpr std::uintptr_t FocalPointName = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecutionStatusKeyName", 0x70, "NameProperty"},
            {"FocalPointName", 0x74, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_Conversation
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Conversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationStatusKeyName = 0x70;
            static constexpr std::uintptr_t bResetEvaluatorStatusKeyOnFinish = 0x76;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConversationStatusKeyName", 0x70, "NameProperty"},
            {"bResetEvaluatorStatusKeyOnFinish", 0x76, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_Dive
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Dive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionStatusKeyName = 0x70;
            static constexpr std::uintptr_t DiveDestinationKeyName = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecutionStatusKeyName", 0x70, "NameProperty"},
            {"DiveDestinationKeyName", 0x74, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_EnterVehicle
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_EnterVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedVehicleKeyName = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SelectedVehicleKeyName", 0x70, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_EquipItem
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_EquipItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponKeyName = 0x70;
            static constexpr std::uintptr_t EquipItemKeyName = 0x74;
            static constexpr std::uintptr_t DisableEquipAnimation = 0x78;
            static constexpr std::uintptr_t WaitForEquipToFinish = 0x90;
            static constexpr std::uintptr_t ItemTagToEquip = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WeaponKeyName", 0x70, "NameProperty"},
            {"EquipItemKeyName", 0x74, "NameProperty"},
            {"DisableEquipAnimation", 0x78, "StructProperty"},
            {"WaitForEquipToFinish", 0x90, "StructProperty"},
            {"ItemTagToEquip", 0xA8, "StructProperty"},
        }};
    };

    struct FortAthenaBTTask_Escalate
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Escalate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_GetDefendSpotShootSpot
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_GetDefendSpotShootSpot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DefendSpotBlackboardKey = 0x70;
            static constexpr std::uintptr_t ShootSpotPositionBlackboardKey = 0x98;
            static constexpr std::uintptr_t AllowCrouchBlackboardKey = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefendSpotBlackboardKey", 0x70, "StructProperty"},
            {"ShootSpotPositionBlackboardKey", 0x98, "StructProperty"},
            {"AllowCrouchBlackboardKey", 0xC0, "StructProperty"},
        }};
    };

    struct FortAthenaBTTask_GetDefendSpotShouldCrouch
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_GetDefendSpotShouldCrouch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DefendSpotBlackboardKey = 0x70;
            static constexpr std::uintptr_t AllowCrouchBlackboardKey = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefendSpotBlackboardKey", 0x70, "StructProperty"},
            {"AllowCrouchBlackboardKey", 0x98, "StructProperty"},
        }};
    };

    struct FortAthenaBTTask_Glide
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Glide";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionStatusKeyName = 0x70;
            static constexpr std::uintptr_t GlideDestinationKeyName = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ExecutionStatusKeyName", 0x70, "NameProperty"},
            {"GlideDestinationKeyName", 0x74, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_Harvest
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Harvest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t HarvestExecutionStatusKeyName = 0x70;
            static constexpr std::uintptr_t HarvestTargetKeyName = 0x78;
            static constexpr std::uintptr_t HarvestTargetHitPointKeyName = 0x80;
            static constexpr std::uintptr_t HarvestDestinationKeyName = 0x88;
            static constexpr std::uintptr_t WeaponTriggerMeleeKeyName = 0x90;
            static constexpr std::uintptr_t MeleeSwingDelay = 0x98;
            static constexpr std::uintptr_t HarvestAbilityTag = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"HarvestExecutionStatusKeyName", 0x70, "NameProperty"},
            {"HarvestTargetKeyName", 0x78, "NameProperty"},
            {"HarvestTargetHitPointKeyName", 0x80, "NameProperty"},
            {"HarvestDestinationKeyName", 0x88, "NameProperty"},
            {"WeaponTriggerMeleeKeyName", 0x90, "NameProperty"},
            {"MeleeSwingDelay", 0x98, "StructProperty"},
            {"HarvestAbilityTag", 0xC0, "StructProperty"},
        }};
    };

    struct FortAthenaBTTask_Interact
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Interact";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AttemptInterval = 0x70;
            static constexpr std::uintptr_t MaxInteractAttempts = 0x74;
            static constexpr std::uintptr_t bShouldFocusOnInteraction = 0x78;
            static constexpr std::uintptr_t InteractExecutionStatusKeySelector = 0x80;
            static constexpr std::uintptr_t InteractContextInfoKeySelector = 0xA8;
            static constexpr std::uintptr_t FocalPointName = 0xD0;
            static constexpr std::uintptr_t InteractActorName = 0xD4;
            static constexpr std::uintptr_t JumpExecutionStatusName = 0xD8;
            static constexpr std::uintptr_t WeaponTriggerMeleeName = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AttemptInterval", 0x70, "FloatProperty"},
            {"MaxInteractAttempts", 0x74, "IntProperty"},
            {"bShouldFocusOnInteraction", 0x78, "BoolProperty"},
            {"InteractExecutionStatusKeySelector", 0x80, "StructProperty"},
            {"InteractContextInfoKeySelector", 0xA8, "StructProperty"},
            {"FocalPointName", 0xD0, "NameProperty"},
            {"InteractActorName", 0xD4, "NameProperty"},
            {"JumpExecutionStatusName", 0xD8, "NameProperty"},
            {"WeaponTriggerMeleeName", 0xDC, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_LeaveVehicle
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_LeaveVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bWaitVehicleStop = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bWaitVehicleStop", 0x70, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_ModulateVehicleSpeed
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_ModulateVehicleSpeed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DrivingSpeed = 0x70;
            static constexpr std::uintptr_t NewDrivingSpeed = 0x88;
            static constexpr std::uintptr_t bResetControlPIDs = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DrivingSpeed", 0x70, "StructProperty"},
            {"NewDrivingSpeed", 0x88, "FloatProperty"},
            {"bResetControlPIDs", 0x8C, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_MoveTo
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_MoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementResultKeyName = 0x1B0;
            static constexpr std::uintptr_t ExecutionStatusKeyName = 0x1B4;
            static constexpr std::uintptr_t bAllowPartialPathToUncompleteNavigationArea = 0x1BC;
            static constexpr std::uintptr_t bAllowRestartOnPartialSuccess = 0x1BC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MovementResultKeyName", 0x1B0, "NameProperty"},
            {"ExecutionStatusKeyName", 0x1B4, "NameProperty"},
            {"bAllowPartialPathToUncompleteNavigationArea", 0x1BC, "BoolProperty"},
            {"bAllowRestartOnPartialSuccess", 0x1BC, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_PauseVehicle
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_PauseVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_PlayActionSequence
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_PlayActionSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionSequence = 0x70;
            static constexpr std::uintptr_t ActionSequences = 0x90;
            static constexpr std::uintptr_t DynamicActionSequenceKeyName = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActionSequence", 0x70, "StructProperty"},
            {"ActionSequences", 0x90, "StructProperty"},
            {"DynamicActionSequenceKeyName", 0xB0, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_PlayEmote
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_PlayEmote";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayEmoteExecutionStatusKeyName = 0x70;
            static constexpr std::uintptr_t BespokeEmotes = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayEmoteExecutionStatusKeyName", 0x70, "NameProperty"},
            {"BespokeEmotes", 0x78, "ArrayProperty"},
        }};
    };

    struct FortAthenaBTTask_ReactToVerb
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_ReactToVerb";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactToVerbTargetActorKeyName = 0x70;
            static constexpr std::uintptr_t ReactToVerbExecutionStatusKeyName = 0x78;
            static constexpr std::uintptr_t ExtraStructDataKeyName = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReactToVerbTargetActorKeyName", 0x70, "NameProperty"},
            {"ReactToVerbExecutionStatusKeyName", 0x78, "NameProperty"},
            {"ExtraStructDataKeyName", 0x80, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_ReverseVehicle
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_ReverseVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bReverseVehicle = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bReverseVehicle", 0x70, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_RunDynamicSubtree
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_RunDynamicSubtree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_RunBehaviorDynamic";
        struct Offsets
        {
            static constexpr std::uintptr_t bCallParentOnInstanceCreated = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCallParentOnInstanceCreated", 0x88, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_SetAggressiveDriving
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_SetAggressiveDriving";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bAggressiveDriving = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAggressiveDriving", 0x70, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_ShootTrap
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_ShootTrap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_Wait";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorKey = 0xA0;
            static constexpr std::uintptr_t TrapOnPathKeyName = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TargetActorKey", 0xA0, "StructProperty"},
            {"TrapOnPathKeyName", 0xC8, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_SteerMovement
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_SteerMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SteerDirectionKeySelector = 0x70;
            static constexpr std::uintptr_t bSetControlRotation = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SteerDirectionKeySelector", 0x70, "StructProperty"},
            {"bSetControlRotation", 0x98, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_Undermine
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Undermine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t UndermineTargetKeyName = 0x70;
            static constexpr std::uintptr_t UndermineLocationImpactName = 0x74;
            static constexpr std::uintptr_t UndermineExecutionStatusKeyName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UndermineTargetKeyName", 0x70, "NameProperty"},
            {"UndermineLocationImpactName", 0x74, "NameProperty"},
            {"UndermineExecutionStatusKeyName", 0x78, "NameProperty"},
        }};
    };

    struct FortAthenaBTTask_UseItem
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_UseItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionObjectKeyName = 0x70;
            static constexpr std::uintptr_t ExecutionStatusKeyName = 0x74;
            static constexpr std::uintptr_t UseItemSelectNewWeaponName = 0x78;
            static constexpr std::uintptr_t MinimumWaitTimeBetweenUses = 0x80;
            static constexpr std::uintptr_t MaximumWaitTimeBetweenUses = 0x98;
            static constexpr std::uintptr_t ValidateAbility = 0xB0;
            static constexpr std::uintptr_t ValidateAbilityBeforeEquipping = 0xC8;
            static constexpr std::uintptr_t ResetActionObjectKey = 0xE0;
            static constexpr std::uintptr_t UseAlternateMode = 0xF8;
            static constexpr std::uintptr_t FinishAfterItemUse = 0x110;
            static constexpr std::uintptr_t UnequipAndRemoveAfterItemUse = 0x128;
            static constexpr std::uintptr_t InputHoldDuration = 0x140;
            static constexpr std::uintptr_t MinWaitTimeBetweenUses = 0x160;
            static constexpr std::uintptr_t MaxWaitTimeBetweenUses = 0x164;
            static constexpr std::uintptr_t bValidateAbility = 0x168;
            static constexpr std::uintptr_t bResetActionObjectKey = 0x169;
            static constexpr std::uintptr_t bUseAlternateMode = 0x16A;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"ActionObjectKeyName", 0x70, "NameProperty"},
            {"ExecutionStatusKeyName", 0x74, "NameProperty"},
            {"UseItemSelectNewWeaponName", 0x78, "NameProperty"},
            {"MinimumWaitTimeBetweenUses", 0x80, "StructProperty"},
            {"MaximumWaitTimeBetweenUses", 0x98, "StructProperty"},
            {"ValidateAbility", 0xB0, "StructProperty"},
            {"ValidateAbilityBeforeEquipping", 0xC8, "StructProperty"},
            {"ResetActionObjectKey", 0xE0, "StructProperty"},
            {"UseAlternateMode", 0xF8, "StructProperty"},
            {"FinishAfterItemUse", 0x110, "StructProperty"},
            {"UnequipAndRemoveAfterItemUse", 0x128, "StructProperty"},
            {"InputHoldDuration", 0x140, "StructProperty"},
            {"MinWaitTimeBetweenUses", 0x160, "FloatProperty"},
            {"MaxWaitTimeBetweenUses", 0x164, "FloatProperty"},
            {"bValidateAbility", 0x168, "BoolProperty"},
            {"bResetActionObjectKey", 0x169, "BoolProperty"},
            {"bUseAlternateMode", 0x16A, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_UseSmartObject
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_UseSmartObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t EvaluationTag = 0x70;
            static constexpr std::uintptr_t AddFocusAndWait = 0x78;
            static constexpr std::uintptr_t SmartObjectsStatusKeyName = 0x90;
            static constexpr std::uintptr_t SmartObjectDestinationRotationKeyName = 0x98;
            static constexpr std::uintptr_t bHandleAbortWithSoftDisable = 0x9E;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EvaluationTag", 0x70, "StructProperty"},
            {"AddFocusAndWait", 0x78, "StructProperty"},
            {"SmartObjectsStatusKeyName", 0x90, "NameProperty"},
            {"SmartObjectDestinationRotationKeyName", 0x98, "NameProperty"},
            {"bHandleAbortWithSoftDisable", 0x9E, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_VehicleHonk
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_VehicleHonk";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxHonkTime = 0x70;
            static constexpr std::uintptr_t MinHonkTime = 0x74;
            static constexpr std::uintptr_t MaxFlickerTime = 0x78;
            static constexpr std::uintptr_t MinFlickerTime = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MaxHonkTime", 0x70, "FloatProperty"},
            {"MinHonkTime", 0x74, "FloatProperty"},
            {"MaxFlickerTime", 0x78, "FloatProperty"},
            {"MinFlickerTime", 0x7C, "FloatProperty"},
        }};
    };

    struct FortAthenaBTTask_VehicleSwitchSeat
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_VehicleSwitchSeat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SwitchSeatType = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SwitchSeatType", 0x70, "ByteProperty"},
        }};
    };

    struct FortAthenaBTTask_VehicleTurnTo
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_VehicleTurnTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Precision = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Precision", 0x98, "FloatProperty"},
        }};
    };

    struct FortAthenaBTTask_WaitToPlayActions
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_WaitToPlayActions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_Zipline
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_Zipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t UsageExecutionStatusName = 0x70;
            static constexpr std::uintptr_t ZiplineTargetName = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UsageExecutionStatusName", 0x70, "NameProperty"},
            {"ZiplineTargetName", 0x78, "NameProperty"},
        }};
    };

    struct FortAthenaNpcEvaluator_Encampment
    {
        static constexpr std::string_view Name = "FortAthenaNpcEvaluator_Encampment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t EncampmentEnable = 0x1B0;
            static constexpr std::uintptr_t EncampmentTentativeDelayMin = 0x1D8;
            static constexpr std::uintptr_t EncampmentTentativeDelayMax = 0x200;
            static constexpr std::uintptr_t EncampmentDurationMin = 0x228;
            static constexpr std::uintptr_t EncampmentDurationMax = 0x250;
            static constexpr std::uintptr_t BuilderPercentage = 0x278;
            static constexpr std::uintptr_t BuilderMinDistance = 0x2A0;
            static constexpr std::uintptr_t BuilderMaxDistance = 0x2C8;
            static constexpr std::uintptr_t GuardMinDistance = 0x2F0;
            static constexpr std::uintptr_t GuardMaxDistance = 0x318;
            static constexpr std::uintptr_t AllowInSwimming = 0x340;
            static constexpr std::uintptr_t AllowInFalling = 0x368;
            static constexpr std::uintptr_t MinSquadMembersCountToBuild = 0x390;
            static constexpr std::uintptr_t EncampmentStatusKeyName = 0x3B8;
            static constexpr std::uintptr_t EncampmentMovementStateKeyName = 0x3C0;
            static constexpr std::uintptr_t EncampmentCenterLocationKeyName = 0x3C8;
            static constexpr std::uintptr_t EncampmentDestinationKeyName = 0x3D0;
            static constexpr std::uintptr_t EncampmentAroundCampFireLocationKeyName = 0x3D8;
            static constexpr std::uintptr_t EncampmentRoleKeyName = 0x3E0;
            static constexpr std::uintptr_t DefensiveBuildName = 0x3E8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"EncampmentEnable", 0x1B0, "StructProperty"},
            {"EncampmentTentativeDelayMin", 0x1D8, "StructProperty"},
            {"EncampmentTentativeDelayMax", 0x200, "StructProperty"},
            {"EncampmentDurationMin", 0x228, "StructProperty"},
            {"EncampmentDurationMax", 0x250, "StructProperty"},
            {"BuilderPercentage", 0x278, "StructProperty"},
            {"BuilderMinDistance", 0x2A0, "StructProperty"},
            {"BuilderMaxDistance", 0x2C8, "StructProperty"},
            {"GuardMinDistance", 0x2F0, "StructProperty"},
            {"GuardMaxDistance", 0x318, "StructProperty"},
            {"AllowInSwimming", 0x340, "StructProperty"},
            {"AllowInFalling", 0x368, "StructProperty"},
            {"MinSquadMembersCountToBuild", 0x390, "StructProperty"},
            {"EncampmentStatusKeyName", 0x3B8, "NameProperty"},
            {"EncampmentMovementStateKeyName", 0x3C0, "NameProperty"},
            {"EncampmentCenterLocationKeyName", 0x3C8, "NameProperty"},
            {"EncampmentDestinationKeyName", 0x3D0, "NameProperty"},
            {"EncampmentAroundCampFireLocationKeyName", 0x3D8, "NameProperty"},
            {"EncampmentRoleKeyName", 0x3E0, "NameProperty"},
            {"DefensiveBuildName", 0x3E8, "NameProperty"},
        }};
    };

    struct FortAthenaNpcEvaluator_FollowPatrolPath
    {
        static constexpr std::string_view Name = "FortAthenaNpcEvaluator_FollowPatrolPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t FollowPatrolPathKeyName = 0x1B0;
            static constexpr std::uintptr_t FollowPatrolPathMovementStateKeyName = 0x1B4;
            static constexpr std::uintptr_t FollowPatrolPathDestinationKeyName = 0x1B8;
            static constexpr std::uintptr_t ChanceToTakeABreak = 0x1C4;
            static constexpr std::uintptr_t BreakDurationMin = 0x1C8;
            static constexpr std::uintptr_t BreakDurationMax = 0x1CC;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"FollowPatrolPathKeyName", 0x1B0, "NameProperty"},
            {"FollowPatrolPathMovementStateKeyName", 0x1B4, "NameProperty"},
            {"FollowPatrolPathDestinationKeyName", 0x1B8, "NameProperty"},
            {"ChanceToTakeABreak", 0x1C4, "FloatProperty"},
            {"BreakDurationMin", 0x1C8, "FloatProperty"},
            {"BreakDurationMax", 0x1CC, "FloatProperty"},
        }};
    };

    struct FortAthenaNpcEvaluator_FollowSquadLeader
    {
        static constexpr std::string_view Name = "FortAthenaNpcEvaluator_FollowSquadLeader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t FormationOffsetRadiusMin = 0x1B0;
            static constexpr std::uintptr_t FormationOffsetRadiusMax = 0x1D8;
            static constexpr std::uintptr_t TooFarFromSquadLeaderDistance = 0x200;
            static constexpr std::uintptr_t MaxNoiseRadius = 0x228;
            static constexpr std::uintptr_t MinDurationNoiseEvaluate = 0x250;
            static constexpr std::uintptr_t MaxDurationNoiseEvaluate = 0x278;
            static constexpr std::uintptr_t FollowSquadLeaderStatusKeyName = 0x2A0;
            static constexpr std::uintptr_t FollowSquadLeaderMovementStateKeyName = 0x2A8;
            static constexpr std::uintptr_t FollowSquadLeaderDestinationKeyName = 0x2B0;
            static constexpr std::uintptr_t TooFarFromLeaderKeyName = 0x2B8;
            static constexpr std::uintptr_t CachedSquadFormationOffset = 0x2C0;
            static constexpr std::uintptr_t CachedNoiseOffset = 0x2D8;
            static constexpr std::uintptr_t CachedTooFarFromSquadLeaderDistanceSqr = 0x2F0;
            static constexpr std::uintptr_t LastNoiseOffsetUpdateTime = 0x2F4;
            static constexpr std::uintptr_t DurationNoiseEvaluate = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"FormationOffsetRadiusMin", 0x1B0, "StructProperty"},
            {"FormationOffsetRadiusMax", 0x1D8, "StructProperty"},
            {"TooFarFromSquadLeaderDistance", 0x200, "StructProperty"},
            {"MaxNoiseRadius", 0x228, "StructProperty"},
            {"MinDurationNoiseEvaluate", 0x250, "StructProperty"},
            {"MaxDurationNoiseEvaluate", 0x278, "StructProperty"},
            {"FollowSquadLeaderStatusKeyName", 0x2A0, "NameProperty"},
            {"FollowSquadLeaderMovementStateKeyName", 0x2A8, "NameProperty"},
            {"FollowSquadLeaderDestinationKeyName", 0x2B0, "NameProperty"},
            {"TooFarFromLeaderKeyName", 0x2B8, "NameProperty"},
            {"CachedSquadFormationOffset", 0x2C0, "StructProperty"},
            {"CachedNoiseOffset", 0x2D8, "StructProperty"},
            {"CachedTooFarFromSquadLeaderDistanceSqr", 0x2F0, "FloatProperty"},
            {"LastNoiseOffsetUpdateTime", 0x2F4, "FloatProperty"},
            {"DurationNoiseEvaluate", 0x2F8, "FloatProperty"},
        }};
    };

    struct FortAthenaNpcEvaluator_Leash
    {
        static constexpr std::string_view Name = "FortAthenaNpcEvaluator_Leash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t LeashKeyName = 0x1B0;
            static constexpr std::uintptr_t LeashMovementStateKeyName = 0x1B4;
            static constexpr std::uintptr_t LeashDestinationKeyName = 0x1B8;
            static constexpr std::uintptr_t LeashLocationKeyName = 0x1BC;
            static constexpr std::uintptr_t LeashOuterRadiusKeyName = 0x1C0;
            static constexpr std::uintptr_t ShouldTeleportInLeashKeyName = 0x1C4;
            static constexpr std::uintptr_t TriggerLeashBehaviorKeyName = 0x1C8;
            static constexpr std::uintptr_t bAlwaysForceMoveToLeashCenter = 0x1CC;
            static constexpr std::uintptr_t bForcePositionOnLeash = 0x1CD;
            static constexpr std::uintptr_t AvoidObstaclesFilterClass = 0x1D0;
            static constexpr std::uintptr_t LeashRuntimeParameters = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"LeashKeyName", 0x1B0, "NameProperty"},
            {"LeashMovementStateKeyName", 0x1B4, "NameProperty"},
            {"LeashDestinationKeyName", 0x1B8, "NameProperty"},
            {"LeashLocationKeyName", 0x1BC, "NameProperty"},
            {"LeashOuterRadiusKeyName", 0x1C0, "NameProperty"},
            {"ShouldTeleportInLeashKeyName", 0x1C4, "NameProperty"},
            {"TriggerLeashBehaviorKeyName", 0x1C8, "NameProperty"},
            {"bAlwaysForceMoveToLeashCenter", 0x1CC, "BoolProperty"},
            {"bForcePositionOnLeash", 0x1CD, "BoolProperty"},
            {"AvoidObstaclesFilterClass", 0x1D0, "ClassProperty"},
            {"LeashRuntimeParameters", 0x1E8, "ObjectProperty"},
        }};
    };

    struct FortAthenaNpcEvaluator_Patrolling
    {
        static constexpr std::string_view Name = "FortAthenaNpcEvaluator_Patrolling";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t PatrollingKeyName = 0x1B0;
            static constexpr std::uintptr_t PatrollingMovementStateKeyName = 0x1B4;
            static constexpr std::uintptr_t PatrollingDestinationKeyName = 0x1B8;
            static constexpr std::uintptr_t DynamicBlueprintStatusKeyName = 0x1BC;
            static constexpr std::uintptr_t DynamicBlueprintActorKeyName = 0x1C0;
            static constexpr std::uintptr_t PatrollingShouldMoveKeyName = 0x1C4;
            static constexpr std::uintptr_t PatrollingAppendDestinationKeyName = 0x1C8;
            static constexpr std::uintptr_t OptionalPatrollingPrioritizeKeyName = 0x1CC;
            static constexpr std::uintptr_t DistanceToTestPoint = 0x1E0;
            static constexpr std::uintptr_t bCanDisablePatrolling = 0x1E4;
            static constexpr std::uintptr_t bCanReenablePatrolling = 0x1E5;
            static constexpr std::uintptr_t ReenableTimer = 0x1E8;
            static constexpr std::uintptr_t bCanSelectNearestPatrolPointAtStart = 0x1EC;
            static constexpr std::uintptr_t bCanRetryOnPartialPathSuccess = 0x1ED;
            static constexpr std::uintptr_t RequiredTagQueryOnAIForPrioritizing = 0x1F0;
            static constexpr std::uintptr_t SecondsToPrioritizeNonCompletedPatrol = 0x238;
            static constexpr std::uintptr_t AppendPathLookAheadDistance = 0x260;
            static constexpr std::uintptr_t CachedNpcPatrollingComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"PatrollingKeyName", 0x1B0, "NameProperty"},
            {"PatrollingMovementStateKeyName", 0x1B4, "NameProperty"},
            {"PatrollingDestinationKeyName", 0x1B8, "NameProperty"},
            {"DynamicBlueprintStatusKeyName", 0x1BC, "NameProperty"},
            {"DynamicBlueprintActorKeyName", 0x1C0, "NameProperty"},
            {"PatrollingShouldMoveKeyName", 0x1C4, "NameProperty"},
            {"PatrollingAppendDestinationKeyName", 0x1C8, "NameProperty"},
            {"OptionalPatrollingPrioritizeKeyName", 0x1CC, "NameProperty"},
            {"DistanceToTestPoint", 0x1E0, "FloatProperty"},
            {"bCanDisablePatrolling", 0x1E4, "BoolProperty"},
            {"bCanReenablePatrolling", 0x1E5, "BoolProperty"},
            {"ReenableTimer", 0x1E8, "FloatProperty"},
            {"bCanSelectNearestPatrolPointAtStart", 0x1EC, "BoolProperty"},
            {"bCanRetryOnPartialPathSuccess", 0x1ED, "BoolProperty"},
            {"RequiredTagQueryOnAIForPrioritizing", 0x1F0, "StructProperty"},
            {"SecondsToPrioritizeNonCompletedPatrol", 0x238, "StructProperty"},
            {"AppendPathLookAheadDistance", 0x260, "StructProperty"},
            {"CachedNpcPatrollingComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct FortAthenaPlayContextualAnimTaskInstanceData
    {
        static constexpr std::string_view Name = "FortAthenaPlayContextualAnimTaskInstanceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActor = 0x28;
            static constexpr std::uintptr_t SecondaryActor = 0x30;
            static constexpr std::uintptr_t SecondaryRole = 0x38;
            static constexpr std::uintptr_t TertiaryActor = 0x40;
            static constexpr std::uintptr_t TertiaryRole = 0x48;
            static constexpr std::uintptr_t OverrideProviderInterface = 0x50;
            static constexpr std::uintptr_t SceneAsset = 0x60;
            static constexpr std::uintptr_t SectionName = 0x68;
            static constexpr std::uintptr_t PrimaryActorExternalTags = 0x70;
            static constexpr std::uintptr_t SecondaryActorExternalTags = 0x90;
            static constexpr std::uintptr_t TertiaryActorExternalTags = 0xB0;
            static constexpr std::uintptr_t ExecutionMethod = 0xD0;
            static constexpr std::uintptr_t bWaitForNotifyEventToEnd = 0xD1;
            static constexpr std::uintptr_t NotifyEventNameToEnd = 0xD4;
            static constexpr std::uintptr_t LoopsToRun = 0xD8;
            static constexpr std::uintptr_t bLoopForever = 0xDC;
            static constexpr std::uintptr_t DelayBetweenLoops = 0xE0;
            static constexpr std::uintptr_t RandomDeviationBetweenLoops = 0xE4;
            static constexpr std::uintptr_t WarpTargets = 0xE8;
            static constexpr std::uintptr_t bFindAnimSetBasedOnWarpTargets = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"PrimaryActor", 0x28, "ObjectProperty"},
            {"SecondaryActor", 0x30, "ObjectProperty"},
            {"SecondaryRole", 0x38, "NameProperty"},
            {"TertiaryActor", 0x40, "ObjectProperty"},
            {"TertiaryRole", 0x48, "NameProperty"},
            {"OverrideProviderInterface", 0x50, "InterfaceProperty"},
            {"SceneAsset", 0x60, "ObjectProperty"},
            {"SectionName", 0x68, "NameProperty"},
            {"PrimaryActorExternalTags", 0x70, "StructProperty"},
            {"SecondaryActorExternalTags", 0x90, "StructProperty"},
            {"TertiaryActorExternalTags", 0xB0, "StructProperty"},
            {"ExecutionMethod", 0xD0, "EnumProperty"},
            {"bWaitForNotifyEventToEnd", 0xD1, "BoolProperty"},
            {"NotifyEventNameToEnd", 0xD4, "NameProperty"},
            {"LoopsToRun", 0xD8, "IntProperty"},
            {"bLoopForever", 0xDC, "BoolProperty"},
            {"DelayBetweenLoops", 0xE0, "FloatProperty"},
            {"RandomDeviationBetweenLoops", 0xE4, "FloatProperty"},
            {"WarpTargets", 0xE8, "ArrayProperty"},
            {"bFindAnimSetBasedOnWarpTargets", 0xF8, "BoolProperty"},
        }};
    };

    struct FortAthenaPlayInteractionStateTreeTask
    {
        static constexpr std::string_view Name = "FortAthenaPlayInteractionStateTreeTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeTaskBlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractorActor = 0x70;
            static constexpr std::uintptr_t InteractableActor = 0x78;
            static constexpr std::uintptr_t InteractorMontage = 0x80;
            static constexpr std::uintptr_t InteractableMontage = 0x88;
            static constexpr std::uintptr_t bWaitForNotifyEventToEnd = 0x90;
            static constexpr std::uintptr_t NotifyEventNameToEnd = 0x94;
            static constexpr std::uintptr_t bAddMotionWarpingTargets = 0x98;
            static constexpr std::uintptr_t bDisableCollisionBetweenActors = 0x99;
            static constexpr std::uintptr_t bSetMovementModeToFlying = 0x9A;
            static constexpr std::uintptr_t LoopsToRun = 0x9C;
            static constexpr std::uintptr_t bLoopForever = 0xA0;
            static constexpr std::uintptr_t DelayBetweenLoops = 0xA4;
            static constexpr std::uintptr_t RandomDeviationBetweenLoops = 0xA8;
            static constexpr std::uintptr_t bStopInteractorAnimMontageOnExit = 0xAC;
            static constexpr std::uintptr_t bStopInteractableAnimMontageOnExit = 0xAD;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"InteractorActor", 0x70, "ObjectProperty"},
            {"InteractableActor", 0x78, "ObjectProperty"},
            {"InteractorMontage", 0x80, "ObjectProperty"},
            {"InteractableMontage", 0x88, "ObjectProperty"},
            {"bWaitForNotifyEventToEnd", 0x90, "BoolProperty"},
            {"NotifyEventNameToEnd", 0x94, "NameProperty"},
            {"bAddMotionWarpingTargets", 0x98, "BoolProperty"},
            {"bDisableCollisionBetweenActors", 0x99, "BoolProperty"},
            {"bSetMovementModeToFlying", 0x9A, "BoolProperty"},
            {"LoopsToRun", 0x9C, "IntProperty"},
            {"bLoopForever", 0xA0, "BoolProperty"},
            {"DelayBetweenLoops", 0xA4, "FloatProperty"},
            {"RandomDeviationBetweenLoops", 0xA8, "FloatProperty"},
            {"bStopInteractorAnimMontageOnExit", 0xAC, "BoolProperty"},
            {"bStopInteractableAnimMontageOnExit", 0xAD, "BoolProperty"},
        }};
    };

    struct FortAthenaPlayMontageStateTreeTask
    {
        static constexpr std::string_view Name = "FortAthenaPlayMontageStateTreeTask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeTaskBlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x70;
            static constexpr std::uintptr_t Montage = 0x78;
            static constexpr std::uintptr_t ExecMode = 0x80;
            static constexpr std::uintptr_t SectionName = 0x84;
            static constexpr std::uintptr_t LoopMode = 0x88;
            static constexpr std::uintptr_t WarpTargets = 0x90;
            static constexpr std::uintptr_t bWaitForNotifyEventToEnd = 0xA0;
            static constexpr std::uintptr_t NotifyEventNameToEnd = 0xA4;
            static constexpr std::uintptr_t bSetMovementModeToFlying = 0xA8;
            static constexpr std::uintptr_t LoopsToRun = 0xAC;
            static constexpr std::uintptr_t bLoopForever = 0xB0;
            static constexpr std::uintptr_t DelayBetweenLoops = 0xB4;
            static constexpr std::uintptr_t RandomDeviationBetweenLoops = 0xB8;
            static constexpr std::uintptr_t bStopAnimMontageOnExit = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Actor", 0x70, "ObjectProperty"},
            {"Montage", 0x78, "ObjectProperty"},
            {"ExecMode", 0x80, "EnumProperty"},
            {"SectionName", 0x84, "NameProperty"},
            {"LoopMode", 0x88, "EnumProperty"},
            {"WarpTargets", 0x90, "ArrayProperty"},
            {"bWaitForNotifyEventToEnd", 0xA0, "BoolProperty"},
            {"NotifyEventNameToEnd", 0xA4, "NameProperty"},
            {"bSetMovementModeToFlying", 0xA8, "BoolProperty"},
            {"LoopsToRun", 0xAC, "IntProperty"},
            {"bLoopForever", 0xB0, "BoolProperty"},
            {"DelayBetweenLoops", 0xB4, "FloatProperty"},
            {"RandomDeviationBetweenLoops", 0xB8, "FloatProperty"},
            {"bStopAnimMontageOnExit", 0xBC, "BoolProperty"},
        }};
    };

    struct FortBTComposite_RandomSelector
    {
        static constexpr std::string_view Name = "FortBTComposite_RandomSelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTCompositeNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Weights = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Weights", 0x80, "ArrayProperty"},
        }};
    };

    struct FortBTContext_MoveUrgency
    {
        static constexpr std::string_view Name = "FortBTContext_MoveUrgency";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTService_ContextOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveUrgencyValue = 0x88;
            static constexpr std::uintptr_t MoveUrgency = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MoveUrgencyValue", 0x88, "StructProperty"},
            {"MoveUrgency", 0xB8, "ByteProperty"},
        }};
    };

    struct FortBTContext_SkipNotPerceivedGoals
    {
        static constexpr std::string_view Name = "FortBTContext_SkipNotPerceivedGoals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTService_ContextOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t Enabled = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Enabled", 0x70, "StructProperty"},
        }};
    };

    struct FortBTContext_SuppressGoalUpdate
    {
        static constexpr std::string_view Name = "FortBTContext_SuppressGoalUpdate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTService_ContextOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t bUnregisterFromGoalManager = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUnregisterFromGoalManager", 0x88, "BoolProperty"},
        }};
    };

    struct FortBTDecorator_AIBotVehicleSeatStatus
    {
        static constexpr std::string_view Name = "FortBTDecorator_AIBotVehicleSeatStatus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t SeatType = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SeatType", 0x68, "ByteProperty"},
        }};
    };

    struct FortBTDecorator_Affiliation
    {
        static constexpr std::string_view Name = "FortBTDecorator_Affiliation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t FirstActorKey = 0x68;
            static constexpr std::uintptr_t SecondActorKey = 0x90;
            static constexpr std::uintptr_t AcceptedAffiliations = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FirstActorKey", 0x68, "StructProperty"},
            {"SecondActorKey", 0x90, "StructProperty"},
            {"AcceptedAffiliations", 0xB8, "UInt32Property"},
        }};
    };

    struct FortBTDecorator_CanBeConsideredAirborne
    {
        static constexpr std::string_view Name = "FortBTDecorator_CanBeConsideredAirborne";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlackboardKey", 0x68, "StructProperty"},
        }};
    };

    struct FortBTDecorator_CanDoInjectedBehavior
    {
        static constexpr std::string_view Name = "FortBTDecorator_CanDoInjectedBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_Blackboard";
        struct Offsets
        {
            static constexpr std::uintptr_t IntValue = 0x90;
            static constexpr std::uintptr_t FloatValue = 0x94;
            static constexpr std::uintptr_t StringValue = 0x98;
            static constexpr std::uintptr_t CachedDescription = 0xA8;
            static constexpr std::uintptr_t OperationType = 0xB8;
            static constexpr std::uintptr_t NotifyObserver = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"IntValue", 0x90, "IntProperty"},
            {"FloatValue", 0x94, "FloatProperty"},
            {"StringValue", 0x98, "StrProperty"},
            {"CachedDescription", 0xA8, "StrProperty"},
            {"OperationType", 0xB8, "ByteProperty"},
            {"NotifyObserver", 0xB9, "ByteProperty"},
        }};
    };

    struct FortBTDecorator_DistanceBetween
    {
        static constexpr std::string_view Name = "FortBTDecorator_DistanceBetween";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x68;
            static constexpr std::uintptr_t BlackboardKeyA = 0x70;
            static constexpr std::uintptr_t BlackboardKeyB = 0x98;
            static constexpr std::uintptr_t SpecifiedDistance = 0xC0;
            static constexpr std::uintptr_t bUseSelf = 0xD8;
            static constexpr std::uintptr_t bCalculateAs2D = 0xE0;
            static constexpr std::uintptr_t DistanceCalculationUpdateRate = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Operator", 0x68, "ByteProperty"},
            {"BlackboardKeyA", 0x70, "StructProperty"},
            {"BlackboardKeyB", 0x98, "StructProperty"},
            {"SpecifiedDistance", 0xC0, "StructProperty"},
            {"bUseSelf", 0xD8, "BoolProperty"},
            {"bCalculateAs2D", 0xE0, "StructProperty"},
            {"DistanceCalculationUpdateRate", 0xF8, "StructProperty"},
        }};
    };

    struct FortBTDecorator_ExecutionStatus
    {
        static constexpr std::string_view Name = "FortBTDecorator_ExecutionStatus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_Blackboard";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldUpdateExecutionStatus = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShouldUpdateExecutionStatus", 0xC0, "StructProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_CanActivate
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_CanActivate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayAbilityTagContainer = 0x68;
            static constexpr std::uintptr_t TargetValue = 0x98;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTestingValue = 0xB8;
            static constexpr std::uintptr_t bUseTarget = 0xE8;
            static constexpr std::uintptr_t GameplayAbilityTag = 0xF0;
            static constexpr std::uintptr_t GameplayAbilityTagBlackboardKey = 0x110;
            static constexpr std::uintptr_t Target = 0x138;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTesting = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayAbilityTagContainer", 0x68, "StructProperty"},
            {"TargetValue", 0x98, "StructProperty"},
            {"ActiveAbilityTagsToSkipTestingValue", 0xB8, "StructProperty"},
            {"bUseTarget", 0xE8, "BoolProperty"},
            {"GameplayAbilityTag", 0xF0, "StructProperty"},
            {"GameplayAbilityTagBlackboardKey", 0x110, "StructProperty"},
            {"Target", 0x138, "StructProperty"},
            {"ActiveAbilityTagsToSkipTesting", 0x160, "StructProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_CanHitTarget
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_CanHitTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t UseIdealYawRotationToTargetValue = 0x180;
            static constexpr std::uintptr_t UseIdealYawRotationToTarget = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UseIdealYawRotationToTargetValue", 0x180, "StructProperty"},
            {"UseIdealYawRotationToTarget", 0x198, "BoolProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_CompareDistance
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_CompareDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceComparisons = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DistanceComparisons", 0x180, "ArrayProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayAbilityTagContainer = 0x68;
            static constexpr std::uintptr_t TargetValue = 0x98;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTestingValue = 0xB8;
            static constexpr std::uintptr_t bUseTarget = 0xE8;
            static constexpr std::uintptr_t GameplayAbilityTag = 0xF0;
            static constexpr std::uintptr_t GameplayAbilityTagBlackboardKey = 0x110;
            static constexpr std::uintptr_t Target = 0x138;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTesting = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayAbilityTagContainer", 0x68, "StructProperty"},
            {"TargetValue", 0x98, "StructProperty"},
            {"ActiveAbilityTagsToSkipTestingValue", 0xB8, "StructProperty"},
            {"bUseTarget", 0xE8, "BoolProperty"},
            {"GameplayAbilityTag", 0xF0, "StructProperty"},
            {"GameplayAbilityTagBlackboardKey", 0x110, "StructProperty"},
            {"Target", 0x138, "StructProperty"},
            {"ActiveAbilityTagsToSkipTesting", 0x160, "StructProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_HasGameplayAbility
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_HasGameplayAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityOwningActor = 0x68;
            static constexpr std::uintptr_t GameplayAbilityTagContainer = 0x88;
            static constexpr std::uintptr_t OnlyTestActiveAbility = 0xB8;
            static constexpr std::uintptr_t AbilityOwningActorKey = 0xD0;
            static constexpr std::uintptr_t GameplayAbilityTag = 0xF8;
            static constexpr std::uintptr_t GameplayAbilityTagBlackboardKey = 0x118;
            static constexpr std::uintptr_t bOnlyTestActiveAbility = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AbilityOwningActor", 0x68, "StructProperty"},
            {"GameplayAbilityTagContainer", 0x88, "StructProperty"},
            {"OnlyTestActiveAbility", 0xB8, "StructProperty"},
            {"AbilityOwningActorKey", 0xD0, "StructProperty"},
            {"GameplayAbilityTag", 0xF8, "StructProperty"},
            {"GameplayAbilityTagBlackboardKey", 0x118, "StructProperty"},
            {"bOnlyTestActiveAbility", 0x140, "BoolProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_HasNearbyPawns
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_HasNearbyPawns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t NearbyPawnDistanceValue = 0x180;
            static constexpr std::uintptr_t FilterAIPawns = 0x198;
            static constexpr std::uintptr_t FilterPlayerPawns = 0x1B0;
            static constexpr std::uintptr_t NearbyPawnDistance = 0x1C8;
            static constexpr std::uintptr_t bFilterAIPawns = 0x1CC;
            static constexpr std::uintptr_t bFilterPlayerPawns = 0x1CD;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NearbyPawnDistanceValue", 0x180, "StructProperty"},
            {"FilterAIPawns", 0x198, "StructProperty"},
            {"FilterPlayerPawns", 0x1B0, "StructProperty"},
            {"NearbyPawnDistance", 0x1C8, "FloatProperty"},
            {"bFilterAIPawns", 0x1CC, "BoolProperty"},
            {"bFilterPlayerPawns", 0x1CD, "BoolProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_IsClosestPawnInRange
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_IsClosestPawnInRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t NearbyPawnDistanceValue = 0x180;
            static constexpr std::uintptr_t FilterAIPawns = 0x198;
            static constexpr std::uintptr_t FilterPlayerPawns = 0x1B0;
            static constexpr std::uintptr_t NearbyPawnDistance = 0x1C8;
            static constexpr std::uintptr_t bFilterAIPawns = 0x1CC;
            static constexpr std::uintptr_t bFilterPlayerPawns = 0x1CD;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NearbyPawnDistanceValue", 0x180, "StructProperty"},
            {"FilterAIPawns", 0x198, "StructProperty"},
            {"FilterPlayerPawns", 0x1B0, "StructProperty"},
            {"NearbyPawnDistance", 0x1C8, "FloatProperty"},
            {"bFilterAIPawns", 0x1CC, "BoolProperty"},
            {"bFilterPlayerPawns", 0x1CD, "BoolProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_IsOnCooldown
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_IsOnCooldown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayAbilityTagContainer = 0x68;
            static constexpr std::uintptr_t TargetValue = 0x98;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTestingValue = 0xB8;
            static constexpr std::uintptr_t bUseTarget = 0xE8;
            static constexpr std::uintptr_t GameplayAbilityTag = 0xF0;
            static constexpr std::uintptr_t GameplayAbilityTagBlackboardKey = 0x110;
            static constexpr std::uintptr_t Target = 0x138;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTesting = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayAbilityTagContainer", 0x68, "StructProperty"},
            {"TargetValue", 0x98, "StructProperty"},
            {"ActiveAbilityTagsToSkipTestingValue", 0xB8, "StructProperty"},
            {"bUseTarget", 0xE8, "BoolProperty"},
            {"GameplayAbilityTag", 0xF0, "StructProperty"},
            {"GameplayAbilityTagBlackboardKey", 0x110, "StructProperty"},
            {"Target", 0x138, "StructProperty"},
            {"ActiveAbilityTagsToSkipTesting", 0x160, "StructProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayAbilityTagContainer = 0x68;
            static constexpr std::uintptr_t TargetValue = 0x98;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTestingValue = 0xB8;
            static constexpr std::uintptr_t bUseTarget = 0xE8;
            static constexpr std::uintptr_t GameplayAbilityTag = 0xF0;
            static constexpr std::uintptr_t GameplayAbilityTagBlackboardKey = 0x110;
            static constexpr std::uintptr_t Target = 0x138;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTesting = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayAbilityTagContainer", 0x68, "StructProperty"},
            {"TargetValue", 0x98, "StructProperty"},
            {"ActiveAbilityTagsToSkipTestingValue", 0xB8, "StructProperty"},
            {"bUseTarget", 0xE8, "BoolProperty"},
            {"GameplayAbilityTag", 0xF0, "StructProperty"},
            {"GameplayAbilityTagBlackboardKey", 0x110, "StructProperty"},
            {"Target", 0x138, "StructProperty"},
            {"ActiveAbilityTagsToSkipTesting", 0x160, "StructProperty"},
        }};
    };

    struct FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
    {
        static constexpr std::string_view Name = "FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayAbilityTagContainer = 0x68;
            static constexpr std::uintptr_t TargetValue = 0x98;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTestingValue = 0xB8;
            static constexpr std::uintptr_t bUseTarget = 0xE8;
            static constexpr std::uintptr_t GameplayAbilityTag = 0xF0;
            static constexpr std::uintptr_t GameplayAbilityTagBlackboardKey = 0x110;
            static constexpr std::uintptr_t Target = 0x138;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTesting = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayAbilityTagContainer", 0x68, "StructProperty"},
            {"TargetValue", 0x98, "StructProperty"},
            {"ActiveAbilityTagsToSkipTestingValue", 0xB8, "StructProperty"},
            {"bUseTarget", 0xE8, "BoolProperty"},
            {"GameplayAbilityTag", 0xF0, "StructProperty"},
            {"GameplayAbilityTagBlackboardKey", 0x110, "StructProperty"},
            {"Target", 0x138, "StructProperty"},
            {"ActiveAbilityTagsToSkipTesting", 0x160, "StructProperty"},
        }};
    };

    struct FortBTDecorator_HasLineOfFire
    {
        static constexpr std::string_view Name = "FortBTDecorator_HasLineOfFire";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorKey = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetActorKey", 0x68, "StructProperty"},
        }};
    };

    struct FortBTDecorator_HasToken
    {
        static constexpr std::string_view Name = "FortBTDecorator_HasToken";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenQuery = 0x90;
            static constexpr std::uintptr_t ActivationTagQuery = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TokenQuery", 0x90, "StructProperty"},
            {"ActivationTagQuery", 0xB0, "StructProperty"},
        }};
    };

    struct FortBTDecorator_IsGoalPawn
    {
        static constexpr std::string_view Name = "FortBTDecorator_IsGoalPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlackboardKey", 0x68, "StructProperty"},
        }};
    };

    struct FortBTDecorator_IsInBotEndGame
    {
        static constexpr std::string_view Name = "FortBTDecorator_IsInBotEndGame";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x60;
            static constexpr std::uintptr_t FlowAbortMode = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInverseCondition", 0x60, "BoolProperty"},
            {"FlowAbortMode", 0x64, "ByteProperty"},
        }};
    };

    struct FortBTDecorator_IsMoving
    {
        static constexpr std::string_view Name = "FortBTDecorator_IsMoving";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTDecorator_QueryGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateIntervalValue = 0x180;
            static constexpr std::uintptr_t MinTimeValue = 0x198;
            static constexpr std::uintptr_t bUseMinDist = 0x1B0;
            static constexpr std::uintptr_t UseMinDistToTargetTime = 0x1B8;
            static constexpr std::uintptr_t MinDistanceComparison = 0x1D0;
            static constexpr std::uintptr_t UpdateInterval = 0x208;
            static constexpr std::uintptr_t MinTime = 0x20C;
            static constexpr std::uintptr_t MinDistMinTime = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"UpdateIntervalValue", 0x180, "StructProperty"},
            {"MinTimeValue", 0x198, "StructProperty"},
            {"bUseMinDist", 0x1B0, "BoolProperty"},
            {"UseMinDistToTargetTime", 0x1B8, "StructProperty"},
            {"MinDistanceComparison", 0x1D0, "StructProperty"},
            {"UpdateInterval", 0x208, "FloatProperty"},
            {"MinTime", 0x20C, "FloatProperty"},
            {"MinDistMinTime", 0x210, "FloatProperty"},
        }};
    };

    struct FortBTDecorator_IsTakerAirborne
    {
        static constexpr std::string_view Name = "FortBTDecorator_IsTakerAirborne";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x60;
            static constexpr std::uintptr_t FlowAbortMode = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInverseCondition", 0x60, "BoolProperty"},
            {"FlowAbortMode", 0x64, "ByteProperty"},
        }};
    };

    struct FortBTDecorator_RandomCooldown
    {
        static constexpr std::string_view Name = "FortBTDecorator_RandomCooldown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t MinCoolDownTime = 0x68;
            static constexpr std::uintptr_t MaxCoolDownTime = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinCoolDownTime", 0x68, "StructProperty"},
            {"MaxCoolDownTime", 0x80, "StructProperty"},
        }};
    };

    struct FortBTDecorator_TokenCount
    {
        static constexpr std::string_view Name = "FortBTDecorator_TokenCount";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenQuery = 0x90;
            static constexpr std::uintptr_t bOwnedTokens = 0xD8;
            static constexpr std::uintptr_t Operator = 0xD9;
            static constexpr std::uintptr_t TokenCountCompareValue = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TokenQuery", 0x90, "StructProperty"},
            {"bOwnedTokens", 0xD8, "BoolProperty"},
            {"Operator", 0xD9, "ByteProperty"},
            {"TokenCountCompareValue", 0xE0, "StructProperty"},
        }};
    };

    struct FortBTDecorator_WeaponStatus
    {
        static constexpr std::string_view Name = "FortBTDecorator_WeaponStatus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponStatusUpdateRate = 0x68;
            static constexpr std::uintptr_t bCurrentWeaponShouldBeValid = 0x6C;
            static constexpr std::uintptr_t bTestAllowedCurrentWeaponTags = 0x6C;
            static constexpr std::uintptr_t bTestIfCurrentWeaponIsValid = 0x6C;
            static constexpr std::uintptr_t AllowedCurrentWeaponTags = 0x70;
            static constexpr std::uintptr_t bAllInterestedTestsMustPass = 0x90;
            static constexpr std::uintptr_t bCurrentWeaponShouldBeReloading = 0x90;
            static constexpr std::uintptr_t bCurrentWeaponShouldHaveAmmoInMagazine = 0x90;
            static constexpr std::uintptr_t bCurrentWeaponShouldHaveExtraAmmo = 0x90;
            static constexpr std::uintptr_t bTestIfCurrentWeaponHasAmmoInMagazine = 0x90;
            static constexpr std::uintptr_t bTestIfCurrentWeaponHasExtraAmmo = 0x90;
            static constexpr std::uintptr_t bTestIfCurrentWeaponIsReloading = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"WeaponStatusUpdateRate", 0x68, "FloatProperty"},
            {"bCurrentWeaponShouldBeValid", 0x6C, "BoolProperty"},
            {"bTestAllowedCurrentWeaponTags", 0x6C, "BoolProperty"},
            {"bTestIfCurrentWeaponIsValid", 0x6C, "BoolProperty"},
            {"AllowedCurrentWeaponTags", 0x70, "StructProperty"},
            {"bAllInterestedTestsMustPass", 0x90, "BoolProperty"},
            {"bCurrentWeaponShouldBeReloading", 0x90, "BoolProperty"},
            {"bCurrentWeaponShouldHaveAmmoInMagazine", 0x90, "BoolProperty"},
            {"bCurrentWeaponShouldHaveExtraAmmo", 0x90, "BoolProperty"},
            {"bTestIfCurrentWeaponHasAmmoInMagazine", 0x90, "BoolProperty"},
            {"bTestIfCurrentWeaponHasExtraAmmo", 0x90, "BoolProperty"},
            {"bTestIfCurrentWeaponIsReloading", 0x90, "BoolProperty"},
        }};
    };

    struct FortBTService_AIEvaluatorsInjector
    {
        static constexpr std::string_view Name = "FortBTService_AIEvaluatorsInjector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectionTagsKeys = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectionTagsKeys", 0x70, "ArrayProperty"},
        }};
    };

    struct FortBTService_ActivateAbility
    {
        static constexpr std::string_view Name = "FortBTService_ActivateAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService_BlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityTags = 0x98;
            static constexpr std::uintptr_t TargetActorKey = 0xC8;
            static constexpr std::uintptr_t bRequireCanHitTargetWithAbility = 0xF0;
            static constexpr std::uintptr_t bPawnTargetsOnly = 0xF1;
            static constexpr std::uintptr_t ProhibitedTargetTags = 0xF8;
            static constexpr std::uintptr_t bCanActivateWhenMoving = 0x118;
            static constexpr std::uintptr_t ActivateOnBecomeRelevant = 0x130;
            static constexpr std::uintptr_t DeactivateOnCeaseRelevant = 0x148;
            static constexpr std::uintptr_t DistanceChecks = 0x160;
            static constexpr std::uintptr_t InitialDelayTime = 0x170;
            static constexpr std::uintptr_t InitialDelayRandomDeviation = 0x188;
            static constexpr std::uintptr_t WantsReceiveActivatedAbilityEnded = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"AbilityTags", 0x98, "StructProperty"},
            {"TargetActorKey", 0xC8, "StructProperty"},
            {"bRequireCanHitTargetWithAbility", 0xF0, "BoolProperty"},
            {"bPawnTargetsOnly", 0xF1, "BoolProperty"},
            {"ProhibitedTargetTags", 0xF8, "StructProperty"},
            {"bCanActivateWhenMoving", 0x118, "StructProperty"},
            {"ActivateOnBecomeRelevant", 0x130, "StructProperty"},
            {"DeactivateOnCeaseRelevant", 0x148, "StructProperty"},
            {"DistanceChecks", 0x160, "ArrayProperty"},
            {"InitialDelayTime", 0x170, "StructProperty"},
            {"InitialDelayRandomDeviation", 0x188, "StructProperty"},
            {"WantsReceiveActivatedAbilityEnded", 0x1A0, "StructProperty"},
        }};
    };

    struct FortBTService_ApplyGameplayEffect
    {
        static constexpr std::string_view Name = "FortBTService_ApplyGameplayEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayEffectBehaviorValue = 0x70;
            static constexpr std::uintptr_t GameplayEffectLevel = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameplayEffectBehaviorValue", 0x70, "StructProperty"},
            {"GameplayEffectLevel", 0x90, "StructProperty"},
        }};
    };

    struct FortBTService_ClearGoalAndAssignment
    {
        static constexpr std::string_view Name = "FortBTService_ClearGoalAndAssignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x60;
            static constexpr std::uintptr_t RandomDeviation = 0x64;
            static constexpr std::uintptr_t bCallTickOnSearchStart = 0x68;
            static constexpr std::uintptr_t bRestartTimerOnEachActivation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interval", 0x60, "FloatProperty"},
            {"RandomDeviation", 0x64, "FloatProperty"},
            {"bCallTickOnSearchStart", 0x68, "BoolProperty"},
            {"bRestartTimerOnEachActivation", 0x68, "BoolProperty"},
        }};
    };

    struct FortBTService_ContextOverride
    {
        static constexpr std::string_view Name = "FortBTService_ContextOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Enabled = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Enabled", 0x70, "StructProperty"},
        }};
    };

    struct FortBTService_Crouch
    {
        static constexpr std::string_view Name = "FortBTService_Crouch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t EnterShouldCrouch = 0x70;
            static constexpr std::uintptr_t ExitShouldCrouch = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnterShouldCrouch", 0x70, "StructProperty"},
            {"ExitShouldCrouch", 0x88, "StructProperty"},
        }};
    };

    struct FortBTService_UpdateBotMissionBuilding
    {
        static constexpr std::string_view Name = "FortBTService_UpdateBotMissionBuilding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t InterestLocationKey = 0x70;
            static constexpr std::uintptr_t BuildOrderKey = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InterestLocationKey", 0x70, "StructProperty"},
            {"BuildOrderKey", 0x98, "StructProperty"},
        }};
    };

    struct FortBTService_UpdateBotMissionGoal
    {
        static constexpr std::string_view Name = "FortBTService_UpdateBotMissionGoal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bPickClosest = 0x98;
            static constexpr std::uintptr_t bRequireEncounter = 0x98;
            static constexpr std::uintptr_t bRequireInteraction = 0x98;
            static constexpr std::uintptr_t bRequireInteractionOrLocator = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bPickClosest", 0x98, "BoolProperty"},
            {"bRequireEncounter", 0x98, "BoolProperty"},
            {"bRequireInteraction", 0x98, "BoolProperty"},
            {"bRequireInteractionOrLocator", 0x98, "BoolProperty"},
        }};
    };

    struct FortBTTask_AlwaysFail
    {
        static constexpr std::string_view Name = "FortBTTask_AlwaysFail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct FortBTTask_AlwaysSucceed
    {
        static constexpr std::string_view Name = "FortBTTask_AlwaysSucceed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct FortBTTask_Bark
    {
        static constexpr std::string_view Name = "FortBTTask_Bark";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BarkTag = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BarkTag", 0x70, "StructProperty"},
        }};
    };

    struct FortBTTask_BotMissionBuild
    {
        static constexpr std::string_view Name = "FortBTTask_BotMissionBuild";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlackboardKey", 0x70, "StructProperty"},
        }};
    };

    struct FortBTTask_BotMissionInteract
    {
        static constexpr std::string_view Name = "FortBTTask_BotMissionInteract";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlackboardKey", 0x70, "StructProperty"},
        }};
    };

    struct FortBTTask_Crouch
    {
        static constexpr std::string_view Name = "FortBTTask_Crouch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldCrouch = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShouldCrouch", 0x70, "StructProperty"},
        }};
    };

    struct FortBTTask_ExecuteGameplayAbility
    {
        static constexpr std::string_view Name = "FortBTTask_ExecuteGameplayAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_GameplayTaskBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayAbilityTagContainer = 0x88;
            static constexpr std::uintptr_t ForbidAbilityRetryOnActivation = 0xB8;
            static constexpr std::uintptr_t GameplayAbilityTag = 0xD0;
            static constexpr std::uintptr_t GameplayAbilityTagBlackboardKey = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GameplayAbilityTagContainer", 0x88, "StructProperty"},
            {"ForbidAbilityRetryOnActivation", 0xB8, "StructProperty"},
            {"GameplayAbilityTag", 0xD0, "StructProperty"},
            {"GameplayAbilityTagBlackboardKey", 0xF0, "StructProperty"},
        }};
    };

    struct FortBTTask_GameMoveDirectlyToward
    {
        static constexpr std::string_view Name = "FortBTTask_GameMoveDirectlyToward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTTask_GameMoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalPointWhileMoving = 0x1B0;
            static constexpr std::uintptr_t PathObstacleAction = 0x1D8;
            static constexpr std::uintptr_t PushBumpedPawnClass = 0x1E0;
            static constexpr std::uintptr_t NavFilterTag = 0x1E8;
            static constexpr std::uintptr_t bDetectUnexpectedPathBlockingObstacles = 0x1EC;
            static constexpr std::uintptr_t bEnableSlowdownAtGoal = 0x1EC;
            static constexpr std::uintptr_t bFinishMoveOnOverlap = 0x1EC;
            static constexpr std::uintptr_t bStopAtGoal = 0x1EC;
            static constexpr std::uintptr_t bUpdateMoveOnBlackboardKeyChanges = 0x1EC;
            static constexpr std::uintptr_t AcceptableRadiusKey = 0x1F0;
            static constexpr std::uintptr_t bDeimosFlavor = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FocalPointWhileMoving", 0x1B0, "StructProperty"},
            {"PathObstacleAction", 0x1D8, "ByteProperty"},
            {"PushBumpedPawnClass", 0x1E0, "ClassProperty"},
            {"NavFilterTag", 0x1E8, "StructProperty"},
            {"bDetectUnexpectedPathBlockingObstacles", 0x1EC, "BoolProperty"},
            {"bEnableSlowdownAtGoal", 0x1EC, "BoolProperty"},
            {"bFinishMoveOnOverlap", 0x1EC, "BoolProperty"},
            {"bStopAtGoal", 0x1EC, "BoolProperty"},
            {"bUpdateMoveOnBlackboardKeyChanges", 0x1EC, "BoolProperty"},
            {"AcceptableRadiusKey", 0x1F0, "StructProperty"},
            {"bDeimosFlavor", 0x218, "BoolProperty"},
        }};
    };

    struct FortBTTask_GameMoveTo
    {
        static constexpr std::string_view Name = "FortBTTask_GameMoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalPointWhileMoving = 0x1B0;
            static constexpr std::uintptr_t PathObstacleAction = 0x1D8;
            static constexpr std::uintptr_t PushBumpedPawnClass = 0x1E0;
            static constexpr std::uintptr_t NavFilterTag = 0x1E8;
            static constexpr std::uintptr_t bDetectUnexpectedPathBlockingObstacles = 0x1EC;
            static constexpr std::uintptr_t bEnableSlowdownAtGoal = 0x1EC;
            static constexpr std::uintptr_t bFinishMoveOnOverlap = 0x1EC;
            static constexpr std::uintptr_t bStopAtGoal = 0x1EC;
            static constexpr std::uintptr_t bUpdateMoveOnBlackboardKeyChanges = 0x1EC;
            static constexpr std::uintptr_t AcceptableRadiusKey = 0x1F0;
            static constexpr std::uintptr_t bDeimosFlavor = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FocalPointWhileMoving", 0x1B0, "StructProperty"},
            {"PathObstacleAction", 0x1D8, "ByteProperty"},
            {"PushBumpedPawnClass", 0x1E0, "ClassProperty"},
            {"NavFilterTag", 0x1E8, "StructProperty"},
            {"bDetectUnexpectedPathBlockingObstacles", 0x1EC, "BoolProperty"},
            {"bEnableSlowdownAtGoal", 0x1EC, "BoolProperty"},
            {"bFinishMoveOnOverlap", 0x1EC, "BoolProperty"},
            {"bStopAtGoal", 0x1EC, "BoolProperty"},
            {"bUpdateMoveOnBlackboardKeyChanges", 0x1EC, "BoolProperty"},
            {"AcceptableRadiusKey", 0x1F0, "StructProperty"},
            {"bDeimosFlavor", 0x218, "BoolProperty"},
        }};
    };

    struct FortBTTask_InProgress
    {
        static constexpr std::string_view Name = "FortBTTask_InProgress";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct FortBTTask_InjectionPoint
    {
        static constexpr std::string_view Name = "FortBTTask_InjectionPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectionTag = 0x70;
            static constexpr std::uintptr_t InjectedAction = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InjectionTag", 0x70, "StructProperty"},
            {"InjectedAction", 0x78, "StructProperty"},
        }};
    };

    struct FortBTTask_RandomFloat
    {
        static constexpr std::string_view Name = "FortBTTask_RandomFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimumValue = 0x98;
            static constexpr std::uintptr_t MaximumValue = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinimumValue", 0x98, "StructProperty"},
            {"MaximumValue", 0xB0, "StructProperty"},
        }};
    };

    struct FortBTTask_RandomInt
    {
        static constexpr std::string_view Name = "FortBTTask_RandomInt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimumValue = 0x98;
            static constexpr std::uintptr_t MaximumValue = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinimumValue", 0x98, "StructProperty"},
            {"MaximumValue", 0xB0, "StructProperty"},
        }};
    };

    struct FortBTTask_RequestUndermining
    {
        static constexpr std::string_view Name = "FortBTTask_RequestUndermining";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct FortBTTask_RotateToFaceBBEntryWithTags
    {
        static constexpr std::string_view Name = "FortBTTask_RotateToFaceBBEntryWithTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_RotateToFaceBBEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t TagsToApply = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagsToApply", 0xB0, "StructProperty"},
        }};
    };

    struct FortBTTask_RunDynamicStateTree
    {
        static constexpr std::string_view Name = "FortBTTask_RunDynamicStateTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_RunDynamicStateTree";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeRef = 0x70;
            static constexpr std::uintptr_t InstanceData = 0x98;
            static constexpr std::uintptr_t InjectionTag = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StateTreeRef", 0x70, "StructProperty"},
            {"InstanceData", 0x98, "StructProperty"},
            {"InjectionTag", 0xA8, "StructProperty"},
        }};
    };

    struct FortBTTask_SetFrustrationDiscouragement
    {
        static constexpr std::string_view Name = "FortBTTask_SetFrustrationDiscouragement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DiscouragementDuration = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DiscouragementDuration", 0x70, "FloatProperty"},
        }};
    };

    struct FortBTTask_Sleep
    {
        static constexpr std::string_view Name = "FortBTTask_Sleep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct FortBTTask_TakerMoveToNavmesh
    {
        static constexpr std::string_view Name = "FortBTTask_TakerMoveToNavmesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t AcceptableRadius = 0x98;
            static constexpr std::uintptr_t FilterClass = 0xB0;
            static constexpr std::uintptr_t ObservedBlackboardValueTolerance = 0xD0;
            static constexpr std::uintptr_t bAllowStrafe = 0xE8;
            static constexpr std::uintptr_t bAllowPartialPath = 0x100;
            static constexpr std::uintptr_t bTrackMovingGoal = 0x118;
            static constexpr std::uintptr_t bRequireNavigableEndLocation = 0x130;
            static constexpr std::uintptr_t bProjectGoalLocation = 0x148;
            static constexpr std::uintptr_t bReachTestIncludesAgentRadius = 0x160;
            static constexpr std::uintptr_t bReachTestIncludesGoalRadius = 0x178;
            static constexpr std::uintptr_t bStartFromPreviousPath = 0x190;
            static constexpr std::uintptr_t bObserveBlackboardValue = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"AcceptableRadius", 0x98, "StructProperty"},
            {"FilterClass", 0xB0, "StructProperty"},
            {"ObservedBlackboardValueTolerance", 0xD0, "StructProperty"},
            {"bAllowStrafe", 0xE8, "StructProperty"},
            {"bAllowPartialPath", 0x100, "StructProperty"},
            {"bTrackMovingGoal", 0x118, "StructProperty"},
            {"bRequireNavigableEndLocation", 0x130, "StructProperty"},
            {"bProjectGoalLocation", 0x148, "StructProperty"},
            {"bReachTestIncludesAgentRadius", 0x160, "StructProperty"},
            {"bReachTestIncludesGoalRadius", 0x178, "StructProperty"},
            {"bStartFromPreviousPath", 0x190, "StructProperty"},
            {"bObserveBlackboardValue", 0x1A8, "BoolProperty"},
        }};
    };

    struct FortBTWorldConditionSchema
    {
        static constexpr std::string_view Name = "FortBTWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortEQSPrevisActor
    {
        static constexpr std::string_view Name = "FortEQSPrevisActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneRoot = 0x288;
            static constexpr std::uintptr_t GameplayTags = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SceneRoot", 0x288, "ObjectProperty"},
            {"GameplayTags", 0x290, "StructProperty"},
        }};
    };

    struct FortEQSTestingController
    {
        static constexpr std::string_view Name = "FortEQSTestingController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIController";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowStrafe = 0x348;
            static constexpr std::uintptr_t bLOSflag = 0x348;
            static constexpr std::uintptr_t bSetControlRotationFromPawnOrientation = 0x348;
            static constexpr std::uintptr_t bSkipExtraLOSChecks = 0x348;
            static constexpr std::uintptr_t bSkipRootComponentUpdate = 0x348;
            static constexpr std::uintptr_t bStartAILogicOnPossess = 0x348;
            static constexpr std::uintptr_t bStopAILogicOnUnposses = 0x348;
            static constexpr std::uintptr_t bWantsPlayerState = 0x348;
            static constexpr std::uintptr_t PathFollowingComponent = 0x350;
            static constexpr std::uintptr_t BrainComponent = 0x358;
            static constexpr std::uintptr_t PerceptionComponent = 0x360;
            static constexpr std::uintptr_t Blackboard = 0x368;
            static constexpr std::uintptr_t CachedGameplayTasksComponent = 0x370;
            static constexpr std::uintptr_t DefaultNavigationFilterClass = 0x378;
            static constexpr std::uintptr_t ReceiveMoveCompleted = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bAllowStrafe", 0x348, "BoolProperty"},
            {"bLOSflag", 0x348, "BoolProperty"},
            {"bSetControlRotationFromPawnOrientation", 0x348, "BoolProperty"},
            {"bSkipExtraLOSChecks", 0x348, "BoolProperty"},
            {"bSkipRootComponentUpdate", 0x348, "BoolProperty"},
            {"bStartAILogicOnPossess", 0x348, "BoolProperty"},
            {"bStopAILogicOnUnposses", 0x348, "BoolProperty"},
            {"bWantsPlayerState", 0x348, "BoolProperty"},
            {"PathFollowingComponent", 0x350, "ObjectProperty"},
            {"BrainComponent", 0x358, "ObjectProperty"},
            {"PerceptionComponent", 0x360, "ObjectProperty"},
            {"Blackboard", 0x368, "ObjectProperty"},
            {"CachedGameplayTasksComponent", 0x370, "ObjectProperty"},
            {"DefaultNavigationFilterClass", 0x378, "ClassProperty"},
            {"ReceiveMoveCompleted", 0x380, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortEQSTestingPawn
    {
        static constexpr std::string_view Name = "FortEQSTestingPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EQSTestingPawn";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDoorNavLinks = 0x6E0;
            static constexpr std::uintptr_t bUseClamberNavLinks = 0x6E1;
            static constexpr std::uintptr_t bUseHurdleNavLinks = 0x6E2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseDoorNavLinks", 0x6E0, "BoolProperty"},
            {"bUseClamberNavLinks", 0x6E1, "BoolProperty"},
            {"bUseHurdleNavLinks", 0x6E2, "BoolProperty"},
        }};
    };

    struct FortEnvQueryGenerator_ActorsOfClass
    {
        static constexpr std::string_view Name = "FortEnvQueryGenerator_ActorsOfClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ActorsOfClass";
        struct Offsets
        {
            static constexpr std::uintptr_t bRandomizeResults = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRandomizeResults", 0xD0, "StructProperty"},
        }};
    };

    struct FortEnvQueryGenerator_ProjectedPoints
    {
        static constexpr std::string_view Name = "FortEnvQueryGenerator_ProjectedPoints";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t OverridenAgentNameForNavmesh = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverridenAgentNameForNavmesh", 0x90, "NameProperty"},
        }};
    };

    struct FortEnvQueryGenerator_SimpleGrid
    {
        static constexpr std::string_view Name = "FortEnvQueryGenerator_SimpleGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortEnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t GridSize = 0x98;
            static constexpr std::uintptr_t SpaceBetween = 0xD0;
            static constexpr std::uintptr_t RandomDisplacementRatio = 0x108;
            static constexpr std::uintptr_t GenerateAround = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GridSize", 0x98, "StructProperty"},
            {"SpaceBetween", 0xD0, "StructProperty"},
            {"RandomDisplacementRatio", 0x108, "StructProperty"},
            {"GenerateAround", 0x140, "ClassProperty"},
        }};
    };

    struct FortEvaluatorBlueprintBaseWorldConditionSchema
    {
        static constexpr std::string_view Name = "FortEvaluatorBlueprintBaseWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_AddInjectionSupportingBehavior
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddInjectionSupportingBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameInstanceGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectionSupportingBehaviors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectionSupportingBehaviors", 0x38, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_InjectAIBehavior
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_InjectAIBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameInstanceGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectedBehaviors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectedBehaviors", 0x38, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_InjectAIEvaluators
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_InjectAIEvaluators";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t AIEvaluatorList = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AIEvaluatorList", 0x28, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_ProvideAICombatTokens
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_ProvideAICombatTokens";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameInstanceGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ProvidingPawn = 0x38;
            static constexpr std::uintptr_t PositionTokensToProvide = 0x58;
            static constexpr std::uintptr_t FallbackCombatTokenProviderComponent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProvidingPawn", 0x38, "SoftClassProperty"},
            {"PositionTokensToProvide", 0x58, "ArrayProperty"},
            {"FallbackCombatTokenProviderComponent", 0x68, "SoftClassProperty"},
        }};
    };

    struct FortInjectedBehaviorsComponent
    {
        static constexpr std::string_view Name = "FortInjectedBehaviorsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortQueryContext_AIAbilityTarget
    {
        static constexpr std::string_view Name = "FortQueryContext_AIAbilityTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AIBotExtraData_Actor
    {
        static constexpr std::string_view Name = "FortQueryContext_AIBotExtraData_Actor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AIBotExtraData_Box_Center
    {
        static constexpr std::string_view Name = "FortQueryContext_AIBotExtraData_Box_Center";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AIBotExtraData_Box_Extents
    {
        static constexpr std::string_view Name = "FortQueryContext_AIBotExtraData_Box_Extents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AIPawnSpawnLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_AIPawnSpawnLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AbilityActivatingPawn
    {
        static constexpr std::string_view Name = "FortQueryContext_AbilityActivatingPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AllBots
    {
        static constexpr std::string_view Name = "FortQueryContext_AllBots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t bIncludeOnlyAthenaGameParticipantBots = 0x28;
            static constexpr std::uintptr_t BotTagQuery = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIncludeOnlyAthenaGameParticipantBots", 0x28, "BoolProperty"},
            {"BotTagQuery", 0x30, "StructProperty"},
        }};
    };

    struct FortQueryContext_AllEnemies
    {
        static constexpr std::string_view Name = "FortQueryContext_AllEnemies";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AllGoals
    {
        static constexpr std::string_view Name = "FortQueryContext_AllGoals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AllPOIVolumes
    {
        static constexpr std::string_view Name = "FortQueryContext_AllPOIVolumes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeLocationTagQuery = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VolumeLocationTagQuery", 0x28, "StructProperty"},
        }};
    };

    struct FortQueryContext_AllPlayers
    {
        static constexpr std::string_view Name = "FortQueryContext_AllPlayers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AthenaCurrentSafeZoneCenter
    {
        static constexpr std::string_view Name = "FortQueryContext_AthenaCurrentSafeZoneCenter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
    {
        static constexpr std::string_view Name = "FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AthenaSafeZoneCenterIndex
    {
        static constexpr std::string_view Name = "FortQueryContext_AthenaSafeZoneCenterIndex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_AthenaSafeZonePredictedLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_AthenaSafeZonePredictedLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_BlackboardKeyLeader
    {
        static constexpr std::string_view Name = "FortQueryContext_BlackboardKeyLeader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_BoxAroundQuerier
    {
        static constexpr std::string_view Name = "FortQueryContext_BoxAroundQuerier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxExtent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoxExtent", 0x28, "StructProperty"},
        }};
    };

    struct FortQueryContext_BuildingRifts
    {
        static constexpr std::string_view Name = "FortQueryContext_BuildingRifts";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_ClosestLandscapeLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_ClosestLandscapeLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_ClosestLocationInsideLeash
    {
        static constexpr std::string_view Name = "FortQueryContext_ClosestLocationInsideLeash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t NavFilterClass = 0x28;
            static constexpr std::uintptr_t bUseInnerRadius = 0x30;
            static constexpr std::uintptr_t bForcePositionOnLeash = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NavFilterClass", 0x28, "ClassProperty"},
            {"bUseInnerRadius", 0x30, "BoolProperty"},
            {"bForcePositionOnLeash", 0x31, "BoolProperty"},
        }};
    };

    struct FortQueryContext_ConverterController
    {
        static constexpr std::string_view Name = "FortQueryContext_ConverterController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_ConverterPawn
    {
        static constexpr std::string_view Name = "FortQueryContext_ConverterPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_ConverterViewLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_ConverterViewLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_ConverterViewRotation
    {
        static constexpr std::string_view Name = "FortQueryContext_ConverterViewRotation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_EncounterFallbackTarget
    {
        static constexpr std::string_view Name = "FortQueryContext_EncounterFallbackTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_EncounterGoalsCenterLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_EncounterGoalsCenterLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_EncounterGoalsOnGround
    {
        static constexpr std::string_view Name = "FortQueryContext_EncounterGoalsOnGround";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_EncounterPrimaryAssignmentGoals
    {
        static constexpr std::string_view Name = "FortQueryContext_EncounterPrimaryAssignmentGoals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_EncounterProvidedQueryLocations
    {
        static constexpr std::string_view Name = "FortQueryContext_EncounterProvidedQueryLocations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_EncounterQueryActor
    {
        static constexpr std::string_view Name = "FortQueryContext_EncounterQueryActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_EncounterRandomDirection
    {
        static constexpr std::string_view Name = "FortQueryContext_EncounterRandomDirection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_EncounterTargetObjective
    {
        static constexpr std::string_view Name = "FortQueryContext_EncounterTargetObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_Goal
    {
        static constexpr std::string_view Name = "FortQueryContext_Goal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_GoalProviderRootAssignmentGoals
    {
        static constexpr std::string_view Name = "FortQueryContext_GoalProviderRootAssignmentGoals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_Goal_SpawnLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_Goal_SpawnLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_LeashCenter
    {
        static constexpr std::string_view Name = "FortQueryContext_LeashCenter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_LeashGameplayVolume
    {
        static constexpr std::string_view Name = "FortQueryContext_LeashGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_LocationSynchronizerOwnerExtents
    {
        static constexpr std::string_view Name = "FortQueryContext_LocationSynchronizerOwnerExtents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_NavigationHeightMapAverageFloorHeight
    {
        static constexpr std::string_view Name = "FortQueryContext_NavigationHeightMapAverageFloorHeight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryRadius = 0x28;
            static constexpr std::uintptr_t QueryHeight = 0x50;
            static constexpr std::uintptr_t LowResolutionQuery = 0x78;
            static constexpr std::uintptr_t ResultVerticalOffset = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"QueryRadius", 0x28, "StructProperty"},
            {"QueryHeight", 0x50, "StructProperty"},
            {"LowResolutionQuery", 0x78, "StructProperty"},
            {"ResultVerticalOffset", 0xA0, "StructProperty"},
        }};
    };

    struct FortQueryContext_NearbyAIPawns
    {
        static constexpr std::string_view Name = "FortQueryContext_NearbyAIPawns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_NearbyAIPawnsMoveDestinations
    {
        static constexpr std::string_view Name = "FortQueryContext_NearbyAIPawnsMoveDestinations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_NearbyFactionMembers
    {
        static constexpr std::string_view Name = "FortQueryContext_NearbyFactionMembers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t NearbyFactionMemberDistance = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NearbyFactionMemberDistance", 0x28, "StructProperty"},
        }};
    };

    struct FortQueryContext_NearbyFriendlyAIPawns
    {
        static constexpr std::string_view Name = "FortQueryContext_NearbyFriendlyAIPawns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
    {
        static constexpr std::string_view Name = "FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_NearbyFriends
    {
        static constexpr std::string_view Name = "FortQueryContext_NearbyFriends";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_PlayerSpawnPad
    {
        static constexpr std::string_view Name = "FortQueryContext_PlayerSpawnPad";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_PlayspaceVolume
    {
        static constexpr std::string_view Name = "FortQueryContext_PlayspaceVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryActorContext = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QueryActorContext", 0x28, "ClassProperty"},
        }};
    };

    struct FortQueryContext_QuerierAIGroupMembers
    {
        static constexpr std::string_view Name = "FortQueryContext_QuerierAIGroupMembers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_QuerierController
    {
        static constexpr std::string_view Name = "FortQueryContext_QuerierController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_RandomDirectionXY
    {
        static constexpr std::string_view Name = "FortQueryContext_RandomDirectionXY";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
    {
        static constexpr std::string_view Name = "FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_StWStormShield
    {
        static constexpr std::string_view Name = "FortQueryContext_StWStormShield";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_TokenPositioningBoxesExtents
    {
        static constexpr std::string_view Name = "FortQueryContext_TokenPositioningBoxesExtents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultBoxExtent = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultBoxExtent", 0x28, "StructProperty"},
        }};
    };

    struct FortQueryContext_TokenPositioningVolumeActors
    {
        static constexpr std::string_view Name = "FortQueryContext_TokenPositioningVolumeActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_TokenReservedPosition
    {
        static constexpr std::string_view Name = "FortQueryContext_TokenReservedPosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenProviderContext = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TokenProviderContext", 0x28, "ClassProperty"},
        }};
    };

    struct FortQueryContext_TwoPointSolverPointA
    {
        static constexpr std::string_view Name = "FortQueryContext_TwoPointSolverPointA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryContext_TwoPointSolverRotationA
    {
        static constexpr std::string_view Name = "FortQueryContext_TwoPointSolverRotationA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryData_CurvesAroundLine
    {
        static constexpr std::string_view Name = "FortQueryData_CurvesAroundLine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PointsOnSideA = 0x28;
            static constexpr std::uintptr_t PointsOnSideB = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PointsOnSideA", 0x28, "StructProperty"},
            {"PointsOnSideB", 0x58, "StructProperty"},
        }};
    };

    struct FortQueryGeneratorModifier
    {
        static constexpr std::string_view Name = "FortQueryGeneratorModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryGeneratorModifier_Offset
    {
        static constexpr std::string_view Name = "FortQueryGeneratorModifier_Offset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryGeneratorModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t PointOffset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PointOffset", 0x28, "StructProperty"},
        }};
    };

    struct FortQueryGeneratorModifier_Project
    {
        static constexpr std::string_view Name = "FortQueryGeneratorModifier_Project";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryGeneratorModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectionData = 0x28;
            static constexpr std::uintptr_t NavDataOverrideContext = 0x60;
            static constexpr std::uintptr_t bFilterOnly = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ProjectionData", 0x28, "StructProperty"},
            {"NavDataOverrideContext", 0x60, "ClassProperty"},
            {"bFilterOnly", 0x68, "BoolProperty"},
        }};
    };

    struct FortQueryGeneratorModifier_Score
    {
        static constexpr std::string_view Name = "FortQueryGeneratorModifier_Score";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryGeneratorModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Score = 0x28;
            static constexpr std::uintptr_t bAccumulate = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Score", 0x28, "StructProperty"},
            {"bAccumulate", 0x60, "BoolProperty"},
        }};
    };

    struct FortQueryGenerator_ActorsAround
    {
        static constexpr std::string_view Name = "FortQueryGenerator_ActorsAround";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ActorsOfClass";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchedActorClass = 0x50;
            static constexpr std::uintptr_t GenerateOnlyActorsInRadius = 0x58;
            static constexpr std::uintptr_t SearchRadius = 0x90;
            static constexpr std::uintptr_t SearchCenter = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SearchedActorClass", 0x50, "ClassProperty"},
            {"GenerateOnlyActorsInRadius", 0x58, "StructProperty"},
            {"SearchRadius", 0x90, "StructProperty"},
            {"SearchCenter", 0xC8, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_Allies
    {
        static constexpr std::string_view Name = "FortQueryGenerator_Allies";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct FortQueryGenerator_AssignmentGoal
    {
        static constexpr std::string_view Name = "FortQueryGenerator_AssignmentGoal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct FortQueryGenerator_BuildingRifts
    {
        static constexpr std::string_view Name = "FortQueryGenerator_BuildingRifts";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct FortQueryGenerator_Buildings
    {
        static constexpr std::string_view Name = "FortQueryGenerator_Buildings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignmentIdentifier = 0x50;
            static constexpr std::uintptr_t AssignmentSettings = 0x80;
            static constexpr std::uintptr_t BuildingGridVolumeCenter = 0x88;
            static constexpr std::uintptr_t HorizontalBuildingCellRadius = 0x90;
            static constexpr std::uintptr_t BuildingCellsAbove = 0xC8;
            static constexpr std::uintptr_t BuildingCellsBelow = 0x100;
            static constexpr std::uintptr_t bIncludeWalls = 0x138;
            static constexpr std::uintptr_t bIncludeFloors = 0x170;
            static constexpr std::uintptr_t FloorPatternsToIgnore = 0x1A8;
            static constexpr std::uintptr_t bIncludeCenterCell = 0x1B8;
            static constexpr std::uintptr_t MaxBuildingActorsPerVolumeCenterToCollect = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"AssignmentIdentifier", 0x50, "StructProperty"},
            {"AssignmentSettings", 0x80, "ObjectProperty"},
            {"BuildingGridVolumeCenter", 0x88, "ClassProperty"},
            {"HorizontalBuildingCellRadius", 0x90, "StructProperty"},
            {"BuildingCellsAbove", 0xC8, "StructProperty"},
            {"BuildingCellsBelow", 0x100, "StructProperty"},
            {"bIncludeWalls", 0x138, "StructProperty"},
            {"bIncludeFloors", 0x170, "StructProperty"},
            {"FloorPatternsToIgnore", 0x1A8, "ArrayProperty"},
            {"bIncludeCenterCell", 0x1B8, "StructProperty"},
            {"MaxBuildingActorsPerVolumeCenterToCollect", 0x1F0, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_BuildingsOnCachedPath
    {
        static constexpr std::string_view Name = "FortQueryGenerator_BuildingsOnCachedPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedPathSource = 0x50;
            static constexpr std::uintptr_t bIncludeWalls = 0x58;
            static constexpr std::uintptr_t bIncludeFloors = 0x90;
            static constexpr std::uintptr_t bIncludeCenterCell = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CachedPathSource", 0x50, "ClassProperty"},
            {"bIncludeWalls", 0x58, "StructProperty"},
            {"bIncludeFloors", 0x90, "StructProperty"},
            {"bIncludeCenterCell", 0xC8, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_CompositeModifier
    {
        static constexpr std::string_view Name = "FortQueryGenerator_CompositeModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Generator = 0x50;
            static constexpr std::uintptr_t Modifiers = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Generator", 0x50, "ObjectProperty"},
            {"Modifiers", 0x58, "ArrayProperty"},
        }};
    };

    struct FortQueryGenerator_CoverPositionProvider
    {
        static constexpr std::string_view Name = "FortQueryGenerator_CoverPositionProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t CoverPositionProviderContext = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CoverPositionProviderContext", 0x50, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_DefendSpots
    {
        static constexpr std::string_view Name = "FortQueryGenerator_DefendSpots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryBoxCenterAndExtentsContext = 0x50;
            static constexpr std::uintptr_t bUseQueryBoxCenterAndExtentsContextAsFallback = 0x58;
            static constexpr std::uintptr_t VolumeActorsContext = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QueryBoxCenterAndExtentsContext", 0x50, "ClassProperty"},
            {"bUseQueryBoxCenterAndExtentsContextAsFallback", 0x58, "BoolProperty"},
            {"VolumeActorsContext", 0x60, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_EncounterTargets
    {
        static constexpr std::string_view Name = "FortQueryGenerator_EncounterTargets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct FortQueryGenerator_Enemies
    {
        static constexpr std::string_view Name = "FortQueryGenerator_Enemies";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t bPerceivedEnemiesOnly = 0x50;
            static constexpr std::uintptr_t bIncludePropagatedEnemies = 0x51;
            static constexpr std::uintptr_t bSleepCapableAIUsePerceivedEnemiesOnly = 0x52;
            static constexpr std::uintptr_t bIgnoreDBNOPawns = 0x53;
            static constexpr std::uintptr_t bIgnoreSleepingAIs = 0x54;
            static constexpr std::uintptr_t bIncludeMarkedSleepingAIs = 0x55;
            static constexpr std::uintptr_t bAddEnemiesFromAbilityRange = 0x56;
            static constexpr std::uintptr_t AbilityTags = 0x58;
            static constexpr std::uintptr_t DistanceTags = 0x78;
            static constexpr std::uintptr_t MaxTimeSincePerceived = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bPerceivedEnemiesOnly", 0x50, "BoolProperty"},
            {"bIncludePropagatedEnemies", 0x51, "BoolProperty"},
            {"bSleepCapableAIUsePerceivedEnemiesOnly", 0x52, "BoolProperty"},
            {"bIgnoreDBNOPawns", 0x53, "BoolProperty"},
            {"bIgnoreSleepingAIs", 0x54, "BoolProperty"},
            {"bIncludeMarkedSleepingAIs", 0x55, "BoolProperty"},
            {"bAddEnemiesFromAbilityRange", 0x56, "BoolProperty"},
            {"AbilityTags", 0x58, "StructProperty"},
            {"DistanceTags", 0x78, "StructProperty"},
            {"MaxTimeSincePerceived", 0x98, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_FloodFillAroundActors
    {
        static constexpr std::string_view Name = "FortQueryGenerator_FloodFillAroundActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryGenerator_FloodFillBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CenterContext = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CenterContext", 0x1D0, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_FloodFillAroundActors_Oriented
    {
        static constexpr std::string_view Name = "FortQueryGenerator_FloodFillAroundActors_Oriented";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryGenerator_FloodFillAroundActors";
        struct Offsets
        {
            static constexpr std::uintptr_t CenterContext = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CenterContext", 0x1D0, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_FloodFillAroundLocations
    {
        static constexpr std::string_view Name = "FortQueryGenerator_FloodFillAroundLocations";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryGenerator_FloodFillBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CenterContext = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CenterContext", 0x1D0, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_FloodFillAroundLocations_Oriented
    {
        static constexpr std::string_view Name = "FortQueryGenerator_FloodFillAroundLocations_Oriented";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryGenerator_FloodFillAroundLocations";
        struct Offsets
        {
            static constexpr std::uintptr_t CenterContext = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CenterContext", 0x1D0, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_FloodFillBase
    {
        static constexpr std::string_view Name = "FortQueryGenerator_FloodFillBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t MaximumNodeSearchProvider = 0x50;
            static constexpr std::uintptr_t MaximumSearchRadiusProvider = 0x88;
            static constexpr std::uintptr_t MinimumPathDistanceProvider = 0xC0;
            static constexpr std::uintptr_t UsePathDistanceAsSearchRadiusProvider = 0xF8;
            static constexpr std::uintptr_t PointDensityProvider = 0x130;
            static constexpr std::uintptr_t MaximumNumberOfPointProvider = 0x168;
            static constexpr std::uintptr_t FilterOverride = 0x1A0;
            static constexpr std::uintptr_t ProjectExtent = 0x1A8;
            static constexpr std::uintptr_t ExtraExcludeFlags = 0x1C0;
            static constexpr std::uintptr_t Behavior = 0x1C4;
            static constexpr std::uintptr_t NavDataOverrideContext = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MaximumNodeSearchProvider", 0x50, "StructProperty"},
            {"MaximumSearchRadiusProvider", 0x88, "StructProperty"},
            {"MinimumPathDistanceProvider", 0xC0, "StructProperty"},
            {"UsePathDistanceAsSearchRadiusProvider", 0xF8, "StructProperty"},
            {"PointDensityProvider", 0x130, "StructProperty"},
            {"MaximumNumberOfPointProvider", 0x168, "StructProperty"},
            {"FilterOverride", 0x1A0, "ClassProperty"},
            {"ProjectExtent", 0x1A8, "StructProperty"},
            {"ExtraExcludeFlags", 0x1C0, "StructProperty"},
            {"Behavior", 0x1C4, "EnumProperty"},
            {"NavDataOverrideContext", 0x1C8, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_GoalActorsOfClass
    {
        static constexpr std::string_view Name = "FortQueryGenerator_GoalActorsOfClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchedActorClass = 0x50;
            static constexpr std::uintptr_t SearchRadius = 0x58;
            static constexpr std::uintptr_t SearchCenter = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SearchedActorClass", 0x50, "ClassProperty"},
            {"SearchRadius", 0x58, "StructProperty"},
            {"SearchCenter", 0x90, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_GoalFromContext
    {
        static constexpr std::string_view Name = "FortQueryGenerator_GoalFromContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x50;
            static constexpr std::uintptr_t bActorAlwaysPerceived = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Context", 0x50, "ClassProperty"},
            {"bActorAlwaysPerceived", 0x58, "BoolProperty"},
        }};
    };

    struct FortQueryGenerator_GoalOnCircle
    {
        static constexpr std::string_view Name = "FortQueryGenerator_GoalOnCircle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_OnCircle";
        struct Offsets
        {
            static constexpr std::uintptr_t bIncludeCenterActorInGeneratedGoals = 0x258;
            static constexpr std::uintptr_t OptionalAssignmentSettings = 0x260;
            static constexpr std::uintptr_t OptionalAssignmentIdentifier = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIncludeCenterActorInGeneratedGoals", 0x258, "BoolProperty"},
            {"OptionalAssignmentSettings", 0x260, "ObjectProperty"},
            {"OptionalAssignmentIdentifier", 0x268, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_GoalPlayerPawns
    {
        static constexpr std::string_view Name = "FortQueryGenerator_GoalPlayerPawns";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnlyAthenaGameParticipants = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bOnlyAthenaGameParticipants", 0x50, "BoolProperty"},
        }};
    };

    struct FortQueryGenerator_GoalTrackableAIObjects
    {
        static constexpr std::string_view Name = "FortQueryGenerator_GoalTrackableAIObjects";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignmentIdentifier = 0x50;
            static constexpr std::uintptr_t SearchedActorClass = 0x80;
            static constexpr std::uintptr_t RequiredTag = 0x88;
            static constexpr std::uintptr_t SearchRadius = 0x90;
            static constexpr std::uintptr_t SearchCenter = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AssignmentIdentifier", 0x50, "StructProperty"},
            {"SearchedActorClass", 0x80, "ClassProperty"},
            {"RequiredTag", 0x88, "StructProperty"},
            {"SearchRadius", 0x90, "StructProperty"},
            {"SearchCenter", 0xC8, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_GridInBox
    {
        static constexpr std::string_view Name = "FortQueryGenerator_GridInBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxWidth = 0x90;
            static constexpr std::uintptr_t BoxLength = 0xC8;
            static constexpr std::uintptr_t SpaceBetween = 0x100;
            static constexpr std::uintptr_t MinimumPointsOnWidth = 0x138;
            static constexpr std::uintptr_t MinimumPointsOnLength = 0x170;
            static constexpr std::uintptr_t GenerateAround = 0x1A8;
            static constexpr std::uintptr_t BoxExtentsContext = 0x1B0;
            static constexpr std::uintptr_t BoxesContext = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"BoxWidth", 0x90, "StructProperty"},
            {"BoxLength", 0xC8, "StructProperty"},
            {"SpaceBetween", 0x100, "StructProperty"},
            {"MinimumPointsOnWidth", 0x138, "StructProperty"},
            {"MinimumPointsOnLength", 0x170, "StructProperty"},
            {"GenerateAround", 0x1A8, "ClassProperty"},
            {"BoxExtentsContext", 0x1B0, "ClassProperty"},
            {"BoxesContext", 0x1B8, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_GridInVolume
    {
        static constexpr std::string_view Name = "FortQueryGenerator_GridInVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t SpaceBetween = 0x90;
            static constexpr std::uintptr_t GenerateInVolume = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpaceBetween", 0x90, "StructProperty"},
            {"GenerateInVolume", 0xC8, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_HotspotSlots
    {
        static constexpr std::string_view Name = "FortQueryGenerator_HotspotSlots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerateAround = 0x50;
            static constexpr std::uintptr_t Radius = 0x58;
            static constexpr std::uintptr_t bUseTetherZone = 0x90;
            static constexpr std::uintptr_t HotspotClass = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GenerateAround", 0x50, "ClassProperty"},
            {"Radius", 0x58, "StructProperty"},
            {"bUseTetherZone", 0x90, "BoolProperty"},
            {"HotspotClass", 0x98, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_InfluenceMapPoints
    {
        static constexpr std::string_view Name = "FortQueryGenerator_InfluenceMapPoints";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t Density = 0x90;
            static constexpr std::uintptr_t bOnlyFlatSurface = 0xC8;
            static constexpr std::uintptr_t GenerateAround = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Density", 0x90, "StructProperty"},
            {"bOnlyFlatSurface", 0xC8, "BoolProperty"},
            {"GenerateAround", 0xD0, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_LootGoalsAthena
    {
        static constexpr std::string_view Name = "FortQueryGenerator_LootGoalsAthena";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignmentIdentifier = 0x50;
            static constexpr std::uintptr_t AssignmentSettings = 0x80;
            static constexpr std::uintptr_t HorizontalHalfExtents = 0x88;
            static constexpr std::uintptr_t VerticalHalfExtents = 0xC0;
            static constexpr std::uintptr_t SearchCenter = 0xF8;
            static constexpr std::uintptr_t bAvailableLootOnly = 0x100;
            static constexpr std::uintptr_t ExcludedAILootGameplayTags = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AssignmentIdentifier", 0x50, "StructProperty"},
            {"AssignmentSettings", 0x80, "ObjectProperty"},
            {"HorizontalHalfExtents", 0x88, "StructProperty"},
            {"VerticalHalfExtents", 0xC0, "StructProperty"},
            {"SearchCenter", 0xF8, "ClassProperty"},
            {"bAvailableLootOnly", 0x100, "BoolProperty"},
            {"ExcludedAILootGameplayTags", 0x108, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_MissionPlacementActors
    {
        static constexpr std::string_view Name = "FortQueryGenerator_MissionPlacementActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t MissionPlacementActorTagQuery = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MissionPlacementActorTagQuery", 0x50, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_MutatorActorQueryResults
    {
        static constexpr std::string_view Name = "FortQueryGenerator_MutatorActorQueryResults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct FortQueryGenerator_MutatorBaseQueryResults
    {
        static constexpr std::string_view Name = "FortQueryGenerator_MutatorBaseQueryResults";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct FortQueryGenerator_OffsetPosition
    {
        static constexpr std::string_view Name = "FortQueryGenerator_OffsetPosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t OffsettingContext = 0x90;
            static constexpr std::uintptr_t ReferenceContext = 0x98;
            static constexpr std::uintptr_t OffsetDistance = 0xA0;
            static constexpr std::uintptr_t MaxDistanceFromReference = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OffsettingContext", 0x90, "ClassProperty"},
            {"ReferenceContext", 0x98, "ClassProperty"},
            {"OffsetDistance", 0xA0, "StructProperty"},
            {"MaxDistanceFromReference", 0xD8, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_OnRectangle
    {
        static constexpr std::string_view Name = "FortQueryGenerator_OnRectangle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t RectangleWidth = 0x90;
            static constexpr std::uintptr_t RectangleLength = 0xC8;
            static constexpr std::uintptr_t SpacingMethod = 0x100;
            static constexpr std::uintptr_t NumberOfPointsOnWidth = 0x108;
            static constexpr std::uintptr_t NumberOfPointsOnLength = 0x140;
            static constexpr std::uintptr_t SpaceBetween = 0x178;
            static constexpr std::uintptr_t LocationContext = 0x1B0;
            static constexpr std::uintptr_t RotationContext = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"RectangleWidth", 0x90, "StructProperty"},
            {"RectangleLength", 0xC8, "StructProperty"},
            {"SpacingMethod", 0x100, "EnumProperty"},
            {"NumberOfPointsOnWidth", 0x108, "StructProperty"},
            {"NumberOfPointsOnLength", 0x140, "StructProperty"},
            {"SpaceBetween", 0x178, "StructProperty"},
            {"LocationContext", 0x1B0, "ClassProperty"},
            {"RotationContext", 0x1B8, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_OnSphere
    {
        static constexpr std::string_view Name = "FortQueryGenerator_OnSphere";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x90;
            static constexpr std::uintptr_t SliceCount = 0xC8;
            static constexpr std::uintptr_t StackCount = 0x100;
            static constexpr std::uintptr_t ScaleX = 0x138;
            static constexpr std::uintptr_t ScaleY = 0x170;
            static constexpr std::uintptr_t ScaleZ = 0x1A8;
            static constexpr std::uintptr_t LocationContext = 0x1E0;
            static constexpr std::uintptr_t RotationContext = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Radius", 0x90, "StructProperty"},
            {"SliceCount", 0xC8, "StructProperty"},
            {"StackCount", 0x100, "StructProperty"},
            {"ScaleX", 0x138, "StructProperty"},
            {"ScaleY", 0x170, "StructProperty"},
            {"ScaleZ", 0x1A8, "StructProperty"},
            {"LocationContext", 0x1E0, "ClassProperty"},
            {"RotationContext", 0x1E8, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_PerceivedActors
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PerceivedActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t bGenerateHostileActorGoal = 0x50;
            static constexpr std::uintptr_t HostileActorSettings = 0x58;
            static constexpr std::uintptr_t bGenerateNeutralActorGoal = 0x98;
            static constexpr std::uintptr_t NeutralActorSettings = 0xA0;
            static constexpr std::uintptr_t bGenerateFriendlyActorGoal = 0xE0;
            static constexpr std::uintptr_t FriendlyActorSettings = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bGenerateHostileActorGoal", 0x50, "BoolProperty"},
            {"HostileActorSettings", 0x58, "StructProperty"},
            {"bGenerateNeutralActorGoal", 0x98, "BoolProperty"},
            {"NeutralActorSettings", 0xA0, "StructProperty"},
            {"bGenerateFriendlyActorGoal", 0xE0, "BoolProperty"},
            {"FriendlyActorSettings", 0xE8, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_PointsAroundLine
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsAroundLine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerateAround = 0x90;
            static constexpr std::uintptr_t MaxPointsPerClusterLocation = 0x98;
            static constexpr std::uintptr_t ClusterRadius = 0xD0;
            static constexpr std::uintptr_t CurvesAroundLineAsset = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GenerateAround", 0x90, "ClassProperty"},
            {"MaxPointsPerClusterLocation", 0x98, "StructProperty"},
            {"ClusterRadius", 0xD0, "StructProperty"},
            {"CurvesAroundLineAsset", 0x108, "SoftObjectProperty"},
        }};
    };

    struct FortQueryGenerator_PointsFromNavGraph
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsFromNavGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t MinPathDistance = 0x90;
            static constexpr std::uintptr_t MaxPathDistance = 0xC8;
            static constexpr std::uintptr_t Density = 0x100;
            static constexpr std::uintptr_t ExploreDirectionYaw = 0x138;
            static constexpr std::uintptr_t ExploreDirection = 0x170;
            static constexpr std::uintptr_t ExploreAngleDot = 0x190;
            static constexpr std::uintptr_t ExploreInnerRadius = 0x198;
            static constexpr std::uintptr_t bFilterAllowBuildings = 0x1D0;
            static constexpr std::uintptr_t bFilterAllowClimbup = 0x1D0;
            static constexpr std::uintptr_t bFilterAllowDropdown = 0x1D0;
            static constexpr std::uintptr_t bFilterAllowTerrain = 0x1D0;
            static constexpr std::uintptr_t bLimitExplorationDirection = 0x1D0;
            static constexpr std::uintptr_t bOnlyFlatSurface = 0x1D0;
            static constexpr std::uintptr_t bUseHeightCheck = 0x1D0;
            static constexpr std::uintptr_t bUseParameterizedDirection = 0x1D0;
            static constexpr std::uintptr_t bFilterAllowSmash = 0x1D1;
            static constexpr std::uintptr_t PathDistanceFilterOperator = 0x1D4;
            static constexpr std::uintptr_t GenerateAround = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"MinPathDistance", 0x90, "StructProperty"},
            {"MaxPathDistance", 0xC8, "StructProperty"},
            {"Density", 0x100, "StructProperty"},
            {"ExploreDirectionYaw", 0x138, "StructProperty"},
            {"ExploreDirection", 0x170, "StructProperty"},
            {"ExploreAngleDot", 0x190, "FloatProperty"},
            {"ExploreInnerRadius", 0x198, "StructProperty"},
            {"bFilterAllowBuildings", 0x1D0, "BoolProperty"},
            {"bFilterAllowClimbup", 0x1D0, "BoolProperty"},
            {"bFilterAllowDropdown", 0x1D0, "BoolProperty"},
            {"bFilterAllowTerrain", 0x1D0, "BoolProperty"},
            {"bLimitExplorationDirection", 0x1D0, "BoolProperty"},
            {"bOnlyFlatSurface", 0x1D0, "BoolProperty"},
            {"bUseHeightCheck", 0x1D0, "BoolProperty"},
            {"bUseParameterizedDirection", 0x1D0, "BoolProperty"},
            {"bFilterAllowSmash", 0x1D1, "BoolProperty"},
            {"PathDistanceFilterOperator", 0x1D4, "ByteProperty"},
            {"GenerateAround", 0x1D8, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_PointsInCylinder
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsInCylinder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_Donut";
        struct Offsets
        {
            static constexpr std::uintptr_t CylinderHeightMin = 0x220;
            static constexpr std::uintptr_t CylinderHeightMax = 0x258;
            static constexpr std::uintptr_t SpaceBetweenSlices = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CylinderHeightMin", 0x220, "StructProperty"},
            {"CylinderHeightMax", 0x258, "StructProperty"},
            {"SpaceBetweenSlices", 0x290, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_PointsInVolume
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsInVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t NumberOfPoints = 0x50;
            static constexpr std::uintptr_t NavMeshToUse = 0x88;
            static constexpr std::uintptr_t GenerateIn = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumberOfPoints", 0x50, "StructProperty"},
            {"NavMeshToUse", 0x88, "ByteProperty"},
            {"GenerateIn", 0x90, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_PointsOnBuildingActors
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsOnBuildingActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundingBoxExtentXY = 0x90;
            static constexpr std::uintptr_t BoundingBoxExtentZ = 0xC8;
            static constexpr std::uintptr_t PointDensity = 0x100;
            static constexpr std::uintptr_t MaxGeneratedPoints = 0x138;
            static constexpr std::uintptr_t ActorLookupFilter = 0x170;
            static constexpr std::uintptr_t RandomChanceToSkip = 0x218;
            static constexpr std::uintptr_t GenerateAround = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BoundingBoxExtentXY", 0x90, "StructProperty"},
            {"BoundingBoxExtentZ", 0xC8, "StructProperty"},
            {"PointDensity", 0x100, "StructProperty"},
            {"MaxGeneratedPoints", 0x138, "StructProperty"},
            {"ActorLookupFilter", 0x170, "StructProperty"},
            {"RandomChanceToSkip", 0x218, "StructProperty"},
            {"GenerateAround", 0x250, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_PointsOnBuildingGrid
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsOnBuildingGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t HorizontalGridSize = 0x90;
            static constexpr std::uintptr_t VerticalGridSize = 0xC8;
            static constexpr std::uintptr_t bStartGridFromBottom = 0x100;
            static constexpr std::uintptr_t bUsePointInVerticalCenterOfCell = 0x101;
            static constexpr std::uintptr_t GenerateAround = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HorizontalGridSize", 0x90, "StructProperty"},
            {"VerticalGridSize", 0xC8, "StructProperty"},
            {"bStartGridFromBottom", 0x100, "BoolProperty"},
            {"bUsePointInVerticalCenterOfCell", 0x101, "BoolProperty"},
            {"GenerateAround", 0x108, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_PointsOnLine
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsOnLine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerateFrom = 0x90;
            static constexpr std::uintptr_t DistanceToFirstPoint = 0x98;
            static constexpr std::uintptr_t DistanceBetweenPoints = 0xD0;
            static constexpr std::uintptr_t MaxDistance = 0x108;
            static constexpr std::uintptr_t TraceData = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GenerateFrom", 0x90, "ClassProperty"},
            {"DistanceToFirstPoint", 0x98, "StructProperty"},
            {"DistanceBetweenPoints", 0xD0, "StructProperty"},
            {"MaxDistance", 0x108, "StructProperty"},
            {"TraceData", 0x140, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_PointsOnPathToCenter
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsOnPathToCenter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t CenterContext = 0x50;
            static constexpr std::uintptr_t MaximumNodeSearchProvider = 0x58;
            static constexpr std::uintptr_t MaximumSearchRadiusProvider = 0x90;
            static constexpr std::uintptr_t MinimumSearchDistanceProvider = 0xC8;
            static constexpr std::uintptr_t Behavior = 0x100;
            static constexpr std::uintptr_t PathCountProvider = 0x108;
            static constexpr std::uintptr_t MinimumPathStartDistanceProvider = 0x140;
            static constexpr std::uintptr_t MinimumDistanceBetweenPathsProvider = 0x178;
            static constexpr std::uintptr_t DistanceBetweenPointsOnPathProvider = 0x1B0;
            static constexpr std::uintptr_t ProjectExtent = 0x1E8;
            static constexpr std::uintptr_t NavDataOverrideContext = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CenterContext", 0x50, "ClassProperty"},
            {"MaximumNodeSearchProvider", 0x58, "StructProperty"},
            {"MaximumSearchRadiusProvider", 0x90, "StructProperty"},
            {"MinimumSearchDistanceProvider", 0xC8, "StructProperty"},
            {"Behavior", 0x100, "EnumProperty"},
            {"PathCountProvider", 0x108, "StructProperty"},
            {"MinimumPathStartDistanceProvider", 0x140, "StructProperty"},
            {"MinimumDistanceBetweenPathsProvider", 0x178, "StructProperty"},
            {"DistanceBetweenPointsOnPathProvider", 0x1B0, "StructProperty"},
            {"ProjectExtent", 0x1E8, "StructProperty"},
            {"NavDataOverrideContext", 0x200, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_PointsOnWaterShoreLine
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsOnWaterShoreLine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerateAround = 0x90;
            static constexpr std::uintptr_t CurvesAroundLineAsset = 0x98;
            static constexpr std::uintptr_t SegmentMaximumVerticalDegreeAngle = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GenerateAround", 0x90, "ClassProperty"},
            {"CurvesAroundLineAsset", 0x98, "SoftObjectProperty"},
            {"SegmentMaximumVerticalDegreeAngle", 0xB8, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_PointsOutsideBox
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsOutsideBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t SpaceBetween = 0x90;
            static constexpr std::uintptr_t NumberOfRingsAroundVolume = 0xC8;
            static constexpr std::uintptr_t ExtraXExtent = 0x100;
            static constexpr std::uintptr_t ExtraYExtent = 0x138;
            static constexpr std::uintptr_t ExtraZExtent = 0x170;
            static constexpr std::uintptr_t GenerateInBoxCenter = 0x1A8;
            static constexpr std::uintptr_t GenerateInBoxExtent = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SpaceBetween", 0x90, "StructProperty"},
            {"NumberOfRingsAroundVolume", 0xC8, "StructProperty"},
            {"ExtraXExtent", 0x100, "StructProperty"},
            {"ExtraYExtent", 0x138, "StructProperty"},
            {"ExtraZExtent", 0x170, "StructProperty"},
            {"GenerateInBoxCenter", 0x1A8, "ClassProperty"},
            {"GenerateInBoxExtent", 0x1B0, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_PropagatedEnemies
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PropagatedEnemies";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreDBNOPawns = 0x50;
            static constexpr std::uintptr_t bIgnoreSleepingAIs = 0x51;
            static constexpr std::uintptr_t bIncludeMarkedSleepingAIs = 0x52;
            static constexpr std::uintptr_t MaxTimeSincePropagated = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bIgnoreDBNOPawns", 0x50, "BoolProperty"},
            {"bIgnoreSleepingAIs", 0x51, "BoolProperty"},
            {"bIncludeMarkedSleepingAIs", 0x52, "BoolProperty"},
            {"MaxTimeSincePropagated", 0x58, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_RandomPointsInBoundingVolume
    {
        static constexpr std::string_view Name = "FortQueryGenerator_RandomPointsInBoundingVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerateIn = 0x90;
            static constexpr std::uintptr_t RandomPointsCount = 0x98;
            static constexpr std::uintptr_t ExtendBoundingVolumeBounds = 0xD0;
            static constexpr std::uintptr_t bAddRandomZValueFromBoundingVolume = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GenerateIn", 0x90, "ClassProperty"},
            {"RandomPointsCount", 0x98, "StructProperty"},
            {"ExtendBoundingVolumeBounds", 0xD0, "StructProperty"},
            {"bAddRandomZValueFromBoundingVolume", 0xE8, "BoolProperty"},
        }};
    };

    struct FortQueryGenerator_SpecificAssignmentGoals
    {
        static constexpr std::string_view Name = "FortQueryGenerator_SpecificAssignmentGoals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignmentIdentifier = 0x50;
            static constexpr std::uintptr_t AssignmentSettings = 0x80;
            static constexpr std::uintptr_t GoalProvider = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AssignmentIdentifier", 0x50, "StructProperty"},
            {"AssignmentSettings", 0x80, "ObjectProperty"},
            {"GoalProvider", 0x88, "ClassProperty"},
        }};
    };

    struct FortQueryGenerator_SquadMembers
    {
        static constexpr std::string_view Name = "FortQueryGenerator_SquadMembers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t LookingForHumanPlayers = 0x50;
            static constexpr std::uintptr_t LookingForPlayerBots = 0x88;
            static constexpr std::uintptr_t LookingForNpcs = 0xC0;
            static constexpr std::uintptr_t LookingForAiPawns = 0xF8;
            static constexpr std::uintptr_t IncludeSelf = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LookingForHumanPlayers", 0x50, "StructProperty"},
            {"LookingForPlayerBots", 0x88, "StructProperty"},
            {"LookingForNpcs", 0xC0, "StructProperty"},
            {"LookingForAiPawns", 0xF8, "StructProperty"},
            {"IncludeSelf", 0x130, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_TerrainDonut
    {
        static constexpr std::string_view Name = "FortQueryGenerator_TerrainDonut";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x50;
            static constexpr std::uintptr_t Radius = 0x58;
            static constexpr std::uintptr_t RadiusWidth = 0x90;
            static constexpr std::uintptr_t SpacingArc = 0xC8;
            static constexpr std::uintptr_t NumRings = 0x100;
            static constexpr std::uintptr_t bFilterAllowBuildings = 0x138;
            static constexpr std::uintptr_t bFilterAllowTerrain = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Center", 0x50, "ClassProperty"},
            {"Radius", 0x58, "StructProperty"},
            {"RadiusWidth", 0x90, "StructProperty"},
            {"SpacingArc", 0xC8, "StructProperty"},
            {"NumRings", 0x100, "StructProperty"},
            {"bFilterAllowBuildings", 0x138, "BoolProperty"},
            {"bFilterAllowTerrain", 0x138, "BoolProperty"},
        }};
    };

    struct FortQueryGenerator_TokenDefendSpots
    {
        static constexpr std::string_view Name = "FortQueryGenerator_TokenDefendSpots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenProviderContext = 0x50;
            static constexpr std::uintptr_t GameplayTagQuery = 0x58;
            static constexpr std::uintptr_t QuerierTagQuery = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TokenProviderContext", 0x50, "ClassProperty"},
            {"GameplayTagQuery", 0x58, "StructProperty"},
            {"QuerierTagQuery", 0xA0, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_TokenProviderPositions
    {
        static constexpr std::string_view Name = "FortQueryGenerator_TokenProviderPositions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenProviderContext = 0x50;
            static constexpr std::uintptr_t GameplayTagQuery = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TokenProviderContext", 0x50, "ClassProperty"},
            {"GameplayTagQuery", 0x58, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_TokenReservedPositions
    {
        static constexpr std::string_view Name = "FortQueryGenerator_TokenReservedPositions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorContext = 0x50;
            static constexpr std::uintptr_t GameplayTagQuery = 0x58;
            static constexpr std::uintptr_t MaximumDistanceFromQueryActorProvider = 0xA0;
            static constexpr std::uintptr_t MaximumDistanceFromQueryActor = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActorContext", 0x50, "ClassProperty"},
            {"GameplayTagQuery", 0x58, "StructProperty"},
            {"MaximumDistanceFromQueryActorProvider", 0xA0, "StructProperty"},
            {"MaximumDistanceFromQueryActor", 0xD8, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_UnfilteredTokenProviderPositions
    {
        static constexpr std::string_view Name = "FortQueryGenerator_UnfilteredTokenProviderPositions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenProviderContext = 0x50;
            static constexpr std::uintptr_t GameplayTagQuery = 0x58;
            static constexpr std::uintptr_t QuerierTagQuery = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TokenProviderContext", 0x50, "ClassProperty"},
            {"GameplayTagQuery", 0x58, "StructProperty"},
            {"QuerierTagQuery", 0xA0, "StructProperty"},
        }};
    };

    struct FortQueryGenerator_ValidSpawnRiftActors
    {
        static constexpr std::string_view Name = "FortQueryGenerator_ValidSpawnRiftActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t NumAIForGroup = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumAIForGroup", 0x50, "StructProperty"},
        }};
    };

    struct FortQueryItemType_BoxCenterAndExtent
    {
        static constexpr std::string_view Name = "FortQueryItemType_BoxCenterAndExtent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_VectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryItemType_PointOrSlot
    {
        static constexpr std::string_view Name = "FortQueryItemType_PointOrSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_Point";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryTest_ActorWithinMeleeRange
    {
        static constexpr std::string_view Name = "FortQueryTest_ActorWithinMeleeRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetContext = 0x1F8;
            static constexpr std::uintptr_t RequireAllTargets = 0x200;
            static constexpr std::uintptr_t TargetBoundsHeightBias = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetContext", 0x1F8, "ClassProperty"},
            {"RequireAllTargets", 0x200, "StructProperty"},
            {"TargetBoundsHeightBias", 0x238, "StructProperty"},
        }};
    };

    struct FortQueryTest_AssignmentTypeInterest
    {
        static constexpr std::string_view Name = "FortQueryTest_AssignmentTypeInterest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InvalidTypeStartInterest = 0x268;
            static constexpr std::uintptr_t InvalidTypeEndInterest = 0x2A0;
            static constexpr std::uintptr_t InvalidTypeTimeBeforeLerp = 0x2D8;
            static constexpr std::uintptr_t InvalidTypeLerpDuration = 0x310;
            static constexpr std::uintptr_t ValidTypeStartInterest = 0x348;
            static constexpr std::uintptr_t ValidTypeEndInterest = 0x380;
            static constexpr std::uintptr_t ValidTypeTimeBeforeLerp = 0x3B8;
            static constexpr std::uintptr_t ValidTypeLerpDuration = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"InvalidTypeStartInterest", 0x268, "StructProperty"},
            {"InvalidTypeEndInterest", 0x2A0, "StructProperty"},
            {"InvalidTypeTimeBeforeLerp", 0x2D8, "StructProperty"},
            {"InvalidTypeLerpDuration", 0x310, "StructProperty"},
            {"ValidTypeStartInterest", 0x348, "StructProperty"},
            {"ValidTypeEndInterest", 0x380, "StructProperty"},
            {"ValidTypeTimeBeforeLerp", 0x3B8, "StructProperty"},
            {"ValidTypeLerpDuration", 0x3F0, "StructProperty"},
        }};
    };

    struct FortQueryTest_BuildingCriteria
    {
        static constexpr std::string_view Name = "FortQueryTest_BuildingCriteria";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ScoreForGroundSupportedFloor = 0x268;
            static constexpr std::uintptr_t ScoreForBeingGroundSupported = 0x2A0;
            static constexpr std::uintptr_t ScoreForTraps = 0x2D8;
            static constexpr std::uintptr_t ScoreForWalls = 0x310;
            static constexpr std::uintptr_t ScoreForNavigableOpening = 0x348;
            static constexpr std::uintptr_t RootAssignmentID = 0x380;
            static constexpr std::uintptr_t bPreferCloserToRootAssignment = 0x3B0;
            static constexpr std::uintptr_t ScoreForDistanceFromClosestRootAssignmentGoal = 0x3E8;
            static constexpr std::uintptr_t MinDistanceForDistanceScoring = 0x420;
            static constexpr std::uintptr_t MaxDistanceForDistanceScoring = 0x458;
            static constexpr std::uintptr_t MaxHealthScore = 0x490;
            static constexpr std::uintptr_t bPreferHigherHealth = 0x4C8;
            static constexpr std::uintptr_t ClampMaxHealthValue = 0x500;
            static constexpr std::uintptr_t ClampMinHealthValue = 0x538;
            static constexpr std::uintptr_t bPreferHigherHealthPercentage = 0x570;
            static constexpr std::uintptr_t MaxHealthPercentageScore = 0x5A8;
            static constexpr std::uintptr_t bWantsBuildingRepairableByOwner = 0x5E0;
            static constexpr std::uintptr_t RepairableBuildingScore = 0x618;
            static constexpr std::uintptr_t NotRepairableBuildingScore = 0x650;
            static constexpr std::uintptr_t NeedsRepairBuildingScore = 0x688;
            static constexpr std::uintptr_t DoesntNeedsRepairBuildingScore = 0x6C0;
            static constexpr std::uintptr_t bWantsDamagedByFriendly = 0x6F8;
            static constexpr std::uintptr_t DamagedByFriendlyMaxLifespan = 0x730;
            static constexpr std::uintptr_t DamagedByFriendlyMinDamage = 0x768;
            static constexpr std::uintptr_t DamagedByFriendlyScore = 0x7A0;
            static constexpr std::uintptr_t bWantsDamagedByEnemy = 0x7D8;
            static constexpr std::uintptr_t DamagedByEnemyMaxLifespan = 0x810;
            static constexpr std::uintptr_t DamagedByEnemyMinDamage = 0x848;
            static constexpr std::uintptr_t DamagedByEnemyScore = 0x880;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"ScoreForGroundSupportedFloor", 0x268, "StructProperty"},
            {"ScoreForBeingGroundSupported", 0x2A0, "StructProperty"},
            {"ScoreForTraps", 0x2D8, "StructProperty"},
            {"ScoreForWalls", 0x310, "StructProperty"},
            {"ScoreForNavigableOpening", 0x348, "StructProperty"},
            {"RootAssignmentID", 0x380, "StructProperty"},
            {"bPreferCloserToRootAssignment", 0x3B0, "StructProperty"},
            {"ScoreForDistanceFromClosestRootAssignmentGoal", 0x3E8, "StructProperty"},
            {"MinDistanceForDistanceScoring", 0x420, "StructProperty"},
            {"MaxDistanceForDistanceScoring", 0x458, "StructProperty"},
            {"MaxHealthScore", 0x490, "StructProperty"},
            {"bPreferHigherHealth", 0x4C8, "StructProperty"},
            {"ClampMaxHealthValue", 0x500, "StructProperty"},
            {"ClampMinHealthValue", 0x538, "StructProperty"},
            {"bPreferHigherHealthPercentage", 0x570, "StructProperty"},
            {"MaxHealthPercentageScore", 0x5A8, "StructProperty"},
            {"bWantsBuildingRepairableByOwner", 0x5E0, "StructProperty"},
            {"RepairableBuildingScore", 0x618, "StructProperty"},
            {"NotRepairableBuildingScore", 0x650, "StructProperty"},
            {"NeedsRepairBuildingScore", 0x688, "StructProperty"},
            {"DoesntNeedsRepairBuildingScore", 0x6C0, "StructProperty"},
            {"bWantsDamagedByFriendly", 0x6F8, "StructProperty"},
            {"DamagedByFriendlyMaxLifespan", 0x730, "StructProperty"},
            {"DamagedByFriendlyMinDamage", 0x768, "StructProperty"},
            {"DamagedByFriendlyScore", 0x7A0, "StructProperty"},
            {"bWantsDamagedByEnemy", 0x7D8, "StructProperty"},
            {"DamagedByEnemyMaxLifespan", 0x810, "StructProperty"},
            {"DamagedByEnemyMinDamage", 0x848, "StructProperty"},
            {"DamagedByEnemyScore", 0x880, "StructProperty"},
        }};
    };

    struct FortQueryTest_CanAttackTarget
    {
        static constexpr std::string_view Name = "FortQueryTest_CanAttackTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_CanBeDamaged
    {
        static constexpr std::string_view Name = "FortQueryTest_CanBeDamaged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_CanHitWithGameplayAbility
    {
        static constexpr std::string_view Name = "FortQueryTest_CanHitWithGameplayAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t AIsUsingAbility = 0x1F8;
            static constexpr std::uintptr_t AbilityTargets = 0x200;
            static constexpr std::uintptr_t GameplayAbilityTag = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AIsUsingAbility", 0x1F8, "ClassProperty"},
            {"AbilityTargets", 0x200, "ClassProperty"},
            {"GameplayAbilityTag", 0x208, "StructProperty"},
        }};
    };

    struct FortQueryTest_CoverPosition
    {
        static constexpr std::string_view Name = "FortQueryTest_CoverPosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t CoverPositionProviderContext = 0x1F8;
            static constexpr std::uintptr_t TargetContext = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CoverPositionProviderContext", 0x1F8, "ClassProperty"},
            {"TargetContext", 0x200, "ClassProperty"},
        }};
    };

    struct FortQueryTest_CurieState
    {
        static constexpr std::string_view Name = "FortQueryTest_CurieState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t CurieStateQuery = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurieStateQuery", 0x1F8, "StructProperty"},
        }};
    };

    struct FortQueryTest_DecoyDistance
    {
        static constexpr std::string_view Name = "FortQueryTest_DecoyDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceTo = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DistanceTo", 0x1F8, "ClassProperty"},
        }};
    };

    struct FortQueryTest_DefendSpotCanShoot
    {
        static constexpr std::string_view Name = "FortQueryTest_DefendSpotCanShoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorContext = 0x1F8;
            static constexpr std::uintptr_t TraceCloseEnoughDistance = 0x200;
            static constexpr std::uintptr_t StandHeight = 0x238;
            static constexpr std::uintptr_t CrouchHeight = 0x270;
            static constexpr std::uintptr_t TraceType = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TargetActorContext", 0x1F8, "ClassProperty"},
            {"TraceCloseEnoughDistance", 0x200, "StructProperty"},
            {"StandHeight", 0x238, "StructProperty"},
            {"CrouchHeight", 0x270, "StructProperty"},
            {"TraceType", 0x2A8, "ByteProperty"},
        }};
    };

    struct FortQueryTest_DefendSpotProtectionDot
    {
        static constexpr std::string_view Name = "FortQueryTest_DefendSpotProtectionDot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActorContext = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetActorContext", 0x1F8, "ClassProperty"},
        }};
    };

    struct FortQueryTest_DeltaDistance
    {
        static constexpr std::string_view Name = "FortQueryTest_DeltaDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationProviderContext = 0x1F8;
            static constexpr std::uintptr_t bUseDistance2D = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocationProviderContext", 0x1F8, "ClassProperty"},
            {"bUseDistance2D", 0x200, "BoolProperty"},
        }};
    };

    struct FortQueryTest_DistanceBounded
    {
        static constexpr std::string_view Name = "FortQueryTest_DistanceBounded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t MeasurementType = 0x1F8;
            static constexpr std::uintptr_t bEnableUpperBound = 0x1F9;
            static constexpr std::uintptr_t UpperBound = 0x200;
            static constexpr std::uintptr_t bEnableLowerBound = 0x238;
            static constexpr std::uintptr_t LowerBound = 0x240;
            static constexpr std::uintptr_t ContextLocation = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MeasurementType", 0x1F8, "EnumProperty"},
            {"bEnableUpperBound", 0x1F9, "BoolProperty"},
            {"UpperBound", 0x200, "StructProperty"},
            {"bEnableLowerBound", 0x238, "BoolProperty"},
            {"LowerBound", 0x240, "StructProperty"},
            {"ContextLocation", 0x278, "ClassProperty"},
        }};
    };

    struct FortQueryTest_DistanceToActorBound
    {
        static constexpr std::string_view Name = "FortQueryTest_DistanceToActorBound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceTo = 0x1F8;
            static constexpr std::uintptr_t bUse2DDistance = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DistanceTo", 0x1F8, "ClassProperty"},
            {"bUse2DDistance", 0x200, "BoolProperty"},
        }};
    };

    struct FortQueryTest_DistanceToIndestructibleBuilding
    {
        static constexpr std::string_view Name = "FortQueryTest_DistanceToIndestructibleBuilding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct FortQueryTest_EnvironmentalDanger
    {
        static constexpr std::string_view Name = "FortQueryTest_EnvironmentalDanger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bUse3DBoundsCheck = 0x1F8;
            static constexpr std::uintptr_t DangerSourceActorRegistryTag = 0x1FC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUse3DBoundsCheck", 0x1F8, "BoolProperty"},
            {"DangerSourceActorRegistryTag", 0x1FC, "StructProperty"},
        }};
    };

    struct FortQueryTest_GameplayTagsPerDifficulty
    {
        static constexpr std::string_view Name = "FortQueryTest_GameplayTagsPerDifficulty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQueriesPerDifficulty = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagQueriesPerDifficulty", 0x1F8, "ArrayProperty"},
        }};
    };

    struct FortQueryTest_GoalActorDot
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalActorDot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LineATo = 0x268;
            static constexpr std::uintptr_t LineBTo = 0x270;
            static constexpr std::uintptr_t TestMode = 0x278;
            static constexpr std::uintptr_t bAbsoluteValue = 0x279;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LineATo", 0x268, "ClassProperty"},
            {"LineBTo", 0x270, "ClassProperty"},
            {"TestMode", 0x278, "EnumProperty"},
            {"bAbsoluteValue", 0x279, "BoolProperty"},
        }};
    };

    struct FortQueryTest_GoalActorTimeSinceSpawn
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalActorTimeSinceSpawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalBase
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalDiscouragement
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalDiscouragement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisableDiscouragementWhenUndermining = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DisableDiscouragementWhenUndermining", 0x268, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalDistance
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceMode = 0x268;
            static constexpr std::uintptr_t DistanceTo = 0x270;
            static constexpr std::uintptr_t TestMode = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DistanceMode", 0x268, "EnumProperty"},
            {"DistanceTo", 0x270, "ClassProperty"},
            {"TestMode", 0x278, "ByteProperty"},
        }};
    };

    struct FortQueryTest_GoalDistanceRanges
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalDistanceRanges";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceMode = 0x268;
            static constexpr std::uintptr_t DistanceTo = 0x270;
            static constexpr std::uintptr_t ScreeningTestMode = 0x278;
            static constexpr std::uintptr_t TestMode = 0x279;
            static constexpr std::uintptr_t GoalDistanceDataRanges = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DistanceMode", 0x268, "EnumProperty"},
            {"DistanceTo", 0x270, "ClassProperty"},
            {"ScreeningTestMode", 0x278, "ByteProperty"},
            {"TestMode", 0x279, "ByteProperty"},
            {"GoalDistanceDataRanges", 0x280, "ArrayProperty"},
        }};
    };

    struct FortQueryTest_GoalFrustrationDiscouragement
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalFrustrationDiscouragement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalGameplayTags
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalGameplayTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldLookupQueryByTag = 0x268;
            static constexpr std::uintptr_t TagQueryToMatch = 0x270;
            static constexpr std::uintptr_t QueryLookupTag = 0x2B8;
            static constexpr std::uintptr_t bShouldPassWhenQueryNotFound = 0x2BC;
            static constexpr std::uintptr_t PawnOwnerTagQuery = 0x2C0;
            static constexpr std::uintptr_t bRequireAllProvidedTagQueriesPass = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bShouldLookupQueryByTag", 0x268, "BoolProperty"},
            {"TagQueryToMatch", 0x270, "StructProperty"},
            {"QueryLookupTag", 0x2B8, "StructProperty"},
            {"bShouldPassWhenQueryNotFound", 0x2BC, "BoolProperty"},
            {"PawnOwnerTagQuery", 0x2C0, "StructProperty"},
            {"bRequireAllProvidedTagQueriesPass", 0x308, "BoolProperty"},
        }};
    };

    struct FortQueryTest_GoalMarkedByPlayer
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalMarkedByPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerTagQuery = 0x268;
            static constexpr std::uintptr_t OnlyConverterMarkedTargets = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OwnerTagQuery", 0x268, "StructProperty"},
            {"OnlyConverterMarkedTargets", 0x2B0, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalNumberOfAIAssigned
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalNumberOfAIAssigned";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TypeOfMatchToCount = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TypeOfMatchToCount", 0x268, "EnumProperty"},
        }};
    };

    struct FortQueryTest_GoalOverallDamageCaused
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalOverallDamageCaused";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalPickupFilter
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalPickupFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxLifetime = 0x268;
            static constexpr std::uintptr_t RequiredPickupSpawnSource = 0x26C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxLifetime", 0x268, "FloatProperty"},
            {"RequiredPickupSpawnSource", 0x26C, "EnumProperty"},
        }};
    };

    struct FortQueryTest_GoalProject
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalProject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectionData = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProjectionData", 0x268, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalStickiness
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalStickiness";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StartValueForGoal = 0x268;
            static constexpr std::uintptr_t EndValueForGoal = 0x2A0;
            static constexpr std::uintptr_t TimeBeforeValueLerp = 0x2D8;
            static constexpr std::uintptr_t ValueLerpDuration = 0x310;
            static constexpr std::uintptr_t ApplyStickinessToAllGoalsWithSameActor = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StartValueForGoal", 0x268, "StructProperty"},
            {"EndValueForGoal", 0x2A0, "StructProperty"},
            {"TimeBeforeValueLerp", 0x2D8, "StructProperty"},
            {"ValueLerpDuration", 0x310, "StructProperty"},
            {"ApplyStickinessToAllGoalsWithSameActor", 0x348, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalType
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_GoalWithinTetheredBounds
    {
        static constexpr std::string_view Name = "FortQueryTest_GoalWithinTetheredBounds";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_HasNearbyBuildings
    {
        static constexpr std::string_view Name = "FortQueryTest_HasNearbyBuildings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bIncludeCenter = 0x1F8;
            static constexpr std::uintptr_t bIncludeFloors = 0x1F8;
            static constexpr std::uintptr_t bIncludeFloorsAbove = 0x1F8;
            static constexpr std::uintptr_t bIncludeWalls = 0x1F8;
            static constexpr std::uintptr_t ExtentXY = 0x1FC;
            static constexpr std::uintptr_t ExtentZ = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIncludeCenter", 0x1F8, "BoolProperty"},
            {"bIncludeFloors", 0x1F8, "BoolProperty"},
            {"bIncludeFloorsAbove", 0x1F8, "BoolProperty"},
            {"bIncludeWalls", 0x1F8, "BoolProperty"},
            {"ExtentXY", 0x1FC, "IntProperty"},
            {"ExtentZ", 0x200, "IntProperty"},
        }};
    };

    struct FortQueryTest_HasNearbyEncounterGoals
    {
        static constexpr std::string_view Name = "FortQueryTest_HasNearbyEncounterGoals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnlyActiveEncounters = 0x1F8;
            static constexpr std::uintptr_t TestDistance = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOnlyActiveEncounters", 0x1F8, "BoolProperty"},
            {"TestDistance", 0x200, "StructProperty"},
        }};
    };

    struct FortQueryTest_Health
    {
        static constexpr std::string_view Name = "FortQueryTest_Health";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bUsePercentHealth = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUsePercentHealth", 0x1F8, "BoolProperty"},
        }};
    };

    struct FortQueryTest_HealthAndShield
    {
        static constexpr std::string_view Name = "FortQueryTest_HealthAndShield";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bConsiderHealth = 0x1F8;
            static constexpr std::uintptr_t HealthMin = 0x200;
            static constexpr std::uintptr_t HealthMax = 0x238;
            static constexpr std::uintptr_t bHealthAsPercent = 0x270;
            static constexpr std::uintptr_t bConsiderShield = 0x271;
            static constexpr std::uintptr_t ShieldMin = 0x278;
            static constexpr std::uintptr_t ShieldMax = 0x2B0;
            static constexpr std::uintptr_t bShieldAsPercent = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bConsiderHealth", 0x1F8, "BoolProperty"},
            {"HealthMin", 0x200, "StructProperty"},
            {"HealthMax", 0x238, "StructProperty"},
            {"bHealthAsPercent", 0x270, "BoolProperty"},
            {"bConsiderShield", 0x271, "BoolProperty"},
            {"ShieldMin", 0x278, "StructProperty"},
            {"ShieldMax", 0x2B0, "StructProperty"},
            {"bShieldAsPercent", 0x2E8, "BoolProperty"},
        }};
    };

    struct FortQueryTest_HotspotSlotOrientation
    {
        static constexpr std::string_view Name = "FortQueryTest_HotspotSlotOrientation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t FaceToward = 0x1F8;
            static constexpr std::uintptr_t DotThreshold = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FaceToward", 0x1F8, "ClassProperty"},
            {"DotThreshold", 0x200, "StructProperty"},
        }};
    };

    struct FortQueryTest_HotspotSlotState
    {
        static constexpr std::string_view Name = "FortQueryTest_HotspotSlotState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotState = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SlotState", 0x1F8, "EnumProperty"},
        }};
    };

    struct FortQueryTest_InfluenceScore
    {
        static constexpr std::string_view Name = "FortQueryTest_InfluenceScore";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct FortQueryTest_InsideAIBotLeash
    {
        static constexpr std::string_view Name = "FortQueryTest_InsideAIBotLeash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct FortQueryTest_InsideAthenaLeash
    {
        static constexpr std::string_view Name = "FortQueryTest_InsideAthenaLeash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t LeashToleranceXY = 0x1F8;
            static constexpr std::uintptr_t LeashToleranceZ = 0x230;
            static constexpr std::uintptr_t ContextOwner = 0x268;
            static constexpr std::uintptr_t SubFilteringMode = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LeashToleranceXY", 0x1F8, "StructProperty"},
            {"LeashToleranceZ", 0x230, "StructProperty"},
            {"ContextOwner", 0x268, "ClassProperty"},
            {"SubFilteringMode", 0x270, "EnumProperty"},
        }};
    };

    struct FortQueryTest_InsideAthenaSafeZone
    {
        static constexpr std::string_view Name = "FortQueryTest_InsideAthenaSafeZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseCurrentSafeZoneIndicatorRadius = 0x1F8;
            static constexpr std::uintptr_t bUseCurrentSafeZoneIndex = 0x1F9;
            static constexpr std::uintptr_t SafeZoneIndex = 0x200;
            static constexpr std::uintptr_t bNextSafeZone = 0x238;
            static constexpr std::uintptr_t bFastApproximateSafeZoneCheck = 0x239;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUseCurrentSafeZoneIndicatorRadius", 0x1F8, "BoolProperty"},
            {"bUseCurrentSafeZoneIndex", 0x1F9, "BoolProperty"},
            {"SafeZoneIndex", 0x200, "StructProperty"},
            {"bNextSafeZone", 0x238, "BoolProperty"},
            {"bFastApproximateSafeZoneCheck", 0x239, "BoolProperty"},
        }};
    };

    struct FortQueryTest_InsideBuilding
    {
        static constexpr std::string_view Name = "FortQueryTest_InsideBuilding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct FortQueryTest_InsideWater
    {
        static constexpr std::string_view Name = "FortQueryTest_InsideWater";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestRadius = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TestRadius", 0x1F8, "FloatProperty"},
        }};
    };

    struct FortQueryTest_IsCloseToHotspotSlot
    {
        static constexpr std::string_view Name = "FortQueryTest_IsCloseToHotspotSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t HotspotClass = 0x1F8;
            static constexpr std::uintptr_t Radius = 0x200;
            static constexpr std::uintptr_t bIgnoreItemsWithSlotData = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HotspotClass", 0x1F8, "ClassProperty"},
            {"Radius", 0x200, "StructProperty"},
            {"bIgnoreItemsWithSlotData", 0x238, "BoolProperty"},
        }};
    };

    struct FortQueryTest_IsCloseToPatrolWard
    {
        static constexpr std::string_view Name = "FortQueryTest_IsCloseToPatrolWard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t WardEffectTypeFilter = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WardEffectTypeFilter", 0x1F8, "EnumProperty"},
        }};
    };

    struct FortQueryTest_IsGoalForAssignment
    {
        static constexpr std::string_view Name = "FortQueryTest_IsGoalForAssignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bRetrieveRootAssignmentFromOwner = 0x1F8;
            static constexpr std::uintptr_t RootAssignmentID = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bRetrieveRootAssignmentFromOwner", 0x1F8, "BoolProperty"},
            {"RootAssignmentID", 0x200, "StructProperty"},
        }};
    };

    struct FortQueryTest_IsGoalHostile
    {
        static constexpr std::string_view Name = "FortQueryTest_IsGoalHostile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerTagQuery = 0x268;
            static constexpr std::uintptr_t EnemyPawnTagsToConsider = 0x2B0;
            static constexpr std::uintptr_t BuildingTagsToConsider = 0x2F8;
            static constexpr std::uintptr_t bConsiderDefenders = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OwnerTagQuery", 0x268, "StructProperty"},
            {"EnemyPawnTagsToConsider", 0x2B0, "StructProperty"},
            {"BuildingTagsToConsider", 0x2F8, "StructProperty"},
            {"bConsiderDefenders", 0x318, "BoolProperty"},
        }};
    };

    struct FortQueryTest_IsInAnyPlayerVisionCone
    {
        static constexpr std::string_view Name = "FortQueryTest_IsInAnyPlayerVisionCone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxDistance = 0x1F8;
            static constexpr std::uintptr_t FieldOfView = 0x230;
            static constexpr std::uintptr_t UseLineOfSight = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxDistance", 0x1F8, "StructProperty"},
            {"FieldOfView", 0x230, "StructProperty"},
            {"UseLineOfSight", 0x268, "StructProperty"},
        }};
    };

    struct FortQueryTest_IsInLeaderLOS
    {
        static constexpr std::string_view Name = "FortQueryTest_IsInLeaderLOS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerTagQuery = 0x1F8;
            static constexpr std::uintptr_t bRequireLOSRayCast = 0x240;
            static constexpr std::uintptr_t RayCastLeaderVerticalOffset = 0x244;
            static constexpr std::uintptr_t RayCastItemVerticalOffset = 0x248;
            static constexpr std::uintptr_t MinDotProduct = 0x24C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OwnerTagQuery", 0x1F8, "StructProperty"},
            {"bRequireLOSRayCast", 0x240, "BoolProperty"},
            {"RayCastLeaderVerticalOffset", 0x244, "FloatProperty"},
            {"RayCastItemVerticalOffset", 0x248, "FloatProperty"},
            {"MinDotProduct", 0x24C, "FloatProperty"},
        }};
    };

    struct FortQueryTest_IsNearEnemies
    {
        static constexpr std::string_view Name = "FortQueryTest_IsNearEnemies";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryLocationContext = 0x1F8;
            static constexpr std::uintptr_t ItemVerticalOffset = 0x200;
            static constexpr std::uintptr_t EnemyVerticalOffset = 0x204;
            static constexpr std::uintptr_t Weight_Distance = 0x208;
            static constexpr std::uintptr_t MinDist = 0x20C;
            static constexpr std::uintptr_t MaxDist = 0x210;
            static constexpr std::uintptr_t Weight_LOS = 0x214;
            static constexpr std::uintptr_t MaxDistToConsiderLOS = 0x218;
            static constexpr std::uintptr_t bDisallowDirectLOS = 0x21C;
            static constexpr std::uintptr_t DirectLOSFOV = 0x220;
            static constexpr std::uintptr_t bPreferTeamLocation = 0x224;
            static constexpr std::uintptr_t Weight_TeamLocation = 0x228;
            static constexpr std::uintptr_t MinSpawnDistFromTeammate = 0x22C;
            static constexpr std::uintptr_t MaxDistForTeammateInfluenceSquared = 0x230;
            static constexpr std::uintptr_t bPreferQuerierLocation = 0x234;
            static constexpr std::uintptr_t Weight_QuerierLocation = 0x238;
            static constexpr std::uintptr_t MaxInfluenceDistFromQuerier = 0x23C;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"QueryLocationContext", 0x1F8, "ClassProperty"},
            {"ItemVerticalOffset", 0x200, "FloatProperty"},
            {"EnemyVerticalOffset", 0x204, "FloatProperty"},
            {"Weight_Distance", 0x208, "FloatProperty"},
            {"MinDist", 0x20C, "FloatProperty"},
            {"MaxDist", 0x210, "FloatProperty"},
            {"Weight_LOS", 0x214, "FloatProperty"},
            {"MaxDistToConsiderLOS", 0x218, "FloatProperty"},
            {"bDisallowDirectLOS", 0x21C, "BoolProperty"},
            {"DirectLOSFOV", 0x220, "FloatProperty"},
            {"bPreferTeamLocation", 0x224, "BoolProperty"},
            {"Weight_TeamLocation", 0x228, "FloatProperty"},
            {"MinSpawnDistFromTeammate", 0x22C, "FloatProperty"},
            {"MaxDistForTeammateInfluenceSquared", 0x230, "FloatProperty"},
            {"bPreferQuerierLocation", 0x234, "BoolProperty"},
            {"Weight_QuerierLocation", 0x238, "FloatProperty"},
            {"MaxInfluenceDistFromQuerier", 0x23C, "FloatProperty"},
        }};
    };

    struct FortQueryTest_IsObstructed
    {
        static constexpr std::string_view Name = "FortQueryTest_IsObstructed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest_Trace";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideContextLocationXWithItemLocationX = 0x2E0;
            static constexpr std::uintptr_t OverrideContextLocationYWithItemLocationY = 0x318;
            static constexpr std::uintptr_t OverrideContextLocationZWithItemLocationZ = 0x350;
            static constexpr std::uintptr_t OverrideItemLocationZWithContextLocationZ = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OverrideContextLocationXWithItemLocationX", 0x2E0, "StructProperty"},
            {"OverrideContextLocationYWithItemLocationY", 0x318, "StructProperty"},
            {"OverrideContextLocationZWithItemLocationZ", 0x350, "StructProperty"},
            {"OverrideItemLocationZWithContextLocationZ", 0x388, "StructProperty"},
        }};
    };

    struct FortQueryTest_IsObstructedOverlap
    {
        static constexpr std::string_view Name = "FortQueryTest_IsObstructedOverlap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest_Trace";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideContextLocationXWithItemLocationX = 0x2E0;
            static constexpr std::uintptr_t OverrideContextLocationYWithItemLocationY = 0x318;
            static constexpr std::uintptr_t OverrideContextLocationZWithItemLocationZ = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OverrideContextLocationXWithItemLocationX", 0x2E0, "StructProperty"},
            {"OverrideContextLocationYWithItemLocationY", 0x318, "StructProperty"},
            {"OverrideContextLocationZWithItemLocationZ", 0x350, "StructProperty"},
        }};
    };

    struct FortQueryTest_LocationSynchronizer_IsLocationReserved
    {
        static constexpr std::string_view Name = "FortQueryTest_LocationSynchronizer_IsLocationReserved";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtentsContext = 0x1F8;
            static constexpr std::uintptr_t ShouldUseOwnersExtents = 0x200;
            static constexpr std::uintptr_t IsHardReservationCheck = 0x238;
            static constexpr std::uintptr_t ExtentsScalingRatio = 0x270;
            static constexpr std::uintptr_t ReservationOwnersToIgnoreContext = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExtentsContext", 0x1F8, "ClassProperty"},
            {"ShouldUseOwnersExtents", 0x200, "StructProperty"},
            {"IsHardReservationCheck", 0x238, "StructProperty"},
            {"ExtentsScalingRatio", 0x270, "StructProperty"},
            {"ReservationOwnersToIgnoreContext", 0x2A8, "ClassProperty"},
        }};
    };

    struct FortQueryTest_LocationSynchronizer_IslocationPenalized
    {
        static constexpr std::string_view Name = "FortQueryTest_LocationSynchronizer_IslocationPenalized";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtentsContext = 0x1F8;
            static constexpr std::uintptr_t ShouldUseOwnersExtents = 0x200;
            static constexpr std::uintptr_t ExtentsScalingRatio = 0x238;
            static constexpr std::uintptr_t ReservationOwnersRequiredContext = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExtentsContext", 0x1F8, "ClassProperty"},
            {"ShouldUseOwnersExtents", 0x200, "StructProperty"},
            {"ExtentsScalingRatio", 0x238, "StructProperty"},
            {"ReservationOwnersRequiredContext", 0x270, "ClassProperty"},
        }};
    };

    struct FortQueryTest_LocationSynchronizer_TimeLocationReserved
    {
        static constexpr std::string_view Name = "FortQueryTest_LocationSynchronizer_TimeLocationReserved";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtentsContext = 0x1F8;
            static constexpr std::uintptr_t ShouldUseOwnersExtents = 0x200;
            static constexpr std::uintptr_t ExtentsScalingRatio = 0x238;
            static constexpr std::uintptr_t ReservationOwnersRequiredContext = 0x270;
            static constexpr std::uintptr_t NoReservationResult = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExtentsContext", 0x1F8, "ClassProperty"},
            {"ShouldUseOwnersExtents", 0x200, "StructProperty"},
            {"ExtentsScalingRatio", 0x238, "StructProperty"},
            {"ReservationOwnersRequiredContext", 0x270, "ClassProperty"},
            {"NoReservationResult", 0x278, "EnumProperty"},
        }};
    };

    struct FortQueryTest_LocationSynchronizer_TimeLocationUnreserved
    {
        static constexpr std::string_view Name = "FortQueryTest_LocationSynchronizer_TimeLocationUnreserved";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtentsContext = 0x1F8;
            static constexpr std::uintptr_t ShouldUseOwnersExtents = 0x200;
            static constexpr std::uintptr_t ExtentsScalingRatio = 0x238;
            static constexpr std::uintptr_t ReservationOwnersRequiredContext = 0x270;
            static constexpr std::uintptr_t NoReservationResult = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExtentsContext", 0x1F8, "ClassProperty"},
            {"ShouldUseOwnersExtents", 0x200, "StructProperty"},
            {"ExtentsScalingRatio", 0x238, "StructProperty"},
            {"ReservationOwnersRequiredContext", 0x270, "ClassProperty"},
            {"NoReservationResult", 0x278, "EnumProperty"},
        }};
    };

    struct FortQueryTest_MissionGameplayTagMatch
    {
        static constexpr std::string_view Name = "FortQueryTest_MissionGameplayTagMatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t MissionPlacementActorTagQuery = 0x1F8;
            static constexpr std::uintptr_t GameplayTagsToMatch = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MissionPlacementActorTagQuery", 0x1F8, "StructProperty"},
            {"GameplayTagsToMatch", 0x240, "StructProperty"},
        }};
    };

    struct FortQueryTest_MissionSameMap
    {
        static constexpr std::string_view Name = "FortQueryTest_MissionSameMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t MissionPlacementActorTagQuery = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MissionPlacementActorTagQuery", 0x1F8, "StructProperty"},
        }};
    };

    struct FortQueryTest_NavGraphDistance
    {
        static constexpr std::string_view Name = "FortQueryTest_NavGraphDistance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceTo = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DistanceTo", 0x1F8, "ClassProperty"},
        }};
    };

    struct FortQueryTest_NavmeshRaycast
    {
        static constexpr std::string_view Name = "FortQueryTest_NavmeshRaycast";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t ShouldRaycastToContext = 0x1F8;
            static constexpr std::uintptr_t FilterOutDifferentFloors = 0x230;
            static constexpr std::uintptr_t RaycastContext = 0x268;
            static constexpr std::uintptr_t NavigationFilterOverride = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShouldRaycastToContext", 0x1F8, "StructProperty"},
            {"FilterOutDifferentFloors", 0x230, "StructProperty"},
            {"RaycastContext", 0x268, "ClassProperty"},
            {"NavigationFilterOverride", 0x270, "ClassProperty"},
        }};
    };

    struct FortQueryTest_OnFlatSurface
    {
        static constexpr std::string_view Name = "FortQueryTest_OnFlatSurface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x1F8;
            static constexpr std::uintptr_t ToleranceZ = 0x1FC;
            static constexpr std::uintptr_t TraceOffsetUp = 0x200;
            static constexpr std::uintptr_t TraceOffsetDown = 0x204;
            static constexpr std::uintptr_t NumberOfIteration = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Radius", 0x1F8, "FloatProperty"},
            {"ToleranceZ", 0x1FC, "FloatProperty"},
            {"TraceOffsetUp", 0x200, "FloatProperty"},
            {"TraceOffsetDown", 0x204, "FloatProperty"},
            {"NumberOfIteration", 0x208, "UInt32Property"},
        }};
    };

    struct FortQueryTest_OnFlatSurfaceNoNavMesh
    {
        static constexpr std::string_view Name = "FortQueryTest_OnFlatSurfaceNoNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x1F8;
            static constexpr std::uintptr_t ZTolerance = 0x1FC;
            static constexpr std::uintptr_t NormalTolerance = 0x200;
            static constexpr std::uintptr_t TraceOffset = 0x204;
            static constexpr std::uintptr_t ActorClassesToIgnoreInTrace = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Radius", 0x1F8, "FloatProperty"},
            {"ZTolerance", 0x1FC, "FloatProperty"},
            {"NormalTolerance", 0x200, "FloatProperty"},
            {"TraceOffset", 0x204, "FloatProperty"},
            {"ActorClassesToIgnoreInTrace", 0x208, "ArrayProperty"},
        }};
    };

    struct FortQueryTest_PathfindingBatch
    {
        static constexpr std::string_view Name = "FortQueryTest_PathfindingBatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest_PathfindingBatch";
        struct Offsets
        {
            static constexpr std::uintptr_t NavFilterTag = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NavFilterTag", 0x2C0, "StructProperty"},
        }};
    };

    struct FortQueryTest_PawnHealth
    {
        static constexpr std::string_view Name = "FortQueryTest_PawnHealth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bUsePercentHealth = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUsePercentHealth", 0x268, "BoolProperty"},
        }};
    };

    struct FortQueryTest_PawnIsDBNO
    {
        static constexpr std::string_view Name = "FortQueryTest_PawnIsDBNO";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bScoreEncounterGoals = 0x1F8;
            static constexpr std::uintptr_t bScoreEnemies = 0x1F8;
            static constexpr std::uintptr_t bScoreSpecificAssignments = 0x1F8;
            static constexpr std::uintptr_t bScoreWorldGoals = 0x1F8;
            static constexpr std::uintptr_t AssignmentIDs = 0x200;
            static constexpr std::uintptr_t ProhibitedAssignmentIDs = 0x210;
            static constexpr std::uintptr_t GoalActorTagQuery = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bScoreEncounterGoals", 0x1F8, "BoolProperty"},
            {"bScoreEnemies", 0x1F8, "BoolProperty"},
            {"bScoreSpecificAssignments", 0x1F8, "BoolProperty"},
            {"bScoreWorldGoals", 0x1F8, "BoolProperty"},
            {"AssignmentIDs", 0x200, "ArrayProperty"},
            {"ProhibitedAssignmentIDs", 0x210, "ArrayProperty"},
            {"GoalActorTagQuery", 0x220, "StructProperty"},
        }};
    };

    struct FortQueryTest_PerceptionAge
    {
        static constexpr std::string_view Name = "FortQueryTest_PerceptionAge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t Sense = 0x1F8;
            static constexpr std::uintptr_t SenseClass = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sense", 0x1F8, "ByteProperty"},
            {"SenseClass", 0x200, "ClassProperty"},
        }};
    };

    struct FortQueryTest_PerceptionAll
    {
        static constexpr std::string_view Name = "FortQueryTest_PerceptionAll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SenseScores = 0x268;
            static constexpr std::uintptr_t AdditionalSenseScores = 0x3B8;
            static constexpr std::uintptr_t MinSenseAge = 0x3C8;
            static constexpr std::uintptr_t MaxSenseAge = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SenseScores", 0x268, "StructProperty"},
            {"AdditionalSenseScores", 0x3B8, "MapProperty"},
            {"MinSenseAge", 0x3C8, "StructProperty"},
            {"MaxSenseAge", 0x400, "StructProperty"},
        }};
    };

    struct FortQueryTest_PerceptionExists
    {
        static constexpr std::string_view Name = "FortQueryTest_PerceptionExists";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t Sense = 0x1F8;
            static constexpr std::uintptr_t SenseClass = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sense", 0x1F8, "ByteProperty"},
            {"SenseClass", 0x200, "ClassProperty"},
        }};
    };

    struct FortQueryTest_PickupDropper
    {
        static constexpr std::string_view Name = "FortQueryTest_PickupDropper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueConverterDroppedPickup = 0x268;
            static constexpr std::uintptr_t ValueOtherDroppedPickupInitial = 0x2A0;
            static constexpr std::uintptr_t ValueOtherDroppedPickupFinal = 0x2D8;
            static constexpr std::uintptr_t TimeOtherDroppedPickupFinal = 0x310;
            static constexpr std::uintptr_t LerpFromInitialToFinal = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ValueConverterDroppedPickup", 0x268, "StructProperty"},
            {"ValueOtherDroppedPickupInitial", 0x2A0, "StructProperty"},
            {"ValueOtherDroppedPickupFinal", 0x2D8, "StructProperty"},
            {"TimeOtherDroppedPickupFinal", 0x310, "StructProperty"},
            {"LerpFromInitialToFinal", 0x348, "StructProperty"},
        }};
    };

    struct FortQueryTest_PointInBuildingFoundation
    {
        static constexpr std::string_view Name = "FortQueryTest_PointInBuildingFoundation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingFoundationContext = 0x1F8;
            static constexpr std::uintptr_t BuildingFoundationClass = 0x200;
            static constexpr std::uintptr_t BoundingBoxScale = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BuildingFoundationContext", 0x1F8, "ClassProperty"},
            {"BuildingFoundationClass", 0x200, "ClassProperty"},
            {"BoundingBoxScale", 0x208, "StructProperty"},
        }};
    };

    struct FortQueryTest_PrimaryAssignment
    {
        static constexpr std::string_view Name = "FortQueryTest_PrimaryAssignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQueryTest_GoalBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseItemActorLocation = 0x268;
            static constexpr std::uintptr_t DistanceClose = 0x270;
            static constexpr std::uintptr_t DistanceFar = 0x2A8;
            static constexpr std::uintptr_t PercentValueClose = 0x2E0;
            static constexpr std::uintptr_t PercentValueRegular = 0x318;
            static constexpr std::uintptr_t PercentValueFar = 0x350;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bUseItemActorLocation", 0x268, "BoolProperty"},
            {"DistanceClose", 0x270, "StructProperty"},
            {"DistanceFar", 0x2A8, "StructProperty"},
            {"PercentValueClose", 0x2E0, "StructProperty"},
            {"PercentValueRegular", 0x318, "StructProperty"},
            {"PercentValueFar", 0x350, "StructProperty"},
        }};
    };

    struct FortQueryTest_ProjectOnNavMesh
    {
        static constexpr std::string_view Name = "FortQueryTest_ProjectOnNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct FortQueryTest_Random
    {
        static constexpr std::string_view Name = "FortQueryTest_Random";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseRandomSeedForAI = 0x1F8;
            static constexpr std::uintptr_t bUseRandomSeedForOthers = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseRandomSeedForAI", 0x1F8, "BoolProperty"},
            {"bUseRandomSeedForOthers", 0x1F8, "BoolProperty"},
        }};
    };

    struct FortQueryTest_TowardNextAthenaSafeZone
    {
        static constexpr std::string_view Name = "FortQueryTest_TowardNextAthenaSafeZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t SafeZoneIndex = 0x1F8;
            static constexpr std::uintptr_t bCheckAcceptanceAngleTowardNextCenter = 0x230;
            static constexpr std::uintptr_t AcceptanceAngleTowardNextCenter = 0x234;
            static constexpr std::uintptr_t ExclusionSafeZoneIndex = 0x238;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SafeZoneIndex", 0x1F8, "StructProperty"},
            {"bCheckAcceptanceAngleTowardNextCenter", 0x230, "BoolProperty"},
            {"AcceptanceAngleTowardNextCenter", 0x234, "FloatProperty"},
            {"ExclusionSafeZoneIndex", 0x238, "ArrayProperty"},
        }};
    };

    struct FortQueryTest_ValidSurface
    {
        static constexpr std::string_view Name = "FortQueryTest_ValidSurface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x1F8;
            static constexpr std::uintptr_t TraceOffsetUp = 0x230;
            static constexpr std::uintptr_t TraceOffsetDown = 0x268;
            static constexpr std::uintptr_t TraceCollisionChannel = 0x2A0;
            static constexpr std::uintptr_t FlatSurfaceToleranceZ = 0x2A8;
            static constexpr std::uintptr_t SurfaceMaterials = 0x2E0;
            static constexpr std::uintptr_t bAreSurfaceMaterialsValid = 0x2F0;
            static constexpr std::uintptr_t ValidHitActorClasses = 0x2F8;
            static constexpr std::uintptr_t InvalidHitActorClasses = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Radius", 0x1F8, "StructProperty"},
            {"TraceOffsetUp", 0x230, "StructProperty"},
            {"TraceOffsetDown", 0x268, "StructProperty"},
            {"TraceCollisionChannel", 0x2A0, "ByteProperty"},
            {"FlatSurfaceToleranceZ", 0x2A8, "StructProperty"},
            {"SurfaceMaterials", 0x2E0, "ArrayProperty"},
            {"bAreSurfaceMaterialsValid", 0x2F0, "BoolProperty"},
            {"ValidHitActorClasses", 0x2F8, "ArrayProperty"},
            {"InvalidHitActorClasses", 0x308, "ArrayProperty"},
        }};
    };

    struct FortQueryTest_VerticalAngle
    {
        static constexpr std::string_view Name = "FortQueryTest_VerticalAngle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t AngleTo = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AngleTo", 0x1F8, "ClassProperty"},
        }};
    };

    struct FortQueryTest_WithinHotfixVolumeBounds
    {
        static constexpr std::string_view Name = "FortQueryTest_WithinHotfixVolumeBounds";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundsTable = 0x1F8;
            static constexpr std::uintptr_t BoundsExtentBuffer = 0x200;
            static constexpr std::uintptr_t bXYOnly = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BoundsTable", 0x1F8, "ObjectProperty"},
            {"BoundsExtentBuffer", 0x200, "StructProperty"},
            {"bXYOnly", 0x218, "BoolProperty"},
        }};
    };

    struct FortQueryTest_WithinTaggedArea
    {
        static constexpr std::string_view Name = "FortQueryTest_WithinTaggedArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQuery = 0x1F8;
            static constexpr std::uintptr_t AreaExtentBuffer = 0x240;
            static constexpr std::uintptr_t bAssumeInfiniteHeightForArea = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TagQuery", 0x1F8, "StructProperty"},
            {"AreaExtentBuffer", 0x240, "StructProperty"},
            {"bAssumeInfiniteHeightForArea", 0x258, "BoolProperty"},
        }};
    };

    struct FortStateTreeConditionSchema
    {
        static constexpr std::string_view Name = "FortStateTreeConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortStateTreeTeamMembersWatcherTaskInstanceData
    {
        static constexpr std::string_view Name = "FortStateTreeTeamMembersWatcherTaskInstanceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Pawn = 0x28;
            static constexpr std::uintptr_t bIncludeSelf = 0x30;
            static constexpr std::uintptr_t OnTeamModified = 0x34;
            static constexpr std::uintptr_t OnTeamIndexChanged = 0x44;
            static constexpr std::uintptr_t OnTeamMemberAdded = 0x54;
            static constexpr std::uintptr_t OnTeamMemberRemoved = 0x64;
            static constexpr std::uintptr_t TeamMemberPlayerStates = 0x78;
            static constexpr std::uintptr_t TeamMemberPlayerControllers = 0x88;
            static constexpr std::uintptr_t PlayerState = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Pawn", 0x28, "ObjectProperty"},
            {"bIncludeSelf", 0x30, "BoolProperty"},
            {"OnTeamModified", 0x34, "StructProperty"},
            {"OnTeamIndexChanged", 0x44, "StructProperty"},
            {"OnTeamMemberAdded", 0x54, "StructProperty"},
            {"OnTeamMemberRemoved", 0x64, "StructProperty"},
            {"TeamMemberPlayerStates", 0x78, "ArrayProperty"},
            {"TeamMemberPlayerControllers", 0x88, "ArrayProperty"},
            {"PlayerState", 0x98, "ObjectProperty"},
        }};
    };

    struct FortTokenGenerator_TokenHintPositions
    {
        static constexpr std::string_view Name = "FortTokenGenerator_TokenHintPositions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Center = 0x50;
            static constexpr std::uintptr_t MaximumDistanceProvider = 0x58;
            static constexpr std::uintptr_t HintPositionVerticalOffsetProvider = 0x90;
            static constexpr std::uintptr_t RequiredTagQuery = 0xC8;
            static constexpr std::uintptr_t MaximumDistance = 0x110;
            static constexpr std::uintptr_t HintPositionVerticalOffset = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Center", 0x50, "ClassProperty"},
            {"MaximumDistanceProvider", 0x58, "StructProperty"},
            {"HintPositionVerticalOffsetProvider", 0x90, "StructProperty"},
            {"RequiredTagQuery", 0xC8, "StructProperty"},
            {"MaximumDistance", 0x110, "StructProperty"},
            {"HintPositionVerticalOffset", 0x138, "StructProperty"},
        }};
    };

    struct PFWNPCReactions_Container
    {
        static constexpr std::string_view Name = "PFWNPCReactions_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct PFWNPCReactions_FilteredListContainer
    {
        static constexpr std::string_view Name = "PFWNPCReactions_FilteredListContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkFilteredListContainer";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PFWNPCReactions_Module
    {
        static constexpr std::string_view Name = "PFWNPCReactions_Module";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct PFWNPCReactions_Trigger
    {
        static constexpr std::string_view Name = "PFWNPCReactions_Trigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkSaveTrigger_Manual";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
