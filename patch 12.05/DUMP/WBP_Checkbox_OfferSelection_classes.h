// WidgetBlueprintGeneratedClass WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C
// Size: 0x1b80 (Inherited: 0x1b40)
struct UWBP_Checkbox_OfferSelection_C : UAresMaterialToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b40(0x08)
	struct UImage* ImgToggle; // 0x1b48(0x08)
	struct UWBP_Panel_OfferPrice_C* OfferPrice; // 0x1b50(0x08)
	struct UVM_StoreOffer_C* StoreOffer_VM; // 0x1b58(0x08)
	struct FGuid CurrencyID; // 0x1b60(0x10)
	int32_t Price; // 0x1b70(0x04)
	char pad_1B74[0x4]; // 0x1b74(0x04)
	struct UOfferDTO* OfferDTO; // 0x1b78(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOnEnabledChanged(bool NewIsEnabled); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.HandleOnEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnMaterialCreated(); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.OnMaterialCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnToggleStateChanged(bool bIsSelected); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.OnToggleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Checkbox_OfferSelection(int32_t EntryPoint); // Function WBP_Checkbox_OfferSelection.WBP_Checkbox_OfferSelection_C.ExecuteUbergraph_WBP_Checkbox_OfferSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

