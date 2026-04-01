// WidgetBlueprintGeneratedClass WBP_View_CharacterSelectTeamMemberState_PC.WBP_View_CharacterSelectTeamMemberState_PC_C
// Size: 0x410 (Inherited: 0x3e1)
struct UWBP_View_CharacterSelectTeamMemberState_PC_C : UWBP_View_CharacterSelectTeamMemberState_C {
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UGameFlowStateViewModel* GameFlowStateViewModel; // 0x3f0(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x3f8(0x08)
	struct UWBP_View_CharacterSelectPlayerState_C* PlayerState; // 0x400(0x08)
	struct UWBP_VoiceSpeakerButton_Bordered_Desktop_C* WBP_VoiceSpeakerButton_Bordered_Desktop; // 0x408(0x08)

	void GetVoiceButton(struct UCommonButtonBase*& Return Value); // Function WBP_View_CharacterSelectTeamMemberState_PC.WBP_View_CharacterSelectTeamMemberState_PC_C.GetVoiceButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitializeVoiceViewModels(struct UPregamePlayerModel* PlayerModel); // Function WBP_View_CharacterSelectTeamMemberState_PC.WBP_View_CharacterSelectTeamMemberState_PC_C.InitializeVoiceViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlatformSpecificVisuals(bool IsMe, bool IsInParty); // Function WBP_View_CharacterSelectTeamMemberState_PC.WBP_View_CharacterSelectTeamMemberState_PC_C.SetPlatformSpecificVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Context Menu(); // Function WBP_View_CharacterSelectTeamMemberState_PC.WBP_View_CharacterSelectTeamMemberState_PC_C.Init Context Menu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPlayerState(struct UWBP_View_CharacterSelectPlayerState_C*& PlayerState); // Function WBP_View_CharacterSelectTeamMemberState_PC.WBP_View_CharacterSelectTeamMemberState_PC_C.GetPlayerState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnGameFlowStateChanged(enum class EGameFlowStateType CurrentState); // Function WBP_View_CharacterSelectTeamMemberState_PC.WBP_View_CharacterSelectTeamMemberState_PC_C.OnGameFlowStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_View_CharacterSelectTeamMemberState_PC(int32_t EntryPoint); // Function WBP_View_CharacterSelectTeamMemberState_PC.WBP_View_CharacterSelectTeamMemberState_PC_C.ExecuteUbergraph_WBP_View_CharacterSelectTeamMemberState_PC // (Final|UbergraphFunction) // @ game+0x1b42740
};

