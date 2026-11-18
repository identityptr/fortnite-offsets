#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FigureCharacterNativeRuntime
{
    struct JunoAccountItemDefinitionOverrideExtension
    {
        static constexpr std::string_view Name = "JunoAccountItemDefinitionOverrideExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameFeatureActionMultipleAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAccountItemDefinitionOverrideManager
    {
        static constexpr std::string_view Name = "JunoAccountItemDefinitionOverrideManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoHeroDefinition = 0x30;
            static constexpr std::uintptr_t DefaultCharacters = 0x38;
            static constexpr std::uintptr_t PreviewActorClasses = 0x40;
            static constexpr std::uintptr_t GameplayTagParentsToRemoveFromOverrides = 0x50;
            static constexpr std::uintptr_t GameplayTagsToAdd = 0x60;
            static constexpr std::uintptr_t CosmeticsMarkupGameplayTagsToAllow = 0x70;
            static constexpr std::uintptr_t CosmeticsProhibitedByHotfix = 0x80;
            static constexpr std::uintptr_t Overrides = 0x90;
            static constexpr std::uintptr_t bCheckContextForTagQuery = 0xB0;
            static constexpr std::uintptr_t bEnabledWhenTagsNotSupported = 0xB0;
            static constexpr std::uintptr_t ContextTagQuery = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"JunoHeroDefinition", 0x30, "ObjectProperty"},
            {"DefaultCharacters", 0x38, "ObjectProperty"},
            {"PreviewActorClasses", 0x40, "MapProperty"},
            {"GameplayTagParentsToRemoveFromOverrides", 0x50, "MapProperty"},
            {"GameplayTagsToAdd", 0x60, "MapProperty"},
            {"CosmeticsMarkupGameplayTagsToAllow", 0x70, "MapProperty"},
            {"CosmeticsProhibitedByHotfix", 0x80, "SetProperty"},
            {"Overrides", 0x90, "MapProperty"},
            {"bCheckContextForTagQuery", 0xB0, "BoolProperty"},
            {"bEnabledWhenTagsNotSupported", 0xB0, "BoolProperty"},
            {"ContextTagQuery", 0xB8, "StructProperty"},
        }};
    };

    struct JunoAccountItemOverrideDefinition
    {
        static constexpr std::string_view Name = "JunoAccountItemOverrideDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagsToAdd = 0x28;
            static constexpr std::uintptr_t ItemVariantsOverride = 0x48;
            static constexpr std::uintptr_t bOverrideFrontendTransform = 0x58;
            static constexpr std::uintptr_t FrontendPreviewScale = 0x5C;
            static constexpr std::uintptr_t FrontendPreviewPivotOffset = 0x60;
            static constexpr std::uintptr_t FrontendPreviewInitialRotation = 0x78;
            static constexpr std::uintptr_t FrontendPreviewPawnRotationOffset = 0x90;
            static constexpr std::uintptr_t PreviewActorClass = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagsToAdd", 0x28, "StructProperty"},
            {"ItemVariantsOverride", 0x48, "ArrayProperty"},
            {"bOverrideFrontendTransform", 0x58, "BoolProperty"},
            {"FrontendPreviewScale", 0x5C, "FloatProperty"},
            {"FrontendPreviewPivotOffset", 0x60, "StructProperty"},
            {"FrontendPreviewInitialRotation", 0x78, "StructProperty"},
            {"FrontendPreviewPawnRotationOffset", 0x90, "StructProperty"},
            {"PreviewActorClass", 0xA8, "SoftClassProperty"},
        }};
    };

    struct JunoAthenaCharacterItemOverrideDefinition
    {
        static constexpr std::string_view Name = "JunoAthenaCharacterItemOverrideDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAccountItemOverrideDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseAthenaCharacterItemDefinition = 0xD8;
            static constexpr std::uintptr_t BaseAthenaCharacterAssetId = 0xF8;
            static constexpr std::uintptr_t MinifigureItemDefinition = 0x100;
            static constexpr std::uintptr_t AssembledMeshSchema = 0x120;
            static constexpr std::uintptr_t LowDetailsAssembledMeshSchema = 0x140;
            static constexpr std::uintptr_t PreviewPawnScale = 0x160;
            static constexpr std::uintptr_t WidePreviewImage = 0x168;
            static constexpr std::uintptr_t SmallPreviewImage = 0x188;
            static constexpr std::uintptr_t LargePreviewImage = 0x1A8;
            static constexpr std::uintptr_t LowDetailsWidePreviewImage = 0x1C8;
            static constexpr std::uintptr_t LowDetailsSmallPreviewImage = 0x1E8;
            static constexpr std::uintptr_t LowDetailsLargePreviewImage = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"BaseAthenaCharacterItemDefinition", 0xD8, "SoftObjectProperty"},
            {"BaseAthenaCharacterAssetId", 0xF8, "StructProperty"},
            {"MinifigureItemDefinition", 0x100, "SoftObjectProperty"},
            {"AssembledMeshSchema", 0x120, "SoftObjectProperty"},
            {"LowDetailsAssembledMeshSchema", 0x140, "SoftObjectProperty"},
            {"PreviewPawnScale", 0x160, "FloatProperty"},
            {"WidePreviewImage", 0x168, "SoftObjectProperty"},
            {"SmallPreviewImage", 0x188, "SoftObjectProperty"},
            {"LargePreviewImage", 0x1A8, "SoftObjectProperty"},
            {"LowDetailsWidePreviewImage", 0x1C8, "SoftObjectProperty"},
            {"LowDetailsSmallPreviewImage", 0x1E8, "SoftObjectProperty"},
            {"LowDetailsLargePreviewImage", 0x208, "SoftObjectProperty"},
        }};
    };

    struct JunoAthenaDanceItemOverrideDefinition
    {
        static constexpr std::string_view Name = "JunoAthenaDanceItemOverrideDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAccountItemOverrideDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseAthenaDanceItemDefinition = 0xD0;
            static constexpr std::uintptr_t BaseAthenaDanceAssetId = 0xF0;
            static constexpr std::uintptr_t Animation = 0xF8;
            static constexpr std::uintptr_t AnimationFemaleOverride = 0x118;
            static constexpr std::uintptr_t AnimationOverrides = 0x138;
            static constexpr std::uintptr_t bOverridePlayRandomSectionByName = 0x148;
            static constexpr std::uintptr_t PlayRandomSectionByName = 0x150;
            static constexpr std::uintptr_t FrontEndAnimation = 0x160;
            static constexpr std::uintptr_t FrontEndAnimationFemaleOverride = 0x180;
            static constexpr std::uintptr_t FrontEndAnimationOverrides = 0x1A0;
            static constexpr std::uintptr_t bOverridePreviewDuration = 0x1B0;
            static constexpr std::uintptr_t PreviewLoops = 0x1B4;
            static constexpr std::uintptr_t PreviewLength = 0x1B8;
            static constexpr std::uintptr_t GroupEmotePositionOffset = 0x1C0;
            static constexpr std::uintptr_t GroupEmotePositionOffsetTolerance = 0x1D8;
            static constexpr std::uintptr_t GroupEmoteFollowDistance = 0x1DC;
            static constexpr std::uintptr_t WalkForwardSpeed = 0x1E0;
            static constexpr std::uintptr_t StaticToTraversalBlendTime = 0x1E4;
            static constexpr std::uintptr_t TraversalToStaticBlendTime = 0x1E8;
            static constexpr std::uintptr_t bEnableGroupEmoteFollowerPreview = 0x1EC;
            static constexpr std::uintptr_t bOverrideGroupEmotePreviewSettings = 0x1ED;
            static constexpr std::uintptr_t GroupEmotePreviewSettings = 0x1F0;
            static constexpr std::uintptr_t bOverrideMontageSelectionGroups = 0x268;
            static constexpr std::uintptr_t MontageSelectionGroups = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"BaseAthenaDanceItemDefinition", 0xD0, "SoftObjectProperty"},
            {"BaseAthenaDanceAssetId", 0xF0, "StructProperty"},
            {"Animation", 0xF8, "SoftObjectProperty"},
            {"AnimationFemaleOverride", 0x118, "SoftObjectProperty"},
            {"AnimationOverrides", 0x138, "ArrayProperty"},
            {"bOverridePlayRandomSectionByName", 0x148, "BoolProperty"},
            {"PlayRandomSectionByName", 0x150, "ArrayProperty"},
            {"FrontEndAnimation", 0x160, "SoftObjectProperty"},
            {"FrontEndAnimationFemaleOverride", 0x180, "SoftObjectProperty"},
            {"FrontEndAnimationOverrides", 0x1A0, "ArrayProperty"},
            {"bOverridePreviewDuration", 0x1B0, "BoolProperty"},
            {"PreviewLoops", 0x1B4, "IntProperty"},
            {"PreviewLength", 0x1B8, "FloatProperty"},
            {"GroupEmotePositionOffset", 0x1C0, "StructProperty"},
            {"GroupEmotePositionOffsetTolerance", 0x1D8, "FloatProperty"},
            {"GroupEmoteFollowDistance", 0x1DC, "FloatProperty"},
            {"WalkForwardSpeed", 0x1E0, "FloatProperty"},
            {"StaticToTraversalBlendTime", 0x1E4, "FloatProperty"},
            {"TraversalToStaticBlendTime", 0x1E8, "FloatProperty"},
            {"bEnableGroupEmoteFollowerPreview", 0x1EC, "BoolProperty"},
            {"bOverrideGroupEmotePreviewSettings", 0x1ED, "BoolProperty"},
            {"GroupEmotePreviewSettings", 0x1F0, "StructProperty"},
            {"bOverrideMontageSelectionGroups", 0x268, "BoolProperty"},
            {"MontageSelectionGroups", 0x270, "ArrayProperty"},
        }};
    };

    struct JunoBldgAnimInstance
    {
        static constexpr std::string_view Name = "JunoBldgAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bSyncEnabled = 0x260;
            static constexpr std::uintptr_t PlaybackSettings = 0x268;
            static constexpr std::uintptr_t SwitchDirection = 0x2A0;
            static constexpr std::uintptr_t PlaybackTime = 0x2A4;
            static constexpr std::uintptr_t PlaybackRotator = 0x2A8;
            static constexpr std::uintptr_t CurrentSpeed = 0x2C0;
            static constexpr std::uintptr_t RootPhysicsObject = 0x2F4;
            static constexpr std::uintptr_t SyncLeaderABP = 0x2FC;
            static constexpr std::uintptr_t bIsSyncLeader = 0x304;
            static constexpr std::uintptr_t bHadSyncLeader = 0x305;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bSyncEnabled", 0x260, "BoolProperty"},
            {"PlaybackSettings", 0x268, "StructProperty"},
            {"SwitchDirection", 0x2A0, "BoolProperty"},
            {"PlaybackTime", 0x2A4, "FloatProperty"},
            {"PlaybackRotator", 0x2A8, "StructProperty"},
            {"CurrentSpeed", 0x2C0, "FloatProperty"},
            {"RootPhysicsObject", 0x2F4, "WeakObjectProperty"},
            {"SyncLeaderABP", 0x2FC, "WeakObjectProperty"},
            {"bIsSyncLeader", 0x304, "BoolProperty"},
            {"bHadSyncLeader", 0x305, "BoolProperty"},
        }};
    };

    struct JunoClockAnimInstance
    {
        static constexpr std::string_view Name = "JunoClockAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x260;
            static constexpr std::uintptr_t TimeOfDayHours = 0x278;
            static constexpr std::uintptr_t YearProgress = 0x27C;
            static constexpr std::uintptr_t HourRotator = 0x280;
            static constexpr std::uintptr_t MinuteRotator = 0x298;
            static constexpr std::uintptr_t SecondRotator = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Settings", 0x260, "StructProperty"},
            {"TimeOfDayHours", 0x278, "FloatProperty"},
            {"YearProgress", 0x27C, "FloatProperty"},
            {"HourRotator", 0x280, "StructProperty"},
            {"MinuteRotator", 0x298, "StructProperty"},
            {"SecondRotator", 0x2B0, "StructProperty"},
        }};
    };

    struct JunoClothStateSettings
    {
        static constexpr std::string_view Name = "JunoClothStateSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ClothStateSettings = 0x28;
            static constexpr std::uintptr_t WeatherWindSettings = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ClothStateSettings", 0x28, "MapProperty"},
            {"WeatherWindSettings", 0x38, "MapProperty"},
        }};
    };

    struct JunoFigureCapeAnimLogic
    {
        static constexpr std::string_view Name = "JunoFigureCapeAnimLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bPlayerIsSneaking = 0x260;
            static constexpr std::uintptr_t bIsSkydiving = 0x261;
            static constexpr std::uintptr_t bIsParachuteOpen = 0x262;
            static constexpr std::uintptr_t bClothEnabled = 0x263;
            static constexpr std::uintptr_t bRigidBodyEnabled = 0x264;
            static constexpr std::uintptr_t bIsInVehicle = 0x265;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0x266;
            static constexpr std::uintptr_t bGliderIsOpen = 0x267;
            static constexpr std::uintptr_t bPlayerIsSprinting = 0x268;
            static constexpr std::uintptr_t bIsFalling = 0x269;
            static constexpr std::uintptr_t bPlayerIsFlying = 0x26A;
            static constexpr std::uintptr_t PawnSpeed2D = 0x26C;
            static constexpr std::uintptr_t VelocityZ = 0x270;
            static constexpr std::uintptr_t PawnVelocity = 0x278;
            static constexpr std::uintptr_t LocalVelocity = 0x290;
            static constexpr std::uintptr_t GravityOverride_Native = 0x2A8;
            static constexpr std::uintptr_t CurrentClothSettings_Native = 0x2C0;
            static constexpr std::uintptr_t CurrentRBANSettings_Native = 0x3B8;
            static constexpr std::uintptr_t PreviousClothSettings_Native = 0x458;
            static constexpr std::uintptr_t PreviousRBANSettings_Native = 0x550;
            static constexpr std::uintptr_t SettingsChanged_Native = 0x5F0;
            static constexpr std::uintptr_t SimSpaceSettings_Native = 0x5F8;
            static constexpr std::uintptr_t BlendDeltaTime_Native = 0x660;
            static constexpr std::uintptr_t WindWeatherSettings_Native = 0x664;
            static constexpr std::uintptr_t PreviousState_Native = 0x680;
            static constexpr std::uintptr_t CurrentState_Native = 0x681;
            static constexpr std::uintptr_t CurrentVariationName_Native = 0x684;
            static constexpr std::uintptr_t PreviousVariationName_Native = 0x688;
            static constexpr std::uintptr_t ChaosClothInteractor_Native = 0x690;
            static constexpr std::uintptr_t ClothStateSettings_Native = 0x698;
            static constexpr std::uintptr_t Debug_Native = 0x6A0;
            static constexpr std::uintptr_t TrailControllerSettings_Native = 0x6A4;
            static constexpr std::uintptr_t LocalVelocityYawAngle_Native = 0x6AC;
            static constexpr std::uintptr_t LocalAccelYawAngle_Native = 0x6B0;
            static constexpr std::uintptr_t LocalVelocityRight_Native = 0x6B4;
            static constexpr std::uintptr_t PelvisRotationYPitch_Native = 0x6B8;
            static constexpr std::uintptr_t InterpedYaw_Native = 0x6BC;
            static constexpr std::uintptr_t YawInterpSpeed_Native = 0x6C0;
            static constexpr std::uintptr_t ApplyPoseControlRig_Native = 0x6C4;
            static constexpr std::uintptr_t ApplyPoseDrivers_Native = 0x6C5;
            static constexpr std::uintptr_t MaterialCollection = 0x6C8;
            static constexpr std::uintptr_t CapeVelocity_Native = 0x6D0;
            static constexpr std::uintptr_t DisableCapePhysics_Native = 0x6D4;
            static constexpr std::uintptr_t CapeWhipYawRateThreshold = 0x6D8;
            static constexpr std::uintptr_t CapeWhipAccelThreshold = 0x6DC;
            static constexpr std::uintptr_t PreviousMeshYaw_Native = 0x6E0;
            static constexpr std::uintptr_t PreviousOwnerVelocity_Native = 0x6E8;
            static constexpr std::uintptr_t bYawInitialized_Native = 0x700;
            static constexpr std::uintptr_t bWasWhipping_Native = 0x701;
            static constexpr std::uintptr_t bEnableCapeDivergenceWatchdog = 0x702;
            static constexpr std::uintptr_t DivergenceBoundsMultiplier = 0x704;
            static constexpr std::uintptr_t DivergenceIdleBoundsMultiplier = 0x708;
            static constexpr std::uintptr_t DivergenceIdleMaxSpeed = 0x70C;
            static constexpr std::uintptr_t DivergenceIdleMaxWindSpeed = 0x710;
            static constexpr std::uintptr_t DivergenceIdlePersistTime = 0x714;
            static constexpr std::uintptr_t DivergenceCheckInterval = 0x718;
            static constexpr std::uintptr_t DivergencePersistTime = 0x71C;
            static constexpr std::uintptr_t DivergenceResetCooldown = 0x720;
            static constexpr std::uintptr_t bDivergenceSkipWhenNotRendered = 0x724;
            static constexpr std::uintptr_t DivergenceCheckAccum_Native = 0x728;
            static constexpr std::uintptr_t DivergenceOverTime_Native = 0x72C;
            static constexpr std::uintptr_t DivergenceIdleOverTime_Native = 0x730;
            static constexpr std::uintptr_t CapeWindSpeed_Native = 0x734;
            static constexpr std::uintptr_t DivergenceResetCooldownRemaining_Native = 0x738;
        };

        inline static constexpr std::array<PropertyInfo, 64> Properties{{
            {"bPlayerIsSneaking", 0x260, "BoolProperty"},
            {"bIsSkydiving", 0x261, "BoolProperty"},
            {"bIsParachuteOpen", 0x262, "BoolProperty"},
            {"bClothEnabled", 0x263, "BoolProperty"},
            {"bRigidBodyEnabled", 0x264, "BoolProperty"},
            {"bIsInVehicle", 0x265, "BoolProperty"},
            {"bIsSurfaceSwimming", 0x266, "BoolProperty"},
            {"bGliderIsOpen", 0x267, "BoolProperty"},
            {"bPlayerIsSprinting", 0x268, "BoolProperty"},
            {"bIsFalling", 0x269, "BoolProperty"},
            {"bPlayerIsFlying", 0x26A, "BoolProperty"},
            {"PawnSpeed2D", 0x26C, "FloatProperty"},
            {"VelocityZ", 0x270, "FloatProperty"},
            {"PawnVelocity", 0x278, "StructProperty"},
            {"LocalVelocity", 0x290, "StructProperty"},
            {"GravityOverride_Native", 0x2A8, "StructProperty"},
            {"CurrentClothSettings_Native", 0x2C0, "StructProperty"},
            {"CurrentRBANSettings_Native", 0x3B8, "StructProperty"},
            {"PreviousClothSettings_Native", 0x458, "StructProperty"},
            {"PreviousRBANSettings_Native", 0x550, "StructProperty"},
            {"SettingsChanged_Native", 0x5F0, "BoolProperty"},
            {"SimSpaceSettings_Native", 0x5F8, "StructProperty"},
            {"BlendDeltaTime_Native", 0x660, "FloatProperty"},
            {"WindWeatherSettings_Native", 0x664, "StructProperty"},
            {"PreviousState_Native", 0x680, "EnumProperty"},
            {"CurrentState_Native", 0x681, "EnumProperty"},
            {"CurrentVariationName_Native", 0x684, "NameProperty"},
            {"PreviousVariationName_Native", 0x688, "NameProperty"},
            {"ChaosClothInteractor_Native", 0x690, "ObjectProperty"},
            {"ClothStateSettings_Native", 0x698, "ObjectProperty"},
            {"Debug_Native", 0x6A0, "BoolProperty"},
            {"TrailControllerSettings_Native", 0x6A4, "StructProperty"},
            {"LocalVelocityYawAngle_Native", 0x6AC, "FloatProperty"},
            {"LocalAccelYawAngle_Native", 0x6B0, "FloatProperty"},
            {"LocalVelocityRight_Native", 0x6B4, "FloatProperty"},
            {"PelvisRotationYPitch_Native", 0x6B8, "FloatProperty"},
            {"InterpedYaw_Native", 0x6BC, "FloatProperty"},
            {"YawInterpSpeed_Native", 0x6C0, "FloatProperty"},
            {"ApplyPoseControlRig_Native", 0x6C4, "BoolProperty"},
            {"ApplyPoseDrivers_Native", 0x6C5, "BoolProperty"},
            {"MaterialCollection", 0x6C8, "ObjectProperty"},
            {"CapeVelocity_Native", 0x6D0, "FloatProperty"},
            {"DisableCapePhysics_Native", 0x6D4, "BoolProperty"},
            {"CapeWhipYawRateThreshold", 0x6D8, "FloatProperty"},
            {"CapeWhipAccelThreshold", 0x6DC, "FloatProperty"},
            {"PreviousMeshYaw_Native", 0x6E0, "FloatProperty"},
            {"PreviousOwnerVelocity_Native", 0x6E8, "StructProperty"},
            {"bYawInitialized_Native", 0x700, "BoolProperty"},
            {"bWasWhipping_Native", 0x701, "BoolProperty"},
            {"bEnableCapeDivergenceWatchdog", 0x702, "BoolProperty"},
            {"DivergenceBoundsMultiplier", 0x704, "FloatProperty"},
            {"DivergenceIdleBoundsMultiplier", 0x708, "FloatProperty"},
            {"DivergenceIdleMaxSpeed", 0x70C, "FloatProperty"},
            {"DivergenceIdleMaxWindSpeed", 0x710, "FloatProperty"},
            {"DivergenceIdlePersistTime", 0x714, "FloatProperty"},
            {"DivergenceCheckInterval", 0x718, "FloatProperty"},
            {"DivergencePersistTime", 0x71C, "FloatProperty"},
            {"DivergenceResetCooldown", 0x720, "FloatProperty"},
            {"bDivergenceSkipWhenNotRendered", 0x724, "BoolProperty"},
            {"DivergenceCheckAccum_Native", 0x728, "FloatProperty"},
            {"DivergenceOverTime_Native", 0x72C, "FloatProperty"},
            {"DivergenceIdleOverTime_Native", 0x730, "FloatProperty"},
            {"CapeWindSpeed_Native", 0x734, "FloatProperty"},
            {"DivergenceResetCooldownRemaining_Native", 0x738, "FloatProperty"},
        }};
    };

    struct JunoFigureMutableAnimLogic
    {
        static constexpr std::string_view Name = "JunoFigureMutableAnimLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ABP_LOD_Level = 0x260;
            static constexpr std::uintptr_t PawnCurrentLOD = 0x264;
            static constexpr std::uintptr_t bPlayerFaceIsVisible = 0x268;
            static constexpr std::uintptr_t bMinifigDisableHeadConstraints = 0x269;
            static constexpr std::uintptr_t bPawnIsDying = 0x26A;
            static constexpr std::uintptr_t bConstraintHipPegsAlpha_Native = 0x26B;
            static constexpr std::uintptr_t bEnableNoT_Native = 0x26C;
            static constexpr std::uintptr_t bEnableNoR_Native = 0x26D;
            static constexpr std::uintptr_t bDisableHeadConstraints_Native = 0x26E;
            static constexpr std::uintptr_t HeadRAlpha_Native = 0x270;
            static constexpr std::uintptr_t HipAccHandAttachOffset = 0x278;
            static constexpr std::uintptr_t bHideHipAcc = 0x290;
            static constexpr std::uintptr_t ArmRIgnoreHipAccOffset = 0x294;
            static constexpr std::uintptr_t ArmLIgnoreHipAccOffset = 0x298;
            static constexpr std::uintptr_t bEnableHipAccOffset = 0x29C;
            static constexpr std::uintptr_t HipAccOffset_Native = 0x2A0;
            static constexpr std::uintptr_t bEnableNeckAccOffset_Native = 0x2B8;
            static constexpr std::uintptr_t bNeckAccRotateWithHead_Native = 0x2B9;
            static constexpr std::uintptr_t NeckAccOffset_Native = 0x2C0;
            static constexpr std::uintptr_t HeadConstraint = 0x2D8;
            static constexpr std::uintptr_t NeckAccConstraint = 0x2D9;
            static constexpr std::uintptr_t bRequiresControlRig = 0x2DA;
            static constexpr std::uintptr_t bEnableControlRig = 0x2DB;
            static constexpr std::uintptr_t bEnableControlRigOnlyWhenFaceIsVisible = 0x2DC;
            static constexpr std::uintptr_t IKTargets = 0x2E0;
            static constexpr std::uintptr_t SceneActorComp = 0x2F0;
            static constexpr std::uintptr_t BlankBrowValues_Native = 0x2F8;
            static constexpr std::uintptr_t bEnableBlankBrow = 0x308;
            static constexpr std::uintptr_t BrowRightPose = 0x30C;
            static constexpr std::uintptr_t BrowLeftPose = 0x310;
            static constexpr std::uintptr_t DisableEyeMovement = 0x314;
            static constexpr std::uintptr_t ShrinkNeckPeg = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"ABP_LOD_Level", 0x260, "IntProperty"},
            {"PawnCurrentLOD", 0x264, "IntProperty"},
            {"bPlayerFaceIsVisible", 0x268, "BoolProperty"},
            {"bMinifigDisableHeadConstraints", 0x269, "BoolProperty"},
            {"bPawnIsDying", 0x26A, "BoolProperty"},
            {"bConstraintHipPegsAlpha_Native", 0x26B, "BoolProperty"},
            {"bEnableNoT_Native", 0x26C, "BoolProperty"},
            {"bEnableNoR_Native", 0x26D, "BoolProperty"},
            {"bDisableHeadConstraints_Native", 0x26E, "BoolProperty"},
            {"HeadRAlpha_Native", 0x270, "FloatProperty"},
            {"HipAccHandAttachOffset", 0x278, "StructProperty"},
            {"bHideHipAcc", 0x290, "BoolProperty"},
            {"ArmRIgnoreHipAccOffset", 0x294, "FloatProperty"},
            {"ArmLIgnoreHipAccOffset", 0x298, "FloatProperty"},
            {"bEnableHipAccOffset", 0x29C, "BoolProperty"},
            {"HipAccOffset_Native", 0x2A0, "StructProperty"},
            {"bEnableNeckAccOffset_Native", 0x2B8, "BoolProperty"},
            {"bNeckAccRotateWithHead_Native", 0x2B9, "BoolProperty"},
            {"NeckAccOffset_Native", 0x2C0, "StructProperty"},
            {"HeadConstraint", 0x2D8, "EnumProperty"},
            {"NeckAccConstraint", 0x2D9, "EnumProperty"},
            {"bRequiresControlRig", 0x2DA, "BoolProperty"},
            {"bEnableControlRig", 0x2DB, "BoolProperty"},
            {"bEnableControlRigOnlyWhenFaceIsVisible", 0x2DC, "BoolProperty"},
            {"IKTargets", 0x2E0, "ArrayProperty"},
            {"SceneActorComp", 0x2F0, "WeakObjectProperty"},
            {"BlankBrowValues_Native", 0x2F8, "ArrayProperty"},
            {"bEnableBlankBrow", 0x308, "BoolProperty"},
            {"BrowRightPose", 0x30C, "FloatProperty"},
            {"BrowLeftPose", 0x310, "FloatProperty"},
            {"DisableEyeMovement", 0x314, "FloatProperty"},
            {"ShrinkNeckPeg", 0x318, "FloatProperty"},
        }};
    };

    struct JunoMinifigureItemDefinition
    {
        static constexpr std::string_view Name = "JunoMinifigureItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCharacterItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t AuthoredAssembledMeshSchema = 0x510;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AuthoredAssembledMeshSchema", 0x510, "SoftObjectProperty"},
        }};
    };

    struct JunoPlaceholderProvider
    {
        static constexpr std::string_view Name = "JunoPlaceholderProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductTags = 0x30;
            static constexpr std::uintptr_t CosmeticPlaceholderBaseItemDefinitions = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProductTags", 0x30, "StructProperty"},
            {"CosmeticPlaceholderBaseItemDefinitions", 0x50, "MapProperty"},
        }};
    };

    struct JunoPropAnimInstance
    {
        static constexpr std::string_view Name = "JunoPropAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsMoving2D = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsMoving2D", 0x260, "BoolProperty"},
        }};
    };

    struct JunoPropAnimLibrary
    {
        static constexpr std::string_view Name = "JunoPropAnimLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
