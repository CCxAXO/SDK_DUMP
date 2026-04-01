// WidgetBlueprintGeneratedClass WBP_MenuWidgetBase.WBP_MenuWidgetBase_C
// Size: 0x328 (Inherited: 0x320)
struct UWBP_MenuWidgetBase_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)

	enum class EMenuStackWidget_RequestCloseMenuResult RequestCloseMenu(); // Function WBP_MenuWidgetBase.WBP_MenuWidgetBase_C.RequestCloseMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CloseSelf(); // Function WBP_MenuWidgetBase.WBP_MenuWidgetBase_C.CloseSelf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClose(); // Function WBP_MenuWidgetBase.WBP_MenuWidgetBase_C.OnClose // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnOpen(); // Function WBP_MenuWidgetBase.WBP_MenuWidgetBase_C.OnOpen // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRegister(struct UMenuStackEntry* RegisteredEntry); // Function WBP_MenuWidgetBase.WBP_MenuWidgetBase_C.OnRegister // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_MenuWidgetBase(int32_t EntryPoint); // Function WBP_MenuWidgetBase.WBP_MenuWidgetBase_C.ExecuteUbergraph_WBP_MenuWidgetBase // (Final|UbergraphFunction) // @ game+0x1b42740
};

