// WidgetBlueprintGeneratedClass GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C
// Size: 0x369 (Inherited: 0x318)
struct UGFTDynamicWidgetSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* Container; // 0x320(0x08)
	struct UUserWidget* EnabledWidget; // 0x328(0x08)
	struct UUserWidget* DisabledWidget; // 0x330(0x08)
	bool DesignTimeDefault; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FMulticastInlineDelegate EnabledWidgetCreated; // 0x340(0x10)
	struct FMulticastInlineDelegate DisabledWidgetCreated; // 0x350(0x10)
	struct UUserWidget* UserWidget; // 0x360(0x08)
	enum class EGameFeatureToggleName GameFeatureToggleName; // 0x368(0x01)

	void GetWidget(struct UUserWidget*& UserWidget); // Function GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C.GetWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateWidget(struct UUserWidget* WidgetClass, struct UUserWidget*& New Widget); // Function GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C.CreateWidget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnGameFeatureToggleChanged_NotifyBlueprint_Event_1(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C.OnGameFeatureToggleChanged_NotifyBlueprint_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GFTDynamicWidgetSwitcher(int32_t EntryPoint); // Function GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C.ExecuteUbergraph_GFTDynamicWidgetSwitcher // (Final|UbergraphFunction) // @ game+0x1af5410
	void DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C.DisabledWidgetCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function GFTDynamicWidgetSwitcher.GFTDynamicWidgetSwitcher_C.EnabledWidgetCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

