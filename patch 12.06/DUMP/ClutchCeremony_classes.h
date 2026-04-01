// BlueprintGeneratedClass ClutchCeremony.ClutchCeremony_C
// Size: 0x498 (Inherited: 0x480)
struct AClutchCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	double MinTimeForOneVsMany; // 0x488(0x08)
	struct AShooterPlayerState* ClutchPlayer; // 0x490(0x08)

	void GetFocusPlayer(struct AShooterPlayerState*& Ceremony Player); // Function ClutchCeremony.ClutchCeremony_C.GetFocusPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function ClutchCeremony.ClutchCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UserConstructionScript_1(); // Function ClutchCeremony.ClutchCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function ClutchCeremony.ClutchCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ClutchCeremony(int32_t EntryPoint); // Function ClutchCeremony.ClutchCeremony_C.ExecuteUbergraph_ClutchCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

