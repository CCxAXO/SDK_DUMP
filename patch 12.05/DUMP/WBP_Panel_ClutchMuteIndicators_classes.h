// WidgetBlueprintGeneratedClass WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C
// Size: 0x48c (Inherited: 0x3e0)
struct UWBP_Panel_ClutchMuteIndicators_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Template_ClutchMuteIndicator_C* ClutchMuteIndicator_PartyVoice; // 0x3e8(0x08)
	struct UWBP_Template_ClutchMuteIndicator_C* ClutchMuteIndicator_TeamVoice; // 0x3f0(0x08)
	struct UImage* Img_IsKeybindSet_Party; // 0x3f8(0x08)
	struct UImage* Img_IsKeybindSet_Team; // 0x400(0x08)
	struct UImage* Img_IsLastPlayerAlive; // 0x408(0x08)
	struct UImage* Img_IsPlayerTalking_Party; // 0x410(0x08)
	struct UImage* Img_IsPlayerTalking_Team; // 0x418(0x08)
	struct UIsLastPlayerAliveOnTeamViewModel* IsLastPlayerAliveOnTeamVM; // 0x420(0x08)
	struct UAresIsAnyVoiceParticipantSpeakingViewModel* IsPartyVoiceParticipantSpeakingVM; // 0x428(0x08)
	struct UAreActionBindingsSetViewModel* AreActionBindingsSetVM; // 0x430(0x08)
	struct UAresIsAnyVoiceParticipantSpeakingViewModel* IsTeamVoiceParticipantSpeakingVM; // 0x438(0x08)
	struct FName PartyClutchMuteActionName; // 0x440(0x0c)
	struct FName TeamClutchMuteActionName; // 0x44c(0x0c)
	struct FSlateColor DebugColor_False; // 0x458(0x14)
	struct FSlateColor DebugColor_True; // 0x46c(0x14)
	struct UVoiceChannelMuteChangeViewModel* VoiceChannelMuteChangeVM; // 0x480(0x08)
	int32_t MaxNumberOfKeybindSlotsForClutchMute; // 0x488(0x04)

	void HideIndicators(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.HideIndicators // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsClutchMutePromptEnabled(bool& Return Value); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.IsClutchMutePromptEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ResetViewModels(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.ResetViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.InitViewModels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModels(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleChannelMuteChanged(bool bIsPartyMuted, bool bIsTeamMuted); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.HandleChannelMuteChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClutchMuteIndicatorShouldBeVisible(bool bIsMuted, bool bIsLastAlive, bool bTeammateTalking, bool bHasBind, bool& ShouldShow); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.ClutchMuteIndicatorShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDebugView(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.UpdateDebugView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleActionBindingChanged(struct FName ActionKeyName, bool bIsActionBindSet); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.HandleActionBindingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleVoiceParticipantSpeakingChanged(bool bIsAnySpeaking); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.HandleVoiceParticipantSpeakingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshView(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.RefreshView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleLastPlayerAliveOnTeamChanged(bool bIsLastPlayerAlive); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.HandleLastPlayerAliveOnTeamChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ClutchMuteIndicators(int32_t EntryPoint); // Function WBP_Panel_ClutchMuteIndicators.WBP_Panel_ClutchMuteIndicators_C.ExecuteUbergraph_WBP_Panel_ClutchMuteIndicators // (Final|UbergraphFunction) // @ game+0x1af5410
};

