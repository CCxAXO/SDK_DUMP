// WidgetBlueprintGeneratedClass WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C
// Size: 0x5b8 (Inherited: 0x544)
struct UWBP_Screen_BotMatchPrompt_C : UWBP_Screen_CustomModal_Base_C {
	char pad_544[0x4]; // 0x544(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UWidgetAnimation* Intro; // 0x550(0x08)
	struct UWBP_Button_Primary_C* Button_FightBots; // 0x558(0x08)
	struct UWBP_Button_Primary_C* Button_NoThanks; // 0x560(0x08)
	struct UWBP_AnimationOrnament_C* WBP_AnimationOrnament_Left; // 0x568(0x08)
	struct UWBP_AnimationOrnament_C* WBP_AnimationOrnament_Right; // 0x570(0x08)
	struct FString MapName; // 0x578(0x10)
	struct FString ModeName; // 0x588(0x10)
	struct UPartyViewController* ViewController; // 0x598(0x08)
	struct UCustomGameModel* CustomGameModel; // 0x5a0(0x08)
	struct FString OptOutOrigin; // 0x5a8(0x10)

	void SequenceEvent__ENTRYPOINTWBP_Screen_BotMatchPrompt(); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.SequenceEvent__ENTRYPOINTWBP_Screen_BotMatchPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOrnamentAnimation(); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.PlayOrnamentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchStartError(enum class EPartyErrorEnum PartyErrorEnum); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.OnMatchStartError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchStartSuccess(); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.OnMatchStartSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BotMatch_OptInMatchWidget_Button_FightBots_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.BndEvt__BotMatch_OptInMatchWidget_Button_FightBots_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BotMatch_OptInMatchWidget_Button_NoThanks_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.BndEvt__BotMatch_OptInMatchWidget_Button_NoThanks_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnOnboardingStatusChanged(enum class EOnboardingStatus NewOnboardingStatus); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.OnOnboardingStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CloseModal(); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.CloseModal // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_BotMatchPrompt(int32_t EntryPoint); // Function WBP_Screen_BotMatchPrompt.WBP_Screen_BotMatchPrompt_C.ExecuteUbergraph_WBP_Screen_BotMatchPrompt // (Final|UbergraphFunction) // @ game+0x1af5410
};

