// WidgetBlueprintGeneratedClass WBP_View_WeaponColumn.WBP_View_WeaponColumn_C
// Size: 0x4c0 (Inherited: 0x408)
struct UWBP_View_WeaponColumn_C : UAresCommonWidgetPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct TArray<struct FArsenalWeaponCategory> WeaponData; // 0x410(0x10)
	struct UCommonTextBlock* TextWidgetClass; // 0x420(0x08)
	struct UCommonTextStyle* TextStyle; // 0x428(0x08)
	struct UCommonButtonStyle* WeaponItemStyle; // 0x430(0x08)
	struct FMargin CategorySpacePadding; // 0x438(0x10)
	struct FMargin ItemPadding; // 0x448(0x10)
	struct FMulticastInlineDelegate ColumnObtainedFocus; // 0x458(0x10)
	bool bLastItemIsSelected; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct TMap<struct UEquippableDataAsset*, struct UWBP_Panel_CollectionsWeaponSlot_C*> WeaponSlots; // 0x470(0x50)

	void GetFocusedEntry(struct UWBP_Panel_CollectionsWeaponSlot_C*& Entry); // Function WBP_View_WeaponColumn.WBP_View_WeaponColumn_C.GetFocusedEntry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_View_WeaponColumn.WBP_View_WeaponColumn_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetItemSlot(struct UObject* Object, bool IsWeaponSlot); // Function WBP_View_WeaponColumn.WBP_View_WeaponColumn_C.SetItemSlot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateEntries(); // Function WBP_View_WeaponColumn.WBP_View_WeaponColumn_C.CreateEntries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_View_WeaponColumn.WBP_View_WeaponColumn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnChildWidgetFocusChanged(struct UUserWidget* ChildWidget); // Function WBP_View_WeaponColumn.WBP_View_WeaponColumn_C.BP_OnChildWidgetFocusChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_View_WeaponColumn(int32_t EntryPoint); // Function WBP_View_WeaponColumn.WBP_View_WeaponColumn_C.ExecuteUbergraph_WBP_View_WeaponColumn // (Final|UbergraphFunction) // @ game+0x1af5410
	void ColumnObtainedFocus__DelegateSignature(struct UWBP_View_WeaponColumn_C* Column); // Function WBP_View_WeaponColumn.WBP_View_WeaponColumn_C.ColumnObtainedFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

