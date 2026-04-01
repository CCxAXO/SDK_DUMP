// WidgetBlueprintGeneratedClass WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C
// Size: 0x1b48 (Inherited: 0x1ae0)
struct UWBP_Button_TabList_PrimaryWithWarning_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct USettingNotificationViewModel* SettingNotificationViewModel; // 0x1ae8(0x08)
	struct UWidgetAnimation* AnimActive_Mkb; // 0x1af0(0x08)
	struct UWidgetAnimation* AnimUnHovered_Mkb; // 0x1af8(0x08)
	struct UWidgetAnimation* AnimHovered_Mkb; // 0x1b00(0x08)
	struct UImage* glowNew; // 0x1b08(0x08)
	struct UImage* TabUnderline; // 0x1b10(0x08)
	struct UImage* TabUnderline_white; // 0x1b18(0x08)
	struct UAresButtonImageComponent* WarningIcon; // 0x1b20(0x08)
	struct UMaterialInstanceDynamic* GlowMaterial_Inst; // 0x1b28(0x08)
	bool Selected_Cached; // 0x1b30(0x01)
	bool Hovered_Cached; // 0x1b31(0x01)
	enum class EAresInputType InputType_Cached; // 0x1b32(0x01)
	char pad_1B33[0x5]; // 0x1b33(0x05)
	struct FString URL; // 0x1b38(0x10)

	enum class ESlateVisibility __86b6036b-44a0-d4f6-1680-218c76cfc273_SourceToDest(); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.__86b6036b-44a0-d4f6-1680-218c76cfc273_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void UpdateInputChanged(enum class EAresInputType New Input); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.UpdateInputChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateHoveredAnim(bool IsHovered); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.UpdateHoveredAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelectedAnim(bool IsSelected); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.UpdateSelectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnSelected(); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDeselected(); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnAresInputTypeChanged(enum class EAresInputType NewInputType); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.BP_OnAresInputTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_TabList_PrimaryWithWarning(int32_t EntryPoint); // Function WBP_Button_TabList_PrimaryWithWarning.WBP_Button_TabList_PrimaryWithWarning_C.ExecuteUbergraph_WBP_Button_TabList_PrimaryWithWarning // (Final|UbergraphFunction) // @ game+0x1b42740
};

