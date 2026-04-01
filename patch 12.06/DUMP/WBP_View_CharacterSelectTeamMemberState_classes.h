// WidgetBlueprintGeneratedClass WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C
// Size: 0x3e1 (Inherited: 0x3e0)
struct UWBP_View_CharacterSelectTeamMemberState_C : UAresCommonUserWidget {
	bool HasActivePlayerState; // 0x3e0(0x01)

	void HandlePlayerSubjectChanged(); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.HandlePlayerSubjectChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetVoiceButton(struct UCommonButtonBase*& Return Value); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.GetVoiceButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetHasActivePlayerState(bool& Result); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.GetHasActivePlayerState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandlePlayerStateActiveChanged(bool IsActive); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.HandlePlayerStateActiveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPlayerState(struct UWBP_View_CharacterSelectPlayerState_C*& PlayerState); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.GetPlayerState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetPlatformSpecificVisuals(bool IsMe, bool IsInParty); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.SetPlatformSpecificVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Context Menu(); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.Init Context Menu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeVoiceViewModels(struct UPregamePlayerModel* PlayerModel); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.InitializeVoiceViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindPlayerStateViewModels(); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.BindPlayerStateViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakePlayerStateViewModels(); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.MakePlayerStateViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeViewModels(); // Function WBP_View_CharacterSelectTeamMemberState.WBP_View_CharacterSelectTeamMemberState_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

