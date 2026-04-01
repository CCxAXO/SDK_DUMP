// WidgetBlueprintGeneratedClass WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C
// Size: 0x1b31 (Inherited: 0x1ae0)
struct UWBP_Button_NavBar_Main_EsportsHub_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UEsportsLiveEventTimesViewModel* EsportsLiveEventTimesViewModel; // 0x1ae8(0x08)
	struct UWidgetAnimation* OnSelected_L; // 0x1af0(0x08)
	struct UWidgetAnimation* OnUnselected; // 0x1af8(0x08)
	struct UWidgetAnimation* OnSelected_R; // 0x1b00(0x08)
	struct UOverlay* MainContainer; // 0x1b08(0x08)
	struct UImage* NotificationBadge; // 0x1b10(0x08)
	struct UScaleBox* TextContainer; // 0x1b18(0x08)
	bool bHideLabelWhenNotSelected; // 0x1b20(0x01)
	char pad_1B21[0x7]; // 0x1b21(0x07)
	double AnimationSpeedInSeconds; // 0x1b28(0x08)
	bool Flip Content; // 0x1b30(0x01)

	void SetEsportsLiveEventTimesViewModel(struct UEsportsLiveEventTimesViewModel* ViewModel); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.SetEsportsLiveEventTimesViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Notification State(); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.Update Notification State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHasEnteredEsportsHubChanged(bool IsMatchLive); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.OnHasEnteredEsportsHubChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLiveTickerStateChanged(enum class EEsportsLiveTickerState LiveTickerState); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.OnLiveTickerStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlaySlectedVisuals(bool bIsSelected); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.PlaySlectedVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShearMaterial(); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.ShearMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BeginSelectedAnimation(bool bSelected, bool bSkipToTheEnd); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.BeginSelectedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnSelected(); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDeselected(); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_NavBar_Main_EsportsHub(int32_t EntryPoint); // Function WBP_Button_NavBar_Main_EsportsHub.WBP_Button_NavBar_Main_EsportsHub_C.ExecuteUbergraph_WBP_Button_NavBar_Main_EsportsHub // (Final|UbergraphFunction) // @ game+0x1b42740
};

