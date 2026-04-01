// WidgetBlueprintGeneratedClass WBP_GenericListItem.WBP_GenericListItem_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_GenericListItem_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* BulletPoint; // 0x3e8(0x08)
	struct UAresCommonText* ListItemText; // 0x3f0(0x08)
	struct FText EntryText; // 0x3f8(0x18)
	struct UCommonTextStyle* TextStyle; // 0x410(0x08)
	struct UTexture2D* BulletpointIcon; // 0x418(0x08)

	void Set Item Text(struct FText Text); // Function WBP_GenericListItem.WBP_GenericListItem_C.Set Item Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_GenericListItem.WBP_GenericListItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_GenericListItem(int32_t EntryPoint); // Function WBP_GenericListItem.WBP_GenericListItem_C.ExecuteUbergraph_WBP_GenericListItem // (Final|UbergraphFunction) // @ game+0x1af5410
};

