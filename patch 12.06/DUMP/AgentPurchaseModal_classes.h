// WidgetBlueprintGeneratedClass AgentPurchaseModal.AgentPurchaseModal_C
// Size: 0x338 (Inherited: 0x318)
struct UAgentPurchaseModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPurchaseModal_C* PurchaseModal; // 0x320(0x08)
	struct FMulticastInlineDelegate OnRewardsSummaryClosed; // 0x328(0x10)

	void DisplayAgentPurchaseByID(struct FGuid AgentID); // Function AgentPurchaseModal.AgentPurchaseModal_C.DisplayAgentPurchaseByID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Display Agent Purchase(struct UBodegaOfferModel* BodegaOffer); // Function AgentPurchaseModal.AgentPurchaseModal_C.Display Agent Purchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CancelPurchase(); // Function AgentPurchaseModal.AgentPurchaseModal_C.CancelPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Execute Purchase(struct UStoreOffer* StoreOffer); // Function AgentPurchaseModal.AgentPurchaseModal_C.Execute Purchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRewardsSummaryClosed_Event(); // Function AgentPurchaseModal.AgentPurchaseModal_C.OnRewardsSummaryClosed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function AgentPurchaseModal.AgentPurchaseModal_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AgentPurchaseModal(int32_t EntryPoint); // Function AgentPurchaseModal.AgentPurchaseModal_C.ExecuteUbergraph_AgentPurchaseModal // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnRewardsSummaryClosed__DelegateSignature(); // Function AgentPurchaseModal.AgentPurchaseModal_C.OnRewardsSummaryClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

