// WidgetBlueprintGeneratedClass TournamentConsolationBracketModal.TournamentConsolationBracketModal_C
// Size: 0x398 (Inherited: 0x318)
struct UTournamentConsolationBracketModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UImage* Gradient; // 0x328(0x08)
	struct UImage* Logo; // 0x330(0x08)
	struct UImage* Pattern; // 0x338(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x340(0x08)
	struct UWBP_MenuButton_Premier_C* ShowConsolationBracketButton; // 0x348(0x08)
	struct USizeBox* SizeBoxConfirmation; // 0x350(0x08)
	struct UTextBlock* Supertext; // 0x358(0x08)
	struct UImage* tint_bg; // 0x360(0x08)
	struct UTextBlock* Title; // 0x368(0x08)
	struct UImage* topornament; // 0x370(0x08)
	struct FMulticastInlineDelegate On Close; // 0x378(0x10)
	struct FMulticastInlineDelegate On Show Consolation Bracket; // 0x388(0x10)

	void BndEvt__TournamentLossModal_SharedBackButton_K2Node_ComponentBoundEvent_1_OnBackRequested__DelegateSignature(); // Function TournamentConsolationBracketModal.TournamentConsolationBracketModal_C.BndEvt__TournamentLossModal_SharedBackButton_K2Node_ComponentBoundEvent_1_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TournamentConsolationBracketModal_ShowConsolationBracketButton_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function TournamentConsolationBracketModal.TournamentConsolationBracketModal_C.BndEvt__TournamentConsolationBracketModal_ShowConsolationBracketButton_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentConsolationBracketModal(int32_t EntryPoint); // Function TournamentConsolationBracketModal.TournamentConsolationBracketModal_C.ExecuteUbergraph_TournamentConsolationBracketModal // (Final|UbergraphFunction) // @ game+0x1af5410
	void On Show Consolation Bracket__DelegateSignature(); // Function TournamentConsolationBracketModal.TournamentConsolationBracketModal_C.On Show Consolation Bracket__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Close__DelegateSignature(); // Function TournamentConsolationBracketModal.TournamentConsolationBracketModal_C.On Close__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

