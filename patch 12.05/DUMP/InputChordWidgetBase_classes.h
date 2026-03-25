// WidgetBlueprintGeneratedClass InputChordWidgetBase.InputChordWidgetBase_C
// Size: 0x320 (Inherited: 0x318)
struct UInputChordWidgetBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)

	void SetInputAction(struct FName ActionName, enum class EActionBindSetAxisDirection ActionBindSetAxisDirection); // Function InputChordWidgetBase.InputChordWidgetBase_C.SetInputAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function InputChordWidgetBase.InputChordWidgetBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InputChordWidgetBase(int32_t EntryPoint); // Function InputChordWidgetBase.InputChordWidgetBase_C.ExecuteUbergraph_InputChordWidgetBase // (Final|UbergraphFunction) // @ game+0x1af5410
};

