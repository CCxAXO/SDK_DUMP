// WidgetBlueprintGeneratedClass MainMenuNavBar_BackButton_PC.MainMenuNavBar_BackButton_PC_C
// Size: 0x370 (Inherited: 0x318)
struct UMainMenuNavBar_BackButton_PC_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* arrowtx; // 0x320(0x08)
	struct UButton* BackButton; // 0x328(0x08)
	struct UMenuAnchor* BackButtonAnchor; // 0x330(0x08)
	struct UTextBlock* BackText; // 0x338(0x08)
	struct UImage* Image_101; // 0x340(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x348(0x10)
	struct UAkAudioEvent* AUD_Hovered; // 0x358(0x08)
	struct UAkAudioEvent* AUD_Unhovered; // 0x360(0x08)
	struct UAkAudioEvent* AUD_Clicked; // 0x368(0x08)

	void BndEvt__MainMenuNavBar_BackButton_PC_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function MainMenuNavBar_BackButton_PC.MainMenuNavBar_BackButton_PC_C.BndEvt__MainMenuNavBar_BackButton_PC_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainMenuNavBar_BackButton_PC_BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function MainMenuNavBar_BackButton_PC.MainMenuNavBar_BackButton_PC_C.BndEvt__MainMenuNavBar_BackButton_PC_BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainMenuNavBar_BackButton_PC_BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function MainMenuNavBar_BackButton_PC.MainMenuNavBar_BackButton_PC_C.BndEvt__MainMenuNavBar_BackButton_PC_BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MainMenuNavBar_BackButton_PC(int32_t EntryPoint); // Function MainMenuNavBar_BackButton_PC.MainMenuNavBar_BackButton_PC_C.ExecuteUbergraph_MainMenuNavBar_BackButton_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnClicked__DelegateSignature(); // Function MainMenuNavBar_BackButton_PC.MainMenuNavBar_BackButton_PC_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

