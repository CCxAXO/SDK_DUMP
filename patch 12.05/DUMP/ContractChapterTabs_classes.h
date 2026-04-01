// WidgetBlueprintGeneratedClass ContractChapterTabs.ContractChapterTabs_C
// Size: 0x3f8 (Inherited: 0x318)
struct UContractChapterTabs_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBorder* Border_Gradient; // 0x320(0x08)
	struct UHorizontalBox* TabsHbox; // 0x328(0x08)
	int32_t NumPreviewTabs; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct TMap<struct UTelemetryTabButton_C*, int32_t> TabButtonToChapter; // 0x338(0x50)
	struct FMulticastInlineDelegate ChapterClicked; // 0x388(0x10)
	struct UTelemetryTabButton_C* ActiveTab; // 0x398(0x08)
	struct UContractViewModel* ContractViewModel; // 0x3a0(0x08)
	struct TMap<int32_t, struct UTelemetryTabButton_C*> ChapterToTabButton; // 0x3a8(0x50)

	void Update BG Visibility(bool bHide); // Function ContractChapterTabs.ContractChapterTabs_C.Update BG Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentLevelTab(int32_t ChapterIndex); // Function ContractChapterTabs.ContractChapterTabs_C.SetCurrentLevelTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelectedTab(int32_t ChapterIndex); // Function ContractChapterTabs.ContractChapterTabs_C.SetSelectedTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UContractViewModel* ContractViewModel); // Function ContractChapterTabs.ContractChapterTabs_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTabButtonClicked(struct UTabButtonBase_C* Button); // Function ContractChapterTabs.ContractChapterTabs_C.HandleTabButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddChapterTabs(int32_t NumChapters, int32_t ActiveIndex); // Function ContractChapterTabs.ContractChapterTabs_C.AddChapterTabs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ContractChapterTabs.ContractChapterTabs_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContractChapterTabs(int32_t EntryPoint); // Function ContractChapterTabs.ContractChapterTabs_C.ExecuteUbergraph_ContractChapterTabs // (Final|UbergraphFunction) // @ game+0x1af5410
	void ChapterClicked__DelegateSignature(int32_t ChapterClicked); // Function ContractChapterTabs.ContractChapterTabs_C.ChapterClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

