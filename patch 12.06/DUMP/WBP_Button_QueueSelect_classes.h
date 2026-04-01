// WidgetBlueprintGeneratedClass WBP_Button_QueueSelect.WBP_Button_QueueSelect_C
// Size: 0x1c78 (Inherited: 0x1c19)
struct UWBP_Button_QueueSelect_C : UWBP_Button_ContentTileBase_C {
	char pad_1C19[0x7]; // 0x1c19(0x07)
	struct UBorder* Border_Featured; // 0x1c20(0x08)
	struct UBorder* Border_LimitedTime; // 0x1c28(0x08)
	struct UAresCommonText* DisabledDescription; // 0x1c30(0x08)
	struct UVerticalBox* DisableDisplay; // 0x1c38(0x08)
	struct UImage* Image_128; // 0x1c40(0x08)
	struct UImage* Image_202; // 0x1c48(0x08)
	struct UImage* IMG_borderAndFocusState; // 0x1c50(0x08)
	struct UImage* IMG_HoverBG; // 0x1c58(0x08)
	struct UImage* IMG_Prominent; // 0x1c60(0x08)
	struct UMenuAnchor* MenuAnchor_NewMode; // 0x1c68(0x08)
	struct UAresCommonText* ModeText; // 0x1c70(0x08)

	void SetViewModelDataAndSetup(struct UObject* Object); // Function WBP_Button_QueueSelect.WBP_Button_QueueSelect_C.SetViewModelDataAndSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNewModeElements(); // Function WBP_Button_QueueSelect.WBP_Button_QueueSelect_C.UpdateNewModeElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFeaturedTileElements(); // Function WBP_Button_QueueSelect.WBP_Button_QueueSelect_C.UpdateFeaturedTileElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

