// WidgetBlueprintGeneratedClass WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C
// Size: 0x1b20 (Inherited: 0x1ae0)
struct UWBP_Panel_AbstractBTEBanner_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UBTEViewModel* BTE_VM; // 0x1ae8(0x08)
	struct UTexture2D* IconCompleted; // 0x1af0(0x08)
	struct UTexture2D* IconLocked; // 0x1af8(0x08)
	struct FVector2D IconSize; // 0x1b00(0x10)
	struct UTexture2D* SeparatorCompleted; // 0x1b10(0x08)
	struct UTexture2D* SeparatorLocked; // 0x1b18(0x08)

	void CREATEDELEGATE_PROXYFUNCTION_1(struct FText& NewValue); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.CREATEDELEGATE_PROXYFUNCTION_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle On Has Valid Data Changed(bool NewValue); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.Handle On Has Valid Data Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle On Enabled Changed(bool Is Enabled); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.Handle On Enabled Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle On Display Name All Caps Changed(struct FText DisplayNameAllCaps); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.Handle On Display Name All Caps Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init View Models(); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.Init View Models // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind Events(bool Bind); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_AbstractBTEBanner(int32_t EntryPoint); // Function WBP_Panel_AbstractBTEBanner.WBP_Panel_AbstractBTEBanner_C.ExecuteUbergraph_WBP_Panel_AbstractBTEBanner // (Final|UbergraphFunction) // @ game+0x1b42740
};

