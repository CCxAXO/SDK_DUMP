// WidgetBlueprintGeneratedClass OptionsScreen.OptionsScreen_C
// Size: 0x54a (Inherited: 0x520)
struct UOptionsScreen_C : UOptionsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct USettingsListV2_C* SettingsListV2; // 0x528(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x530(0x08)
	struct USocialPanelPicker_C* SocialPanelPicker; // 0x538(0x08)
	struct UUniversalProgressionWidget_C* UPW; // 0x540(0x08)
	bool IsWinner; // 0x548(0x01)
	bool LastCombatReportVisibility; // 0x549(0x01)

	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function OptionsScreen.OptionsScreen_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function OptionsScreen.OptionsScreen_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Exit(); // Function OptionsScreen.OptionsScreen_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOpened(); // Function OptionsScreen.OptionsScreen_C.OnOpened // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClosed(); // Function OptionsScreen.OptionsScreen_C.OnClosed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveMenuStackEntry(struct UMenuStackEntry* OptionsMenuStackEntry); // Function OptionsScreen.OptionsScreen_C.ReceiveMenuStackEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDisassociateComplete(); // Function OptionsScreen.OptionsScreen_C.OnDisassociateComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OptionsScreen(int32_t EntryPoint); // Function OptionsScreen.OptionsScreen_C.ExecuteUbergraph_OptionsScreen // (Final|UbergraphFunction) // @ game+0x1af5410
};

