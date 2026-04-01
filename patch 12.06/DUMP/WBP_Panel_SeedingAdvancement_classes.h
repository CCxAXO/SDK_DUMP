// WidgetBlueprintGeneratedClass WBP_Panel_SeedingAdvancement.WBP_Panel_SeedingAdvancement_C
// Size: 0x414 (Inherited: 0x3e0)
struct UWBP_Panel_SeedingAdvancement_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Background_Border; // 0x3e8(0x08)
	struct UImage* BG_Color; // 0x3f0(0x08)
	struct UAresCommonText* CT_Tournament; // 0x3f8(0x08)
	struct UImage* Image_49; // 0x400(0x08)
	struct UUniformGridPanel* TeamGrid; // 0x408(0x08)
	int32_t NumTeamsPerRow; // 0x410(0x04)

	void AddWidgetToGrid(struct UAresCommonUserWidget* Widget, int32_t Index); // Function WBP_Panel_SeedingAdvancement.WBP_Panel_SeedingAdvancement_C.AddWidgetToGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetText(struct FString StageName); // Function WBP_Panel_SeedingAdvancement.WBP_Panel_SeedingAdvancement_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithViewModels(struct TArray<struct UEsportsStandingTeamViewModel*>& InStandingTeamViewModels, struct FString InStageName); // Function WBP_Panel_SeedingAdvancement.WBP_Panel_SeedingAdvancement_C.InitWithViewModels // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SeedingAdvancement.WBP_Panel_SeedingAdvancement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SeedingAdvancement(int32_t EntryPoint); // Function WBP_Panel_SeedingAdvancement.WBP_Panel_SeedingAdvancement_C.ExecuteUbergraph_WBP_Panel_SeedingAdvancement // (Final|UbergraphFunction) // @ game+0x1b42740
};

