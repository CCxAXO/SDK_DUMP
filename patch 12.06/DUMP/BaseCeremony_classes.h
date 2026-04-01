// BlueprintGeneratedClass BaseCeremony.BaseCeremony_C
// Size: 0x480 (Inherited: 0x460)
struct ABaseCeremony_C : AAresCeremony {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	enum class CeremonyIdentifier CeremonyIdentifier; // 0x468(0x01)
	bool bShouldDisplayCeremony; // 0x469(0x01)
	char pad_46A[0x6]; // 0x46a(0x06)
	struct FMulticastInlineDelegate OnShouldDisplayCeremony; // 0x470(0x10)

	void GetFocusTeam(struct UBaseTeamComponent*& Ceremony Team); // Function BaseCeremony.BaseCeremony_C.GetFocusTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFocusPlayer(struct AShooterPlayerState*& Ceremony Player); // Function BaseCeremony.BaseCeremony_C.GetFocusPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRep_bShouldDisplayCeremony(); // Function BaseCeremony.BaseCeremony_C.OnRep_bShouldDisplayCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function BaseCeremony.BaseCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function BaseCeremony.BaseCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseCeremony(int32_t EntryPoint); // Function BaseCeremony.BaseCeremony_C.ExecuteUbergraph_BaseCeremony // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnShouldDisplayCeremony__DelegateSignature(struct AAresCeremony* ChosenCeremony); // Function BaseCeremony.BaseCeremony_C.OnShouldDisplayCeremony__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

