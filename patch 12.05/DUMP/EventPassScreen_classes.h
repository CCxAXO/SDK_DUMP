// WidgetBlueprintGeneratedClass EventPassScreen.EventPassScreen_C
// Size: 0x370 (Inherited: 0x318)
struct UEventPassScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UContractDetails_C* ContractDetails; // 0x320(0x08)
	struct UExpirationTimer_C* ExpirationTimer; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image_2; // 0x338(0x08)
	struct UImage* Image_3; // 0x340(0x08)
	struct UImage* Image_4; // 0x348(0x08)
	struct UImage* Image_5; // 0x350(0x08)
	struct UImage* Image_218; // 0x358(0x08)
	struct ULargeModal_C* LargeModal; // 0x360(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x368(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function EventPassScreen.EventPassScreen_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function EventPassScreen.EventPassScreen_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EventPassScreen.EventPassScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EventPassScreen(int32_t EntryPoint); // Function EventPassScreen.EventPassScreen_C.ExecuteUbergraph_EventPassScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

