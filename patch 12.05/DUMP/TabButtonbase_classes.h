// WidgetBlueprintGeneratedClass TabButtonbase.TabButtonBase_C
// Size: 0x340 (Inherited: 0x320)
struct UTabButtonBase_C : UDesignableUserWidget {
	struct FMulticastInlineDelegate OnClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate OnActivated; // 0x330(0x10)

	void SetTabButtonIsEnabled(bool IsEnabled); // Function TabButtonbase.TabButtonBase_C.SetTabButtonIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsActive(bool IsActive); // Function TabButtonbase.TabButtonBase_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetVisuals(struct FText Text, struct UTexture* Image); // Function TabButtonbase.TabButtonBase_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivated__DelegateSignature(struct UUserWidget* TabContent); // Function TabButtonbase.TabButtonBase_C.OnActivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked__DelegateSignature(struct UTabButtonBase_C* TabButton); // Function TabButtonbase.TabButtonBase_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

