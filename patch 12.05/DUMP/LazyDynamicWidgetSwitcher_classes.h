// WidgetBlueprintGeneratedClass LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C
// Size: 0x378 (Inherited: 0x318)
struct ULazyDynamicWidgetSwitcher_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* Container; // 0x320(0x08)
	struct FName ConfigName; // 0x328(0x0c)
	char pad_334[0x4]; // 0x334(0x04)
	struct UUserWidget* EnabledWidget; // 0x338(0x08)
	struct UUserWidget* DisabledWidget; // 0x340(0x08)
	bool DefaultValue; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FMulticastInlineDelegate EnabledWidgetCreated; // 0x350(0x10)
	struct FMulticastInlineDelegate DisabledWidgetCreated; // 0x360(0x10)
	struct UUserWidget* UserWidget; // 0x370(0x08)

	void GetWidget(struct UUserWidget*& UserWidget); // Function LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C.GetWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateWidget(struct UUserWidget* WidgetClass, struct UUserWidget*& New Widget); // Function LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C.CreateWidget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnConfigUpdatedEvent(struct FName& ConfigName); // Function LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C.OnConfigUpdatedEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_LazyDynamicWidgetSwitcher(int32_t EntryPoint); // Function LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C.ExecuteUbergraph_LazyDynamicWidgetSwitcher // (Final|UbergraphFunction) // @ game+0x1af5410
	void DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C.DisabledWidgetCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function LazyDynamicWidgetSwitcher.LazyDynamicWidgetSwitcher_C.EnabledWidgetCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

