// WidgetBlueprintGeneratedClass WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C
// Size: 0x460 (Inherited: 0x3e0)
struct UWBP_Panel_PickemGroupEntryList_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* VerticalBox_ItemList; // 0x3e8(0x08)
	int32_t PreviewTotalEntryCount; // 0x3f0(0x04)
	int32_t PreviewAdvancingEntryCount; // 0x3f4(0x04)
	struct FString TournamentSlug; // 0x3f8(0x10)
	struct FString sectionid; // 0x408(0x10)
	struct TArray<struct UWBP_Panel_PickemGroupEntryItem_C*> EntryWidgets; // 0x418(0x10)
	double EntryInnerHorizontalPadding; // 0x428(0x08)
	double ListItemVerticalPadding; // 0x430(0x08)
	struct UPickemGroupEntryListViewModel* EntryListViewModel; // 0x438(0x08)
	struct FString TournamentID; // 0x440(0x10)
	struct FMulticastInlineDelegate OnHasValidDataLoadedChanged; // 0x450(0x10)

	void OnHasValidDataChanged(bool bHasValidData); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateItemWidgets(int32_t TotalEntryCount, int32_t AdvancingEntryCount); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.CreateItemWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct FString InTournamentSlug, struct FString InSectionID, struct FString InTournamentID); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleViewModelIntValueChanged(int32_t NewValue); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.HandleViewModelIntValueChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PickemGroupEntryList(int32_t EntryPoint); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.ExecuteUbergraph_WBP_Panel_PickemGroupEntryList // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnHasValidDataLoadedChanged__DelegateSignature(bool bLoadingCompleted); // Function WBP_Panel_PickemGroupEntryList.WBP_Panel_PickemGroupEntryList_C.OnHasValidDataLoadedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

