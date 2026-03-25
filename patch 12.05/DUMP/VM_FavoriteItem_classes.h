// BlueprintGeneratedClass VM_FavoriteItem.VM_FavoriteItem_C
// Size: 0xf0 (Inherited: 0x90)
struct UVM_FavoriteItem_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UVM_InventoryItem_C* VM_InventoryItemUnlocked; // 0x98(0x08)
	struct FMulticastInlineDelegate OnIsFavoriteCandidateChanged; // 0xa0(0x10)
	struct UAresBasePrimaryDataAsset* Base Data Asset; // 0xb0(0x08)
	bool Is Favorite Candidate; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0xc0(0x10)
	struct UVM_InventoryItem_C* VM_InventoryItemFavorited; // 0xd0(0x08)
	bool UnlockedChangedHandled; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UVM_StoreOffer_C* VM_StoreOffer; // 0xe0(0x08)
	struct UVM_Reward_C* VM_Reward; // 0xe8(0x08)

	void HandleRandomSelectedAssetChanged(bool IsRandomSelectionAsset); // Function VM_FavoriteItem.VM_FavoriteItem_C.HandleRandomSelectedAssetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromReward(struct URewardModel* RewardModel); // Function VM_FavoriteItem.VM_FavoriteItem_C.InitFromReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOnIsGiftChanged(bool IsGift); // Function VM_FavoriteItem.VM_FavoriteItem_C.HandleOnIsGiftChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_FavoriteItem.VM_FavoriteItem_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetIsFavorited(bool& IsFavorited); // Function VM_FavoriteItem.VM_FavoriteItem_C.GetIsFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnChromaHandleLoaded(struct UEquippableSkinChromaHandle* EquippableSkinChromaHandle); // Function VM_FavoriteItem.VM_FavoriteItem_C.OnChromaHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ToggleFavoriteState(); // Function VM_FavoriteItem.VM_FavoriteItem_C.ToggleFavoriteState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Is Favorite Changed(bool IsFavorited); // Function VM_FavoriteItem.VM_FavoriteItem_C.Handle Is Favorite Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateHasValidData(); // Function VM_FavoriteItem.VM_FavoriteItem_C.UpdateHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Any VMHas Valid Data Changed(bool NewValue); // Function VM_FavoriteItem.VM_FavoriteItem_C.Handle Any VMHas Valid Data Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Unlocked Changed(bool IsUnlocked); // Function VM_FavoriteItem.VM_FavoriteItem_C.Handle Unlocked Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsFavoriteCandidate(bool IsFavoriteCandidateIn); // Function VM_FavoriteItem.VM_FavoriteItem_C.SetIsFavoriteCandidate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Is Favorite Candidate(); // Function VM_FavoriteItem.VM_FavoriteItem_C.Update Is Favorite Candidate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromHandle(struct UBaseHandle* BaseHandle); // Function VM_FavoriteItem.VM_FavoriteItem_C.InitFromHandle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function VM_FavoriteItem.VM_FavoriteItem_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function VM_FavoriteItem.VM_FavoriteItem_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_FavoriteItem.VM_FavoriteItem_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_FavoriteItem.VM_FavoriteItem_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_FavoriteItem.VM_FavoriteItem_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_FavoriteItem(int32_t EntryPoint); // Function VM_FavoriteItem.VM_FavoriteItem_C.ExecuteUbergraph_VM_FavoriteItem // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function VM_FavoriteItem.VM_FavoriteItem_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsFavoriteCandidateChanged__DelegateSignature(bool IsFavoriteCandidate); // Function VM_FavoriteItem.VM_FavoriteItem_C.OnIsFavoriteCandidateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

