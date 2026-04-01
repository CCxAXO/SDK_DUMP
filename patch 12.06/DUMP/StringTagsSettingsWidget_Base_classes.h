// WidgetBlueprintGeneratedClass StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C
// Size: 0x368 (Inherited: 0x320)
struct UStringTagsSettingsWidget_Base_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FText DisplayText; // 0x328(0x18)
	enum class EAresStringSettingName SettingName; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	int32_t MaxListSize; // 0x344(0x04)
	struct TScriptInterface<IAresStringListSettingModel> SettingModel; // 0x348(0x10)
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x358(0x10)

	struct TScriptInterface<IOrderedListModel> GetListModel(); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.GetListModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct TScriptInterface<IAresStringListSettingModel> GetSettingModel(); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.GetSettingModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void HandleStringListChanged(struct UObject* Source, struct FOrderedListModelChangeEventData& EventData); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.HandleStringListChanged // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSettingModel(struct TScriptInterface<IAresStringListSettingModel> NewValue); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.SetSettingModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetListModel(struct TScriptInterface<IOrderedListModel> ListModel); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.SetListModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemoveTag(struct FString Item); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.RemoveTag // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TagTextChanged(struct FText Text); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.TagTextChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowTagExistsError(bool ShowError); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.ShowTagExistsError // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStringTagEntryboxText(struct FText Text); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.SetStringTagEntryboxText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CommitTagText(struct FString TextCommitted, enum class EAddToStringSettingListResult& AddStringResult); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.CommitTagText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSettingDisplayNameText(struct FText DisplayNameText); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.SetSettingDisplayNameText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMaxListSizeErrorText(struct FText MaxListErrorText); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.SetMaxListSizeErrorText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHasReachedMaxListSize(bool HasExceededMaxListSize); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.SetHasReachedMaxListSize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTextEntryAvailability(); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.UpdateTextEntryAvailability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_StringTagsSettingsWidget_Base(int32_t EntryPoint); // Function StringTagsSettingsWidget_Base.StringTagsSettingsWidget_Base_C.ExecuteUbergraph_StringTagsSettingsWidget_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

