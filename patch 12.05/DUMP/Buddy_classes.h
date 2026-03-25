// WidgetBlueprintGeneratedClass Buddy.Buddy_C
// Size: 0x368 (Inherited: 0x318)
struct UBuddy_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Amount; // 0x320(0x08)
	struct UImage* BuddyImage; // 0x328(0x08)
	struct UEquippableCharmDataAsset* BuddyDataAsset; // 0x330(0x08)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x338(0x10)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x348(0x10)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0x358(0x10)

	void HandleIsFavoritedChanged(); // Function Buddy.Buddy_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsFavorited(bool& IsFavorited); // Function Buddy.Buddy_C.IsFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UnbindFromBuddy(); // Function Buddy.Buddy_C.UnbindFromBuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToBuddy(); // Function Buddy.Buddy_C.BindToBuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquippedChanged(); // Function Buddy.Buddy_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsOwnedChanged(); // Function Buddy.Buddy_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsEquipped(bool& IsEquipped); // Function Buddy.Buddy_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsOwned(bool& IsOwned); // Function Buddy.Buddy_C.IsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnHandleLoaded(struct UEquippableCharmHandle* Handle); // Function Buddy.Buddy_C.OnHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBuddy(struct UEquippableCharmDataAsset* DataAsset, int32_t Quantity); // Function Buddy.Buddy_C.SetBuddy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Buddy.Buddy_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Buddy(int32_t EntryPoint); // Function Buddy.Buddy_C.ExecuteUbergraph_Buddy // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function Buddy.Buddy_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function Buddy.Buddy_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function Buddy.Buddy_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

