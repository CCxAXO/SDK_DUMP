// WidgetBlueprintGeneratedClass AlertDetail.AlertDetail_C
// Size: 0x350 (Inherited: 0x318)
struct UAlertDetail_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* DescriptionText; // 0x320(0x08)
	struct UTextBlock* TitleText; // 0x328(0x08)
	struct FString Title; // 0x330(0x10)
	struct FString Details; // 0x340(0x10)

	void PreConstruct(bool IsDesignTime); // Function AlertDetail.AlertDetail_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AlertDetail.AlertDetail_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AlertDetail(int32_t EntryPoint); // Function AlertDetail.AlertDetail_C.ExecuteUbergraph_AlertDetail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

