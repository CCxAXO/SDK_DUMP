// WidgetBlueprintGeneratedClass WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C
// Size: 0x1b78 (Inherited: 0x1b40)
struct UWBP_Toggle_TimelineUI_C : UAresMaterialToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b40(0x08)
	struct UImage* Img_Toggle; // 0x1b48(0x08)
	struct USizeBox* SB_Keybind; // 0x1b50(0x08)
	struct USizeBox* SB_ToggleMaterialWrap; // 0x1b58(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* WBP_Panel_ActionBindingDIsplay; // 0x1b60(0x08)
	enum class EAresBoolSettingName KeyboardShortCutSetting; // 0x1b68(0x01)
	char pad_1B69[0x7]; // 0x1b69(0x07)
	struct UReplayKeybindingShortcutViewModel* ReplayKeybindViewModel; // 0x1b70(0x08)

	void OnKeybindChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.OnKeybindChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShowKeybindChanged(bool NewValue); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.OnShowKeybindChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetToggleIconHoverOnOffColors(bool IsOnHover); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.SetToggleIconHoverOnOffColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMaterialCreated(); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.OnMaterialCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Toggle_TimelineUI(int32_t EntryPoint); // Function WBP_Toggle_TimelineUI.WBP_Toggle_TimelineUI_C.ExecuteUbergraph_WBP_Toggle_TimelineUI // (Final|UbergraphFunction) // @ game+0x1af5410
};

