// WidgetBlueprintGeneratedClass WBP_MenuButtonPrimaryWithSubtitle.WBP_MenuButtonPrimaryWithSubtitle_C
// Size: 0x5f9 (Inherited: 0x5da)
struct UWBP_MenuButtonPrimaryWithSubtitle_C : UBaseMenuButton_Universal_C {
	char pad_5DA[0x6]; // 0x5da(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e0(0x08)
	struct UAresTextBlock* SubtitleText; // 0x5e8(0x08)
	struct USizeBox* TextSizeBox; // 0x5f0(0x08)
	enum class E_MenuButtonStyles Button Style Override; // 0x5f8(0x01)

	void Update Border Outline Padding(struct FMargin Border BG Padding Override); // Function WBP_MenuButtonPrimaryWithSubtitle.WBP_MenuButtonPrimaryWithSubtitle_C.Update Border Outline Padding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Border BG Padding(struct FMargin Border BG Padding Override); // Function WBP_MenuButtonPrimaryWithSubtitle.WBP_MenuButtonPrimaryWithSubtitle_C.Update Border BG Padding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Subtitle(struct FText Subtitle); // Function WBP_MenuButtonPrimaryWithSubtitle.WBP_MenuButtonPrimaryWithSubtitle_C.Set Subtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_MenuButtonPrimaryWithSubtitle.WBP_MenuButtonPrimaryWithSubtitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_MenuButtonPrimaryWithSubtitle.WBP_MenuButtonPrimaryWithSubtitle_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_MenuButtonPrimaryWithSubtitle(int32_t EntryPoint); // Function WBP_MenuButtonPrimaryWithSubtitle.WBP_MenuButtonPrimaryWithSubtitle_C.ExecuteUbergraph_WBP_MenuButtonPrimaryWithSubtitle // (Final|UbergraphFunction) // @ game+0x1b42740
};

