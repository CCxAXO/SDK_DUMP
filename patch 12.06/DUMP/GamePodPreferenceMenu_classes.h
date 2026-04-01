// WidgetBlueprintGeneratedClass GamePodPreferenceMenu.GamePodPreferenceMenu_C
// Size: 0x398 (Inherited: 0x318)
struct UGamePodPreferenceMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresCommonText* ErrorMessageText; // 0x320(0x08)
	struct UGamePodPreferenceMenuItem_C* GamePodPreferenceMenuItem; // 0x328(0x08)
	struct UVerticalBox* MenuBox; // 0x330(0x08)
	struct UAresCommonText* Ping_Text; // 0x338(0x08)
	struct UAresCommonText* RegionText; // 0x340(0x08)
	struct UAresCommonText* SummaryText_Custom; // 0x348(0x08)
	struct UAresCommonText* SummaryText_Optimal; // 0x350(0x08)
	struct UHorizontalBox* WarningHBOX; // 0x358(0x08)
	struct UPartyModel* Model; // 0x360(0x08)
	struct UPartyViewController* View Controller; // 0x368(0x08)
	bool Is Editable; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FString Subject; // 0x378(0x10)
	struct FMulticastInlineDelegate OnMouseLeftMenu; // 0x388(0x10)

	void IsPremierGamePodSelected(struct FString GamePodID, bool& IsSelected); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.IsPremierGamePodSelected // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAction(); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.OnAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateMenu(); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.PopulateMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Preferred Game Pods Changed(struct FPreferredGamePodMap PreferredGamePods); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.On Preferred Game Pods Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPartyModel* Model, struct UPartyViewController* View Controller, bool Is Editable, struct FString Subject); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GamePodPreferenceMenu(int32_t EntryPoint); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.ExecuteUbergraph_GamePodPreferenceMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnMouseLeftMenu__DelegateSignature(); // Function GamePodPreferenceMenu.GamePodPreferenceMenu_C.OnMouseLeftMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

