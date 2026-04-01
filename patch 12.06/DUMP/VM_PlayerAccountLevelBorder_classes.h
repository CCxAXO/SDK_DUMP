// BlueprintGeneratedClass VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C
// Size: 0xf0 (Inherited: 0x98)
struct UVM_PlayerAccountLevelBorder_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FMulticastInlineDelegate OnLevelBorderTextureChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnAccountLevelChanged; // 0xb0(0x10)
	int32_t AccountLevel; // 0xc0(0x04)
	bool bShowAccountLevel; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct UTexture2D* LevelBorderTexture; // 0xc8(0x08)
	enum class EAresLevelBorderAppearance BorderAppearance; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct ULevelBorderDataAsset* LevelBorderDataAsset; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnShowAccountLevelChanged; // 0xe0(0x10)

	void GetAccountLevel(int32_t& AccountLevel); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.GetAccountLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetShowAccountLevel(bool& bShowAccountLevel); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.GetShowAccountLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetShowAcountLevel(bool bNewShowAccountLevel); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.SetShowAcountLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateShowAccountLevel(); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.UpdateShowAccountLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLevelBorderTexture(struct UTexture2D* NewLevelBorderTexture); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.SetLevelBorderTexture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LoadLevelBorderTexture(); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.LoadLevelBorderTexture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAccountLevel(int32_t NewAccountLevel); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.SetAccountLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAccountLevel(); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.UpdateAccountLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetLevelBorderDataAsset(struct ULevelBorderDataAsset*& LevelBorderUIData); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.GetLevelBorderDataAsset // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateLevelBorderTexture(); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.UpdateLevelBorderTexture // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBorderAppearance(enum class EAresLevelBorderAppearance BorderAppearance); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.SetBorderAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlatformPlayerEvent(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.HandlePlatformPlayerEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLevelBorderLoaded(struct ULevelBorderHandle* LevelBorderHandle); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.HandleLevelBorderLoaded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLevelBorderState(); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.UpdateLevelBorderState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetLevelBorderTexture(struct UTexture2D*& LevelBorderTexture); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.GetLevelBorderTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void RefreshAllData(); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PlayerAccountLevelBorder(int32_t EntryPoint); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.ExecuteUbergraph_VM_PlayerAccountLevelBorder // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnShowAccountLevelChanged__DelegateSignature(bool bShowAccountLevel); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.OnShowAccountLevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLevelBorderTextureChanged__DelegateSignature(struct UTexture2D* LevelBorderTexture); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.OnLevelBorderTextureChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAccountLevelChanged__DelegateSignature(int32_t AccountLevel); // Function VM_PlayerAccountLevelBorder.VM_PlayerAccountLevelBorder_C.OnAccountLevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

