// WidgetBlueprintGeneratedClass WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C
// Size: 0x4a8 (Inherited: 0x338)
struct UWBP_Screen_EOGCeremony_C : USimpleLifecycleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* GenericOutro_Animation; // 0x340(0x08)
	struct UWidgetAnimation* Draw_Animation; // 0x348(0x08)
	struct UWidgetAnimation* Lose_Animation; // 0x350(0x08)
	struct UWidgetAnimation* Win_Animation; // 0x358(0x08)
	struct UWidgetAnimation* Intro_Animation; // 0x360(0x08)
	struct UImage* Background_CheapOverlay; // 0x368(0x08)
	struct UImage* Background_IntroOverlay; // 0x370(0x08)
	struct UOverlay* DefeatEffectsWrapper; // 0x378(0x08)
	struct UOverlay* DrawEffectsWrapper; // 0x380(0x08)
	struct URetainerBox* EffectRetainerBox; // 0x388(0x08)
	struct UCommonTextBlock* EnemyScore; // 0x390(0x08)
	struct UTextBlock* Outcome_text; // 0x398(0x08)
	struct UTextBlock* Outcome_Text_Custom; // 0x3a0(0x08)
	struct UTextBlock* Outcome_text_VictoryFX; // 0x3a8(0x08)
	struct UImage* Outro; // 0x3b0(0x08)
	struct UCommonTextBlock* Preamble_EnemyScore; // 0x3b8(0x08)
	struct UCommonTextBlock* Preamble_TeamScore; // 0x3c0(0x08)
	struct UWidgetSwitcher* ResultsTextModeSwitcher; // 0x3c8(0x08)
	struct UTextBlock* SurrenderText; // 0x3d0(0x08)
	struct UCommonTextBlock* TeamScore; // 0x3d8(0x08)
	struct UOverlay* VictoryScreenEffects; // 0x3e0(0x08)
	struct UOverlay* VictoryScreenFGEffects; // 0x3e8(0x08)
	struct UWBP_EOGCeremony_GameModeElement_C* WBP_EOGCeremony_GameModeElement; // 0x3f0(0x08)
	struct UWBP_EOGCeremony_GenericGrid_C* WBP_EOGCeremony_GenericGrid; // 0x3f8(0x08)
	enum class Enum_MatchResult MatchResult; // 0x400(0x01)
	enum class EMatchCompletionState Completion State; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct ABaseTwoTeamGameState_C* As Base Two Team Game State; // 0x408(0x08)
	struct FSlateColor WinColor; // 0x410(0x14)
	struct FSlateColor LoseColor; // 0x424(0x14)
	struct FSlateColor DrawColor; // 0x438(0x14)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UMaterialInterface* VictoryDistortionMaterial; // 0x450(0x08)
	struct UMaterialInterface* DefeatDistortionMaterial; // 0x458(0x08)
	double Anim_Distortion; // 0x460(0x08)
	double Anim_ChromaticOffset; // 0x468(0x08)
	struct UMaterialInterface* DrawDistortionMaterial; // 0x470(0x08)
	double Anim_Scale; // 0x478(0x08)
	double Anim_MoveX; // 0x480(0x08)
	double Anim_MoveY; // 0x488(0x08)
	double Anim_ChromaticColorSwitch; // 0x490(0x08)
	bool OutroAnimationQueued; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	double OutroAnimationRealTimeStart; // 0x4a0(0x08)

	void SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_6(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_5(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_4(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_3(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_2(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_1(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.SequenceEvent__ENTRYPOINTWBP_Screen_EOGCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update and Show Custom Message(struct FText VictoryText, struct FText DefeatText, struct FText DrawText); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.Update and Show Custom Message // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIntroColor(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.UpdateIntroColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRetainerEffect(double DistortionMultiplier, float ChromaticOffset, double ChromaticColorSwitch, double MoveX, double MoveY, double Scale); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.SetRetainerEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayOutroAnimations(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.PlayOutroAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Team Score States(bool BinaryTeamScores); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.Update Team Score States // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetColorsForResult(enum class Enum_MatchResult Result, struct FLinearColor& ForegroundColor, struct FLinearColor& BackgroundColor); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.GetColorsForResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayCeremony(struct FLinearColor ForegroundColor, struct FLinearColor BackgroundColor); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.PlayCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DefeatIntroSequencer(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.DefeatIntroSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DrawIntroSequencer(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.DrawIntroSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWin_GameModeIntro(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.OnWin_GameModeIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLose_GameModeIntro(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.OnLose_GameModeIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDraw_GameModeIntro(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.OnDraw_GameModeIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OutroAnimSFX(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.OutroAnimSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void VictoryIntroSequencer(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.VictoryIntroSequencer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Show(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.Show // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Hide(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.Hide // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PlayOutroAnim(); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.PlayOutroAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_EOGCeremony(int32_t EntryPoint); // Function WBP_Screen_EOGCeremony.WBP_Screen_EOGCeremony_C.ExecuteUbergraph_WBP_Screen_EOGCeremony // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

