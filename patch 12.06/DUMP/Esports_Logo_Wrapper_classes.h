// WidgetBlueprintGeneratedClass Esports_Logo_Wrapper.Esports_Logo_Wrapper_C
// Size: 0x338 (Inherited: 0x318)
struct UEsports_Logo_Wrapper_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_Logo0; // 0x320(0x08)
	struct FVector2D ImageSize; // 0x328(0x10)

	void SetImage(struct UTexture2D* InLogo); // Function Esports_Logo_Wrapper.Esports_Logo_Wrapper_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function Esports_Logo_Wrapper.Esports_Logo_Wrapper_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Esports_Logo_Wrapper.Esports_Logo_Wrapper_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Esports_Logo_Wrapper(int32_t EntryPoint); // Function Esports_Logo_Wrapper.Esports_Logo_Wrapper_C.ExecuteUbergraph_Esports_Logo_Wrapper // (Final|UbergraphFunction) // @ game+0x1b42740
};

