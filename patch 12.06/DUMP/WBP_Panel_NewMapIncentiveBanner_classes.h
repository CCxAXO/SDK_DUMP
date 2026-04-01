// WidgetBlueprintGeneratedClass WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C
// Size: 0x1b49 (Inherited: 0x1ae0)
struct UWBP_Panel_NewMapIncentiveBanner_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UNewMapIncentiveViewModel* NewMapIncentiveViewModel; // 0x1ae8(0x08)
	struct UExpirationTimer_C* ExpirationTimer; // 0x1af0(0x08)
	struct UImage* hover; // 0x1af8(0x08)
	struct UAresCommonText* MapRRProtectionText; // 0x1b00(0x08)
	struct FText MapName; // 0x1b08(0x18)
	struct FText NewMapIncentiveDetails; // 0x1b20(0x18)
	double ReductionModifier; // 0x1b38(0x08)
	struct FDateTime EventEndTIme; // 0x1b40(0x08)
	bool ShowTimer; // 0x1b48(0x01)

	enum class ESlateVisibility __afe89411-4cf5-cf96-25d1-4cb1dd5bc89f_SourceToDest(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.__afe89411-4cf5-cf96-25d1-4cb1dd5bc89f_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void HideFocus(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.HideFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowFocus(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.ShowFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleBannerClicked(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.HandleBannerClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNewMapIncentiveEndTime(struct FDateTime EndTime); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.SetNewMapIncentiveEndTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetReductionModifier(double ReductionModifier); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.SetReductionModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMapName(struct FString MapName); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.SetMapName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleTimerExpired(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.HandleTimerExpired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Banner(bool IsLobby); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.Init Banner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_NewMapIncentiveBanner(int32_t EntryPoint); // Function WBP_Panel_NewMapIncentiveBanner.WBP_Panel_NewMapIncentiveBanner_C.ExecuteUbergraph_WBP_Panel_NewMapIncentiveBanner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

