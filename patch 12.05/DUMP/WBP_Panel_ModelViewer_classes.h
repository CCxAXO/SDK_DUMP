// WidgetBlueprintGeneratedClass WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C
// Size: 0x4e9 (Inherited: 0x408)
struct UWBP_Panel_ModelViewer_C : UModelViewerPanelBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UImage* FinalImage; // 0x410(0x08)
	struct UImage* GlitchImage; // 0x418(0x08)
	struct UImage* Wallpaper; // 0x420(0x08)
	struct UModelViewerPanelViewModel* ModelViewerPanelVM; // 0x428(0x08)
	struct UMaterialInterface* BaseFinalImageMaterial; // 0x430(0x08)
	struct UMaterialInterface* BaseGlitchImageMaterial; // 0x438(0x08)
	struct UModelViewerViewModel_C* ModelViewerVM; // 0x440(0x08)
	struct UWeaponSkinViewModel* WeaponSkinVM; // 0x448(0x08)
	struct UGunbuddyViewModel* GunbuddyVM; // 0x450(0x08)
	struct USprayViewModel* SprayVM; // 0x458(0x08)
	struct UTotemViewModel* TotemVM; // 0x460(0x08)
	struct UAresScreenBase* Owning Ares Screen; // 0x468(0x08)
	double Gamepad Zoom Delta; // 0x470(0x08)
	bool Ignore Mouse Wheel; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> KnownTransparentPopups; // 0x480(0x10)
	bool Ignore Mouse Click; // 0x490(0x01)
	bool Show Equipped Gun Buddy; // 0x491(0x01)
	enum class EAresContentType PreviewType; // 0x492(0x01)
	char pad_493[0x5]; // 0x493(0x05)
	struct TSet<enum class EAresContentType> InitializedContext; // 0x498(0x50)
	bool Gamepad Interactive; // 0x4e8(0x01)

	void InitFromHandle(struct UBaseHandle* ContentHandle); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFOVOffsetDeferred(double FOV Offset Deferred); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.SetFOVOffsetDeferred // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetWallpaperPadding(struct FMargin InPadding); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.SetWallpaperPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetModelRotation(double X (Roll), double Z (Yaw)); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.SetModelRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIgnoreMouseRotation(bool InIgnoreMouseRotation); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.SetIgnoreMouseRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIgnoreMouseJitter(bool InIgnoreMouseJitter); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.SetIgnoreMouseJitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGamepadInteractive(bool Gamepad Interactive); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.SetGamepadInteractive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnableModelViewerCamera(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.EnableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisableModelViewerCamera(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.DisableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIgnoreMouseWheel(bool InIgnoreMouseWheel); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.SetIgnoreMouseWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideModel(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.HideModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize Content VM From Handle(struct UBaseHandle* Content Handle, enum class EAresContentType& Content Type); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Initialize Content VM From Handle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Ignore Mouse Click(bool Ignore Mouse Click); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Set Ignore Mouse Click // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Legacy Popup Changed(struct UMenuStackEntry* Entry); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Legacy Popup Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Legacy Menu Changed(struct UMenuStackEntry* Entry); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Legacy Menu Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset Content VMs(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Reset Content VMs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Container Activation Changed(bool Activated); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Container Activation Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle On Released(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle On Released // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Zoom Camera(float Zoom); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Zoom Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Wallpaper Texture Changed(struct UTexture2D* Wallpaper Texture); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Wallpaper Texture Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Ignore Mouse Jitter_1(bool Ignore Mouse Jitter); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Set Ignore Mouse Jitter_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Equippable Handle Loaded for Equipped Gun Buddy(struct UEquippableHandle* EquippableHandle); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.On Equippable Handle Loaded for Equipped Gun Buddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Equippable Charm Handle Changed(struct UEquippableCharmHandle* EquippableCharmHandle); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Equippable Charm Handle Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Skin Handles Changed(struct UEquippableSkinHandle* EquippableSkinHandle, struct UEquippableSkinLevelHandle* EquippableSkinLevelHandle, struct UEquippableSkinChromaHandle* EquippableSkinChromaHandle); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Skin Handles Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Toggle Wallpaper Widget(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Toggle Wallpaper Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Equippable Loading Changed(bool bIsLoading); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Equippable Loading Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Model Viewer Equippables Changed(struct AModelViewer_Equipables_C* ModelViewerEquippables); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Model Viewer Equippables Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Texture Render Target Changed(struct UTextureRenderTarget2d* TextureRenderTarget2d); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Handle Texture Render Target Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Show Content Wallpaper(bool NewShowWallpaper); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Set Show Content Wallpaper // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset Contexts(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Reset Contexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitContextFromHandle(struct UBaseHandle* ContentHandle); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.InitContextFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind for Viewing Change Events(bool Bind); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Bind for Viewing Change Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind to Preview Events(bool Bind); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Bind to Preview Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind to Screen Events(bool Bind); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Bind to Screen Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind Events(bool Bind); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Make Content View Models(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Make Content View Models // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init View Models(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Init View Models // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ModelViewer(int32_t EntryPoint); // Function WBP_Panel_ModelViewer.WBP_Panel_ModelViewer_C.ExecuteUbergraph_WBP_Panel_ModelViewer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

