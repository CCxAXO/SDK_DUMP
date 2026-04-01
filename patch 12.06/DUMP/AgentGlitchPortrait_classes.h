// WidgetBlueprintGeneratedClass AgentGlitchPortrait.AgentGlitchPortrait_C
// Size: 0x341 (Inherited: 0x318)
struct UAgentGlitchPortrait_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* OnSetAgent_fromLeft01; // 0x320(0x08)
	struct UWidgetAnimation* OnSetAgent_fromRight01; // 0x328(0x08)
	struct UImage* AgentPortrait; // 0x330(0x08)
	struct UCharacterHandle* Character; // 0x338(0x08)
	bool Inverted; // 0x340(0x01)

	void GetPortraitTransform(struct UCharacterUIData* UI Data, struct FWidgetTransform& PortraitTransform); // Function AgentGlitchPortrait.AgentGlitchPortrait_C.GetPortraitTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void PlayAnim(bool MoveLeft); // Function AgentGlitchPortrait.AgentGlitchPortrait_C.PlayAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPortraitLoaded(struct UCharacterHandle* CharacterHandle); // Function AgentGlitchPortrait.AgentGlitchPortrait_C.OnPortraitLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAgent(struct UCharacterHandle* Agent); // Function AgentGlitchPortrait.AgentGlitchPortrait_C.SetAgent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AgentGlitchPortrait.AgentGlitchPortrait_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AgentGlitchPortrait(int32_t EntryPoint); // Function AgentGlitchPortrait.AgentGlitchPortrait_C.ExecuteUbergraph_AgentGlitchPortrait // (Final|UbergraphFunction) // @ game+0x1b42740
};

