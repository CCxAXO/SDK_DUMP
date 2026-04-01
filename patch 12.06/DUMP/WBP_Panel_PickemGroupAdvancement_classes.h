// WidgetBlueprintGeneratedClass WBP_Panel_PickemGroupAdvancement.WBP_Panel_PickemGroupAdvancement_C
// Size: 0x390 (Inherited: 0x318)
struct UWBP_Panel_PickemGroupAdvancement_C : UUserWidget {
	struct UImage* Background; // 0x318(0x08)
	struct UImage* Background_3; // 0x320(0x08)
	struct UImage* Background_Border; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image_2; // 0x338(0x08)
	struct UImage* Image_3; // 0x340(0x08)
	struct UImage* Image_61; // 0x348(0x08)
	struct UImage* Image_Logo; // 0x350(0x08)
	struct UScaleBox* SB_TeamName; // 0x358(0x08)
	struct UAresTextBlock* Text_Stage; // 0x360(0x08)
	struct UAresTextBlock* Text_TeamName; // 0x368(0x08)
	struct UAresTextBlock* Text_TournamentAdvance; // 0x370(0x08)
	struct UAresTextBlock* Text_TournamentSeed; // 0x378(0x08)
	struct UEsportsMatchupTeamViewModel* TeamViewModel; // 0x380(0x08)
	struct UEsportsMatchupTeamViewModelV2* TeamViewModelV2; // 0x388(0x08)

	void InitWithViewModelV2(struct UEsportsMatchupTeamViewModelV2* InTeamViewModel, bool IsFirstSeed, struct FString StageName); // Function WBP_Panel_PickemGroupAdvancement.WBP_Panel_PickemGroupAdvancement_C.InitWithViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool Bind); // Function WBP_Panel_PickemGroupAdvancement.WBP_Panel_PickemGroupAdvancement_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithViewModel(struct UEsportsMatchupTeamViewModel* InTeamViewModel, bool IsFirstSeed, struct FString StageName); // Function WBP_Panel_PickemGroupAdvancement.WBP_Panel_PickemGroupAdvancement_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStageAdvancedText(bool IsFirstSeed, struct FString StageName); // Function WBP_Panel_PickemGroupAdvancement.WBP_Panel_PickemGroupAdvancement_C.SetStageAdvancedText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamNameChanged(struct FString InName); // Function WBP_Panel_PickemGroupAdvancement.WBP_Panel_PickemGroupAdvancement_C.OnTeamNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamLogoChanged(struct UTexture2D* InLogo); // Function WBP_Panel_PickemGroupAdvancement.WBP_Panel_PickemGroupAdvancement_C.OnTeamLogoChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

