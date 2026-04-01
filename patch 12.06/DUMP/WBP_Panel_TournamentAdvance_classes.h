// WidgetBlueprintGeneratedClass WBP_Panel_TournamentAdvance.WBP_Panel_TournamentAdvance_C
// Size: 0x388 (Inherited: 0x318)
struct UWBP_Panel_TournamentAdvance_C : UUserWidget {
	struct UImage* Image; // 0x318(0x08)
	struct UImage* Image_2; // 0x320(0x08)
	struct UImage* Image_3; // 0x328(0x08)
	struct UImage* Image_45; // 0x330(0x08)
	struct UImage* Image_61; // 0x338(0x08)
	struct UImage* Image_Logo; // 0x340(0x08)
	struct UScaleBox* SB_TeamName; // 0x348(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x350(0x08)
	struct UAresTextBlock* Text_TeamName; // 0x358(0x08)
	struct UAresTextBlock* Text_Tournament; // 0x360(0x08)
	struct UAresTextBlock* Text_TournamentAdvance; // 0x368(0x08)
	struct UAresTextBlock* Text_TournamentSeed; // 0x370(0x08)
	struct UEsportsMatchupTeamViewModel* TeamViewModel; // 0x378(0x08)
	struct UEsportsMatchupTeamViewModelV2* MatchupTeamViewModelV2; // 0x380(0x08)

	void InitWithViewModelV2(struct UEsportsMatchupTeamViewModelV2* InViewModel, enum class E2024VCTEvent InEvent, bool bIsFirstSeed); // Function WBP_Panel_TournamentAdvance.WBP_Panel_TournamentAdvance_C.InitWithViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_TournamentAdvance.WBP_Panel_TournamentAdvance_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithViewModel(struct UEsportsMatchupTeamViewModel* InTeamViewModel, enum class E2024VCTEvent event, bool IsFirstSeed); // Function WBP_Panel_TournamentAdvance.WBP_Panel_TournamentAdvance_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTournamentAdvancedText(enum class E2024VCTEvent event, bool IsFirstSeed); // Function WBP_Panel_TournamentAdvance.WBP_Panel_TournamentAdvance_C.SetTournamentAdvancedText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamNameChanged(struct FString InName); // Function WBP_Panel_TournamentAdvance.WBP_Panel_TournamentAdvance_C.OnTeamNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamLogoChanged(struct UTexture2D* InLogo); // Function WBP_Panel_TournamentAdvance.WBP_Panel_TournamentAdvance_C.OnTeamLogoChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

