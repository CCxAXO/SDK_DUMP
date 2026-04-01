// WidgetBlueprintGeneratedClass Subscription_RewardItem_Base.Subscription_RewardItem_Base_C
// Size: 0x370 (Inherited: 0x318)
struct USubscription_RewardItem_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* Title_HorizontalBox_Base; // 0x320(0x08)
	struct URichTextBlock* Title_RichTextBlock_Base; // 0x328(0x08)
	struct UHorizontalBox* Details_HorizontalBox_Base; // 0x330(0x08)
	struct URichTextBlock* Details_RichTextBlock_Base; // 0x338(0x08)
	struct FText TitleText; // 0x340(0x18)
	struct FText DetailsText; // 0x358(0x18)

	void UpdateItem(struct FText Title, struct FText Details); // Function Subscription_RewardItem_Base.Subscription_RewardItem_Base_C.UpdateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Subscription_RewardItem_Base.Subscription_RewardItem_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Subscription_RewardItem_Base.Subscription_RewardItem_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function Subscription_RewardItem_Base.Subscription_RewardItem_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Subscription_RewardItem_Base(int32_t EntryPoint); // Function Subscription_RewardItem_Base.Subscription_RewardItem_Base_C.ExecuteUbergraph_Subscription_RewardItem_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

