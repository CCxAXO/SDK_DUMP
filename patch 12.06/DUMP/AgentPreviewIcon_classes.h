// WidgetBlueprintGeneratedClass AgentPreviewIcon.AgentPreviewIcon_C
// Size: 0x338 (Inherited: 0x318)
struct UAgentPreviewIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAgentBackgroundText_C* AgentBackgroundText; // 0x320(0x08)
	struct URewardThumbnail_C* RewardThumbnail; // 0x328(0x08)
	struct UCharacterHandle* CharacterHandle; // 0x330(0x08)

	void Set Agent(struct UCharacterHandle* Character Handle); // Function AgentPreviewIcon.AgentPreviewIcon_C.Set Agent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Thumbnail(struct UCharacterHandle* Handle); // Function AgentPreviewIcon.AgentPreviewIcon_C.Set Thumbnail // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function AgentPreviewIcon.AgentPreviewIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AgentPreviewIcon.AgentPreviewIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AgentPreviewIcon(int32_t EntryPoint); // Function AgentPreviewIcon.AgentPreviewIcon_C.ExecuteUbergraph_AgentPreviewIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

