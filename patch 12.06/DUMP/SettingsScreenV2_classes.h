// WidgetBlueprintGeneratedClass SettingsScreenV2.SettingsScreenV2_C
// Size: 0x368 (Inherited: 0x318)
struct USettingsScreenV2_C : USettingsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Outro; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UImage* Background; // 0x330(0x08)
	struct UImage* BackgroundOverlay; // 0x338(0x08)
	struct USettingsListV2_C* SettingsListV2; // 0x340(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x348(0x08)
	struct USharedTertiaryButtonText_C* SharedTertiaryButtonText; // 0x350(0x08)
	struct UUniversalProgressionWidget_C* UPW; // 0x358(0x08)
	struct USharedTertiaryButtonText_C* XitButton; // 0x360(0x08)

	void SetDefaultBtnEnabled(); // Function SettingsScreenV2.SettingsScreenV2_C.SetDefaultBtnEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimationFinished_Event_1(); // Function SettingsScreenV2.SettingsScreenV2_C.OnAnimationFinished_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHide(); // Function SettingsScreenV2.SettingsScreenV2_C.OnHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedTertiaryButtonText_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function SettingsScreenV2.SettingsScreenV2_C.BndEvt__SharedTertiaryButtonText_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__DoneButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function SettingsScreenV2.SettingsScreenV2_C.BndEvt__DoneButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function SettingsScreenV2.SettingsScreenV2_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function SettingsScreenV2.SettingsScreenV2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnOpened(); // Function SettingsScreenV2.SettingsScreenV2_C.OnOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Close(); // Function SettingsScreenV2.SettingsScreenV2_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClosed(); // Function SettingsScreenV2.SettingsScreenV2_C.OnClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMenuStackEntryCreated(struct UMenuStackEntry* MenuStackEntry); // Function SettingsScreenV2.SettingsScreenV2_C.OnMenuStackEntryCreated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SettingsScreenV2(int32_t EntryPoint); // Function SettingsScreenV2.SettingsScreenV2_C.ExecuteUbergraph_SettingsScreenV2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

