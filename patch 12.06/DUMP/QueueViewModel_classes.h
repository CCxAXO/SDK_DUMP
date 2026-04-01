// BlueprintGeneratedClass QueueViewModel.QueueViewModel_C
// Size: 0x8e0 (Inherited: 0xa0)
struct UQueueViewModel_C : UAresPartyViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FMulticastInlineDelegate PartyStateChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate MatchmakingChanged; // 0xb8(0x10)
	struct FTimerHandle TickEventTimer; // 0xc8(0x08)
	struct FDateTime LocalQueueStartTime; // 0xd0(0x08)
	struct FMulticastInlineDelegate OnTimerTick; // 0xd8(0x10)
	struct FMulticastInlineDelegate TimerBeginTicking; // 0xe8(0x10)
	struct FMulticastInlineDelegate RequestLeaveMatchmaking; // 0xf8(0x10)
	struct FMulticastInlineDelegate RequestEnterLobby; // 0x108(0x10)
	enum class ESlateVisibility TimerVisibility; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FText QueueTimerText; // 0x120(0x18)
	struct FAresParty CurrentParty; // 0x138(0x3c0)
	struct FAresParty OldParty; // 0x4f8(0x3c0)
	struct FMulticastInlineDelegate OnLobbyNavigationRequested; // 0x8b8(0x10)
	enum class EWidgetVisibilityOption TopNavQueueTimerVisibleOption; // 0x8c8(0x01)
	char pad_8C9[0x7]; // 0x8c9(0x07)
	struct FMulticastInlineDelegate OnTopNavQueueTimerVisibleOptionChanged; // 0x8d0(0x10)

	enum class ESlateVisibility TopNavQueueTimerVisibility(); // Function QueueViewModel.QueueViewModel_C.TopNavQueueTimerVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void GetTimerVisibilityFlipped(enum class ESlateVisibility& OutVisibility); // Function QueueViewModel.QueueViewModel_C.GetTimerVisibilityFlipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void SetTopNavQueueTimerVisibleOption(enum class EWidgetVisibilityOption InOption); // Function QueueViewModel.QueueViewModel_C.SetTopNavQueueTimerVisibleOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWidgetVisibilityOptionsChanged(struct FShellWidgetVisibilityOptions WidgetVisibilityOptions); // Function QueueViewModel.QueueViewModel_C.OnWidgetVisibilityOptionsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindNavigationModel(); // Function QueueViewModel.QueueViewModel_C.BindNavigationModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestNavigateToLobby(); // Function QueueViewModel.QueueViewModel_C.RequestNavigateToLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToLobby(); // Function QueueViewModel.QueueViewModel_C.NavigateToLobby // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchmakingExited(); // Function QueueViewModel.QueueViewModel_C.OnMatchmakingExited // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UPartyManager* GetPartyManager(); // Function QueueViewModel.QueueViewModel_C.GetPartyManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void TickTimer(); // Function QueueViewModel.QueueViewModel_C.TickTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRequestLeaveMatchmaking(); // Function QueueViewModel.QueueViewModel_C.OnRequestLeaveMatchmaking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRequestEnterLobby(); // Function QueueViewModel.QueueViewModel_C.OnRequestEnterLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchmakingChanged(bool IsMatchmaking); // Function QueueViewModel.QueueViewModel_C.OnMatchmakingChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartyStateChanged(enum class EAresPartyState PartyState); // Function QueueViewModel.QueueViewModel_C.OnPartyStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function QueueViewModel.QueueViewModel_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandlePartyUpdated(); // Function QueueViewModel.QueueViewModel_C.HandlePartyUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function QueueViewModel.QueueViewModel_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function QueueViewModel.QueueViewModel_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_QueueViewModel(int32_t EntryPoint); // Function QueueViewModel.QueueViewModel_C.ExecuteUbergraph_QueueViewModel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnTopNavQueueTimerVisibleOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption InOption); // Function QueueViewModel.QueueViewModel_C.OnTopNavQueueTimerVisibleOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLobbyNavigationRequested__DelegateSignature(); // Function QueueViewModel.QueueViewModel_C.OnLobbyNavigationRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestEnterLobby__DelegateSignature(); // Function QueueViewModel.QueueViewModel_C.RequestEnterLobby__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestLeaveMatchmaking__DelegateSignature(); // Function QueueViewModel.QueueViewModel_C.RequestLeaveMatchmaking__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TimerBeginTicking__DelegateSignature(); // Function QueueViewModel.QueueViewModel_C.TimerBeginTicking__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTimerTick__DelegateSignature(enum class ESlateVisibility Visibility, struct FText DisplayText); // Function QueueViewModel.QueueViewModel_C.OnTimerTick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MatchmakingChanged__DelegateSignature(bool IsMatchmaking); // Function QueueViewModel.QueueViewModel_C.MatchmakingChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PartyStateChanged__DelegateSignature(enum class EAresPartyState PartyState); // Function QueueViewModel.QueueViewModel_C.PartyStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

