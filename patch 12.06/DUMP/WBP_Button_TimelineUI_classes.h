// WidgetBlueprintGeneratedClass WBP_Button_TimelineUI.WBP_Button_TimelineUI_C
// Size: 0x1b40 (Inherited: 0x1ae0)
struct UWBP_Button_TimelineUI_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct USizeBox* SB_Keybind; // 0x1ae8(0x08)
	struct USpacer* text_icon_spacer; // 0x1af0(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* WBP_Panel_ActionBindingDIsplay; // 0x1af8(0x08)
	bool ShowButtonIcon; // 0x1b00(0x01)
	bool ShowText; // 0x1b01(0x01)
	char pad_1B02[0x2]; // 0x1b02(0x02)
	struct FLinearColor Icon_DefaultColor; // 0x1b04(0x10)
	struct FSlateColor Text_DefaultColor; // 0x1b14(0x14)
	struct FName Name_MaterialTextureSlot; // 0x1b28(0x0c)
	enum class EAresBoolSettingName KeyboardShortCutSetting; // 0x1b34(0x01)
	char pad_1B35[0x3]; // 0x1b35(0x03)
	struct UReplayKeybindingShortcutViewModel* ReplayKeybindViewModel; // 0x1b38(0x08)

	void OnKeybindChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.OnKeybindChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShowKeybindChanged(bool NewValue); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.OnShowKeybindChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_TimelineUI(int32_t EntryPoint); // Function WBP_Button_TimelineUI.WBP_Button_TimelineUI_C.ExecuteUbergraph_WBP_Button_TimelineUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

