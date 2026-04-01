// WidgetBlueprintGeneratedClass TotemsModelviewer.TotemsModelviewer_C
// Size: 0x339 (Inherited: 0x318)
struct UTotemsModelviewer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UModelViewerPanel_C* ModelViewerPanel; // 0x328(0x08)
	struct UJuiceBoxDataAsset* JuiceBoxDataAsset; // 0x330(0x08)
	bool useBackground; // 0x338(0x01)

	void SetTotem(struct UTotemHandle* TotemHandle); // Function TotemsModelviewer.TotemsModelviewer_C.SetTotem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetJuiceBox(struct UJuiceBoxDataAsset* Juice Box Data Asset); // Function TotemsModelviewer.TotemsModelviewer_C.SetJuiceBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TotemsModelviewer.TotemsModelviewer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TotemsModelviewer.TotemsModelviewer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TotemsModelviewer(int32_t EntryPoint); // Function TotemsModelviewer.TotemsModelviewer_C.ExecuteUbergraph_TotemsModelviewer // (Final|UbergraphFunction) // @ game+0x1b42740
};

