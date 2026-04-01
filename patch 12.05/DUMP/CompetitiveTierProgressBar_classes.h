// WidgetBlueprintGeneratedClass CompetitiveTierProgressBar.CompetitiveTierProgressBar_C
// Size: 0x370 (Inherited: 0x318)
struct UCompetitiveTierProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BarFrameImage; // 0x320(0x08)
	struct UTextBlock* CurrentProgressText; // 0x328(0x08)
	struct UMenuAnchor* MenuAnchor_Shield; // 0x330(0x08)
	struct UProgressBar* ProgressBar_Main; // 0x338(0x08)
	struct UProgressBar* ProgressBar_Refund; // 0x340(0x08)
	struct UTextBlock* RankRatingTextBlock; // 0x348(0x08)
	struct UWBP_ShieldIcon_C* ShieldIcon; // 0x350(0x08)
	bool ShowDerankShield; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FString CurrentSubject; // 0x360(0x10)

	void PlayDerankShieldAnimation(); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.PlayDerankShieldAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnableDerankShieldAnimation(); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.EnableDerankShieldAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSubject(struct FString Subject); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.SetSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetProgress(); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.ResetProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetProgress(int32_t Progress, bool IsProgressFromRefund); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.SetProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnMenuAnchorShieldGetMenuContent(); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.OnMenuAnchorShieldGetMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CompetitiveTierProgressBar_ShieldIcon_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.BndEvt__CompetitiveTierProgressBar_ShieldIcon_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CompetitiveTierProgressBar_ShieldIcon_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.BndEvt__CompetitiveTierProgressBar_ShieldIcon_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CompetitiveTierProgressBar(int32_t EntryPoint); // Function CompetitiveTierProgressBar.CompetitiveTierProgressBar_C.ExecuteUbergraph_CompetitiveTierProgressBar // (Final|UbergraphFunction) // @ game+0x1af5410
};

