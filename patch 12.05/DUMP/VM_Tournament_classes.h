// BlueprintGeneratedClass VM_Tournament.VM_Tournament_C
// Size: 0x148 (Inherited: 0x90)
struct UVM_Tournament_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	enum class EPremierJoinQueueAvailability PremierQueueAvailability; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FText PremierIneligibilityText; // 0xa0(0x18)
	struct UPartyModel* PartyModel; // 0xb8(0x08)
	struct UPremierPartyModel* PremierPartyModel; // 0xc0(0x08)
	struct UPremierScheduledEventModelOld* Premier Scheduled Event Model; // 0xc8(0x08)
	struct FText PremierWaitText; // 0xd0(0x18)
	struct UPremierEventModelOld* PremierEventModel; // 0xe8(0x08)
	struct FDateTime ScheduledEventStartTime; // 0xf0(0x08)
	bool bShowWaitTime; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FDateTime ScheduledEventEndTime; // 0x100(0x08)
	bool Is Roster Party; // 0x108(0x01)
	enum class EPartyViewState Party State; // 0x109(0x01)
	bool Matchmaking; // 0x10a(0x01)
	bool In Premier Tournament; // 0x10b(0x01)
	bool bPartyReadyForTournament; // 0x10c(0x01)
	bool bShouldCheckEventLive; // 0x10d(0x01)
	bool bIsEventLiveTracker; // 0x10e(0x01)
	bool bIsEventLive; // 0x10f(0x01)
	enum class ERosterEventIneligiblityType RosterEventIneligibilityType; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FString Tournament ID; // 0x118(0x10)
	struct FText PremierInfoText; // 0x128(0x18)
	struct FTimerHandle WaitTickTimer; // 0x140(0x08)

	void CREATEDELEGATE_PROXYFUNCTION_1(struct FName& ConfigName); // Function VM_Tournament.VM_Tournament_C.CREATEDELEGATE_PROXYFUNCTION_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInfoText(); // Function VM_Tournament.VM_Tournament_C.UpdateInfoText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateQueueAvailability(); // Function VM_Tournament.VM_Tournament_C.UpdateQueueAvailability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TickTimer(); // Function VM_Tournament.VM_Tournament_C.TickTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateWaitTimer(); // Function VM_Tournament.VM_Tournament_C.UpdateWaitTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleConfigUpdated(struct FName ConfigName); // Function VM_Tournament.VM_Tournament_C.HandleConfigUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FetchInitialPartyModelData(); // Function VM_Tournament.VM_Tournament_C.FetchInitialPartyModelData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleUnreadyPartyForTournamentSuccess(); // Function VM_Tournament.VM_Tournament_C.HandleUnreadyPartyForTournamentSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RequestUnreadyForTournament(); // Function VM_Tournament.VM_Tournament_C.RequestUnreadyForTournament // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleReadyPartyForTournamentSuccess(); // Function VM_Tournament.VM_Tournament_C.HandleReadyPartyForTournamentSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RequestReadyForTournament(); // Function VM_Tournament.VM_Tournament_C.RequestReadyForTournament // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleScheduledEventChanged(struct UPremierScheduledEventModelOld* PremierScheduledEventModel); // Function VM_Tournament.VM_Tournament_C.HandleScheduledEventChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsRosterPartyChanged(bool bIsRosterParty); // Function VM_Tournament.VM_Tournament_C.HandleIsRosterPartyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsOwnerChanged(bool bIsOwner); // Function VM_Tournament.VM_Tournament_C.HandleIsOwnerChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartyStateChanged(enum class EPartyViewState PartyState); // Function VM_Tournament.VM_Tournament_C.HandlePartyStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleQueueIDChanged(struct FString QueueID); // Function VM_Tournament.VM_Tournament_C.HandleQueueIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTournamentIDChanged(struct FString TournamentID); // Function VM_Tournament.VM_Tournament_C.HandleTournamentIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTournamentDataChanged(struct FTournamentData TournamentData); // Function VM_Tournament.VM_Tournament_C.HandleTournamentDataChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsPartyEligibleForPremierChanged(bool bIsEligible); // Function VM_Tournament.VM_Tournament_C.HandleIsPartyEligibleForPremierChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleMatchmakingChanged(bool bMatchmaking); // Function VM_Tournament.VM_Tournament_C.HandleMatchmakingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleInPremierTournamentChanged(bool bInPremierTournament); // Function VM_Tournament.VM_Tournament_C.HandleInPremierTournamentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPremierPartyModel(bool bShouldBind); // Function VM_Tournament.VM_Tournament_C.BindToPremierPartyModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPartyModel(bool bShouldBind); // Function VM_Tournament.VM_Tournament_C.BindToPartyModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_Tournament.VM_Tournament_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_Tournament(int32_t EntryPoint); // Function VM_Tournament.VM_Tournament_C.ExecuteUbergraph_VM_Tournament // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

