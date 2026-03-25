// BlueprintGeneratedClass VM_ContractChapterState.VM_ContractChapterState_C
// Size: 0x100 (Inherited: 0x90)
struct UVM_ContractChapterState_C : UAresViewModelBase {
	int32_t NumLevels; // 0x90(0x04)
	int32_t Last Level Number; // 0x94(0x04)
	int32_t Current level; // 0x98(0x04)
	bool IsCurrent; // 0x9c(0x01)
	bool IsSelected; // 0x9d(0x01)
	bool isEpilogue; // 0x9e(0x01)
	enum class ContractChapterDisplayState Display State; // 0x9f(0x01)
	struct FMulticastInlineDelegate OnDisplayStateChanged; // 0xa0(0x10)
	int32_t Chapter Index; // 0xb0(0x04)
	bool IsCompleted; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FText Chapter Progress Text; // 0xb8(0x18)
	struct FMulticastInlineDelegate OnChapterProgressTextChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnNumLevelsChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnIsEpilogueChanged; // 0xf0(0x10)

	void SetNumLevels(int32_t Num Levels); // Function VM_ContractChapterState.VM_ContractChapterState_C.SetNumLevels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateChapterProgressText(); // Function VM_ContractChapterState.VM_ContractChapterState_C.UpdateChapterProgressText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set ChapterProgressText(struct FText Chapter Progress Text); // Function VM_ContractChapterState.VM_ContractChapterState_C.Set ChapterProgressText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Current Level Changed(int32_t Current level); // Function VM_ContractChapterState.VM_ContractChapterState_C.Handle Current Level Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Current Chapter Changed(int32_t Current Chapter); // Function VM_ContractChapterState.VM_ContractChapterState_C.Handle Current Chapter Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Chapter Index(int32_t Index); // Function VM_ContractChapterState.VM_ContractChapterState_C.Set Chapter Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set LastLevelNumber(int32_t Last Level Number); // Function VM_ContractChapterState.VM_ContractChapterState_C.Set LastLevelNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Display State(); // Function VM_ContractChapterState.VM_ContractChapterState_C.Update Display State // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Display State(enum class ContractChapterDisplayState Display State); // Function VM_ContractChapterState.VM_ContractChapterState_C.Set Display State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set IsCompleted(bool IsCompleted); // Function VM_ContractChapterState.VM_ContractChapterState_C.Set IsCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set IsEpilogue(bool isEpilogue); // Function VM_ContractChapterState.VM_ContractChapterState_C.Set IsEpilogue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set IsSelected(bool IsSelected); // Function VM_ContractChapterState.VM_ContractChapterState_C.Set IsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set IsCurrent(bool IsCurrent); // Function VM_ContractChapterState.VM_ContractChapterState_C.Set IsCurrent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UContractChapterViewModel* Chapter View Model); // Function VM_ContractChapterState.VM_ContractChapterState_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function VM_ContractChapterState.VM_ContractChapterState_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEpilogueChanged__DelegateSignature(bool isEpilogue); // Function VM_ContractChapterState.VM_ContractChapterState_C.OnIsEpilogueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNumLevelsChanged__DelegateSignature(int32_t Num Levels); // Function VM_ContractChapterState.VM_ContractChapterState_C.OnNumLevelsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnChapterProgressTextChanged__DelegateSignature(struct FText Chapter Progress Text); // Function VM_ContractChapterState.VM_ContractChapterState_C.OnChapterProgressTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDisplayStateChanged__DelegateSignature(enum class ContractChapterDisplayState Display State); // Function VM_ContractChapterState.VM_ContractChapterState_C.OnDisplayStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

