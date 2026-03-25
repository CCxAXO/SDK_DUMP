// WidgetBlueprintGeneratedClass RewardPreviewWidget.RewardPreviewWidget_C
// Size: 0x332 (Inherited: 0x318)
struct URewardPreviewWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* ItemNameText; // 0x320(0x08)
	struct URewardThumbnail_C* RewardThumbnail_129; // 0x328(0x08)
	bool ShowName; // 0x330(0x01)
	bool ShowImage; // 0x331(0x01)

	void HandleRewardLoaded(struct UBaseHandle* Handle, int32_t Amount); // Function RewardPreviewWidget.RewardPreviewWidget_C.HandleRewardLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyVisibility(); // Function RewardPreviewWidget.RewardPreviewWidget_C.ApplyVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreviewReward(struct URewardModel* Reward); // Function RewardPreviewWidget.RewardPreviewWidget_C.PreviewReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function RewardPreviewWidget.RewardPreviewWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function RewardPreviewWidget.RewardPreviewWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RewardPreviewWidget(int32_t EntryPoint); // Function RewardPreviewWidget.RewardPreviewWidget_C.ExecuteUbergraph_RewardPreviewWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

