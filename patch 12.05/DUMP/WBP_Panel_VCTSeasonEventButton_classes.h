// WidgetBlueprintGeneratedClass WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C
// Size: 0x470 (Inherited: 0x3e0)
struct UWBP_Panel_VCTSeasonEventButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x3e8(0x08)
	struct UImage* Border; // 0x3f0(0x08)
	struct UImage* Border_Live; // 0x3f8(0x08)
	struct UCommonLazyImage* CommonLazyImage; // 0x400(0x08)
	struct UImage* Furniture; // 0x408(0x08)
	struct UImage* Furniture2; // 0x410(0x08)
	struct UImage* Furniture3; // 0x418(0x08)
	struct UImage* Furniture4; // 0x420(0x08)
	struct USizeBox* SB_Live; // 0x428(0x08)
	struct UWBP_Button_VCTSeasonEventButton_C* WBP_Button_VCTSeasonEventButton; // 0x430(0x08)
	struct UWBP_LiveTag_EsportsHub_C* WBP_LiveTag_EsportsHub; // 0x438(0x08)
	enum class E2024VCTEvent event; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x448(0x08)
	struct FMulticastInlineDelegate ButtonPanelOnHover; // 0x450(0x10)
	struct FMulticastInlineDelegate ButtonPanelOnUnhover; // 0x460(0x10)

	void On Event Status Changed(enum class EEsportsMatchStatus NewValue); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.On Event Status Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEventDateChanged(struct FText& NewValue); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.OnEventDateChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEventNameChanged(struct FText& NewValue); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.OnEventNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromViewModel(struct UEsportsEventViewModel* ViewModel, bool ShouldBind); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Event(enum class E2024VCTEvent InEvent); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.Set Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_VCTSeasonEventButton_WBP_Button_VCTSeasonEventButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.BndEvt__WBP_Panel_VCTSeasonEventButton_WBP_Button_VCTSeasonEventButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_VCTSeasonEventButton_WBP_Button_VCTSeasonEventButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.BndEvt__WBP_Panel_VCTSeasonEventButton_WBP_Button_VCTSeasonEventButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_VCTSeasonEventButton_WBP_Button_VCTSeasonEventButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.BndEvt__WBP_Panel_VCTSeasonEventButton_WBP_Button_VCTSeasonEventButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_VCTSeasonEventButton(int32_t EntryPoint); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.ExecuteUbergraph_WBP_Panel_VCTSeasonEventButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void ButtonPanelOnUnhover__DelegateSignature(); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.ButtonPanelOnUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ButtonPanelOnHover__DelegateSignature(); // Function WBP_Panel_VCTSeasonEventButton.WBP_Panel_VCTSeasonEventButton_C.ButtonPanelOnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

