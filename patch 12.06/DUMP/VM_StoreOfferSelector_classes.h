// BlueprintGeneratedClass VM_StoreOfferSelector.VM_StoreOfferSelector_C
// Size: 0x290 (Inherited: 0x240)
struct UVM_StoreOfferSelector_C : UVM_StoreOffer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UOfferDTO* SelectedOfferDTO; // 0x248(0x08)
	struct FMulticastInlineDelegate OnSelectedOfferDTOChanged; // 0x250(0x10)
	struct TArray<struct UOfferDTO*> SelectionCandidates; // 0x260(0x10)
	struct FMulticastInlineDelegate OnOfferSelectionCandidatesChanged; // 0x270(0x10)
	bool Prefer Parent; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UOfferDTO* ParentOffer; // 0x288(0x08)

	void OnIsSubOfferEnabledChanged(struct UOfferDTO* OfferDTO); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.OnIsSubOfferEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToIsSubOfferEnabledChanged(bool Bind); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.BindToIsSubOfferEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetBespokeOfferBehavior(); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.ResetBespokeOfferBehavior // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsSelectionAllowedChanged(struct UOfferDTO* AllowedOfferDTO); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.OnIsSelectionAllowedChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToIsAllowedChanged(bool Bind); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.BindToIsAllowedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LimitSelectionCandidates(int32_t LimitCount, struct TArray<struct FGuid>& CurrencyByPriority, bool& HasChanged); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.LimitSelectionCandidates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnsureSelectionIsValid(); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.EnsureSelectionIsValid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTOWithSelectionPreference(struct UOfferDTO* OfferDTO, bool PreferParent); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.InitFromOfferDTOWithSelectionPreference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedOffer(struct UOfferDTO* InSelectedOfferDTO); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.SetSelectedOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTO(struct UOfferDTO* offerToInitFrom); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.InitFromOfferDTO // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_StoreOfferSelector(int32_t EntryPoint); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.ExecuteUbergraph_VM_StoreOfferSelector // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnOfferSelectionCandidatesChanged__DelegateSignature(struct TArray<struct UOfferDTO*>& OfferSelectionCandidates); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.OnOfferSelectionCandidatesChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelectedOfferDTOChanged__DelegateSignature(struct UOfferDTO* SelectedOfferDTO); // Function VM_StoreOfferSelector.VM_StoreOfferSelector_C.OnSelectedOfferDTOChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

