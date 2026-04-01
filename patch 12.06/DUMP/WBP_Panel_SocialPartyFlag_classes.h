// WidgetBlueprintGeneratedClass WBP_Panel_SocialPartyFlag.WBP_Panel_SocialPartyFlag_C
// Size: 0x480 (Inherited: 0x414)
struct UWBP_Panel_SocialPartyFlag_C : UWBP_Panel_PartyObserver_Base_C {
	char pad_414[0x4]; // 0x414(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UImage* Image_PartyFlag; // 0x420(0x08)
	struct USizeBox* SizeBox_Icon; // 0x428(0x08)
	struct USizeBox* SizeBox_IconArea; // 0x430(0x08)
	struct USizeBox* SizeBox_Root; // 0x438(0x08)
	struct UWBP_SocialPartyAccessibilityIcon_C* WBP_SocialPartyAccessibilityIcon; // 0x440(0x08)
	struct UAresSocialPresenceColorSetDataAsset* ColorSet; // 0x448(0x08)
	struct FVector2D FlagSize; // 0x450(0x10)
	struct FVector2D IconSize; // 0x460(0x10)
	struct FMargin IconAreaPadding; // 0x470(0x10)

	void HandleCompatibilityChanged(enum class EAresSocialPartyCompatibility PartyCompatibility); // Function WBP_Panel_SocialPartyFlag.WBP_Panel_SocialPartyFlag_C.HandleCompatibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAccessibilityChanged(enum class EAresSocialPartyAccessibility PartyAccessibility); // Function WBP_Panel_SocialPartyFlag.WBP_Panel_SocialPartyFlag_C.HandleAccessibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsVisiblePartyChanged(bool bIsVisibleParty); // Function WBP_Panel_SocialPartyFlag.WBP_Panel_SocialPartyFlag_C.HandleIsVisiblePartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SocialPartyFlag.WBP_Panel_SocialPartyFlag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SocialPartyFlag(int32_t EntryPoint); // Function WBP_Panel_SocialPartyFlag.WBP_Panel_SocialPartyFlag_C.ExecuteUbergraph_WBP_Panel_SocialPartyFlag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

