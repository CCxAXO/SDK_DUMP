// WidgetBlueprintGeneratedClass WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C
// Size: 0x42c (Inherited: 0x40d)
struct UWBP_Panel_Battlepass_ChapterTabs_C : UWBP_View_TabDisplayBase_C {
	char pad_40D[0x3]; // 0x40d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UAresConfigurableCommonTileView* PipTileView; // 0x418(0x08)
	struct UVM_ContractState_C* Contract State VM; // 0x420(0x08)
	int32_t NumChapters; // 0x428(0x04)

	void OnChapterPipClicked(struct UObject* Item); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.OnChapterPipClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToChapterPipClick(bool Bind, struct UWBP_Panel_Battlepass_ChapterPip_C* ChapterPip); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.BindToChapterPipClick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PublicCallTabsChanged(struct TArray<struct UObject*>& TabObjects); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.PublicCallTabsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init Child Pip(struct UWBP_Panel_Battlepass_ChapterPip_C*& Child Pip Widget, int32_t& Chapter Index); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.Init Child Pip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CallTabsChanged(struct TArray<struct UObject*>& TabObjects); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.CallTabsChanged // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelectedIndex(int32_t InSelectedIndex); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.SetSelectedIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_Battlepass_ChapterTabs_PipTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.BndEvt__WBP_Panel_Battlepass_ChapterTabs_PipTileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_Battlepass_ChapterTabs_PipTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.BndEvt__WBP_Panel_Battlepass_ChapterTabs_PipTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Battlepass_ChapterTabs(int32_t EntryPoint); // Function WBP_Panel_Battlepass_ChapterTabs.WBP_Panel_Battlepass_ChapterTabs_C.ExecuteUbergraph_WBP_Panel_Battlepass_ChapterTabs // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

