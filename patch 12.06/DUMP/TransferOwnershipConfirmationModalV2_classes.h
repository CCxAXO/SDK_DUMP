// WidgetBlueprintGeneratedClass TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C
// Size: 0x3f0 (Inherited: 0x318)
struct UTransferOwnershipConfirmationModalV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USpacer* CancelButtonSpacer_2; // 0x320(0x08)
	struct UTextBlock* ErrorText; // 0x328(0x08)
	struct UImage* Gradient; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct UImage* Logo; // 0x340(0x08)
	struct UImage* Pattern; // 0x348(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x350(0x08)
	struct USizeBox* SizeBoxCancel; // 0x358(0x08)
	struct USizeBox* SizeBoxConfirmation_2; // 0x360(0x08)
	struct UThrobber* Throbber_237; // 0x368(0x08)
	struct UImage* tint_bg; // 0x370(0x08)
	struct UTextBlock* Title; // 0x378(0x08)
	struct UImage* topornament; // 0x380(0x08)
	struct UTextBlock* WarningText; // 0x388(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary; // 0x390(0x08)
	struct UWBP_MenuButtonSecondary_C* WBP_MenuButtonSecondary; // 0x398(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3a0(0x08)
	struct FString Subject; // 0x3a8(0x10)
	struct FString Game Name; // 0x3b8(0x10)
	struct FString Tag Line; // 0x3c8(0x10)
	struct UPremierRosterListFunctionsVM* RosterFunctionsVM; // 0x3d8(0x08)
	struct FString RosterID; // 0x3e0(0x10)

	void Init(struct UPremierRosterListFunctionsVM* FunctionsVM, struct FString Subject, struct FString Game Name, struct FString Tag Line, struct FString RosterID); // Function TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Post-Init(); // Function TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C.Post-Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TransferOwnershipConfirmationModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C.BndEvt__TransferOwnershipConfirmationModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TransferOwnershipConfirmationModal_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature(); // Function TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C.BndEvt__TransferOwnershipConfirmationModal_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Success(struct FPremierRosterV2& Roster); // Function TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C.Success // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Error(struct FString ReasonStringInDebugOnly); // Function TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C.On Error // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TransferOwnershipConfirmationModalV2(int32_t EntryPoint); // Function TransferOwnershipConfirmationModalV2.TransferOwnershipConfirmationModalV2_C.ExecuteUbergraph_TransferOwnershipConfirmationModalV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

