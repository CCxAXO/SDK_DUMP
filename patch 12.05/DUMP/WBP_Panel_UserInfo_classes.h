// WidgetBlueprintGeneratedClass WBP_Panel_UserInfo.WBP_Panel_UserInfo_C
// Size: 0x450 (Inherited: 0x3e0)
struct UWBP_Panel_UserInfo_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* BG_Color; // 0x3e8(0x08)
	struct UAresCommonText* CT_CurrentStats; // 0x3f0(0x08)
	struct UAresCommonText* CT_PlayerPercentRank; // 0x3f8(0x08)
	struct UAresCommonText* CT_PlayerRank; // 0x400(0x08)
	struct UAresCommonText* CT_PlayerScore; // 0x408(0x08)
	struct UImage* Image; // 0x410(0x08)
	struct UImage* Image_2; // 0x418(0x08)
	struct UImage* Image_52; // 0x420(0x08)
	struct UImage* Image_174; // 0x428(0x08)
	struct UImage* Image_208; // 0x430(0x08)
	struct UWBP_Button_Esports_Secondary_C* WBP_Button_Esports_Secondary; // 0x438(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x440(0x08)
	struct UPickemEventInfoViewModel* PickemEventVM; // 0x448(0x08)

	void InitOnPickemScreenReady(); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.InitOnPickemScreenReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsPickemInfoLoadedChanged(bool IsPickemInfoLoaded); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.OnIsPickemInfoLoadedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Rank Changed(int32_t NewValue); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.On Rank Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScoreChanged(int32_t NewValue); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.OnScoreChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPercentRankChanged(int32_t NewValue); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.OnPercentRankChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_UserInfo_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.BndEvt__WBP_Panel_UserInfo_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_UserInfo_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.BndEvt__WBP_Panel_UserInfo_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_UserInfo(int32_t EntryPoint); // Function WBP_Panel_UserInfo.WBP_Panel_UserInfo_C.ExecuteUbergraph_WBP_Panel_UserInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

