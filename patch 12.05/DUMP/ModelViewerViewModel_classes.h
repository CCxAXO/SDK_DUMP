// BlueprintGeneratedClass ModelViewerViewModel.ModelViewerViewModel_C
// Size: 0xf9 (Inherited: 0x90)
struct UModelViewerViewModel_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnModelViewerEquippablesChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate OnIsLoadingChanged; // 0xa8(0x10)
	int32_t Gun Buddy Default Level; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UEquippableCharmHandle* Gun Buddy Temp; // 0xc0(0x08)
	struct UEquippableSkinChromaHandle* Gun Buddy Default Skin Chroma Handle; // 0xc8(0x08)
	struct UEquippableSkinHandle* Gun Buddy Default Skin Handle; // 0xd0(0x08)
	struct USprayDataAsset* Default None Spray; // 0xd8(0x08)
	struct USprayHandle* None Spray Handle; // 0xe0(0x08)
	struct UTextureRenderTarget2d* Texture Target; // 0xe8(0x08)
	struct AModelViewer_Equipables_C* ModelViewerEquippables; // 0xf0(0x08)
	bool Is Loading; // 0xf8(0x01)

	void Set Render Texture Target(struct UTextureRenderTarget2d* Texture Target); // Function ModelViewerViewModel.ModelViewerViewModel_C.Set Render Texture Target // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function ModelViewerViewModel.ModelViewerViewModel_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Deactivation(); // Function ModelViewerViewModel.ModelViewerViewModel_C.Handle Deactivation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Activation(); // Function ModelViewerViewModel.ModelViewerViewModel_C.Handle Activation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Zoom Camera(double Zoom); // Function ModelViewerViewModel.ModelViewerViewModel_C.Zoom Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Rotate Model(double X (Roll), double Z (Yaw), bool bTeleport); // Function ModelViewerViewModel.ModelViewerViewModel_C.Rotate Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Pan Model(double Pan Increment); // Function ModelViewerViewModel.ModelViewerViewModel_C.Pan Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update FOV Offset Deferred(double FOV Offset Deferred); // Function ModelViewerViewModel.ModelViewerViewModel_C.Update FOV Offset Deferred // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Preview None(); // Function ModelViewerViewModel.ModelViewerViewModel_C.Preview None // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On None Spray Loaded(struct USprayHandle* SprayHandle); // Function ModelViewerViewModel.ModelViewerViewModel_C.On None Spray Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGunBuddyDefaultEquippableSkinLoded(struct UEquippableSkinHandle* EquippableSkinHandle); // Function ModelViewerViewModel.ModelViewerViewModel_C.OnGunBuddyDefaultEquippableSkinLoded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreviewTotem(struct UTotemHandle* TotemHandle); // Function ModelViewerViewModel.ModelViewerViewModel_C.PreviewTotem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreviewSpray(struct USprayHandle* Spray Handle); // Function ModelViewerViewModel.ModelViewerViewModel_C.PreviewSpray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreviewGunBuddy(struct UEquippableCharmHandle* Charm); // Function ModelViewerViewModel.ModelViewerViewModel_C.PreviewGunBuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreviewSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle* Chroma, struct UEquippableCharmHandle* Charm, bool Focus Gunbuddy, int32_t LevelOverride, bool GunbuddyUpdateOnly); // Function ModelViewerViewModel.ModelViewerViewModel_C.PreviewSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsMelee(struct UEquippableSkinHandle* Skin Handle, bool& IsMelee); // Function ModelViewerViewModel.ModelViewerViewModel_C.IsMelee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Get Skin Level Override(struct UEquippableSkinDataAsset* EquippableSkinDataAsset, int32_t Level Override, int32_t& Level To Preview); // Function ModelViewerViewModel.ModelViewerViewModel_C.Get Skin Level Override // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Get Gun Buddy Default Skin(); // Function ModelViewerViewModel.ModelViewerViewModel_C.Get Gun Buddy Default Skin // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Is Loading(bool In Is Loading); // Function ModelViewerViewModel.ModelViewerViewModel_C.Set Is Loading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize Model Viewer Equippables(); // Function ModelViewerViewModel.ModelViewerViewModel_C.Initialize Model Viewer Equippables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Model Visibility(bool bShouldShow); // Function ModelViewerViewModel.ModelViewerViewModel_C.Handle Model Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Loading Complete(); // Function ModelViewerViewModel.ModelViewerViewModel_C.Handle Loading Complete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function ModelViewerViewModel.ModelViewerViewModel_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function ModelViewerViewModel.ModelViewerViewModel_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function ModelViewerViewModel.ModelViewerViewModel_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function ModelViewerViewModel.ModelViewerViewModel_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ModelViewerViewModel(int32_t EntryPoint); // Function ModelViewerViewModel.ModelViewerViewModel_C.ExecuteUbergraph_ModelViewerViewModel // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsLoadingChanged__DelegateSignature(bool bIsLoading); // Function ModelViewerViewModel.ModelViewerViewModel_C.OnIsLoadingChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnModelViewerEquippablesChanged__DelegateSignature(struct AModelViewer_Equipables_C* ModelViewerEquippables); // Function ModelViewerViewModel.ModelViewerViewModel_C.OnModelViewerEquippablesChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

