// WidgetBlueprintGeneratedClass Shared_Mouse_Prompt.Shared_Mouse_Prompt_C
// Size: 0x351 (Inherited: 0x320)
struct UShared_Mouse_Prompt_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UInvalidationBox* InvalidationBox_Shared_Mouse_Prompt; // 0x328(0x08)
	struct UImage* M1; // 0x330(0x08)
	struct UImage* M2; // 0x338(0x08)
	struct UImage* M3; // 0x340(0x08)
	struct UImage* Mouse_Icon_BG; // 0x348(0x08)
	enum class Enum_AbilityInputs MouseInput; // 0x350(0x01)

	void SetImage(enum class Enum_AbilityInputs In Mouse Input); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetMouseInput(enum class Enum_AbilityInputs MouseInput); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.SetMouseInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Shared_Mouse_Prompt(int32_t EntryPoint); // Function Shared_Mouse_Prompt.Shared_Mouse_Prompt_C.ExecuteUbergraph_Shared_Mouse_Prompt // (Final|UbergraphFunction) // @ game+0x1b42740
};

