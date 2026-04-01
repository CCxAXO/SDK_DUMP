// WidgetBlueprintGeneratedClass WBP_Template_OwnableContent.WBP_Template_OwnableContent_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Template_OwnableContent_C : UAresCommonUserWidget {
	struct UNamedSlot* ContentSlot; // 0x3e0(0x08)
	struct UImage* dark; // 0x3e8(0x08)
	struct UImage* Image_87; // 0x3f0(0x08)
	struct UOverlay* Lock; // 0x3f8(0x08)
	struct UImage* LockIcon; // 0x400(0x08)
	struct UOverlay* Owned; // 0x408(0x08)
	struct UImage* OwnedIcon; // 0x410(0x08)
	struct UWBP_Panel_FavoriteIndicator_C* WBP_Panel_FavoriteIndicator; // 0x418(0x08)

	void SetIsLocked(bool bInIsLocked); // Function WBP_Template_OwnableContent.WBP_Template_OwnableContent_C.SetIsLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsOwned(bool bInIsOwned); // Function WBP_Template_OwnableContent.WBP_Template_OwnableContent_C.SetIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

