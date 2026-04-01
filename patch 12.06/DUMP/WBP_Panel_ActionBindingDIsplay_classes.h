// WidgetBlueprintGeneratedClass WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C
// Size: 0x4b8 (Inherited: 0x3e0)
struct UWBP_Panel_ActionBindingDIsplay_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x3e8(0x08)
	struct UImage* Background; // 0x3f0(0x08)
	struct UTextBlock* InputActionDescriptionText; // 0x3f8(0x08)
	struct UTextBlock* InputActionNameText; // 0x400(0x08)
	struct UOverlay* InputBindingContainer; // 0x408(0x08)
	struct UOverlay* MouseInputContainer; // 0x410(0x08)
	struct UOverlay* O_InputWrap; // 0x418(0x08)
	struct USizeBox* SB_LeftColumn; // 0x420(0x08)
	struct UShared_Mouse_Prompt_C* Shared_Mouse_Prompt; // 0x428(0x08)
	struct USpacer* Spacer_InputAndLabel; // 0x430(0x08)
	struct UOverlay* TextContainer; // 0x438(0x08)
	struct UOverlay* TextDisplayContainer; // 0x440(0x08)
	struct UAresCommonText* TXT_sm_InputActionDescription; // 0x448(0x08)
	struct FName InputActionName; // 0x450(0x0c)
	bool UseNegativeDirectionForAxis; // 0x45c(0x01)
	bool ShouldShowIcon; // 0x45d(0x01)
	char pad_45E[0x2]; // 0x45e(0x02)
	struct FText DescriptionText; // 0x460(0x18)
	bool ShouldShowDescriptionText; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UKeyBindingViewModel* KeyBindingViewModel; // 0x480(0x08)
	struct FText ActionDisplayName; // 0x488(0x18)
	double InputAndLabelMargin; // 0x4a0(0x08)
	float InputColumnWidth; // 0x4a8(0x04)
	enum class EHorizontalAlignment InputAlignment; // 0x4ac(0x01)
	bool UseSmallDescriptionText; // 0x4ad(0x01)
	bool UseLeftColumnMinWidth; // 0x4ae(0x01)
	char pad_4AF[0x1]; // 0x4af(0x01)
	double LeftColumnMinWidth; // 0x4b0(0x08)

	void SetInputColumnWidth(double ColumnWidth); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.SetInputColumnWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsMouseInput(bool& IsMouseInput, enum class Enum_AbilityInputs& MouseInputType); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.IsMouseInput // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnActionDisplayNameChanged(struct FText& NewValue); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.OnActionDisplayNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateActionName(struct FName NewActionName); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.UpdateActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateView(); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.UpdateView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ActionBindingDIsplay(int32_t EntryPoint); // Function WBP_Panel_ActionBindingDIsplay.WBP_Panel_ActionBindingDIsplay_C.ExecuteUbergraph_WBP_Panel_ActionBindingDIsplay // (Final|UbergraphFunction) // @ game+0x1b42740
};

