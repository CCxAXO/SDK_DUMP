// WidgetBlueprintGeneratedClass WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C
// Size: 0x410 (Inherited: 0x3e0)
struct UWBP_Panel_Breadcrumbs_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UScaleBox* ContainingScreenBox; // 0x3e8(0x08)
	struct UAresCommonText* ContainingScreenLabel; // 0x3f0(0x08)
	struct UAresCommonText* CurrentScreenLabel; // 0x3f8(0x08)
	struct UImage* Icon; // 0x400(0x08)
	struct UVM_NavigationBreadcrumbs_C* BreadcrumbViewmodel; // 0x408(0x08)

	void UpdateDisplay(); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.UpdateDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindViewModel(struct UVM_NavigationBreadcrumbs_C*& ViewModel, bool Bind); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.BindViewModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetViewModel(struct UVM_NavigationBreadcrumbs_C* BreadcrumbViewmodel); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModel(); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.MakeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetParentScreenText(struct FText InText); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.SetParentScreenText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentScreenText(struct FText InText); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.SetCurrentScreenText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Breadcrumbs(int32_t EntryPoint); // Function WBP_Panel_Breadcrumbs.WBP_Panel_Breadcrumbs_C.ExecuteUbergraph_WBP_Panel_Breadcrumbs // (Final|UbergraphFunction) // @ game+0x1af5410
};

