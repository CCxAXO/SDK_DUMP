// WidgetBlueprintGeneratedClass DetailedCombatInteraction.DetailedCombatInteraction_C
// Size: 0x3d9 (Inherited: 0x318)
struct UDetailedCombatInteraction_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FCombatInteraction CombatInteraction; // 0x320(0x68)
	bool IsDamageTaken; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UHorizontalBox* armorDestroyedContainer; // 0x390(0x08)
	struct UAresCommonText* armorDestroyedText; // 0x398(0x08)
	struct UVerticalBox* BodyInteractions; // 0x3a0(0x08)
	struct UImage* DamageTypeImage; // 0x3a8(0x08)
	struct UVerticalBox* HeadInteractions; // 0x3b0(0x08)
	struct UVerticalBox* LegInteractions; // 0x3b8(0x08)
	struct UVerticalBox* OtherInteractions; // 0x3c0(0x08)
	struct UTextBlock* TimestampText; // 0x3c8(0x08)
	struct UVerticalBox* InteractionsContainers; // 0x3d0(0x08)
	bool bNeedsDivider; // 0x3d8(0x01)

	void CreateRegionalDamageInteractionWidget(struct FRegionalDamageInteraction InteractionData, bool IsDamageTaken, struct UUserWidget*& Created); // Function DetailedCombatInteraction.DetailedCombatInteraction_C.CreateRegionalDamageInteractionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function DetailedCombatInteraction.DetailedCombatInteraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function DetailedCombatInteraction.DetailedCombatInteraction_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DetailedCombatInteraction(int32_t EntryPoint); // Function DetailedCombatInteraction.DetailedCombatInteraction_C.ExecuteUbergraph_DetailedCombatInteraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

