// WidgetBlueprintGeneratedClass WBP_Panel_CurrencyAmount.WBP_Panel_CurrencyAmount_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_CurrencyAmount_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* ButtonIcon; // 0x3e8(0x08)
	struct UCommonTextBlock* ButtonText; // 0x3f0(0x08)
	struct UCurrencyViewModel_C* Currency VM; // 0x3f8(0x08)

	void Bind Events(bool Bind); // Function WBP_Panel_CurrencyAmount.WBP_Panel_CurrencyAmount_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init View Models(); // Function WBP_Panel_CurrencyAmount.WBP_Panel_CurrencyAmount_C.Init View Models // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle on Currency Text Updated(struct FText Amount); // Function WBP_Panel_CurrencyAmount.WBP_Panel_CurrencyAmount_C.Handle on Currency Text Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle on Currency Image Updated(struct UTexture* Image); // Function WBP_Panel_CurrencyAmount.WBP_Panel_CurrencyAmount_C.Handle on Currency Image Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_CurrencyAmount.WBP_Panel_CurrencyAmount_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_CurrencyAmount.WBP_Panel_CurrencyAmount_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_CurrencyAmount(int32_t EntryPoint); // Function WBP_Panel_CurrencyAmount.WBP_Panel_CurrencyAmount_C.ExecuteUbergraph_WBP_Panel_CurrencyAmount // (Final|UbergraphFunction) // @ game+0x1b42740
};

