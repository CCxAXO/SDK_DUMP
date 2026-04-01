// BlueprintGeneratedClass TimeoutYesOption.TimeoutYesOption_C
// Size: 0x190 (Inherited: 0x180)
struct UTimeoutYesOption_C : UGameplayVoteOptionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	double TimeoutDuration; // 0x188(0x08)

	void AuthSendTimeoutClientNotifications(struct UBaseTeamComponent* RequestingTeam, struct ATimeoutVote_C* TimeoutVote); // Function TimeoutYesOption.TimeoutYesOption_C.AuthSendTimeoutClientNotifications // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelected(); // Function TimeoutYesOption.TimeoutYesOption_C.OnSelected // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TimeoutYesOption(int32_t EntryPoint); // Function TimeoutYesOption.TimeoutYesOption_C.ExecuteUbergraph_TimeoutYesOption // (Final|UbergraphFunction) // @ game+0x1b42740
};

