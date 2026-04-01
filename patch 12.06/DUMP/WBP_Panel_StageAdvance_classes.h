// WidgetBlueprintGeneratedClass WBP_Panel_StageAdvance.WBP_Panel_StageAdvance_C
// Size: 0x438 (Inherited: 0x3e0)
struct UWBP_Panel_StageAdvance_C : UAresCommonUserWidget {
	struct UImage* Background; // 0x3e0(0x08)
	struct UImage* Background_2; // 0x3e8(0x08)
	struct UImage* Image; // 0x3f0(0x08)
	struct UImage* Image_2; // 0x3f8(0x08)
	struct UImage* Image_3; // 0x400(0x08)
	struct UImage* Image_61; // 0x408(0x08)
	struct UImage* Image_Logo; // 0x410(0x08)
	struct UAresTextBlock* Text_AdvanceStage; // 0x418(0x08)
	struct UAresTextBlock* Text_Name; // 0x420(0x08)
	struct UEsportsMatchupTeamViewModel* TeamViewModel; // 0x428(0x08)
	struct UEsportsMatchupTeamViewModelV2* MatchupTeamViewModelV2; // 0x430(0x08)

	void InitWithViewModelV2(struct UEsportsMatchupTeamViewModelV2* InViewModel, struct FString InStageName); // Function WBP_Panel_StageAdvance.WBP_Panel_StageAdvance_C.InitWithViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_StageAdvance.WBP_Panel_StageAdvance_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithViewModel(struct UEsportsMatchupTeamViewModel* InTeamViewModel, struct FString StageName); // Function WBP_Panel_StageAdvance.WBP_Panel_StageAdvance_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStageAdvancedText(struct FString Stage); // Function WBP_Panel_StageAdvance.WBP_Panel_StageAdvance_C.SetStageAdvancedText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamNameChanged(struct FString InName); // Function WBP_Panel_StageAdvance.WBP_Panel_StageAdvance_C.OnTeamNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamLogoChanged(struct UTexture2D* InLogo); // Function WBP_Panel_StageAdvance.WBP_Panel_StageAdvance_C.OnTeamLogoChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

