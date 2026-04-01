// WidgetBlueprintGeneratedClass WBP_Screen_Hub.WBP_Screen_Hub_C
// Size: 0x610 (Inherited: 0x608)
struct UWBP_Screen_Hub_C : UWBP_Screen_Landing_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)

	void BP_OnActivated(); // Function WBP_Screen_Hub.WBP_Screen_Hub_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_Screen_Hub.WBP_Screen_Hub_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_Hub.WBP_Screen_Hub_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void RefreshInputActions(); // Function WBP_Screen_Hub.WBP_Screen_Hub_C.RefreshInputActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_Hub(int32_t EntryPoint); // Function WBP_Screen_Hub.WBP_Screen_Hub_C.ExecuteUbergraph_WBP_Screen_Hub // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

