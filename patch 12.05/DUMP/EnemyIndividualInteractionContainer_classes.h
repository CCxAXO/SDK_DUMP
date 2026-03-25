// WidgetBlueprintGeneratedClass EnemyIndividualInteractionContainer.EnemyIndividualInteractionContainer_C
// Size: 0x380 (Inherited: 0x318)
struct UEnemyIndividualInteractionContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* IndividualInteractionContainer; // 0x320(0x08)
	struct FMatchDetailsEnemyInteractionList InteractionList; // 0x328(0x38)
	struct FMulticastInlineDelegate OnInteractionClicked; // 0x360(0x10)
	struct FString TargetSubject; // 0x370(0x10)

	void PreConstruct(bool IsDesignTime); // Function EnemyIndividualInteractionContainer.EnemyIndividualInteractionContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EnemyIndividualInteractionContainer.EnemyIndividualInteractionContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_1(struct FMatchDetailsEnemyInteraction Interaction); // Function EnemyIndividualInteractionContainer.EnemyIndividualInteractionContainer_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EnemyIndividualInteractionContainer(int32_t EntryPoint); // Function EnemyIndividualInteractionContainer.EnemyIndividualInteractionContainer_C.ExecuteUbergraph_EnemyIndividualInteractionContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnInteractionClicked__DelegateSignature(struct FString Victim, int32_t RoundNum); // Function EnemyIndividualInteractionContainer.EnemyIndividualInteractionContainer_C.OnInteractionClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

