// WidgetBlueprintGeneratedClass WBP_Panel_PartyStatus.WBP_Panel_PartyStatus_C
// Size: 0x478 (Inherited: 0x414)
struct UWBP_Panel_PartyStatus_C : UWBP_Panel_PartyObserver_Base_C {
	char pad_414[0x4]; // 0x414(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct USizeBox* SizeBox_PartyIcon; // 0x420(0x08)
	struct USpacer* Spacer; // 0x428(0x08)
	struct UAresCommonText* Text_Count; // 0x430(0x08)
	struct UWBP_SocialPartyAccessibilityIcon_C* WBP_SocialPartyAccessibilityIcon; // 0x438(0x08)
	struct FVector2D IconSize; // 0x440(0x10)
	struct FSlateColor IconColor; // 0x450(0x14)
	char pad_464[0x4]; // 0x464(0x04)
	double SpacerWidth; // 0x468(0x08)
	struct UCommonTextStyle* TextStyle; // 0x470(0x08)

	void UpdatePartyCountText(); // Function WBP_Panel_PartyStatus.WBP_Panel_PartyStatus_C.UpdatePartyCountText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartySizeChanged(int32_t PartySize); // Function WBP_Panel_PartyStatus.WBP_Panel_PartyStatus_C.HandlePartySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleMaxPartySizeChanged(int32_t MaxPartySize); // Function WBP_Panel_PartyStatus.WBP_Panel_PartyStatus_C.HandleMaxPartySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAccessibilityChanged(enum class EAresSocialPartyAccessibility PartyAccessibility); // Function WBP_Panel_PartyStatus.WBP_Panel_PartyStatus_C.HandleAccessibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsVisiblePartyChanged(bool bIsVisibleParty); // Function WBP_Panel_PartyStatus.WBP_Panel_PartyStatus_C.HandleIsVisiblePartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PartyStatus.WBP_Panel_PartyStatus_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PartyStatus(int32_t EntryPoint); // Function WBP_Panel_PartyStatus.WBP_Panel_PartyStatus_C.ExecuteUbergraph_WBP_Panel_PartyStatus // (Final|UbergraphFunction) // @ game+0x1af5410
};

