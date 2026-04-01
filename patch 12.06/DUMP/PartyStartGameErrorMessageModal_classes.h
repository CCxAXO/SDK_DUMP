// WidgetBlueprintGeneratedClass PartyStartGameErrorMessageModal.PartyStartGameErrorMessageModal_C
// Size: 0x348 (Inherited: 0x318)
struct UPartyStartGameErrorMessageModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UErrorMessageModal_C* ErrorMessageModal; // 0x320(0x08)
	struct UMainMenuViewController* MainMenuController; // 0x328(0x08)
	struct FText ErrorMessageText; // 0x330(0x18)

	void SetErrorMessageText(struct FText NewErrorMessageText); // Function PartyStartGameErrorMessageModal.PartyStartGameErrorMessageModal_C.SetErrorMessageText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCancelPressed_Event_1(); // Function PartyStartGameErrorMessageModal.PartyStartGameErrorMessageModal_C.OnCancelPressed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PartyStartGameErrorMessageModal.PartyStartGameErrorMessageModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PartyStartGameErrorMessageModal(int32_t EntryPoint); // Function PartyStartGameErrorMessageModal.PartyStartGameErrorMessageModal_C.ExecuteUbergraph_PartyStartGameErrorMessageModal // (Final|UbergraphFunction) // @ game+0x1b42740
};

