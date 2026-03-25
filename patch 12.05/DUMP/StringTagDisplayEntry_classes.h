// WidgetBlueprintGeneratedClass StringTagDisplayEntry.StringTagDisplayEntry_C
// Size: 0x370 (Inherited: 0x358)
struct UStringTagDisplayEntry_C : UListItemDisplayEntryBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UButton* RemoveButton; // 0x360(0x08)
	struct UAresCommonText* StringTag; // 0x368(0x08)

	void SetListItemData(struct FWildcard& NewValue); // Function StringTagDisplayEntry.StringTagDisplayEntry_C.SetListItemData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function StringTagDisplayEntry.StringTagDisplayEntry_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_StringTagDisplayEntry(int32_t EntryPoint); // Function StringTagDisplayEntry.StringTagDisplayEntry_C.ExecuteUbergraph_StringTagDisplayEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

