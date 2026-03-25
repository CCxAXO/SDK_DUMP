// WidgetBlueprintGeneratedClass WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C
// Size: 0x460 (Inherited: 0x3e0)
struct UWBP_Panel_PickemGroupEntryChoiceList_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_Open; // 0x3e8(0x08)
	struct UVerticalBox* VerticalBox_ButtonList; // 0x3f0(0x08)
	int32_t PreviewButtonCount; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UPickemGroupEntryChoiceListViewModel* ChoiceListViewModel; // 0x400(0x08)
	struct FString TournamentSlug; // 0x408(0x10)
	struct FString sectionid; // 0x418(0x10)
	int32_t EntryIndex; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct UWBP_Panel_PickemGroupEntryChoiceItem_C*> ChoiceWidgets; // 0x430(0x10)
	struct FMulticastInlineDelegate OnInteractionCompleted; // 0x440(0x10)
	struct FString Tournament ID; // 0x450(0x10)

	void InitializeChoiceWidgets(struct TArray<struct FString>& TeamIDs); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.InitializeChoiceWidgets // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateChoiceWidgets(int32_t ButtonCount); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.CreateChoiceWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct FString InTournamentSlug, struct FString InTournamentID, struct FString InSectionID, int32_t InEntryIndex); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleTeamIDsChanged(struct TArray<struct FString>& TeamIDs); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.HandleTeamIDsChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleInteractionCompleted(); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.HandleInteractionCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PickemGroupEntryChoiceList(int32_t EntryPoint); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.ExecuteUbergraph_WBP_Panel_PickemGroupEntryChoiceList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnInteractionCompleted__DelegateSignature(); // Function WBP_Panel_PickemGroupEntryChoiceList.WBP_Panel_PickemGroupEntryChoiceList_C.OnInteractionCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

