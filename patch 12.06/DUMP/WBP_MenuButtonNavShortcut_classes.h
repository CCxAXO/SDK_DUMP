// WidgetBlueprintGeneratedClass WBP_MenuButtonNavShortcut.WBP_MenuButtonNavShortcut_C
// Size: 0x610 (Inherited: 0x5da)
struct UWBP_MenuButtonNavShortcut_C : UBaseMenuButton_Universal_C {
	char pad_5DA[0x6]; // 0x5da(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e0(0x08)
	struct UImage* AttentionIndicator; // 0x5e8(0x08)
	struct UGenericTextTooltipContainer_C* GenericTextTooltipContainer; // 0x5f0(0x08)
	enum class EAresMainMenuTopNavigationState NavigationTarget; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct FString URLTarget; // 0x600(0x10)

	void HandleButtonClicked(); // Function WBP_MenuButtonNavShortcut.WBP_MenuButtonNavShortcut_C.HandleButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_MenuButtonNavShortcut.WBP_MenuButtonNavShortcut_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_MenuButtonNavShortcut.WBP_MenuButtonNavShortcut_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnNavigationStateChanged(); // Function WBP_MenuButtonNavShortcut.WBP_MenuButtonNavShortcut_C.OnNavigationStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_MenuButtonNavShortcut(int32_t EntryPoint); // Function WBP_MenuButtonNavShortcut.WBP_MenuButtonNavShortcut_C.ExecuteUbergraph_WBP_MenuButtonNavShortcut // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

