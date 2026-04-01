// WidgetBlueprintGeneratedClass WBP_Panel_SeedingTeam.WBP_Panel_SeedingTeam_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_Panel_SeedingTeam_C : UAresCommonUserWidget {
	struct UAresCommonText* CT_SeedText; // 0x3e0(0x08)
	struct UEsports_Logo_Wrapper_C* Esports_Logo_Wrapper; // 0x3e8(0x08)
	int32_t Seed Number; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct UEsportsStandingTeamViewModel* StandingTeamViewModel; // 0x3f8(0x08)
	struct UEsportsTeamViewModelV2* TeamViewModelV2; // 0x400(0x08)

	void OnTeamIDChanged(struct FString NewValue); // Function WBP_Panel_SeedingTeam.WBP_Panel_SeedingTeam_C.OnTeamIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLogoChanged(struct UTexture2D* Logo); // Function WBP_Panel_SeedingTeam.WBP_Panel_SeedingTeam_C.OnLogoChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind to View Model(bool bShouldBind); // Function WBP_Panel_SeedingTeam.WBP_Panel_SeedingTeam_C.Bind to View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithViewModel(struct UEsportsStandingTeamViewModel* InStandingTeamViewModel, int32_t InSeedNumber); // Function WBP_Panel_SeedingTeam.WBP_Panel_SeedingTeam_C.InitWithViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

