// WidgetBlueprintGeneratedClass LevelBorderItem.LevelBorderItem_C
// Size: 0x368 (Inherited: 0x318)
struct ULevelBorderItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* AccountLevelText; // 0x320(0x08)
	struct UImage* BorderArt; // 0x328(0x08)
	struct ULevelBorderDataAsset* Level Border Data Asset; // 0x330(0x08)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x338(0x10)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x348(0x10)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0x358(0x10)

	void HandleIsFavoritedChanged(); // Function LevelBorderItem.LevelBorderItem_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsFavorited(bool& IsFavorited); // Function LevelBorderItem.LevelBorderItem_C.IsFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetLevelBorder(struct ULevelBorderDataAsset* LevelBorderDataAsset); // Function LevelBorderItem.LevelBorderItem_C.SetLevelBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromLevelBorder(); // Function LevelBorderItem.LevelBorderItem_C.UnbindFromLevelBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsOwnedChanged(); // Function LevelBorderItem.LevelBorderItem_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsOwned(bool& IsOwned); // Function LevelBorderItem.LevelBorderItem_C.IsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsEquipped(bool& IsEquipped); // Function LevelBorderItem.LevelBorderItem_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandleIsEquippedChanged(); // Function LevelBorderItem.LevelBorderItem_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToLevelBorder(); // Function LevelBorderItem.LevelBorderItem_C.BindToLevelBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBorderArt(struct ULevelBorderUIData* Level Border UI Data); // Function LevelBorderItem.LevelBorderItem_C.UpdateBorderArt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHandleLoaded(struct ULevelBorderHandle* Level Border Handle); // Function LevelBorderItem.LevelBorderItem_C.OnHandleLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function LevelBorderItem.LevelBorderItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_LevelBorderItem(int32_t EntryPoint); // Function LevelBorderItem.LevelBorderItem_C.ExecuteUbergraph_LevelBorderItem // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function LevelBorderItem.LevelBorderItem_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function LevelBorderItem.LevelBorderItem_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function LevelBorderItem.LevelBorderItem_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

