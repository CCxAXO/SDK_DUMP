// WidgetBlueprintGeneratedClass WBP_Panel_PartyColoredImage.WBP_Panel_PartyColoredImage_C
// Size: 0x430 (Inherited: 0x414)
struct UWBP_Panel_PartyColoredImage_C : UWBP_Panel_PartyObserver_Base_C {
	char pad_414[0x4]; // 0x414(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UImage* Image_PartyColor; // 0x420(0x08)
	struct UAresSocialPresenceColorSetDataAsset* ColorSet; // 0x428(0x08)

	void HandleCompatibilityChanged(enum class EAresSocialPartyCompatibility PartyCompatibility); // Function WBP_Panel_PartyColoredImage.WBP_Panel_PartyColoredImage_C.HandleCompatibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsVisiblePartyChanged(bool bIsVisibleParty); // Function WBP_Panel_PartyColoredImage.WBP_Panel_PartyColoredImage_C.HandleIsVisiblePartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PartyColoredImage(int32_t EntryPoint); // Function WBP_Panel_PartyColoredImage.WBP_Panel_PartyColoredImage_C.ExecuteUbergraph_WBP_Panel_PartyColoredImage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

