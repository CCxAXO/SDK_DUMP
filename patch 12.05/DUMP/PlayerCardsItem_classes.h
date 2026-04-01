// WidgetBlueprintGeneratedClass PlayerCardsItem.PlayerCardsItem_C
// Size: 0x360 (Inherited: 0x318)
struct UPlayerCardsItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* CardImage; // 0x320(0x08)
	struct UPlayerCardDataAsset* PlayerCardDataAsset; // 0x328(0x08)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x330(0x10)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x340(0x10)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0x350(0x10)

	void IsFavorited(bool& IsFavorited); // Function PlayerCardsItem.PlayerCardsItem_C.IsFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleIsFavoritedChanged(); // Function PlayerCardsItem.PlayerCardsItem_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsOwnedChanged(); // Function PlayerCardsItem.PlayerCardsItem_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquippedChanged(); // Function PlayerCardsItem.PlayerCardsItem_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsOwned(bool& IsOwned); // Function PlayerCardsItem.PlayerCardsItem_C.IsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsEquipped(bool& IsEquipped); // Function PlayerCardsItem.PlayerCardsItem_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetPlayerCard(struct UPlayerCardDataAsset* Card Data Asset); // Function PlayerCardsItem.PlayerCardsItem_C.SetPlayerCard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToCard(); // Function PlayerCardsItem.PlayerCardsItem_C.BindToCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromCard(); // Function PlayerCardsItem.PlayerCardsItem_C.UnbindFromCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHandleLoaded(struct UPlayerCardHandle* CardHandle); // Function PlayerCardsItem.PlayerCardsItem_C.OnHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PlayerCardsItem.PlayerCardsItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerCardsItem(int32_t EntryPoint); // Function PlayerCardsItem.PlayerCardsItem_C.ExecuteUbergraph_PlayerCardsItem // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function PlayerCardsItem.PlayerCardsItem_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function PlayerCardsItem.PlayerCardsItem_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function PlayerCardsItem.PlayerCardsItem_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

