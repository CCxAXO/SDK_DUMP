// WidgetBlueprintGeneratedClass WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C
// Size: 0x5c9 (Inherited: 0x550)
struct UWBP_GenericListConfirmationModal_C : UWBP_Screen_ConfirmationModal_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWBP_Button_Primary_C* ConfirmButton; // 0x558(0x08)
	struct UOverlay* Details; // 0x560(0x08)
	struct UImage* IMG_topHightlightGrad; // 0x568(0x08)
	struct UScrollBox* ScrollBox_1; // 0x570(0x08)
	struct UAresCommonText* Subtitle; // 0x578(0x08)
	struct UAresCommonText* Title; // 0x580(0x08)
	struct UWBP_Decoration_ModalTitleLines_C* WBP_Decoration_ModalTitleLines; // 0x588(0x08)
	struct UWBP_Decoration_ModalTitleLines_C* WBP_Decoration_ModalTitleLines_2; // 0x590(0x08)
	struct UWBP_GenericListItem_C* GenericListItemClass; // 0x598(0x08)
	struct FMulticastInlineDelegate OnConfirmButtonClicked; // 0x5a0(0x10)
	struct UTexture2D* BulletpointIcon; // 0x5b0(0x08)
	struct UCommonTextStyle* EntryTextStyle; // 0x5b8(0x08)
	struct UCommonTextStyle* SubtitleTextStyle; // 0x5c0(0x08)
	enum class ETextJustify SubtitleTextJustification; // 0x5c8(0x01)

	void OnBulletpointIconChanged(struct UTexture2D* BulletpointIcon); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.OnBulletpointIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void CreateGenericListItem(struct FText Text, struct UWBP_GenericListItem_C*& ListItem); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.CreateGenericListItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnConfirmationTextChanged(struct FText& NewValue); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.OnConfirmationTextChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEntriesChanged(struct TArray<struct FText>& Entries); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.OnEntriesChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSubtitleChanged(struct FText& NewValue); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.OnSubtitleChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTitleChanged(struct FText& NewValue); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.OnTitleChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToGenericListViewModel(bool Bind, struct UGenericListConfirmationModalViewModel* GenericListConfirmationModalViewModel); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.BindToGenericListViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToConfirmationViewModel(bool Bind); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.BindToConfirmationViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_GenericListConfirmationModal_ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.BndEvt__WBP_GenericListConfirmationModal_ConfirmButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_GenericListConfirmationModal_ConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.BndEvt__WBP_GenericListConfirmationModal_ConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateConditionalInputActionName(struct FAresConditionalInputAction Action, struct FText& Name); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.UpdateConditionalInputActionName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_GenericListConfirmationModal(int32_t EntryPoint); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.ExecuteUbergraph_WBP_GenericListConfirmationModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnConfirmButtonClicked__DelegateSignature(); // Function WBP_GenericListConfirmationModal.WBP_GenericListConfirmationModal_C.OnConfirmButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

