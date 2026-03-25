// WidgetBlueprintGeneratedClass WBP_WeaponStatsEntry_Base.WBP_WeaponStatsEntry_Base_C
// Size: 0x359 (Inherited: 0x318)
struct UWBP_WeaponStatsEntry_Base_C : UUserWidget {
	struct FText HeaderText; // 0x318(0x18)
	double Value; // 0x330(0x08)
	struct FText UnitText; // 0x338(0x18)
	double FillAmount; // 0x350(0x08)
	bool InvertBar; // 0x358(0x01)

	void SetProgressBar(double Percentage); // Function WBP_WeaponStatsEntry_Base.WBP_WeaponStatsEntry_Base_C.SetProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetValueText(double Value, double ExtraValue); // Function WBP_WeaponStatsEntry_Base.WBP_WeaponStatsEntry_Base_C.SetValueText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CalculateBarValue(double Value, double Min, double Max, double& BarValue); // Function WBP_WeaponStatsEntry_Base.WBP_WeaponStatsEntry_Base_C.CalculateBarValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetValue(double NewValue, double NewExtraValue, double MinValue, double MaxValue); // Function WBP_WeaponStatsEntry_Base.WBP_WeaponStatsEntry_Base_C.SetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

