// WidgetBlueprintGeneratedClass WBP_View_StanceIndicator.WBP_View_StanceIndicator_C
// Size: 0x350 (Inherited: 0x320)
struct UWBP_View_StanceIndicator_C : UVisibilityOverrideableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* ActiveState_Intro; // 0x328(0x08)
	struct UWidgetAnimation* PerSound_Ticks; // 0x330(0x08)
	struct UWidgetAnimation* ActiveState_Outro; // 0x338(0x08)
	struct UWidgetSwitcher* StanceIconWidgetSwitcher; // 0x340(0x08)
	struct UVM_StanceIndicator_C* View Model; // 0x348(0x08)

	void RefreshView(); // Function WBP_View_StanceIndicator.WBP_View_StanceIndicator_C.RefreshView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToViewModel(bool bBind); // Function WBP_View_StanceIndicator.WBP_View_StanceIndicator_C.BindToViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowNoiseIndicator(bool bShow); // Function WBP_View_StanceIndicator.WBP_View_StanceIndicator_C.ShowNoiseIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateWidgetVisibility(enum class ESlateVisibility New Visibility); // Function WBP_View_StanceIndicator.WBP_View_StanceIndicator_C.UpdateWidgetVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateStanceIcon(bool bIsCrouching); // Function WBP_View_StanceIndicator.WBP_View_StanceIndicator_C.UpdateStanceIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSoundPlayed(); // Function WBP_View_StanceIndicator.WBP_View_StanceIndicator_C.OnSoundPlayed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetViewModel(struct UVM_StanceIndicator_C* ViewModel); // Function WBP_View_StanceIndicator.WBP_View_StanceIndicator_C.SetViewModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_View_StanceIndicator(int32_t EntryPoint); // Function WBP_View_StanceIndicator.WBP_View_StanceIndicator_C.ExecuteUbergraph_WBP_View_StanceIndicator // (Final|UbergraphFunction) // @ game+0x1af5410
};

