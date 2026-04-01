// WidgetBlueprintGeneratedClass WBP_Panel_EsportsSpotlightTeams.WBP_Panel_EsportsSpotlightTeams_C
// Size: 0x440 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsSpotlightTeams_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Border; // 0x3e8(0x08)
	struct UImage* Image_328; // 0x3f0(0x08)
	struct UImage* Image_407; // 0x3f8(0x08)
	struct UImage* RedL1; // 0x400(0x08)
	struct UImage* RedL1_2; // 0x408(0x08)
	struct UImage* RedL2; // 0x410(0x08)
	struct UImage* RedL2_2; // 0x418(0x08)
	struct UAresScrollBox* ScrollBox_Teams; // 0x420(0x08)
	struct UVerticalBox* ScrollBox_TeamsContainer; // 0x428(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x430(0x08)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x438(0x08)

	void On Teams Updated(struct TArray<struct UTeamModel*>& New Teams); // Function WBP_Panel_EsportsSpotlightTeams.WBP_Panel_EsportsSpotlightTeams_C.On Teams Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsSpotlightTeams.WBP_Panel_EsportsSpotlightTeams_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModel(struct UEsportsEventViewModel* EsportsEventViewModel); // Function WBP_Panel_EsportsSpotlightTeams.WBP_Panel_EsportsSpotlightTeams_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EsportsSpotlightTeams.WBP_Panel_EsportsSpotlightTeams_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsSpotlightTeams.WBP_Panel_EsportsSpotlightTeams_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsSpotlightTeams(int32_t EntryPoint); // Function WBP_Panel_EsportsSpotlightTeams.WBP_Panel_EsportsSpotlightTeams_C.ExecuteUbergraph_WBP_Panel_EsportsSpotlightTeams // (Final|UbergraphFunction) // @ game+0x1b42740
};

