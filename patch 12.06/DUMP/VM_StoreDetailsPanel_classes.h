// BlueprintGeneratedClass VM_StoreDetailsPanel.VM_StoreDetailsPanel_C
// Size: 0xd0 (Inherited: 0x90)
struct UVM_StoreDetailsPanel_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct TArray<struct URewardModel*> RewardList; // 0x98(0x10)
	struct UOfferDTO* OfferDTO; // 0xa8(0x08)
	struct FMulticastInlineDelegate OnOfferDTOChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnRewardModelListChanged; // 0xc0(0x10)

	void SendPurchaseStartTelemetryEvent(struct UOfferDTO* SelectedOfferDTO); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.SendPurchaseStartTelemetryEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferOrRewardsList(struct UOfferDTO* OfferDTO); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.InitFromOfferOrRewardsList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromRewardList(struct URewardModelList* RewardModelList); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.InitFromRewardList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.InitFromOfferDTO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StoreOfferRewardListToRewardModelList(struct TArray<struct FStoreOfferReward>& StoreOfferRewardList, struct TArray<struct URewardModel*>& RewardModelList); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.StoreOfferRewardListToRewardModelList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetRewardModelList(struct TArray<struct URewardModel*>& InRewardList); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.SetRewardModelList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePurchaseConfirm(struct UOfferDTO* OfferDTO, struct FString OptionalEntryPointOverride); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.HandlePurchaseConfirm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_StoreDetailsPanel(int32_t EntryPoint); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.ExecuteUbergraph_VM_StoreDetailsPanel // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnRewardModelListChanged__DelegateSignature(struct TArray<int32_t>& RewardList); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.OnRewardModelListChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOfferDTOChanged__DelegateSignature(struct UOfferDTO* OfferDTO); // Function VM_StoreDetailsPanel.VM_StoreDetailsPanel_C.OnOfferDTOChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

