// WidgetBlueprintGeneratedClass WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C
// Size: 0x3f1 (Inherited: 0x3e0)
struct UWBP_View_EquippableHUDElement_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVM_EquippableHUDElement_C* View Model; // 0x3e8(0x08)
	enum class EAresItemSlot ItemSlot; // 0x3f0(0x01)

	void RefreshView(); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.RefreshView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToViewModelEvents(bool Bind); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.BindToViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActionNameChanged(struct FName ActionName); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.OnActionNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateFadeAnimation(bool Fade); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.UpdateFadeAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnWidgetVisibilityChanged(enum class ESlateVisibility WidgetVisibility); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.OnWidgetVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippableInfoChanged(struct FEquippableHUDInfo EquippableInfo); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.OnEquippableInfoChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowInputPrompt(bool ShowInputPrompt); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.ShowInputPrompt // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.SetHUDModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippedStateChanged(bool Equipped); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.OnEquippedStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_View_EquippableHUDElement_Base(int32_t EntryPoint); // Function WBP_View_EquippableHUDElement_Base.WBP_View_EquippableHUDElement_Base_C.ExecuteUbergraph_WBP_View_EquippableHUDElement_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

