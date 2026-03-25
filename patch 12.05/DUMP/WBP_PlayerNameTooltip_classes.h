// WidgetBlueprintGeneratedClass WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C
// Size: 0x340 (Inherited: 0x318)
struct UWBP_PlayerNameTooltip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_Appear; // 0x320(0x08)
	struct UHorizontalBox* HorizontalBox_LoginLocation; // 0x328(0x08)
	struct UWBP_Panel_PlayerLoginLocation_C* WBP_Panel_PlayerLoginLocation; // 0x330(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x338(0x08)

	void Construct(); // Function WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PlayerNameTooltip_WBP_Panel_PlayerLoginLocation_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C.BndEvt__WBP_Panel_PlayerNameTooltip_WBP_Panel_PlayerLoginLocation_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C.SetObservedPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIdentitySource(enum class EAresIdentitySource InIdentitySource); // Function WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C.SetIdentitySource // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUseAnonymizedName(bool InUseAnonymizedName); // Function WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C.SetUseAnonymizedName // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOverrideStrings(struct FText InOverridePlayerPrefix, struct FText InOverridePrefixSeparator, struct FText InOverridePlayerName, struct FText InOverridePlayerTag); // Function WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C.SetOverrideStrings // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearOverrideStrings(); // Function WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C.ClearOverrideStrings // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_PlayerNameTooltip(int32_t EntryPoint); // Function WBP_PlayerNameTooltip.WBP_PlayerNameTooltip_C.ExecuteUbergraph_WBP_PlayerNameTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

