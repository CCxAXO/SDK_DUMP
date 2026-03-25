// WidgetBlueprintGeneratedClass WBP_Button_NavBar_Main.WBP_Button_NavBar_Main_C
// Size: 0x1b18 (Inherited: 0x1ae0)
struct UWBP_Button_NavBar_Main_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* OnSelected_L; // 0x1ae8(0x08)
	struct UWidgetAnimation* OnUnselected; // 0x1af0(0x08)
	struct UWidgetAnimation* OnSelected_R; // 0x1af8(0x08)
	struct UScaleBox* TextContainer; // 0x1b00(0x08)
	bool bHideLabelWhenNotSelected; // 0x1b08(0x01)
	char pad_1B09[0x7]; // 0x1b09(0x07)
	double AnimationSpeedInSeconds; // 0x1b10(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Button_NavBar_Main.WBP_Button_NavBar_Main_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginSelectedAnimation(bool bSelected, bool bSkipToTheEnd); // Function WBP_Button_NavBar_Main.WBP_Button_NavBar_Main_C.BeginSelectedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnSelected(); // Function WBP_Button_NavBar_Main.WBP_Button_NavBar_Main_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnDeselected(); // Function WBP_Button_NavBar_Main.WBP_Button_NavBar_Main_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Button_NavBar_Main.WBP_Button_NavBar_Main_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_NavBar_Main.WBP_Button_NavBar_Main_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_NavBar_Main(int32_t EntryPoint); // Function WBP_Button_NavBar_Main.WBP_Button_NavBar_Main_C.ExecuteUbergraph_WBP_Button_NavBar_Main // (Final|UbergraphFunction) // @ game+0x1af5410
};

