// WidgetBlueprintGeneratedClass WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C
// Size: 0x1b20 (Inherited: 0x1b09)
struct UWBP_Button_ListDiamondToggleBase_C : UWBP_Button_MaterialToggle_C {
	char pad_1B09[0x7]; // 0x1b09(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b10(0x08)
	struct UImage* ImgToggle; // 0x1b18(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMaterialCreated(); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.OnMaterialCreated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnButtonBaseClicked_Event_1(struct UCommonButtonBase* Button); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.OnButtonBaseClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnButtonBaseHovered_Event_1(struct UCommonButtonBase* Button); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.OnButtonBaseHovered_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_ListDiamondToggleBase(int32_t EntryPoint); // Function WBP_Button_ListDiamondToggleBase.WBP_Button_ListDiamondToggleBase_C.ExecuteUbergraph_WBP_Button_ListDiamondToggleBase // (Final|UbergraphFunction) // @ game+0x1b42740
};

