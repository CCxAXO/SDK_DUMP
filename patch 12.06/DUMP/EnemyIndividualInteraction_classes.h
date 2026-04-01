// WidgetBlueprintGeneratedClass EnemyIndividualInteraction.EnemyIndividualInteraction_C
// Size: 0x408 (Inherited: 0x318)
struct UEnemyIndividualInteraction_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBorder* Border_96; // 0x320(0x08)
	struct UHitLocationContainer_C* DamageDealt; // 0x328(0x08)
	struct UHitLocationContainer_C* DamageReceived; // 0x330(0x08)
	struct UTextBlock* DistanceText; // 0x338(0x08)
	struct UTextBlock* EnemyArmorText; // 0x340(0x08)
	struct UImage* EnemyWeaponIcon; // 0x348(0x08)
	struct UTextBlock* InteractionTypeText; // 0x350(0x08)
	struct UTextBlock* RoundNumber; // 0x358(0x08)
	struct UTextBlock* RoundOutcomeText; // 0x360(0x08)
	struct UTelemetryButton* TelemetryButton_2; // 0x368(0x08)
	struct UTextBlock* YourArmorText; // 0x370(0x08)
	struct UImage* YourWeaponIcon; // 0x378(0x08)
	struct FMatchDetailsEnemyInteraction EnemyInteraction; // 0x380(0x78)
	struct FMulticastInlineDelegate KillClicked; // 0x3f8(0x10)

	void Construct(); // Function EnemyIndividualInteraction.EnemyIndividualInteraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function EnemyIndividualInteraction.EnemyIndividualInteraction_C.BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function EnemyIndividualInteraction.EnemyIndividualInteraction_C.BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function EnemyIndividualInteraction.EnemyIndividualInteraction_C.BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EnemyIndividualInteraction(int32_t EntryPoint); // Function EnemyIndividualInteraction.EnemyIndividualInteraction_C.ExecuteUbergraph_EnemyIndividualInteraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void KillClicked__DelegateSignature(struct FMatchDetailsEnemyInteraction Interaction); // Function EnemyIndividualInteraction.EnemyIndividualInteraction_C.KillClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

