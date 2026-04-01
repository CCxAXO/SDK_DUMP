// WidgetBlueprintGeneratedClass SkillRatingScale.SkillRatingScale_C
// Size: 0x480 (Inherited: 0x318)
struct USkillRatingScale_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* DerankBox; // 0x320(0x08)
	struct UHorizontalBox* Divisions; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image_2; // 0x338(0x08)
	struct USizeBox* RadiantBox; // 0x340(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x348(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x350(0x08)
	struct USizeBox* UnrankedBox; // 0x358(0x08)
	struct UDataTable* TiersDataTable; // 0x360(0x08)
	struct FCompetitiveTierData CurrRow; // 0x368(0x88)
	struct FCompetitiveTierData PrevRow; // 0x3f0(0x88)
	struct USkillRatingScaleDivision_C* Division; // 0x478(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function SkillRatingScale.SkillRatingScale_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function SkillRatingScale.SkillRatingScale_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function SkillRatingScale.SkillRatingScale_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function SkillRatingScale.SkillRatingScale_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SkillRatingScale(int32_t EntryPoint); // Function SkillRatingScale.SkillRatingScale_C.ExecuteUbergraph_SkillRatingScale // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

