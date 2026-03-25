// WidgetBlueprintGeneratedClass WBP_Panel_ExcludedPartyMemberFooter.WBP_Panel_ExcludedPartyMemberFooter_C
// Size: 0x441 (Inherited: 0x414)
struct UWBP_Panel_ExcludedPartyMemberFooter_C : UWBP_Panel_PartyObserver_Base_C {
	char pad_414[0x4]; // 0x414(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UImage* Image_PartyColor; // 0x420(0x08)
	struct UAresCommonText* Text_OtherPlayers; // 0x428(0x08)
	struct UAresCommonText* Text_PlayerCount; // 0x430(0x08)
	struct UAresSocialPresenceColorSetDataAsset* ColorSet; // 0x438(0x08)
	bool bExcludeFilteredPlayers; // 0x440(0x01)

	void HandleExcludedPartyMemberCountChanged(int32_t ExcludedPartyMemberCount); // Function WBP_Panel_ExcludedPartyMemberFooter.WBP_Panel_ExcludedPartyMemberFooter_C.HandleExcludedPartyMemberCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCompatibilityChanged(enum class EAresSocialPartyCompatibility PartyCompatibility); // Function WBP_Panel_ExcludedPartyMemberFooter.WBP_Panel_ExcludedPartyMemberFooter_C.HandleCompatibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_ExcludedPartyMemberFooter.WBP_Panel_ExcludedPartyMemberFooter_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ExcludedPartyMemberFooter(int32_t EntryPoint); // Function WBP_Panel_ExcludedPartyMemberFooter.WBP_Panel_ExcludedPartyMemberFooter_C.ExecuteUbergraph_WBP_Panel_ExcludedPartyMemberFooter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

