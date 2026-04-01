// BlueprintGeneratedClass Comp_MatchResults_StayedInSpawn.Comp_MatchResults_StayedInSpawn_C
// Size: 0xfc (Inherited: 0xe4)
struct UComp_MatchResults_StayedInSpawn_C : UBaseMatchResults_C {
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FName Stayed In Spawn Round Event Type; // 0xf0(0x0c)

	void RegisterStayedInSpawnEvent(); // Function Comp_MatchResults_StayedInSpawn.Comp_MatchResults_StayedInSpawn_C.RegisterStayedInSpawnEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddRoundEvents(int32_t RoundNum); // Function Comp_MatchResults_StayedInSpawn.Comp_MatchResults_StayedInSpawn_C.AddRoundEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_MatchResults_StayedInSpawn.Comp_MatchResults_StayedInSpawn_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_MatchResults_StayedInSpawn(int32_t EntryPoint); // Function Comp_MatchResults_StayedInSpawn.Comp_MatchResults_StayedInSpawn_C.ExecuteUbergraph_Comp_MatchResults_StayedInSpawn // (Final|UbergraphFunction) // @ game+0x1b42740
};

