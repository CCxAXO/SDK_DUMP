// WidgetBlueprintGeneratedClass CombatReportWidget_Desktop.CombatReportWidget_Desktop_C
// Size: 0x520 (Inherited: 0x4e0)
struct UCombatReportWidget_Desktop_C : UWBP_CombatReportWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Left; // 0x4e8(0x08)
	struct UImage* Right; // 0x4f0(0x08)
	struct UAresCommonText* TooltipLabelTextBox; // 0x4f8(0x08)
	struct UImage* TopLine; // 0x500(0x08)
	struct FText TooltipLabelText; // 0x508(0x18)

	struct UWBP_CombatReportInteractionWidget_Base_C* CreateInteractionWidget(struct FParticipantInteractions In Interaction Data); // Function CombatReportWidget_Desktop.CombatReportWidget_Desktop_C.CreateInteractionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateKeybinding(); // Function CombatReportWidget_Desktop.CombatReportWidget_Desktop_C.UpdateKeybinding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSettingsChanged(struct FName& Setting); // Function CombatReportWidget_Desktop.CombatReportWidget_Desktop_C.OnSettingsChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function CombatReportWidget_Desktop.CombatReportWidget_Desktop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CombatReportWidget_Desktop.CombatReportWidget_Desktop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CombatReportWidget_Desktop.CombatReportWidget_Desktop_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CombatReportWidget_Desktop(int32_t EntryPoint); // Function CombatReportWidget_Desktop.CombatReportWidget_Desktop_C.ExecuteUbergraph_CombatReportWidget_Desktop // (Final|UbergraphFunction) // @ game+0x1af5410
};

