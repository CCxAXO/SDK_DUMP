// WidgetBlueprintGeneratedClass TotemImage.TotemImage_C
// Size: 0x330 (Inherited: 0x318)
struct UTotemImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_1; // 0x320(0x08)
	struct UTotemHandle* TotemHandle; // 0x328(0x08)

	void SetTotem(struct UTotemHandle* TotemHandle); // Function TotemImage.TotemImage_C.SetTotem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TotemImage.TotemImage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TotemImage(int32_t EntryPoint); // Function TotemImage.TotemImage_C.ExecuteUbergraph_TotemImage // (Final|UbergraphFunction) // @ game+0x1af5410
};

