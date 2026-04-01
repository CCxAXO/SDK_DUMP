// WidgetBlueprintGeneratedClass CrosshairPreviewWidget.CrosshairPreviewWidget_C
// Size: 0x35c (Inherited: 0x338)
struct UCrosshairPreviewWidget_C : UCrosshairPreviewWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UImage* CrosshairPreviewImage; // 0x340(0x08)
	struct UCanvasRenderTarget2D* CanvasRenderTarget; // 0x348(0x08)
	double SettingsRefreshPeriod; // 0x350(0x08)
	bool RefreshTimerRunning; // 0x358(0x01)
	bool RefreshRequestPending; // 0x359(0x01)
	bool Constructed; // 0x35a(0x01)
	enum class ECrosshairPreviewSettingsType PreviewSettingsType; // 0x35b(0x01)

	void UpdateCrosshairPreviewImageBrush(); // Function CrosshairPreviewWidget.CrosshairPreviewWidget_C.UpdateCrosshairPreviewImageBrush // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePreviewRenderTarget(struct UCanvasRenderTarget2D* RenderTarget); // Function CrosshairPreviewWidget.CrosshairPreviewWidget_C.UpdatePreviewRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePreviewSettingsTypeAndDisplay(enum class ECrosshairPreviewSettingsType PreviewSettingsType); // Function CrosshairPreviewWidget.CrosshairPreviewWidget_C.UpdatePreviewSettingsTypeAndDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSettingsRecieved(); // Function CrosshairPreviewWidget.CrosshairPreviewWidget_C.OnSettingsRecieved // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RenderTargetUpdate(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function CrosshairPreviewWidget.CrosshairPreviewWidget_C.RenderTargetUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CrosshairPreviewWidget.CrosshairPreviewWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void RefreshTimerEvent(); // Function CrosshairPreviewWidget.CrosshairPreviewWidget_C.RefreshTimerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CrosshairPreviewWidget(int32_t EntryPoint); // Function CrosshairPreviewWidget.CrosshairPreviewWidget_C.ExecuteUbergraph_CrosshairPreviewWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

