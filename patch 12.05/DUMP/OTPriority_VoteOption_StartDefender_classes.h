// BlueprintGeneratedClass OTPriority_VoteOption_StartDefender.OTPriority_VoteOption_StartDefender_C
// Size: 0x1b8 (Inherited: 0x180)
struct UOTPriority_VoteOption_StartDefender_C : UGameplayVoteOptionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FText SelectedAllyNotificationText; // 0x188(0x18)
	struct FText SelectedEnemyNotificationText; // 0x1a0(0x18)

	void AuthUpdateVotesNeeded(); // Function OTPriority_VoteOption_StartDefender.OTPriority_VoteOption_StartDefender_C.AuthUpdateVotesNeeded // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSelected(); // Function OTPriority_VoteOption_StartDefender.OTPriority_VoteOption_StartDefender_C.OnSelected // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OTPriority_VoteOption_StartDefender(int32_t EntryPoint); // Function OTPriority_VoteOption_StartDefender.OTPriority_VoteOption_StartDefender_C.ExecuteUbergraph_OTPriority_VoteOption_StartDefender // (Final|UbergraphFunction) // @ game+0x1af5410
};

