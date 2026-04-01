// WidgetBlueprintGeneratedClass WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C
// Size: 0x338 (Inherited: 0x318)
struct UWBP_Panel_PlayerEXPBoost_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_Icon; // 0x320(0x08)
	struct UXPBoostsIndicator_C* XPBoostsIndicator; // 0x328(0x08)
	struct UEXPBoostViewModel* EXPBoostVM; // 0x330(0x08)

	void AdjustBoostVisibility(bool IsAnyEXPBoostActive); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.AdjustBoostVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindViewModels(bool Bind); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.BindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEXPBoostViewModel(bool Bind); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.BindEXPBoostViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsAnyEXPBoostActiveChanged(bool AnyEXPBoostActive); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.OnIsAnyEXPBoostActiveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeEXPBoostViewModel(); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.MakeEXPBoostViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModels(); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PlayerEXPBoost(int32_t EntryPoint); // Function WBP_Panel_PlayerEXPBoost.WBP_Panel_PlayerEXPBoost_C.ExecuteUbergraph_WBP_Panel_PlayerEXPBoost // (Final|UbergraphFunction) // @ game+0x1af5410
};

