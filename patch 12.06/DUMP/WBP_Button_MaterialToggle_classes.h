// WidgetBlueprintGeneratedClass WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C
// Size: 0x1b09 (Inherited: 0x1ae0)
struct UWBP_Button_MaterialToggle_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UMaterialInstance* ToggleMaterial; // 0x1ae8(0x08)
	struct FName MatParam_IsSelected; // 0x1af0(0x0c)
	char pad_1AFC[0x4]; // 0x1afc(0x04)
	struct UMaterialInstanceDynamic* MIDToggle; // 0x1b00(0x08)
	bool bUseNavigationToToggle; // 0x1b08(0x01)

	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnToggleStateChanged(bool bIsSelected); // Function WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C.OnToggleStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMaterialCreated(); // Function WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C.OnMaterialCreated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateMaterial(); // Function WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C.CreateMaterial // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnSelected(); // Function WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDeselected(); // Function WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_MaterialToggle(int32_t EntryPoint); // Function WBP_Button_MaterialToggle.WBP_Button_MaterialToggle_C.ExecuteUbergraph_WBP_Button_MaterialToggle // (Final|UbergraphFunction) // @ game+0x1b42740
};

