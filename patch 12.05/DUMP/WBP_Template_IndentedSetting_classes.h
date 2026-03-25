// WidgetBlueprintGeneratedClass WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C
// Size: 0x425 (Inherited: 0x3f8)
struct UWBP_Template_IndentedSetting_C : UIndentedSettingCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UImage* Img_Divider; // 0x400(0x08)
	struct UNamedSlot* NS_SettingWidget; // 0x408(0x08)
	struct UScaleBox* ScaleBox_1; // 0x410(0x08)
	double IndentPixels; // 0x418(0x08)
	int32_t IndentLevel; // 0x420(0x04)
	enum class BPE_SettingIndentionAutomation AutomationType; // 0x424(0x01)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSelectedStateChanged(struct UObject* ListObjectData, bool bIsSelected); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.OnListItemObjectSelectedStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIndentLevel(int32_t IndentLevel); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.SetIndentLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DetermineIndentLevel(int32_t& IndentLevel); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.DetermineIndentLevel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void DetermineIndentLevelFromDataAsset(int32_t& IndentLevel); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.DetermineIndentLevelFromDataAsset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Template_IndentedSetting(int32_t EntryPoint); // Function WBP_Template_IndentedSetting.WBP_Template_IndentedSetting_C.ExecuteUbergraph_WBP_Template_IndentedSetting // (Final|UbergraphFunction) // @ game+0x1af5410
};

