// WidgetBlueprintGeneratedClass AdHocPopup.AdHocPopup_C
// Size: 0x610 (Inherited: 0x544)
struct UAdHocPopup_C : UWBP_Screen_CustomModal_Base_C {
	char pad_544[0x4]; // 0x544(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UWidgetAnimation* Intro; // 0x550(0x08)
	struct UWBP_MenuButtonPrimary_C* Accept; // 0x558(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_1; // 0x560(0x08)
	struct UImage* BGColorFill; // 0x568(0x08)
	struct UImage* Champs23_Logo; // 0x570(0x08)
	struct UImage* Console_Close_Button_Gradient_BG; // 0x578(0x08)
	struct UImage* Fade; // 0x580(0x08)
	struct UImage* Image_219; // 0x588(0x08)
	struct UTextBlock* Legal_Text; // 0x590(0x08)
	struct UImage* PC_Close_Button_Gradient_BG; // 0x598(0x08)
	struct UTextBlock* Subtitle; // 0x5a0(0x08)
	struct UTextBlock* Subtitle_2; // 0x5a8(0x08)
	struct UTextBlock* Subtitle_3; // 0x5b0(0x08)
	struct UTextBlock* Subtitle_4; // 0x5b8(0x08)
	struct UTextBlock* Subtitle_5; // 0x5c0(0x08)
	struct UTextBlock* Title; // 0x5c8(0x08)
	struct UTextBlock* Title_2; // 0x5d0(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x5d8(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x5e0(0x08)
	struct UWBP_Button_Back_C* WBP_Button_Back; // 0x5e8(0x08)
	struct FString AdHocValue; // 0x5f0(0x10)
	struct TArray<struct UPanelWidget*> NewVar_1; // 0x600(0x10)

	bool BP_OnHandleBackAction(); // Function AdHocPopup.AdHocPopup_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function AdHocPopup.AdHocPopup_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AdHocPopup.AdHocPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__AdHocPopup_Accept_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function AdHocPopup.AdHocPopup_C.BndEvt__AdHocPopup_Accept_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__AdHocPopup_WBP_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function AdHocPopup.AdHocPopup_C.BndEvt__AdHocPopup_WBP_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AdHocPopup(int32_t EntryPoint); // Function AdHocPopup.AdHocPopup_C.ExecuteUbergraph_AdHocPopup // (Final|UbergraphFunction) // @ game+0x1b42740
};

