// WidgetBlueprintGeneratedClass WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C
// Size: 0x442 (Inherited: 0x410)
struct UWBP_Panel_PresenceStatusText_C : UWBP_Panel_PresenceObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UAresCommonText* Txt_Status; // 0x418(0x08)
	struct UCommonTextStyle* TextStyle; // 0x420(0x08)
	struct FText PreviewText; // 0x428(0x18)
	bool bTintStatusText; // 0x440(0x01)
	bool bScrollingIsEnabled; // 0x441(0x01)

	void SetTintColor(struct FSlateColor Color); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.SetTintColor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTintStatusText(bool bNewValue); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.SetTintStatusText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyTextTint(); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.ApplyTextTint // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyTextStyle(); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.ApplyTextStyle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandlePresenceStateChanged(); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.HandlePresenceStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyDesignTimePreview(); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.ApplyDesignTimePreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetScrollingIsEnabled(bool bScrollingIsEnabled); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.SetScrollingIsEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PresenceStatusText(int32_t EntryPoint); // Function WBP_Panel_PresenceStatusText.WBP_Panel_PresenceStatusText_C.ExecuteUbergraph_WBP_Panel_PresenceStatusText // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

