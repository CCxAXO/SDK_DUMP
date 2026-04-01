// WidgetBlueprintGeneratedClass RoundOutcomeIcon.RoundOutcomeIcon_C
// Size: 0x610 (Inherited: 0x320)
struct URoundOutcomeIcon_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* DefuseLoss; // 0x328(0x08)
	struct UImage* DefuseWin; // 0x330(0x08)
	struct UImage* EliminationLoss; // 0x338(0x08)
	struct UImage* EliminationWin; // 0x340(0x08)
	struct UImage* ExplosionLoss; // 0x348(0x08)
	struct UImage* ExplosionWin; // 0x350(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x358(0x08)
	struct UImage* SurrenderLoss; // 0x360(0x08)
	struct UImage* SurrenderWin; // 0x368(0x08)
	struct UImage* TimeLoss; // 0x370(0x08)
	struct UImage* TimeWin; // 0x378(0x08)
	int32_t RoundIndex; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct FProcessedMatchDetails ProcessedMatchDetailsDTO; // 0x388(0x278)
	struct FString TargetSubject; // 0x600(0x10)

	void Initialize(int32_t RoundIndex, struct FProcessedMatchDetails ProcessMatchDetailsDTO, struct FString TargetSubject); // Function RoundOutcomeIcon.RoundOutcomeIcon_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RoundOutcomeIcon(int32_t EntryPoint); // Function RoundOutcomeIcon.RoundOutcomeIcon_C.ExecuteUbergraph_RoundOutcomeIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

