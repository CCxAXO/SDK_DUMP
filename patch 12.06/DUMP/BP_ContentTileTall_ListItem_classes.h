// BlueprintGeneratedClass BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C
// Size: 0x180 (Inherited: 0x30)
struct UBP_ContentTileTall_ListItem_C : UObject {
	bool IsActive; // 0x30(0x01)
	bool IsEnabled; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FText OptionName; // 0x38(0x18)
	struct FText OptionDescription; // 0x50(0x18)
	struct FText DisabledDescription; // 0x68(0x18)
	struct FText OptionFooter; // 0x80(0x18)
	struct UTexture* BackgroundTexture; // 0x98(0x08)
	struct UTexture* OptionIcon; // 0xa0(0x08)
	struct FString AssetID; // 0xa8(0x10)
	struct FString AssetPath; // 0xb8(0x10)
	bool Invalidate; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FMulticastInlineDelegate OnOptionNameChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnOptionFooterChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnOptionDescriptionChanged; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnOptionIconChanged; // 0x100(0x10)
	struct FMulticastInlineDelegate OnDisabledDescriptionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnBackgroundTextureChanged; // 0x120(0x10)
	struct FMulticastInlineDelegate OnAssetIDChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnIsActiveChanged; // 0x140(0x10)
	struct FMulticastInlineDelegate OnAssetPathChanged; // 0x150(0x10)
	struct FMulticastInlineDelegate OnIsEnabledChanged; // 0x160(0x10)
	struct FMulticastInlineDelegate OnInvalidateChanged; // 0x170(0x10)

	void GetInvalidate(bool& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetInvalidate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetAssetID(struct FString& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetAssetID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetAssetPath(struct FString& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetAssetPath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetIsEnabled(bool& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetIsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetIsActive(bool& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetIsActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetBackgroundTexture(struct UTexture*& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetBackgroundTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetOptionIcon(struct UTexture*& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetOptionIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetOptionFooter(struct FText& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetOptionFooter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetOptionDescription_Disabled(struct FText& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetOptionDescription_Disabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetOptionDescription(struct FText& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetOptionDescription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetOptionName(struct FText& Value); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.GetOptionName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetAssetID(struct FString NewAssetID); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetAssetID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAssetPath(struct FString NewAssetPath); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetAssetPath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInvalidate(bool NewInvalidate); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetInvalidate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsEnabled(bool NewIsEnabled); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsActive(bool NewActiveState); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOptionIcon(struct UTexture* NewOptionIcon); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetOptionIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundTexture(struct UTexture* NewOptionIcon); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetBackgroundTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOptionFooterWithPrefix(struct FText NewOptionFooter, struct FString Prefix); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetOptionFooterWithPrefix // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOptionFooter(struct FText NewOptionFooter); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetOptionFooter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDisabledDescription(struct FText NewLockedDescription); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetDisabledDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOptionDescription(struct FText NewOptionFooter); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetOptionDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOptionName(struct FText NewOptionName); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetOptionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAllValues(struct FText Name, struct FText Description, struct FText Disbaled Description, struct FText Footer, struct UTexture* Background, struct UTexture* Icon, bool Active, bool Enabled, bool Invalidate, struct FString Asset Path, struct FString Asset Id); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.SetAllValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInvalidateChanged__DelegateSignature(bool NewInvalidate); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnInvalidateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsEnabledChanged__DelegateSignature(bool NewIsEnabled); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnIsEnabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAssetPathChanged__DelegateSignature(struct FString NewAssetPath); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnAssetPathChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsActiveChanged__DelegateSignature(bool NewActiveState); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnIsActiveChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAssetIDChanged__DelegateSignature(struct FString NewAssetID); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnAssetIDChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBackgroundTextureChanged__DelegateSignature(struct UTexture* NewOptionIcon); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnBackgroundTextureChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDisabledDescriptionChanged__DelegateSignature(struct FText NewLockedDescription); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnDisabledDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOptionIconChanged__DelegateSignature(struct UTexture* NewOptionIcon); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnOptionIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOptionDescriptionChanged__DelegateSignature(struct FText NewOptionDescription); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnOptionDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOptionFooterChanged__DelegateSignature(struct FText NewOptionFooter); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnOptionFooterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOptionNameChanged__DelegateSignature(struct FText NewOptionName); // Function BP_ContentTileTall_ListItem.BP_ContentTileTall_ListItem_C.OnOptionNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

