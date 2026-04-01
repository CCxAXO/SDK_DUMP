// WidgetBlueprintGeneratedClass WBP_Panel_ShellBackground.WBP_Panel_ShellBackground_C
// Size: 0x411 (Inherited: 0x3e0)
struct UWBP_Panel_ShellBackground_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* FadeIn; // 0x3e8(0x08)
	struct UImage* Art; // 0x3f0(0x08)
	struct UMediaPlayer* VideoPlayer; // 0x3f8(0x08)
	bool AllowVideo; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UTexture2D* Texture2D; // 0x408(0x08)
	bool PlayAsyncVideo; // 0x410(0x01)

	void SetImageVisibility(enum class EWidgetVisibilityOption VisibilityOption); // Function WBP_Panel_ShellBackground.WBP_Panel_ShellBackground_C.SetImageVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetImage(struct FSlateBrush Image); // Function WBP_Panel_ShellBackground.WBP_Panel_ShellBackground_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Stop Video(); // Function WBP_Panel_ShellBackground.WBP_Panel_ShellBackground_C.Stop Video // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLoaded_8BA94DAA4DD90F45F2857DAB6AFBEE80(struct UObject* Loaded); // Function WBP_Panel_ShellBackground.WBP_Panel_ShellBackground_C.OnLoaded_8BA94DAA4DD90F45F2857DAB6AFBEE80 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_ShellBackground.WBP_Panel_ShellBackground_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayVideo(struct FMenuStackMediaSourceParams MediaSourceParams); // Function WBP_Panel_ShellBackground.WBP_Panel_ShellBackground_C.PlayVideo // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ShellBackground(int32_t EntryPoint); // Function WBP_Panel_ShellBackground.WBP_Panel_ShellBackground_C.ExecuteUbergraph_WBP_Panel_ShellBackground // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

