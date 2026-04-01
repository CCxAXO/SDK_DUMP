// WidgetBlueprintGeneratedClass WBP_Panel_EsportsSpotlightTeam.WBP_Panel_EsportsSpotlightTeam_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsSpotlightTeam_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_TeamName; // 0x3e8(0x08)
	struct UAresCommonText* CT_TeamOrigin; // 0x3f0(0x08)
	struct UImage* Image_BG_Left; // 0x3f8(0x08)
	struct UImage* Image_BG_Right; // 0x400(0x08)
	struct UImage* Image_TeamLogo; // 0x408(0x08)
	struct UEsportsTeamViewModel* EsportsTeamViewModel; // 0x410(0x08)
	struct FText RegionName; // 0x418(0x18)

	void On Team Region Updated(enum class EVCTRegion VCTRegion); // Function WBP_Panel_EsportsSpotlightTeam.WBP_Panel_EsportsSpotlightTeam_C.On Team Region Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Team Logo Updated(struct UTexture2D* Team Logo); // Function WBP_Panel_EsportsSpotlightTeam.WBP_Panel_EsportsSpotlightTeam_C.On Team Logo Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Team Name Updated(struct FText& Team Name); // Function WBP_Panel_EsportsSpotlightTeam.WBP_Panel_EsportsSpotlightTeam_C.On Team Name Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsSpotlightTeam.WBP_Panel_EsportsSpotlightTeam_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetModelData(struct UTeamModel* Team Model); // Function WBP_Panel_EsportsSpotlightTeam.WBP_Panel_EsportsSpotlightTeam_C.SetModelData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsSpotlightTeam.WBP_Panel_EsportsSpotlightTeam_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsSpotlightTeam(int32_t EntryPoint); // Function WBP_Panel_EsportsSpotlightTeam.WBP_Panel_EsportsSpotlightTeam_C.ExecuteUbergraph_WBP_Panel_EsportsSpotlightTeam // (Final|UbergraphFunction) // @ game+0x1b42740
};

