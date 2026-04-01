// WidgetBlueprintGeneratedClass WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C
// Size: 0x608 (Inherited: 0x5e8)
struct UWBP_Screen_Landing_Base_C : UAresLandingScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	struct ULandingScreenViewModel* LandingViewModel; // 0x5f0(0x08)
	struct FMulticastInlineDelegate OnUpdateIsLandingNavigationEnabled; // 0x5f8(0x10)

	void MakeLandingViewModel(); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.MakeLandingViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreInitChanged(bool IsWaiting); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.PreInitChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPreInitializationEnded(); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.OnPreInitializationEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPreInitializationStart(); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.OnPreInitializationStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToLandingViewModel(bool ShouldBind); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.BindToLandingViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_Landing_Base(int32_t EntryPoint); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.ExecuteUbergraph_WBP_Screen_Landing_Base // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnUpdateIsLandingNavigationEnabled__DelegateSignature(bool IsEnabled); // Function WBP_Screen_Landing_Base.WBP_Screen_Landing_Base_C.OnUpdateIsLandingNavigationEnabled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

