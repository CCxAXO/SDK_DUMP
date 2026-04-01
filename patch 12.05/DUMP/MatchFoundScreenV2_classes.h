// WidgetBlueprintGeneratedClass MatchFoundScreenV2.MatchFoundScreenV2_C
// Size: 0x3f8 (Inherited: 0x31c)
struct UMatchFoundScreenV2_C : UMatchFoundScreen_Base_C {
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Glow; // 0x328(0x08)
	struct UImage* Arrow; // 0x330(0x08)
	struct UImage* BG; // 0x338(0x08)
	struct UImage* Box_Mint_Accent_2; // 0x340(0x08)
	struct UImage* Box_Mint_Accent_3; // 0x348(0x08)
	struct UImage* BoxLeft_Mint_2; // 0x350(0x08)
	struct UImage* BoxLeft_Red_2; // 0x358(0x08)
	struct UImage* BoxRight_Mint_3; // 0x360(0x08)
	struct UImage* BoxRight_Red_3; // 0x368(0x08)
	struct UTextBlock* CountdownText; // 0x370(0x08)
	struct UImage* CounterGlow; // 0x378(0x08)
	struct UImage* DecoL01; // 0x380(0x08)
	struct UImage* DecoL02; // 0x388(0x08)
	struct UImage* DecoR01; // 0x390(0x08)
	struct UImage* DecoR02; // 0x398(0x08)
	struct UFourCornerDeco_C* FourCornerDeco; // 0x3a0(0x08)
	struct UImage* GlowRectangle; // 0x3a8(0x08)
	struct UTechDeco_C* TechDeco; // 0x3b0(0x08)
	struct URetainerBox* TextMaterial; // 0x3b8(0x08)
	struct FTimerHandle TimerHandle; // 0x3c0(0x08)
	struct UAkAudioEvent* StartCountdownSound; // 0x3c8(0x08)
	struct UAkAudioEvent* CountSound; // 0x3d0(0x08)
	struct UAkAudioEvent* FinishCountdownSound; // 0x3d8(0x08)
	struct UAkAudioEvent* NewVar_1; // 0x3e0(0x08)
	struct UMaterialInstanceDynamic* LineWipe01; // 0x3e8(0x08)
	struct UMaterialInstanceDynamic* LineWipe02; // 0x3f0(0x08)

	void SequenceEvent__ENTRYPOINTMatchFoundScreenV2(); // Function MatchFoundScreenV2.MatchFoundScreenV2_C.SequenceEvent__ENTRYPOINTMatchFoundScreenV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTimerText(); // Function MatchFoundScreenV2.MatchFoundScreenV2_C.UpdateTimerText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SFX(); // Function MatchFoundScreenV2.MatchFoundScreenV2_C.SFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MatchFoundScreenV2.MatchFoundScreenV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MatchFoundScreenV2.MatchFoundScreenV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnEventTimer(); // Function MatchFoundScreenV2.MatchFoundScreenV2_C.OnEventTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchFoundScreenV2(int32_t EntryPoint); // Function MatchFoundScreenV2.MatchFoundScreenV2_C.ExecuteUbergraph_MatchFoundScreenV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

