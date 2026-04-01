// WidgetBlueprintGeneratedClass WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C
// Size: 0x1bd8 (Inherited: 0x1ae0)
struct UWBP_Button_VCTGlobalEventButton_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* GlobalEventColumnOnUnhover; // 0x1ae8(0x08)
	struct UWidgetAnimation* GlobalEventColumnOnHover; // 0x1af0(0x08)
	struct UImage* Arrows_Bot; // 0x1af8(0x08)
	struct UImage* Arrows_Top; // 0x1b00(0x08)
	struct UImage* ConcludedTexture; // 0x1b08(0x08)
	struct UImage* Image_BaseColor; // 0x1b10(0x08)
	struct UImage* Image_CommonBorder_EF; // 0x1b18(0x08)
	struct UImage* Image_EventBG; // 0x1b20(0x08)
	struct UImage* Image_LiveGradient; // 0x1b28(0x08)
	struct UOverlay* O_Content; // 0x1b30(0x08)
	struct UScaleBox* ScaleBox_EventBG; // 0x1b38(0x08)
	struct UImage* Sweep_Hover; // 0x1b40(0x08)
	struct UImage* Unstarted; // 0x1b48(0x08)
	struct UImage* VCTnotch_Bot; // 0x1b50(0x08)
	struct UImage* VCTnotch_Top; // 0x1b58(0x08)
	struct UWBP_Panel_EsportsEventTitleCard_C* WBP_Panel_EsportsEventTitleCard; // 0x1b60(0x08)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x1b68(0x08)
	struct FText EventInProgressText; // 0x1b70(0x18)
	struct FText EventCompletedText; // 0x1b88(0x18)
	struct FText EventUnstartedText; // 0x1ba0(0x18)
	struct FText EventNextUpText; // 0x1bb8(0x18)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x1bd0(0x08)

	void SequenceEvent__ENTRYPOINTWBP_Button_VCTGlobalEventButton(); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.SequenceEvent__ENTRYPOINTWBP_Button_VCTGlobalEventButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModelV2(struct UEsportsTournamentViewModel* InViewModel); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.SetViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModel(struct UEsportsEventViewModel* EsportsEventViewModel); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HoverAudio(); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.HoverAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PlayOnHoverAnimation(); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.PlayOnHoverAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayOnUnhoverAnimation(); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.PlayOnUnhoverAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_VCTGlobalEventButton(int32_t EntryPoint); // Function WBP_Button_VCTGlobalEventButton.WBP_Button_VCTGlobalEventButton_C.ExecuteUbergraph_WBP_Button_VCTGlobalEventButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

