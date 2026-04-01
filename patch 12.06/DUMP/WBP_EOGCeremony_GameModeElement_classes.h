// WidgetBlueprintGeneratedClass WBP_EOGCeremony_GameModeElement.WBP_EOGCeremony_GameModeElement_C
// Size: 0x398 (Inherited: 0x330)
struct UWBP_EOGCeremony_GameModeElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* Intro; // 0x338(0x08)
	struct UCommonTextBlock* GameModeName; // 0x340(0x08)
	struct UImage* LeftWinglet; // 0x348(0x08)
	struct UImage* RightWinglet; // 0x350(0x08)
	enum class Enum_MatchResult MatchResults; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	struct FSlateColor WinColor; // 0x35c(0x14)
	struct FSlateColor LoseColor; // 0x370(0x14)
	struct FSlateColor DrawColor; // 0x384(0x14)

	void PlayIntroAnimation(); // Function WBP_EOGCeremony_GameModeElement.WBP_EOGCeremony_GameModeElement_C.PlayIntroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Visuals(struct FSlateColor Win, struct FSlateColor Lose, struct FSlateColor Draw); // Function WBP_EOGCeremony_GameModeElement.WBP_EOGCeremony_GameModeElement_C.Update Visuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_EOGCeremony_GameModeElement.WBP_EOGCeremony_GameModeElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_EOGCeremony_GameModeElement(int32_t EntryPoint); // Function WBP_EOGCeremony_GameModeElement.WBP_EOGCeremony_GameModeElement_C.ExecuteUbergraph_WBP_EOGCeremony_GameModeElement // (Final|UbergraphFunction) // @ game+0x1b42740
};

