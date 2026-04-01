// BlueprintGeneratedClass GameplayVoteBase.GameplayVoteBase_C
// Size: 0x6f8 (Inherited: 0x588)
struct AGameplayVoteBase_C : AGameplayVote {
	enum class Enum_Vote_DisplayMode DisplayMode; // 0x588(0x01)
	enum class Enum_Vote_Max_Participants MaxParticipants; // 0x589(0x01)
	char pad_58A[0x6]; // 0x58a(0x06)
	struct FText VoteTitle; // 0x590(0x18)
	struct FText ObserverTitle; // 0x5a8(0x18)
	struct FText Description; // 0x5c0(0x18)
	struct FText ObserverDescription; // 0x5d8(0x18)
	struct FText BannerText; // 0x5f0(0x18)
	struct FText YesVotesNeeded; // 0x608(0x18)
	struct FText NumVotedYes; // 0x620(0x18)
	struct FText OnVoteStartedNotification; // 0x638(0x18)
	struct FText OnVoteStartedNotificationObserveer; // 0x650(0x18)
	struct FText OnVoteQueuedNotification; // 0x668(0x18)
	struct FText OnVoteRateLimitedNotification; // 0x680(0x18)
	struct FText OnVoteCoachesCannotVoteNotification; // 0x698(0x18)
	struct FText OnVoteAFKPlayersCannotQueueVoteNotification; // 0x6b0(0x18)
	struct FText WidgetResultSuccessConsole; // 0x6c8(0x18)
	struct FText WidgetResultFailConsole; // 0x6e0(0x18)

	struct FText GetAFKNotification(); // Function GameplayVoteBase.GameplayVoteBase_C.GetAFKNotification // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText GetCoachesCannotVoteNotification(); // Function GameplayVoteBase.GameplayVoteBase_C.GetCoachesCannotVoteNotification // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText GetRateLimitedNotification(); // Function GameplayVoteBase.GameplayVoteBase_C.GetRateLimitedNotification // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText GetVoteQueuedNotification(); // Function GameplayVoteBase.GameplayVoteBase_C.GetVoteQueuedNotification // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText GetOnStartedNotificationObserver(); // Function GameplayVoteBase.GameplayVoteBase_C.GetOnStartedNotificationObserver // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText GetOnStartedNotification(); // Function GameplayVoteBase.GameplayVoteBase_C.GetOnStartedNotification // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void GetNumParticipantsVotedYesTextFormatted(struct FText& NumVotedYes); // Function GameplayVoteBase.GameplayVoteBase_C.GetNumParticipantsVotedYesTextFormatted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetYesVotesNeededTextFormatted(struct FText& NumVotesNeeded); // Function GameplayVoteBase.GameplayVoteBase_C.GetYesVotesNeededTextFormatted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetNoOption(struct UGameplayVoteOptionBase_C*& NoOption); // Function GameplayVoteBase.GameplayVoteBase_C.GetNoOption // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetYesOption(struct UGameplayVoteOptionBase_C*& YesOption); // Function GameplayVoteBase.GameplayVoteBase_C.GetYesOption // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void AuthNotifyAllObservers(struct FText NotificationText); // Function GameplayVoteBase.GameplayVoteBase_C.AuthNotifyAllObservers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetVoteResult(bool& HasVoteFinished, struct UGameplayVoteOptionComponent*& SelectedOption); // Function GameplayVoteBase.GameplayVoteBase_C.GetVoteResult // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthNotifyAllParticipants(struct FText NotificationText); // Function GameplayVoteBase.GameplayVoteBase_C.AuthNotifyAllParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState, struct FText& OutInvalidText); // Function GameplayVoteBase.GameplayVoteBase_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
};

