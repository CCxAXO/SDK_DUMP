// WidgetBlueprintGeneratedClass WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C
// Size: 0x463 (Inherited: 0x3e0)
struct UWBP_Panel_AgentBackground_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAgentViewModel* AgentViewModel; // 0x3e8(0x08)
	struct UAgentBackgroundText_C* AgentBackgroundText; // 0x3f0(0x08)
	struct UImage* AgentGradient; // 0x3f8(0x08)
	struct UImage* AgentGradientFG; // 0x400(0x08)
	struct UImage* AgentPortrait; // 0x408(0x08)
	struct UImage* BottomGradient; // 0x410(0x08)
	struct FVector2D PortraitTranslationOffset; // 0x418(0x10)
	struct FVector2D PortraitScaleMultiplier; // 0x428(0x10)
	enum class EAgentBackgroundTextColorMode BackgroundTextColorMode; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FVector2D BackgroundTextTranslationOffset; // 0x440(0x10)
	struct FVector2D BackgroundTextScaleMultiplier; // 0x450(0x10)
	enum class ECharacterPortraitScreenEnum PortraitScreen; // 0x460(0x01)
	bool ShowPortrait; // 0x461(0x01)
	bool bShouldShowBGRing; // 0x462(0x01)

	void HandleHasValidDataChanged(bool HasValidData); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.HandleHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleFullPortraitInfoChanged(struct FFullPortraitInfo FullPortraitInfo); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.HandleFullPortraitInfoChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleFullPortraitChanged(struct UTexture2D* FullPortrait); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.HandleFullPortraitChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetCombinedBackgroundTextTransform(struct FWidgetTransform Transform, bool FlipHorizontally, struct FWidgetTransform& OutTransform); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.GetCombinedBackgroundTextTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetCombinedPortraitTransform(struct FWidgetTransform Transform, bool FlipHorizontally, struct FWidgetTransform& OutTransform); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.GetCombinedPortraitTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetBackgroundText(struct UCharacterHandle* Agent); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.SetBackgroundText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAgent(struct UCharacterHandle* Character, enum class ECharacterPortraitScreenEnum Portrait Screen); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.SetAgent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_AgentBackground(int32_t EntryPoint); // Function WBP_Panel_AgentBackground.WBP_Panel_AgentBackground_C.ExecuteUbergraph_WBP_Panel_AgentBackground // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

