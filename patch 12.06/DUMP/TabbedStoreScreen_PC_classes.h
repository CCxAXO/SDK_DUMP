// WidgetBlueprintGeneratedClass TabbedStoreScreen_PC.TabbedStoreScreen_PC_C
// Size: 0x32e (Inherited: 0x318)
struct UTabbedStoreScreen_PC_C : UStoreScreen_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTabbedContent_C* TabbedContent; // 0x320(0x08)
	int32_t FeaturedTabIndex; // 0x328(0x04)
	bool EnteredFromLinkout; // 0x32c(0x01)
	bool ShouldReturnToEsportsHub; // 0x32d(0x01)

	void HandleNavStateChanged(); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.HandleNavStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleBackButtonClicked(); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.HandleBackButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToNavEvents(bool EnteredFromLinkout, bool BindToBackButton); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.BindToNavEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleBackButtonTriggered(); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.HandleBackButtonTriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetActiveTab(int32_t Index); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.SetActiveTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void DisplayBundleDetails(struct UBundleViewModel* BundleToDisplay); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.DisplayBundleDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayTab(int32_t TabIndex); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.DisplayTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TabbedStoreScreen_PC(int32_t EntryPoint); // Function TabbedStoreScreen_PC.TabbedStoreScreen_PC_C.ExecuteUbergraph_TabbedStoreScreen_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

