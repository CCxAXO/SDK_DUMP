// WidgetBlueprintGeneratedClass KillFeed_AssisterPortraits.KillFeed_AssisterPortraits_C
// Size: 0x370 (Inherited: 0x348)
struct UKillFeed_AssisterPortraits_C : UWBP_KillFeedAssisterPortraits_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWBP_KillFeedAssister_C* WBP_KillFeedAssister1; // 0x350(0x08)
	struct UWBP_KillFeedAssister_C* WBP_KillFeedAssister2; // 0x358(0x08)
	struct UWBP_KillFeedAssister_C* WBP_KillFeedAssister3; // 0x360(0x08)
	struct UWBP_KillFeedAssister_C* WBP_KillFeedAssister4; // 0x368(0x08)

	void PopulateAssistIcons(struct TArray<struct FAresAssist>& AssistsList, struct FKillFeedColorPalette LeftParticipantColorPalette); // Function KillFeed_AssisterPortraits.KillFeed_AssisterPortraits_C.PopulateAssistIcons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function KillFeed_AssisterPortraits.KillFeed_AssisterPortraits_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_KillFeed_AssisterPortraits(int32_t EntryPoint); // Function KillFeed_AssisterPortraits.KillFeed_AssisterPortraits_C.ExecuteUbergraph_KillFeed_AssisterPortraits // (Final|UbergraphFunction) // @ game+0x1af5410
};

