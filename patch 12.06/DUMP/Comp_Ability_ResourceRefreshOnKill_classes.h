// BlueprintGeneratedClass Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C
// Size: 0xec (Inherited: 0xd8)
struct UComp_Ability_ResourceRefreshOnKill_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	int32_t L CurrentKillCount; // 0xe0(0x04)
	int32_t KillsToRefresh; // 0xe4(0x04)
	int32_t Charges Refreshed per Kill; // 0xe8(0x04)

	void OnRep_L CurrentKillCount(); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.OnRep_L CurrentKillCount // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Current Kill Count(int32_t& L CurrentKillCount); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.Get Current Kill Count // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAuthGotKill_Event_1(struct AShooterCharacter* KillerCharacter, struct AShooterCharacter* VictimCharacter, struct UDamageResponse* KillDamageResponse); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.OnAuthGotKill_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EquippableOnSetOwner_Event_1(struct AAresEquippable* Equippable, struct AActor* Owner); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.EquippableOnSetOwner_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Replenish Charge(); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.Replenish Charge // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRoundEnd_Event_1(int32_t RoundNumberEnded); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_Ability_ResourceRefreshOnKill(int32_t EntryPoint); // Function Comp_Ability_ResourceRefreshOnKill.Comp_Ability_ResourceRefreshOnKill_C.ExecuteUbergraph_Comp_Ability_ResourceRefreshOnKill // (Final|UbergraphFunction) // @ game+0x1b42740
};

