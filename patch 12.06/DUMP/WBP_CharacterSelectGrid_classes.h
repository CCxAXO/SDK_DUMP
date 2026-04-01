// WidgetBlueprintGeneratedClass WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C
// Size: 0x438 (Inherited: 0x3e0)
struct UWBP_CharacterSelectGrid_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct TArray<None> CharacterHandles; // 0x3e8(0x10)
	bool bWrapHorizontalNavigation; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct URoleFilterProvider_C* FilterProvider; // 0x400(0x08)
	struct UAresCommonButtonGroup* TabbedButtonGroup; // 0x408(0x08)
	double EntryHeight; // 0x410(0x08)
	double EntryWidth; // 0x418(0x08)
	struct UUserWidget* LastHoveredWidget; // 0x420(0x08)
	struct UVM_ContentItemsList_C* ListGridContentVM; // 0x428(0x08)
	struct FCharacterHandleLoadOptions CharacterHandleLoadOptions; // 0x430(0x07)
	bool DevAgentsHidden; // 0x437(0x01)

	void SelectCharacter(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.SelectCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void GetDefaultEntryToSelect(struct UUserWidget*& Widget); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.GetDefaultEntryToSelect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetListGrid(struct UWBP_List_Grid_C*& ListGrid); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.GetListGrid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleFilterButtonHovered(struct UCommonButtonBase* Button); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.HandleFilterButtonHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFilterButtonClicked(struct UCommonButtonBase* Button); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.HandleFilterButtonClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetButtonToRoleMap(struct TMap<struct UCommonButtonBase*, struct UCharacterRoleUIData*>& Result); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.GetButtonToRoleMap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void InitializeFilterProvider(); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.InitializeFilterProvider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeSortProvider(); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.InitializeSortProvider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On All Characters Loaded(struct FCharacterHandles& CharacterHandles); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.On All Characters Loaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetupVisualOverrides(); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.SetupVisualOverrides // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnItemHoveredChanged(struct UObject* Item, bool bIsHovered); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.OnItemHoveredChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPageChanged(int32_t CurrentPage, int32_t TotalPages); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.OnPageChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CharacterTileClicked(struct UObject* Item); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.CharacterTileClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEntryInitialized(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.OnEntryInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeGrid(); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.InitializeGrid // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DevReloadCharacterGrid(bool HideDevAgents); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.DevReloadCharacterGrid // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_CharacterSelectGrid(int32_t EntryPoint); // Function WBP_CharacterSelectGrid.WBP_CharacterSelectGrid_C.ExecuteUbergraph_WBP_CharacterSelectGrid // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

