// WidgetBlueprintGeneratedClass WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C
// Size: 0x478 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsEventTitleCardHorizontal_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_GCChampionship; // 0x3e8(0x08)
	struct UAresCommonText* CT_PrimaryText; // 0x3f0(0x08)
	struct UAresCommonText* CT_SecondaryText; // 0x3f8(0x08)
	struct UImage* Image_LocationBG; // 0x400(0x08)
	struct UImage* Image_VCTLogo; // 0x408(0x08)
	struct UOverlay* Overlay_LocationOverlay; // 0x410(0x08)
	struct USizeBox* SB_Parent; // 0x418(0x08)
	struct UAresCommonText* Text_TertiaryText; // 0x420(0x08)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x428(0x08)
	double LocationBackgroundImageBuffer; // 0x430(0x08)
	enum class E_EsportsScreens Screen; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FText DefaultTertiaryText; // 0x440(0x18)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x458(0x08)
	struct UEsportsLeagueViewModel* EsportsLeagueViewModel; // 0x460(0x08)
	struct FLinearColor DefaultLogoBaseColor; // 0x468(0x10)

	void OnEventChanged(enum class E2024VCTEvent event); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.OnEventChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLeagueIDChanged(struct FString InLeagueID); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.OnLeagueIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModelV2(struct UEsportsTournamentViewModel* InViewModel); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.SetViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleScreenText(enum class E_EsportsScreens Screen); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.StyleScreenText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleForEvent(enum class E2024VCTEvent InEvent); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.StyleForEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Event Name Changed(struct FText& InEventName); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.On Event Name Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Event Location Changed(struct FText& InEventLocation); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.On Event Location Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On League Name Changed(struct FText& InLeagueName); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.On League Name Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModel(struct UEsportsEventViewModel* InViewModel); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsEventTitleCardHorizontal(int32_t EntryPoint); // Function WBP_Panel_EsportsEventTitleCardHorizontal.WBP_Panel_EsportsEventTitleCardHorizontal_C.ExecuteUbergraph_WBP_Panel_EsportsEventTitleCardHorizontal // (Final|UbergraphFunction) // @ game+0x1b42740
};

