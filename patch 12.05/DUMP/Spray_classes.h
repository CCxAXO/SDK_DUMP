// WidgetBlueprintGeneratedClass Spray.Spray_C
// Size: 0x358 (Inherited: 0x318)
struct USpray_C : UUserWidget {
	struct USprayImage_C* SprayTexture; // 0x318(0x08)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x320(0x10)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x330(0x10)
	struct USprayDataAsset* SprayDataAsset; // 0x340(0x08)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0x348(0x10)

	void HandleIsFavoritedChanged(); // Function Spray.Spray_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsFavorited(bool& IsFavorited); // Function Spray.Spray_C.IsFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnSprayLoaded(struct USprayHandle* Spray Handle); // Function Spray.Spray_C.OnSprayLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsOwnedChanged(); // Function Spray.Spray_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquippedChanged(); // Function Spray.Spray_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsOwned(bool& IsOwned); // Function Spray.Spray_C.IsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsEquipped(bool& IsEquipped); // Function Spray.Spray_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetSpray(struct USprayDataAsset* Spray Data Asset); // Function Spray.Spray_C.SetSpray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromSpray(); // Function Spray.Spray_C.UnbindFromSpray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToSpray(); // Function Spray.Spray_C.BindToSpray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function Spray.Spray_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function Spray.Spray_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function Spray.Spray_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

