// BlueprintGeneratedClass Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C
// Size: 0x1b4 (Inherited: 0xe4)
struct UComp_MatchResults_Abilities_C : UBaseMatchResults_C {
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TMap<struct AAresEquippable*, struct AShooterPlayerState*> AbilityUsageMap; // 0xf0(0x50)
	struct TMap<struct FString, struct UMatchResultAbilityCastCountObject_C*> AbilityCasts; // 0x140(0x50)
	struct FName AbilityInfoEventType; // 0x190(0x0c)
	struct FName AbilityUsageEventType; // 0x19c(0x0c)
	struct FName AbilityDetailsEventType; // 0x1a8(0x0c)

	void CountAbilityUsed(struct AAresEquippable* Equippable); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.CountAbilityUsed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeAbilityUsageEvent(struct AShooterPlayerState* Player State); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.InitializeAbilityUsageEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddAbilityDetailsEvent(struct UGameStatisticsComponent* Stats Component); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.AddAbilityDetailsEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddAbilityDetails(); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.AddAbilityDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddAbilityUsageEvent(); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.AddAbilityUsageEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddAbilityTrackingEvent(enum class EAresItemSlot ItemSlot, struct UGameStatisticsComponent* StatComponent, int32_t Round, struct AShooterPlayerState* PlayerState); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.AddAbilityTrackingEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddAbilityTracking(int32_t Round); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.AddAbilityTracking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RegisterAbilityDetailsEvent(); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.RegisterAbilityDetailsEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RegisterAbilityUsageEvent(); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.RegisterAbilityUsageEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RegisterAbilityEvent(); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.RegisterAbilityEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerSpawned(struct APawn* SpawnedPawn); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.OnPlayerSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRoundEnd(int32_t RoundNumberEnding); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchResultsCollected(); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.OnMatchResultsCollected // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_MatchResults_Abilities(int32_t EntryPoint); // Function Comp_MatchResults_Abilities.Comp_MatchResults_Abilities_C.ExecuteUbergraph_Comp_MatchResults_Abilities // (Final|UbergraphFunction) // @ game+0x1af5410
};

