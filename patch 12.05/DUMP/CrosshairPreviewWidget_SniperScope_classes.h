// WidgetBlueprintGeneratedClass CrosshairPreviewWidget_SniperScope.CrosshairPreviewWidget_SniperScope_C
// Size: 0x35d (Inherited: 0x318)
struct UCrosshairPreviewWidget_SniperScope_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* CenterDot; // 0x320(0x08)
	struct UScaleBox* CenterDotScaleBox; // 0x328(0x08)
	struct UImage* SniperCross; // 0x330(0x08)
	struct UMaterialInstanceDynamic* CenterDotMaterial; // 0x338(0x08)
	bool ShowSniperCross; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	struct FSniperCrosshairSettings SettingsToRender; // 0x344(0x18)
	bool IsStaticPreview; // 0x35c(0x01)

	void ChangeCrosshairSettings(struct FCrosshairSettings NewCrosshairSettings); // Function CrosshairPreviewWidget_SniperScope.CrosshairPreviewWidget_SniperScope_C.ChangeCrosshairSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RenderCrosshair(); // Function CrosshairPreviewWidget_SniperScope.CrosshairPreviewWidget_SniperScope_C.RenderCrosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChangeShowSniperCross(bool ShowSniperCross); // Function CrosshairPreviewWidget_SniperScope.CrosshairPreviewWidget_SniperScope_C.ChangeShowSniperCross // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function CrosshairPreviewWidget_SniperScope.CrosshairPreviewWidget_SniperScope_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdatePreview(); // Function CrosshairPreviewWidget_SniperScope.CrosshairPreviewWidget_SniperScope_C.UpdatePreview // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CrosshairPreviewWidget_SniperScope(int32_t EntryPoint); // Function CrosshairPreviewWidget_SniperScope.CrosshairPreviewWidget_SniperScope_C.ExecuteUbergraph_CrosshairPreviewWidget_SniperScope // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

