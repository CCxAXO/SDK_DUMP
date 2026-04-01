// WidgetBlueprintGeneratedClass QueueRestrictionIndicator.QueueRestrictionIndicator_C
// Size: 0x350 (Inherited: 0x318)
struct UQueueRestrictionIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* CosmeticsDisabledTextBlock; // 0x320(0x08)
	struct UTextBlock* RemainingGamesTextBlock; // 0x328(0x08)
	struct UTextBlock* RemainingWinsTextBlock; // 0x330(0x08)
	struct UTextBlock* RRPenaltyTextBlock; // 0x338(0x08)
	int32_t RemainingGames; // 0x340(0x04)
	int32_t RemainingWins; // 0x344(0x04)
	double RRPenalty; // 0x348(0x08)

	void SetCosmeticsDisabled(); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.SetCosmeticsDisabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisibility(); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.UpdateVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRRPenalty(double RRPenalty); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.SetRRPenalty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRemainingWins(int32_t RemainingWins); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.SetRemainingWins // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRemainingGames(int32_t RemainingGames); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.SetRemainingGames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddPlayer(struct UPartyPlayerModel* Player); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.AddPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMemberAdded(struct UPartyPlayerModel* Player); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.OnMemberAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSkillDisparityRRPenaltyChanged(float NewValue); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.OnSkillDisparityRRPenaltyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnContentEquippedChanged(); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.OnContentEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_QueueRestrictionIndicator(int32_t EntryPoint); // Function QueueRestrictionIndicator.QueueRestrictionIndicator_C.ExecuteUbergraph_QueueRestrictionIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

