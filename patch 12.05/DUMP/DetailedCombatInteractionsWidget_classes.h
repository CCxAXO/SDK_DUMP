// WidgetBlueprintGeneratedClass DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C
// Size: 0x3f8 (Inherited: 0x318)
struct UDetailedCombatInteractionsWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FParticipantInteractions ParticipantInteractions; // 0x320(0x90)
	struct UHorizontalBox* Taken; // 0x3b0(0x08)
	struct UVerticalBox* TakenVerticalBox; // 0x3b8(0x08)
	struct UVerticalBox* DealtBox; // 0x3c0(0x08)
	struct UVerticalBox* DealtVerticalBox; // 0x3c8(0x08)
	struct UTextBlock* VsPlayerName; // 0x3d0(0x08)
	struct USizeBox* WidgetnCanvasSlot; // 0x3d8(0x08)
	int32_t PlayerNameMaxLength; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct UHorizontalBox* NoDealtData; // 0x3e8(0x08)
	struct UHorizontalBox* NoTakenData; // 0x3f0(0x08)

	void ShortenPlayerName(struct FString PlayerName, struct FString& ShortPlayerName); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.ShortenPlayerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	bool IsDamageFromAbility(struct UShooterDamageType* ShooterDamageType); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.IsDamageFromAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldDisplaySingleInteraction(struct UShooterDamageType* DamageType); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.ShouldDisplaySingleInteraction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateSingleInteractionWidget(struct FCombatInteraction Interaction Data, bool IsDamageTaken, struct UDetailedCombatInteraction_C*& Created); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.CreateSingleInteractionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Hide(); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.Hide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Show(struct FVector2D Position); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DetailedCombatInteractionsWidget(int32_t EntryPoint); // Function DetailedCombatInteractionsWidget.DetailedCombatInteractionsWidget_C.ExecuteUbergraph_DetailedCombatInteractionsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

