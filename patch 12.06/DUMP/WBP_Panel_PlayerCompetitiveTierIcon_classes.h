// WidgetBlueprintGeneratedClass WBP_Panel_PlayerCompetitiveTierIcon.WBP_Panel_PlayerCompetitiveTierIcon_C
// Size: 0x42a (Inherited: 0x400)
struct UWBP_Panel_PlayerCompetitiveTierIcon_C : UWBP_Panel_PlayerCompetitiveTier_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* Img_RankIcon; // 0x408(0x08)
	struct USizeBox* Size_Icon; // 0x410(0x08)
	struct UTexture2D* PreviewIconSmall; // 0x418(0x08)
	struct UTexture2D* PreviewIconLarge; // 0x420(0x08)
	enum class ECompetitiveTierIconSize IconType; // 0x428(0x01)
	bool bCollapseIfInvalidData; // 0x429(0x01)

	void GetIconTexture(struct FCompetitiveTierData CompetitiveTierData, bool bTierDataIsValid, struct UTexture2D*& IconTexture, bool& bTextureIsValid); // Function WBP_Panel_PlayerCompetitiveTierIcon.WBP_Panel_PlayerCompetitiveTierIcon_C.GetIconTexture // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerCompetitiveTierIcon.WBP_Panel_PlayerCompetitiveTierIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCompetitiveTierChanged(struct FCompetitiveTierData CurrentTierData, bool bTierDataIsValid); // Function WBP_Panel_PlayerCompetitiveTierIcon.WBP_Panel_PlayerCompetitiveTierIcon_C.OnCompetitiveTierChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerCompetitiveTierIcon(int32_t EntryPoint); // Function WBP_Panel_PlayerCompetitiveTierIcon.WBP_Panel_PlayerCompetitiveTierIcon_C.ExecuteUbergraph_WBP_Panel_PlayerCompetitiveTierIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

