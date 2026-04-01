// WidgetBlueprintGeneratedClass ConferenceSelectOptions.ConferenceSelectOptions_C
// Size: 0x332 (Inherited: 0x318)
struct UConferenceSelectOptions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UScrollBox* ScrollBox_121; // 0x320(0x08)
	struct UConferenceSelectOptionsItem_C* SelectedConferenceOption; // 0x328(0x08)
	bool bShouldHideSuperZones; // 0x330(0x01)
	bool bSelectedFirstItem; // 0x331(0x01)

	void DetermineFirstSelectedItem(bool& Is Selected); // Function ConferenceSelectOptions.ConferenceSelectOptions_C.DetermineFirstSelectedItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetSelectedConference(struct FString& SelectedConference); // Function ConferenceSelectOptions.ConferenceSelectOptions_C.GetSelectedConference // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleConferenceSelected(struct UConferenceSelectOptionsItem_C* ConferenceSelectOption); // Function ConferenceSelectOptions.ConferenceSelectOptions_C.HandleConferenceSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateOptions(); // Function ConferenceSelectOptions.ConferenceSelectOptions_C.PopulateOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function ConferenceSelectOptions.ConferenceSelectOptions_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ConferenceSelectOptions(int32_t EntryPoint); // Function ConferenceSelectOptions.ConferenceSelectOptions_C.ExecuteUbergraph_ConferenceSelectOptions // (Final|UbergraphFunction) // @ game+0x1b42740
};

