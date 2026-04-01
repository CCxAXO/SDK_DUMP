// BlueprintGeneratedClass CloserCeremony.CloserCeremony_C
// Size: 0x498 (Inherited: 0x480)
struct ACloserCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	double MinTimeForOneVsOne; // 0x488(0x08)
	struct AShooterPlayerState* CloserPlayer; // 0x490(0x08)

	void GetFocusPlayer(struct AShooterPlayerState*& Ceremony Player); // Function CloserCeremony.CloserCeremony_C.GetFocusPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function CloserCeremony.CloserCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UserConstructionScript_1(); // Function CloserCeremony.CloserCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function CloserCeremony.CloserCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CloserCeremony(int32_t EntryPoint); // Function CloserCeremony.CloserCeremony_C.ExecuteUbergraph_CloserCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

