// WidgetBlueprintGeneratedClass BaseUsableHUDComponent.BaseUsableHUDComponent_C
// Size: 0x358 (Inherited: 0x318)
struct UBaseUsableHUDComponent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UUsableComponent* My Usable; // 0x320(0x08)
	struct FName ActionName; // 0x328(0x0c)
	char pad_334[0x4]; // 0x334(0x04)
	struct FMulticastInlineDelegate HoldTimeUpdateEvent; // 0x338(0x10)
	bool ToggleableUsablesSettingEnabled; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UActionNameIconPrompt_C* ActionNameIconPromptToBind; // 0x350(0x08)

	void IsInputAllowed(bool& bInputAllowed); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.IsInputAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void HandleCurrentlyInUseUpdate(bool CurrentlyInUse); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.HandleCurrentlyInUseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUsingTimeUpdate(double CurrentUsingTime, double MaxUsingTime); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.HandleUsingTimeUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetUsable(struct UUsableComponent*& Usable); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.GetUsable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EnableToggleableUsables(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.EnableToggleableUsables // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseUsableHUDComponent(int32_t EntryPoint); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.ExecuteUbergraph_BaseUsableHUDComponent // (Final|UbergraphFunction) // @ game+0x1b42740
	void HoldTimeUpdateEvent__DelegateSignature(double New Hold Time); // Function BaseUsableHUDComponent.BaseUsableHUDComponent_C.HoldTimeUpdateEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

