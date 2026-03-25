// BlueprintGeneratedClass Comp_GameMode_KillVO.Comp_GameMode_KillVO_C
// Size: 0xe8 (Inherited: 0xd8)
struct UComp_GameMode_KillVO_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	bool Throttle Kill VO; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32_t Kill VO Chance; // 0xe4(0x04)

	void OnPlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function Comp_GameMode_KillVO.Comp_GameMode_KillVO_C.OnPlayerKilled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_GameMode_KillVO.Comp_GameMode_KillVO_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_GameMode_KillVO(int32_t EntryPoint); // Function Comp_GameMode_KillVO.Comp_GameMode_KillVO_C.ExecuteUbergraph_Comp_GameMode_KillVO // (Final|UbergraphFunction) // @ game+0x1af5410
};

