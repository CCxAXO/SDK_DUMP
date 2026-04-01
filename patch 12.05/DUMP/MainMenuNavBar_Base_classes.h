// WidgetBlueprintGeneratedClass MainMenuNavBar_Base.MainMenuNavBar_Base_C
// Size: 0x508 (Inherited: 0x478)
struct UMainMenuNavBar_Base_C : UCommonActivatableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct TMap<enum class EAresMainMenuTopNavigationState, struct FAresMainMenuNavBarData> NavBarStateData; // 0x480(0x50)
	struct FAresMainMenuNavBarData DefaultNavBarData; // 0x4d0(0x28)
	struct FMulticastInlineDelegate OnHomeButtonClicked; // 0x4f8(0x10)

	void OnTopNavBarMenuChanged(struct TScriptInterface<INavBarMenu> TopMenu); // Function MainMenuNavBar_Base.MainMenuNavBar_Base_C.OnTopNavBarMenuChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RequestCloseTopMenu(bool& MenuWasClosed); // Function MainMenuNavBar_Base.MainMenuNavBar_Base_C.RequestCloseTopMenu // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateViewForNavBarData(struct FAresMainMenuNavBarData InNavBarData); // Function MainMenuNavBar_Base.MainMenuNavBar_Base_C.UpdateViewForNavBarData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MainMenuNavBar_Base.MainMenuNavBar_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnNavigationStateChanged(); // Function MainMenuNavBar_Base.MainMenuNavBar_Base_C.OnNavigationStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MainMenuNavBar_Base(int32_t EntryPoint); // Function MainMenuNavBar_Base.MainMenuNavBar_Base_C.ExecuteUbergraph_MainMenuNavBar_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnHomeButtonClicked__DelegateSignature(); // Function MainMenuNavBar_Base.MainMenuNavBar_Base_C.OnHomeButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

