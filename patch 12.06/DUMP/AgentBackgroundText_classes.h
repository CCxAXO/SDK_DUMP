// WidgetBlueprintGeneratedClass AgentBackgroundText.AgentBackgroundText_C
// Size: 0x346 (Inherited: 0x318)
struct UAgentBackgroundText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAgentViewModel* AgentViewModel; // 0x320(0x08)
	struct UImage* BGRing; // 0x328(0x08)
	struct UImage* BGText; // 0x330(0x08)
	struct UCharacterHandle* Character; // 0x338(0x08)
	int32_t BGGradientColorIndex; // 0x340(0x04)
	enum class EAgentBackgroundTextColorMode BackgroundTextColorMode; // 0x344(0x01)
	bool bShouldShowBGRing; // 0x345(0x01)

	void SetAgentFromNavParam(struct FName NavParamName); // Function AgentBackgroundText.AgentBackgroundText_C.SetAgentFromNavParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShouldShowBGRing(bool Condition); // Function AgentBackgroundText.AgentBackgroundText_C.SetShouldShowBGRing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleHasValidDataChanged(bool HasValidData); // Function AgentBackgroundText.AgentBackgroundText_C.HandleHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleBackgroundAgentCircleTransformChanged(struct FWidgetTransform BackgroundAgentCircleTransform); // Function AgentBackgroundText.AgentBackgroundText_C.HandleBackgroundAgentCircleTransformChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleBackgroundAgentTextTransformChanged(struct FWidgetTransform BackgroundAgentTextTransform); // Function AgentBackgroundText.AgentBackgroundText_C.HandleBackgroundAgentTextTransformChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFromBackgroundAgentTextColorChanged(struct FLinearColor BackgroundAgentTextColor); // Function AgentBackgroundText.AgentBackgroundText_C.HandleFromBackgroundAgentTextColorChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleBackgroundGradientColorsChanged(struct TArray<struct FLinearColor>& BackgroundGradientColors); // Function AgentBackgroundText.AgentBackgroundText_C.HandleBackgroundGradientColorsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCharacterBackgroundChanged(struct UTexture2D* CharacterBackground); // Function AgentBackgroundText.AgentBackgroundText_C.HandleCharacterBackgroundChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAgent(struct UCharacterHandle* Agent); // Function AgentBackgroundText.AgentBackgroundText_C.SetAgent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AgentBackgroundText.AgentBackgroundText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function AgentBackgroundText.AgentBackgroundText_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AgentBackgroundText(int32_t EntryPoint); // Function AgentBackgroundText.AgentBackgroundText_C.ExecuteUbergraph_AgentBackgroundText // (Final|UbergraphFunction) // @ game+0x1b42740
};

