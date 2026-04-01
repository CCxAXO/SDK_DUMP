// WidgetBlueprintGeneratedClass AnimatedMaterialWidget.AnimatedMaterialWidget_C
// Size: 0x3a0 (Inherited: 0x318)
struct UAnimatedMaterialWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* content; // 0x320(0x08)
	struct URetainerBox* Retainer; // 0x328(0x08)
	int32_t FPS; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	double FadeInDuration; // 0x338(0x08)
	struct UMaterialInstanceDynamic* MaterialRef; // 0x340(0x08)
	struct UMaterial* Material; // 0x348(0x08)
	struct UCurveFloat* DissolveCurve; // 0x350(0x08)
	struct UCurveLinearColor* ColorAndOpacityCurve; // 0x358(0x08)
	struct UTexture2D* DissolveTexture; // 0x360(0x08)
	double LoopTime; // 0x368(0x08)
	double PercentComplete; // 0x370(0x08)
	double UpdateInterval; // 0x378(0x08)
	struct FTimerHandle LoopHandle; // 0x380(0x08)
	bool IsForward; // 0x388(0x01)
	bool AutoPlay; // 0x389(0x01)
	bool RenderContents; // 0x38a(0x01)
	char pad_38B[0x5]; // 0x38b(0x05)
	struct UTexture2D* OverrideTexture; // 0x390(0x08)
	double FadeOutDuration; // 0x398(0x08)

	void VerifyMaterialTextures(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.VerifyMaterialTextures // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Recache(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.Recache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateParams(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.UpdateParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BeginAnimation(bool PlayForward); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.BeginAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Loop(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.Loop // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AnimatedMaterialWidget(int32_t EntryPoint); // Function AnimatedMaterialWidget.AnimatedMaterialWidget_C.ExecuteUbergraph_AnimatedMaterialWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

