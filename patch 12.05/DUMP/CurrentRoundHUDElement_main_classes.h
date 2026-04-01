// WidgetBlueprintGeneratedClass CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C
// Size: 0x4e0 (Inherited: 0x3b8)
struct UCurrentRoundHUDElement_main_C : UCurrentRoundHUDElement_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* Ambient; // 0x3c0(0x08)
	struct UWidgetAnimation* Intro_Animation; // 0x3c8(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x3d0(0x08)
	struct UTextBlock* Attacking; // 0x3d8(0x08)
	struct UImage* BG; // 0x3e0(0x08)
	struct UBackgroundBlur* Blur; // 0x3e8(0x08)
	struct UBackgroundBlur* Blur_2; // 0x3f0(0x08)
	struct UImage* BottomBar; // 0x3f8(0x08)
	struct UImage* BottomBG; // 0x400(0x08)
	struct UImage* BottomBG_2; // 0x408(0x08)
	struct UImage* BottomGlitch; // 0x410(0x08)
	struct UImage* BottomLeft; // 0x418(0x08)
	struct UImage* BottomRight; // 0x420(0x08)
	struct UImage* BottomRightDash1; // 0x428(0x08)
	struct UImage* BottomRightDash2; // 0x430(0x08)
	struct UOverlay* BuyPhaseAnnouncement; // 0x438(0x08)
	struct UTextBlock* Defending; // 0x440(0x08)
	struct UImage* Image_1; // 0x448(0x08)
	struct UHorizontalBox* InputPromptHolder; // 0x450(0x08)
	struct UTextBlock* InputPromptHolderPreText; // 0x458(0x08)
	struct UInvalidationBox* InvalidationBox_BuyPhaseAnnouncement; // 0x460(0x08)
	struct UImage* Left; // 0x468(0x08)
	struct UTextBlock* MainText; // 0x470(0x08)
	struct UImage* Right; // 0x478(0x08)
	struct UOverlay* RoundSideText; // 0x480(0x08)
	struct UTextBlock* RoundText; // 0x488(0x08)
	struct UCanvasPanel* Secondary; // 0x490(0x08)
	struct USizeBox* SizeBox_4; // 0x498(0x08)
	struct UImage* SolidBG_Overlay; // 0x4a0(0x08)
	struct UImage* TopBarLeft; // 0x4a8(0x08)
	struct UImage* TopBarRight; // 0x4b0(0x08)
	struct UImage* TopGlitch; // 0x4b8(0x08)
	struct UImage* TopLeft; // 0x4c0(0x08)
	struct UImage* TopLeftDash1; // 0x4c8(0x08)
	struct UImage* TopLeftDash2; // 0x4d0(0x08)
	struct UImage* TopRight; // 0x4d8(0x08)

	void HandleBuyPhaseAnnouncementHidden(); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.HandleBuyPhaseAnnouncementHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleBuyPhaseAnnouncementVisible(); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.HandleBuyPhaseAnnouncementVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetActionNameIconPrompt(struct UActionNameIconPrompt_C*& ActionNameIconPrompt); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetActionNameIconPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetIntroAnimation(struct UWidgetAnimation*& IntroAnimation_ref); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetIntroAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetSizeboxWidget(struct USizeBox*& sizebox_ref); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetSizeboxWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetSecondaryCanvasWidget(struct UCanvasPanel*& SecondaryCanvas_ref); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetSecondaryCanvasWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRoundTextWidget(struct UTextBlock*& RoundText_ref); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetRoundTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMainTextWidget(struct UTextBlock*& MainText_ref); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetMainTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetBuyPhaseAnnouncementWidget(struct UOverlay*& BuyPhaseAnnouncement_ref); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetBuyPhaseAnnouncementWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDefendingTextWidget(struct UTextBlock*& Defending_ref); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetDefendingTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetAttackingTextWidget(struct UTextBlock*& AttackingText); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.GetAttackingTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CurrentRoundHUDElement_main(int32_t EntryPoint); // Function CurrentRoundHUDElement_main.CurrentRoundHUDElement_main_C.ExecuteUbergraph_CurrentRoundHUDElement_main // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

