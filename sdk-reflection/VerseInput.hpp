#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseInput
{
    struct InputModifierPinchDelta
    {
        static constexpr std::string_view Name = "InputModifierPinchDelta";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bCachePinchOrigin = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCachePinchOrigin", 0x48, "BoolProperty"},
        }};
    };

    struct InputModifierRotateOrigin
    {
        static constexpr std::string_view Name = "InputModifierRotateOrigin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bCacheRotateOrigin = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bCacheRotateOrigin", 0x28, "BoolProperty"},
        }};
    };

    struct InputModifierScreenSpaceMousePosition
    {
        static constexpr std::string_view Name = "InputModifierScreenSpaceMousePosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseAvailableInputDevices
    {
        static constexpr std::string_view Name = "VerseAvailableInputDevices";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Gamepad = 0x0;
            static constexpr std::uintptr_t Keyboard = 0x1;
            static constexpr std::uintptr_t Mouse = 0x2;
            static constexpr std::uintptr_t Touch = 0x3;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Gamepad", 0x0, "BoolProperty"},
            {"Keyboard", 0x1, "BoolProperty"},
            {"Mouse", 0x2, "BoolProperty"},
            {"Touch", 0x3, "BoolProperty"},
        }};
    };

    struct VerseInputBoundInputActionData
    {
        static constexpr std::string_view Name = "VerseInputBoundInputActionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseInputEventsBase
    {
        static constexpr std::string_view Name = "VerseInputEventsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssociatedInputAction = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssociatedInputAction", 0x28, "ObjectProperty"},
        }};
    };

    struct VerseReplicatedInputBindingData
    {
        static constexpr std::string_view Name = "VerseReplicatedInputBindingData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundAction = 0x10;
            static constexpr std::uintptr_t BoundEventTypesInt = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoundAction", 0x10, "ObjectProperty"},
            {"BoundEventTypesInt", 0x18, "UInt32Property"},
        }};
    };

    struct VerseReplicatedInputBindingDataArray
    {
        static constexpr std::string_view Name = "VerseReplicatedInputBindingDataArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x48;
            static constexpr std::uintptr_t Owner = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entries", 0x48, "ArrayProperty"},
            {"Owner", 0x58, "ObjectProperty"},
        }};
    };

    struct VerseReplicatedInputDataComponent
    {
        static constexpr std::string_view Name = "VerseReplicatedInputDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnVerseInputActionsBoundInVerseChanged = 0xD0;
            static constexpr std::uintptr_t InputMappings = 0xE0;
            static constexpr std::uintptr_t RemovedInputMappingPriorities = 0xF0;
            static constexpr std::uintptr_t InputComponent = 0x100;
            static constexpr std::uintptr_t InputEventMap = 0x108;
            static constexpr std::uintptr_t ActionsPendingBindingUpdate = 0x118;
            static constexpr std::uintptr_t InputActionBindingData = 0x128;
            static constexpr std::uintptr_t ClientInputActionBindingHandles = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnVerseInputActionsBoundInVerseChanged", 0xD0, "MulticastInlineDelegateProperty"},
            {"InputMappings", 0xE0, "ArrayProperty"},
            {"RemovedInputMappingPriorities", 0xF0, "MapProperty"},
            {"InputComponent", 0x100, "ObjectProperty"},
            {"InputEventMap", 0x108, "MapProperty"},
            {"ActionsPendingBindingUpdate", 0x118, "SetProperty"},
            {"InputActionBindingData", 0x128, "StructProperty"},
            {"ClientInputActionBindingHandles", 0x188, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "AddMappingContextFromVerse",
            "ClientSetSupportsPortrait",
            "Client_GetInputActionsBoundInVerse",
            "NotifyServerOfNewInputs",
            "RemoveMappingContextFromVerse",
            "ResetVerseInputState",
            "ServerSetAvailableInputDevices",
            "ServerSetPreferredInputMethod",
            "ServerSetScreenOrientation",
        }};
    };

    struct VerseReplicatedInputEntry
    {
        static constexpr std::string_view Name = "VerseReplicatedInputEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InputValue = 0x0;
            static constexpr std::uintptr_t ElapsedTime = 0x18;
            static constexpr std::uintptr_t TriggerEvent = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InputValue", 0x0, "StructProperty"},
            {"ElapsedTime", 0x18, "FloatProperty"},
            {"TriggerEvent", 0x1C, "EnumProperty"},
        }};
    };

    struct VerseViewportReplicationComponent
    {
        static constexpr std::string_view Name = "VerseViewportReplicationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Snapshot = 0xC0;
            static constexpr std::uintptr_t bHasServerSnapshot = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Snapshot", 0xC0, "StructProperty"},
            {"bHasServerSnapshot", 0x200, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Server_SubmitViewSnapshot",
        }};
    };

    struct VerseViewportSnapshot
    {
        static constexpr std::string_view Name = "VerseViewportSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewOrigin = 0x0;
            static constexpr std::uintptr_t ViewRotationRow0 = 0x20;
            static constexpr std::uintptr_t ViewRotationRow1 = 0x40;
            static constexpr std::uintptr_t ViewRotationRow2 = 0x60;
            static constexpr std::uintptr_t ViewRotationRow3 = 0x80;
            static constexpr std::uintptr_t ProjectionRow0 = 0xA0;
            static constexpr std::uintptr_t ProjectionRow1 = 0xC0;
            static constexpr std::uintptr_t ProjectionRow2 = 0xE0;
            static constexpr std::uintptr_t ProjectionRow3 = 0x100;
            static constexpr std::uintptr_t ConstrainedViewRectMin = 0x120;
            static constexpr std::uintptr_t ConstrainedViewRectMax = 0x128;
            static constexpr std::uintptr_t DPIScale = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"ViewOrigin", 0x0, "StructProperty"},
            {"ViewRotationRow0", 0x20, "StructProperty"},
            {"ViewRotationRow1", 0x40, "StructProperty"},
            {"ViewRotationRow2", 0x60, "StructProperty"},
            {"ViewRotationRow3", 0x80, "StructProperty"},
            {"ProjectionRow0", 0xA0, "StructProperty"},
            {"ProjectionRow1", 0xC0, "StructProperty"},
            {"ProjectionRow2", 0xE0, "StructProperty"},
            {"ProjectionRow3", 0x100, "StructProperty"},
            {"ConstrainedViewRectMin", 0x120, "StructProperty"},
            {"ConstrainedViewRectMax", 0x128, "StructProperty"},
            {"DPIScale", 0x130, "FloatProperty"},
        }};
    };

}
