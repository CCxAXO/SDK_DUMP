// WidgetBlueprintGeneratedClass UtilityMenuButton.UtilityMenuButton_C
// Size: 0x339 (Inherited: 0x318)
struct UUtilityMenuButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UMenuAnchor* HelperFlyoutAnchor; // 0x320(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x328(0x08)
	struct UMenuStackEntry* RegisteredOptionsMenuStackEntry; // 0x330(0x08)
	bool IsInSettingsMenu; // 0x338(0x01)

	struct UWidget* On_FlyoutAnchor_GetMenuContent_1(); // Function UtilityMenuButton.UtilityMenuButton_C.On_FlyoutAnchor_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UtilityMenuButton.UtilityMenuButton_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function UtilityMenuButton.UtilityMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function UtilityMenuButton.UtilityMenuButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void FlyoutHovered(); // Function UtilityMenuButton.UtilityMenuButton_C.FlyoutHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FlyoutUnhovered(); // Function UtilityMenuButton.UtilityMenuButton_C.FlyoutUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UtilityMenuButton.UtilityMenuButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_UtilityMenuButton(int32_t EntryPoint); // Function UtilityMenuButton.UtilityMenuButton_C.ExecuteUbergraph_UtilityMenuButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

