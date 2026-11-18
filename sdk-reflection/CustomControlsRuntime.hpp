#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CustomControlsRuntime
{
    struct CustomControlInputBindings_Base
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerCustomControlsComponent = 0x28;
            static constexpr std::uintptr_t OwnerController = 0x30;
            static constexpr std::uintptr_t OwnerPawn = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwnerCustomControlsComponent", 0x28, "WeakObjectProperty"},
            {"OwnerController", 0x30, "WeakObjectProperty"},
            {"OwnerPawn", 0x38, "WeakObjectProperty"},
        }};
    };

    struct CustomControlInputBindings_EnhancedInput
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_EnhancedInput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerInputComponent = 0x40;
            static constexpr std::uintptr_t Priority = 0x48;
            static constexpr std::uintptr_t InputMapping = 0x60;
            static constexpr std::uintptr_t Options = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OwnerInputComponent", 0x40, "WeakObjectProperty"},
            {"Priority", 0x48, "FloatProperty"},
            {"InputMapping", 0x60, "ObjectProperty"},
            {"Options", 0x68, "StructProperty"},
        }};
    };

    struct CustomControlInputBindings_InputComponent
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_InputComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t InputComponent = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputComponent", 0x40, "ObjectProperty"},
        }};
    };

    struct CustomControlInputBindings_SideScroller
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_SideScroller";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_InputComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalogInputDeadZone = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnalogInputDeadZone", 0x50, "FloatProperty"},
        }};
    };

    struct CustomControlInputBindings_SideScrollerManual
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_SideScrollerManual";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_SideScroller";
        struct Offsets
        {
            static constexpr std::uintptr_t AimOrbitalDistance = 0x90;
            static constexpr std::uintptr_t TouchDirectionClamping = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AimOrbitalDistance", 0x90, "FloatProperty"},
            {"TouchDirectionClamping", 0x94, "FloatProperty"},
        }};
    };

    struct CustomControlInputBindings_SideScrollerMovement
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_SideScrollerMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_SideScroller";
        struct Offsets
        {
            static constexpr std::uintptr_t AimOrbitalDistance = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AimOrbitalDistance", 0x90, "FloatProperty"},
        }};
    };

    struct CustomControlInputBindings_Skydiving
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_Skydiving";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_EnhancedInput";
        struct Offsets
        {
            static constexpr std::uintptr_t SkydivingDownInputAction = 0x70;
            static constexpr std::uintptr_t SkydivingUpInputAction = 0x78;
            static constexpr std::uintptr_t MappingNameSkydivingDown = 0x80;
            static constexpr std::uintptr_t DisplayNameSkydivingDown = 0x88;
            static constexpr std::uintptr_t MappingNameSkydivingUp = 0x98;
            static constexpr std::uintptr_t DisplayNameSkydivingUp = 0xA0;
            static constexpr std::uintptr_t RotateStickThreshold = 0xB0;
            static constexpr std::uintptr_t InSkydiveVolumeTags = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SkydivingDownInputAction", 0x70, "ObjectProperty"},
            {"SkydivingUpInputAction", 0x78, "ObjectProperty"},
            {"MappingNameSkydivingDown", 0x80, "NameProperty"},
            {"DisplayNameSkydivingDown", 0x88, "TextProperty"},
            {"MappingNameSkydivingUp", 0x98, "NameProperty"},
            {"DisplayNameSkydivingUp", 0xA0, "TextProperty"},
            {"RotateStickThreshold", 0xB0, "FloatProperty"},
            {"InSkydiveVolumeTags", 0xB8, "StructProperty"},
        }};
    };

    struct CustomControlInputBindings_ThirdPersonSprint
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_ThirdPersonSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_InputComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalogInputDeadZone = 0x50;
            static constexpr std::uintptr_t RotateStickThreshold = 0x54;
            static constexpr std::uintptr_t CameraRotationThreshold = 0x58;
            static constexpr std::uintptr_t InputRateIfCameraRotationThreshold = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AnalogInputDeadZone", 0x50, "FloatProperty"},
            {"RotateStickThreshold", 0x54, "FloatProperty"},
            {"CameraRotationThreshold", 0x58, "FloatProperty"},
            {"InputRateIfCameraRotationThreshold", 0x5C, "FloatProperty"},
        }};
    };

    struct CustomControlInputBindings_TwinStick
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_TwinStick";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_EnhancedInput";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialDialAimTargetOffsetScaleFactor = 0x70;
            static constexpr std::uintptr_t TargetingBreakOffsetGamepad = 0x74;
            static constexpr std::uintptr_t TargetingBreakOffsetMouse = 0x78;
            static constexpr std::uintptr_t DefaultAutoFireCooldown = 0x7C;
            static constexpr std::uintptr_t GamepadLookAtInputAction = 0x80;
            static constexpr std::uintptr_t GamepadAimAtInputAction = 0x88;
            static constexpr std::uintptr_t MouseLookAtInputAction = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InitialDialAimTargetOffsetScaleFactor", 0x70, "FloatProperty"},
            {"TargetingBreakOffsetGamepad", 0x74, "FloatProperty"},
            {"TargetingBreakOffsetMouse", 0x78, "FloatProperty"},
            {"DefaultAutoFireCooldown", 0x7C, "FloatProperty"},
            {"GamepadLookAtInputAction", 0x80, "ObjectProperty"},
            {"GamepadAimAtInputAction", 0x88, "ObjectProperty"},
            {"MouseLookAtInputAction", 0x90, "ObjectProperty"},
        }};
    };

    struct CustomControlInputBindings_TwinStickDial
    {
        static constexpr std::string_view Name = "CustomControlInputBindings_TwinStickDial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlInputBindings_TwinStick";
        struct Offsets
        {
            static constexpr std::uintptr_t MouseAimAtInputAction = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MouseAimAtInputAction", 0xD0, "ObjectProperty"},
        }};
    };

    struct CustomControlOptions_Base
    {
        static constexpr std::string_view Name = "CustomControlOptions_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementModeLogic = 0x28;
            static constexpr std::uintptr_t RangedAttackStateDuration = 0x30;
            static constexpr std::uintptr_t MeleeAttackStateDuration = 0x34;
            static constexpr std::uintptr_t InputBindingsClasses = 0x38;
            static constexpr std::uintptr_t FortWeaponReticleData = 0x48;
            static constexpr std::uintptr_t InteractionPointOptions = 0x5C;
            static constexpr std::uintptr_t InteractionTargetingPreset = 0x70;
            static constexpr std::uintptr_t BuildingPlacementDistanceOffset = 0x78;
            static constexpr std::uintptr_t bShouldAffectNPC = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MovementModeLogic", 0x28, "ClassProperty"},
            {"RangedAttackStateDuration", 0x30, "FloatProperty"},
            {"MeleeAttackStateDuration", 0x34, "FloatProperty"},
            {"InputBindingsClasses", 0x38, "ArrayProperty"},
            {"FortWeaponReticleData", 0x48, "StructProperty"},
            {"InteractionPointOptions", 0x5C, "StructProperty"},
            {"InteractionTargetingPreset", 0x70, "StructProperty"},
            {"BuildingPlacementDistanceOffset", 0x78, "FloatProperty"},
            {"bShouldAffectNPC", 0x7C, "BoolProperty"},
        }};
    };

    struct CustomControlOptions_SideScroller
    {
        static constexpr std::string_view Name = "CustomControlOptions_SideScroller";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlOptions_Targeting";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementModeCreationData = 0x1C8;
            static constexpr std::uintptr_t InputOptions = 0x210;
            static constexpr std::uintptr_t bIsBeanstalkGFS = 0x216;
            static constexpr std::uintptr_t bIsDeviceActive = 0x217;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MovementModeCreationData", 0x1C8, "StructProperty"},
            {"InputOptions", 0x210, "StructProperty"},
            {"bIsBeanstalkGFS", 0x216, "BoolProperty"},
            {"bIsDeviceActive", 0x217, "BoolProperty"},
        }};
    };

    struct CustomControlOptions_Targeting
    {
        static constexpr std::string_view Name = "CustomControlOptions_Targeting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlOptions_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t AngleToClampFireHorizontal = 0xA0;
            static constexpr std::uintptr_t AngleToClampFireVertical = 0xA4;
            static constexpr std::uintptr_t RangedTargetingPresetTemplate = 0xA8;
            static constexpr std::uintptr_t RetentionTargetingPresetTemplate = 0xB0;
            static constexpr std::uintptr_t RangedAimingTargetingPresetTemplate = 0xB8;
            static constexpr std::uintptr_t MeleeTargetingPresetTemplate = 0xC0;
            static constexpr std::uintptr_t RangedTargetingPreset = 0xC8;
            static constexpr std::uintptr_t RetentionTargetingPreset = 0xD0;
            static constexpr std::uintptr_t RangedAimTargetingPreset = 0xD8;
            static constexpr std::uintptr_t MeleeTargetingPreset = 0xE0;
            static constexpr std::uintptr_t bTargetingEnabled = 0xE8;
            static constexpr std::uintptr_t RangedTargetingData = 0xF0;
            static constexpr std::uintptr_t MeleeTargetingData = 0x138;
            static constexpr std::uintptr_t AimingTargetingData = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"AngleToClampFireHorizontal", 0xA0, "FloatProperty"},
            {"AngleToClampFireVertical", 0xA4, "FloatProperty"},
            {"RangedTargetingPresetTemplate", 0xA8, "ObjectProperty"},
            {"RetentionTargetingPresetTemplate", 0xB0, "ObjectProperty"},
            {"RangedAimingTargetingPresetTemplate", 0xB8, "ObjectProperty"},
            {"MeleeTargetingPresetTemplate", 0xC0, "ObjectProperty"},
            {"RangedTargetingPreset", 0xC8, "ObjectProperty"},
            {"RetentionTargetingPreset", 0xD0, "ObjectProperty"},
            {"RangedAimTargetingPreset", 0xD8, "ObjectProperty"},
            {"MeleeTargetingPreset", 0xE0, "ObjectProperty"},
            {"bTargetingEnabled", 0xE8, "BoolProperty"},
            {"RangedTargetingData", 0xF0, "StructProperty"},
            {"MeleeTargetingData", 0x138, "StructProperty"},
            {"AimingTargetingData", 0x180, "StructProperty"},
        }};
    };

    struct CustomControlOptions_ThirdPerson
    {
        static constexpr std::string_view Name = "CustomControlOptions_ThirdPerson";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CustomControlOptions_Targeting";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementModeCreationData = 0x1C8;
            static constexpr std::uintptr_t InputOptions = 0x200;
            static constexpr std::uintptr_t AdjustedAim = 0x204;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MovementModeCreationData", 0x1C8, "StructProperty"},
            {"InputOptions", 0x200, "StructProperty"},
            {"AdjustedAim", 0x204, "StructProperty"},
        }};
    };

    struct FortAIPawnComponent_CustomControls
    {
        static constexpr std::string_view Name = "FortAIPawnComponent_CustomControls";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent_BaseCC";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveOptions = 0xF8;
            static constexpr std::uintptr_t HighestPriorityOptions = 0x100;
            static constexpr std::uintptr_t OwnedOptions = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveOptions", 0xF8, "ObjectProperty"},
            {"HighestPriorityOptions", 0x100, "ObjectProperty"},
            {"OwnedOptions", 0x118, "ArrayProperty"},
        }};
    };

    struct FortControllerComponent_BaseCC
    {
        static constexpr std::string_view Name = "FortControllerComponent_BaseCC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveOptions = 0xF8;
            static constexpr std::uintptr_t HighestPriorityOptions = 0x100;
            static constexpr std::uintptr_t OwnedOptions = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveOptions", 0xF8, "ObjectProperty"},
            {"HighestPriorityOptions", 0x100, "ObjectProperty"},
            {"OwnedOptions", 0x118, "ArrayProperty"},
        }};
    };

    struct FortControllerComponent_CustomControls
    {
        static constexpr std::string_view Name = "FortControllerComponent_CustomControls";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_BaseCC";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentState = 0x128;
            static constexpr std::uintptr_t BlockTagsQuery = 0x138;
            static constexpr std::uintptr_t ActiveInputBindings = 0x188;
            static constexpr std::uintptr_t InteractSelectionPtr = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentState", 0x128, "StructProperty"},
            {"BlockTagsQuery", 0x138, "StructProperty"},
            {"ActiveInputBindings", 0x188, "ArrayProperty"},
            {"InteractSelectionPtr", 0x1E0, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_BaseCCLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_BaseCCLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x1B8;
            static constexpr std::uintptr_t FortPlayerController = 0x1C0;
            static constexpr std::uintptr_t FortAIController = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwnerController", 0x1B8, "WeakObjectProperty"},
            {"FortPlayerController", 0x1C0, "WeakObjectProperty"},
            {"FortAIController", 0x1C8, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_BaseCCRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_BaseCCRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortMovementMode_CCLockOnLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_CCLockOnLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseCCLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x1B8;
            static constexpr std::uintptr_t FortPlayerController = 0x1C0;
            static constexpr std::uintptr_t FortAIController = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwnerController", 0x1B8, "WeakObjectProperty"},
            {"FortPlayerController", 0x1C0, "WeakObjectProperty"},
            {"FortAIController", 0x1C8, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_CCLockOnRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_CCLockOnRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseCCRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortMovementMode_CCSideScrollerLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_CCSideScrollerLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_CCLockOnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x1B8;
            static constexpr std::uintptr_t FortPlayerController = 0x1C0;
            static constexpr std::uintptr_t FortAIController = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwnerController", 0x1B8, "WeakObjectProperty"},
            {"FortPlayerController", 0x1C0, "WeakObjectProperty"},
            {"FortAIController", 0x1C8, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_CCSideScrollerRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_CCSideScrollerRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_CCLockOnRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredRotationYaw = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DesiredRotationYaw", 0x60, "FloatProperty"},
        }};
    };

    struct FortMovementMode_CCThirdPersonFixedLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_CCThirdPersonFixedLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_CCThirdPersonLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x1B8;
            static constexpr std::uintptr_t FortPlayerController = 0x1C0;
            static constexpr std::uintptr_t FortAIController = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwnerController", 0x1B8, "WeakObjectProperty"},
            {"FortPlayerController", 0x1C0, "WeakObjectProperty"},
            {"FortAIController", 0x1C8, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_CCThirdPersonFixedRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_CCThirdPersonFixedRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_CCThirdPersonRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortMovementMode_CCThirdPersonLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_CCThirdPersonLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_CCLockOnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x1B8;
            static constexpr std::uintptr_t FortPlayerController = 0x1C0;
            static constexpr std::uintptr_t FortAIController = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwnerController", 0x1B8, "WeakObjectProperty"},
            {"FortPlayerController", 0x1C0, "WeakObjectProperty"},
            {"FortAIController", 0x1C8, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_CCThirdPersonRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_CCThirdPersonRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_CCLockOnRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortMovementMode_CCThirdPersonTwinStickLogic
    {
        static constexpr std::string_view Name = "FortMovementMode_CCThirdPersonTwinStickLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_CCThirdPersonLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x1B8;
            static constexpr std::uintptr_t FortPlayerController = 0x1C0;
            static constexpr std::uintptr_t FortAIController = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwnerController", 0x1B8, "WeakObjectProperty"},
            {"FortPlayerController", 0x1C0, "WeakObjectProperty"},
            {"FortAIController", 0x1C8, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_CCThirdPersonTwinStickRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_CCThirdPersonTwinStickRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_CCThirdPersonRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct FortPawnComponent_BaseCC
    {
        static constexpr std::string_view Name = "FortPawnComponent_BaseCC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveOptions = 0xF8;
            static constexpr std::uintptr_t HighestPriorityOptions = 0x100;
            static constexpr std::uintptr_t OwnedOptions = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveOptions", 0xF8, "ObjectProperty"},
            {"HighestPriorityOptions", 0x100, "ObjectProperty"},
            {"OwnedOptions", 0x118, "ArrayProperty"},
        }};
    };

    struct TargetingDataHelperLibrary
    {
        static constexpr std::string_view Name = "TargetingDataHelperLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TargetingFilterCCFOV
    {
        static constexpr std::string_view Name = "TargetingFilterCCFOV";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleTargetingFilterTask";
        struct Offsets
        {
            static constexpr std::uintptr_t FliedOfView = 0x28;
            static constexpr std::uintptr_t bUseAimDirectionInsteadOfForwardVector = 0x2C;
            static constexpr std::uintptr_t bRequireLineOfSight = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FliedOfView", 0x28, "FloatProperty"},
            {"bUseAimDirectionInsteadOfForwardVector", 0x2C, "BoolProperty"},
            {"bRequireLineOfSight", 0x30, "BoolProperty"},
        }};
    };

    struct TargetingFilter_CC_Base
    {
        static constexpr std::string_view Name = "TargetingFilter_CC_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleTargetingFilterTask";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetingData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetingData", 0x30, "StructProperty"},
        }};
    };

    struct TargetingSelectionCCIdleInteract
    {
        static constexpr std::string_view Name = "TargetingSelectionCCIdleInteract";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TargetingSelectionCCRange";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x28;
            static constexpr std::uintptr_t Height = 0x2C;
            static constexpr std::uintptr_t ForwardOffset = 0x30;
            static constexpr std::uintptr_t VerticalOffset = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Radius", 0x28, "FloatProperty"},
            {"Height", 0x2C, "FloatProperty"},
            {"ForwardOffset", 0x30, "FloatProperty"},
            {"VerticalOffset", 0x34, "FloatProperty"},
        }};
    };

    struct TargetingSelectionCCRange
    {
        static constexpr std::string_view Name = "TargetingSelectionCCRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleTargetingSelectionTask";
        struct Offsets
        {
            static constexpr std::uintptr_t Radius = 0x28;
            static constexpr std::uintptr_t Height = 0x2C;
            static constexpr std::uintptr_t ForwardOffset = 0x30;
            static constexpr std::uintptr_t VerticalOffset = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Radius", 0x28, "FloatProperty"},
            {"Height", 0x2C, "FloatProperty"},
            {"ForwardOffset", 0x30, "FloatProperty"},
            {"VerticalOffset", 0x34, "FloatProperty"},
        }};
    };

    struct TargetingSelection_CC_Base
    {
        static constexpr std::string_view Name = "TargetingSelection_CC_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleTargetingSelectionTask";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetingData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetingData", 0x30, "StructProperty"},
        }};
    };

    struct TargetingSort_CC_Base
    {
        static constexpr std::string_view Name = "TargetingSort_CC_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SimpleTargetingSortTask";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetingData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetingData", 0x38, "StructProperty"},
        }};
    };

    struct TargetingTask_CC_DataHolder
    {
        static constexpr std::string_view Name = "TargetingTask_CC_DataHolder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
