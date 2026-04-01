// WidgetBlueprintGeneratedClass WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C
// Size: 0x478 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsTeamButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* NotHovered; // 0x3e8(0x08)
	struct UWidgetAnimation* OnHover; // 0x3f0(0x08)
	struct UAresCommonText* CT_TeamCode; // 0x3f8(0x08)
	struct UAresCommonText* CT_TeamName_FULL; // 0x400(0x08)
	struct UImage* I_BackgroundColor_OnHover; // 0x408(0x08)
	struct UImage* I_Boarder_OnHover; // 0x410(0x08)
	struct UImage* I_NameBG; // 0x418(0x08)
	struct UImage* I_NameMask; // 0x420(0x08)
	struct UImage* I_TeamLogo; // 0x428(0x08)
	struct UOverlay* Overlay_HoveredState; // 0x430(0x08)
	struct UOverlay* Overlay_NotHoveredState; // 0x438(0x08)
	struct UEsportsTeamViewModel* TeamViewModel; // 0x440(0x08)
	double TeamNameBackgroundBuffer; // 0x448(0x08)
	struct FString TeamPrimaryColor; // 0x450(0x10)
	struct FString TeamSecondaryColor; // 0x460(0x10)
	struct UEsportsTeamViewModelV2* TeamViewModelV2; // 0x470(0x08)

	void SequenceEvent__ENTRYPOINTWBP_Panel_EsportsTeamButton(); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.SequenceEvent__ENTRYPOINTWBP_Panel_EsportsTeamButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Team Code Changed(struct FString NewValue); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.On Team Code Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Team Name Changed(struct FString NewValue); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.On Team Name Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamViewModelV2(struct FString InID); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.SetTeamViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateAndBindTeamViewModel(); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.CreateAndBindTeamViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Secondary Color Updated(struct FString NewValue); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.Handle Secondary Color Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Primary Color Updated(struct FString NewValue); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.Handle Primary Color Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Logo Updated(struct UTexture2D* Logo); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.Handle Logo Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Code Updated(struct FText& NewValue); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.Handle Code Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Name Updated(struct FText& NewValue); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.Handle Name Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamModel(struct UTeamModel* InModel); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.SetTeamModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void AudioEvent(); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.AudioEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsTeamButton(int32_t EntryPoint); // Function WBP_Panel_EsportsTeamButton.WBP_Panel_EsportsTeamButton_C.ExecuteUbergraph_WBP_Panel_EsportsTeamButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

