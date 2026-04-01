// BlueprintGeneratedClass VM_GiftRecipientList.VM_GiftRecipientList_C
// Size: 0x140 (Inherited: 0xe8)
struct UVM_GiftRecipientList_C : UAresSocialListViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnGiftRecipientCandidatesChanged; // 0xf0(0x10)
	struct UVM_Gifting_C* VM_Gifting; // 0x100(0x08)
	struct UVM_FriendNote_C* VM_FriendNote; // 0x108(0x08)
	struct FMulticastInlineDelegate OnFilteredGiftRecipientCandidatesChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnGiftRecipientSelected; // 0x120(0x10)
	struct TArray<struct UGiftRecipientCandidateInfo*> GiftRecipientCandidatesList; // 0x130(0x10)

	void Filter Gift Recipient Candidates(struct FString Query); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.Filter Gift Recipient Candidates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleGiftRecipientSelected(struct FString SelectedRecipient); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.HandleGiftRecipientSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Player Display Name(struct UGiftRecipientCandidateInfo* GiftRecipientCandidate, struct FDisplayName& DisplayName); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.Get Player Display Name // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleGiftRecipientCandidatesChanged(struct TArray<bool>& GiftRecipientCandidates); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.HandleGiftRecipientCandidatesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CompareGiftRecipientCandidateName(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.CompareGiftRecipientCandidateName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_GiftRecipientList(int32_t EntryPoint); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.ExecuteUbergraph_VM_GiftRecipientList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnFilteredGiftRecipientCandidatesChanged__DelegateSignature(struct TArray<struct UGiftRecipientCandidateInfo*>& FilteredGiftRecipientCandidates); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.OnFilteredGiftRecipientCandidatesChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGiftRecipientSelected__DelegateSignature(); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.OnGiftRecipientSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGiftRecipientCandidatesChanged__DelegateSignature(struct TArray<struct UGiftRecipientCandidateInfo*>& GiftRecipientCandidates); // Function VM_GiftRecipientList.VM_GiftRecipientList_C.OnGiftRecipientCandidatesChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

