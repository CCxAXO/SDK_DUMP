// WidgetBlueprintGeneratedClass ModelViewerPanelBase.ModelViewerPanelBase_C
// Size: 0x408 (Inherited: 0x3e0)
struct UModelViewerPanelBase_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct FMulticastInlineDelegate OnPressed; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3f8(0x10)

	void InitFromHandle(struct UBaseHandle* ContentHandle); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetFOVOffsetDeferred(double FOV Offset Deferred); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.SetFOVOffsetDeferred // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIgnoreMouseRotation(bool InIgnoreMouseRotation); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.SetIgnoreMouseRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIgnoreMouseJitter(bool InIgnoreMouseJitter); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.SetIgnoreMouseJitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetModelRotation(double X (Roll), double Z (Yaw)); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.SetModelRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGamepadInteractive(bool Gamepad Interactive); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.SetGamepadInteractive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetWallpaperPadding(struct FMargin InPadding); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.SetWallpaperPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableModelViewerCamera(); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.EnableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisableModelViewerCamera(); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.DisableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIgnoreMouseWheel(bool InIgnoreMouseWheel); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.SetIgnoreMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideModel(); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.HideModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Log Not Implemented(struct FString Function); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.Log Not Implemented // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ModelViewerPanelBase(int32_t EntryPoint); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.ExecuteUbergraph_ModelViewerPanelBase // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnReleased__DelegateSignature(bool bForcedRelease); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPressed__DelegateSignature(); // Function ModelViewerPanelBase.ModelViewerPanelBase_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

