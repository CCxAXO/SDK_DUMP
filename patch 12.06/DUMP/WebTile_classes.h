// WidgetBlueprintGeneratedClass WebTile.WebTile_C
// Size: 0x3a4 (Inherited: 0x318)
struct UWebTile_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UScaleBox* ErrorFallback; // 0x320(0x08)
	struct UButton* ErrorFallbackButton; // 0x328(0x08)
	struct UOverlay* Loaded; // 0x330(0x08)
	struct UImage* Loading; // 0x338(0x08)
	struct UWidgetSwitcher* Switcher; // 0x340(0x08)
	struct UWebBrowser* WebBrowser_22; // 0x348(0x08)
	struct FName URLConfig; // 0x350(0x0c)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FString DefaultUrl; // 0x360(0x10)
	struct FString FallbackArticleURL; // 0x370(0x10)
	struct FName FallbackArticleConfig; // 0x380(0x0c)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FTimerHandle TimeoutTimerHandle; // 0x390(0x08)
	struct FName ShowWidgetConfig; // 0x398(0x0c)

	struct FString GetSubject(); // Function WebTile.WebTile_C.GetSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Timeout(); // Function WebTile.WebTile_C.Timeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void loadcompleted(); // Function WebTile.WebTile_C.loadcompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void linkinternal(struct FString Location); // Function WebTile.WebTile_C.linkinternal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LoadTileContent(); // Function WebTile.WebTile_C.LoadTileContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetUrl(struct FString& URL); // Function WebTile.WebTile_C.GetUrl // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void linkexternal(struct FString Location); // Function WebTile.WebTile_C.linkexternal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WebTile.WebTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnConfigChanged(struct FName& ConfigName); // Function WebTile.WebTile_C.OnConfigChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LoadError(); // Function WebTile.WebTile_C.LoadError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ErrorFallbackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WebTile.WebTile_C.BndEvt__ErrorFallbackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WebTile_ErrorFallbackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WebTile.WebTile_C.BndEvt__WebTile_ErrorFallbackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WebTile(int32_t EntryPoint); // Function WebTile.WebTile_C.ExecuteUbergraph_WebTile // (Final|UbergraphFunction) // @ game+0x1b42740
};

