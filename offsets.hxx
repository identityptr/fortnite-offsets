#pragma once
#include <cstdint>

namespace FN { struct GWorld; }

namespace FN::O
{
    namespace Engine
    {
        inline std::uintptr_t UWorld = 0x1B1D12F8;
        inline std::uintptr_t GEngine = 0x1B1D2C68;
        inline std::uintptr_t GameViewport = 0xB70;
        inline std::uintptr_t GNames = 0x1B085580;
        inline std::uintptr_t FNamePool = 0x1B085580;
        inline std::uintptr_t GObjects = 0x1B162F78;
        inline std::uintptr_t GObjectCount = 0x1B162F80;
    }

    namespace Functions
    {
        inline std::uintptr_t GetBoneMatrix = 0x44026E;
        inline std::uintptr_t FNameToString = 0x4FAEE;
        inline std::uintptr_t StaticFindObject = 0x8655B3;
        inline std::uintptr_t ProcessEvent = 0xBEC36;
    }

    namespace UObject
    {
        inline std::uintptr_t ObjectFlags = 0x10;
        inline std::uintptr_t InternalIndex = 0x14;
        inline std::uintptr_t ClassPrivate = 0x20;
        inline std::uintptr_t NamePrivate = 0x18;
    }

    namespace World
    {
        inline std::uintptr_t Levels = 0x1E8;
        inline std::uintptr_t OwningGameInstance = 0x248;
        inline std::uintptr_t PersistentLevel = 0x38;
        inline std::uintptr_t GameState = 0x1D0;
        inline std::uintptr_t Seconds = 0x190;
        inline std::uintptr_t NetDriver = 0x40;
        inline std::uintptr_t AuthorityGameMode = 0x1C8;
        inline std::uintptr_t NetworkManager = 0x60;
        inline std::uintptr_t PhysicsCollisionHandler = 0x68;
        inline std::uintptr_t NavigationSystem = 0x1C0;
        inline std::uintptr_t StreamingLevels = 0xA8;
        inline std::uintptr_t ParameterCollectionInstances = 0x250;
    }

    namespace Level
    {
        inline std::uintptr_t Actors = 0x200;
        inline std::uintptr_t OwningWorld = 0xE0;
        inline std::uintptr_t Model = 0xE8;
        inline std::uintptr_t ModelComponents = 0xF0;
        inline std::uintptr_t LevelScriptActor = 0x110;
        inline std::uintptr_t WorldSettings = 0x2B8;
        inline std::uintptr_t NavListStart = 0x118;
        inline std::uintptr_t NavListEnd = 0x120;
    }

    namespace GameInstance
    {
        inline std::uintptr_t LocalPlayers = 0x38;
    }

    namespace GameStateBase
    {
        inline std::uintptr_t PlayerArray = 0x288;
        inline std::uintptr_t ReplicatedWorldTimeSecondsDouble = 0x2A0;
    }

    namespace LocalPlayer
    {
        inline std::uintptr_t PlayerController = 0x30;
        inline std::uintptr_t ViewportClient = 0x78;
        inline std::uintptr_t ViewState = 0x250;
    }

    namespace PlayerController
    {
        inline std::uintptr_t PlayerCameraManager = 0x328;
        inline std::uintptr_t AcknowledgedPawn = 0x318;
        inline std::uintptr_t HUD = 0x320;
        inline std::uintptr_t Player = 0x310;
    }

    namespace FortPlayerController
    {
    }

    namespace PlayerState
    {
        inline std::uintptr_t PawnPrivate = 0x2E8;
        inline std::uintptr_t PlayerName = 0x308;
        inline std::uintptr_t bIsABot = 0x27A;
    }

    namespace Pawn
    {
        inline std::uintptr_t PlayerState = 0x290;
        inline std::uintptr_t Controller = 0x2A0;
        inline std::uintptr_t BaseEyeHeight = 0x27C;
        inline std::uintptr_t RemoteViewPitch = 0x284;
        inline std::uintptr_t AutoPossessPlayer = 0x280;
        inline std::uintptr_t AutoPossessAI = 0x281;
        inline std::uintptr_t AIControllerClass = 0x288;
        inline std::uintptr_t LastHitBy = 0x298;
        inline std::uintptr_t bUseControllerRotationYaw = 0x278;
    }

    namespace Actor
    {
        inline std::uintptr_t RootComponent = 0x1B0;
        inline std::uintptr_t CustomTimeDilation = 0x68;
        inline std::uintptr_t Owner = 0x158;
        inline std::uintptr_t Instigator = 0x198;
        inline std::uintptr_t Children = 0x1A0;
        inline std::uintptr_t ParentComponent = 0x1D8;
        inline std::uintptr_t AttachmentReplication = 0x70;
        inline std::uintptr_t Role = 0x164;
        inline std::uintptr_t RemoteRole = 0x60;
        inline std::uintptr_t InitialLifeSpan = 0x64;
        inline std::uintptr_t bHidden = 0x58;
        inline std::uintptr_t bReplicates = 0x5B;
        inline std::uintptr_t bActorEnableCollision = 0x5D;
        inline std::uintptr_t NetDormancy = 0x165;
    }

    namespace Character
    {
        inline std::uintptr_t Mesh = 0x2F0;
        inline std::uintptr_t CharacterMovement = 0x2F8;
        inline std::uintptr_t bIsCrouched = 0x430; // shared bitfield byte
        inline std::uintptr_t CapsuleComponent = 0x300;
        inline std::uintptr_t BasedMovement = 0x308;
        inline std::uintptr_t ReplicatedBasedMovement = 0x360;
        inline std::uintptr_t AnimRootMotionTranslationScale = 0x428;
        inline std::uintptr_t ProxyJumpForceStartedTime = 0x43C;
        inline std::uintptr_t JumpMaxCount = 0x444;
    }

    namespace PrimitiveComponent
    {
    }

    namespace SceneComponent
    {
        inline std::uintptr_t RelativeLocation = 0x140;
        inline std::uintptr_t ComponentVelocity = 0x188;
        inline std::uintptr_t ComponentToWorld = 0x1E0;
        inline std::uintptr_t Parent = 0xD0;
        inline std::uintptr_t AttachParent = 0xD0;
        inline std::uintptr_t AttachSocketName = 0xD8;
        inline std::uintptr_t AttachChildren = 0xE0;
        inline std::uintptr_t ClientAttachedChildren = 0xF0;
        inline std::uintptr_t RelativeRotation = 0x158;
        inline std::uintptr_t RelativeScale3D = 0x170;
        inline std::uintptr_t Mobility = 0x1A3;
        inline std::uintptr_t bVisible = 0x1A0;
        inline std::uintptr_t bHiddenInGame = 0x1A1;
        inline std::uintptr_t bAbsoluteLocation = 0x1A0;
    }

    namespace SkeletalMeshComponent
    {
        inline std::uintptr_t BoneArray = 0x660;
        inline std::uintptr_t BoneCache = 0x670;
        inline std::uintptr_t CurrentReadComponentTransforms = 0x6C8;
        inline std::uintptr_t CachedComponentSpaceTransforms = 0x9D0;
        inline std::uintptr_t GlobalAnimRateScale = 0x9F0;
    }

    namespace FortPlayerState
    {
    }

    namespace FortPlayerStateAthena
    {
        inline std::uintptr_t TeamIndex = 0xF69;
        inline std::uintptr_t KillScore = 0xF80;
        inline std::uintptr_t SeasonLevelUIDisplay = 0xF84;
    }

    namespace FortPlayerStateComponent_Habanero
    {
        inline std::uintptr_t RankedProgress = 0xD8;
    }

    namespace FortPawn
    {
        inline std::uintptr_t bIsDying = 0x728;
        inline std::uintptr_t bIsDBNO = 0x881;
        inline std::uintptr_t CurrentWeapon = 0x9D0;
        inline std::uintptr_t LastDamagedTime = 0xDE8;
        inline std::uintptr_t CurrentWeaponList = 0xA08;
        inline std::uintptr_t HealthSet = 0x13A8;
    }

    namespace FortPlayerPawnAthena
    {
        inline std::uintptr_t CurrentVehicle = 0x2C30;
        inline std::uintptr_t bIsParachuteOpen = 0x2290;
        inline std::uintptr_t bIsSkydiving = 0x228F;
        inline std::uintptr_t bIsSliding = 0x758;
        inline std::uintptr_t ReviveFromDBNOTime = 0x4B38;
        inline std::uintptr_t bADSWhileNotOnGround = 0x5541;
        inline std::uintptr_t bHasStartedFloating = 0x28D4;
    }

    namespace PlayerCameraManager
    {
        inline std::uintptr_t PendingViewTarget = 0xC30;
        inline std::uintptr_t LastFrameCameraCachePrivate = 0x1EB0;
        inline std::uintptr_t DefaultFOV = 0x284;
        inline std::uintptr_t DefaultAspectRatio = 0x294;
        inline std::uintptr_t ViewTarget = 0x300;
        inline std::uintptr_t CameraCachePrivate = 0x1590;
        inline std::uintptr_t bDefaultConstrainAspectRatio = 0x28A8;
    }

    namespace FortWeapon
    {
        inline std::uintptr_t WeaponData = 0x6D0;
        inline std::uintptr_t AmmoCount = 0x17D8;
        inline std::uintptr_t bIsReloadingWeapon = 0x379;
        inline std::uintptr_t bIsChargingWeapon = 0x378;
    }

    namespace FortControllerComponent_Interaction
    {
    }

    namespace FortAthenaVehicle
    {
    }

    namespace FortItemDefinition
    {
        inline std::uintptr_t ItemName = 0x38;
        inline std::uintptr_t ItemType = 0x98;
        inline std::uintptr_t PrimaryAssetIdItemTypeOverride = 0x99;
    }

    namespace BuildingContainer
    {
    }

    namespace FortPickup
    {
        inline std::uintptr_t bPickedUp = 0x28C;
        inline std::uintptr_t PickupFlags = 0x28C; // shared bitfield byte
        inline std::uintptr_t PickupExtendedFlags = 0x28D; // shared bitfield byte
    }

    namespace FortItemEntry
    {
    }

    namespace FortWeaponItemDefinition
    {
    }

    namespace Controller
    {
        inline std::uintptr_t ControlRotation = 0x2E8;
    }

    namespace FString
    {
        inline std::uintptr_t FData = 0x0; //rahhhh
        inline std::uintptr_t FLength = 0x8;
    }
}
