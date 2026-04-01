// BlueprintGeneratedClass EnemySpottedVOComponent.EnemySpottedVOComponent_C
// Size: 0x261 (Inherited: 0xd8)
struct UEnemySpottedVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<struct AActor*> EnemiesSpottedSinceLastVO; // 0xe0(0x10)
	struct TMap<struct AActor*, enum class ECalloutSuperRegion> EnemySuperRegions; // 0xf0(0x50)
	bool HasQueuedUpVO; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	double SecondsUntilEnemiesSpottedVOPlays; // 0x148(0x08)
	double LastEnemySpottedTimestamp; // 0x150(0x08)
	struct UShooterCharacterVisibilityComponent* VisibilityComponent; // 0x158(0x08)
	struct AShooterCharacter* CharacterToSendVOEventTo; // 0x160(0x08)
	double EnemySpottedCooldown; // 0x168(0x08)
	double DistanceFromLastSightedLocationToTriggerVO; // 0x170(0x08)
	struct FVector LastEnemySpottedLocation; // 0x178(0x18)
	int32_t NumLivingEnemies; // 0x190(0x04)
	enum class ECalloutSuperRegion LastSuperregionOccupied; // 0x194(0x01)
	bool SuperregionUpdated; // 0x195(0x01)
	char pad_196[0x2]; // 0x196(0x02)
	struct TMap<enum class ECalloutSuperRegion, int32_t> NumLivingEnemiesPerRegion; // 0x198(0x50)
	struct TMap<enum class ECalloutSuperRegion, double> NearestSqEnemyPerRegion; // 0x1e8(0x50)
	struct FText CharacterName; // 0x238(0x18)
	int32_t NumLivingEnemiesPerRegionTotal; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct AShooterCharacter* OwnerShooterCharacter; // 0x258(0x08)
	enum class ECalloutSuperRegion SelectedCalloutRegion; // 0x260(0x01)

	void UpdateNearestEnemyPerRegion(struct AActor* Enemy); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.UpdateNearestEnemyPerRegion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SelectCalloutRegion(enum class ECalloutSuperRegion& SuperRegion); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.SelectCalloutRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldPlayEnemySpotted_NoRegionVO(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ShouldPlayEnemySpotted_NoRegionVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool ShouldPlayEnemySpottedVO(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ShouldPlayEnemySpottedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void MakeChatMsg(enum class ECalloutSuperRegion SuperRegionName, bool Plural, struct FText& ChatMessage); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.MakeChatMsg // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CleanupForRespawn(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.CleanupForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PlayEnemiesSpottedVO(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.PlayEnemiesSpottedVO // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnemyEnteredSight(struct AActor* Enemy); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.EnemyEnteredSight // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOwnerEnteredTeamSight(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OnOwnerEnteredTeamSight // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOwnerExitedTeamSight(struct AActor* ActorThatExitedTeamSight); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OnOwnerExitedTeamSight // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeForRespawn(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.InitializeForRespawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetValuesForRespawn(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ResetValuesForRespawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayEnemiesSpottedVOWithRegion(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.PlayEnemiesSpottedVOWithRegion // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCharacterNameEvent(struct UCharacterHandle* CharacterHandle); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.GetCharacterNameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OneTimeInitialization(); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.OneTimeInitialization // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EnemySpottedVOComponent(int32_t EntryPoint); // Function EnemySpottedVOComponent.EnemySpottedVOComponent_C.ExecuteUbergraph_EnemySpottedVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

