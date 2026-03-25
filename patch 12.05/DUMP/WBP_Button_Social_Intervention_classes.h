// WidgetBlueprintGeneratedClass WBP_Button_Social_Intervention.WBP_Button_Social_Intervention_C
// Size: 0x1e49 (Inherited: 0x1ae8)
struct UWBP_Button_Social_Intervention_C : UWBP_Button_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae8(0x08)
	struct UAresWidgetSwitcher* AresWidgetSwitcher_1; // 0x1af0(0x08)
	struct UImage* Image_Background; // 0x1af8(0x08)
	struct UImage* Image_IconArea; // 0x1b00(0x08)
	struct UImage* Image_Outline; // 0x1b08(0x08)
	struct UNamedSlot* NamedSlot_AtRisk; // 0x1b10(0x08)
	struct UNamedSlot* NamedSlot_Content; // 0x1b18(0x08)
	struct USizeBox* SizeBox_IconArea; // 0x1b20(0x08)
	double IconAreaWidth; // 0x1b28(0x08)
	struct FSlateBrush AtRiskIcon; // 0x1b30(0xd0)
	struct FSlateColor AtRiskIconAreaColor; // 0x1c00(0x14)
	char pad_1C14[0x4]; // 0x1c14(0x04)
	struct UMaterialInterface* AtRiskBackroundMaterial; // 0x1c18(0x08)
	struct UMaterialInterface* AtRiskOutlineMaterial; // 0x1c20(0x08)
	char pad_1C28[0x8]; // 0x1c28(0x08)
	struct FSlateBrush ActiveIcon; // 0x1c30(0xd0)
	struct FSlateColor ActiveIconAreaColor; // 0x1d00(0x14)
	char pad_1D14[0x4]; // 0x1d14(0x04)
	struct UMaterialInterface* ActiveBackroundMaterial; // 0x1d18(0x08)
	struct UMaterialInterface* ActiveOutlineMaterial; // 0x1d20(0x08)
	struct UMaterialInstanceDynamic* WarningBackgroundMaterialInstance; // 0x1d28(0x08)
	struct UMaterialInstanceDynamic* WarningOutlineMaterialInstance; // 0x1d30(0x08)
	struct UMaterialInstanceDynamic* ActiveBackgroundMaterialInstance; // 0x1d38(0x08)
	struct UMaterialInstanceDynamic* ActiveOutlineMaterialInstance; // 0x1d40(0x08)
	enum class EInterventionType InterventionType; // 0x1d48(0x01)
	char pad_1D49[0x7]; // 0x1d49(0x07)
	struct FSlateBrush NoInterventionIcon; // 0x1d50(0xd0)
	struct FSlateColor NoInterventionIconAreaColor; // 0x1e20(0x14)
	char pad_1E34[0x4]; // 0x1e34(0x04)
	struct UMaterialInterface* NoInterventionBackroundMaterial; // 0x1e38(0x08)
	struct UMaterialInterface* NoInterventionOutlineMaterial; // 0x1e40(0x08)
	bool ShowContent; // 0x1e48(0x01)

	void ApplyInterventionAppearance(); // Function WBP_Button_Social_Intervention.WBP_Button_Social_Intervention_C.ApplyInterventionAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Button_Social_Intervention.WBP_Button_Social_Intervention_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Social_Intervention.WBP_Button_Social_Intervention_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetIconAreaWidth(double InIconAreaWidth); // Function WBP_Button_Social_Intervention.WBP_Button_Social_Intervention_C.SetIconAreaWidth // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInterventionType(enum class EInterventionType InInterventionType); // Function WBP_Button_Social_Intervention.WBP_Button_Social_Intervention_C.SetInterventionType // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Social_Intervention(int32_t EntryPoint); // Function WBP_Button_Social_Intervention.WBP_Button_Social_Intervention_C.ExecuteUbergraph_WBP_Button_Social_Intervention // (Final|UbergraphFunction) // @ game+0x1af5410
};

