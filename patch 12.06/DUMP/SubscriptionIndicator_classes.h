// WidgetBlueprintGeneratedClass SubscriptionIndicator.SubscriptionIndicator_C
// Size: 0x3a0 (Inherited: 0x318)
struct USubscriptionIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UButton* SubscriptionsButton; // 0x328(0x08)
	struct UImage* SubscriptionsIcon; // 0x330(0x08)
	struct UMenuAnchor* SubscriptionsMenuAnchor; // 0x338(0x08)
	struct UPlatformPlayer* Player; // 0x340(0x08)
	struct USubscriptionDropdownPanel_C* SubscriptionsDropdownWidget; // 0x348(0x08)
	struct FSubscriptionHandles SubscriptionHandles; // 0x350(0x50)

	void UpdateSubscriptionIcon(struct FSubscriptionHandles SubscriptionHandles); // Function SubscriptionIndicator.SubscriptionIndicator_C.UpdateSubscriptionIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateOrUpdateDropdownWidget(struct USubscriptionDropdownPanel_C*& Widget); // Function SubscriptionIndicator.SubscriptionIndicator_C.CreateOrUpdateDropdownWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* OnGetSubscriptionsMenuContent(); // Function SubscriptionIndicator.SubscriptionIndicator_C.OnGetSubscriptionsMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetPlayer(); // Function SubscriptionIndicator.SubscriptionIndicator_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIndicatorVisibility(); // Function SubscriptionIndicator.SubscriptionIndicator_C.UpdateIndicatorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLoyaltyStatusChanged(bool NewValue); // Function SubscriptionIndicator.SubscriptionIndicator_C.OnLoyaltyStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SubscriptionIndicator.SubscriptionIndicator_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SubscriptionIndicator.SubscriptionIndicator_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnSubscriptionsStatusChanged(); // Function SubscriptionIndicator.SubscriptionIndicator_C.OnSubscriptionsStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function SubscriptionIndicator.SubscriptionIndicator_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SubscriptionIndicator.SubscriptionIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSubscriptionHandlesLoaded(struct FSubscriptionHandles& SubscriptionHandles); // Function SubscriptionIndicator.SubscriptionIndicator_C.OnSubscriptionHandlesLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SubscriptionIndicator(int32_t EntryPoint); // Function SubscriptionIndicator.SubscriptionIndicator_C.ExecuteUbergraph_SubscriptionIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

