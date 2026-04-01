// BlueprintGeneratedClass OTPriority_VoteOption_StartAttacker.OTPriority_VoteOption_StartAttacker_C
// Size: 0x1b8 (Inherited: 0x180)
struct UOTPriority_VoteOption_StartAttacker_C : UGameplayVoteOptionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct FText SelectedAllyNotificationText; // 0x188(0x18)
	struct FText SelectedEnemyNotificationText; // 0x1a0(0x18)

	void AuthUpdateVotesNeeded(); // Function OTPriority_VoteOption_StartAttacker.OTPriority_VoteOption_StartAttacker_C.AuthUpdateVotesNeeded // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelected(); // Function OTPriority_VoteOption_StartAttacker.OTPriority_VoteOption_StartAttacker_C.OnSelected // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_OTPriority_VoteOption_StartAttacker(int32_t EntryPoint); // Function OTPriority_VoteOption_StartAttacker.OTPriority_VoteOption_StartAttacker_C.ExecuteUbergraph_OTPriority_VoteOption_StartAttacker // (Final|UbergraphFunction) // @ game+0x1b42740
};

