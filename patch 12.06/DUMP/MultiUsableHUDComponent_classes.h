// WidgetBlueprintGeneratedClass MultiUsableHUDComponent.MultiUsableHUDComponent_C
// Size: 0x3e9 (Inherited: 0x358)
struct UMultiUsableHUDComponent_C : UBaseUsableHUDComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UImage* BG; // 0x360(0x08)
	struct UImage* BG_2; // 0x368(0x08)
	struct UActionNameIconPrompt_C* HoldActionNameIconPromp; // 0x370(0x08)
	struct UImage* Image; // 0x378(0x08)
	struct UImage* Image_2; // 0x380(0x08)
	struct UImage* Image_3; // 0x388(0x08)
	struct UImage* Image_4; // 0x390(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x398(0x08)
	struct UInvalidationBox* InvalidationBox_3; // 0x3a0(0x08)
	struct UTextBlock* NotUsingHoldText1; // 0x3a8(0x08)
	struct UTextBlock* NotUsingHoldText2; // 0x3b0(0x08)
	struct UTextBlock* NotUsingText1; // 0x3b8(0x08)
	struct UTextBlock* NotUsingText2; // 0x3c0(0x08)
	struct UWidgetSwitcher* PromptSwitcher; // 0x3c8(0x08)
	struct UActionNameIconPrompt_C* TapActionNameIconPrompt; // 0x3d0(0x08)
	struct UUniversalChargeBar_C* UniversalChargeBar; // 0x3d8(0x08)
	struct UTextBlock* UsingText; // 0x3e0(0x08)
	bool LastCurrentlyInUse; // 0x3e8(0x01)

	void SetTextOrHide(struct UTextBlock* Widget, struct FText Text); // Function MultiUsableHUDComponent.MultiUsableHUDComponent_C.SetTextOrHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MultiUsableHUDComponent.MultiUsableHUDComponent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleCurrentlyInUseUpdate(bool CurrentlyInUse); // Function MultiUsableHUDComponent.MultiUsableHUDComponent_C.HandleCurrentlyInUseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUsingTimeUpdate(double CurrentUsingTime, double MaxUsingTime); // Function MultiUsableHUDComponent.MultiUsableHUDComponent_C.HandleUsingTimeUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InternalSetCurrentlyInUse(bool CurrentlyInUse); // Function MultiUsableHUDComponent.MultiUsableHUDComponent_C.InternalSetCurrentlyInUse // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MultiUsableHUDComponent(int32_t EntryPoint); // Function MultiUsableHUDComponent.MultiUsableHUDComponent_C.ExecuteUbergraph_MultiUsableHUDComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

