// BlueprintGeneratedClass VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C
// Size: 0xe4 (Inherited: 0x90)
struct UVM_ContractChapterListWithSelect_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct TArray<struct UObject*> Chapters; // 0x98(0x10)
	struct FMulticastInlineDelegate OnChapterListChanged; // 0xa8(0x10)
	struct UContractChapterViewModel* SelectedChapter; // 0xb8(0x08)
	struct FMulticastInlineDelegate OnSelectedChapterChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnSelectedChapterIndexChanged; // 0xd0(0x10)
	int32_t SelectedChapterIndex; // 0xe0(0x04)

	void SetSelectedChapterIndex(int32_t SelectedChapterIndex); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.SetSelectedChapterIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedChapterFromModel(struct UContractChapterViewModel* ChapterModel); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.SetSelectedChapterFromModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedChapterFromIndexWithWrapping(int32_t ChapterIndex); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.SetSelectedChapterFromIndexWithWrapping // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedChapter(struct UContractChapterViewModel* SelectedChapter); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.SetSelectedChapter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Chapters(struct TArray<struct UObject*>& Chapters); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.Set Chapters // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init From Contract(struct UContractViewModel* Contract); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.Init From Contract // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContractChapterListWithSelect(int32_t EntryPoint); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.ExecuteUbergraph_VM_ContractChapterListWithSelect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnSelectedChapterIndexChanged__DelegateSignature(int32_t SelectedChapterIndex); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.OnSelectedChapterIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelectedChapterChanged__DelegateSignature(struct UContractChapterViewModel* SelectedChapter); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.OnSelectedChapterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnChapterListChanged__DelegateSignature(struct TArray<struct UObject*>& Chapters); // Function VM_ContractChapterListWithSelect.VM_ContractChapterListWithSelect_C.OnChapterListChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

