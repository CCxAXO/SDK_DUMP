// WidgetBlueprintGeneratedClass WBP_NavBar_Main.WBP_NavBar_Main_C
// Size: 0x5b3 (Inherited: 0x578)
struct UWBP_NavBar_Main_C : URGICommonNavBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UWidgetAnimation* NPE_Ani_Highlight; // 0x580(0x08)
	struct UImage* BG; // 0x588(0x08)
	struct UImage* Frame_Objective_Highlight_L; // 0x590(0x08)
	struct UImage* Frame_Objective_Highlight_R; // 0x598(0x08)
	struct UOverlay* LeftButtonInput; // 0x5a0(0x08)
	struct UOverlay* RightButtonInput; // 0x5a8(0x08)
	bool bHideDisplayWhenNotSelected; // 0x5b0(0x01)
	bool DisplayBG; // 0x5b1(0x01)
	bool Use Tight Input Spacing; // 0x5b2(0x01)

	void Set Input Spacing(bool Use Tight Spacing); // Function WBP_NavBar_Main.WBP_NavBar_Main_C.Set Input Spacing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBGVisibility(bool ShowBG); // Function WBP_NavBar_Main.WBP_NavBar_Main_C.SetBGVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WBP_NavBar_Main.WBP_NavBar_Main_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UAresCommonButton* CreateNavButton(int32_t NavButtonIndex, struct FRGICommonNavBarDetails Details); // Function WBP_NavBar_Main.WBP_NavBar_Main_C.CreateNavButton // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_NavBar_Main.WBP_NavBar_Main_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_NavBar_Main(int32_t EntryPoint); // Function WBP_NavBar_Main.WBP_NavBar_Main_C.ExecuteUbergraph_WBP_NavBar_Main // (Final|UbergraphFunction) // @ game+0x1af5410
};

