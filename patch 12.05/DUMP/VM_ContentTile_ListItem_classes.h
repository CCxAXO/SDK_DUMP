// BlueprintGeneratedClass VM_ContentTile_ListItem.VM_ContentTile_ListItem_C
// Size: 0x1f0 (Inherited: 0x90)
struct UVM_ContentTile_ListItem_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool IsActive; // 0x98(0x01)
	bool IsEnabled; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FText OptionName; // 0xa0(0x18)
	struct FText OptionDescription; // 0xb8(0x18)
	struct FText OptionDescription_Disabled; // 0xd0(0x18)
	struct FText OptionFooter; // 0xe8(0x18)
	struct UTexture* OptionBackground; // 0x100(0x08)
	struct UTexture* OptionIcon; // 0x108(0x08)
	struct UBP_ContentTileTall_ListItem_C* ContentDataModel; // 0x110(0x08)
	struct FString AssetPath; // 0x118(0x10)
	struct FString AssetID; // 0x128(0x10)
	struct FMulticastInlineDelegate OnIsActiveChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnIsEnabledChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnOptionNameChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnOptionDescriptionChanged; // 0x168(0x10)
	struct FMulticastInlineDelegate OnOptionDisabledDescriptionChanged; // 0x178(0x10)
	struct FMulticastInlineDelegate OnOptionFooterChanged; // 0x188(0x10)
	struct FMulticastInlineDelegate OnOptionBackgroundChanged; // 0x198(0x10)
	struct FMulticastInlineDelegate OnOptionIconChanged; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnAssetPathChanged; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnAssetIDChanged; // 0x1c8(0x10)
	bool Invalidate; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct FMulticastInlineDelegate OnInvalidateChanged; // 0x1e0(0x10)

	void GetIsEnabled(bool& Value); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.GetIsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetAssetId(struct FString& Value); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.GetAssetId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetupInitialValues(); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.SetupInitialValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelInvalidateChanged(bool NewInvalidate); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelInvalidateChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelAssetIdChanged(struct FString NewAssetID); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelAssetIdChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelAssetPathChanged(struct FString NewAssetPath); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelAssetPathChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelOptionIconChanged(struct UTexture* NewOptionIcon); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelOptionIconChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelBackgroundTextureChanged(struct UTexture* NewOptionBackground); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelBackgroundTextureChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelOptionFooterChanged(struct FText NewOptionFooter); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelOptionFooterChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelOptionDisabledDescriptionChanged(struct FText NewLockedDescription); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelOptionDisabledDescriptionChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelOptionDescriptionChanged(struct FText NewOptionDescription); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelOptionDescriptionChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelOptionNameChanged(struct FText NewOptionName); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelOptionNameChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelIsEnabledChanged(bool NewIsEnabled); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelIsEnabledChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Internal_OnModelIsActiveChanged(bool NewActiveState); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Internal_OnModelIsActiveChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToDataModel(bool Bind); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.BindToDataModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UBP_ContentTileTall_ListItem_C* Content Data); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContentTile_ListItem(int32_t EntryPoint); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.ExecuteUbergraph_VM_ContentTile_ListItem // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnInvalidateChanged__DelegateSignature(bool NewInvalidate); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnInvalidateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAssetIDChanged__DelegateSignature(struct FString NewAssetID); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnAssetIDChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAssetPathChanged__DelegateSignature(struct FString NewAssetPath); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnAssetPathChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOptionIconChanged__DelegateSignature(struct UTexture* NewOptionIcon); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnOptionIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOptionBackgroundChanged__DelegateSignature(struct UTexture* NewOptionBackground); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnOptionBackgroundChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOptionFooterChanged__DelegateSignature(struct FText NewOptionFooter); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnOptionFooterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOptionDisabledDescriptionChanged__DelegateSignature(struct FText NewLockedDescription); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnOptionDisabledDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOptionDescriptionChanged__DelegateSignature(struct FText NewOptionDescription); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnOptionDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOptionNameChanged__DelegateSignature(struct FText NewOptionName); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnOptionNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEnabledChanged__DelegateSignature(bool NewIsEnabled); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnIsEnabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsActiveChanged__DelegateSignature(bool NewActiveState); // Function VM_ContentTile_ListItem.VM_ContentTile_ListItem_C.OnIsActiveChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

