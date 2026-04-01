// WidgetBlueprintGeneratedClass FadeoutWidget.FadeoutWidget_C
// Size: 0x390 (Inherited: 0x318)
struct UFadeoutWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* ContentToFade; // 0x320(0x08)
	double FadeInRate; // 0x328(0x08)
	double FadeOutRate; // 0x330(0x08)
	double InitialOpacity; // 0x338(0x08)
	struct FName RTPCValueName; // 0x340(0x0c)
	char pad_34C[0x4]; // 0x34c(0x04)
	double CurrentOpacity; // 0x350(0x08)
	bool ShouldFadeOut; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	struct FName NoneName; // 0x35c(0x0c)
	bool FadeComplete; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FMulticastInlineDelegate FadeInCompleted; // 0x370(0x10)
	struct FMulticastInlineDelegate FadeOutCompleted; // 0x380(0x10)

	void ResetFade(); // Function FadeoutWidget.FadeoutWidget_C.ResetFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FadeIn(); // Function FadeoutWidget.FadeoutWidget_C.FadeIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FadeOut(); // Function FadeoutWidget.FadeoutWidget_C.FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function FadeoutWidget.FadeoutWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FadeoutWidget(int32_t EntryPoint); // Function FadeoutWidget.FadeoutWidget_C.ExecuteUbergraph_FadeoutWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void FadeOutCompleted__DelegateSignature(); // Function FadeoutWidget.FadeoutWidget_C.FadeOutCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FadeInCompleted__DelegateSignature(); // Function FadeoutWidget.FadeoutWidget_C.FadeInCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

