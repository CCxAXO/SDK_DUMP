// WidgetBlueprintGeneratedClass WBP_WeaponStatsEntry.WBP_WeaponStatsEntry_C
// Size: 0x388 (Inherited: 0x359)
struct UWBP_WeaponStatsEntry_C : UWBP_WeaponStatsEntry_Base_C {
	char pad_359[0x7]; // 0x359(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UTextBlock* Header; // 0x368(0x08)
	struct UProgressBar* ProgressBar; // 0x370(0x08)
	struct UTextBlock* Unit; // 0x378(0x08)
	struct UTextBlock* ValueWidget; // 0x380(0x08)

	void SetProgressBar(double Percentage); // Function WBP_WeaponStatsEntry.WBP_WeaponStatsEntry_C.SetProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetValueText(double Value, double ExtraValue); // Function WBP_WeaponStatsEntry.WBP_WeaponStatsEntry_C.SetValueText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_WeaponStatsEntry.WBP_WeaponStatsEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_WeaponStatsEntry(int32_t EntryPoint); // Function WBP_WeaponStatsEntry.WBP_WeaponStatsEntry_C.ExecuteUbergraph_WBP_WeaponStatsEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

