// WidgetBlueprintGeneratedClass MassRewardsSummaryPopup.MassRewardsSummaryPopup_C
// Size: 0x348 (Inherited: 0x318)
struct UMassRewardsSummaryPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x320(0x08)
	struct ULargeModal_C* LargeModal; // 0x328(0x08)
	struct URewardsSummary_C* RewardsSummary; // 0x330(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x338(0x10)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Season Loaded(struct USeasonHandle* SeasonHandle); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.On Season Loaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnClaimClicked(); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.OnClaimClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MassRewardsSummaryPopup(int32_t EntryPoint); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.ExecuteUbergraph_MassRewardsSummaryPopup // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClose__DelegateSignature(); // Function MassRewardsSummaryPopup.MassRewardsSummaryPopup_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

