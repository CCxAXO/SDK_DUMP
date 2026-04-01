// WidgetBlueprintGeneratedClass Esports_Dots.Esports_Dots_C
// Size: 0x408 (Inherited: 0x3e0)
struct UEsports_Dots_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Border; // 0x3e8(0x08)
	struct UImage* Fill; // 0x3f0(0x08)
	bool IsLive; // 0x3f8(0x01)
	bool IsPast; // 0x3f9(0x01)
	bool IsFutureEvent; // 0x3fa(0x01)
	enum class E2024VCTEvent event; // 0x3fb(0x01)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x400(0x08)

	void BindToOrUnbindFromViewModel(struct UEsportsEventViewModel* ViewModel, bool ShouldBind); // Function Esports_Dots.Esports_Dots_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleDot(); // Function Esports_Dots.Esports_Dots_C.StyleDot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeStatus(enum class EEsportsMatchStatus Status); // Function Esports_Dots.Esports_Dots_C.ChangeStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Dot Opacity(); // Function Esports_Dots.Esports_Dots_C.Dot Opacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Dot Color(); // Function Esports_Dots.Esports_Dots_C.Dot Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Dot Visibility(); // Function Esports_Dots.Esports_Dots_C.Dot Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Esports_Dots.Esports_Dots_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function Esports_Dots.Esports_Dots_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function Esports_Dots.Esports_Dots_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Esports_Dots(int32_t EntryPoint); // Function Esports_Dots.Esports_Dots_C.ExecuteUbergraph_Esports_Dots // (Final|UbergraphFunction) // @ game+0x1b42740
};

