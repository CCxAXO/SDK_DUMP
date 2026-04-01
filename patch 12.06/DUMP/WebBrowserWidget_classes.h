// Class WebBrowserWidget.WebBrowser
// Size: 0x220 (Inherited: 0x1b8)
struct UWebBrowser : UWidget {
	struct FMulticastInlineDelegate OnUrlChanged; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnConsoleMessage; // 0x1d8(0x10)
	struct FMulticastInlineDelegate OnLoadError; // 0x1e8(0x10)
	struct FString InitialURL; // 0x1f8(0x10)
	bool bSupportsTransparency; // 0x208(0x01)
	char pad_209[0x17]; // 0x209(0x17)

	void OnUrlChanged__DelegateSignature(struct FText& Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1b42740
	void OnLoadError__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnLoadError__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1b42740
	void OnConsoleMessage__DelegateSignature(struct FString Message, struct FString Source, int32_t Line); // DelegateFunction WebBrowserWidget.WebBrowser.OnConsoleMessage__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1b42740
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1b42740
	void LoadURL(struct FString NewUrl); // Function WebBrowserWidget.WebBrowser.LoadURL // (Final|Native|Public|BlueprintCallable) // @ game+0x71ef530
	void LoadString(struct FString Contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString // (Final|Native|Public|BlueprintCallable) // @ game+0x71ef2a0
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x71eefb0
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x71ef0b0
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // (Final|Native|Public|BlueprintCallable) // @ game+0x71ef140
	void BindUObject(struct FString Name, struct UObject* Object, bool bIsPermanent); // Function WebBrowserWidget.WebBrowser.BindUObject // (Final|Native|Public|BlueprintCallable) // @ game+0x71eed20
};

// Class WebBrowserWidget.WebBrowserAssetManager
// Size: 0x90 (Inherited: 0x30)
struct UWebBrowserAssetManager : UObject {
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x30(0x30)
	char pad_60[0x30]; // 0x60(0x30)
};

