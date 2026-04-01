// WidgetBlueprintGeneratedClass RosterPlayerMenu.RosterPlayerMenu_C
// Size: 0x360 (Inherited: 0x318)
struct URosterPlayerMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_56; // 0x320(0x08)
	struct UButton* LeaveRosterButton; // 0x328(0x08)
	struct UTextBlock* LeaveTeamButtonText; // 0x330(0x08)
	struct FMulticastInlineDelegate LeaveRosterClicked; // 0x338(0x10)
	bool IsEditor; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FString Subject; // 0x350(0x10)

	void Construct(); // Function RosterPlayerMenu.RosterPlayerMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_47_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RosterPlayerMenu.RosterPlayerMenu_C.BndEvt__Button_47_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ConfirmLeaveTeam(); // Function RosterPlayerMenu.RosterPlayerMenu_C.ConfirmLeaveTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CancelDeleteTeam(); // Function RosterPlayerMenu.RosterPlayerMenu_C.CancelDeleteTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RosterPlayerMenu(int32_t EntryPoint); // Function RosterPlayerMenu.RosterPlayerMenu_C.ExecuteUbergraph_RosterPlayerMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void LeaveRosterClicked__DelegateSignature(struct FString Subject); // Function RosterPlayerMenu.RosterPlayerMenu_C.LeaveRosterClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

