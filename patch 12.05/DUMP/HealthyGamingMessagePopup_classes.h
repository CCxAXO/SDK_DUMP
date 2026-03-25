// WidgetBlueprintGeneratedClass HealthyGamingMessagePopup.HealthyGamingMessagePopup_C
// Size: 0x338 (Inherited: 0x318)
struct UHealthyGamingMessagePopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x320(0x08)
	struct FMulticastInlineDelegate OnUserDismiss; // 0x328(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function HealthyGamingMessagePopup.HealthyGamingMessagePopup_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__HealthyGamingMessagePopup_CustomCloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function HealthyGamingMessagePopup.HealthyGamingMessagePopup_C.BndEvt__HealthyGamingMessagePopup_CustomCloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HealthyGamingMessagePopup(int32_t EntryPoint); // Function HealthyGamingMessagePopup.HealthyGamingMessagePopup_C.ExecuteUbergraph_HealthyGamingMessagePopup // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnUserDismiss__DelegateSignature(); // Function HealthyGamingMessagePopup.HealthyGamingMessagePopup_C.OnUserDismiss__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

