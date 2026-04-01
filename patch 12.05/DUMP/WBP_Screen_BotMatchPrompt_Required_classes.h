// WidgetBlueprintGeneratedClass WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C
// Size: 0x5a0 (Inherited: 0x544)
struct UWBP_Screen_BotMatchPrompt_Required_C : UWBP_Screen_CustomModal_Base_C {
	char pad_544[0x4]; // 0x544(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UWidgetAnimation* Intro; // 0x550(0x08)
	struct UWBP_Button_Primary_C* Button_FightBots; // 0x558(0x08)
	struct UWBP_AnimationOrnament_C* WBP_AnimationOrnament_Left; // 0x560(0x08)
	struct UWBP_AnimationOrnament_C* WBP_AnimationOrnament_Right; // 0x568(0x08)
	struct FString MapName; // 0x570(0x10)
	struct FString ModeName; // 0x580(0x10)
	struct UPartyViewController* ViewController; // 0x590(0x08)
	struct UCustomGameModel* CustomGameModel; // 0x598(0x08)

	void SequenceEvent__ENTRYPOINTWBP_Screen_BotMatchPrompt_Required(); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.SequenceEvent__ENTRYPOINTWBP_Screen_BotMatchPrompt_Required // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool BP_OnHandleBackAction(); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOrnamentAnimation(); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.PlayOrnamentAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchStartError(enum class EPartyErrorEnum PartyErrorEnum); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.OnMatchStartError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchStartSuccess(); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.OnMatchStartSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BotMatch_OptInMatchWidget_Button_FightBots_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.BndEvt__BotMatch_OptInMatchWidget_Button_FightBots_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void CloseModal(); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.CloseModal // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOnboardingStatusChanged(enum class EOnboardingStatus NewOnboardingStatus); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.OnOnboardingStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_BotMatchPrompt_Required(int32_t EntryPoint); // Function WBP_Screen_BotMatchPrompt_Required.WBP_Screen_BotMatchPrompt_Required_C.ExecuteUbergraph_WBP_Screen_BotMatchPrompt_Required // (Final|UbergraphFunction) // @ game+0x1af5410
};

