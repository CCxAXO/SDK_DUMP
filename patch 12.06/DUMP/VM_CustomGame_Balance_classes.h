// BlueprintGeneratedClass VM_CustomGame_Balance.VM_CustomGame_Balance_C
// Size: 0xd0 (Inherited: 0x90)
struct UVM_CustomGame_Balance_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UCustomGameModel* CustomGameModel; // 0x98(0x08)
	struct UPartyModel* PartyModel; // 0xa0(0x08)
	bool bVisible; // 0xa8(0x01)
	bool bEnabled; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct FMulticastInlineDelegate OnVisibleChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnEnabledChanged; // 0xc0(0x10)

	void UpdateEnabledBasedOnCustomGameState(); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.UpdateEnabledBasedOnCustomGameState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisibleBasedOnPartyState(); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.UpdateVisibleBasedOnPartyState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEnabled(bool NewEnabled); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVisible(bool NewVisible); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.SetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EmptyErrorCallback(struct FString ReasonStringInDebugOnly); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.EmptyErrorCallback // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EmptyCallback(); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.EmptyCallback // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AutobalanceTeams(); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.AutobalanceTeams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerAddedToTeamOne_Event_1(struct UPartyPlayerModel* Player); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.OnPlayerAddedToTeamOne_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerRemovedFromTeamOne_Event_1(struct UPartyPlayerModel* Player); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.OnPlayerRemovedFromTeamOne_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerAddedToTeamTwo_Event_1(struct UPartyPlayerModel* Player); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.OnPlayerAddedToTeamTwo_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerRemovedFromTeamTwo_Event_1(struct UPartyPlayerModel* Player); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.OnPlayerRemovedFromTeamTwo_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMyTeamChanged(enum class ECustomGameTeam Team); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.OnMyTeamChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_CustomGame_Balance(int32_t EntryPoint); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.ExecuteUbergraph_VM_CustomGame_Balance // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnEnabledChanged__DelegateSignature(bool NewEnabled); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.OnEnabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnVisibleChanged__DelegateSignature(bool NewVisible); // Function VM_CustomGame_Balance.VM_CustomGame_Balance_C.OnVisibleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

