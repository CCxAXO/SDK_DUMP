// WidgetBlueprintGeneratedClass ArsenalCollectionPopup.ArsenalCollectionPopup_C
// Size: 0x368 (Inherited: 0x318)
struct UArsenalCollectionPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* content; // 0x320(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x328(0x08)
	struct UUniversalModalVignette_C* UniversalModalVignette; // 0x330(0x08)
	struct UUserWidget* WidgetScreen; // 0x338(0x08)
	struct FAresMainMenuNavBarData NavBarData; // 0x340(0x28)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function ArsenalCollectionPopup.ArsenalCollectionPopup_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function ArsenalCollectionPopup.ArsenalCollectionPopup_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ArsenalCollectionPopup.ArsenalCollectionPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function ArsenalCollectionPopup.ArsenalCollectionPopup_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ArsenalCollectionPopup.ArsenalCollectionPopup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ArsenalCollectionPopup(int32_t EntryPoint); // Function ArsenalCollectionPopup.ArsenalCollectionPopup_C.ExecuteUbergraph_ArsenalCollectionPopup // (Final|UbergraphFunction) // @ game+0x1b42740
};

