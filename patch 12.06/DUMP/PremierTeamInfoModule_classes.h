// WidgetBlueprintGeneratedClass PremierTeamInfoModule.PremierTeamInfoModule_C
// Size: 0x480 (Inherited: 0x3e0)
struct UPremierTeamInfoModule_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Background; // 0x3e8(0x08)
	struct UImage* Border; // 0x3f0(0x08)
	struct UWidgetSwitcher* DisplayContentWidgetSwitcher; // 0x3f8(0x08)
	struct UImage* FullScreenLoader; // 0x400(0x08)
	struct UImage* Image; // 0x408(0x08)
	struct UImage* Image_2; // 0x410(0x08)
	struct UImage* Image_3; // 0x418(0x08)
	struct UImage* Image_245; // 0x420(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x428(0x08)
	struct UTextBlock* ModuleSubtitleText; // 0x430(0x08)
	struct UTextBlock* ModuleTitleText; // 0x438(0x08)
	struct UPremierCrest_C* PREMIERCREST; // 0x440(0x08)
	struct UImage* PremierIcon; // 0x448(0x08)
	struct UImage* PromotionStatusImage; // 0x450(0x08)
	struct UWBP_Division_Icon_C* WBP_Division_Icon; // 0x458(0x08)
	struct UPremierRosterViewModel* PremierRosterViewModel; // 0x460(0x08)
	struct FString ContentType; // 0x468(0x10)
	struct UObject* DisplayContent; // 0x478(0x08)

	void UpdateDisplayContent(); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.UpdateDisplayContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSubtitleText(); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.UpdateSubtitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTitleText(); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.UpdateTitleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSubtitleText(struct FText SubtitleText); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.SetSubtitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTitleText(struct FText TitleText); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.SetTitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init With VM and ContentType(struct UPremierRosterViewModel* PremierRosterViewModel, struct FString ContentType); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.Init With VM and ContentType // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Empty ContentType(struct FString Content Type); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.Init Empty ContentType // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnConferenceChanged(struct FString NewValue); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.OnConferenceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDivisionChanged(int32_t NewValue); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.OnDivisionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierTeamInfoModule(int32_t EntryPoint); // Function PremierTeamInfoModule.PremierTeamInfoModule_C.ExecuteUbergraph_PremierTeamInfoModule // (Final|UbergraphFunction) // @ game+0x1b42740
};

