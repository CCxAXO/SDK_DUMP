// BlueprintGeneratedClass Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C
// Size: 0x122 (Inherited: 0xd8)
struct UComp_AbilityStatisticsReplicator_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnLocalAbilityCastsUpdated; // 0xe0(0x10)
	bool IsEnabled; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	double UpdateCooldownDuration; // 0xf8(0x08)
	double LastUpdateTime; // 0x100(0x08)
	struct FTimerHandle RetryTimer; // 0x108(0x08)
	struct TArray<struct FCharacterAbilityCastInfo> AbilityCastsThisRound; // 0x110(0x10)
	enum class EAresGamePhase CurrentGamePhase; // 0x120(0x01)
	bool IsInSpawnZone; // 0x121(0x01)

	void OnRep_AbilityCastsThisRound(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnRep_AbilityCastsThisRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GatherAllCastsForLastLife(struct TArray<struct FCharacterAbilityCastInfo>& CastsThisRound); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.GatherAllCastsForLastLife // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GatherAllCastsForReplication(struct TArray<struct FCharacterAbilityCastInfo>& AllCasts); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.GatherAllCastsForReplication // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsEnabled(bool IsEnabled); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.SetIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GatherAllCastsForThisRound(struct TArray<struct FCharacterAbilityCastInfo>& CastsThisRound); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.GatherAllCastsForThisRound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthInitReplication(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.AuthInitReplication // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthReplicateRoundCasts(bool Override Timer); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.AuthReplicateRoundCasts // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void On Character Ability Statistics Changed(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.On Character Ability Statistics Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Inventory Transaction(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.On Inventory Transaction // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Retry Auth Replicate Round Casts(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.Retry Auth Replicate Round Casts // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPhaseChange(enum class EAresGamePhase NewPhase); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnPhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsInSpawnRoomChanged(bool NewIsInSpawn, struct AShooterCharacter* Character); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnIsInSpawnRoomChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_AbilityStatisticsReplicator(int32_t EntryPoint); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.ExecuteUbergraph_Comp_AbilityStatisticsReplicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnLocalAbilityCastsUpdated__DelegateSignature(); // Function Comp_AbilityStatisticsReplicator.Comp_AbilityStatisticsReplicator_C.OnLocalAbilityCastsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

