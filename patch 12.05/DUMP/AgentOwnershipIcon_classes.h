// WidgetBlueprintGeneratedClass AgentOwnershipIcon.AgentOwnershipIcon_C
// Size: 0x348 (Inherited: 0x318)
struct UAgentOwnershipIcon_C : UUserWidget {
	struct UOverlay* Locked; // 0x318(0x08)
	struct UOverlay* NotLocked; // 0x320(0x08)
	struct UWidgetSwitcher* OwnershipSwitcher; // 0x328(0x08)
	struct UOverlay* Subscription; // 0x330(0x08)
	struct UBodegaOfferModel* Bodega Offer; // 0x338(0x08)
	struct UBaseInventoryModel* InventoryModel; // 0x340(0x08)

	void Update UI(); // Function AgentOwnershipIcon.AgentOwnershipIcon_C.Update UI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBodegaOffer(struct UBodegaOfferModel* BodegaOffer); // Function AgentOwnershipIcon.AgentOwnershipIcon_C.SetBodegaOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsUnlocked(bool Owned, bool IsSubscription); // Function AgentOwnershipIcon.AgentOwnershipIcon_C.SetIsUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

