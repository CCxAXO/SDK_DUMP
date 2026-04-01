// WidgetBlueprintGeneratedClass WBP_SocialPartyAccessibilityIcon.WBP_SocialPartyAccessibilityIcon_C
// Size: 0x358 (Inherited: 0x318)
struct UWBP_SocialPartyAccessibilityIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_Icon; // 0x320(0x08)
	enum class EAresSocialPartyAccessibility PreviewIcon; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FSlateColor IconColor; // 0x32c(0x14)
	struct UTexture2D* OpenPartyIcon; // 0x340(0x08)
	struct UTexture2D* ClosedPartyIcon; // 0x348(0x08)
	struct UTexture2D* ErrorPartyIcon; // 0x350(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_SocialPartyAccessibilityIcon.WBP_SocialPartyAccessibilityIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetPartyIcon(enum class EAresSocialPartyAccessibility Accessibility); // Function WBP_SocialPartyAccessibilityIcon.WBP_SocialPartyAccessibilityIcon_C.SetPartyIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIconColor(struct FSlateColor InIconColor); // Function WBP_SocialPartyAccessibilityIcon.WBP_SocialPartyAccessibilityIcon_C.SetIconColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_SocialPartyAccessibilityIcon(int32_t EntryPoint); // Function WBP_SocialPartyAccessibilityIcon.WBP_SocialPartyAccessibilityIcon_C.ExecuteUbergraph_WBP_SocialPartyAccessibilityIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

