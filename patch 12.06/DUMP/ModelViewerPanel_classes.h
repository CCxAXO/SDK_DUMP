// WidgetBlueprintGeneratedClass ModelViewerPanel.ModelViewerPanel_C
// Size: 0x560 (Inherited: 0x408)
struct UModelViewerPanel_C : UModelViewerPanelBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UImage* GlitchImage; // 0x410(0x08)
	struct UImage* WeaponImage; // 0x418(0x08)
	struct UImage* WeaponWallpaper; // 0x420(0x08)
	struct AModelViewer_Equipables_C* ModelViewerBase; // 0x428(0x08)
	struct AModelViewer_Equipables_C* ModelViewer; // 0x430(0x08)
	bool buttonIsHeld; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UMaterialInterface* WeaponGlitchMaterial; // 0x440(0x08)
	struct UMaterialInterface* WeaponMaterial; // 0x448(0x08)
	bool viewIsReset; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FVector2D OriginalLeftMousePosition; // 0x458(0x10)
	struct FVector2D LastRightMousePosition; // 0x468(0x10)
	bool Right Mouse Down; // 0x478(0x01)
	bool Right Mouse Was Down; // 0x479(0x01)
	bool Left Mouse Down; // 0x47a(0x01)
	bool Left Mouse Was Down; // 0x47b(0x01)
	char pad_47C[0x4]; // 0x47c(0x04)
	double Last Pan; // 0x480(0x08)
	bool ClearOnDestruct; // 0x488(0x01)
	bool ShowWallpaper; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct UEquippableSkinDataAsset* SkinDataAsset; // 0x490(0x08)
	struct UTextureRenderTarget2d* TextureRenderTarget2d; // 0x498(0x08)
	int32_t ScreenResolutionY; // 0x4a0(0x04)
	int32_t ScreenResolutionX; // 0x4a4(0x04)
	bool Analog Stick Was Used; // 0x4a8(0x01)
	bool Gamepad Interactive; // 0x4a9(0x01)
	char pad_4AA[0x6]; // 0x4aa(0x06)
	double Gamepad Zoom Delta; // 0x4b0(0x08)
	struct UEquippableSkinHandle* Gun Buddy Default Skin Handle; // 0x4b8(0x08)
	struct UEquippableSkinChromaHandle* Gun Buddy Default Skin Chroma Handle; // 0x4c0(0x08)
	int32_t Gun Buddy Default Level; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UEquippableCharmHandle* Gun Buddy Temp; // 0x4d0(0x08)
	double FOV Offset Deferred; // 0x4d8(0x08)
	int32_t WatchDogCounter; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UAresScreenBase* OwningScreen; // 0x4e8(0x08)
	struct USprayDataAsset* Default None Spray; // 0x4f0(0x08)
	struct USprayHandle* None Spray Handle; // 0x4f8(0x08)
	struct UMaterialInterface* WeaponMaterialBase; // 0x500(0x08)
	struct UMaterialInterface* WeaponGlitchMaterialBase; // 0x508(0x08)
	bool IgnoreMouseWheel; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct TSoftClassPtr<UObject> NewVar; // 0x518(0x30)
	bool IgnoreMouseRotation; // 0x548(0x01)
	bool IgnoreMouseJitter; // 0x549(0x01)
	bool EnterMouseRotateAndPanMode; // 0x54a(0x01)
	bool LegacyPCMenuPanel; // 0x54b(0x01)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct TArray<struct TSoftClassPtr<UObject>> KnownTransparentPopups; // 0x550(0x10)

	void InitFromHandle(struct UBaseHandle* ContentHandle); // Function ModelViewerPanel.ModelViewerPanel_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetFOVOffsetDeferred(double FOV Offset Deferred); // Function ModelViewerPanel.ModelViewerPanel_C.SetFOVOffsetDeferred // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIgnoreMouseRotation(bool InIgnoreMouseRotation); // Function ModelViewerPanel.ModelViewerPanel_C.SetIgnoreMouseRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIgnoreMouseJitter(bool InIgnoreMouseJitter); // Function ModelViewerPanel.ModelViewerPanel_C.SetIgnoreMouseJitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetModelRotation(double X (Roll), double Z (Yaw)); // Function ModelViewerPanel.ModelViewerPanel_C.SetModelRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGamepadInteractive(bool Gamepad Interactive); // Function ModelViewerPanel.ModelViewerPanel_C.SetGamepadInteractive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetWallpaperPadding(struct FMargin InPadding); // Function ModelViewerPanel.ModelViewerPanel_C.SetWallpaperPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableModelViewerCamera(); // Function ModelViewerPanel.ModelViewerPanel_C.EnableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisableModelViewerCamera(); // Function ModelViewerPanel.ModelViewerPanel_C.DisableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIgnoreMouseWheel(bool InIgnoreMouseWheel); // Function ModelViewerPanel.ModelViewerPanel_C.SetIgnoreMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideModel(); // Function ModelViewerPanel.ModelViewerPanel_C.HideModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Legacy Popup Changed(struct UMenuStackEntry* Entry); // Function ModelViewerPanel.ModelViewerPanel_C.Handle Legacy Popup Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Legacy Menu Changed(struct UMenuStackEntry* Entry); // Function ModelViewerPanel.ModelViewerPanel_C.Handle Legacy Menu Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh PCMenu Panel Visibility(); // Function ModelViewerPanel.ModelViewerPanel_C.Refresh PCMenu Panel Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsMelee(struct UEquippableSkinHandle* Skin Handle, bool& IsMelee); // Function ModelViewerPanel.ModelViewerPanel_C.IsMelee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Separate Model Viewer Equippabless(bool& SeparateModelViewerEquippables); // Function ModelViewerPanel.ModelViewerPanel_C.Separate Model Viewer Equippabless // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Clean Model Viewer Equippables(); // Function ModelViewerPanel.ModelViewerPanel_C.Clean Model Viewer Equippables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Up Model Viewer Equippables(); // Function ModelViewerPanel.ModelViewerPanel_C.Set Up Model Viewer Equippables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Model Viewer Equippables(struct AModelViewer_Equipables_C*& ModelViewer); // Function ModelViewerPanel.ModelViewerPanel_C.Get Model Viewer Equippables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleContainerActiveStateChanged(bool NewValue); // Function ModelViewerPanel.ModelViewerPanel_C.HandleContainerActiveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On None Spray Loaded(struct USprayHandle* SprayHandle); // Function ModelViewerPanel.ModelViewerPanel_C.On None Spray Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToScreenEvents(bool Bind); // Function ModelViewerPanel.ModelViewerPanel_C.BindToScreenEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReleaseRenderTarget(); // Function ModelViewerPanel.ModelViewerPanel_C.ReleaseRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void VisibilityWatchdog(); // Function ModelViewerPanel.ModelViewerPanel_C.VisibilityWatchdog // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowModel(); // Function ModelViewerPanel.ModelViewerPanel_C.ShowModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set FOV Immediate(double FOV); // Function ModelViewerPanel.ModelViewerPanel_C.Set FOV Immediate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGunBuddyDefaultEquippableSkinLoded(struct UEquippableSkinHandle* EquippableSkinHandle); // Function ModelViewerPanel.ModelViewerPanel_C.OnGunBuddyDefaultEquippableSkinLoded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetGunBuddyDefaultSkin(); // Function ModelViewerPanel.ModelViewerPanel_C.GetGunBuddyDefaultSkin // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Rotate and Pan Mouse(bool& Not Handled); // Function ModelViewerPanel.ModelViewerPanel_C.Handle Rotate and Pan Mouse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Rotate and Zoom Gamepad(); // Function ModelViewerPanel.ModelViewerPanel_C.Handle Rotate and Zoom Gamepad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreviewTotem(struct UTotemHandle* TotemHandle); // Function ModelViewerPanel.ModelViewerPanel_C.PreviewTotem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FSlateBrush Get_WeaponGlitchImage_Brush(); // Function ModelViewerPanel.ModelViewerPanel_C.Get_WeaponGlitchImage_Brush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitRenderTarget(); // Function ModelViewerPanel.ModelViewerPanel_C.InitRenderTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreviewJuiceBox(struct UJuiceBoxDataAsset* JuiceBoxDataAsset); // Function ModelViewerPanel.ModelViewerPanel_C.PreviewJuiceBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearAndDisableModelViewerCamera(bool Clear scene); // Function ModelViewerPanel.ModelViewerPanel_C.ClearAndDisableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowWeapon(); // Function ModelViewerPanel.ModelViewerPanel_C.ShowWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowLoadingWeapon(); // Function ModelViewerPanel.ModelViewerPanel_C.ShowLoadingWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreviewSpray(struct USprayHandle* Spray Handle); // Function ModelViewerPanel.ModelViewerPanel_C.PreviewSpray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ModelViewerPanel.ModelViewerPanel_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ModelViewerPanel.ModelViewerPanel_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PanModel(); // Function ModelViewerPanel.ModelViewerPanel_C.PanModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Rotation Pan Zoom(); // Function ModelViewerPanel.ModelViewerPanel_C.Update Rotation Pan Zoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FSlateBrush Get_WeaponImage_Brush_1(); // Function ModelViewerPanel.ModelViewerPanel_C.Get_WeaponImage_Brush_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void RotateModel(); // Function ModelViewerPanel.ModelViewerPanel_C.RotateModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Preview None(); // Function ModelViewerPanel.ModelViewerPanel_C.Preview None // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update FOV Offset Deferred(); // Function ModelViewerPanel.ModelViewerPanel_C.Update FOV Offset Deferred // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreviewBuddy(struct UEquippableCharmLevelDataAsset* CharmAsset); // Function ModelViewerPanel.ModelViewerPanel_C.PreviewBuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreviewGunBuddy(struct UEquippableCharmHandle* Charm); // Function ModelViewerPanel.ModelViewerPanel_C.PreviewGunBuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ModelViewerPanel.ModelViewerPanel_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ModelViewerPanel.ModelViewerPanel_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreviewSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle* Chroma, struct UEquippableCharmHandle* Charm, bool Focus Gunbuddy, int32_t LevelOverride, bool ShowWallpaper, bool GunbuddyUpdateOnly); // Function ModelViewerPanel.ModelViewerPanel_C.PreviewSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ModelViewerPanel.ModelViewerPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function ModelViewerPanel.ModelViewerPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ModelViewerPanel.ModelViewerPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnLoadingComplete(); // Function ModelViewerPanel.ModelViewerPanel_C.OnLoadingComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function ModelViewerPanel.ModelViewerPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void LoadWallpaper(); // Function ModelViewerPanel.ModelViewerPanel_C.LoadWallpaper // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSkinHandleLoaded(struct UEquippableSkinHandle* EquippableSkinHandle); // Function ModelViewerPanel.ModelViewerPanel_C.OnSkinHandleLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ModelViewerPanel.ModelViewerPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ModelViewerPanel.ModelViewerPanel_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ModelViewerPanel(int32_t EntryPoint); // Function ModelViewerPanel.ModelViewerPanel_C.ExecuteUbergraph_ModelViewerPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

