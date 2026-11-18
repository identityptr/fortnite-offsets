#pragma once
#include <cstdint>

namespace FN { struct GWorld; }

namespace FN::O
{
    namespace Engine
    {
        inline std::uintptr_t UWorld = 0x1C9DA790;
        inline std::uintptr_t GEngine = 0x1C9DC1D8;
        inline std::uintptr_t GameViewport = 0xB70;
        inline std::uintptr_t ViewportWorld = 0x78;
        inline std::uintptr_t GNames = 0x1C889440;
        inline std::uintptr_t FNamePool = 0x1C889440;
        inline std::uintptr_t GObjects = 0x1C966F20;
        inline std::uintptr_t GObjectCount = 0x1C966F28;
    }

    namespace Functions
    {
        inline std::uintptr_t GetBoneMatrix = 0x959484;
        inline std::uintptr_t FNameToString = 0x415C4;
        inline std::uintptr_t StaticFindObject = 0x60EE86;
        inline std::uintptr_t ProcessEvent = 0xC0432;
    }

    namespace UObject
    {
        inline std::uintptr_t VTable = 0x0;
        inline std::uintptr_t ObjectFlags = 0x10;
        inline std::uintptr_t InternalIndex = 0x14;
        inline std::uintptr_t ClassPrivate = 0x8;
        inline std::uintptr_t NamePrivate = 0x18;
        inline std::uintptr_t OuterPrivate = 0x20;
    }

    namespace World
    {
        inline std::uintptr_t Levels = 0x1D8;
        inline std::uintptr_t OwningGameInstance = 0x238;
        inline std::uintptr_t PersistentLevel = 0x38;
        inline std::uintptr_t Seconds = 0x188;
        inline std::uintptr_t CameraLocationPointer = 0x168;
        inline std::uintptr_t CameraRotationPointer = 0x178;
        inline constexpr std::uintptr_t LocationPointer = 0x168;
        inline constexpr std::uintptr_t RotationPointer = 0x178;
        inline std::uintptr_t NetDriver = 0x40;
        inline std::uintptr_t AuthorityGameMode = 0x1B8;
        inline std::uintptr_t NetworkManager = 0x60;
        inline std::uintptr_t PhysicsCollisionHandler = 0x68;
        inline std::uintptr_t NavigationSystem = 0x1B0;
        inline std::uintptr_t StreamingLevels = 0xA0;
        inline std::uintptr_t ParameterCollectionInstances = 0x240;
    }

    namespace GameInstance
    {
        inline std::uintptr_t LocalPlayers = 0x38;
    }

    namespace GameStateBase
    {
        inline std::uintptr_t PlayerArray = 0x290;
        inline std::uintptr_t ReplicatedWorldTimeSecondsDouble = 0x2A8;
    }

    namespace LocalPlayer
    {
        inline std::uintptr_t PlayerController = 0x30;
        inline std::uintptr_t ViewportClient = 0x78;
        inline std::uintptr_t ViewState = 0x250;
    }

    namespace PlayerController
    {
        inline std::uintptr_t PlayerCameraManager = 0x330;
        inline std::uintptr_t AcknowledgedPawn = 0x320;
        inline std::uintptr_t RotationInput = 0x4B8;
        inline std::uintptr_t NetConnection = 0x4B0;
        inline std::uintptr_t CheatManager = 0x3E0;
        inline std::uintptr_t HUD = 0x328;
        inline std::uintptr_t Player = 0x318;
        inline std::uintptr_t InputYawScale = 0x4D0;
        inline std::uintptr_t InputPitchScale = 0x4D4;
        inline std::uintptr_t InputRollScale = 0x4D8;
        inline std::uintptr_t SpectatorPawn = 0x660;
        inline std::uintptr_t bShowMouseCursor = 0x4DC;
        inline std::uintptr_t CameraFOVScale = 0x37C;
    }

    namespace FortPlayerController
    {
        inline std::uintptr_t TargetedFortPawn = 0x1750;
        inline std::uintptr_t PlayerAimOffset = 0x23A0;
        inline std::uintptr_t WeaponOffsetCorrection = 0x23D0;
        inline std::uintptr_t AdditionalAimOffset = 0x2370;
        inline std::uintptr_t InteractionComponent = 0x2958;
        inline std::uintptr_t WeaponRecoilOffset = 0x23B8;
        inline std::uintptr_t LocationUnderReticle = 0x2218;
    }

    namespace PlayerState
    {
        inline std::uintptr_t PawnPrivate = 0x2F0;
        inline std::uintptr_t PlayerName = 0x310;
        inline std::uintptr_t PlayerNamePrivate = 0x310;
        inline std::uintptr_t bIsABot = 0x282;
        inline std::uint8_t bIsABotMask = 0x8;
    }

    namespace Pawn
    {
        inline std::uintptr_t PlayerState = 0x298;
        inline std::uintptr_t Controller = 0x2A8;
        inline std::uintptr_t BaseEyeHeight = 0x284;
        inline std::uintptr_t RemoteViewPitch = 0x28C;
        inline std::uintptr_t AutoPossessPlayer = 0x288;
        inline std::uintptr_t AutoPossessAI = 0x289;
        inline std::uintptr_t AIControllerClass = 0x290;
        inline std::uintptr_t LastHitBy = 0x2A0;
        inline std::uintptr_t bUseControllerRotationYaw = 0x280;
    }

    namespace Actor
    {
        inline std::uintptr_t RootComponent = 0x1B0;
        inline std::uintptr_t CustomTimeDilation = 0x68;
        inline std::uintptr_t Owner = 0x158;
        inline std::uintptr_t Instigator = 0x198;
        inline std::uintptr_t Children = 0x1A0;
        inline std::uintptr_t ParentComponent = 0x1E0;
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
        inline std::uintptr_t Mesh = 0x2F8;
        inline std::uintptr_t CharacterMovement = 0x300;
        inline std::uintptr_t bIsCrouched = 0x440; // shared bitfield byte
        inline std::uintptr_t CapsuleComponent = 0x308;
        inline std::uintptr_t BasedMovement = 0x310;
        inline std::uintptr_t ReplicatedBasedMovement = 0x368;
        inline std::uintptr_t AnimRootMotionTranslationScale = 0x438;
        inline std::uintptr_t ProxyJumpForceStartedTime = 0x44C;
        inline std::uintptr_t JumpMaxCount = 0x454;
    }

    namespace PrimitiveComponent
    {
        inline std::uintptr_t LastRenderTime = 0x328;
    }

    namespace SceneComponent
    {
        inline std::uintptr_t RelativeLocation = 0x140;
        inline std::uintptr_t ComponentVelocity = 0x188;
        inline std::uintptr_t ComponentToWorld = 0x1E0;
        inline std::uintptr_t bComponentToWorldUpdated = 0x1A0;
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
        inline std::uintptr_t BoneArray = 0x650;
        inline std::uintptr_t BoneCache = 0x660;
        inline std::uintptr_t CurrentReadComponentTransforms = 0x6B8;
        inline std::uintptr_t CachedComponentSpaceTransforms = 0xA40;
        inline std::uintptr_t GlobalAnimRateScale = 0xA74;
    }

    namespace FortPlayerState
    {
        inline std::uintptr_t HabaneroComponent = 0x920;
        inline std::uintptr_t Platform = 0x408;
    }

    namespace FortPlayerStateAthena
    {
        inline std::uintptr_t TeamIndex = 0xF81;
        inline std::uintptr_t RebootCount = 0x1624;
        inline std::uintptr_t KillScore = 0xF98;
        inline std::uintptr_t SeasonLevelUIDisplay = 0xF9C;
    }

    namespace FortPlayerStateComponent_Habanero
    {
        inline std::uintptr_t RankedProgress = 0xD8;
    }

    namespace FortPawn
    {
        inline std::uintptr_t bIsDying = 0x738;
        inline std::uintptr_t bIsDBNO = 0x892;
        inline std::uintptr_t CurrentWeapon = 0x9E0;
        inline std::uintptr_t LastDamagedTime = 0xE40;
        inline std::uintptr_t CurrentWeaponList = 0xA18;
        inline std::uintptr_t HealthSet = 0x1430;
    }

    namespace FortPlayerPawnAthena
    {
        inline std::uintptr_t CurrentVehicle = 0x2CE0;
        inline std::uintptr_t bIsParachuteOpen = 0x2350;
        inline std::uintptr_t bIsSkydiving = 0x234F;
        inline std::uintptr_t bIsSliding = 0x768;
        inline std::uintptr_t ReviveFromDBNOTime = 0x4E30;
        inline std::uintptr_t bADSWhileNotOnGround = 0x5851;
        inline std::uintptr_t bHasStartedFloating = 0x299C;
    }

    namespace PlayerCameraManager
    {
        inline std::uintptr_t CameraLocation = 0x15B0;
        inline std::uintptr_t CameraRotation = 0x15C8;
        inline std::uintptr_t CameraFOV = 0x15E0;
        inline std::uintptr_t PendingViewTarget = 0xC40;
        inline std::uintptr_t LastFrameCameraCachePrivate = 0x1EC0;
        inline std::uintptr_t DefaultFOV = 0x28C;
        inline std::uintptr_t DefaultAspectRatio = 0x29C;
        inline std::uintptr_t ViewTarget = 0x310;
        inline std::uintptr_t CameraCachePrivate = 0x15A0;
        inline std::uintptr_t bDefaultConstrainAspectRatio = 0x28B8;
    }

    namespace FCameraCacheEntry
    {
        inline std::uintptr_t POV = 0x10;
    }

    namespace FMinimalViewInfo
    {
        inline std::uintptr_t Location = 0x0;
        inline std::uintptr_t Rotation = 0x18;
        inline std::uintptr_t FOV = 0x30;
    }

    namespace FortWeapon
    {
        inline std::uintptr_t WeaponData = 0x6D0;
        inline std::uintptr_t AmmoCount = 0x11E0;
        inline std::uintptr_t bIsReloadingWeapon = 0x379;
        inline std::uintptr_t LastFireTime = 0x10DC;
        inline std::uintptr_t LastFireTimeVerified = 0x10E4;
        inline std::uintptr_t bIsChargingWeapon = 0x378;
        inline std::uintptr_t WeaponLevel = 0x11A0;
        inline std::uintptr_t LastFireAbilityTime = 0x165C;
        inline std::uintptr_t CurrentReloadDuration = 0x1178;
        inline std::uintptr_t bIsReloading = 0x379;
        inline std::uintptr_t CurrentCharge = 0x1208;
        inline std::uintptr_t ChargeTime = 0x1204;
    }

    namespace FortControllerComponent_Interaction
    {
        inline std::uintptr_t StartInteractTime = 0x290;
    }

    namespace FortAthenaVehicle
    {
        inline std::uintptr_t bUseGravity = 0x86F;
        inline std::uintptr_t LifespanAfterDeath = 0x10D0;
        inline std::uintptr_t VehicleAttributes = 0x1320;
    }

    namespace FortHoagieVehicle
    {
        inline std::uintptr_t ServerCriticalHealth = 0x1C5C;
    }

    namespace FortItemDefinition
    {
        inline std::uintptr_t ItemName = 0x38;
        inline std::uintptr_t RarityStruct = 0x19C10580;
        inline std::uintptr_t ItemType = 0x98;
        inline std::uintptr_t PrimaryAssetIdItemTypeOverride = 0x99;
        inline std::uintptr_t DisplayName = 0x38;
    }

    namespace BuildingContainer
    {
        inline std::uintptr_t bAlreadySearched = 0xD2A;
        inline std::uintptr_t SearchedFlags = 0xD2A; // shared bitfield byte
        inline std::uintptr_t SpawnSourceOverride = 0xBC0;
        inline std::uintptr_t SearchText = 0xD80;
        inline std::uintptr_t ChosenRandomUpgrade = 0xC0C;
    }

    namespace FortPickup
    {
        inline std::uintptr_t PrimaryPickupItemEntry = 0x370;
        inline std::uintptr_t SimulatingTooLongLength = 0x298;
        inline std::uintptr_t PickupLocationData = 0x418;
        inline std::uintptr_t bPickedUp = 0x294;
        inline std::uintptr_t PickupFlags = 0x294; // shared bitfield byte
        inline std::uintptr_t PickupExtendedFlags = 0x295; // shared bitfield byte
    }

    namespace FortItemEntry
    {
        inline std::uintptr_t ItemDefinition = 0x10;
    }

    namespace FortWeaponItemDefinition
    {
        inline std::uintptr_t DisplayTier = 0x296;
        inline std::uintptr_t Rarity = 0x296;
    }

    namespace Level
    {
        inline std::uintptr_t OwningWorld = 0xD0;
        inline std::uintptr_t Model = 0xD8;
        inline std::uintptr_t ModelComponents = 0xE0;
        inline std::uintptr_t LevelScriptActor = 0x100;
        inline std::uintptr_t WorldSettings = 0x2C8;
        inline std::uintptr_t NavListStart = 0x108;
        inline std::uintptr_t NavListEnd = 0x110;
    }

    namespace Controller
    {
        inline std::uintptr_t ControlRotation = 0x2F0;
    }

    namespace FortPickupLocationData
    {
        inline std::uintptr_t TossState = 0xC0;
    }
}
