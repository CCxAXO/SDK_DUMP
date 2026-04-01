// WidgetBlueprintGeneratedClass XPBoostsIndicator_ToolTip.XPBoostsIndicator_ToolTip_C
// Size: 0x3f8 (Inherited: 0x318)
struct UXPBoostsIndicator_ToolTip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* BattlepassXPContainer; // 0x320(0x08)
	struct UTextBlock* BattlepassXPDescription; // 0x328(0x08)
	struct UImage* BGBlue; // 0x330(0x08)
	struct UButton* bgButton_2; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_1; // 0x348(0x08)
	struct UImage* Image_4; // 0x350(0x08)
	struct UImage* Image_5; // 0x358(0x08)
	struct UImage* Image_10; // 0x360(0x08)
	struct UHorizontalBox* SocialXPContainer; // 0x368(0x08)
	struct UTextBlock* SocialXPDescription; // 0x370(0x08)
	struct UHorizontalBox* SubscriptionXPContainer; // 0x378(0x08)
	struct UTextBlock* SubscriptionXPDescription; // 0x380(0x08)
	struct UTextBlock* Title; // 0x388(0x08)
	struct USizeBox* ViewDetailsContainer; // 0x390(0x08)
	struct TMap<struct USubscriptionDataAsset*, struct USubscriptionHandle*> SubscriptionHandles; // 0x398(0x50)
	bool SubscriptionHandlesLoaded; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct USubscriptionDataAsset* HighestBoostSubsctipion; // 0x3f0(0x08)

	void UpdateSubscriptionBoostEntryWithSubscriptions(); // Function XPBoostsIndicator_ToolTip.XPBoostsIndicator_ToolTip_C.UpdateSubscriptionBoostEntryWithSubscriptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSubscriptionBoostEntry(); // Function XPBoostsIndicator_ToolTip.XPBoostsIndicator_ToolTip_C.UpdateSubscriptionBoostEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBoostsList(bool ContractXPBoostIsActive, bool SocialXPBoostIsActive, int32_t PartySize, struct USubscriptionDataAsset* HighestBoostSubscription); // Function XPBoostsIndicator_ToolTip.XPBoostsIndicator_ToolTip_C.UpdateBoostsList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function XPBoostsIndicator_ToolTip.XPBoostsIndicator_ToolTip_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnAllSubscriptionsLoaded(struct FSubscriptionHandles& SubscriptionHandles); // Function XPBoostsIndicator_ToolTip.XPBoostsIndicator_ToolTip_C.OnAllSubscriptionsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_XPBoostsIndicator_ToolTip(int32_t EntryPoint); // Function XPBoostsIndicator_ToolTip.XPBoostsIndicator_ToolTip_C.ExecuteUbergraph_XPBoostsIndicator_ToolTip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

