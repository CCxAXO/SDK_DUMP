// WidgetBlueprintGeneratedClass PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C
// Size: 0x360 (Inherited: 0x330)
struct UPlayerTitleDropdownMenu_C : UAresContextMenuBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UAresScrollBox* TitlesScrollBox; // 0x338(0x08)
	struct UPlayerTitleHandle* PlayerTitle; // 0x340(0x08)
	struct FMulticastInlineDelegate On Title Selection; // 0x348(0x10)
	struct UPlayerTitleButton_C* DefaultPlayerTitle; // 0x358(0x08)

	bool IsValidTitle(struct UPlayerTitleHandle* PlayerTitle); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.IsValidTitle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshTitleLabels(); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.RefreshTitleLabels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Selected Title(struct UPlayerTitleHandle* PlayerTitleHandle); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.Set Selected Title // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Sorter(struct UObject* A, struct UObject* B, bool& Value); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.Sorter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateTitles(struct FPlayerTitleHandles& PlayerTitles); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.PopulateTitles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TitlesScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.BndEvt__TitlesScrollBox_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerTitleDropdownMenu(int32_t EntryPoint); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.ExecuteUbergraph_PlayerTitleDropdownMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void On Title Selection__DelegateSignature(struct UPlayerTitleHandle* SelectedTitle); // Function PlayerTitleDropdownmenu.PlayerTitleDropdownMenu_C.On Title Selection__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

