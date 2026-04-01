// WidgetBlueprintGeneratedClass Totem.Totem_C
// Size: 0x358 (Inherited: 0x318)
struct UTotem_C : UUserWidget {
	struct UTotemImage_C* TotemImage; // 0x318(0x08)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x320(0x10)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x330(0x10)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0x340(0x10)
	struct UTotemDataAsset* TotemDataAsset; // 0x350(0x08)

	void On Totem Loaded(struct UTotemHandle* TotemHandle); // Function Totem.Totem_C.On Totem Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsFavoritedChanged(); // Function Totem.Totem_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsFavorited(bool& IsFavorited); // Function Totem.Totem_C.IsFavorited // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleIsOwnedChanged(); // Function Totem.Totem_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsEquippedChanged(); // Function Totem.Totem_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsOwned(bool& IsOwned); // Function Totem.Totem_C.IsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsEquipped(bool& IsEquipped); // Function Totem.Totem_C.IsEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Set Totem(struct UTotemDataAsset* Totem Data Asset); // Function Totem.Totem_C.Set Totem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Unbind From Totem(); // Function Totem.Totem_C.Unbind From Totem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind To Totem(); // Function Totem.Totem_C.Bind To Totem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function Totem.Totem_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function Totem.Totem_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function Totem.Totem_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

