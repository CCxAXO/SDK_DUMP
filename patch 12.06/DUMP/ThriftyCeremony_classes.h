// BlueprintGeneratedClass ThriftyCeremony.ThriftyCeremony_C
// Size: 0x498 (Inherited: 0x480)
struct AThriftyCeremony_C : ABaseCeremony_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UBaseTeamComponent* SalvagingTeam; // 0x488(0x08)
	int32_t BlueTeamStartingAvgInventoryValue; // 0x490(0x04)
	int32_t RedTeamStartingAvgInventoryValue; // 0x494(0x04)

	void GetFocusTeam(struct UBaseTeamComponent*& Ceremony Team); // Function ThriftyCeremony.ThriftyCeremony_C.GetFocusTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplayCeremony(struct FAresCeremonyDecisionContext& DecisionContext); // Function ThriftyCeremony.ThriftyCeremony_C.ShouldDisplayCeremony // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UserConstructionScript_1(); // Function ThriftyCeremony.ThriftyCeremony_C.UserConstructionScript_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthCheatSetCeremonyDisplayed(bool bShouldDisplay); // Function ThriftyCeremony.ThriftyCeremony_C.AuthCheatSetCeremonyDisplayed // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ThriftyCeremony(int32_t EntryPoint); // Function ThriftyCeremony.ThriftyCeremony_C.ExecuteUbergraph_ThriftyCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

