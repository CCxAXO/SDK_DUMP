// WidgetBlueprintGeneratedClass WBP_UI_Icon_KillStack.WBP_UI_Icon_KillStack_C
// Size: 0x380 (Inherited: 0x318)
struct UWBP_UI_Icon_KillStack_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* IMG_Kill2; // 0x320(0x08)
	struct UImage* IMG_Kill3; // 0x328(0x08)
	struct UImage* IMG_Kill4; // 0x330(0x08)
	struct UImage* IMG_Kill5; // 0x338(0x08)
	struct UImage* IMG_Xcross; // 0x340(0x08)
	struct UImage* IMG_Xcross_2; // 0x348(0x08)
	struct UOverlay* O_X; // 0x350(0x08)
	int32_t KillCount; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct TArray<struct UImage*> A_AdditionalKills; // 0x360(0x10)
	struct FLinearColor IconColor; // 0x370(0x10)

	void SetKillColor(); // Function WBP_UI_Icon_KillStack.WBP_UI_Icon_KillStack_C.SetKillColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetKillsDisplayed(int32_t KillCounter); // Function WBP_UI_Icon_KillStack.WBP_UI_Icon_KillStack_C.SetKillsDisplayed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_UI_Icon_KillStack.WBP_UI_Icon_KillStack_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_UI_Icon_KillStack(int32_t EntryPoint); // Function WBP_UI_Icon_KillStack.WBP_UI_Icon_KillStack_C.ExecuteUbergraph_WBP_UI_Icon_KillStack // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

