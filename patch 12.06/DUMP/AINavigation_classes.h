// Class AINavigation.GeneratedNavDropOffLinks
// Size: 0x480 (Inherited: 0x460)
struct AGeneratedNavDropOffLinks : AActor {
	char pad_460[0x10]; // 0x460(0x10)
	struct TArray<struct FGeneratedNavigationLinkInfo> PointLinks; // 0x470(0x10)
};

// Class AINavigation.FastGeneratedNavDropOffLinks
// Size: 0x4d0 (Inherited: 0x480)
struct AFastGeneratedNavDropOffLinks : AGeneratedNavDropOffLinks {
	struct TMap<struct FIntPoint, struct FNavLinkArray> TilesToNavLinks; // 0x480(0x50)
};

// Class AINavigation.JumpingPathFollowingComponent
// Size: 0x388 (Inherited: 0x310)
struct UJumpingPathFollowingComponent : UPathFollowingComponent {
	struct FMulticastInlineDelegate OnPathChanged; // 0x310(0x10)
	struct FMulticastInlineDelegate OnEnterNavFlyLink; // 0x320(0x10)
	struct FMulticastInlineDelegate OnExitNavFlyLink; // 0x330(0x10)
	float FlyingAcceptanceRadius; // 0x340(0x04)
	float HeightAcceptanceModifier; // 0x344(0x04)
	struct FMulticastInlineDelegate JumpSignal; // 0x348(0x10)
	struct FMulticastInlineDelegate CrouchSignal; // 0x358(0x10)
	struct UObject* DebuggerClass; // 0x368(0x08)
	struct UCharacterMovementComponent* CharacterMoveComp; // 0x370(0x08)
	struct UObject* DebuggerObject; // 0x378(0x08)
	char pad_380[0x8]; // 0x380(0x08)

	void OnPostProcessMove(struct UPathFollowingComponent* PathFollower, struct FVector& InOutVelocity); // Function AINavigation.JumpingPathFollowingComponent.OnPostProcessMove // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x5314200
};

// Class AINavigation.NavArea_Crouch
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Crouch : UNavArea {
};

// Class AINavigation.NavArea_FallDamage
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_FallDamage : UNavArea {
};

// Class AINavigation.NavArea_Fly
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Fly : UNavArea {
};

// Class AINavigation.NavArea_Jump
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_Jump : UNavArea {
};

// Class AINavigation.NavArea_JumpWithFallDamage
// Size: 0x50 (Inherited: 0x50)
struct UNavArea_JumpWithFallDamage : UNavArea_Jump {
};

// Class AINavigation.NavFilter_Dropper
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_Dropper : UNavigationQueryFilter {
};

// Class AINavigation.NavFilter_Flyer
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_Flyer : UNavigationQueryFilter {
};

// Class AINavigation.NavFilter_Jumper
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_Jumper : UNavigationQueryFilter {
};

// Class AINavigation.NavFilter_Jumper_IgnoreFallDamage
// Size: 0x50 (Inherited: 0x50)
struct UNavFilter_Jumper_IgnoreFallDamage : UNavFilter_Jumper {
};

// Class AINavigation.NavFilter_QuerierClassOverrides
// Size: 0x60 (Inherited: 0x50)
struct UNavFilter_QuerierClassOverrides : UNavigationQueryFilter {
	struct TArray<struct FNavQuerierClassOverride> QuerierClassOverrides; // 0x50(0x10)
};

// Class AINavigation.NavLinkDropOff
// Size: 0x490 (Inherited: 0x460)
struct ANavLinkDropOff : AActor {
	char pad_460[0x10]; // 0x460(0x10)
	float DropOffDistance; // 0x470(0x04)
	float MaxDropOff; // 0x474(0x04)
	float MaxJumpHeight; // 0x478(0x04)
	char pad_47C[0x14]; // 0x47c(0x14)
};

// Class AINavigation.NavLinkDropOffGenerator
// Size: 0x4a0 (Inherited: 0x460)
struct ANavLinkDropOffGenerator : AActor {
	float DropOffSeparation; // 0x460(0x04)
	float DropOffDistance; // 0x464(0x04)
	float MaxStepUpHeight; // 0x468(0x04)
	float MinStepDownHeight; // 0x46c(0x04)
	float MaxDropOff; // 0x470(0x04)
	float MaxJumpHeight; // 0x474(0x04)
	float FallDamageHeight; // 0x478(0x04)
	float BaseLift; // 0x47c(0x04)
	float BaseBackOff; // 0x480(0x04)
	struct FName IgnoreObjectsWithTag; // 0x484(0x0c)
	struct AGeneratedNavDropOffLinks* GeneratedNavDropOffLinksClass; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)

	void OnNavigationGenerated(struct ANavigationData* NavData); // Function AINavigation.NavLinkDropOffGenerator.OnNavigationGenerated // (Final|Native|Private) // @ game+0x35441f0
	void OnBuildStarted(); // Function AINavigation.NavLinkDropOffGenerator.OnBuildStarted // (Final|Native|Private) // @ game+0x53156f0
	bool HasValidData(); // Function AINavigation.NavLinkDropOffGenerator.HasValidData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5315830
	bool DoesMapHaveHealthyJumpLinks(); // Function AINavigation.NavLinkDropOffGenerator.DoesMapHaveHealthyJumpLinks // (Final|Native|Public|BlueprintCallable) // @ game+0x5315800
};

// Class AINavigation.NavLinkDropOffIgnoreVolumeBase
// Size: 0x468 (Inherited: 0x460)
struct ANavLinkDropOffIgnoreVolumeBase : AActor {
	struct UBoxComponent* IgnoreVolume; // 0x460(0x08)
};

// Class AINavigation.NavLinkDropOffIgnoreVolume
// Size: 0x468 (Inherited: 0x468)
struct ANavLinkDropOffIgnoreVolume : ANavLinkDropOffIgnoreVolumeBase {
};

// Class AINavigation.PathFollowingDebuggerInterface
// Size: 0x30 (Inherited: 0x30)
struct UPathFollowingDebuggerInterface : UInterface {
};

