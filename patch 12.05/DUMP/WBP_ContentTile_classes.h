// WidgetBlueprintGeneratedClass WBP_ContentTile.WBP_ContentTile_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_ContentTile_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	bool bAutoGenerateViewModel; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UVM_ContentTile_C* ContentTileViewmodel; // 0x3f0(0x08)
	struct UVM_ContentTile_C* ViewModelClass; // 0x3f8(0x08)

	void OnHighestOwnedSubscriptionChanged(struct USubscriptionDataAsset* SubscriptionDataAsset); // Function WBP_ContentTile.WBP_ContentTile_C.OnHighestOwnedSubscriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsUnlockedOnlyBySubscriptionChanged(bool bIsUnlockedOnlyBySubscription); // Function WBP_ContentTile.WBP_ContentTile_C.OnIsUnlockedOnlyBySubscriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnContentTileViewModelSet(); // Function WBP_ContentTile.WBP_ContentTile_C.OnContentTileViewModelSet // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeContentTileViewModel(); // Function WBP_ContentTile.WBP_ContentTile_C.MakeContentTileViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshView(); // Function WBP_ContentTile.WBP_ContentTile_C.RefreshView // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContentTileViewModel(struct UVM_ContentTile_C* ViewModel); // Function WBP_ContentTile.WBP_ContentTile_C.SetContentTileViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToContentTileViewModel(bool bBind); // Function WBP_ContentTile.WBP_ContentTile_C.BindToContentTileViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModels(); // Function WBP_ContentTile.WBP_ContentTile_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOwnedOnlyByLoyaltyChanged(bool IsOnlyOwnedByLoyalty); // Function WBP_ContentTile.WBP_ContentTile_C.OnOwnedOnlyByLoyaltyChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsContentUnlockedChanged(bool Unlocked); // Function WBP_ContentTile.WBP_ContentTile_C.OnIsContentUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_ContentTile.WBP_ContentTile_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_ContentTile(int32_t EntryPoint); // Function WBP_ContentTile.WBP_ContentTile_C.ExecuteUbergraph_WBP_ContentTile // (Final|UbergraphFunction) // @ game+0x1af5410
};

