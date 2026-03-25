// WidgetBlueprintGeneratedClass XPBoostsIndicator.XPBoostsIndicator_C
// Size: 0x369 (Inherited: 0x318)
struct UXPBoostsIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UGeneralXPIndicatorIcon_C* GeneralXPIndicator; // 0x320(0x08)
	struct UImage* PartyBackground_Image1; // 0x328(0x08)
	struct UImage* PartyBackground_Image2; // 0x330(0x08)
	struct UOverlay* XPIconGroup; // 0x338(0x08)
	struct UPartyModel* PartyModel; // 0x340(0x08)
	struct UXPBoostsIndicator_ToolTip_C* XPBoostsToolTip; // 0x348(0x08)
	bool ContractXPBoostIsActive; // 0x350(0x01)
	bool SocialXPBoostIsActive; // 0x351(0x01)
	bool AnySubscriptionBoostIsActive; // 0x352(0x01)
	bool IsCustomGameMode; // 0x353(0x01)
	int32_t PartySize; // 0x354(0x04)
	struct UPlatformPlayer* Player; // 0x358(0x08)
	struct USubscriptionDataAsset* HighestBoostSubscription; // 0x360(0x08)
	bool bHideBackground; // 0x368(0x01)

	void OnPremiumBattlepassOwnershipStateChanged(bool IsOwned); // Function XPBoostsIndicator.XPBoostsIndicator_C.OnPremiumBattlepassOwnershipStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibilityAndVisuals(); // Function XPBoostsIndicator.XPBoostsIndicator_C.UpdateVisibilityAndVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateOrUpdateTooltip(); // Function XPBoostsIndicator.XPBoostsIndicator_C.CreateOrUpdateTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActiveSubscriptionsChanged(); // Function XPBoostsIndicator.XPBoostsIndicator_C.OnActiveSubscriptionsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartySizeChanged(int32_t NewValue); // Function XPBoostsIndicator.XPBoostsIndicator_C.OnPartySizeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyStateChanged(enum class EPartyViewState PartyState); // Function XPBoostsIndicator.XPBoostsIndicator_C.OnPartyStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSocialXPStateChanged(enum class ESocialXPState SocialXPState); // Function XPBoostsIndicator.XPBoostsIndicator_C.OnSocialXPStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPartyModel* Party); // Function XPBoostsIndicator.XPBoostsIndicator_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function XPBoostsIndicator.XPBoostsIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_XPBoostsIndicator(int32_t EntryPoint); // Function XPBoostsIndicator.XPBoostsIndicator_C.ExecuteUbergraph_XPBoostsIndicator // (Final|UbergraphFunction) // @ game+0x1af5410
};

