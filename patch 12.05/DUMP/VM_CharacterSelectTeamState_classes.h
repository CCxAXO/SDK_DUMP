// BlueprintGeneratedClass VM_CharacterSelectTeamState.VM_CharacterSelectTeamState_C
// Size: 0xa8 (Inherited: 0x90)
struct UVM_CharacterSelectTeamState_C : UAresViewModelBase {
	struct TArray<struct UVM_CharacterSelectPlayerState_C*> PlayerStateVMs; // 0x90(0x10)
	struct UPregameTeamModel* TeamModel; // 0xa0(0x08)

	void IsLocalPlayer(int32_t PlayerIndex, bool& IsLocalPlayer); // Function VM_CharacterSelectTeamState.VM_CharacterSelectTeamState_C.IsLocalPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetIndexOfLocalPlayer(int32_t& LocalIndex); // Function VM_CharacterSelectTeamState.VM_CharacterSelectTeamState_C.GetIndexOfLocalPlayer // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void HandlePlayerAddedOrRemoved(struct UPregamePlayerModel* AddedPlayer); // Function VM_CharacterSelectTeamState.VM_CharacterSelectTeamState_C.HandlePlayerAddedOrRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayerStates(); // Function VM_CharacterSelectTeamState.VM_CharacterSelectTeamState_C.UpdatePlayerStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindPlayersToModelAndInitializeVMs(struct UPregameViewController* PregameController, struct TArray<struct UWBP_View_CharacterSelectTeamMemberState_C*>& TeamMemberStates); // Function VM_CharacterSelectTeamState.VM_CharacterSelectTeamState_C.BindPlayersToModelAndInitializeVMs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPregameViewController* PregameController); // Function VM_CharacterSelectTeamState.VM_CharacterSelectTeamState_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

