// BlueprintGeneratedClass VM_GiftRecipientCandidate.VM_GiftRecipientCandidate_C
// Size: 0xc8 (Inherited: 0x90)
struct UVM_GiftRecipientCandidate_C : UAresViewModelBase {
	struct URecipientInventoryModel* RecipientInventoryModel; // 0x90(0x08)
	struct FString RecipientId; // 0x98(0x10)
	bool  HasValidOwnershipInfo; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UGiftRecipientCandidateInfo* RecipientCandidateInfo; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnRecipientIDChanged; // 0xb8(0x10)

	void SetRecipientId(struct FString NewRecipientID); // Function VM_GiftRecipientCandidate.VM_GiftRecipientCandidate_C.SetRecipientId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHandleRecipientIdChanged(struct FString RecipientId); // Function VM_GiftRecipientCandidate.VM_GiftRecipientCandidate_C.OnHandleRecipientIdChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function VM_GiftRecipientCandidate.VM_GiftRecipientCandidate_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromRewardHandle(struct UBaseHandle* BaseHandle); // Function VM_GiftRecipientCandidate.VM_GiftRecipientCandidate_C.InitFromRewardHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRecipientIdChanged__DelegateSignature(struct FString RecipientId); // Function VM_GiftRecipientCandidate.VM_GiftRecipientCandidate_C.OnRecipientIdChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

