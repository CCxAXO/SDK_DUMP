// BlueprintGeneratedClass DebugAudioHUD.DebugAudioHUD_C
// Size: 0x120 (Inherited: 0x70)
struct UDebugAudioHUD_C : UAresHudElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x70(0x08)
	struct FAresHudFontParams FontParams; // 0x78(0x78)
	double TimeSinceStatReset; // 0xf0(0x08)
	double StatTimeWindowSeconds; // 0xf8(0x08)
	int32_t TotalFrames; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FText StatsText; // 0x108(0x18)

	void OnDraw(float DeltaTime); // Function DebugAudioHUD.DebugAudioHUD_C.OnDraw // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DebugAudioHUD(int32_t EntryPoint); // Function DebugAudioHUD.DebugAudioHUD_C.ExecuteUbergraph_DebugAudioHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

