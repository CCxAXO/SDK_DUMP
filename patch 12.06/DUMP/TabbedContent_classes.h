// WidgetBlueprintGeneratedClass TabbedContent.TabbedContent_C
// Size: 0x3f9 (Inherited: 0x320)
struct UTabbedContent_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UGridPanel* LayoutGridPanel; // 0x328(0x08)
	struct UGridPanel* TabButtons; // 0x330(0x08)
	struct UOverlay* TabButtonsContainer; // 0x338(0x08)
	struct UCanvasPanel* TabContentContainer; // 0x340(0x08)
	struct UImage* Underline; // 0x348(0x08)
	struct UUserWidget* ActiveTabContent; // 0x350(0x08)
	struct UTabButtonBase_C* ActiveTabButton; // 0x358(0x08)
	struct TArray<struct FTabDefinition> TabsConfig; // 0x360(0x10)
	struct TMap<struct UTabButtonBase_C*, struct FTabDefinition> TabButtonsToDefinitions; // 0x370(0x50)
	struct UTabButtonBase_C* TabButtonWidgetClass; // 0x3c0(0x08)
	double TabButtonsSpacing; // 0x3c8(0x08)
	struct FMargin TabContentSpacing; // 0x3d0(0x10)
	enum class EHorizontalAlignment TabButtonsHorizontalAlignment; // 0x3e0(0x01)
	enum class EVerticalAlignment TabButtonsVerticalAlignment; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)
	struct FMulticastInlineDelegate OnTabChanged; // 0x3e8(0x10)
	bool Horizontal; // 0x3f8(0x01)

	void Should Use Converged Override Widget(enum class EStorefrontType UseOverrideWidgetConfigKey, bool& ShouldUseOverrideWidget); // Function TabbedContent.TabbedContent_C.Should Use Converged Override Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Get Tab at Index(int32_t Index, struct UTabButtonBase_C*& Tab); // Function TabbedContent.TabbedContent_C.Get Tab at Index // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReplaceTelemetryTabButtonWidgetClass(); // Function TabbedContent.TabbedContent_C.ReplaceTelemetryTabButtonWidgetClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemoveTab(struct UUserWidget* TabWidget); // Function TabbedContent.TabbedContent_C.RemoveTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTab(struct UUserWidget* TabWidgetClass, struct UTabButtonBase_C*& Tab); // Function TabbedContent.TabbedContent_C.GetTab // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ClearTabs(); // Function TabbedContent.TabbedContent_C.ClearTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleTabButtonClicked(struct UTabButtonBase_C* TabButton); // Function TabbedContent.TabbedContent_C.HandleTabButtonClicked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetActiveTab(struct UTabButtonBase_C* TabButton, bool CloseOpenMenus, struct UUserWidget*& TabContent); // Function TabbedContent.TabbedContent_C.SetActiveTab // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddTab(struct FTabDefinition TabDefinition, bool IsLast, struct UTabButtonBase_C*& TabButton); // Function TabbedContent.TabbedContent_C.AddTab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function TabbedContent.TabbedContent_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function TabbedContent.TabbedContent_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TabbedContent(int32_t EntryPoint); // Function TabbedContent.TabbedContent_C.ExecuteUbergraph_TabbedContent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnTabChanged__DelegateSignature(struct UTabButtonBase_C* TabButton); // Function TabbedContent.TabbedContent_C.OnTabChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

