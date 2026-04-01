// WidgetBlueprintGeneratedClass DailyRewardsInfoModal.DailyRewardsInfoModal_C
// Size: 0x368 (Inherited: 0x318)
struct UDailyRewardsInfoModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UDailyRewardsBase_C* DailyRewardsBase; // 0x320(0x08)
	struct UTextBlock* FastModesText; // 0x328(0x08)
	struct URichTextBlock* FeatureDescriptionRichTextBlock; // 0x330(0x08)
	struct UTextBlock* MainModesText; // 0x338(0x08)
	struct UHorizontalBox* RotatingModes2Earnings; // 0x340(0x08)
	struct UTextBlock* RotatingModes2Text; // 0x348(0x08)
	struct UHorizontalBox* RotatingModesEarnings; // 0x350(0x08)
	struct UTextBlock* RotatingModesText; // 0x358(0x08)
	struct UImage* Row4BG; // 0x360(0x08)

	void SetVisibilityForRotatingModes2(); // Function DailyRewardsInfoModal.DailyRewardsInfoModal_C.SetVisibilityForRotatingModes2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetVisibilityForRotatingModes(); // Function DailyRewardsInfoModal.DailyRewardsInfoModal_C.SetVisibilityForRotatingModes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__DoughInfoModal_SharedBackButton_K2Node_ComponentBoundEvent_1_OnBackRequested__DelegateSignature(); // Function DailyRewardsInfoModal.DailyRewardsInfoModal_C.BndEvt__DoughInfoModal_SharedBackButton_K2Node_ComponentBoundEvent_1_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function DailyRewardsInfoModal.DailyRewardsInfoModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function DailyRewardsInfoModal.DailyRewardsInfoModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnShowDailyRewardsForRotatingModesChanged(); // Function DailyRewardsInfoModal.DailyRewardsInfoModal_C.OnShowDailyRewardsForRotatingModesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShowDailyRewardsForRotatingModes2Changed(); // Function DailyRewardsInfoModal.DailyRewardsInfoModal_C.OnShowDailyRewardsForRotatingModes2Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DailyRewardsInfoModal(int32_t EntryPoint); // Function DailyRewardsInfoModal.DailyRewardsInfoModal_C.ExecuteUbergraph_DailyRewardsInfoModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

