// WidgetBlueprintGeneratedClass LazyPlatformWidgetLoader_Universal.LazyPlatformWidgetLoader_Universal_C
// Size: 0x368 (Inherited: 0x358)
struct ULazyPlatformWidgetLoader_Universal_C : ULazyPlatformWidgetLoader_Base {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UCanvasPanel* Canvas; // 0x360(0x08)

	void HandleWidgetInstanceUpdated(); // Function LazyPlatformWidgetLoader_Universal.LazyPlatformWidgetLoader_Universal_C.HandleWidgetInstanceUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnWidgetLoadedEvent(struct ULazyPlatformWidgetLoader_Base* LoaderWidget); // Function LazyPlatformWidgetLoader_Universal.LazyPlatformWidgetLoader_Universal_C.OnWidgetLoadedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function LazyPlatformWidgetLoader_Universal.LazyPlatformWidgetLoader_Universal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function LazyPlatformWidgetLoader_Universal.LazyPlatformWidgetLoader_Universal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LazyPlatformWidgetLoader_Universal(int32_t EntryPoint); // Function LazyPlatformWidgetLoader_Universal.LazyPlatformWidgetLoader_Universal_C.ExecuteUbergraph_LazyPlatformWidgetLoader_Universal // (Final|UbergraphFunction) // @ game+0x1b42740
};

