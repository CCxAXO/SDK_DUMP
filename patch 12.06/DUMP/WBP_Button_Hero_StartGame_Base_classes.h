// WidgetBlueprintGeneratedClass WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C
// Size: 0x1bb1 (Inherited: 0x1ae0)
struct UWBP_Button_Hero_StartGame_Base_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* BeginQueue_Anim; // 0x1ae8(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_374; // 0x1af0(0x08)
	struct UImage* BG_Img; // 0x1af8(0x08)
	struct UAresCommonRichText* CancelText; // 0x1b00(0x08)
	struct USpacer* LeftIconSpacer; // 0x1b08(0x08)
	struct UImage* PC_BG_Fill; // 0x1b10(0x08)
	struct UImage* PC_BG_VFX; // 0x1b18(0x08)
	struct UOverlay* PCBG; // 0x1b20(0x08)
	struct UVerticalBox* PrimaryTextBoxContainer; // 0x1b28(0x08)
	struct UAresInputGate* QueueCancelContainer; // 0x1b30(0x08)
	struct UAresButtonImageComponent* QueueCancelIcon; // 0x1b38(0x08)
	struct UWBP_Timer_Countdown_C* RestrictionTimer; // 0x1b40(0x08)
	struct UAresButtonRichTextComponent* RTCPrimaryText; // 0x1b48(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x1b50(0x08)
	float DisabledStateValue; // 0x1b58(0x04)
	float EnabledStateValue; // 0x1b5c(0x04)
	bool _IsEnabled; // 0x1b60(0x01)
	char pad_1B61[0x7]; // 0x1b61(0x07)
	struct UMaterialInstance* ImageMaterialInstance; // 0x1b68(0x08)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x1b70(0x08)
	bool _IsQueue; // 0x1b78(0x01)
	char pad_1B79[0x3]; // 0x1b79(0x03)
	int32_t MinWidthPC; // 0x1b7c(0x04)
	int32_t MinHeightPC; // 0x1b80(0x04)
	int32_t MinWidthConsole; // 0x1b84(0x04)
	int32_t MinHeightConsole; // 0x1b88(0x04)
	bool InQueue; // 0x1b8c(0x01)
	char pad_1B8D[0x3]; // 0x1b8d(0x03)
	struct FMargin TextMarginPC; // 0x1b90(0x10)
	struct FMargin TextMarginConsole; // 0x1ba0(0x10)
	bool bEndOfGame; // 0x1bb0(0x01)

	void SetEndOfGame(bool bEndOfGame); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.SetEndOfGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupQueueVisuals(); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.SetupQueueVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowImageMaterial(bool IsQueue); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.ShowImageMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowColor(bool IsEnabled); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.ShowColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetExpirationTime(struct FDateTime ExpirationTime); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.SetExpirationTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDisabled(); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEnabled(); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Event Start Que VIZ(); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.Event Start Que VIZ // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Event Stop Que VIZ(); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.Event Stop Que VIZ // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnAresInputTypeChanged(enum class EAresInputType NewInputType); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.BP_OnAresInputTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Hero_StartGame_Base(int32_t EntryPoint); // Function WBP_Button_Hero_StartGame_Base.WBP_Button_Hero_StartGame_Base_C.ExecuteUbergraph_WBP_Button_Hero_StartGame_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

