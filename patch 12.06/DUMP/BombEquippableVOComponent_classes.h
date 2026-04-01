// BlueprintGeneratedClass BombEquippableVOComponent.BombEquippableVOComponent_C
// Size: 0x1f8 (Inherited: 0xd8)
struct UBombEquippableVOComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct ABombEquippable_C* OwningBombEquippable; // 0xe0(0x08)
	struct FVector LastSightedLocation; // 0xe8(0x18)
	double BombLeftOnGroundVODistance; // 0x100(0x08)
	struct FVector BombLeftOnGroundVOLocation; // 0x108(0x18)
	bool ShouldPlayBombLeftOnGroundVO; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UVisibilityComponent* VisibilityComponent; // 0x128(0x08)
	struct TMap<struct AShooterCharacter*, double> CharacterDroppedTimestamps; // 0x130(0x50)
	double BombDroppedCooldownTime; // 0x180(0x08)
	struct TMap<struct AShooterCharacter*, double> CharacterPickedUpTimestamps; // 0x188(0x50)
	double BombPickedUpCooldownTime; // 0x1d8(0x08)
	double DistanceFromLastSightedLocationToTriggerVO; // 0x1e0(0x08)
	bool PickupVOEnabled; // 0x1e8(0x01)
	bool DroppedVOEnabled; // 0x1e9(0x01)
	char pad_1EA[0x6]; // 0x1ea(0x06)
	double SecondsUntilBombSpottedVOPlays; // 0x1f0(0x08)

	void Get Bomb Region(enum class ECalloutSuperRegion& Region); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.Get Bomb Region // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetLivingCharacters(struct TArray<struct AShooterCharacter*>& Characters, struct TArray<struct AShooterCharacter*>& Living Characters); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.GetLivingCharacters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void MakeChatMsg(struct FText Character Name, enum class ECalloutSuperRegion Super Region, struct FText& ChatMessage); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.MakeChatMsg // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayBombLeftOnGroundVOIfNeeded(); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.PlayBombLeftOnGroundVOIfNeeded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnOwnerEnteredTeamSight(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnOwnerEnteredTeamSight // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombDropped(struct AShooterCharacter* OldCharacter); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombPickedUp(struct AShooterCharacter* Character); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCharacterNameEvent(struct UCharacterHandle* CharacterHandle); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.GetCharacterNameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombEquippableVOComponent(int32_t EntryPoint); // Function BombEquippableVOComponent.BombEquippableVOComponent_C.ExecuteUbergraph_BombEquippableVOComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

