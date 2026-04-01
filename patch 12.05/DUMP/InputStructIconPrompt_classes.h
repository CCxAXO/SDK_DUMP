// WidgetBlueprintGeneratedClass InputStructIconPrompt.InputStructIconPrompt_C
// Size: 0x3e0 (Inherited: 0x391)
struct UInputStructIconPrompt_C : UInputIconController_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct FStruct_Widget_Ability_Input InputStruct; // 0x3a0(0x38)
	struct UUserWidget* SharedUserWidget; // 0x3d8(0x08)

	void SetInputStructForConstruct(struct FStruct_Widget_Ability_Input NewStruct); // Function InputStructIconPrompt.InputStructIconPrompt_C.SetInputStructForConstruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInputStruct(struct FStruct_Widget_Ability_Input New Input Struct); // Function InputStructIconPrompt.InputStructIconPrompt_C.UpdateInputStruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function InputStructIconPrompt.InputStructIconPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function InputStructIconPrompt.InputStructIconPrompt_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPresetChanged(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function InputStructIconPrompt.InputStructIconPrompt_C.OnPresetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EventOnIconChange(); // Function InputStructIconPrompt.InputStructIconPrompt_C.EventOnIconChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InputStructIconPrompt(int32_t EntryPoint); // Function InputStructIconPrompt.InputStructIconPrompt_C.ExecuteUbergraph_InputStructIconPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

