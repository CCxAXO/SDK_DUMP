// WidgetBlueprintGeneratedClass ContextMenuHeader.ContextMenuHeader_C
// Size: 0x361 (Inherited: 0x318)
struct UContextMenuHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Header1; // 0x320(0x08)
	struct UTextBlock* Header2; // 0x328(0x08)
	struct FText Header1Text; // 0x330(0x18)
	struct FText Header2Text; // 0x348(0x18)
	bool IsMe; // 0x360(0x01)

	void Construct(); // Function ContextMenuHeader.ContextMenuHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ContextMenuHeader(int32_t EntryPoint); // Function ContextMenuHeader.ContextMenuHeader_C.ExecuteUbergraph_ContextMenuHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

