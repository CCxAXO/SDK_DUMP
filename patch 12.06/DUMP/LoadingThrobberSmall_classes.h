// WidgetBlueprintGeneratedClass LoadingThrobberSmall.LoadingThrobberSmall_C
// Size: 0x388 (Inherited: 0x320)
struct ULoadingThrobberSmall_C : UDesignableUserWidget {
	struct UImage* Anchor; // 0x320(0x08)
	struct UImage* BackMagic; // 0x328(0x08)
	struct UImage* BluredDot; // 0x330(0x08)
	struct UImage* Border; // 0x338(0x08)
	struct UImage* FrontMagic; // 0x340(0x08)
	struct UImage* LeftLine; // 0x348(0x08)
	struct UImage* RightLine; // 0x350(0x08)
	struct FLinearColor HoverColor; // 0x358(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x368(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x378(0x10)

	void OnHovered__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function LoadingThrobberSmall.LoadingThrobberSmall_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClicked__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function LoadingThrobberSmall.LoadingThrobberSmall_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

