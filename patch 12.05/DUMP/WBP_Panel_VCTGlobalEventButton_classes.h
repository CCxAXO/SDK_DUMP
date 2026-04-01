// WidgetBlueprintGeneratedClass WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C
// Size: 0x4b0 (Inherited: 0x3e0)
struct UWBP_Panel_VCTGlobalEventButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* Overlay_1; // 0x3e8(0x08)
	struct UWBP_Button_VCTGlobalEventButton_C* WBP_Button_VCTGlobalEventButton; // 0x3f0(0x08)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x3f8(0x08)
	enum class E2024VCTEvent event; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastInlineDelegate ButtonColumnOnHover; // 0x408(0x10)
	struct FMulticastInlineDelegate ButtonColumnOnUnhover; // 0x418(0x10)
	struct FSlateColor Completed Color; // 0x428(0x14)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct UMaterialExpressionTextureObjectParameter* Masters1_Texture; // 0x440(0x08)
	struct FTextureParameterValue Masters2_Texture; // 0x448(0x30)
	struct FTextureParameterValue Champions_Texture; // 0x478(0x30)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x4a8(0x08)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void OnTournamentDateChanged(struct FDateTime& InDateUTC); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.OnTournamentDateChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Style Card(enum class EEsportsMatchStatus InEventStatus); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.Style Card // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_VCTGlobalEventButton_WBP_Button_VCTGlobalEventButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.BndEvt__WBP_Panel_VCTGlobalEventButton_WBP_Button_VCTGlobalEventButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_VCTGlobalEventButton_WBP_Button_VCTGlobalEventButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.BndEvt__WBP_Panel_VCTGlobalEventButton_WBP_Button_VCTGlobalEventButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_VCTGlobalEventButton_WBP_Button_VCTGlobalEventButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.BndEvt__WBP_Panel_VCTGlobalEventButton_WBP_Button_VCTGlobalEventButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_VCTGlobalEventButton(int32_t EntryPoint); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.ExecuteUbergraph_WBP_Panel_VCTGlobalEventButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void ButtonColumnOnUnhover__DelegateSignature(); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.ButtonColumnOnUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ButtonColumnOnHover__DelegateSignature(); // Function WBP_Panel_VCTGlobalEventButton.WBP_Panel_VCTGlobalEventButton_C.ButtonColumnOnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

