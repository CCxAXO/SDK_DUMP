// WidgetBlueprintGeneratedClass WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C
// Size: 0x450 (Inherited: 0x414)
struct UWBP_Panel_HovercardSection_PartyStatus_C : UWBP_Panel_PartyObserver_Base_C {
	char pad_414[0x4]; // 0x414(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UBorder* Border_Root; // 0x420(0x08)
	struct UAresCommonText* Text_PartyCount; // 0x428(0x08)
	struct UAresCommonText* Text_PartyInfo; // 0x430(0x08)
	struct UWBP_SocialPartyAccessibilityIcon_C* WBP_SocialPartyAccessibilityIcon; // 0x438(0x08)
	struct UWBP_Template_HovercardDetailRow_Social_C* WBP_Template_HovercardDetailRow_Social; // 0x440(0x08)
	struct UAresSocialPresenceColorSetDataAsset* PresenceColorSet; // 0x448(0x08)

	void UpdatePartyCountText(); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.UpdatePartyCountText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FText DeriveCurrentPartyInfoText(enum class EAresSocialPartyCompatibility PartyCompatibility, enum class EAresSocialPartyAccessibility PartyAccessibility); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.DeriveCurrentPartyInfoText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePartyInfoText(); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.UpdatePartyInfoText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleAccessibilityChanged(enum class EAresSocialPartyAccessibility PartyAccessibility); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.HandleAccessibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCompatibilityChanged(enum class EAresSocialPartyCompatibility PartyCompatibility); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.HandleCompatibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsVisiblePartyChanged(bool bIsVisibleParty); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.HandleIsVisiblePartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleMaxPartySizeChanged(int32_t MaxPartySize); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.HandleMaxPartySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartySizeChanged(int32_t PartySize); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.HandlePartySizeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_HovercardSection_PartyStatus(int32_t EntryPoint); // Function WBP_Panel_HovercardSection_PartyStatus.WBP_Panel_HovercardSection_PartyStatus_C.ExecuteUbergraph_WBP_Panel_HovercardSection_PartyStatus // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

