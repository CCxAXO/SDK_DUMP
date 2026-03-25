// WidgetBlueprintGeneratedClass BrowserModal.BrowserModal_C
// Size: 0x340 (Inherited: 0x318)
struct UBrowserModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWebBrowser* Browser; // 0x320(0x08)
	struct ULargeModal_C* LargeModal; // 0x328(0x08)
	struct FString InitialURL; // 0x330(0x10)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function BrowserModal.BrowserModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function BrowserModal.BrowserModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BrowserModal.BrowserModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PopupRequested(struct FString URL, struct FString Frame); // Function BrowserModal.BrowserModal_C.PopupRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BrowserModal(int32_t EntryPoint); // Function BrowserModal.BrowserModal_C.ExecuteUbergraph_BrowserModal // (Final|UbergraphFunction) // @ game+0x1af5410
};

