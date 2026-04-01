// WidgetBlueprintGeneratedClass WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C
// Size: 0x488 (Inherited: 0x3e0)
struct UWBP_Panel_PickemGroupSectionList_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* HorizontalBox_GroupList; // 0x3e8(0x08)
	int32_t PreviewGroupCount; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FString TournamentSlug; // 0x3f8(0x10)
	double PaddingBetweenGroups; // 0x408(0x08)
	struct UPickemGroupSectionListViewModel* SectionListViewModel; // 0x410(0x08)
	struct FString TournamentID; // 0x418(0x10)
	struct TMap<struct UWBP_Panel_PickemGroupSectionItem_C*, bool> SectionItemLoadingMap; // 0x428(0x50)
	struct FMulticastInlineDelegate OnSectionItemsLoadingChanged; // 0x478(0x10)

	void OnHasValidDataChanged(struct UWBP_Panel_PickemGroupSectionItem_C* Widget, bool bLoadingCompleted); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckLoadingCompleted(); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.CheckLoadingCompleted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct TArray<struct FString> MakePreviewSectionIDArray(); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.MakePreviewSectionIDArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateSectionItemWidgets(struct TArray<struct FString>& SectionIDs); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.CreateSectionItemWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct FString InTournamentSlug, struct FString InTournamentID); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleSectionIDsChanged(struct TArray<struct FString>& SectionIDs); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.HandleSectionIDsChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PickemGroupSectionList(int32_t EntryPoint); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.ExecuteUbergraph_WBP_Panel_PickemGroupSectionList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnSectionItemsLoadingChanged__DelegateSignature(bool bLoadingComplete); // Function WBP_Panel_PickemGroupSectionList.WBP_Panel_PickemGroupSectionList_C.OnSectionItemsLoadingChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

