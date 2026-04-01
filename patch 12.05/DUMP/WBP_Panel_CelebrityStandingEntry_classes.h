// WidgetBlueprintGeneratedClass WBP_Panel_CelebrityStandingEntry.WBP_Panel_CelebrityStandingEntry_C
// Size: 0x40c (Inherited: 0x3e0)
struct UWBP_Panel_CelebrityStandingEntry_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* T_CelebName; // 0x3e8(0x08)
	struct UAresCommonText* T_CelebPoints; // 0x3f0(0x08)
	struct UAresCommonText* T_PositionNum; // 0x3f8(0x08)
	struct UWBP_PickemsListEntryUnderline_C* WBP_PickemsListEntryUnderline; // 0x400(0x08)
	int32_t Rank; // 0x408(0x04)

	void Set Rank(int32_t Rank); // Function WBP_Panel_CelebrityStandingEntry.WBP_Panel_CelebrityStandingEntry_C.Set Rank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Points(int32_t Points); // Function WBP_Panel_CelebrityStandingEntry.WBP_Panel_CelebrityStandingEntry_C.Set Points // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Celeb Name(struct FText InName); // Function WBP_Panel_CelebrityStandingEntry.WBP_Panel_CelebrityStandingEntry_C.Set Celeb Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_CelebrityStandingEntry.WBP_Panel_CelebrityStandingEntry_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_CelebrityStandingEntry(int32_t EntryPoint); // Function WBP_Panel_CelebrityStandingEntry.WBP_Panel_CelebrityStandingEntry_C.ExecuteUbergraph_WBP_Panel_CelebrityStandingEntry // (Final|UbergraphFunction) // @ game+0x1af5410
};

