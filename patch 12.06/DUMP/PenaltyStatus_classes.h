// WidgetBlueprintGeneratedClass PenaltyStatus.PenaltyStatus_C
// Size: 0x388 (Inherited: 0x318)
struct UPenaltyStatus_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* Penalty; // 0x320(0x08)
	struct USizeBox* PenaltyBox; // 0x328(0x08)
	struct UMenuAnchor* TooltipMenuAnchor; // 0x330(0x08)
	struct FString PlayerSubject; // 0x338(0x10)
	struct FString MatchID; // 0x348(0x10)
	struct TArray<struct FString> TranslatedInfractions; // 0x358(0x10)
	bool IsEndOfGame; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FText PenaltyToolTipText; // 0x370(0x18)

	struct UWidget* On Get Menu Content(); // Function PenaltyStatus.PenaltyStatus_C.On Get Menu Content // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateTooltipText(struct TArray<enum class EInfractionType>& Array); // Function PenaltyStatus.PenaltyStatus_C.UpdateTooltipText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTranslatedInfractionType(enum class EInfractionType Selection, struct FText& InfractionText); // Function PenaltyStatus.PenaltyStatus_C.GetTranslatedInfractionType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIcon(); // Function PenaltyStatus.PenaltyStatus_C.UpdateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FString MatchID, struct FString PlayerSubject, bool IsEndOfGame); // Function PenaltyStatus.PenaltyStatus_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPenalizedPlayersChanged(); // Function PenaltyStatus.PenaltyStatus_C.OnPenalizedPlayersChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PenaltyStatus.PenaltyStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PenaltyStatus_Penalty_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function PenaltyStatus.PenaltyStatus_C.BndEvt__PenaltyStatus_Penalty_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PenaltyStatus_Penalty_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function PenaltyStatus.PenaltyStatus_C.BndEvt__PenaltyStatus_Penalty_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PenaltyStatus(int32_t EntryPoint); // Function PenaltyStatus.PenaltyStatus_C.ExecuteUbergraph_PenaltyStatus // (Final|UbergraphFunction) // @ game+0x1b42740
};

