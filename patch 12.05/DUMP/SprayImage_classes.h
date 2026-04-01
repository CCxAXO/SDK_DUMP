// WidgetBlueprintGeneratedClass SprayImage.SprayImage_C
// Size: 0x330 (Inherited: 0x318)
struct USprayImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_1; // 0x320(0x08)
	struct USprayHandle* SprayHandle; // 0x328(0x08)

	void SetSpray(struct USprayHandle* SprayHandle); // Function SprayImage.SprayImage_C.SetSpray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function SprayImage.SprayImage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SprayImage(int32_t EntryPoint); // Function SprayImage.SprayImage_C.ExecuteUbergraph_SprayImage // (Final|UbergraphFunction) // @ game+0x1af5410
};

