// WidgetBlueprintGeneratedClass SkillRatingScaleDivision.SkillRatingScaleDivision_C
// Size: 0x340 (Inherited: 0x318)
struct USkillRatingScaleDivision_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Header; // 0x320(0x08)
	struct UVerticalBox* Tiers; // 0x328(0x08)
	bool ShouldClearTiers; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct USkillRatingScaleDivisionTier_C* Tier; // 0x338(0x08)

	void AddTier(struct FCompetitiveTierData Tier); // Function SkillRatingScaleDivision.SkillRatingScaleDivision_C.AddTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDivision(struct FCompetitiveTierData Tier); // Function SkillRatingScaleDivision.SkillRatingScaleDivision_C.SetDivision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SkillRatingScaleDivision.SkillRatingScaleDivision_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SkillRatingScaleDivision(int32_t EntryPoint); // Function SkillRatingScaleDivision.SkillRatingScaleDivision_C.ExecuteUbergraph_SkillRatingScaleDivision // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

