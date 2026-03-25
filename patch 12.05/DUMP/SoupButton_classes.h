// WidgetBlueprintGeneratedClass SoupButton.SoupButton_C
// Size: 0x32b (Inherited: 0x318)
struct USoupButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* Button_37; // 0x320(0x08)
	bool IsSelected; // 0x328(0x01)
	bool Hovered; // 0x329(0x01)
	bool AllOffersSeen; // 0x32a(0x01)

	void UpdateVisibility(); // Function SoupButton.SoupButton_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SoupButton.SoupButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function SoupButton.SoupButton_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function SoupButton.SoupButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SoupButton.SoupButton_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnIsSoupActiveChanged(bool IsSoupActive); // Function SoupButton.SoupButton_C.OnIsSoupActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SoupButton(int32_t EntryPoint); // Function SoupButton.SoupButton_C.ExecuteUbergraph_SoupButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

