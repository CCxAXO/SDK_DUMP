// WidgetBlueprintGeneratedClass WBP_Button_CharacterTile.WBP_Button_CharacterTile_C
// Size: 0x1b11 (Inherited: 0x1ae0)
struct UWBP_Button_CharacterTile_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UGenericTextTooltipContainer_C* TooltipContainer; // 0x1ae8(0x08)
	struct UWBP_CharacterListEntryV3_C* WBP_CharacterListEntryV3; // 0x1af0(0x08)
	struct UAkAudioEvent* AUD_Hover; // 0x1af8(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x1b00(0x08)
	struct UCharacterHandle* Character Handle; // 0x1b08(0x08)
	bool bClearContentHandleOnEntryReleased; // 0x1b10(0x01)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContentViewModel(struct UVM_ContentTile_C* ViewModel); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.SetContentViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCharacterHandle(struct UCharacterHandle* CharacterHandle); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.SetCharacterHandle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContentItem(struct UContentItemObject_C* ContentItem); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.SetContentItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFocus(); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.UpdateFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_CharacterTile(int32_t EntryPoint); // Function WBP_Button_CharacterTile.WBP_Button_CharacterTile_C.ExecuteUbergraph_WBP_Button_CharacterTile // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

