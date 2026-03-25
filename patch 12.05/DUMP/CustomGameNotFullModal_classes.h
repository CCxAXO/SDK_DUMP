// WidgetBlueprintGeneratedClass CustomGameNotFullModal.CustomGameNotFullModal_C
// Size: 0x340 (Inherited: 0x318)
struct UCustomGameNotFullModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UConfirmationModal_C* NotFullPopup; // 0x320(0x08)
	struct UMainMenuViewController* MainMenuController; // 0x328(0x08)
	struct FMulticastInlineDelegate OnAccepted; // 0x330(0x10)

	void OnConfirmationPressed_Event_1(); // Function CustomGameNotFullModal.CustomGameNotFullModal_C.OnConfirmationPressed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCancelPressed_Event_1(); // Function CustomGameNotFullModal.CustomGameNotFullModal_C.OnCancelPressed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CustomGameNotFullModal.CustomGameNotFullModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CustomGameNotFullModal(int32_t EntryPoint); // Function CustomGameNotFullModal.CustomGameNotFullModal_C.ExecuteUbergraph_CustomGameNotFullModal // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnAccepted__DelegateSignature(); // Function CustomGameNotFullModal.CustomGameNotFullModal_C.OnAccepted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

