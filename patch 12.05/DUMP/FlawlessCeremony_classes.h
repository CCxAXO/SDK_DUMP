// BlueprintGeneratedClass FlawlessCeremony.FlawlessCeremony_C
// Size: 0x490 (Inherited: 0x480)
struct AFlawlessCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UBaseTeamComponent* FlawlessTeam; // 0x488(0x08)

	void GetFocusTeam(struct UBaseTeamComponent*& Ceremony Team); // Function FlawlessCeremony.FlawlessCeremony_C.GetFocusTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function FlawlessCeremony.FlawlessCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UserConstructionScript_1(); // Function FlawlessCeremony.FlawlessCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function FlawlessCeremony.FlawlessCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FlawlessCeremony(int32_t EntryPoint); // Function FlawlessCeremony.FlawlessCeremony_C.ExecuteUbergraph_FlawlessCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

