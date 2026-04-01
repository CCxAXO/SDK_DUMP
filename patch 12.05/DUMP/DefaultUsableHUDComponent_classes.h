// WidgetBlueprintGeneratedClass DefaultUsableHUDComponent.DefaultUsableHUDComponent_C
// Size: 0x3b8 (Inherited: 0x358)
struct UDefaultUsableHUDComponent_C : UBaseUsableHUDComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x360(0x08)
	struct UImage* BG; // 0x368(0x08)
	struct UImage* Image; // 0x370(0x08)
	struct UImage* Image_116; // 0x378(0x08)
	struct UInvalidationBox* InvalidationBox_7; // 0x380(0x08)
	struct UInvalidationBox* InvalidationBox_9; // 0x388(0x08)
	struct UTextBlock* NotUsingText1; // 0x390(0x08)
	struct UTextBlock* NotUsingText2; // 0x398(0x08)
	struct UWidgetSwitcher* PromptSwitcher; // 0x3a0(0x08)
	struct UUniversalChargeBar_C* UniversalChargeBar; // 0x3a8(0x08)
	struct UTextBlock* UsingText; // 0x3b0(0x08)

	void Construct(); // Function DefaultUsableHUDComponent.DefaultUsableHUDComponent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleCurrentlyInUseUpdate(bool CurrentlyInUse); // Function DefaultUsableHUDComponent.DefaultUsableHUDComponent_C.HandleCurrentlyInUseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleUsingTimeUpdate(double CurrentUsingTime, double MaxUsingTime); // Function DefaultUsableHUDComponent.DefaultUsableHUDComponent_C.HandleUsingTimeUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DefaultUsableHUDComponent(int32_t EntryPoint); // Function DefaultUsableHUDComponent.DefaultUsableHUDComponent_C.ExecuteUbergraph_DefaultUsableHUDComponent // (Final|UbergraphFunction) // @ game+0x1af5410
};

