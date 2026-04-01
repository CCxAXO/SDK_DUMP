// BlueprintGeneratedClass Comp_MatchResults_RoundCeremony.Comp_MatchResults_RoundCeremony_C
// Size: 0xfc (Inherited: 0xe4)
struct UComp_MatchResults_RoundCeremony_C : UBaseMatchResults_C {
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FName RoundCeremonyEventType; // 0xf0(0x0c)

	void AddRoundCeremonyEvent(struct AAresCeremony* ChosenCeremony); // Function Comp_MatchResults_RoundCeremony.Comp_MatchResults_RoundCeremony_C.AddRoundCeremonyEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RegisterRoundCeremonyEvent(); // Function Comp_MatchResults_RoundCeremony.Comp_MatchResults_RoundCeremony_C.RegisterRoundCeremonyEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_MatchResults_RoundCeremony.Comp_MatchResults_RoundCeremony_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CeremonyUpdated(struct AAresCeremony* ChosenCeremony); // Function Comp_MatchResults_RoundCeremony.Comp_MatchResults_RoundCeremony_C.CeremonyUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_MatchResults_RoundCeremony(int32_t EntryPoint); // Function Comp_MatchResults_RoundCeremony.Comp_MatchResults_RoundCeremony_C.ExecuteUbergraph_Comp_MatchResults_RoundCeremony // (Final|UbergraphFunction) // @ game+0x1b42740
};

