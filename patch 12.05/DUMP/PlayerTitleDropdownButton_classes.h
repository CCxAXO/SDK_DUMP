// WidgetBlueprintGeneratedClass PlayerTitleDropdownButton.PlayerTitleDropdownButton_C
// Size: 0x390 (Inherited: 0x318)
struct UPlayerTitleDropdownButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Arrow; // 0x320(0x08)
	struct UImage* ArrowBG; // 0x328(0x08)
	struct UMenuAnchor* MenuAnchor_43; // 0x330(0x08)
	struct UButton* OpenButton; // 0x338(0x08)
	struct UPlayerTitleDropdownMenu_C* MenuClass; // 0x340(0x08)
	struct USharedDropdownMenuButton_C* MenuButtonClass; // 0x348(0x08)
	struct FMulticastInlineDelegate OnMenuCreated; // 0x350(0x10)
	struct FMulticastInlineDelegate OnDropdownButtonSelected; // 0x360(0x10)
	struct UPlayerTitleDropdownMenu_C* PlayerTitleDropdownMenuWidget; // 0x370(0x08)
	struct UAkAudioEvent* AUD_OnPressed; // 0x378(0x08)
	struct UAkAudioEvent* AUD_OnSelectTitle_Event; // 0x380(0x08)
	struct UPlayerTitleButton_C* PlayerButtonClass; // 0x388(0x08)

	struct UWidget* OnGetMenuContent_1(); // Function PlayerTitleDropdownButton.PlayerTitleDropdownButton_C.OnGetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function PlayerTitleDropdownButton.PlayerTitleDropdownButton_C.BndEvt__Button_76_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnAnyAction(struct UAresContextMenuActionBaseWidget* Option); // Function PlayerTitleDropdownButton.PlayerTitleDropdownButton_C.OnAnyAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On SelectTitle Event(struct UPlayerTitleHandle* SelectedTitle); // Function PlayerTitleDropdownButton.PlayerTitleDropdownButton_C.On SelectTitle Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerTitleDropdownButton(int32_t EntryPoint); // Function PlayerTitleDropdownButton.PlayerTitleDropdownButton_C.ExecuteUbergraph_PlayerTitleDropdownButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnDropdownButtonSelected__DelegateSignature(struct UPlayerTitleHandle* PlayerTitle); // Function PlayerTitleDropdownButton.PlayerTitleDropdownButton_C.OnDropdownButtonSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMenuCreated__DelegateSignature(struct UAresContextMenuBaseWidget* MenuWidget); // Function PlayerTitleDropdownButton.PlayerTitleDropdownButton_C.OnMenuCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

