// WidgetBlueprintGeneratedClass WBP_Template_SideScreenContent.WBP_Template_SideScreenContent_C
// Size: 0x3aa (Inherited: 0x318)
struct UWBP_Template_SideScreenContent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWBP_Button_Ghost_C* CloseButton; // 0x320(0x08)
	struct UImage* Image_Background; // 0x328(0x08)
	struct UNamedSlot* NamedSlot_Body; // 0x330(0x08)
	struct UNamedSlot* NamedSlot_Header; // 0x338(0x08)
	struct UScrollBox* ScrollBox_Body; // 0x340(0x08)
	struct UAresCommonText* Text_Description; // 0x348(0x08)
	struct UAresCommonText* Text_Title; // 0x350(0x08)
	struct UVerticalBox* VerticalBox_Body; // 0x358(0x08)
	struct UWBP_Button_Back_C* WBP_Button_Back; // 0x360(0x08)
	struct FText TitleText; // 0x368(0x18)
	struct FText DescriptionText; // 0x380(0x18)
	struct FMargin BodyPadding; // 0x398(0x10)
	bool ShowBackButton; // 0x3a8(0x01)
	enum class ESideScreenCloseButtonType ShowBackButtonLocation; // 0x3a9(0x01)

	void SetDescription(struct FText NewDescription); // Function WBP_Template_SideScreenContent.WBP_Template_SideScreenContent_C.SetDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTitle(struct FText NewTitle); // Function WBP_Template_SideScreenContent.WBP_Template_SideScreenContent_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Template_SideScreenContent.WBP_Template_SideScreenContent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Template_SideScreenContent_WBP_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Template_SideScreenContent.WBP_Template_SideScreenContent_C.BndEvt__WBP_Template_SideScreenContent_WBP_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Template_SideScreenContent_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Template_SideScreenContent.WBP_Template_SideScreenContent_C.BndEvt__WBP_Template_SideScreenContent_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Template_SideScreenContent(int32_t EntryPoint); // Function WBP_Template_SideScreenContent.WBP_Template_SideScreenContent_C.ExecuteUbergraph_WBP_Template_SideScreenContent // (Final|UbergraphFunction) // @ game+0x1b42740
};

