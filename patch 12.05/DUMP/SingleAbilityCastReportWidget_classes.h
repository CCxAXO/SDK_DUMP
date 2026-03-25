// WidgetBlueprintGeneratedClass SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C
// Size: 0x3c8 (Inherited: 0x318)
struct USingleAbilityCastReportWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x320(0x08)
	struct FCharacterAbilityCastInfo AbilityCastInfo; // 0x328(0x60)
	struct UMaterialInstance* Icon Material ; // 0x388(0x08)
	struct UCharacterAbilityUIData* AbilityUIData; // 0x390(0x08)
	int32_t NumPreCachedAbilityEffectWidgets; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct TArray<struct USingleAbilityEffectWidget_C*> AllSingleAbilityEffectWidgets; // 0x3a0(0x10)
	struct UImage* AbilityIcon; // 0x3b0(0x08)
	struct UAresCommonText* CastTimeText; // 0x3b8(0x08)
	struct UVerticalBox* EffectsBox; // 0x3c0(0x08)

	void GetOrCreateSingleAbilityEffectWidget(struct FCharacterAbilityEffectInfo Effect, struct USingleAbilityEffectWidget_C*& Widget); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.GetOrCreateSingleAbilityEffectWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAbilityIcon(); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.SetAbilityIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayAllEffects(); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.DisplayAllEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCastTimeText(); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.SetCastTimeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UMaterialInstanceDynamic* GetIconMaterial(); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.GetIconMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CharacterUIDataLoaded(struct UCharacterHandle* CharacterHandle); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.CharacterUIDataLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateWidget(struct UCoordinatedHUDModel* HUDModel, struct FCharacterAbilityCastInfo AbilityCastInfo); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.PopulateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreCacheWidgets(); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.PreCacheWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SingleAbilityCastReportWidget(int32_t EntryPoint); // Function SingleAbilityCastReportWidget.SingleAbilityCastReportWidget_C.ExecuteUbergraph_SingleAbilityCastReportWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

