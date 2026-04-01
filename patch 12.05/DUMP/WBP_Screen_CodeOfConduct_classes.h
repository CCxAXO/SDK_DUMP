// WidgetBlueprintGeneratedClass WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C
// Size: 0x5e0 (Inherited: 0x544)
struct UWBP_Screen_CodeOfConduct_C : UWBP_Screen_CustomModal_Base_C {
	char pad_544[0x4]; // 0x544(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_1; // 0x550(0x08)
	struct UImage* BG; // 0x558(0x08)
	struct UWBP_Button_Primary_C* ButtonPrimary_Accept; // 0x560(0x08)
	struct UImage* Divider; // 0x568(0x08)
	struct UImage* Divider_2; // 0x570(0x08)
	struct UImage* Divider_3; // 0x578(0x08)
	struct UImage* Image_RiotGames; // 0x580(0x08)
	struct UAresCommonRichText* TextBox_Description; // 0x588(0x08)
	struct UAresCommonRichText* TextBox_SubDescription; // 0x590(0x08)
	struct UAresCommonRichText* TextBox_SubDescription_Console; // 0x598(0x08)
	struct UAresCommonRichText* TextBox_Title; // 0x5a0(0x08)
	struct UWBP_Button_DiamondToggle_RichText_C* ToggleButton_Understand; // 0x5a8(0x08)
	struct UImage* Val; // 0x5b0(0x08)
	struct UWBP_Template_CodeOfConduct_Item_C* WBP_CodeOfConduct_Item_Agreement; // 0x5b8(0x08)
	struct UWBP_Template_CodeOfConduct_Item_C* WBP_CodeOfConduct_Item_Effort; // 0x5c0(0x08)
	struct UWBP_Template_CodeOfConduct_Item_C* WBP_CodeOfConduct_Item_Fair; // 0x5c8(0x08)
	struct UWBP_Template_CodeOfConduct_Item_C* WBP_CodeOfConduct_Item_Respect; // 0x5d0(0x08)
	struct UImage* X; // 0x5d8(0x08)

	void OnCIATriggered(struct FName ActionName); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.OnCIATriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCustomActionsChanged(struct TArray<struct UModalCustomAction*>& CustomActions); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.OnCustomActionsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToCustomModalViewModel(struct UCustomModalViewModelBase* CustomModalViewModel, bool Bind); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.BindToCustomModalViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool BP_OnHandleBackAction(); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_CodeOfConduct_ToggleButton_Understand_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(struct UCommonButtonBase* Button, bool Selected); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.BndEvt__WBP_Screen_CodeOfConduct_ToggleButton_Understand_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_CodeOfConduct_ButtonPrimary_Accept_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.BndEvt__WBP_Screen_CodeOfConduct_ButtonPrimary_Accept_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_CodeOfConduct(int32_t EntryPoint); // Function WBP_Screen_CodeOfConduct.WBP_Screen_CodeOfConduct_C.ExecuteUbergraph_WBP_Screen_CodeOfConduct // (Final|UbergraphFunction) // @ game+0x1af5410
};

